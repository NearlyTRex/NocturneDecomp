#!/usr/bin/env python3
"""Report adjacency-sentinel loop bugs in the decompiled Watcom pseudocode.

A Watcom idiom: pool-init/process/render loops exit when the iterator
pointer reaches the address of the *next named global* in the original
binary. Watcom knew the next global was placed immediately after the
pool, so pointer-equality was a cheap end-of-array check. Our linker
orders globals arbitrarily; the sentinel never matches, and the loop
walks past the pool corrupting neighboring memory (AddressSanitizer
catches it as global-buffer-overflow).

This script detects candidates in two phases:

  1. Pattern match on .cpp: find loops of the form
        while (<iter> != (<T> *)&<g_Global>)
        while ((<T> *)<iter> != &<g_Global>)
        while (<iter> != &<g_Global>)
     where <iter> was initialized from a declared array pool in the
     same function.

  2. Ground-truth verification via the Ghidra symbol table: promote the
     candidate to CONFIRMED only if <g_Global> is the *immediate next*
     named symbol after <g_Pool> in the original binary's address space
     (no other named symbol between them). Anything else is REJECTED.

The report is emitted as markdown and includes the proposed rewrite for
every confirmed case. Run this, eyeball the report; if it matches the
fixes we've been writing by hand, we can trust an auto-rewrite transform
in the exporter pipeline.

Usage:
    python3 scripts/Python/adjacency_sentinel_report.py [annotations_root]
"""

import os
import re
import sys
import json
import bisect
from collections import defaultdict


# ---------------------------------------------------------------------------
# Symbol address table (from Ghidra annotations)
# ---------------------------------------------------------------------------

def load_symbols(symbols_label_dir):
    symbols = {}
    for filename in sorted(os.listdir(symbols_label_dir)):
        if not filename.endswith('.json') or filename.endswith('_buckets.json'):
            continue
        with open(os.path.join(symbols_label_dir, filename)) as f:
            entries = json.load(f)
        for e in entries:
            name = e.get('name')
            addr = e.get('addr')
            if not name or not addr:
                continue
            try:
                symbols[name] = int(addr, 16)
            except ValueError:
                pass
    return symbols


# ---------------------------------------------------------------------------
# Pool inventory (from declared array globals in src/globals/)
# ---------------------------------------------------------------------------

POOL_RE = re.compile(
    r'^[A-Za-z_]\w*\s+([A-Za-z_]\w*)\s*\[(\d+)\]\s*=',
    re.MULTILINE,
)


def load_pool_inventory(globals_dir):
    pools = {}
    for filename in os.listdir(globals_dir):
        if not filename.endswith('.cpp'):
            continue
        with open(os.path.join(globals_dir, filename)) as f:
            content = f.read()
        for m in POOL_RE.finditer(content):
            pools[m.group(1)] = int(m.group(2))
    return pools


# ---------------------------------------------------------------------------
# Sentinel pattern scan
# ---------------------------------------------------------------------------

# Three shape variants seen in the codebase:
#   while (iter != (T *)&g_Global)
#   while ((T *)iter != &g_Global)
#   while (iter != &g_Global)         (no cast)
SENTINEL_PATTERNS = [
    re.compile(
        r'\bwhile\s*\(\s*(\w+)\s*!=\s*\(\s*\w+\s*\*\s*\)\s*&\s*(g_\w+)\s*\)'
    ),
    re.compile(
        r'\bwhile\s*\(\s*\(\s*\w+\s*\*\s*\)\s*(\w+)\s*!=\s*&\s*(g_\w+)\s*\)'
    ),
    re.compile(
        r'\bwhile\s*\(\s*(\w+)\s*!=\s*&\s*(g_\w+)\s*\)'
    ),
]


