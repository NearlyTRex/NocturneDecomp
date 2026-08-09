#!/usr/bin/env python3
"""Transfer function signatures into a Ghidra program, from one of two sources.

    --source namecore   (default)  bulk, heuristic, unsignatured targets only
    --source ledger                curated, hand-verified, may overwrite

Both sources build the same plan shape and share one apply stage, which diffs
every item against the *live* Ghidra state and writes only the fields that
actually differ. Re-running is therefore a no-op, and the report tells you
field by field what would change.

---------------------------------------------------------------------------
namecore -- the bulk pass
---------------------------------------------------------------------------

The names came across; the signatures largely did not. An unsignatured function
still decompiles -- Ghidra infers a receiver, and for a derived-class method it
habitually infers the base class it can see -- so the output looks confident and
reads as `param_1[2].create_event + 0x2c`. That is indistinguishable from a
struct bug until you check the signature, which is how it costs an afternoon.

Only functions that currently have NO signature are touched, and names are never
changed. A wrong signature is a different problem and is left alone: this pass
cannot tell a right signature from a wrong one, so it cannot make anything worse
than the undefined state it found.

Pairing is by name core (`<Class>_<method>`), which is the part of the name that
survives the transfer -- the translation unit and the address suffix belong to
whichever binary the function lives in. Cores that are ambiguous on either side
are dropped rather than guessed at.

---------------------------------------------------------------------------
ledger -- the curated pass
---------------------------------------------------------------------------

A transfer file is a batch of entries verified against the target binary's own
assembly during an analysis session. It is DISPOSABLE machine input: written,
applied, deleted. It is not a record of anything -- the decisions live in the
session's analysis and in the Ghidra database. The format, the guards, and the
workflow are specified in prompts/disassembly_prompt.md ("Transfer Files"),
which is the permanent artifact; pass any path with --ledger.

Because each entry carries evidence rather than a heuristic, this source is
allowed to do what the bulk pass must not:

  * rename functions
  * overwrite an existing signature that is wrong
  * fix `Convention: unknown`
  * set varargs, which no heuristic can infer

Two guards keep a stale ledger from clobbering newer work. `expect.name` must
match what is in Ghidra now -- unless it already matches the desired name, which
is simply the already-applied case. `expect.range` must match the function's
body extent, so a boundary-fix pass that reshaped the function invalidates the
entry instead of silently retyping a different body. Either mismatch skips the
entry and reports it; neither is overridden by --apply.

Two independent sources must agree on the receiver before anything is written:

  name    `<Class>_<method>` asserts the receiver is `<Class> *`
  vtable  a function occupying a vtable slot is dispatched through an object,
          so it *is* a virtual method of the class owning that table

Where both are available and disagree, the pair is skipped for review. Where
only the name is available, the class must still resolve to a real type and
nocedit's own first parameter must match it -- otherwise nocedit is asserting
something its own name contradicts, and copying that forward just moves the bug.

Parameter storage is deliberately NOT copied. The two builds lay out stack
frames differently often enough that transplanting storage produces a signature
Ghidra will not apply cleanly; types and names transfer, and the decompiler
recomputes storage from the target's own convention.

Nothing is written without --apply. Headless mutations persist only via
DomainFile.save() -- project.save() alone silently discards them.

Usage:
    apply_sibling_signatures.py                            # bulk, report only
    apply_sibling_signatures.py --show 40
    apply_sibling_signatures.py --apply

    apply_sibling_signatures.py --source ledger --lint     # no Ghidra needed
    apply_sibling_signatures.py --source ledger            # diff vs live Ghidra
    apply_sibling_signatures.py --source ledger --apply
    apply_sibling_signatures.py --source ledger --only engine_2d
"""

import argparse
import glob
import json
import os
import re
import sys
from collections import Counter, defaultdict

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(THIS_DIR))
ADDR_SUFFIX_RE = re.compile(r"_FUN_[0-9a-fA-F]{6,}$")
TU_RE = re.compile(r"^([A-Za-z0-9_]+\.(?:cpp|c|h|asm))_")


def annotations_dir(program):
    return os.path.join(REPO, "annotations", program)


def load_functions(program):
    out = []
    for path in sorted(glob.glob(os.path.join(
            annotations_dir(program), "functions", "functions_bucket_*.json"))):
        with open(path) as fh:
            out += [r for r in json.load(fh) if isinstance(r, dict) and r.get("name")]
    if not out:
        sys.exit(f"ERROR: no function annotations under {annotations_dir(program)}")
    return out


