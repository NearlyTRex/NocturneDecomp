# Suspect pattern detection for pseudocode export
# Identifies problematic patterns in decompiled code that may need manual review

import re
from collections import defaultdict

# Patterns that indicate potential issues in decompiled code
# Format: (pattern_string, issue_type, description)
_SUSPECT_PATTERN_DEFS = [
    # BADSPACEBASE - Ghidra couldn't resolve the stack frame
    (r'\bBADSPACEBASE\b', 'badspacebase', 'Ghidra failed to resolve stack frame'),
    # in_stack_XXXX - Stack parameters that Ghidra couldn't properly identify
    (r'\bin_stack_[0-9a-fA-Fx]+\b', 'stack_param', 'Unresolved stack parameter'),
    # &stack0xXXXX - Direct stack address references
    (r'&stack0x[0-9a-fA-F]+', 'stack_ref', 'Direct stack address reference'),
    # undefined types - Ghidra couldn't determine the type
    (r'\bundefined[0-9]*\s+\w+', 'undefined_type', 'Unresolved type'),
    # Casts to undefined pointer types like (undefined1 *) or (undefined4 *)
    (r'\(undefined[0-9]*\s*\*\)', 'undefined_ptr_cast', 'Cast to undefined pointer type'),
    # Negative array indexing like pCVar[-10].x - usually wrong base type
    (r'\w+\[-\d+\]\.', 'negative_offset', 'Negative struct offset (wrong base type)'),
    # extraout_* - Extra output parameters Ghidra inferred (wrong calling convention)
    (r'\bextraout_[A-Z0-9_]+\b', 'extra_output', 'Inferred extra output (wrong calling convention)'),
    # in_* register parameters that look suspicious
    (r'\bin_[A-Z]{2,3}\b', 'register_param', 'Inferred register parameter'),
    # unaff_* - Unaffected register variables
    (r'\bunaff_[A-Z]+\b', 'unaffected_reg', 'Unaffected register variable'),
    # Very small floats that are likely misinterpreted integers (e.g., 9.18355e-41)
    (r'\b\d+\.\d+e-[3-9]\d\b', 'suspect_float', 'Likely misinterpreted integer as float'),
    # Type casts to weird pointer arithmetic
    (r'\(\w+\s*\*\s*\)\s*\(\s*\(int\)', 'pointer_cast', 'Complex pointer cast'),
    # _._N_N_ field access patterns (mangled/unknown field names)
    (r'\._\d+_\d+_', 'unknown_field', 'Unknown/mangled field access'),
    # CONCAT44, CONCAT22, etc - Decompiler confused about double/long long composition
    (r'\bCONCAT\d+\b', 'concat_artifact', 'Decompiler double/longlong composition artifact'),
    # SUB84, SUB42, etc - Decompiler confused about extracting parts from double/long long
    (r'\bSUB\d+\b', 'sub_artifact', 'Decompiler double/longlong extraction artifact'),
    # SBORROW - Decompiler artifact for signed borrow detection
    (r'\bSBORROW\b', 'sborrow_artifact', 'Decompiler signed borrow artifact'),
    # code * - Unresolved function pointer (failed vtable lookup)
    (r'\bcode\s*\*', 'unresolved_funcptr', 'Unresolved function pointer (vtable lookup failed)'),
    # WARNING: Removing unreachable block
    (r'WARNING:\s*Removing unreachable block', 'warning_unreachable', 'Unreachable code block removed'),
    # WARNING: Could not recover jumptable
    (r'WARNING:\s*Could not recover jumptable', 'warning_jumptable', 'Jump table recovery failed'),
    # WARNING: Treating indirect jump as call
    (r'WARNING:\s*Treating indirect jump as call', 'warning_indirect_jump', 'Indirect jump treated as call'),
    # WARNING: Subroutine does not return
    (r'WARNING:\s*Subroutine does not return', 'warning_noreturn', 'Subroutine marked as non-returning'),
    # WARNING: Globals starting with '_' overlap
    (r'WARNING:\s*Globals starting with', 'warning_overlapping_globals', 'Overlapping global symbols'),
]

