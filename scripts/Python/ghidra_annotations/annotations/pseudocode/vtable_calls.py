"""
Second-pass module to find vtable calls from decompiled pseudocode and analyze parameters.

Scans .cpp files for patterns like:
- (*this_ptr->vtable->methodName)(...)  - class method calling virtual method on self
- (*g_GlobalPtr->vtable->methodName)(...) - calling virtual method on global object

Then analyzes the assembly of those callers to count PUSHes and estimate parameters.
"""

import os
import re
import json
from collections import defaultdict

from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.functions import load_vtable_bucket_files


def extract_class_from_global(global_name):
    """Extract class name from a global pointer name.

    Examples:
        g_CKeysPtr -> CKeys
        g_CDemonMissionPtr -> CDemonMission
        g_DirectDrawObject -> None (not a C++ class)
    """
    # Pattern: g_CClassName or g_CClassNamePtr or g_CClassNameInstance
    match = re.match(r'g_(C[A-Z][a-zA-Z0-9]*?)(?:Ptr|Instance)?$', global_name)
    if match:
        return match.group(1)
    return None


def extract_class_from_this_ptr_type(func_signature):
    """Extract class name from function signature's this_ptr parameter.

    Examples:
        "void CPoly_method(CPoly * this_ptr)" -> CPoly
        "int CKeys_isKeyDown(CKeys * this_ptr, int key)" -> CKeys
    """
    # Look for ClassName * this_ptr pattern
    match = re.search(r'(C[A-Z][a-zA-Z0-9]*)\s*\*\s*this_ptr', func_signature)
    if match:
        return match.group(1)
    return None


