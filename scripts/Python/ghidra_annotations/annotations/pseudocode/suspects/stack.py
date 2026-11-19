# Auto-split from the former monolithic suspects.py — see suspects/__init__.py.
"""P-code / stack-frame suspect detectors: call-indirect and esp anchors,
parameter-count and variadic inference, stack alignment, and complexity metrics."""

import re




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
    pseudocode_lines = len([line for line in decompiled_code.split('\n') if line.strip()])
    assembly_lines = len([line for line in assembly_code.split('\n') if line.strip()])
    suspect_types = set(s['type'] for s in suspects)

    # Determine maximum severity across all suspects
    severity_order = {'severe': 3, 'moderate': 2, 'mild': 1}
    max_sev = max((severity_order.get(s.get('severity', 'mild'), 0) for s in suspects), default=0)
    severity_label = {3: 'severe', 2: 'moderate', 1: 'mild', 0: 'clean'}

    return {
        'pseudocode_lines': pseudocode_lines,
        'assembly_lines': assembly_lines,
        'total_lines': pseudocode_lines + assembly_lines,
        'suspect_count': len(suspects),
        'suspect_types': sorted(suspect_types),
        'max_suspect_severity': severity_label[max_sev],
        'cross_reference_count': len(xrefs) if xrefs else 0,
        'global_count': len(globals_list) if globals_list else 0,
        'function_call_count': len(func_calls) if func_calls else 0,
        'complexity_score': (
            pseudocode_lines +
            (len(suspects) * 10) +  # Each suspect adds significant complexity
            (len(suspect_types) * 5)  # Variety of issues adds complexity
        )
    }




def _norm_addr(addr):
    """An address as lowercase hex without `0x` or leading zeros ('0' for zero)."""
    return addr.lower().replace('0x', '').lstrip('0') or '0'


def _override_addrs(existing_overrides):
    """The normalized addresses that already carry a p-code override."""
    return {_norm_addr(addr) for addr in existing_overrides or ()}


def _imm(text):
    """An immediate as Ghidra prints it: `0x...` hex, else decimal."""
    return int(text, 16) if text[:2].lower() == '0x' else int(text)


_IMM = r'(0x[0-9a-fA-F]+|\d+)'
_ADD_ESP_RE = re.compile(r'ADD\s+ESP\s*,\s*' + _IMM, re.IGNORECASE)
_SUB_ESP_RE = re.compile(r'SUB\s+ESP\s*,\s*' + _IMM, re.IGNORECASE)
_MOV_EBP_ESP_RE = re.compile(r'MOV\s+EBP\s*,\s*ESP', re.IGNORECASE)
_DIRECT_CALL_RE = re.compile(r'CALL \(ram,0x([0-9a-fA-F]+),4\)')

# ESP certainties after a CALLIND / direct CALL that the decompiler may not
# resolve on its own. cfg_resolved means our tracker resolved it, but Ghidra
# may still struggle.
_CALLIND_UNCERTAIN = ('computed', 'unknown', 'callind_unknown', 'lost',
                      'cfg_resolved', 'conflict', 'unreachable')
_CALL_UNCERTAIN = ('computed', 'unknown', 'lost', 'cfg_resolved', 'conflict')


def _is_add_esp(asm):
    """True for an `ADD ESP, ...` instruction."""
    return asm.upper().startswith('ADD ') and 'ESP' in asm.upper()


def _ends_scan(entry):
    """True when an instruction's p-code calls, returns or branches."""
    text = ' '.join(entry.get('pcode', []))
    return any(op in text for op in ('CALL', 'RETURN', 'BRANCH'))


def _add_esp_after(pcode_data, i):
    """Index of the first ADD ESP within 4 instructions after i, or None.

    The look stops at an instruction that calls, returns or branches.
    """
    for j in range(i + 1, min(i + 5, len(pcode_data))):
        if _is_add_esp(pcode_data[j].get('assembly', '')):
            return j
        if _ends_scan(pcode_data[j]):
            return None
    return None


def _next_address(pcode_data, i):
    """The address of the instruction after i (the return address of a CALL), or None."""
    return pcode_data[i + 1].get('address', '') if i + 1 < len(pcode_data) else None