# Pre-compiled patterns for performance (compiled once at module load)
SUSPECT_PATTERNS = [
    (re.compile(pattern), issue_type, description)
    for pattern, issue_type, description in _SUSPECT_PATTERN_DEFS
]


def identify_suspect_lines(decompiled_code):
    """Identify suspect patterns in decompiled code.

    Args:
        decompiled_code: The decompiled C code as a string

    Returns:
        A list of suspect dictionaries with line, type, match, text, and description
    """
    suspects = []
    lines = decompiled_code.split('\n')
    for line_num, line in enumerate(lines, 1):
        line_stripped = line.strip()
        if not line_stripped:
            continue
        is_comment = line_stripped.startswith('//') or line_stripped.startswith('/*')
        is_warning_comment = is_comment and 'WARNING:' in line_stripped
        if is_comment and not is_warning_comment:
            continue
        for compiled_pattern, issue_type, description in SUSPECT_PATTERNS:
            if is_comment and not issue_type.startswith('warning_'):
                continue
            for match in compiled_pattern.finditer(line):
                suspects.append({
                    'line': line_num,
                    'type': issue_type,
                    'match': match.group(),
                    'text': line_stripped,
                    'description': description
                })
    return suspects


def calculate_complexity_metrics(decompiled_code, assembly_code, suspects, xrefs, globals_list, func_calls):
    """Calculate complexity metrics for a function.

    Args:
        decompiled_code: The decompiled C code
        assembly_code: The assembly code
        suspects: List of identified suspect patterns
        xrefs: Cross-references to this function
        globals_list: Global variables used by this function
        func_calls: Functions called by this function

    Returns:
        A dictionary of complexity metrics
    """
    pseudocode_lines = len([l for l in decompiled_code.split('\n') if l.strip()])
    assembly_lines = len([l for l in assembly_code.split('\n') if l.strip()])
    suspect_types = set(s['type'] for s in suspects)
    return {
        'pseudocode_lines': pseudocode_lines,
        'assembly_lines': assembly_lines,
        'total_lines': pseudocode_lines + assembly_lines,
        'suspect_count': len(suspects),
        'suspect_types': sorted(suspect_types),
        'cross_reference_count': len(xrefs) if xrefs else 0,
        'global_count': len(globals_list) if globals_list else 0,
        'function_call_count': len(func_calls) if func_calls else 0,
        'complexity_score': (
            pseudocode_lines +
            (len(suspects) * 10) +  # Each suspect adds significant complexity
            (len(suspect_types) * 5)  # Variety of issues adds complexity
        )
    }


def identify_pcode_suspects(pcode_data, assembly_code=None, existing_overrides=None):
    """Identify fixable suspect patterns from P-code data.

    Detects patterns that can be fixed with P-code overrides:
    - Type A: CALLIND followed by ADD ESP with uncertain tracking
    - Type B: Jump targets with ESP mismatch (after RET)

    Separates suspects into unfixed and resolved lists based on existing overrides.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        assembly_code: Optional assembly code string for additional context
        existing_overrides: Optional dict of address -> pcode_lines from JSON

    Returns:
        Tuple of (suspects, resolved_suspects) where:
        - suspects: List of unfixed suspect dictionaries
        - resolved_suspects: List of suspects that have been fixed by overrides
    """
    suspects = []
    resolved_suspects = []

    if not pcode_data:
        return suspects, resolved_suspects

    # Normalize existing override addresses for comparison
    fixed_addresses = set()
    if existing_overrides:
        for addr in existing_overrides.keys():
            # Normalize to lowercase without 0x prefix
            normalized = addr.lower().replace('0x', '').lstrip('0') or '0'
            fixed_addresses.add(normalized)

    # Detect Type A: CALLIND + uncertain ADD ESP
    callind_suspects = _detect_callind_esp_uncertain(pcode_data)

    # Detect Type B: Jump target ESP mismatch
    # Need to parse assembly for jump targets and RET locations
    mismatch_suspects = []
    if assembly_code:
        mismatch_suspects = _detect_jump_target_esp_mismatch(pcode_data, assembly_code)

    # Combine all detected suspects
    all_suspects = callind_suspects + mismatch_suspects

    # Separate into unfixed and resolved based on existing overrides
    if fixed_addresses:
        for suspect in all_suspects:
            fix_addr = suspect.get('fix_address', '')
            # Normalize for comparison
            normalized_fix = fix_addr.lower().replace('0x', '').lstrip('0') or '0'
            if normalized_fix in fixed_addresses:
                resolved_suspects.append(suspect)
            else:
                suspects.append(suspect)
    else:
        suspects = all_suspects

    return suspects, resolved_suspects


