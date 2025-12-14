# Stack pattern detection for pseudocode export
# Identifies assembly patterns that cause Ghidra decompiler to hallucinate
# parameters or produce other artifacts

import re


# Stack manipulation patterns that cause decompiler issues
# Each entry: (pattern_regex, pattern_id, description, decompiler_impact)
STACK_PATTERNS = [
    # Stack alignment patterns - cause ESP-relative offsets to become unpredictable
    (r'AND\s+ESP\s*,\s*0x[fF]{6,}[0-8cCeE]',
     'stack_alignment',
     'Stack alignment (AND ESP, -N)',
     'Causes ESP-relative offsets to become runtime-dependent. All stack '
     'variables accessed via ESP will appear as separate "in_stack_XXXX" parameters.'),

    # Alloca-style dynamic stack allocation
    (r'SUB\s+ESP\s*,\s*E[ABCD]X',
     'dynamic_alloca',
     'Dynamic stack allocation (alloca)',
     'Variable-size stack allocation makes ESP unpredictable. Stack variables '
     'may appear as parameters or have incorrect offsets.'),

    # Non-standard frame pointer usage
    (r'MOV\s+E[SD]I\s*,\s*ESP',
     'alt_frame_pointer',
     'Alternative frame pointer (ESI/EDI = ESP)',
     'Using non-standard register as frame pointer. Ghidra may not track '
     'stack accesses through this register correctly.'),

    # Saving ESP to a local variable (then restoring later)
    (r'MOV\s+\[EBP\s*[-+]\s*0x[0-9a-fA-F]+\]\s*,\s*ESP',
     'esp_saved_to_local',
     'ESP saved to local variable',
     'ESP value stored for later restoration. May indicate complex stack '
     'manipulation that Ghidra cannot follow.'),

    # Manual stack frame setup without standard prologue
    (r'PUSH\s+EBP\s*\n.*\n.*SUB\s+ESP',
     'nonstandard_prologue',
     'Non-standard function prologue',
     'Function prologue differs from standard pattern. May cause Ghidra to '
     'misidentify local variables.'),

    # Stack pointer arithmetic other than SUB ESP, imm
    (r'ADD\s+ESP\s*,\s*E[ABCD]X',
     'dynamic_esp_restore',
     'Dynamic ESP restoration',
     'ESP modified by register value. Ghidra cannot determine stack state.'),

    # LEA ESP from EBP with unusual offset
    (r'LEA\s+ESP\s*,\s*\[EBP\s*[-+]\s*0x[0-9a-fA-F]{3,}\]',
     'large_frame_lea',
     'Large frame LEA adjustment',
     'Large stack frame adjustment via LEA. May indicate complex local '
     'variable layout.'),

    # Stack pivot patterns (security-relevant, but also causes decompiler issues)
    (r'XCHG\s+ESP\s*,\s*E[ABCD]X',
     'stack_pivot',
     'Stack pivot (XCHG ESP)',
     'Stack pointer exchange. Complete loss of stack tracking.'),

    # Pushing flags/segment registers (may indicate special calling convention)
    (r'PUSHF[D]?',
     'pushf',
     'PUSHF instruction',
     'Flags pushed to stack. May indicate interrupt handler or special '
     'calling convention.'),

    # POP into ESP (unusual but possible)
    (r'POP\s+ESP',
     'pop_esp',
     'POP into ESP',
     'Direct modification of ESP from stack. Ghidra cannot track this.'),
]


def detect_stack_patterns_from_assembly(assembly_code):
    """Detect problematic stack manipulation patterns in assembly code.

    Args:
        assembly_code: The assembly code as a string

    Returns:
        List of detected patterns with location and description
    """
    detected = []
    lines = assembly_code.split('\n')

    for line_num, line in enumerate(lines, 1):
        # Clean up the line for pattern matching
        # Remove comments and extra whitespace
        clean_line = line.strip()
        if ';' in clean_line:
            clean_line = clean_line.split(';')[0].strip()

        if not clean_line:
            continue

        for pattern, pattern_id, description, impact in STACK_PATTERNS:
            if re.search(pattern, clean_line, re.IGNORECASE):
                # Extract the address if present in the line
                addr_match = re.search(r'\b([0-9a-fA-F]{8})\b', line)
                address = addr_match.group(1) if addr_match else None

                detected.append({
                    'line': line_num,
                    'address': address,
                    'pattern_id': pattern_id,
                    'description': description,
                    'impact': impact,
                    'instruction': clean_line[:60] if len(clean_line) > 60 else clean_line
                })

    return detected


