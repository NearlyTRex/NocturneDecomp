# MMX inline assembly transform for pseudocode export
#
# Replaces broken Ghidra pseudocode for MMX/SIMD functions with inline
# assembly blocks sourced from the raw assembly data. Ghidra's decompiler
# produces uncompilable nested CONCAT/SUB/uint7/int3 expressions for MMX
# code, while clang++ with -fasm-blocks compiles MSVC-style __asm { }
# blocks perfectly.

import re


# MMX instruction detection pattern (same mnemonics as suspects.py)
_MMX_PATTERN = re.compile(
    r'\b(MOVQ|MOVD|PACKSSWB|PACKSSDW|PACKUSWB|PUNPCKHBW|PUNPCKHWD|PUNPCKHDQ|'
    r'PUNPCKLBW|PUNPCKLWD|PUNPCKLDQ|PADDB|PADDW|PADDD|PADDSB|PADDSW|PADDUSB|'
    r'PADDUSW|PSUBB|PSUBW|PSUBD|PSUBSB|PSUBSW|PSUBUSB|PSUBUSW|PMULLW|PMULHW|'
    r'PMADDWD|PCMPEQB|PCMPEQW|PCMPEQD|PCMPGTB|PCMPGTW|PCMPGTD|PAND|PANDN|'
    r'POR|PXOR|PSLLW|PSLLD|PSLLQ|PSRLW|PSRLD|PSRLQ|PSRAW|PSRAD|EMMS)\b',
    re.IGNORECASE
)

# Pattern to parse raw assembly lines: "// ADDRESS: INSTRUCTION"
_RAW_LINE_PATTERN = re.compile(
    r'^//\s*([0-9a-fA-F]+):\s+(.+?)(?:\s{2,};\s*(.*))?$'
)

# Pattern for Label annotations: "//   Label: LABEL_NAME"
_LABEL_PATTERN = re.compile(r'^//\s+Label:\s+(.+)$')

# Pattern for XREF annotations: "//   XREF to: ..."
_XREF_PATTERN = re.compile(r'^//\s+XREF to:')

# Jump instruction mnemonics
_JUMP_MNEMONICS = {
    'JMP', 'JA', 'JAE', 'JB', 'JBE', 'JC', 'JCXZ', 'JECXZ',
    'JE', 'JG', 'JGE', 'JL', 'JLE', 'JNA', 'JNAE', 'JNB', 'JNBE',
    'JNC', 'JNE', 'JNG', 'JNGE', 'JNL', 'JNLE', 'JNO', 'JNP',
    'JNS', 'JNZ', 'JO', 'JP', 'JPE', 'JPO', 'JS', 'JZ',
    'LOOP', 'LOOPE', 'LOOPNE', 'LOOPZ', 'LOOPNZ',
}

# Prologue instructions to skip (at start of function)
_PROLOGUE_PUSH_REGS = {'EBP', 'ESI', 'EDI', 'EBX'}

# Epilogue instructions to skip (at end of function)
_EPILOGUE_POP_REGS = {'EBP', 'ESI', 'EDI', 'EBX'}

# Pattern to match hex address in memory operands (with 0x prefix or bare)
# Matches addresses that are at least 5 hex digits (to avoid matching small constants)
_ADDR_IN_OPERAND = re.compile(r'0x0*([0-9a-fA-F]{5,})')


def _has_mmx_instructions(assembly_code):
    """Check if assembly code contains MMX instructions."""
    if not assembly_code:
        return False
    return bool(_MMX_PATTERN.search(assembly_code))


def _parse_raw_assembly(assembly_code):
    """Parse raw assembly code from generate_assembly_code_rich() format.

    Raw format:
        // 004906b0: MOVQ qword ptr [0x02d05258],MM0  ; g_SavedMMX0
        //   Label: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
        //   XREF to: 0049200e (CONDITIONAL_JUMP)

    Returns:
        List of dicts: [{'addr': str, 'instruction': str, 'comment': str|None},
                        {'label': str}, {'xref': str}]
    """
    entries = []
    for line in assembly_code.split('\n'):
        line = line.rstrip()
        if not line:
            continue

        # Check for Label annotation
        label_match = _LABEL_PATTERN.match(line)
        if label_match:
            entries.append({'label': label_match.group(1)})
            continue

        # Check for XREF annotation (skip these)
        if _XREF_PATTERN.match(line):
            continue

        # Check for instruction line
        raw_match = _RAW_LINE_PATTERN.match(line)
        if raw_match:
            addr = raw_match.group(1).lower()
            instruction = raw_match.group(2).strip()
            comment = raw_match.group(3)
            entries.append({
                'addr': addr,
                'instruction': instruction,
                'comment': comment.strip() if comment else None
            })
            continue

    return entries


