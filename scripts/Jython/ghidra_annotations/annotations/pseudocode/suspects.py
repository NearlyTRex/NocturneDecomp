# Suspect pattern detection for pseudocode export
# Identifies problematic patterns in decompiled code that may need manual review

import re

# Patterns that indicate potential issues in decompiled code
# Format: (pattern_string, issue_type, description)
_SUSPECT_PATTERN_DEFS = [
    # BADSPACEBASE - Ghidra couldn't resolve the stack frame
    (r'\bBADSPACEBASE\b', 'badspacebase', 'Ghidra failed to resolve stack frame'),
    # in_stack_XXXX - Stack parameters that Ghidra couldn't properly identify
    (r'\bin_stack_[0-9a-fA-Fx]+\b', 'stack_param', 'Unresolved stack parameter'),
    # &stack0xXXXX - Direct stack address references
    (r'&stack0x[0-9a-fA-F]+', 'stack_ref', 'Direct stack address reference'),
    # undefined types - Ghidra couldn't determine the type
    (r'\bundefined[0-9]*\s+\w+', 'undefined_type', 'Unresolved type'),
    # Casts to undefined pointer types like (undefined1 *) or (undefined4 *)
    (r'\(undefined[0-9]*\s*\*\)', 'undefined_ptr_cast', 'Cast to undefined pointer type'),
    # Negative array indexing like pCVar[-10].x - usually wrong base type
    (r'\w+\[-\d+\]\.', 'negative_offset', 'Negative struct offset (wrong base type)'),
    # extraout_* - Extra output parameters Ghidra inferred (wrong calling convention)
    (r'\bextraout_[A-Z0-9_]+\b', 'extra_output', 'Inferred extra output (wrong calling convention)'),
    # in_* register parameters that look suspicious
    (r'\bin_[A-Z]{2,3}\b', 'register_param', 'Inferred register parameter'),
    # unaff_* - Unaffected register variables
    (r'\bunaff_[A-Z]+\b', 'unaffected_reg', 'Unaffected register variable'),
    # Very small floats that are likely misinterpreted integers (e.g., 9.18355e-41)
    (r'\b\d+\.\d+e-[3-9]\d\b', 'suspect_float', 'Likely misinterpreted integer as float'),
    # Type casts to weird pointer arithmetic
    (r'\(\w+\s*\*\s*\)\s*\(\s*\(int\)', 'pointer_cast', 'Complex pointer cast'),
    # _._N_N_ field access patterns (mangled/unknown field names)
    (r'\._\d+_\d+_', 'unknown_field', 'Unknown/mangled field access'),
    # CONCAT44, CONCAT22, etc - Decompiler confused about double/long long composition
    (r'\bCONCAT\d+\b', 'concat_artifact', 'Decompiler double/longlong composition artifact'),
    # SUB84, SUB42, etc - Decompiler confused about extracting parts from double/long long
    (r'\bSUB\d+\b', 'sub_artifact', 'Decompiler double/longlong extraction artifact'),
    # SBORROW - Decompiler artifact for signed borrow detection
    (r'\bSBORROW\b', 'sborrow_artifact', 'Decompiler signed borrow artifact'),
    # code * - Unresolved function pointer (failed vtable lookup)
    (r'\bcode\s*\*', 'unresolved_funcptr', 'Unresolved function pointer (vtable lookup failed)'),
    # WARNING: Removing unreachable block
    (r'WARNING:\s*Removing unreachable block', 'warning_unreachable', 'Unreachable code block removed'),
    # WARNING: Could not recover jumptable
    (r'WARNING:\s*Could not recover jumptable', 'warning_jumptable', 'Jump table recovery failed'),
    # WARNING: Treating indirect jump as call
    (r'WARNING:\s*Treating indirect jump as call', 'warning_indirect_jump', 'Indirect jump treated as call'),
    # WARNING: Subroutine does not return
    (r'WARNING:\s*Subroutine does not return', 'warning_noreturn', 'Subroutine marked as non-returning'),
    # WARNING: Globals starting with '_' overlap
    (r'WARNING:\s*Globals starting with', 'warning_overlapping_globals', 'Overlapping global symbols'),
]

# Pre-compiled patterns for performance (compiled once at module load)
SUSPECT_PATTERNS = [
    (re.compile(pattern), issue_type, description)
    for pattern, issue_type, description in _SUSPECT_PATTERN_DEFS
]


def identify_suspect_lines(decompiled_code):
    """Identify suspect patterns in decompiled code.

    Args:
        decompiled_code: The decompiled C code as a string

    Returns:
        A list of suspect dictionaries with line, type, match, text, and description
    """
    suspects = []
    lines = decompiled_code.split('\n')
    for line_num, line in enumerate(lines, 1):
        line_stripped = line.strip()
        if not line_stripped:
            continue
        is_comment = line_stripped.startswith('//') or line_stripped.startswith('/*')
        is_warning_comment = is_comment and 'WARNING:' in line_stripped
        if is_comment and not is_warning_comment:
            continue
        for compiled_pattern, issue_type, description in SUSPECT_PATTERNS:
            if is_comment and not issue_type.startswith('warning_'):
                continue
            for match in compiled_pattern.finditer(line):
                suspects.append({
                    'line': line_num,
                    'type': issue_type,
                    'match': match.group(),
                    'text': line_stripped,
                    'description': description
                })
    return suspects


def calculate_complexity_metrics(decompiled_code, assembly_code, suspects, xrefs, globals_list, func_calls):
    """Calculate complexity metrics for a function.

    Args:
        decompiled_code: The decompiled C code
        assembly_code: The assembly code
        suspects: List of identified suspect patterns
        xrefs: Cross-references to this function
        globals_list: Global variables used by this function
        func_calls: Functions called by this function

    Returns:
        A dictionary of complexity metrics
    """
    pseudocode_lines = len([l for l in decompiled_code.split('\n') if l.strip()])
    assembly_lines = len([l for l in assembly_code.split('\n') if l.strip()])
    suspect_types = set(s['type'] for s in suspects)
    return {
        'pseudocode_lines': pseudocode_lines,
        'assembly_lines': assembly_lines,
        'total_lines': pseudocode_lines + assembly_lines,
        'suspect_count': len(suspects),
        'suspect_types': sorted(suspect_types),
        'cross_reference_count': len(xrefs) if xrefs else 0,
        'global_count': len(globals_list) if globals_list else 0,
        'function_call_count': len(func_calls) if func_calls else 0,
        'complexity_score': (
            pseudocode_lines +
            (len(suspects) * 10) +  # Each suspect adds significant complexity
            (len(suspect_types) * 5)  # Variety of issues adds complexity
        )
    }
