# ADJ pointer type report
# Analyzes ctor/dtor assembly to find sub-object offsets and generate
# a report of needed adjusted pointer types (e.g., CMyClass_ptr_344).

import os
import re
import glob
from collections import defaultdict
from ghidra_annotations.util.log import log_info


# Markers that identify sub-object construction/destruction calls
SUBOBJ_MARKERS = ['_ctor_', '_dtor_', '__arrinit', '_arrdtor_']

# Callee-saved registers (preserved across calls per cdecl)
CALLEE_SAVED = {'EBX', 'ESI', 'EDI', 'EBP'}

# All general-purpose registers we track
ALL_REGS = {'EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI', 'EBP'}


def signed32(val):
    """Interpret a 32-bit unsigned value as signed."""
    return val - 0x100000000 if val >= 0x80000000 else val


def parse_hex(s):
    """Parse a hex string (with or without 0x prefix)."""
    return int(s, 16)


def is_subobj_call(name):
    """Check if a CALL target is a sub-object ctor/dtor/array init."""
    return any(m in name for m in SUBOBJ_MARKERS)


def extract_info(filepath):
    """Extract class name and function type from asm filename."""
    basename = os.path.basename(filepath)
    m = re.match(r'(.+?)_(ctor|dtor)_FUN_[0-9a-fA-F]+\.asm', basename)
    if m:
        return m.group(1), m.group(2)
    return None, None


def parse_instructions(filepath):
    """Parse an asm file into a list of (mnemonic, operands, address) tuples."""
    instructions = []
    with open(filepath) as f:
        for line in f:
            # Instructions with operands: "    MOV EAX,dword ptr [ESP + 0x4]  ; 004d1720"
            m = re.match(r'    (\w[\w.]*)\s+(.*?)\s*;\s*([0-9a-fA-F]+)', line)
            if m:
                mnemonic = m.group(1).upper().split('.')[0]  # Strip suffixes like .REP
                instructions.append((mnemonic, m.group(2).strip(), m.group(3)))
                continue
            # Instructions without operands: "    RET  ; 004d1789"
            m = re.match(r'    (\w+)\s*;\s*([0-9a-fA-F]+)', line)
            if m:
                instructions.append((m.group(1).upper(), '', m.group(2)))
    return instructions


def compute_this_ptr_offsets(instructions):
    """Determine where this_ptr lives on the stack.

    Returns a dict mapping access patterns to True if they reference this_ptr.
    Handles both ESP-relative and EBP-frame-relative addressing.
    """
    # Count initial PUSH register saves
    push_saves = 0
    for mn, ops, _ in instructions:
        if mn == 'PUSH' and ops.strip().upper() in ALL_REGS:
            push_saves += 1
        else:
            break

    # Check for SUB ESP allocation and MOV EBP,ESP frame pointer
    has_frame = False
    frame_push_count = 0
    sub_esp = 0

    for i, (mn, ops, _) in enumerate(instructions):
        if mn == 'MOV' and ops.strip() == 'EBP,ESP':
            has_frame = True
            frame_push_count = sum(
                1 for mn2, ops2, _ in instructions[:i]
                if mn2 == 'PUSH' and ops2.strip().upper() in ALL_REGS
            )
            break
        if mn == 'SUB' and ops.strip().startswith('ESP,'):
            m = re.match(r'ESP,(0x[0-9a-fA-F]+)', ops.strip())
            if m:
                sub_esp = parse_hex(m.group(1))

    # Check for AND ESP alignment (makes ESP-relative detection unreliable)
    has_and_esp = any(
        mn == 'AND' and ops.strip().startswith('ESP,')
        for mn, ops, _ in instructions
    )

    esp_offset = 0x4 + push_saves * 4 + sub_esp
    ebp_offset = frame_push_count * 4 + 4 if has_frame else None

    return {
        'esp_offset': esp_offset,
        'ebp_offset': ebp_offset,
        'has_frame': has_frame,
        'has_and_esp': has_and_esp,
        'push_saves': push_saves,
    }


