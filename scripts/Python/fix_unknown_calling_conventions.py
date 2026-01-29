#!/usr/bin/env python3
# Convert undefined/unknown calling conventions to __cdecl
#
# Usage:
#   python3 fix_unknown_calling_conventions.py <project_dir> <project_name> <program_name>
#
# Examples:
#   python3 fix_unknown_calling_conventions.py ./projects NocturneEdit nocedit.exe
#   python3 fix_unknown_calling_conventions.py ./projects NocturneEdit nocedit.exe --dry-run

import os
import sys
import argparse
from collections import defaultdict

# Add the ghidra_annotations package to path
script_dir = os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, os.path.join(script_dir, 'ghidra_annotations'))


def is_crt_function(func):
    """Check if a function is a CRT (C runtime) function.

    CRT functions are identified by:
    - Function name starting with 'crt_'
    - Function name containing 'crt_' (e.g., 'crt_unknown.c_')
    """
    name = func.getName().lower()
    return name.startswith('crt_') or '_crt_' in name or name.startswith('crt.')


def fix_calling_conventions(program, dry_run=False, target_convention='__cdecl', include_crt=False):
    """Convert undefined/unknown calling conventions to the target convention.

    Args:
        program: Ghidra program object
        dry_run: If True, don't actually make changes
        target_convention: Convention to change to (default: __cdecl)
        include_crt: If True, also convert CRT functions (default: False)

    Returns:
        Dict with statistics
    """
    fm = program.getFunctionManager()

    # Verify the target convention exists by checking the default
    default_cc = fm.getDefaultCallingConvention()
    print("Default calling convention: %s" % default_cc.getName())
    print("Target calling convention: %s" % target_convention)
    if not include_crt:
        print("Skipping CRT functions (use --include-crt to include)")

    # Conventions to convert
    convert_from = {'unknown', 'undefined', '', None}

    stats = {
        'total_functions': 0,
        'converted': 0,
        'already_set': defaultdict(int),
        'skipped_crt': 0,
        'errors': 0,
        'converted_functions': [],
    }

    # Collect all functions first (avoid iterator issues during transaction)
    print("Collecting functions...")
    all_functions = list(fm.getFunctions(True))
    total = len(all_functions)
    print("Scanning %d functions..." % total)

    # Collect functions that need conversion first (in dry run or for actual conversion)
    functions_to_convert = []
    for func in all_functions:
        stats['total_functions'] += 1

        # Skip CRT functions unless explicitly included
        if not include_crt and is_crt_function(func):
            stats['skipped_crt'] += 1
            continue

        current = func.getCallingConventionName()

        if current in convert_from or current is None:
            functions_to_convert.append({
                'func': func,
                'name': func.getName(),
                'address': str(func.getEntryPoint()),
                'old_convention': current or 'None',
            })
        else:
            stats['already_set'][current] += 1

    print("Functions to convert: %d" % len(functions_to_convert))

    if dry_run:
        # In dry run, just record what would be converted
        stats['converted'] = len(functions_to_convert)
        stats['converted_functions'] = [
            {'name': f['name'], 'address': f['address'], 'old_convention': f['old_convention']}
            for f in functions_to_convert
        ]
    else:
        # Actually convert the functions
        print("Starting conversion...")
        transaction_id = program.startTransaction("Fix calling conventions")
        try:
            for i, f_info in enumerate(functions_to_convert):
                if i % 500 == 0 and i > 0:
                    print("  Progress: %d/%d" % (i, len(functions_to_convert)))
                try:
                    f_info['func'].setCallingConvention(target_convention)
                    stats['converted'] += 1
                    stats['converted_functions'].append({
                        'name': f_info['name'],
                        'address': f_info['address'],
                        'old_convention': f_info['old_convention'],
                    })
                except Exception as e:
                    print("  Error converting %s: %s" % (f_info['name'], str(e)))
                    stats['errors'] += 1
        finally:
            program.endTransaction(transaction_id, True)
            print("Transaction committed")

    return stats


def main():
    """Entry point for PyGhidra headless execution."""
    parser = argparse.ArgumentParser(
        description="Convert undefined/unknown calling conventions to __cdecl",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  # Convert all unknown conventions to __cdecl (excludes CRT functions)
  %(prog)s ./projects NocturneEdit nocedit.exe

  # Dry run - show what would be changed without making changes
  %(prog)s ./projects NocturneEdit nocedit.exe --dry-run

  # Include CRT functions in conversion
  %(prog)s ./projects NocturneEdit nocedit.exe --include-crt

  # Convert to a different convention
  %(prog)s ./projects NocturneEdit nocedit.exe --convention __stdcall
"""
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--dry-run", "-n", action="store_true",
                        help="Show what would be changed without making changes")
    parser.add_argument("--convention", "-c", default="__cdecl",
                        help="Target calling convention (default: __cdecl)")
    parser.add_argument("--include-crt", action="store_true",
                        help="Include CRT (C runtime) functions (excluded by default)")
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

    # Convert to absolute path
    project_path = os.path.abspath(args.project_path)

    # Open the project and program
    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)
    if args.dry_run:
        print("DRY RUN MODE - no changes will be made")
    print("=" * 60)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:
            stats = fix_calling_conventions(
                currentProgram,
                dry_run=args.dry_run,
                target_convention=args.convention,
                include_crt=args.include_crt
            )

            # Print results
            print("\n" + "=" * 60)
            print("RESULTS")
            print("=" * 60)
            print("Total functions: %d" % stats['total_functions'])
            print("Functions converted to %s: %d" % (args.convention, stats['converted']))
            if stats['skipped_crt'] > 0:
                print("CRT functions skipped: %d" % stats['skipped_crt'])
            if stats['errors'] > 0:
                print("Errors: %d" % stats['errors'])

            print("\nFunctions already set:")
            for conv, count in sorted(stats['already_set'].items(), key=lambda x: -x[1]):
                print("  %-20s %5d" % (conv, count))

            if args.dry_run:
                print("\n(Dry run - no changes were made)")
            else:
                # Save the program
                currentProgram.save("Fixed calling conventions", None)
                print("\nChanges have been saved to the program.")

            # Show some examples of converted functions
            if stats['converted_functions']:
                print("\nExamples of converted functions:")
                for f in stats['converted_functions'][:20]:
                    print("  %s (%s) - was: %s" % (f['name'], f['address'], f['old_convention']))
                if len(stats['converted_functions']) > 20:
                    print("  ... and %d more" % (len(stats['converted_functions']) - 20))

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
