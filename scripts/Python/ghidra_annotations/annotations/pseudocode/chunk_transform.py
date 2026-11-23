"""Chunk transform for large decompiled functions.

Opt-in transform that splits large functions into a context struct + static helper
functions, making them easier to fix in keep files.

Usage:
    Set "chunked": true in the function's .json file to enable.

The transform:
1. Parses the function signature and variable declarations
2. Finds top-level branch blocks (if/else chains) that exceed a size threshold
3. Generates a context struct holding all locals, and pointers to the params
4. Extracts large branches into static helper functions that take a ctx pointer
5. Each helper unpacks references to ctx members so the body code is unchanged

A helper returns 0 to carry on, CHUNK_RETURN when its body returned from the
function (the value, if any, in ctx->_retval), or GOTO_<label> for a goto to a
label outside it. A branch whose break or continue belongs to a loop outside
it, or whose labels a goto outside it targets, stays inline.
"""

import os
import json
import re
from collections import Counter

from ghidra_annotations.util.log import log_info


# Minimum lines in a branch body to extract it as a chunk
MIN_CHUNK_LINES = 20

# Regex for variable declarations - handles:
#   int iVar1;
#   char local_buf [256];
#   CVector3f *pCVar8;
#   float local_30 [4];
#   CMatrix3x4f local_214;
VAR_DECL_RE = re.compile(
    r'^\s+'                           # leading whitespace
    r'(?:struct\s+)?'                 # optional struct keyword
    r'([\w:]+)'                       # type name (group 1)
    r'\s*(\*+\s*)?'                   # optional pointer stars (group 2)
    r'(\w+)'                          # variable name (group 3)
    r'\s*(\[[\d]+\])?'               # optional array dimension (group 4)
    r'\s*;'                           # semicolon
)

# Declarations the simple form cannot spell back: a pointer to an array,
#   char (*str1) [32];
# or an array of more than one dimension,
#   int local_8 [2] [4];
COMPLEX_DECL_RE = re.compile(
    r'^\s+(?:struct\s+)?[\w:]+\s*'
    r'(?:\(\s*\*+\s*(\w+)\s*\)\s*(?:\[\d+\]\s*)+'
    r'|\**\s*(\w+)\s*(?:\[\d+\]\s*){2,})'
    r';\s*$'
)

# Regex for a single parameter in a signature
# Handles: "CKeyFramedModel *this_ptr", "int param1", "char *buf"
PARAM_RE = re.compile(
    r'(?:struct\s+)?'
    r'([\w:]+)'          # type
    r'\s+(\*+)?'         # pointer (with leading space after type)
    r'\s*(\w+)'          # name
    r'\s*(\[[\d]+\])?'   # array
)

CALLING_CONVENTIONS = ('__cdecl', '__stdcall', '__fastcall', '__thiscall')

# Ghidra names labels LAB_<addr>, switchD_<addr>_caseD_<n> and the like
GOTO_RE = re.compile(r'\bgoto\s+(\w+)\s*;')
LABEL_RE = re.compile(r'^(?!default\b)([A-Za-z_]\w*)\s*:(?!:)')
RETURN_RE = re.compile(r'\breturn\b\s*([^;]*);')
BREAK_RE = re.compile(r'\bbreak\s*;')
CONTINUE_RE = re.compile(r'\bcontinue\s*;')
LOOP_OPEN_RE = re.compile(r'^(?:\}\s*)?(do|while|for|switch)\b')
LITERAL_RE = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'')


