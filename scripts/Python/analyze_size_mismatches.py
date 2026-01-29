#!/usr/bin/env python3
# Analyze size mismatches in decompiled code
# Detects the ._X_Y_ pattern indicating wrong type sizes
#
# Usage:
#   python3 analyze_size_mismatches.py <project_dir> <project_name> <program_name>
#
# Examples:
#   python3 analyze_size_mismatches.py ./projects NocturneEdit nocedit.exe
#   python3 analyze_size_mismatches.py ./projects NocturneEdit nocedit.exe --limit 100

import os
import sys
import argparse

# Add the ghidra_annotations package to path
script_dir = os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, os.path.join(script_dir, 'ghidra_annotations'))


def main():
    """Entry point for PyGhidra headless execution."""
    parser = argparse.ArgumentParser(
        description="Analyze decompiled code for size mismatches (._X_Y_ patterns)",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  # Analyze all functions
  %(prog)s ./projects NocturneEdit nocedit.exe

  # Limit to first 100 functions (for testing)
  %(prog)s ./projects NocturneEdit nocedit.exe --limit 100
"""
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--limit", "-l", type=int, help="Limit number of functions to analyze (for testing)")
    args = parser.parse_args()

    # Import pyghidra
    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        print("Install the PyGhidra package from your Ghidra installation.")
        sys.exit(1)

    # Start PyGhidra
    print("Starting PyGhidra...")
    pyghidra.start()

    # Now we can import Ghidra-dependent modules
    from ghidra_annotations.util.log import setup_logging
    setup_logging("size_mismatches")

    from ghidra_annotations.annotations.size_mismatches import export_size_mismatches

    # Convert to absolute path
    project_path = os.path.abspath(args.project_path)

    # Determine output path
    repo_root = script_dir
    while repo_root and repo_root != '/':
        if os.path.exists(os.path.join(repo_root, 'annotations')):
            break
        repo_root = os.path.dirname(repo_root)

    output_path = os.path.join(repo_root, 'annotations', args.program_name, 'reports')

    # Open the project and program
    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)
    print("Output path: %s" % output_path)
    print("=" * 60)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:
            export_size_mismatches(currentProgram, output_path, limit=args.limit)
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    # Force exit - JVM shutdown can hang
    os._exit(exit_code)


if __name__ == "__main__":
    main()
