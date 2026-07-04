# Auto-split from the former monolithic suspects.py — see suspects/__init__.py.
"""Shared constants, result-classification, and cross-cutting helpers used by
the theme modules (severity table, safe-intrinsic checks, balanced-paren and
address/global-interval utilities, format-specifier parsers). Imports no sibling
suspects module — it is the base layer."""

import bisect
import re



# Safe decompiler intrinsics - these are detected as suspects but do NOT count
# against a function's "clean" status in reports. These intrinsics have valid
# C macro definitions in the intrinsics header and compile successfully.
SAFE_INTRINSICS = frozenset({
    # Offset pointer adjustment
    'ADJ',      # #define ADJ(x) (x) - identity macro
    # Math intrinsics (uppercase Ghidra names)
    'ROUND',    # #define ROUND(x) - valid rounding implementation
    'SQRT',     # #define SQRT(x) sqrt(x)
    'TRUNC',    # #define TRUNC(x) ((int)(x))
    'FLOOR',    # #define FLOOR(x) floor(x)
    'CEIL',     # #define CEIL(x) ceil(x)
    'ABS',      # #define ABS(x) ((x) < 0 ? -(x) : (x))
    # NAN removed: all NAN() occurrences in codebase are FNSTSW artifacts,
    # not legitimate isnan() calls. Caught by nan_function_artifact pattern.
    # FPU intrinsics (x87 mnemonic names -> standard C math)
    'fsin',     # #define fsin(x) sin(x)
    'fcos',     # #define fcos(x) cos(x)
    'fptan',    # #define fptan(x) tan(x)
    'fpatan',   # #define fpatan(y, x) atan2(y, x)
    'fsqrt',    # #define fsqrt(x) sqrt(x)
    'fabs',     # #define fabs(x) fabs(x)
})




SUSPECT_SEVERITY = {
    # Severe: code is essentially unreadable
    'fnstsw_flag_artifact': 'severe',
    'nan_function_artifact': 'severe',
    'badspacebase': 'severe',
    'warning_spacebase': 'severe',
    'warning_max_restarts': 'severe',
    'decompilation_failed': 'severe',
    # Moderate: significant artifacts, partially readable
    'double_reconstruction': 'moderate',
    'concat_reconstruction': 'moderate',
    'sub84_truncation': 'moderate',
    'bare_stack_ref': 'moderate',
    'stack_alignment_array': 'moderate',
    'stack_ref': 'moderate',
    'stack_param': 'moderate',
    'undefined_type': 'moderate',
    'undefined_ptr_cast': 'moderate',
    'extra_output': 'moderate',
    'unaffected_reg': 'moderate',
    'unresolved_funcptr': 'moderate',
    'warning_unmapped_variable': 'moderate',
    'warning_type_propagation': 'moderate',
    'warning_partial_indirect': 'moderate',
    'warning_unable_to_use_type': 'moderate',
    'warning_inlined_function': 'mild',
    'warning_is_inlined': 'mild',
    # Mild: minor issues, code is readable
    'unnamed_param': 'mild',
    'unknown_field': 'mild',
    'undefined_ram': 'mild',
    'unnamed_field': 'mild',
    'unknown_param': 'mild',
    'register_param': 'mild',
    'negative_offset': 'mild',
    'decompiler_intrinsic': 'mild',
    'suspect_float': 'mild',
    'nonstandard_int': 'mild',
    'pointer_cast': 'moderate',
    'pointer_truncation': 'moderate',
    'displaced_global_access': 'moderate',
    'wrong_global': 'moderate',
    'suspicious_cast': 'moderate',
    'raw_address_constant': 'moderate',
    'unrolled_strcpy': 'moderate',
    'unrolled_memcpy': 'moderate',
    'unrolled_memset': 'moderate',
    'unrolled_strlen': 'moderate',
    'unrolled_strcat': 'moderate',
    'unrolled_strchr': 'moderate',
    'preinc_loop_idiom': 'moderate',
    'missing_cave_copy': 'moderate',
    'fast_sqrt_inline': 'moderate',
    'fast_inv_sqrt_inline': 'moderate',
    'bit_int_float_compare': 'moderate',
    'bitcast_double_pair': 'moderate',
    'bitcast_double': 'moderate',
    'bitcast_double_numeric': 'moderate',
    'sibling_array_undersized': 'moderate',
    'self_copy_guard': 'moderate',
    'dropped_self_copy': 'moderate',
    'tautological_addr_guard': 'moderate',
    'shadow_pointer_walk': 'moderate',
    'memcpy_oversized_source': 'moderate',
    'dropped_loop_counter': 'moderate',
    'loop_clobbered_constant': 'moderate',
    'primitive_walker_cast': 'moderate',
    'subfield_vector_pun': 'moderate',
    'vector_type_pun': 'moderate',
    'baked_self_address': 'moderate',
    'sign_compare_idiom': 'moderate',
    'carry_arith_idiom': 'moderate',
    'signed_shift_global_idiom': 'moderate',
    'struct_field_overrun': 'moderate',
    'alloc_magic_size': 'moderate',
    'mem_magic_size': 'moderate',
}




