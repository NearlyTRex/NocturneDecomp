"""Chunk transform for large decompiled functions.

Opt-in transform that splits large functions into a context struct + static helper
functions, making them easier to fix in keep files.

Usage:
    Set "chunked": true in the function's .json file to enable.

The transform:
1. Parses the function signature and variable declarations
2. Finds top-level branch blocks (if/else chains) that exceed a size threshold
3. Generates a context struct holding all locals + params
4. Extracts large branches into static helper functions that take a ctx pointer
5. Each helper unpacks references to ctx members so the body code is unchanged
"""

import os
import json
import re
from collections import OrderedDict


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

# Regex for a single parameter in a signature
# Handles: "CKeyFramedModel *this_ptr", "int param1", "char *buf"
PARAM_RE = re.compile(
    r'(?:struct\s+)?'
    r'([\w:]+)'          # type
    r'\s+(\*+)?'         # pointer (with leading space after type)
    r'\s*(\w+)'          # name
    r'\s*(\[[\d]+\])?'   # array
)


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
        ptr = self.pointer.strip()
        if ptr:
            return '    %s %s%s%s;' % (self.type_name, ptr, self.name, self.array_dim)
        return '    %s %s%s;' % (self.type_name, self.name, self.array_dim)

    def as_ref_unpack(self, ctx_name='ctx'):
        """Generate reference unpacking line for chunk function body."""
        ptr = self.pointer.strip()
        if self.array_dim:
            return '    auto &%s = %s->%s;' % (self.name, ctx_name, self.name)
        elif ptr:
            return '    %s %s&%s = %s->%s;' % (
                self.type_name, ptr, self.name, ctx_name, self.name)
        else:
            return '    %s &%s = %s->%s;' % (
                self.type_name, self.name, ctx_name, self.name)


class ChunkBlock:
    """A branch block extracted from the function body."""
    __slots__ = ('condition', 'body_lines', 'start_line', 'end_line',
                 'is_else', 'label')

    def __init__(self, condition, body_lines, start_line, end_line,
                 is_else=False, label=None):
        self.condition = condition
        self.body_lines = body_lines
        self.start_line = start_line
        self.end_line = end_line
        self.is_else = is_else
        self.label = label


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


