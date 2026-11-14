#!/usr/bin/env python3
"""How far each .keep has moved from the export beside it.

A .keep replaces the .cpp/.c the exporter writes next to it. As Ghidra learns more
(types, signatures, field names), its own output catches up with what was written
by hand, and some .keeps end up saying nothing the export does not. Those can be
deleted; the near ones can usually be finished in Ghidra and deleted after.

The two files are compared code line by code line: comments, blank lines,
`#include` lines and whitespace are dropped, so a .keep's `// MANUAL
RECONSTRUCTION` header and Ghidra's warnings do not count. Each .keep gets the
share of lines the two have in common:

  identical   1.0          the .keep only adds comments
  near        >= 0.95      a few lines left to move into Ghidra
  partial     >= 0.80
  rewritten   below 0.80

A .keep that uses a shim or AUTHENTIC switch carries behaviour, not decompiler
fixes, so it is never listed as redundant whatever its ratio.

Read-only, and informational: the exit status is 0. The pseudocode export writes
the same report to reports/keep_drift.txt.

Run from the repo root:
    python3 scripts/Python/check_keep_drift.py
    python3 scripts/Python/check_keep_drift.py --program all
"""

import argparse
import difflib
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
PROGRAMS = ("nocedit.exe", "nocturne.exe", "tridx7.dll")
NEAR = 0.95
PARTIAL = 0.80
KINDS = ("identical", "near", "partial", "rewritten")

COMMENT_RE = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)
WHITESPACE_RE = re.compile(r"\s+")
SHIM_RE = re.compile(r"\bSHIM_|AUTHENTIC|shims/")
KEEP_RE = re.compile(r"(.*)\.keep\.(cpp|c)$")


def read(path):
    with open(path, encoding="utf-8", errors="replace") as f:
        return f.read()


def code_lines(text):
    """The lines that are code: comments, blanks, #include lines and whitespace dropped."""
    out = []
    for line in COMMENT_RE.sub("", text).splitlines():
        line = WHITESPACE_RE.sub("", line)
        if line and not line.startswith("#include"):
            out.append(line)
    return out


def kind_of(ratio):
    if ratio == 1.0:
        return "identical"
    if ratio >= NEAR:
        return "near"
    if ratio >= PARTIAL:
        return "partial"
    return "rewritten"


def compare(keep_text, export_text):
    """(ratio, lines that differ) between a .keep and the export beside it."""
    a, b = code_lines(keep_text), code_lines(export_text)
    matcher = difflib.SequenceMatcher(None, a, b, autojunk=False)
    changed = sum(max(i2 - i1, j2 - j1) for tag, i1, i2, j1, j2 in matcher.get_opcodes()
                  if tag != "equal")
    return round(matcher.ratio(), 4), changed


def find_keeps(src_root):
    """(keep path, export path) for each .keep that has an export beside it."""
    for dirpath, _dirs, filenames in os.walk(src_root):
        for name in sorted(filenames):
            m = KEEP_RE.match(name)
            if not m:
                continue
            base = os.path.join(dirpath, m.group(1))
            export = next((base + ext for ext in (".cpp", ".c") if os.path.exists(base + ext)), None)
            if export:
                yield os.path.join(dirpath, name), export


def collect(src_root):
    """[{keep, ratio, changed, kind, shim}] for every .keep under src_root."""
    rows = []
    for keep, export in find_keeps(src_root):
        text = read(keep)
        ratio, changed = compare(text, read(export))
        rows.append({"keep": keep, "ratio": ratio, "changed": changed,
                     "kind": kind_of(ratio), "shim": bool(SHIM_RE.search(text))})
    return rows


def format_report(rows, relative_to=ROOT):
    """The text the command line prints and the exporter writes."""
    lines = ["%d .keep files compared with the export beside them" % len(rows)]
    for kind in KINDS:
        plain = sum(1 for r in rows if r["kind"] == kind and not r["shim"])
        shim = sum(1 for r in rows if r["kind"] == kind and r["shim"])
        lines.append("  %-10s %5d   (+%d using shim/AUTHENTIC switches)" % (kind, plain, shim))

    def listing(title, chosen):
        lines.extend(["", "-- %s --  %d" % (title, len(chosen))])
        for r in sorted(chosen, key=lambda r: (-r["ratio"], r["keep"])):
            lines.append("  %.3f %4d line(s) differ  %s"
                         % (r["ratio"], r["changed"], os.path.relpath(r["keep"], relative_to)))

    listing("REDUNDANT: identical code, no shim switch - can be deleted",
            [r for r in rows if r["kind"] == "identical" and not r["shim"]])
    listing("NEAR: a few lines from the export - finish in Ghidra, then delete",
            [r for r in rows if r["kind"] == "near" and not r["shim"]])
    return "\n".join(lines) + "\n"


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--program", default="nocedit.exe", choices=PROGRAMS + ("all",),
                        help="which binary to check (default: nocedit.exe)")
    args = parser.parse_args(argv)
    programs = PROGRAMS if args.program == "all" else (args.program,)
    rows = []
    for program in programs:
        src_root = os.path.join(ROOT, "annotations", program, "pseudocode", "src")
        if os.path.isdir(src_root):
            rows.extend(collect(src_root))
    sys.stdout.write(format_report(rows, ROOT))
    return 0


if __name__ == "__main__":
    sys.exit(main())