def is_safe_suspect(suspect):
    """Check if a suspect is a safe intrinsic that doesn't affect clean status.

    Args:
        suspect: A suspect dictionary with 'type' and 'match' keys

    Returns:
        True if this suspect is a safe decompiler intrinsic
    """
    return (suspect.get('type') == 'decompiler_intrinsic' and
            suspect.get('match') in SAFE_INTRINSICS)




def has_only_safe_suspects(suspects):
    """Check if all suspects in a list are safe intrinsics.

    A function with only safe suspects is considered "effectively clean"
    for reporting purposes.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        True if the list is empty or contains only safe intrinsics
    """
    if not suspects:
        return True
    return all(is_safe_suspect(s) for s in suspects)




def build_global_interval_map(globals_list):
    """Build a sorted interval map from a globals list for displaced access detection.

    Args:
        globals_list: List of global dicts with 'name', 'address', 'size', and 'type' keys.
                      Typically from extract_globals_and_constants().

    Returns:
        A sorted list of (start_addr_int, end_addr_int, name, type) tuples.
    """
    intervals = []
    for g in globals_list:
        name = g.get('name', '')
        addr_str = g.get('address', '')
        size = g.get('size', 0)
        gtype = g.get('type', '')
        if not addr_str or size <= 0:
            continue
        try:
            addr_int = int(addr_str.replace('0x', ''), 16)
        except (ValueError, AttributeError):
            continue
        intervals.append((addr_int, addr_int + size, name, gtype))

    intervals.sort()
    return intervals




def _find_global_at(addr_int, global_interval_map):
    """Find which global (if any) contains the given address.

    Returns (name, type, start_addr) or None.
    """
    # Binary search for the interval that might contain addr_int
    starts = [iv[0] for iv in global_interval_map]
    idx = bisect.bisect_right(starts, addr_int) - 1
    if idx < 0:
        return None
    start, end, name, gtype = global_interval_map[idx]
    if start <= addr_int < end:
        return (name, gtype, start)
    return None




def _find_global_in_range(low, high, global_interval_map, exclude_name=None):
    """Find a global that starts within (low, high] exclusive of low.

    Returns (name, type, start_addr) or None.
    """
    starts = [iv[0] for iv in global_interval_map]
    # Find first global starting after low
    idx = bisect.bisect_right(starts, low)
    while idx < len(global_interval_map):
        start = global_interval_map[idx][0]
        if start > high:
            break
        name = global_interval_map[idx][2]
        if name != exclude_name:
            return (name, global_interval_map[idx][3], start)
        idx += 1
    return None




def _find_neighbor_after(addr_int, global_interval_map):
    """Find the global whose interval begins at or just after addr_int.

    For wrong_global / suspicious_cast, the likely real target of the access
    is the global that sits immediately after the flagged scalar in memory.

    Returns (name, type, start_addr) or None.
    """
    if not global_interval_map:
        return None
    starts = [iv[0] for iv in global_interval_map]
    idx = bisect.bisect_left(starts, addr_int + 1)
    if idx >= len(global_interval_map):
        return None
    start, _end, name, gtype = global_interval_map[idx]
    return (name, gtype, start)




def _extract_balanced_parens(s):
    """Given `s` starting with '(', return the balanced '(...)' substring.

    Returns None if the parens never balance within `s` (truncated line).
    """
    if not s or s[0] != '(':
        return None
    depth = 0
    for i, ch in enumerate(s):
        if ch == '(':
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0:
                return s[:i + 1]
    return None




def _normalize_addr(addr):
    """Lowercase, strip an optional 0x prefix and leading zeros (keep one)."""
    a = addr.lower()
    if a.startswith('0x'):
        a = a[2:]
    return a.lstrip('0') or '0'




