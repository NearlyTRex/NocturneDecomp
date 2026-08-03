#!/usr/bin/env python3
"""Find transferred functions whose signature did not come across correctly.

Mapping a function between sibling builds says "these two are the same
function". Applying nocedit's *name* to nocturne is safe -- the name is a fact
about the source. Applying its *signature* is not, and when the applier gets a
receiver wrong the damage is silent: Ghidra types `this` as a base class, then
renders every derived field as arithmetic past the end of the base, e.g.

    nocedit :  CDoor_setup(CDoor *this_ptr)        ->  this_ptr->close_condition
    nocturne:  CDoor_setup(CDemonActor *param_1)   ->  param_1[2].create_event + 0x2c

Both decompile without complaint. The second is garbage, and it looks exactly
like a struct bug, which is how it costs an afternoon.

The naming schema is what makes this checkable without any binary analysis:
`<tu>_<Class>_<method>_FUN_<addr>` asserts the receiver *is* that Class. So the
first parameter's type is checked against the class the name claims, and the
class hierarchy (read from each struct's `base` field at offset 0) says whether
a mismatch is an ancestor -- the applier reaching for a base class, by far the
common failure -- or something unrelated.

Verdicts:

  ok               first parameter is `<Class> *`
  wrong_base       it is an *ancestor* of `<Class>`. The signature was
                   transferred from a base-class method, or never narrowed.
                   This is the one that produces `param_1[2].field + 0xNN`.
  wrong_derived    it is a descendant -- narrower than the name claims
  wrong_unrelated  it is some other class entirely
  wrong_nonclass   it is not a class at all (int, void *, undefined ...)
  no_params        the function takes no arguments but the name says method
  no_signature     nothing was applied: undefined return and no parameters

`no_signature` is not a transfer error -- it is a transfer that never happened
-- so it is counted separately and excluded from the error total.

With `--mapping` (from map_sibling_functions.py) each mapped pair is also
compared against its counterpart's signature: parameter count, parameter types,
return type and calling convention. That catches drift the name cannot see,
including the case where *both* sides are self-consistent but differ between
builds. Argument *size* against the binary's own bytes is a separate axis and
is already covered by verify_sibling_signatures.py -- run both.

Usage:
    audit_transferred_signatures.py
    audit_transferred_signatures.py --program nocedit.exe          # control run
    audit_transferred_signatures.py --verdict wrong_base --show 40
    audit_transferred_signatures.py --mapping /tmp/mapping.json
    audit_transferred_signatures.py --out /tmp/sig_audit.json
"""

import argparse
import glob
import json
import os
import re
import sys
from collections import Counter, defaultdict

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

REPO = os.path.dirname(os.path.dirname(THIS_DIR))
ADDR_SUFFIX_RE = re.compile(r"_FUN_[0-9a-fA-F]{6,}$")
TU_RE = re.compile(r"^([A-Za-z0-9_]+\.(?:cpp|c|h|asm))_")

# Applied signatures that are wrong.
ERROR_VERDICTS = ("wrong_base", "wrong_derived", "wrong_unrelated",
                  "wrong_nonclass", "no_params")
# No signature applied, graded on what the decompiler inferred instead. Only
# the ones whose inference is not the named class are producing bad output.
UNSIGNED_BAD = ("unsigned_wrong_base", "unsigned_wrong_derived",
                "unsigned_wrong_unrelated", "unsigned_wrong_nonclass")
UNSIGNED_ALL = UNSIGNED_BAD + ("unsigned_ok", "unsigned")


# --------------------------------------------------------------------------
# Loading
# --------------------------------------------------------------------------

def annotations_dir(program):
    return os.path.join(REPO, "annotations", program)


def load_functions(program):
    """Every exported function record. The buckets index file is not one."""
    out = []
    pattern = os.path.join(annotations_dir(program), "functions",
                           "functions_bucket_*.json")
    for path in sorted(glob.glob(pattern)):
        if path.endswith("functions_buckets.json"):
            continue
        with open(path) as fh:
            for rec in json.load(fh):
                if isinstance(rec, dict) and rec.get("name"):
                    out.append(rec)
    if not out:
        sys.exit(f"ERROR: no function annotations under {annotations_dir(program)}")
    return out


