#!/usr/bin/env python3
# Copy data types the target is missing from the sibling build's program.
#
# Signature transfer is all-or-nothing per function: a parameter typed
# `CGame*` cannot be applied to a program that has never heard of `CGame`, so
# the whole prototype is abandoned. A handful of missing types therefore blocks
# a disproportionate number of signatures, and importing them is the cheapest
# way to unblock them.
#
# The list is derived, not hardcoded, from two sources:
#
#   prototypes  every parameter and return type named by a transferable pair
#   globals     every type reachable through the source program's defined data
#
# The second source is not optional decoration. In this codebase a function
# definition is almost never a parameter or return type -- it is the pointee of
# a global function pointer (`APIDLL_clear* g_APIDLL_clear`,
# `MainScanlineFunc* g_ScanlineRenderFunc`). Prototype-only discovery cannot see
# one, so it imported exactly zero funcdefs and every one of them had to be
# written by hand. Pass --no-globals to get the old prototype-only behaviour.
#
# Whatever fails to resolve against the target is what gets imported. Re-running
# after a mapping changes therefore imports exactly what the new mapping needs.
#
# Re-running is safe and idempotent: a type the target already has is skipped,
# never re-added, and the run reports what it skipped rather than silently
# doing nothing. Conflicts created by dependency resolution are detected and
# reported, and --prune-conflicts removes the ones this run introduced, so a
# second pass never leaves `.conflict` debris to clean up by hand.
#
# Ghidra pulls dependencies in automatically. The conflict handler is set to
# keep what the target already has, because the target's layouts are the
# corrected ones -- a struct arriving from the source must reference the
# target's `CDemonActor`, not drag the source's copy in beside it.
#
# Every import is checked against Watcom RTTI afterwards and reported as:
#
#   EXACT      the imported length matches the class's recorded size
#   DRIFTED    it does not. Imported anyway, because a pointer to a wrongly
#              sized struct is still the right parameter type, but the layout
#              needs fixing -- often shift_struct_fields.py will do it
#   NO_RTTI    the class was never instantiated, so nothing can be checked
#
# Usage:
#   GHIDRA_INSTALL_DIR=/path/to/ghidra/lib \
#   python3 -u import_sibling_types.py <ABS_project_path> <project_name> \
#           --mapping verified.json [--type NAME ...] \
#           [--kind funcdef|struct|union|enum|typedef ...] \
#           [--no-globals] [--prune-conflicts] [--apply]
#
# Import only the missing function definitions:
#   python3 -u import_sibling_types.py ... --kind funcdef --apply
#
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import re
import sys
from collections import Counter

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

import sibling_match as sm
import apply_sibling_annotations as asa

REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))

_ARRAY_RE = re.compile(r"^(.*?)\s*\[(\d+)\]$")


def base_type_name(text):
    """Strip pointer and array decoration down to the underlying type name.

    str() is not redundant: names arriving from the prototype path are Python
    strings, but names read live out of Ghidra are java.lang.String, and the
    array regex silently fails to match one of those -- leaving decorated names
    like `CVector3f[241]` to be looked up verbatim and reported as missing.

    The array strip loops because element types can themselves be arrays;
    a single pass turns `int[2][3]` into `int[2]`, which resolves to nothing.
    """
    if not text:
        return None
    rest = str(text).strip()
    while rest.endswith("*"):
        rest = rest[:-1].strip()
    while True:
        m = _ARRAY_RE.match(rest)
        if not m:
            break
        rest = m.group(1).strip()
    return rest or None


KINDS = ("funcdef", "struct", "union", "enum", "typedef", "other")


