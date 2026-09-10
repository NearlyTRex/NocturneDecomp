#!/usr/bin/env python3
"""Linter for the build's authenticity toggles.

`shims/config/shim_config_authentic.h` is the fidelity dial board: one flag per
deviation from the shipped binary, each with a doc comment saying what the
original did and what the alternative does. Nothing enforces that the board
stays true, and it drifted:

  - NOCTURNE_AUTHENTIC_VOICE had a full doc comment describing a working
    dev-friendly path and ZERO gate sites anywhere in the tree.
  - NOCTURNE_AUTHENTIC_SHADER_LIGHTING gated a call whose only consumer had
    been deleted with the old GL shim, so both positions behaved identically.
  - NOCTURNE_AUTHENTIC_RESOLUTION_STEP's only gate sat inside the #else of
    NOCTURNE_AUTHENTIC_RESOLUTION_LIST, making it unreachable at the default.
  - docs/authenticity-flags.md claimed 39 flags and "every flag defaults to 0"
    while the header held 41 and four defaulted to 1.

Each check below exists because one of those got through review.

  1. UNGATED    every toggle has at least one gate site outside config/
  2. ORPHAN     every toggle referenced in the tree is defined in the header
  3. NESTED     toggles gated inside another toggle (review list, not an error)
  4. DOC SYNC   docs/authenticity-flags.md names exactly the header's toggles,
                and the header's own index table matches its #defines
  5. DOC SHAPE  every doc block has a "1:" line, a "0:" line and an override line

Checks 1, 2, 4 and 5 fail the run. Check 3 only reports: a nested gate is
sometimes correct (CEdButton::paint scales the label of a button that only the
editor draws) and sometimes a dead flag (RESOLUTION_STEP). Reviewed-and-correct
nestings go in check_authentic_flags_skip.txt so the report stays actionable.

Run from anywhere:
    python3 scripts/Python/check_authentic_flags.py
"""

import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
TREE = os.path.join(ROOT, 'annotations', 'nocedit.exe', 'pseudocode')
CONFIG_DIR = os.path.join(TREE, 'shims', 'config')
HEADER = os.path.join(CONFIG_DIR, 'shim_config_authentic.h')
DOC = os.path.join(ROOT, 'docs', 'authenticity-flags.md')
SKIP = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                    'check_authentic_flags_skip.txt')

SOURCE_EXT = ('.c', '.cpp', '.h')
PRUNE_DIRS = {'build', '.git', '__pycache__'}

# A toggle is an `#ifndef X / #define X <0|1>` pair. That deliberately excludes
# the header's codegen macros (NOCTURNE_FMT_PTR, NOCTURNE_ARG_PTR), which are
# resolved from a toggle rather than being one.
TOGGLE_RE = re.compile(
    r'^#ifndef[ \t]+(NOCTURNE_[A-Z0-9_]+)[ \t]*\n'
    r'#define[ \t]+\1[ \t]+([01])[ \t]*$',
    re.M)

# Membership is whatever the header defines, so a peer like NOCTURNE_EDITOR_BUILD
# -- whose axis is "which binary", not "shipped or improved" -- counts without
# wearing the AUTHENTIC_ prefix. This prefix is only used to catch references to
# flags that look like ours but are defined nowhere (a typo, or a flag deleted
# out from under a gate).
POLICED_PREFIX = 'NOCTURNE_AUTHENTIC_'

CPP_IF = re.compile(r'^[ \t]*#[ \t]*(if|ifdef|ifndef|elif|else|endif)\b(.*)')
NOCT = re.compile(r'NOCTURNE_[A-Z0-9_]+')


