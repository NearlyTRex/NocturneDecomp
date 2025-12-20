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

    # Check for LEAVE instruction (reverses ENTER)
    if mnemonic_upper == 'LEAVE':
        return (0, 'computed')  # MOV ESP, EBP then POP EBP - net effect depends on frame
    return (0, 'unknown')


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
            if esp_tracking_lost:
                entry['esp_delta'] = 0
                entry['esp_offset'] = None
                entry['esp_certainty'] = 'lost'
                entry['esp_lost_at'] = lost_at_addr
            else:
                delta, certainty = calculate_esp_delta(mnemonic, operands_str, pcode_lines)

                # Check if this is a CALL and we might lose tracking
                # For indirect calls (vtable calls) or unknown functions, mark as potentially lost
                is_indirect_call = 'CALL' in mnemonic.upper() and (
                    operands_str.startswith('[') or
                    operands_str.startswith('dword ptr') or
                    any('CALLIND' in pl for pl in pcode_lines)
                )
                entry['esp_delta'] = delta
                esp_offset += delta
                entry['esp_offset'] = esp_offset
                if certainty == 'unknown' and delta == 0:

                    # Unknown change - might have lost tracking
                    if is_indirect_call:
                        entry['esp_certainty'] = 'callind_unknown'
                    else:
                        entry['esp_certainty'] = certainty
                else:
                    entry['esp_certainty'] = certainty
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
        lines.append("#         Certainty:  no marker = known, ? = computed, ?? = unknown, ! = CALLIND")
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
