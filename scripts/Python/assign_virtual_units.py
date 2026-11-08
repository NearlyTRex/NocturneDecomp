#!/usr/bin/env python3
"""Give every function still without a unit the best unit its position allows.

What is known about a program's units comes in islands: functions named
through the sibling mapping, `staticInit`s proven by the init table, functions
whose own asserts name their file (see watcom_static_init.py). A unit's code is
one unbroken run, so the islands constrain everything between them, and this
script writes that down for each placeholder function:

  pin        its own __FILE__ assert names the unit
  bracket    the nearest evidence on both sides is the same unit
  crt        it lies past the CRT line, so it is runtime code
  crt island it lies between two pieces of CRT evidence, so it is runtime code
  between    the nearest evidence on each side differs, so it belongs to one of
             them or to a unit nothing has surfaced yet. It gets a virtual unit
             named for where it sits in link order, `unknown_after<prev>.cpp`
             (`unknown_start.cpp` before the first evidence), so the units it
             could be are the ones that sort between its neighbours.

The CRT line is the first CRT function after the last piece of game evidence.
Watcom links the runtime after every game object, so nothing past it is game
code, and everything there that is still unnamed becomes `crt_unknown.c`, the
catch-all nocturne already uses.

Both kinds of placeholder unit are only positions. They are never evidence for
any later analysis, and every tool that names functions replaces them freely
(sibling_match.is_placeholder_unit), so running this changes no decision the
mapping or the init table makes; it only makes sure each export files every
function somewhere.

Usage:
    assign_virtual_units.py bw1.exe                      # report
    assign_virtual_units.py bw1.exe --apply --project projects NocturneEdit
"""

import argparse
import os
import re
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm
import watcom_static_init as wsi

START_UNIT = sm.VIRTUAL_UNIT_PREFIX + "start.cpp"


def is_crt(unit):
    return bool(unit) and unit.startswith("crt_")


def virtual_unit(prev):
    """The virtual unit for a gap whose nearest game evidence before it is `prev`."""
    if prev is None:
        return START_UNIT
    stem = re.sub(r"[^a-z0-9]", "", wsi.basename(prev))
    return "%safter%s.cpp" % (sm.VIRTUAL_UNIT_PREFIX, stem)


def crt_line(ordered, labels):
    """Index of the first CRT-labelled function after the last game one, or None."""
    last_game = max((i for i, a in enumerate(ordered)
                     if labels.get(a) and not is_crt(labels[a])), default=-1)
    return next((i for i in range(last_game + 1, len(ordered))
                 if is_crt(labels.get(ordered[i]))), None)


def plan(ordered, labels, placeholders):
    """(addr, unit, why) for every placeholder, in address order.

    `labels` is addr -> unit for every function carrying evidence, and
    `placeholders` the functions that may be given a unit.
    """
    line = crt_line(ordered, labels)
    before, prev_game, prev = [None] * len(ordered), None, None
    for i, a in enumerate(ordered):
        before[i] = (prev, prev_game)
        if a in labels:
            prev = labels[a]
            if not is_crt(prev):
                prev_game = prev
    out, nxt = [], None
    for i in range(len(ordered) - 1, -1, -1):
        a = ordered[i]
        if a in placeholders:
            prev, prev_game = before[i]
            if a in labels:
                unit, why = labels[a], "pin"
            elif line is not None and i >= line:
                unit, why = sm.CRT_UNKNOWN_UNIT, "crt"
            elif prev and nxt and wsi.same_unit(prev, nxt):
                unit, why = (sm.CRT_UNKNOWN_UNIT, "crt island") if is_crt(prev) else (prev, "bracket")
            elif is_crt(prev) and is_crt(nxt):
                unit, why = sm.CRT_UNKNOWN_UNIT, "crt island"
            else:
                unit, why = virtual_unit(prev_game), "between"
            out.append((a, unit, why))
        if a in labels:
            nxt = labels[a]
    return out[::-1], line


def analyse(program, pins_path=None):
    image = sm.Image(program)
    pins_path = pins_path or os.path.join(sm.ANNOTATIONS, program, "reports", "line_pins.json")
    pins = sm.load_pins(pins_path) if os.path.exists(pins_path) else []
    stems = {}
    for f in image.functions:
        unit = sm.tu_of(f.get("name"))
        if unit and not sm.is_placeholder_unit(unit):
            stems.setdefault(unit.rsplit(".", 1)[0], unit)
    ordered = [f["addr"].lower() for f in sorted(image.functions, key=lambda f: int(f["addr"], 16))]
    labels = {a: u for a, (u, _) in wsi.function_evidence(image, pins, stems).items()}
    placeholders = {a for a, f in image.by_addr.items() if wsi.unlabelled(f)}
    rows, line = plan(ordered, labels, placeholders)
    names = {a: image.by_addr[a].get("name") for a in ordered}
    renames = [(a, names[a], "%s_FUN_%s" % (unit, a), why) for a, unit, why in rows
               if "%s_FUN_%s" % (unit, a) != names[a]]
    return {"program": program, "functions": len(ordered),
            "crt_line": ordered[line] if line is not None else None,
            "rows": rows, "renames": renames}


def print_report(report, show):
    print("%s: %d functions, %d still without a unit; CRT line at %s"
          % (report["program"], report["functions"], len(report["rows"]), report["crt_line"]))
    counts = Counter(why for _, _, why in report["rows"])
    print("  " + "  ".join("%s=%d" % kv for kv in sorted(counts.items())))
    virtual = Counter(u for _, u, why in report["rows"] if why == "between")
    print("  %d virtual units, largest: %s" % (len(virtual), ", ".join(
        "%s (%d)" % kv for kv in virtual.most_common(5))))
    print("  renames planned: %d" % len(report["renames"]))
    for addr, cur, want, why in report["renames"][:show]:
        print("    %s  %-10s %s -> %s" % (addr, why, cur, want))


def apply_to_program(program, renames):
    """Rename in one transaction; returns how many functions were found and renamed."""
    from ghidra.program.model.symbol import SourceType
    space = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    renamed = 0
    tx = program.startTransaction("Assign virtual units")
    ok = False
    try:
        for addr, _, want, _ in renames:
            func = fm.getFunctionAt(space.getAddress(int(addr, 16)))
            if func is not None:
                func.setName(want, SourceType.USER_DEFINED)
                renamed += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return renamed


def apply(report, project_dir, project_name):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    with pyghidra.program_context(project, "/" + report["program"]) as program:
        from ghidra.util.task import ConsoleTaskMonitor
        print("renamed %d" % apply_to_program(program, report["renames"]))
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    project.close()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("program")
    ap.add_argument("--pins", help="line pins (default annotations/<program>/reports/line_pins.json)")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--project", nargs=2, metavar=("DIR", "NAME"))
    args = ap.parse_args()
    report = analyse(args.program, args.pins)
    print_report(report, args.show)
    if args.apply:
        if not args.project:
            ap.error("--apply needs --project DIR NAME")
        apply(report, *args.project)


if __name__ == "__main__":
    main()