def _build_global_map(func_globals, entries):
    """Build a unified address-to-global-name map.

    Sources:
    1. func_globals list from DecompileResult
    2. EOL comments in assembly that contain global names

    Args:
        func_globals: List of dicts with 'addr' and 'name' keys
        entries: Parsed assembly entries

    Returns:
        Dict mapping normalized hex address (lowercase, no prefix, no leading zeros)
        to global name
    """
    addr_map = {}

    # Source 1: func_globals
    if func_globals:
        for g in func_globals:
            addr = g.get('addr', '').lower().lstrip('0') or '0'
            name = g.get('name', '')
            if addr and name:
                # Skip globals with brackets in names (e.g., g_TransformMatrix[1][0])
                # as they create invalid nested brackets in memory operands
                if '[' in name:
                    continue
                addr_map[addr] = name

    # Source 2: EOL comments - extract global names from comments like "g_SomeName"
    # or "g_SomeName | other_comment"
    for entry in entries:
        if 'comment' not in entry or not entry.get('comment'):
            continue
        comment = entry['comment']
        # Split on | and check each part
        for part in comment.split('|'):
            part = part.strip()
            # Global names typically start with g_ or are simple identifiers
            # Skip string literals (= "..."), function signatures, and numeric values
            if part.startswith('=') or '(' in part or part.startswith('0x'):
                continue
            # Check if it looks like a symbol name (alphanumeric + underscores)
            if re.match(r'^[A-Za-z_][A-Za-z0-9_]*$', part):
                # Try to find the address this global corresponds to in the instruction
                instruction = entry.get('instruction', '')
                # Find hex addresses in the instruction operands
                for addr_match in _ADDR_IN_OPERAND.finditer(instruction):
                    addr = addr_match.group(1).lower().lstrip('0') or '0'
                    if addr not in addr_map:
                        addr_map[addr] = part

    return addr_map


def _build_label_map(entries):
    """Build a map of addresses to label names from Label annotations.

    Returns:
        Dict mapping address (lowercase hex) to label name
    """
    label_map = {}
    # Labels appear AFTER the instruction at their address
    # So we track the last instruction address seen
    last_addr = None
    for entry in entries:
        if 'addr' in entry:
            last_addr = entry['addr']
        elif 'label' in entry and last_addr is not None:
            label_name = entry['label']
            # Only use LAB_ labels for jump targets (skip function name labels)
            if label_name.startswith('LAB_'):
                label_map[last_addr] = label_name
    return label_map


def _replace_globals_in_operand(operand, global_map):
    """Replace absolute addresses in an operand with global variable names.

    Only replaces addresses inside [brackets] (memory operands), NOT bare
    immediate values. This prevents e.g. TEST [0xaddr],0xaddr from having
    both operands replaced when they coincidentally share the same hex value.

    Handles patterns like:
    - [0x02d05258]           -> [g_SavedMMX0]
    - [EDX*0x4 + 0x2db87c0] -> [g_HeroActors + edx*4]
    - dword ptr [0x02db87d0] -> dword ptr [g_LocalHeroIndex]
    - [ECX + ESI*0x1]       -> no change (no global address)
    - TEST [0xADDR],0xADDR  -> TEST [g_Name],0xADDR (only first replaced)

    Args:
        operand: The operand string
        global_map: Address-to-name mapping

    Returns:
        Modified operand string
    """
    def replace_addr(match):
        full_match = match.group(0)  # includes 0x prefix
        addr = match.group(1).lower().lstrip('0') or '0'
        if addr in global_map:
            return global_map[addr]
        return full_match

    # Only replace addresses inside [...] bracket groups
    def replace_in_brackets(bracket_match):
        inner = bracket_match.group(1)
        replaced = _ADDR_IN_OPERAND.sub(replace_addr, inner)
        return '[' + replaced + ']'

    return re.sub(r'\[([^\]]+)\]', replace_in_brackets, operand)


