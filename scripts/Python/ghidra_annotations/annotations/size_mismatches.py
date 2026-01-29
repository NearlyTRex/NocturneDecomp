# Size mismatch detection for globals, parameters, and locals
# Detects the ._X_Y_ pattern in decompiled code indicating wrong type sizes

"""
This script detects variables with incorrect sizes in Ghidra's decompilation.
When Ghidra decompiles code and a variable's declared type doesn't match its
actual usage, it generates patterns like:

    variable._0_4_   -> 4 bytes starting at offset 0
    param._1_2_      -> 2 bytes starting at offset 1
    global._8_4_     -> 4 bytes starting at offset 8

These patterns indicate the variable's type is wrong - either:
- Too small (accessing beyond declared size)
- Wrong struct layout (accessing at unexpected offsets)
- Should be a different type entirely

The script scans all decompiled functions, finds these patterns, and reports:
- Which variables have size mismatches
- What offsets/sizes are being accessed
- Suggested minimum size based on max(offset + size)
- Whether it's a global, parameter, or local variable
"""

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


def find_size_mismatch_patterns(decompiled_code):
    """Find all ._X_Y_ patterns in decompiled code with context.

    Args:
        decompiled_code: The decompiled C code string

    Returns:
        List of dicts with detailed info about each match
    """
    # Pattern: identifier._digits_digits_
    # The underscore-bracketed numbers indicate offset and size
    pattern = re.compile(r'\b(\w+)\._(\d+)_(\d+)_')

    matches = []
    for match in pattern.finditer(decompiled_code):
        var_name = match.group(1)
        offset = int(match.group(2))
        size = int(match.group(3))
        full_match = match.group(0)

        # Get surrounding context to determine access type
        start = match.start()
        end = match.end()

        # Check if preceded by '.' (struct member access)
        is_struct_member = start > 0 and decompiled_code[start-1] == '.'

        # Get text after the pattern to detect assignment context
        after_text = decompiled_code[end:end+20].lstrip()

        # Determine access type
        if after_text.startswith('=') and not after_text.startswith('=='):
            access_type = 'write'
        elif re.match(r'^(\+|-|\*|/|%|&|\||\^|<<|>>)=', after_text):
            access_type = 'compound'
        else:
            access_type = 'read'

        matches.append({
            'var_name': var_name,
            'offset': offset,
            'size': size,
            'pattern': full_match,
            'is_struct_member': is_struct_member,
            'access_type': access_type
        })

    return matches


def parse_variable_declarations(decompiled_code):
    """Parse variable declarations from decompiled code to get type info.

    Args:
        decompiled_code: The decompiled C code string

    Returns:
        Dict mapping variable names to type info
    """
    var_info = {}

    # Match variable declarations: type varname; or type varname = ...;
    # Also handle arrays: type varname[size];
    # Common patterns in Ghidra output
    decl_patterns = [
        # Array declarations: byte auStack_40[64];
        re.compile(r'^\s*(\w+(?:\s*\*)*)\s+(\w+)\s*\[\s*(\d+)\s*\]\s*;', re.MULTILINE),
        # Simple declarations: int local_10;
        re.compile(r'^\s*(\w+(?:\s*\*)*)\s+(\w+)\s*;', re.MULTILINE),
        # Declarations with initialization: int local_10 = 0;
        re.compile(r'^\s*(\w+(?:\s*\*)*)\s+(\w+)\s*=', re.MULTILINE),
    ]

    # Type to size mapping
    type_sizes = {
        'byte': 1, 'char': 1, 'uchar': 1, 'undefined1': 1, 'bool': 1,
        'short': 2, 'ushort': 2, 'undefined2': 2, 'wchar_t': 2,
        'int': 4, 'uint': 4, 'long': 4, 'ulong': 4, 'undefined4': 4, 'float': 4,
        'longlong': 8, 'ulonglong': 8, 'undefined8': 8, 'double': 8,
    }

    # Float/double types
    float_types = {'float', 'double', 'longdouble'}

    for pattern in decl_patterns:
        for match in pattern.finditer(decompiled_code):
            type_name = match.group(1).strip()
            var_name = match.group(2)

            # Check if it's an array
            is_array = len(match.groups()) >= 3 and match.group(3) is not None
            array_size = int(match.group(3)) if is_array else 0

            # Get base type (remove pointers)
            base_type = type_name.replace('*', '').strip()

            # Determine if pointer
            is_pointer = '*' in type_name

            # Determine if float/double
            is_float = base_type.lower() in float_types

            # Calculate size
            if is_pointer:
                elem_size = 4  # 32-bit pointers
            else:
                elem_size = type_sizes.get(base_type, 0)

            total_size = elem_size * array_size if is_array else elem_size

            var_info[var_name] = {
                'type': type_name,
                'base_type': base_type,
                'size': total_size,
                'elem_size': elem_size,
                'is_array': is_array,
                'array_count': array_size if is_array else 0,
                'is_pointer': is_pointer,
                'is_float': is_float,
            }

    # Also detect from naming conventions (Ghidra patterns)
    # auStack_, acStack_ = auto array on stack
    # fStack_, fLocal_ = float
    # dStack_, dLocal_ = double (maybe)
    name_patterns = {
        r'^au[A-Z]': {'is_array': True, 'naming_hint': 'auto_unsigned_array'},
        r'^ac[A-Z]': {'is_array': True, 'naming_hint': 'auto_char_array'},
        r'^a[A-Z]': {'is_array': True, 'naming_hint': 'auto_array'},
        r'^f[A-Z]': {'is_float': True, 'naming_hint': 'float_var'},
        r'^d[A-Z]': {'is_float': True, 'naming_hint': 'double_var'},
    }

    # Apply naming hints to vars we found
    for var_name in var_info:
        for pattern, hints in name_patterns.items():
            if re.match(pattern, var_name):
                var_info[var_name].update(hints)
                break

    return var_info