def load_type_names(program):
    with open(os.path.join(annotations_dir(program),
                           "data_types", "data_types.json")) as fh:
        data = json.load(fh)
    names = set()
    for kind in ("structs", "unions", "typedefs", "enums"):
        for entry in data.get(kind, []):
            if entry.get("name"):
                names.add(entry["name"])
    return names


def load_vtable_members(program):
    """Addresses occupying a vtable slot.

    Membership proves a receiver is *required* -- a vtable slot is dispatched
    through an object, so the function is a virtual method and takes `this`.
    It does NOT identify the class: a derived class's table is mostly inherited
    base-class slots, and any given method appears in the tables of its own
    class and of every descendant. So `CAmmoBox_getActorType` legitimately sits
    in a table dominated by `CDemonActor_*` entries. The name is what names the
    class; the vtable only raises the certainty that one is needed.
    """
    members = set()
    for path in sorted(glob.glob(os.path.join(
            annotations_dir(program), "vtables", "vtables_bucket_*.json"))):
        with open(path) as fh:
            for table in json.load(fh):
                if not isinstance(table, dict):
                    continue
                for slot in table.get("functions") or []:
                    addr = (slot or {}).get("func_addr")
                    if addr:
                        members.add(addr.lower())
    return members


def core_of(name):
    if not name:
        return None
    m = TU_RE.match(name)
    rest = name[len(m.group(1)) + 1:] if m else name
    if rest.startswith("thunk_"):
        rest = rest[len("thunk_"):]
    rest = ADDR_SUFFIX_RE.sub("", rest)
    if not rest or rest.startswith("FUN_"):
        return None
    return rest


def split_class_method(core, type_names):
    if not core:
        return None, None
    best = None
    for i, ch in enumerate(core):
        if ch == "_" and core[:i] in type_names:
            best = i
    if best is None:
        return None, None
    return core[:best], core[best + 1:]


def params_of(func):
    return [p for p in ((func.get("vars") or {}).get("params") or [])
            if isinstance(p, dict)]


def has_signature(func):
    ret = str(func.get("ret") or "")
    return bool(params_of(func)) or not (ret.startswith("undefined") or ret == "")


def strip_ptr(t):
    return (t or "").replace("*", "").strip()


FPU_CONV_PREFIX = "__fpu"


def needs_custom_storage(func):
    """Storage this pass must not try to derive.

    Two cases, and only two:

      * an FPU convention -- returns on the x87 stack, which Ghidra has no rule
        to allocate. Handing it DYNAMIC_STORAGE throws *after* setting the
        custom-storage flag, leaving the function with a flag and no storage;
        `getReturnType()` then raises and aborts the whole annotation export.
      * the source carries genuine custom variable storage -- somebody assigned
        it by hand because allocation by rule was wrong. transfer_custom_storage.py
        copies that across; this pass must not overwrite it.

    Deliberately NOT included: a parameter whose storage names a register.
    apply_sibling_annotations.py treats that as a red flag because it transfers
    storage verbatim, but the Watcom register-passing conventions
    (`__stack2_esi`, `__stack_esi`, `__edi_esi_ebx`, ...) put parameters in
    registers *by rule*, with `custom_storage` false. This pass copies types
    and names only and lets Ghidra allocate from the convention, which is
    exactly right for them. Treating those as dangerous excludes 102 functions
    in nocedit that transfer perfectly well -- and transfer_custom_storage.py
    will not pick them up either, because their source has no custom storage,
    so they would simply be left undone.
    """
    if str(func.get("conv") or "").startswith(FPU_CONV_PREFIX):
        return True
    if str(func.get("ret") or "").startswith("float10"):
        return True
    return bool(func.get("custom_storage"))


def index_by_core(program):
    index, dupes = {}, set()
    for func in load_functions(program):
        core = core_of(func["name"])
        if not core:
            continue
        if core in index:
            dupes.add(core)
        index[core] = func
    for core in dupes:
        index.pop(core, None)
    return index, dupes


