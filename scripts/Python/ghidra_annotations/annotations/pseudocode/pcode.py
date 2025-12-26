# P-code extraction and formatting for pseudocode export
# Provides raw P-code generation for each instruction in a function

from ghidra_annotations.util.log import log_info
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

    # Handle SUB ESP, imm / ADD ESP, imm
    if mnemonic_upper == 'SUB' and operands_str:
        parts = [p.strip() for p in operands_str.split(',')]
        if len(parts) == 2 and parts[0].upper() == 'ESP':
            try:
                val = int(parts[1], 0)  # Parse hex or decimal
                return (-val, 'computed')
            except:
                pass
    if mnemonic_upper == 'ADD' and operands_str:
        parts = [p.strip() for p in operands_str.split(',')]
        if len(parts) == 2 and parts[0].upper() == 'ESP':
            try:
                val = int(parts[1], 0)
                return (+val, 'computed')
            except:
                pass

    # Check for ENTER instruction
    if mnemonic_upper == 'ENTER' and operands_str:
        parts = [p.strip() for p in operands_str.split(',')]
        if len(parts) >= 1:
            try:
                size = int(parts[0], 0)
                return (-4 - size, 'computed')  # PUSH EBP + allocate
            except:
                pass

    # Check for LEAVE instruction (MOV ESP, EBP then POP EBP)
    # Returns special marker - actual ESP handled by frame tracking
    if mnemonic_upper == 'LEAVE':
        return ('leave', 'frame_restore')

    # Check for MOV ESP, EBP (frame pointer restore)
    if mnemonic_upper == 'MOV' and operands_str:
        parts = [p.strip() for p in operands_str.split(',')]
        if len(parts) == 2 and parts[0].upper() == 'ESP' and parts[1].upper() == 'EBP':
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
                    # Normal delta handling
                    # Check if this is a CALL and we might lose tracking
                    # For indirect calls (vtable calls) or unknown functions, mark as potentially lost
                    is_indirect_call = 'CALL' in mnemonic.upper() and (
                        operands_str.startswith('[') or
                        operands_str.startswith('dword ptr') or
                        any('CALLIND' in pl for pl in pcode_lines)
                    )
                    is_any_call = 'CALL' in mnemonic.upper() and not mnemonic.upper().startswith('CALLIND')

                    # For CALL instructions: the -4 for pushing return address is immediately
                    # followed by the callee's RET which pops it (+4). Net effect on ESP after
                    # the call returns is 0. We track this by adding delta, then +4 for RET.
                    entry['esp_delta'] = delta
                    esp_offset += delta
                    if is_any_call or is_indirect_call:
                        # Account for callee's RET popping the return address
                        esp_offset += 4
                    entry['esp_offset'] = esp_offset
                    if certainty == 'unknown' and delta == 0:

                        # Unknown change - might have lost tracking
                        if is_indirect_call:
                            entry['esp_certainty'] = 'callind_unknown'
                        else:
                            entry['esp_certainty'] = certainty
                    else:
                        entry['esp_certainty'] = certainty

                # After RET/RETN or unconditional JMP, the next instruction in address
                # order is NOT a continuation - it's either dead code or a jump target
                # from elsewhere. Reset ESP tracking to avoid polluting subsequent instructions.
                if mnemonic.upper() in ('RET', 'RETN', 'JMP'):
                    esp_tracking_lost = True
                    lost_at_addr = addr
        result.append(entry)
    return result


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
    callind_count = 0
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

            # Add certainty marker
            if certainty == 'callind_unknown':
                esp_str += "!"
                callind_count += 1
            elif certainty == 'computed':
                esp_str += "?"
            elif certainty == 'cfg_resolved':
                esp_str += "~"
            elif certainty == 'conflict':
                esp_str += "!?"
                uncertain_esp_count += 1
            elif certainty == 'unreachable':
                esp_str += "??"
            elif certainty == 'unknown' and delta == 0:
                # Don't mark simple instructions with no ESP effect
                pass
            elif certainty == 'lost':
                esp_str += "!!"
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
    if include_esp_tracking and has_esp_data:
        if callind_count > 0:
            lines.append("# ESP Warning: %d indirect call(s) with unknown stack cleanup" % callind_count)
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


