#!/usr/bin/env python3
"""Merge a duplicate data type into the one that stays, from a JSON spec.

Two names for one layout (nocedit's `SCorona` and `SCoronaLightEntry`) split
the code that reads it into two vocabularies. Ghidra's replaceDataType moves
every use of the duplicate -- fields, parameters, returns, applied data -- onto
the type that stays and removes the duplicate, which changes names only, never
offsets. That holds only when the two layouts really are the same, so each
merge is checked first:

    {
     "nocedit.exe": [
       {"from": "SCorona", "into": "SCoronaLightEntry",
        "basis": "same 78724-byte layout; the cache global uses SCoronaLightEntry"}
     ]
    }

Both types must exist once each, and have the same length and the same
components: offset, length and type at every position (field names may
differ; that is the point). Without --apply the check runs on the program's
exported data types; with it, on the live program, and only a merge that
passes is made.

Usage:
    merge_data_types.py spec.json --program nocedit.exe                 # check
    GHIDRA_INSTALL_DIR=... merge_data_types.py spec.json --program nocedit.exe \\
        --project ABS/projects --apply
"""
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm


def norm(type_name):
    """A type name as both the export and Ghidra spell it: no spaces."""
    return (type_name or "").replace(" ", "")


def export_layouts(program):
    """name -> [(length, [(offset, length, type)])] of each composite in the program's export."""
    path = os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")
    with open(path, encoding="utf-8") as fh:
        doc = json.load(fh)
    out = {}
    for kind in ("structs", "unions"):
        for entry in doc.get(kind, []):
            if isinstance(entry, dict) and "len" in entry:
                fields = [(int(f["offset"]), f["len"], norm(f["type"])) for f in entry.get("fields", [])]
                out.setdefault(entry["name"], []).append((entry["len"], fields))
    return out


def live_layouts(dtm, name):
    """[(data type, (length, [(offset, length, type)]))] for each type of that exact name."""
    from java.util import ArrayList
    found = ArrayList()
    dtm.findDataTypes(name, found)
    out = []
    for dt in found:
        if dt.getName() != name:
            continue
        components = [(c.getOffset(), c.getLength(), norm(c.getDataType().getName()))
                      for c in (dt.getDefinedComponents() if hasattr(dt, "getDefinedComponents") else [])]
        out.append((dt, (dt.getLength(), components)))
    return out


def check(merge, layouts):
    """Problems with one merge, given name -> [layout] for both of its types."""
    src, dst = merge.get("from"), merge.get("into")
    if not src or not dst:
        return ["needs both 'from' and 'into'"]
    if src == dst:
        return [f"{src} into itself"]
    problems = []
    for name in (src, dst):
        found = layouts.get(name, [])
        if not found:
            problems.append(f"{name} is not in the program")
        elif len(found) > 1:
            problems.append(f"{name} is defined {len(found)} times")
    if problems:
        return problems
    (src_len, src_fields), = layouts[src]
    (dst_len, dst_fields), = layouts[dst]
    if src_len != dst_len:
        return [f"{src} is {src_len} bytes, {dst} {dst_len}"]
    if src_fields != dst_fields:
        diff = next(((a, b) for a, b in zip(src_fields, dst_fields) if a != b), None)
        where = (f"at {diff[0]} vs {diff[1]}" if diff
                 else f"{len(src_fields)} vs {len(dst_fields)} components")
        return [f"{src} and {dst} differ {where}"]
    return []


def apply(program, merges):
    """Make each merge that passes the live check; [(merge, outcome)]."""
    dtm = program.getDataTypeManager()
    report = []
    tx = program.startTransaction("Merge duplicate data types")
    ok = False
    try:
        for merge in merges:
            live = {name: live_layouts(dtm, name) for name in (merge["from"], merge["into"])}
            problems = check(merge, {name: [layout for _, layout in found] for name, found in live.items()})
            if problems:
                report.append((merge, "refused: " + "; ".join(problems)))
                continue
            (old, _), = live[merge["from"]]
            (new, _), = live[merge["into"]]
            dtm.replaceDataType(old, new, False)
            gone = not live_layouts(dtm, merge["from"])
            report.append((merge, "merged" if gone else "FAILED: still present after the merge"))
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return report


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("spec")
    ap.add_argument("--program", required=True)
    ap.add_argument("--project", help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)

    with open(args.spec, encoding="utf-8") as fh:
        merges = json.load(fh).get(args.program, [])
    layouts = export_layouts(args.program)
    bad = [(m, p) for m in merges for p in check(m, layouts)]
    print(f"{args.program}: {len(merges)} merge(s) in the spec, {len(bad)} problem(s) in the export")
    for m, p in bad:
        print(f"  {m.get('from')} -> {m.get('into')}: {p}")
    if bad:
        return 1
    if not args.apply:
        print("[dry-run] re-run with --project ... --apply")
        return 0
    if not args.project:
        print("ERROR: applying needs --project")
        return 2

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            report = apply(program, merges)
            for merge, outcome in report:
                print(f"  {merge['from']} -> {merge['into']}: {outcome}")
            if any(outcome == "merged" for _, outcome in report):
                from ghidra.util.task import ConsoleTaskMonitor
                program.getDomainFile().save(ConsoleTaskMonitor())
                print("Saved.")
    finally:
        project.close()
    return 0 if all(outcome == "merged" for _, outcome in report) else 1


if __name__ == "__main__":
    sys.exit(main())
