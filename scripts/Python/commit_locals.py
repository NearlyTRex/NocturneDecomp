#!/usr/bin/env python3
"""
commit_locals.py

Commits the decompiler's resolved local variable names and types back to
Ghidra's function database.  This replaces undefined types (undefined,
undefined1, undefined4, undefined8, etc.) with the decompiler's best guess
(float, int, CMatrix3x3f *, etc.).

Uses HighFunctionDBUtil.commitLocalNamesToDatabase() — the same API that
Ghidra's GUI "Commit Local Names" action calls.

Usage:
    # Dry run - show what would change (samples a few functions)
    python3 -u commit_locals.py <project_dir> <project_name> <program_name>

    # Test mode - commit + re-decompile + rollback, show before/after diffs
    python3 -u commit_locals.py <project_dir> <project_name> <program_name> --test
    python3 -u commit_locals.py <project_dir> <project_name> <program_name> --test --limit=20
    python3 -u commit_locals.py <project_dir> <project_name> <program_name> --test --func=processPhysics

    # Apply - commit locals for all functions and save
    python3 -u commit_locals.py <project_dir> <project_name> <program_name> --apply

    # Only commit for functions that currently have undefined locals
    python3 -u commit_locals.py <project_dir> <project_name> <program_name> --apply --only-undefined

    # Scan for regressions only and write a report (no changes saved)
    python3 -u commit_locals.py <project_dir> <project_name> <program_name> --scan-regressions
    python3 -u commit_locals.py <project_dir> <project_name> <program_name> --scan-regressions --only-undefined --report=my_report.txt

Examples:
    python3 -u commit_locals.py ./projects NocturneEdit nocedit.exe
    python3 -u commit_locals.py ./projects NocturneEdit nocedit.exe --test --limit=5
    python3 -u commit_locals.py ./projects NocturneEdit nocedit.exe --apply --only-undefined
    python3 -u commit_locals.py ./projects NocturneEdit nocedit.exe --scan-regressions --only-undefined
"""

import os
import sys
import re
import argparse
import difflib


UNDEFINED_RE = re.compile(r'^undefined\d*$')


def is_undefined_type(type_name):
    """Check if a type name is an undefined Ghidra type."""
    return UNDEFINED_RE.match(type_name) is not None


def get_local_type_summary(func):
    """Get a summary of local variable types from the function's stack frame.

    Returns dict with counts and details.
    """
    frame = func.getStackFrame()
    if frame is None:
        return {'total': 0, 'undefined': 0, 'defined': 0, 'vars': []}

    summary = {'total': 0, 'undefined': 0, 'defined': 0, 'vars': []}

    for var in frame.getStackVariables():
        # Skip parameters (positive offsets in __cdecl)
        if var.getStackOffset() >= 0:
            continue

        type_name = var.getDataType().getName()
        is_undef = is_undefined_type(type_name)
        summary['total'] += 1
        if is_undef:
            summary['undefined'] += 1
        else:
            summary['defined'] += 1
        summary['vars'].append({
            'name': var.getName(),
            'offset': var.getStackOffset(),
            'type': type_name,
            'is_undefined': is_undef,
        })

    summary['vars'].sort(key=lambda v: v['offset'])
    return summary


def has_undefined_locals(func):
    """Quick check: does this function have any undefined local types?"""
    frame = func.getStackFrame()
    if frame is None:
        return False
    for var in frame.getStackVariables():
        if var.getStackOffset() >= 0:
            continue
        if is_undefined_type(var.getDataType().getName()):
            return True
    return False


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


def commit_locals_for_function(res):
    """Commit local names AND types from decompiler result to DB.

    commitLocalNamesToDatabase only commits names (passes null for dataType,
    which preserves existing DB types).  We need to call updateDBVariable
    directly with the decompiler's resolved type to actually fix undefined types.

    We skip variables with NO ADDRESS storage (dynamic/unassigned) since
    updateDBVariable throws IllegalArgumentException for those.

    Returns the number of variables committed.
    """
    from ghidra.program.model.pcode import HighFunctionDBUtil
    from ghidra.program.model.symbol import SourceType

    hfunc = res.getHighFunction()
    if hfunc is None:
        return 0

    committed = 0
    sym_iter = hfunc.getLocalSymbolMap().getSymbols()
    while sym_iter.hasNext():
        sym = sym_iter.next()
        if sym.isParameter() or sym.isGlobal():
            continue
        try:
            # Skip variables with no valid storage (NO ADDRESS space)
            storage = sym.getStorage()
            if storage is None or storage.isUnassignedStorage():
                continue

            dt = sym.getDataType()
            if dt is not None and not is_undefined_type(dt.getName()):
                HighFunctionDBUtil.updateDBVariable(
                    sym, sym.getName(), dt, SourceType.USER_DEFINED)
                committed += 1
            else:
                # Still commit the name even if type is undefined
                HighFunctionDBUtil.updateDBVariable(
                    sym, None, None, SourceType.USER_DEFINED)
        except Exception as e:
            pass  # skip variables that can't be committed

    return committed


