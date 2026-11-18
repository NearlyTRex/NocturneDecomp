# Detect pass-by-value struct arguments from assembly.
#
# Scans .asm files for the pattern where structs are bulk-copied onto the stack
# (via REP MOVSD with MOV EDI,ESP) before a CALL instruction, indicating the
# callee takes the struct by value rather than by reference.
#
# Report is grouped by callee function (the actionable target for signature fixes).

import os
import re
from collections import namedtuple, defaultdict

# Functions that take by-value struct parameters.
# Ghidra cannot recognize the Watcom REP MOVSD by-value pattern, so callers
# of these functions get broken decompilation and need inline asm replacement.
# Keyed by address (lowercase, no 0x prefix) for reliable matching against
# func_calls entries.
BYVALUE_CALLEES = {
    '407d70': 'clipAndDrawLine2D',
    '408070': 'clipAndDrawLine3D',
    '533c50': 'calculateMainDataSize',
    '5a75e0': 'CSfxSlot_mix',
}

# Known struct sizes for labeling
KNOWN_STRUCTS = {
    0x30: 'SRenderVertex',     # 48 bytes, 12 dwords
    0x18: 'CBoundingBox3D',    # 24 bytes, 6 dwords
    0x0c: 'CVector3f',        # 12 bytes, 3 dwords
}

# arg_sizes: the by-value argument sizes, nearest the CALL (the first C parameter) first
CallSite = namedtuple('CallSite', ['caller_name', 'call_address', 'callee_name', 'arg_sizes', 'prologue_sub_esp'])

# An instruction line:   MNEMONIC OPERANDS                       ; ADDRESS
# The mnemonic starts with a letter, so an indented comment such as
# `;   XREF to: ... ; CCodec * ...` (whose `CC` reads as hex) is not one.
INSTR_RE = re.compile(
    r'^\s+'
    r'([A-Z][A-Z0-9.]*)'              # mnemonic
    r'(?:\s+(.*?))?'                  # optional operands
    r'\s*;\s*([0-9a-fA-F]+)'         # address after semicolon
)

# Match label lines:   ;   Label: name. The function's own label ends with the
# file's name (`..._writePBGHeader_FUN_0054b930`); a body fragment placed before
# the entry can put a jump label (`LAB_...`) first.
LABEL_RE = re.compile(r'^\s+;\s+Label:\s+(\S+)')

SUB_ESP_RE = re.compile(r'ESP,0x([0-9a-fA-F]+)')


def parse_asm_file(asm_path):
    """Parse an .asm file into structured data.

    Returns:
        (func_name, instructions)
        where func_name is the label ending with the file's name, else the
        file's name, and instructions is a list of (address, mnemonic, operands)
    """
    with open(asm_path, 'r') as f:
        lines = f.readlines()

    stem = os.path.basename(asm_path)[:-len('.asm')]
    func_name = stem
    instructions = []
    in_body = False

    for line in lines:
        raw = line.rstrip('\n')
        if not in_body:
            in_body = raw.strip() == 'section .text'
            continue

        m = INSTR_RE.match(raw)
        if m:
            instructions.append((m.group(3), m.group(1), (m.group(2) or '').strip()))
            continue

        m = LABEL_RE.match(raw)
        if m and m.group(1).endswith(stem):
            func_name = m.group(1)

    return func_name, instructions


def extract_callee_name(operands):
    """The direct callee of a CALL, or None for a call through memory or a register."""
    if 'dword ptr' in operands or operands.startswith('[') or re.match(r'^E[A-Z]{2}$', operands):
        return None
    return operands