def load_effective_signatures(program):
    """addr -> first parameter type *as the decompiler actually used it*.

    A function with no applied signature still decompiles: Ghidra infers a
    receiver, and for a derived-class method it habitually infers the base
    class it can see. That inference is what emits `param_1[2].field + 0xNN`,
    so it is the thing worth reporting -- the annotation database looks empty
    and innocent at exactly these addresses.
    """
    sig_re = re.compile(r"^// Signature:\s*(.+)$")
    addr_re = re.compile(r"^// Address:\s*([0-9a-fA-F]+)\s*$")
    first_re = re.compile(r"\(\s*([^,()]*?)\s*\b\w+\s*(?:,|\))")
    out = {}
    root = os.path.join(annotations_dir(program), "pseudocode", "src")
    for dirpath, _, filenames in os.walk(root):
        for fn in filenames:
            if not fn.endswith(".cpp") or fn.endswith(".keep.cpp"):
                continue
            addr = sig = None
            with open(os.path.join(dirpath, fn), errors="ignore") as fh:
                for _ in range(12):
                    line = fh.readline()
                    if not line:
                        break
                    m = addr_re.match(line)
                    if m:
                        addr = m.group(1).lower()
                    m = sig_re.match(line)
                    if m:
                        sig = m.group(1)
                    if addr and sig:
                        break
            if not (addr and sig):
                continue
            m = first_re.search(sig)
            out[addr] = m.group(1).strip() if m else None
    return out


def load_vtable_members(program):
    """Addresses that occupy a vtable slot.

    This is the strongest signal available for grading a receiver. A vtable
    slot is dispatched through an object, so the function in it *is* a virtual
    method and *must* take `this_ptr` first -- no judgement call, no "maybe the
    prefix is decorative". Conversely a `Class_method` name that appears in no
    vtable may legitimately be a free function that was named after the class
    it serves, which is a rename, not a signature bug.
    """
    members = set()
    pattern = os.path.join(annotations_dir(program), "vtables", "vtables_bucket_*.json")
    for path in sorted(glob.glob(pattern)):
        if path.endswith("vtables_buckets.json"):
            continue
        with open(path) as fh:
            for table in json.load(fh):
                if not isinstance(table, dict):
                    continue
                for slot in table.get("functions") or []:
                    addr = (slot or {}).get("func_addr")
                    if addr:
                        members.add(addr.lower())
    return members


def load_types(program):
    """(class -> immediate base, set of all type names).

    Inheritance is not recorded anywhere directly; it shows up as a struct
    whose first member sits at offset 0 and is called `base`. That is the
    convention this project applies when it models a derived class, so it is
    the same fact the decompiler is using.
    """
    path = os.path.join(annotations_dir(program), "data_types", "data_types.json")
    with open(path) as fh:
        data = json.load(fh)
    base_of, names = {}, set()
    for kind in ("structs", "unions"):
        for struct in data.get(kind, []):
            name = struct.get("name")
            if not name:
                continue
            names.add(name)
            fields = struct.get("fields") or []
            if fields and fields[0].get("offset") == 0 and fields[0].get("name") == "base":
                base_of[name] = strip_ptr(fields[0].get("type", ""))
    for kind in ("typedefs", "enums"):
        for entry in data.get(kind, []):
            if entry.get("name"):
                names.add(entry["name"])
    return base_of, names


# --------------------------------------------------------------------------
# Name / type helpers
# --------------------------------------------------------------------------

def strip_ptr(type_name):
    return (type_name or "").replace("*", "").strip()


def is_pointer(type_name):
    return "*" in (type_name or "")