def kind_of(dt):
    """Coarse category for a Ghidra data type, matching --kind values.

    Ghidra models a C++ class as a Structure, so `class` is not a separate
    kind here -- ask for `struct` and you get both.
    """
    from ghidra.program.model.data import (
        Enum, FunctionDefinition, Structure, TypeDef, Union)
    if isinstance(dt, FunctionDefinition):
        return "funcdef"
    if isinstance(dt, Structure):
        return "struct"
    if isinstance(dt, Union):
        return "union"
    if isinstance(dt, Enum):
        return "enum"
    if isinstance(dt, TypeDef):
        return "typedef"
    return "other"


def globals_type_names(program):
    """Base type names reachable through the source program's defined data.

    This is the half of discovery that prototype walking structurally cannot
    reach. A funcdef in this codebase is the pointee of a global function
    pointer, never a parameter or return type, so without this pass the import
    list contains no function definitions at all.
    """
    names, seen = [], set()
    data_iter = program.getListing().getDefinedData(True)
    while data_iter.hasNext():
        dt = data_iter.next().getDataType()
        if dt is None:
            continue
        n = base_type_name(dt.getDisplayName())
        if n and n not in seen:
            seen.add(n)
            names.append(n)
    return names


def conflict_paths(dtm):
    """Full paths of every `.conflict` type currently in a manager."""
    out = set()
    it = dtm.getAllDataTypes()
    while it.hasNext():
        dt = it.next()
        if ".conflict" in dt.getName():
            out.add(dt.getPathName())
    return out


def all_type_paths(dtm):
    """Path names of every data type currently in a manager."""
    out = set()
    it = dtm.getAllDataTypes()
    while it.hasNext():
        out.add(it.next().getPathName())
    return out


def new_types_since(dtm, before_paths):
    """Types added since the snapshot, split from derived pointer/array forms.

    Ghidra resolves a type's dependencies automatically, so importing one
    funcdef can drag a whole struct in behind it -- and that struct arrives
    with the SOURCE build's layout. Those are precisely the types the sibling
    boundary does not transfer, and until now they were invisible: counted in
    "including dependencies" but never named and never RTTI-checked, so a
    drifted layout could enter in silence.

    Pointer and array forms are separated out because Ghidra creates them
    on demand whenever a type is used; they carry no layout of their own.
    """
    from ghidra.program.model.data import Array, Pointer
    fresh, derived = [], 0
    it = dtm.getAllDataTypes()
    while it.hasNext():
        dt = it.next()
        if dt.getPathName() in before_paths:
            continue
        if isinstance(dt, (Pointer, Array)):
            derived += 1
            continue
        fresh.append(dt)
    return fresh, derived


def rtti_verdict(rtti, name, size):
    """EXACT / DRIFTED / NO_RTTI for one type against Watcom RTTI sizes."""
    rec = rtti.get(name)
    if rec is None:
        return "NO_RTTI", "-"
    return ("EXACT" if rec == size else "DRIFTED"), rec


def wanted_types(mapping_path, source_program, min_confidence):
    """Base type names every transferable prototype needs, in mapping order.

    The eligibility test is imported from apply_sibling_annotations rather than
    repeated here. It was repeated once, and the copy went stale the moment the
    signature gate widened: this tool went on reporting "nothing to import"
    while 37 prototypes were being dropped for 14 unknown types.
    """
    with open(mapping_path) as fh:
        mapping = json.load(fh)
    src = sm.Image(source_program)

    names, seen = [], set()
    for p in mapping.get("pairs", []):
        if p.get("ambiguous"):
            continue
        if not asa.signature_supported(p.get("shape_agreement", "unshaped"),
                                       p.get("sig_verdict", "unverifiable"),
                                       p.get("confidence", 0), min_confidence):
            continue
        rec = src.by_addr.get(p["a"])
        if not rec:
            continue
        texts = [rec.get("ret")]
        texts += [q.get("type") for q in (rec.get("vars") or {}).get("params") or []]
        for t in texts:
            n = base_type_name(t)
            if n and n not in seen:
                seen.add(n)
                names.append(n)
    return names


