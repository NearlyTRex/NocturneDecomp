#!/usr/bin/env python3
"""
Stack Reference Issue Analyzer

This script analyzes exported function JSON files to find functions with
unresolved stack references (in_stack_*, stack0x*, &stack0x*) and helps
generate fixes by allowing users to specify correct types for stack offsets.

Usage:
    # Analyze all functions and print report
    python analyze_stack_issues.py /path/to/pseudocode

    # Generate a fixes file for a specific function
    python analyze_stack_issues.py /path/to/pseudocode --function FUN_00401000

    # Apply fixes from a YAML file
    python analyze_stack_issues.py /path/to/pseudocode --apply-fixes fixes.yaml

    # Export all issues to a YAML file for editing
    python analyze_stack_issues.py /path/to/pseudocode --export-issues issues.yaml
"""

import os
import re
import json
import argparse
from collections import defaultdict
from typing import Dict, List, Tuple, Optional, Any


# Patterns to extract stack references
STACK_PATTERNS = {
    # in_stack_XXXXXXXX - unresolved stack parameter (positive offset from ESP at call)
    'in_stack': re.compile(r'\bin_stack_([0-9a-fA-F]+)\b'),
    # stack0xXXXXXXXX - direct stack variable reference (can be positive or negative)
    'stack_var': re.compile(r'\bstack0x([0-9a-fA-F]+)\b'),
    # &stack0xXXXXXXXX - address of stack variable
    'stack_addr': re.compile(r'&stack0x([0-9a-fA-F]+)\b'),
}

# Common type sizes for suggestions
TYPE_SIZES = {
    1: ['byte', 'char', 'uchar', 'undefined1', 'BYTE', 'bool'],
    2: ['short', 'ushort', 'WORD', 'undefined2', 'wchar_t'],
    4: ['int', 'uint', 'long', 'ulong', 'DWORD', 'float', 'undefined4', 'pointer', 'void*'],
    8: ['longlong', 'ulonglong', 'QWORD', 'double', 'undefined8'],
    10: ['long double', 'float10'],
    12: ['CVector3f'],
    16: ['CVector4f', 'CQuaternion'],
    48: ['CMatrix3x3'],
    64: ['CMatrix4x4'],
}


def parse_stack_offset(hex_str: str) -> int:
    """Parse a hex string to a signed stack offset.

    Stack offsets in Ghidra are represented as unsigned hex but may represent
    negative offsets (local variables) when the high bit is set.
    """
    value = int(hex_str, 16)
    # If it looks like a negative 32-bit offset, convert it
    if value > 0x7FFFFFFF:
        value = value - 0x100000000
    return value


def extract_stack_references(code: str) -> Dict[str, List[Tuple[int, str]]]:
    """Extract all stack references from decompiled code.

    Returns:
        Dict mapping reference type to list of (offset, context_line) tuples
    """
    references = defaultdict(list)

    lines = code.split('\n')
    for line_num, line in enumerate(lines, 1):
        for ref_type, pattern in STACK_PATTERNS.items():
            for match in pattern.finditer(line):
                offset = parse_stack_offset(match.group(1))
                # Store offset and the line where it appears
                context = line.strip()[:80]
                existing_offsets = [o for o, _ in references[ref_type]]
                if offset not in existing_offsets:
                    references[ref_type].append((offset, context))

    # Sort by offset
    for ref_type in references:
        references[ref_type].sort(key=lambda x: x[0])

    return dict(references)


# =============================================================================
# Type Inference
# =============================================================================

# Patterns for inferring types from code usage
TYPE_INFERENCE_PATTERNS = [
    # Explicit casts: (TypeName *)var or (TypeName)var
    (re.compile(r'\((\w+)\s*\*\s*\)\s*in_stack_([0-9a-fA-F]+)'), 'ptr', 1),
    (re.compile(r'\((\w+)\s*\*\s*\)\s*stack0x([0-9a-fA-F]+)'), 'ptr', 1),
    (re.compile(r'\((\w+)\)\s*in_stack_([0-9a-fA-F]+)'), 'val', 1),

    # Member access: var->member or var.member (suggests struct pointer)
    (re.compile(r'in_stack_([0-9a-fA-F]+)\s*->\s*(\w+)'), 'struct_ptr', None),
    (re.compile(r'in_stack_([0-9a-fA-F]+)\s*\.\s*(\w+)'), 'struct', None),

    # Array indexing: var[idx] suggests pointer or array
    (re.compile(r'in_stack_([0-9a-fA-F]+)\s*\['), 'array_ptr', None),

    # Pointer comparison: var == NULL or var != 0
    (re.compile(r'in_stack_([0-9a-fA-F]+)\s*[!=]=\s*\(?(?:NULL|0x0|0)\)?'), 'ptr', None),
    (re.compile(r'\(?(?:NULL|0x0|0)\)?\s*[!=]=\s*in_stack_([0-9a-fA-F]+)'), 'ptr', None),

    # String operations suggest char*
    (re.compile(r'(?:str(?:cpy|cat|len|cmp)|sprintf|printf).*in_stack_([0-9a-fA-F]+)'), 'char_ptr', None),

    # Arithmetic operations suggest integer
    (re.compile(r'in_stack_([0-9a-fA-F]+)\s*[+\-*/%]'), 'int', None),
    (re.compile(r'[+\-*/%]\s*in_stack_([0-9a-fA-F]+)'), 'int', None),

    # Bitwise operations suggest integer
    (re.compile(r'in_stack_([0-9a-fA-F]+)\s*[&|^]'), 'int', None),
    (re.compile(r'[&|^]\s*in_stack_([0-9a-fA-F]+)'), 'int', None),

    # Shift operations suggest integer
    (re.compile(r'in_stack_([0-9a-fA-F]+)\s*(?:<<|>>)'), 'int', None),

    # Float operations
    (re.compile(r'(?:sin|cos|tan|sqrt|fabs|floor|ceil)\s*\(\s*in_stack_([0-9a-fA-F]+)'), 'float', None),
]