def split_qualified_name(name):
    """`<tu>_<Class>_<method>_FUN_<addr>` -> (tu, core); either may be None."""
    if not name:
        return None, None
    m = TU_RE.match(name)
    tu = m.group(1) if m else None
    rest = name[len(tu) + 1:] if tu else name
    if rest.startswith("thunk_"):
        rest = rest[len("thunk_"):]
    rest = ADDR_SUFFIX_RE.sub("", rest)
    if not rest or rest.startswith("FUN_"):
        return tu, None
    return tu, rest


def split_class_method(core, type_names):
    """Longest known-type prefix of `core` wins.

    Longest, not first: `CBox` and `CBoxActor` are both real classes, so
    `CBoxActor_setup` must not resolve to `CBox` with a method of
    `Actor_setup`.
    """
    if not core:
        return None, None
    best = None
    for i, ch in enumerate(core):
        if ch != "_":
            continue
        if core[:i] in type_names:
            best = i
    if best is None:
        return None, None
    return core[:best], core[best + 1:]


def ancestors(cls, base_of, limit=24):
    """Base chain of `cls`, nearest first. Cycles cannot hang this."""
    seen, out, cur = {cls}, [], base_of.get(cls)
    while cur and cur not in seen and len(out) < limit:
        out.append(cur)
        seen.add(cur)
        cur = base_of.get(cur)
    return out


def first_param(func):
    params = (func.get("vars") or {}).get("params") or []
    if not params or not isinstance(params[0], dict):
        return None
    return params[0]


def has_signature(func):
    """False when nothing was ever applied, rather than applied wrongly."""
    params = (func.get("vars") or {}).get("params") or []
    ret = str(func.get("ret") or "")
    return bool(params) or not (ret.startswith("undefined") or ret == "")


# --------------------------------------------------------------------------
# The receiver check
# --------------------------------------------------------------------------

def receiver_verdict(cls, actual, base_of, type_names, prefix=""):
    bare = strip_ptr(actual)
    if bare == cls and is_pointer(actual):
        return prefix + "ok"
    if bare == cls:
        return prefix + "wrong_nonclass"
    if bare in ancestors(cls, base_of):
        return prefix + "wrong_base"
    if cls in ancestors(bare, base_of):
        return prefix + "wrong_derived"
    if bare in type_names:
        return prefix + "wrong_unrelated"
    return prefix + "wrong_nonclass"


def is_crt(tu):
    """CRT translation units are out of scope by project decision.

    The Watcom iostream classes really are declared with `void *` receivers
    (`ofstream::ofstream(void *)`) and that is staying, so grading them against
    the ClassName_methodName invariant reports a difference that will never be
    fixed. Counted and reported, never silently dropped.
    """
    return bool(tu) and tu.startswith("crt_")


def classify(func, base_of, type_names, effective=None):
    """-> (verdict, class_name, method, actual_first_param_type) or None.

    None means the name does not claim a receiver, so there is nothing here to
    be right or wrong about.
    """
    tu, core = split_qualified_name(func["name"])
    cls, method = split_class_method(core, type_names)
    if not cls or not method:
        return None

    if not has_signature(func):
        # Nothing applied. Grade the decompiler's *inferred* receiver instead,
        # because that is what the pseudocode was actually built from.
        inferred = (effective or {}).get(str(func.get("addr", "")).lower())
        if not inferred:
            return ("unsigned", cls, method, None)
        verdict = receiver_verdict(cls, inferred, base_of, type_names, prefix="unsigned_")
        return (verdict, cls, method, inferred + "  (inferred)")

    param = first_param(func)
    if param is None:
        # A thunk takes its parameters from its target, so Ghidra shows none
        # until the signature is overridden on the thunk itself. That is not a
        # botched transfer -- it is a thunk that cannot carry a `this_ptr` yet,
        # and the fix is to override the signature (or promote it to a real
        # function), not to re-copy anything.
        if func.get("thunk"):
            return ("thunk_unsigned", cls, method, f"thunk -> {func.get('thtarget')}")
        return ("no_params", cls, method, None)

    actual = param.get("type") or ""
    bare = strip_ptr(actual)
    if bare == cls and is_pointer(actual):
        return ("ok", cls, method, actual)
    if bare == cls:
        # Right class, passed by value -- every class here is passed by
        # pointer, so this is still wrong, just differently.
        return ("wrong_nonclass", cls, method, actual)
    if bare in ancestors(cls, base_of):
        return ("wrong_base", cls, method, actual)
    if cls in ancestors(bare, base_of):
        return ("wrong_derived", cls, method, actual)
    if bare in type_names:
        return ("wrong_unrelated", cls, method, actual)
    return ("wrong_nonclass", cls, method, actual)