def _rewrite_memory_operand_order(operand, global_map):
    """Rewrite memory operands to put the global name first for MASM compatibility.

    MASM syntax expects: [global_name + reg*scale] not [reg*scale + global_name]

    Handles:
    - [EDX*0x4 + 0x2db87c0] -> first replace addr, then reorder to [g_HeroActors + EDX*4]
    - [ECX + ESI*0x1 + 0x8] -> [ECX + ESI*0x1 + 0x8] (offset stays at end)

    Args:
        operand: The full operand string (e.g., "dword ptr [EDX*0x4 + 0x2db87c0]")
        global_map: Address-to-name mapping

    Returns:
        Modified operand with globals replaced and reordered
    """
    # First do the basic address replacement
    result = _replace_globals_in_operand(operand, global_map)

    # Now check if we need to reorder terms inside brackets
    # Pattern: [REG*SCALE + global_name] -> [global_name + REG*SCALE]
    bracket_match = re.search(r'\[([^\]]+)\]', result)
    if not bracket_match:
        return result

    inner = bracket_match.group(1)

    # Split on + and - while preserving the operators
    # We need to find if a global name ended up after register terms
    terms = re.split(r'\s*([+-])\s*', inner.strip())

    # Check if any term is a global name (doesn't start with a register pattern)
    reg_pattern = re.compile(r'^[A-Z]{2,3}(?:\*|$)', re.IGNORECASE)
    has_global = False
    global_idx = -1
    for i, term in enumerate(terms):
        if term in ('+', '-'):
            continue
        term_stripped = term.strip()
        if not term_stripped:
            continue
        # If it's not a register-based term and not a small number, it's likely a global
        if (not reg_pattern.match(term_stripped) and
                not term_stripped.startswith('0x') and
                not term_stripped.isdigit() and
                re.match(r'^[A-Za-z_]', term_stripped)):
            has_global = True
            global_idx = i
            break

    if has_global and global_idx > 0:
        # Reorder: move the global to the front
        # Rebuild the expression with global first
        global_term = terms[global_idx].strip()
        other_terms = []
        for i, term in enumerate(terms):
            if i == global_idx:
                continue
            # Skip the + operator right before the global
            if i == global_idx - 1 and term == '+':
                continue
            other_terms.append(term)

        # Reconstruct: global + other terms
        other_str = ' '.join(other_terms).strip()
        if other_str.startswith('+ '):
            other_str = other_str[2:]
        elif other_str.startswith('+'):
            other_str = other_str[1:]

        new_inner = global_term
        if other_str:
            new_inner = global_term + ' + ' + other_str

        result = result[:bracket_match.start(1)] + new_inner + result[bracket_match.end(1):]

    return result


def _detect_prologue_end(entries):
    """Detect where the function prologue ends.

    Standard prologue patterns:
    - PUSH EBP / MOV EBP,ESP / [PUSH ESI/EDI/EBX] / [SUB ESP,N]
    - Just PUSH ESI/EDI/EBX at start (no frame pointer)

    Returns:
        Index into entries (instruction entries only) where body starts
    """
    # Filter to just instruction entries
    instr_entries = [e for e in entries if 'addr' in e]
    if not instr_entries:
        return 0

    skip_count = 0
    i = 0

    # Check for PUSH EBP
    if i < len(instr_entries):
        mnemonic, operands = _split_instruction(instr_entries[i]['instruction'])
        if mnemonic == 'PUSH' and operands.strip().upper() == 'EBP':
            skip_count += 1
            i += 1

            # Check for MOV EBP,ESP
            if i < len(instr_entries):
                mnemonic2, operands2 = _split_instruction(instr_entries[i]['instruction'])
                if mnemonic2 == 'MOV' and re.match(r'EBP\s*,\s*ESP', operands2.strip(), re.IGNORECASE):
                    skip_count += 1
                    i += 1

    # Skip callee-saved register pushes
    while i < len(instr_entries):
        mnemonic, operands = _split_instruction(instr_entries[i]['instruction'])
        if mnemonic == 'PUSH' and operands.strip().upper() in _PROLOGUE_PUSH_REGS:
            skip_count += 1
            i += 1
        else:
            break

    # Skip SUB ESP, N (stack frame allocation)
    if i < len(instr_entries):
        mnemonic, operands = _split_instruction(instr_entries[i]['instruction'])
        if mnemonic == 'SUB' and re.match(r'ESP\s*,', operands.strip(), re.IGNORECASE):
            skip_count += 1

    return skip_count


