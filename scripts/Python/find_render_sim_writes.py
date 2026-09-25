#!/usr/bin/env python3
"""Find render-path code that writes state the simulation reads.

In a network game each machine renders on its own schedule, so a field written
from a render function and read by sim code changes the simulation at a moment
that differs per machine. CCharacter::renderBurn setting is_fully_burned is the
canonical case: the machine that drew the burning character first started its
fall-apart countdown a frame early.

Works on the source that is compiled (a .keep in preference to the raw file),
so a gated fix shows up as such. Read-only.

  1. Render side: functions whose method name matches --render-pattern, plus
     with --transitive every function whose callers are all render side.
  2. Writes: assignments through a pointer or member in those functions,
     keyed by the last field name of the target. A write through a global
     only matches readers that name the same global.
  3. Reads: the same field read on the sim side - everything reachable by
     direct call from CGame::process and the per-class process/AI/damage
     methods, never entering the renderer, console, editor, loaders or camera.
  4. Setters: virtual set* calls from the render side and from the helpers
     it calls, which move state without an assignment this can see.

Tags that mark a hit as probably benign:
  restored       the last write puts back a value read from the field earlier
  editor         the function references is_in_editor or the editor tools
  netplay-gated  the function already has a NOCTURNE_AUTHENTIC_NETPLAY gate
  ambiguous      more than one struct defines a field of that name, so the
                 readers may belong to another type

Field names come from Ghidra and are matched by name, so a hit is a lead to
check against the read sites, not a finding.

Usage:
    find_render_sim_writes.py [--program nocedit.exe] [--transitive]
                              [--all] [--field NAME] [--json OUT]
"""
import argparse
import json
import os
import re
import sys
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

FUNC_FILE = re.compile(r'^(?P<name>.+)_FUN_(?P<addr>[0-9a-f]{8})(?P<keep>\.keep)?\.(?:cpp|c)$')
CALL = re.compile(r'\b\w+_FUN_([0-9a-f]{8})\s*\(')
VCALL_SETTER = re.compile(r'->\s*(set[A-Z]\w*)\s*\)\s*\(')
VCALL = re.compile(r'(?:->|\.)\s*([a-z]\w*)\s*\)\s*\(')
FIELD_DEF = re.compile(r'^\s+[\w\s\*]+?\**\s*\b(\w+)(?:\[[^\]]*\])*;\s*//\s*0x[0-9a-f]+')
STRUCT_DEF = re.compile(r'^typedef\s+(?:struct|union)\s+(\w+)')

# A target path ending in a field, followed by an assignment operator. The
# path may open with a parenthesised base, e.g. (this_ptr->base).x.y = ...
ASSIGN = re.compile(
    r'(?P<path>(?:[A-Za-z_]\w*|\))(?:\s*(?:->|\.)\s*[A-Za-z_]\w*|\s*\[[^\[\]]*\])+)'
    r'\s*(?P<op>[-+*/|&^]?=)(?!=)')
LOCAL_ROOT = re.compile(r'^(?:local_|[a-zA-Z]*Stack_|auStack|[a-z]Var\d)')
# g_Name, or a Ghidra data label ending in its address.
GLOBAL_ROOT = re.compile(r'^(?:g_\w+|\w+_[0-9a-f]{8})$')
DEFAULT_IGNORE = r'g_CDemonRenderer|vertex_buffer|g_CEditorTools|g_CConsole'
SIM_PATTERN = (r'^(?:process|update|think|step|tick|fire|explode|dismember|ignite|'
               r'attack|trigger|activate)|(?:AI|Damage|Collision)$')
RENDER_PATTERN = r'^render'
# Never sim readers, and the sim walk does not enter them: the renderer's own
# translation units, the console, the editor, model import/export, and the
# camera, which is per-machine by design.
OFF_SIM_TUS = ('engine/2d.c', 'engine/3d.c', 'engine/clipper.c', 'engine/drender.cpp',
               'engine/fpoly.c', 'engine/prim.c', 'engine/zraster.c', 'engine/font.cpp',
               'engine/winfont.cpp', 'engine/alphabit.cpp', 'engine/console.cpp',
               'core/dpart.cpp')