def build_plan_namecore(src_prog, dst_prog):
    src, src_dupes = index_by_core(src_prog)
    dst, dst_dupes = index_by_core(dst_prog)
    type_names = load_type_names(dst_prog)
    vtable_members = load_vtable_members(dst_prog)

    plan, skipped = [], Counter()
    for core in sorted(set(src) & set(dst)):
        a, b = src[core], dst[core]
        if has_signature(b):
            skipped["already_signed"] += 1
            continue
        if not has_signature(a):
            skipped["source_unsigned"] += 1
            continue
        if b.get("thunk"):
            skipped["thunk"] += 1          # needs an override, not a copy
            continue
        if needs_custom_storage(a):
            # Watcom FPU conventions return in ST0/ST1 and require
            # CUSTOM_STORAGE. Handing such a function DYNAMIC_STORAGE throws
            # *after* the storage flag is set, leaving it with a custom-storage
            # flag and no storage -- getReturnType() then raises
            # IndexOutOfBounds and aborts the whole annotation export. Copying
            # the storage across is a separate job; refuse rather than damage.
            skipped["needs_custom_storage"] += 1
            continue

        sp = params_of(a)
        name_cls, _ = split_class_method(core, type_names)
        virtual = str(b.get("addr", "")).lower() in vtable_members

        if virtual and not sp:
            # In a vtable, so it is dispatched through an object and must take
            # `this` -- nocedit's own signature is wrong. Do not propagate it.
            skipped["source_virtual_without_this"] += 1
            continue
        if name_cls:
            if not sp:
                skipped["source_has_no_receiver"] += 1
                continue
            if strip_ptr(sp[0].get("type")) != name_cls:
                # nocedit's own signature contradicts its own name; copying it
                # forward would just relocate that inconsistency.
                skipped["source_receiver_mismatch"] += 1
                continue

        plan.append({
            "core": core,
            "origin": "namecore",
            "src_name": a.get("name"), "dst_name": b.get("name"),
            "addr": b.get("addr"),
            "ret": a.get("ret"), "conv": a.get("conv"),
            "params": [{"name": p.get("name"), "type": p.get("type")} for p in sp],
            # The heuristic pass never renames and never asserts varargs: it has
            # no evidence for either. None means "leave whatever is there".
            "name": None,
            "varargs": None,
            "expect_name": None,
            "expect_range": None,
            "basis": "sibling",
            "confidence": None,
            "receiver": name_cls,
            "corroborated": bool(name_cls and virtual),
        })
    return plan, skipped, src_dupes, dst_dupes


# ---- ledger source ---------------------------------------------------------
LEDGER_PATH = os.path.join(REPO, "annotations", "verified_transfers.json")

REQUIRED_ENTRY_KEYS = ("program", "address", "ret", "conv", "params")

# How an entry knows what it knows.
#
#   sibling   the answer already existed in the other binary and was verified
#             against this one's assembly. The name is a transfer.
#   derived   no counterpart exists -- the function is unique to this build, or
#             the sibling's version is a stub carrying no evidence. The name was
#             reasoned out from this binary's own assembly: assert strings, call
#             graph, constants. It is a proposal, not a transfer.
#
# The distinction matters because the two fail differently. A wrong transfer
# means the pairing was wrong and the whole entry is suspect. A wrong derived
# name is just a name -- the signature beside it can still be perfectly good.
# Keeping them separable lets you apply the transfers and hold the proposals.
BASES = ("sibling", "derived")
CONF_RANK = {"high": 3, "medium": 2, "low": 1}


def basis_of(entry):
    """Explicit `basis`, else inferred from whether a source binary is named."""
    b = entry.get("basis")
    if b:
        return b
    return "sibling" if (entry.get("source") or {}).get("program") else "derived"


def load_ledger(path):
    if not os.path.exists(path):
        sys.exit(f"ERROR: no ledger at {path}")
    with open(path) as fh:
        data = json.load(fh)
    if data.get("schema") != 1:
        sys.exit(f"ERROR: {path}: unsupported schema {data.get('schema')!r}")
    entries = data.get("entries")
    if not isinstance(entries, list):
        sys.exit(f"ERROR: {path}: 'entries' must be a list")
    return entries