# Common class name patterns for this pointer detection
CLASS_NAME_PATTERNS = [
    re.compile(r'^([A-Z][A-Za-z0-9]+)_'),  # ClassName_methodName
    re.compile(r'_([A-Z][A-Za-z0-9]+)_'),  # prefix_ClassName_methodName
    re.compile(r'([A-Z][A-Za-z0-9]+)::'),  # ClassName::methodName (if present)
]


def extract_class_name_from_function(func_name: str) -> Optional[str]:
    """Try to extract a class name from the function name.

    Args:
        func_name: Function name like "core_actor.cpp_CClassName_methodName_FUN_XXXX"

    Returns:
        Extracted class name or None
    """
    for pattern in CLASS_NAME_PATTERNS:
        match = pattern.search(func_name)
        if match:
            name = match.group(1)
            # Filter out common non-class prefixes
            if name not in ['FUN', 'DAT', 'PTR', 'LAB', 'SUB']:
                return name
    return None


def infer_type_from_usage(var_name: str, code: str, func_name: str = '') -> Dict[str, Any]:
    """Analyze how a variable is used to infer its likely type.

    Args:
        var_name: Variable name (e.g., "in_stack_00000004")
        code: Full decompiled code
        func_name: Function name for this pointer detection

    Returns:
        Dict with inferred type info:
            - 'likely_type': Best guess at the type
            - 'confidence': 'high', 'medium', 'low'
            - 'evidence': List of evidence strings
            - 'is_this_ptr': True if likely a this pointer
            - 'class_name': Extracted class name if applicable
    """
    result = {
        'likely_type': 'unknown',
        'confidence': 'low',
        'evidence': [],
        'is_this_ptr': False,
        'class_name': None,
    }

    # Collect all lines where this variable is used
    var_pattern = re.compile(re.escape(var_name))
    usage_lines = [line.strip() for line in code.split('\n') if var_pattern.search(line)]

    if not usage_lines:
        return result

    # Track type hints from different sources
    type_hints = defaultdict(list)
    explicit_casts = []

    for line in usage_lines:
        # Check for explicit casts first (highest confidence)
        cast_match = re.search(r'\((\w+)\s*\*?\s*\)\s*' + re.escape(var_name), line)
        if cast_match:
            cast_type = cast_match.group(1)
            if '*' in line[cast_match.start():cast_match.end()+2]:
                explicit_casts.append(f"{cast_type}*")
            else:
                explicit_casts.append(cast_type)
            type_hints['explicit_cast'].append(f"Cast to {cast_type}: {line[:60]}")

        # Check for member access (-> or .)
        if re.search(re.escape(var_name) + r'\s*->', line):
            type_hints['struct_ptr'].append(f"Pointer dereference: {line[:60]}")
        elif re.search(re.escape(var_name) + r'\s*\.', line):
            type_hints['struct'].append(f"Member access: {line[:60]}")

        # Check for array access
        if re.search(re.escape(var_name) + r'\s*\[', line):
            type_hints['array_ptr'].append(f"Array indexing: {line[:60]}")

        # Check for NULL comparison
        if re.search(re.escape(var_name) + r'\s*[!=]=\s*\(?(?:NULL|0x0|\(void\s*\*\)\s*0x0|0)\)?', line, re.IGNORECASE):
            type_hints['ptr'].append(f"NULL comparison: {line[:60]}")

        # Check for string functions
        if re.search(r'(?:str(?:cpy|cat|len|cmp|chr|str)|sprintf|printf|puts|gets)', line) and var_name in line:
            type_hints['char_ptr'].append(f"String function: {line[:60]}")

        # Check for arithmetic (suggests int)
        if re.search(re.escape(var_name) + r'\s*[+\-*/%&|^](?!=)', line):
            type_hints['int'].append(f"Arithmetic op: {line[:60]}")

    # Determine the most likely type
    if explicit_casts:
        # Use the most common explicit cast
        from collections import Counter
        most_common = Counter(explicit_casts).most_common(1)[0][0]
        result['likely_type'] = most_common
        result['confidence'] = 'high'
        result['evidence'] = type_hints.get('explicit_cast', [])[:3]
    elif type_hints['struct_ptr']:
        result['likely_type'] = 'void*'  # We know it's a struct pointer but not which
        result['confidence'] = 'medium'
        result['evidence'] = type_hints['struct_ptr'][:3]
    elif type_hints['char_ptr']:
        result['likely_type'] = 'char*'
        result['confidence'] = 'medium'
        result['evidence'] = type_hints['char_ptr'][:3]
    elif type_hints['ptr']:
        result['likely_type'] = 'void*'
        result['confidence'] = 'medium'
        result['evidence'] = type_hints['ptr'][:3]
    elif type_hints['array_ptr']:
        result['likely_type'] = 'void*'
        result['confidence'] = 'low'
        result['evidence'] = type_hints['array_ptr'][:3]
    elif type_hints['int']:
        result['likely_type'] = 'int'
        result['confidence'] = 'low'
        result['evidence'] = type_hints['int'][:3]

    return result