class VarInfo:
    """Represents a variable declaration."""
    __slots__ = ('type_name', 'pointer', 'name', 'array_dim', 'raw_line')

    def __init__(self, type_name, pointer, name, array_dim, raw_line):
        self.type_name = type_name
        self.pointer = pointer or ''
        self.name = name
        self.array_dim = array_dim or ''
        self.raw_line = raw_line

    def as_struct_field(self):
        """Generate struct field declaration."""
        if self.type_name is None:
            return '    %s' % self.raw_line.strip()
        ptr = self.pointer.strip()
        if ptr:
            return '    %s %s%s%s;' % (self.type_name, ptr, self.name, self.array_dim)
        return '    %s %s%s;' % (self.type_name, self.name, self.array_dim)

    def as_ref_unpack(self, ctx_name='ctx'):
        """Generate reference unpacking line for chunk function body."""
        ptr = self.pointer.strip()
        if self.type_name is None or self.array_dim:
            return '    auto &%s = %s->%s;' % (self.name, ctx_name, self.name)
        elif ptr:
            return '    %s %s&%s = %s->%s;' % (
                self.type_name, ptr, self.name, ctx_name, self.name)
        else:
            return '    %s &%s = %s->%s;' % (
                self.type_name, self.name, ctx_name, self.name)

    def as_param_field(self):
        """Struct field pointing at the parameter, so every chunk shares it."""
        ptr = self.pointer.strip()
        if self.array_dim:
            return '    %s %s(*%s)%s;' % (self.type_name, ptr, self.name, self.array_dim)
        return '    %s %s*%s;' % (self.type_name, ptr, self.name)

    def as_param_unpack(self, ctx_name='ctx'):
        """Reference to the parameter through its ctx pointer."""
        ptr = self.pointer.strip()
        if self.array_dim:
            return '    auto &%s = *%s->%s;' % (self.name, ctx_name, self.name)
        if ptr:
            return '    %s %s&%s = *%s->%s;' % (self.type_name, ptr, self.name, ctx_name, self.name)
        return '    %s &%s = *%s->%s;' % (self.type_name, self.name, ctx_name, self.name)


class ChunkBlock:
    """A branch block extracted from the function body.

    start_line and end_line bound the whole statement in the function body
    (end exclusive); body_start is where body_lines begin in it.
    """
    __slots__ = ('condition', 'body_lines', 'start_line', 'end_line',
                 'is_else', 'label', 'body_start', 'is_group')

    def __init__(self, condition, body_lines, start_line, end_line,
                 is_else=False, label=None, body_start=None, is_group=False):
        self.condition = condition
        self.body_lines = body_lines
        self.start_line = start_line
        self.end_line = end_line
        self.is_else = is_else
        self.label = label
        self.body_start = start_line + 1 if body_start is None else body_start
        self.is_group = is_group


def parse_signature_params(signature_line):
    """Extract parameter VarInfos from a function signature line."""
    params = []
    m = re.search(r'\(([^)]*)\)', signature_line)
    if not m:
        return params

    param_str = m.group(1).strip()
    if not param_str or param_str == 'void':
        return params

    for part in param_str.split(','):
        part = part.strip()
        pm = PARAM_RE.search(part)
        if pm:
            params.append(VarInfo(
                pm.group(1), pm.group(2), pm.group(3), pm.group(4), part))
    return params


def _return_type(signature_text):
    """The declared return type, without calling convention ('void' when none is given)."""
    m = re.match(r'\s*(.*?)\s*\b\w+\s*\(', signature_text)
    words = [w for w in m.group(1).split() if w not in CALLING_CONVENTIONS] if m else []
    return ' '.join(words) or 'void'


def _parse_declaration(line):
    """VarInfo for a local declaration line, or None when the line is not one."""
    m = VAR_DECL_RE.match(line)
    if m:
        return VarInfo(m.group(1), m.group(2), m.group(3), m.group(4), line)
    m = COMPLEX_DECL_RE.match(line)
    if m:
        return VarInfo(None, None, m.group(1) or m.group(2), None, line)
    return None