def _frame(pcode_data, local_size=None):
    """(prologue_offset, has_ebp_frame, frame_offset) for a function.

    frame_offset is the SUB ESP after MOV EBP,ESP, or local_size when that is
    missing or zero; None without an EBP frame.
    """
    prologue_offset, has_ebp_frame = get_prologue_offset(pcode_data)
    frame_offset = None
    if has_ebp_frame:
        frame_offset = get_frame_offset_from_pcode(pcode_data)
        if not frame_offset and local_size and local_size > 0:
            frame_offset = local_size
    return prologue_offset, has_ebp_frame, frame_offset




def identify_pcode_suspects(pcode_data, assembly_code=None, existing_overrides=None):
    """Identify fixable suspect patterns from P-code data.

    Detects a CALLIND followed by an ADD ESP with uncertain tracking, which
    can be fixed with a p-code override, and separates the suspects into
    unfixed and resolved lists based on existing overrides.

    There used to be a second pattern here: a jump target after a RET whose
    ESP disagrees with its jump sources. It never ran (its jump parser did not
    read the exporter's `// ADDR: INSTR` lines), and the data cannot show what
    it was after: apply_cfg_esp_tracking already gives a jump target its
    sources' ESP, so the mismatches left are the tracker's own (a stdcall
    CALLIND's cleanup counted per block but not per instruction).
    assembly_code is still accepted for the exporter's call.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        assembly_code: Unused (see above)
        existing_overrides: Optional dict of address -> pcode_lines from JSON

    Returns:
        Tuple of (suspects, resolved_suspects) where:
        - suspects: List of unfixed suspect dictionaries
        - resolved_suspects: List of suspects that have been fixed by overrides
    """
    del assembly_code
    suspects = []
    resolved_suspects = []
    fixed_addresses = _override_addrs(existing_overrides)
    for suspect in _detect_callind_anchor(pcode_data):
        # For no-frame CALLIND, the override is at callind_address, not fix_address
        if suspect['type'] in ('callind_preserve', 'callind_preserve_lost'):
            check_addr = suspect['callind_address']
        else:
            check_addr = suspect['fix_address']
        if _norm_addr(check_addr) in fixed_addresses:
            resolved_suspects.append(suspect)
        else:
            suspects.append(suspect)
    return suspects, resolved_suspects




def _detect_callind_anchor(pcode_data):
    """Detect CALLIND instructions followed by ADD ESP with uncertain tracking.

    Pattern: CALLIND makes ESP opaque, subsequent ADD ESP can't resolve it.

    Returns two types of suspects:
    - callind_anchor: Function has EBP frame, fixable with ESP = EBP - offset
    - callind_preserve: Function lacks EBP frame, fixable with prologue-based ESP reset

    Returns:
        List of suspect dictionaries
    """
    suspects = []
    if not pcode_data:
        return suspects
    prologue_offset, has_ebp_frame, frame_offset = _frame(pcode_data)

    for i, entry in enumerate(pcode_data):
        if not any('CALLIND' in line for line in entry.get('pcode', [])):
            continue
        j = _add_esp_after(pcode_data, i)
        if j is None:
            continue
        next_entry = pcode_data[j]
        next_asm = next_entry['assembly']
        if next_entry.get('esp_certainty', 'unknown') not in _CALLIND_UNCERTAIN:
            continue
        add_value = _parse_add_esp_value(next_asm)
        callind_addr = entry.get('address', '?')

        if has_ebp_frame and frame_offset is not None:
            # Fixable with ESP = EBP - frame_offset
            suspects.append({
                'type': 'callind_anchor',
                'match': 'CALLIND...ADD ESP',
                'text': 'CALLIND at %s, ADD ESP at %s' % (callind_addr, next_entry.get('address', '?')),
                'description': 'CALLIND makes ESP uncertain; fixable with ESP anchor',
                'fix_type': 'esp_anchor_after_callind',
                'fix_address': next_entry.get('address', ''),
                'callind_address': entry.get('address', ''),
                'add_esp_value': add_value,
                'frame_offset': frame_offset
            })
            continue

        # No EBP frame - need to preserve ESP across CALLIND
        callind_asm = entry.get('assembly', '')
        try:
            target_type, target_value = _parse_callind_target(callind_asm)
        except UnhandledCallIndirectError as e:
            raise UnhandledCallIndirectError("At address %s: %s" % (callind_addr, e))

        # After a cdecl call returns ESP is as it was before the call; after
        # the ADD ESP it is esp_at_callind + add_value.
        esp_at_callind = entry.get('esp_offset')
        # ESP is lost if None or if CFG analysis found conflict/unreachable
        esp_tracking_lost = (
            esp_at_callind is None or
            entry.get('esp_certainty', 'unknown') in ('lost', 'conflict', 'unreachable')
        )
        suspect = {
            'type': 'callind_preserve_lost' if esp_tracking_lost else 'callind_preserve',
            'match': 'CALLIND...ADD ESP',
            'text': 'CALLIND at %s, ADD ESP at %s (no EBP frame)' % (
                callind_addr, next_entry.get('address', '?')),
            'description': ('CALLIND with lost ESP tracking (branching code)' if esp_tracking_lost
                            else 'CALLIND makes ESP uncertain; fixable with ESP preserve'),
            'fix_address': next_entry.get('address', ''),
            'callind_address': callind_addr,
            'callind_assembly': callind_asm,
            'return_address': _next_address(pcode_data, i),
            'call_target_type': target_type,
            'call_target_value': target_value,
            'add_esp_value': add_value,
            'prologue_offset': prologue_offset,
        }
        # Only include ESP fields when tracking wasn't lost
        if not esp_tracking_lost:
            suspect['esp_at_callind'] = esp_at_callind
            suspect['expected_esp_offset'] = (esp_at_callind + add_value
                                              if add_value is not None else None)
        suspects.append(suspect)
    return suspects