def find_iter_origin(text, iter_name, loop_offset, depth=0, visited=None):
    """Backward-scan for what pool this iterator was derived from.

    Handles two shapes seen in the codebase:
      Style A: `<iter> = g_<Pool>;` (direct)
      Style B: `<iter> = <other_iter> [+ <expr>];` where <other_iter>
               was itself initialized from a pool (transitive)

    Returns the pool name or None. Recursion is bounded by `depth` and
    `visited` to guard against cycles in degenerate code.
    """
    if depth > 5:
        return None
    if visited is None:
        visited = set()
    if iter_name in visited:
        return None
    visited = visited | {iter_name}

    prefix = text[:loop_offset]
    # Any assignment to iter_name: `<iter> = <rhs>;`
    assign_re = re.compile(
        r'\b' + re.escape(iter_name) + r'\s*=\s*([^;]+?);'
    )
    matches = list(assign_re.finditer(prefix))
    if not matches:
        return None

    # Walk from nearest to furthest; skip self-referential assignments
    # (e.g. `iter = iter + 1` inside the loop body) — those don't tell us
    # anything about the original pool, we want the pre-loop init.
    for m in reversed(matches):
        rhs = m.group(1).strip()

        # Direct pool reference: first g_<Name> token in the RHS
        direct = re.search(r'\b(g_\w+)\b', rhs)
        if direct:
            return direct.group(1)

        # Transitive: iter was assigned from another local. Skip self-refs.
        local = re.search(r'\b([A-Za-z_][A-Za-z_0-9]*)\b', rhs)
        if local and local.group(1) != iter_name:
            result = find_iter_origin(
                text, local.group(1), m.start(),
                depth=depth + 1, visited=visited,
            )
            if result:
                return result
        # else: self-ref or no identifier — keep scanning backward
    return None


def scan_file(path):
    """Return raw loop candidates from a single .cpp file."""
    try:
        with open(path) as f:
            content = f.read()
    except (OSError, UnicodeDecodeError):
        return []

    findings = []
    seen_positions = set()
    for pattern in SENTINEL_PATTERNS:
        for m in pattern.finditer(content):
            if m.start() in seen_positions:
                continue
            seen_positions.add(m.start())
            iter_name = m.group(1)
            sentinel_name = m.group(2)
            pool_name = find_iter_origin(content, iter_name, m.start())
            line_no = content[:m.start()].count('\n') + 1
            findings.append({
                'path': path,
                'line_no': line_no,
                'iter': iter_name,
                'pool': pool_name,
                'sentinel': sentinel_name,
                'match_text': m.group(0),
            })
    return findings


# ---------------------------------------------------------------------------
# Adjacency verification against the original symbol table
# ---------------------------------------------------------------------------

def verify(finding, pools, sorted_symbols, addr_list):
    """Classify a finding based on the ground-truth symbol table.

    Returns (status, reason) where status is one of:
        CONFIRMED  — pool and sentinel are adjacent in original binary
        REJECTED   — sentinel is NOT the immediate next global after pool
        UNKNOWN    — missing data to decide (no pool match, no addresses)
    """
    pool = finding['pool']
    sentinel = finding['sentinel']

    if not pool:
        return ('UNKNOWN', 'iterator origin could not be resolved to a pool')
    if pool not in pools:
        return ('UNKNOWN', 'iterator origin `%s` is not a declared array pool' % pool)

    pool_addr = None
    sentinel_addr = None
    for name, addr in sorted_symbols:
        if name == pool:
            pool_addr = addr
        if name == sentinel:
            sentinel_addr = addr

    if pool_addr is None:
        return ('UNKNOWN', 'pool `%s` has no address in the symbol table' % pool)
    if sentinel_addr is None:
        return ('UNKNOWN', 'sentinel `%s` has no address in the symbol table' % sentinel)
    if sentinel_addr <= pool_addr:
        return ('REJECTED', 'sentinel addr (0x%x) <= pool addr (0x%x)' % (sentinel_addr, pool_addr))

    # Find pool in the sorted list; confirm sentinel is the next *exterior*
    # symbol (skip Ghidra's interior field annotations like
    # `g_Pool[1].field`, `g_Pool.field`, and aliases at the pool's address).
    idx = bisect.bisect_left(addr_list, pool_addr)
    if idx >= len(sorted_symbols) or sorted_symbols[idx][1] != pool_addr:
        return ('UNKNOWN', 'pool addr not found in sorted symbol index')

    interior_prefixes = (pool + '[', pool + '.')
    # Ghidra-synthesized auto-labels for unstructured data within the
    # binary (string literals, raw blobs, data that wasn't given a real
    # name). These are NOT real C globals — skip them when looking for
    # the "next exterior global after the pool."
    AUTOLABEL_PREFIXES = ('s_', 'DAT_', 'u_', 'UNK_')
    j = idx + 1
    while j < len(sorted_symbols):
        name, addr = sorted_symbols[j]
        if name.startswith(interior_prefixes):
            j += 1
            continue
        if addr == pool_addr:
            j += 1  # alias at the pool's own address
            continue
        if name.startswith(AUTOLABEL_PREFIXES):
            j += 1  # Ghidra auto-label for raw data, not a real global
            continue
        break
    if j >= len(sorted_symbols):
        return ('UNKNOWN', 'pool is the last named symbol (after skipping interior refs)')

    next_name, next_addr = sorted_symbols[j]
    if next_name == sentinel and next_addr == sentinel_addr:
        return ('CONFIRMED', 'sentinel is the immediate next exterior global after pool')
    return ('REJECTED', 'another global sits between pool and sentinel: `%s` @ 0x%x' % (
        next_name, next_addr,
    ))