OFF_SIM_PATTERN = r'^(?:load|save|export|import|edit|parse|archive)|Editor|^shape/'
OFF_SIM_NAMES = (r'^(?:CDemonCamera|CZThumb|CConsole|CLZW)_|VirtualDirector|'
                 r'^CDemonSet_light|^updateListeners$')
SIM_ROOTS = {'CGame_process', 'CDemonMission_process', 'CNetGame_applySimFrameHistory'}


def strip_comments(text):
    text = re.sub(r'/\*.*?\*/', ' ', text, flags=re.S)
    text = re.sub(r'//[^\n]*', '', text)
    return re.sub(r'"(?:\\.|[^"\\])*"', '""', text)


def full_path(body, start, path):
    """Extend a path that opens with ')' back to its matching '(' and root."""
    if not path.startswith(')'):
        return path
    depth, i = 0, start
    while i >= 0:
        c = body[i]
        if c == ')':
            depth += 1
        elif c == '(':
            depth -= 1
            if depth == 0:
                break
        i -= 1
    return re.sub(r'\s+', '', body[i:start]) + path


def last_field(path):
    m = re.findall(r'(?:->|\.)\s*([A-Za-z_]\w*)', path)
    return m[-1] if m else None


def path_root(path):
    m = re.match(r'[\s(]*([A-Za-z_]\w*)', path)
    return m.group(1) if m else ''


def load_functions(src_root):
    """addr -> {name, method, file, body}; a .keep wins over the raw file."""
    funcs = {}
    for dirpath, _, files in os.walk(src_root):
        for fn in files:
            m = FUNC_FILE.match(fn)
            if not m:
                continue
            addr = m.group('addr')
            if addr in funcs and not m.group('keep'):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding='utf-8', errors='replace') as fh:
                raw = fh.read()
            name = m.group('name')
            funcs[addr] = {
                'name': name,
                'method': name.split('_')[-1] if name[:1] == 'C' else name,
                'file': os.path.relpath(path, ROOT),
                'tu': os.path.relpath(dirpath, src_root),
                'raw': raw,
                'body': strip_comments(raw),
            }
    return funcs


def field_owners(include_root):
    owners = defaultdict(set)
    for dirpath, _, files in os.walk(os.path.join(include_root, 'types')):
        for fn in files:
            if not fn.endswith('.h'):
                continue
            current = None
            with open(os.path.join(dirpath, fn), encoding='utf-8', errors='replace') as fh:
                for line in fh:
                    s = STRUCT_DEF.match(line)
                    if s:
                        current = s.group(1)
                        continue
                    f = FIELD_DEF.match(line)
                    if f and current:
                        owners[f.group(1)].add(current)
    return owners


def render_side(funcs, pattern, transitive):
    rx = re.compile(pattern)
    side = {a for a, f in funcs.items() if rx.search(f['method'])}
    if not transitive:
        return side
    callers = defaultdict(set)
    for a, f in funcs.items():
        for callee in set(CALL.findall(f['body'])):
            if callee != a:
                callers[callee].add(a)
    changed = True
    while changed:
        changed = False
        for a in funcs:
            if a in side or not callers[a]:
                continue
            if callers[a] <= side:
                side.add(a)
                changed = True
    return side


def off_sim(funcs, tus):
    rx = re.compile(OFF_SIM_PATTERN)
    names = re.compile(OFF_SIM_NAMES)
    return {a for a, f in funcs.items()
            if f['tu'] in tus or rx.search(f['method']) or rx.search(f['tu'])
            or names.search(f['name'])}


