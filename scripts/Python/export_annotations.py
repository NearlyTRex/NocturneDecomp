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
# The type_info export validates every Ghidra struct that has a Watcom RTTI
# descriptor against that descriptor's instance_size, and fails the export on
# any disagreement. Pass --allow-struct-size-mismatch to downgrade it to a
# report. This is independent of --strict, which covers pseudocode compilation.
#
# The data_types export fails when two data types in one program share a name
# (the same name in two categories, the same name as both a typedef and a
# function definition, or a Ghidra ".conflict" suffix). The name is the identity
# every downstream consumer keys on, so a duplicate means one copy silently wins
# -- and re-importing the exported file re-creates both, so the pair breeds.
# Pass --allow-duplicate-data-types to downgrade it to a report.
#
# The functions export checks that every name ending in _FUN_<address> ends in
# the address the function actually starts at, and fails the export otherwise:
# a disagreement means a name was applied to the wrong symbol, and the two now
# collide on one pseudocode filename. Pass --allow-name-address-mismatch to
# downgrade it to a report.
#
# Available categories:
#   all              - Export everything (default)
#   data_types       - Data type definitions
#   functions        - Function signatures
#   call_overrides   - Per-call-site signature overrides
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
#   switch_tables    - Switch jump tables
#   code_caves       - Code caves marked by CreateCodeCave.java
#   recreation      - Source-recreation input (needs vtables exported first)
#   pseudocode       - Decompiled pseudocode
#
#@author NearlyTRex
#@category Annotations

import os
import sys
import argparse
import subprocess

# Every category, in the order a full export runs them: recreation reads the
# exported vtables, and pseudocode goes last. Known before PyGhidra starts, so a
# mistyped category fails before the JVM is up.
CATEGORY_NAMES = [
    "data_types", "functions", "call_overrides", "comments", "bookmarks",
    "applied_arrays", "applied_basic_types", "applied_enums",
    "applied_pointers", "applied_strings", "applied_structs",
    "applied_unions", "symbols_class", "symbols_label",
    "symbols_namespace", "equates", "external_imports",
    "cross_references", "entry_points", "memory_layout",
    "metadata", "type_info", "vtables", "switch_tables", "code_caves",
    "recreation", "pseudocode",
]

SIBLING_PAIR = ("nocedit.exe", "nocturne.exe")


def maybe_refresh_sibling_mapping(exported_names, enabled):
    """Regenerate the sibling mapping from the trees this export just wrote.

    The mapping is derived from annotations/, so every export leaves it a
    little further out of date -- stale sibling names, pairs pointing at
    function entries a boundary repair has since deleted, and missed matches
    that the export's newly named functions would now anchor. Refreshing here
    means the mapping is never older than the tree it describes.

    Runs as a subprocess AFTER the JVM work is finished: the refresh needs
    neither Ghidra nor a JVM, and isolating it means a failure cannot damage an
    export that has already succeeded. For the same reason a failure warns and
    never changes the export's exit code -- the annotations are the product,
    the mapping is a derived artifact that can be rebuilt at any time.
    """
    if not enabled:
        return
    if not set(exported_names) & set(SIBLING_PAIR):
        print("\n[sibling-mapping] no sibling program in this export; skipping refresh")
        return
    script = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                          "refresh_sibling_mapping.py")
    if not os.path.exists(script):
        print("\n[sibling-mapping] refresh_sibling_mapping.py not found; skipping")
        return
    print("\n[sibling-mapping] regenerating from the freshly exported trees...")
    sys.stdout.flush()
    try:
        rc = subprocess.call([sys.executable, "-u", script, "-q"])
    except Exception as exc:
        print("[sibling-mapping] WARNING: could not launch refresh: %s" % exc)
        return
    if rc:
        print("[sibling-mapping] WARNING: refresh exited %d. The mapping is now "
              "STALE relative to this export -- re-run "
              "scripts/Python/refresh_sibling_mapping.py before trusting it." % rc)


def parse_categories(text):
    """The categories named in `text` ("all" or comma-separated), in export order.

    Raises ValueError naming any category that does not exist.
    """
    if text.strip().lower() == "all":
        return list(CATEGORY_NAMES)
    named = [c.strip().lower() for c in text.split(",") if c.strip()]
    unknown = [c for c in named if c not in CATEGORY_NAMES]
    if unknown or not named:
        raise ValueError("unknown categories: %s (available: %s)" % (
            ", ".join(unknown) or repr(text), ", ".join(CATEGORY_NAMES)))
    return named


def get_export_categories():
    """{category: its export_<category> function} - call after PyGhidra starts"""
    import ghidra_annotations.annotations as annotations
    return {name: getattr(annotations, "export_" + name) for name in CATEGORY_NAMES}


# The command-line options, with the defaults run_export takes when one is absent
DEFAULT_OPTIONS = {
    "strict": False,
    "deep_analysis": False,
    "allow_size_mismatch": False,
    "allow_name_address_mismatch": False,
    "allow_this_ptr_mismatch": False,
    "allow_tu_name_violations": False,
    "allow_duplicate_data_types": False,
    "pseudocode_options": {},
}