def find_vtable_calls_in_file(cpp_path):
    """Find all vtable calls in a single .cpp pseudocode file.

    Returns:
        List of dicts with:
        - method_name: The virtual method being called
        - caller_class: Class of the object (from this_ptr type or global)
        - call_type: 'this_ptr' or 'global'
        - global_name: Name of global (if call_type is 'global')
    """
    try:
        with open(cpp_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
    except Exception:
        return []

    calls = []

    # Pattern for vtable calls: (*something->vtable->methodName)(
    # Captures: the object expression and the method name
    vtable_pattern = re.compile(
        r'\(\*\s*'                    # (*
        r'([a-zA-Z_][a-zA-Z0-9_]*)'   # object name (this_ptr, g_CKeysPtr, etc.)
        r'\s*->\s*vtable\s*->\s*'     # ->vtable->
        r'([a-zA-Z_][a-zA-Z0-9_]*)'   # method name
        r'\s*\)\s*\('                 # )(
    )

    # Extract function signature from the file (usually at the top)
    # Pattern: returnType funcName(params)
    sig_match = re.search(r'^[a-zA-Z_][a-zA-Z0-9_\s\*]*\s+\w+\s*\([^)]*this_ptr[^)]*\)',
                          content, re.MULTILINE)
    this_ptr_class = None
    if sig_match:
        this_ptr_class = extract_class_from_this_ptr_type(sig_match.group(0))

    for match in vtable_pattern.finditer(content):
        obj_name = match.group(1)
        method_name = match.group(2)

        if obj_name == 'this_ptr' or obj_name.startswith('this_ptr'):
            if this_ptr_class:
                calls.append({
                    'method_name': method_name,
                    'caller_class': this_ptr_class,
                    'call_type': 'this_ptr',
                    'global_name': None
                })
        elif obj_name.startswith('g_'):
            # Global pointer
            global_class = extract_class_from_global(obj_name)
            if global_class:
                calls.append({
                    'method_name': method_name,
                    'caller_class': global_class,
                    'call_type': 'global',
                    'global_name': obj_name
                })

    return calls


def scan_pseudocode_directory(pseudocode_dir):
    """Scan all .cpp files in the pseudocode directory for vtable calls.

    Returns:
        Dict mapping (class_name, method_name) -> set of caller function names
    """
    # Map: (class, method) -> set of unique caller functions
    vtable_call_map = defaultdict(set)

    for root, dirs, files in os.walk(pseudocode_dir):
        for filename in files:
            if not filename.endswith('.cpp'):
                continue

            # Skip lower-priority files when higher-priority ones exist
            # Priority: .keep.cpp > .mmx.cpp > .cpp
            if not '.keep.' in filename and not '.mmx.' in filename:
                # Regular .cpp - skip if .keep.cpp or .mmx.cpp exists
                keep_version = filename.replace('.cpp', '.keep.cpp')
                mmx_version = filename.replace('.cpp', '.mmx.cpp')
                if keep_version in files or mmx_version in files:
                    continue
            elif '.mmx.' in filename:
                # .mmx.cpp - skip if .keep.cpp exists
                keep_version = filename.replace('.mmx.cpp', '.keep.cpp')
                if keep_version in files:
                    continue

            cpp_path = os.path.join(root, filename)

            # Get caller function name from filename
            # e.g., "CDemonActor_processInEditor_FUN_0040d040.cpp" -> "CDemonActor_processInEditor_FUN_0040d040"
            # Handle .keep.cpp, .mmx.cpp, and .cpp
            caller_name = filename.replace('.keep.cpp', '').replace('.mmx.cpp', '').replace('.cpp', '')

            calls = find_vtable_calls_in_file(cpp_path)

            for call in calls:
                key = (call['caller_class'], call['method_name'])
                vtable_call_map[key].add(caller_name)

    return vtable_call_map


def load_vtable_method_map(vtables_dir):
    """Load vtable data from bucket files and build a map of (class, method) -> function address.

    Args:
        vtables_dir: Path to vtables directory containing vtables_bucket_*.json files

    Returns:
        Dict mapping (class_name, method_name) -> func_addr
    """
    method_map = {}
    vtables = load_vtable_bucket_files(vtables_dir)

    for vtable in vtables:
        functions = vtable.get('functions', [])
        if not functions:
            continue

        # Extract class name from first function
        first_func = functions[0].get('func_name', '')
        class_name = None
        parts = first_func.split('_')
        for part in parts:
            if part.startswith('C') and len(part) > 1 and part[1].isupper():
                class_name = part
                break

        if not class_name:
            continue

        # Map each method to its function address and offset
        for func_entry in functions:
            func_name = func_entry.get('func_name', '')
            func_addr = func_entry.get('func_addr', '')
            offset = func_entry.get('offset', 0)

            # Extract method name from function name
            # e.g., "core_actor.cpp_CDemonActor_setup_FUN_00408bb0" -> "setup"
            # Look for pattern: ClassName_methodName_FUN_
            method_match = re.search(rf'{class_name}_([a-zA-Z][a-zA-Z0-9]*)_FUN_', func_name)
            if method_match:
                method_name = method_match.group(1)
                method_map[(class_name, method_name)] = {
                    'func_addr': func_addr,
                    'offset': offset
                }

    return method_map


def build_indirect_caller_map(pseudocode_dir, vtables_dir):
    """Build a map of function addresses to their possible indirect callers.

    Args:
        pseudocode_dir: Base directory for pseudocode files
        vtables_dir: Path to vtables directory containing vtables_bucket_*.json files

    Returns:
        Dict mapping func_addr -> {
            'class_name': str,
            'method_name': str,
            'vtable_offset': int,
            'possible_callers': list of caller function names
        }
    """
    # Scan pseudocode for vtable calls
    vtable_calls = scan_pseudocode_directory(pseudocode_dir)

    # Load vtable method mapping
    method_map = load_vtable_method_map(vtables_dir)

    # Build reverse map: func_addr -> caller info
    indirect_caller_map = {}

    for (class_name, method_name), callers in vtable_calls.items():
        method_info = method_map.get((class_name, method_name))
        if method_info:
            func_addr = method_info['func_addr']
            indirect_caller_map[func_addr] = {
                'class_name': class_name,
                'method_name': method_name,
                'vtable_offset': method_info['offset'],
                'possible_callers': sorted(callers)
            }

    return indirect_caller_map


def save_indirect_caller_map(indirect_caller_map, output_path):
    """Save the indirect caller map to a JSON file."""
    with open(output_path, 'w') as f:
        json.dump(indirect_caller_map, f, indent=2, sort_keys=True)


def find_asm_file_for_function(pseudocode_dir, func_name):
    """Find the .asm file for a given function name.

    Returns the full path to the .asm file or None if not found.
    """
    asm_filename = func_name + '.asm'

    for root, dirs, files in os.walk(pseudocode_dir):
        if asm_filename in files:
            return os.path.join(root, asm_filename)

    return None


def analyze_indirect_call_in_asm(asm_path, vtable_offset):
    """Analyze an assembly file to find indirect calls at a given vtable offset.

    Looks for patterns like:
        CALL dword ptr [reg + offset]
        CALL dword ptr [reg]  (for offset 0)

    Then counts PUSHes before the call.

    Returns:
        List of dicts with estimated_params for each call site found
    """
    try:
        with open(asm_path, 'r', encoding='utf-8', errors='ignore') as f:
            lines = f.readlines()
    except Exception:
        return []

    results = []

    # Pattern for indirect calls
    # CALL dword ptr [EAX + 0x10] or CALL dword ptr [EDX]
    if vtable_offset == 0:
        call_pattern = re.compile(
            r'CALL\s+dword\s+ptr\s+\[\s*([A-Z]+)\s*\]',
            re.IGNORECASE
        )
    else:
        call_pattern = re.compile(
            r'CALL\s+dword\s+ptr\s+\[\s*[A-Z]+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\]',
            re.IGNORECASE
        )

    for i, line in enumerate(lines):
        match = call_pattern.search(line)
        if not match:
            continue

        # For non-zero offset, verify it matches
        if vtable_offset != 0:
            offset_str = match.group(1)
            try:
                found_offset = int(offset_str, 16) if offset_str.lower().startswith('0x') else int(offset_str)
                if found_offset != vtable_offset:
                    continue
            except ValueError:
                continue

        # Count PUSHes before this call (scan backward)
        push_count = 0
        for j in range(i - 1, max(0, i - 30), -1):
            prev_line = lines[j].strip().upper()

            # Stop at function boundaries or other calls
            if any(x in prev_line for x in ['CALL ', 'RET', 'RETN', 'JMP ']):
                break

            if prev_line.startswith('PUSH '):
                push_count += 1

        # Extract call address from the line if available
        addr_match = re.search(r';\s*([0-9a-fA-F]+)', line)
        call_addr = addr_match.group(1) if addr_match else 'unknown'

        results.append({
            'call_addr': call_addr,
            'estimated_params': push_count,
            'line_num': i + 1
        })

    return results


def analyze_callers_for_params(pseudocode_dir, callers, vtable_offset):
    """Analyze assembly of caller functions to estimate parameters.

    Args:
        pseudocode_dir: Base directory for pseudocode/asm files
        callers: List of caller function names
        vtable_offset: The vtable offset being called

    Returns:
        Dict with parameter analysis results
    """
    all_estimates = []
    caller_details = []

    for caller_name in callers:
        asm_path = find_asm_file_for_function(pseudocode_dir, caller_name)
        if not asm_path:
            continue

        call_sites = analyze_indirect_call_in_asm(asm_path, vtable_offset)

        for site in call_sites:
            all_estimates.append(site['estimated_params'])
            caller_details.append({
                'caller': caller_name,
                'estimated_params': site['estimated_params']
            })

    if not all_estimates:
        return None

    # Find most common parameter count
    from collections import Counter
    count_freq = Counter(all_estimates)
    most_common_params, most_common_count = count_freq.most_common(1)[0]

    return {
        'estimated_params': most_common_params,
        'param_estimates': sorted(set(all_estimates)),
        'call_site_count': len(all_estimates),
        'caller_details': caller_details[:10]  # Limit to 10 for JSON size
    }


def update_function_json_files(pseudocode_dir, vtables_dir):
    """Update all function JSON files with indirect call analysis.

    This is the main entry point for the second pass. It:
    1. Finds which functions could call each virtual method (from pseudocode patterns)
    2. Analyzes the assembly of those callers to count PUSHes
    3. Updates the JSON with parameter estimates

    Args:
        pseudocode_dir: Base directory for pseudocode files
        vtables_dir: Path to vtables directory containing vtables_bucket_*.json files
    """
    log_info("Building indirect caller map from pseudocode...")
    indirect_map = build_indirect_caller_map(pseudocode_dir, vtables_dir)
    log_info("Found %d virtual methods with identified callers" % len(indirect_map))

    # Walk through all JSON files and update them
    updated_count = 0
    analyzed_count = 0

    for root, dirs, files in os.walk(pseudocode_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue

            json_path = os.path.join(root, filename)

            try:
                with open(json_path, 'r') as f:
                    data = json.load(f)
            except Exception:
                continue

            # Get function address from the JSON
            func_addr = data.get('function', {}).get('address', '')
            if not func_addr:
                continue

            # Check if this function has indirect callers
            caller_info = indirect_map.get(func_addr)

            if caller_info:
                callers = caller_info['possible_callers']
                vtable_offset = caller_info['vtable_offset']

                # Analyze assembly of callers to estimate parameters
                param_analysis = analyze_callers_for_params(
                    pseudocode_dir, callers, vtable_offset)

                # Build the indirect callers info
                indirect_info = {
                    'method_name': caller_info['method_name'],
                    'vtable_offset': vtable_offset,
                    'possible_callers': callers,
                }

                if param_analysis:
                    indirect_info['param_analysis'] = param_analysis
                    analyzed_count += 1

                data['possible_indirect_callers'] = indirect_info

                # Write back
                with open(json_path, 'w') as f:
                    json.dump(data, f, indent=2, sort_keys=True)

                updated_count += 1

    log_info("Updated %d JSON files with possible_indirect_callers" % updated_count)
    log_info("  - %d with parameter analysis from assembly" % analyzed_count)
    return updated_count


