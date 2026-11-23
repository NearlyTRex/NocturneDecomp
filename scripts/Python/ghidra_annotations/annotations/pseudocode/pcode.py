# P-code extraction and formatting for pseudocode export
# Provides raw P-code generation for each instruction in a function

import glob
import json
import os
import re

# x86 32-bit register names for readability
X86_REGS = {
    0x0: "EAX",
    0x4: "ECX",
    0x8: "EDX",
    0xc: "EBX",
    0x10: "ESP",
    0x14: "EBP",
    0x18: "ESI",
    0x1c: "EDI",
}

# ESP tracking patterns for common x86 instructions
ESP_ADJUSTMENTS = {
    # Stack operations
    'PUSH': -4,
    'POP': +4,
    'PUSHA': -32,
    'POPA': +32,
    'PUSHF': -4,
    'POPF': +4,
    'PUSHFD': -4,
    'POPFD': +4,
    # CALL pushes return address
    'CALL': -4,
    # RET pops return address (but we usually don't track past this)
    'RET': +4,
    'RETN': +4,
}


def _normalize_addr(addr):
    """'0x40EA67' / '0040ea67' -> '0040ea67'; '' (or just '0x') -> ''.

    The emptiness check comes before the zero-fill, or a missing address
    would come out as '00000000'.
    """
    addr = addr.lower()
    if addr.startswith('0x'):
        addr = addr[2:]
    return addr.zfill(8) if addr else ''


def load_switch_table_data(switch_tables_json_path):
    """Load switch table data from JSON and build lookup structure.

    Args:
        switch_tables_json_path: Path to switch_tables.json file

    Returns:
        Dictionary mapping switch instruction addresses to lists of target addresses.
        Addresses are normalized to lowercase 8-char hex strings.
        Example: {'0040ea67': ['0040ea6e', '0040ea88', ...]}
    """
    switch_targets = {}

    try:
        with open(switch_tables_json_path, 'r') as f:
            data = json.load(f)
    except (OSError, ValueError):
        return switch_targets

    for switch_entry in data.get('switch_tables', []):
        switch_addr = _normalize_addr(switch_entry.get('switch_addr', ''))
        if not switch_addr:
            continue
        targets = [addr for addr in (_normalize_addr(target.get('addr', ''))
                                     for target in switch_entry.get('targets', []))
                   if addr]
        if targets:
            switch_targets[switch_addr] = targets

    return switch_targets


def load_noreturn_functions(functions_dir):
    """Load noreturn function addresses from functions JSON files.

    Args:
        functions_dir: Path to the functions/ directory containing bucket files

    Returns:
        Set of noreturn function addresses (normalized to lowercase 8-char hex).
        Example: {'00506f10', '005f3920', ...}
    """
    noreturn_addrs = set()

    # Find all function bucket files
    pattern = os.path.join(functions_dir, 'functions_bucket_*.json')
    for bucket_file in glob.glob(pattern):
        try:
            with open(bucket_file, 'r') as f:
                functions = json.load(f)
        except (OSError, ValueError):
            continue

        for func in functions:
            if func.get('noreturn'):
                addr = _normalize_addr(func.get('addr', ''))
                if addr:
                    noreturn_addrs.add(addr)

    return noreturn_addrs


def format_varnode(vn):
    """Format a varnode for P-code output.

    Args:
        vn: Ghidra Varnode object

    Returns:
        Formatted string like "(register,0x14,4) /* EBP */"
    """
    if vn is None:
        return "(null)"
    addr = vn.getAddress()
    space = addr.getAddressSpace()
    offset = addr.getOffset()
    size = vn.getSize()
    space_name = space.getName().lower()

    # Format offset as hex (handle signed values)
    if offset < 0:
        offset_str = "0x%x" % (offset & 0xFFFFFFFF)
    else:
        offset_str = "0x%x" % offset

    # Add comment for known registers
    comment = ""
    if space_name == "register" and offset in X86_REGS and size == 4:
        comment = " /* %s */" % X86_REGS[offset]
    return "(%s,%s,%d)%s" % (space_name, offset_str, size, comment)