def category_arguments(category, options):
    """The keyword arguments the category's export function takes from the options."""
    if category == "pseudocode":
        return dict(strict=options["strict"], deep_analysis=options["deep_analysis"],
                    **options["pseudocode_options"])
    if category == "type_info":
        return dict(strict=options["strict"], allow_size_mismatch=options["allow_size_mismatch"])
    if category == "functions":
        return dict(allow_name_address_mismatch=options["allow_name_address_mismatch"],
                    allow_this_ptr_mismatch=options["allow_this_ptr_mismatch"],
                    allow_tu_name_violations=options["allow_tu_name_violations"])
    if category == "data_types":
        return dict(allow_duplicates=options["allow_duplicate_data_types"])
    return {}


def run_export(currentProgram, output_folder, categories, options=None):
    """Export the categories (from parse_categories) of one program to output_folder.

    options overrides DEFAULT_OPTIONS:
        strict: raise on pseudocode compilation failures and type_info mismatches
        deep_analysis: deep static analysis mode
        allow_size_mismatch: report a Watcom RTTI struct size mismatch, not fail
        allow_name_address_mismatch: report a function whose _FUN_<addr> suffix
            is not its entry point, not fail
        allow_this_ptr_mismatch: report a class method whose parameter 0 is not
            `this_ptr` of its own class, not fail
        allow_tu_name_violations: report a TU in a placeholder folder or not 8.3,
            not fail
        allow_duplicate_data_types: report two data types sharing a name, not fail
        pseudocode_options: export_pseudocode's header_compile, function_compile
            and static_analysis switches (all on if absent)
    """
    from ghidra_annotations.util.log import setup_logging, log_info
    options = dict(DEFAULT_OPTIONS, **(options or {}))

    setup_logging(name="ghidra_export", filename="ghidra_export.log")
    export_categories = get_export_categories()

    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
        log_info("Created output folder: %s" % output_folder)

    log_info("=" * 60)
    log_info("EXPORT ANNOTATIONS")
    log_info("=" * 60)
    log_info("Output folder: %s" % output_folder)
    log_info("Program: %s" % currentProgram.getName())
    log_info("Categories: %s" % ("all" if categories == CATEGORY_NAMES else ", ".join(categories)))
    log_info("Strict mode: %s" % options["strict"])
    log_info("Allow struct size mismatch: %s" % options["allow_size_mismatch"])
    log_info("Allow name/address mismatch: %s" % options["allow_name_address_mismatch"])
    log_info("Allow this_ptr mismatch: %s" % options["allow_this_ptr_mismatch"])
    log_info("Allow TU name violations: %s" % options["allow_tu_name_violations"])
    log_info("Allow duplicate data types: %s" % options["allow_duplicate_data_types"])
    for option, enabled in sorted(options["pseudocode_options"].items()):
        log_info("Pseudocode %s: %s" % (option.replace("_", " "), enabled))
    log_info("=" * 60)

    for category in categories:
        log_info("Exporting category: %s" % category)
        export_categories[category](currentProgram, output_folder,
                                    **category_arguments(category, options))

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


def pseudocode_options(args, program_name):
    """The pseudocode compile and analysis passes to run for one program."""
    checked = True
    if args.checks_only_for is not None:
        checked = program_name in {p.strip() for p in args.checks_only_for.split(",")}
    return {
        "header_compile": args.header_compile and checked,
        "function_compile": args.function_compile and checked,
        "static_analysis": args.static_analysis and checked,
    }


def build_parser():
    """The command line."""
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
    parser.add_argument("--allow-struct-size-mismatch", action="store_true",
                        help="Export even if a Ghidra struct size disagrees with the "
                             "Watcom RTTI instance_size in the binary (by default such "
                             "a disagreement fails the export)")
    parser.add_argument("--allow-name-address-mismatch", action="store_true",
                        help="Export even if a function's _FUN_<addr> suffix is not its "
                             "entry point (by default that fails the export, because it "
                             "means a name was applied to the wrong symbol and two "
                             "functions will collide on one pseudocode filename)")
    parser.add_argument("--allow-this-ptr-mismatch", action="store_true",
                        help="Export even if a class method named "
                             "<tu>_<Class>_<method>_FUN_<addr> does not take "
                             "`this_ptr` of type `<Class> *` as its first parameter "
                             "(by default that fails the export, because an absent or "
                             "mistyped receiver degrades the decompilation of every "
                             "caller)")
    parser.add_argument("--allow-tu-name-violations", action="store_true",
                        help="Export even if a function's TU has a placeholder folder "
                             "(unkafter_, unkaddr_, unkclass_) or is not a DOS 8.3 name "
                             "(by default that fails the export; real exceptions go in "
                             "check_tu_alignment_skip.txt)")
    parser.add_argument("--allow-duplicate-data-types", action="store_true",
                        help="Export even if two data types in the program share a "
                             "name (by default that fails the export, because the "
                             "name is the identity every downstream consumer keys "
                             "on, so one copy silently wins and re-importing the "
                             "file re-creates both)")
    parser.add_argument("--header-compile", action=argparse.BooleanOptionalAction, default=True,
                        help="compile the generated pseudocode headers, globals and "
                             "shims (default: on)")
    parser.add_argument("--function-compile", action=argparse.BooleanOptionalAction, default=True,
                        help="compile each exported function's .cpp on its own "
                             "(default: on)")
    parser.add_argument("--static-analysis", action=argparse.BooleanOptionalAction, default=True,
                        help="run clang-analyzer, cppcheck and clang-tidy on the "
                             "exported functions (default: on)")
    parser.add_argument("--checks-only-for", metavar="PROGRAMS", default=None,
                        help="comma-separated programs the three passes above run "
                             "for; every other program's export skips them (default: "
                             "every program). For --all-programs, where only some "
                             "programs' pseudocode is built.")
    parser.add_argument("--all-programs", action="store_true",
                        help="Export every program in the project. In this mode program_name is "
                             "ignored and output_folder is treated as a parent directory: each "
                             "program is exported to <output_folder>/<program_name>.")
    parser.add_argument("--no-refresh-mapping", action="store_true",
                        help="skip regenerating the sibling function mapping after "
                             "the export. It is refreshed by default so it can never "
                             "be older than the annotations it describes; the refresh "
                             "needs no JVM and cannot affect the export's exit code.")
    return parser