def strip_comments(text):
    """Blank out // and /* */ comments, preserving line structure.

    A flag named only in another flag's doc comment must not count as a gate
    site -- that is exactly how VOICE looked live for as long as it did.
    """
    out = []
    i, n = 0, len(text)
    in_line = in_block = in_str = in_chr = False
    while i < n:
        c = text[i]
        nxt = text[i + 1] if i + 1 < n else ''
        if in_line:
            if c == '\n':
                in_line = False
                out.append(c)
            else:
                out.append(' ')
        elif in_block:
            if c == '*' and nxt == '/':
                in_block = False
                out.append('  ')
                i += 2
                continue
            out.append('\n' if c == '\n' else ' ')
        elif in_str or in_chr:
            out.append(c)
            if c == '\\':
                if nxt:
                    out.append(nxt)
                    i += 2
                    continue
            elif (in_str and c == '"') or (in_chr and c == "'"):
                in_str = in_chr = False
        else:
            if c == '/' and nxt == '/':
                in_line = True
                out.append('  ')
                i += 2
                continue
            if c == '/' and nxt == '*':
                in_block = True
                out.append('  ')
                i += 2
                continue
            if c == '"':
                in_str = True
            elif c == "'":
                in_chr = True
            out.append(c)
        i += 1
    return ''.join(out)


def source_files():
    for dirpath, dirnames, filenames in os.walk(TREE):
        dirnames[:] = [d for d in dirnames if d not in PRUNE_DIRS]
        for fn in sorted(filenames):
            if fn.endswith(SOURCE_EXT):
                yield os.path.join(dirpath, fn)


def rel(path):
    return os.path.relpath(path, ROOT)


def read_toggles():
    with open(HEADER) as f:
        text = f.read()
    toggles = {name: int(val) for name, val in TOGGLE_RE.findall(text)}
    return text, toggles


def aliases(name):
    """Every spelling the docs might use for a flag.

    The sibling doc writes flags bare (`HUD_SCALE`); the header writes them in
    full. Accept either, and the half-stripped form too.
    """
    out = {name}
    if name.startswith('NOCTURNE_'):
        out.add(name[len('NOCTURNE_'):])
    if name.startswith(POLICED_PREFIX):
        out.add(name[len(POLICED_PREFIX):])
    return out


def load_skips():
    """Reviewed exemptions, one per line, `kind:key`.

        nested:<relpath>:<FLAG>   this nesting was reviewed and is correct
        ungated:<FLAG>            this flag legitimately has no gate site

    Blank lines and # comments ignored.
    """
    skips = {'nested': set(), 'ungated': set()}
    if not os.path.exists(SKIP):
        return skips
    with open(SKIP) as f:
        for lineno, line in enumerate(f, 1):
            line = line.split('#', 1)[0].strip()
            if not line:
                continue
            kind, _, key = line.partition(':')
            if kind in skips and key:
                skips[kind].add(key)
            else:
                print(f'  ! {rel(SKIP)}:{lineno}: unrecognised entry '
                      f'{line!r}', file=sys.stderr)
    return skips


def scan_tree(toggles):
    """Collect gate sites and nested-gate findings from every source file.

    Returns (sites, referenced, nested) where sites maps flag -> [relpath, ...],
    referenced is every family identifier seen in code, and nested is a list of
    (relpath, lineno, flag, context) tuples.
    """
    sites = {name: [] for name in toggles}
    referenced = set()
    nested = []

    for path in source_files():
        # config/ defines the toggles and cross-references them in prose; it is
        # never a gate site.
        if os.path.commonpath([os.path.abspath(path), CONFIG_DIR]) == CONFIG_DIR:
            continue
        try:
            with open(path, errors='replace') as f:
                code = strip_comments(f.read())
        except OSError as exc:
            print(f'  ! cannot read {rel(path)}: {exc}', file=sys.stderr)
            continue

        def is_ours(name):
            return name in toggles or name.startswith(POLICED_PREFIX)

        seen_here = set()
        stack = []  # one entry per open #if: the family flags it tests
        for lineno, line in enumerate(code.split('\n'), 1):
            for name in NOCT.findall(line):
                if is_ours(name):
                    referenced.add(name)
                    seen_here.add(name)

            m = CPP_IF.match(line)
            if not m:
                continue
            kind, rest = m.group(1), m.group(2)
            if kind in ('if', 'ifdef', 'ifndef'):
                mine = [n for n in NOCT.findall(rest) if is_ours(n)]
                outer = [(ln, ns) for ln, ns in stack if ns]
                if mine and outer:
                    ctx = '; '.join(f'{",".join(ns)}@{ln}' for ln, ns in outer)
                    for flag in mine:
                        nested.append((rel(path), lineno, flag, ctx))
                stack.append((lineno, mine))
            elif kind == 'endif' and stack:
                stack.pop()

        for name in seen_here:
            if name in sites:
                sites[name].append(rel(path))

    return sites, referenced, nested