def parse_function_parts(decompiled_code):
    """Parse decompiled code into signature, declarations, and body.

    Returns:
        (warning_lines, signature_lines, param_vars, local_vars, body_lines, trailing)
        or None if parsing fails.
    """
    lines = decompiled_code.split('\n')

    warning_lines = []
    sig_lines = []
    brace_idx = None

    for i, line in enumerate(lines):
        stripped = line.strip()
        if stripped.startswith('/*') or stripped.startswith('*') or stripped.endswith('*/'):
            warning_lines.append(line)
            continue
        if stripped == '':
            continue
        if stripped == '{':
            brace_idx = i
            break
        sig_lines.append(line)

    if not sig_lines or brace_idx is None:
        return None

    param_vars = parse_signature_params(' '.join(s.strip() for s in sig_lines))

    # Find variable declarations (between { and first non-declaration line)
    local_vars = []
    body_start = None

    for i in range(brace_idx + 1, len(lines)):
        line = lines[i]
        if line.strip() == '':
            continue
        var = _parse_declaration(line)
        if var is None:
            body_start = i
            break
        local_vars.append(var)

    if body_start is None:
        return None

    # Find closing brace
    body_end = len(lines) - 1
    while body_end > body_start and lines[body_end].strip() == '':
        body_end -= 1
    if lines[body_end].strip() == '}':
        body_end -= 1

    body_lines = lines[body_start:body_end + 1]
    return (warning_lines, sig_lines, param_vars, local_vars, body_lines,
            lines[body_end + 1:])


def find_brace_depth_changes(line):
    """Count net brace depth change in a line, ignoring strings/chars."""
    depth = 0
    in_string = False
    in_char = False
    escape = False

    for ch in line:
        if escape:
            escape = False
            continue
        if ch == '\\':
            escape = True
            continue
        if ch == '"' and not in_char:
            in_string = not in_string
            continue
        if ch == "'" and not in_string:
            in_char = not in_char
            continue
        if in_string or in_char:
            continue
        if ch == '{':
            depth += 1
        elif ch == '}':
            depth -= 1
    return depth


def _branch_kind(stripped):
    """'if', 'else if' or 'else' for a line opening a branch, else None."""
    if stripped.startswith(('if ', 'if(')):
        return 'if'
    if stripped.startswith(('else if ', 'else if(')):
        return 'else if'
    if stripped.startswith('else {'):
        return 'else'
    return None


def _block_extent(lines, i):
    """(body_start, end) of the braced statement opened by lines[i].

    The brace may sit on the statement's own line or on the next non-blank
    one; end is past the closing brace. A statement with no brace, or one
    closed on its own line, has an empty body.
    """
    j = i + 1
    if '{' in lines[i]:
        depth = find_brace_depth_changes(lines[i])
    else:
        depth = 0
        while j < len(lines) and lines[j].strip() == '':
            j += 1
        if j < len(lines) and '{' in lines[j]:
            depth = find_brace_depth_changes(lines[j])
            j += 1
    body_start = j
    while j < len(lines) and depth > 0:
        depth += find_brace_depth_changes(lines[j])
        j += 1
    return body_start, j


def _line_depths(lines):
    depths = []
    depth = 0
    for line in lines:
        depths.append(depth)
        depth += find_brace_depth_changes(line)
    return depths


def find_branch_blocks(body_lines, min_lines=MIN_CHUNK_LINES):
    """Find top-level if/else-if/else branch blocks suitable for extraction.

    Looks for if/else chains at the shallowest brace depth in the body.
    Only extracts blocks that exceed min_lines.

    Returns list of ChunkBlock objects.
    """
    blocks = []
    i = 0
    while i < len(body_lines):
        stripped = body_lines[i].strip()
        kind = _branch_kind(stripped)
        if kind is None:
            i += 1
            continue

        body_start, end = _block_extent(body_lines, i)
        block_body = body_lines[body_start:end - 1]
        if len(block_body) >= min_lines:
            blocks.append(ChunkBlock(
                condition=stripped,
                body_lines=block_body,
                start_line=i,
                end_line=end,
                is_else=kind != 'if',
                label=_generate_chunk_label(stripped, len(blocks)),
                body_start=body_start))
        i = end

    # Second pass: if we found only one huge block, try to split consecutive
    # independent if-blocks inside it (e.g., cheat code handlers).
    # Only applies when the block body has sequential ifs that are NOT inside
    # loops (do/while/for) — otherwise break/continue would break.
    if len(blocks) == 1 and len(blocks[0].body_lines) > min_lines * 4:
        inner_blocks = _split_sequential_ifs(blocks[0], min_lines)
        if inner_blocks:
            blocks = inner_blocks

    # Third pass: recursively split any oversized blocks by scanning their
    # body for inner if/else branches. This handles nested key-dispatch
    # patterns (e.g., if (key < 0x35) { if (key < 0x33) { ... } })
    max_chunk_lines = min_lines * 10  # ~200 lines
    changed = True
    while changed:
        changed = False
        new_blocks = []
        for block in blocks:
            if len(block.body_lines) > max_chunk_lines:
                sub_blocks = _find_inner_branches(block, min_lines)
                if sub_blocks:
                    new_blocks.extend(sub_blocks)
                    changed = True
                    continue
            new_blocks.append(block)
        blocks = new_blocks

    return blocks


