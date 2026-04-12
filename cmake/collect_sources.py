#!/usr/bin/env python3
"""
Priority-based source file collector for the Nocturne CMake build.

For each per-function directory under src/<module>/<orig_file>.{c,cpp}/,
picks the winning source file using the same priority as
scripts/Python/ghidra_annotations/annotations/pseudocode/function_compile.py:
    .keep.cpp / .keep.c   (hand-written overrides)
    .mmx.cpp  / .mmx.c    (inline asm MMX variants)
    .byval.cpp/ .byval.c  (pass-by-value variants)
    .cpp      / .c        (raw decompiler output)

Flat module directories (e.g. src/globals, src/main) contribute every
.c/.cpp directly (no priority resolution).

Writes one file per module:  <out_dir>/sources_<module>.txt
Each line is an absolute path. Blank files mean "module empty".

skip_list.txt format (one rule per line, # comments, blanks OK):
    FUN_<hex>             match any function whose filename contains this token
    <relative-path>       exact relative path under src/ (no leading slash)
    glob:<pattern>        fnmatch glob against the relative path
"""

import argparse
import fnmatch
import os
import sys


SRC_PRIORITY = (
    '.keep.cpp', '.keep.c',
    '.mmx.cpp',  '.mmx.c',
    '.byval.cpp','.byval.c',
    '.cpp',      '.c',
)

# Companion/analysis files that sit next to the real source but must NOT be
# fed to the compiler. Matched against the filename suffix before the priority
# resolver runs.
IGNORED_SUFFIXES = (
    '.chunked.cpp', '.chunked.c',
)


def load_skip_list(path):
    rules = {'tokens': [], 'paths': set(), 'globs': []}
    if not path or not os.path.exists(path):
        return rules
    with open(path, 'r') as f:
        for raw in f:
            line = raw.strip()
            if not line or line.startswith('#'):
                continue
            if line.startswith('glob:'):
                rules['globs'].append(line[len('glob:'):].strip())
            elif line.startswith('FUN_'):
                rules['tokens'].append(line)
            else:
                rules['paths'].add(line.replace('\\', '/'))
    return rules


def is_skipped(rel_path, rules):
    rp = rel_path.replace('\\', '/')
    if rp in rules['paths']:
        return True
    base = os.path.basename(rp)
    for tok in rules['tokens']:
        if tok in base:
            return True
    for pat in rules['globs']:
        if fnmatch.fnmatch(rp, pat):
            return True
    return False


def pick_function_source(func_dir):
    """Return the winning source file in a per-function directory, or None."""
    by_base = {}
    for name in os.listdir(func_dir):
        full = os.path.join(func_dir, name)
        if not os.path.isfile(full):
            continue
        if any(name.endswith(s) for s in IGNORED_SUFFIXES):
            continue
        for ext in SRC_PRIORITY:
            if name.endswith(ext):
                base = name[:-len(ext)]
                by_base.setdefault(base, {})[ext] = full
                break
    winners = []
    for base, variants in by_base.items():
        for ext in SRC_PRIORITY:
            if ext in variants:
                winners.append(variants[ext])
                break
    return winners


def collect_module(module_dir, src_root, rules):
    """Collect all winning source files under one module directory."""
    winners = []
    # Flat module (every .c/.cpp in the dir counts)
    has_nested = any(
        os.path.isdir(os.path.join(module_dir, d))
        for d in os.listdir(module_dir)
    )
    if not has_nested:
        for name in sorted(os.listdir(module_dir)):
            full = os.path.join(module_dir, name)
            if os.path.isfile(full) and (name.endswith('.cpp') or name.endswith('.c')) \
                    and not any(name.endswith(s) for s in IGNORED_SUFFIXES):
                rel = os.path.relpath(full, src_root)
                if not is_skipped(rel, rules):
                    winners.append(full)
        return winners

    # Nested: each child dir is a per-original-file grouping of per-function files,
    # OR the module itself has flat files mixed with subdirs (entry/ pattern — handled too).
    for child in sorted(os.listdir(module_dir)):
        full_child = os.path.join(module_dir, child)
        if os.path.isfile(full_child) and (child.endswith('.cpp') or child.endswith('.c')):
            rel = os.path.relpath(full_child, src_root)
            if not is_skipped(rel, rules):
                winners.append(full_child)
            continue
        if not os.path.isdir(full_child):
            continue
        for path in pick_function_source(full_child):
            rel = os.path.relpath(path, src_root)
            if not is_skipped(rel, rules):
                winners.append(path)
    return sorted(winners)


def _write_module(out_dir, name, winners, modules):
    out_path = os.path.join(out_dir, 'sources_%s.txt' % name)
    with open(out_path, 'w') as f:
        for p in winners:
            f.write(p + '\n')
    modules.append(name)
    print('  %-12s %5d files  -> %s' % (name, len(winners), out_path))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src-root', required=True,
                    help='pseudocode/src directory (auto-generated modules)')
    ap.add_argument('--module', action='append', default=[],
                    help='standalone module directory outside src/ '
                         '(e.g. pseudocode/main, pseudocode/checks). '
                         'Module name = basename of the given path. Repeatable.')
    ap.add_argument('--out-dir', required=True,
                    help='where to write sources_<module>.txt files')
    ap.add_argument('--skip-list', default=None,
                    help='optional skip_list.txt')
    ap.add_argument('--exclude-module', action='append', default=[],
                    help='module directory name to skip entirely')
    ap.add_argument('--modules-file', default=None,
                    help='optional file to write with newline-separated module names')
    args = ap.parse_args()

    src_root = os.path.abspath(args.src_root)
    if not os.path.isdir(src_root):
        print('error: src root not found: %s' % src_root, file=sys.stderr)
        return 2

    os.makedirs(args.out_dir, exist_ok=True)
    rules = load_skip_list(args.skip_list)
    excluded = set(args.exclude_module)

    modules = []

    # Auto-generated modules under src/
    for name in sorted(os.listdir(src_root)):
        if name in excluded:
            continue
        full = os.path.join(src_root, name)
        if not os.path.isdir(full):
            continue
        winners = collect_module(full, src_root, rules)
        _write_module(args.out_dir, name, winners, modules)

    # Standalone modules passed explicitly — name = basename of the dir.
    for raw in args.module:
        full = os.path.abspath(raw)
        name = os.path.basename(full.rstrip('/'))
        if not name or name in excluded:
            continue
        if not os.path.isdir(full):
            print('  %-12s SKIPPED (not found: %s)' % (name, full))
            continue
        if name in modules:
            print('error: duplicate module name %r' % name, file=sys.stderr)
            return 2
        winners = collect_module(full, os.path.dirname(full), rules)
        _write_module(args.out_dir, name, winners, modules)

    if args.modules_file:
        with open(args.modules_file, 'w') as f:
            for m in modules:
                f.write(m + '\n')

    return 0


if __name__ == '__main__':
    sys.exit(main())
