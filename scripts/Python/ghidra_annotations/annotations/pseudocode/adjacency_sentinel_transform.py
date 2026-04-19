# Adjacency-sentinel loop transform
#
# Watcom emitted pool-init / process / render loops that exit when the
# iterator pointer reaches the address of the *next named global* in the
# original binary. The linker in our rebuild places globals arbitrarily, so
# the sentinel never matches and the loop walks past the pool (ASan catches
# it as global-buffer-overflow).
#
# This transform detects the pattern in the decompiled .cpp and rewrites
# the sentinel to `pool + count`, using the original binary's symbol table
# (via Ghidra's global_symbols map) as ground truth:
#
#   1. Iterator must come from a declared array pool (from globals_list).
#   2. Sentinel must be the IMMEDIATE NEXT exterior named global after
#      the pool, skipping Ghidra-synthesized auto-labels (s_, DAT_, etc.)
#      and interior field refs (g_Pool[N].field, g_Pool.field).
#
# Every other case is left untouched — a `.keep.cpp` remains the escape
# hatch if a case slips through.
#
# See `prompts/fix_compilation.md` §16 for background and the hand-fix
# pattern; see `reports/adjacency_sentinel_rewrites.md` for the per-export
# log of every rewrite this transform applied.

import os
import re

from collections import defaultdict

from ghidra_annotations.util.log import log_info


# =============================================================================
# Module-level context (populated by init_context() at export startup)
# =============================================================================

_context = {
    'pools': {},           # {pool_name: element_count}
    'pool_adjacency': {},  # {pool_name: sentinel_name}   -- safe rewrites only
    'rewrites': [],        # accumulated [{function, pool, sentinel, old, new}]
}


_ARRAY_TYPE_RE = re.compile(r'^\s*([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]')


# Ghidra-synthesized auto-labels for raw/unstructured data. These are not
# real C globals — they should be skipped when deciding what the "immediate
# next exterior symbol" after a pool is.
_AUTOLABEL_PREFIXES = ('s_', 'DAT_', 'u_', 'UNK_')


def _parse_hex(addr_str):
    try:
        return int(addr_str, 16)
    except (ValueError, TypeError):
        return None


def init_context(globals_list, global_symbols):
    """Build the adjacency lookup from globals_list + Ghidra symbol map.

    Args:
        globals_list: [{name, type, address, ...}] from extract_globals_and_constants.
        global_symbols: {addr_str_lowercase_hex: {name, address}} from
                        build_global_symbols_map (all labels, not just
                        globals — includes Ghidra's interior and auto labels).

    Populates _context so subsequent transform_adjacency_sentinels() calls
    can consult it. Safe to call multiple times; replaces prior state.
    """
    pools = {}
    for entry in globals_list:
        name = entry.get('name')
        type_str = entry.get('type') or ''
        if not name:
            continue
        m = _ARRAY_TYPE_RE.match(type_str)
        if not m:
            continue
        try:
            pools[name] = int(m.group(2))
        except ValueError:
            pass

    name_to_addr = {}
    for addr_str, info in global_symbols.items():
        addr_int = _parse_hex(addr_str)
        if addr_int is None:
            continue
        sym_name = info.get('name')
        if not sym_name:
            continue
        # Keep the first occurrence at a given address; aliases don't matter.
        if sym_name not in name_to_addr:
            name_to_addr[sym_name] = addr_int

    sorted_symbols = sorted(name_to_addr.items(), key=lambda kv: kv[1])

    pool_adjacency = {}
    for idx, (name, addr) in enumerate(sorted_symbols):
        if name not in pools:
            continue
        interior_prefixes = (name + '[', name + '.')
        j = idx + 1
        while j < len(sorted_symbols):
            nxt_name, nxt_addr = sorted_symbols[j]
            if nxt_name.startswith(interior_prefixes):
                j += 1
                continue
            if nxt_addr == addr:
                j += 1  # alias at the pool's own address
                continue
            if nxt_name.startswith(_AUTOLABEL_PREFIXES):
                j += 1  # Ghidra auto-label, not a real global
                continue
            break
        if j < len(sorted_symbols):
            pool_adjacency[name] = sorted_symbols[j][0]

    _context['pools'] = pools
    _context['pool_adjacency'] = pool_adjacency
    _context['rewrites'] = []

    log_info('Adjacency-sentinel transform: %d pools indexed, %d adjacency pairs' % (
        len(pools), len(pool_adjacency),
    ))


# =============================================================================
# Pattern scan + rewrite
# =============================================================================

# Loop-exit shapes seen in the decompiled code. Group 1 is always the
# iterator variable; group 2 is always the sentinel global. The `&` is
# optional because array-typed sentinels decay to pointers and are emitted
# without it (e.g. `!= g_MoonBats` where `g_MoonBats` is `SBat[30]`).
_SENTINEL_PATTERNS = [
    # while (iter != (T *)&?g_Global)
    re.compile(r'\bwhile\s*\(\s*(\w+)\s*!=\s*\(\s*\w+\s*\*\s*\)\s*&?\s*(g_\w+)\s*\)'),
    # while ((T *)iter != &?g_Global)
    re.compile(r'\bwhile\s*\(\s*\(\s*\w+\s*\*\s*\)\s*(\w+)\s*!=\s*&?\s*(g_\w+)\s*\)'),
    # while (iter != &?g_Global)  (no cast)
    re.compile(r'\bwhile\s*\(\s*(\w+)\s*!=\s*&?\s*(g_\w+)\s*\)'),
]