def apply_cfg_esp_tracking(pcode_data):
    """Apply CFG-aware ESP tracking to pcode data.

    This improves on linear ESP tracking by following control flow:
    1. Build basic blocks and CFG edges
    2. Propagate ESP values along all paths
    3. At merge points, verify ESP values agree
    4. Update each instruction with computed ESP

    Args:
        pcode_data: List from extract_function_pcode() with linear ESP tracking

    Returns:
        Modified pcode_data with improved ESP tracking (modified in place)
    """
    if not pcode_data:
        return pcode_data

    # Build address -> index mapping
    addr_to_idx = {}
    for idx, entry in enumerate(pcode_data):
        addr = entry['address'].lower().zfill(8)
        addr_to_idx[addr] = idx

    # Step 1: Identify basic block boundaries
    # A block starts at: function entry, jump target, instruction after branch/jump/ret
    # A block ends at: branch, jump, ret, or before a jump target
    block_starts = set()
    block_starts.add(pcode_data[0]['address'].lower().zfill(8))  # Function entry

    for idx, entry in enumerate(pcode_data):
        mnemonic = entry['assembly'].split()[0] if entry['assembly'] else ''
        addr = entry['address'].lower().zfill(8)

        # Check for jump targets
        if _is_conditional_branch(mnemonic) or _is_unconditional_jump(mnemonic):
            target = _parse_jump_target(entry['assembly'])
            if target and target in addr_to_idx:
                block_starts.add(target)
            # Instruction after branch is also a block start (fall-through target)
            if idx + 1 < len(pcode_data):
                next_addr = pcode_data[idx + 1]['address'].lower().zfill(8)
                block_starts.add(next_addr)

        # Instruction after RET is a block start (only reachable by jumps)
        if _is_return(mnemonic) and idx + 1 < len(pcode_data):
            next_addr = pcode_data[idx + 1]['address'].lower().zfill(8)
            block_starts.add(next_addr)

    # Step 2: Build basic blocks
    # Each block is a list of instruction indices
    blocks = {}  # block_start_addr -> [indices]
    current_block_start = None
    current_block = []

    for idx, entry in enumerate(pcode_data):
        addr = entry['address'].lower().zfill(8)

        if addr in block_starts:
            # Save previous block
            if current_block_start is not None and current_block:
                blocks[current_block_start] = current_block
            # Start new block
            current_block_start = addr
            current_block = [idx]
        else:
            current_block.append(idx)

    # Save last block
    if current_block_start is not None and current_block:
        blocks[current_block_start] = current_block

    # Step 3: Build CFG edges
    # edges[block_addr] = [(target_addr, edge_type), ...]
    edges = {addr: [] for addr in blocks}

    for block_addr, indices in blocks.items():
        if not indices:
            continue
        last_idx = indices[-1]
        last_entry = pcode_data[last_idx]
        mnemonic = last_entry['assembly'].split()[0] if last_entry['assembly'] else ''
        last_addr = last_entry['address'].lower().zfill(8)

        if _is_return(mnemonic):
            # No outgoing edges from RET
            pass
        elif _is_unconditional_jump(mnemonic):
            # Only jump edge, no fall-through
            target = _parse_jump_target(last_entry['assembly'])
            if target and target in blocks:
                edges[block_addr].append((target, 'jump'))
        elif _is_conditional_branch(mnemonic):
            # Both jump edge and fall-through edge
            target = _parse_jump_target(last_entry['assembly'])
            if target and target in blocks:
                edges[block_addr].append((target, 'branch_taken'))
            # Fall-through
            if last_idx + 1 < len(pcode_data):
                next_addr = pcode_data[last_idx + 1]['address'].lower().zfill(8)
                if next_addr in blocks:
                    edges[block_addr].append((next_addr, 'fall_through'))
        else:
            # Regular instruction - fall through to next block if exists
            if last_idx + 1 < len(pcode_data):
                next_addr = pcode_data[last_idx + 1]['address'].lower().zfill(8)
                if next_addr in blocks:
                    edges[block_addr].append((next_addr, 'fall_through'))

    # Step 4: Compute ESP at start of each block using dataflow analysis
    # esp_in[block_addr] = ESP value at block entry (None = unknown/conflict)
    entry_addr = pcode_data[0]['address'].lower().zfill(8)
    esp_in = {addr: None for addr in blocks}
    esp_in[entry_addr] = 0  # ESP is 0 at function entry

    # Track EBP frame pointer value (ESP when MOV EBP, ESP was executed)
    # We detect this by scanning for the frame setup instruction
    ebp_frame_value = None
    for entry in pcode_data:
        asm = entry.get('assembly', '')
        if 'MOV EBP, ESP' in asm.upper().replace(',', ', '):
            # Found frame setup - EBP was set to this ESP value
            ebp_frame_value = entry.get('esp_offset')
            break

    # Compute ESP delta for each block, handling frame resets
    def compute_block_esp_delta(block_indices):
        """Compute total ESP delta for a basic block.

        Returns tuple of (delta, has_frame_reset, frame_reset_esp)
        - delta: cumulative ESP change (only valid if no frame reset)
        - has_frame_reset: True if block contains MOV ESP, EBP or LEAVE
        - frame_reset_esp: ESP value after frame reset (if has_frame_reset)
        """
        total_delta = 0
        has_frame_reset = False
        frame_reset_esp = None

        for idx in block_indices:
            entry = pcode_data[idx]
            asm = entry.get('assembly', '')
            mnemonic = asm.split()[0] if asm else ''
            delta = entry.get('esp_delta', 0)

            # Check for frame reset instructions
            if entry.get('esp_frame_restore'):
                # This instruction resets ESP to frame pointer
                has_frame_reset = True
                frame_reset_esp = entry.get('esp_offset')
                total_delta = 0  # Reset delta after frame restore
            elif isinstance(delta, int):
                total_delta += delta

            # Account for CALL's return address being popped by callee
            if _is_call(mnemonic):
                total_delta += 4  # Callee's RET pops the return address

        return (total_delta, has_frame_reset, frame_reset_esp)

    block_info = {addr: compute_block_esp_delta(indices) for addr, indices in blocks.items()}

    # Iterative dataflow: propagate ESP values until stable
    max_iterations = len(blocks) + 10  # Prevent infinite loops
    changed = True
    iteration = 0

    while changed and iteration < max_iterations:
        changed = False
        iteration += 1

        for block_addr in blocks:
            block_esp = esp_in[block_addr]
            if not isinstance(block_esp, int) and block_addr != entry_addr:
                continue  # Can't propagate from unknown or conflict

            # Compute ESP at block exit
            if isinstance(block_esp, int):
                delta, has_frame_reset, frame_reset_esp = block_info[block_addr]

                # If block contains frame reset (MOV ESP, EBP or LEAVE), use that value
                if has_frame_reset and frame_reset_esp is not None:
                    esp_out = frame_reset_esp
                else:
                    esp_out = block_esp + delta

                # Propagate to successors
                for target_addr, edge_type in edges[block_addr]:
                    target_esp = esp_in[target_addr]
                    if target_esp is None:
                        esp_in[target_addr] = esp_out
                        changed = True
                    elif isinstance(target_esp, int) and target_esp != esp_out:
                        # Conflict! Different paths have different ESP values
                        # This could be a bug in analysis or unusual code
                        # Mark as conflict by setting to special value
                        esp_in[target_addr] = 'conflict'
                        changed = True

    # Step 5: Update each instruction with computed ESP
    for block_addr, indices in blocks.items():
        block_esp = esp_in[block_addr]

        if block_esp == 'conflict':
            # Mark all instructions in this block as having ESP conflict
            for idx in indices:
                pcode_data[idx]['esp_offset'] = None
                pcode_data[idx]['esp_certainty'] = 'conflict'
        elif block_esp is None:
            # Unreachable block - no paths lead here
            for idx in indices:
                pcode_data[idx]['esp_offset'] = None
                pcode_data[idx]['esp_certainty'] = 'unreachable'
        else:
            # Valid ESP - compute for each instruction in block
            running_esp = block_esp
            for idx in indices:
                entry = pcode_data[idx]
                asm = entry.get('assembly', '')
                mnemonic = asm.split()[0] if asm else ''
                # Get operands for recalculating delta
                operands_str = ''
                if ' ' in asm:
                    operands_str = asm.split(' ', 1)[1]

                # Check if we need to recompute delta (for instructions that had lost tracking)
                orig_certainty = entry.get('esp_certainty', 'unknown')
                if orig_certainty in ('lost', 'unreachable', 'conflict'):
                    # Recompute delta from instruction
                    delta, _ = calculate_esp_delta(mnemonic, operands_str, entry.get('pcode', []))
                    if delta == 'frame_reset' and ebp_frame_value is not None:
                        delta = ebp_frame_value - running_esp
                    elif delta == 'leave' and ebp_frame_value is not None:
                        delta = (ebp_frame_value + 4) - running_esp
                    elif not isinstance(delta, int):
                        delta = 0
                    entry['esp_delta'] = delta
                else:
                    delta = entry.get('esp_delta', 0)

                # Check if this instruction does a frame reset
                if entry.get('esp_frame_restore'):
                    # Frame reset instruction - use the esp_offset computed during
                    # linear pass (which correctly handled MOV ESP, EBP / LEAVE)
                    running_esp = entry.get('esp_offset', running_esp)
                elif isinstance(delta, int):
                    running_esp += delta
                    if _is_call(mnemonic):
                        running_esp += 4  # Callee's RET

                entry['esp_offset'] = running_esp
                # Keep original certainty for known/computed, upgrade lost to cfg_resolved
                if orig_certainty == 'lost':
                    entry['esp_certainty'] = 'cfg_resolved'

    return pcode_data