def export_options(args, program_name):
    """run_export's options for one program, from the command line."""
    return {
        "strict": args.strict,
        "deep_analysis": args.deep_analysis,
        "allow_size_mismatch": args.allow_struct_size_mismatch,
        "allow_name_address_mismatch": args.allow_name_address_mismatch,
        "allow_this_ptr_mismatch": args.allow_this_ptr_mismatch,
        "allow_tu_name_violations": args.allow_tu_name_violations,
        "allow_duplicate_data_types": args.allow_duplicate_data_types,
        "pseudocode_options": pseudocode_options(args, program_name),
    }


def export_programs(pyghidra, args, categories):
    """Export each program the arguments name. Returns (exit code, names exported)."""
    print("Opening project: %s/%s" % (args.project_path, args.project_name))
    exit_code = 0
    exported_ok = []
    project = None
    try:
        project = pyghidra.open_project(args.project_path, args.project_name)

        # Determine which programs to export
        if args.all_programs:
            program_paths = list_project_program_paths(project)
            if not program_paths:
                print("ERROR: No programs found in project '%s'" % args.project_name)
                exit_code = 1
            else:
                print("Found %d program(s): %s" % (
                    len(program_paths), ", ".join(name for _, name in program_paths)))
        else:
            program_paths = [("/" + args.program_name, args.program_name)]

        # Export each program. In --all-programs mode output_folder is a parent
        # directory and each program lands in <output_folder>/<program_name>
        # (matching the existing annotations/<program_name> layout). In single-
        # program mode output_folder is used verbatim for backward compatibility.
        for pathname, name in program_paths:
            ok = True
            if args.all_programs:
                out_folder = os.path.join(args.output_folder, name)
            else:
                out_folder = args.output_folder

            print("Opening program: %s -> %s" % (pathname, out_folder))
            try:
                with pyghidra.program_context(project, pathname) as currentProgram:
                    run_export(currentProgram, out_folder, categories, export_options(args, name))
            except SystemExit as e:
                # A library deep in the export (e.g. data-type dependency resolution)
                # may call sys.exit() on a per-program problem. SystemExit is a
                # BaseException, so it would otherwise bypass the handler below and
                # abort the whole batch, skipping the remaining programs.
                code = e.code if isinstance(e.code, int) else 1
                print("ERROR exporting '%s': export exited with code %s" % (name, code))
                exit_code = code or 1
                ok = False
            except Exception as e:  # one bad program must not abort the batch
                print("ERROR exporting '%s': %s" % (name, str(e)))
                import traceback
                traceback.print_exc()
                exit_code = 1
                ok = False
            finally:
                # A failed export skips the exporter's own cleanup; never let
                # one program's decompiler processes outlive it.
                from ghidra_annotations.annotations.pseudocode.parallel import dispose_decompilers
                leaked = dispose_decompilers()
                if leaked:
                    print("Disposed %d leftover decompiler interfaces for '%s'" % (leaked, name))
            if ok:
                exported_ok.append(name)
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1
    finally:
        if project is not None:
            project.close()
    return exit_code, exported_ok


def main():
    """Entry point for PyGhidra headless execution"""
    parser = build_parser()
    args = parser.parse_args()
    try:
        categories = parse_categories(args.categories)
    except ValueError as error:
        parser.error(str(error))

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        print("Install the PyGhidra package from your Ghidra installation.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()
    exit_code, exported_ok = export_programs(pyghidra, args, categories)

    # Derived artifacts, after the JVM is done with the project.
    maybe_refresh_sibling_mapping(exported_ok, not args.no_refresh_mapping)

    # Force exit - JVM shutdown can hang
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(exit_code)

if __name__ == "__main__":
    main()
