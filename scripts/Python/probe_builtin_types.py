#!/usr/bin/env python3
"""
Temp probe: compare /PE, /DOS, /VxD, /WinNT types that Ghidra has in
data_types.json against the hardcoded block in headers.py.

For each type, reports:
  * category
  * defined as hardcoded typedef in headers.py?  (yes/no)
  * Ghidra's recorded size and field list

Use this to decide where each type should be emitted and what's still
missing. This is an analysis tool only — it does not modify any file.
"""

import argparse
import json
import os
import re
import sys


STANDARD_CATS = ('/PE', '/DOS', '/VxD', '/WinNT')


def collect_hardcoded_names(headers_py_path):
    """Scan headers.py for 'typedef struct NAME {' / 'typedef union NAME {'."""
    names = set()
    pat = re.compile(r'typedef\s+(?:struct|union)\s+(\w+)\s*\{')
    with open(headers_py_path, 'r') as f:
        text = f.read()
    for m in pat.finditer(text):
        names.add(m.group(1))
    return names


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--data-types', required=True)
    ap.add_argument('--headers-py', required=True)
    args = ap.parse_args()

    with open(args.data_types, 'r') as f:
        dt = json.load(f)

    hardcoded = collect_hardcoded_names(args.headers_py)

    buckets = {c: [] for c in STANDARD_CATS}
    for s in dt.get('structs', []) + dt.get('unions', []):
        cat = s.get('cat', '')
        if cat in STANDARD_CATS:
            buckets[cat].append(s)

    for cat in STANDARD_CATS:
        items = buckets[cat]
        if not items:
            continue
        print('=== %s (%d types) ===' % (cat, len(items)))
        for s in sorted(items, key=lambda x: x['name']):
            name = s['name']
            marker = 'HARDCODED' if name in hardcoded else 'MISSING  '
            print('  %s %-50s size=%-4d pack=%s alig=%s' % (
                marker, name, s.get('len', 0), s.get('pack'), s.get('alig')))
        print()

    missing_count = sum(
        1 for c in STANDARD_CATS for s in buckets[c] if s['name'] not in hardcoded)
    print('total missing from hardcoded block: %d' % missing_count)
    return 0


if __name__ == '__main__':
    sys.exit(main())
