#!/usr/bin/env python3
"""How far each .keep has moved from the export beside it.

A .keep replaces the .cpp/.c the exporter writes next to it. As Ghidra learns more
(types, signatures, field names), its own output catches up with what was written
by hand, and some .keeps end up saying nothing the export does not. Those can be
deleted; the near ones can usually be finished in Ghidra and deleted after.

The two files are compared code line by code line. Comments, blank lines and
`#include` lines are dropped, and each line is compared token by token, so
spacing doesn't count but string literals do: a `//` inside a string is not a
comment. A .keep's `// MANUAL RECONSTRUCTION` header and Ghidra's warnings do
not count. Each .keep gets the share of lines the two have in common:

  identical   1.0          the .keep only adds comments
  near        >= 0.95      a few lines left to move into Ghidra
  partial     >= 0.80
  rewritten   below 0.80
  no export   there is no .cpp/.c beside the .keep to compare with

A .keep that uses a shim or AUTHENTIC switch carries behaviour, not decompiler
fixes, so it is never listed as redundant whatever its ratio; those are listed
in their own section. Nor is an identical .keep that drops a Ghidra warning the
suspect scan counts (type propagation not settling, say): it records that the
code was checked and found right, so it is listed as reviewed. The report lists
every .keep exactly once.

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
NO_EXPORT = "no export"
KINDS = ("identical", "near", "partial", "rewritten", NO_EXPORT)

# a string or char literal is matched whole, so a `//` or `/*` inside one is not a comment
LITERAL_OR_COMMENT_RE = re.compile(r'''"(?:\\.|[^"\\\n])*"|'(?:\\.|[^'\\\n])*'|/\*.*?\*/|//[^\n]*''', re.S)
TOKEN_RE = re.compile(r'''"(?:\\.|[^"\\\n])*"|'(?:\\.|[^'\\\n])*'|\w+'''
                      r'''|<<=|>>=|\.\.\.|->|\+\+|--|<<|>>|&&|\|\||::|##|[-+*/%&|^!=<>]=|\S''')
SHIM_RE = re.compile(r"\bSHIM_|AUTHENTIC|shims/")
WARNING_RE = re.compile(r"/\*\s*WARNING:\s*(.*?)\s*\*/", re.S)
# The warnings the suspect scan never counts (suspects/_common.py BENIGN_WARNINGS),
# so a .keep gains nothing by dropping them
BENIGN_WARNING_RE = re.compile(r"Inlined function|This is an inlined function|Removing unreachable block")
KEEP_RE = re.compile(r"(.*)\.keep\.(cpp|c)$")


def read(path):
    with open(path, encoding="utf-8", errors="replace") as f:
        return f.read()


def strip_comments(text):
    """text without its comments; string and char literals are kept as they are."""
    def keep_literals(m):
        token = m.group(0)
        if token.startswith("/*"):
            return "\n" * token.count("\n")
        return "" if token.startswith("//") else token
    return LITERAL_OR_COMMENT_RE.sub(keep_literals, text)


def code_lines(text):
    """The lines that are code, as space-joined tokens: comments, blanks and #include lines dropped."""
    out = []
    for line in strip_comments(text).splitlines():
        line = " ".join(TOKEN_RE.findall(line))
        if line and not line.startswith("# include"):
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


def cleared_warnings(keep_text, export_text):
    """The counted Ghidra warnings in the export that the .keep no longer carries."""
    kept = set(WARNING_RE.findall(keep_text))
    return sorted({w for w in WARNING_RE.findall(export_text)
                   if w not in kept and not BENIGN_WARNING_RE.match(w)})


def is_redundant(row):
    return row["kind"] == "identical" and not row["shim"] and not row["clears"]


def find_keeps(src_root):
    """(keep path, export path or None) for each .keep under src_root."""
    for dirpath, _dirs, filenames in os.walk(src_root):
        for name in sorted(filenames):
            m = KEEP_RE.match(name)
            if not m:
                continue
            base = os.path.join(dirpath, m.group(1))
            export = next((base + ext for ext in (".cpp", ".c") if os.path.exists(base + ext)), None)
            yield os.path.join(dirpath, name), export


def collect(src_root):
    """[{keep, ratio, changed, kind, shim, clears}] for every .keep under src_root."""
    rows = []
    for keep, export in find_keeps(src_root):
        text = read(keep)
        if export is None:
            ratio, changed, kind, clears = 0.0, len(code_lines(text)), NO_EXPORT, []
        else:
            export_text = read(export)
            ratio, changed = compare(text, export_text)
            kind = kind_of(ratio)
            clears = cleared_warnings(text, export_text)
        rows.append({"keep": keep, "ratio": ratio, "changed": changed,
                     "kind": kind, "shim": bool(SHIM_RE.search(text)), "clears": clears})
    return rows


def format_report(rows, relative_to=ROOT):
    """The text the command line prints and the exporter writes."""
    lines = ["%d .keep files, each compared with the export beside it" % len(rows)]
    for kind in KINDS:
        plain = sum(1 for r in rows if r["kind"] == kind and not r["shim"])
        shim = sum(1 for r in rows if r["kind"] == kind and r["shim"])
        lines.append("  %-10s %5d   (+%d using shim/AUTHENTIC switches)" % (kind, plain, shim))

    def listing(title, chosen, with_kind=False):
        lines.extend(["", "-- %s --  %d" % (title, len(chosen))])
        for r in sorted(chosen, key=lambda r: (-r["ratio"], r["keep"])):
            lines.append("  %.3f %4d line(s) differ  %s%s"
                         % (r["ratio"], r["changed"], os.path.relpath(r["keep"], relative_to),
                            "  [%s]" % r["kind"] if with_kind else ""))

    def plain(kind):
        return [r for r in rows if r["kind"] == kind and not r["shim"]]

    listing("REDUNDANT: identical code, no shim switch - can be deleted",
            [r for r in rows if is_redundant(r)])
    listing("REVIEWED: identical code, drops a counted Ghidra warning - kept",
            [r for r in plain("identical") if r["clears"]])
    listing("NEAR: a few lines from the export - finish in Ghidra, then delete", plain("near"))
    listing("PARTIAL: most lines shared with the export", plain("partial"))
    listing("REWRITTEN: under 80% shared with the export", plain("rewritten"))
    listing("SHIM: uses a shim/AUTHENTIC switch - carries behaviour, kept whatever its ratio",
            [r for r in rows if r["shim"] and r["kind"] != NO_EXPORT], with_kind=True)
    listing("NO EXPORT: no .cpp/.c beside the .keep - the function may have been renamed or removed",
            [r for r in rows if r["kind"] == NO_EXPORT])
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