def classify_transform_safety(match_info, var_info):
    """Determine if a partial access pattern is safe for automatic transform.

    Args:
        match_info: Dict with match details from find_size_mismatch_patterns
        var_info: Dict of variable type info from parse_variable_declarations

    Returns:
        Dict with safety classification and reasons
    """
    var_name = match_info['var_name']
    offset = match_info['offset']
    size = match_info['size']

    reasons = []
    is_safe = True

    # Check if struct member access
    if match_info['is_struct_member']:
        is_safe = False
        reasons.append('struct_member_access')

    # Check offset bounds (shift >= 32 is undefined for 32-bit)
    if offset >= 4:
        is_safe = False
        reasons.append('offset_too_large')

    # Check variable info if available
    vinfo = var_info.get(var_name, {})

    if vinfo.get('is_array'):
        is_safe = False
        reasons.append('array_variable')

    if vinfo.get('is_float'):
        is_safe = False
        reasons.append('float_variable')

    if vinfo.get('is_pointer') and not vinfo.get('is_array'):
        # Pointer partial access might be intentional type punning
        is_safe = False
        reasons.append('pointer_variable')

    # Check naming conventions as fallback
    if not vinfo:
        if re.match(r'^a[uc]?[A-Z]', var_name):
            is_safe = False
            reasons.append('array_name_pattern')
        elif re.match(r'^[fd][A-Z]', var_name):
            is_safe = False
            reasons.append('float_name_pattern')

    # Determine transform type needed
    if is_safe:
        access_type = match_info['access_type']
        if access_type == 'read':
            transform_type = 'read_transform'
        elif access_type == 'write':
            transform_type = 'write_transform'
        else:
            transform_type = 'compound_transform'
    else:
        transform_type = 'none'

    return {
        'is_safe': is_safe,
        'reasons': reasons,
        'transform_type': transform_type,
        'access_type': match_info['access_type']
    }


