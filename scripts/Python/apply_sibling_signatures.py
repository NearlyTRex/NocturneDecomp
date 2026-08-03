#!/usr/bin/env python3
"""Apply nocedit's signatures to nocturne functions that have none.

The names came across; the signatures largely did not. An unsignatured function
still decompiles -- Ghidra infers a receiver, and for a derived-class method it
habitually infers the base class it can see -- so the output looks confident and
reads as `param_1[2].create_event + 0x2c`. That is indistinguishable from a
struct bug until you check the signature, which is how it costs an afternoon.

Only functions that currently have NO signature are touched. A wrong signature
is a different problem and is left alone: this pass cannot make anything worse
than the undefined state it found.

Pairing is by name core (`<Class>_<method>`), which is the part of the name that
survives the transfer -- the translation unit and the address suffix belong to
whichever binary the function lives in. Cores that are ambiguous on either side
are dropped rather than guessed at.

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
    apply_sibling_signatures.py                       # report only
    apply_sibling_signatures.py --show 40
    apply_sibling_signatures.py --apply
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


def build_plan(src_prog, dst_prog):
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
            "src_name": a.get("name"), "dst_name": b.get("name"),
            "addr": b.get("addr"),
            "ret": a.get("ret"), "conv": a.get("conv"),
            "params": [{"name": p.get("name"), "type": p.get("type")} for p in sp],
            "receiver": name_cls,
            "corroborated": bool(name_cls and virtual),
        })
    return plan, skipped, src_dupes, dst_dupes


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
    os._exit(0 if failed == 0 else 1)


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--from", dest="src", default="nocedit.exe")
    ap.add_argument("--to", dest="dst", default="nocturne.exe")
    ap.add_argument("--project-dir", default=os.path.join(REPO, "projects"))
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--out", help="write the plan as JSON")
    ap.add_argument("--apply", action="store_true",
                    help="write the signatures into the Ghidra project")
    ap.add_argument("--revert-custom-storage", action="store_true",
                    help="undo prototypes an earlier, weaker gate let through: "
                         "reset every register-pinned/FPU source's target back "
                         "to unsignatured so transfer_custom_storage.py can do "
                         "it properly")
    args = ap.parse_args()

    if args.revert_custom_storage:
        return revert(args)

    plan, skipped, src_dupes, dst_dupes = build_plan(args.src, args.dst)
    report(plan, skipped, src_dupes, dst_dupes, args.show)

    if args.out:
        with open(args.out, "w") as fh:
            json.dump(plan, fh, indent=1)
        print(f"\nwrote {args.out}")

    if not args.apply:
        print("\n(report only -- re-run with --apply to write)")
        return 0

    return apply_plan(plan, args)


def apply_plan(plan, args):
    import pyghidra
    pyghidra.start()

    from ghidra.program.model.data import PointerDataType
    from ghidra.program.model.listing import ParameterImpl, ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor
    from java.util import ArrayList

    project = pyghidra.open_project(args.project_dir, args.project_name)
    applied = failed = 0
    try:
        with pyghidra.program_context(project, "/" + args.dst) as program:
            dtm = program.getDataTypeManager()
            monitor = ConsoleTaskMonitor()
            func_mgr = program.getFunctionManager()
            af = program.getAddressFactory().getDefaultAddressSpace()

            def resolve(type_name):
                """Find a data type by name, honouring one level of pointer."""
                base = (type_name or "").strip()
                depth = 0
                while base.endswith("*"):
                    base = base[:-1].strip()
                    depth += 1
                found = dtm.getDataType("/" + base)
                if found is None:
                    # Not at the root category -- search every category. The
                    # list has to be a java.util.List for the JNI overload.
                    matches = ArrayList()
                    dtm.findDataTypes(base, matches)
                    found = matches.get(0) if not matches.isEmpty() else None
                if found is None:
                    return None
                for _ in range(depth):
                    found = PointerDataType(found, dtm)
                return found

            txid = program.startTransaction("apply sibling signatures")
            try:
                for item in plan:
                    func = func_mgr.getFunctionAt(af.getAddress(item["addr"]))
                    if func is None:
                        failed += 1
                        continue
                    ret_dt = resolve(item["ret"])
                    # updateFunction's params argument is a java.util.List; a
                    # Python list finds no matching JNI overload.
                    params, ok = ArrayList(), ret_dt is not None
                    for p in item["params"]:
                        dt = resolve(p["type"])
                        if dt is None:
                            ok = False
                            break
                        params.add(ParameterImpl(p["name"], dt, program))
                    if not ok:
                        failed += 1
                        continue
                    try:
                        func.updateFunction(
                            item["conv"],
                            ReturnParameterImpl(ret_dt, program),
                            params,
                            func.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                            True,
                            SourceType.USER_DEFINED)
                        applied += 1
                    except Exception as exc:
                        print(f"  FAILED {item['dst_name']}: {exc}")
                        failed += 1
            finally:
                program.endTransaction(txid, True)

            # Headless mutations persist only through the DomainFile.
            program.getDomainFile().save(monitor)
    finally:
        project.close()

    print(f"\napplied {applied}, failed {failed}")
    print("Re-export and re-run audit_transferred_signatures.py to confirm.")
    os._exit(0 if failed == 0 else 1)


if __name__ == "__main__":
    sys.exit(main())
