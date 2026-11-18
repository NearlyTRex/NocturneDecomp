# Render-flags transform for pseudocode export
#
# Rewrites integer literals used with g_RenderStateFlags into named bit-OR
# expressions. The global is a 10-bit bitmask (0x001..0x200); consumers test
# individual bits with `&`, writers set combinations via plain integer
# assignment. Ghidra-emitted hex is hard to read; this transform substitutes
# the atomic bit names from the verified equate table.
#
# Covers:
#   g_RenderStateFlags.dword = 0x1E7
#     → g_RenderStateFlags.dword = (RENDER_ALPHA_FROM_VERTEX | RENDER_TEX_ENABLE
#                                   | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR
#                                   | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST
#                                   | RENDER_DEPTH_WRITE)
#   (g_RenderStateFlags.dword & 0x40) == 0
#     → (g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0
#   g_RenderStateFlags.dword == 0x80
#     → g_RenderStateFlags.dword == RENDER_DEPTH_WRITE
#   g_RenderStateFlags.dword |= 0x20
#     → g_RenderStateFlags.dword |= RENDER_BLEND_READ_DEST
#
# Does NOT touch .bytes[N] accesses — those index into byte-aligned slices of
# the dword with a shifted bit layout; handling them correctly needs per-byte
# context that's out of scope for v1. Those sites will retain raw integer
# literals after the transform.
#
# Bit semantics verified in:
#   research/02-mrgl_initial_investigation/RENDER_STATE_FLAGS_VERIFIED.md

import re


# Atomic bit -> name mapping. The order of this list controls the order in
# which names appear inside a decomposed OR expression (low bit first).
RENDER_STATE_FLAG_BITS = [
    (0x001, 'RENDER_TEX_ENABLE'),
    (0x002, 'RENDER_FORCE_SOLID_LOOP'),
    (0x004, 'RENDER_FOG_COLOR'),
    (0x008, 'RENDER_SOLID_ALPHA_BLEND'),
    (0x010, 'RENDER_LIGHTING_COLOR'),
    (0x020, 'RENDER_BLEND_READ_DEST'),
    (0x040, 'RENDER_DEPTH_TEST'),
    (0x080, 'RENDER_DEPTH_WRITE'),
    (0x100, 'RENDER_ALPHA_FROM_VERTEX'),
    (0x200, 'RENDER_COLOR_FROM_VERTEX'),
]


def decompose_render_flags_value(value):
    """Decompose an integer into a named bit-OR expression.

    Returns:
        '0' for 0
        single bit name (bare, no parens) for exact single-bit values
        '(NAME_A | NAME_B | ...)' for multi-bit values
        trailing '0x<HEX>' term appended if any bits fall outside the known table
    """
    if value == 0:
        return '0'

    names = []
    remaining = value
    for bit_val, bit_name in RENDER_STATE_FLAG_BITS:
        if remaining & bit_val:
            names.append(bit_name)
            remaining &= ~bit_val

    if remaining != 0:
        names.append('0x%X' % remaining)

    if len(names) == 1:
        return names[0]
    return '(' + ' | '.join(names) + ')'


_INT_LITERAL = r'(?:0x[0-9a-fA-F]+|\d+)(?![\w.])'
# Match the .dword form only. Bare g_RenderStateFlags (struct-to-struct assigns)
# and .bytes[N] (byte-sliced) are deliberately excluded. The lookbehind keeps a
# longer name ending in g_RenderStateFlags (or a member of that name) out.
_GLOBAL_DWORD = r'(?<![\w.>])g_RenderStateFlags\.dword'

# Operator alternation. Longer operators MUST come first so that e.g. '==' wins
# over '=' and '|=' wins over '|'.
_OPERATORS = r'(?:==|!=|\|=|&=|\^=|&|\||\^|=)'