def _parse_add_esp_value(asm_line):
    """Parse the value from an ADD ESP, N instruction.

    Args:
        asm_line: Assembly line like "ADD ESP, 0x10" or "ADD ESP,0x8"

    Returns:
        Integer value or None if not parseable (ADD ESP, EAX)
    """
    match = _ADD_ESP_RE.search(asm_line)
    return _imm(match.group(1)) if match else None




class UnhandledCallIndirectError(Exception):
    """Raised when a CALLIND target pattern is not recognized."""
    pass


# 32-bit registers, and an optional segment prefix
_REG = r'(E[ABCD]X|E[SD]I|E[BS]P)'
_MEM = r'CALL\s+(?:dword\s+ptr\s+)?(?:[CDEFGS]S:)?\['
_CALL_SCALED_RE = re.compile(_MEM + r'\s*' + _REG + r'\s*\*\s*' + _IMM + r'\s*\+\s*' + _IMM + r'\s*\]',
                             re.IGNORECASE)
_CALL_REG_OFFSET_RE = re.compile(_MEM + r'\s*' + _REG + r'\s*\+\s*' + _IMM + r'\s*\]', re.IGNORECASE)
_CALL_REG_DEREF_RE = re.compile(_MEM + r'\s*' + _REG + r'\s*\]', re.IGNORECASE)
_CALL_ABSOLUTE_RE = re.compile(_MEM + r'\s*(0x[0-9a-fA-F]+)\s*\]', re.IGNORECASE)
_CALL_REGISTER_RE = re.compile(r'CALL\s+(E[ABCD]X|E[SD]I|E[BS]P|[ABCD]X|[SD]I|[BS]P)\s*(?:;|$)',
                               re.IGNORECASE)


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
    match = _CALL_SCALED_RE.search(asm_line)
    if match:
        return ('scaled_index', {'reg': match.group(1).upper(), 'scale': _imm(match.group(2)),
                                 'offset': _imm(match.group(3))})
    match = _CALL_REG_OFFSET_RE.search(asm_line)
    if match:
        return ('reg_offset', {'reg': match.group(1).upper(), 'offset': _imm(match.group(2))})
    match = _CALL_REG_DEREF_RE.search(asm_line)
    if match:
        return ('reg_deref', match.group(1).upper())
    match = _CALL_ABSOLUTE_RE.search(asm_line)
    if match:
        return ('mem_absolute', int(match.group(1), 16))
    match = _CALL_REGISTER_RE.search(asm_line)
    if match:
        return ('register', match.group(1).upper())
    raise UnhandledCallIndirectError(
        "Unhandled CALLIND pattern: %r - add support for this register/pattern" % asm_line)