def format_pcode_op(op):
    """Format a single P-code operation.

    Args:
        op: Ghidra PcodeOp object

    Returns:
        Formatted string like "INT_ADD (unique,0x1000,4) = (register,0x14,4), (const,0x8,4)"
    """

    # Opcode mnemonic
    parts = []
    mnemonic = op.getMnemonic()
    parts.append(mnemonic)

    # Output varnode (if present)
    output = op.getOutput()
    if output is not None:
        parts.append(" ")
        parts.append(format_varnode(output))

    # Separator if we have both output and inputs
    num_inputs = op.getNumInputs()
    if output is not None and num_inputs > 0:
        parts.append(" =")

    # Input varnodes
    for i in range(num_inputs):
        inp = op.getInput(i)
        parts.append(" ")
        parts.append(format_varnode(inp))
        if i < num_inputs - 1:
            parts.append(",")
    return "".join(parts)


def calculate_esp_delta(mnemonic, operands_str, pcode_lines):
    """Calculate ESP delta for an instruction.

    Args:
        mnemonic: Instruction mnemonic (e.g., 'PUSH', 'SUB')
        operands_str: Operands as string (e.g., 'ESP, 0x20')
        pcode_lines: List of P-code op strings for this instruction

    Returns:
        Tuple of (delta, certainty) where:
            - delta: ESP adjustment in bytes (negative = down, positive = up)
                     OR special string 'frame_reset' for MOV ESP, EBP
                     OR special string 'leave' for LEAVE instruction
            - certainty: 'known', 'computed', or 'unknown'
    """

    # Check simple known adjustments
    mnemonic_upper = mnemonic.upper()
    if mnemonic_upper in ESP_ADJUSTMENTS:
        return (ESP_ADJUSTMENTS[mnemonic_upper], 'known')

    # LEAVE = MOV ESP, EBP then POP EBP. A marker: frame tracking resolves it.
    if mnemonic_upper == 'LEAVE':
        return ('leave', 'frame_restore')

    parts = [p.strip().upper() for p in operands_str.split(',')] if operands_str else []

    # SUB ESP, imm / ADD ESP, imm
    if mnemonic_upper in ('SUB', 'ADD') and len(parts) == 2 and parts[0] == 'ESP':
        try:
            val = int(parts[1], 0)  # Parse hex or decimal
        except ValueError:
            pass
        else:
            return (-val if mnemonic_upper == 'SUB' else val, 'computed')

    # ENTER size, level: PUSH EBP + allocate
    if mnemonic_upper == 'ENTER' and parts:
        try:
            return (-4 - int(parts[0], 0), 'computed')
        except ValueError:
            pass

    # MOV ESP, EBP (frame pointer restore)
    if mnemonic_upper == 'MOV' and parts == ['ESP', 'EBP']:
        return ('frame_reset', 'frame_restore')

    return (0, 'unknown')


def is_frame_pointer_setup(mnemonic, operands_str):
    """Check if instruction sets up EBP as frame pointer (MOV EBP, ESP)."""
    if mnemonic.upper() == 'MOV' and operands_str:
        parts = [p.strip() for p in operands_str.split(',')]
        if len(parts) == 2 and parts[0].upper() == 'EBP' and parts[1].upper() == 'ESP':
            return True
    return False