def find_pass_by_value_args(instructions, call_idx, prologue_idx=None):
    """Scan backward from a CALL to find pass-by-value struct arguments.

    prologue_idx is the function's frame-allocating SUB ESP; a copy into the
    space it allocated is a local, not an argument.

    Returns the argument sizes, nearest the CALL (the first C parameter) first.
    """
    sizes = []
    # Scan backward up to 40 instructions for multiple args with interleaved code
    scan_limit = max(0, call_idx - 40)
    # Track gap since last found block to avoid matching prologue code
    last_found_idx = call_idx

    i = call_idx - 1
    while i >= scan_limit:
        _, mnemonic, operands = instructions[i]

        # Stop conditions
        if mnemonic == 'CALL':
            break
        if mnemonic == 'MOV' and operands == 'EBP,ESP':
            break  # function prologue
        # If we've found args and there's a large gap, stop scanning
        # (avoids matching prologue/local-init code far from the CALL)
        if sizes and (last_found_idx - i) > 12:
            break

        if mnemonic == 'MOVSD.REP':
            size, block_start_idx = _analyze_movsd_rep_block(instructions, i)
            if size is not None and block_start_idx != prologue_idx:
                sizes.append(size)
                last_found_idx = i
                # Skip past the SUB ESP for this block to avoid re-matching
                # unrelated earlier MOVSD.REP blocks
                i = block_start_idx - 1
                continue

        i -= 1

    return sizes


def _analyze_movsd_rep_block(instructions, movsd_idx):
    """Analyze a MOVSD.REP instruction to determine if it's pass-by-value.

    Key check: the last instruction to set EDI, within the preceding 1-4, must
    be MOV EDI,ESP. If it is LEA EDI,[...] (or any other load of EDI), it's a
    local buffer copy, not pass-by-value. Only the nearest one counts: a
    second argument's copy sits within four instructions of the first's MOV
    EDI,ESP.

    The expected pattern is:
        SUB ESP,<size>       ; allocate space (within ~6 insns before MOV EDI,ESP)
        MOV ECX,<count>      ; dword count
        MOV EDI,ESP          ; destination = stack pointer
        [LEA ESI,... / MOV ESI,...] ; source
        MOVSD.REP            ; bulk copy

    Returns (size, index of the SUB ESP) or (None, None).
    """
    edi_esp_idx = None
    for j in range(movsd_idx - 1, max(0, movsd_idx - 5) - 1, -1):
        _, mn, ops = instructions[j]
        if mn in ('MOV', 'LEA') and ops.startswith('EDI,'):
            # EDI = ESP: the copy's destination is the stack top, an argument
            if mn == 'MOV' and ops == 'EDI,ESP':
                edi_esp_idx = j
            break

    if edi_esp_idx is None:
        return None, None

    # SUB ESP,<size> within 6 insns before MOV EDI,ESP is required: it proves
    # a dynamic stack allocation, not a copy into preallocated local space.
    # A CALL between them means the SUB ESP belongs to a different context.
    for j in range(edi_esp_idx - 1, max(0, edi_esp_idx - 7) - 1, -1):
        _, mn, ops = instructions[j]
        if mn == 'CALL':
            break
        size_match = SUB_ESP_RE.match(ops) if mn == 'SUB' else None
        if size_match:
            return int(size_match.group(1), 16), j

    return None, None


def _find_prologue_sub_esp(instructions):
    """The frame-allocating SUB ESP (the first one before any CALL), as (index, size).

    (None, 0) when the function allocates no frame before its first call.
    """
    for idx, (_, mn, ops) in enumerate(instructions):
        if mn == 'CALL':
            break
        m = SUB_ESP_RE.match(ops) if mn == 'SUB' else None
        if m:
            return idx, int(m.group(1), 16)
    return None, 0


def analyze_single_file(asm_path):
    """Analyze a single .asm file for pass-by-value patterns.

    Returns:
        (call_sites, movsd_count, pbv_count)
    """
    func_name, instructions = parse_asm_file(asm_path)

    movsd_count = sum(1 for _, mn, _ in instructions if mn == 'MOVSD.REP')
    prologue_idx, prologue_sub_esp = _find_prologue_sub_esp(instructions)

    call_sites = []
    pbv_count = 0

    for idx, (addr, mnemonic, operands) in enumerate(instructions):
        if mnemonic != 'CALL':
            continue

        callee_name = extract_callee_name(operands)
        if callee_name is None:
            continue

        sizes = find_pass_by_value_args(instructions, idx, prologue_idx)
        if sizes:
            pbv_count += len(sizes)
            call_sites.append(CallSite(
                caller_name=func_name,
                call_address=addr,
                callee_name=callee_name,
                arg_sizes=sizes,
                prologue_sub_esp=prologue_sub_esp,
            ))

    return call_sites, movsd_count, pbv_count