def _detect_callind_esp_uncertain(pcode_data):
    """Detect CALLIND instructions followed by ADD ESP with uncertain tracking.

    Pattern: CALLIND makes ESP opaque, subsequent ADD ESP can't resolve it.

    Returns two types of suspects:
    - callind_esp_uncertain: Function has EBP frame, fixable with ESP = EBP - offset
    - callind_esp_no_frame: Function lacks EBP frame, fixable with prologue-based ESP reset

    Returns:
        List of suspect dictionaries
    """
    suspects = []

    if not pcode_data:
        return suspects

    # Get prologue information (works for all functions)
    prologue_offset, has_ebp_frame = get_prologue_offset(pcode_data)

    # For EBP-frame functions, also get the frame_offset (SUB ESP value after MOV EBP, ESP)
    frame_offset = get_frame_offset_from_pcode(pcode_data) if has_ebp_frame else None

    # Find CALLIND instructions and look for ADD ESP after them
    i = 0
    while i < len(pcode_data):
        entry = pcode_data[i]
        pcode_lines = entry.get('pcode', [])

        # Check if this instruction has CALLIND
        has_callind = any('CALLIND' in line for line in pcode_lines)

        if has_callind:
            # Look for ADD ESP in next few instructions
            for j in range(i + 1, min(i + 5, len(pcode_data))):
                next_entry = pcode_data[j]
                next_asm = next_entry.get('assembly', '')

                # Check for ADD ESP, N
                if next_asm.upper().startswith('ADD ') and 'ESP' in next_asm.upper():
                    # Check ESP certainty
                    certainty = next_entry.get('esp_certainty', 'unknown')

                    # If ESP certainty indicates the decompiler may have trouble, create suspect
                    # cfg_resolved means OUR tracker resolved it, but Ghidra may still struggle
                    if certainty in ('computed', 'unknown', 'callind_unknown', 'lost',
                                     'cfg_resolved', 'conflict', 'unreachable'):
                        # Parse the ADD value
                        add_value = _parse_add_esp_value(next_asm)

                        if has_ebp_frame and frame_offset is not None:
                            # Fixable with ESP = EBP - frame_offset
                            suspects.append({
                                'type': 'callind_esp_uncertain',
                                'match': 'CALLIND...ADD ESP',
                                'text': 'CALLIND at %s, ADD ESP at %s' % (
                                    entry.get('address', '?'), next_entry.get('address', '?')),
                                'description': 'CALLIND makes ESP uncertain; fixable with ESP anchor',
                                'fix_type': 'esp_anchor_after_callind',
                                'fix_address': next_entry.get('address', ''),
                                'callind_address': entry.get('address', ''),
                                'add_esp_value': add_value,
                                'frame_offset': frame_offset
                            })
                        else:
                            # No EBP frame - need to preserve ESP across CALLIND
                            # Parse the call target from assembly
                            callind_asm = entry.get('assembly', '')
                            callind_addr = entry.get('address', '?')
                            try:
                                target_type, target_value = _parse_callind_target(callind_asm)
                            except UnhandledCallIndirectError as e:
                                raise UnhandledCallIndirectError(
                                    "At address %s: %s" % (callind_addr, e))

                            # Get return address (next instruction after CALLIND)
                            return_address = pcode_data[i + 1].get('address', '') if i + 1 < len(pcode_data) else None

                            # Get ESP offset at CALLIND (after the call returns)
                            # After cdecl call returns, ESP is unchanged from before the call
                            # After ADD ESP, ESP = esp_at_callind + add_value
                            esp_at_callind = entry.get('esp_offset')
                            esp_certainty = entry.get('esp_certainty', 'unknown')
                            # ESP is lost if None or if CFG analysis found conflict/unreachable
                            esp_tracking_lost = (
                                esp_at_callind is None or
                                esp_certainty in ('lost', 'conflict', 'unreachable')
                            )
                            if esp_at_callind is not None and add_value is not None:
                                expected_esp_offset = esp_at_callind + add_value
                            else:
                                expected_esp_offset = None

                            # Use different type if ESP tracking was lost (due to branches)
                            if esp_tracking_lost:
                                suspect_type = 'callind_esp_no_frame_lost'
                                description = 'CALLIND with lost ESP tracking (branching code)'
                            else:
                                suspect_type = 'callind_esp_no_frame'
                                description = 'CALLIND makes ESP uncertain; fixable with ESP preserve'

                            # Add suspect - build dict and only include ESP fields when known
                            suspect = {
                                'type': suspect_type,
                                'match': 'CALLIND...ADD ESP',
                                'text': 'CALLIND at %s, ADD ESP at %s (no EBP frame)' % (
                                    callind_addr, next_entry.get('address', '?')),
                                'description': description,
                                'fix_address': next_entry.get('address', ''),
                                'callind_address': callind_addr,
                                'callind_assembly': callind_asm,
                                'return_address': return_address,
                                'call_target_type': target_type,
                                'call_target_value': target_value,
                                'add_esp_value': add_value,
                                'prologue_offset': prologue_offset,
                            }
                            # Only include ESP fields when tracking wasn't lost
                            if not esp_tracking_lost:
                                suspect['esp_at_callind'] = esp_at_callind
                                suspect['expected_esp_offset'] = expected_esp_offset
                            suspects.append(suspect)
                    break  # Only look at first ADD ESP after CALLIND

                # Stop if we hit another call or control flow
                next_pcode = next_entry.get('pcode', [])
                if any(op in ' '.join(next_pcode) for op in ['CALL', 'CALLIND', 'RETURN', 'BRANCH']):
                    break
        i += 1
    return suspects


