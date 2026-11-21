#!/usr/bin/env python3
# Re-start strings that Ghidra's string analysis began too early.
#
# A run of printable bytes just before a string reads as part of it, so the
# analysis can start the string inside the constant before it. The high bytes of
# 0.7f are "333?" and those of the double 0.001 are "MbP?", which is how Blair
# Witch's class names became "?333?CTrigger" and "MbP?CZombieCow". Nothing uses
# the string's start, and the code points into it, so the decompiler shows
# `"?333?CTrigger" + 5` where the source had "CTrigger".
#
# Code also points into a string on purpose: the source skips a fixed prefix
# ("GROUND_WOOD" + 7, "kParmInt" + 5), or other uses take the whole string. So a
# string is split only when nothing uses its start and the bytes it skips are the
# string's own text but not all identifier characters. It starts at the furthest
# such use; uses before that are the constant's (BW's CTrigger loads 0.7f at +1
# and names the class at +5). A use is a reference to the address, or an
# instruction's immediate equal to it.
#
#   SPLIT         the string is re-created at its start with its s_<text>_<addr>
#                 label, and the bytes before it are left undefined (they are the
#                 constant's)
#   SHARED        the start is used too, left alone
#   NAMED-PREFIX  every use skips only identifier characters: the source skipping a
#                 prefix, left alone
#   LONG-PREFIX   it would skip more than a double's 8 bytes; left for a person
#   NOT-TEXT      the bytes skipped aren't the string's text (binary data typed as a
#                 string), left alone
#
# Report-first; --apply snapshots the project, then mutates + saves.
#
# Usage (PyGhidra headless):
#   python split_offcut_strings.py <project_dir> <project_name> [program_name]
#   python split_offcut_strings.py /abs/projects NocturneEdit bw1.exe
#   python split_offcut_strings.py /abs/projects NocturneEdit bw1.exe --apply
#
#@author NearlyTRex
#@category Annotations

import argparse
import bisect
import os
import re
import subprocess
import sys
import traceback
from collections import Counter, defaultdict

from audit_ghidra_fixups import MIN_PLAUSIBLE_ADDR

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
IDENTIFIER = re.compile(r"[A-Za-z0-9_]+")
# The widest constant a string can swallow the end of: a double.
MAX_CONSTANT = 8


def defined_strings(program):
    """[(start, length, text)] for every defined string, by address."""
    out = []
    for data in program.getListing().getDefinedData(True):
        if data.hasStringValue() and data.getValue() is not None:
            out.append((data.getAddress().getOffset(), data.getLength(), str(data.getValue())))
    return sorted(out)


def immediate_uses(program, strings):
    """{address: [instruction address]} for each immediate landing inside a string."""
    from ghidra.program.model.scalar import Scalar

    starts = [s for s, _, _ in strings]
    uses = defaultdict(list)
    for instr in program.getListing().getInstructions(True):
        for op_index in range(instr.getNumOperands()):
            for obj in instr.getOpObjects(op_index):
                if not isinstance(obj, Scalar):
                    continue
                value = obj.getUnsignedValue()
                i = bisect.bisect_right(starts, value) - 1
                if value < MIN_PLAUSIBLE_ADDR or i < 0:
                    continue
                start, length, _ = strings[i]
                if value < start + length:
                    uses[value].append(instr.getAddress().getOffset())
    return uses


def uses_at(program, immediates, address):
    """The addresses using address: references to it, then immediates equal to it."""
    space = program.getAddressFactory().getDefaultAddressSpace()
    refs = [r.getFromAddress().getOffset() for r in program.getReferenceManager().getReferencesTo(
        space.getAddress(address))]
    return sorted(set(refs + immediates.get(address, [])))


def plan(program):
    """One row per string used inside: its start, the offset its uses land on, and the action."""
    strings = defined_strings(program)
    immediates = immediate_uses(program, strings)
    memory = program.getMemory()
    space = program.getAddressFactory().getDefaultAddressSpace()
    rows = []
    for start, length, text in strings:
        inside = {start + k: uses_at(program, immediates, start + k) for k in range(1, length)}
        inside = {a: u for a, u in inside.items() if u}
        if not inside:
            continue
        offsets = sorted(a - start for a in inside)
        # Where the string can start: a use with something other than identifier text before it.
        # Uses before that are the constant's (BW's CTrigger: 0.7f loaded at +1, the name at +5).
        starts = [k for k in offsets if not IDENTIFIER.fullmatch(text[:k])]
        target = start + (max(starts) if starts else offsets[0])
        prefix = bytes(memory.getByte(space.getAddress(start + i)) & 0xFF for i in range(target - start))
        if uses_at(program, immediates, start):
            action = "SHARED"
        elif not starts:
            action = "NAMED-PREFIX"
        elif target - start > MAX_CONSTANT:
            action = "LONG-PREFIX"
        elif prefix.decode("latin-1") != text[:len(prefix)]:
            action = "NOT-TEXT"
        else:
            action = "SPLIT"
        rows.append({"start": "%08x" % start, "target": "%08x" % target, "text": text,
                     "offsets": offsets, "prefix": prefix.hex(),
                     "uses": sorted({u for us in inside.values() for u in us}), "action": action})
    return rows