def _detect_epilogue_start(entries):
    """Detect where the function epilogue starts.

    Standard epilogue patterns (in reverse from end):
    - RET
    - LEAVE or POP EBP
    - EMMS (MMX cleanup)
    - POP ESI/EDI/EBX (callee-saved restores)

    Returns:
        Number of instructions to skip from the end
    """
    instr_entries = [e for e in entries if 'addr' in e]
    if not instr_entries:
        return 0

    skip_count = 0
    i = len(instr_entries) - 1

    # Check for RET at the end
    if i >= 0:
        mnemonic, _ = _split_instruction(instr_entries[i]['instruction'])
        if mnemonic in ('RET', 'RETN'):
            skip_count += 1
            i -= 1

    # Check for LEAVE or POP EBP
    if i >= 0:
        mnemonic, operands = _split_instruction(instr_entries[i]['instruction'])
        if mnemonic == 'LEAVE':
            skip_count += 1
            i -= 1
        elif mnemonic == 'POP' and operands.strip().upper() == 'EBP':
            skip_count += 1
            i -= 1

    # Skip EMMS (MMX state cleanup - we'll emit it in the asm block)
    # Actually, DON'T skip EMMS - it's part of the function logic for MMX
    # The compiler won't auto-insert it. Let's keep it.

    # Skip callee-saved register pops (in reverse order)
    while i >= 0:
        mnemonic, operands = _split_instruction(instr_entries[i]['instruction'])
        if mnemonic == 'POP' and operands.strip().upper() in _EPILOGUE_POP_REGS:
            skip_count += 1
            i -= 1
        else:
            break

    return skip_count


def _split_instruction(instruction):
    """Split an instruction into mnemonic and operands.

    Args:
        instruction: Full instruction string like "MOVQ qword ptr [0x02d05258],MM0"

    Returns:
        Tuple of (mnemonic, operands) both uppercase mnemonic, original-case operands
    """
    parts = instruction.strip().split(None, 1)
    mnemonic = parts[0].upper() if parts else ''
    operands = parts[1] if len(parts) > 1 else ''
    return mnemonic, operands


def _normalize_rep_instruction(mnemonic, operands):
    """Normalize Ghidra's REP prefix notation to standard x86 syntax.

    Ghidra writes:  MOVSB.REP ES:EDI,ESI
    Standard x86:   REP MOVSB (no operands needed)

    Also handles REPNE/REPNZ variants: SCASB.REPNE, etc.

    Returns:
        Tuple of (normalized_mnemonic, normalized_operands)
    """
    upper = mnemonic.upper()

    # Handle .REP suffix: MOVSB.REP -> REP MOVSB
    if '.REP' in upper:
        base = upper.split('.')[0]
        if '.REPNE' in upper or '.REPNZ' in upper:
            return 'REPNE ' + base, ''
        return 'REP ' + base, ''

    # Handle bare string instructions with segment:register operands
    # MOVSD ES:EDI,ESI -> MOVSD (string move, no explicit operands needed)
    # MOVSB ES:EDI,ESI -> MOVSB
    # STOSB ES:EDI -> STOSB
    # SCASB ES:EDI -> SCASB
    # These are string instructions that Ghidra shows with explicit operands
    string_ops = {'MOVSB', 'MOVSW', 'MOVSD', 'STOSB', 'STOSW', 'STOSD',
                  'LODSB', 'LODSW', 'LODSD', 'SCASB', 'SCASW', 'SCASD',
                  'CMPSB', 'CMPSW', 'CMPSD', 'INSB', 'INSW', 'INSD',
                  'OUTSB', 'OUTSW', 'OUTSD'}
    if upper in string_ops and operands:
        # Check if operands use segment:register notation (ES:EDI, ES:EDI,ESI)
        if re.match(r'[A-Z]{2}:', operands.strip(), re.IGNORECASE):
            return mnemonic, ''

    return mnemonic, operands


def _strip_segment_prefix(operands):
    """Strip segment override prefix from memory operands.

    Handles: CS:[0x611570] -> [0x611570]
             dword ptr CS:[0x611570] -> dword ptr [0x611570]

    Returns:
        Modified operands string
    """
    return re.sub(r'\b[CDEFGS]S:', '', operands)


def _convert_jump_operand(operands, label_map):
    """Convert jump target addresses to label names.

    Args:
        operands: The jump operand (e.g., "0x0049200e")
        label_map: Address-to-label mapping

    Returns:
        Modified operand with label name if found
    """
    # Match jump target address: 0xADDRESS or bare ADDRESS
    match = re.match(r'0x0*([0-9a-fA-F]+)$', operands.strip())
    if match:
        addr = match.group(1).lower().lstrip('0') or '0'
        # Look up in label map
        for label_addr, label_name in label_map.items():
            label_addr_norm = label_addr.lower().lstrip('0') or '0'
            if addr == label_addr_norm:
                return label_name
    return operands


