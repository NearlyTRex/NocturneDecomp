# Pass-by-value candidate detection
# Finds functions where pointer parameters might have been pass-by-value originally
#
# Patterns detected:
# 1. Pointer parameter that is only dereferenced for reading (never written through)
# 2. Pointer parameter immediately copied to a local variable
# 3. Small struct pointer parameters (<=16 bytes) that are read-only
# 4. Assembly analysis: parameter accessed via stack offsets without pointer indirection
#
# These suggest the original code may have used pass-by-value semantics,
# but the decompiler misinterpreted it as pass-by-pointer.

import os
import re
from collections import defaultdict
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra_annotations.util import *


def get_decompiler_interface(currentProgram):
    """Create and initialize a decompiler interface."""
    iface = DecompInterface()
    iface.openProgram(currentProgram)
    return iface


def extract_pointer_params(func, decompiled_code):
    """Extract pointer parameters from function signature.

    Args:
        func: Ghidra function object
        decompiled_code: The decompiled C code string

    Returns:
        List of dicts with pointer parameter info
    """
    params = []

    # Get parameters from Ghidra
    for param in func.getParameters():
        dt = param.getDataType()
        type_name = dt.getName()

        # Check if it's a pointer type
        if '*' in type_name or type_name.endswith('*'):
            # Get the pointed-to type
            base_type = type_name.replace('*', '').strip()

            # Get stack offset if available
            stack_offset = None
            if param.isStackVariable():
                stack_offset = param.getStackOffset()

            params.append({
                'name': param.getName(),
                'type': type_name,
                'base_type': base_type,
                'size': dt.getLength(),
                'ordinal': param.getOrdinal(),
                'stack_offset': stack_offset,
            })

    return params


def get_type_size(type_name, currentProgram):
    """Get the size of a type from Ghidra's data type manager.

    Args:
        type_name: Name of the type
        currentProgram: Ghidra program

    Returns:
        Size in bytes, or 0 if unknown
    """
    dtm = currentProgram.getDataTypeManager()

    # Search for the type
    for dt in dtm.getAllDataTypes():
        if dt.getName() == type_name:
            return dt.getLength()

    # Common types fallback
    known_sizes = {
        'int': 4, 'uint': 4, 'long': 4, 'ulong': 4,
        'short': 2, 'ushort': 2,
        'char': 1, 'byte': 1, 'uchar': 1,
        'float': 4, 'double': 8,
        'CVector3f': 12, 'CVector2f': 8, 'CVector4f': 16,
        'CMatrix3x3': 36, 'CMatrix4x4': 64,
        'CQuaternion': 16,
    }

    return known_sizes.get(type_name, 0)