def _detect_jump_target_esp_mismatch(pcode_data, assembly_code):
    """Detect jump targets with ESP values that don't match their sources.

    Pattern: Code after RET is only reachable by jumps, but Ghidra computes
    ESP from sequential fall-through instead of jump sources.
    Fix: Override first instruction at target to anchor ESP.

    Returns:
        List of suspect dictionaries
    """
    suspects = []

    # Build address to entry map
    addr_to_entry = {}
    addr_to_index = {}
    for idx, entry in enumerate(pcode_data):
        addr = entry.get('address', '')
        if addr:
            addr_to_entry[addr] = entry
            addr_to_index[addr] = idx

    # Find RET instructions
    ret_indices = []
    for idx, entry in enumerate(pcode_data):
        asm = entry.get('assembly', '').upper()
        if asm.startswith('RET') or asm.startswith('RETN'):
            ret_indices.append(idx)

    # Find jump sources and targets from assembly
    jumps = _parse_jumps_from_assembly(assembly_code)

    # Check each instruction after a RET
    for ret_idx in ret_indices:
        if ret_idx + 1 >= len(pcode_data):
            continue

        target_entry = pcode_data[ret_idx + 1]
        target_addr = target_entry.get('address', '')

        if not target_addr:
            continue

        # Check if this address is a jump target
        if target_addr not in jumps:
            continue

        # Get sources that jump to this target
        source_addrs = jumps[target_addr]

        # Get ESP values
        target_esp = target_entry.get('esp_offset')

        # Check each source for mismatch
        for source_addr in source_addrs:
            if source_addr not in addr_to_entry:
                continue
            source_entry = addr_to_entry[source_addr]
            source_esp = source_entry.get('esp_offset')

            # Check for mismatch
            if source_esp is not None and target_esp is not None:
                if source_esp != target_esp:
                    delta = target_esp - source_esp

                    # Add suspect
                    suspects.append({
                        'type': 'jump_target_esp_mismatch',
                        'match': 'ESP:%+d -> ESP:%+d' % (source_esp, target_esp),
                        'text': 'Jump from %s (ESP:%+d) to %s (ESP:%+d) after RET' % (
                            source_addr, source_esp, target_addr, target_esp),
                        'description': 'Jump target has ESP mismatch (%+d bytes) - computed from RET fall-through' % delta,
                        'fix_type': 'esp_anchor_at_jump_target',
                        'fix_address': target_addr,
                        'source_address': source_addr,
                        'source_esp': source_esp,
                        'target_esp': target_esp,
                        'esp_delta': delta,
                        'target_assembly': target_entry.get('assembly', '')
                    })
                    break  # Only report once per target
    return suspects