def extract_function_pcode(program, func, track_esp=True):
    """Extract raw P-code for all instructions in a function.

    Args:
        program: Ghidra Program object
        func: Ghidra Function object
        track_esp: If True, compute and include ESP delta tracking

    Returns:
        List of dictionaries, each containing:
            - address: instruction address as string
            - assembly: assembly mnemonic and operands
            - pcode: list of formatted P-code strings
            - pcode_count: number of P-code ops
            - esp_delta: (if track_esp) ESP change at this instruction
            - esp_offset: (if track_esp) cumulative ESP offset from function entry
            - esp_certainty: (if track_esp) 'known', 'computed', or 'lost'
    """

    # ESP tracking state
    listing = program.getListing()
    body = func.getBody()
    result = []
    instr_iter = listing.getInstructions(body, True)
    esp_offset = 0  # Cumulative offset from function entry (ESP at entry = 0)
    esp_tracking_lost = False
    lost_at_addr = None

    # EBP frame tracking - track where EBP points relative to function entry
    # When MOV EBP, ESP is executed, ebp_value = current esp_offset
    # When MOV ESP, EBP or LEAVE is executed, esp_offset = ebp_value
    ebp_frame_value = None  # ESP offset when EBP was set (None = not an EBP frame function)

    while instr_iter.hasNext():
        instr = instr_iter.next()
        addr = str(instr.getAddress())

        # Get assembly representation
        mnemonic = instr.getMnemonicString()
        asm_parts = [mnemonic]
        num_operands = instr.getNumOperands()
        operands_str = ""
        if num_operands > 0:
            operands = []
            for i in range(num_operands):
                operands.append(instr.getDefaultOperandRepresentation(i))
            operands_str = ", ".join(operands)
            asm_parts.append(" ")
            asm_parts.append(operands_str)
        assembly = "".join(asm_parts)

        # Get P-code
        pcode_ops = instr.getPcode()
        pcode_lines = []
        if pcode_ops is not None:
            for op in pcode_ops:
                pcode_lines.append(format_pcode_op(op))
        entry = {
            'address': addr,
            'assembly': assembly,
            'pcode': pcode_lines,
            'pcode_count': len(pcode_lines)
        }

        # ESP tracking
        if track_esp:
            # Check if this instruction sets up EBP frame pointer (MOV EBP, ESP)
            if is_frame_pointer_setup(mnemonic, operands_str):
                ebp_frame_value = esp_offset  # EBP now points to current ESP

            if esp_tracking_lost:
                entry['esp_delta'] = 0
                entry['esp_offset'] = None
                entry['esp_certainty'] = 'lost'
                entry['esp_lost_at'] = lost_at_addr
            else:
                delta, certainty = calculate_esp_delta(mnemonic, operands_str, pcode_lines)

                # Handle special frame restore instructions
                if delta == 'frame_reset':
                    # MOV ESP, EBP - restore ESP to frame pointer value
                    if ebp_frame_value is not None:
                        entry['esp_delta'] = ebp_frame_value - esp_offset  # Actual change
                        esp_offset = ebp_frame_value
                        entry['esp_offset'] = esp_offset
                        entry['esp_certainty'] = 'known'
                        entry['esp_frame_restore'] = True
                    else:
                        # No frame pointer was set - can't determine ESP
                        entry['esp_delta'] = 0
                        entry['esp_offset'] = esp_offset  # Keep current, mark uncertain
                        entry['esp_certainty'] = 'computed'
                elif delta == 'leave':
                    # LEAVE = MOV ESP, EBP then POP EBP
                    if ebp_frame_value is not None:
                        entry['esp_delta'] = (ebp_frame_value + 4) - esp_offset
                        esp_offset = ebp_frame_value + 4  # Frame restore + POP EBP
                        entry['esp_offset'] = esp_offset
                        entry['esp_certainty'] = 'known'
                        entry['esp_frame_restore'] = True
                    else:
                        # No frame pointer - estimate LEAVE as +4 (just the POP EBP effect)
                        entry['esp_delta'] = 4
                        esp_offset += 4
                        entry['esp_offset'] = esp_offset
                        entry['esp_certainty'] = 'computed'
                else:
                    # For CALL instructions: the -4 for pushing return address is immediately
                    # followed by the callee's RET which pops it (+4). Net effect on ESP after
                    # the call returns is 0. We track this by adding delta, then +4 for RET.
                    entry['esp_delta'] = delta
                    esp_offset += delta
                    if _is_call(mnemonic):
                        esp_offset += 4
                    entry['esp_offset'] = esp_offset
                    entry['esp_certainty'] = certainty

                # After RET/RETN or unconditional JMP, the next instruction in address
                # order is NOT a continuation - it's either dead code or a jump target
                # from elsewhere. Reset ESP tracking to avoid polluting subsequent instructions.
                if mnemonic.upper() in ('RET', 'RETN', 'JMP'):
                    esp_tracking_lost = True
                    lost_at_addr = addr
        result.append(entry)
    return result


# The marker after [ESP:...] for each certainty; known and unknown get none.
_CERTAINTY_MARKERS = {
    'computed': "?",
    'cfg_resolved': "~",
    'conflict': "!?",
    'ebp_frame_conflict': "~!",
    'frame_recovered': "~>",
    'unreachable': "??",
    'lost': "!!",
}