def analyze_pointer_usage(param_name, decompiled_code):
    """Analyze how a pointer parameter is used in the function.

    Args:
        param_name: Name of the pointer parameter
        decompiled_code: The decompiled C code string

    Returns:
        Dict with usage analysis
    """
    # Patterns to detect
    usage = {
        'dereference_read_count': 0,    # *param or param->field reads
        'dereference_write_count': 0,   # *param = x or param->field = x
        'passed_to_other_func': 0,      # func(param) or func(..., param, ...)
        'address_taken': 0,             # &(*param) or similar
        'compared_to_null': 0,          # param == NULL or param != NULL
        'copied_to_local': False,       # local = *param at start
        'copy_target': None,            # name of local it's copied to
        'is_read_only': True,           # no writes detected
        'total_uses': 0,
    }

    # Escape param name for regex
    pname = re.escape(param_name)

    # Count dereference reads: *param or param->something (not followed by =)
    # This is tricky - we need to exclude assignments
    # Pattern: param->field or *param NOT followed by assignment
    read_pattern = rf'\b{pname}\s*->\s*\w+(?!\s*[+\-*/%&|^]?=)|(?<![&])\*\s*{pname}(?!\s*[+\-*/%&|^]?=)'
    usage['dereference_read_count'] = len(re.findall(read_pattern, decompiled_code))

    # Count dereference writes: *param = x or param->field = x
    write_pattern = rf'\b{pname}\s*->\s*\w+\s*[+\-*/%&|^]?=|(?<![&])\*\s*{pname}\s*[+\-*/%&|^]?='
    write_matches = re.findall(write_pattern, decompiled_code)
    usage['dereference_write_count'] = len(write_matches)

    if usage['dereference_write_count'] > 0:
        usage['is_read_only'] = False

    # Count times passed to other functions
    # Pattern: function_call(...param...) - param appears in argument list
    # Simplified: count occurrences of param followed by , or )
    passed_pattern = rf'\(\s*[^)]*\b{pname}\b[^)]*\)'
    usage['passed_to_other_func'] = len(re.findall(passed_pattern, decompiled_code))

    # Check for null comparisons
    null_pattern = rf'\b{pname}\s*[!=]=\s*(?:NULL|0|nullptr)|\b(?:NULL|0|nullptr)\s*[!=]=\s*{pname}'
    usage['compared_to_null'] = len(re.findall(null_pattern, decompiled_code))

    # Check for copy to local at start of function
    # Pattern: localvar = *param; near the beginning
    # Look in first ~20 lines of function body
    lines = decompiled_code.split('\n')
    func_start = 0
    for i, line in enumerate(lines):
        if '{' in line:
            func_start = i
            break

    # Check first 30 lines after function start
    early_code = '\n'.join(lines[func_start:func_start+30])
    copy_pattern = rf'(\w+)\s*=\s*\*\s*{pname}\s*;'
    copy_match = re.search(copy_pattern, early_code)
    if copy_match:
        usage['copied_to_local'] = True
        usage['copy_target'] = copy_match.group(1)

    # Also check for struct copy: localstruct = *param_struct;
    # This appears as member-by-member copy sometimes
    member_copy_pattern = rf'(\w+)\.(\w+)\s*=\s*{pname}\s*->\s*\2\s*;'
    if re.search(member_copy_pattern, early_code):
        usage['copied_to_local'] = True

    # Total uses
    all_uses_pattern = rf'\b{pname}\b'
    usage['total_uses'] = len(re.findall(all_uses_pattern, decompiled_code))

    return usage