def _parse_add_esp_value(asm_line):
    """Parse the value from an ADD ESP, N instruction.

    Args:
        asm_line: Assembly line like "ADD ESP, 0x10" or "ADD ESP,0x8"

    Returns:
        Integer value or None if not parseable
    """
    # Match ADD ESP, value
    match = re.search(r'ADD\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', asm_line, re.IGNORECASE)
    if match:
        try:
            return int(match.group(1), 0)
        except ValueError:
            pass
    return None


class UnhandledCallIndirectError(Exception):
    """Raised when a CALLIND target pattern is not recognized."""
    pass


def _parse_callind_target(asm_line):
    """Parse the target from an indirect CALL instruction.

    Args:
        asm_line: Assembly line like "CALL dword ptr [ESP + 0x18]" or "CALL EBP"

    Returns:
        Tuple of (target_type, value) where:
        - ('reg_offset', {'reg': str, 'offset': int}) for CALL [REG + offset]
        - ('reg_deref', str) for CALL [REG] (e.g., 'EAX')
        - ('register', str) for CALL REG (e.g., 'EBP', 'EAX')
        - ('mem_absolute', int) for CALL [SEG:]?[0xADDRESS]
        - ('scaled_index', {'reg': str, 'scale': int, 'offset': int}) for CALL [REG*scale + offset]

    Raises:
        UnhandledCallIndirectError: If the pattern is not recognized
    """
    # Pattern for 32-bit registers
    reg_pattern = r'E[ABCD]X|E[SD]I|E[BS]P'
    # Pattern for segment registers (optional prefix)
    seg_pattern = r'(?:[CDEFGS]S:)?'

    # Match CALL dword ptr [REG*scale + offset] (scaled index addressing)
    # e.g., CALL dword ptr [EAX*0x4 + 0x66df88]
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(' + reg_pattern + r')\s*\*\s*(0x[0-9a-fA-F]+|\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        try:
            reg = match.group(1).upper()
            scale = int(match.group(2), 0)
            offset = int(match.group(3), 0)
            return ('scaled_index', {'reg': reg, 'scale': scale, 'offset': offset})
        except ValueError:
            pass

    # Match CALL dword ptr [REG + offset] or [REG+offset]
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(' + reg_pattern + r')\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        try:
            reg = match.group(1).upper()
            offset = int(match.group(2), 0)
            return ('reg_offset', {'reg': reg, 'offset': offset})
        except ValueError:
            pass

    # Match CALL dword ptr [REG] (no offset)
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(' + reg_pattern + r')\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        return ('reg_deref', match.group(1).upper())

    # Match CALL dword ptr [SEG:]?[0xADDRESS] (absolute memory address, optional segment prefix)
    # e.g., CALL dword ptr [0x00684ee4] or CALL dword ptr CS:[0x6114c8]
    match = re.search(
        r'CALL\s+(?:dword\s+ptr\s+)?' + seg_pattern + r'\[\s*(0x[0-9a-fA-F]+)\s*\]',
        asm_line, re.IGNORECASE)
    if match:
        try:
            return ('mem_absolute', int(match.group(1), 16))
        except ValueError:
            pass

    # Match CALL REG (register-based indirect call, not dereferenced)
    match = re.search(
        r'CALL\s+(E[ABCD]X|E[SD]I|E[BS]P|[ABCD]X|[SD]I|[BS]P)\s*(?:;|$)',
        asm_line, re.IGNORECASE)
    if match:
        return ('register', match.group(1).upper())

    raise UnhandledCallIndirectError(
        "Unhandled CALLIND pattern: %r - add support for this register/pattern" % asm_line)


def _parse_jumps_from_assembly(assembly_code):
    """Parse jump instructions from assembly code.

    Args:
        assembly_code: Full assembly code string

    Returns:
        Dict mapping target_addr -> [source_addrs]
    """
    jumps = defaultdict(list)

    if not assembly_code:
        return jumps

    # Pattern for jump instructions with target address
    # Matches: JMP 0x005d5984, JZ 0x005d58ce, JNC 0x005d5984, etc.
    jump_pattern = re.compile(
        r'^\s*([0-9a-fA-F]+):\s*(J\w+)\s+(?:dword ptr\s+)?\[?(?:0x)?([0-9a-fA-F]+)\]?',
        re.IGNORECASE | re.MULTILINE
    )

    # Also match XREF comments that indicate jump targets
    # Format: ;   XREF to: 005d5984 (CONDITIONAL_JUMP)
    xref_pattern = re.compile(
        r';.*XREF.*:\s*([0-9a-fA-F]+)\s*\((CONDITIONAL_JUMP|UNCONDITIONAL_JUMP)\)',
        re.IGNORECASE
    )

    for match in jump_pattern.finditer(assembly_code):
        source_addr = match.group(1).lower()
        # mnemonic = match.group(2)
        target_addr = match.group(3).lower()

        # Normalize addresses (ensure consistent format)
        if len(source_addr) < 8:
            source_addr = source_addr.zfill(8)
        if len(target_addr) < 8:
            target_addr = target_addr.zfill(8)

        jumps[target_addr].append(source_addr)
    return jumps


def get_frame_offset_from_pcode(pcode_data):
    """Extract the frame offset (SUB ESP, N value) from function prologue.

    Looks for the SUB ESP, N instruction in the prologue after MOV EBP, ESP.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()

    Returns:
        Frame offset as integer, or None if not found/not EBP-based frame
    """
    found_mov_ebp_esp = False
    frame_offset = None

    # Only check first 20 instructions (prologue area)
    for entry in pcode_data[:20]:
        asm = entry.get('assembly', '')

        # Look for MOV EBP, ESP (frame pointer setup)
        if re.search(r'MOV\s+EBP\s*,\s*ESP', asm, re.IGNORECASE):
            found_mov_ebp_esp = True

        # Look for SUB ESP, N after frame pointer setup
        elif found_mov_ebp_esp:
            match = re.search(r'SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', asm, re.IGNORECASE)
            if match:
                try:
                    frame_offset = int(match.group(1), 0)
                    break
                except ValueError:
                    pass
    return frame_offset if found_mov_ebp_esp else None


def get_prologue_offset(pcode_data):
    """Compute total ESP drop from function entry (prologue offset).

    Counts initial PUSH instructions and SUB ESP, N to compute how much
    ESP drops from function entry. Works for any function, not just EBP-frame.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()

    Returns:
        Tuple of (prologue_offset, has_ebp_frame) where:
        - prologue_offset: Total ESP drop in bytes (0 if none found)
        - has_ebp_frame: True if function has MOV EBP, ESP
    """
    if not pcode_data:
        return 0, False

    push_count = 0
    sub_esp_value = 0
    has_ebp_frame = False
    found_sub_esp = False
    in_prologue = True

    # Scan prologue area (first ~20 instructions)
    for entry in pcode_data[:20]:
        asm = entry.get('assembly', '')

        if not in_prologue:
            break

        # Count PUSH instructions at start of function
        if re.match(r'PUSH\s+', asm, re.IGNORECASE):
            push_count += 1
            continue

        # Check for MOV EBP, ESP (frame pointer setup)
        if re.search(r'MOV\s+EBP\s*,\s*ESP', asm, re.IGNORECASE):
            has_ebp_frame = True
            continue

        # Look for SUB ESP, N
        match = re.search(r'SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', asm, re.IGNORECASE)
        if match:
            try:
                sub_esp_value = int(match.group(1), 0)
                found_sub_esp = True
            except ValueError:
                pass
            # After SUB ESP, prologue is typically done
            in_prologue = False
            continue

        # If we hit something other than PUSH/MOV EBP/SUB ESP, prologue may be done
        # But be lenient - some prologues have MOVs for saving registers to stack
        if not re.match(r'(MOV|LEA|NOP)\s+', asm, re.IGNORECASE):
            # If we already have pushes, we might be past prologue
            if push_count > 0 and not found_sub_esp:
                # Keep scanning for SUB ESP
                pass
            else:
                in_prologue = False

    # Total offset = (push_count * 4) + sub_esp_value
    prologue_offset = (push_count * 4) + sub_esp_value

    return prologue_offset, has_ebp_frame


def identify_param_count_mismatch(param_estimates, vtable_info):
    """Detect parameter count mismatch for non-vtable functions.

    Compares declared parameter count against estimated count from call sites.
    Only applies to direct calls (non-vtable) since indirect call analysis
    is unreliable for determining push counts.

    Args:
        param_estimates: Dict with 'declared_params', 'estimated_params',
                        'call_site_count', 'confidence'
        vtable_info: Dict with 'in_vtable' bool

    Returns:
        A suspect dict if mismatch found, None otherwise
    """
    if not param_estimates:
        return None

    # Skip vtable functions - indirect call analysis is unreliable
    if vtable_info and vtable_info.get('in_vtable', False):
        return None

    declared = param_estimates.get('declared_params')
    estimated = param_estimates.get('estimated_params')
    call_site_count = param_estimates.get('call_site_count', 0)

    # Need both values and at least one call site to compare
    if declared is None or estimated is None:
        return None
    if call_site_count == 0:
        return None

    # Check for mismatch
    if declared != estimated:
        delta = estimated - declared

        if delta > 0:
            # Call sites push MORE than declared - missing params in signature
            return {
                'type': 'param_count_too_few',
                'match': 'declared:%d vs estimated:%d' % (declared, estimated),
                'text': 'Function declares %d params but call sites push %d (%d missing)' % (
                    declared, estimated, delta),
                'description': 'Signature has too few params - likely missing this ptr or other params',
                'fix_type': 'add_params',
                'declared_params': declared,
                'estimated_params': estimated,
                'call_site_count': call_site_count,
                'param_delta': delta
            }
        else:
            # Call sites push FEWER than declared - extra params in signature
            return {
                'type': 'param_count_too_many',
                'match': 'declared:%d vs estimated:%d' % (declared, estimated),
                'text': 'Function declares %d params but call sites push %d (%d extra)' % (
                    declared, estimated, abs(delta)),
                'description': 'Signature has too many params - likely wrong calling convention',
                'fix_type': 'remove_params',
                'declared_params': declared,
                'estimated_params': estimated,
                'call_site_count': call_site_count,
                'param_delta': delta
            }
    return None


def identify_variadic_calls(pcode_data, func_calls=None, has_stack_issues=False, existing_overrides=None):
    """Identify calls to variadic functions that may need ESP stabilization.

    Variadic functions (sprintf, fscanf, etc.) can have internal stack frame issues
    that confuse Ghidra's ESP tracking in calling functions.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        func_calls: List of function call dicts with 'addr', 'name', 'is_variadic' keys
        has_stack_issues: If True, the calling function has badspacebase/stack_param issues
        existing_overrides: Optional dict of address -> pcode_lines from JSON

    Returns:
        Tuple of (suspects, resolved_suspects) where:
        - suspects: List of unfixed suspect dictionaries
        - resolved_suspects: List of suspects that have been fixed by overrides
    """
    suspects = []
    resolved_suspects = []

    if not pcode_data:
        return suspects, resolved_suspects

    # Build set of variadic function addresses from func_calls
    variadic_funcs = {}  # addr (normalized) -> name
    if func_calls:
        for call in func_calls:
            if call.get('is_variadic', False):
                # Normalize address for matching
                addr = call.get('addr', '').lower().replace('0x', '').lstrip('0') or '0'
                variadic_funcs[addr] = call.get('name', 'unknown')

    if not variadic_funcs:
        return suspects, resolved_suspects

    # Normalize existing override addresses for comparison
    fixed_addresses = set()
    if existing_overrides:
        for addr in existing_overrides.keys():
            normalized = addr.lower().replace('0x', '').lstrip('0') or '0'
            fixed_addresses.add(normalized)

    # Scan for CALL instructions to variadic functions
    for i, entry in enumerate(pcode_data):
        pcode_lines = entry.get('pcode', [])
        call_addr = entry.get('address', '')

        # Look for CALL (ram,ADDR,4) in pcode
        for line in pcode_lines:
            if 'CALL (ram,' not in line:
                continue

            # Extract target address from CALL (ram,0xADDR,4)
            match = re.search(r'CALL \(ram,0x([0-9a-fA-F]+),4\)', line)
            if not match:
                continue

            target_addr = match.group(1).lower().lstrip('0') or '0'

            # Check if this is a variadic function
            if target_addr not in variadic_funcs:
                continue

            func_name = variadic_funcs[target_addr]

            # Get return address (next instruction)
            return_address = None
            if i + 1 < len(pcode_data):
                return_address = pcode_data[i + 1].get('address', '')

            # Check ESP certainty after the call
            esp_certainty = entry.get('esp_certainty', 'unknown')
            next_certainty = pcode_data[i + 1].get('esp_certainty', 'unknown') if i + 1 < len(pcode_data) else 'unknown'

            # Create suspect
            suspect = {
                'type': 'call_variadic',
                'match': 'CALL %s' % func_name,
                'text': 'Call to variadic function %s at %s' % (func_name, call_addr),
                'description': 'Variadic function call may destabilize ESP tracking',
                'call_address': call_addr,
                'return_address': return_address,
                'target_address': '0x%s' % target_addr,
                'target_function': func_name,
                'esp_certainty_at_call': esp_certainty,
                'esp_certainty_after': next_certainty,
                'caller_has_stack_issues': has_stack_issues,
            }

            # Check if already fixed
            norm_call = call_addr.lower().replace('0x', '').lstrip('0') or '0'
            if norm_call in fixed_addresses:
                resolved_suspects.append(suspect)
            else:
                suspects.append(suspect)

    return suspects, resolved_suspects