# Binary op with the global on the left: GLOBAL OP LITERAL.
_BINOP_GLOBAL_FIRST = re.compile(
    r'(' + _GLOBAL_DWORD + r')'
    r'(\s*' + _OPERATORS + r'\s*)'
    r'(' + _INT_LITERAL + r')'
)

# Binary op with the literal on the left: LITERAL OP GLOBAL. Only meaningful for
# the commutative bit ops (& | ^); equality/assignment don't appear this way.
_BINOP_LITERAL_FIRST = re.compile(
    r'(?<![\w.])'
    r'(' + _INT_LITERAL + r')'
    r'(\s*[&|^]\s*)'
    r'(' + _GLOBAL_DWORD + r')'
)

# An assignment to the global whose value ORs a literal into another flags word:
# GLOBAL = x | LITERAL.
_ASSIGN_OR_LITERAL = re.compile(
    r'(' + _GLOBAL_DWORD + r'\s*=\s*[\w.]+(?:->\w+)*\s*\|\s*)'
    r'(' + _INT_LITERAL + r')'
)

# Byte-sliced access: g_RenderStateFlags.bytes[N] & MASK. Only `&` with a mask
# that fits the byte keeps its value when the byte is widened to the dword:
# bytes[N] & M == (dword & (M << 8N)) >> 8N. `|` and `^` would pull the other
# three bytes into the result, so they, writes and equality tests on .bytes[N]
# stay as literals for manual cleanup.
_GLOBAL_BYTES = r'(?<![\w.>])g_RenderStateFlags\.bytes\[(\d+)\]'
_BINOP_BYTES_BITOP = re.compile(
    _GLOBAL_BYTES
    + r'(\s*&\s*)'
    + r'(' + _INT_LITERAL + r')'
)


# `(bytes[N] & M) != 0` and `== 0` only ask whether a bit is set, which the
# shift back down cannot change, so those keep the plain dword test.
_ZERO_TEST_AFTER = re.compile(r'\s*\)\s*[!=]=\s*0(?![\w.])')


def _is_zero_test(m):
    return (m.string[:m.start()].rstrip().endswith('(')
            and _ZERO_TEST_AFTER.match(m.string, m.end()) is not None)


def _parse_int(literal):
    if literal.startswith(('0x', '0X')):
        return int(literal, 16)
    return int(literal)


def transform_render_state_flags(code):
    """Rewrite g_RenderStateFlags integer literals into named bit expressions.

    Args:
        code: Decompiled C/C++ code string

    Returns:
        Transformed code with bitmask integers replaced by atomic bit names.
    """
    def repl_global_first(m):
        global_expr, operator, literal = m.group(1), m.group(2), m.group(3)
        value = _parse_int(literal)
        return global_expr + operator + decompose_render_flags_value(value)

    def repl_literal_first(m):
        literal, operator, global_expr = m.group(1), m.group(2), m.group(3)
        value = _parse_int(literal)
        return decompose_render_flags_value(value) + operator + global_expr

    def repl_assign_or(m):
        return m.group(1) + decompose_render_flags_value(_parse_int(m.group(2)))

    def repl_bytes_bitop(m):
        byte_idx = int(m.group(1))
        operator = m.group(2)
        mask = _parse_int(m.group(3))
        if byte_idx > 3 or mask > 0xFF:
            # Past the dword, or a mask wider than the byte: leave for manual review.
            return m.group(0)
        masked = ('g_RenderStateFlags.dword' + operator
                  + decompose_render_flags_value(mask << (byte_idx * 8)))
        if byte_idx == 0 or _is_zero_test(m):
            return masked
        return '((%s) >> %d)' % (masked, byte_idx * 8)

    result = _BINOP_GLOBAL_FIRST.sub(repl_global_first, code)
    result = _BINOP_LITERAL_FIRST.sub(repl_literal_first, result)
    result = _ASSIGN_OR_LITERAL.sub(repl_assign_or, result)
    result = _BINOP_BYTES_BITOP.sub(repl_bytes_bitop, result)
    return result
