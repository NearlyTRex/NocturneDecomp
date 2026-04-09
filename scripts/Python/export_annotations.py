#!/usr/bin/env python3
# Exports Ghidra annotations from the current program to JSON files.
# PyGhidra-compatible headless version.
#
# Usage (PyGhidra headless - recommended):
#   python export_annotations.py <project_dir> <project_name> <program_name> <output_folder> [categories]
#
# Example:
#   python export_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe
#
#   # Export only specific categories:
#   python export_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe pseudocode
#   python export_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types,functions
#
# Available categories:
#   all              - Export everything (default)
#   data_types       - Data type definitions
#   functions        - Function signatures
#   comments         - Code comments
#   bookmarks        - Bookmarks
#   applied_arrays   - Applied array types
#   applied_basic_types - Applied basic types
#   applied_enums    - Applied enum types
#   applied_pointers - Applied pointer types
#   applied_strings  - Applied string types
#   applied_structs  - Applied struct types
#   applied_unions   - Applied union types
#   symbols_class    - Class symbols
#   symbols_label    - Label symbols
#   symbols_namespace - Namespace symbols
#   equates          - Equates
#   external_imports - External imports
#   cross_references - Cross references
#   entry_points     - Entry points
#   memory_layout    - Memory layout
#   metadata         - Program metadata
#   type_info        - Type info
#   vtables          - Virtual tables
#   pseudocode       - Decompiled pseudocode
#
#@author NearlyTRex
#@category Annotations

import os
import sys
import argparse

# Add library path
this_dir = os.path.dirname(os.path.abspath(__file__))
if this_dir not in sys.path:
    sys.path.insert(0, this_dir)

# Category names (for help text before PyGhidra starts)
CATEGORY_NAMES = [
    "data_types", "functions", "comments", "bookmarks",
    "applied_arrays", "applied_basic_types", "applied_enums",
    "applied_pointers", "applied_strings", "applied_structs",
    "applied_unions", "symbols_class", "symbols_label",
    "symbols_namespace", "equates", "external_imports",
    "cross_references", "entry_points", "memory_layout",
    "metadata", "type_info", "vtables", "pseudocode",
]

def get_export_categories():
    """Get export categories map - must be called after PyGhidra starts"""
    from ghidra_annotations.annotations import (
        export_data_types, export_functions, export_comments,
        export_bookmarks, export_applied_arrays, export_applied_basic_types,
        export_applied_enums, export_applied_pointers, export_applied_strings,
        export_applied_structs, export_applied_unions, export_symbols_class,
        export_symbols_label, export_symbols_namespace, export_equates,
        export_external_imports, export_cross_references, export_entry_points,
        export_memory_layout, export_metadata, export_type_info,
        export_vtables, export_pseudocode
    )
    return {
        "data_types": export_data_types,
        "functions": export_functions,
        "comments": export_comments,
        "bookmarks": export_bookmarks,
        "applied_arrays": export_applied_arrays,
        "applied_basic_types": export_applied_basic_types,
        "applied_enums": export_applied_enums,
        "applied_pointers": export_applied_pointers,
        "applied_strings": export_applied_strings,
        "applied_structs": export_applied_structs,
        "applied_unions": export_applied_unions,
        "symbols_class": export_symbols_class,
        "symbols_label": export_symbols_label,
        "symbols_namespace": export_symbols_namespace,
        "equates": export_equates,
        "external_imports": export_external_imports,
        "cross_references": export_cross_references,
        "entry_points": export_entry_points,
        "memory_layout": export_memory_layout,
        "metadata": export_metadata,
        "type_info": export_type_info,
        "vtables": export_vtables,
        "pseudocode": export_pseudocode,
    }

def export_selected_categories(currentProgram, folder, categories, export_categories,
                               log_info, log_error, strict=False, deep_analysis=False):
    for category in categories:
        category = category.strip().lower()
        if category in export_categories:
            log_info("Exporting category: %s" % category)
            # Pass strict and deep_analysis to pseudocode export
            if category == "pseudocode":
                export_categories[category](currentProgram, folder, strict=strict,
                                           deep_analysis=deep_analysis)
            else:
                export_categories[category](currentProgram, folder)
        else:
            log_error("Unknown category: %s" % category)
            log_error("Available categories: %s" % ", ".join(sorted(export_categories.keys())))

def run_export(currentProgram, output_folder, categories=None, strict=False,
               deep_analysis=False):
    """Main export function that takes currentProgram and args.

    Args:
        currentProgram: The Ghidra program
        output_folder: Directory to export annotations to
        categories: List of category names to export, or None for all
        strict: If True, raise error on compilation failures
        deep_analysis: If True, use deep static analysis mode
    """

    # Import after PyGhidra started
    from ghidra_annotations.annotations import export_annotations
    from ghidra_annotations.util.log import setup_logging, log_info, log_error

    # Setup logging
    setup_logging(name="ghidra_export", filename="ghidra_export.log")

    # Get export categories
    export_categories = get_export_categories()

    # Ensure output folder exists
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
        log_info("Created output folder: %s" % output_folder)

    # Log what is going to be exported
    log_info("=" * 60)
    log_info("EXPORT ANNOTATIONS")
    log_info("=" * 60)
    log_info("Output folder: %s" % output_folder)
    log_info("Program: %s" % currentProgram.getName())
    if categories:
        log_info("Categories: %s" % ", ".join(categories))
    else:
        log_info("Categories: all")
    log_info("Strict mode: %s" % strict)
    log_info("=" * 60)

    # Export annotations
    if categories:
        export_selected_categories(currentProgram, output_folder, categories, export_categories,
                                   log_info, log_error, strict=strict,
                                   deep_analysis=deep_analysis)
    else:
        export_annotations(currentProgram, output_folder, strict=strict,
                          deep_analysis=deep_analysis)

    # Export complete
    log_info("=" * 60)
    log_info("EXPORT COMPLETE")
    log_info("=" * 60)


def main():
    """Entry point for PyGhidra headless execution"""
    parser = argparse.ArgumentParser(
        description="Export Ghidra annotations to JSON files",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  %(prog)s ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe
  %(prog)s ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe pseudocode
  %(prog)s ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types,functions
  %(prog)s ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe pseudocode --strict

Available categories:
  """ + ", ".join(sorted(CATEGORY_NAMES))
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("output_folder", help="Directory to export annotations to")
    parser.add_argument("categories", nargs="?", default="all",
                        help="Comma-separated list of categories to export (default: all)")
    parser.add_argument("--strict", action="store_true",
                        help="Exit with error if compilation fails (for pseudocode export)")
    parser.add_argument("--deep-analysis", action="store_true",
                        help="Deep static analysis mode: longer timeouts, more thorough checks")
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

    # Open the project and program
    print("Opening project: %s/%s" % (args.project_path, args.project_name))
    print("Opening program: %s" % args.program_name)
    exit_code = 0
    try:
        project = pyghidra.open_project(args.project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:

            # Parse categories
            categories = None
            if args.categories.lower() != "all":
                categories = [c.strip() for c in args.categories.split(",")]

            # Run export
            run_export(currentProgram, args.output_folder, categories=categories,
                       strict=args.strict, deep_analysis=args.deep_analysis)
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