def get_frame_offset_from_pcode(pcode_data):
    """Extract the frame offset (SUB ESP, N value) from function prologue.

    Looks for the SUB ESP, N instruction in the prologue after MOV EBP, ESP.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()

    Returns:
        Frame offset as integer, or None if not found/not EBP-based frame
    """
    found_mov_ebp_esp = False

    # Only check first 20 instructions (prologue area)
    for entry in pcode_data[:20]:
        asm = entry.get('assembly', '')
        if _MOV_EBP_ESP_RE.search(asm):
            found_mov_ebp_esp = True
        elif found_mov_ebp_esp:
            match = _SUB_ESP_RE.search(asm)
            if match:
                return _imm(match.group(1))
    return None




def get_prologue_offset(pcode_data):
    """Compute total ESP drop from function entry (prologue offset).

    Counts the leading PUSH instructions and the SUB ESP, N that follows them.
    A MOV EBP,ESP between them marks an EBP frame, and MOV/LEA/NOP register
    moves may come before the SUB ESP. A PUSH after such a move is a call
    argument, and any other instruction is the body, so either ends the
    prologue. Works for any function, not just EBP-frame.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()

    Returns:
        Tuple of (prologue_offset, has_ebp_frame) where:
        - prologue_offset: Total ESP drop in bytes (0 if none found)
        - has_ebp_frame: True if function has MOV EBP, ESP
    """
    push_count = 0
    sub_esp_value = 0
    has_ebp_frame = False
    moved = False

    # Scan prologue area (first ~20 instructions)
    for entry in (pcode_data or [])[:20]:
        asm = entry.get('assembly', '')
        if re.match(r'PUSH\s+', asm, re.IGNORECASE):
            if moved:
                break  # an argument for a call, not a saved register
            push_count += 1
        elif _MOV_EBP_ESP_RE.search(asm):
            has_ebp_frame = True
        elif _SUB_ESP_RE.search(asm):
            # After SUB ESP, prologue is done
            sub_esp_value = _imm(_SUB_ESP_RE.search(asm).group(1))
            break
        elif re.match(r'(MOV|LEA|NOP)\s+', asm, re.IGNORECASE):
            moved = True
        else:
            break

    return (push_count * 4) + sub_esp_value, has_ebp_frame




def identify_param_count_mismatch(param_estimates, vtable_info, func_signature=None):
    """Detect parameter count mismatch for non-vtable functions.

    Compares declared parameter count against estimated count from call sites.
    Only applies to direct calls (non-vtable) since indirect call analysis
    is unreliable for determining push counts.

    Args:
        param_estimates: Dict with 'declared_params', 'estimated_params',
                        'call_site_count', 'confidence',
                        and 'declared_stack_bytes' (for multi-slot param
                        detection — doubles and structs take multiple slots).
        vtable_info: Dict with 'in_vtable' bool
        func_signature: Optional function signature string. Used to skip
                        variadic functions (trailing `...`) whose call sites
                        legitimately push more args than declared.

    Returns:
        A suspect dict if mismatch found, None otherwise
    """
    if not param_estimates:
        return None

    # Skip vtable functions - indirect call analysis is unreliable
    if vtable_info and vtable_info.get('in_vtable', False):
        return None

    # Skip variadic — callers push format-string + arbitrary extras; any
    # "too few" count is expected and not actionable.
    if func_signature and '...' in func_signature:
        return None

    declared = param_estimates.get('declared_params')
    estimated = param_estimates.get('estimated_params')
    call_site_count = param_estimates.get('call_site_count', 0)

    # Need both values and at least one call site to compare
    if declared is None or estimated is None or call_site_count == 0 or declared == estimated:
        return None

    # `estimate_call_site_params` computes a `matches_declared` flag that
    # already accounts for multi-slot params (doubles, structs) and
    # register-passed params. If it says the call sites agree with the
    # signature, trust it and skip the mismatch.
    if param_estimates.get('matches_declared', False):
        return None
    # Backstop for JSONs written before `matches_declared` was stored: skip
    # when estimated stack bytes match declared stack bytes (double/struct
    # multi-slot case).
    declared_stack_bytes = param_estimates.get('declared_stack_bytes')
    if declared_stack_bytes is not None and estimated * 4 == declared_stack_bytes:
        return None
    delta = estimated - declared
    call_sites = param_estimates.get('call_sites', [])

    if delta < 0:
        # For the "too many" case, one truncated `push_count` run at a single
        # call site is enough to drag the most-common estimate below the
        # declared count even when other call sites confirm the signature.
        # Two truncation modes are common:
        #   1. The site's analyzer hit a basic-block boundary, prior CALL, or
        #      prologue marker before walking back over all the PUSHes — the
        #      JSON shows method='push_count' with low `instructions_analyzed`.
        #   2. A different site uses method='add_esp' and reports the full
        #      count, but the aggregator's `most_common` picked the smaller
        #      value because the two methods tied 1:1 in frequency.
        # Any single site whose own estimate meets the declared count
        # corroborates the signature.
        if any(cs.get('estimated_params', 0) >= declared for cs in call_sites):
            return None
        # If *every* call site used the push_count fallback and stopped short
        # (`instructions_analyzed` below `2 * declared`), the analyzer didn't
        # see enough of the caller body to count the PUSHes. That's not
        # evidence the signature is wrong. Suppress.
        short_limit = max(2 * declared, 8)
    else:
        # For the "too few" case, push_count overcounts are common when Watcom
        # pre-pushes args for a SUBSEQUENT call before the current CALL, or
        # when caller saved-register PUSHes at a deferred prologue landing get
        # counted as args. An `add_esp` site (the ground-truth caller-cleanup
        # byte count) that matches or undershoots declared corroborates the
        # signature.
        if any(cs.get('method') == 'add_esp' and cs.get('estimated_params', 0) <= declared
               for cs in call_sites):
            return None
        # Every site push_count with short context: the count is unreliable.
        # The threshold follows `estimated` so a high count gets more scrutiny.
        short_limit = max(2 * estimated, 8)
    if call_sites and all(
        cs.get('method') == 'push_count' and cs.get('instructions_analyzed', 0) < short_limit
        for cs in call_sites
    ):
        return None

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




