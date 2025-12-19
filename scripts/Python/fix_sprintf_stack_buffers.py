#!/usr/bin/env python3
"""
Find and fix sprintf/vsprintf calls that use raw stack references.

This script scans decompiled .cpp files for patterns like:
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee4, "format string");

And generates JSON custom replacements to convert them to proper local buffers:
    char buffer[256];
    sprintf(buffer, "format string");

Usage:
    python fix_sprintf_stack_buffers.py [--dry-run] [--apply] [--preview PATTERN] [path]

Options:
    --dry-run       Show what would be changed without modifying files (default)
    --apply         Actually write the JSON replacements
    --report        Show detailed findings for each function
    --preview PAT   Preview transformation for functions matching pattern
    path            Optional path to scan (defaults to annotations/nocedit.exe/pseudocode)

Note: Functions with multiple sprintf buffers may have additional stack references
that aren't automatically fixed if Ghidra generated different offsets. Use --preview
to verify the transformation looks correct before applying.
"""

import argparse
import json
import os
import re
import sys
from collections import defaultdict
from pathlib import Path


# Pattern to match stack references used as first arg to sprintf/vsprintf
SPRINTF_STACK_PATTERN = re.compile(
    r'(crt_stdio_c_(?:v?sprintf)_FUN_[0-9a-fA-F]+)\s*\(\s*(&stack0x[0-9a-fA-F]+)'
)

# Pattern to match any stack reference
STACK_REF_PATTERN = re.compile(r'&stack0x([0-9a-fA-F]+)')


def parse_stack_offset(hex_str):
    """Convert stack hex address to signed offset.

    Stack addresses like 0xfffffee4 are negative offsets from the frame base.
    """
    value = int(hex_str, 16)
    # Convert to signed 32-bit
    if value >= 0x80000000:
        value -= 0x100000000
    return value


def calculate_buffer_size(stack_offset, stack_frame):
    """Calculate buffer size from stack offset and frame info.

    Finds the next variable above this offset to determine the buffer extent.
    """
    variables = stack_frame.get('variables', [])

    # Sort variables by offset (most negative first)
    sorted_vars = sorted(
        [v for v in variables if not v.get('is_param', False)],
        key=lambda v: v.get('offset', 0)
    )

    # Find the next variable after our offset
    for var in sorted_vars:
        var_offset = var.get('offset', 0)
        if var_offset > stack_offset:
            # This variable is above our buffer
            size = var_offset - stack_offset
            return size

    # If no variable found above, use distance to frame base (offset 0)
    # But cap at reasonable size
    size = abs(stack_offset)
    return min(size, 512)


def find_sprintf_stack_refs(cpp_path):
    """Find sprintf/vsprintf calls with stack reference buffers in a .cpp file.

    Returns list of (stack_ref, function_name) tuples.
    """
    results = []

    try:
        with open(cpp_path, 'r') as f:
            content = f.read()
    except Exception as e:
        return results

    for match in SPRINTF_STACK_PATTERN.finditer(content):
        func_name = match.group(1)
        stack_ref = match.group(2)
        results.append((stack_ref, func_name))

    return results


def find_all_uses_of_stack_ref(cpp_path, stack_ref):
    """Find all uses of a specific stack reference in a file."""
    try:
        with open(cpp_path, 'r') as f:
            content = f.read()
    except Exception:
        return 0

    return content.count(stack_ref)


def load_json_metadata(json_path):
    """Load the JSON metadata for a function."""
    try:
        with open(json_path, 'r') as f:
            return json.load(f)
    except Exception:
        return None


def generate_replacements(stack_ref, buffer_size, buffer_name="buffer"):
    """Generate the JSON replacement entries for a stack buffer.

    Creates two replacements:
    1. Add buffer declaration after the opening brace
    2. Replace all &stack0x... with buffer name
    """
    replacements = []

    # Replacement to add buffer declaration
    # We'll insert after the first line that contains just "{"
    replacements.append({
        "description": f"Declare {buffer_name} array for sprintf (was {stack_ref})",
        "find": r"(\n\{)\n",
        "replace": f"\\1\n  char {buffer_name}[{buffer_size}];\n",
        "regex": True
    })

    # Replacement to change stack ref to buffer name
    replacements.append({
        "description": f"Replace stack reference with {buffer_name}",
        "find": stack_ref,
        "replace": buffer_name
    })

    return replacements


