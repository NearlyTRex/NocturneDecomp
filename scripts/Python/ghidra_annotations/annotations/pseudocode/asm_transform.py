# Inline assembly transform for pseudocode export
#
# Replaces broken Ghidra pseudocode with inline assembly blocks sourced
# from the raw assembly data. Handles two categories of broken decompilation:
#
# 1. MMX/SIMD functions: Ghidra produces uncompilable nested CONCAT/SUB/
#    uint7/int3 expressions for MMX code.
#
# 2. By-value struct passing callers: Functions that call known by-value
#    callees (clipAndDrawLine2D, clipAndDrawLine3D, calculateMainDataSize,
#    CSfxSlot_mix). Watcom passes structs by value via REP MOVSD which
#    Ghidra's decompiler cannot recognize, producing mangled pseudocode.
#
# Both cases are replaced with MSVC-style __asm { } blocks that clang++
# with -fasm-blocks compiles correctly.

import re

from ghidra_annotations.annotations.pseudocode.pass_by_value import byvalue_callee


# MMX instruction detection pattern (same mnemonics as the suspects package)
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

# A symbol name in an end-of-line comment
_SYMBOL_NAME = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')

# Jump instruction mnemonics
_JUMP_MNEMONICS = {
    'JMP', 'JA', 'JAE', 'JB', 'JBE', 'JC', 'JCXZ', 'JECXZ',
    'JE', 'JG', 'JGE', 'JL', 'JLE', 'JNA', 'JNAE', 'JNB', 'JNBE',
    'JNC', 'JNE', 'JNG', 'JNGE', 'JNL', 'JNLE', 'JNO', 'JNP',
    'JNS', 'JNZ', 'JO', 'JP', 'JPE', 'JPO', 'JS', 'JZ',
    'LOOP', 'LOOPE', 'LOOPNE', 'LOOPZ', 'LOOPNZ',
}

# Callee-saved registers a Watcom prologue pushes and its epilogue pops
_FRAME_REGS = {'EBP', 'ESI', 'EDI', 'EBX'}

# Pattern to match hex address in memory operands (with 0x prefix or bare)
# Matches addresses that are at least 5 hex digits (to avoid matching small constants)
_ADDR_IN_OPERAND = re.compile(r'0x0*([0-9a-fA-F]{5,})')

# Ghidra writes FPU stack registers as ST0, ST1, etc.
# MASM inline asm requires ST(0), ST(1), etc.
_FPU_STn = re.compile(r'\bST(\d)\b', re.IGNORECASE)

# String instructions, whose explicit ES:EDI / ESI operands Ghidra prints
_STRING_OPS = {'MOVSB', 'MOVSW', 'MOVSD', 'STOSB', 'STOSW', 'STOSD',
               'LODSB', 'LODSW', 'LODSD', 'SCASB', 'SCASW', 'SCASD',
               'CMPSB', 'CMPSW', 'CMPSD', 'INSB', 'INSW', 'INSD',
               'OUTSB', 'OUTSW', 'OUTSD'}


def _norm_addr(addr):
    """An address as lowercase hex with no leading zeros ('0' for zero)."""
    return addr.lower().lstrip('0') or '0'


def _has_mmx_instructions(assembly_code):
    """Check if assembly code contains MMX instructions."""
    return bool(_MMX_PATTERN.search(assembly_code))


def _calls_byvalue_function(func_calls):
    """Check if function calls any known by-value struct passing function.

    Matches the called names against BYVALUE_CALLEES (pass_by_value.py).

    Args:
        func_calls: List of dicts with 'name' keys from DecompileResult

    Returns:
        True if any called function is in the known by-value set
    """
    return any(byvalue_callee(call) for call in func_calls or ())