def classify_variable(var_name, func, currentProgram):
    """Classify a variable as global, parameter, or local.

    Args:
        var_name: The variable name
        func: The function being analyzed
        currentProgram: The Ghidra program

    Returns:
        Tuple of (category, data_type, declared_size, address)
        category is one of: 'global', 'parameter', 'local', 'unknown'
    """
    symbol_table = currentProgram.getSymbolTable()

    # Check if it's a global (starts with g_ or DAT_ or has global symbol)
    if var_name.startswith('g_') or var_name.startswith('DAT_') or var_name.startswith('PTR_'):
        # Try to find the global symbol
        symbols = list(symbol_table.getSymbols(var_name))
        if symbols:
            symbol = symbols[0]
            addr = symbol.getAddress()
            data = currentProgram.getListing().getDataAt(addr)
            if data:
                dt = data.getDataType()
                return ('global', dt.getName(), dt.getLength(), str(addr))
            return ('global', 'undefined', 0, str(addr))
        return ('global', 'undefined', 0, None)

    # Check function parameters
    if func:
        for param in func.getParameters():
            if param.getName() == var_name:
                dt = param.getDataType()
                return ('parameter', dt.getName(), dt.getLength(), None)

    # Check local variables
    if func:
        local_vars = func.getLocalVariables()
        for local in local_vars:
            if local.getName() == var_name:
                dt = local.getDataType()
                return ('local', dt.getName(), dt.getLength(), None)

    # Check if it looks like a stack variable (Stack_X or local_X pattern)
    if var_name.startswith('local_') or var_name.startswith('Stack_') or var_name.startswith('in_stack'):
        return ('local', 'undefined', 0, None)

    return ('unknown', 'undefined', 0, None)