def detect_this_pointer(func_name: str, func_data: Dict, code: str, offset: int) -> Dict[str, Any]:
    """Detect if a parameter at a given offset is likely a 'this' pointer.

    Args:
        func_name: Function name
        func_data: Function JSON data
        code: Decompiled code
        offset: Stack offset to check

    Returns:
        Dict with detection results:
            - 'is_this_ptr': True if likely a this pointer
            - 'class_name': Detected class name
            - 'suggested_type': Suggested type string (e.g., "CClassName*")
            - 'confidence': 'high', 'medium', 'low'
            - 'evidence': List of evidence strings
    """
    result = {
        'is_this_ptr': False,
        'class_name': None,
        'suggested_type': None,
        'confidence': 'low',
        'evidence': [],
    }

    # Only consider offset +4 for __thiscall (first param after return addr)
    # or offset +8 for __cdecl methods where this is passed explicitly
    if offset not in [4, 8]:
        return result

    # Try to extract class name from function name
    class_name = extract_class_name_from_function(func_name)

    if class_name:
        result['class_name'] = class_name
        result['evidence'].append(f"Class name in function: {class_name}")

        # Build the variable name for this offset
        var_name = f"in_stack_{offset:08x}"

        # Check if the variable is used with member access
        if re.search(re.escape(var_name) + r'\s*->', code):
            result['is_this_ptr'] = True
            result['suggested_type'] = f"{class_name}*"
            result['confidence'] = 'high'
            result['evidence'].append("Used with -> operator (pointer dereference)")

        # Check if it's cast to the class type
        cast_pattern = re.compile(rf'\({class_name}\s*\*\s*\)\s*{re.escape(var_name)}')
        if cast_pattern.search(code):
            result['is_this_ptr'] = True
            result['suggested_type'] = f"{class_name}*"
            result['confidence'] = 'high'
            result['evidence'].append(f"Cast to {class_name}*")

        # Check if passed to methods of the same class
        method_call_pattern = re.compile(rf'{class_name}_\w+\s*\([^)]*{re.escape(var_name)}')
        if method_call_pattern.search(code):
            result['is_this_ptr'] = True
            if not result['suggested_type']:
                result['suggested_type'] = f"{class_name}*"
            if result['confidence'] != 'high':
                result['confidence'] = 'medium'
            result['evidence'].append(f"Passed to {class_name} methods")

        # Even without strong evidence, if we have a class name and offset +4,
        # it's likely a this pointer
        if not result['is_this_ptr'] and offset == 4:
            result['is_this_ptr'] = True
            result['suggested_type'] = f"{class_name}*"
            result['confidence'] = 'low'
            result['evidence'].append("Offset +4 with class name in function (likely this ptr)")

    return result


def analyze_unresolved_param(offset: int, var_name: str, code: str, func_name: str, func_data: Dict) -> Dict[str, Any]:
    """Comprehensive analysis of an unresolved stack parameter.

    Args:
        offset: Stack offset
        var_name: Variable name (e.g., "in_stack_00000004")
        code: Decompiled code
        func_name: Function name
        func_data: Function JSON data

    Returns:
        Dict with analysis results including type inference and this pointer detection
    """
    result = {
        'offset': offset,
        'var_name': var_name,
        'is_this_ptr': False,
        'class_name': None,
        'inferred_type': 'unknown',
        'suggested_type': 'int',  # Default fallback
        'confidence': 'low',
        'evidence': [],
    }

    # Check for this pointer first
    this_detection = detect_this_pointer(func_name, func_data, code, offset)
    if this_detection['is_this_ptr']:
        result['is_this_ptr'] = True
        result['class_name'] = this_detection['class_name']
        result['suggested_type'] = this_detection['suggested_type']
        result['confidence'] = this_detection['confidence']
        result['evidence'].extend(this_detection['evidence'])
        return result

    # General type inference
    type_info = infer_type_from_usage(var_name, code, func_name)
    result['inferred_type'] = type_info['likely_type']

    if type_info['likely_type'] != 'unknown':
        result['suggested_type'] = type_info['likely_type']
        result['confidence'] = type_info['confidence']
        result['evidence'].extend(type_info['evidence'])

    return result


def load_function_json(json_path: str) -> Optional[Dict]:
    """Load and parse a function JSON file."""
    try:
        with open(json_path, 'r') as f:
            return json.load(f)
    except (json.JSONDecodeError, IOError) as e:
        print(f"Warning: Failed to load {json_path}: {e}")
        return None


def load_function_code(json_path: str) -> Optional[str]:
    """Load the corresponding .cpp file for a function JSON."""
    # Try .keep.cpp first, then .cpp, then .c
    base_path = json_path[:-5]  # Remove '.json'
    for ext in ['.keep.cpp', '.cpp', '.keep.c', '.c']:
        code_path = base_path + ext
        if os.path.exists(code_path):
            try:
                with open(code_path, 'r') as f:
                    return f.read()
            except IOError:
                continue
    return None