def generate_pcode_file_content(func_name, func_addr, func_signature, pcode_data,
                                 has_badspacebase=False, include_esp_tracking=True):
    """Generate the content of a .pcode file.

    Args:
        func_name: Function name
        func_addr: Function entry address
        func_signature: Function signature string
        pcode_data: List from extract_function_pcode()
        has_badspacebase: Whether function has BADSPACEBASE errors
        include_esp_tracking: Whether to include ESP tracking annotations

    Returns:
        File content as string
    """
    lines = []

    # Check if we have ESP tracking data
    has_esp_data = pcode_data and 'esp_offset' in pcode_data[0]

    # Header
    lines.append("# " + "=" * 76)
    lines.append("# Function P-code Export")
    lines.append("# " + "=" * 76)
    lines.append("#")
    lines.append("# Function:    %s" % func_name)
    lines.append("# Entry:       %s" % func_addr)
    lines.append("# Signature:   %s" % func_signature)
    if has_badspacebase:
        lines.append("# WARNING:     Contains BADSPACEBASE errors!")
    lines.append("#")
    if include_esp_tracking and has_esp_data:
        lines.append("# Format: @<address> [ESP:offset] # <assembly>")
        lines.append("#         [ESP:offset] = cumulative ESP delta from function entry")
        lines.append("#         Delta markers: (+n) ESP increased, (-n) ESP decreased")
        lines.append("#         Certainty:  no marker = known, ? = computed, ~ = cfg_resolved")
        lines.append("#                     !! = lost, !? = conflict, ?? = unreachable")
        lines.append("#                     ~! = ebp_frame_conflict (expected in EBP-frame functions)")
        lines.append("#                     ~> = frame_recovered (ESP recovered after frame reset)")
    else:
        lines.append("# Format: @<address>  # <assembly>")
    # lines.append("#         OPCODE (output) = (input1), (input2), ...")
    # lines.append("#")
    # lines.append("# Varnode: (space, offset, size)")
    # lines.append("#   Spaces: register, const, unique, ram, stack")
    # lines.append("#")
    # lines.append("# x86 Registers: EAX=0x0, ECX=0x4, EDX=0x8, EBX=0xc")
    # lines.append("#                ESP=0x10, EBP=0x14, ESI=0x18, EDI=0x1c")
    # lines.append("#")
    # lines.append("# To use as patch file:")
    # lines.append("#   1. Copy to ~/.ghidra_pcode_patches/func_%s.pcode" % func_addr)
    # lines.append("#   2. Edit instructions that need fixing (e.g., ESP -> EBP)")
    # lines.append("#   3. Remove unchanged instruction blocks (only keep patches)")
    # lines.append("#   4. Re-decompile the function")
    lines.append("#")
    lines.append("# " + "=" * 76)
    lines.append("")

    # P-code for each instruction
    total_pcode = 0
    uncertain_esp_count = 0
    for entry in pcode_data:

        # Build ESP tracking annotation
        esp_annotation = ""
        if include_esp_tracking and has_esp_data and 'esp_offset' in entry:
            offset = entry.get('esp_offset')
            delta = entry.get('esp_delta', 0)
            certainty = entry.get('esp_certainty', 'unknown')

            # Format offset (None = lost tracking)
            if offset is None:
                esp_str = "[ESP:???]"
            else:
                esp_str = "[ESP:%+d]" % offset

            # Add delta indicator for non-zero deltas
            if delta != 0:
                esp_str += "(%+d)" % delta

            # Certainty marker. An ebp_frame_conflict is expected in EBP-frame
            # functions, so only conflict and lost count as uncertain.
            esp_str += _CERTAINTY_MARKERS.get(certainty, "")
            if certainty in ('conflict', 'lost'):
                uncertain_esp_count += 1
            esp_annotation = " " + esp_str
        lines.append("@%s%s  # %s" % (entry['address'], esp_annotation, entry['assembly']))
        if entry['pcode']:
            for pcode_line in entry['pcode']:
                lines.append(pcode_line)
                total_pcode += 1
        else:
            lines.append("# (no p-code)")
        lines.append("")

    # Footer
    lines.append("# " + "=" * 76)
    lines.append("# Summary: %d instructions, %d P-code ops" % (len(pcode_data), total_pcode))
    if uncertain_esp_count > 0:
        lines.append("# ESP Warning: Tracking lost after instruction (marked with !!)")
    lines.append("# " + "=" * 76)
    return "\n".join(lines)


