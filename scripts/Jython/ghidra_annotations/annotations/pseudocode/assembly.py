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
    for symbol in symbol_table.getAllSymbols(True):
        if symbol.getSymbolType().toString() == "Label":
            addr_str = str(symbol.getAddress()).lower()
            global_symbols[addr_str] = {
                'name': symbol.getName(),
                'address': symbol.getAddress()
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
    for instr in program_listing.getInstructions(func.getBody(), True):
        addr = instr.getAddress()
        mnemonic = instr.getMnemonicString()
        instr_str = str(instr)

        line = "// %s: %s" % (addr, instr_str)
        eol_comments = []

        # Process each operand for context
        for i in range(instr.getNumOperands()):
            operand_type = instr.getOperandType(i)
            operand_repr = instr.getDefaultOperandRepresentation(i)

            ref_addr = None
            try:
                ref_addr = instr.getAddress(i)
            except:
                pass
            if ref_addr:
                ref_addr_str = str(ref_addr).lower()
                ref_addr_hex = "%08x" % ref_addr.getOffset()

                if ref_addr_hex in string_map:
                    string_val = string_map[ref_addr_hex]
                    if len(string_val) > 40:
                        string_val = string_val[:37] + "..."
                    eol_comments.append('= "%s"' % string_val)

                elif ref_addr_str in global_symbols:
                    global_name = global_symbols[ref_addr_str]['name']
                    data_at = program_listing.getDefinedDataAt(ref_addr)
                    if data_at:
                        data_type = data_at.getDataType()
                        eol_comments.append('%s %s' % (data_type.getName(), global_name))
                    else:
                        eol_comments.append(global_name)

                elif mnemonic == "CALL":
                    target_func = function_manager.getFunctionAt(ref_addr)
                    if target_func:
                        ret_type = target_func.getReturnType()
                        func_name = target_func.getName()
                        params = target_func.getParameters()
                        param_strs = []
                        for param in params[:4]:
                            param_strs.append("%s %s" % (param.getDataType().getName(), param.getName()))
                        if len(params) > 4:
                            param_strs.append("...")
                        sig = "%s %s(%s)" % (ret_type.getName(), func_name, ", ".join(param_strs))
                        eol_comments.append(sig)
                        addr_hex = "0x%s" % ref_addr
                        if addr_hex in line:
                            line = line.replace(addr_hex, func_name)

        # Check for memory references that might be globals
        refs_from = reference_manager.getReferencesFrom(addr)
        for ref in refs_from:
            to_addr = ref.getToAddress()
            to_addr_str = str(to_addr).lower()
            to_addr_hex = "%08x" % to_addr.getOffset()

            if to_addr_hex in string_map and not any('= "' in c for c in eol_comments):
                string_val = string_map[to_addr_hex]
                if len(string_val) > 40:
                    string_val = string_val[:37] + "..."
                eol_comments.append('= "%s"' % string_val)

            elif to_addr_str in global_symbols:
                global_name = global_symbols[to_addr_str]['name']
                if not any(global_name in c for c in eol_comments):
                    data_at = program_listing.getDefinedDataAt(to_addr)
                    if data_at:
                        try:
                            value = data_at.getValue()
                            if value is not None:
                                eol_comments.append('%s = %s' % (global_name, str(value)))
                            else:
                                eol_comments.append(global_name)
                        except:
                            eol_comments.append(global_name)

        if eol_comments:
            unique_comments = []
            seen = set()
            for c in eol_comments:
                if c not in seen:
                    unique_comments.append(c)
                    seen.add(c)
            line += "  ; " + " | ".join(unique_comments[:3])

        symbol = symbol_table.getPrimarySymbol(addr)
        if symbol and symbol.getName() != instr.toString():
            line += "\n//   Label: %s" % symbol.getName()

        for ref in refs_from:
            ref_type = str(ref.getReferenceType())
            if ref_type in ("UNCONDITIONAL_CALL", "CONDITIONAL_CALL", "UNCONDITIONAL_JUMP", "CONDITIONAL_JUMP"):
                line += "\n//   XREF to: %s (%s)" % (ref.getToAddress(), ref_type)

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
