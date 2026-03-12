#!/usr/bin/env python3
"""
cleanup_unused_locals.py

Removes stack frame local variables that the decompiler doesn't reference.

These are phantom entries from Ghidra's initial stack analysis that the
decompiler has since superseded — merged into larger variables, optimized
away as register-only, or simply never used.  Removing them declutters the
stack frame and eliminates false "undefined type" counts.

Safety:
  - Only removes locals (negative stack offsets), never parameters
  - Only when decompilation succeeds (skips failed/timed-out functions)
  - Per-function transactions with regression detection and rollback
  - Dry-run and test modes available

Usage:
    # Dry run - scan and report what would be removed
    python3 -u cleanup_unused_locals.py <project_dir> <project_name> <program_name>

    # Test mode - remove + re-decompile + rollback, show before/after
    python3 -u cleanup_unused_locals.py <project_dir> <project_name> <program_name> --test
    python3 -u cleanup_unused_locals.py <project_dir> <project_name> <program_name> --test --limit=20
    python3 -u cleanup_unused_locals.py <project_dir> <project_name> <program_name> --test --func=visualize

    # Apply - remove unused locals and save
    python3 -u cleanup_unused_locals.py <project_dir> <project_name> <program_name> --apply

Examples:
    python3 -u cleanup_unused_locals.py ./projects NocturneEdit nocedit.exe
    python3 -u cleanup_unused_locals.py ./projects NocturneEdit nocedit.exe --test --limit=10
    python3 -u cleanup_unused_locals.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import re
import argparse
import difflib


WARNING_RE = re.compile(r'/\* WARNING:.*?\*/', re.DOTALL)
ARTIFACT_RE = re.compile(r'\b(unaff_|in_stack_|extraout_)\w+')


def decompile_function(ifc, func, monitor, timeout=60):
    """Decompile a function and return (DecompileResults, C_code_string)."""
    res = ifc.decompileFunction(func, timeout, monitor)
    if not res.decompileCompleted():
        return res, None
    hfunc = res.getHighFunction()
    if hfunc is None:
        return res, None
    decomp = res.getDecompiledFunction()
    code = decomp.getC() if decomp else None
    return res, code


def get_decompiler_stack_offsets(hfunc):
    """Get the set of stack offsets the decompiler actually references."""
    offsets = set()
    sym_iter = hfunc.getLocalSymbolMap().getSymbols()
    while sym_iter.hasNext():
        sym = sym_iter.next()
        if sym.isParameter() or sym.isGlobal():
            continue
        storage = sym.getStorage()
        if storage is not None and storage.isStackStorage():
            offset = storage.getStackOffset()
            size = storage.size()
            # Mark all offsets covered by this variable
            for i in range(size):
                offsets.add(offset + i)
    return offsets


def find_unused_locals(func, hfunc):
    """Find stack frame locals not referenced by the decompiler.

    Returns list of (name, offset, size, type_name) for unused variables.
    """
    decompiler_offsets = get_decompiler_stack_offsets(hfunc)
    frame = func.getStackFrame()
    if frame is None:
        return []

    unused = []
    for var in frame.getStackVariables():
        # Only locals (negative offsets), not parameters
        if var.getStackOffset() >= 0:
            continue

        offset = var.getStackOffset()
        size = var.getLength()

        # Check if any byte of this variable overlaps with decompiler-referenced offsets
        var_offsets = set(range(offset, offset + size))
        if not var_offsets.intersection(decompiler_offsets):
            unused.append((
                var.getName(),
                offset,
                size,
                var.getDataType().getName(),
            ))

    return unused


def remove_unused_locals(func, hfunc):
    """Remove unused locals from the stack frame.

    Returns list of removed (name, offset, size, type_name).
    """
    unused = find_unused_locals(func, hfunc)
    if not unused:
        return []

    frame = func.getStackFrame()
    for name, offset, size, type_name in unused:
        frame.clearVariable(offset)

    return unused


def count_warnings(code):
    if code is None:
        return 0
    return len(WARNING_RE.findall(code))


def count_artifacts(code):
    if code is None:
        return 0
    return len(ARTIFACT_RE.findall(code))


def is_regression(before_code, after_code):
    """Check if removing locals caused a regression."""
    if after_code is None:
        return True, "decompilation failed after cleanup"

    before_warnings = count_warnings(before_code)
    after_warnings = count_warnings(after_code)
    if after_warnings > before_warnings:
        return True, "new warnings (%d -> %d)" % (before_warnings, after_warnings)

    before_artifacts = count_artifacts(before_code)
    after_artifacts = count_artifacts(after_code)
    if after_artifacts > before_artifacts:
        return True, "more artifacts (%d -> %d)" % (before_artifacts, after_artifacts)

    return False, ""


def dry_run(program):
    """Scan all functions and report unused locals."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()
    all_functions = list(fm.getFunctions(True))

    print("Scanning %d functions..." % len(all_functions))

    total_unused = 0
    funcs_with_unused = 0
    total_locals = 0
    details = []

    ifc = DecompInterface()
    ifc.openProgram(program)
    try:
        for i, func in enumerate(all_functions):
            frame = func.getStackFrame()
            if frame is None:
                continue

            local_count = sum(1 for v in frame.getStackVariables() if v.getStackOffset() < 0)
            total_locals += local_count

            res, _ = decompile_function(ifc, func, monitor)
            hfunc = res.getHighFunction() if res else None
            if hfunc is None:
                continue

            unused = find_unused_locals(func, hfunc)
            if unused:
                funcs_with_unused += 1
                total_unused += len(unused)
                details.append((func.getName(), str(func.getEntryPoint()), unused))

            if (i + 1) % 500 == 0:
                print("  Progress: %d / %d" % (i + 1, len(all_functions)))
    finally:
        ifc.dispose()

    print("\n" + "=" * 70)
    print("UNUSED LOCALS SUMMARY")
    print("=" * 70)
    print("  Total functions:           %d" % len(all_functions))
    print("  Functions with unused:     %d" % funcs_with_unused)
    print("  Total local variables:     %d" % total_locals)
    print("  Unused variables:          %d" % total_unused)
    if total_locals > 0:
        pct = 100.0 * total_unused / total_locals
        print("  Unused percentage:         %.1f%%" % pct)

    if details:
        print("\n" + "-" * 70)
        print("FUNCTIONS WITH UNUSED LOCALS (showing first 50):")
        print("-" * 70)
        for name, addr, unused in details[:50]:
            print("\n  %s (%s) - %d unused:" % (name, addr, len(unused)))
            for vname, offset, size, type_name in unused:
                print("    Stack[%d]: %s (%s, %d bytes)" % (offset, vname, type_name, size))

    print("\n(Dry run - no changes made. Use --test to preview, --apply to remove.)")


