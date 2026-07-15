#!/usr/bin/env python3
# Flatten the tridx7 CRT identification catalog markdown into the canonical TSV
# data file (crt_functions.tsv). No Ghidra required.
#
# Usage:
#   python extract_crt_catalog.py            # md -> tsv (default paths)
#   python extract_crt_catalog.py --check    # verify tsv is up to date (exit 1 if stale)

import argparse
import os
import sys

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

from crt_catalog import (CATALOG_MD, CATALOG_TSV, TSV_COLUMNS,
                         parse_catalog_md, write_tsv, _tsv_escape)


def _render(entries):
    rows = sorted(entries, key=lambda e: int(e["addr"], 16))
    lines = ["\t".join(TSV_COLUMNS)]
    for e in rows:
        lines.append("\t".join(_tsv_escape(str(e.get(c, ""))) for c in TSV_COLUMNS))
    return "\n".join(lines) + "\n"


def main():
    ap = argparse.ArgumentParser(description="Extract CRT catalog md -> tsv")
    ap.add_argument("--md", default=CATALOG_MD)
    ap.add_argument("--tsv", default=CATALOG_TSV)
    ap.add_argument("--check", action="store_true",
                    help="Verify the TSV matches the md; do not write (exit 1 if stale)")
    args = ap.parse_args()

    entries, warnings = parse_catalog_md(args.md)
    for w in warnings:
        print("WARN: %s" % w)

    from collections import Counter
    conf = Counter(e["conf"] for e in entries)
    print("Parsed %d entries from %s  (%s)"
          % (len(entries), args.md, "  ".join("%s=%d" % (k, conf[k]) for k in ("H", "M", "L"))))

    new_text = _render(entries)
    if args.check:
        cur = open(args.tsv).read() if os.path.exists(args.tsv) else ""
        if cur == new_text:
            print("TSV is up to date: %s" % args.tsv)
            sys.exit(0)
        print("STALE: %s differs from the md. Re-run without --check." % args.tsv)
        sys.exit(1)

    with open(args.tsv, "w") as fh:
        fh.write(new_text)
    print("Wrote %d rows -> %s" % (len(entries), args.tsv))


if __name__ == "__main__":
    main()