def _variadic_addrs(func_calls):
    """Normalized address -> name of the variadic functions among func_calls."""
    return {_norm_addr(call.get('addr', '')): call.get('name', 'unknown')
            for call in func_calls or () if call.get('is_variadic', False)}


def identify_variadic_calls(pcode_data, func_calls=None, has_stack_issues=False, existing_overrides=None, stack_frame=None):
    """Identify calls to variadic functions that may need ESP stabilization.

    Variadic functions (sprintf, fscanf, etc.) can have internal stack frame issues
    that confuse Ghidra's ESP tracking in calling functions.

    Creates three types of suspects based on the caller's frame:
    - variadic_anchor: Caller has EBP frame, fix by anchoring ESP at ADD ESP
    - variadic_preserve_ebp: EBP frame but no ADD ESP, fix by preserving ESP across CALL
    - variadic_preserve: Caller lacks EBP frame, fix by preserving ESP across CALL

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        func_calls: List of function call dicts with 'addr', 'name', 'is_variadic' keys
        has_stack_issues: If True, the calling function has badspacebase/stack_param issues
        existing_overrides: Optional dict of address -> pcode_lines from JSON
        stack_frame: Optional stack frame dict with 'local_size' for fallback

    Returns:
        Tuple of (suspects, resolved_suspects) where:
        - suspects: List of unfixed suspect dictionaries
        - resolved_suspects: List of suspects that have been fixed by overrides
    """
    suspects = []
    resolved_suspects = []

    variadic_funcs = _variadic_addrs(func_calls)
    if not pcode_data or not variadic_funcs:
        return suspects, resolved_suspects

    prologue_offset, has_ebp_frame, frame_offset = _frame(
        pcode_data, (stack_frame or {}).get('local_size'))
    fixed_addresses = _override_addrs(existing_overrides)

    for i, entry in enumerate(pcode_data):
        call_addr = entry.get('address', '')
        for line in entry.get('pcode', []):
            match = _DIRECT_CALL_RE.search(line)
            if not match:
                continue
            target_addr = _norm_addr(match.group(1))
            if target_addr not in variadic_funcs:
                continue
            func_name = variadic_funcs[target_addr]
            next_certainty = (pcode_data[i + 1].get('esp_certainty', 'unknown')
                              if i + 1 < len(pcode_data) else 'unknown')
            suspect = {
                'match': 'CALL %s' % func_name,
                'call_address': call_addr,
                'return_address': _next_address(pcode_data, i),
                'target_address': '0x%s' % target_addr,
                'target_function': func_name,
                'esp_certainty_at_call': entry.get('esp_certainty', 'unknown'),
                'esp_certainty_after': next_certainty,
                'caller_has_stack_issues': has_stack_issues,
            }

            # For EBP-frame functions, anchor ESP at the ADD ESP after the call
            j = _add_esp_after(pcode_data, i) if has_ebp_frame else None
            add_esp_address = pcode_data[j].get('address', '') if j is not None else ''
            if has_ebp_frame and frame_offset is not None and add_esp_address:
                suspect.update({
                    'type': 'variadic_anchor',
                    'text': 'Call to variadic function %s at %s (EBP frame + ADD ESP)' % (func_name, call_addr),
                    'description': 'Variadic call in EBP-frame function; fix by anchoring ESP at ADD ESP',
                    'fix_address': add_esp_address,
                    'frame_offset': frame_offset,
                    'add_esp_value': _parse_add_esp_value(pcode_data[j]['assembly']),
                })
                check_addr = add_esp_address
            elif has_ebp_frame and frame_offset is not None:
                suspect.update({
                    'type': 'variadic_preserve_ebp',
                    'text': 'Call to variadic function %s at %s (EBP frame, no ADD ESP)' % (func_name, call_addr),
                    'description': 'Variadic call in EBP-frame function without ADD ESP; fix by preserving ESP across CALL',
                    'frame_offset': frame_offset,
                })
                check_addr = call_addr
            else:
                suspect.update({
                    'type': 'variadic_preserve',
                    'text': 'Call to variadic function %s at %s (no EBP frame)' % (func_name, call_addr),
                    'description': 'Variadic call in non-EBP-frame function; fix by preserving ESP across CALL',
                    'prologue_offset': prologue_offset,
                })
                check_addr = call_addr
            if _norm_addr(check_addr) in fixed_addresses:
                resolved_suspects.append(suspect)
            else:
                suspects.append(suspect)

    return suspects, resolved_suspects




