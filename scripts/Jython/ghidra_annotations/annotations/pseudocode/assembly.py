# Assembly code generation for pseudocode export
# Provides assembly code extraction with rich annotations

from ghidra.program.model.lang import OperandType


def build_global_symbols_map(symbol_table):
    """Build a map of addresses to global symbol information.

    Args:
        symbol_table: The program's symbol table

    Returns:
        Dictionary mapping address strings to symbol info (name, address)
    """
    global_symbols = {}
    label_type_str = "Label"
    for symbol in symbol_table.getAllSymbols(True):
        sym_type = symbol.getSymbolType()
        if sym_type is not None and sym_type.toString() == label_type_str:
            addr = symbol.getAddress()
            addr_str = str(addr).lower()
            global_symbols[addr_str] = {
                'name': symbol.getName(),
                'address': addr
            }
    return global_symbols


def generate_assembly_code_rich(currentProgram, func, symbol_table, reference_manager,
                                 program_listing, string_map, global_symbols):
    """Generate richly annotated assembly code for a function.

    Args:
        currentProgram: The Ghidra program
        func: The function to process
        symbol_table: The program's symbol table
        reference_manager: The program's reference manager
        program_listing: The program's listing
        string_map: Map of addresses to string values
        global_symbols: Map of addresses to global symbol info

    Returns:
        Assembly code as a string with rich annotations
    """
    function_manager = currentProgram.getFunctionManager()
    asm_lines = []

    # Pre-fetch instructions into a list to avoid repeated iterator overhead
    instructions = list(program_listing.getInstructions(func.getBody(), True))
    for instr in instructions:
        addr = instr.getAddress()
        mnemonic = instr.getMnemonicString()
        instr_str = str(instr)

        line = "// %s: %s" % (addr, instr_str)
        eol_comments = []

        # Cache operand count to avoid repeated calls
        num_operands = instr.getNumOperands()

        # Process each operand for context (only for CALL instructions to reduce overhead)
        is_call = mnemonic == "CALL"
        if is_call and num_operands > 0:
            for i in range(num_operands):
                try:
                    ref_addr = instr.getAddress(i)
                    if ref_addr:
                        target_func = function_manager.getFunctionAt(ref_addr)
                        if target_func:
                            func_name = target_func.getName()
                            ret_type = target_func.getReturnType()
                            params = target_func.getParameters()
                            param_strs = ["%s %s" % (p.getDataType().getName(), p.getName()) for p in params[:4]]
                            if len(params) > 4:
                                param_strs.append("...")
                            sig = "%s %s(%s)" % (ret_type.getName(), func_name, ", ".join(param_strs))
                            eol_comments.append(sig)
                            addr_hex = "0x%s" % ref_addr
                            if addr_hex in line:
                                line = line.replace(addr_hex, func_name)
                            break  # Found the call target, no need to check other operands
                except:
                    pass

        # Check for memory references (strings and globals) - batch process
        refs_from = reference_manager.getReferencesFrom(addr)
        has_string_comment = False
        for ref in refs_from:
            to_addr = ref.getToAddress()
            to_addr_hex = "%08x" % to_addr.getOffset()

            # Check for string references
            if not has_string_comment and to_addr_hex in string_map:
                string_val = string_map[to_addr_hex]
                if len(string_val) > 40:
                    string_val = string_val[:37] + "..."
                eol_comments.append('= "%s"' % string_val)
                has_string_comment = True

            # Check for global references (skip if we already have too many comments)
            elif len(eol_comments) < 3:
                to_addr_str = str(to_addr).lower()
                if to_addr_str in global_symbols:
                    global_name = global_symbols[to_addr_str]['name']
                    if not any(global_name in c for c in eol_comments):
                        eol_comments.append(global_name)

            # Add XREF annotations for control flow
            ref_type = str(ref.getReferenceType())
            if ref_type in ("UNCONDITIONAL_CALL", "CONDITIONAL_CALL", "UNCONDITIONAL_JUMP", "CONDITIONAL_JUMP"):
                line += "\n//   XREF to: %s (%s)" % (ref.getToAddress(), ref_type)

        # Add end-of-line comments
        if eol_comments:
            seen = set()
            unique_comments = []
            for c in eol_comments:
                if c not in seen:
                    unique_comments.append(c)
                    seen.add(c)
            line += "  ; " + " | ".join(unique_comments[:3])

        # Check for labels (only if there's a symbol)
        symbol = symbol_table.getPrimarySymbol(addr)
        if symbol:
            sym_name = symbol.getName()
            if sym_name != instr_str:
                line += "\n//   Label: %s" % sym_name

        asm_lines.append(line + "\n")
    return "".join(asm_lines)


def generate_assembly_code(func, symbol_table, reference_manager, program_listing):
    """Generate basic assembly code for a function (without rich annotations).

    Args:
        func: The function to process
        symbol_table: The program's symbol table
        reference_manager: The program's reference manager
        program_listing: The program's listing

    Returns:
        Assembly code as a string
    """
    asm_lines = []
    for instr in program_listing.getInstructions(func.getBody(), True):
        addr = instr.getAddress()
        instr_str = str(instr)

        line = "// %s: %s" % (addr, instr_str)

        if instr.getMnemonicString() == "CALL":
            for i in range(instr.getNumOperands()):
                operand_type = instr.getOperandType(i)
                if operand_type & OperandType.ADDRESS:
                    target_addr = instr.getAddress(i)
                    if target_addr:
                        target_sym = symbol_table.getPrimarySymbol(target_addr)
                        if target_sym:
                            symbol_name = target_sym.getName()
                            addr_str = "0x%s" % target_addr
                            if addr_str in line:
                                line = line.replace(addr_str, symbol_name)

        symbol = symbol_table.getPrimarySymbol(addr)
        if symbol and symbol.getName() != instr.toString():
            line += "\n//   Label: %s" % symbol.getName()

        refs_from = reference_manager.getReferencesFrom(addr)
        for ref in refs_from:
            line += "\n//   XREF to: %s (%s)" % (ref.getToAddress(), ref.getReferenceType())

        asm_lines.append(line + "\n")
    return "".join(asm_lines)