def get_existing_stack_vars(func_data: Dict) -> Dict[int, Dict]:
    """Extract existing stack variables from function data.

    Returns:
        Dict mapping offset to variable info
    """
    variables = {}
    stack_frame = func_data.get('stack_frame', {})
    for var in stack_frame.get('variables', []):
        offset = var.get('offset', 0)
        variables[offset] = {
            'name': var.get('name', 'unknown'),
            'type': var.get('type', 'undefined'),
            'size': var.get('size', 0),
            'is_param': var.get('is_param', False),
        }
    return variables


def suggest_type_for_size(size: int) -> List[str]:
    """Suggest possible types for a given size."""
    return TYPE_SIZES.get(size, [f'undefined{size}' if size > 0 else 'undefined'])


def analyze_function(json_path: str) -> Optional[Dict]:
    """Analyze a single function for stack reference issues.

    Returns:
        Dict with analysis results, or None if no issues found
    """
    func_data = load_function_json(json_path)
    if not func_data:
        return None

    code = load_function_code(json_path)
    if not code:
        return None

    # Extract stack references from code
    references = extract_stack_references(code)
    if not references:
        return None

    # Get existing stack variables
    existing_vars = get_existing_stack_vars(func_data)

    # Find unresolved references (offsets not in existing variables)
    unresolved = defaultdict(list)
    for ref_type, offset_context_list in references.items():
        for offset, context in offset_context_list:
            if offset not in existing_vars:
                unresolved[ref_type].append((offset, context))

    if not unresolved:
        return None

    # Build analysis result
    func_info = func_data.get('function', {})
    func_name = func_info.get('name', 'unknown')
    result = {
        'name': func_name,
        'address': func_info.get('address', ''),
        'json_path': json_path,
        'stack_frame': func_data.get('stack_frame', {}),
        'existing_variables': existing_vars,
        'references': dict(references),
        'unresolved': dict(unresolved),
        'compilation_errors': [],
        'type_inference': {},  # offset -> inference result
    }

    # Perform type inference for each unresolved reference
    for ref_type, offset_context_list in unresolved.items():
        for offset, context in offset_context_list:
            if offset not in result['type_inference']:
                # Build variable name based on reference type
                if ref_type == 'in_stack':
                    var_name = f"in_stack_{offset & 0xFFFFFFFF:08x}"
                else:
                    var_name = f"stack0x{offset & 0xFFFFFFFF:08x}"

                # Perform comprehensive analysis
                inference = analyze_unresolved_param(
                    offset=offset,
                    var_name=var_name,
                    code=code,
                    func_name=func_name,
                    func_data=func_data
                )
                result['type_inference'][offset] = inference

    # Add relevant compilation errors
    comp_status = func_data.get('compilation_status', {})
    for error in comp_status.get('errors', []):
        msg = error.get('message', '')
        if 'stack' in msg.lower() or 'in_stack' in msg.lower():
            result['compilation_errors'].append(error)

    return result


def scan_all_functions(pseudocode_dir: str, skip_dirs: List[str] = None) -> List[Dict]:
    """Scan all function JSON files for stack issues.

    Args:
        pseudocode_dir: Base pseudocode directory
        skip_dirs: List of directory names to skip

    Returns:
        List of analysis results for functions with issues
    """
    if skip_dirs is None:
        skip_dirs = ['globals', 'crt', 'entry']

    src_dir = os.path.join(pseudocode_dir, 'src')
    if not os.path.isdir(src_dir):
        print(f"Error: Source directory not found: {src_dir}")
        return []

    results = []
    json_count = 0

    for root, dirs, files in os.walk(src_dir):
        # Skip specified directories
        rel_root = os.path.relpath(root, src_dir)
        skip_this = False
        for skip_dir in skip_dirs:
            if rel_root == skip_dir or rel_root.startswith(skip_dir + os.sep):
                skip_this = True
                break
        if skip_this:
            continue

        for f in files:
            if f.endswith('.json'):
                json_count += 1
                json_path = os.path.join(root, f)
                analysis = analyze_function(json_path)
                if analysis:
                    results.append(analysis)

    print(f"Scanned {json_count} functions, found {len(results)} with stack reference issues")
    return results


def format_offset(offset: int) -> str:
    """Format a stack offset for display."""
    if offset >= 0:
        return f"+0x{offset:x}"
    else:
        return f"-0x{-offset:x}"