def _format_inline_asm(body_instructions, label_map, global_map):
    """Format parsed instructions as an inline __asm { } block.

    Args:
        body_instructions: List of entries (instructions and labels) for the function body
        label_map: Address-to-label mapping
        global_map: Address-to-global-name mapping

    Returns:
        String containing the __asm { } block
    """
    lines = []
    lines.append('__asm {')

    for entry in body_instructions:
        # Skip label entries from the stream - we emit labels using label_map
        # before the instruction at that address instead, since Ghidra places
        # label annotations AFTER the instruction line
        if 'label' in entry:
            continue

        if 'addr' not in entry:
            continue

        # Emit label BEFORE the instruction if this address has one
        addr = entry['addr']
        if addr in label_map:
            lines.append('    %s:' % label_map[addr])

        instruction = entry['instruction']
        mnemonic, operands = _split_instruction(instruction)

        # Normalize REP-prefixed instructions (MOVSB.REP -> REP MOVSB)
        mnemonic, operands = _normalize_rep_instruction(mnemonic, operands)

        # Convert jump targets to labels
        if mnemonic in _JUMP_MNEMONICS:
            operands = _convert_jump_operand(operands, label_map)

        # Fix direct CALL targets: Ghidra uses dotted names like
        # "wincore_wddvmem.cpp_func_FUN_ADDR" but inside __asm blocks
        # the dot is parsed as struct member access. Replace with underscores
        # to match the C prototype naming convention.
        if mnemonic == 'CALL' and operands and '[' not in operands:
            operands = operands.replace('.', '_')

        # Strip segment override prefixes (CS:, ES:, etc.)
        if operands:
            operands = _strip_segment_prefix(operands)

        # Replace global addresses in operands and reorder for MASM
        if operands:
            operands = _rewrite_memory_operand_order(operands, global_map)

        # Format the instruction (lowercase mnemonic for readability)
        if operands:
            lines.append('        %s %s' % (mnemonic.lower(), operands))
        else:
            lines.append('        %s' % mnemonic.lower())

    lines.append('}')
    return '\n'.join(lines)


def generate_inline_asm_cpp(result, decompiled_code):
    """Replace MMX function pseudocode body with inline assembly.

    Only transforms functions that contain MMX instructions. Non-MMX functions
    are returned unchanged.

    Args:
        result: DecompileResult with .assembly_code and .func_globals attributes
        decompiled_code: The transformed decompiled code string

    Returns:
        Modified decompiled_code with inline asm body, or original if not MMX
    """
    assembly_code = getattr(result, 'assembly_code', None)
    if not assembly_code:
        return decompiled_code

    # Only transform functions with MMX instructions
    if not _has_mmx_instructions(assembly_code):
        return decompiled_code

    func_globals = getattr(result, 'func_globals', None)

    # Parse the raw assembly
    entries = _parse_raw_assembly(assembly_code)
    if not entries:
        return decompiled_code

    # Build maps
    global_map = _build_global_map(func_globals, entries)
    label_map = _build_label_map(entries)

    # Detect prologue/epilogue boundaries
    prologue_skip = _detect_prologue_end(entries)
    epilogue_skip = _detect_epilogue_start(entries)

    # Get instruction-only entries for slicing
    instr_indices = []
    for i, entry in enumerate(entries):
        if 'addr' in entry:
            instr_indices.append(i)

    if not instr_indices:
        return decompiled_code

    # Determine the range of entries to include (body = after prologue, before epilogue)
    if prologue_skip >= len(instr_indices):
        # All instructions are prologue - unlikely but handle gracefully
        return decompiled_code

    body_start_instr_idx = instr_indices[prologue_skip]
    if epilogue_skip > 0 and epilogue_skip < len(instr_indices):
        body_end_instr_idx = instr_indices[len(instr_indices) - epilogue_skip]
    else:
        body_end_instr_idx = len(entries)

    # Collect body entries (instructions + their labels)
    # We need to include labels that fall within the body range
    body_entries = []
    for i in range(body_start_instr_idx, body_end_instr_idx):
        entry = entries[i]
        body_entries.append(entry)

    if not body_entries:
        return decompiled_code

    # Generate the inline asm block
    asm_block = _format_inline_asm(body_entries, label_map, global_map)

    # Extract function signature from decompiled_code
    # The decompiled_code includes the full function: signature + body
    # Find the opening brace of the function body
    brace_pos = decompiled_code.find('{')
    if brace_pos == -1:
        return decompiled_code

    # Find the matching closing brace
    last_brace = decompiled_code.rfind('}')
    if last_brace == -1 or last_brace <= brace_pos:
        return decompiled_code

    # Get the function signature (everything before the opening brace)
    signature_part = decompiled_code[:brace_pos].rstrip()

    # Build the new function with inline asm
    new_code = signature_part + '\n{\n' + asm_block + '\n}'

    return new_code
