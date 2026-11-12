#!/usr/bin/env python3
"""The functions each program still has no name for, grouped by unit.

A function is unnamed when its name has no class-and-method part: Ghidra's
`FUN_<addr>`, or a unit with nothing after it (`core_fire.cpp_FUN_0049e1a0`).
The CRT is counted but not listed unless --crt: its interior is left anonymous
by design (wall_off_crt.py).

Each unit lists its unnamed functions by address, with their size, and the
units are ordered by how many bytes are left unnamed, so the largest gaps come
first. The report goes to annotations/<program>/reports/unnamed_functions.txt.

Reads exported annotations only. No Ghidra.

    python3 scripts/Python/report_unnamed_functions.py              # every program
    python3 scripts/Python/report_unnamed_functions.py bw1.exe --crt
"""

import argparse
import os
import sys
from collections import defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm  # noqa: E402

DEFAULT_PROGRAMS = ("nocedit.exe", "nocturne.exe", "bw1.exe", "blairwitch2.exe", "bw3.exe")
NO_UNIT = "(no unit)"
REPORT = "unnamed_functions.txt"


def size_of(function):
    return sum(b.get("size", 0) for b in function.get("body", []) or [])


def is_crt(unit):
    return unit.startswith("crt_")


def unnamed(functions):
    """unit -> [(addr, size, name)] for every function with no class-and-method name."""
    out = defaultdict(list)
    for f in functions:
        unit, core = sm.split_qualified_name(f.get("name", ""))
        if core is None:
            out[unit or NO_UNIT].append((f["addr"].lower(), size_of(f), f.get("name", "")))
    for rows in out.values():
        rows.sort()
    return out


def render(program, total, units, crt):
    """The report's lines."""
    game = {u: r for u, r in units.items() if not is_crt(u)}
    crt_units = {u: r for u, r in units.items() if is_crt(u)}
    n_game = sum(len(r) for r in game.values())
    n_crt = sum(len(r) for r in crt_units.values())
    named = total - n_game - n_crt
    lines = ["%s: %d functions, %d named (%.1f%%), %d unnamed game, %d unnamed CRT"
             % (program, total, named, 100.0 * named / total if total else 0.0, n_game, n_crt)]
    shown = dict(game, **crt_units) if crt else game
    for unit, rows in sorted(shown.items(), key=lambda kv: (-sum(r[1] for r in kv[1]), kv[0])):
        lines.append("")
        lines.append("%s  %d unnamed, %d bytes" % (unit, len(rows), sum(r[1] for r in rows)))
        lines.extend("  %s  %6d  %s" % row for row in rows)
    return lines


def write_report(program, crt=False):
    """Write the program's report; returns (path, its first line)."""
    functions = sm._load_buckets(program, "functions")  # pylint: disable=protected-access
    lines = render(program, len(functions), unnamed(functions), crt)
    path = os.path.join(sm.ANNOTATIONS, program, "reports", REPORT)
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")
    return path, lines[0]


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("programs", nargs="*", default=list(DEFAULT_PROGRAMS))
    ap.add_argument("--crt", action="store_true", help="list the CRT's unnamed functions too")
    args = ap.parse_args(argv)
    for program in args.programs:
        path, summary = write_report(program, args.crt)
        print("%s\n  -> %s" % (summary, os.path.relpath(path)))


if __name__ == "__main__":
    main()
