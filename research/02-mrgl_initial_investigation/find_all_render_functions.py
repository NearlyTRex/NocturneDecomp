#!/usr/bin/env python3
"""
Find ALL Render Functions in Nocturne Codebase
Discovers render functions by looking for functions that set:
- g_ScanlineRenderFunc
- g_RenderStateFlags
- g_RenderStateFlag2
This captures functions we missed in the initial engine_3d.c analysis.
"""

import os
import re
import json
from pathlib import Path

# Base directory for pseudocode annotations
BASE_DIR = "annotations/nocedit.exe/pseudocode"

def extract_function_info_from_path(filepath):
    """Extract function name, address, and file info from file path."""
    filename = os.path.basename(filepath)
    # Pattern: functionName_FUN_address.ext
    match = re.search(r'(.+)_FUN_([0-9a-fA-F]+)\.(c|cpp)$', filename)
    if match:
        function_name = match.group(1)
        address = match.group(2)
        extension = match.group(3)
        return {
            'function_name': function_name,
            'address': address,
            'file_extension': extension,
            'filepath': filepath,
            'filename': filename
        }
    return None

def extract_flag_assignments(file_content):
    """Extract flag assignments from file content."""
    flags = []
    flag2_values = []

    # Pattern for g_RenderStateFlags = 0xXXX;
    flag_pattern = r'g_RenderStateFlags\s*=\s*(0x[0-9a-fA-F]+|[0-9]+)'
    flag_matches = re.findall(flag_pattern, file_content, re.IGNORECASE)
    flags.extend(flag_matches)

    # Pattern for g_RenderStateFlag2 = X;
    flag2_pattern = r'g_RenderStateFlag2\s*=\s*([0-9]+)'
    flag2_matches = re.findall(flag2_pattern, file_content, re.IGNORECASE)
    flag2_values.extend(flag2_matches)

    return flags, flag2_values

def find_scanline_assignments(file_content):
    """Find g_ScanlineRenderFunc assignments."""
    scanline_pattern = r'g_ScanlineRenderFunc\s*=\s*([^;]+);'
    matches = re.findall(scanline_pattern, file_content, re.IGNORECASE)
    return matches

def analyze_all_render_functions():
    """Find all functions that manipulate render state."""

    print("Scanning entire codebase for render functions...")

    # Find all files that reference render state
    render_files = []

    # Walk through all pseudocode files
    for root, dirs, files in os.walk(BASE_DIR):
        for file in files:
            if file.endswith('.c') or file.endswith('.cpp'):
                filepath = os.path.join(root, file)

                try:
                    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read()

                    # Check if file contains render state manipulations
                    has_render_flags = 'g_RenderStateFlags' in content
                    has_render_flag2 = 'g_RenderStateFlag2' in content
                    has_scanline_func = 'g_ScanlineRenderFunc' in content

                    if has_render_flags or has_render_flag2 or has_scanline_func:
                        func_info = extract_function_info_from_path(filepath)
                        if func_info:
                            flags, flag2_values = extract_flag_assignments(content)
                            scanline_funcs = find_scanline_assignments(content)

                            func_info.update({
                                'flags': flags,
                                'flag2_values': flag2_values,
                                'scanline_functions': scanline_funcs,
                                'has_render_flags': has_render_flags,
                                'has_render_flag2': has_render_flag2,
                                'has_scanline_func': has_scanline_func,
                                'relative_path': os.path.relpath(filepath, BASE_DIR)
                            })
                            render_files.append(func_info)

                except Exception as e:
                    print(f"Error processing {filepath}: {e}")
                    continue

    return render_files

def categorize_functions(render_functions):
    """Categorize functions by source file/module."""
    categories = {}

    for func in render_functions:
        # Extract module from relative path
        path_parts = func['relative_path'].split('/')
        if len(path_parts) >= 2:
            module = '/'.join(path_parts[0:2])  # e.g. "src/engine"
            submodule = path_parts[2] if len(path_parts) > 2 else 'unknown'
        else:
            module = 'unknown'
            submodule = 'unknown'

        if module not in categories:
            categories[module] = {}
        if submodule not in categories[module]:
            categories[module][submodule] = []

        categories[module][submodule].append(func)

    return categories

