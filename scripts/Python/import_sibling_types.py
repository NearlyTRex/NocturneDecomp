#!/usr/bin/env python3
# Copy data types the target is missing from the sibling build's program.
#
# Signature transfer is all-or-nothing per function: a parameter typed
# `CGame*` cannot be applied to a program that has never heard of `CGame`, so
# the whole prototype is abandoned. A handful of missing types therefore blocks
# a disproportionate number of signatures, and importing them is the cheapest
# way to unblock them.
#
# The list is derived, not hardcoded: every parameter and return type named by
# a transferable pair is resolved against the target, and whatever fails to
# resolve is what gets imported. Re-running after a mapping changes therefore
# imports exactly what the new mapping needs.
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
#           --mapping verified.json [--type NAME ...] [--apply]
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

REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))

_ARRAY_RE = re.compile(r"^(.*?)\s*\[(\d+)\]$")


def base_type_name(text):
    """Strip pointer and array decoration down to the underlying type name."""
    if not text:
        return None
    rest = text.strip()
    while rest.endswith("*"):
        rest = rest[:-1].strip()
    m = _ARRAY_RE.match(rest)
    if m:
        rest = m.group(1).strip()
    return rest or None


def wanted_types(mapping_path, source_program, min_confidence):
    """Base type names every transferable prototype needs, in mapping order."""
    with open(mapping_path) as fh:
        mapping = json.load(fh)
    src = sm.Image(source_program)

    names, seen = [], set()
    for p in mapping.get("pairs", []):
        if p.get("sig_verdict") != "agree":
            continue
        if p.get("confidence", 0) < min_confidence:
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
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    needed = list(args.type)
    if args.mapping:
        needed = wanted_types(args.mapping, args.from_program,
                              args.min_confidence) + needed
    if not needed:
        sys.exit("nothing to do: pass --mapping and/or --type")
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

                missing = []
                for name in needed:
                    if find_type(dst_dtm, name) is not None:
                        continue
                    sdt = find_type(src_dtm, name)
                    missing.append((name, sdt))

                have = [m for m in missing if m[1] is not None]
                absent = [m[0] for m in missing if m[1] is None]

                print("\nmissing from %s : %d" % (args.program_name, len(missing)))
                print("  available in %s : %d" % (args.from_program, len(have)))
                if absent:
                    print("  not in either program (built-ins or gone): %s"
                          % ", ".join(sorted(absent)))

                if not have:
                    print("\nnothing to import.")
                else:
                    print("\n%-24s %-10s %10s %10s" % ("type", "verdict",
                                                       "length", "rtti"))
                    for name, sdt in sorted(have, key=lambda t: t[0]):
                        size = sdt.getLength()
                        rec = rtti.get(name)
                        verdict = ("NO_RTTI" if rec is None else
                                   "EXACT" if rec == size else "DRIFTED")
                        print("%-24s %-10s %10d %10s"
                              % (name, verdict, size,
                                 rec if rec is not None else "-"))

                if args.apply and have:
                    from ghidra.program.model.data import DataTypeConflictHandler
                    before = dst_dtm.getDataTypeCount(True)
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
                        from ghidra.util.task import ConsoleTaskMonitor
                        print("Saving...")
                        dst.getDomainFile().save(ConsoleTaskMonitor())
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