def parse_function_parts(decompiled_code):
    """Parse decompiled code into signature, declarations, and body.

    Returns:
        (warning_lines, signature_line, param_vars, local_vars, body_lines, trailing)
        or None if parsing fails.
    """
    lines = decompiled_code.split('\n')

    warning_lines = []
    sig_line = None
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
        if sig_line is None:
            sig_line = line

    if sig_line is None or brace_idx is None:
        return None

    param_vars = parse_signature_params(sig_line)

    # Find variable declarations (between { and first non-declaration line)
    local_vars = []
    body_start = None

    for i in range(brace_idx + 1, len(lines)):
        line = lines[i]
        stripped = line.strip()
        if stripped == '':
            continue
        m = VAR_DECL_RE.match(line)
        if m:
            local_vars.append(VarInfo(
                m.group(1), m.group(2), m.group(3), m.group(4), line))
        else:
            body_start = i
            break

    if body_start is None:
        return None

    # Find closing brace
    body_end = len(lines) - 1
    while body_end > body_start and lines[body_end].strip() == '':
        body_end -= 1
    if lines[body_end].strip() == '}':
        body_end -= 1

    body_lines = lines[body_start:body_end + 1]
    return (warning_lines, sig_line, param_vars, local_vars, body_lines,
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


def find_branch_blocks(body_lines, min_lines=MIN_CHUNK_LINES):
    """Find top-level if/else-if/else branch blocks suitable for extraction.

    Looks for if/else chains at the shallowest brace depth in the body.
    Only extracts blocks that exceed min_lines.

    Returns list of ChunkBlock objects.
    """
    blocks = []

    # First pass: compute depth at each line
    line_depths = []
    current_depth = 0
    for line in body_lines:
        line_depths.append(current_depth)
        current_depth += find_brace_depth_changes(line)

    # Find if/else-if/else chains
    i = 0
    while i < len(body_lines):
        line = body_lines[i]
        stripped = line.strip()

        is_if = stripped.startswith('if ') or stripped.startswith('if(')
        is_else_if = stripped.startswith('else if ') or stripped.startswith('else if(')
        is_else = stripped == 'else {' or stripped.startswith('else {')

        if not (is_if or is_else_if or is_else):
            i += 1
            continue

        block_start = i
        condition = stripped

        # Find the opening brace and track depth
        brace_count = find_brace_depth_changes(line)
        j = i + 1

        if brace_count <= 0:
            while j < len(body_lines) and body_lines[j].strip() == '':
                j += 1
            if j < len(body_lines) and '{' in body_lines[j]:
                brace_count += find_brace_depth_changes(body_lines[j])
                j += 1

        body_block_start = j
        running_depth = brace_count
        while j < len(body_lines) and running_depth > 0:
            running_depth += find_brace_depth_changes(body_lines[j])
            j += 1

        block_end = j
        block_body = body_lines[body_block_start:block_end - 1]

        if len(block_body) >= min_lines:
            label = _generate_chunk_label(condition, len(blocks))
            blocks.append(ChunkBlock(
                condition=condition,
                body_lines=block_body,
                start_line=block_start,
                end_line=block_end,
                is_else=(is_else or is_else_if),
                label=label))

        i = block_end if block_end > i else i + 1

    # Second pass: if we found only one huge block, try to split consecutive
    # independent if-blocks inside it (e.g., cheat code handlers).
    # Only applies when the block body has sequential ifs that are NOT inside
    # loops (do/while/for) — otherwise break/continue would break.
    if len(blocks) == 1 and len(blocks[0].body_lines) > min_lines * 4:
        inner_blocks = _split_sequential_ifs(
            blocks[0].body_lines, blocks[0].start_line,
            min_lines, blocks[0].label)
        if len(inner_blocks) > 1:
            blocks = inner_blocks

    # Third pass: recursively split any oversized blocks by scanning their
    # body for inner if/else branches. This handles nested key-dispatch
    # patterns (e.g., if (key < 0x35) { if (key < 0x33) { ... } })
    MAX_CHUNK_LINES = min_lines * 10  # ~200 lines
    changed = True
    while changed:
        changed = False
        new_blocks = []
        for block in blocks:
            if len(block.body_lines) > MAX_CHUNK_LINES:
                sub_blocks = _find_inner_branches(
                    block.body_lines, block.start_line, min_lines, block.label)
                if sub_blocks and len(sub_blocks) > 1:
                    new_blocks.extend(sub_blocks)
                    changed = True
                    continue
            new_blocks.append(block)
        blocks = new_blocks

    return blocks


def _find_inner_branches(body_lines, parent_start, min_lines, parent_label):
    """Find extractable if/else branches inside a block body.

    Similar to find_branch_blocks but operates on an already-extracted chunk's
    body and adjusts line numbers relative to the parent.

    Returns list of ChunkBlock, or empty list if no useful split found.
    """
    line_depths = []
    current_depth = 0
    for line in body_lines:
        line_depths.append(current_depth)
        current_depth += find_brace_depth_changes(line)

    # Find the shallowest depth that has if/else branches
    from collections import Counter
    branch_depths = Counter()
    for i, line in enumerate(body_lines):
        stripped = line.strip()
        if (stripped.startswith('if ') or stripped.startswith('if(') or
                stripped.startswith('else if ') or stripped.startswith('else if(') or
                stripped.startswith('else {')):
            branch_depths[line_depths[i]] += 1

    if not branch_depths:
        return []

    # Try each depth starting from shallowest
    for target_depth, count in sorted(branch_depths.items()):
        if count < 2:
            continue

        sub_blocks = []
        i = 0
        while i < len(body_lines):
            stripped = body_lines[i].strip()

            is_if = stripped.startswith('if ') or stripped.startswith('if(')
            is_else_if = stripped.startswith('else if ') or stripped.startswith('else if(')
            is_else = stripped == 'else {' or stripped.startswith('else {')

            if line_depths[i] != target_depth or not (is_if or is_else_if or is_else):
                i += 1
                continue

            block_start = i
            condition = stripped
            brace_count = find_brace_depth_changes(body_lines[i])
            j = i + 1

            if brace_count <= 0:
                while j < len(body_lines) and body_lines[j].strip() == '':
                    j += 1
                if j < len(body_lines):
                    brace_count += find_brace_depth_changes(body_lines[j])
                    j += 1

            while j < len(body_lines) and brace_count > 0:
                brace_count += find_brace_depth_changes(body_lines[j])
                j += 1

            block_end = j
            block_body = body_lines[j - (j - i - 1):block_end - 1]
            # Recalculate body properly
            # body starts after the opening brace line, ends before closing brace
            body_start_idx = i + 1
            # Skip to after the opening brace
            temp_depth = find_brace_depth_changes(body_lines[i])
            if temp_depth > 0:
                body_start_idx = i + 1
            else:
                body_start_idx = i + 1
                while body_start_idx < len(body_lines) and '{' not in body_lines[body_start_idx]:
                    body_start_idx += 1
                body_start_idx += 1

            block_body = body_lines[body_start_idx:block_end - 1]

            if len(block_body) >= min_lines:
                label_idx = len(sub_blocks)
                label = '%s_%s' % (parent_label,
                    _generate_chunk_label(condition, label_idx))
                sub_blocks.append(ChunkBlock(
                    condition=condition,
                    body_lines=block_body,
                    start_line=parent_start + block_start + 1,
                    end_line=parent_start + block_end + 1,
                    is_else=(is_else or is_else_if),
                    label=label))

            i = block_end if block_end > i else i + 1

        if len(sub_blocks) >= 2:
            return sub_blocks

    return []


def _split_sequential_ifs(body_lines, parent_start, min_lines, parent_label):
    """Split a large block of consecutive independent if statements into groups.

    Groups sequential if-blocks (not if/else chains) into chunks of roughly
    min_lines size each. Looks at the dominant depth level where most ifs live.

    Returns list of ChunkBlock objects, or empty list if splitting isn't beneficial.
    """
    from collections import Counter

    # Compute depth at each line
    line_depths = []
    current_depth = 0
    for line in body_lines:
        line_depths.append(current_depth)
        current_depth += find_brace_depth_changes(line)

    # Find the depth level with the most independent if-statements
    depth_counts = Counter()
    for i, line in enumerate(body_lines):
        stripped = line.strip()
        if stripped.startswith('if ') or stripped.startswith('if('):
            depth_counts[line_depths[i]] += 1

    if not depth_counts:
        return []

    target_depth = depth_counts.most_common(1)[0][0]
    target_count = depth_counts.most_common(1)[0][1]

    if target_count < 3:
        return []

    # Verify these ifs are truly sequential — no loop constructs
    # (do/while/for) between them at the target depth
    for i, line in enumerate(body_lines):
        stripped = line.strip()
        if line_depths[i] == target_depth:
            if (stripped.startswith('do {') or stripped.startswith('do{') or
                    stripped.startswith('for ') or stripped.startswith('for(') or
                    stripped.startswith('while ') or stripped.startswith('while(')):
                return []  # Has loops at this depth — not safe to split

    # Find boundaries of each independent if-block at target_depth
    if_boundaries = []
    i = 0
    while i < len(body_lines):
        stripped = body_lines[i].strip()

        if (line_depths[i] == target_depth and
                (stripped.startswith('if ') or stripped.startswith('if('))):
            block_start = i
            brace_count = find_brace_depth_changes(body_lines[i])
            j = i + 1

            if brace_count <= 0:
                while j < len(body_lines) and body_lines[j].strip() == '':
                    j += 1
                if j < len(body_lines):
                    brace_count += find_brace_depth_changes(body_lines[j])
                    j += 1

            while j < len(body_lines) and brace_count > 0:
                brace_count += find_brace_depth_changes(body_lines[j])
                j += 1

            if_boundaries.append((block_start, j))
            i = j
        else:
            i += 1

    if len(if_boundaries) < 3:
        return []

    # Group consecutive if-blocks into chunks of ~min_lines each
    chunks = []
    group_start = 0
    group_lines = 0

    for idx, (start, end) in enumerate(if_boundaries):
        block_size = end - start
        if group_lines > 0 and group_lines + block_size > min_lines:
            group_end = if_boundaries[idx - 1][1] if idx > 0 else end
            chunk_body = body_lines[if_boundaries[group_start][0]:group_end]
            if len(chunk_body) >= min_lines:
                chunks.append(ChunkBlock(
                    condition='// sequential ifs group %d' % len(chunks),
                    body_lines=chunk_body,
                    start_line=parent_start + if_boundaries[group_start][0] + 1,
                    end_line=parent_start + group_end + 1,
                    label='%s_group_%d' % (parent_label, len(chunks))))
            group_start = idx
            group_lines = block_size
        else:
            group_lines += block_size

    # Final group
    if group_lines > 0 and group_start < len(if_boundaries):
        final_end = if_boundaries[-1][1]
        chunk_body = body_lines[if_boundaries[group_start][0]:final_end]
        if len(chunk_body) >= min_lines:
            chunks.append(ChunkBlock(
                condition='// sequential ifs group %d' % len(chunks),
                body_lines=chunk_body,
                start_line=parent_start + if_boundaries[group_start][0] + 1,
                end_line=parent_start + final_end + 1,
                label='%s_group_%d' % (parent_label, len(chunks))))

    return chunks if len(chunks) > 1 else []


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


def _find_used_vars(body_text, all_vars):
    """Find which variables from all_vars are referenced in body_text."""
    used = []
    for var in all_vars:
        if re.search(r'\b' + re.escape(var.name) + r'\b', body_text):
            used.append(var)
    return used


def _find_goto_labels(body_lines):
    """Find all goto targets and label definitions in body lines."""
    goto_re = re.compile(r'\bgoto\s+(LAB_\w+)\s*;')
    label_re = re.compile(r'^(LAB_\w+)\s*:')

    goto_targets = {}
    label_defs = {}

    for i, line in enumerate(body_lines):
        stripped = line.strip()
        m = goto_re.search(stripped)
        if m:
            goto_targets[i] = m.group(1)
        m = label_re.match(stripped)
        if m:
            label_defs[m.group(1)] = i

    return goto_targets, label_defs


def _find_cross_boundary_gotos(block, all_label_defs):
    """Find gotos in a block that jump to labels outside the block."""
    goto_re = re.compile(r'\bgoto\s+(LAB_\w+)\s*;')
    cross_gotos = {}

    for i, line in enumerate(block.body_lines):
        m = goto_re.search(line)
        if m:
            label = m.group(1)
            if label in all_label_defs:
                label_line = all_label_defs[label]
                if label_line < block.start_line or label_line >= block.end_line:
                    cross_gotos.setdefault(label, []).append(i)

    return cross_gotos


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

    warning_lines, sig_line, param_vars, local_vars, body_lines, trailing = parsed

    blocks = find_branch_blocks(body_lines, min_lines=min_chunk_lines)
    if not blocks:
        return None

    all_vars = param_vars + local_vars
    short_name = _short_func_name(func_name)
    ctx_type = '%s_Ctx' % short_name

    # Find all label definitions in the full body
    _, all_label_defs = _find_goto_labels(body_lines)

    # Assign return codes to cross-boundary goto labels
    goto_label_codes = {}
    next_code = 1
    for block in blocks:
        cross_gotos = _find_cross_boundary_gotos(block, all_label_defs)
        for label in cross_gotos:
            if label not in goto_label_codes:
                goto_label_codes[label] = next_code
                next_code += 1

    # === Generate context struct ===
    struct_lines = []
    struct_lines.append('typedef struct %s {' % ctx_type)
    for var in all_vars:
        struct_lines.append(var.as_struct_field())
    struct_lines.append('} %s;' % ctx_type)
    struct_lines.append('')

    if goto_label_codes:
        struct_lines.append('// Chunk return codes for cross-boundary gotos')
        struct_lines.append('// 0 = normal continuation')
        for label, code in sorted(goto_label_codes.items(), key=lambda x: x[1]):
            struct_lines.append('#define GOTO_%s %d' % (label, code))
        struct_lines.append('')

    # === Generate chunk helper functions ===
    helper_lines = []
    goto_re = re.compile(r'(\s*)goto\s+(LAB_\w+)\s*;')

    for block in blocks:
        block_body_text = '\n'.join(block.body_lines)
        used_vars = _find_used_vars(block_body_text, all_vars)
        cross_gotos = _find_cross_boundary_gotos(block, all_label_defs)

        helper_lines.append(
            '// Chunk: %s (lines %d-%d of original)' % (
                block.label, block.start_line, block.end_line))
        helper_lines.append(
            'static int %s_%s(%s *ctx) {' % (short_name, block.label, ctx_type))

        if used_vars:
            for var in used_vars:
                helper_lines.append(var.as_ref_unpack())
            helper_lines.append('')

        # Add body lines, replacing cross-boundary gotos with returns
        for bline in block.body_lines:
            m = goto_re.search(bline)
            if m and m.group(2) in cross_gotos:
                indent = m.group(1)
                label = m.group(2)
                helper_lines.append('%sreturn GOTO_%s;' % (indent, label))
            else:
                helper_lines.append(bline)

        helper_lines.append('    return 0;')
        helper_lines.append('}')
        helper_lines.append('')

    # === Rebuild main function with chunks replaced by calls ===
    new_body_lines = []
    skip_until = -1

    for i, line in enumerate(body_lines):
        if i < skip_until:
            continue

        replaced = False
        for block in blocks:
            if i == block.start_line:
                indent = '    ' * (line.count('  ') // 2 or 1)
                stripped = line.strip()

                if stripped.startswith('else if') or stripped.startswith('else {'):
                    if '{' in stripped:
                        cond_part = stripped[:stripped.rindex('{')]
                        new_body_lines.append('%s%s{' % (indent, cond_part))
                    else:
                        new_body_lines.append(line)
                        new_body_lines.append('%s{' % indent)
                elif stripped.startswith('if'):
                    if '{' in stripped:
                        cond_part = stripped[:stripped.rindex('{')]
                        new_body_lines.append('%s%s{' % (indent, cond_part))
                    else:
                        new_body_lines.append(line)
                        new_body_lines.append('%s{' % indent)
                else:
                    new_body_lines.append(line)

                cross_gotos = _find_cross_boundary_gotos(block, all_label_defs)
                if cross_gotos:
                    new_body_lines.append(
                        '%s  int _rc = %s_%s(ctx);' % (indent, short_name, block.label))
                    for label, code in sorted(goto_label_codes.items(),
                                              key=lambda x: x[1]):
                        if label in cross_gotos:
                            new_body_lines.append(
                                '%s  if (_rc == GOTO_%s) goto %s;' % (
                                    indent, label, label))
                else:
                    new_body_lines.append(
                        '%s  %s_%s(ctx);' % (indent, short_name, block.label))

                new_body_lines.append('%s}' % indent)
                skip_until = block.end_line
                replaced = True
                break

        if not replaced:
            new_body_lines.append(line)

    # === Assemble final output ===
    output_parts = []

    for wl in warning_lines:
        output_parts.append(wl)
    if warning_lines:
        output_parts.append('')

    output_parts.extend(struct_lines)
    output_parts.extend(helper_lines)

    output_parts.append(sig_line)
    output_parts.append('')
    output_parts.append('{')

    output_parts.append('  %s _ctx_storage = {};' % ctx_type)
    output_parts.append('  %s *ctx = &_ctx_storage;' % ctx_type)
    for pvar in param_vars:
        output_parts.append('  ctx->%s = %s;' % (pvar.name, pvar.name))
    output_parts.append('')

    # Unpack locals as references for non-chunked body code
    for var in local_vars:
        output_parts.append(var.as_ref_unpack())
    for var in param_vars:
        output_parts.append('  // param %s aliased into ctx above' % var.name)
    output_parts.append('')

    for line in new_body_lines:
        output_parts.append(line)

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
    global _chunked_cache
    _chunked_cache = {}

    if not src_dir or not os.path.exists(src_dir):
        return

    count = 0
    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if filename.endswith('.json'):
                json_path = os.path.join(root, filename)
                try:
                    with open(json_path, 'r') as f:
                        data = json.load(f)
                    if data.get('chunked', False):
                        _chunked_cache[json_path] = True
                        count += 1
                except Exception:
                    pass

    if count:
        try:
            from ghidra_annotations.util.log import log_info
            log_info("Preloaded %d chunked flags" % count)
        except ImportError:
            pass


def is_chunked(json_path):
    """Check if a function has the chunked flag enabled.

    Args:
        json_path: Path to the function's JSON file.

    Returns:
        True if the function is opted in to chunking.
    """
    return _chunked_cache.get(json_path, False)
