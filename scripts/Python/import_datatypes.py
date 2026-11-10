#!/usr/bin/env python3
"""Copy named data types from one program's DTM into another's, in the same project.

A copied type brings the types it uses with it. Any of those the destination
already has, it keeps: the copy refers to the destination's own (KEEP_HANDLER).
Ghidra's default handler would instead add the source's definition beside it as
`<name>.conflict` -- for a Blair Witch program, whose CDemonActor is an RTTI-sized
placeholder, every copy touching an actor would duplicate the actor classes.

Report-first; --apply writes and saves the destination program.

Usage (PyGhidra headless):
    import_datatypes.py <project_dir> <project_name> <src_program> <dst_program> <types> [--apply]
    import_datatypes.py ./projects NocturneEdit nocedit.exe bw3.exe SInteractionInfo --apply

<types> is a comma-separated list of top-level type names, matched exactly
against the source; --types-file takes one per line for bulk imports.

#@author NearlyTRex
#@category Annotations
"""

import argparse
import os
import sys
from collections import Counter

ACTIONS = ("IMPORT", "ALREADY-IN-DST", "NOT-IN-SRC")


def build_index(dtm):
    """name -> [data types], built in one pass.

    A bulk import asks for thousands of names; rescanning the whole DTM per
    name is quadratic and dominates the run.
    """
    idx = {}
    for dt in dtm.getAllDataTypes():
        idx.setdefault(dt.getName(), []).append(dt)
    return idx


def pick_type(hits):
    """Preferred data type among same-named candidates: a composite, a typedef, an enum."""
    if not hits:
        return None
    from ghidra.program.model.data import Composite, Enum, TypeDef
    for pref in (Composite, TypeDef, Enum):
        for dt in hits:
            if isinstance(dt, pref):
                return dt
    return hits[0]


def plan(src_index, want, have):
    """[(name, action, source type)] for each wanted name."""
    out = []
    for name in want:
        dt = pick_type(src_index.get(name))
        if dt is None:
            out.append((name, "NOT-IN-SRC", None))
        elif name in have:
            out.append((name, "ALREADY-IN-DST", dt))
        else:
            out.append((name, "IMPORT", dt))
    return out


def names_in(dtm):
    return {dt.getName() for dt in dtm.getAllDataTypes()}


def import_types(dst, types):
    """Add `types` to `dst`, keeping what it already has. -> the type names it gained."""
    from ghidra.program.model.data import DataTypeConflictHandler
    dtm = dst.getDataTypeManager()
    before = names_in(dtm)
    tx = dst.startTransaction("Import data types")
    ok = False
    try:
        for dt in types:
            dtm.addDataType(dt, DataTypeConflictHandler.KEEP_HANDLER)
        ok = True
    finally:
        dst.endTransaction(tx, ok)
    return sorted(names_in(dtm) - before)


def wanted(args, error):
    want = [t.strip() for t in args.types.split(",") if t.strip()]
    if args.types_file:
        with open(args.types_file, encoding="utf-8") as fh:
            want += [ln.split("#", 1)[0].strip() for ln in fh]
    want = [t for t in dict.fromkeys(want) if t]
    if not want:
        error("no type names given (use <types> or --types-file)")
    return want


def report(rows, src_program):
    counts = Counter(a for _, a, _ in rows)
    print("=== plan ===")
    for action in ACTIONS:
        if counts[action]:
            print("  %-14s %d" % (action, counts[action]))
    # Listing thousands of names helps nobody; the missing ones are the only
    # actionable detail of a bulk import.
    if len(rows) <= 40:
        for name, action, dt in rows:
            extra = ("  (%s, %d bytes)" % (dt.getPathName(), dt.getLength())) if dt else ""
            print("  %-14s %s%s" % (action, name, extra))
    elif counts["NOT-IN-SRC"]:
        missing = [n for n, a, _ in rows if a == "NOT-IN-SRC"]
        print("  not found in %s: %s%s" % (src_program, ", ".join(missing[:20]),
                                            " ..." if len(missing) > 20 else ""))


def main(argv=None):
    ap = argparse.ArgumentParser(description="Copy data types between programs in a project.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("src_program")
    ap.add_argument("dst_program")
    ap.add_argument("types", nargs="?", default="", help="comma-separated top-level type names")
    ap.add_argument("--types-file",
                    help="file with one type name per line ('#' comments ignored); "
                         "for bulk imports too large for a command line")
    ap.add_argument("--apply", action="store_true", help="write and save the destination program")
    args = ap.parse_args(argv)
    want = wanted(args, ap.error)

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.src_program) as src:
            with pyghidra.program_context(project, "/" + args.dst_program) as dst:
                rows = plan(build_index(src.getDataTypeManager()), want,
                            names_in(dst.getDataTypeManager()))
                report(rows, args.src_program)
                to_import = [dt for _, a, dt in rows if a == "IMPORT"]
                if not args.apply:
                    print("[dry-run] re-run with --apply to import.")
                elif to_import:
                    added = import_types(dst, to_import)
                    print("Imported %d top-level type(s); the destination gained %d:"
                          % (len(to_import), len(added)))
                    for n in added:
                        print("  + %s" % n)
                    conflicts = [n for n in added if ".conflict" in n]
                    if conflicts:
                        print("WARNING: %d conflict type(s) created: %s"
                              % (len(conflicts), ", ".join(conflicts)))
                    from ghidra.util.task import ConsoleTaskMonitor
                    dst.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
    finally:
        project.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
