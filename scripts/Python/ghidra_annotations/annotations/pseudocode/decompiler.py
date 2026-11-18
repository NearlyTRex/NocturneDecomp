# Decompilation code generation for pseudocode export
# Provides decompilation, constant replacement, and stack frame export

import re
from ghidra.util.task import ConsoleTaskMonitor

# A string's label, s_<text>_<address>; group 2 is the address
STRING_LABEL_RE = re.compile(r'\b(s_[^\s\(\),;]*?_([0-9A-Fa-f]{6,}))\b')


def extract_signature_from_decompiled_code(decompiled_code):
    """Extract the function signature from decompiled C code.

    The decompiled output contains the actual signature the decompiler used,
    which may differ from func.getPrototypeString(). This extracts it directly.

    Args:
        decompiled_code: The decompiled C code string

    Returns:
        The function signature string (without trailing '{'), or None if not found
    """
    if not decompiled_code:
        return None

    # Find the opening brace that starts the function body
    # The signature is everything on the line(s) before it
    brace_idx = decompiled_code.find('\n{')
    if brace_idx == -1:
        # Try without newline (compact format)
        brace_idx = decompiled_code.find('){')
        if brace_idx != -1:
            brace_idx += 1  # Include the ')'

    if brace_idx == -1:
        return None

    # Get everything before the brace
    before_brace = decompiled_code[:brace_idx].strip()

    # Skip any leading comments (/* WARNING: ... */) and blank lines
    lines = before_brace.split('\n')
    sig_lines = []
    in_comment = False

    for line in reversed(lines):
        line_stripped = line.strip()
        if not line_stripped:
            if sig_lines:
                break  # Empty line before signature means we're done
            continue

        # Skip comment lines; a block comment's last line opens it (walking
        # upwards) unless that line is the whole comment
        if line_stripped.endswith('*/'):
            in_comment = not line_stripped.startswith('/*')
            continue
        if in_comment:
            if line_stripped.startswith('/*'):
                in_comment = False
            continue
        if line_stripped.startswith('//'):
            continue

        # This should be part of the signature
        sig_lines.insert(0, line_stripped)

    if not sig_lines:
        return None

    signature = ' '.join(sig_lines)

    # Clean up extra whitespace
    signature = re.sub(r'\s+', ' ', signature).strip()

    return signature


def _failure_stub(res):
    """Stub for a failed decompile, keeping the decompiler's reason."""
    msg = (res.getErrorMessage() or "").strip().replace("\n", " ")
    return "// Decompilation failed or timed out\n// Reason: %s\n" % (msg or "(none given)")


def decompile_function_raw(interface, func, symbol_table, string_map, timeout=60):
    """Decompile a function and return raw code with minimal processing.

    This function is designed to be called from worker threads.
    It only does Java-heavy decompilation and basic string replacement.
    Heavy Python processing (transforms, etc.) should be done in main thread.

    Args:
        interface: The DecompInterface instance
        func: The function to decompile
        symbol_table: The program's symbol table (for future use)
        string_map: Map of addresses to string values
        timeout: Decompilation timeout in seconds

    Returns:
        The raw decompiled C code as a string
    """
    from ghidra_annotations.annotations.pseudocode.strings import replace_symbol

    # === JAVA-HEAVY: Main decompilation (GIL released during this call) ===
    res = interface.decompileFunction(func, timeout, ConsoleTaskMonitor())
    if not res.decompileCompleted():
        return _failure_stub(res)

    # A string's label becomes its literal. A PTR_s_ label is left alone: its
    # address is the pointer's own, which is never a string's.
    decompiled_code = res.getDecompiledFunction().getC()
    return STRING_LABEL_RE.sub(lambda m: replace_symbol(m, string_map), decompiled_code)


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


# The pattern for the constants map last used, which is the same map for every
# function of an export; kept with the map itself, so a new map is never matched
# by a recycled id()
_constants_pattern_cache = {'constants': None, 'pattern': None}


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

    if _constants_pattern_cache['constants'] is not constants_map:
        # Longest first, so a name is not cut short by one it begins with. The
        # lookbehind leaves &CONSTANT (its address) alone.
        names = sorted(constants_map, key=len, reverse=True)
        _constants_pattern_cache['pattern'] = re.compile(
            r'(?<!&)\b(' + '|'.join(re.escape(name) for name in names) + r')\b')
        _constants_pattern_cache['constants'] = constants_map

    # Fast path: quick substring check before regex
    if not any(name in decompiled_code for name in constants_map):
        return decompiled_code
    return _constants_pattern_cache['pattern'].sub(lambda m: constants_map[m.group(1)], decompiled_code)


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
        # getDisplayName() spells pointer types properly ("SRenderVertex *"). A
        # variable always has a type in Ghidra; DEFAULT stands in for none.
        frame_info['variables'].append({
            'name': var.getName(),
            'offset': var.getStackOffset(),
            'size': var.getLength(),
            'type': var.getDataType().getDisplayName(),
            'is_param': var.getStackOffset() >= 0
        })

    frame_info['variables'].sort(key=lambda v: v['offset'])
    return frame_info
