# Auto-split from the former monolithic suspects.py — see suspects/__init__.py.
"""Struct layout/size maps and the access-path type-resolution toolkit
(`_sfo_*`, `resolve_access_path_type`) shared by the type-aware content
detectors (struct_field_overrun, alloc/mem_magic_size)."""

import json
import os
import re
from ._common import (SUSPECT_SEVERITY)




# =============================================================================
# Struct-field array overrun (#15 adjacent-field artifact, struct-member form)
# =============================================================================
#
# Watcom 1-based indexing emits `[base + index]` where `base` is the address of
# the field BEFORE the real target and the index compensates by overrunning into
# the next field. The global form (`(&g_Scalar)[idx]`) is caught by
# identify_wrong_global_suspects; this catches the STRUCT-MEMBER form
# (`obj->earlier_field[const + var]`) that lands in the following field — e.g.
# `pick->cancel_button_text[uVar4 + 99]` where cancel_button_text is char[100]
# and the real target is the adjacent search_text_buffer.
#
# Type-aware: needs a struct layout map (field offsets/lengths/array bounds), so
# it is inert without one and only fires at export time / when test_suspects
# builds the map from data_types.json.

# Keyed by resolved data_types.json path so a multi-program export in one
# process (export_annotations.py --all-programs) doesn't leak one program's
# struct map into another's suspect detection.
_struct_layout_cache = {}


_struct_size_cache = {}



_SFO_ACCESS_RE = re.compile(r'\b([A-Za-z_]\w*)\s*(?:->|\.)\s*([A-Za-z_]\w*)\s*\[')


_SFO_SIG_RE = re.compile(r'//\s*Signature:.*?\((.*)\)')


# `TYPE *NAME;` or `TYPE *NAME = <init>;` — the optional initializer lets
# mid-block pointer decls (`void *user_data = (void *)(h + 1);`) register as
# pointer locals, so a later `(uint)user_data` truncation isn't missed. The
# `\*+` still requires a real `TYPE *NAME` shape, so assignments/derefs (no
# type token, or leading `*`) don't match.
_SFO_DECL_RE = re.compile(
    r'^\s*([A-Za-z_]\w*)\s*\*+\s*([A-Za-z_]\w*)\s*(?:=[^;]*)?;\s*$')


_SFO_VALDECL_RE = re.compile(
    r'^\s*([A-Za-z_]\w*)\s+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;\s*$')


_SFO_PTR_PARAM_RE = re.compile(r'^([A-Za-z_]\w*)\s*\*+\s*([A-Za-z_]\w*)$')


_SFO_VAL_PARAM_RE = re.compile(r'^([A-Za-z_]\w*)\s+([A-Za-z_]\w*)$')


_SFO_INT_RE = re.compile(r'^(0x[0-9a-fA-F]+|\d+)$')


_SFO_IDENT_RE = re.compile(r'[A-Za-z_]\w*')


# Statement keywords that the value-declaration regex would otherwise treat
# as a "type" — e.g. `return this_ptr;` parses as type=`return`, var=`this_ptr`
# and clobbers the variable's real (param/decl) type. Guard against that.
_SFO_NON_TYPE_KEYWORDS = frozenset((
    'return', 'goto', 'break', 'continue', 'delete', 'case', 'do', 'else',
    'sizeof', 'new', 'throw',
))


# A cast-deref whose inner expression is a pointer plus a byte offset:
# `*(int *)(p + 0x3f1bc)`. We balanced-extract the inner expr after the final
# '(' the regex stops on, then resolve the pointer to a struct field.
_SFO_DEREF_START_RE = re.compile(
    r'\*\s*\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*\(')


# A simple `LOCAL = <rhs>;` assignment, used to map a local back to the struct
# field its pointer was derived from (the two-step base-shift form).
_SFO_LOCAL_ASSIGN_RE = re.compile(r'^([A-Za-z_]\w*)\s*=\s*(.+?);\s*$')




