#!/usr/bin/env python3
"""Check every .keep against the export beside it.

A .keep is a hand reconstruction of the .cpp/.c the exporter writes next to it.
The exporter regenerates the .cpp/.c on every export; the .keep is never
touched. When Ghidra's view of the function changes - a rename, a retype, a new
signature - the .keep falls out of step and nothing says so until it fails to
compile, or, worse, compiles as a different function.

Three checks, per .keep:

  orphan      No .cpp/.c beside it. A function rename or a translation-unit
              move strands the .keep under the old name, and the build then
              compiles the raw export in its place.
  definition  The function's definition in the .keep differs from the export's
              `// Signature:` line (whitespace ignored). docs/keep-files.md: the
              signature is immutable; a wrong one is a Ghidra fix, not a .keep
              edit. In C++ a differing parameter list is a separate overload, so
              this can compile cleanly while the declared function is never
              defined.
  header      `// Name:`, `// Address:` or `// MANUAL RECONSTRUCTION` missing,
              or an `// Address Range:`, `// Convention:` or `// Signature:` line
              the export has that the .keep does not carry verbatim.

Read-only. Exits 1 when anything is reported, so it can gate a build.

Run from the repo root:
    python3 scripts/Python/check_keep_signatures.py
    python3 scripts/Python/check_keep_signatures.py --program all
    python3 scripts/Python/check_keep_signatures.py --check definition orphan
"""

import argparse
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
PROGRAMS = ('nocedit.exe', 'nocturne.exe', 'tridx7.dll')
CHECKS = ('orphan', 'definition', 'header')

# Header lines the export writes that a .keep must carry verbatim.
CARRIED_HEADERS = ('// Address Range:', '// Convention:', '// Signature:')
REQUIRED_HEADERS = ('// Name:', '// Address:', '// MANUAL RECONSTRUCTION')

FUNCTION_NAME_RE = re.compile(r'(\w+_FUN_[0-9a-fA-F]+)\s*\(')
LINE_COMMENT_RE = re.compile(r'//[^\n]*')
BLOCK_COMMENT_RE = re.compile(r'/\*.*?\*/', re.S)
WHITESPACE_RE = re.compile(r'\s+')


def read(path):
    with open(path, encoding='utf-8', errors='replace') as f:
        return f.read()


def header_lines(text):
    """The leading comment block: every line up to the first non-comment one."""
    lines = []
    for line in text.splitlines():
        if not line.startswith('//'):
            break
        lines.append(line.rstrip('\r'))
    return lines


def find_keeps(src_root):
    for dirpath, _, filenames in os.walk(src_root):
        for fn in sorted(filenames):
            m = re.match(r'(.*)\.keep\.(cpp|c)$', fn)
            if m:
                yield os.path.join(dirpath, fn), os.path.join(dirpath, m.group(1))


def raw_beside(base):
    for ext in ('.cpp', '.c'):
        if os.path.exists(base + ext):
            return base + ext
    return None


def find_definition(keep_text, function_name):
    """The `<ret> <conv> <name>(<params>)` of a definition, comments stripped.

    A definition is the occurrence followed by `{`; a call or a declaration is
    followed by something else.
    """
    code = LINE_COMMENT_RE.sub('', BLOCK_COMMENT_RE.sub('', keep_text))
    pattern = re.compile(r'^[^\n;#{}=]*?\b' + re.escape(function_name) +
                         r'\s*\(([^()]|\([^()]*\))*\)\s*\{', re.M)
    m = pattern.search(code)
    if m is None:
        return None
    return m.group(0).rstrip('{').strip()


def normalise(signature):
    return WHITESPACE_RE.sub('', signature)


def check_keep(keep_path, base, checks):
    """Return [(check, message)] for one .keep."""
    problems = []
    raw_path = raw_beside(base)
    if raw_path is None:
        if 'orphan' in checks:
            problems.append(('orphan', 'no .cpp/.c beside it'))
        return problems

    keep_text = read(keep_path)
    raw_header = header_lines(read(raw_path))
    keep_header = header_lines(keep_text)

    if 'header' in checks:
        for required in REQUIRED_HEADERS:
            if not any(line.startswith(required) for line in keep_header):
                problems.append(('header', 'missing %s' % required))
        for prefix in CARRIED_HEADERS:
            raw_line = next((l for l in raw_header if l.startswith(prefix)), None)
            if raw_line is None:
                continue
            keep_line = next((l for l in keep_header if l.startswith(prefix)), None)
            if keep_line is None:
                problems.append(('header', 'missing %s' % raw_line))
            elif keep_line != raw_line:
                problems.append(('header', 'stale %s\n        export: %s'
                                 % (keep_line, raw_line)))

    if 'definition' in checks:
        signature = next((l[len('// Signature: '):] for l in raw_header
                          if l.startswith('// Signature: ')), None)
        name = FUNCTION_NAME_RE.search(signature) if signature else None
        if name is not None:
            definition = find_definition(keep_text, name.group(1))
            if definition is None:
                problems.append(('definition', 'no definition of %s' % name.group(1)))
            elif normalise(definition) != normalise(signature):
                problems.append(('definition', 'differs from the export\n'
                                 '        keep:   %s\n        export: %s'
                                 % (definition, signature)))
    return problems


def main():
    parser = argparse.ArgumentParser(
        description='Check every .keep against the export beside it (read-only).')
    parser.add_argument('--program', default='nocedit.exe',
                        choices=PROGRAMS + ('all',),
                        help='which binary to check (default: nocedit.exe)')
    parser.add_argument('--check', nargs='+', choices=CHECKS, default=list(CHECKS),
                        help='which checks to run (default: all)')
    parser.add_argument('--summary', action='store_true',
                        help='print counts only')
    args = parser.parse_args()

    programs = PROGRAMS if args.program == 'all' else (args.program,)
    totals = {check: 0 for check in CHECKS}
    keeps_seen = 0

    for program in programs:
        src_root = os.path.join(ROOT, 'annotations', program, 'pseudocode', 'src')
        if not os.path.isdir(src_root):
            continue
        for keep_path, base in find_keeps(src_root):
            keeps_seen += 1
            problems = check_keep(keep_path, base, args.check)
            if not problems:
                continue
            if not args.summary:
                print(os.path.relpath(keep_path, ROOT))
            for check, message in problems:
                totals[check] += 1
                if not args.summary:
                    print('    %-10s  %s' % (check, message))

    print('%d .keep files checked: %s' % (
        keeps_seen,
        ', '.join('%d %s' % (totals[c], c) for c in CHECKS if c in args.check)))
    return 1 if any(totals.values()) else 0


if __name__ == '__main__':
    sys.exit(main())
