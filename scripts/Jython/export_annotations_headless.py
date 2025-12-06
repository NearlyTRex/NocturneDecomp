# Exports Ghidra annotations from the current program to JSON files.
# Headless-compatible version - no GUI dialogs.
#
# Usage (headless):
#   analyzeHeadless <project_dir> <project_name> \
#       -process <program_name> \
#       -scriptPath /path/to/scripts/Jython \
#       -postScript export_annotations_headless.py <output_folder> [categories]
#
# Example:
#   analyzeHeadless ./projects NocturneProject \
#       -process nocedit.exe \
#       -scriptPath ./scripts/Jython \
#       -postScript export_annotations_headless.py ./annotations/nocedit.exe
#
#   # Export only specific categories:
#   ... -postScript export_annotations_headless.py ./annotations/nocedit.exe pseudocode
#   ... -postScript export_annotations_headless.py ./annotations/nocedit.exe data_types,functions
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
# You can also run from within Ghidra's Script Manager if you set the
# script arguments in the script's properties.
#
#@author NearlyTRex
#@category Annotations

# Imports
import os
import sys

# Add library path
this_dir = os.path.dirname(getSourceFile().getAbsolutePath())
pkg_root = os.path.join(this_dir, "ghidra_annotations")
if pkg_root not in sys.path:
    sys.path.insert(0, this_dir)

# Imports
from ghidra_annotations.annotations import *
from ghidra_annotations.util.log import *

# Map of category names to export functions
EXPORT_CATEGORIES = {
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

def export_selected_categories(currentProgram, folder, categories):
    for category in categories:
        category = category.strip().lower()
        if category in EXPORT_CATEGORIES:
            log_info("Exporting category: %s" % category)
            EXPORT_CATEGORIES[category](currentProgram, folder)
        else:
            log_error("Unknown category: %s" % category)
            log_error("Available categories: %s" % ", ".join(sorted(EXPORT_CATEGORIES.keys())))

def main():

    # Setup logging
    setup_logging(name="ghidra_export_headless", filename="ghidra_export_headless.log")

    # Get script arguments
    args = getScriptArgs()
    if len(args) < 1:
        log_error("Usage: export_annotations_headless.py <output_folder> [categories]")
        log_error("  output_folder: Directory to export annotations to")
        log_error("  categories:    Comma-separated list of categories to export (optional)")
        log_error("                 Use 'all' or omit to export everything")
        log_error("")
        log_error("Available categories: %s" % ", ".join(sorted(EXPORT_CATEGORIES.keys())))
        log_error("")
        log_error("Example (headless):")
        log_error("  analyzeHeadless ./projects NocturneProject \\")
        log_error("      -process nocedit.exe \\")
        log_error("      -scriptPath ./scripts/Jython \\")
        log_error("      -postScript export_annotations_headless.py ./annotations/nocedit.exe")
        log_error("")
        log_error("  # Export only pseudocode:")
        log_error("  ... -postScript export_annotations_headless.py ./annotations/nocedit.exe pseudocode")
        log_error("")
        log_error("  # Export multiple categories:")
        log_error("  ... -postScript export_annotations_headless.py ./annotations/nocedit.exe data_types,functions")
        return

    # Parse optional categories argument
    output_folder = args[0]
    categories = None
    if len(args) >= 2:
        categories_arg = args[1]
        if categories_arg.lower() != "all":
            categories = [c.strip() for c in categories_arg.split(",")]

    # Ensure output folder exists
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
        log_info("Created output folder: %s" % output_folder)

    # Log what is going to be exported
    log_info("=" * 60)
    log_info("HEADLESS EXPORT")
    log_info("=" * 60)
    log_info("Output folder: %s" % output_folder)
    log_info("Program: %s" % currentProgram.getName())
    if categories:
        log_info("Categories: %s" % ", ".join(categories))
    else:
        log_info("Categories: all")
    log_info("=" * 60)

    # Export annotations
    if categories:
        export_selected_categories(currentProgram, output_folder, categories)
    else:
        export_annotations(currentProgram, output_folder)

    # Export complete
    log_info("=" * 60)
    log_info("EXPORT COMPLETE")
    log_info("=" * 60)

# Run main
main()