def build_struct_layout_map(data_types_path):
    """Parse data_types.json into a per-struct field layout.

    Returns dict: struct_name -> list of field dicts sorted by offset, each
    {'name', 'offset', 'len', 'n'} where 'n' is the first array-dimension
    element count (None for non-array fields). Returns {} if the file is
    missing or unreadable.
    """
    try:
        with open(data_types_path) as f:
            data = json.load(f)
    except (IOError, ValueError):
        return {}
    layout = {}
    for section in ('structs', 'unions'):
        for entry in data.get(section, []):
            name = entry.get('name')
            fields = entry.get('fields')
            if not name or not fields:
                continue
            parsed = []
            for fld in fields:
                fname = fld.get('name')
                offset = fld.get('offset')
                flen = fld.get('len')
                if fname is None or offset is None or flen is None:
                    continue
                ftype = fld.get('type', '') or ''
                dim = re.search(r'\[(\d+)\]', ftype)
                # Base type name: strip array dims, pointer stars, and a
                # leading struct/union/enum keyword, leaving e.g.
                # 'CPodDirectoryEntry' from 'CPodDirectoryEntry *' /
                # 'SNetworkAddr' from 'SNetworkAddr' / 'char' from 'char[20]'.
                base = re.sub(r'\[.*$', '', ftype)
                stars = base.count('*')
                base = base.replace('*', '').strip()
                base = re.sub(r'^(?:struct|union|enum)\s+', '', base)
                parsed.append({
                    'name': fname,
                    'offset': offset,
                    'len': flen,
                    'n': int(dim.group(1)) if dim else None,
                    'type': base,
                    # Pointer-ness preserved for the pointer_truncation detector
                    # (the 'type' base above deliberately strips '*' for the
                    # struct-walk field resolvers, which lose this signal).
                    'stars': stars,
                    'is_ptr': stars > 0,
                })
            parsed.sort(key=lambda fl: fl['offset'])
            layout[name] = parsed
    return layout




def get_struct_layout_map(pseudocode_src_dir):
    """Cached struct layout map, located relative to pseudocode_src_dir.

    Mirrors dat_report.build_struct_size_cache's path derivation:
    pseudocode_src_dir is .../<exe>/pseudocode/src, data_types.json is at
    .../<exe>/data_types/data_types.json.
    """
    base = pseudocode_src_dir
    while base and os.path.basename(base) != 'pseudocode':
        base = os.path.dirname(base)
    path = None
    if base:
        path = os.path.join(os.path.dirname(base), 'data_types', 'data_types.json')
    if path not in _struct_layout_cache:
        _struct_layout_cache[path] = build_struct_layout_map(path) if path else {}
    return _struct_layout_cache[path]




def build_struct_size_map(data_types_path):
    """Parse data_types.json into a struct/union name -> total byte size map.

    The struct-level `len` field is the exact Ghidra size (e.g. SVertexData
    -> 20, CComplexPolygon -> 52). Used by identify_alloc_magic_size to detect
    a magic allocation stride that equals sizeof(T). Returns {} if the file is
    missing or unreadable.
    """
    try:
        with open(data_types_path) as f:
            data = json.load(f)
    except (IOError, ValueError):
        return {}
    sizes = {}
    for section in ('structs', 'unions'):
        for entry in data.get(section, []):
            name = entry.get('name')
            length = entry.get('len')
            if name and isinstance(length, int) and length > 0:
                sizes[name] = length
    return sizes




def get_struct_size_map(pseudocode_src_dir):
    """Cached struct/union name -> size map, located like get_struct_layout_map."""
    base = pseudocode_src_dir
    while base and os.path.basename(base) != 'pseudocode':
        base = os.path.dirname(base)
    path = None
    if base:
        path = os.path.join(os.path.dirname(base), 'data_types', 'data_types.json')
    if path not in _struct_size_cache:
        _struct_size_cache[path] = build_struct_size_map(path) if path else {}
    return _struct_size_cache[path]




def _sfo_resolve_var_types(code):
    """Map identifier -> declared struct type name (pointer/value, deref'd)."""
    var_types = {}
    lines = code.split('\n')
    for line in lines:
        m = _SFO_SIG_RE.search(line)
        if not m:
            continue
        for part in m.group(1).split(','):
            part = part.strip()
            pm = _SFO_PTR_PARAM_RE.match(part) or _SFO_VAL_PARAM_RE.match(part)
            if pm:
                var_types[pm.group(2)] = pm.group(1)
        break
    for line in lines:
        m = _SFO_DECL_RE.match(line) or _SFO_VALDECL_RE.match(line)
        if m and m.group(1) not in _SFO_NON_TYPE_KEYWORDS:
            var_types[m.group(2)] = m.group(1)
    return var_types