def analyze_function(cpp_path, json_path):
    """Analyze a function for sprintf stack buffer patterns.

    Returns dict with analysis results and suggested replacements.
    """
    result = {
        'cpp_path': cpp_path,
        'json_path': json_path,
        'stack_refs': [],
        'suggested_replacements': [],
        'existing_replacements': [],
        'needs_fix': False
    }

    # Find sprintf calls with stack refs
    sprintf_refs = find_sprintf_stack_refs(cpp_path)
    if not sprintf_refs:
        return result

    # Load JSON for stack frame info
    metadata = load_json_metadata(json_path)
    if not metadata:
        return result

    stack_frame = metadata.get('stack_frame', {})
    existing_replacements = metadata.get('replacements', [])
    result['existing_replacements'] = existing_replacements

    # Check existing replacements for already-fixed stack refs
    existing_finds = set()
    for repl in existing_replacements:
        find_text = repl.get('find', '')
        if '&stack0x' in find_text or 'stack0x' in find_text:
            existing_finds.add(find_text)

    # Group by unique stack reference
    unique_refs = {}
    for stack_ref, func_name in sprintf_refs:
        if stack_ref not in unique_refs:
            unique_refs[stack_ref] = {
                'ref': stack_ref,
                'functions': [],
                'use_count': find_all_uses_of_stack_ref(cpp_path, stack_ref)
            }
        unique_refs[stack_ref]['functions'].append(func_name)

    # Generate replacements for each unique stack ref
    buffer_index = 0
    buffer_declarations = []

    for stack_ref, info in unique_refs.items():
        # Skip if already has a replacement
        if stack_ref in existing_finds:
            continue

        # Parse the offset
        hex_offset = stack_ref.replace('&stack0x', '')
        offset = parse_stack_offset(hex_offset)

        # Calculate buffer size
        buffer_size = calculate_buffer_size(offset, stack_frame)

        # Generate descriptive buffer name with stack offset
        buffer_name = f"stack_buffer_{hex_offset}"
        buffer_index += 1

        result['stack_refs'].append({
            'ref': stack_ref,
            'offset': offset,
            'calculated_size': buffer_size,
            'use_count': info['use_count'],
            'buffer_name': buffer_name
        })

        # Collect buffer declaration
        buffer_declarations.append(f"  char {buffer_name}[{buffer_size}];")

        # Add the stack ref replacement
        result['suggested_replacements'].append({
            "description": f"Replace stack reference with {buffer_name}",
            "find": stack_ref,
            "replace": buffer_name
        })

        result['needs_fix'] = True

    # If we have buffer declarations, add a single regex replacement to insert them all
    # The pattern matches the opening brace line (with optional blank line before)
    if buffer_declarations:
        declarations_str = "\n".join(buffer_declarations)
        result['suggested_replacements'].insert(0, {
            "description": "Add buffer declarations for sprintf",
            "find": r"(\n\n?\{\n)",
            "replace": f"\\1{declarations_str}\n",
            "regex": True
        })

    return result


def find_all_functions(base_path):
    """Find all .cpp files with corresponding .json files."""
    functions = []

    for root, dirs, files in os.walk(base_path):
        for filename in files:
            if filename.endswith('.cpp'):
                cpp_path = os.path.join(root, filename)
                # Only replace extension in filename, not in directory path
                json_filename = filename[:-4] + '.json'
                json_path = os.path.join(root, json_filename)
                if os.path.exists(json_path):
                    functions.append((cpp_path, json_path))

    return functions


def order_replacement_keys(repl):
    """Order replacement dict keys: description, find, regex, replace."""
    ordered = {}
    for key in ['description', 'find', 'regex', 'replace']:
        if key in repl:
            ordered[key] = repl[key]
    return ordered


def apply_replacements(json_path, new_replacements, dry_run=True):
    """Add new replacements to a JSON file with sorted keys."""
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
    except Exception as e:
        print(f"  Error reading {json_path}: {e}")
        return False

    existing = data.get('replacements', [])

    # Order keys in each replacement
    ordered_replacements = [order_replacement_keys(r) for r in new_replacements]

    # Add new replacements
    all_replacements = existing + ordered_replacements

    # Remove old replacements key and rebuild with sorted keys
    if 'replacements' in data:
        del data['replacements']

    # Rebuild dict with sorted keys, inserting replacements in right place
    sorted_data = {}
    for key in sorted(list(data.keys()) + ['replacements']):
        if key == 'replacements':
            sorted_data['replacements'] = all_replacements
        else:
            sorted_data[key] = data[key]

    if dry_run:
        print(f"  Would add {len(new_replacements)} replacement(s) to {json_path}")
        return True

    try:
        with open(json_path, 'w') as f:
            json.dump(sorted_data, f, indent=2)
        print(f"  Added {len(new_replacements)} replacement(s) to {json_path}")
        return True
    except Exception as e:
        print(f"  Error writing {json_path}: {e}")
        return False