def generate_comprehensive_report(render_functions):
    """Generate comprehensive analysis report."""

    categories = categorize_functions(render_functions)

    # Generate summary
    total_functions = len(render_functions)
    functions_with_flags = sum(1 for f in render_functions if f['flags'])
    functions_with_flag2 = sum(1 for f in render_functions if f['flag2_values'])
    functions_with_scanline = sum(1 for f in render_functions if f['scanline_functions'])

    print(f"\n=== COMPREHENSIVE RENDER FUNCTION ANALYSIS ===")
    print(f"Total render functions found: {total_functions}")
    print(f"Functions setting g_RenderStateFlags: {functions_with_flags}")
    print(f"Functions setting g_RenderStateFlag2: {functions_with_flag2}")
    print(f"Functions setting g_ScanlineRenderFunc: {functions_with_scanline}")

    # Print by category
    print(f"\n=== FUNCTIONS BY MODULE ===")
    for module, submodules in sorted(categories.items()):
        print(f"\n{module}:")
        for submodule, functions in sorted(submodules.items()):
            print(f"  {submodule}: {len(functions)} functions")
            for func in sorted(functions, key=lambda x: x['address']):
                flags_str = ', '.join(func['flags']) if func['flags'] else 'None'
                flag2_str = ', '.join(func['flag2_values']) if func['flag2_values'] else 'None'
                print(f"    {func['address']} - {func['function_name']}")
                if func['flags'] or func['flag2_values']:
                    print(f"      Flags: {flags_str}, Flag2: {flag2_str}")

    # Collect unique flag values
    all_flags = set()
    all_flag2s = set()

    for func in render_functions:
        all_flags.update(func['flags'])
        all_flag2s.update(func['flag2_values'])

    print(f"\n=== UNIQUE FLAG VALUES FOUND ===")
    print(f"g_RenderStateFlags values ({len(all_flags)} unique):")
    for flag in sorted(all_flags, key=lambda x: int(x, 16) if x.startswith('0x') else int(x)):
        print(f"  {flag}")

    print(f"\ng_RenderStateFlag2 values ({len(all_flag2s)} unique):")
    for flag2 in sorted(all_flag2s, key=int):
        print(f"  {flag2}")

    # Save detailed JSON report
    with open("all_render_functions_analysis.json", "w") as f:
        json.dump(render_functions, f, indent=2)

    # Save human-readable report
    with open("all_render_functions_report.txt", "w") as f:
        f.write("# Complete Nocturne Render Functions Analysis\n")
        f.write("# ALL functions that manipulate g_RenderStateFlags, g_RenderStateFlag2, or g_ScanlineRenderFunc\n\n")

        f.write(f"SUMMARY:\n")
        f.write(f"- Total render functions found: {total_functions}\n")
        f.write(f"- Functions setting g_RenderStateFlags: {functions_with_flags}\n")
        f.write(f"- Functions setting g_RenderStateFlag2: {functions_with_flag2}\n")
        f.write(f"- Functions setting g_ScanlineRenderFunc: {functions_with_scanline}\n\n")

        f.write("FUNCTIONS BY MODULE:\n")
        for module, submodules in sorted(categories.items()):
            f.write(f"\n{module}:\n")
            for submodule, functions in sorted(submodules.items()):
                f.write(f"  {submodule} ({len(functions)} functions):\n")
                for func in sorted(functions, key=lambda x: x['address']):
                    flags_str = ', '.join(func['flags']) if func['flags'] else 'None'
                    flag2_str = ', '.join(func['flag2_values']) if func['flag2_values'] else 'None'
                    scanline_str = ', '.join(func['scanline_functions']) if func['scanline_functions'] else 'None'

                    f.write(f"    {func['address']} | {func['function_name']}\n")
                    f.write(f"      File: {func['relative_path']}\n")
                    f.write(f"      Flags: {flags_str}\n")
                    f.write(f"      Flag2: {flag2_str}\n")
                    f.write(f"      Scanline: {scanline_str}\n")
                    f.write(f"\n")

        f.write(f"\nUNIQUE FLAG VALUES:\n")
        f.write(f"g_RenderStateFlags values found:\n")
        for flag in sorted(all_flags, key=lambda x: int(x, 16) if x.startswith('0x') else int(x)):
            f.write(f"  {flag}\n")

        f.write(f"\ng_RenderStateFlag2 values found:\n")
        for flag2 in sorted(all_flag2s, key=int):
            f.write(f"  {flag2}\n")

    print(f"\nDetailed analysis saved to:")
    print(f"  - all_render_functions_analysis.json (machine-readable)")
    print(f"  - all_render_functions_report.txt (human-readable)")

    return render_functions

def main():
    print("Nocturne Complete Render Function Discovery")
    print("=" * 50)

    render_functions = analyze_all_render_functions()
    generate_comprehensive_report(render_functions)

if __name__ == "__main__":
    main()