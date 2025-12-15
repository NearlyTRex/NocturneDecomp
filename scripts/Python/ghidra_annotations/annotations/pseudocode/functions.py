# Function-related utilities for pseudocode export
# Provides function analysis, cross-references, and metadata extraction

import os
import re
from ghidra_annotations.util import resolve_data_type_name


def get_function_xrefs(currentProgram, function):
    """Get cross-references to a function's entry point.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze

    Returns:
        A list of dictionaries with xref info (name, addr, from_addr, type)
    """
    xrefs = []
    refs_to = currentProgram.getReferenceManager().getReferencesTo(function.getEntryPoint())
    referencing_functions = set()
    for ref in refs_to:
        from_addr = ref.getFromAddress()
        ref_function = currentProgram.getFunctionManager().getFunctionContaining(from_addr)
        if ref_function and ref_function != function:
            func_name = ref_function.getName()
            func_addr = str(ref_function.getEntryPoint())
            ref_type = str(ref.getReferenceType())
            if func_addr not in referencing_functions:
                referencing_functions.add(func_addr)
                xrefs.append({
                    'name': func_name,
                    'addr': func_addr,
                    'from_addr': str(from_addr),
                    'type': ref_type
                })
    xrefs.sort(key=lambda x: x['name'])
    return xrefs


def get_function_globals(currentProgram, function):
    """Get global variables referenced by a function.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze

    Returns:
        A list of dictionaries with global info (type, name, addr, value)
    """
    globals_refs = []
    seen_globals = set()
    function_body = function.getBody()
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()
    func_manager = currentProgram.getFunctionManager()
    symbol_table = currentProgram.getSymbolTable()

    # Iterate through instructions instead of every byte - MUCH faster
    for instr in listing.getInstructions(function_body, True):
        current_addr = instr.getAddress()
        refs = ref_manager.getReferencesFrom(current_addr)

        for ref in refs:
            to_addr = ref.getToAddress()
            to_addr_str = str(to_addr)

            # Skip already seen globals
            if to_addr_str in seen_globals:
                continue

            # Skip internal function addresses
            if function_body.contains(to_addr):
                continue

            # Skip function references (these are calls, not globals)
            if func_manager.getFunctionAt(to_addr):
                continue

            data = listing.getDefinedDataAt(to_addr)
            if data:
                data_type = data.getDataType()
                if data_type:
                    type_name = resolve_data_type_name(currentProgram, data_type)
                    symbol = symbol_table.getPrimarySymbol(to_addr)
                    if symbol:
                        global_name = symbol.getName()
                    else:
                        global_name = "DAT_%s" % to_addr_str.replace("0x", "").upper()

                    initializer_value = None
                    try:
                        if data.hasStringValue():
                            pass
                        elif data_type.getName() in ['undefined', 'undefined1', 'undefined2', 'undefined4', 'undefined8']:
                            pass
                        else:
                            value = data.getValue()
                            if value is not None:
                                initializer_value = str(value)
                    except:
                        pass
                    globals_refs.append({
                        'type': type_name,
                        'name': global_name,
                        'addr': to_addr_str,
                        'value': initializer_value
                    })
                    seen_globals.add(to_addr_str)

            else:
                symbol = symbol_table.getPrimarySymbol(to_addr)
                if symbol and not symbol.isExternal():
                    global_name = symbol.getName()
                    if (not global_name.startswith("FUN_") and
                        not global_name.startswith("LAB_") and
                        not global_name.startswith("LOOP_") and
                        not global_name.startswith("SWITCH_")):
                        globals_refs.append({
                            'type': 'undefined4',
                            'name': global_name,
                            'addr': to_addr_str,
                            'value': None
                        })
                        seen_globals.add(to_addr_str)

    globals_refs.sort(key=lambda x: int(x['addr'].replace("0x", ""), 16))
    return globals_refs