def parse_index_table(header_text):
    """Parse the header's index table, if it has one yet.

    Rows look like `| \\`FLAG\\` | 0 | ... |`. Extra columns are ignored so the
    table can grow a category or summary column without touching this parser.
    Returns None when no table is present.
    """
    rows = {}
    row_re = re.compile(
        r'^//\s*\|\s*`(NOCTURNE_[A-Z0-9_]+)`\s*\|\s*([01])\s*\|', re.M)
    for name, val in row_re.findall(header_text):
        rows[name] = int(val)
    return rows or None


BACKTICKED = re.compile(r'`([A-Z][A-Z0-9_]*)`')


def doc_flags():
    """Flags named in docs/authenticity-flags.md, split by how sure we are.

    The doc writes them without the family prefix (`HUD_SCALE`), so backticked
    upper-case words are resolved against the header's names.

    Returns (named, claimed). `named` is every backticked candidate, used to
    decide which toggles the doc covers. `claimed` is the subset that must
    resolve to a real toggle: multi-word names anywhere, plus anything in a
    table row, where prose does not reach. That split is what lets a deleted
    single-word flag like `VOICE` be caught in the flag tables without
    `START` or `RAISE` being flagged in a sentence.
    """
    if not os.path.exists(DOC):
        return None, None
    with open(DOC) as f:
        lines = f.read().split('\n')
    named, claimed = set(), set()
    for line in lines:
        found = set(BACKTICKED.findall(line))
        named |= found
        in_table = line.lstrip().startswith('|')
        claimed |= {s for s in found
                    if in_table or re.fullmatch(r'[A-Z][A-Z0-9]*(_[A-Z0-9]+)+', s)}
    return named, claimed


def doc_blocks(header_text):
    """Map flag -> its doc comment body, from `// FLAG` to the next directive."""
    blocks = {}
    cur = None
    body = []
    for line in header_text.split('\n'):
        m = re.match(r'^// (NOCTURNE_[A-Z0-9_]+)\s*$', line)
        if m:
            if cur:
                blocks[cur] = '\n'.join(body)
            cur, body = m.group(1), []
        elif cur is not None:
            if line.startswith('#'):
                blocks[cur] = '\n'.join(body)
                cur, body = None, []
            else:
                body.append(line)
    if cur:
        blocks[cur] = '\n'.join(body)
    return blocks