def identify_stack_align_anchor(json_data, pcode_data, existing_overrides=None):
    """Identify stack alignment instructions that can be fixed with ESP anchor.

    Pattern: AND ESP, 0xFFFFFFF8 (or similar) in EBP-frame function.
    All stack_alignment functions have EBP frame set BEFORE the AND ESP.

    Fix: Anchor ESP = EBP - (SUB ESP offset) at the AND ESP instruction.

    Args:
        json_data: The function JSON data containing stack_patterns
        pcode_data: List of instruction dicts from extract_function_pcode()
        existing_overrides: Optional dict of address -> pcode_lines from JSON

    Returns:
        Tuple of (suspects, resolved_suspects)
    """
    suspects = []
    resolved_suspects = []

    if not json_data or not pcode_data:
        return suspects, resolved_suspects

    # Check if function has stack_alignment pattern
    patterns = (json_data.get('stack_patterns') or {}).get('patterns', [])
    align_pattern = next((p for p in patterns if p.get('pattern_id') == 'stack_alignment'), None)

    # Must be EBP frame (all stack_alignment functions are in practice)
    if not align_pattern or not json_data.get('function', {}).get('is_ebp_frame', False):
        return suspects, resolved_suspects

    # The function's SUB ESP
    sub_esp_offset = next((_imm(m.group(1)) for m in (_SUB_ESP_RE.search(e.get('assembly', ''))
                                                      for e in pcode_data) if m), None)
    if sub_esp_offset is None:
        return suspects, resolved_suspects

    fix_address = align_pattern.get('address', '')
    suspect = {
        'type': 'stack_align_anchor',
        'match': 'AND ESP',
        'text': 'Stack alignment at %s (SUB ESP, 0x%x before)' % (fix_address, sub_esp_offset),
        'description': 'Stack alignment can be anchored: ESP = EBP - 0x%x' % sub_esp_offset,
        'fix_address': fix_address,
        'sub_esp_offset': sub_esp_offset,
        'frame_offset': sub_esp_offset,
        'align_instruction': align_pattern.get('instruction', 'AND ESP,0xfffffff8'),
    }
    if _norm_addr(fix_address) in _override_addrs(existing_overrides):
        resolved_suspects.append(suspect)
    else:
        suspects.append(suspect)
    return suspects, resolved_suspects