def main():
    parser = argparse.ArgumentParser(
        description='Find and fix sprintf/vsprintf calls with stack reference buffers'
    )
    parser.add_argument(
        'path',
        nargs='?',
        default=None,
        help='Path to scan (defaults to annotations/nocedit.exe/pseudocode)'
    )
    parser.add_argument(
        '--dry-run',
        action='store_true',
        default=True,
        help='Show what would be changed without modifying files (default)'
    )
    parser.add_argument(
        '--apply',
        action='store_true',
        help='Actually write the JSON replacements'
    )
    parser.add_argument(
        '--report',
        action='store_true',
        help='Generate a detailed report of all findings'
    )
    parser.add_argument(
        '--preview',
        type=str,
        metavar='PATTERN',
        help='Preview transformation for functions matching PATTERN'
    )
    parser.add_argument(
        '--single-buffer',
        action='store_true',
        help='Only process functions with a single sprintf buffer (cleanest fixes)'
    )

    args = parser.parse_args()

    # Find base path
    if args.path:
        base_path = args.path
    else:
        # Try to find annotations directory relative to script
        script_dir = Path(__file__).parent
        base_path = script_dir.parent.parent / 'annotations' / 'nocedit.exe' / 'pseudocode'
        if not base_path.exists():
            base_path = Path('annotations/nocedit.exe/pseudocode')

    if not os.path.exists(base_path):
        print(f"Error: Path not found: {base_path}")
        sys.exit(1)

    print(f"Scanning: {base_path}")
    print()

    # Find all functions
    functions = find_all_functions(base_path)
    print(f"Found {len(functions)} functions with JSON metadata")
    print()

    # Analyze each function
    needs_fix = []
    total_stack_refs = 0

    for cpp_path, json_path in functions:
        result = analyze_function(cpp_path, json_path)
        if result['needs_fix']:
            needs_fix.append(result)
            total_stack_refs += len(result['stack_refs'])

    # Filter for single-buffer functions if requested
    if args.single_buffer:
        single_buffer = [r for r in needs_fix if len(r['stack_refs']) == 1]
        multi_buffer = len(needs_fix) - len(single_buffer)
        needs_fix = single_buffer
        total_stack_refs = len(needs_fix)
        print(f"Found {len(needs_fix)} single-buffer functions (filtered out {multi_buffer} multi-buffer)")
    else:
        print(f"Found {len(needs_fix)} functions with sprintf stack buffers to fix")

    print(f"Total stack references: {total_stack_refs}")
    print()

    if not needs_fix:
        print("Nothing to do!")
        return

    # Handle preview mode
    if args.preview:
        pattern = args.preview.lower()
        matched = [r for r in needs_fix if pattern in r['cpp_path'].lower()]
        if not matched:
            print(f"No functions matching '{args.preview}' found")
            return

        for result in matched[:3]:  # Limit to 3 previews
            print(f"\n{'=' * 80}")
            print(f"PREVIEW: {result['cpp_path'].split('pseudocode/')[-1]}")
            print('=' * 80)

            # Read original file
            try:
                with open(result['cpp_path'], 'r') as f:
                    original = f.read()
            except Exception as e:
                print(f"Error reading file: {e}")
                continue

            # Apply replacements
            transformed = original
            for repl in result['suggested_replacements']:
                find_text = repl.get('find', '')
                replace_text = repl.get('replace', '')
                use_regex = repl.get('regex', False)

                if use_regex:
                    transformed = re.sub(find_text, replace_text, transformed)
                else:
                    transformed = transformed.replace(find_text, replace_text)

            # Show diff-like output
            print("\nTransformed code (first 80 lines):")
            print("-" * 40)
            for i, line in enumerate(transformed.split('\n')[:80], 1):
                print(f"{i:3}: {line}")

        return

    # Group by source file for reporting
    by_source = defaultdict(list)
    for result in needs_fix:
        # Extract source file from path
        cpp_path = result['cpp_path']
        parts = cpp_path.split('/src/')
        if len(parts) > 1:
            source_file = parts[1].split('/')[0]
        else:
            source_file = os.path.basename(os.path.dirname(cpp_path))
        by_source[source_file].append(result)

    # Print summary by source file
    print("Functions by source file:")
    print("-" * 60)
    for source_file in sorted(by_source.keys()):
        results = by_source[source_file]
        ref_count = sum(len(r['stack_refs']) for r in results)
        print(f"  {source_file}: {len(results)} functions, {ref_count} stack refs")
    print()

    # Print detailed findings
    if args.report:
        print("Detailed findings:")
        print("=" * 80)
        for result in needs_fix:
            rel_path = result['cpp_path'].split('pseudocode/')[-1] if 'pseudocode/' in result['cpp_path'] else result['cpp_path']
            print(f"\n{rel_path}")
            for ref_info in result['stack_refs']:
                print(f"  {ref_info['ref']}")
                print(f"    Offset: {ref_info['offset']}")
                print(f"    Calculated size: {ref_info['calculated_size']} bytes")
                print(f"    Uses in file: {ref_info['use_count']}")
                print(f"    Suggested name: {ref_info['buffer_name']}")
        print()

    # Apply or show dry-run
    dry_run = not args.apply

    if dry_run:
        print("DRY RUN - No changes will be made. Use --apply to write changes.")
        print()

    applied_count = 0
    for result in needs_fix:
        if result['suggested_replacements']:
            rel_path = result['cpp_path'].split('pseudocode/')[-1] if 'pseudocode/' in result['cpp_path'] else result['cpp_path']
            print(f"{rel_path}:")
            for ref_info in result['stack_refs']:
                print(f"  {ref_info['ref']} -> {ref_info['buffer_name']} ({ref_info['calculated_size']} bytes)")

            if apply_replacements(result['json_path'], result['suggested_replacements'], dry_run):
                applied_count += 1

    print()
    if dry_run:
        print(f"Would update {applied_count} JSON files. Run with --apply to make changes.")
    else:
        print(f"Updated {applied_count} JSON files.")


if __name__ == '__main__':
    main()