def main():
    if not os.path.exists(HEADER):
        print(f'FATAL: {rel(HEADER)} not found', file=sys.stderr)
        return 2

    header_text, family = read_toggles()
    if not family:
        print(f'FATAL: no toggles parsed from {rel(HEADER)}', file=sys.stderr)
        return 2

    sites, referenced, nested = scan_tree(family)
    skips = load_skips()
    failures = 0

    print(f'{len(family)} toggles in {rel(HEADER)} '
          f'({sum(1 for v in family.values() if v == 1)} default to 1)')

    # 1 -- ungated toggles.
    ungated = sorted(n for n, files in sites.items()
                     if not files and n not in skips['ungated'])
    exempt = sorted(n for n, files in sites.items()
                    if not files and n in skips['ungated'])
    print(f'\n[1] ungated toggles: {len(ungated)} '
          f'({len(exempt)} exempt)')
    for name in ungated:
        print(f'  FAIL {name} -- defined and documented, but no gate site '
              f'outside config/')
    for name in exempt:
        print(f'  ok   {name} -- exempt, see {rel(SKIP)}')
    failures += len(ungated)

    # 2 -- referenced but undefined.
    orphans = sorted(referenced - set(family))
    print(f'\n[2] undefined references: {len(orphans)}')
    for name in orphans:
        where = [rel(p) for p in source_files()
                 if name in strip_comments(open(p, errors="replace").read())]
        print(f'  FAIL {name} -- referenced in {len(where)} file(s), '
              f'not defined in the header')
        for w in where[:5]:
            print(f'         {w}')
    failures += len(orphans)

    # 3 -- nested gates. Informational: correct as often as not.
    unreviewed = [(f, ln, flag, ctx) for f, ln, flag, ctx in nested
                  if f'{f}:{flag}' not in skips['nested']]
    print(f'\n[3] nested gates: {len(nested)} '
          f'({len(unreviewed)} unreviewed) -- review, not failure')
    for f, ln, flag, ctx in unreviewed:
        print(f'  ?    {f}:{ln}  {flag}  inside {ctx}')
    if unreviewed:
        print(f'       once reviewed, record as "nested:<path>:<flag>" in '
              f'{rel(SKIP)}')

    # 4 -- doc sync, both the sibling doc and the header's own index.
    print('\n[4] doc sync')
    named, claimed = doc_flags()
    if named is None:
        print(f'  FAIL {rel(DOC)} not found')
        failures += 1
    else:
        known = {alias: n for n in family for alias in aliases(n)}
        documented = {known[s] for s in named if s in known}
        missing = sorted(set(family) - documented)
        # A claimed name that matches no toggle is either a stale entry or a
        # typo; both want reporting.
        stale = sorted(s for s in claimed if s not in known)
        for name in missing:
            print(f'  FAIL {rel(DOC)} does not name {name}')
        for s in stale:
            print(f'  FAIL {rel(DOC)} names `{s}`, which is not a toggle')
        failures += len(missing) + len(stale)
        if not missing and not stale:
            print(f'  ok   {rel(DOC)} names all {len(family)} toggles')

    index = parse_index_table(header_text)
    if index is None:
        print('  note the header has no index table yet; '
              'add one and this check starts verifying its defaults')
    else:
        bad = [(n, index[n], family[n]) for n in index
               if n in family and index[n] != family[n]]
        absent = sorted(set(family) - set(index))
        extra = sorted(set(index) - set(family))
        for name, listed, actual in bad:
            print(f'  FAIL index table says {name} defaults to {listed}, '
                  f'#define says {actual}')
        for name in absent:
            print(f'  FAIL index table omits {name}')
        for name in extra:
            print(f'  FAIL index table lists {name}, which is not a toggle')
        failures += len(bad) + len(absent) + len(extra)
        if not bad and not absent and not extra:
            print(f'  ok   index table matches all {len(family)} #defines')

    # 5 -- doc shape.
    blocks = doc_blocks(header_text)
    print('\n[5] doc shape')
    shape_failures = 0
    for name in sorted(family):
        body = blocks.get(name)
        if body is None:
            print(f'  FAIL {name} has no doc block')
            shape_failures += 1
            continue
        missing = []
        if not re.search(r'^//\s+1:', body, re.M):
            missing.append('"1:" line')
        if not re.search(r'^//\s+0:', body, re.M):
            missing.append('"0:" line')
        if 'Override with' not in body:
            missing.append('override line')
        if missing:
            print(f'  FAIL {name} lacks {", ".join(missing)}')
            shape_failures += 1
    if not shape_failures:
        print(f'  ok   all {len(family)} doc blocks well formed')
    failures += shape_failures

    print(f'\n{"FAIL" if failures else "PASS"}: {failures} problem(s)')
    return 1 if failures else 0


if __name__ == '__main__':
    sys.exit(main())