def create_pcode_summary(pcode_data):
    """Create summary statistics for P-code.

    Args:
        pcode_data: List from extract_function_pcode()

    Returns:
        Dictionary with summary stats
    """
    total_instructions = len(pcode_data)
    total_pcode_ops = sum(entry['pcode_count'] for entry in pcode_data)
    opcode_counts = {}
    for entry in pcode_data:
        for pcode_line in entry['pcode']:
            opcode = pcode_line.split()[0] if pcode_line else "UNKNOWN"
            opcode_counts[opcode] = opcode_counts.get(opcode, 0) + 1
    return {
        'instruction_count': total_instructions,
        'pcode_op_count': total_pcode_ops,
        'avg_pcode_per_instr': total_pcode_ops / total_instructions if total_instructions > 0 else 0,
        'opcode_distribution': opcode_counts
    }


# =============================================================================
# CFG-aware ESP tracking
# =============================================================================

def _parse_jump_target(assembly):
    """Extract jump target address from assembly instruction.

    Args:
        assembly: Assembly string like "JZ 0x005447b9" or "JMP 0x00431a18"

    Returns:
        Target address as string (lowercase, no 0x prefix), or None if not found
    """
    # Match jump instructions with hex target
    match = re.search(r'\b(J\w+|CALL)\s+(?:0x)?([0-9a-fA-F]+)\b', assembly, re.IGNORECASE)
    if match:
        return match.group(2).lower().zfill(8)
    return None


def _is_conditional_branch(mnemonic):
    """Check if instruction is a conditional branch."""
    m = mnemonic.upper()
    # All conditional jumps start with J but not JMP
    return m.startswith('J') and m != 'JMP'


def _is_unconditional_jump(mnemonic):
    """Check if instruction is an unconditional jump."""
    return mnemonic.upper() == 'JMP'


def _is_return(mnemonic):
    """Check if instruction is a return."""
    return mnemonic.upper() in ('RET', 'RETN')


def _is_call(mnemonic):
    """Check if instruction is a call."""
    return 'CALL' in mnemonic.upper()


def _get_callind_cleanup(assembly, func_conventions, func_globals):
    """Get stdcall cleanup bytes for an indirect call.

    For indirect calls (CALLIND), looks up the function pointer address in globals,
    gets its type (e.g., 'joyGetPosEx*'), strips the '*' to get the function
    definition name, and looks up the calling convention.

    Args:
        assembly: The assembly instruction string (e.g., 'CALL dword ptr [0x03f994f4]')
        func_conventions: Dict mapping function def names to {'convention', 'param_bytes'}
        func_globals: List of globals dicts with 'addr', 'type', 'name' keys

    Returns:
        int: Number of bytes callee cleans up (for stdcall), or 0 for cdecl/unknown
    """
    if not func_conventions or not func_globals:
        return 0

    # Extract the memory address from the CALL instruction
    # Patterns: CALL dword ptr [0x03f994f4], CALL dword ptr CS:[0x611408]
    match = re.search(r'\[(?:.*:)?(0x[0-9a-fA-F]+)\]', assembly)
    if not match:
        return 0

    call_addr = match.group(1).lower()
    # Normalize address format (remove 0x, pad to 8 chars)
    call_addr_norm = call_addr.replace('0x', '').zfill(8)

    # Look for this address in globals
    ptr_type = next((g.get('type', '') for g in func_globals
                     if g.get('addr', '').lower().replace('0x', '').zfill(8) == call_addr_norm), None)

    if not ptr_type:
        return 0

    # Strip pointer suffix to get function definition name
    # e.g., 'joyGetPosEx*' -> 'joyGetPosEx'
    func_def_name = ptr_type.rstrip('*').strip()

    # Look up in func_conventions
    if func_def_name not in func_conventions:
        return 0

    conv_info = func_conventions[func_def_name]
    convention = conv_info.get('convention', '')
    param_bytes = conv_info.get('param_bytes', 0)

    # stdcall: callee cleans up parameters
    # Also check for __stdcall, stdcall, WINAPI variants
    if convention and 'stdcall' in convention.lower():
        return param_bytes
    return 0