def lint_ledger(entries, path):
    """Structural checks that do not need Ghidra, so entries can be validated
    as they are written rather than at the end of a batch."""
    problems, seen = [], {}
    for i, e in enumerate(entries):
        where = f"entry[{i}]"
        if not isinstance(e, dict):
            problems.append(f"{where}: not an object")
            continue
        addr = str(e.get("address") or "")
        where = f"{where} {e.get('program')}:{addr}"
        for key in REQUIRED_ENTRY_KEYS:
            if e.get(key) is None:
                problems.append(f"{where}: missing required key {key!r}")
        if addr and not re.fullmatch(r"[0-9a-f]{6,16}", addr):
            problems.append(f"{where}: address must be lowercase hex, no 0x")
        key = (e.get("program"), addr.lower())
        if key in seen:
            problems.append(f"{where}: duplicate of entry[{seen[key]}]")
        seen[key] = i
        for j, p in enumerate(e.get("params") or []):
            if not isinstance(p, dict) or not p.get("name") or not p.get("type"):
                problems.append(f"{where}: params[{j}] needs both 'name' and 'type'")
                continue
            # Auto-parameters are Ghidra's, not the prototype's. They show up in
            # exported signature strings, but getParameters() excludes them and
            # FORMAL_PARAMS cannot set them, so an entry carrying one never
            # converges: every run reports the same diff and re-applies it.
            if p["name"] == "__return_storage_ptr__" or p["name"].startswith("__auto"):
                problems.append(f"{where}: params[{j}] is the Ghidra auto-parameter "
                                f"{p['name']!r}, not a formal parameter -- drop it")
        # The name is written verbatim, so a name copied wholesale from the
        # sibling would stamp the sibling's address onto a nocturne function --
        # silently, and in the one field that is supposed to identify it.
        nm = e.get("name") or ""
        if nm:
            m = re.search(r"_FUN_([0-9a-fA-F]+)$", nm)
            sib = str((e.get("source") or {}).get("address") or "").lower()
            if not m:
                problems.append(f"{where}: name {nm!r} has no _FUN_<address> suffix")
            elif m.group(1).lower() != addr.lower():
                hint = "  <- that is the sibling's address" if m.group(1).lower() == sib else ""
                problems.append(f"{where}: name suffix _FUN_{m.group(1)} does not match"
                                f" address {addr}{hint}")

        src = e.get("source") or {}
        if not src.get("note"):
            problems.append(f"{where}: source.note is required -- an entry without"
                            " stated evidence is a guess wearing a ledger's clothes")
        if e.get("basis") is not None and e["basis"] not in BASES:
            problems.append(f"{where}: basis must be one of {BASES}, got {e['basis']!r}")
        basis = basis_of(e)
        conf = src.get("confidence")
        if conf is not None and conf not in CONF_RANK:
            problems.append(f"{where}: source.confidence must be one of"
                            f" {tuple(CONF_RANK)}, got {conf!r}")
        if basis == "sibling":
            # A transfer has to say what it transferred FROM, or it is really a
            # derived name wearing a transfer's clothes and cannot be re-checked.
            for k in ("program", "address", "name"):
                if not src.get(k):
                    problems.append(f"{where}: basis 'sibling' requires source.{k}")
        else:
            # Half-filled provenance is worse than none: it reads as a verified
            # transfer at a glance while nothing actually corroborates the name.
            present = [k for k in ("program", "address", "name") if src.get(k)]
            if present:
                problems.append(f"{where}: basis 'derived' must not set source."
                                f"{'/'.join(present)} -- a derived name has no"
                                " counterpart to transfer from")
            if conf is None:
                problems.append(f"{where}: basis 'derived' requires source.confidence"
                                " -- a proposed name must state how sure it is")
        exp = e.get("expect") or {}
        rng = exp.get("range")
        if rng is not None and (not isinstance(rng, list) or len(rng) != 2):
            problems.append(f"{where}: expect.range must be [start, end]")
    print(f"lint {path}: {len(entries)} entries, {len(problems)} problem(s)")
    for p in problems:
        print(f"  {p}")
    by_prog = Counter(e.get("program") for e in entries if isinstance(e, dict))
    for prog, n in sorted(by_prog.items()):
        print(f"  {prog}: {n}")
    return 1 if problems else 0


def build_plan_ledger(entries, program, only=None, basis=None, min_conf=None):
    plan, skipped = [], Counter()
    floor = CONF_RANK.get(min_conf, 0)
    for e in entries:
        if e.get("program") != program:
            skipped["other_program"] += 1
            continue
        if only and only not in (e.get("name") or "") and only not in e.get("address", ""):
            skipped["filtered_out"] += 1
            continue
        b = basis_of(e)
        if basis and b != basis:
            skipped[f"basis_{b}"] += 1
            continue
        conf = (e.get("source") or {}).get("confidence")
        if floor and CONF_RANK.get(conf, 0) < floor:
            skipped[f"below_confidence({conf})"] += 1
            continue
        exp = e.get("expect") or {}
        plan.append({
            "core": e.get("name") or e["address"],
            "origin": "ledger",
            "basis": b,
            "confidence": conf,
            "src_name": (e.get("source") or {}).get("name"),
            "dst_name": e.get("name") or f"FUN_{e['address']}",
            "addr": e["address"],
            "ret": e["ret"], "conv": e["conv"],
            "params": [{"name": p["name"], "type": p["type"]} for p in e["params"]],
            "name": e.get("name"),
            "varargs": e.get("varargs"),
            "expect_name": exp.get("name"),
            "expect_range": tuple(exp["range"]) if exp.get("range") else None,
            "receiver": None,
            "corroborated": False,
            "note": (e.get("source") or {}).get("note"),
        })
    plan.sort(key=lambda p: int(p["addr"], 16))
    return plan, skipped