def _find_iter_origin(text, iter_name, loop_offset, depth=0, visited=None):
    """Backward-scan for what pool `iter_name` was derived from.

    Handles both direct (`iter = g_Pool`) and transitive
    (`iter = other; other = g_Pool`) forms. Self-referential updates like
    `iter = iter + 1` inside the loop body are skipped so we find the
    pre-loop init. Bounded recursion to guard cycles.
    """
    if depth > 5:
        return None
    if visited is None:
        visited = set()
    if iter_name in visited:
        return None
    visited = visited | {iter_name}

    prefix = text[:loop_offset]
    assign_re = re.compile(
        r'\b' + re.escape(iter_name) + r'\s*=\s*([^;]+?);'
    )
    matches = list(assign_re.finditer(prefix))
    if not matches:
        return None

    for m in reversed(matches):
        rhs = m.group(1).strip()
        direct = re.search(r'\b(g_\w+)\b', rhs)
        if direct:
            return direct.group(1)
        local = re.search(r'\b([A-Za-z_][A-Za-z_0-9]*)\b', rhs)
        if local and local.group(1) != iter_name:
            result = _find_iter_origin(
                text, local.group(1), m.start(),
                depth=depth + 1, visited=visited,
            )
            if result:
                return result
    return None


def transform_adjacency_sentinels(code, func_name=None):
    """Rewrite confirmed adjacency-sentinel loops to use pool + count bounds.

    Only rewrites when the pool-sentinel pair appears in the pre-computed
    adjacency map. Candidates that match the text pattern but don't pass
    the symbol-table check are left alone.

    Returns the (possibly unchanged) code string.
    """
    pools = _context['pools']
    pool_adjacency = _context['pool_adjacency']
    if not pools or not pool_adjacency:
        return code

    replacements = []
    seen_positions = set()
    for pattern in _SENTINEL_PATTERNS:
        for m in pattern.finditer(code):
            if m.start() in seen_positions:
                continue
            iter_name = m.group(1)
            sentinel_name = m.group(2)
            pool_name = _find_iter_origin(code, iter_name, m.start())
            if not pool_name or pool_name not in pools:
                continue
            if pool_adjacency.get(pool_name) != sentinel_name:
                continue
            count = pools[pool_name]
            old_cond = m.group(0)
            new_cond = 'while (%s != %s + %d)' % (iter_name, pool_name, count)
            seen_positions.add(m.start())
            replacements.append((m.start(), m.end(), old_cond, new_cond,
                                 pool_name, sentinel_name))

    if not replacements:
        return code

    # Apply in reverse so earlier offsets don't shift.
    result = code
    for start, end, old, new, pool, sentinel in reversed(replacements):
        result = result[:start] + new + result[end:]
        _context['rewrites'].append({
            'function': func_name or '<unknown>',
            'pool': pool,
            'sentinel': sentinel,
            'old': old,
            'new': new,
        })

    return result


# =============================================================================
# Post-export audit report
# =============================================================================

def write_rewrite_report(reports_dir):
    """Write accumulated rewrites from this export to a markdown report.

    Called by the exporter after all functions are processed. No-op if
    the transform was never initialized or no rewrites happened.
    """
    rewrites = _context['rewrites']
    if not rewrites:
        return None

    by_func = defaultdict(list)
    for r in rewrites:
        by_func[r['function']].append(r)

    lines = []
    lines.append('# Adjacency-Sentinel Rewrites')
    lines.append('')
    lines.append('Loops auto-rewritten by the exporter. Watcom\'s end-of-array sentinel')
    lines.append('was the next named global in the original binary; our linker reorders')
    lines.append('globals so the sentinel never matches. See `prompts/fix_compilation.md` §16.')
    lines.append('')
    lines.append('## Summary')
    lines.append('')
    lines.append('- Rewrites applied: **%d**' % len(rewrites))
    lines.append('- Functions touched: **%d**' % len(by_func))
    lines.append('- Pools indexed: **%d**' % len(_context['pools']))
    lines.append('- Adjacency pairs in lookup: **%d**' % len(_context['pool_adjacency']))
    lines.append('')
    lines.append('## Rewrites by function')
    lines.append('')
    for func in sorted(by_func.keys()):
        lines.append('### `%s`' % func)
        lines.append('')
        for r in by_func[func]:
            lines.append('- Pool `%s` sentinel `%s` (count %d)' % (
                r['pool'], r['sentinel'], _context['pools'].get(r['pool'], -1),
            ))
            lines.append('  - Before: `%s`' % r['old'])
            lines.append('  - After:  `%s`' % r['new'])
        lines.append('')

    out_path = os.path.join(reports_dir, 'adjacency_sentinel_rewrites.md')
    with open(out_path, 'w') as f:
        f.write('\n'.join(lines))
    log_info('Adjacency-sentinel: wrote %d rewrites to %s' % (len(rewrites), out_path))
    return out_path