WARNING_RE = re.compile(r'/\* WARNING:.*?\*/', re.DOTALL)
ARTIFACT_RE = re.compile(r'\b(unaff_|in_stack_|extraout_)\w+')


def count_undefined_types(code):
    """Count occurrences of undefined types in decompiled C code."""
    if code is None:
        return 0
    return len(re.findall(r'\bundefined\d*\b', code))


def count_warnings(code):
    """Count WARNING comments in decompiled C code."""
    if code is None:
        return 0
    return len(WARNING_RE.findall(code))


def count_artifacts(code):
    """Count decompiler artifacts (unaff_, in_stack_, extraout_) in code."""
    if code is None:
        return 0
    return len(ARTIFACT_RE.findall(code))


def is_regression(before_code, after_code):
    """Check if committing locals caused a regression.

    A regression is defined as:
      - New WARNING lines appeared
      - Decompiler artifacts (unaff_, in_stack_, extraout_) increased

    Returns (is_regressed, reason_string).
    """
    if after_code is None:
        return True, "decompilation failed after commit"

    before_warnings = count_warnings(before_code)
    after_warnings = count_warnings(after_code)
    if after_warnings > before_warnings:
        return True, "new warnings (%d -> %d)" % (before_warnings, after_warnings)

    before_artifacts = count_artifacts(before_code)
    after_artifacts = count_artifacts(after_code)
    if after_artifacts > before_artifacts:
        return True, "more artifacts (%d -> %d)" % (before_artifacts, after_artifacts)

    return False, ""


def dry_run(program, only_undefined=False):
    """Scan functions and report how many have undefined locals."""
    fm = program.getFunctionManager()
    all_functions = list(fm.getFunctions(True))

    total_funcs = len(all_functions)
    funcs_with_undefined = 0
    total_undefined_vars = 0
    total_local_vars = 0

    print("Scanning %d functions..." % total_funcs)

    for func in all_functions:
        summary = get_local_type_summary(func)
        total_local_vars += summary['total']
        if summary['undefined'] > 0:
            funcs_with_undefined += 1
            total_undefined_vars += summary['undefined']

    print("\n" + "=" * 70)
    print("LOCAL VARIABLE TYPE SUMMARY")
    print("=" * 70)
    print("  Total functions:             %d" % total_funcs)
    print("  Functions with undefined:    %d" % funcs_with_undefined)
    print("  Total local variables:       %d" % total_local_vars)
    print("  Undefined type variables:    %d" % total_undefined_vars)
    print("  Defined type variables:      %d" % (total_local_vars - total_undefined_vars))
    if total_local_vars > 0:
        pct = 100.0 * total_undefined_vars / total_local_vars
        print("  Undefined percentage:        %.1f%%" % pct)

    if only_undefined:
        print("\n  --only-undefined: %d functions would be processed" % funcs_with_undefined)
    else:
        print("\n  All %d functions would be processed" % total_funcs)

    print("\n(Dry run - no changes made. Use --test to preview diffs, --apply to commit.)")


