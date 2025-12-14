#!/usr/bin/env python3
# Imports saved Ghidra annotations from JSON files into the current program.
# PyGhidra-compatible headless version.
#
# Usage (PyGhidra headless - recommended):
#   python import_annotations.py <project_dir> <project_name> <program_name> <input_folder> [categories]
#
# Example:
#   python import_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe
#
#   # Import only specific categories:
#   python import_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types
#   python import_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types,functions
#
# Available categories:
#   all              - Import everything (default)
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
    "metadata", "type_info", "vtables",
]

def get_import_categories():
    """Get import categories map - must be called after PyGhidra starts"""
    from ghidra_annotations.annotations import (
        import_data_types, import_functions, import_comments,
        import_bookmarks, import_applied_arrays, import_applied_basic_types,
        import_applied_enums, import_applied_pointers, import_applied_strings,
        import_applied_structs, import_applied_unions, import_symbols_class,
        import_symbols_label, import_symbols_namespace, import_equates,
        import_external_imports, import_cross_references, import_entry_points,
        import_memory_layout, import_metadata, import_type_info,
        import_vtables
    )
    return {
        "data_types": import_data_types,
        "functions": import_functions,
        "comments": import_comments,
        "bookmarks": import_bookmarks,
        "applied_arrays": import_applied_arrays,
        "applied_basic_types": import_applied_basic_types,
        "applied_enums": import_applied_enums,
        "applied_pointers": import_applied_pointers,
        "applied_strings": import_applied_strings,
        "applied_structs": import_applied_structs,
        "applied_unions": import_applied_unions,
        "symbols_class": import_symbols_class,
        "symbols_label": import_symbols_label,
        "symbols_namespace": import_symbols_namespace,
        "equates": import_equates,
        "external_imports": import_external_imports,
        "cross_references": import_cross_references,
        "entry_points": import_entry_points,
        "memory_layout": import_memory_layout,
        "metadata": import_metadata,
        "type_info": import_type_info,
        "vtables": import_vtables,
    }

def get_delete_categories():
    """Get delete categories map - must be called after PyGhidra starts"""
    from ghidra_annotations.annotations import (
        delete_data_types, delete_functions, delete_comments,
        delete_bookmarks, delete_applied_arrays, delete_applied_basic_types,
        delete_applied_enums, delete_applied_pointers, delete_applied_strings,
        delete_applied_structs, delete_applied_unions, delete_symbols_class,
        delete_symbols_label, delete_symbols_namespace, delete_equates,
        delete_external_imports, delete_cross_references, delete_entry_points,
        delete_memory_layout, delete_metadata, delete_type_info,
        delete_vtables
    )
    return {
        "data_types": delete_data_types,
        "functions": delete_functions,
        "comments": delete_comments,
        "bookmarks": delete_bookmarks,
        "applied_arrays": delete_applied_arrays,
        "applied_basic_types": delete_applied_basic_types,
        "applied_enums": delete_applied_enums,
        "applied_pointers": delete_applied_pointers,
        "applied_strings": delete_applied_strings,
        "applied_structs": delete_applied_structs,
        "applied_unions": delete_applied_unions,
        "symbols_class": delete_symbols_class,
        "symbols_label": delete_symbols_label,
        "symbols_namespace": delete_symbols_namespace,
        "equates": delete_equates,
        "external_imports": delete_external_imports,
        "cross_references": delete_cross_references,
        "entry_points": delete_entry_points,
        "memory_layout": delete_memory_layout,
        "metadata": delete_metadata,
        "type_info": delete_type_info,
        "vtables": delete_vtables,
    }

def import_selected_categories(currentProgram, folder, categories, import_categories, delete_categories, log_info, log_error):
    for category in categories:
        category = category.strip().lower()
        if category in import_categories:
            log_info("Deleting existing annotations for category: %s" % category)
            delete_categories[category](currentProgram, folder)
            log_info("Importing category: %s" % category)
            import_categories[category](currentProgram, folder)
        else:
            log_error("Unknown category: %s" % category)
            log_error("Available categories: %s" % ", ".join(sorted(import_categories.keys())))

def run_import(currentProgram, script_args):
    """Main import function that takes currentProgram and args"""

    # Import after PyGhidra started
    from ghidra_annotations.annotations import delete_annotations, import_annotations
    from ghidra_annotations.util.log import setup_logging, log_info, log_error

    # Setup logging
    setup_logging(name="ghidra_import", filename="ghidra_import.log")

    # Get import categories
    import_categories = get_import_categories()
    delete_categories = get_delete_categories()

    # Parse arguments
    if len(script_args) < 1:
        log_error("Usage: import_annotations.py <project_dir> <project_name> <program_name> <input_folder> [categories]")
        log_error("  input_folder: Directory to import annotations from")
        log_error("  categories:   Comma-separated list of categories to import (optional)")
        log_error("                Use 'all' or omit to import everything")
        log_error("")
        log_error("Available categories: %s" % ", ".join(sorted(import_categories.keys())))
        return

    # Parse input folder and optional categories
    input_folder = script_args[0]
    categories = None
    if len(script_args) >= 2:
        categories_arg = script_args[1]
        if categories_arg.lower() != "all":
            categories = [c.strip() for c in categories_arg.split(",")]

    # Verify input folder exists
    if not os.path.exists(input_folder):
        log_error("Input folder does not exist: %s" % input_folder)
        return

    # Log what is going to be imported
    log_info("=" * 60)
    log_info("IMPORT ANNOTATIONS")
    log_info("=" * 60)
    log_info("Input folder: %s" % input_folder)
    log_info("Program: %s" % currentProgram.getName())
    if categories:
        log_info("Categories: %s" % ", ".join(categories))
    else:
        log_info("Categories: all")
    log_info("=" * 60)

    # Import annotations
    if categories:
        import_selected_categories(currentProgram, input_folder, categories, import_categories, delete_categories, log_info, log_error)
    else:
        delete_annotations(currentProgram, input_folder)
        import_annotations(currentProgram, input_folder)

    # Import complete
    log_info("=" * 60)
    log_info("IMPORT COMPLETE")
    log_info("=" * 60)


def main():
    """Entry point for PyGhidra headless execution"""
    parser = argparse.ArgumentParser(
        description="Import Ghidra annotations from JSON files",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  %(prog)s ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe
  %(prog)s ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types
  %(prog)s ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types,functions

Available categories:
  """ + ", ".join(sorted(CATEGORY_NAMES))
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("input_folder", help="Directory to import annotations from")
    parser.add_argument("categories", nargs="?", default="all",
                        help="Comma-separated list of categories to import (default: all)")
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

            # Build script args
            script_args = [args.input_folder]
            if args.categories != "all":
                script_args.append(args.categories)

            # Run import
            run_import(currentProgram, script_args)

        # Save and close
        project.save()
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
