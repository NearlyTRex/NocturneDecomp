#!/usr/bin/env python3
# Syncs a program with its exported annotations: imports the JSON files into
# the program, saves it, then exports the program back over them. PyGhidra headless.
#
# Usage:
#   python sync_annotations.py <project_dir> <project_name> <program_name> <sync_folder> [categories]
#
# With categories, only those are imported and exported; "all" imports every
# importable category and then runs the full export.
#
#@author NearlyTRex
#@category Annotations

import os
import sys

import export_annotations
from import_annotations import IMPORT_CATEGORIES, build_parser, parse_categories, run_import, with_program


def run_sync(currentProgram, folder, categories, export_categories):
    run_import(currentProgram, folder, categories)
    export_annotations.run_export(currentProgram, folder, export_categories)


def main():
    parser = build_parser("Sync Ghidra annotations with JSON files", "Directory to sync annotations from and to")
    args = parser.parse_args()
    try:
        categories = parse_categories(args.categories)
    except ValueError as error:
        parser.error(str(error))
    os.makedirs(args.folder, exist_ok = True)
    export_categories = (list(export_annotations.CATEGORY_NAMES) if categories == IMPORT_CATEGORIES
                         else categories)
    exit_code = with_program(args, lambda program: run_sync(program, args.folder, categories, export_categories))
    sys.stdout.flush()
    os._exit(exit_code)


if __name__ == "__main__":
    main()