def _find_inner_branches(parent, min_lines):
    """Find extractable if/else branches inside a block body.

    Similar to find_branch_blocks but operates on an already-extracted chunk's
    body and places the sub-blocks in the function body through the parent's.

    Returns two or more ChunkBlocks, or an empty list if no useful split found.
    """
    body_lines = parent.body_lines
    line_depths = _line_depths(body_lines)

    # The depths that have if/else branches, shallowest first
    branch_depths = Counter(
        line_depths[i] for i, line in enumerate(body_lines) if _branch_kind(line.strip()))

    for target_depth, count in sorted(branch_depths.items()):
        if count < 2:
            continue

        sub_blocks = []
        i = 0
        while i < len(body_lines):
            stripped = body_lines[i].strip()
            kind = _branch_kind(stripped)
            if line_depths[i] != target_depth or kind is None:
                i += 1
                continue

            body_start, end = _block_extent(body_lines, i)
            block_body = body_lines[body_start:end - 1]
            if len(block_body) >= min_lines:
                label = '%s_%s' % (parent.label, _generate_chunk_label(stripped, len(sub_blocks)))
                sub_blocks.append(ChunkBlock(
                    condition=stripped,
                    body_lines=block_body,
                    start_line=parent.body_start + i,
                    end_line=parent.body_start + end,
                    is_else=kind != 'if',
                    label=label,
                    body_start=parent.body_start + body_start))
            i = end

        if len(sub_blocks) >= 2:
            return sub_blocks

    return []


def _split_sequential_ifs(parent, min_lines):
    """Split a large block of consecutive independent if statements into groups.

    Groups sequential if-blocks (not if/else chains) at the depth where most
    ifs live into chunks of at least min_lines each; a chunk holds whole if
    statements, so its call needs no condition of its own.

    Returns two or more ChunkBlocks, or an empty list if splitting isn't beneficial.
    """
    body_lines = parent.body_lines
    line_depths = _line_depths(body_lines)

    # Find the depth level with the most independent if-statements
    depth_counts = Counter(
        line_depths[i] for i, line in enumerate(body_lines) if _branch_kind(line.strip()) == 'if')
    if not depth_counts:
        return []
    target_depth, target_count = depth_counts.most_common(1)[0]
    if target_count < 3:
        return []

    # Verify these ifs are truly sequential — no loop constructs
    # (do/while/for) between them at the target depth
    for i, line in enumerate(body_lines):
        if line_depths[i] == target_depth and re.match(r'(?:do\s*\{|for\s*\(|for |while\s*\(|while )',
                                                        line.strip()):
            return []

    # Find boundaries of each independent if-block at target_depth
    if_boundaries = []
    i = 0
    while i < len(body_lines):
        if line_depths[i] == target_depth and _branch_kind(body_lines[i].strip()) == 'if':
            end = _block_extent(body_lines, i)[1]
            if_boundaries.append((i, end))
            i = end
        else:
            i += 1

    # Group consecutive if-blocks into chunks of at least min_lines each
    chunks = []
    group_first = None
    for start, end in if_boundaries:
        if group_first is None:
            group_first = start
        if end - group_first >= min_lines:
            chunks.append(_group_block(parent, group_first, end, len(chunks)))
            group_first = None

    return chunks if len(chunks) > 1 else []