def report(plan, skipped, src_dupes, dst_dupes, show):
    print("=" * 78)
    print("SIGNATURE TRANSFER PLAN  (nocedit.exe -> nocturne.exe)")
    print("=" * 78)
    print(f"  to apply                    : {len(plan)}")
    corr = sum(1 for p in plan if p["corroborated"])
    print(f"    receiver corroborated     : {corr}  (name AND vtable agree)")
    print(f"    name only                 : {len(plan) - corr}")
    print("  skipped:")
    for reason, n in sorted(skipped.items(), key=lambda kv: -kv[1]):
        print(f"    {reason:26}: {n}")
    print(f"    ambiguous cores           : {len(src_dupes)} src, {len(dst_dupes)} dst")
    print()
    by_tu = Counter(TU_RE.match(p["dst_name"]).group(1)
                    if TU_RE.match(p["dst_name"]) else "?" for p in plan)
    print("  by translation unit (top 10):")
    for tu, n in by_tu.most_common(10):
        print(f"    {tu:26} {n}")
    print()
    print(f"  examples ({min(show, len(plan))} of {len(plan)}):")
    for p in plan[:show]:
        sig = ", ".join(f"{q['type']} {q['name']}" for q in p["params"])
        print(f"    {p['dst_name']}")
        print(f"        {p['ret']} ({sig})   [{p['conv']}]"
              f"{'  +vtable' if p['corroborated'] else ''}")


def build_revert_list(src_prog, dst_prog):
    """Functions this tool signed that the custom-storage gate should have refused.

    An earlier run used a weaker gate and let register-pinned prototypes through
    with DYNAMIC_STORAGE. Those did not throw, but their storage was allocated
    by rule when the source had pinned it by hand -- so the parameters may sit
    in the wrong places. Reverting them to unsignatured restores exactly the
    state they were in before, and hands them to transfer_custom_storage.py,
    which copies the storage instead of re-deriving it.
    """
    src, _ = index_by_core(src_prog)
    dst, _ = index_by_core(dst_prog)
    out = []
    for core in sorted(set(src) & set(dst)):
        a, b = src[core], dst[core]
        if not needs_custom_storage(a):
            continue
        if not has_signature(b):
            continue                      # already unsignatured, nothing to do
        if b.get("thunk"):
            continue
        if b.get("custom_storage"):
            # Already carries hand-assigned storage, so a previous pass did
            # this properly (transfer_custom_storage.py). Not ours, leave it.
            continue
        out.append({"core": core, "addr": b.get("addr"), "dst_name": b.get("name"),
                    "conv": a.get("conv"), "src_ret": a.get("ret")})
    return out


def revert(args):
    items = build_revert_list(args.src, args.dst)
    print("=" * 78)
    print("REVERT custom-storage prototypes to unsignatured")
    print("=" * 78)
    print(f"  to revert: {len(items)}")
    by_conv = Counter(i["conv"] for i in items)
    print(f"  by convention: {dict(by_conv)}")
    for i in items[:10]:
        print(f"    {i['addr']}  {i['core']}  [{i['conv']}]")
    if not args.apply:
        print("\n(report only -- re-run with --apply to write)")
        return 0

    import pyghidra
    pyghidra.start()
    from ghidra.program.model.data import Undefined1DataType
    from ghidra.program.model.listing import ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor
    from java.util import ArrayList

    project = pyghidra.open_project(args.project_dir, args.project_name)
    done = failed = 0
    try:
        with pyghidra.program_context(project, "/" + args.dst) as program:
            af = program.getAddressFactory().getDefaultAddressSpace()
            fm = program.getFunctionManager()
            txid = program.startTransaction("revert custom-storage prototypes")
            try:
                for item in items:
                    f = fm.getFunctionAt(af.getAddress(item["addr"]))
                    if f is None:
                        failed += 1
                        continue
                    try:
                        f.setCustomVariableStorage(False)
                        f.updateFunction(
                            None,
                            ReturnParameterImpl(Undefined1DataType.dataType, program),
                            ArrayList(),
                            f.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                            True, SourceType.DEFAULT)
                        f.getReturnType()          # must read back
                        done += 1
                    except Exception as exc:
                        print(f"  FAILED {item['dst_name']}: {exc}")
                        failed += 1
            finally:
                program.endTransaction(txid, True)
            program.getDomainFile().save(ConsoleTaskMonitor())
    finally:
        project.close()
    print(f"\nreverted {done}, failed {failed}")
    print("Verify in a fresh process: repair_broken_signatures.py")
    sys.stdout.flush()          # os._exit skips flushing; see run_ghidra
    sys.stderr.flush()
    os._exit(0 if failed == 0 else 1)