def analyze_assembly_for_param(func, param_info, base_type_size, currentProgram):
    """Analyze assembly to determine if parameter is truly pass-by-pointer or pass-by-value.

    For pass-by-value, we expect:
    - Parameter occupies multiple stack slots (size > 4 bytes)
    - Direct access to stack offsets without pointer indirection
    - No MOV reg, [stack] followed by MOV x, [reg+offset] pattern

    For pass-by-pointer, we expect:
    - Single 4-byte stack slot containing an address
    - Load pointer into register, then dereference through that register

    Args:
        func: Ghidra function object
        param_info: Dict with parameter info
        base_type_size: Size of the pointed-to type in bytes
        currentProgram: Ghidra program

    Returns:
        Dict with assembly analysis results
    """
    result = {
        'analyzed': False,
        'likely_pass_by_value': False,
        'confidence': 'unknown',
        'evidence': [],
        'stack_param_size': 4,  # Default pointer size
        'expected_value_size': base_type_size,
    }

    if base_type_size == 0:
        result['evidence'].append('unknown_type_size')
        return result

    stack_offset = param_info.get('stack_offset')
    if stack_offset is None:
        result['evidence'].append('no_stack_offset')
        return result

    result['analyzed'] = True

    # Get the listing for assembly analysis
    listing = currentProgram.getListing()
    func_body = func.getBody()

    # Analyze instructions in function
    instructions = listing.getInstructions(func_body, True)

    # Track how the parameter stack location is accessed
    param_offset_hex = "0x%x" % abs(stack_offset) if stack_offset < 0 else "+0x%x" % stack_offset

    # Patterns to look for in assembly
    direct_stack_accesses = 0  # Direct [EBP+offset] or [ESP+offset] access
    pointer_loads = 0          # MOV reg, [EBP+param_offset]
    pointer_dereferences = 0   # After loading pointer, [reg] or [reg+x] access

    # Track registers that might hold the pointer
    pointer_regs = set()

    # Common x86 registers
    gp_regs = {'EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI'}

    for instr in instructions:
        mnemonic = instr.getMnemonicString().upper()
        num_operands = instr.getNumOperands()

        if num_operands == 0:
            continue

        # Get operand representations
        operands = [instr.getDefaultOperandRepresentation(i) for i in range(num_operands)]
        instr_str = "%s %s" % (mnemonic, ', '.join(operands))

        # Check for direct parameter access patterns
        # For pass-by-value: accessing [EBP+8], [EBP+12], etc. directly for struct members
        # The parameter offset should match, and we might see accesses at offset, offset+4, offset+8, etc.

        for i, op in enumerate(operands):
            op_upper = op.upper()

            # Check if this accesses the parameter's stack location
            if 'EBP' in op_upper or 'ESP' in op_upper:
                # Parse the offset from the operand
                # Patterns: [EBP + 0x8], [EBP+0x8], [EBP-0x10], etc.
                offset_match = re.search(r'\[E[BS]P\s*([+-])\s*(?:0x)?([0-9a-fA-F]+)\]', op_upper)
                if offset_match:
                    sign = 1 if offset_match.group(1) == '+' else -1
                    offset_val = int(offset_match.group(2), 16) * sign

                    # Check if this is near our parameter's offset
                    # For pass-by-value, we'd see accesses at param_offset, param_offset+4, etc.
                    if stack_offset <= offset_val < stack_offset + base_type_size:
                        # This is accessing within the expected struct range

                        if mnemonic == 'MOV' and i == 1:
                            # MOV reg, [stack] - loading from parameter area
                            dest = operands[0].upper()
                            if dest in gp_regs:
                                # Loading into GP register - could be pointer load or value load
                                pointer_regs.add(dest)
                                pointer_loads += 1
                                result['evidence'].append('load_from_param: %s' % instr_str)

                        elif mnemonic in ('MOV', 'FLD', 'MOVSS', 'MOVSD') and i == 1:
                            # Direct read from stack - consistent with pass-by-value
                            direct_stack_accesses += 1

                        elif mnemonic in ('MOV', 'FST', 'FSTP', 'MOVSS', 'MOVSD') and i == 0:
                            # Direct write to stack
                            direct_stack_accesses += 1

            # Check for pointer dereference through previously loaded register
            for preg in pointer_regs:
                if '[%s]' % preg in op_upper or '[%s+' % preg in op_upper or '[%s-' % preg in op_upper:
                    pointer_dereferences += 1
                    result['evidence'].append('pointer_deref: %s' % instr_str)
                    break

    result['direct_stack_accesses'] = direct_stack_accesses
    result['pointer_loads'] = pointer_loads
    result['pointer_dereferences'] = pointer_dereferences

    # Determine likelihood
    # Pass-by-value indicators:
    # - Multiple direct stack accesses at consecutive offsets
    # - Few or no pointer dereferences after loading
    # - Expected to access param_offset through param_offset+size

    # Pass-by-pointer indicators:
    # - Single load of pointer value
    # - Subsequent dereferences through that register

    if pointer_dereferences > 0 and pointer_loads > 0:
        # Clear pointer indirection pattern - this is pass-by-pointer
        result['likely_pass_by_value'] = False
        result['confidence'] = 'high'
        result['evidence'].append('pointer_indirection_detected')

    elif direct_stack_accesses >= 2 and pointer_dereferences == 0:
        # Multiple direct accesses, no indirection - likely pass-by-value
        result['likely_pass_by_value'] = True
        result['confidence'] = 'medium'
        result['evidence'].append('direct_stack_access_pattern')

        # Higher confidence if accesses span the expected struct size
        if base_type_size > 4:
            result['confidence'] = 'high'
            result['evidence'].append('multi_slot_access')

    elif pointer_loads == 1 and pointer_dereferences == 0 and direct_stack_accesses == 0:
        # Loaded once but never dereferenced - inconclusive
        result['confidence'] = 'low'
        result['evidence'].append('loaded_but_not_dereferenced')

    else:
        result['confidence'] = 'low'
        result['evidence'].append('inconclusive_pattern')

    return result


