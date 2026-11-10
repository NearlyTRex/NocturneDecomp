#!/usr/bin/env python3
"""Refit embedded struct fields to their type's length.

A struct embedded in another (a base, a member, an array of them) keeps the
length it had when the field was made. When the embedded type is laid out
again at a build's own size -- CCharacter at bw1's 49616 bytes, nocedit's
48676 -- the field in CHero stays 48676 long, and the 940 grown bytes show as
undefined after it. Each such field is refitted to the type's length when the
bytes it grows over hold no other field; one whose growth would overlap a
field, or whose type shrank, is reported and left.

Unions are left alone: their members overlap by design.

With --bases-from, a base the reference build has and this one lost is put
back: a class whose reference layout starts with `base` of type B, laid out in
this build with nothing in its first len(B) bytes, gets `base` B at 0. A base
still a placeholder is not placed.

Usage:
    refit_embedded_members.py --program bw1.exe --project /abs/projects            # report
    refit_embedded_members.py --program bw1.exe --project /abs/projects --apply
    refit_embedded_members.py --program bw1.exe --bases-from nocedit.exe --project ... --apply
"""

import argparse
import json
import os
import sys

import sibling_match as sm


def stale(structure):
    """[(component, the type's length)] for fields not as long as their type."""
    out = []
    for c in structure.getDefinedComponents():
        dt = c.getDataType()
        want = dt.getLength()
        # a trailing T[0] is a flexible array, 0 bytes long however Ghidra sizes its type
        if hasattr(dt, "getNumElements") and dt.getNumElements() == 0:
            continue
        if hasattr(dt, "getDefinedComponents") or hasattr(dt, "getNumElements"):
            if want > 0 and want != c.getLength():
                out.append((c, want))
    return out


def blocker(structure, component, want):
    """Why `component` cannot grow to `want` bytes, or None."""
    if want < component.getLength():
        return f"its type shrank to {want} bytes"
    end = component.getOffset() + want
    if end > structure.getLength():
        return f"{want} bytes run past the struct's {structure.getLength()}"
    for other in structure.getDefinedComponents():
        if component.getOffset() < other.getOffset() < end:
            return f"{other.getFieldName()} at {other.getOffset():#x} is in the way"
    return None


def plan(program):
    """[(struct, field, old length, new length, None or why not)]."""
    rows = []
    for dt in program.getDataTypeManager().getAllDataTypes():
        if not hasattr(dt, "replaceAtOffset"):
            continue
        for c, want in stale(dt):
            rows.append((dt, c, want, blocker(dt, c, want)))
    return rows


def reference_bases(program):
    """{struct: its base's type name} from the exported layouts of `program`."""
    path = os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")
    with open(path, encoding="utf-8") as fh:
        structs = json.load(fh)["structs"]
    return {s["name"]: f["type"] for s in structs for f in s.get("fields") or []
            if f["offset"] == 0 and f["name"] == "base"}


def missing_bases(program, bases):
    """[(struct, base type)] for laid-out structs with nothing where their laid-out base belongs."""
    by_name = {dt.getName(): dt for dt in program.getDataTypeManager().getAllDataTypes()
               if hasattr(dt, "replaceAtOffset")}
    out = []
    for name, base_name in sorted(bases.items()):
        dt, base = by_name.get(name), by_name.get(base_name)
        if dt is None or base is None or not list(base.getDefinedComponents()):
            continue
        # an empty struct only when it is exactly its base's size: nothing of its own
        if not list(dt.getDefinedComponents()) and dt.getLength() != base.getLength():
            continue
        if base.getLength() <= dt.getLength() and not any(
                c.getOffset() < base.getLength() for c in dt.getDefinedComponents()):
            out.append((dt, base))
    return out


def place_bases(program, rows):
    tx = program.startTransaction("Place missing bases")
    try:
        for dt, base in rows:
            dt.replaceAtOffset(0, base, base.getLength(), "base", None)
    finally:
        program.endTransaction(tx, True)
    return len(rows)


def refit(program, rows):
    """Refit the rows with nothing in the way; -> how many."""
    tx = program.startTransaction("Refit embedded members")
    done = 0
    try:
        for dt, c, want, why in rows:
            if why is None:
                dt.replaceAtOffset(c.getOffset(), c.getDataType(), want, c.getFieldName(), c.getComment())
                done += 1
    finally:
        program.endTransaction(tx, True)
    return done


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", required=True)
    ap.add_argument("--project", required=True, help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--bases-from", metavar="PROGRAM",
                    help="also put back the bases this build lost, from PROGRAM's exported layouts")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)
    bases = reference_bases(args.bases_from) if args.bases_from else {}

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            rows = plan(program)
            print(f"{args.program}: {len(rows)} stale embedded fields, "
                  f"{sum(why is None for *_, why in rows)} with room")
            for dt, c, want, why in rows:
                print(f"  {dt.getName()}.{c.getFieldName()} ({c.getDataType().getName()}) "
                      f"{c.getLength()} -> {want}" + (f": left, {why}" if why else ""))
            lost = missing_bases(program, bases)
            for dt, base in lost:
                print(f"  {dt.getName()}: base {base.getName()} ({base.getLength()} bytes) is missing")
            if args.apply:
                print(f"refitted {refit(program, rows)}")
                print(f"placed {place_bases(program, lost)} bases")
                from ghidra.util.task import ConsoleTaskMonitor
                program.getDomainFile().save(ConsoleTaskMonitor())
                print("Saved.")
            else:
                print("[dry-run] re-run with --apply")
    finally:
        project.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
