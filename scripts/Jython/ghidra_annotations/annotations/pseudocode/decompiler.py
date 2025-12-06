# Decompilation code generation for pseudocode export
# Provides decompilation, constant replacement, and stack frame export

import re
from ghidra.util.task import ConsoleTaskMonitor
from ghidra_annotations.util.log import log_info


def generate_decompilation_code(interface, func, symbol_table, string_map, timeout=60):
    """Generate decompiled C code for a function.

    Args:
        interface: The DecompInterface instance
        func: The function to decompile
        symbol_table: The program's symbol table
        string_map: Map of addresses to string values
        timeout: Decompilation timeout in seconds

    Returns:
        The decompiled C code as a string
    """
    from ghidra_annotations.annotations.pseudocode.strings import replace_symbol

    res = interface.decompileFunction(func, timeout, ConsoleTaskMonitor())
    if not res.decompileCompleted():
        return "// Decompilation failed or timed out\n"

    decompiled_code = res.getDecompiledFunction().getC()

    try:
        pattern1 = re.compile(r'\b(s_[^\s\(\),;]*?_([0-9A-Fa-f]{6,}))\b')
        pattern2 = re.compile(r'\b(PTR_s_[^\s\(\),;]*?_([0-9A-Fa-f]{6,}))\b')
        decompiled_code = pattern1.sub(lambda m: replace_symbol(m, string_map), decompiled_code)
        decompiled_code = pattern2.sub(lambda m: replace_symbol(m, string_map), decompiled_code)
    except Exception as e:
        log_info("Warning: Failed to process string replacements: %s" % str(e))
    return decompiled_code


def build_constants_map(constants_list):
    """Build a map of constant names to their values for inline replacement.

    Args:
        constants_list: List of constant definitions from globals extraction

    Returns:
        Dictionary mapping constant names to their values
    """
    constants_map = {}
    for const in constants_list:
        name = const.get('name', '')
        initializer = const.get('initializer')
        type_name = const.get('type', '').lower()

        if not initializer:
            continue

        init_str = str(initializer)
        if ('\n' in init_str or init_str.startswith('{') or
            'Base64' in init_str or init_str == '{}'):
            continue

        is_numeric = False
        if 'float' in type_name or 'double' in type_name:
            is_numeric = True
        elif ('int' in type_name or 'long' in type_name or 'short' in type_name or
              'byte' in type_name or 'word' in type_name or 'dword' in type_name or
              'uint' in type_name or 'undefined' in type_name):
            if (init_str.startswith('0x') or init_str.startswith('-0x') or
                init_str.lstrip('-').isdigit()):
                is_numeric = True
        if is_numeric:
            constants_map[name] = initializer
    return constants_map


def replace_constants_in_code(decompiled_code, constants_map):
    """Replace constant references in code with their actual values.

    Args:
        decompiled_code: The decompiled C code
        constants_map: Map of constant names to values

    Returns:
        The code with constants replaced
    """
    if not constants_map:
        return decompiled_code
    sorted_names = sorted(constants_map.keys(), key=len, reverse=True)
    for const_name in sorted_names:
        const_value = constants_map[const_name]
        pattern = r'\b' + re.escape(const_name) + r'\b'
        decompiled_code = re.sub(pattern, const_value, decompiled_code)
    return decompiled_code


def export_stack_frame(func):
    """Export stack frame information for a function.

    Args:
        func: The function to analyze

    Returns:
        Dictionary with frame_size, local_size, param_offset, param_size,
        return_addr_offset, and variables list
    """
    frame = func.getStackFrame()
    if not frame:
        return None
    frame_info = {
        'frame_size': frame.getFrameSize(),
        'local_size': frame.getLocalSize(),
        'param_offset': frame.getParameterOffset(),
        'param_size': frame.getParameterSize(),
        'return_addr_offset': frame.getReturnAddressOffset(),
        'variables': []
    }

    for var in frame.getStackVariables():
        var_info = {
            'name': var.getName(),
            'offset': var.getStackOffset(),
            'size': var.getLength(),
            'type': str(var.getDataType()),
            'is_param': var.getStackOffset() >= 0
        }
        frame_info['variables'].append(var_info)

    frame_info['variables'].sort(key=lambda v: v['offset'])
    return frame_info