def _group_block(parent, first, end, index):
    return ChunkBlock(
        condition='// sequential ifs group %d' % index,
        body_lines=parent.body_lines[first:end],
        start_line=parent.body_start + first,
        end_line=parent.body_start + end,
        label='%s_group_%d' % (parent.label, index),
        body_start=parent.body_start + first,
        is_group=True)


def _generate_chunk_label(condition, index):
    """Generate a readable label for a chunk from its condition."""
    m = re.search(r'==\s*(0x[0-9a-fA-F]+|\d+)', condition)
    if m:
        return 'branch_%s' % m.group(1)
    m = re.search(r'if\s*\(\s*(\w+)', condition)
    if m:
        return 'check_%s_%d' % (m.group(1), index)
    if 'else' in condition and 'if' not in condition:
        return 'else_%d' % index
    return 'chunk_%d' % index


def _mask_literals(line):
    """The line with the inside of its string and char literals blanked, same length."""
    return LITERAL_RE.sub(lambda m: m.group(0)[0] + ' ' * (len(m.group(0)) - 2) + m.group(0)[0], line)


def _escapes_loop(body_lines):
    """True when a break or continue in the lines belongs to a loop or switch outside them."""
    stack = []
    for line in body_lines:
        code = _mask_literals(line).strip()
        if BREAK_RE.search(code) and not any(k in ('do', 'while', 'for', 'switch') for k in stack):
            return True
        if CONTINUE_RE.search(code) and not any(k in ('do', 'while', 'for') for k in stack):
            return True
        opener = LOOP_OPEN_RE.match(code)
        for ch in code:
            if ch == '{':
                stack.append(opener.group(1) if opener else '')
            elif ch == '}' and stack:
                stack.pop()
    return False


def _find_used_vars(body_text, all_vars):
    """Find which variables from all_vars are referenced in body_text."""
    return [var for var in all_vars if re.search(r'\b' + re.escape(var.name) + r'\b', body_text)]


def _find_goto_labels(body_lines):
    """Map goto line index -> target label, and label -> line index of its definition."""
    goto_targets = {}
    label_defs = {}
    for i, line in enumerate(body_lines):
        stripped = line.strip()
        m = GOTO_RE.search(stripped)
        if m:
            goto_targets[i] = m.group(1)
        m = LABEL_RE.match(stripped)
        if m:
            label_defs[m.group(1)] = i
    return goto_targets, label_defs


def _find_cross_boundary_gotos(block, all_label_defs):
    """Find gotos in a block that jump to labels outside the block."""
    cross_gotos = {}
    for i, line in enumerate(block.body_lines):
        m = GOTO_RE.search(line)
        if m and m.group(1) in all_label_defs:
            label_line = all_label_defs[m.group(1)]
            if label_line < block.start_line or label_line >= block.end_line:
                cross_gotos.setdefault(m.group(1), []).append(i)
    return cross_gotos


def _is_extractable(block, goto_targets, label_defs):
    """A block can become a helper unless control enters it or leaves it by a loop.

    A goto from outside to a label inside it would jump into another function,
    and a break or continue for a loop outside it would leave the helper.
    """
    if _escapes_loop(block.body_lines):
        return False
    inside = {label for label, line in label_defs.items() if block.start_line <= line < block.end_line}
    return not any(label in inside and not block.start_line <= line < block.end_line
                   for line, label in goto_targets.items())


def _has_return(lines):
    return any(RETURN_RE.search(_mask_literals(line)) for line in lines)


def _rewrite_returns(line, returns_value):
    """Turn each return in the line into a CHUNK_RETURN, keeping the value in ctx."""
    masked = _mask_literals(line)
    out = []
    pos = 0
    for m in RETURN_RE.finditer(masked):
        value = line[m.start(1):m.end(1)].strip()
        out.append(line[pos:m.start()])
        if returns_value and value:
            out.append('{ ctx->_retval = %s; return CHUNK_RETURN; }' % value)
        else:
            out.append('return CHUNK_RETURN;')
        pos = m.end()
    out.append(line[pos:])
    return ''.join(out)


