#!/usr/bin/env python3
"""Ghidra's "Failed to disassemble" bookmarks, checked against the listing.

Ghidra leaves an Error bookmark (category "Bad Instruction") wherever a flow ran
into bytes it could not decode: the start of an instruction already decoded at
a different alignment, or defined data. It usually means a bad function
creation: a misaligned (phase-shifted) function, or a flow into the middle of
an instruction. Ghidra keeps the bookmark after the problem is fixed, so each
one is checked against the exported listing (pseudocode/src/**/<function>.asm)
of the function that owns it. The verdicts, most urgent first:

  BAD DECODE          the address is still no instruction start, and no flow
                      reaches it: a wrong instruction stream covers it
  ENTRY AT CONFLICT   a function starts at the conflicting address: it, or
                      the flow that hit it, is a bad creation
  OUTSIDE FUNCTIONS   the address is in no function body
  NO LISTING          the owner has no exported .asm to check against
  MID-INSTRUCTION     jumps land inside an instruction. Watcom's strstr does
                      this on purpose (`test ax,0xcf89` skips `mov edi,ecx`);
                      elsewhere it is a misdecode
  STALE               an instruction starts there now; delete the bookmark

The report goes to annotations/<program>/reports/bad_instructions.txt.
Reads exported annotations only. No Ghidra.

    python3 scripts/Python/report_bad_instructions.py              # every program
    python3 scripts/Python/report_bad_instructions.py bw3.exe
"""

import argparse
import bisect
import glob
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm  # noqa: E402

DEFAULT_PROGRAMS = ("nocedit.exe", "nocturne.exe", "bw1.exe", "blairwitch2.exe", "bw3.exe")
CATEGORY = "Bad Instruction"
REPORT = "bad_instructions.txt"
CONFLICT_RE = re.compile(r"conflicting (instruction|data) (?:at ([0-9a-fA-F]+)|\(flow from ([0-9a-fA-F]+)\))")
FLOW_RE = re.compile(r"JUMP|CALL|FALL")
ASM_ADDR_RE = re.compile(r";\s*([0-9a-fA-F]{8})\b")
FUN_SUFFIX_RE = re.compile(r"FUN_([0-9a-fA-F]{8})$")
VERDICTS = ("BAD DECODE", "ENTRY AT CONFLICT", "OUTSIDE FUNCTIONS", "NO LISTING", "MID-INSTRUCTION", "STALE")


def parse_conflict(comment):
    """(what, address) from a bookmark comment: what is 'instruction' or 'data';
    the address is the conflicting one, or the flow's own start. None if unparsed."""
    m = CONFLICT_RE.search(comment or "")
    if not m:
        return None
    return m.group(1), int(m.group(2) or m.group(3), 16)


def instruction_starts(asm_text):
    """The addresses of the instructions in an exported .asm listing."""
    starts = set()
    for line in asm_text.splitlines():
        code = line.strip()
        if code and not code.startswith(";"):
            m = ASM_ADDR_RE.search(code)
            if m:
                starts.add(int(m.group(1), 16))
    return starts


def listings(pseudocode_src):
    """{function address: .asm path} for every exported listing under src/."""
    out = {}
    for path in glob.glob(os.path.join(pseudocode_src, "**", "*.asm"), recursive=True):
        m = FUN_SUFFIX_RE.search(os.path.basename(path)[:-len(".asm")])
        if m:
            out[int(m.group(1), 16)] = path
    return out


class Ranges:
    """Which function owns an address, and which starts there."""

    def __init__(self, functions):
        self.entries = {int(f["addr"], 16): f.get("name", "") for f in functions}
        spans = []
        for f in functions:
            for b in f.get("body", []) or []:
                spans.append((int(b["start"], 16), int(b["end"], 16), int(f["addr"], 16)))
        spans.sort()
        self.spans = spans
        self.starts = [s[0] for s in spans]

    def owner(self, addr):
        """The entry of the function whose body holds addr, or None."""
        i = bisect.bisect_right(self.starts, addr) - 1
        while i >= 0 and addr - self.spans[i][0] <= 0x100000:
            start, end, entry = self.spans[i]
            if start <= addr <= end:
                return entry
            i -= 1
        return None

    def name(self, entry):
        return None if entry is None else self.entries.get(entry)