def classify_candidate(param_info, usage, base_type_size, asm_analysis):
    """Classify if a pointer parameter is a pass-by-value candidate.

    Args:
        param_info: Dict with parameter info
        usage: Dict with usage analysis from decompiled code
        base_type_size: Size of the pointed-to type
        asm_analysis: Dict with assembly analysis results

    Returns:
        Dict with classification
    """
    reasons = []
    confidence = 'low'
    is_candidate = False

    # Assembly analysis is the strongest indicator
    if asm_analysis.get('analyzed'):
        if asm_analysis.get('likely_pass_by_value'):
            reasons.append('asm_pass_by_value_pattern')
            is_candidate = True
            if asm_analysis.get('confidence') == 'high':
                confidence = 'high'
            else:
                confidence = 'medium'
        elif asm_analysis.get('confidence') == 'high':
            # Assembly clearly shows pointer indirection
            reasons.append('asm_confirms_pointer')
            is_candidate = False
            confidence = 'none'
            return {
                'is_candidate': False,
                'confidence': 'none',
                'reasons': reasons,
                'base_type_size': base_type_size,
            }

    # Decompiler-based indicators (secondary)
    if usage['copied_to_local'] and usage['is_read_only']:
        reasons.append('copied_to_local_and_read_only')
        if not is_candidate:
            is_candidate = True
            confidence = 'medium'

    # Read-only pointer to small type
    if usage['is_read_only'] and 0 < base_type_size <= 16:
        reasons.append('read_only_small_type')
        if not is_candidate:
            is_candidate = True
            confidence = 'low'

    # Read-only with no null checks (suggests always valid)
    if usage['is_read_only'] and usage['compared_to_null'] == 0:
        reasons.append('no_null_checks')

    # Only used for immediate dereference, never passed elsewhere
    if usage['is_read_only'] and usage['passed_to_other_func'] <= 1:
        reasons.append('not_passed_elsewhere')

    # Counter-indicators
    if usage['dereference_write_count'] > 0:
        reasons.append('has_writes_through_pointer')
        is_candidate = False
        confidence = 'none'

    if usage['compared_to_null'] > 0 and not usage['copied_to_local']:
        # Null checks suggest it might legitimately be optional/nullable
        if confidence == 'medium':
            confidence = 'low'

    # Very large types are unlikely to be pass-by-value
    if base_type_size > 64:
        reasons.append('type_too_large')
        is_candidate = False
        confidence = 'none'

    return {
        'is_candidate': is_candidate,
        'confidence': confidence,
        'reasons': reasons,
        'base_type_size': base_type_size,
    }


def analyze_function(iface, func, currentProgram, timeout=30):
    """Analyze a single function for pass-by-value candidates.

    Args:
        iface: The DecompInterface
        func: The function to analyze
        currentProgram: The Ghidra program
        timeout: Decompilation timeout

    Returns:
        List of candidate records for this function, or empty list
    """
    # Decompile the function
    result = iface.decompileFunction(func, timeout, ConsoleTaskMonitor())
    if not result.decompileCompleted():
        return []

    decompiled = result.getDecompiledFunction()
    if not decompiled:
        return []

    code = decompiled.getC()
    if not code:
        return []

    # Extract pointer parameters
    pointer_params = extract_pointer_params(func, code)
    if not pointer_params:
        return []

    candidates = []
    for param in pointer_params:
        # Analyze decompiled code usage
        usage = analyze_pointer_usage(param['name'], code)

        # Get size of pointed-to type
        base_type_size = get_type_size(param['base_type'], currentProgram)

        # Analyze assembly
        asm_analysis = analyze_assembly_for_param(func, param, base_type_size, currentProgram)

        # Classify
        classification = classify_candidate(param, usage, base_type_size, asm_analysis)

        if classification['is_candidate']:
            candidates.append({
                'function': func.getName(),
                'function_addr': str(func.getEntryPoint()),
                'param_name': param['name'],
                'param_type': param['type'],
                'base_type': param['base_type'],
                'base_type_size': base_type_size,
                'param_ordinal': param['ordinal'],
                'stack_offset': param['stack_offset'],
                'confidence': classification['confidence'],
                'reasons': classification['reasons'],
                'usage': usage,
                'asm_analysis': {
                    'analyzed': asm_analysis.get('analyzed', False),
                    'likely_pass_by_value': asm_analysis.get('likely_pass_by_value', False),
                    'asm_confidence': asm_analysis.get('confidence', 'unknown'),
                    'direct_stack_accesses': asm_analysis.get('direct_stack_accesses', 0),
                    'pointer_loads': asm_analysis.get('pointer_loads', 0),
                    'pointer_dereferences': asm_analysis.get('pointer_dereferences', 0),
                    'evidence': asm_analysis.get('evidence', [])[:5],  # Limit evidence list
                },
            })

    return candidates