def generate_chunked_code(decompiled_code, func_name, min_chunk_lines=MIN_CHUNK_LINES):
    """Transform a decompiled function into chunked form with context struct.

    Args:
        decompiled_code: The full decompiled function code (signature + body)
        func_name: The function name (for naming the context struct)
        min_chunk_lines: Minimum lines for a branch to be extracted

    Returns:
        Transformed code string with context struct and helper functions,
        or None if the function doesn't benefit from chunking.
    """
    parsed = parse_function_parts(decompiled_code)
    if parsed is None:
        return None

    warning_lines, sig_lines, param_vars, local_vars, body_lines, _ = parsed

    goto_targets, all_label_defs = _find_goto_labels(body_lines)
    blocks = [block for block in find_branch_blocks(body_lines, min_lines=min_chunk_lines)
              if _is_extractable(block, goto_targets, all_label_defs)]
    if not blocks:
        return None
    # Two branches on the same value would name the same helper
    seen = Counter()
    for block in blocks:
        seen[block.label] += 1
        if seen[block.label] > 1:
            block.label = '%s_%d' % (block.label, seen[block.label] - 1)

    all_vars = param_vars + local_vars
    short_name = _short_func_name(func_name)
    ctx_type = '%s_Ctx' % short_name
    return_type = _return_type(' '.join(s.strip() for s in sig_lines))
    returns_value = return_type != 'void'

    # Assign return codes to cross-boundary goto labels
    goto_label_codes = {}
    for block in blocks:
        for label in _find_cross_boundary_gotos(block, all_label_defs):
            goto_label_codes.setdefault(label, len(goto_label_codes) + 1)
    any_return = any(_has_return(block.body_lines) for block in blocks)

    # === Generate context struct ===
    struct_lines = ['typedef struct %s {' % ctx_type]
    struct_lines += [var.as_param_field() for var in param_vars]
    struct_lines += [var.as_struct_field() for var in local_vars]
    if any_return and returns_value:
        struct_lines.append('    %s _retval;' % return_type)
    struct_lines += ['} %s;' % ctx_type, '']

    if goto_label_codes or any_return:
        struct_lines.append('// Chunk return codes')
        struct_lines.append('// 0 = normal continuation')
        if any_return:
            struct_lines.append('#define CHUNK_RETURN -1')
        for label, code in goto_label_codes.items():
            struct_lines.append('#define GOTO_%s %d' % (label, code))
        struct_lines.append('')

    # === Generate chunk helper functions ===
    helper_lines = []
    for block in blocks:
        used_vars = _find_used_vars('\n'.join(block.body_lines), all_vars)
        cross_gotos = _find_cross_boundary_gotos(block, all_label_defs)

        helper_lines.append(
            '// Chunk: %s (lines %d-%d of original)' % (
                block.label, block.start_line, block.end_line))
        helper_lines.append(
            'static int %s_%s(%s *ctx) {' % (short_name, block.label, ctx_type))

        if used_vars:
            for var in used_vars:
                helper_lines.append(var.as_param_unpack() if var in param_vars else var.as_ref_unpack())
            helper_lines.append('')

        # Body lines, with returns and cross-boundary gotos turned into codes
        for bline in block.body_lines:
            bline = _rewrite_returns(bline, returns_value)
            helper_lines.append(GOTO_RE.sub(
                lambda m: 'return GOTO_%s;' % m.group(1) if m.group(1) in cross_gotos else m.group(0),
                bline))

        helper_lines += ['    return 0;', '}', '']

    # === Rebuild main function with chunks replaced by calls ===
    by_start = {block.start_line: block for block in blocks}
    return_statement = 'return ctx->_retval;' if returns_value else 'return;'
    new_body_lines = []
    skip_until = -1

    def call_lines(block, indent):
        call = '%s_%s(ctx)' % (short_name, block.label)
        cross_gotos = _find_cross_boundary_gotos(block, all_label_defs)
        returns = _has_return(block.body_lines)
        if not cross_gotos and not returns:
            return ['%s%s;' % (indent, call)]
        lines = ['%sint _rc = %s;' % (indent, call)]
        if returns:
            lines.append('%sif (_rc == CHUNK_RETURN) %s' % (indent, return_statement))
        for label in goto_label_codes:
            if label in cross_gotos:
                lines.append('%sif (_rc == GOTO_%s) goto %s;' % (indent, label, label))
        return lines

    for i, line in enumerate(body_lines):
        if i < skip_until:
            continue
        block = by_start.get(i)
        if block is None:
            new_body_lines.append(line)
            continue

        indent = line[:len(line) - len(line.lstrip())]
        calls = call_lines(block, indent + '  ')
        if block.is_group:
            # The group holds whole if statements: call it as they stood
            if len(calls) == 1:
                new_body_lines.append(calls[0][2:])
            else:
                new_body_lines += ['%s{' % indent] + calls + ['%s}' % indent]
        else:
            # The condition and its opening brace as they stand, whatever lines they take
            new_body_lines += body_lines[i:block.body_start] + calls + ['%s}' % indent]
        skip_until = block.end_line

    # === Assemble final output ===
    output_parts = list(warning_lines)
    if warning_lines:
        output_parts.append('')

    output_parts.extend(struct_lines)
    output_parts.extend(helper_lines)
    output_parts.extend(sig_lines)
    output_parts += ['', '{']

    output_parts.append('  %s _ctx_storage = {};' % ctx_type)
    output_parts.append('  %s *ctx = &_ctx_storage;' % ctx_type)
    for pvar in param_vars:
        output_parts.append('  ctx->%s = &%s;' % (pvar.name, pvar.name))
    output_parts.append('')

    # Unpack locals as references for non-chunked body code
    for var in local_vars:
        output_parts.append(var.as_ref_unpack())
    output_parts.append('')

    output_parts.extend(new_body_lines)
    output_parts.append('}')

    return '\n'.join(output_parts)