def resolve_access_path_type(path, var_types, layout):
    """Resolve a pure access-path expression to the struct type at its end.

    Walks `root[->|.]field[idx]...` using `var_types` (identifier -> declared
    type) for the root and `layout` (struct -> [{name, type, ...}]) for each
    field step. Array subscripts `[..]` leave the type unchanged (an element
    of a `T[]` / `T *` field is a `T`, which is what the field's base type
    already names). Returns the final type name, or None if any step can't be
    resolved (unknown root, paren-wrapped sub-path, missing field, etc.).
    Conservative by design: None means "don't know", so callers should not
    suppress on a None result.
    """
    if not path or not layout:
        return None
    p = re.sub(r'\s+', '', path)
    if p[:1] == '&':
        p = p[1:]
    m = re.match(r'[A-Za-z_]\w*', p)
    if not m:
        return None
    cur = var_types.get(m.group(0))
    if not cur:
        return None
    pos = m.end()
    while pos < len(p):
        ch = p[pos]
        if ch == '[':
            depth = 0
            j = pos
            while j < len(p):
                if p[j] == '[':
                    depth += 1
                elif p[j] == ']':
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            if j >= len(p):
                return None
            pos = j + 1
        elif p[pos:pos + 2] == '->' or ch == '.':
            pos += 2 if p[pos:pos + 2] == '->' else 1
            fm = re.match(r'[A-Za-z_]\w*', p[pos:])
            if not fm:
                return None
            flds = layout.get(cur)
            if not flds:
                return None
            ftype = None
            for fl in flds:
                if fl.get('name') == fm.group(0):
                    ftype = fl.get('type')
                    break
            if not ftype:
                return None
            cur = ftype
            pos += fm.end()
        else:
            # Leading '(', '*', or any other token -> give up (conservative).
            return None
    return cur




def _sfo_index_const(idx_expr):
    """Return (const_sum, has_var) for the top-level additive index expr.

    Only pure integer-literal terms joined by top-level '+' count toward the
    constant; any term containing an identifier marks has_var. Terms with '*'
    or nested arithmetic are treated as variable, not added to the constant.
    """
    const = 0
    has_var = False
    depth = 0
    term = ''
    terms = []
    for ch in idx_expr:
        if ch in '([':
            depth += 1
            term += ch
        elif ch in ')]':
            depth -= 1
            term += ch
        elif ch == '+' and depth == 0:
            terms.append(term)
            term = ''
        else:
            term += ch
    terms.append(term)
    for t in terms:
        t = t.strip()
        if not t:
            continue
        if _SFO_INT_RE.match(t):
            const += int(t, 0)
        elif _SFO_IDENT_RE.search(t):
            has_var = True
    return const, has_var




def _sfo_strip_cast(expr):
    """Strip one leading C pointer cast (`(char *)`, `(int *)`) from expr."""
    return re.sub(r'^\(\s*\w+(?:\s+\w+)*\s*\*+\s*\)\s*', '', expr.strip()).strip()




def _sfo_top_terms(expr):
    """Split an expression into its top-level '+'/'-' separated terms."""
    depth, term, terms = 0, '', []
    for ch in expr:
        if ch in '([':
            depth += 1
            term += ch
        elif ch in ')]':
            depth -= 1
            term += ch
        elif ch in '+-' and depth == 0:
            terms.append(term)
            term = ''
        else:
            term += ch
    terms.append(term)
    return [t.strip() for t in terms if t.strip()]




def _sfo_split_ptr_const(expr):
    """Split a top-level '+'-joined pointer expression into (base, const_sum).

    const_sum sums the pure integer-literal terms; base is the single remaining
    non-literal term (the pointer). Returns None unless exactly one non-literal
    term remains. Only '+' is treated as the join — a '-' would be a negative
    offset (a different artifact class), so it stays glued to its term and the
    term fails to resolve as a field (no false flag).
    """
    depth, term, terms = 0, '', []
    for ch in expr:
        if ch in '([':
            depth += 1
            term += ch
        elif ch in ')]':
            depth -= 1
            term += ch
        elif ch == '+' and depth == 0:
            terms.append(term)
            term = ''
        else:
            term += ch
    terms.append(term)
    const, base_terms = 0, []
    for t in terms:
        t = t.strip()
        if not t:
            continue
        if _SFO_INT_RE.match(t):
            const += int(t, 0)
        else:
            base_terms.append(t)
    if len(base_terms) != 1:
        return None
    return (base_terms[0], const)




