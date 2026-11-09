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
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from crt_catalog import CATALOG_MD, CATALOG_TSV, parse_catalog_md, render_tsv, write_tsv


def main(argv=None):
    ap = argparse.ArgumentParser(description="Extract CRT catalog md -> tsv")
    ap.add_argument("--md", default=CATALOG_MD)
    ap.add_argument("--tsv", default=CATALOG_TSV)
    ap.add_argument("--check", action="store_true",
                    help="Verify the TSV matches the md; do not write (exit 1 if stale)")
    args = ap.parse_args(argv)

    entries, warnings = parse_catalog_md(args.md)
    for w in warnings:
        print("WARN: %s" % w)

    conf = Counter(e["conf"] for e in entries)
    print("Parsed %d entries from %s  (%s)"
          % (len(entries), args.md, "  ".join("%s=%d" % (k, conf[k]) for k in ("H", "M", "L"))))

    if args.check:
        cur = ""
        if os.path.exists(args.tsv):
            with open(args.tsv) as fh:
                cur = fh.read()
        if cur == render_tsv(entries):
            print("TSV is up to date: %s" % args.tsv)
            sys.exit(0)
        print("STALE: %s differs from the md. Re-run without --check." % args.tsv)
        sys.exit(1)

    write_tsv(entries, args.tsv)
    print("Wrote %d rows -> %s" % (len(entries), args.tsv))


if __name__ == "__main__":
    main()