# --------------------------------------------------------------------------
# Cross-sibling signature comparison
# --------------------------------------------------------------------------

def normalize_type(type_name):
    t = (type_name or "").replace(" ", "")
    return t or "?"


def compare_pair(src, dst):
    """Signature differences between a mapped pair. [] when they agree."""
    diffs = []
    sp = [p for p in ((src.get("vars") or {}).get("params") or []) if isinstance(p, dict)]
    dp = [p for p in ((dst.get("vars") or {}).get("params") or []) if isinstance(p, dict)]
    if len(sp) != len(dp):
        diffs.append(f"param count {len(sp)} -> {len(dp)}")
    else:
        for i, (a, b) in enumerate(zip(sp, dp)):
            if normalize_type(a.get("type")) != normalize_type(b.get("type")):
                diffs.append(f"param{i} {a.get('type')} -> {b.get('type')}")
    if normalize_type(src.get("ret")) != normalize_type(dst.get("ret")):
        diffs.append(f"ret {src.get('ret')} -> {dst.get('ret')}")
    if (src.get("conv") or "?") != (dst.get("conv") or "?"):
        diffs.append(f"conv {src.get('conv')} -> {dst.get('conv')}")
    return diffs


def run_name_core_compare(program, other, show):
    """Compare signatures with the sibling by name core -- no mapping needed.

    A transferred function carries the same `<Class>_<method>` core in both
    builds; only the translation unit and the address suffix differ. That is
    enough to pair them, so this answers "same function, different address,
    signature did not come across" without running the mapper first. A core
    that is ambiguous on either side (overloads, or two units defining the same
    name) is dropped rather than guessed at.
    """
    def by_core(prog):
        index, dupes = {}, set()
        for func in load_functions(prog):
            _, core = split_qualified_name(func["name"])
            if not core:
                continue
            if core in index:
                dupes.add(core)
            index[core] = func
        for core in dupes:
            index.pop(core, None)
        return index, dupes

    mine, mine_dupes = by_core(program)
    theirs, their_dupes = by_core(other)
    shared = sorted(set(mine) & set(theirs))

    rows, only_theirs_signed = [], 0
    for core in shared:
        a, b = theirs[core], mine[core]
        if not has_signature(b) and has_signature(a):
            only_theirs_signed += 1
            continue                      # missing, not wrong -- counted above
        if not has_signature(a):
            continue                      # nothing to compare against
        diffs = compare_pair(a, b)
        if diffs:
            rows.append({"core": core, "src": a.get("name"), "dst": b.get("name"),
                         "diffs": diffs})

    print()
    print("=" * 78)
    print(f"SIGNATURE COMPARISON BY NAME CORE  ({other} -> {program})")
    print("=" * 78)
    print(f"  cores shared            : {len(shared)}")
    print(f"  ambiguous, dropped      : {len(mine_dupes)} in {program}, "
          f"{len(their_dupes)} in {other}")
    print(f"  signed there, not here  : {only_theirs_signed}  (transferable now)")
    print(f"  signed both, DIFFERENT  : {len(rows)}")
    kinds = Counter(d.split()[0] for r in rows for d in r["diffs"])
    if kinds:
        print(f"  by kind                 : {dict(kinds)}")
    for row in rows[:show]:
        print(f"    {row['core']}")
        for d in row["diffs"]:
            print(f"        {d}")
    return rows