def generate_report_text(results: List[Dict], verbose: bool = False) -> str:
    """Generate a text report of stack reference issues.

    Returns:
        Report as a string
    """
    lines = []

    if not results:
        return "No stack reference issues found!"

    # Group by issue type
    by_issue_type = defaultdict(list)
    for result in results:
        for ref_type, offset_context_list in result['unresolved'].items():
            for offset, context in offset_context_list:
                # Include type inference in the issue
                inference = result.get('type_inference', {}).get(offset, {})
                by_issue_type[ref_type].append({
                    'function': result['name'],
                    'address': result['address'],
                    'offset': offset,
                    'context': context,
                    'inference': inference,
                })

    # Collect type inference statistics
    this_ptr_count = 0
    high_conf_count = 0
    medium_conf_count = 0
    by_inferred_type = defaultdict(int)

    for result in results:
        for offset, inf in result.get('type_inference', {}).items():
            if inf.get('is_this_ptr'):
                this_ptr_count += 1
            if inf.get('confidence') == 'high':
                high_conf_count += 1
            elif inf.get('confidence') == 'medium':
                medium_conf_count += 1
            suggested_type = inf.get('suggested_type', 'unknown')
            by_inferred_type[suggested_type] += 1

    lines.append("")
    lines.append("=" * 80)
    lines.append("STACK REFERENCE ISSUE SUMMARY")
    lines.append("=" * 80)

    for ref_type, issues in sorted(by_issue_type.items()):
        # Separate positive (params) and negative (locals) offsets
        positive_issues = [i for i in issues if i['offset'] >= 0]
        negative_issues = [i for i in issues if i['offset'] < 0]

        lines.append(f"\n{ref_type.upper()} ({len(issues)} total issues)")
        lines.append("-" * 40)

        if positive_issues:
            lines.append(f"\n  MISSING PARAMETERS (positive offsets): {len(positive_issues)} issues")
            by_offset = defaultdict(list)
            for issue in positive_issues:
                by_offset[issue['offset']].append((issue['function'], issue['context'], issue.get('inference', {})))

            for offset, func_contexts_inf in sorted(by_offset.items()):
                func_contexts = [(f, c) for f, c, _ in func_contexts_inf]
                # Count this pointers at this offset
                this_count = sum(1 for _, _, inf in func_contexts_inf if inf.get('is_this_ptr'))
                this_note = f" [{this_count} likely this ptr]" if this_count > 0 else ""
                lines.append(f"    Offset {format_offset(offset)}: {len(func_contexts)} functions{this_note}")
                if verbose:
                    for func, context, inf in func_contexts_inf[:3]:
                        lines.append(f"      - {func}")
                        lines.append(f"        {context}")
                        if inf.get('suggested_type') and inf.get('confidence') != 'low':
                            lines.append(f"        >>> {inf.get('suggested_type')} [{inf.get('confidence')}]")
                    if len(func_contexts) > 3:
                        lines.append(f"      ... and {len(func_contexts) - 3} more")

        if negative_issues:
            lines.append(f"\n  UNRESOLVED LOCALS (negative offsets): {len(negative_issues)} issues")
            by_offset = defaultdict(list)
            for issue in negative_issues:
                by_offset[issue['offset']].append((issue['function'], issue['context']))

            # Show top 10 most common offsets
            sorted_offsets = sorted(by_offset.items(), key=lambda x: -len(x[1]))[:10]
            for offset, func_contexts in sorted_offsets:
                lines.append(f"    Offset {format_offset(offset)}: {len(func_contexts)} functions")
                if verbose:
                    for func, context in func_contexts[:3]:
                        lines.append(f"      - {func}")
                        lines.append(f"        {context}")
                    if len(func_contexts) > 3:
                        lines.append(f"      ... and {len(func_contexts) - 3} more")

            if len(by_offset) > 10:
                lines.append(f"    ... and {len(by_offset) - 10} more unique offsets")

    # Type inference summary
    lines.append("")
    lines.append("=" * 80)
    lines.append("TYPE INFERENCE SUMMARY")
    lines.append("=" * 80)
    lines.append(f"\n  Detected this pointers: {this_ptr_count}")
    lines.append(f"  High confidence inferences: {high_conf_count}")
    lines.append(f"  Medium confidence inferences: {medium_conf_count}")
    lines.append(f"\n  Inferred types breakdown:")
    for inferred_type, count in sorted(by_inferred_type.items(), key=lambda x: -x[1])[:10]:
        lines.append(f"    {inferred_type:<20}: {count}")

    lines.append("")
    lines.append("=" * 80)
    lines.append(f"TOTAL: {len(results)} functions with stack reference issues")
    lines.append("=" * 80)

    return '\n'.join(lines)


def print_analysis_report(results: List[Dict], verbose: bool = False):
    """Print a summary report of stack reference issues."""
    report = generate_report_text(results, verbose)
    print(report)


def print_function_detail(result: Dict):
    """Print detailed analysis for a single function."""
    print("\n" + "=" * 80)
    print(f"Function: {result['name']}")
    print(f"Address:  0x{result['address']}")
    print("=" * 80)

    # Stack frame info
    frame = result.get('stack_frame', {})
    print(f"\nStack Frame:")
    print(f"  Frame size: {frame.get('frame_size', 0)} bytes")
    print(f"  Local size: {frame.get('local_size', 0)} bytes")
    print(f"  Param offset: {frame.get('param_offset', 0)}")

    # Existing variables
    print(f"\nExisting Stack Variables:")
    for offset, var in sorted(result['existing_variables'].items()):
        param_marker = " (param)" if var['is_param'] else ""
        print(f"  {format_offset(offset):>10}: {var['name']:<20} {var['type']:<20} ({var['size']} bytes){param_marker}")

    # Unresolved references with type inference
    type_inference = result.get('type_inference', {})

    print(f"\nUnresolved Stack References:")
    for ref_type, offset_context_list in result['unresolved'].items():
        for offset, context in offset_context_list:
            print(f"  {format_offset(offset):>10}: {ref_type}")
            print(f"               Code: {context}")

            # Show type inference results
            if offset in type_inference:
                inf = type_inference[offset]
                if inf.get('is_this_ptr'):
                    print(f"               >>> THIS POINTER detected: {inf.get('suggested_type', '?')} [{inf.get('confidence', '?')} confidence]")
                elif inf.get('suggested_type') != 'int' or inf.get('confidence') != 'low':
                    print(f"               >>> Inferred type: {inf.get('suggested_type', '?')} [{inf.get('confidence', '?')} confidence]")

                # Show evidence
                for evidence in inf.get('evidence', [])[:2]:
                    print(f"                   - {evidence}")

    # Compilation errors
    if result['compilation_errors']:
        print(f"\nRelated Compilation Errors:")
        for error in result['compilation_errors']:
            print(f"  Line {error.get('line', '?')}: {error.get('message', '')}")