def analyze_asm(filepath):
    """Analyze an asm file to find sub-object ctor/dtor calls and their offsets.

    Returns list of (call_name, offset_from_this) tuples.
    offset_from_this is an int, or None if the offset couldn't be determined.
    """
    instructions = parse_instructions(filepath)
    if not instructions:
        return []

    stack_info = compute_this_ptr_offsets(instructions)
    esp_off = stack_info['esp_offset']
    ebp_off = stack_info['ebp_offset']
    has_frame = stack_info['has_frame']
    has_and_esp = stack_info['has_and_esp']

    # Register state: maps register name -> offset from this_ptr (or None)
    regs = {r: None for r in ALL_REGS}

    # Push stack: list of offset values (int or None)
    push_stack = []

    # Track dynamic ESP adjustment from function entry
    esp_adjust = 0

    results = []

    for i, (mn, ops, addr) in enumerate(instructions):
        ops_stripped = ops.strip()
        ops_upper = ops_stripped.upper()

        # ---- Detect this_ptr loads ----
        # MOV reg, dword ptr [ESP + offset]
        m = re.match(r'(\w+),dword ptr \[ESP \+ (0x[0-9a-fA-F]+)\]', ops_stripped)
        if mn == 'MOV' and m:
            reg = m.group(1).upper()
            off = parse_hex(m.group(2))
            if reg in regs and not has_and_esp:
                if off == 0x4 + esp_adjust:
                    regs[reg] = 0

        # MOV reg, dword ptr [EBP + offset]
        if has_frame:
            m = re.match(r'(\w+),dword ptr \[EBP \+ (0x[0-9a-fA-F]+)\]', ops_stripped)
            if mn == 'MOV' and m:
                reg = m.group(1).upper()
                off = parse_hex(m.group(2))
                if reg in regs and ebp_off is not None and off == ebp_off:
                    regs[reg] = 0

        # ---- MOV reg, reg ----
        m = re.match(r'(\w+),(\w+)$', ops_stripped)
        if mn == 'MOV' and m:
            dst, src = m.group(1).upper(), m.group(2).upper()
            if dst in regs and src in regs:
                regs[dst] = regs[src]

        # ---- ADD reg, imm ----
        m = re.match(r'(\w+),(0x[0-9a-fA-F]+)$', ops_stripped)
        if mn == 'ADD' and m:
            reg = m.group(1).upper()
            val = signed32(parse_hex(m.group(2)))
            if reg in regs and reg != 'ESP' and regs[reg] is not None:
                regs[reg] += val
            if reg == 'ESP':
                n = abs(val) // 4
                if val > 0 and len(push_stack) >= n:
                    push_stack = push_stack[:-n]
                esp_adjust -= val

        # ---- SUB reg, imm ----
        if mn == 'SUB':
            m_sub = re.match(r'(\w+),(0x[0-9a-fA-F]+)$', ops_stripped)
            if m_sub:
                reg = m_sub.group(1).upper()
                val = parse_hex(m_sub.group(2))
                if reg == 'ESP':
                    esp_adjust += val
                elif reg in regs and regs[reg] is not None:
                    regs[reg] -= val

        # ---- LEA reg, [reg2 + offset] ----
        m = re.match(r'(\w+),\[(\w+)\s*\+\s*(0x[0-9a-fA-F]+)\]', ops_stripped)
        if mn == 'LEA' and m:
            dst = m.group(1).upper()
            src = m.group(2).upper()
            val = signed32(parse_hex(m.group(3)))
            if dst in regs and src in regs and regs[src] is not None:
                regs[dst] = regs[src] + val

        # LEA reg, [reg2] (no offset)
        m = re.match(r'(\w+),\[(\w+)\]$', ops_stripped)
        if mn == 'LEA' and m:
            dst = m.group(1).upper()
            src = m.group(2).upper()
            if dst in regs and src in regs:
                regs[dst] = regs[src]

        # ---- PUSH ----
        if mn == 'PUSH':
            tok = ops_stripped.upper()
            if tok in regs:
                push_stack.append(regs[tok])
            elif re.match(r'0x[0-9a-fA-F]+$', ops_stripped):
                push_stack.append(('imm', parse_hex(ops_stripped)))
            else:
                push_stack.append(None)
            esp_adjust += 4

        # ---- POP ----
        if mn == 'POP':
            if push_stack:
                push_stack.pop()
            esp_adjust -= 4

        # ---- CALL ----
        if mn == 'CALL':
            call_target = ops_stripped.split(';')[0].strip()

            if '__STK' in call_target:
                if push_stack:
                    push_stack.pop()
                    esp_adjust -= 4

            elif is_subobj_call(call_target):
                arg_idx = -1
                arg_offset = None
                if len(push_stack) >= abs(arg_idx):
                    val = push_stack[arg_idx]
                    if isinstance(val, int):
                        arg_offset = val

                results.append((call_target, arg_offset))

                if arg_offset is not None:
                    regs['EAX'] = arg_offset
                else:
                    regs['EAX'] = None
                regs['ECX'] = None
                regs['EDX'] = None
            else:
                regs['EAX'] = None
                regs['ECX'] = None
                regs['EDX'] = None

    return results


def short_call_name(call_target):
    """Shorten a call target for display."""
    if '_FUN_' in call_target:
        prefix = call_target.split('_FUN_')[0]
        parts = prefix.split('_')
        for j, p in enumerate(parts):
            if p in ('ctor', 'dtor', 'arrdtor'):
                return '_'.join(parts[max(0, j-1):j+1])
            if p == 'arrinit' and j > 0 and parts[j-1] == '_':
                return '__arrinit'
        return '_'.join(parts[-2:]) if len(parts) >= 2 else prefix
    return call_target