def count_format_specifiers(format_string):
    """Count the number of format specifiers in a printf/scanf format string.

    Handles:
    - Basic specifiers: %d, %s, %x, %f, etc.
    - Width/precision with *: %*d, %.*f, %*.*s (each * consumes an argument)
    - %% is a literal percent (doesn't consume argument)
    - Length modifiers: %ld, %lld, %hd, %zu, etc.

    Args:
        format_string: The format string to parse

    Returns:
        Number of arguments the format string expects
    """
    if not format_string:
        return 0

    count = 0
    i = 0
    while i < len(format_string):
        if format_string[i] == '%':
            if i + 1 < len(format_string):
                next_char = format_string[i + 1]
                if next_char == '%':
                    # %% - literal percent, skip both
                    i += 2
                    continue

                # Parse the format specifier
                i += 1  # Skip the %

                # Count * for width (consumes an argument)
                if i < len(format_string) and format_string[i] == '*':
                    count += 1
                    i += 1

                # Skip flags (-, +, space, #, 0)
                while i < len(format_string) and format_string[i] in '-+ #0':
                    i += 1

                # Skip width digits
                while i < len(format_string) and format_string[i].isdigit():
                    i += 1

                # Check for precision
                if i < len(format_string) and format_string[i] == '.':
                    i += 1
                    # Count * for precision (consumes an argument)
                    if i < len(format_string) and format_string[i] == '*':
                        count += 1
                        i += 1
                    # Skip precision digits
                    while i < len(format_string) and format_string[i].isdigit():
                        i += 1

                # Skip length modifiers (h, hh, l, ll, L, z, j, t, q)
                while i < len(format_string) and format_string[i] in 'hlLzjtq':
                    i += 1

                # The actual conversion specifier
                if i < len(format_string) and format_string[i] in 'diouxXeEfFgGaAcspn':
                    count += 1
                    i += 1
                continue
        i += 1

    return count




def _parse_call_arguments(line, start_pos):
    """Parse function call arguments from a line starting after the opening paren.

    Args:
        line: The full line of code
        start_pos: Position after the opening parenthesis

    Returns:
        List of argument strings, or None if parsing failed
    """
    paren_depth = 1
    args_str = ''
    i = start_pos

    while i < len(line) and paren_depth > 0:
        char = line[i]
        if char == '(':
            paren_depth += 1
        elif char == ')':
            paren_depth -= 1
        if paren_depth > 0:
            args_str += char
        i += 1

    if paren_depth != 0:
        return None  # Unbalanced parens

    if not args_str.strip():
        return []

    # Split arguments (respecting parentheses and quotes)
    args = []
    current_arg = ''
    paren_depth = 0
    in_string = False
    escape_next = False

    for char in args_str:
        if escape_next:
            current_arg += char
            escape_next = False
            continue
        if char == '\\':
            current_arg += char
            escape_next = True
            continue
        if char == '"' and not in_string:
            in_string = True
            current_arg += char
        elif char == '"' and in_string:
            in_string = False
            current_arg += char
        elif char == '(' and not in_string:
            paren_depth += 1
            current_arg += char
        elif char == ')' and not in_string:
            paren_depth -= 1
            current_arg += char
        elif char == ',' and paren_depth == 0 and not in_string:
            args.append(current_arg.strip())
            current_arg = ''
        else:
            current_arg += char

    if current_arg.strip():
        args.append(current_arg.strip())

    return args




def _find_format_string_index(args):
    """Find the index of the format string argument.

    The format string is the first string literal that contains at least one
    format specifier (% followed by a conversion character).

    Args:
        args: List of argument strings

    Returns:
        Tuple of (index, format_string) or (None, None) if not found
    """
    format_spec_pattern = re.compile(r'%[-+ #0]*\*?\d*\.?\*?\d*[hlLzjtq]*[diouxXeEfFgGaAcspn]')
    string_frag_pattern = re.compile(r'"((?:[^"\\]|\\.)*)"')

    for i, arg in enumerate(args):
        # Expand known printf-format macros so a macro-concatenated format
        # string (`"a" NOCTURNE_FMT_PTR "b"`) is counted correctly.
        # NOCTURNE_FMT_PTR is the pointer-print portability macro; it expands
        # to "%08X" on the 32-bit matching build this annotation targets.
        expanded = arg.replace('NOCTURNE_FMT_PTR', '"%08X"')
        # C concatenates adjacent string literals within one argument, so join
        # every quoted fragment in the arg into the effective format string
        # rather than looking only at the first literal.
        frags = string_frag_pattern.findall(expanded)
        if frags:
            format_string = ''.join(frags)
            # Check if it has format specifiers
            if format_spec_pattern.search(format_string):
                return i, format_string

    return None, None