def export_issues(results: List[Dict], output_path: str, format: str = 'json'):
    """Export issues to a file for editing.

    The format allows users to specify fixes:

    {
      "functions": [
        {
          "name": "FUN_00401000",
          "address": "00401000",
          "fixes": [
            {"offset": "+0x1c", "type": "CStrList*", "name": "strList"},
            {"offset": "-0x10", "type": "int", "name": "counter"}
          ]
        }
      ]
    }
    """
    functions = []
    for result in results:
        func_entry = {
            'name': result['name'],
            'address': result['address'],
            'json_path': result['json_path'],
            'existing_vars': [],
            'unresolved': [],
            'fixes': [],  # User fills this in
        }

        # Add existing variables for context
        for offset, var in sorted(result['existing_variables'].items()):
            func_entry['existing_vars'].append({
                'offset': format_offset(offset),
                'name': var['name'],
                'type': var['type'],
                'size': var['size'],
            })

        # Add unresolved references with type inference
        type_inference = result.get('type_inference', {})
        for ref_type, offset_context_list in result['unresolved'].items():
            for offset, context in offset_context_list:
                # Get type inference for this offset
                inf = type_inference.get(offset, {})
                suggested_type = inf.get('suggested_type', '???')
                confidence = inf.get('confidence', 'low')
                is_this_ptr = inf.get('is_this_ptr', False)
                class_name = inf.get('class_name')

                # Generate a sensible variable name
                if is_this_ptr:
                    var_name = 'this_ptr'
                elif offset >= 0:
                    var_name = f'param_{offset:x}'
                else:
                    var_name = f'local_{abs(offset):x}'

                func_entry['unresolved'].append({
                    'offset': format_offset(offset),
                    'ref_type': ref_type,
                    'context': context,
                    'inference': {
                        'type': suggested_type,
                        'confidence': confidence,
                        'is_this_ptr': is_this_ptr,
                        'class_name': class_name,
                        'evidence': inf.get('evidence', []),
                    },
                    'suggested_fix': {
                        'type': suggested_type,
                        'name': var_name,
                    }
                })

        functions.append(func_entry)

    output = {
        'description': 'Stack reference fixes for Ghidra annotation',
        'instructions': [
            'Edit the "fixes" array for each function to specify correct types.',
            'Copy entries from "unresolved" to "fixes" and fill in the type/name.',
            'After editing, use --apply-fixes to generate Ghidra commands.',
        ],
        'functions': functions,
    }

    if format == 'yaml':
        try:
            import yaml
            with open(output_path, 'w') as f:
                yaml.dump(output, f, default_flow_style=False, sort_keys=False, allow_unicode=True)
        except ImportError:
            print("Warning: PyYAML not installed, falling back to JSON format")
            format = 'json'

    if format == 'json':
        with open(output_path, 'w') as f:
            json.dump(output, f, indent=2)

    print(f"Exported {len(functions)} functions with issues to {output_path}")


def generate_ghidra_commands(fixes: Dict) -> List[str]:
    """Generate Ghidra Python commands to apply stack variable fixes.

    Args:
        fixes: Dict with function address and list of fixes

    Returns:
        List of Ghidra Python commands
    """
    commands = []

    func_addr = fixes.get('address', '')
    for fix in fixes.get('fixes', []):
        offset_str = fix.get('offset', '')
        var_type = fix.get('type', '')
        var_name = fix.get('name', '')

        if not offset_str or not var_type:
            continue

        # Parse offset
        if offset_str.startswith('+'):
            offset = int(offset_str[1:], 16)
        elif offset_str.startswith('-'):
            offset = -int(offset_str[1:], 16)
        else:
            offset = int(offset_str, 16)

        # Generate Ghidra command
        cmd = f"""
# Add stack variable at offset {offset_str} for function 0x{func_addr}
func = getFunctionAt(toAddr(0x{func_addr}))
if func:
    dt = currentProgram.getDataTypeManager().getDataType("/{var_type}")
    if dt:
        func.getStackFrame().createVariable("{var_name}", {offset}, dt, SourceType.USER_DEFINED)
        print(f"Created {var_name} at offset {offset} with type {var_type}")
    else:
        print(f"Warning: Type '{var_type}' not found")
else:
    print(f"Warning: Function at 0x{func_addr} not found")
"""
        commands.append(cmd.strip())

    return commands