def identify_direct_call_esp_uncertainty(pcode_data, func_calls=None, existing_overrides=None, json_data=None):
    """Identify direct CALL instructions with uncertain ESP after.

    Pattern: Direct CALL (not CALLIND, not variadic) followed by ADD ESP
    where ESP tracking is uncertain.

    Creates two types of suspects:
    - call_esp_anchor: Caller has EBP frame, fix by anchoring ESP at ADD ESP
    - call_esp_preserve: Caller lacks EBP frame, fix by preserving ESP across CALL

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        func_calls: Optional list of function call dicts to exclude variadic functions
        existing_overrides: Optional dict of address -> pcode_lines from JSON
        json_data: Optional JSON data to get stack_frame.local_size as fallback

    Returns:
        Tuple of (suspects, resolved_suspects)
    """
    suspects = []
    resolved_suspects = []

    if not pcode_data:
        return suspects, resolved_suspects

    variadic_addrs = _variadic_addrs(func_calls)
    local_size = ((json_data or {}).get('stack_frame') or {}).get('local_size')
    prologue_offset, has_ebp_frame, frame_offset = _frame(pcode_data, local_size)
    fixed_addresses = _override_addrs(existing_overrides)

    for i, entry in enumerate(pcode_data):
        pcode_lines = entry.get('pcode', [])
        call_addr = entry.get('address', '')

        # A direct CALL (ram,ADDR,4), not a CALLIND, and not to a variadic
        # function (identify_variadic_calls handles those)
        target_addr = next((_norm_addr(m.group(1)) for m in map(_DIRECT_CALL_RE.search, pcode_lines) if m),
                           None)
        if (target_addr is None or any('CALLIND' in line for line in pcode_lines)
                or target_addr in variadic_addrs):
            continue

        j = _add_esp_after(pcode_data, i)
        if j is None:
            continue
        next_entry = pcode_data[j]
        next_certainty = next_entry.get('esp_certainty', 'unknown')
        if next_certainty not in _CALL_UNCERTAIN:
            continue
        add_esp_address = next_entry.get('address', '')
        suspect = {
            'match': 'CALL...ADD ESP',
            'call_address': call_addr,
            'fix_address': add_esp_address,
            'return_address': _next_address(pcode_data, i),
            'target_address': '0x%s' % target_addr,
            'add_esp_value': _parse_add_esp_value(next_entry['assembly']),
            'esp_certainty': next_certainty,
        }
        if has_ebp_frame and frame_offset is not None:
            suspect.update({
                'type': 'call_esp_anchor',
                'text': 'Direct CALL at %s, ADD ESP at %s with uncertain ESP' % (call_addr, add_esp_address),
                'description': 'Direct CALL makes ESP uncertain; fixable with ESP anchor',
                'frame_offset': frame_offset,
            })
            check_addr = add_esp_address
        else:
            suspect.update({
                'type': 'call_esp_preserve',
                'text': 'Direct CALL at %s, ADD ESP at %s (no EBP frame)' % (call_addr, add_esp_address),
                'description': 'Direct CALL in non-EBP-frame function; fixable with ESP preserve',
                'prologue_offset': prologue_offset,
            })
            check_addr = call_addr
        if _norm_addr(check_addr) in fixed_addresses:
            resolved_suspects.append(suspect)
        else:
            suspects.append(suspect)

    return suspects, resolved_suspects




def identify_lea_esp_stack_addr(pcode_data, json_data=None):
    """Identify LEA instructions that take the address of ESP-relative stack locations.

    Pattern: LEA REG, [ESP + offset] in non-EBP-frame function.
    This creates a TypeSpacebase pointer that can't be resolved if ESP is uncertain.

    Args:
        pcode_data: List of instruction dicts from extract_function_pcode()
        json_data: Optional JSON data to check EBP frame status

    Returns:
        List of suspect dictionaries (detection only, no fix yet)
    """
    suspects = []

    # In EBP-frame functions, LEA ESP is less problematic since EBP provides anchor
    if not pcode_data or (json_data or {}).get('function', {}).get('is_ebp_frame', False):
        return suspects

    for entry in pcode_data:
        asm = entry.get('assembly', '')
        addr = entry.get('address', '')

        # Match LEA REG, [ESP + offset] or [ESP]
        if re.search(r'LEA\s+\w+\s*,\s*\[ESP', asm, re.IGNORECASE):
            offset_match = re.search(r'\[ESP\s*\+\s*' + _IMM + r'\]', asm, re.IGNORECASE)
            suspects.append({
                'type': 'lea_esp_stack_addr',
                'match': 'LEA...ESP',
                'text': 'LEA takes address of ESP-relative stack location at %s' % addr,
                'description': 'Takes address of stack variable via ESP in non-EBP-frame function',
                'address': addr,
                'instruction': asm,
                'esp_offset': _imm(offset_match.group(1)) if offset_match else None,
            })

    return suspects




