#!/usr/bin/env python3
# Syncs Ghidra annotations from and to JSON files with the current program.
# PyGhidra-compatible headless version.
#
# This script performs a full sync: imports annotations from JSON files,
# then exports annotations back to JSON files. This ensures the Ghidra
# database and JSON files are synchronized.
#
# Usage (PyGhidra headless - recommended):
#   python sync_annotations.py <project_dir> <project_name> <program_name> <sync_folder> [categories]
#
# Example:
#   python sync_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe
#
#   # Sync only specific categories:
#   python sync_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types
#   python sync_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types,functions
#
# Available categories:
#   all              - Sync everything (default)
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
#   pseudocode       - Decompiled pseudocode (export only)
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

# Categories that only support export (not import)
EXPORT_ONLY_CATEGORIES = ["pseudocode"]

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

def sync_selected_categories(currentProgram, folder, categories, import_categories, export_categories, delete_categories, log_info, log_error):
    for category in categories:
        category = category.strip().lower()
        if category in export_categories:
            # Import first (if this category supports import)
            if category in import_categories:
                log_info("Deleting existing annotations for category: %s" % category)
                delete_categories[category](currentProgram, folder)
                log_info("Importing category: %s" % category)
                import_categories[category](currentProgram, folder)
            elif category in EXPORT_ONLY_CATEGORIES:
                log_info("Category %s is export-only, skipping import" % category)
            # Then export
            log_info("Exporting category: %s" % category)
            export_categories[category](currentProgram, folder)
        else:
            log_error("Unknown category: %s" % category)
            log_error("Available categories: %s" % ", ".join(sorted(export_categories.keys())))

def run_sync(currentProgram, script_args):
    """Main sync function that takes currentProgram and args"""

    # Import after PyGhidra started
    from ghidra_annotations.annotations import delete_annotations, import_annotations, export_annotations
    from ghidra_annotations.util.log import setup_logging, log_info, log_error

    # Setup logging
    setup_logging(name="ghidra_sync", filename="ghidra_sync.log")

    # Get categories
    import_categories = get_import_categories()
    export_categories = get_export_categories()
    delete_categories = get_delete_categories()

    # Parse arguments
    if len(script_args) < 1:
        log_error("Usage: sync_annotations.py <project_dir> <project_name> <program_name> <sync_folder> [categories]")
        log_error("  sync_folder: Directory to sync annotations from/to")
        log_error("  categories:  Comma-separated list of categories to sync (optional)")
        log_error("               Use 'all' or omit to sync everything")
        log_error("")
        log_error("Available categories: %s" % ", ".join(sorted(export_categories.keys())))
        return

    # Parse sync folder and optional categories
    sync_folder = script_args[0]
    categories = None
    if len(script_args) >= 2:
        categories_arg = script_args[1]
        if categories_arg.lower() != "all":
            categories = [c.strip() for c in categories_arg.split(",")]

    # Ensure sync folder exists
    if not os.path.exists(sync_folder):
        os.makedirs(sync_folder)
        log_info("Created sync folder: %s" % sync_folder)

    # Log what is going to be synced
    log_info("=" * 60)
    log_info("SYNC ANNOTATIONS")
    log_info("=" * 60)
    log_info("Sync folder: %s" % sync_folder)
    log_info("Program: %s" % currentProgram.getName())
    if categories:
        log_info("Categories: %s" % ", ".join(categories))
    else:
        log_info("Categories: all")
    log_info("=" * 60)

    # Sync annotations
    if categories:
        sync_selected_categories(currentProgram, sync_folder, categories, import_categories, export_categories, delete_categories, log_info, log_error)
    else:
        # Full sync: delete, import, export
        log_info("Phase 1: Deleting existing annotations...")
        delete_annotations(currentProgram, sync_folder)
        log_info("Phase 2: Importing annotations...")
        import_annotations(currentProgram, sync_folder)
        log_info("Phase 3: Exporting annotations...")
        export_annotations(currentProgram, sync_folder)

    # Sync complete
    log_info("=" * 60)
    log_info("SYNC COMPLETE")
    log_info("=" * 60)


def main():
    """Entry point for PyGhidra headless execution"""
    parser = argparse.ArgumentParser(
        description="Sync Ghidra annotations from and to JSON files",
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
    parser.add_argument("sync_folder", help="Directory to sync annotations from/to")
    parser.add_argument("categories", nargs="?", default="all",
                        help="Comma-separated list of categories to sync (default: all)")
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
            script_args = [args.sync_folder]
            if args.categories != "all":
                script_args.append(args.categories)

            # Run sync
            run_sync(currentProgram, script_args)

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
