#!/usr/bin/env python3
"""
dump_body_holes.py

Inspect BODY_HOLE gaps: for every undefined interior gap in a function body,
print the raw bytes, the instruction just before the gap, the code just after it,
whether anything references the gap, and a padding classification. Read-only.

Usage:
    python3 -u dump_body_holes.py <project_dir> <project_name> <program_name>
"""

import os
import sys
import argparse


def is_undefined(program, addr):
    listing = program.getListing()
    if listing.getInstructionContaining(addr) is not None:
        return False
    from ghidra.program.model.listing import Data
    cu = listing.getCodeUnitContaining(addr)
    if cu is None:
        return True
    if isinstance(cu, Data):
        return not cu.isDefined()
    return False


def hexbytes(program, start, length):
    mem = program.getMemory()
    out = []
    for i in range(length):
        try:
            out.append("%02x" % (mem.getByte(start.add(i)) & 0xFF))
        except Exception:
            out.append("??")
    return " ".join(out)


def classify(program, start, length):
    mem = program.getMemory()
    vals = []
    for i in range(length):
        try:
            vals.append(mem.getByte(start.add(i)) & 0xFF)
        except Exception:
            vals.append(-1)
    end_off = start.getOffset() + length  # first byte after the gap
    align = ""
    if end_off % 16 == 0:
        align = "ends@16"
    elif end_off % 8 == 0:
        align = "ends@8"
    elif end_off % 4 == 0:
        align = "ends@4"
    if all(v == 0xCC for v in vals):
        return "INT3-padding %s" % align
    if all(v == 0x90 for v in vals):
        return "NOP-padding %s" % align
    if all(v == 0x00 for v in vals):
        return "zero-padding %s" % align
    if align:
        return "mixed-bytes %s (likely align pad)" % align
    return "SUSPECT (not padding-shaped, no alignment)"


def run(program):
    from ghidra.program.model.address import AddressSet
    fm = program.getFunctionManager()
    listing = program.getListing()
    refmgr = program.getReferenceManager()

    funcs = [f for f in fm.getFunctions(True)
             if not f.isThunk() and not f.isExternal()]

    n_holes = 0
    for func in funcs:
        body = func.getBody()
        entry = func.getEntryPoint()
        bmax = body.getMaxAddress()
        if bmax is None or bmax.compareTo(entry) <= 0:
            continue
        gaps = AddressSet(entry, bmax).subtract(body)
        hole_ranges = []
        for rng in gaps.getAddressRanges():
            a = rng.getMinAddress()
            if is_undefined(program, a) and fm.getFunctionContaining(a) is None:
                hole_ranges.append(rng)
        if not hole_ranges:
            continue

        print("=" * 70)
        print("%s  %s   (%d hole%s)" % (
            func.getEntryPoint(), func.getName(),
            len(hole_ranges), "" if len(hole_ranges) == 1 else "s"))
        for rng in hole_ranges:
            n_holes += 1
            start = rng.getMinAddress()
            length = int(rng.getMaxAddress().subtract(start)) + 1

            before = listing.getInstructionBefore(start)
            after_addr = rng.getMaxAddress().add(1)
            after = listing.getInstructionAt(after_addr)

            # who references the first byte of the gap and the byte right after?
            refs_into = list(refmgr.getReferencesTo(start))
            refs_after = list(refmgr.getReferencesTo(after_addr))

            print("  gap %s-%s  (%d bytes)  %s" % (
                start, rng.getMaxAddress(), length,
                classify(program, start, length)))
            print("      bytes:  %s" % hexbytes(program, start, length))
            if before is not None:
                print("      before: %-10s %s" % (before.getAddress(), before))
            print("      after:  %-10s %s" % (
                after_addr, after if after is not None else "(undefined)"))
            if refs_into:
                print("      refs -> gap start: %s" % ", ".join(
                    "%s(%s)" % (r.getFromAddress(), r.getReferenceType())
                    for r in refs_into[:5]))
            if refs_after:
                print("      refs -> after-gap: %s" % ", ".join(
                    "%s(%s)" % (r.getFromAddress(), r.getReferenceType())
                    for r in refs_after[:5]))
    print("=" * 70)
    print("Total interior holes: %d" % n_holes)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("project_path")
    parser.add_argument("project_name")
    parser.add_argument("program_name", nargs="?", default="nocturne.exe")
    args = parser.parse_args()
    project_path = os.path.abspath(args.project_path)

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(project_path, args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            run(program)
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
    os._exit(0)


if __name__ == "__main__":
    main()
