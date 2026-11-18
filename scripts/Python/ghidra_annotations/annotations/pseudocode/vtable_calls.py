"""
Second-pass module to find vtable calls from decompiled pseudocode and analyze parameters.

Scans function files for patterns like:
- (*this_ptr->vtable->methodName)(...)  - class method calling virtual method on self
- (*g_GlobalPtr->vtable->methodName)(...) - calling virtual method on global object

Then analyzes the assembly of those callers to count PUSHes and estimate parameters.
"""

import os
import re
import json
from collections import Counter, defaultdict

from ghidra_annotations.util.log import log_info, log_warning
from ghidra_annotations.annotations.pseudocode.functions import load_vtable_bucket_files

# The function files the build compiles; the build skips these reference-only
# variants (cmake/sources.cmake), so their calls are not the program's calls
FUNCTION_FILE_EXTENSIONS = ('.cpp', '.c')
REFERENCE_ONLY_VARIANTS = ('.mmx.', '.byval.', '.chunked.')

# (*object->vtable->method)(
VTABLE_CALL_RE = re.compile(
    r'\(\*\s*'
    r'([a-zA-Z_][a-zA-Z0-9_]*)'   # object name (this_ptr, g_CKeysPtr, etc.)
    r'\s*->\s*vtable\s*->\s*'
    r'([a-zA-Z_][a-zA-Z0-9_]*)'   # method name
    r'\s*\)\s*\('
)
# The function's own signature: returnType funcName(... this_ptr ...)
THIS_SIGNATURE_RE = re.compile(r'^[a-zA-Z_][a-zA-Z0-9_\s\*]*\s+\w+\s*\([^)]*this_ptr[^)]*\)', re.MULTILINE)
CLASS_PART_RE = re.compile(r'C[A-Z]')
ADD_ESP_RE = re.compile(r'ADD\s+ESP,\s*(0x[0-9a-f]+|\d+)', re.IGNORECASE)
CALL_ADDR_RE = re.compile(r';\s*([0-9a-fA-F]+)')


def extract_class_from_global(global_name):
    """Extract class name from a global pointer name.

    Examples:
        g_CKeysPtr -> CKeys
        g_CDemonMissionPtr -> CDemonMission
        g_DirectDrawObject -> None (not a C++ class)
    """
    match = re.match(r'g_(C[A-Z][a-zA-Z0-9]*?)(?:Ptr|Instance)?$', global_name)
    return match.group(1) if match else None


def extract_class_from_this_ptr_type(func_signature):
    """Extract class name from function signature's this_ptr parameter.

    Examples:
        "void CPoly_method(CPoly * this_ptr)" -> CPoly
        "int CKeys_isKeyDown(CKeys * this_ptr, int key)" -> CKeys
    """
    match = re.search(r'(C[A-Z][a-zA-Z0-9]*)\s*\*\s*this_ptr', func_signature)
    return match.group(1) if match else None


