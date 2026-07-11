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


def list_project_program_paths(project):
    """Return a list of (pathname, name) for every Program in the project.

    Walks the project's folder tree recursively so programs nested in subfolders
    are included. Only domain files whose content type is "Program" are returned;
    data type archives and other file types are skipped. Pathnames start with "/"
    as required by pyghidra.program_context().
    """
    program_paths = []

    def walk(folder):
        for domain_file in folder.getFiles():
            try:
                content_type = domain_file.getContentType()
            except Exception:
                content_type = None
            if content_type == "Program":
                program_paths.append((domain_file.getPathname(), domain_file.getName()))
        for subfolder in folder.getFolders():
            walk(subfolder)

    walk(project.getProjectData().getRootFolder())
    return program_paths


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
    parser.add_argument("--all-programs", action="store_true",
                        help="Export every program in the project. In this mode program_name is "
                             "ignored and output_folder is treated as a parent directory: each "
                             "program is exported to <output_folder>/<program_name>.")
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

    # Parse categories (shared across every exported program)
    categories = None
    if args.categories.lower() != "all":
        categories = [c.strip() for c in args.categories.split(",")]

    # Open the project
    print("Opening project: %s/%s" % (args.project_path, args.project_name))
    exit_code = 0
    project = None
    try:
        project = pyghidra.open_project(args.project_path, args.project_name)

        # Determine which programs to export
        if args.all_programs:
            program_paths = list_project_program_paths(project)
            if not program_paths:
                print("ERROR: No programs found in project '%s'" % args.project_name)
                os._exit(1)
            print("Found %d program(s): %s" % (
                len(program_paths), ", ".join(name for _, name in program_paths)))
        else:
            program_paths = [("/" + args.program_name, args.program_name)]

        # Export each program. In --all-programs mode output_folder is a parent
        # directory and each program lands in <output_folder>/<program_name>
        # (matching the existing annotations/<program_name> layout). In single-
        # program mode output_folder is used verbatim for backward compatibility.
        for pathname, name in program_paths:
            if args.all_programs:
                out_folder = os.path.join(args.output_folder, name)
            else:
                out_folder = args.output_folder

            print("Opening program: %s -> %s" % (pathname, out_folder))
            try:
                with pyghidra.program_context(project, pathname) as currentProgram:
                    run_export(currentProgram, out_folder, categories=categories,
                               strict=args.strict, deep_analysis=args.deep_analysis)
            except SystemExit as e:
                # A library deep in the export (e.g. data-type dependency resolution)
                # may call sys.exit() on a per-program problem. SystemExit is a
                # BaseException, so it would otherwise bypass the handler below and
                # abort the whole batch, skipping the remaining programs.
                code = e.code if isinstance(e.code, int) else 1
                print("ERROR exporting '%s': export exited with code %s" % (name, code))
                exit_code = code or 1
            except Exception as e:
                print("ERROR exporting '%s': %s" % (name, str(e)))
                import traceback
                traceback.print_exc()
                exit_code = 1
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1
    finally:
        if project is not None:
            project.close()

    # Force exit - JVM shutdown can hang
    os._exit(exit_code)

if __name__ == "__main__":
    main()
