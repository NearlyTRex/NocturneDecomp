#!/usr/bin/env python3
# Analyze functions for pass-by-value candidates
# Finds pointer parameters that might have been pass-by-value originally
#
# Usage:
#   python3 analyze_pass_by_value.py <project_dir> <project_name> <program_name>
#
# Examples:
#   python3 analyze_pass_by_value.py ./projects NocturneEdit nocedit.exe
#   python3 analyze_pass_by_value.py ./projects NocturneEdit nocedit.exe --limit 100

import os
import sys
import argparse

# Add the ghidra_annotations package to path
script_dir = os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, os.path.join(script_dir, 'ghidra_annotations'))


def main():
    """Entry point for PyGhidra headless execution."""
    parser = argparse.ArgumentParser(
        description="Analyze functions for pass-by-value candidates",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  # Analyze all functions
  %(prog)s ./projects NocturneEdit nocedit.exe

  # Limit to first 100 functions (for testing)
  %(prog)s ./projects NocturneEdit nocedit.exe --limit 100

This script finds pointer parameters that might have been pass-by-value
in the original source code. Detection methods:

Decompiler analysis:
  - Pointer is only read, never written through
  - Pointer contents are immediately copied to a local variable
  - Pointed-to type is small (<=16 bytes)
  - No null checks (suggests always-valid value)

Assembly analysis (stronger evidence):
  - Direct stack accesses at parameter offset without pointer indirection
  - Multiple accesses spanning the struct size (e.g., [EBP+8], [EBP+12], [EBP+16] for 12-byte struct)
  - No "load pointer then dereference" pattern

Candidates confirmed by assembly analysis are marked as "asm-confirmed" and
have higher confidence.
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
    setup_logging("pass_by_value")

    from ghidra_annotations.annotations.pass_by_value_candidates import export_pass_by_value_candidates

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
            export_pass_by_value_candidates(currentProgram, output_path, limit=args.limit)
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