def test_cleanup(program, limit=10, func_filter=None):
    """Test removing unused locals with per-function rollback."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    # First pass: find functions with unused locals
    print("Scanning for functions with unused locals...")
    target_funcs = []

    ifc = DecompInterface()
    ifc.openProgram(program)
    try:
        for func in fm.getFunctions(True):
            if func_filter and func_filter.lower() not in func.getName().lower():
                continue

            res, _ = decompile_function(ifc, func, monitor)
            hfunc = res.getHighFunction() if res else None
            if hfunc is None:
                continue

            unused = find_unused_locals(func, hfunc)
            if unused:
                target_funcs.append(func)
                if len(target_funcs) >= limit:
                    break
    finally:
        ifc.dispose()

    if not target_funcs:
        print("No functions found with unused locals.")
        return

    print("Testing %d functions (changes will be rolled back)...\n" % len(target_funcs))

    total_removed = 0
    regressions = 0

    for func in target_funcs:
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())

        # Decompile BEFORE
        ifc = DecompInterface()
        ifc.openProgram(program)
        try:
            _, before_code = decompile_function(ifc, func, monitor)
        finally:
            ifc.dispose()

        if before_code is None:
            continue

        # Remove in a rolled-back transaction
        tx_id = program.startTransaction("Test cleanup: %s" % func_name)
        try:
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                res, _ = decompile_function(ifc, func, monitor)
                hfunc = res.getHighFunction()
                removed = remove_unused_locals(func, hfunc) if hfunc else []
            finally:
                ifc.dispose()

            if not removed:
                continue

            # Re-decompile AFTER
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                _, after_code = decompile_function(ifc, func, monitor)
            finally:
                ifc.dispose()
        finally:
            program.endTransaction(tx_id, False)  # always roll back

        regressed, reason = is_regression(before_code, after_code)

        print("=" * 70)
        print("%s (%s)" % (func_name, func_addr))
        print("=" * 70)

        if regressed:
            regressions += 1
            print("  REGRESSION: %s" % reason)
        else:
            print("  OK")

        print("  Removed %d unused locals:" % len(removed))
        for vname, offset, size, type_name in removed:
            print("    Stack[%d]: %s (%s, %d bytes)" % (offset, vname, type_name, size))
        total_removed += len(removed)

        # Show code diff
        if after_code and before_code != after_code:
            before_lines = before_code.splitlines(keepends=True)
            after_lines = after_code.splitlines(keepends=True)
            diff = list(difflib.unified_diff(
                before_lines, after_lines,
                fromfile="before", tofile="after", n=2,
            ))
            if diff:
                print("  Code diff:")
                for line in diff:
                    sys.stdout.write("    " + line)
                if not diff[-1].endswith('\n'):
                    print()
        print()

    print("=" * 70)
    print("TEST SUMMARY")
    print("=" * 70)
    print("  Functions tested:  %d" % len(target_funcs))
    print("  Total removed:     %d" % total_removed)
    print("  Regressions:       %d (would be rolled back in --apply)" % regressions)
    print("\n(Test mode - all changes rolled back)")


def apply_cleanup(program):
    """Remove unused locals with per-function regression rollback."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()
    all_functions = list(fm.getFunctions(True))

    print("Processing %d functions..." % len(all_functions))

    cleaned = 0
    total_removed = 0
    skipped = 0
    rolled_back = 0
    failed = 0
    rolled_back_names = []

    for i, func in enumerate(all_functions):
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())

        try:
            # Decompile BEFORE
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                res, before_code = decompile_function(ifc, func, monitor)
                hfunc = res.getHighFunction() if res else None
            finally:
                ifc.dispose()

            if hfunc is None or before_code is None:
                skipped += 1
                continue

            unused = find_unused_locals(func, hfunc)
            if not unused:
                skipped += 1
                continue

            # Remove in its own transaction
            tx_id = program.startTransaction("Cleanup locals: %s" % func_name)
            try:
                # Need to re-decompile inside the transaction
                ifc = DecompInterface()
                ifc.openProgram(program)
                try:
                    res2, _ = decompile_function(ifc, func, monitor)
                    hfunc2 = res2.getHighFunction() if res2 else None
                    removed = remove_unused_locals(func, hfunc2) if hfunc2 else []
                finally:
                    ifc.dispose()

                if not removed:
                    program.endTransaction(tx_id, False)
                    skipped += 1
                    continue

                # Re-decompile AFTER to check for regression
                ifc = DecompInterface()
                ifc.openProgram(program)
                try:
                    _, after_code = decompile_function(ifc, func, monitor)
                finally:
                    ifc.dispose()

                regressed, reason = is_regression(before_code, after_code)
                if regressed:
                    program.endTransaction(tx_id, False)
                    rolled_back += 1
                    rolled_back_names.append((func_name, func_addr, reason))
                    print("  ROLLBACK: %s (%s) - %s" % (func_name, func_addr, reason))
                else:
                    program.endTransaction(tx_id, True)
                    cleaned += 1
                    total_removed += len(removed)

            except Exception:
                program.endTransaction(tx_id, False)
                raise

        except Exception as e:
            print("  WARN: %s (%s): %s" % (func_name, func_addr, str(e)))
            failed += 1

        if (i + 1) % 100 == 0:
            print("  Progress: %d / %d (cleaned=%d, rolled_back=%d)" % (
                i + 1, len(all_functions), cleaned, rolled_back))

    print("\n" + "=" * 70)
    print("CLEANUP RESULTS")
    print("=" * 70)
    print("  Functions processed:   %d" % len(all_functions))
    print("  Functions cleaned:     %d" % cleaned)
    print("  Variables removed:     %d" % total_removed)
    print("  Skipped:               %d" % skipped)
    print("  Rolled back:           %d" % rolled_back)
    print("  Failed:                %d" % failed)

    if rolled_back_names:
        print("\n" + "-" * 70)
        print("ROLLED BACK FUNCTIONS:")
        print("-" * 70)
        for name, addr, reason in rolled_back_names:
            print("  %s (%s): %s" % (name, addr, reason))

    return cleaned


def main():
    parser = argparse.ArgumentParser(
        description="Remove unused local variables from Ghidra stack frames",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply cleanup (default is dry-run)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: remove + re-decompile + rollback, show diffs")
    parser.add_argument("--limit", type=int, default=10,
                        help="Max functions to test in --test mode (default: 10)")
    parser.add_argument("--func", type=str, default=None,
                        help="Only process functions whose name contains this substring")

    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)

    if args.test:
        print("TEST MODE - changes will be rolled back per function")
    elif args.apply:
        print("APPLY MODE - changes will be saved to database")
    else:
        print("DRY RUN MODE - scanning only, no changes")
    print("=" * 70)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:

            if args.test:
                test_cleanup(
                    prog,
                    limit=args.limit,
                    func_filter=args.func,
                )

            elif args.apply:
                cleaned = apply_cleanup(prog)

                if cleaned > 0:
                    prog.save("Removed unused locals from %d functions" % cleaned, None)
                    print("\nChanges saved to program database.")
                else:
                    print("\nNo cleanup applied.")

            else:
                dry_run(prog)

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