def _parse_raw_assembly(assembly_code):
    """Parse raw assembly code from generate_assembly_code_rich() format.

    Raw format:
        // 004906b0: MOVQ qword ptr [0x02d05258],MM0  ; g_SavedMMX0
        //   Label: core_dstrendr.cpp_saveMMXRegisters_FUN_004906b0
        //   XREF to: 0049200e (CONDITIONAL_JUMP)

    XREF lines, and anything else, are skipped.

    Returns:
        List of dicts: [{'addr': str, 'instruction': str, 'comment': str|None},
                        {'label': str}]
    """
    entries = []
    for line in assembly_code.split('\n'):
        line = line.rstrip()
        label_match = _LABEL_PATTERN.match(line)
        if label_match:
            entries.append({'label': label_match.group(1)})
            continue
        raw_match = _RAW_LINE_PATTERN.match(line)
        if raw_match:
            comment = raw_match.group(3)
            entries.append({
                'addr': raw_match.group(1).lower(),
                'instruction': raw_match.group(2).strip(),
                'comment': comment.strip() if comment else None
            })
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
    for g in func_globals or ():
        name = g.get('name', '')
        # Skip globals with brackets in names (e.g., g_TransformMatrix[1][0])
        # as they create invalid nested brackets in memory operands
        if name and '[' not in name:
            addr_map[_norm_addr(g.get('addr', ''))] = name

    # Source 2: EOL comments - the symbol names among "g_SomeName | other_comment".
    # String literals (= "..."), function signatures and numbers are not names.
    for entry in entries:
        comment = entry.get('comment')
        if not comment:
            continue
        for part in comment.split('|'):
            part = part.strip()
            if _SYMBOL_NAME.match(part):
                for addr_match in _ADDR_IN_OPERAND.finditer(entry['instruction']):
                    addr_map.setdefault(_norm_addr(addr_match.group(1)), part)

    return addr_map


def _build_label_map(entries):
    """Build a map of addresses to label names from Label annotations.

    Returns:
        Dict mapping normalized address to label name
    """
    label_map = {}
    # Labels appear AFTER the instruction at their address
    # So we track the last instruction address seen
    last_addr = None
    for entry in entries:
        if 'addr' in entry:
            last_addr = entry['addr']
        # Only use LAB_ labels for jump targets (skip function name labels)
        elif last_addr is not None and entry['label'].startswith('LAB_'):
            label_map[_norm_addr(last_addr)] = entry['label']
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
        return global_map.get(_norm_addr(match.group(1)), match.group(0))

    # Only replace addresses inside [...] bracket groups
    def replace_in_brackets(bracket_match):
        return '[' + _ADDR_IN_OPERAND.sub(replace_addr, bracket_match.group(1)) + ']'

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

    # Split on + and - while preserving the operators
    terms = re.split(r'\s*([+-])\s*', bracket_match.group(1).strip())

    # The first term that is not a register term or a number is the global
    reg_pattern = re.compile(r'^[A-Z]{2,3}(?:\*|$)', re.IGNORECASE)
    global_idx = next((i for i, term in enumerate(terms)
                       if re.match(r'^[A-Za-z_]', term) and not reg_pattern.match(term)), -1)
    if global_idx <= 0:
        return result

    # Move the global to the front, dropping the + right before it
    other_terms = [term for i, term in enumerate(terms)
                   if i != global_idx and not (i == global_idx - 1 and term == '+')]
    other_str = re.sub(r'^\+\s*', '', ' '.join(other_terms).strip())
    new_inner = terms[global_idx] + (' + ' + other_str if other_str else '')
    return result[:bracket_match.start(1)] + new_inner + result[bracket_match.end(1):]


def _split_instruction(instruction):
    """Split an instruction into mnemonic and operands.

    Args:
        instruction: Full instruction string like "MOVQ qword ptr [0x02d05258],MM0"

    Returns:
        Tuple of (mnemonic, operands) both uppercase mnemonic, original-case operands
    """
    parts = instruction.strip().split(None, 1)
    return parts[0].upper(), (parts[1] if len(parts) > 1 else '')


def _operands_key(operands):
    """Operands uppercased without spaces, for comparing 'EBP, ESP' with 'EBP,ESP'."""
    return re.sub(r'\s+', '', operands).upper()