def struct_label(size):
    """Get a human-readable label for a struct size."""
    return KNOWN_STRUCTS.get(size, '?struct_%d' % size)


def format_report(call_sites, total_movsd, pbv_count):
    """Format the full report grouped by callee.

    Everything is ordered by name or value, never by the order the functions
    were visited, so an export that finds the same sites writes the same report.
    """
    by_callee = defaultdict(list)
    for site in call_sites:
        by_callee[site.callee_name].append(site)

    sorted_callees = sorted(by_callee.items(), key=lambda x: (-len(x[1]), x[0]))

    lines = []
    lines.append('=' * 100)
    lines.append('PASS-BY-VALUE STRUCT ARGUMENTS REPORT')
    lines.append('=' * 100)
    lines.append('')
    lines.append('%d functions with pass-by-value parameters (%d MOVSD.REP scanned, %d are pass-by-value)' % (
        len(sorted_callees), total_movsd, pbv_count))
    lines.append('')
    lines.append('=' * 100)

    for callee_name, sites in sorted_callees:
        lines.append('')
        lines.append(callee_name)

        # Parameter summary from the most common size pattern; a tie goes to the smaller pattern
        size_counts = defaultdict(int)
        for site in sites:
            size_counts[tuple(site.arg_sizes)] += 1
        most_common = min(size_counts, key=lambda k: (-size_counts[k], k))

        param_parts = ['arg%d=%s (0x%x)' % (i + 1, struct_label(sz), sz) for i, sz in enumerate(most_common)]
        lines.append('  Params: %s' % ', '.join(param_parts))

        lines.append('  Call sites (%d):' % len(sites))
        for site in sorted(sites, key=lambda s: (s.caller_name, s.call_address)):
            # Compact arg summary
            if len(set(site.arg_sizes)) == 1:
                size = site.arg_sizes[0]
                arg_summary = '%dx %s' % (len(site.arg_sizes), struct_label(size))
                if size not in KNOWN_STRUCTS:
                    arg_summary += ' (0x%x)' % size
            else:
                arg_summary = ', '.join('%s (0x%x)' % (struct_label(sz), sz) for sz in site.arg_sizes)
            lines.append('    %-40s @ 0x%s   %s' % (site.caller_name, site.call_address, arg_summary))

        lines.append('')
        lines.append('-' * 80)

    # Caller frame size fixes: the largest dynamic growth per caller
    by_caller = defaultdict(list)
    for site in call_sites:
        by_caller[site.caller_name].append(site)

    frame_fixes = []
    for caller_name, sites in by_caller.items():
        prologue = sites[0].prologue_sub_esp
        max_dynamic = max(sum(s.arg_sizes) for s in sites)
        frame_fixes.append((caller_name, prologue, prologue + max_dynamic, max_dynamic))

    if frame_fixes:
        lines.append('')
        lines.append('=' * 100)
        lines.append('CALLER FRAME SIZE FIXES')
        lines.append('=' * 100)
        lines.append('')
        lines.append('These callers need their local frame size (SUB ESP) increased to cover')
        lines.append('the dynamic stack allocations for pass-by-value arguments.')
        lines.append('')
        for caller_name, current, required, dynamic in sorted(frame_fixes, key=lambda x: (-x[3], x[0])):
            lines.append('  %-50s current: 0x%x  required: 0x%x  (+0x%x for by-value args)' % (
                caller_name, current, required, dynamic))

    return '\n'.join(lines)
