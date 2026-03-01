#!/usr/bin/env python3
"""
fix_stack_purge.py

Fixes __cdecl functions that have stackPurgeSize = 0x7FFFFFFF (unknown)
by setting it to 0.  For __cdecl, the callee never pops stack args, so
the purge size must be 0.  The "unknown" sentinel confuses Ghidra's
decompiler ESP tracking, causing off-by-N errors in stack variable
resolution for callers of these functions.

Usage:
    python3 fix_stack_purge.py <project_dir> <project_name> <program_name> --test
    python3 fix_stack_purge.py <project_dir> <project_name> <program_name> --apply
"""

import os
import sys
import argparse

UNKNOWN_PURGE = 2147483647  # 0x7FFFFFFF


def fix_cdecl_purge(program, dry_run=False):
    """Find and fix all __cdecl functions with unknown stack purge size."""
    fm = program.getFunctionManager()
    fixed = []

    for func in fm.getFunctions(True):
        if (func.getCallingConventionName() == "__cdecl"
                and func.getStackPurgeSize() == UNKNOWN_PURGE):
            fixed.append((str(func.getEntryPoint()), func.getName()))
            if not dry_run:
                func.setStackPurgeSize(0)

    return fixed


def main():
    parser = argparse.ArgumentParser(
        description="Fix __cdecl functions with unknown stack purge size",
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")

    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--test", action="store_true",
                       help="List affected functions without changing anything")
    group.add_argument("--apply", action="store_true",
                       help="Apply fixes and save")

    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:

            if args.test:
                fixed = fix_cdecl_purge(prog, dry_run=True)
                print("\n%d __cdecl functions with unknown stack purge:" % len(fixed))
                for addr, name in fixed:
                    print("  %s  %s" % (addr, name))
                print("\n(Test mode - no changes made)")

            elif args.apply:
                tx_id = prog.startTransaction("Fix __cdecl stack purge sizes")
                try:
                    fixed = fix_cdecl_purge(prog)
                except Exception:
                    prog.endTransaction(tx_id, False)
                    raise
                prog.endTransaction(tx_id, True)

                print("\nFixed %d functions:" % len(fixed))
                for addr, name in fixed:
                    print("  %s  %s" % (addr, name))

                if fixed:
                    prog.save("Fix __cdecl stack purge sizes", None)
                    print("\nChanges saved to program database.")
                else:
                    print("\nNo changes needed.")

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
