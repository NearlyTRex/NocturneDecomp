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

# Known struct sizes for labeling
KNOWN_STRUCTS = {
    0x30: 'SRenderVertex',     # 48 bytes, 12 dwords
    0x18: 'CBoundingBox3D',    # 24 bytes, 6 dwords
    0x0c: 'CVector3f',        # 12 bytes, 3 dwords
}

ByValueArg = namedtuple('ByValueArg', ['size', 'dword_count', 'source_expr', 'arg_position'])
CallSite = namedtuple('CallSite', ['caller_name', 'caller_address', 'call_address', 'callee_name', 'args', 'prologue_sub_esp'])

# Regex to parse an instruction line:
#   MNEMONIC OPERANDS                       ; ADDRESS
INSTR_RE = re.compile(
    r'^\s+'
    r'(\S+)'                          # mnemonic
    r'(?:\s+(.*?))?'                  # optional operands
    r'\s*;\s*([0-9a-fA-F]+)'         # address after semicolon
)

# Match label lines:   ;   Label: name
LABEL_RE = re.compile(r'^\s+;\s+Label:\s+(\S+)')

# Match the header function name/signature line
HEADER_NAME_RE = re.compile(r'^;\s+__cdecl\s+.*?\s+(\S+)\(')


def parse_asm_file(asm_path):
    """Parse an .asm file into structured data.

    Returns:
        (func_name, instructions)
        where instructions is list of (line_idx, address, mnemonic, operands, comment_rest)
    """
    with open(asm_path, 'r') as f:
        lines = f.readlines()

    func_name = None
    instructions = []
    in_body = False

    for line_idx, line in enumerate(lines):
        raw = line.rstrip('\n')

        # Extract function name from header
        if not in_body:
            m = HEADER_NAME_RE.match(raw)
            if m:
                func_name = m.group(1)

            if raw.strip() == 'section .text':
                in_body = True
            continue

        # Parse instruction lines
        m = INSTR_RE.match(raw)
        if m:
            mnemonic = m.group(1)
            operands = (m.group(2) or '').strip()
            address = m.group(3)
            # Get full comment after the address
            comment_rest = ''
            addr_pos = raw.find('; ' + address)
            if addr_pos >= 0:
                after_addr = raw[addr_pos + len('; ' + address):]
                comment_rest = after_addr.strip()
            instructions.append((line_idx, address, mnemonic, operands, comment_rest))
            continue

        # Parse label lines to get func_name if not found in header
        m = LABEL_RE.match(raw)
        if m and func_name is None:
            func_name = m.group(1)

    return func_name, instructions


def extract_callee_name(instructions, call_idx):
    """Extract the callee name from a CALL instruction.

    Returns (callee_name, is_indirect).
    """
    _, _, mnemonic, operands, _ = instructions[call_idx]

    # Indirect calls (vtable): CALL dword ptr [...] or CALL EAX etc.
    if 'dword ptr' in operands or operands.startswith('['):
        return None, True
    # Register-indirect calls
    if re.match(r'^E[A-Z]{2}$', operands):
        return None, True

    callee_name = operands.strip()
    if callee_name:
        return callee_name, False

    return None, True


def find_pass_by_value_args(instructions, call_idx):
    """Scan backward from a CALL to find pass-by-value struct arguments.

    Returns list of ByValueArg in order (arg1 = nearest to CALL = first C param).
    """
    args = []
    # Scan backward up to 40 instructions for multiple args with interleaved code
    scan_limit = max(0, call_idx - 40)
    # Track gap since last found block to avoid matching prologue code
    last_found_idx = call_idx

    i = call_idx - 1
    while i >= scan_limit:
        _, _, mnemonic, operands, _ = instructions[i]

        # Stop conditions
        if mnemonic == 'CALL':
            break
        if mnemonic == 'MOV' and operands == 'EBP,ESP':
            break  # function prologue
        # If we've found args and there's a large gap, stop scanning
        # (avoids matching prologue/local-init code far from the CALL)
        if args and (last_found_idx - i) > 12:
            break

        # Look for MOVSD.REP
        if mnemonic == 'MOVSD.REP':
            arg, block_start_idx = _analyze_movsd_rep_block(instructions, i)
            if arg is not None:
                args.append(arg)
                last_found_idx = i
                # Skip past the SUB ESP for this block to avoid re-matching
                # unrelated earlier MOVSD.REP blocks
                if block_start_idx is not None:
                    i = block_start_idx - 1
                    continue

        i -= 1

    if not args:
        return []

    # Args were found bottom-up. In cdecl right-to-left push order:
    # The MOVSD.REP nearest to CALL is arg1 (first C param).
    # args[0] = nearest to CALL = arg1, args[1] = further = arg2, etc.
    for idx, arg in enumerate(args):
        args[idx] = arg._replace(arg_position=idx + 1)

    return args