def _prologue_length(instrs):
    """How many leading instructions are the frame setup, and the SUB ESP operand.

    Watcom pushes the callee-saved registers and EBP in either order around
    `MOV EBP,ESP` (`PUSH EBX; PUSH ESI; PUSH EDI; PUSH EBP; MOV EBP,ESP` or
    `PUSH EBP; MOV EBP,ESP; PUSH ESI; PUSH EDI`), then may reserve locals with
    `SUB ESP,N`.

    Returns:
        (count, SUB ESP operand key or None)
    """
    i = 0
    while i < len(instrs):
        mnemonic, operands = _split_instruction(instrs[i]['instruction'])
        key = _operands_key(operands)
        if not ((mnemonic == 'PUSH' and key in _FRAME_REGS) or (mnemonic == 'MOV' and key == 'EBP,ESP')):
            break
        i += 1
    if i < len(instrs):
        mnemonic, operands = _split_instruction(instrs[i]['instruction'])
        key = _operands_key(operands)
        if mnemonic == 'SUB' and key.startswith('ESP,'):
            return i + 1, key[4:]
    return i, None


def _epilogue_indices(instrs, reserved):
    """Indices of the trailing frame teardown, matching what the prologue set up.

    From the end: RET, then any run of POP <callee-saved>, LEAVE, `MOV ESP,EBP`
    and the `ADD ESP,N` that frees what the prologue's `SUB ESP,N` reserved.
    EMMS inside the run is function logic the compiler will not insert, so it
    is stepped over and kept.
    """
    dropped = set()
    i = len(instrs) - 1
    if i >= 0 and _split_instruction(instrs[i]['instruction'])[0] in ('RET', 'RETN'):
        dropped.add(i)
        i -= 1
    while i >= 0:
        mnemonic, operands = _split_instruction(instrs[i]['instruction'])
        key = _operands_key(operands)
        if mnemonic != 'EMMS':
            if not ((mnemonic == 'POP' and key in _FRAME_REGS) or mnemonic == 'LEAVE'
                    or (mnemonic == 'MOV' and key == 'ESP,EBP')
                    or (mnemonic == 'ADD' and reserved is not None and key == 'ESP,' + reserved)):
                break
            dropped.add(i)
        i -= 1
    return dropped


def _normalize_rep_instruction(mnemonic, operands):
    """Normalize Ghidra's REP prefix notation to standard x86 syntax.

    Ghidra writes:  MOVSB.REP ES:EDI,ESI
    Standard x86:   REP MOVSB (no operands needed)

    Also handles REPNE/REPNZ variants: SCASB.REPNE, etc.

    Returns:
        Tuple of (normalized_mnemonic, normalized_operands)
    """
    # Handle .REP suffix: MOVSB.REP -> REP MOVSB
    if '.REP' in mnemonic:
        base = mnemonic.split('.')[0]
        if '.REPNE' in mnemonic or '.REPNZ' in mnemonic:
            return 'REPNE ' + base, ''
        return 'REP ' + base, ''

    # MOVSD ES:EDI,ESI -> MOVSD: a string instruction needs no explicit operands
    if mnemonic in _STRING_OPS and re.match(r'[A-Z]{2}:', operands.strip(), re.IGNORECASE):
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
    """Convert a jump target address to its label name, if it has one.

    Args:
        operands: The jump operand (e.g., "0x0049200e")
        label_map: Normalized address-to-label mapping

    Returns:
        The label name, or the operand unchanged
    """
    match = re.match(r'0x([0-9a-fA-F]+)$', operands.strip())
    if match:
        return label_map.get(_norm_addr(match.group(1)), operands)
    return operands


