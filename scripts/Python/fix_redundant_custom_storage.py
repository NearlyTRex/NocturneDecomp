#!/usr/bin/env python3
"""
fix_redundant_custom_storage.py

Removes the "Use Custom Storage" flag from functions where it is redundant.
A custom storage flag is redundant when:
  - The function uses a stack-only calling convention (__cdecl, __stdcall,
    __watcallStack, __crtmath, etc.)
  - All parameters are stack variables (no register params)
  - All parameter offsets match the expected sequential layout:
    first param at Stack[0x4], each subsequent param at prev + aligned_size

Removing redundant custom storage lets Ghidra auto-compute parameter storage,
which is important because custom storage prevents Ghidra from automatically
adjusting params when the signature changes (e.g. adding/removing params).

Usage:
    # Dry run - list functions with redundant custom storage
    python3 -u fix_redundant_custom_storage.py <project_dir> <project_name> <program_name>

    # Test mode - remove + re-decompile + rollback, show before/after diffs
    python3 -u fix_redundant_custom_storage.py <project_dir> <project_name> <program_name> --test
    python3 -u fix_redundant_custom_storage.py <project_dir> <project_name> <program_name> --test --limit=20
    python3 -u fix_redundant_custom_storage.py <project_dir> <project_name> <program_name> --test --func=processPhysics

    # Apply - remove redundant custom storage and save
    python3 -u fix_redundant_custom_storage.py <project_dir> <project_name> <program_name> --apply

Examples:
    python3 -u fix_redundant_custom_storage.py ./projects NocturneEdit nocedit.exe
    python3 -u fix_redundant_custom_storage.py ./projects NocturneEdit nocedit.exe --test --limit=5
    python3 -u fix_redundant_custom_storage.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import re
import argparse
import difflib


# Conventions where all params are stack-only and caller-cleanup or callee-cleanup
# (no register params, so sequential stack layout is the default)
STACK_ONLY_CONVENTIONS = {
    '__cdecl', '__stdcall', '__watcallStack', '__crtmath', '__syscall',
}


def has_redundant_custom_storage(func):
    """Check if a function's custom storage is redundant.

    Returns (is_redundant, reason) tuple.
    """
    if not func.hasCustomVariableStorage():
        return False, "no custom storage"

    conv = func.getCallingConventionName()
    if conv not in STACK_ONLY_CONVENTIONS:
        return False, "convention %s may need custom storage" % conv

    params = func.getParameters()
    if not params:
        # No params + custom storage: redundant
        return True, "no params"

    expected_offset = 4  # first param at Stack[0x4] after return address
    for param in params:
        if param.isRegisterVariable():
            return False, "has register param: %s" % param.getName()

        if not param.isStackVariable():
            return False, "non-stack param: %s" % param.getName()

        actual_offset = param.getStackOffset()
        param_size = param.getDataType().getLength()

        if actual_offset != expected_offset:
            return False, "offset mismatch for %s: expected %d, got %d" % (
                param.getName(), expected_offset, actual_offset)

        # Next param: size aligned up to 4 bytes
        aligned_size = max(4, ((param_size + 3) // 4) * 4)
        expected_offset += aligned_size

    return True, "all %d params match default stack layout" % len(params)


WARNING_RE = re.compile(r'/\* WARNING:.*?\*/', re.DOTALL)
ARTIFACT_RE = re.compile(r'\b(unaff_|in_stack_|extraout_)\w+')


def count_warnings(code):
    if code is None:
        return 0
    return len(WARNING_RE.findall(code))


def count_artifacts(code):
    if code is None:
        return 0
    return len(ARTIFACT_RE.findall(code))


def is_regression(before_code, after_code):
    """Check if removing custom storage caused a regression."""
    if after_code is None:
        return True, "decompilation failed after change"

    before_warnings = count_warnings(before_code)
    after_warnings = count_warnings(after_code)
    if after_warnings > before_warnings:
        return True, "new warnings (%d -> %d)" % (before_warnings, after_warnings)

    before_artifacts = count_artifacts(before_code)
    after_artifacts = count_artifacts(after_code)
    if after_artifacts > before_artifacts:
        return True, "more artifacts (%d -> %d)" % (before_artifacts, after_artifacts)

    return False, ""


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


def dry_run(program, func_filter=None):
    """Scan functions and report which have redundant custom storage."""
    fm = program.getFunctionManager()

    total_custom = 0
    redundant = 0
    non_redundant = 0
    redundant_funcs = []
    non_redundant_funcs = []

    for func in fm.getFunctions(True):
        if not func.hasCustomVariableStorage():
            continue

        if func_filter and func_filter.lower() not in func.getName().lower():
            continue

        total_custom += 1
        is_redund, reason = has_redundant_custom_storage(func)

        if is_redund:
            redundant += 1
            redundant_funcs.append((str(func.getEntryPoint()), func.getName(),
                                    func.getCallingConventionName(), reason))
        else:
            non_redundant += 1
            non_redundant_funcs.append((str(func.getEntryPoint()), func.getName(),
                                        func.getCallingConventionName(), reason))

    print("\n" + "=" * 70)
    print("REDUNDANT CUSTOM STORAGE SCAN")
    print("=" * 70)
    print("  Total with custom storage:  %d" % total_custom)
    print("  Redundant (would remove):   %d" % redundant)
    print("  Non-redundant (keep):       %d" % non_redundant)

    if redundant_funcs:
        # Group by convention
        by_conv = {}
        for addr, name, conv, reason in redundant_funcs:
            by_conv.setdefault(conv, []).append((addr, name))

        print("\n  Redundant by convention:")
        for conv in sorted(by_conv.keys()):
            print("    %s: %d" % (conv, len(by_conv[conv])))

    if non_redundant_funcs:
        print("\n  Non-redundant functions:")
        for addr, name, conv, reason in non_redundant_funcs:
            print("    %s  %s [%s] - %s" % (addr, name, conv, reason))

    print("\n(Dry run - no changes made. Use --test to preview diffs, --apply to commit.)")


def test_removals(program, limit=10, func_filter=None):
    """Test removing custom storage by applying in a transaction, re-decompiling,
    then rolling back. Shows before/after diffs.
    """
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    # Collect target functions
    target_funcs = []
    for func in fm.getFunctions(True):
        if func_filter and func_filter.lower() not in func.getName().lower():
            continue
        is_redund, _ = has_redundant_custom_storage(func)
        if is_redund:
            target_funcs.append(func)
            if len(target_funcs) >= limit:
                break

    if not target_funcs:
        print("No functions found matching filters.")
        return

    print("Testing %d functions (changes will be rolled back)...\n" % len(target_funcs))

    improved = 0
    unchanged = 0
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
            print("  %s (%s): decompilation failed, skipping" % (func_name, func_addr))
            continue

        # Remove custom storage in a rolled-back transaction
        tx_id = program.startTransaction("Test remove custom storage: %s" % func_name)
        try:
            func.setCustomVariableStorage(False)

            # Re-decompile AFTER
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                _, after_code = decompile_function(ifc, func, monitor)
            finally:
                ifc.dispose()
        finally:
            program.endTransaction(tx_id, False)  # roll back

        # Check for regression
        regressed, reg_reason = is_regression(before_code, after_code)

        if regressed:
            result_str = "REGRESSION: %s" % reg_reason
            regressions += 1
        elif after_code != before_code:
            result_str = "CHANGED (no regression)"
            improved += 1
        else:
            result_str = "IDENTICAL"
            unchanged += 1

        print("=" * 70)
        print("%s (%s)  [%s]" % (func_name, func_addr, result_str))
        print("=" * 70)

        # Show code diff if there is one
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

    # Summary
    print("=" * 70)
    print("TEST SUMMARY")
    print("=" * 70)
    print("  Functions tested:  %d" % len(target_funcs))
    print("  Identical output:  %d" % unchanged)
    print("  Changed (safe):    %d" % improved)
    print("  Regressions:       %d (would be rolled back in --apply)" % regressions)
    print("\n(Test mode - all changes rolled back)")


def apply_removals(program, func_filter=None, strict=False):
    """Remove redundant custom storage, rolling back regressions per function.
    If strict=True, also roll back any function where decompilation output changes.
    """
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    # Collect target functions
    target_funcs = []
    for func in fm.getFunctions(True):
        if func_filter and func_filter.lower() not in func.getName().lower():
            continue
        is_redund, _ = has_redundant_custom_storage(func)
        if is_redund:
            target_funcs.append(func)

    if not target_funcs:
        print("No functions with redundant custom storage found.")
        return 0

    print("Processing %d functions with redundant custom storage..." % len(target_funcs))

    applied = 0
    skipped = 0
    rolled_back = 0
    failed = 0
    rolled_back_names = []

    for i, func in enumerate(target_funcs):
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())

        try:
            # Decompile BEFORE
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                _, before_code = decompile_function(ifc, func, monitor)
            finally:
                ifc.dispose()

            if before_code is None:
                skipped += 1
                continue

            # Remove custom storage in its own transaction
            tx_id = program.startTransaction("Remove custom storage: %s" % func_name)
            try:
                func.setCustomVariableStorage(False)

                # Re-decompile AFTER
                ifc = DecompInterface()
                ifc.openProgram(program)
                try:
                    _, after_code = decompile_function(ifc, func, monitor)
                finally:
                    ifc.dispose()

                regressed, reason = is_regression(before_code, after_code)
                if strict and not regressed and after_code != before_code:
                    regressed = True
                    reason = "decompilation changed (strict mode)"
                if regressed:
                    program.endTransaction(tx_id, False)  # roll back
                    rolled_back += 1
                    rolled_back_names.append((func_name, func_addr, reason))
                    print("  ROLLBACK: %s (%s) - %s" % (func_name, func_addr, reason))
                else:
                    program.endTransaction(tx_id, True)  # keep
                    applied += 1

            except Exception:
                program.endTransaction(tx_id, False)
                raise

        except Exception as e:
            print("  WARN: %s (%s): %s" % (func_name, func_addr, str(e)))
            failed += 1

        if (i + 1) % 100 == 0:
            print("  Progress: %d / %d (applied=%d, rolled_back=%d)" % (
                i + 1, len(target_funcs), applied, rolled_back))

    print("\n" + "=" * 70)
    print("APPLY RESULTS")
    print("=" * 70)
    print("  Functions processed:   %d" % len(target_funcs))
    print("  Successfully removed:  %d" % applied)
    print("  Skipped:               %d" % skipped)
    print("  Rolled back:           %d" % rolled_back)
    print("  Failed:                %d" % failed)

    if rolled_back_names:
        print("\n" + "-" * 70)
        print("ROLLED BACK FUNCTIONS:")
        print("-" * 70)
        for name, addr, reason in rolled_back_names:
            print("  %s (%s): %s" % (name, addr, reason))

    return applied


def main():
    parser = argparse.ArgumentParser(
        description="Remove redundant 'Use Custom Storage' flags from functions",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply changes (default is dry-run)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: remove + re-decompile + rollback, show diffs")
    parser.add_argument("--limit", type=int, default=10,
                        help="Max functions to test in --test mode (default: 10)")
    parser.add_argument("--func", type=str, default=None,
                        help="Only process functions whose name contains this substring")
    parser.add_argument("--strict", action="store_true",
                        help="Roll back any function where decompilation output changes (not just regressions)")

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
        print("TEST MODE - changes will be applied and rolled back per function")
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
                test_removals(
                    prog,
                    limit=args.limit,
                    func_filter=args.func,
                )

            elif args.apply:
                applied = apply_removals(prog, func_filter=args.func, strict=args.strict)

                if applied > 0:
                    prog.save("Removed redundant custom storage for %d functions" % applied, None)
                    print("\nChanges saved to program database.")
                else:
                    print("\nNo changes applied.")

            else:
                dry_run(prog, func_filter=args.func)

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