def export_pass_by_value_candidates(currentProgram, output_path, limit=None):
    """Main export function - analyze all functions for pass-by-value candidates.

    Args:
        currentProgram: The Ghidra program
        output_path: Directory to write output files
        limit: Optional limit on number of functions to analyze
    """
    log_info("Starting pass-by-value candidate analysis...")

    # Initialize decompiler
    iface = get_decompiler_interface(currentProgram)

    # Get all functions
    func_manager = currentProgram.getFunctionManager()
    functions = list(func_manager.getFunctions(True))
    total_funcs = len(functions)

    if limit:
        functions = functions[:limit]
        log_info("Limiting analysis to first %d functions" % limit)

    log_info("Analyzing %d functions..." % len(functions))

    # Analyze each function
    all_candidates = []
    functions_with_candidates = 0

    for i, func in enumerate(functions):
        if i % 500 == 0:
            log_info("Progress: %d/%d functions analyzed" % (i, len(functions)))

        try:
            candidates = analyze_function(iface, func, currentProgram)
            if candidates:
                all_candidates.extend(candidates)
                functions_with_candidates += 1
        except Exception as e:
            log_info("Error analyzing %s: %s" % (func.getName(), str(e)))

    log_info("Analysis complete. Found %d candidates in %d functions." % (
        len(all_candidates), functions_with_candidates
    ))

    # Group by confidence
    high_conf = [c for c in all_candidates if c['confidence'] == 'high']
    medium_conf = [c for c in all_candidates if c['confidence'] == 'medium']
    low_conf = [c for c in all_candidates if c['confidence'] == 'low']

    # Group by base type
    by_type = defaultdict(list)
    for c in all_candidates:
        by_type[c['base_type']].append(c)

    # Sort types by frequency
    sorted_types = sorted(by_type.items(), key=lambda x: -len(x[1]))

    # Count assembly-confirmed candidates
    asm_confirmed = [c for c in all_candidates if c['asm_analysis'].get('likely_pass_by_value')]

    # Build summary
    summary = {
        'total_candidates': len(all_candidates),
        'functions_with_candidates': functions_with_candidates,
        'by_confidence': {
            'high': len(high_conf),
            'medium': len(medium_conf),
            'low': len(low_conf),
        },
        'asm_confirmed_count': len(asm_confirmed),
        'top_types': [
            {'type': t, 'count': len(candidates)}
            for t, candidates in sorted_types[:20]
        ],
    }

    # Collect reason stats
    reason_counts = defaultdict(int)
    for c in all_candidates:
        for reason in c['reasons']:
            reason_counts[reason] += 1
    summary['reason_counts'] = dict(reason_counts)

    # Create output
    output = {
        'summary': summary,
        'by_type': {t: candidates for t, candidates in sorted_types},
        'high_confidence': high_conf,
        'medium_confidence': medium_conf,
        'low_confidence': low_conf,
        'asm_confirmed': asm_confirmed,
        'all_candidates': all_candidates,
    }

    # Save output
    make_dirs(output_path)
    output_file = os.path.join(output_path, 'pass_by_value_candidates.json')
    save_json(output_file, clean_data(output))
    log_info("Saved results to %s" % output_file)

    # Print summary
    log_info("\n=== PASS-BY-VALUE CANDIDATE SUMMARY ===")
    log_info("Total candidates: %d" % len(all_candidates))
    log_info("  High confidence: %d" % len(high_conf))
    log_info("  Medium confidence: %d" % len(medium_conf))
    log_info("  Low confidence: %d" % len(low_conf))
    log_info("  Assembly confirmed: %d" % len(asm_confirmed))

    log_info("\n=== TOP CANDIDATE TYPES ===")
    for type_name, candidates in sorted_types[:15]:
        high_count = sum(1 for c in candidates if c['confidence'] == 'high')
        asm_count = sum(1 for c in candidates if c['asm_analysis'].get('likely_pass_by_value'))
        log_info("  %s: %d candidates (%d high, %d asm-confirmed)" % (
            type_name, len(candidates), high_count, asm_count
        ))

    log_info("\n=== DETECTION REASONS ===")
    for reason, count in sorted(reason_counts.items(), key=lambda x: -x[1]):
        log_info("  %s: %d" % (reason, count))

    log_info("\n=== HIGH CONFIDENCE EXAMPLES ===")
    for c in high_conf[:10]:
        asm_status = "ASM-CONFIRMED" if c['asm_analysis'].get('likely_pass_by_value') else ""
        log_info("  %s: %s %s %s" % (
            c['function'], c['param_type'], c['param_name'], asm_status
        ))
        log_info("    reasons: %s" % ', '.join(c['reasons']))

    # Close decompiler
    iface.dispose()

    return output