def get_function_calls(currentProgram, function):
    """Get functions called by this function.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze

    Returns:
        A list of dictionaries with called function info (name, addr)
    """
    function_calls = []
    seen_functions = set()
    function_name = function.getName()
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()
    func_manager = currentProgram.getFunctionManager()
    symbol_table = currentProgram.getSymbolTable()

    # Iterate through instructions instead of every byte - MUCH faster
    for instr in listing.getInstructions(function.getBody(), True):
        refs = ref_manager.getReferencesFrom(instr.getAddress())

        for ref in refs:
            ref_type = ref.getReferenceType()
            if not ref_type.isCall():
                continue

            to_addr = ref.getToAddress()
            target_function = func_manager.getFunctionAt(to_addr)

            if target_function:
                func_name = target_function.getName()
                if func_name != function_name and func_name not in seen_functions:
                    function_calls.append({
                        'name': func_name,
                        'addr': str(to_addr)
                    })
                    seen_functions.add(func_name)
            else:
                symbol = symbol_table.getPrimarySymbol(to_addr)
                if symbol and symbol.isExternal():
                    func_name = symbol.getName()
                    if func_name not in seen_functions:
                        function_calls.append({
                            'name': func_name,
                            'addr': str(to_addr)
                        })
                        seen_functions.add(func_name)

    function_calls.sort(key=lambda x: x['name'].lower())
    return function_calls


