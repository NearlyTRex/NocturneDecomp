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
