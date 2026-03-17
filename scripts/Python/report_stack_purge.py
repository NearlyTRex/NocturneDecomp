#!/usr/bin/env python3
"""
report_stack_purge.py

Reports stack purge sizes for functions. Can check all functions, only those
called by a specific function, or filter by purge value.

Usage:
    # Report all functions with non-zero purge
    python3 report_stack_purge.py <project_dir> <project_name> <program_name>

    # Report functions called by a specific function
    python3 report_stack_purge.py <project_dir> <project_name> <program_name> --caller 005379e0

    # Report only functions with unknown purge (0x7FFFFFFF)
    python3 report_stack_purge.py <project_dir> <project_name> <program_name> --unknown-only

    # Report all functions with any non-zero purge size
    python3 report_stack_purge.py <project_dir> <project_name> <program_name> --nonzero
"""

import os
import sys
import argparse

UNKNOWN_PURGE = 0x7FFFFFFF


def get_called_functions(program, func):
    """Get all functions called by the given function."""
    from ghidra.program.model.symbol import RefType

    called = {}
    body = func.getBody()
    ref_mgr = program.getReferenceManager()

    for addr_range in body:
        start = addr_range.getMinAddress()
        end = addr_range.getMaxAddress()
        addr = start
        while addr is not None and addr.compareTo(end) <= 0:
            for ref in ref_mgr.getReferencesFrom(addr):
                if ref.getReferenceType().isCall():
                    target = program.getFunctionManager().getFunctionAt(ref.getToAddress())
                    if target and target.getEntryPoint() not in called:
                        called[target.getEntryPoint()] = target
            addr = addr.next()

    return list(called.values())


def report_function(func):
    """Format a single function's stack purge info."""
    purge = func.getStackPurgeSize()
    conv = func.getCallingConventionName()
    name = func.getName()
    addr = str(func.getEntryPoint())

    if purge == UNKNOWN_PURGE:
        purge_str = "0x7FFFFFFF (UNKNOWN)"
    elif purge == 0:
        purge_str = "0"
    else:
        purge_str = "0x%x (%d)" % (purge & 0xFFFFFFFF, purge)

    return "  %-10s  %-12s  purge=%-22s  %s" % (addr, conv, purge_str, name)


def main():
    parser = argparse.ArgumentParser(
        description="Report stack purge sizes for functions",
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--caller", type=str, default=None,
                        help="Only report functions called by this address (hex)")
    parser.add_argument("--unknown-only", action="store_true",
                        help="Only report functions with unknown purge (0x7FFFFFFF)")
    parser.add_argument("--nonzero", action="store_true",
                        help="Only report functions with non-zero purge")

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
            fm = prog.getFunctionManager()

            if args.caller:
                # Get the caller function
                addr_int = int(args.caller.replace("0x", ""), 16)
                space = prog.getAddressFactory().getDefaultAddressSpace()
                caller_addr = space.getAddress(addr_int)
                caller_func = fm.getFunctionAt(caller_addr)
                if caller_func is None:
                    print("ERROR: No function at 0x%x" % addr_int)
                    os._exit(1)

                print("Functions called by %s (0x%s):" % (caller_func.getName(), args.caller))
                print("=" * 90)
                functions = get_called_functions(prog, caller_func)

                # Also include the caller itself
                print("\nCaller:")
                print(report_function(caller_func))
                print("\nCallees (%d):" % len(functions))
            else:
                functions = list(fm.getFunctions(True))
                print("All functions (%d):" % len(functions))
                print("=" * 90)

            results = []
            for func in functions:
                purge = func.getStackPurgeSize()
                if args.unknown_only and purge != UNKNOWN_PURGE:
                    continue
                if args.nonzero and purge == 0:
                    continue
                results.append((func, purge))

            # Sort: unknown first, then by purge size descending, then by name
            results.sort(key=lambda x: (
                0 if x[1] == UNKNOWN_PURGE else 1,
                -abs(x[1]) if x[1] != UNKNOWN_PURGE else 0,
                x[0].getName()
            ))

            for func, purge in results:
                print(report_function(func))

            print("\nTotal: %d functions shown" % len(results))

            # Summary
            unknown_count = sum(1 for _, p in results if p == UNKNOWN_PURGE)
            nonzero_count = sum(1 for _, p in results if p != 0 and p != UNKNOWN_PURGE)
            zero_count = sum(1 for _, p in results if p == 0)
            if unknown_count:
                print("  Unknown (0x7FFFFFFF): %d" % unknown_count)
            if nonzero_count:
                print("  Non-zero: %d" % nonzero_count)
            if zero_count:
                print("  Zero: %d" % zero_count)

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