def _sfo_field_extent(path, var_types, layout):
    """Resolve a field-access path to (root_struct, byte_offset, length, addr).

    `byte_offset` is the position of the path's final field relative to the
    root variable's struct; `length` is that field's size; `addr` is True when
    the expression genuinely denotes the field's *address* — either it had a
    leading '&' or the final field is an array (which decays to its address).
    `addr` is False for a bare scalar/pointer field, where `field + N` is value
    arithmetic / a walk of the *pointed-to* buffer, NOT a struct base-shift —
    callers must not flag those. Handles a leading pointer cast and parens that
    merely group a sub-path (`(a->b).c`). Returns None on any unresolved
    root/field, a subscript, or an unexpected token (None = "don't know").
    """
    if not path or not layout:
        return None
    p = _sfo_strip_cast(path)
    had_amp = p[:1] == '&'
    if had_amp:
        p = p[1:].strip()
    if '(' in p:
        # Grouping parens around a sub-path are safe to drop ('(a->b).c' ==
        # 'a->b.c'); bail if real arithmetic (not the '-' of '->') leaks in.
        bare = p.replace('(', '').replace(')', '')
        if re.search(r'[+\-*/%]', bare.replace('->', '')):
            return None
        p = bare
    p = re.sub(r'\s+', '', p)
    m = re.match(r'[A-Za-z_]\w*', p)
    if not m:
        return None
    root_struct = var_types.get(m.group(0))
    if not root_struct:
        return None
    cur = root_struct
    offset, final_len, final_is_array, pos = 0, None, False, m.end()
    while pos < len(p):
        if p[pos:pos + 2] == '->' or p[pos] == '.':
            pos += 2 if p[pos:pos + 2] == '->' else 1
            fm = re.match(r'[A-Za-z_]\w*', p[pos:])
            if not fm:
                return None
            flds = layout.get(cur)
            if not flds:
                return None
            fld = next((fl for fl in flds if fl['name'] == fm.group(0)), None)
            if fld is None:
                return None
            offset += fld['offset']
            final_len = fld['len']
            final_is_array = fld.get('n') is not None
            cur = fld.get('type')
            pos += fm.end()
        else:
            # A subscript or any other token: bail (conservative).
            return None
    if final_len is None:
        return None
    return (root_struct, offset, final_len, had_amp or final_is_array)




def _sfo_field_owner_offset(path, var_types, layout):
    """Resolve a field-access path to the struct that DIRECTLY owns its final
    field, plus that field's offset WITHIN that owner.

    Unlike `_sfo_field_extent` (which accumulates a root-relative offset and so
    becomes meaningless once the path crosses a pointer hop), this returns the
    innermost owning struct and the final field's offset inside it — exactly
    what a `base + CONST` walk needs when `base` is `struct_ptr->field`: the
    walk indexes elements of `owner` and CONST is a field offset inside one
    element. Array subscripts (`[i]`) are element steps that preserve the type
    and leave the owner/offset unchanged.

    Returns (owner_struct, field_offset_in_owner, final_len, is_addr,
    final_is_ptr) or None if any hop is unresolved. `is_addr` is True when the
    expression denotes the field's address (leading '&' or the final field is
    an array, which decays); a bare scalar/pointer field's value + CONST walks
    the pointed-to buffer, not the struct, so callers must skip those.
    """
    if not path or not layout:
        return None
    p = _sfo_strip_cast(path)
    had_amp = p[:1] == '&'
    if had_amp:
        p = p[1:].strip()
    if '(' in p:
        # Grouping parens around a sub-path are safe to drop ('(a->b).c' ==
        # 'a->b.c'); bail if real arithmetic (not the '-' of '->') leaks in.
        bare = p.replace('(', '').replace(')', '')
        if re.search(r'[+\-*/%]', bare.replace('->', '')):
            return None
        p = bare
    p = re.sub(r'\s+', '', p)
    m = re.match(r'[A-Za-z_]\w*', p)
    if not m:
        return None
    cur = var_types.get(m.group(0))
    if not cur:
        return None
    owner, field_off, final_len = None, None, None
    final_is_array, final_is_ptr, pos = False, False, m.end()
    while pos < len(p):
        ch = p[pos]
        if ch == '[':
            depth, j = 0, pos
            while j < len(p):
                if p[j] == '[':
                    depth += 1
                elif p[j] == ']':
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            if j >= len(p):
                return None
            pos = j + 1  # element step: type/owner/offset unchanged
        elif p[pos:pos + 2] == '->' or ch == '.':
            pos += 2 if p[pos:pos + 2] == '->' else 1
            fm = re.match(r'[A-Za-z_]\w*', p[pos:])
            if not fm:
                return None
            flds = layout.get(cur)
            if not flds:
                return None
            fld = next((fl for fl in flds if fl['name'] == fm.group(0)), None)
            if fld is None:
                return None
            owner = cur
            field_off = fld['offset']
            final_len = fld['len']
            final_is_array = fld.get('n') is not None
            final_is_ptr = bool(fld.get('is_ptr'))
            cur = fld.get('type')
            pos += fm.end()
        else:
            # Leading '*' or any other token -> give up (conservative).
            return None
    if owner is None or final_len is None:
        return None
    return (owner, field_off, final_len, had_amp or final_is_array, final_is_ptr)