def find_vtable_calls_in_file(path):
    """Find all vtable calls in one function file.

    Only the function's own this_ptr counts as a call on its class: a local
    such as this_ptr_00 is some other object.

    Returns:
        List of dicts with:
        - method_name: The virtual method being called
        - caller_class: Class of the object (from this_ptr type or global)
        - call_type: 'this_ptr' or 'global'
        - global_name: Name of global (if call_type is 'global')
    """
    with open(path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    sig_match = THIS_SIGNATURE_RE.search(content)
    this_ptr_class = extract_class_from_this_ptr_type(sig_match.group(0)) if sig_match else None

    calls = []
    for match in VTABLE_CALL_RE.finditer(content):
        obj_name, method_name = match.group(1), match.group(2)
        if obj_name == 'this_ptr':
            if this_ptr_class:
                calls.append({'method_name': method_name, 'caller_class': this_ptr_class,
                              'call_type': 'this_ptr', 'global_name': None})
        else:
            global_class = extract_class_from_global(obj_name)
            if global_class:
                calls.append({'method_name': method_name, 'caller_class': global_class,
                              'call_type': 'global', 'global_name': obj_name})
    return calls


def compiled_function_files(files):
    """The (caller name, filename) of each function file the build compiles:
    a .keep wins over its export, and reference-only variants are left out."""
    for filename in files:
        stem, ext = os.path.splitext(filename)
        if ext not in FUNCTION_FILE_EXTENSIONS or any(v in filename for v in REFERENCE_ONLY_VARIANTS):
            continue
        if stem.endswith('.keep'):
            yield stem[:-len('.keep')], filename
        elif stem + '.keep' + ext not in files:
            yield stem, filename


def scan_pseudocode_directory(pseudocode_dir):
    """Scan all compiled function files in the pseudocode directory for vtable calls.

    Returns:
        Dict mapping (class_name, method_name) -> set of caller function names
    """
    vtable_call_map = defaultdict(set)
    for root, _dirs, files in os.walk(pseudocode_dir):
        for caller_name, filename in compiled_function_files(files):
            for call in find_vtable_calls_in_file(os.path.join(root, filename)):
                vtable_call_map[(call['caller_class'], call['method_name'])].add(caller_name)
    return vtable_call_map


def class_of_function(func_name):
    """The class a function name carries: its first CName part, or None."""
    return next((part for part in func_name.split('_') if CLASS_PART_RE.match(part)), None)


def load_vtable_method_map(vtables_dir):
    """Load vtable data from bucket files and build a map of (class, method) -> function address.

    Each slot is keyed by the class its own function name carries, so a derived
    class's overrides are found whichever class's function fills the first slot.

    Args:
        vtables_dir: Path to vtables directory containing vtables_bucket_*.json files

    Returns:
        Dict mapping (class_name, method_name) -> {'func_addr', 'offset'}
    """
    method_map = {}
    for vtable in load_vtable_bucket_files(vtables_dir):
        for func_entry in vtable.get('functions', []):
            func_name = func_entry.get('func_name', '')
            class_name = class_of_function(func_name)
            if not class_name:
                continue
            # e.g., "core_actor.cpp_CDemonActor_setup_FUN_00408bb0" -> "setup"
            method_match = re.search(rf'{class_name}_([a-zA-Z][a-zA-Z0-9]*)_FUN_', func_name)
            if method_match:
                method_map[(class_name, method_match.group(1))] = {
                    'func_addr': func_entry.get('func_addr', ''),
                    'offset': func_entry.get('offset', 0),
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
    vtable_calls = scan_pseudocode_directory(pseudocode_dir)
    method_map = load_vtable_method_map(vtables_dir)

    indirect_caller_map = {}
    for (class_name, method_name), callers in vtable_calls.items():
        method_info = method_map.get((class_name, method_name))
        if method_info:
            indirect_caller_map[method_info['func_addr']] = {
                'class_name': class_name,
                'method_name': method_name,
                'vtable_offset': method_info['offset'],
                'possible_callers': sorted(callers)
            }
    return indirect_caller_map


def index_asm_files(pseudocode_dir):
    """{function name: path of its .asm}, the first found for each name."""
    index = {}
    for root, _dirs, files in os.walk(pseudocode_dir):
        for filename in files:
            if filename.endswith('.asm'):
                index.setdefault(filename[:-len('.asm')], os.path.join(root, filename))
    return index


def _int_literal(text):
    return int(text, 16) if text.lower().startswith('0x') else int(text)


def analyze_indirect_call_in_asm(asm_path, vtable_offset):
    """Analyze an assembly file to find indirect calls at a given vtable offset.

    Looks for patterns like:
        CALL dword ptr [reg + offset]
        CALL dword ptr [reg]  (for offset 0)

    The caller's ADD ESP,N after the call gives the argument bytes; without one,
    the PUSHes before the call are counted.

    Returns:
        List of dicts with estimated_params for each call site found
    """
    with open(asm_path, 'r', encoding='utf-8', errors='ignore') as f:
        lines = f.readlines()

    if vtable_offset == 0:
        call_pattern = re.compile(r'CALL\s+dword\s+ptr\s+\[\s*[A-Z]+\s*\]', re.IGNORECASE)
    else:
        call_pattern = re.compile(r'CALL\s+dword\s+ptr\s+\[\s*[A-Z]+\s*\+\s*(0x[0-9a-f]+|\d+)\s*\]',
                                  re.IGNORECASE)

    results = []
    for i, line in enumerate(lines):
        match = call_pattern.search(line)
        if not match or (vtable_offset != 0 and _int_literal(match.group(1)) != vtable_offset):
            continue

        # Primary method: scan FORWARD for ADD ESP,N (handles early pushes)
        stack_params = None
        method = 'push_count'
        for next_line in lines[i + 1:i + 15]:
            next_line = next_line.strip()
            upper = next_line.upper()
            if 'CALL ' in upper or 'RET' in upper or upper.startswith('PUSH '):
                break
            add_match = ADD_ESP_RE.match(next_line)
            if add_match:
                stack_params = _int_literal(add_match.group(1)) // 4
                method = 'add_esp'
                break

        # Fallback: count PUSHes before this call (scan backward)
        if stack_params is None:
            stack_params = 0
            for prev_line in reversed(lines[max(0, i - 29):i]):
                upper = prev_line.strip().upper()
                if any(x in upper for x in ('CALL ', 'RET', 'JMP ')):
                    break
                if upper.startswith('PUSH '):
                    stack_params += 1

        addr_match = CALL_ADDR_RE.search(line)
        results.append({
            'call_addr': addr_match.group(1) if addr_match else 'unknown',
            'estimated_params': stack_params,
            'method': method,
            'line_num': i + 1
        })
    return results


def analyze_callers_for_params(asm_index, callers, vtable_offset):
    """Analyze assembly of caller functions to estimate parameters.

    Args:
        asm_index: {function name: .asm path}, from index_asm_files
        callers: List of caller function names
        vtable_offset: The vtable offset being called

    Returns:
        Dict with parameter analysis results, or None when no call site was found
    """
    all_estimates = []
    caller_details = []
    for caller_name in callers:
        asm_path = asm_index.get(caller_name)
        if not asm_path:
            continue
        for site in analyze_indirect_call_in_asm(asm_path, vtable_offset):
            all_estimates.append(site['estimated_params'])
            caller_details.append({'caller': caller_name, 'estimated_params': site['estimated_params']})

    if not all_estimates:
        return None
    return {
        'estimated_params': Counter(all_estimates).most_common(1)[0][0],
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
    asm_index = index_asm_files(pseudocode_dir)

    updated_count = 0
    analyzed_count = 0
    for root, _dirs, files in os.walk(pseudocode_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue
            json_path = os.path.join(root, filename)
            try:
                with open(json_path, 'r') as f:
                    data = json.load(f)
            except (OSError, ValueError) as e:
                log_warning("Could not read %s for its indirect callers: %s" % (json_path, e))
                continue

            caller_info = indirect_map.get(data.get('function', {}).get('address', ''))
            if not caller_info:
                continue

            callers = caller_info['possible_callers']
            vtable_offset = caller_info['vtable_offset']
            indirect_info = {
                'method_name': caller_info['method_name'],
                'vtable_offset': vtable_offset,
                'possible_callers': callers,
            }
            param_analysis = analyze_callers_for_params(asm_index, callers, vtable_offset)
            if param_analysis:
                indirect_info['param_analysis'] = param_analysis
                analyzed_count += 1
            data['possible_indirect_callers'] = indirect_info

            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2, sort_keys=True)
            updated_count += 1

    log_info("Updated %d JSON files with possible_indirect_callers" % updated_count)
    log_info("  - %d with parameter analysis from assembly" % analyzed_count)
    return updated_count
