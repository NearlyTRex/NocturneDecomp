#!/usr/bin/env python3
"""Validate extract_line_pins.py against the decompiled nocedit.exe sources.

nocedit.exe is the binary we have already solved: its pins are visible in the
exported pseudocode as literal

    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 903;

pairs. That makes it a free correctness oracle -- if the raw-PE extractor does
not reproduce what the sources say, the extractor is wrong, and we learn that
*before* trusting a single number it reports about nocturne.exe.

Usage:
    verify_line_pins.py pins_nocedit.json
"""

import argparse
import json
import re
import sys
from collections import Counter
from pathlib import Path

SRC_ROOT = Path("annotations/nocedit.exe/pseudocode/src")

# g_CurrentFilename = "..\\core\\setutil.cpp";   (then, nearby) g_CurrentLineNumber = 903;
FILE_RE = re.compile(r'g_Current(?:Debug)?Filename\s*=\s*"([^"]+)"')
LINE_RE = re.compile(r'g_Current(?:DebugLine|LineNumber)\s*=\s*(0x[0-9a-fA-F]+|\d+)')


def source_pins(root: Path):
    """Ground truth: (file, line) multiset scraped from the exported .cpp/.c."""
    pins = Counter()
    skipped = {".keep", ".chunked", ".mmx", ".byval"}
    # NB: the export uses directories literally named "codec.cpp/" that contain
    # one file per function, so rglob("*.cpp") yields directories too.
    for path in list(root.rglob("*.cpp")) + list(root.rglob("*.c")):
        if not path.is_file() or any(s in path.name for s in skipped):
            continue
        text = path.read_text(errors="replace")
        # pins appear as a filename assignment followed by a line assignment,
        # in either order, within a couple of lines of each other
        lines = text.split("\n")
        for i, ln in enumerate(lines):
            m = FILE_RE.search(ln)
            if not m:
                continue
            fname = m.group(1).replace("\\\\", "/").replace("\\", "/")
            # Scan outward by distance, forward first. Scanning i-3..i+3 in
            # order and taking the first hit grabs the PREVIOUS pin's line when
            # pins are consecutive (memdbg free-wrappers emit them back to
            # back), which silently drops every pin but the first.
            for d in range(0, 4):
                for j in (i + d, i - d) if d else (i,):
                    if not (0 <= j < len(lines)):
                        continue
                    lm = LINE_RE.search(lines[j])
                    if lm:
                        pins[(fname, int(lm.group(1), 0))] += 1
                        break
                else:
                    continue
                break
    return pins


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("pins_json")
    ap.add_argument("--src", default=str(SRC_ROOT))
    args = ap.parse_args()

    truth = source_pins(Path(args.src))
    data = json.load(open(args.pins_json))
    got = Counter((p["file"], p["line"]) for p in data["pins"])

    # The oracle picks up a couple of non-pin globals (a "(unknown)" default in
    # a global initializer). Only real __FILE__ paths can ever be extracted.
    shape = re.compile(r"^\.\./\w+/[\w\-]+\.(?:cpp|c)$")
    t_set = {p for p in truth if shape.match(p[0])}
    g_set = set(got)

    both = t_set & g_set
    only_src = t_set - g_set
    only_bin = g_set - t_set

    recall = 100 * len(both) / max(1, len(t_set))
    print(f"source oracle : {len(t_set)} distinct (file,line) pins")
    print(f"extracted     : {len(g_set)} distinct (file,line) pins")
    print(f"agree         : {len(both)}  ({recall:.1f}% of oracle)")
    print(f"missed        : {len(only_src)}  (in source, not recovered)")
    print(f"extra         : {len(only_bin)}  (recovered, absent from export)")

    if only_src:
        print("\n-- MISSED (extractor recall gaps) --")
        for f, l in sorted(only_src)[:12]:
            print(f"   {f}:{l}")
    if only_bin:
        # Not necessarily errors: the export only covers functions Ghidra
        # decompiled, while the extractor sees every instruction in the image.
        # e.g. core/dmodel.cpp:424/430/436 are real pins in un-exported code.
        print("\n-- EXTRA (pins in code the export doesn't cover) --")
        for f, l in sorted(only_bin)[:12]:
            print(f"   {f}:{l}")
        print("   by file:", dict(Counter(f for f, _ in only_bin).most_common(8)))

    ok = recall >= 98.0
    print(f"\nRESULT: {'PASS' if ok else 'FAIL'}  (recall {recall:.1f}%, threshold 98.0%)")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
