#!/usr/bin/env python3
"""Stale-keep linter for adjacency-sentinel rewrites.

The exporter's adjacency_sentinel_transform rewrites pool-iteration loops in
fresh decompiled .cpp/.c files (pool + count form, runtime-correct). But
.keep.cpp/.keep.c files bypass the transform entirely — once written they
freeze whatever form they were written with. If a .keep was authored before
the transform learned about a particular pool/sentinel pair, it carries the
broken `&g_<sentinel>` form forever and crashes/hangs at runtime.

This linter:
  1. Reads `reports/adjacency_sentinel_rewrites.md` for each Before/After pair
  2. Searches every .keep.cpp/.keep.c in the project for the broken `Before:`
     condition
  3. Reports any matches so the user can manually update the .keep

We don't auto-edit .keep files — they're the user's authoritative manual
work. The linter only flags candidates.

Run from the repo root:
    python3 scripts/Python/check_stale_keeps.py
"""

import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
REPORT = os.path.join(ROOT, 'annotations', 'nocedit.exe', 'reports',
                      'adjacency_sentinel_rewrites.md')
KEEP_ROOT = os.path.join(ROOT, 'annotations', 'nocedit.exe', 'pseudocode')


def parse_rewrites(report_path):
    """Parse the rewrites markdown into [(function, pool, sentinel, before, after)] tuples."""
    if not os.path.exists(report_path):
        return []

    with open(report_path) as f:
        text = f.read()

    rewrites = []
    current_func = None
    func_re = re.compile(r'^### `([^`]+)`')
    pool_re = re.compile(r'^- Pool `([^`]+)` sentinel `([^`]+)`')
    before_re = re.compile(r'^\s+- Before:\s+`([^`]+)`')
    after_re = re.compile(r'^\s+- After:\s+`([^`]+)`')

    pending = None
    for line in text.split('\n'):
        m = func_re.match(line)
        if m:
            current_func = m.group(1)
            continue
        m = pool_re.match(line)
        if m and current_func:
            pending = {'function': current_func, 'pool': m.group(1),
                       'sentinel': m.group(2), 'before': None, 'after': None}
            continue
        m = before_re.match(line)
        if m and pending:
            pending['before'] = m.group(1)
            continue
        m = after_re.match(line)
        if m and pending:
            pending['after'] = m.group(1)
            rewrites.append(pending)
            pending = None
    return rewrites


def find_keeps(keep_root):
    """Walk the pseudocode tree, return all .keep.cpp / .keep.c files."""
    keeps = []
    for dirpath, _, filenames in os.walk(keep_root):
        for fn in filenames:
            if fn.endswith('.keep.cpp') or fn.endswith('.keep.c'):
                keeps.append(os.path.join(dirpath, fn))
    return keeps


def check_keep(keep_path, rewrites):
    """Return list of stale rewrites detected in this keep file."""
    with open(keep_path) as f:
        body = f.read()

    matches = []
    for r in rewrites:
        # Build a regex from the `Before:` text:
        # - Tolerate whitespace differences (multiple spaces, leading/trailing)
        # - The Before text is a `while (...)` condition — we look for the
        #   sentinel-comparison shape rather than exact whitespace match.
        sentinel = r['sentinel']
        # Direct substring match for the bare sentinel address — covers the
        # common case `... != (T *)&g_Sentinel)` and `... != &g_Sentinel)`.
        if '&' + sentinel in body:
            # Exclude a likely false positive: the .keep happens to mention
            # the sentinel name in a comment. Require the match be inside
            # a `while (...)` line.
            for line in body.split('\n'):
                if '&' + sentinel in line and 'while' in line:
                    matches.append(r)
                    break
    return matches


def main():
    if not os.path.exists(REPORT):
        print(f'No rewrites report at {REPORT}', file=sys.stderr)
        return 0

    rewrites = parse_rewrites(REPORT)
    if not rewrites:
        print('No rewrites parsed from report — nothing to check.')
        return 0

    keeps = find_keeps(KEEP_ROOT)
    print(f'Checking {len(keeps)} .keep files against {len(rewrites)} known rewrites...')

    stale = {}  # keep_path -> list of stale rewrites
    for kp in keeps:
        matches = check_keep(kp, rewrites)
        if matches:
            stale[kp] = matches

    if not stale:
        print('All .keep files are clean.')
        return 0

    print(f'\n=== {len(stale)} STALE .keep file(s) found ===\n')
    for kp, matches in sorted(stale.items()):
        rel = os.path.relpath(kp, ROOT)
        print(f'{rel}')
        for m in matches:
            print(f'   pool `{m["pool"]}` sentinel `{m["sentinel"]}` (in fn {m["function"]})')
            print(f'     Before: {m["before"]}')
            print(f'     After:  {m["after"]}')
        print()
    print('These .keep files reference adjacency sentinels the exporter now')
    print('rewrites in the .cpp. The .keep should be updated to match the')
    print('After form, or the .keep deleted if the .cpp now compiles without it.')
    return 1


if __name__ == '__main__':
    sys.exit(main())