def generate_locals_report(results: List[Dict]) -> str:
    """Generate a detailed report of fixable local variables (negative offsets).

    These are stack variables that can be added in Ghidra to fix decompiler output.

    Returns:
        Report as a string
    """
    lines = []
    lines.append("=" * 100)
    lines.append("FIXABLE LOCAL VARIABLES REPORT")
    lines.append("These are negative-offset stack references that can be fixed by adding stack variables in Ghidra.")
    lines.append("=" * 100)

    # Filter to only functions with negative offset issues
    functions_with_locals = []
    for result in results:
        negative_refs = []
        for ref_type, offset_context_list in result.get('unresolved', {}).items():
            for offset, context in offset_context_list:
                if offset < 0:
                    # Get type inference if available
                    inf = result.get('type_inference', {}).get(offset, {})
                    negative_refs.append({
                        'offset': offset,
                        'context': context,
                        'ref_type': ref_type,
                        'suggested_type': inf.get('suggested_type', 'undefined4'),
                        'confidence': inf.get('confidence', 'low'),
                    })

        if negative_refs:
            # Check if function has stack alignment (which makes fixes less reliable)
            has_stack_alignment = False
            json_path = result.get('json_path', '')
            if json_path:
                try:
                    with open(json_path, 'r') as f:
                        func_data = json.load(f)
                        stack_patterns = func_data.get('stack_patterns', {})
                        if 'stack_alignment' in stack_patterns.get('pattern_types', []):
                            has_stack_alignment = True
                except:
                    pass

            functions_with_locals.append({
                'name': result['name'],
                'address': result['address'],
                'refs': sorted(negative_refs, key=lambda x: x['offset'], reverse=True),
                'existing_vars': result.get('existing_variables', {}),
                'has_stack_alignment': has_stack_alignment,
            })

    if not functions_with_locals:
        lines.append("\nNo fixable local variables found.")
        return '\n'.join(lines)

    lines.append(f"\nFound {len(functions_with_locals)} functions with fixable locals.")
    lines.append(f"Total local variable fixes: {sum(len(f['refs']) for f in functions_with_locals)}")

    # Separate functions with and without stack alignment
    clean_functions = [f for f in functions_with_locals if not f['has_stack_alignment']]
    aligned_functions = [f for f in functions_with_locals if f['has_stack_alignment']]

    if clean_functions:
        lines.append("\n")
        lines.append("=" * 100)
        lines.append(f"CLEAN FUNCTIONS (no stack alignment - {len(clean_functions)} functions)")
        lines.append("These fixes should work reliably.")
        lines.append("=" * 100)

        for func in sorted(clean_functions, key=lambda x: len(x['refs']), reverse=True):
            lines.append(f"\n{'─' * 80}")
            lines.append(f"Function: {func['name']}")
            lines.append(f"Address:  0x{func['address']}")
            lines.append(f"Locals to add ({len(func['refs'])}):")
            lines.append("")
            lines.append(f"  {'Offset':<12} {'Type':<20} {'Confidence':<12} {'Suggested Name':<20}")
            lines.append(f"  {'-'*12} {'-'*20} {'-'*12} {'-'*20}")

            for ref in func['refs']:
                offset = ref['offset']
                offset_str = f"-0x{abs(offset):x}"
                suggested_type = ref['suggested_type']
                confidence = ref['confidence']
                # Generate a sensible name
                var_name = f"local_{abs(offset):x}"
                lines.append(f"  {offset_str:<12} {suggested_type:<20} {confidence:<12} {var_name:<20}")

            # Show code context
            lines.append("")
            lines.append("  Code context:")
            for ref in func['refs'][:5]:  # Show first 5
                lines.append(f"    [{format_offset(ref['offset'])}] {ref['context'][:70]}")
            if len(func['refs']) > 5:
                lines.append(f"    ... and {len(func['refs']) - 5} more")

    if aligned_functions:
        lines.append("\n")
        lines.append("=" * 100)
        lines.append(f"STACK-ALIGNED FUNCTIONS ({len(aligned_functions)} functions)")
        lines.append("These have AND ESP instructions - fixes may not fully resolve issues.")
        lines.append("=" * 100)

        for func in sorted(aligned_functions, key=lambda x: len(x['refs']), reverse=True):
            lines.append(f"\n{'─' * 80}")
            lines.append(f"Function: {func['name']}")
            lines.append(f"Address:  0x{func['address']}")
            lines.append(f"⚠ HAS STACK ALIGNMENT - fixes may have limited effect")
            lines.append(f"Locals to add ({len(func['refs'])}):")
            lines.append("")
            lines.append(f"  {'Offset':<12} {'Type':<20} {'Confidence':<12} {'Suggested Name':<20}")
            lines.append(f"  {'-'*12} {'-'*20} {'-'*12} {'-'*20}")

            for ref in func['refs']:
                offset = ref['offset']
                offset_str = f"-0x{abs(offset):x}"
                suggested_type = ref['suggested_type']
                confidence = ref['confidence']
                var_name = f"local_{abs(offset):x}"
                lines.append(f"  {offset_str:<12} {suggested_type:<20} {confidence:<12} {var_name:<20}")

    # Summary by type
    lines.append("\n")
    lines.append("=" * 100)
    lines.append("SUMMARY BY INFERRED TYPE")
    lines.append("=" * 100)

    type_counts = defaultdict(int)
    for func in functions_with_locals:
        for ref in func['refs']:
            type_counts[ref['suggested_type']] += 1

    for typ, count in sorted(type_counts.items(), key=lambda x: -x[1]):
        lines.append(f"  {typ:<30}: {count}")

    return '\n'.join(lines)