def _format_instruction(instruction, label_map, global_map):
    """One instruction as an __asm block line."""
    mnemonic, operands = _normalize_rep_instruction(*_split_instruction(instruction))

    # Convert jump targets to labels
    if mnemonic in _JUMP_MNEMONICS:
        operands = _convert_jump_operand(operands, label_map)

    # Fix direct CALL targets: Ghidra uses dotted names like
    # "wincore_wddvmem.cpp_func_FUN_ADDR" but inside __asm blocks
    # the dot is parsed as struct member access. Replace with underscores
    # to match the C prototype naming convention.
    if mnemonic == 'CALL' and '[' not in operands:
        operands = operands.replace('.', '_')

    if not operands:
        return '        %s' % mnemonic.lower()

    # Strip segment overrides, write FPU registers as ST(n), and name
    # global addresses (global first, for MASM)
    operands = _FPU_STn.sub(r'ST(\1)', _strip_segment_prefix(operands))
    operands = _rewrite_memory_operand_order(operands, global_map)
    return '        %s %s' % (mnemonic.lower(), operands)


def _format_inline_asm(body, dropped, label_map, global_map):
    """Format the body instructions as an inline __asm { } block.

    Args:
        body: Instruction entries after the prologue
        dropped: Indices into body of the epilogue instructions left out
        label_map: Normalized address-to-label mapping
        global_map: Address-to-global-name mapping

    Returns:
        String containing the __asm { } block. A label on a left-out epilogue
        instruction goes before the next instruction kept, or at the end of
        the block, so a jump to the function's exit still has its target.
    """
    lines = ['__asm {']
    pending = []
    for i, entry in enumerate(body):
        label = label_map.get(_norm_addr(entry['addr']))
        if label:
            pending.append(label)
        if i in dropped:
            continue
        lines += ['    %s:' % name for name in pending]
        pending = []
        lines.append(_format_instruction(entry['instruction'], label_map, global_map))
    lines += ['    %s:' % name for name in pending]
    lines.append('}')
    return '\n'.join(lines)


def _replace_body_with_asm(result, decompiled_code):
    """Core logic: replace function body with inline assembly.

    Parses raw assembly, strips prologue/epilogue, resolves globals and labels,
    and builds an __asm {} block to replace the decompiled function body.

    Args:
        result: DecompileResult with .assembly_code and .func_globals attributes
        decompiled_code: The transformed decompiled code string

    Returns:
        Modified decompiled_code with inline asm body, or original on failure
    """
    entries = _parse_raw_assembly(getattr(result, 'assembly_code', None) or '')
    instrs = [e for e in entries if 'addr' in e]
    prologue, reserved = _prologue_length(instrs)
    body = instrs[prologue:]
    dropped = _epilogue_indices(body, reserved)
    if len(dropped) == len(body):
        return decompiled_code

    # The function signature is everything before the body's opening brace
    brace_pos = decompiled_code.find('{')
    if brace_pos == -1 or decompiled_code.rfind('}') < brace_pos:
        return decompiled_code

    asm_block = _format_inline_asm(body, dropped, _build_label_map(entries),
                                   _build_global_map(getattr(result, 'func_globals', None), entries))
    return decompiled_code[:brace_pos].rstrip() + '\n{\n' + asm_block + '\n}'


def generate_mmx_asm_cpp(result, decompiled_code):
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
    if not assembly_code or not _has_mmx_instructions(assembly_code):
        return decompiled_code
    return _replace_body_with_asm(result, decompiled_code)


def generate_byval_asm_cpp(result, decompiled_code):
    """Replace by-value struct passing pseudocode body with inline assembly.

    Only transforms functions that call one of the known by-value struct
    passing functions (clipAndDrawLine2D, clipAndDrawLine3D,
    calculateMainDataSize, CSfxSlot_mix). Functions that don't call any
    of these are returned unchanged.

    Args:
        result: DecompileResult with .assembly_code, .func_globals, and
                .func_calls attributes
        decompiled_code: The transformed decompiled code string

    Returns:
        Modified decompiled_code with inline asm body, or original if no by-value
    """
    if not _calls_byvalue_function(getattr(result, 'func_calls', None)):
        return decompiled_code
    return _replace_body_with_asm(result, decompiled_code)