def _analyze_movsd_rep_block(instructions, movsd_idx):
    """Analyze a MOVSD.REP instruction to determine if it's pass-by-value.

    Key check: MOV EDI,ESP must appear in the preceding 1-4 instructions.
    If LEA EDI,[...] appears instead, it's a local buffer copy, not pass-by-value.

    The expected pattern is:
        SUB ESP,<size>       ; allocate space (within ~6 insns before MOV EDI,ESP)
        MOV ECX,<count>      ; dword count
        MOV EDI,ESP          ; destination = stack pointer
        [LEA ESI,... / MOV ESI,...] ; source
        MOVSD.REP            ; bulk copy

    Returns (ByValueArg, block_start_idx) or (None, None).
    block_start_idx is the index of the SUB ESP instruction for skip-ahead.
    """
    scan_start = movsd_idx - 1
    scan_end = max(0, movsd_idx - 5)

    edi_esp_idx = None

    for j in range(scan_start, scan_end - 1, -1):
        _, _, mn, ops, _ = instructions[j]

        # MOV EDI,ESP = pass-by-value (destination is stack pointer)
        if mn == 'MOV' and ops.strip() == 'EDI,ESP':
            edi_esp_idx = j

        # LEA EDI,[...] = local buffer copy, NOT pass-by-value
        if mn == 'LEA' and ops.startswith('EDI,'):
            return None, None

    if edi_esp_idx is None:
        return None, None

    # Find SUB ESP,<size> and MOV ECX,<count> between MOV EDI,ESP and 6 insns before it
    # Stop at any CALL instruction (a CALL between SUB ESP and MOV EDI,ESP means
    # the SUB ESP belongs to a different context)
    sub_esp_size = None
    sub_esp_idx = None
    ecx_count = None

    for j in range(edi_esp_idx - 1, max(0, edi_esp_idx - 7) - 1, -1):
        _, _, mn, ops, _ = instructions[j]

        if mn == 'CALL':
            break  # SUB ESP before a CALL is not for this block

        if mn == 'SUB' and ops.startswith('ESP,'):
            size_match = re.match(r'ESP,0x([0-9a-fA-F]+)', ops)
            if size_match and sub_esp_size is None:
                sub_esp_size = int(size_match.group(1), 16)
                sub_esp_idx = j

        if mn == 'MOV' and ops.startswith('ECX,'):
            count_match = re.match(r'ECX,0x([0-9a-fA-F]+)', ops)
            if count_match and ecx_count is None:
                ecx_count = int(count_match.group(1), 16)

    # Find the source expression (ESI setup) between MOV EDI,ESP and MOVSD.REP
    source_expr = None
    for j in range(movsd_idx - 1, max(edi_esp_idx - 1, 0), -1):
        _, _, mn, ops, _ = instructions[j]

        if mn in ('MOV', 'LEA') and ops.startswith('ESI,'):
            source_expr = ops[4:].strip()
            break

    # Also check before MOV EDI,ESP for ESI setup
    if source_expr is None:
        for j in range(edi_esp_idx - 1, max(0, edi_esp_idx - 4) - 1, -1):
            _, _, mn, ops, _ = instructions[j]
            if mn in ('MOV', 'LEA') and ops.startswith('ESI,'):
                source_expr = ops[4:].strip()
                break

    # SUB ESP is required - it proves this is a dynamic stack allocation for
    # pass-by-value, not just a copy into preallocated local buffer space
    if sub_esp_size is None:
        return None, None

    size = sub_esp_size
    dword_count = ecx_count
    if dword_count is None:
        dword_count = size // 4

    # block_start_idx = earliest instruction in this block (SUB ESP or ECX setup)
    block_start = sub_esp_idx if sub_esp_idx is not None else edi_esp_idx

    return ByValueArg(
        size=size,
        dword_count=dword_count or 0,
        source_expr=source_expr or 'unknown',
        arg_position=0  # Set by caller
    ), block_start