def main():
    parser = argparse.ArgumentParser(
        description='Analyze and fix stack reference issues in decompiled functions',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__
    )

    parser.add_argument('pseudocode_dir',
                        help='Path to pseudocode directory (containing src/ and include/)')
    parser.add_argument('--function', '-f',
                        help='Analyze only this specific function (by name or address)')
    parser.add_argument('--export-issues', '-e', metavar='FILE',
                        help='Export issues to YAML file for editing')
    parser.add_argument('--apply-fixes', '-a', metavar='FILE',
                        help='Apply fixes from YAML file (generates Ghidra commands)')
    parser.add_argument('--verbose', '-v', action='store_true',
                        help='Show detailed output')
    parser.add_argument('--locals-report', '-l', action='store_true',
                        help='Generate report of fixable local variables (negative offsets only)')
    parser.add_argument('--skip-dirs', nargs='+', default=['globals', 'crt', 'entry'],
                        help='Directories to skip (default: globals crt entry)')

    args = parser.parse_args()

    # Validate pseudocode directory
    if not os.path.isdir(args.pseudocode_dir):
        print(f"Error: Directory not found: {args.pseudocode_dir}")
        return 1

    # Handle apply-fixes mode
    if args.apply_fixes:
        try:
            # Try to load as JSON first, then YAML
            with open(args.apply_fixes, 'r') as f:
                content = f.read()

            fixes_data = None
            try:
                fixes_data = json.loads(content)
            except json.JSONDecodeError:
                try:
                    import yaml
                    fixes_data = yaml.safe_load(content)
                except ImportError:
                    print("Error: File is not valid JSON and PyYAML is not installed for YAML parsing")
                    return 1

            if not fixes_data:
                print("Error: Could not parse fixes file")
                return 1

            print("# Ghidra Python commands to apply stack variable fixes")
            print("# Run these commands in Ghidra's Python console or as a script")
            print()

            for func_fixes in fixes_data.get('functions', []):
                if func_fixes.get('fixes'):
                    commands = generate_ghidra_commands(func_fixes)
                    for cmd in commands:
                        print(cmd)
                        print()

            return 0
        except Exception as e:
            print(f"Error loading fixes file: {e}")
            return 1

    # Scan for issues
    if args.function:
        # Find specific function
        src_dir = os.path.join(args.pseudocode_dir, 'src')
        found = False
        for root, dirs, files in os.walk(src_dir):
            for f in files:
                if f.endswith('.json'):
                    json_path = os.path.join(root, f)
                    func_data = load_function_json(json_path)
                    if func_data:
                        func_info = func_data.get('function', {})
                        if (args.function in func_info.get('name', '') or
                            args.function.lower() in func_info.get('address', '').lower()):
                            analysis = analyze_function(json_path)
                            if analysis:
                                print_function_detail(analysis)
                                found = True
        if not found:
            print(f"Function not found or has no stack issues: {args.function}")
            return 1
    else:
        # Scan all functions
        results = scan_all_functions(args.pseudocode_dir, args.skip_dirs)

        if args.export_issues:
            # Determine format from file extension
            if args.export_issues.endswith('.yaml') or args.export_issues.endswith('.yml'):
                export_issues(results, args.export_issues, format='yaml')
            else:
                export_issues(results, args.export_issues, format='json')
        elif args.locals_report:
            # Generate locals-only report
            report_text = generate_locals_report(results)
            print(report_text)

            # Save report to reports directory
            pseudocode_dir = os.path.abspath(args.pseudocode_dir)
            if pseudocode_dir.endswith('/pseudocode') or pseudocode_dir.endswith('\\pseudocode'):
                base_dir = os.path.dirname(pseudocode_dir)
                reports_dir = os.path.join(base_dir, 'reports')
            else:
                reports_dir = os.path.join(os.path.dirname(pseudocode_dir), 'reports')

            if os.path.isdir(reports_dir):
                report_path = os.path.join(reports_dir, 'fixable_locals_report.txt')
                try:
                    with open(report_path, 'w') as f:
                        f.write(report_text)
                    print(f"\nReport saved to: {report_path}")
                except IOError as e:
                    print(f"\nWarning: Could not save report: {e}")
        else:
            # Generate and print full report
            report_text = generate_report_text(results, verbose=True)
            print(report_text)

            # Save report to reports directory
            # Derive reports dir from pseudocode_dir (annotations/X/pseudocode -> annotations/X/reports)
            pseudocode_dir = os.path.abspath(args.pseudocode_dir)
            if pseudocode_dir.endswith('/pseudocode') or pseudocode_dir.endswith('\\pseudocode'):
                base_dir = os.path.dirname(pseudocode_dir)
                reports_dir = os.path.join(base_dir, 'reports')
            else:
                # Fallback: look for reports dir relative to pseudocode
                reports_dir = os.path.join(os.path.dirname(pseudocode_dir), 'reports')

            if os.path.isdir(reports_dir):
                report_path = os.path.join(reports_dir, 'stack_issues_report.txt')
                try:
                    with open(report_path, 'w') as f:
                        f.write(report_text)
                    print(f"\nReport saved to: {report_path}")
                except IOError as e:
                    print(f"\nWarning: Could not save report: {e}")

            if results and not args.verbose:
                print("\nTip: Use --verbose for more details, or --export-issues to create a fixes file")

    return 0


if __name__ == '__main__':
    exit(main())
