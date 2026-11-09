#!/usr/bin/env python3
# Imports exported Ghidra annotations from JSON files into a program, and saves it.
# PyGhidra headless.
#
# Usage:
#   python import_annotations.py <project_dir> <project_name> <program_name> <input_folder> [categories]
#
# Example:
#   python import_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe
#   python import_annotations.py ./projects NocturneEdit nocedit.exe ./annotations/nocedit.exe data_types,functions
#
# Only a record marked importable is applied. Each chosen category first
# removes what its importable records describe, then applies them, so an
# import repeated is the same as one import. The categories read off the binary
# (entry_points, metadata, type_info, vtables, recreation, pseudocode and the
# like) have nothing to import.
#
#@author NearlyTRex
#@category Annotations

import argparse
import os
import sys

# The categories an import can apply, in the order it applies them: memory and
# types before the functions and data that use them, references last
IMPORT_CATEGORIES = [
    "memory_layout", "data_types", "symbols_namespace", "external_imports", "functions", "call_overrides",
    "applied_enums", "applied_unions", "applied_structs", "applied_arrays", "applied_basic_types",
    "applied_pointers", "applied_strings", "symbols_class", "symbols_label", "equates", "comments",
    "bookmarks", "cross_references",
]


def parse_categories(text):
    """The import categories named in `text` ("all" or comma-separated), in import order.

    Raises ValueError naming any category that cannot be imported.
    """
    if text.strip().lower() == "all":
        return list(IMPORT_CATEGORIES)
    named = {c.strip().lower() for c in text.split(",") if c.strip()}
    unknown = sorted(named - set(IMPORT_CATEGORIES))
    if unknown or not named:
        raise ValueError("categories that cannot be imported: %s (importable: %s)" % (
            ", ".join(unknown) or repr(text), ", ".join(IMPORT_CATEGORIES)))
    return [c for c in IMPORT_CATEGORIES if c in named]


def run_import(currentProgram, input_folder, categories):
    """Delete, then import, each category, in import order."""
    from ghidra_annotations import annotations
    from ghidra_annotations.util.log import log_info
    log_info("Importing %s from %s into %s" % (", ".join(categories), input_folder, currentProgram.getName()))
    for category in reversed(categories):
        log_info("Deleting what the importable %s records describe" % category)
        getattr(annotations, "delete_" + category)(currentProgram, input_folder)
    for category in categories:
        log_info("Importing category: %s" % category)
        getattr(annotations, "import_" + category)(currentProgram, input_folder)
    log_info("IMPORT COMPLETE")


def build_parser(description, folder_help):
    parser = argparse.ArgumentParser(description = description)
    parser.add_argument("project_path", help = "Path to Ghidra project directory")
    parser.add_argument("project_name", help = "Ghidra project name")
    parser.add_argument("program_name", help = "Program name within the project")
    parser.add_argument("folder", help = folder_help)
    parser.add_argument("categories", nargs = "?", default = "all",
                        help = "Comma-separated categories (default: all): " + ", ".join(IMPORT_CATEGORIES))
    return parser


def with_program(args, work):
    """Open the program, run work(program), save it. Returns the exit code."""
    import pyghidra
    pyghidra.start()
    # Only importable once the JVM is up
    from ghidra.util.task import ConsoleTaskMonitor
    print("Opening %s in %s/%s" % (args.program_name, args.project_path, args.project_name))
    project = pyghidra.open_project(args.project_path, args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:
            from ghidra_annotations.util.log import setup_logging
            setup_logging(name = "ghidra_import")
            work(currentProgram)
            currentProgram.getDomainFile().save(ConsoleTaskMonitor())
        return 0
    except Exception as error:  # reported, and the exit code says so
        import traceback
        traceback.print_exc()
        print("ERROR: %s" % error)
        return 1
    finally:
        project.close()


def main():
    parser = build_parser("Import Ghidra annotations from JSON files", "Directory to import annotations from")
    args = parser.parse_args()
    try:
        categories = parse_categories(args.categories)
    except ValueError as error:
        parser.error(str(error))
    if not os.path.isdir(args.folder):
        parser.error("no such folder: %s" % args.folder)
    exit_code = with_program(args, lambda program: run_import(program, args.folder, categories))
    # The JVM can hang on shutdown
    sys.stdout.flush()
    os._exit(exit_code)


if __name__ == "__main__":
    main()