def analyze_asm_directory(asm_dir):
    """Analyze all .asm files in directory for pass-by-value patterns.

    Returns:
        (call_sites, total_movsd_count, pass_by_value_count)
    """
    call_sites = []
    total_movsd = 0
    pbv_movsd = 0

    for root, dirs, files in os.walk(asm_dir):
        for filename in sorted(files):
            if not filename.endswith('.asm'):
                continue
            asm_path = os.path.join(root, filename)
            try:
                sites, file_movsd, file_pbv = analyze_single_file(asm_path)
                call_sites.extend(sites)
                total_movsd += file_movsd
                pbv_movsd += file_pbv
            except Exception as e:
                import sys
                print("Warning: Failed to analyze %s: %s" % (asm_path, e),
                      file=sys.stderr)

    return call_sites, total_movsd, pbv_movsd


def _find_prologue_sub_esp(instructions):
    """Find the prologue SUB ESP size (first SUB ESP before any CALL)."""
    for _, _, mn, ops, _ in instructions:
        if mn == 'CALL':
            break
        if mn == 'SUB' and ops.startswith('ESP,'):
            m = re.match(r'ESP,0x([0-9a-fA-F]+)', ops)
            if m:
                return int(m.group(1), 16)
    return 0


def analyze_single_file(asm_path):
    """Analyze a single .asm file for pass-by-value patterns.

    Returns:
        (call_sites, movsd_count, pbv_count)
    """
    func_name, instructions = parse_asm_file(asm_path)
    if not instructions:
        return [], 0, 0

    movsd_count = sum(1 for _, _, mn, _, _ in instructions if mn == 'MOVSD.REP')
    prologue_sub_esp = _find_prologue_sub_esp(instructions)

    call_sites = []
    pbv_count = 0

    for idx, (line_idx, addr, mnemonic, operands, comment) in enumerate(instructions):
        if mnemonic != 'CALL':
            continue

        callee_name, is_indirect = extract_callee_name(instructions, idx)
        if is_indirect:
            continue

        args = find_pass_by_value_args(instructions, idx)
        if args:
            pbv_count += len(args)
            caller_addr = instructions[0][1] if instructions else '?'
            call_sites.append(CallSite(
                caller_name=func_name or os.path.basename(asm_path).replace('.asm', ''),
                caller_address=caller_addr,
                call_address=addr,
                callee_name=callee_name,
                args=args,
                prologue_sub_esp=prologue_sub_esp,
            ))

    return call_sites, movsd_count, pbv_count


def struct_label(size):
    """Get a human-readable label for a struct size."""
    name = KNOWN_STRUCTS.get(size)
    if name:
        return name
    return '?struct_%d' % size


def format_report(call_sites, total_movsd, pbv_count):
    """Format the full report grouped by callee."""
    by_callee = defaultdict(list)
    for site in call_sites:
        by_callee[site.callee_name].append(site)

    sorted_callees = sorted(by_callee.items(), key=lambda x: -len(x[1]))

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

        # Build parameter summary from most common arg pattern
        size_counts = defaultdict(int)
        for site in sites:
            key = tuple(a.size for a in site.args)
            size_counts[key] += 1
        most_common = max(size_counts.items(), key=lambda x: x[1])[0]

        param_parts = []
        for i, sz in enumerate(most_common):
            label = struct_label(sz)
            param_parts.append('arg%d=%s (0x%x)' % (i + 1, label, sz))
        lines.append('  Params: %s' % ', '.join(param_parts))

        lines.append('  Call sites (%d):' % len(sites))
        for site in sorted(sites, key=lambda s: s.caller_name):
            # Compact arg summary
            if len(set(a.size for a in site.args)) == 1:
                arg_summary = '%dx %s' % (len(site.args), struct_label(site.args[0].size))
                if site.args[0].size not in KNOWN_STRUCTS:
                    arg_summary += ' (0x%x)' % site.args[0].size
            else:
                arg_summary = ', '.join('%s (0x%x)' % (struct_label(a.size), a.size) for a in site.args)
            lines.append('    %-40s @ 0x%s   %s' % (site.caller_name, site.call_address, arg_summary))

        lines.append('')
        lines.append('-' * 80)

    # Caller frame size fixes section
    # Group by caller, find max dynamic growth per caller
    by_caller = defaultdict(list)
    for site in call_sites:
        by_caller[site.caller_name].append(site)

    frame_fixes = []
    for caller_name, sites in sorted(by_caller.items()):
        prologue = sites[0].prologue_sub_esp
        max_dynamic = max(sum(a.size for a in s.args) for s in sites)
        required = prologue + max_dynamic
        if max_dynamic > 0:
            frame_fixes.append((caller_name, sites[0].caller_address, prologue, required, max_dynamic))

    if frame_fixes:
        lines.append('')
        lines.append('=' * 100)
        lines.append('CALLER FRAME SIZE FIXES')
        lines.append('=' * 100)
        lines.append('')
        lines.append('These callers need their local frame size (SUB ESP) increased to cover')
        lines.append('the dynamic stack allocations for pass-by-value arguments.')
        lines.append('')
        for caller_name, caller_addr, current, required, dynamic in sorted(frame_fixes, key=lambda x: -x[4]):
            lines.append('  %-50s current: 0x%x  required: 0x%x  (+0x%x for by-value args)' % (
                caller_name, current, required, dynamic))

    return '\n'.join(lines)


