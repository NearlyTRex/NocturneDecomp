# Stack pattern detection for pseudocode export
# Identifies the instructions that cause Ghidra's decompiler to hallucinate
# parameters or produce other artifacts, from Ghidra's own instruction parsing.

GENERAL_REGISTERS = ('EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI')

IMPACT = {
    'stack_alignment': 'Causes ESP-relative offsets to become runtime-dependent. '
                       'All stack variables accessed via ESP after this point '
                       'will appear as separate "in_stack_XXXX" parameters.',
    'dynamic_alloca': 'Variable-size stack allocation makes ESP unpredictable. '
                      'Stack variables may appear as parameters or have incorrect offsets.',
    'alt_frame_pointer': 'Using non-standard register as frame pointer. Ghidra may not '
                         'track stack accesses through this register correctly.',
    'dynamic_esp_restore': 'ESP modified by register value. Ghidra cannot determine stack state.',
    'stack_pivot': 'Stack pointer exchange. Complete loss of stack tracking.',
    'pushf': 'Flags pushed to stack. May indicate interrupt handler or '
             'special calling convention.',
    'pop_esp': 'Direct modification of ESP from stack. Ghidra cannot track this.',
}

HIGH_SEVERITY = {'stack_pivot', 'pop_esp', 'dynamic_alloca'}
MEDIUM_SEVERITY = {'stack_alignment', 'alt_frame_pointer', 'dynamic_esp_restore'}


def _is_alignment_mask(operand):
    """AND ESP with a negative mask (0xfffffff0, -0x8, ...) aligns the stack."""
    if not operand.startswith(('0x', '-0x')):
        return False
    try:
        val = int(operand, 16)
    except ValueError:
        return False
    return val < 0 or val > 0x7FFFFFFF


def _classify(mnemonic, ops):
    """(pattern_id, description) for one instruction, or None."""
    op0 = ops[0].upper() if ops else ''
    op1 = ops[1].upper() if len(ops) > 1 else ''
    if mnemonic == 'AND' and op0 == 'ESP' and _is_alignment_mask(ops[1] if len(ops) > 1 else ''):
        return 'stack_alignment', 'Stack alignment (AND ESP, %s)' % ops[1]
    if mnemonic == 'SUB' and op0 == 'ESP' and op1 in GENERAL_REGISTERS:
        return 'dynamic_alloca', 'Dynamic stack allocation (SUB ESP, %s)' % op1
    if mnemonic == 'MOV' and op1 == 'ESP' and op0 in ('ESI', 'EDI'):
        return 'alt_frame_pointer', 'Alternative frame pointer (%s = ESP)' % op0
    if mnemonic == 'ADD' and op0 == 'ESP' and op1 in GENERAL_REGISTERS:
        return 'dynamic_esp_restore', 'Dynamic ESP restoration (ADD ESP, %s)' % op1
    if mnemonic == 'XCHG' and 'ESP' in (op0, op1) and len(ops) > 1:
        return 'stack_pivot', 'Stack pivot (XCHG ESP, %s)' % (op1 if op0 == 'ESP' else op0)
    if mnemonic in ('PUSHF', 'PUSHFD'):
        return 'pushf', 'PUSHF instruction'
    if mnemonic == 'POP' and op0 == 'ESP':
        return 'pop_esp', 'POP into ESP'
    return None


def detect_stack_patterns_from_listing(program_listing, func):
    """Detect problematic stack patterns directly from Ghidra listing.

    Args:
        program_listing: The program's listing
        func: The function to analyze

    Returns:
        List of detected patterns with location and description
    """
    detected = []
    for instr in program_listing.getInstructions(func.getBody(), True):
        ops = [instr.getDefaultOperandRepresentation(i) for i in range(instr.getNumOperands())]
        found = _classify(instr.getMnemonicString().upper(), ops)
        if found:
            pattern_id, description = found
            detected.append({
                'address': str(instr.getAddress()),
                'pattern_id': pattern_id,
                'description': description,
                'impact': IMPACT[pattern_id],
                'instruction': str(instr),
            })
    return detected


def summarize_stack_patterns(patterns):
    """Create a summary of detected stack patterns.

    Args:
        patterns: List of detected patterns

    Returns:
        Dictionary with summary information
    """
    if not patterns:
        return None

    pattern_ids = set(p['pattern_id'] for p in patterns)
    if pattern_ids & HIGH_SEVERITY:
        severity = 'high'
        note = 'Function contains stack manipulation that severely impacts decompilation quality.'
    elif pattern_ids & MEDIUM_SEVERITY:
        severity = 'medium'
        note = 'Function contains stack manipulation that may cause decompiler artifacts.'
    else:
        severity = 'low'
        note = 'Function contains minor stack patterns that may cause warnings.'

    # Sort patterns by address for deterministic output
    return {
        'severity': severity,
        'note': note,
        'pattern_count': len(patterns),
        'pattern_types': sorted(pattern_ids),
        'patterns': sorted(patterns, key=lambda p: p.get('address', '')),
    }