# ---- live diff + apply -----------------------------------------------------
ACTIONS = ["APPLY", "ALREADY", "STALE", "DRIFT", "BLOCKED", "NO-FUNCTION", "FAILED"]


def make_resolver(program):
    """Name -> DataType, honouring any depth of pointer. Cached: the ledger and
    the bulk plan both repeat a handful of types thousands of times."""
    from ghidra.program.model.data import PointerDataType
    from java.util import ArrayList
    dtm = program.getDataTypeManager()
    cache = {}

    def resolve(type_name):
        key = (type_name or "").strip()
        if key in cache:
            return cache[key]
        base, depth = key, 0
        while base.endswith("*"):
            base = base[:-1].strip()
            depth += 1
        found = dtm.getDataType("/" + base)
        if found is None:
            # Not at the root category -- search every category. The list has
            # to be a java.util.List for the JNI overload.
            matches = ArrayList()
            dtm.findDataTypes(base, matches)
            found = matches.get(0) if not matches.isEmpty() else None
        if found is not None:
            for _ in range(depth):
                found = PointerDataType(found, dtm)
        cache[key] = found
        return found

    return resolve


def diff_live(item, func, resolve):
    """Compare a plan item against the live function.

    Returns (diffs, blocked_reason). `diffs` is a list of (field, current,
    desired) and is empty when the function already says what the item wants.
    A field the item leaves as None is not compared and not written -- that is
    how the bulk pass declines to rename or to assert varargs.
    """
    missing, pdts = [], []
    ret_dt = resolve(item["ret"])
    if ret_dt is None:
        missing.append(item["ret"])
    for p in item["params"]:
        dt = resolve(p["type"])
        if dt is None:
            missing.append(p["type"])
        pdts.append(dt)
    if missing:
        return None, "unresolved type(s): " + ", ".join(sorted(set(missing)))
    item["_ret_dt"], item["_pdts"] = ret_dt, pdts

    diffs = []
    cur_name = str(func.getName())
    if item["name"] and cur_name != item["name"]:
        diffs.append(("name", cur_name, item["name"]))

    cur_conv = str(func.getCallingConventionName() or "")
    if item["conv"] and cur_conv != item["conv"]:
        diffs.append(("conv", cur_conv, item["conv"]))

    try:
        cur_ret = func.getReturnType()
    except Exception as exc:
        # A function left with a custom-storage flag and no storage raises here
        # and would abort the annotation export too. Refuse; repair separately.
        return None, f"getReturnType() raised ({exc}) -- broken storage"
    if not ret_dt.isEquivalent(cur_ret):
        diffs.append(("ret", str(cur_ret.getDisplayName()), item["ret"]))

    # Auto-params (a convention's implicit `this`) are not formal parameters and
    # are not what updateFunction(..., FORMAL_PARAMS) writes, so comparing them
    # would report a permanent phantom diff.
    cur_params = [p for p in func.getParameters() if not p.isAutoParameter()]
    if len(cur_params) != len(item["params"]):
        diffs.append(("params", f"{len(cur_params)} param(s)",
                      f"{len(item['params'])} param(s)"))
    else:
        for idx, (cp, want, dt) in enumerate(zip(cur_params, item["params"], pdts)):
            if str(cp.getName()) != want["name"]:
                diffs.append((f"param{idx}.name", str(cp.getName()), want["name"]))
            if not dt.isEquivalent(cp.getDataType()):
                diffs.append((f"param{idx}.type",
                              str(cp.getDataType().getDisplayName()), want["type"]))

    if item["varargs"] is not None and bool(func.hasVarArgs()) != bool(item["varargs"]):
        diffs.append(("varargs", str(bool(func.hasVarArgs())), str(bool(item["varargs"]))))

    return diffs, None