def detect_stack_patterns_from_listing(program_listing, func):
    """Detect problematic stack patterns directly from Ghidra listing.

    This is more reliable than regex on assembly text as it uses
    Ghidra's instruction parsing.

    Args:
        program_listing: The program's listing
        func: The function to analyze

    Returns:
        List of detected patterns with location and description
    """
    detected = []

    for instr in program_listing.getInstructions(func.getBody(), True):
        mnemonic = instr.getMnemonicString().upper()
        addr = str(instr.getAddress())
        instr_str = str(instr)

        # Check for AND ESP, -N (stack alignment)
        if mnemonic == 'AND':
            num_operands = instr.getNumOperands()
            if num_operands >= 2:
                op0 = instr.getDefaultOperandRepresentation(0).upper()
                op1 = instr.getDefaultOperandRepresentation(1)
                if op0 == 'ESP':
                    # Check if it's a negative mask (alignment)
                    try:
                        # Handle hex values like 0xfffffff8 or -0x8
                        if op1.startswith('0x') or op1.startswith('-0x'):
                            val = int(op1, 16) if op1.startswith('0x') else int(op1, 16)
                            # Stack alignment masks are typically 0xFFFFFFF0, 0xFFFFFFF8, etc
                            if val < 0 or (val > 0x7FFFFFFF):
                                detected.append({
                                    'address': addr,
                                    'pattern_id': 'stack_alignment',
                                    'description': 'Stack alignment (AND ESP, %s)' % op1,
                                    'impact': 'Causes ESP-relative offsets to become runtime-dependent. '
                                              'All stack variables accessed via ESP after this point '
                                              'will appear as separate "in_stack_XXXX" parameters.',
                                    'instruction': instr_str
                                })
                    except ValueError:
                        pass

        # Check for SUB ESP, register (dynamic alloca)
        elif mnemonic == 'SUB':
            num_operands = instr.getNumOperands()
            if num_operands >= 2:
                op0 = instr.getDefaultOperandRepresentation(0).upper()
                op1 = instr.getDefaultOperandRepresentation(1).upper()
                if op0 == 'ESP' and op1 in ('EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI'):
                    detected.append({
                        'address': addr,
                        'pattern_id': 'dynamic_alloca',
                        'description': 'Dynamic stack allocation (SUB ESP, %s)' % op1,
                        'impact': 'Variable-size stack allocation makes ESP unpredictable. '
                                  'Stack variables may appear as parameters or have incorrect offsets.',
                        'instruction': instr_str
                    })

        # Check for MOV ESI/EDI, ESP (alternative frame pointer)
        elif mnemonic == 'MOV':
            num_operands = instr.getNumOperands()
            if num_operands >= 2:
                op0 = instr.getDefaultOperandRepresentation(0).upper()
                op1 = instr.getDefaultOperandRepresentation(1).upper()
                if op1 == 'ESP' and op0 in ('ESI', 'EDI'):
                    detected.append({
                        'address': addr,
                        'pattern_id': 'alt_frame_pointer',
                        'description': 'Alternative frame pointer (%s = ESP)' % op0,
                        'impact': 'Using non-standard register as frame pointer. Ghidra may not '
                                  'track stack accesses through this register correctly.',
                        'instruction': instr_str
                    })

        # Check for ADD ESP, register (dynamic restore)
        elif mnemonic == 'ADD':
            num_operands = instr.getNumOperands()
            if num_operands >= 2:
                op0 = instr.getDefaultOperandRepresentation(0).upper()
                op1 = instr.getDefaultOperandRepresentation(1).upper()
                if op0 == 'ESP' and op1 in ('EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI'):
                    detected.append({
                        'address': addr,
                        'pattern_id': 'dynamic_esp_restore',
                        'description': 'Dynamic ESP restoration (ADD ESP, %s)' % op1,
                        'impact': 'ESP modified by register value. Ghidra cannot determine stack state.',
                        'instruction': instr_str
                    })

        # Check for XCHG ESP, reg (stack pivot)
        elif mnemonic == 'XCHG':
            num_operands = instr.getNumOperands()
            if num_operands >= 2:
                op0 = instr.getDefaultOperandRepresentation(0).upper()
                op1 = instr.getDefaultOperandRepresentation(1).upper()
                if op0 == 'ESP' or op1 == 'ESP':
                    other = op1 if op0 == 'ESP' else op0
                    detected.append({
                        'address': addr,
                        'pattern_id': 'stack_pivot',
                        'description': 'Stack pivot (XCHG ESP, %s)' % other,
                        'impact': 'Stack pointer exchange. Complete loss of stack tracking.',
                        'instruction': instr_str
                    })

        # Check for PUSHFD/PUSHF
        elif mnemonic in ('PUSHF', 'PUSHFD'):
            detected.append({
                'address': addr,
                'pattern_id': 'pushf',
                'description': 'PUSHF instruction',
                'impact': 'Flags pushed to stack. May indicate interrupt handler or '
                          'special calling convention.',
                'instruction': instr_str
            })

        # Check for POP ESP
        elif mnemonic == 'POP':
            num_operands = instr.getNumOperands()
            if num_operands >= 1:
                op0 = instr.getDefaultOperandRepresentation(0).upper()
                if op0 == 'ESP':
                    detected.append({
                        'address': addr,
                        'pattern_id': 'pop_esp',
                        'description': 'POP into ESP',
                        'impact': 'Direct modification of ESP from stack. Ghidra cannot track this.',
                        'instruction': instr_str
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

    # Determine overall severity
    high_severity = {'stack_pivot', 'pop_esp', 'dynamic_alloca'}
    medium_severity = {'stack_alignment', 'alt_frame_pointer', 'dynamic_esp_restore'}

    has_high = bool(pattern_ids & high_severity)
    has_medium = bool(pattern_ids & medium_severity)

    if has_high:
        severity = 'high'
        note = 'Function contains stack manipulation that severely impacts decompilation quality.'
    elif has_medium:
        severity = 'medium'
        note = 'Function contains stack manipulation that may cause decompiler artifacts.'
    else:
        severity = 'low'
        note = 'Function contains minor stack patterns that may cause warnings.'

    # Sort patterns by address for deterministic output
    sorted_patterns = sorted(patterns, key=lambda p: p.get('address', ''))
    return {
        'severity': severity,
        'note': note,
        'pattern_count': len(patterns),
        'pattern_types': sorted(pattern_ids),
        'patterns': sorted_patterns
    }