def format_caller_detail(call_sites, caller_name):
    """Format detailed view for a specific caller function."""
    matching = [s for s in call_sites if caller_name in s.caller_name]
    if not matching:
        return 'No pass-by-value call sites found in caller matching "%s"' % caller_name

    lines = []
    lines.append('Pass-by-value call sites in %s:' % caller_name)
    lines.append('')

    for site in matching:
        lines.append('  CALL %s @ 0x%s' % (site.callee_name, site.call_address))
        for arg in site.args:
            label = struct_label(arg.size)
            lines.append('    arg%d: %s (0x%x bytes, %d dwords), source: %s' % (
                arg.arg_position, label, arg.size, arg.dword_count, arg.source_expr))
        lines.append('')

    return '\n'.join(lines)


def format_callee_detail(call_sites, callee_name):
    """Format detailed view for a specific callee function."""
    matching = [s for s in call_sites if callee_name in s.callee_name]
    if not matching:
        return 'No pass-by-value call sites found for callee matching "%s"' % callee_name

    lines = []
    lines.append('Callee: %s' % callee_name)
    lines.append('')

    for site in matching[:1]:
        param_parts = []
        for arg in site.args:
            label = struct_label(arg.size)
            param_parts.append('arg%d=%s (0x%x)' % (arg.arg_position, label, arg.size))
        lines.append('  Params: %s' % ', '.join(param_parts))

    lines.append('  Call sites (%d):' % len(matching))
    lines.append('')

    for site in sorted(matching, key=lambda s: s.caller_name):
        lines.append('  %s @ 0x%s' % (site.caller_name, site.call_address))
        for arg in site.args:
            label = struct_label(arg.size)
            lines.append('    arg%d: %s (0x%x), source: %s' % (
                arg.arg_position, label, arg.size, arg.source_expr))
        lines.append('')

    return '\n'.join(lines)


def to_json(call_sites, total_movsd, pbv_count):
    """Convert results to JSON-serializable format."""
    by_callee = defaultdict(list)
    for site in call_sites:
        by_callee[site.callee_name].append(site)

    result = {
        'summary': {
            'total_movsd_rep': total_movsd,
            'pass_by_value_count': pbv_count,
            'callee_count': len(by_callee),
            'call_site_count': len(call_sites),
        },
        'callees': {}
    }

    for callee_name, sites in sorted(by_callee.items(), key=lambda x: -len(x[1])):
        callee_data = {
            'call_site_count': len(sites),
            'params': [],
            'call_sites': [],
        }
        if sites:
            for arg in sites[0].args:
                callee_data['params'].append({
                    'position': arg.arg_position,
                    'size': arg.size,
                    'dword_count': arg.dword_count,
                    'struct_name': KNOWN_STRUCTS.get(arg.size),
                })
        for site in sites:
            callee_data['call_sites'].append({
                'caller': site.caller_name,
                'caller_address': site.caller_address,
                'call_address': site.call_address,
                'prologue_sub_esp': site.prologue_sub_esp,
                'args': [{
                    'position': a.arg_position,
                    'size': a.size,
                    'dword_count': a.dword_count,
                    'source_expr': a.source_expr,
                    'struct_name': KNOWN_STRUCTS.get(a.size),
                } for a in site.args],
            })
        result['callees'][callee_name] = callee_data

    return result