def analyze_function(iface, func, currentProgram, timeout=30):
    """Analyze a single function for size mismatches.

    Args:
        iface: The DecompInterface
        func: The function to analyze
        currentProgram: The Ghidra program
        timeout: Decompilation timeout

    Returns:
        List of mismatch records for this function
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

    # Find all mismatch patterns with context
    matches = find_size_mismatch_patterns(code)
    if not matches:
        return []

    # Parse variable declarations for type info
    var_info = parse_variable_declarations(code)

    # Group by variable name
    var_accesses = defaultdict(list)
    for match in matches:
        var_name = match['var_name']
        var_accesses[var_name].append(match)

    # Build mismatch records
    records = []
    for var_name, accesses in var_accesses.items():
        category, declared_type, declared_size, addr = classify_variable(
            var_name, func, currentProgram
        )

        # Calculate required minimum size
        max_extent = max(a['offset'] + a['size'] for a in accesses)

        # Unique patterns
        unique_patterns = sorted(set(a['pattern'] for a in accesses))

        # Unique offset/size combinations
        offset_sizes = sorted(set((a['offset'], a['size']) for a in accesses))

        # Analyze each access for transform safety
        access_details = []
        safe_count = 0
        unsafe_count = 0
        access_type_counts = {'read': 0, 'write': 0, 'compound': 0}

        for match in accesses:
            safety = classify_transform_safety(match, var_info)
            access_type_counts[match['access_type']] += 1

            if safety['is_safe']:
                safe_count += 1
            else:
                unsafe_count += 1

            access_details.append({
                'offset': match['offset'],
                'size': match['size'],
                'pattern': match['pattern'],
                'access_type': match['access_type'],
                'is_struct_member': match['is_struct_member'],
                'transform_safe': safety['is_safe'],
                'unsafe_reasons': safety['reasons'],
                'transform_type': safety['transform_type']
            })

        # Get variable type info if available
        vinfo = var_info.get(var_name, {})

        record = {
            'variable': var_name,
            'category': category,
            'declared_type': declared_type,
            'declared_size': declared_size,
            'address': addr,
            'function': func.getName(),
            'function_addr': str(func.getEntryPoint()),
            'min_required_size': max_extent,
            'access_count': len(accesses),
            'unique_accesses': [{'offset': o, 'size': s} for o, s in offset_sizes],
            'patterns': unique_patterns,
            # New fields
            'var_type_info': vinfo if vinfo else None,
            'access_type_counts': access_type_counts,
            'transform_safe_count': safe_count,
            'transform_unsafe_count': unsafe_count,
            'all_transforms_safe': unsafe_count == 0,
            'access_details': access_details,
        }

        # Flag if accessing beyond declared size
        if declared_size > 0 and max_extent > declared_size:
            record['exceeds_declared'] = True
            record['overflow_bytes'] = max_extent - declared_size
        else:
            record['exceeds_declared'] = False

        records.append(record)

    return records


def aggregate_global_mismatches(all_records):
    """Aggregate mismatch data for globals across all functions.

    Args:
        all_records: List of all mismatch records

    Returns:
        Dict mapping global names to aggregated info
    """
    globals_data = defaultdict(lambda: {
        'accesses': [],
        'functions': set(),
        'max_extent': 0,
        'address': None,
        'declared_type': None,
        'declared_size': 0
    })

    for record in all_records:
        if record['category'] != 'global':
            continue

        name = record['variable']
        gdata = globals_data[name]

        gdata['functions'].add(record['function'])
        gdata['max_extent'] = max(gdata['max_extent'], record['min_required_size'])

        if record['address']:
            gdata['address'] = record['address']
        if record['declared_type'] and record['declared_type'] != 'undefined':
            gdata['declared_type'] = record['declared_type']
        if record['declared_size'] > 0:
            gdata['declared_size'] = record['declared_size']

        for access in record['unique_accesses']:
            if access not in gdata['accesses']:
                gdata['accesses'].append(access)

    # Convert sets to lists for JSON serialization
    result = {}
    for name, data in globals_data.items():
        result[name] = {
            'address': data['address'],
            'declared_type': data['declared_type'],
            'declared_size': data['declared_size'],
            'min_required_size': data['max_extent'],
            'function_count': len(data['functions']),
            'functions': sorted(data['functions']),
            'unique_accesses': sorted(data['accesses'], key=lambda x: (x['offset'], x['size']))
        }

    return result


def infer_struct_fields(accesses):
    """Try to infer struct field layout from access patterns.

    Args:
        accesses: List of {'offset': X, 'size': Y} dicts

    Returns:
        List of inferred fields with suggested types
    """
    # Sort by offset
    sorted_accesses = sorted(accesses, key=lambda x: x['offset'])

    # Map common sizes to C types
    size_to_type = {
        1: 'byte',
        2: 'short',
        4: 'int',      # or float, pointer
        8: 'double',   # or long long
    }

    fields = []
    for access in sorted_accesses:
        offset = access['offset']
        size = access['size']
        suggested_type = size_to_type.get(size, 'byte[%d]' % size)

        fields.append({
            'offset': offset,
            'size': size,
            'suggested_type': suggested_type,
            'field_name': 'field_0x%x' % offset
        })

    return fields


def export_size_mismatches(currentProgram, output_path, limit=None):
    """Main export function - analyze all functions for size mismatches.

    Args:
        currentProgram: The Ghidra program
        output_path: Directory to write output files
        limit: Optional limit on number of functions to analyze
    """
    log_info("Starting size mismatch analysis...")

    # Initialize decompiler
    iface = get_decompiler_interface(currentProgram)

    # Get all functions
    func_manager = currentProgram.getFunctionManager()
    functions = list(func_manager.getFunctions(True))
    total_funcs = len(functions)

    if limit:
        functions = functions[:limit]
        log_info("Limiting analysis to first %d functions" % limit)

    log_info("Analyzing %d functions..." % total_funcs)

    # Analyze each function
    all_records = []
    functions_with_issues = 0

    for i, func in enumerate(functions):
        if i % 500 == 0:
            log_info("Progress: %d/%d functions analyzed" % (i, total_funcs))

        try:
            records = analyze_function(iface, func, currentProgram)
            if records:
                all_records.extend(records)
                functions_with_issues += 1
        except Exception as e:
            log_info("Error analyzing %s: %s" % (func.getName(), str(e)))

    log_info("Analysis complete. Found %d mismatches in %d functions." % (
        len(all_records), functions_with_issues
    ))

    # Separate by category
    globals_records = [r for r in all_records if r['category'] == 'global']
    params_records = [r for r in all_records if r['category'] == 'parameter']
    locals_records = [r for r in all_records if r['category'] == 'local']
    unknown_records = [r for r in all_records if r['category'] == 'unknown']

    # Aggregate global data
    aggregated_globals = aggregate_global_mismatches(all_records)

    # Add inferred fields for globals
    for name, data in aggregated_globals.items():
        data['inferred_fields'] = infer_struct_fields(data['unique_accesses'])

    # Sort globals by frequency (most accessed first)
    sorted_globals = sorted(
        aggregated_globals.items(),
        key=lambda x: (-x[1]['function_count'], x[0])
    )

    # Calculate transform safety statistics
    total_safe = sum(r.get('transform_safe_count', 0) for r in all_records)
    total_unsafe = sum(r.get('transform_unsafe_count', 0) for r in all_records)
    fully_safe_vars = sum(1 for r in all_records if r.get('all_transforms_safe', False))

    # Collect all unsafe reasons
    unsafe_reason_counts = defaultdict(int)
    for r in all_records:
        for detail in r.get('access_details', []):
            for reason in detail.get('unsafe_reasons', []):
                unsafe_reason_counts[reason] += 1

    # Count by access type
    access_type_totals = {'read': 0, 'write': 0, 'compound': 0}
    for r in all_records:
        for atype, count in r.get('access_type_counts', {}).items():
            access_type_totals[atype] += count

    # Build summary
    summary = {
        'total_mismatches': len(all_records),
        'functions_with_issues': functions_with_issues,
        'by_category': {
            'globals': len(globals_records),
            'parameters': len(params_records),
            'locals': len(locals_records),
            'unknown': len(unknown_records)
        },
        'unique_globals_affected': len(aggregated_globals),
        'exceeds_declared_count': sum(1 for r in all_records if r.get('exceeds_declared')),
        # Transform safety stats
        'transform_safety': {
            'total_accesses': total_safe + total_unsafe,
            'safe_for_transform': total_safe,
            'unsafe_for_transform': total_unsafe,
            'safe_percentage': round(100.0 * total_safe / (total_safe + total_unsafe), 1) if (total_safe + total_unsafe) > 0 else 0,
            'variables_fully_safe': fully_safe_vars,
            'variables_with_unsafe': len(all_records) - fully_safe_vars,
        },
        'unsafe_reasons': dict(unsafe_reason_counts),
        'access_types': access_type_totals,
    }

    # Create output
    output = {
        'summary': summary,
        'globals_aggregated': dict(sorted_globals),
        'all_records': all_records
    }

    # Save output
    make_dirs(output_path)
    output_file = os.path.join(output_path, 'size_mismatches.json')
    save_json(output_file, clean_data(output))
    log_info("Saved results to %s" % output_file)

    # Print top issues
    log_info("\n=== TOP GLOBAL ISSUES ===")
    for name, data in sorted_globals[:20]:
        log_info("%s: used in %d functions, needs %d bytes (declared: %s = %d bytes)" % (
            name,
            data['function_count'],
            data['min_required_size'],
            data['declared_type'] or 'undefined',
            data['declared_size']
        ))
        for field in data['inferred_fields'][:5]:
            log_info("  offset 0x%x: %s (%d bytes)" % (
                field['offset'], field['suggested_type'], field['size']
            ))

    log_info("\n=== PARAMETER ISSUES ===")
    # Group params by type pattern
    param_patterns = defaultdict(list)
    for r in params_records:
        key = (r['declared_type'], r['min_required_size'])
        param_patterns[key].append(r)

    for (dtype, min_size), records in sorted(param_patterns.items(), key=lambda x: -len(x[1]))[:10]:
        log_info("%s -> needs %d bytes (%d occurrences)" % (
            dtype, min_size, len(records)
        ))

    # Print transform safety stats
    log_info("\n=== TRANSFORM SAFETY ANALYSIS ===")
    ts = summary['transform_safety']
    log_info("Total partial accesses: %d" % ts['total_accesses'])
    log_info("Safe for auto-transform: %d (%.1f%%)" % (ts['safe_for_transform'], ts['safe_percentage']))
    log_info("Unsafe for auto-transform: %d" % ts['unsafe_for_transform'])
    log_info("Variables fully safe: %d" % ts['variables_fully_safe'])
    log_info("Variables with unsafe accesses: %d" % ts['variables_with_unsafe'])

    log_info("\nAccess types:")
    for atype, count in sorted(summary['access_types'].items(), key=lambda x: -x[1]):
        log_info("  %s: %d" % (atype, count))

    log_info("\nUnsafe reasons breakdown:")
    for reason, count in sorted(summary['unsafe_reasons'].items(), key=lambda x: -x[1]):
        log_info("  %s: %d" % (reason, count))

    # Close decompiler
    iface.dispose()

    return output