# ---------------------------------------------------------------------------
# Driver
# ---------------------------------------------------------------------------

SKIP_SUFFIXES = ('.keep.cpp', '.mmx.cpp', '.byval.cpp', '.chunked.cpp')


def walk_cpp_files(src_root):
    for root, _dirs, files in os.walk(src_root):
        for name in files:
            if not name.endswith('.cpp'):
                continue
            if name.endswith(SKIP_SUFFIXES):
                continue
            yield os.path.join(root, name)


def has_keep(cpp_path):
    return os.path.exists(cpp_path[:-4] + '.keep.cpp')


def format_confirmed(findings, repo_root):
    """Emit the 'confirmed' section grouped by file, ordered by line number."""
    by_file = defaultdict(list)
    for f in findings:
        by_file[f['path']].append(f)

    lines = []
    for path in sorted(by_file.keys()):
        rel = os.path.relpath(path, repo_root)
        marker = ' *(has `.keep.cpp` — verify it matches the proposed rewrite)*' if has_keep(path) else ''
        lines.append('### `%s`%s' % (rel, marker))
        lines.append('')
        for f in sorted(by_file[path], key=lambda x: x['line_no']):
            lines.append('- **L%d** — `%s` iterates `%s[%d]`, sentinel `%s`' % (
                f['line_no'], f['iter'], f['pool'], f['pool_count'], f['sentinel'],
            ))
            lines.append('  - Current: `%s`' % f['match_text'])
            lines.append('  - Rewrite: `while (%s != %s + %d)`' % (
                f['iter'], f['pool'], f['pool_count'],
            ))
        lines.append('')
    return lines


def format_rejected(findings, repo_root):
    by_file = defaultdict(list)
    for f in findings:
        by_file[f['path']].append(f)
    lines = []
    for path in sorted(by_file.keys()):
        rel = os.path.relpath(path, repo_root)
        lines.append('### `%s`' % rel)
        lines.append('')
        for f in sorted(by_file[path], key=lambda x: x['line_no']):
            lines.append('- L%d: `%s != &%s` — %s' % (
                f['line_no'], f['iter'], f['sentinel'], f['reason'],
            ))
        lines.append('')
    return lines