def identify_special_functions(json_data, func_addr):
    """Identify special functions that have expected BADSPACEBASE issues.

    Categories:
    - Entry point: Program entry has no caller, unusual stack state
    - CRT functions: C runtime with unusual stack manipulation
    - Math intrinsics: Math library functions with unusual patterns

    Args:
        json_data: The function JSON data
        func_addr: Function entry address

    Returns:
        List of suspect dictionaries (detection only)
    """
    suspects = []

    if not json_data:
        return suspects

    func_name = json_data.get('function', {}).get('name', '')

    # Check for entry point
    if func_name == 'entry' or func_name.endswith('_entry'):
        suspects.append({
            'type': 'special_entry_point',
            'match': 'entry',
            'text': 'Program entry point at %s' % func_addr,
            'description': 'Entry point has no caller; stack state is OS-provided',
            'address': func_addr,
            'function_name': func_name,
        })
        return suspects  # Entry point is unique

    # Check for math intrinsics FIRST (before generic CRT check)
    # Math functions may have crt_math prefix but are distinct
    math_patterns = [
        'sin', 'cos', 'tan', 'asin', 'acos', 'atan', 'atan2',
        'sqrt', 'pow', 'exp', 'log', 'log10', 'log2',
        'floor', 'ceil', 'round', 'fabs', 'fmod',
        'sinh', 'cosh', 'tanh', 'ldexp', 'frexp', 'modf'
    ]
    func_lower = func_name.lower()
    for pattern in math_patterns:
        # Match _pattern_ or ending with _pattern or crt_math containing the pattern
        if (('_' + pattern + '_') in func_lower or
            func_lower.endswith('_' + pattern) or
            ('crt_math' in func_lower and pattern in func_lower)):
            suspects.append({
                'type': 'special_math_intrinsic',
                'match': pattern,
                'text': 'Math intrinsic (%s) at %s' % (pattern, func_addr),
                'description': 'Math library function with FPU stack or unusual patterns',
                'address': func_addr,
                'function_name': func_name,
                'math_function': pattern,
            })
            return suspects

    # Check for CRT functions by path or name (after math check)
    if 'crt_' in func_lower or '/crt/' in func_lower:
        # Categorize CRT function type
        if 'stack' in func_lower:
            crt_type = 'stack manipulation'
        elif 'except' in func_lower or 'seh' in func_lower:
            crt_type = 'exception handling'
        elif 'security' in func_lower or 'cookie' in func_lower:
            crt_type = 'security cookie'
        else:
            crt_type = 'runtime support'

        suspects.append({
            'type': 'special_crt_function',
            'match': 'crt_',
            'text': 'CRT function (%s) at %s' % (crt_type, func_addr),
            'description': 'C runtime function with non-standard stack patterns',
            'address': func_addr,
            'function_name': func_name,
            'crt_type': crt_type,
        })
        return suspects

    # Check for CPU detection/intrinsic functions (CPUID, MMX detection, etc.)
    cpu_patterns = [
        'cpuid', 'detectintel', 'detectamd', 'detectcpu', 'getcpuinfo',
        'checkmmx', 'checksse', 'detectmmx', 'detectsse', 'cpufeature',
        'processorinfo', 'cpucaps', 'cpuident'
    ]
    for pattern in cpu_patterns:
        if pattern in func_lower:
            suspects.append({
                'type': 'special_cpu_detection',
                'match': pattern,
                'text': 'CPU detection function at %s' % func_addr,
                'description': 'CPU detection code with EFLAGS/CPUID manipulation - expected unusual patterns',
                'address': func_addr,
                'function_name': func_name,
                'cpu_function': pattern,
            })
            return suspects

    return suspects