def load_rtti(program_name):
    path = os.path.join(REPO_ROOT, "annotations", program_name,
                        "type_info", "type_info.json")
    try:
        with open(path) as fh:
            doc = json.load(fh)
    except OSError:
        return {}
    return {e["name"]: e["typeinfo_size"] for e in doc.get("type_info", [])
            if "typeinfo_size" in e and "name" in e}


def find_type(dtm, name):
    dt = dtm.getDataType("/" + name)
    if dt is not None:
        return dt
    from java.util import ArrayList
    matches = ArrayList()
    dtm.findDataTypes(name, matches)
    return matches.get(0) if not matches.isEmpty() else None


def main():
    ap = argparse.ArgumentParser(
        description="Import missing data types from the sibling program.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--mapping", help="derive the needed types from this mapping")
    ap.add_argument("--min-confidence", type=float, default=0.90)
    ap.add_argument("--type", action="append", default=[],
                    help="import this type as well (repeatable)")
    ap.add_argument("--kind", action="append", default=[], choices=KINDS,
                    help="import only types of this kind (repeatable; "
                         "default: every kind). 'struct' covers C++ classes.")
    ap.add_argument("--no-globals", action="store_true",
                    help="skip discovery through the source program's global "
                         "data (funcdefs are only reachable that way)")
    ap.add_argument("--prune-conflicts", action="store_true",
                    help="delete any .conflict types this run introduces")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    needed = list(args.type)
    if args.mapping:
        needed = wanted_types(args.mapping, args.from_program,
                              args.min_confidence) + needed
    if not needed and args.no_globals:
        sys.exit("nothing to do: pass --mapping and/or --type, "
                 "or drop --no-globals")
    print("%d distinct type name(s) referenced by transferable prototypes"
          % len(needed))

    rtti = load_rtti(args.program_name)
    project_path = os.path.abspath(args.project_path)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.from_program) as src:
            with pyghidra.program_context(project, "/" + args.program_name) as dst:
                src_dtm, dst_dtm = src.getDataTypeManager(), dst.getDataTypeManager()

                if not args.no_globals:
                    seen = set(needed)
                    extra = [n for n in globals_type_names(src)
                             if n not in seen]
                    needed = needed + extra
                    print("%d more from global data in %s (%d total)"
                          % (len(extra), args.from_program, len(needed)))

                kinds = set(args.kind)
                missing, already, wrong_kind = [], [], []
                for name in needed:
                    if find_type(dst_dtm, name) is not None:
                        already.append(name)
                        continue
                    sdt = find_type(src_dtm, name)
                    if sdt is not None and kinds and kind_of(sdt) not in kinds:
                        wrong_kind.append(name)
                        continue
                    missing.append((name, sdt))

                have = [m for m in missing if m[1] is not None]
                absent = [m[0] for m in missing if m[1] is None]

                # Report the skips rather than swallowing them: "nothing to
                # import" is ambiguous between "already done" and "discovery
                # found nothing", and those need opposite responses.
                print("\nalready in %s, skipped : %d"
                      % (args.program_name, len(already)))
                if kinds:
                    print("excluded by --kind %s : %d"
                          % ("/".join(sorted(kinds)), len(wrong_kind)))
                print("missing from %s : %d" % (args.program_name, len(missing)))
                print("  available in %s : %d" % (args.from_program, len(have)))
                if absent:
                    print("  not in either program (built-ins or gone): %s"
                          % ", ".join(sorted(absent)))

                if not have:
                    print("\nnothing to import.")
                else:
                    print("\n%-30s %-9s %-10s %8s %8s"
                          % ("type", "kind", "verdict", "length", "rtti"))
                    for name, sdt in sorted(have, key=lambda t: t[0]):
                        size = sdt.getLength()
                        verdict, rec = rtti_verdict(rtti, name, size)
                        print("%-30s %-9s %-10s %8d %8s"
                              % (name, kind_of(sdt), verdict, size, rec))

                if args.apply and have:
                    from ghidra.program.model.data import DataTypeConflictHandler
                    from ghidra.util.task import ConsoleTaskMonitor
                    monitor = ConsoleTaskMonitor()
                    before = dst_dtm.getDataTypeCount(True)
                    # Snapshot pre-existing conflicts so the report blames this
                    # run only for the ones it actually introduced, and the
                    # full type set so dependencies can be told from requests.
                    conflicts_before = conflict_paths(dst_dtm)
                    types_before = all_type_paths(dst_dtm)
                    tx = dst.startTransaction("Import sibling data types")
                    ok = True
                    try:
                        for name, sdt in have:
                            # KEEP_HANDLER: dependencies the target already has
                            # are its own, corrected copies -- do not replace
                            # them with the source's.
                            dst_dtm.addDataType(
                                sdt, DataTypeConflictHandler.KEEP_HANDLER)
                    except Exception as e:
                        ok = False
                        print("ERROR: %s" % e)
                        import traceback
                        traceback.print_exc()
                    finally:
                        dst.endTransaction(tx, ok)

                    if ok:
                        after = dst_dtm.getDataTypeCount(True)
                        print("\nimported %d requested type(s); data type count "
                              "%d -> %d (%+d, including dependencies)"
                              % (len(have), before, after, after - before))

                        # Dependencies are the silent half of an import: never
                        # asked for, never checked, and carrying the source
                        # build's layout. Name them and hold them to the same
                        # RTTI standard as the requested types.
                        fresh, derived = new_types_since(dst_dtm, types_before)
                        requested = set(n for n, _ in have)
                        deps = [d for d in fresh
                                if d.getName() not in requested]
                        if deps:
                            print("\n%d dependency type(s) arrived unrequested "
                                  "- these carry %s's layout:"
                                  % (len(deps), args.from_program))
                            print("%-30s %-9s %-10s %8s %8s"
                                  % ("type", "kind", "verdict", "length", "rtti"))
                            suspect = []
                            for dt in sorted(deps, key=lambda d: d.getName()):
                                nm, size = dt.getName(), dt.getLength()
                                verdict, rec = rtti_verdict(rtti, nm, size)
                                print("%-30s %-9s %-10s %8d %8s"
                                      % (nm, kind_of(dt), verdict, size, rec))
                                if verdict != "EXACT" and kind_of(dt) in (
                                        "struct", "union"):
                                    suspect.append(nm)
                            if suspect:
                                print("\nWARNING: %d unverified struct/union "
                                      "layout(s) imported from %s: %s"
                                      % (len(suspect), args.from_program,
                                         ", ".join(suspect)))
                                print("  Layouts do not transfer across the "
                                      "sibling boundary. Verify each against "
                                      "%s's own assembly before trusting a "
                                      "field offset." % args.program_name)
                        if derived:
                            print("\n%d derived pointer/array type(s) also "
                                  "created (no layout of their own)" % derived)

                        new_conflicts = sorted(
                            conflict_paths(dst_dtm) - conflicts_before)
                        if new_conflicts:
                            print("\n%d new .conflict type(s) from dependency "
                                  "resolution:" % len(new_conflicts))
                            for p in new_conflicts:
                                print("  %s" % p)
                            if args.prune_conflicts:
                                tx = dst.startTransaction("Prune import conflicts")
                                pruned = 0
                                try:
                                    for p in new_conflicts:
                                        dt = dst_dtm.getDataType(p)
                                        if dt is not None and dst_dtm.remove(
                                                dt, monitor):
                                            pruned += 1
                                finally:
                                    dst.endTransaction(tx, True)
                                print("pruned %d of %d"
                                      % (pruned, len(new_conflicts)))
                            else:
                                print("re-run with --prune-conflicts to remove "
                                      "them")

                        print("Saving...")
                        dst.getDomainFile().save(monitor)
                        print("Saved.")
                elif not args.apply:
                    print("\n[dry-run] re-run with --apply to import.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