def run_mapping_check(mapping_path, show):
    with open(mapping_path) as fh:
        payload = json.load(fh)
    src_prog, dst_prog = payload.get("from"), payload.get("to")
    if not src_prog or not dst_prog:
        sys.exit("ERROR: mapping has no 'from'/'to' -- not a map_sibling_functions.py file")
    src = {f["addr"].lower(): f for f in load_functions(src_prog)}
    dst = {f["addr"].lower(): f for f in load_functions(dst_prog)}

    rows, missing = [], 0
    for pair in payload.get("pairs", []):
        a, b = str(pair.get("a", "")).lower(), str(pair.get("b", "")).lower()
        if a not in src or b not in dst:
            missing += 1
            continue
        diffs = compare_pair(src[a], dst[b])
        if diffs:
            rows.append({"src_addr": a, "dst_addr": b,
                         "name": dst[b].get("name"), "confidence": pair.get("confidence"),
                         "diffs": diffs})

    print()
    print("=" * 78)
    print(f"CROSS-SIBLING SIGNATURE DRIFT  ({src_prog} -> {dst_prog})")
    print("=" * 78)
    print(f"  pairs compared : {len(payload.get('pairs', [])) - missing}")
    print(f"  pairs differing: {len(rows)}")
    if missing:
        print(f"  pairs skipped  : {missing} (address not in the exported annotations "
              f"-- re-export, the mapping is newer)")
    kinds = Counter(d.split()[0] for r in rows for d in r["diffs"])
    if kinds:
        print(f"  by kind        : {dict(kinds)}")
    for row in sorted(rows, key=lambda r: -(r["confidence"] or 0))[:show]:
        print(f"    {row['name']}  (conf {row['confidence']})")
        for d in row["diffs"]:
            print(f"        {d}")
    return rows


