# Assembly code generation for pseudocode export
# Provides assembly code extraction with rich annotations

# The control-flow references that get an XREF line under their instruction
XREF_FLOW_TYPES = ("UNCONDITIONAL_CALL", "CONDITIONAL_CALL", "UNCONDITIONAL_JUMP", "CONDITIONAL_JUMP")


def build_global_symbols_map(symbol_table):
    """Build a map of addresses to global symbol information.

    Args:
        symbol_table: The program's symbol table

    Returns:
        Dictionary mapping address strings to symbol info (name, address)
    """
    global_symbols = {}
    for symbol in symbol_table.getAllSymbols(True):
        sym_type = symbol.getSymbolType()
        if sym_type is not None and sym_type.toString() == "Label":
            addr = symbol.getAddress()
            global_symbols[str(addr).lower()] = {
                'name': symbol.getName(),
                'address': addr
            }
    return global_symbols


def _call_signature(function_manager, instr, line, eol_comments):
    """Name a CALL's target: its signature goes to the comments and its name
    replaces the target's address in the line, which is returned."""
    for i in range(instr.getNumOperands()):
        ref_addr = instr.getAddress(i)
        target_func = function_manager.getFunctionAt(ref_addr) if ref_addr else None
        if target_func:
            func_name = target_func.getName()
            params = target_func.getParameters()
            param_strs = ["%s %s" % (p.getDataType().getName(), p.getName()) for p in params[:4]]
            if len(params) > 4:
                param_strs.append("...")
            eol_comments.append("%s %s(%s)" % (target_func.getReturnType().getName(), func_name,
                                                ", ".join(param_strs)))
            return line.replace("0x%s" % ref_addr, func_name)
    return line


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

    for instr in list(program_listing.getInstructions(func.getBody(), True)):
        addr = instr.getAddress()
        line = "// %s: %s" % (addr, instr)
        eol_comments = []

        # Name the target of a call
        if instr.getMnemonicString() == "CALL":
            line = _call_signature(function_manager, instr, line, eol_comments)

        # Memory references: the first string, then globals while there is room
        has_string_comment = False
        for ref in reference_manager.getReferencesFrom(addr):
            to_addr = ref.getToAddress()
            to_addr_hex = "%08x" % to_addr.getOffset()

            if not has_string_comment and to_addr_hex in string_map:
                string_val = string_map[to_addr_hex]
                if len(string_val) > 40:
                    string_val = string_val[:37] + "..."
                eol_comments.append('= "%s"' % string_val)
                has_string_comment = True
            elif len(eol_comments) < 3:
                symbol_info = global_symbols.get(str(to_addr).lower())
                if symbol_info and not any(symbol_info['name'] in c for c in eol_comments):
                    eol_comments.append(symbol_info['name'])

            ref_type = str(ref.getReferenceType())
            if ref_type in XREF_FLOW_TYPES:
                line += "\n//   XREF to: %s (%s)" % (to_addr, ref_type)

        # End-of-line comments, first three distinct
        if eol_comments:
            line += "  ; " + " | ".join(list(dict.fromkeys(eol_comments))[:3])

        symbol = symbol_table.getPrimarySymbol(addr)
        if symbol:
            line += "\n//   Label: %s" % symbol.getName()

        asm_lines.append(line + "\n")
    return "".join(asm_lines)