def generate_adj_pointer_report(pseudocode_src_dir, reports_dir):
    """Generate the adj_pointer_types.txt report.

    Args:
        pseudocode_src_dir: Path to pseudocode/src directory
        reports_dir: Path to reports output directory
    """
    log_info("Generating ADJ pointer types report...")

    # Find all ctor/dtor asm files (skip CRT functions)
    asm_files = []
    for pattern in ['**/*_ctor_*.asm', '**/*_dtor_*.asm']:
        for f in glob.glob(os.path.join(pseudocode_src_dir, pattern), recursive=True):
            if os.sep + 'crt' + os.sep not in f:
                asm_files.append(f)
    asm_files.sort()

    # Collect results
    needed_types = defaultdict(set)
    unknown_offsets = []
    details = []

    for path in asm_files:
        class_name, func_type = extract_info(path)
        if not class_name:
            continue

        calls = analyze_asm(path)

        has_nonzero = False
        has_unknown = False
        for call_name, offset in calls:
            if offset is not None and offset != 0:
                needed_types[class_name].add(offset)
                has_nonzero = True
            elif offset is None:
                unknown_offsets.append((path, call_name))
                has_unknown = True

        if has_nonzero or has_unknown:
            details.append((path, class_name, func_type, calls))

    # Check which .cpp files still need ADJ()
    unfinished = []
    finished = []

    for path, class_name, func_type, calls in details:
        cpp_path = path.replace('.asm', '.cpp')
        has_adj = False
        if os.path.isfile(cpp_path):
            with open(cpp_path) as f:
                has_adj = 'ADJ(' in f.read()

        nonzero_calls = [(n, o) for n, o in calls if o is not None and o != 0]
        unknown_calls = [(n, o) for n, o in calls if o is None]

        if has_adj:
            finished.append((path, class_name, func_type, calls))
        elif nonzero_calls or unknown_calls:
            unfinished.append((path, class_name, func_type, calls))

    # Build report
    lines = []
    lines.append("Scanning %d ctor/dtor asm files in %s..." % (len(asm_files), pseudocode_src_dir))

    # ---- Unfinished section ----
    lines.append("")
    lines.append("=" * 70)
    lines.append("UNFINISHED CTORS/DTORS (%d files still need ADJ)" % len(unfinished))
    lines.append("=" * 70)

    by_vfile = defaultdict(list)
    for path, class_name, func_type, calls in unfinished:
        parts = path.split(os.sep)
        vfile = None
        for j, p in enumerate(parts):
            if p.endswith('.cpp') and j < len(parts) - 1:
                vfile = os.path.join(*parts[j-1:j+1])
                break
        if not vfile:
            vfile = "unknown"
        by_vfile[vfile].append((path, class_name, func_type, calls))

    for vfile in sorted(by_vfile):
        entries = by_vfile[vfile]
        lines.append("")
        lines.append("  [%s]" % vfile)
        for path, class_name, func_type, calls in entries:
            basename = os.path.basename(path).replace('.asm', '')
            nonzero = [(n, o) for n, o in calls if o is not None and o != 0]
            unknown = [(n, o) for n, o in calls if o is None]
            lines.append("    %s:" % basename)
            for call_name, offset in nonzero:
                short = short_call_name(call_name)
                lines.append("      %s @ this+0x%x (%d) -> %s_ptr_%d" % (
                    short, offset, offset, class_name, offset))
            for call_name, _ in unknown:
                short = short_call_name(call_name)
                lines.append("      %s @ ??? (UNKNOWN)" % short)

    # ---- Already-finished section ----
    if finished:
        lines.append("")
        lines.append("=" * 70)
        lines.append("ALREADY FINISHED (%d files have ADJ)" % len(finished))
        lines.append("=" * 70)
        for path, class_name, func_type, calls in finished:
            basename = os.path.basename(path).replace('.asm', '')
            lines.append("  %s" % basename)

    # ---- Full type summary ----
    lines.append("=" * 70)
    lines.append("NEEDED ADJ POINTER TYPES")
    lines.append("=" * 70)
    total = 0
    for cls in sorted(needed_types):
        for off in sorted(needed_types[cls]):
            lines.append("  %s_ptr_%d  (0x%x)" % (cls, off, off))
            total += 1

    lines.append("")
    lines.append("Total: %d types across %d classes" % (total, len(needed_types)))

    # ---- Unknowns ----
    if unknown_offsets:
        lines.append("")
        lines.append("=" * 70)
        lines.append("MANUAL REVIEW NEEDED (%d calls with unknown offset)" % len(unknown_offsets))
        lines.append("=" * 70)
        for path, call_name in unknown_offsets:
            basename = os.path.basename(path)
            short = short_call_name(call_name)
            lines.append("  %s: %s" % (basename, short))

    # Write report
    report_path = os.path.join(reports_dir, "adj_pointer_types.txt")
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    log_info("Wrote ADJ pointer types report: %s (%d needed types)" % (report_path, total))

    return total