def _sfo_field_at_offset(layout, struct_name, off):
    """Return the field of `struct_name` whose [offset, offset+len) contains
    `off` (innermost/smallest when several overlap, e.g. unions), or None."""
    flds = layout.get(struct_name)
    if not flds:
        return None
    best = None
    for fl in flds:
        if fl['offset'] <= off < fl['offset'] + fl['len']:
            if best is None or fl['len'] < best['len']:
                best = fl
    return best




def _sfo_field_base_deref_overruns(code, var_types, layout, seen):
    """Detect `*(T *)(p + CONST)` where `p` is derived from a struct field and
    `field_offset + CONST` lands in a *different* field of the same struct.

    This is the raw-deref sibling of the array-index #15 case: Ghidra anchored
    the pointer on the wrong field (typically a leading `char[N]` at a small
    offset) and reaches a far field via a large byte constant. It compiles and
    runs but forms an out-of-array pointer (UBSan `index N out of bounds`).

    Both the direct form `*(int *)((char *)obj->field + 0xN)` and the two-step
    form `p = obj.field + var; *(int *)(p + 0xN);` are covered — for the latter
    we first map each `LOCAL = <field-path> + ...` to that field.

    Low false-positive by construction: the base must resolve to a real struct
    field, CONST must exceed that field's length (so it isn't ordinary in-field
    access), and CONST must land inside a *named sibling field* of the same
    struct (so it isn't arbitrary pointer math or a past-the-struct write).
    """
    out = []
    if not layout:
        return out
    # Map locals to the field their pointer was derived from.
    local_field_base = {}
    for line in code.split('\n'):
        s = line.strip()
        if s.startswith('//') or s.startswith('/*') or s.startswith('*'):
            continue
        am = _SFO_LOCAL_ASSIGN_RE.match(s)
        if not am:
            continue
        for term in _sfo_top_terms(am.group(2)):
            ext = _sfo_field_extent(term, var_types, layout)
            if ext:
                local_field_base[am.group(1)] = ext
                break
    # Scan cast-derefs.
    for line_no, line in enumerate(code.split('\n'), 1):
        s = line.strip()
        if s.startswith('//') or s.startswith('/*'):
            continue
        for dm in _SFO_DEREF_START_RE.finditer(line):
            start, depth, j = dm.end(), 1, dm.end()
            while j < len(line):
                if line[j] == '(':
                    depth += 1
                elif line[j] == ')':
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            if depth != 0:
                continue
            split = _sfo_split_ptr_const(line[start:j])
            if not split:
                continue
            base_expr, const = split
            if const <= 0:
                continue
            ext = None
            bm = re.match(r'^([A-Za-z_]\w*)$', base_expr.strip())
            if bm and bm.group(1) in local_field_base:
                ext = local_field_base[bm.group(1)]
            if ext is None:
                ext = _sfo_field_extent(base_expr, var_types, layout)
            if ext is None:
                continue
            root_struct, foff, flen, addr = ext
            # Only an array (decays to its address) or an explicit `&field`
            # forms a struct-base pointer. A scalar/pointer field's value plus
            # an offset walks elsewhere (the pointed-to buffer, or a mistyped
            # handle), not the struct — never a base-shift.
            if not addr:
                continue
            if const < flen:
                continue  # stays within the base field — ordinary access
            sib = _sfo_field_at_offset(layout, root_struct, foff + const)
            if sib is None or sib['offset'] == foff:
                continue
            key = ('sfo_deref', line_no, base_expr.strip(), const)
            if key in seen:
                continue
            seen.add(key)
            out.append({
                'line': line_no,
                'type': 'struct_field_overrun',
                'match': '*(...)(%s + 0x%x)' % (base_expr.strip(), const),
                'text': s[:120],
                'description': (
                    '*(...)(%s + 0x%x): the pointer is based on a field at '
                    'offset 0x%x (size %d in %s) but the +0x%x byte offset '
                    'lands in field %s (offset 0x%x). Ghidra anchored on the '
                    'wrong field — rewrite as direct access to %s (#15 '
                    'base-shift; forms an out-of-array pointer, trips UBSan).'
                    % (base_expr.strip(), const, foff, flen, root_struct,
                       const, sib['name'], sib['offset'], sib['name'])),
                'severity': SUSPECT_SEVERITY.get('struct_field_overrun',
                                                 'moderate'),
            })
    return out