def test_commits(program, limit=10, func_filter=None, only_undefined=False):
    """Test committing locals by applying in a transaction, re-decompiling,
    then rolling back. Shows before/after diffs and type change stats.
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
        if only_undefined and not has_undefined_locals(func):
            continue
        target_funcs.append(func)
        if len(target_funcs) >= limit:
            break

    if not target_funcs:
        print("No functions found matching filters.")
        return

    print("Testing %d functions (changes will be rolled back)...\n" % len(target_funcs))

    total_before_undef = 0
    total_after_undef = 0
    improved = 0
    unchanged = 0
    worse = 0
    regressions = 0

    for func in target_funcs:
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())

        # Get frame state BEFORE
        before_summary = get_local_type_summary(func)

        # Decompile BEFORE
        ifc = DecompInterface()
        ifc.openProgram(program)
        try:
            before_res, before_code = decompile_function(ifc, func, monitor)
        finally:
            ifc.dispose()

        if before_code is None:
            print("  %s (%s): decompilation failed, skipping" % (func_name, func_addr))
            continue

        # Apply commit in a rolled-back transaction
        tx_id = program.startTransaction("Test commit locals: %s" % func_name)
        try:
            # Re-decompile to get fresh HighFunction within transaction
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                res, _ = decompile_function(ifc, func, monitor)
                num_committed = commit_locals_for_function(res)
            finally:
                ifc.dispose()

            if num_committed == 0:
                print("  %s (%s): no types to commit, skipping" % (func_name, func_addr))
                # still show results even if nothing committed

            # Get frame state AFTER commit
            after_summary = get_local_type_summary(func)

            # Re-decompile AFTER commit to see effect on output
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

        # Compare
        before_undef = before_summary['undefined']
        after_undef = after_summary['undefined']
        total_before_undef += before_undef
        total_after_undef += after_undef

        delta = after_undef - before_undef
        if regressed:
            result_str = "REGRESSION: %s" % reg_reason
            regressions += 1
        elif delta < 0:
            result_str = "IMPROVED (-%d undefined)" % abs(delta)
            improved += 1
        elif delta > 0:
            result_str = "WORSE (+%d undefined)" % delta
            worse += 1
        else:
            result_str = "NO CHANGE"
            unchanged += 1

        print("=" * 70)
        print("%s (%s)" % (func_name, func_addr))
        print("=" * 70)
        print("  Locals: %d total, %d undefined -> %d undefined  [%s]" % (
            before_summary['total'], before_undef, after_undef, result_str))

        # Show which variables changed type
        before_types = {v['offset']: v for v in before_summary['vars']}
        after_types = {v['offset']: v for v in after_summary['vars']}

        type_changes = []
        for offset in sorted(set(list(before_types.keys()) + list(after_types.keys()))):
            bv = before_types.get(offset)
            av = after_types.get(offset)
            if bv and av and bv['type'] != av['type']:
                type_changes.append(
                    "    Stack[%d]: %s (%s) -> %s (%s)" % (
                        offset, bv['name'], bv['type'], av['name'], av['type']))
            elif bv and not av:
                type_changes.append(
                    "    Stack[%d]: %s (%s) -> REMOVED" % (
                        offset, bv['name'], bv['type']))
            elif av and not bv:
                type_changes.append(
                    "    Stack[%d]: NEW %s (%s)" % (
                        offset, av['name'], av['type']))

        if type_changes:
            print("  Type changes:")
            for tc in type_changes:
                print(tc)

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
    print("  Improved:          %d" % improved)
    print("  Unchanged:         %d" % unchanged)
    print("  Worse:             %d" % worse)
    print("  Regressions:       %d (would be rolled back in --apply)" % regressions)
    print("  Undefined before:  %d" % total_before_undef)
    print("  Undefined after:   %d" % total_after_undef)
    if total_before_undef > 0:
        pct = 100.0 * (total_before_undef - total_after_undef) / total_before_undef
        print("  Reduction:         %.1f%%" % pct)
    print("\n(Test mode - all changes rolled back)")


def apply_commits(program, only_undefined=False):
    """Apply commit locals per function, rolling back regressions.

    Each function gets its own transaction so regressions can be individually
    rolled back without affecting other functions.  A regression is detected by
    re-decompiling after the commit and checking for new warnings or artifacts.
    """
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    # Collect target functions
    all_functions = list(fm.getFunctions(True))
    if only_undefined:
        target_funcs = [f for f in all_functions if has_undefined_locals(f)]
        print("Processing %d functions with undefined locals (of %d total)..." % (
            len(target_funcs), len(all_functions)))
    else:
        target_funcs = all_functions
        print("Processing all %d functions..." % len(target_funcs))

    # Snapshot undefined counts before
    before_undef_total = 0
    for func in target_funcs:
        summary = get_local_type_summary(func)
        before_undef_total += summary['undefined']

    committed = 0
    skipped = 0
    rolled_back = 0
    failed = 0
    rolled_back_names = []

    for i, func in enumerate(target_funcs):
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())

        try:
            # Decompile BEFORE to get baseline for regression check
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                _, before_code = decompile_function(ifc, func, monitor)
            finally:
                ifc.dispose()

            if before_code is None:
                skipped += 1
                continue

            # Commit in its own transaction
            tx_id = program.startTransaction("Commit locals: %s" % func_name)
            try:
                ifc = DecompInterface()
                ifc.openProgram(program)
                try:
                    res, _ = decompile_function(ifc, func, monitor)
                    num = commit_locals_for_function(res)
                finally:
                    ifc.dispose()

                if num == 0:
                    # Nothing to commit, don't bother checking
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
                    program.endTransaction(tx_id, False)  # roll back
                    rolled_back += 1
                    rolled_back_names.append((func_name, func_addr, reason))
                    print("  ROLLBACK: %s (%s) - %s" % (func_name, func_addr, reason))
                else:
                    program.endTransaction(tx_id, True)  # keep
                    committed += 1

            except Exception:
                program.endTransaction(tx_id, False)
                raise

        except Exception as e:
            print("  WARN: %s (%s): %s" % (func_name, func_addr, str(e)))
            failed += 1

        if (i + 1) % 100 == 0:
            print("  Progress: %d / %d (committed=%d, rolled_back=%d)" % (
                i + 1, len(target_funcs), committed, rolled_back))

    # Snapshot undefined counts after
    after_undef_total = 0
    for func in target_funcs:
        summary = get_local_type_summary(func)
        after_undef_total += summary['undefined']

    print("\n" + "=" * 70)
    print("APPLY RESULTS")
    print("=" * 70)
    print("  Functions processed:   %d" % len(target_funcs))
    print("  Successfully committed: %d" % committed)
    print("  Skipped (nothing):     %d" % skipped)
    print("  Rolled back:           %d" % rolled_back)
    print("  Failed:                %d" % failed)
    print("  Undefined vars before: %d" % before_undef_total)
    print("  Undefined vars after:  %d" % after_undef_total)
    reduction = before_undef_total - after_undef_total
    if before_undef_total > 0:
        pct = 100.0 * reduction / before_undef_total
        print("  Reduction:             %d (%.1f%%)" % (reduction, pct))

    if rolled_back_names:
        print("\n" + "-" * 70)
        print("ROLLED BACK FUNCTIONS:")
        print("-" * 70)
        for name, addr, reason in rolled_back_names:
            print("  %s (%s): %s" % (name, addr, reason))

    return committed


def scan_regressions(program, report_path, only_undefined=False, func_filter=None):
    """Scan all functions for commit-locals regressions and write a report.

    For each function, commits locals in a transaction, re-decompiles to check
    for regressions, then rolls back.  No permanent changes are made.
    Writes a detailed report file listing every regression with diffs.
    """
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    # Collect target functions
    all_functions = list(fm.getFunctions(True))
    target_funcs = []
    for func in all_functions:
        if func_filter and func_filter.lower() not in func.getName().lower():
            continue
        if only_undefined and not has_undefined_locals(func):
            continue
        target_funcs.append(func)

    print("Scanning %d functions for regressions..." % len(target_funcs))

    regression_entries = []
    improved_count = 0
    unchanged_count = 0
    regression_count = 0
    skipped_count = 0

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
                skipped_count += 1
                continue

            before_summary = get_local_type_summary(func)

            # Commit in a rolled-back transaction
            tx_id = program.startTransaction("Scan regression: %s" % func_name)
            try:
                ifc = DecompInterface()
                ifc.openProgram(program)
                try:
                    res, _ = decompile_function(ifc, func, monitor)
                    num = commit_locals_for_function(res)
                finally:
                    ifc.dispose()

                if num == 0:
                    skipped_count += 1
                    continue

                after_summary = get_local_type_summary(func)

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

            before_undef = before_summary['undefined']
            after_undef = after_summary['undefined']

            if regressed:
                regression_count += 1

                # Build diff
                before_lines = before_code.splitlines(keepends=True)
                after_lines = (after_code or "").splitlines(keepends=True)
                diff_lines = list(difflib.unified_diff(
                    before_lines, after_lines,
                    fromfile="before", tofile="after", n=3,
                ))

                # Collect warning details
                before_warns = WARNING_RE.findall(before_code)
                after_warns = WARNING_RE.findall(after_code) if after_code else []
                new_warns = [w for w in after_warns if w not in before_warns]

                regression_entries.append({
                    'name': func_name,
                    'addr': func_addr,
                    'reason': reason,
                    'before_undef': before_undef,
                    'after_undef': after_undef,
                    'before_warnings': len(before_warns),
                    'after_warnings': len(after_warns),
                    'new_warnings': new_warns,
                    'before_artifacts': count_artifacts(before_code),
                    'after_artifacts': count_artifacts(after_code),
                    'diff': diff_lines,
                })
                print("  REGRESSION: %s (%s) - %s" % (func_name, func_addr, reason))
            elif after_undef < before_undef:
                improved_count += 1
            else:
                unchanged_count += 1

        except Exception as e:
            print("  WARN: %s (%s): %s" % (func_name, func_addr, str(e)))
            skipped_count += 1

        if (i + 1) % 100 == 0:
            print("  Progress: %d / %d (regressions=%d)" % (
                i + 1, len(target_funcs), regression_count))

    # Write report
    with open(report_path, 'w') as f:
        f.write("=" * 80 + "\n")
        f.write("COMMIT LOCALS REGRESSION REPORT\n")
        f.write("=" * 80 + "\n\n")

        f.write("Summary:\n")
        f.write("  Functions scanned:   %d\n" % len(target_funcs))
        f.write("  Would improve:       %d\n" % improved_count)
        f.write("  Unchanged:           %d\n" % unchanged_count)
        f.write("  Regressions:         %d\n" % regression_count)
        f.write("  Skipped:             %d\n" % skipped_count)
        f.write("\n")

        if not regression_entries:
            f.write("No regressions detected!\n")
        else:
            f.write("-" * 80 + "\n")
            f.write("REGRESSIONS (%d)\n" % len(regression_entries))
            f.write("-" * 80 + "\n\n")

            for entry in regression_entries:
                f.write("=" * 80 + "\n")
                f.write("%s (%s)\n" % (entry['name'], entry['addr']))
                f.write("=" * 80 + "\n")
                f.write("  Reason:    %s\n" % entry['reason'])
                f.write("  Undefined: %d -> %d\n" % (
                    entry['before_undef'], entry['after_undef']))
                f.write("  Warnings:  %d -> %d\n" % (
                    entry['before_warnings'], entry['after_warnings']))
                f.write("  Artifacts: %d -> %d\n" % (
                    entry['before_artifacts'], entry['after_artifacts']))

                if entry['new_warnings']:
                    f.write("  New warnings:\n")
                    for w in entry['new_warnings']:
                        f.write("    %s\n" % w.strip())

                if entry['diff']:
                    f.write("\n  Diff:\n")
                    for line in entry['diff']:
                        f.write("    %s" % line)
                    if entry['diff'] and not entry['diff'][-1].endswith('\n'):
                        f.write("\n")

                f.write("\n")

    # Console summary
    print("\n" + "=" * 70)
    print("REGRESSION SCAN COMPLETE")
    print("=" * 70)
    print("  Functions scanned:   %d" % len(target_funcs))
    print("  Would improve:       %d" % improved_count)
    print("  Unchanged:           %d" % unchanged_count)
    print("  Regressions:         %d" % regression_count)
    print("  Skipped:             %d" % skipped_count)
    print("\n  Report written to: %s" % report_path)
    print("\n(No changes were made to the database)")


def main():
    parser = argparse.ArgumentParser(
        description="Commit decompiler-resolved local variable types to Ghidra DB",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply commits (default is dry-run)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: commit + re-decompile + rollback, show diffs")
    parser.add_argument("--scan-regressions", action="store_true",
                        help="Scan all functions for regressions and write a report (no changes saved)")
    parser.add_argument("--report", type=str, default=None,
                        help="Path for regression report file (default: commit_locals_regressions.txt)")
    parser.add_argument("--only-undefined", action="store_true",
                        help="Only process functions that have undefined local types")
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

    if args.scan_regressions:
        print("REGRESSION SCAN MODE - scanning all functions, no changes saved")
    elif args.test:
        print("TEST MODE - commits will be applied and rolled back per function")
    elif args.apply:
        print("APPLY MODE - commits will be saved to database")
    else:
        print("DRY RUN MODE - scanning only, no changes")
    print("=" * 70)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:

            if args.scan_regressions:
                report_path = args.report or os.path.join(
                    os.path.dirname(os.path.abspath(__file__)),
                    "..", "..", "annotations", "nocedit.exe", "reports",
                    "commit_locals_regressions.txt")
                report_path = os.path.abspath(report_path)
                os.makedirs(os.path.dirname(report_path), exist_ok=True)
                scan_regressions(
                    prog,
                    report_path=report_path,
                    only_undefined=args.only_undefined,
                    func_filter=args.func,
                )

            elif args.test:
                test_commits(
                    prog,
                    limit=args.limit,
                    func_filter=args.func,
                    only_undefined=args.only_undefined,
                )

            elif args.apply:
                committed = apply_commits(prog, only_undefined=args.only_undefined)

                if committed > 0:
                    prog.save("Committed local types for %d functions" % committed, None)
                    print("\nChanges saved to program database.")
                else:
                    print("\nNo commits applied.")

            else:
                dry_run(prog, only_undefined=args.only_undefined)

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