def apply(program, rows):
    """Re-create each SPLIT string at its use, in one transaction. Returns the count, or None
    when the transaction failed and was rolled back."""
    from ghidra_annotations.util.log import setup_logging
    from ghidra_annotations.util.string import create_or_replace_string

    setup_logging(name = "ghidra_offcut_strings")
    listing = program.getListing()
    symbols = program.getSymbolTable()
    space = program.getAddressFactory().getDefaultAddressSpace()
    split = 0
    tx = program.startTransaction("Split offcut strings")
    ok = True
    try:
        for r in rows:
            if r["action"] != "SPLIT":
                continue
            start = space.getAddress(int(r["start"], 16))
            data = listing.getDefinedDataAt(start)
            listing.clearCodeUnits(start, start.add(data.getLength() - 1), False)
            for sym in list(symbols.getSymbols(start)):
                symbols.removeSymbolSpecial(sym)
            if create_or_replace_string(program, space.getAddress(int(r["target"], 16))) is not True:
                raise RuntimeError("no string could be made at %s" % r["target"])
            split += 1
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    return split if ok else None


def write_report(out_path, program_name, rows, applied):
    counts = Counter(r["action"] for r in rows)
    lines = ["Offcut strings: %s" % program_name, "mode: %s" % ("APPLY" if applied else "report"),
             "strings used inside: %d" % len(rows),
             "  %s" % "  ".join("%s=%d" % (k, v) for k, v in sorted(counts.items())), ""]
    for action in ("SPLIT", "LONG-PREFIX", "NOT-TEXT", "NAMED-PREFIX", "SHARED"):
        sub = [r for r in rows if r["action"] == action]
        if not sub:
            continue
        lines.append("== %s (%d) ==" % (action, len(sub)))
        for r in sub:
            lines.append("  %s +%s  %r  prefix %s  used by %s" % (
                r["start"], ",".join(map(str, r["offsets"])), r["text"][:48], r["prefix"],
                " ".join("%08x" % u for u in r["uses"][:4]) + (" ..." if len(r["uses"]) > 4 else "")))
        lines.append("")
    with open(out_path, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")
    return counts


def run(program, args, out_path):
    """Report, and with --apply split the strings and save. Returns the exit code."""
    rows = plan(program)
    counts = write_report(out_path, args.program_name, rows, args.apply)
    print("\n=== plan ===")
    for k, v in sorted(counts.items()):
        print("  %-8s %d" % (k, v))
    print("Report written to: %s" % out_path)
    if not args.apply:
        print("\n[dry-run] re-run with --apply to execute.")
        return 0
    if not counts["SPLIT"]:
        print("\nNothing to split.")
        return 0
    print("\n[apply] splitting %d string(s)..." % counts["SPLIT"])
    split = apply(program, rows)
    if split is None:
        print("Rolled back; nothing saved.")
        return 1
    from ghidra.util.task import ConsoleTaskMonitor
    print("Split %d. Saving program database..." % split)
    program.getDomainFile().save(ConsoleTaskMonitor())
    print("Saved.")
    return 0


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_path), args.project_name, "--tag", "pre-offcut-strings"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    p = argparse.ArgumentParser(description="Re-start strings Ghidra began inside the constant before them.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--apply", action="store_true", help="Split the strings + save the program (default: report only)")
    p.add_argument("--no-snapshot", action="store_true", help="--apply without a .gar snapshot first")
    p.add_argument("--out", default=None)
    args = p.parse_args(argv)

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_offcut_strings.txt" % args.program_name)

    if args.apply and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.", flush=True)
        os._exit(1)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    # pyghidra drops the working directory from sys.path, which is this script's folder when
    # it is run from there; ghidra_annotations is imported from it later.
    if THIS_DIR not in sys.path:
        sys.path.insert(0, THIS_DIR)
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 1
    project = pyghidra.open_project(project_path, args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            code = run(program, args, out_path)
    except Exception as e:
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        project.close()

    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