def check_guards(item, func, ignore_drift):
    """Ledger staleness guards. Returns (action, detail) or (None, None)."""
    cur_name = str(func.getName())
    if item["expect_name"] and cur_name not in (item["expect_name"], item["name"] or ""):
        return "STALE", (f"is named {cur_name!r}, ledger expected "
                         f"{item['expect_name']!r} -- someone else changed it")
    if item["expect_range"] and not ignore_drift:
        want = tuple(a.lower() for a in item["expect_range"])
        body = func.getBody()
        got = (str(body.getMinAddress()).lower(), str(body.getMaxAddress()).lower())
        if got != want:
            return "DRIFT", (f"body is {got[0]}-{got[1]}, ledger recorded "
                             f"{want[0]}-{want[1]} -- boundaries moved")
    return None, None


def write_item(program, item, func):
    """Write only the fields that differ.

    If a name is all that changed, the signature is left completely untouched --
    re-deriving it would silently discard any hand-tuning it has since acquired.
    """
    from ghidra.program.model.listing import ParameterImpl, ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from java.util import ArrayList

    src = SourceType.USER_DEFINED
    fields = {d[0] for d in item["_diffs"]}

    if fields - {"name", "varargs"}:
        # updateFunction's params argument is a java.util.List; a Python list
        # finds no matching JNI overload.
        params = ArrayList()
        for p, dt in zip(item["params"], item["_pdts"]):
            params.add(ParameterImpl(p["name"], dt, program))
        func.updateFunction(item["conv"],
                            ReturnParameterImpl(item["_ret_dt"], program),
                            params,
                            func.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                            True, src)
    if "varargs" in fields:
        func.setVarArgs(bool(item["varargs"]))
    if "name" in fields:
        func.setName(item["name"], src)


def run_ghidra(plan, args):
    """Diff every plan item against live Ghidra; write the differing ones under
    --apply. The diff runs either way, so a dry run reports exactly what would
    change rather than merely how many items are queued."""
    import pyghidra
    pyghidra.start()
    from ghidra.util.task import ConsoleTaskMonitor

    project = pyghidra.open_project(args.project_dir, args.project_name)
    counts, failures = Counter(), []
    try:
        with pyghidra.program_context(project, "/" + args.dst) as program:
            resolve = make_resolver(program)
            fm = program.getFunctionManager()
            af = program.getAddressFactory().getDefaultAddressSpace()

            for item in plan:
                func = fm.getFunctionAt(af.getAddress(item["addr"]))
                if func is None:
                    item["action"], item["detail"] = "NO-FUNCTION", "no function at address"
                    continue
                action, detail = check_guards(item, func, args.ignore_drift)
                if action:
                    item["action"], item["detail"] = action, detail
                    continue
                if func.hasCustomVariableStorage() and not args.allow_custom_storage:
                    item["action"] = "BLOCKED"
                    item["detail"] = ("has hand-assigned custom storage; "
                                      "DYNAMIC_STORAGE would discard it")
                    continue
                diffs, blocked = diff_live(item, func, resolve)
                if blocked:
                    item["action"], item["detail"] = "BLOCKED", blocked
                    continue
                item["_diffs"], item["_func"] = diffs, func
                item["action"] = "APPLY" if diffs else "ALREADY"
                item["detail"] = ""

            for item in plan:
                counts[item["action"]] += 1
            report_live(plan, counts, args)

            todo = [i for i in plan if i["action"] == "APPLY"]
            if not args.apply:
                print(f"\n(dry run -- re-run with --apply to write {len(todo)} change(s))")
                return 0 if not failures else 1
            if not todo:
                print("\nNothing to apply.")
                return 0

            txid = program.startTransaction("apply sibling signatures")
            applied = 0
            try:
                for item in todo:
                    try:
                        write_item(program, item, item["_func"])
                        applied += 1
                    except Exception as exc:
                        item["action"] = "FAILED"
                        failures.append((item["dst_name"], str(exc)))
            finally:
                program.endTransaction(txid, True)

            # Headless mutations persist only through the DomainFile.
            program.getDomainFile().save(ConsoleTaskMonitor())
            print(f"\napplied {applied}, failed {len(failures)}")
            for name, exc in failures:
                print(f"  FAILED {name}: {exc}")
    finally:
        project.close()

    print("Re-export and re-run audit_transferred_signatures.py to confirm.")
    # os._exit skips interpreter shutdown, which is what stops the JVM from
    # hanging the process -- but it also skips flushing, so an unflushed report
    # is lost entirely and the run looks like it produced nothing.
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(0 if not failures else 1)