def apply_cfg_esp_tracking(pcode_data, switch_targets=None, noreturn_addrs=None,
                           func_conventions=None, func_globals=None):
    """Apply CFG-aware ESP tracking to pcode data.

    This improves on linear ESP tracking by following control flow:
    1. Build basic blocks and CFG edges
    2. Propagate ESP values along all paths
    3. At merge points, verify ESP values agree
    4. Update each instruction with computed ESP

    Args:
        pcode_data: List from extract_function_pcode() with linear ESP tracking
        switch_targets: Optional dict mapping switch instruction addresses to
                       lists of target addresses (from switch_tables.json)
        noreturn_addrs: Optional set of function addresses that never return
                       (from functions.json with noreturn=true)
        func_conventions: Optional dict mapping function definition names to
                         {'convention': str, 'param_bytes': int} for CALLIND handling
        func_globals: Optional list of globals dicts with 'addr', 'type', 'name' keys
                     for looking up function pointer types at CALLIND addresses

    Returns:
        Modified pcode_data with improved ESP tracking (modified in place)
    """
    if not pcode_data:
        return pcode_data

    blocks = _build_blocks(pcode_data, switch_targets)
    edges = _block_edges(blocks, pcode_data, switch_targets, noreturn_addrs)

    # EBP frame: the ESP offset at the first MOV EBP, ESP. Conflicts are
    # expected in an EBP-frame function (frame set up in its first 20
    # instructions), and are marked ebp_frame_conflict rather than conflict.
    ebp_frame_value = None
    is_ebp_frame = False
    for idx, entry in enumerate(pcode_data):
        if 'MOV EBP ESP' in ' '.join(entry.get('assembly', '').upper().replace(',', ' ').split()):
            ebp_frame_value = entry.get('esp_offset')
            is_ebp_frame = idx < 20
            break

    def esp_after(entry, esp):
        return _esp_after(entry, esp, ebp_frame_value, func_conventions, func_globals)

    esp_in = _propagate_block_esp(blocks, edges, pcode_data, esp_after)

    # Write each instruction's ESP. A conflict block is unknown until a frame
    # reset to a known frame, after which it is tracked again.
    conflict_type = 'ebp_frame_conflict' if is_ebp_frame else 'conflict'
    for block_addr, indices in blocks.items():
        block_esp = esp_in[block_addr]
        if block_esp is None:
            for idx in indices:
                pcode_data[idx]['esp_offset'] = None
                pcode_data[idx]['esp_certainty'] = 'unreachable'
            continue
        esp = None if block_esp == 'conflict' else block_esp
        for idx in indices:
            entry = pcode_data[idx]
            after = esp_after(entry, esp)
            lost = entry.get('esp_certainty') == 'lost'
            if lost:
                # The linear pass stopped tracking here and left a 0 delta
                delta, _ = _instruction_esp_delta(entry)
                entry['esp_delta'] = delta if isinstance(delta, int) else (
                    after - esp if after is not None and esp is not None else 0)
            entry['esp_offset'] = after
            if after is None:
                entry['esp_certainty'] = conflict_type
            elif block_esp == 'conflict':
                entry['esp_certainty'] = 'frame_recovered'
            elif lost:
                entry['esp_certainty'] = 'cfg_resolved'
            esp = after

    return pcode_data


def _entry_addr(entry):
    """An instruction entry's address, lowercase and 8 digits."""
    return entry['address'].lower().zfill(8)


def _entry_mnemonic(entry):
    """An instruction entry's mnemonic, or '' when it has no assembly."""
    asm = entry.get('assembly')
    return asm.split()[0] if asm else ''


def _instruction_esp_delta(entry):
    """calculate_esp_delta for an entry, from its assembly text."""
    mnemonic, _, operands_str = entry.get('assembly', '').partition(' ')
    return calculate_esp_delta(mnemonic, operands_str, entry.get('pcode', []))


def _switch_case_targets(entry, switch_targets):
    """The case addresses of the jump table an indirect jump (BRANCHIND) uses."""
    if not switch_targets or not any('BRANCHIND' in pl for pl in entry.get('pcode', [])):
        return []
    return [t.lower().zfill(8) for t in switch_targets.get(_entry_addr(entry), [])]