def _short_func_name(func_name):
    """Extract a short name from the full function name.

    e.g., "core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0"
          -> "CKeyFramedModel_showEditorMenu"

    The source file prefix uses dots in names like "dmodel.cpp" which become
    "dmodel_cpp" in the function name, so we match up to the last _cpp_ or _c_.
    """
    name = re.sub(r'_FUN_[0-9a-fA-F]+$', '', func_name)
    # Remove source file prefix - the virtual filename uses dots
    # (e.g., "core_dmodel.cpp_CKeyFramedModel_showEditorMenu")
    # Match up to the last .cpp_ or .c_ boundary
    name = re.sub(r'^.*\.cpp_', '', name)
    name = re.sub(r'^.*\.c_', '', name)
    # Fallback: also handle underscore-separated variants
    name = re.sub(r'^.*_cpp_', '', name)
    name = re.sub(r'^.*_c_', '', name)
    return name


# === Cache for chunked flag ===
# Maps json_path -> bool, preloaded before cleanup so the flag survives re-export.

_chunked_cache = {}


def preload_chunked_flags(src_dir):
    """Preload 'chunked' flags from all function JSON files before cleanup.

    Must be called before delete_pseudocode() to preserve the flag.

    Args:
        src_dir: The pseudocode/src directory containing function JSONs.
    """
    _chunked_cache.clear()
    if not src_dir or not os.path.exists(src_dir):
        return

    for root, _dirs, files in os.walk(src_dir):
        for filename in files:
            if filename.endswith('.json'):
                json_path = os.path.join(root, filename)
                try:
                    with open(json_path, 'r') as f:
                        data = json.load(f)
                except (OSError, ValueError):
                    continue
                if isinstance(data, dict) and data.get('chunked', False):
                    _chunked_cache[json_path] = True

    if _chunked_cache:
        log_info("Preloaded %d chunked flags" % len(_chunked_cache))


def is_chunked(json_path):
    """Check if a function has the chunked flag enabled.

    Args:
        json_path: Path to the function's JSON file.

    Returns:
        True if the function is opted in to chunking.
    """
    return _chunked_cache.get(json_path, False)