def flows_into(xrefs, addr):
    """{source address: type} of the jumps and calls that reach addr."""
    target = "%08x" % addr
    return {int(x["from"], 16): x.get("type", "")
            for x in xrefs
            if x.get("to", "").lower() == target and FLOW_RE.search(x.get("type", ""))}


def verdict(addr, conflict, owner, conflict_entry, starts, sources):
    """starts: the owner's instruction addresses, or None without a listing."""
    if starts is not None and addr in starts:
        return "STALE"
    if conflict != addr and conflict_entry:
        return "ENTRY AT CONFLICT"
    if owner is None:
        return "OUTSIDE FUNCTIONS"
    if starts is None:
        return "NO LISTING"
    return "MID-INSTRUCTION" if sources else "BAD DECODE"


def analyse(bookmarks, functions, xrefs, asm_paths, read=None):
    """One row per Bad Instruction bookmark, most urgent verdict first."""
    read = read or (lambda p: open(p, encoding="utf-8").read())  # pylint: disable=consider-using-with
    ranges = Ranges(functions)
    rows = []
    for b in bookmarks:
        if b.get("cat") != CATEGORY:
            continue
        addr = int(b["addr"], 16)
        parsed = parse_conflict(b.get("comment"))
        what, conflict = parsed if parsed else ("?", addr)
        owner = ranges.owner(addr)
        conflict_entry = ranges.name(conflict) if conflict in ranges.entries else None
        starts = instruction_starts(read(asm_paths[owner])) if owner in asm_paths else None
        sources = flows_into(xrefs, addr)
        rows.append({
            "addr": addr, "conflict": conflict, "what": what,
            "verdict": verdict(addr, conflict, owner, conflict_entry, starts, sources),
            "owner": ranges.name(owner), "conflict_owner": ranges.name(ranges.owner(conflict)),
            "conflict_entry": conflict_entry,
            "sources": [(src, kind, ranges.name(ranges.owner(src))) for src, kind in sorted(sources.items())],
        })
    rows.sort(key=lambda r: (VERDICTS.index(r["verdict"]), r["addr"]))
    return rows


def render(program, rows):
    """The report's lines."""
    counts = [(v, sum(1 for r in rows if r["verdict"] == v)) for v in VERDICTS]
    lines = ["%s: %d failed-to-disassemble bookmark(s)%s" % (
        program, len(rows), "".join(", %d %s" % (n, v) for v, n in counts if n))]
    for r in rows:
        lines.append("")
        lines.append("%08x  %-17s  conflicting %s at %08x" % (r["addr"], r["verdict"], r["what"], r["conflict"]))
        lines.append("  in        %s" % (r["owner"] or "-"))
        if r["conflict"] != r["addr"] and r["conflict_owner"] != r["owner"]:
            lines.append("  conflict  %s" % (r["conflict_owner"] or "-"))
        for src, kind, owner in r["sources"]:
            lines.append("  from      %08x %s  %s" % (src, kind, owner or "-"))
    return lines


def write_report(program):
    """Write the program's report; returns (path, its first line)."""
    load = sm._load_buckets  # pylint: disable=protected-access
    root = os.path.join(sm.ANNOTATIONS, program)
    rows = analyse(load(program, "bookmarks"), load(program, "functions"), load(program, "cross_references"),
                   listings(os.path.join(root, "pseudocode", "src")))
    lines = render(program, rows)
    path = os.path.join(root, "reports", REPORT)
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as fh:
        fh.write("\n".join(lines) + "\n")
    return path, lines[0]


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("programs", nargs="*", default=list(DEFAULT_PROGRAMS))
    args = ap.parse_args(argv)
    for program in args.programs:
        path, summary = write_report(program)
        print("%s\n  -> %s" % (summary, os.path.relpath(path)))


if __name__ == "__main__":
    main()