def report_live(plan, counts, args):
    print()
    print("=" * 78)
    print(f"LIVE DIFF vs {args.dst}   (source: {args.source})")
    print("=" * 78)
    for action in ACTIONS:
        if counts[action]:
            print(f"  {action:12} {counts[action]}")

    for action in ("STALE", "DRIFT", "BLOCKED", "NO-FUNCTION"):
        rows = [i for i in plan if i["action"] == action]
        if not rows:
            continue
        print(f"\n  {action} -- not written:")
        for i in rows[:args.show]:
            print(f"    {i['addr']}  {i['dst_name']}")
            print(f"        {i['detail']}")
        if len(rows) > args.show:
            print(f"    ... and {len(rows) - args.show} more")

    todo = [i for i in plan if i["action"] == "APPLY"]
    if todo:
        by_basis = Counter(i.get("basis") or "?" for i in todo)
        breakdown = "  ".join(f"{k}={v}" for k, v in sorted(by_basis.items()))
        print(f"\n  APPLY -- {len(todo)} function(s) [{breakdown}], changed fields only:")
        for i in todo[:args.show]:
            tag = i.get("basis") or "?"
            conf = i.get("confidence")
            tag += f"/{conf}" if conf else ""
            print(f"    {i['addr']}  {i['dst_name']}   ({tag})")
            for field, cur, want in i["_diffs"]:
                print(f"        {field:14} {cur!r}  ->  {want!r}")
        if len(todo) > args.show:
            print(f"    ... and {len(todo) - args.show} more (raise --show)")


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--source", choices=("namecore", "ledger"), default="namecore",
                    help="namecore: heuristic bulk pass, unsignatured targets only. "
                         "ledger: hand-verified entries that may overwrite.")
    ap.add_argument("--ledger", default=LEDGER_PATH)
    ap.add_argument("--from", dest="src", default="nocedit.exe")
    ap.add_argument("--to", dest="dst", default="nocturne.exe")
    ap.add_argument("--project-dir", default=os.path.join(REPO, "projects"))
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--only", help="ledger: substring filter on name or address")
    ap.add_argument("--basis", choices=BASES,
                    help="ledger: apply only transfers from the sibling ('sibling') "
                         "or only names reasoned out from this binary ('derived'). "
                         "Default: both.")
    ap.add_argument("--min-confidence", choices=tuple(CONF_RANK),
                    help="ledger: skip entries below this source.confidence")
    ap.add_argument("--out", help="write the plan as JSON")
    ap.add_argument("--lint", action="store_true",
                    help="ledger: structural check only, no Ghidra")
    ap.add_argument("--no-ghidra", action="store_true",
                    help="stop after the offline plan report")
    ap.add_argument("--ignore-drift", action="store_true",
                    help="ledger: apply even where expect.range no longer matches")
    ap.add_argument("--allow-custom-storage", action="store_true",
                    help="do not skip functions carrying hand-assigned storage "
                         "(DYNAMIC_STORAGE will discard it -- almost never right)")
    ap.add_argument("--apply", action="store_true",
                    help="write the changes into the Ghidra project")
    ap.add_argument("--revert-custom-storage", action="store_true",
                    help="undo prototypes an earlier, weaker gate let through: "
                         "reset every register-pinned/FPU source's target back "
                         "to unsignatured so transfer_custom_storage.py can do "
                         "it properly")
    args = ap.parse_args()

    if args.revert_custom_storage:
        return revert(args)

    if args.source == "ledger":
        entries = load_ledger(args.ledger)
        if args.lint:
            return lint_ledger(entries, args.ledger)
        plan, skipped = build_plan_ledger(entries, args.dst, args.only,
                                          args.basis, args.min_confidence)
        print(f"ledger {args.ledger}: {len(plan)} entr(ies) for {args.dst}"
              + (f"  (skipped: {dict(skipped)})" if skipped else ""))
        if not plan:
            return 0
    else:
        if args.lint:
            sys.exit("ERROR: --lint applies to --source ledger")
        plan, skipped, src_dupes, dst_dupes = build_plan_namecore(args.src, args.dst)
        report(plan, skipped, src_dupes, dst_dupes, args.show)

    if args.out:
        with open(args.out, "w") as fh:
            json.dump([{k: v for k, v in p.items() if not k.startswith("_")}
                       for p in plan], fh, indent=1)
        print(f"\nwrote {args.out}")

    # The bulk pass keeps its fast offline report as the default; the ledger is
    # about what differs *now*, so it always goes to Ghidra unless told not to.
    if args.no_ghidra or (args.source == "namecore" and not args.apply):
        if not args.apply:
            print("\n(offline report -- --apply to write, or --source ledger to diff live)")
        return 0

    return run_ghidra(plan, args)


if __name__ == "__main__":
    sys.exit(main())