def sim_side(funcs, pattern, roots, render):
    """Functions reachable from the sim roots by direct call, minus `render`
    (the render side and the off-sim set). Virtual dispatch is invisible here,
    which is why the per-class process/AI/damage methods are roots by name."""
    rx = re.compile(pattern)
    by_method = defaultdict(list)
    for a, f in funcs.items():
        if f['name'] != f['method']:
            by_method[f['method']].append(a)
    todo = [a for a, f in funcs.items()
            if (rx.search(f['method']) or f['name'] in roots) and a not in render]
    seen = set(todo)
    slots = set()
    while todo:
        a = todo.pop()
        body = funcs[a]['body']
        callees = set(CALL.findall(body))
        # A virtual call reaches every override of that slot name.
        for slot in VCALL.findall(body):
            if slot not in slots:
                slots.add(slot)
                callees.update(by_method.get(slot, ()))
        for callee in callees:
            if callee in funcs and callee not in seen and callee not in render:
                seen.add(callee)
                todo.append(callee)
    return seen


def writes_in(func, ignore_rx):
    body = func['body']
    out = []
    reads_into = {}
    for m in re.finditer(r'\b([A-Za-z_]\w*)\s*=(?!=)\s*([^;]+);', body):
        f = last_field(m.group(2).strip())
        if f and re.search(r'(?:->|\.)\s*' + f + r'\s*$', m.group(2).strip()):
            reads_into.setdefault(m.group(1), f)
    for m in ASSIGN.finditer(body):
        path = full_path(body, m.start(), m.group('path'))
        field = last_field(path)
        if not field or ignore_rx.search(path):
            continue
        if '->' not in path and LOCAL_ROOT.match(path_root(path)):
            continue
        rhs = body[m.end():body.find(';', m.end())].strip()
        line = body.count('\n', 0, m.start()) + 1
        out.append({'field': field, 'path': path, 'rhs': rhs, 'line': line})
    last = {}
    for w in out:
        last[w['path']] = w
    for w in out:
        final = last[w['path']]
        w['restored'] = reads_into.get(final['rhs']) == w['field']
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--program', default='nocedit.exe')
    ap.add_argument('--render-pattern', default=RENDER_PATTERN,
                    help='regex on the method name that marks a render function')
    ap.add_argument('--off-sim-tu', action='append', default=None,
                    help='a translation unit (e.g. engine/3d.c) that is never sim side; '
                         'repeatable, replaces the built-in list')
    ap.add_argument('--transitive', action='store_true',
                    help='also treat functions only called from the render side as render side')
    ap.add_argument('--sim-pattern', default=SIM_PATTERN,
                    help='regex on the method name that marks a sim root')
    ap.add_argument('--any-reader', action='store_true',
                    help='count readers anywhere outside the render side, not only sim-reachable ones')
    ap.add_argument('--ignore', default=DEFAULT_IGNORE,
                    help='regex; write targets matching it are skipped')
    ap.add_argument('--field', help='only report this field')
    ap.add_argument('--all', action='store_true',
                    help='also list tagged hits and writes with no sim-side reader')
    ap.add_argument('--json', help='write the full result here')
    args = ap.parse_args()

    pseudo = os.path.join(ROOT, 'annotations', args.program, 'pseudocode')
    src = os.path.join(pseudo, 'src')
    if not os.path.isdir(src):
        sys.exit('no source tree at %s' % src)

    funcs = load_functions(src)
    owners = field_owners(os.path.join(pseudo, 'include'))
    side = render_side(funcs, args.render_pattern, args.transitive)
    excluded = side | off_sim(funcs, set(args.off_sim_tu or OFF_SIM_TUS))
    ignore_rx = re.compile(args.ignore)
    sim = None if args.any_reader else sim_side(funcs, args.sim_pattern, SIM_ROOTS, excluded)

    writes = defaultdict(list)
    for a in side:
        f = funcs[a]
        tags = set()
        if re.search(r'is_in_editor|g_CEditorTools', f['body']):
            tags.add('editor')
        if 'NOCTURNE_AUTHENTIC_NETPLAY' in f['raw']:
            tags.add('netplay-gated')
        for w in writes_in(f, ignore_rx):
            if args.field and w['field'] != args.field:
                continue
            t = set(tags)
            if w['restored']:
                t.add('restored')
            writes[w['field']].append((a, w, t))

    readers = defaultdict(set)
    if writes:
        field_rx = re.compile(r'(?:->|\.)\s*(' + '|'.join(map(re.escape, writes)) +
                              r')\b(?P<tail>(?:\s*\[[^\[\]]*\])*\s*(?:[-+*/|&^]?=(?!=))?)')
        for a, f in funcs.items():
            if a in side or (sim is not None and a not in sim):
                continue
            for m in field_rx.finditer(f['body']):
                tail = m.group('tail')
                if re.search(r'[-+*/|&^]?=$', tail.strip()) and not tail.strip().endswith('=='):
                    continue
                readers[m.group(1)].add(a)

    setters = []
    for a in sorted(side):
        f = funcs[a]
        for s in sorted(set(VCALL_SETTER.findall(f['body']))):
            setters.append((a, a, s))
        for callee in sorted(set(CALL.findall(f['body']))):
            if callee in funcs and callee not in side:
                for s in sorted(set(VCALL_SETTER.findall(funcs[callee]['body']))):
                    setters.append((a, callee, s))

    rows = []
    for field, hits in writes.items():
        rd_all = sorted(readers.get(field, ()), key=lambda x: funcs[x]['name'])
        for a, w, t in hits:
            # A write through a global only reaches readers of that global;
            # matching on the field name alone ties render-pipeline globals
            # to every struct with an x or an r.
            root = path_root(w['path'])
            if GLOBAL_ROOT.match(root):
                root_rx = re.compile(r'\b' + re.escape(root) + r'\b')
                rd = [r for r in rd_all if root_rx.search(funcs[r]['body'])]
            else:
                rd = rd_all
            if len(owners.get(field, ())) > 1:
                t = t | {'ambiguous'}
            rows.append({'field': field, 'writer': funcs[a]['name'], 'addr': a,
                         'file': funcs[a]['file'], 'line': w['line'], 'target': w['path'],
                         'tags': sorted(t), 'readers': [funcs[r]['name'] for r in rd]})

    def rank(r):
        benign = bool(set(r['tags']) & {'restored', 'editor', 'netplay-gated'})
        return (benign, 'ambiguous' in r['tags'], -len(r['readers']), r['field'], r['writer'])

    rows.sort(key=rank)
    candidates = [r for r in rows if r['readers'] and
                  not set(r['tags']) & {'restored', 'editor', 'netplay-gated'}]
    shown = rows if args.all else candidates

    # One entry per field, tag set and reader set; the writers are listed together.
    groups = {}
    for r in shown:
        key = (r['field'], tuple(r['tags']), tuple(r['readers']))
        groups.setdefault(key, []).append(r)

    print('render side: %d functions%s; %d field writes; %d candidates in %d groups' %
          (len(side), ' (transitive)' if args.transitive else '', len(rows), len(candidates),
           len(groups)))
    for (field, tags, readers), members in groups.items():
        print()
        tag = (' [' + ', '.join(tags) + ']') if tags else ''
        print('%s%s' % (field, tag))
        writers = sorted({'%s:%d' % (m['writer'], m['line']) for m in members})
        for w in writers[:8]:
            print('    written %s' % w)
        if len(writers) > 8:
            print('    written ... +%d more' % (len(writers) - 8))
        print('    target  %s' % members[0]['target'])
        if readers:
            more = '' if len(readers) <= 6 else ' (+%d more)' % (len(readers) - 6)
            print('    read by %s%s' % (', '.join(readers[:6]), more))
        else:
            print('    read by nothing on the sim side')
    if setters and not args.field:
        print()
        print('setter calls reachable from the render side (writes this cannot see):')
        for a, via, s in setters:
            hop = '' if via == a else ' via %s' % funcs[via]['name']
            print('    %-44s %s%s' % (funcs[a]['name'], s, hop))

    if args.json:
        with open(args.json, 'w') as fh:
            json.dump({'render_side': sorted(funcs[a]['name'] for a in side),
                       'writes': rows,
                       'setters': [{'render': funcs[a]['name'], 'via': funcs[v]['name'],
                                    'setter': s} for a, v, s in setters]}, fh, indent=1)


if __name__ == '__main__':
    main()
