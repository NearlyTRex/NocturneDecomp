#!/usr/bin/env python3
# Regenerates SVG charts from existing function JSON data.
#
# Usage:
#   python regenerate_charts.py [annotations_dir]
#
# Example:
#   python regenerate_charts.py                                    # Uses default: annotations/nocedit.exe
#   python regenerate_charts.py ./annotations/nocedit.exe          # Explicit path

import os
import sys
import argparse
import importlib.util

# Direct module loading to avoid Ghidra-dependent imports in package __init__
this_dir = os.path.dirname(os.path.abspath(__file__))

def load_module_direct(module_name, file_path):
    """Load a Python module directly from file path."""
    spec = importlib.util.spec_from_file_location(module_name, file_path)
    module = importlib.util.module_from_spec(spec)
    sys.modules[module_name] = module
    spec.loader.exec_module(module)
    return module

# Load log module first (dependency of analysis)
log_path = os.path.join(this_dir, 'ghidra_annotations', 'util', 'log.py')
log_module = load_module_direct('ghidra_annotations.util.log', log_path)
log_info = log_module.log_info
setup_logging = log_module.setup_logging

# Load analysis module
analysis_path = os.path.join(this_dir, 'ghidra_annotations', 'annotations', 'pseudocode', 'analysis.py')
analysis_module = load_module_direct('ghidra_annotations.annotations.pseudocode.analysis', analysis_path)
load_function_data = analysis_module.load_function_data
analyze_by_virtual_file = analysis_module.analyze_by_virtual_file
generate_graphs = analysis_module.generate_graphs


def main():
    # Initialize logging
    setup_logging('regenerate_charts')

    parser = argparse.ArgumentParser(
        description='Regenerate SVG charts from function JSON data'
    )
    parser.add_argument(
        'annotations_dir',
        nargs='?',
        default=None,
        help='Path to annotations directory (default: annotations/nocedit.exe)'
    )
    args = parser.parse_args()

    # Determine annotations directory
    if args.annotations_dir:
        annotations_dir = os.path.abspath(args.annotations_dir)
    else:
        # Default to annotations/nocedit.exe relative to repo root
        repo_root = os.path.dirname(os.path.dirname(this_dir))
        annotations_dir = os.path.join(repo_root, 'annotations', 'nocedit.exe')

    pseudocode_src_dir = os.path.join(annotations_dir, 'pseudocode', 'src')
    output_dir = os.path.join(annotations_dir, 'reports')

    # Validate paths
    if not os.path.isdir(pseudocode_src_dir):
        print(f"Error: Pseudocode source directory not found: {pseudocode_src_dir}")
        sys.exit(1)

    # Create output directory if needed
    os.makedirs(output_dir, exist_ok=True)

    # Load function data
    log_info(f"Loading function data from {pseudocode_src_dir}")
    functions = load_function_data(pseudocode_src_dir)
    log_info(f"Loaded {len(functions):,} functions")

    if not functions:
        print("No function data found")
        sys.exit(1)

    # Analyze by virtual file
    log_info("Analyzing by virtual file...")
    files = analyze_by_virtual_file(functions)
    log_info(f"Found {len(files):,} virtual files")

    # Generate charts
    log_info(f"Generating SVG charts to {output_dir}")
    generate_graphs(functions, files, output_dir)

    log_info("Done!")

    # Print summary
    total_funcs = len(functions)
    clean_funcs = sum(1 for f in functions if f.get('complexity', {}).get('suspect_count', 0) == 0)
    print(f"\nSummary:")
    print(f"  Total functions: {total_funcs:,}")
    print(f"  Clean functions: {clean_funcs:,} ({clean_funcs*100.0/total_funcs:.1f}%)")
    print(f"\nCharts written to: {output_dir}")


if __name__ == '__main__':
    main()