def _build_blocks(pcode_data, switch_targets):
    """Basic blocks: start address -> instruction indices, in address order.

    A block starts at the function entry, at a jump, branch or switch case
    target, and after a branch, jump or return.
    """
    addrs = [_entry_addr(entry) for entry in pcode_data]
    known = set(addrs)
    starts = {addrs[0]}
    for idx, entry in enumerate(pcode_data):
        mnemonic = _entry_mnemonic(entry)
        targets = _switch_case_targets(entry, switch_targets)
        ends_flow = _is_return(mnemonic)
        if _is_conditional_branch(mnemonic) or _is_unconditional_jump(mnemonic):
            targets.append(_parse_jump_target(entry['assembly']))
            ends_flow = True
        starts.update(t for t in targets if t in known)
        if ends_flow and idx + 1 < len(pcode_data):
            starts.add(addrs[idx + 1])

    blocks = {}
    current = None
    for idx, addr in enumerate(addrs):
        if addr in starts:
            current = blocks[addr] = []
        current.append(idx)
    return blocks


def _block_edges(blocks, pcode_data, switch_targets, noreturn_addrs):
    """Each block's successor blocks: its jump/branch target, switch cases and fall-through."""
    edges = {}
    for block_addr, indices in blocks.items():
        last_idx = indices[-1]
        last = pcode_data[last_idx]
        mnemonic = _entry_mnemonic(last)
        targets = []
        if _is_conditional_branch(mnemonic) or _is_unconditional_jump(mnemonic):
            targets.append(_parse_jump_target(last['assembly']))
        targets += _switch_case_targets(last, switch_targets)
        noreturn_call = _is_call(mnemonic) and _parse_jump_target(last['assembly']) in (noreturn_addrs or ())
        falls_through = not (_is_return(mnemonic) or _is_unconditional_jump(mnemonic) or noreturn_call)
        if falls_through and last_idx + 1 < len(pcode_data):
            targets.append(_entry_addr(pcode_data[last_idx + 1]))
        edges[block_addr] = [t for t in targets if t in blocks]
    return edges


def _esp_after(entry, esp, ebp_frame_value, func_conventions, func_globals):
    """ESP offset after an instruction, given the offset before it (None = unknown).

    Recomputed from the assembly, so it holds where the linear pass lost track
    and left a 0 delta. A frame reset (MOV ESP, EBP / LEAVE) to a known frame
    sets ESP whatever it was before: the linear pass's own value when it
    tracked the reset, else the function's EBP frame. A CALL's return address
    is popped again by the callee's RET, plus the parameters a stdcall
    function pointer's callee cleans up.
    """
    delta, _ = _instruction_esp_delta(entry)
    if delta in ('frame_reset', 'leave'):
        if entry.get('esp_frame_restore'):
            return entry['esp_offset']
        if ebp_frame_value is not None:
            return ebp_frame_value + (4 if delta == 'leave' else 0)
        # No known frame: LEAVE still pops EBP, MOV ESP, EBP is unknown
        delta = 4 if delta == 'leave' else 0
    if esp is None:
        return None
    esp += delta
    mnemonic = _entry_mnemonic(entry)
    if _is_call(mnemonic):
        esp += 4 + _get_callind_cleanup(entry.get('assembly', ''), func_conventions, func_globals)
    return esp


def _propagate_block_esp(blocks, edges, pcode_data, esp_after):
    """ESP at each block's entry: an offset, 'conflict', or None (unreached).

    The function entry is 0. Each block's exit offset flows to its successors;
    two paths arriving with different offsets make a conflict, and a conflict
    spreads only to blocks no known path reaches. A self-loop is skipped: a
    loop body's push/call/cleanup balances out per iteration.
    """
    esp_in = dict.fromkeys(blocks)
    esp_in[next(iter(blocks))] = 0
    exits = {}

    def block_exit(block_addr):
        if block_addr not in exits:
            esp = esp_in[block_addr]
            for idx in blocks[block_addr]:
                esp = esp_after(pcode_data[idx], esp)
            exits[block_addr] = esp
        return exits[block_addr]

    changed = True
    while changed:
        changed = False
        for block_addr in blocks:
            block_esp = esp_in[block_addr]
            if block_esp is None:
                continue
            esp_out = 'conflict' if block_esp == 'conflict' else block_exit(block_addr)
            for target in edges[block_addr]:
                target_esp = esp_in[target]
                if target == block_addr or target_esp in (esp_out, 'conflict'):
                    continue
                if target_esp is None:
                    esp_in[target] = esp_out
                elif esp_out != 'conflict':
                    esp_in[target] = 'conflict'
                else:
                    continue
                changed = True
    return esp_in