def main():
    here = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.abspath(os.path.join(here, '..', '..'))

    annotations_root = (
        sys.argv[1] if len(sys.argv) > 1
        else os.path.join(repo_root, 'annotations', 'nocedit.exe')
    )
    symbols_dir = os.path.join(annotations_root, 'symbols_label')
    pseudocode_root = os.path.join(annotations_root, 'pseudocode')
    globals_dir = os.path.join(pseudocode_root, 'src', 'globals')
    src_root = os.path.join(pseudocode_root, 'src')
    reports_dir = os.path.join(annotations_root, 'reports')
    os.makedirs(reports_dir, exist_ok=True)

    print('Loading symbol table from %s' % symbols_dir)
    symbols = load_symbols(symbols_dir)
    print('  %d named globals' % len(symbols))

    print('Loading pool inventory from %s' % globals_dir)
    pools = load_pool_inventory(globals_dir)
    print('  %d declared array pools' % len(pools))

    sorted_symbols = sorted(symbols.items(), key=lambda kv: kv[1])
    addr_list = [a for _, a in sorted_symbols]

    print('Scanning .cpp files under %s' % src_root)
    candidates = []
    file_count = 0
    for path in walk_cpp_files(src_root):
        file_count += 1
        candidates.extend(scan_file(path))
    print('  %d files scanned, %d raw candidates' % (file_count, len(candidates)))

    confirmed = []
    rejected = []
    unknown = []
    for c in candidates:
        status, reason = verify(c, pools, sorted_symbols, addr_list)
        c['status'] = status
        c['reason'] = reason
        if status == 'CONFIRMED':
            c['pool_count'] = pools[c['pool']]
            confirmed.append(c)
        elif status == 'REJECTED':
            rejected.append(c)
        else:
            unknown.append(c)

    confirmed_files = {c['path'] for c in confirmed}
    confirmed_files_with_keep = {c['path'] for c in confirmed if has_keep(c['path'])}
    confirmed_loops_in_keep_files = sum(1 for c in confirmed if has_keep(c['path']))

    report = []
    report.append('# Adjacency-Sentinel Loop Report')
    report.append('')
    report.append('Loops in the decompiled pseudocode that exit when a pointer reaches the address of the *next named global* in the original binary. These rely on the original-binary memory layout; our linker places globals arbitrarily, so the sentinel never matches and the loop walks past the pool.')
    report.append('')
    report.append('See `prompts/fix_compilation.md` §16 for the fix pattern.')
    report.append('')
    report.append('## Summary')
    report.append('')
    report.append('- **Confirmed**: %d loops across %d files — sentinel is exactly the next named global after the pool' % (
        len(confirmed), len(confirmed_files),
    ))
    report.append('- **Files with an existing `.keep.cpp`**: %d files (%d loops) — verify each keep matches the proposed rewrite' % (
        len(confirmed_files_with_keep), confirmed_loops_in_keep_files,
    ))
    report.append('- **Rejected** (candidate matched the text pattern but is not adjacency — leave alone): %d' % len(rejected))
    report.append('- **Unknown** (could not resolve iterator origin or addresses): %d' % len(unknown))
    report.append('')
    report.append('Confirmed entries are safe to auto-rewrite. Rejected entries must not be rewritten. Unknown entries need manual review.')
    report.append('')

    report.append('## Confirmed adjacency-sentinel loops')
    report.append('')
    if confirmed:
        report.extend(format_confirmed(confirmed, repo_root))
    else:
        report.append('*(none)*')
        report.append('')

    report.append('## Rejected candidates (not adjacency — do not rewrite)')
    report.append('')
    if rejected:
        report.extend(format_rejected(rejected, repo_root))
    else:
        report.append('*(none)*')
        report.append('')

    report.append('## Unknown (manual review needed)')
    report.append('')
    if unknown:
        report.extend(format_rejected(unknown, repo_root))
    else:
        report.append('*(none)*')
        report.append('')

    out_path = os.path.join(reports_dir, 'adjacency_sentinel.md')
    with open(out_path, 'w') as f:
        f.write('\n'.join(report))
    print('Report: %s' % out_path)
    print('  confirmed=%d  rejected=%d  unknown=%d' % (len(confirmed), len(rejected), len(unknown)))


if __name__ == '__main__':
    main()