def extract_virtual_filename(func_name):
    """Extract virtual filename from a function name for header generation.

    Args:
        func_name: The function name (e.g., "engine_2d.c_plotPixel_FUN_00401140")

    Returns:
        Virtual path like "engine/2d.h" or None if not extractable
    """
    if "FUN_" not in func_name:
        return None

    parts = func_name.split("_FUN_")
    if len(parts) < 2:
        return None

    prefix = parts[0]
    if ".cpp_" in prefix:
        path_part = prefix.split(".cpp_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif ".c_" in prefix:
        path_part = prefix.split(".c_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif "_cpp_" in prefix:
        path_part = prefix.split("_cpp_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif "_c_" in prefix:
        path_part = prefix.split("_c_")[0]
        virtual_path = path_part.replace("_", "/") + ".h"
        return virtual_path
    elif "." in prefix:
        if ".cpp" in prefix or ".c" in prefix:
            for ext in [".cpp", ".c"]:
                if ext in prefix:
                    path_part = prefix.split(ext)[0]
                    virtual_path = path_part.replace("_", "/") + ".h"
                    return virtual_path
    return None


def extract_cpp_function_name(func_name):
    """Extract C++ style function name from Ghidra function name.

    Args:
        func_name: The Ghidra function name

    Returns:
        C++ style name like "ClassName::methodName" or the original name
    """
    if "FUN_" not in func_name:
        return func_name

    parts = func_name.split("_FUN_")
    if len(parts) < 2:
        return func_name

    prefix = parts[0]
    fun_address = parts[1]
    function_part = None
    if ".cpp_" in prefix:
        function_part = prefix.split(".cpp_", 1)[1]
    elif ".c_" in prefix:
        function_part = prefix.split(".c_", 1)[1]
    elif "_cpp_" in prefix:
        function_part = prefix.split("_cpp_", 1)[1]
    elif "_c_" in prefix:
        function_part = prefix.split("_c_", 1)[1]
    elif "." in prefix and (".cpp" in prefix or ".c" in prefix):
        return "FUN_%s" % fun_address
    else:
        return func_name

    if not function_part:
        return "FUN_%s" % fun_address

    function_parts = function_part.split("_")
    if len(function_parts) >= 2:
        class_name = function_parts[0]
        method_name = "_".join(function_parts[1:])
        return "%s::%s" % (class_name, method_name)
    else:
        return function_part


def generate_function_prototype(func_signature, original_func_name, cpp_func_name):
    """Generate a C function prototype from signature.

    Args:
        func_signature: The full function signature
        original_func_name: Original Ghidra function name
        cpp_func_name: C++ style function name

    Returns:
        A prototype string like "void ClassName::methodName(int x);"
    """
    if not func_signature:
        return "// Unable to generate prototype for %s" % original_func_name

    paren_pos = func_signature.find('(')
    if paren_pos == -1:
        return "// Invalid signature for %s" % original_func_name

    before_paren = func_signature[:paren_pos].strip()
    parts = before_paren.split()
    if len(parts) < 2:
        return "// Invalid signature format for %s" % original_func_name

    return_type = " ".join(parts[:-1])
    params_start = paren_pos + 1
    params_end = func_signature.rfind(')')
    if params_end == -1:
        return "// Invalid signature format for %s" % original_func_name

    params_str = func_signature[params_start:params_end].strip()
    prototype = "%s %s(%s);" % (return_type, cpp_func_name, params_str)
    return prototype


def estimate_call_site_params(currentProgram, function):
    """Estimate parameter counts by analyzing call sites to this function.

    For Watcom register calling convention, parameters are passed in:
    - Registers: EAX, EDX, EBX, ECX (first 4 params)
    - Stack: Additional params via PUSH

    For __cdecl/__stdcall, all parameters are passed via PUSH on the stack.

    This function analyzes each call site and counts parameter setup.

    Args:
        currentProgram: The Ghidra program
        function: The function to analyze

    Returns:
        Dictionary with:
        - declared_params: Number of declared parameters in signature
        - call_sites: List of call site analysis results
        - estimated_params: Most common estimated param count from call sites
        - confidence: Confidence level ('high', 'medium', 'low', 'unknown')
    """
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()
    func_manager = currentProgram.getFunctionManager()

    # Get declared parameter count from function signature
    params = function.getParameters()
    declared_params = len(params) if params else 0

    # Get calling convention to determine parameter passing style
    # Based on x86watcom.cspec:
    #   Register params (EAX, EDX, EBX, ECX): __watcallRegister, __softfp_double
    #   Stack-only params: __watcallStack, __stdcall, __cdecl, __syscall, __crtmath, __fpustack
    #   FPU register params (ST0, etc.): __fpureg, __fpureg_safe, __fpu_thunk
    #   No params: __mathinternal
    calling_convention = function.getCallingConventionName()

    # Conventions that use general-purpose register parameters (EAX, EDX, EBX, ECX)
    REGISTER_PARAM_CONVENTIONS = {'__watcallRegister', '__softfp_double'}
    # Conventions that use stack-only parameters (passed via PUSH)
    STACK_ONLY_CONVENTIONS = {'__watcallStack', '__stdcall', '__cdecl', '__syscall', '__crtmath', '__fpustack'}
    # FPU register conventions - params passed in ST0-ST3, not general regs or stack
    FPU_REGISTER_CONVENTIONS = {'__fpureg', '__fpureg_safe', '__fpu_thunk'}
    # No parameters
    NO_PARAM_CONVENTIONS = {'__mathinternal'}

    if calling_convention in NO_PARAM_CONVENTIONS:
        # No parameters to estimate
        uses_register_params = False
    elif calling_convention in FPU_REGISTER_CONVENTIONS:
        # FPU register calling conventions - params via FPU stack, not countable via PUSH/MOV
        uses_register_params = False
    elif calling_convention in REGISTER_PARAM_CONVENTIONS:
        uses_register_params = True
    elif calling_convention in STACK_ONLY_CONVENTIONS:
        uses_register_params = False
    else:
        # Unknown convention - assume Watcom register style as default
        uses_register_params = True

    # Get all references to this function's entry point
    entry_point = function.getEntryPoint()
    refs_to = ref_manager.getReferencesTo(entry_point)

    call_sites = []
    param_counts = []
    max_call_sites = 50  # Limit analysis for heavily-called functions

    for ref in refs_to:
        if len(call_sites) >= max_call_sites:
            break
        ref_type = ref.getReferenceType()
        # Only analyze CALL references
        if not ref_type.isCall():
            continue

        from_addr = ref.getFromAddress()
        caller_func = func_manager.getFunctionContaining(from_addr)
        if not caller_func or caller_func == function:
            continue

        # Analyze the call site with awareness of calling convention
        site_info = _analyze_call_site(listing, from_addr, caller_func, uses_register_params)
        if site_info:
            site_info['caller'] = caller_func.getName()
            site_info['call_addr'] = str(from_addr)
            call_sites.append(site_info)
            param_counts.append(site_info['estimated_params'])

    # Determine most common param count
    estimated_params = declared_params  # Default to declared
    confidence = 'unknown'

    if param_counts:
        # Find mode (most common count)
        from collections import Counter
        count_freq = Counter(param_counts)
        most_common = count_freq.most_common(1)[0]
        estimated_params = most_common[0]
        agreement_ratio = most_common[1] / len(param_counts)

        # Confidence is based on:
        # 1. How many call sites agree with each other
        # 2. Whether the estimate matches the declared signature (validation)
        matches_declared = (estimated_params == declared_params)

        if matches_declared:
            # Estimate matches declaration - higher confidence
            if len(param_counts) >= 3 and agreement_ratio >= 0.9:
                confidence = 'high'
            elif len(param_counts) >= 2 and agreement_ratio >= 0.7:
                confidence = 'high'  # Boosted from medium since it matches
            elif len(param_counts) >= 1:
                confidence = 'medium'  # Boosted from low since it matches
        else:
            # Estimate differs from declaration - use call site agreement only
            if agreement_ratio >= 0.9 and len(param_counts) >= 3:
                confidence = 'high'
            elif agreement_ratio >= 0.7 and len(param_counts) >= 2:
                confidence = 'medium'
            elif len(param_counts) >= 1:
                confidence = 'low'

    return {
        'declared_params': declared_params,
        'estimated_params': estimated_params,
        'call_site_count': len(call_sites),
        'confidence': confidence,
        'call_sites': call_sites[:10]  # Limit to first 10 for JSON size
    }


def _analyze_call_site(listing, call_addr, caller_func, uses_register_params=True):
    """Analyze a single call site to estimate parameter count.

    Walks backward from the CALL instruction to identify parameter setup.

    Args:
        listing: Program listing
        call_addr: Address of the CALL instruction
        caller_func: The function containing the call
        uses_register_params: If True, count register params (Watcom).
                              If False, only count stack params (__cdecl/__stdcall).

    Returns:
        Dictionary with analysis results or None on failure
    """
    # Register parameters (Watcom order: EAX, EDX, EBX, ECX)
    WATCOM_REG_PARAMS = {'EAX', 'EDX', 'EBX', 'ECX', 'eax', 'edx', 'ebx', 'ecx'}

    reg_params_found = set()
    stack_params = 0
    instructions_checked = 0
    max_instructions = 30  # Don't look back too far

    # Get the CALL instruction
    call_instr = listing.getInstructionAt(call_addr)
    if not call_instr:
        return None

    # Walk backward through instructions
    current_instr = call_instr.getPrevious()
    caller_body = caller_func.getBody()

    while current_instr and instructions_checked < max_instructions:
        # Stop if we leave the caller function
        if not caller_body.contains(current_instr.getAddress()):
            break

        mnemonic = current_instr.getMnemonicString().upper()
        instructions_checked += 1

        # Stop conditions: hit another CALL, RET, or unconditional jump
        if mnemonic in ('CALL', 'RET', 'RETN', 'JMP'):
            break

        # Stop at conditional jumps that might indicate branch target
        if mnemonic.startswith('J') and mnemonic not in ('JMP',):
            # Check if this is a target of a branch (would mean we crossed a branch boundary)
            refs_to = listing.getProgram().getReferenceManager().getReferencesTo(current_instr.getAddress())
            has_branch_ref = False
            for r in refs_to:
                if r.getReferenceType().isJump():
                    has_branch_ref = True
                    break
            if has_branch_ref:
                break

        # Check for PUSH instructions (stack parameters)
        # Near a CALL, ALL pushes are parameters - don't skip EBP/ESI/EDI
        # (prologue saves happen at function entry, not before calls)
        if mnemonic == 'PUSH':
            stack_params += 1

        # Check for MOV/LEA to register params (Watcom register params only)
        elif uses_register_params and mnemonic in ('MOV', 'LEA', 'XOR', 'MOVSX', 'MOVZX'):
            dest_operand = current_instr.getDefaultOperandRepresentation(0)
            if dest_operand:
                dest_upper = dest_operand.upper()
                # Check if destination is a Watcom register parameter
                # Also check for partial registers (AL, AX, DL, DX, etc.)
                for reg in WATCOM_REG_PARAMS:
                    if dest_upper == reg or dest_upper.startswith(reg[0:2]):
                        reg_params_found.add(reg.upper()[:3])  # Normalize to EAX, EDX, etc.
                        break

        current_instr = current_instr.getPrevious()

    # Calculate total estimated params
    # For Watcom: register params + stack params
    # For __cdecl/__stdcall: stack params only
    if uses_register_params:
        num_reg_params = len(reg_params_found)
        estimated_total = num_reg_params + stack_params
    else:
        num_reg_params = 0
        reg_params_found = set()  # Clear for non-register calling conventions
        estimated_total = stack_params

    return {
        'estimated_params': estimated_total,
        'reg_params': list(reg_params_found),
        'stack_params': stack_params,
        'instructions_analyzed': instructions_checked
    }


def generate_source_filename(func_name, decompiled_code):
    """Generate source filename from function name and decompiled code.

    Args:
        func_name: The function name
        decompiled_code: The decompiled code (may contain path hints)

    Returns:
        A path like "engine/2d.c/plotPixel_FUN_00401140.c"
    """
    file_extension = ".c"
    if ".cpp" in func_name:
        file_extension = ".cpp"

    if "FUN_" not in func_name:
        for potential_type in [".c", ".cpp"]:
            if potential_type in func_name:
                return func_name.replace("_", "/")

    def process_hybrid_path(func_name, separator):
        parts = func_name.split(separator)
        path_components = parts[0].replace("_", "/").split("/")

        for i, component in enumerate(path_components):
            if ".cpp" in component or ".c" in component:
                directory = "/".join(path_components[:i+1])
                filename_prefix = "_".join(path_components[i+1:]) if i+1 < len(path_components) else ""
                filename = (filename_prefix + separator if filename_prefix else separator.lstrip("_")) + parts[1] + file_extension
                return os.path.join(directory, filename) if directory else filename

        if len(path_components) > 1:
            directory = "/".join(path_components[:-1])
            filename = path_components[-1] + separator + parts[1] + file_extension
            return os.path.join(directory, filename)
        return path_components[0] + separator + parts[1] + file_extension

    if "_thunk_FUN_" in func_name:
        return process_hybrid_path(func_name, "_thunk_FUN_")
    elif "_FUN_" in func_name:
        return process_hybrid_path(func_name, "_FUN_")

    if "..\\" in decompiled_code:
        matches = re.finditer(r'"[^"]*(\.\.[\\/][^"]*)"', decompiled_code)
        for match in matches:
            guessed_path = match.group(1)
            if guessed_path.endswith(".txt"):
                continue
            guessed_path = guessed_path.replace("..\\\\", "")
            guessed_path = guessed_path.replace("\\", "/")
            guessed_path = os.path.normpath(guessed_path)
            if ".cpp" in guessed_path:
                file_extension = ".cpp"
            return os.path.join(guessed_path, func_name + file_extension)

    return func_name + file_extension
