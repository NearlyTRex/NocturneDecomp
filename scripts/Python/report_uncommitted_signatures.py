#!/usr/bin/env python3
"""The functions whose signature is not committed, or still holds undefined types.

Ghidra keeps a function's signature apart from what the decompiler shows. Until it
is committed (the decompiler's Commit Params/Return, or a script setting it as
user-defined), the decompiler infers a prototype afresh each time, and Ghidra's own
listings and reports show the stored one: `undefined` return, no convention. The
functions export records the source of an uncommitted signature as `sig` (default,
analysis or imported). Each function is listed with every reason that applies:

  sig default     never set: the decompiler's prototype is a guess on every run
  sig analysis    set by an analyzer, not checked
  sig imported    set by an importer (PE symbols, FID), not checked
  ret undefinedN  the stored return type is undefined
  param N:type    a stored parameter type is undefined
  conv unknown    a committed signature with no calling convention: the
                  decompiler's "Unknown calling convention -- yet parameter
                  storage is locked", parameters as in_stack_* locals

Thunks are skipped: their signature is their target's. The CRT is counted but
listed only with --crt. The report goes to
annotations/<program>/reports/uncommitted_signatures.txt, units with the most
first. An export from before `sig` was recorded shows only the undefined types.

Reads exported annotations only. No Ghidra.

    python3 scripts/Python/report_uncommitted_signatures.py              # every program
    python3 scripts/Python/report_uncommitted_signatures.py bw1.exe --crt
"""

import argparse
import os
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm  # noqa: E402

DEFAULT_PROGRAMS = ("nocedit.exe", "nocturne.exe", "bw1.exe", "blairwitch2.exe", "bw3.exe")
NO_UNIT = "(no unit)"
REPORT = "uncommitted_signatures.txt"


def is_undefined(type_name):
    return str(type_name or "").startswith("undefined")


def reasons(f):
    """Why a function's stored signature is not one to trust, in report order; [] if it is."""
    if f.get("thunk"):
        return []
    out = []
    if f.get("sig"):
        out.append("sig " + f["sig"])
    if is_undefined(f.get("ret")):
        out.append("ret " + f["ret"])
    for i, p in enumerate((f.get("vars") or {}).get("params", [])):
        if is_undefined(p.get("type")):
            out.append("param %d:%s" % (i, p["type"]))
    if not f.get("sig") and not f.get("conv"):
        out.append("conv unknown")
    return out


def collect(functions):
    """unit -> [(addr, name, reasons)] for every function with a reason."""
    out = defaultdict(list)
    for f in functions:
        found = reasons(f)
        if found and f.get("addr"):
            unit = sm.split_qualified_name(f.get("name", ""))[0] or NO_UNIT
            out[unit].append((f["addr"].lower(), f.get("name", ""), found))
    for rows in out.values():
        rows.sort()
    return out


def kind(reason):
    """`param 2:undefined4` -> `param undefined4`, for the counts."""
    head, _, rest = reason.partition(" ")
    return "param " + rest.split(":", 1)[1] if head == "param" else reason


def render(program, total, units, crt):
    """The report's lines."""
    game = {u: r for u, r in units.items() if not u.startswith("crt_")}
    n_game = sum(len(r) for r in game.values())
    n_crt = sum(len(r) for u, r in units.items() if u.startswith("crt_"))
    counts = Counter(kind(reason) for rows in game.values() for _a, _n, rs in rows for reason in rs)
    lines = ["%s: %d functions, %d game and %d CRT with an uncommitted or undefined signature"
             % (program, total, n_game, n_crt)]
    lines += ["  %-18s %d" % kv for kv in sorted(counts.items(), key=lambda kv: (-kv[1], kv[0]))]
    shown = units if crt else game
    for unit, rows in sorted(shown.items(), key=lambda kv: (-len(kv[1]), kv[0])):
        lines += ["", "%s  %d" % (unit, len(rows))]
        lines += ["  %s  %-60s %s" % (addr, name, ", ".join(rs)) for addr, name, rs in rows]
    return lines


def write_report(program, crt=False):
    """Write the program's report; returns (path, its first line)."""
    functions = sm._load_buckets(program, "functions")  # pylint: disable=protected-access
    lines = render(program, len(functions), collect(functions), crt)
    path = os.path.join(sm.ANNOTATIONS, program, "reports", REPORT)
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")
    return path, lines[0]


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("programs", nargs="*", default=list(DEFAULT_PROGRAMS))
    ap.add_argument("--crt", action="store_true", help="list the CRT's functions too")
    args = ap.parse_args(argv)
    for program in args.programs:
        path, summary = write_report(program, args.crt)
        print("%s\n  -> %s" % (summary, os.path.relpath(path)))


if __name__ == "__main__":
    main()