# --------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", default="nocturne.exe",
                    help="program to audit (default: nocturne.exe)")
    ap.add_argument("--compare", metavar="PROGRAM",
                    help="compare signatures against this sibling by name core "
                         "(e.g. nocedit.exe); needs no mapping file")
    ap.add_argument("--mapping",
                    help="mapping.json from map_sibling_functions.py; same "
                         "comparison but paired by address instead of by name")
    ap.add_argument("--verdict", choices=("all", "applied", "unsigned")
                    + ERROR_VERDICTS + UNSIGNED_BAD + ("ok", "unsigned_ok"),
                    default="all",
                    help="list only this verdict; 'applied' = wrong applied "
                         "signatures, 'unsigned' = bad inferred receivers")
    ap.add_argument("--include-crt", action="store_true",
                    help="also grade crt_* units (excluded by default: the "
                         "Watcom iostream receivers are void* by design)")
    ap.add_argument("--show", type=int, default=20, help="examples to list (default: 20)")
    ap.add_argument("--out", help="write full findings as JSON")
    args = ap.parse_args()

    funcs = load_functions(args.program)
    base_of, type_names = load_types(args.program)
    effective = load_effective_signatures(args.program)
    vtable_members = load_vtable_members(args.program)

    findings, counts = [], Counter()
    per_tu = defaultdict(Counter)
    for func in funcs:
        tu, _ = split_qualified_name(func["name"])
        if is_crt(tu) and not args.include_crt:
            counts["crt_skipped"] += 1
            continue
        result = classify(func, base_of, type_names, effective)
        if result is None:
            counts["not_a_method"] += 1
            continue
        verdict, cls, method, actual = result
        counts[verdict] += 1
        per_tu[tu or "?"][verdict] += 1
        if verdict not in ("ok", "unsigned_ok"):
            virtual = str(func.get("addr", "")).lower() in vtable_members
            if virtual:
                counts["in_vtable"] += 1
            findings.append({"addr": func.get("addr"), "name": func.get("name"),
                             "tu": tu, "class": cls, "method": method,
                             "verdict": verdict, "first_param": actual,
                             "expected": f"{cls} *", "in_vtable": virtual})

    total_methods = sum(v for k, v in counts.items()
                        if k not in ("not_a_method", "crt_skipped"))
    errors = sum(counts[v] for v in ERROR_VERDICTS)
    unsigned_bad = sum(counts[v] for v in UNSIGNED_BAD)
    unsigned_all = sum(counts[v] for v in UNSIGNED_ALL)

    print("=" * 78)
    print(f"RECEIVER TYPE AUDIT  ({args.program})")
    print("=" * 78)
    print(f"  functions exported     : {len(funcs)}")
    print(f"  name claims a receiver : {total_methods}")
    print(f"  not a class method     : {counts['not_a_method']}")
    if counts["crt_skipped"]:
        print(f"  CRT units skipped      : {counts['crt_skipped']}   "
              f"(Watcom iostreams keep void* receivers; --include-crt to grade them)")
    print()
    print("  -- signature applied --")
    print(f"  ok                     : {counts['ok']}")
    for verdict in ERROR_VERDICTS:
        if counts[verdict]:
            print(f"  {verdict:23}: {counts[verdict]}")
    print(f"  --> wrong signatures   : {errors}")
    if counts["thunk_unsigned"]:
        print(f"  {'thunk_unsigned':23}: {counts['thunk_unsigned']}   "
              f"(thunk with no signature override -- cannot carry a this_ptr yet)")
    print()
    print(f"  -- no signature applied ({unsigned_all}) --")
    print(f"  {'unsigned_ok':23}: {counts['unsigned_ok']}   "
          f"(decompiler guessed the right class anyway)")
    for verdict in UNSIGNED_BAD:
        if counts[verdict]:
            print(f"  {verdict:23}: {counts[verdict]}")
    if counts["unsigned"]:
        print(f"  {'unsigned':23}: {counts['unsigned']}   (no pseudocode to grade)")
    print(f"  --> bad output now     : {unsigned_bad}")
    print()
    print(f"  TOTAL needing attention: {errors + unsigned_bad}")

    interesting = ERROR_VERDICTS + UNSIGNED_BAD
    if errors + unsigned_bad:
        worst = sorted(per_tu.items(),
                       key=lambda kv: -sum(kv[1][v] for v in interesting))
        print()
        print("  worst translation units:")
        for tu, c in worst[:12]:
            n = sum(c[v] for v in interesting)
            if not n:
                break
            detail = ", ".join(f"{k}={v}" for k, v in c.items() if k in interesting)
            print(f"    {tu:24} {n:4}  ({detail})")

    if args.verdict == "all":
        wanted = [f for f in findings if f["verdict"] in interesting]
    elif args.verdict == "applied":
        wanted = [f for f in findings if f["verdict"] in ERROR_VERDICTS]
    elif args.verdict == "unsigned":
        wanted = [f for f in findings if f["verdict"] in UNSIGNED_BAD]
    else:
        wanted = [f for f in findings if f["verdict"] == args.verdict]
    if wanted:
        print()
        # A vtable slot cannot be a free function, so those are certain.
        wanted.sort(key=lambda f: not f.get("in_vtable"))
        n_virtual = sum(1 for f in wanted if f.get("in_vtable"))
        print(f"  examples ({min(args.show, len(wanted))} of {len(wanted)}; "
              f"{n_virtual} in a vtable = certain bug, rest may be free "
              f"functions named after a class):")
        for f in wanted[:args.show]:
            mark = "VTABLE " if f.get("in_vtable") else "       "
            print(f"    {mark}[{f['verdict']:15}] {f['name']}")
            print(f"            expected {f['expected']:28} got {f['first_param']}")

    by_core = run_name_core_compare(args.program, args.compare, args.show) \
        if args.compare else None
    drift = run_mapping_check(args.mapping, args.show) if args.mapping else None

    if args.out:
        with open(args.out, "w") as fh:
            json.dump({"program": args.program, "counts": dict(counts),
                       "receiver_findings": findings,
                       "name_core_drift": by_core,
                       "signature_drift": drift}, fh, indent=1)
        print(f"\nwrote {args.out}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
