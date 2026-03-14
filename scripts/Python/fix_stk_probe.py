#!/usr/bin/env python3
"""
fix_stk_probe.py

NOPs out __STK stack probe calls and their preceding PUSH argument.

Watcom's __STK probe pattern is:
    PUSH imm32              ; 5 bytes - stack size for probe
    CALL __STK_FUN_005ff9f3 ; 5 bytes - probes stack, RET 0x4 cleans up PUSH

The PUSH + CALL + RET 0x4 sequence is net-zero on ESP, so replacing
all 10 bytes with NOPs preserves correct stack analysis.

Some functions already have the PUSH NOPped (by fix_nonstandard_prologues)
but the CALL left in place. Since __STK does RET 0x4, the unmatched RET 0x4
eats 4 bytes from the caller's stack, shifting all parameter offsets by +4.
NOPping the CALL fixes this ESP drift.

Usage:
    # Dry run - list functions with __STK calls
    python3 -u fix_stk_probe.py <project_dir> <project_name> <program_name>

    # Test mode - NOP + re-decompile + rollback, show before/after diffs
    python3 -u fix_stk_probe.py <project_dir> <project_name> <program_name> --test
    python3 -u fix_stk_probe.py <project_dir> <project_name> <program_name> --test --limit=20
    python3 -u fix_stk_probe.py <project_dir> <project_name> <program_name> --test --func=readBONframe

    # Apply - NOP out __STK calls and save
    python3 -u fix_stk_probe.py <project_dir> <project_name> <program_name> --apply

Examples:
    python3 -u fix_stk_probe.py ./projects NocturneEdit nocedit.exe
    python3 -u fix_stk_probe.py ./projects NocturneEdit nocedit.exe --test --limit=5
    python3 -u fix_stk_probe.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import re
import argparse
import difflib


# x86 opcodes
NOP = 0x90
PUSH_IMM32 = 0x68  # PUSH imm32


STK_FUNCTION_NAME = '__STK_FUN_005ff9f3'
STK_FUNCTION_ADDR = 0x005ff9f3


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
    """Check if the patch caused a regression."""
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


def get_instruction_bytes(program, addr, length):
    """Read raw bytes from the program at the given address."""
    mem = program.getMemory()
    buf = bytearray(length)
    for i in range(length):
        buf[i] = mem.getByte(addr.add(i)) & 0xFF
    return bytes(buf)


def write_bytes(program, addr, data):
    """Write raw bytes to the program at the given address."""
    mem = program.getMemory()
    for i, b in enumerate(data):
        mem.setByte(addr.add(i), b & 0xFF if b < 128 else b - 256)


def apply_nop_patch(program, addr, length):
    """Replace bytes with NOPs, clearing and re-disassembling."""
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand

    listing = program.getListing()
    clear_set = AddressSet(addr, addr.add(length - 1))
    listing.clearCodeUnits(addr, addr.add(length - 1), False)

    nops = bytes([NOP] * length)
    write_bytes(program, addr, nops)

    cmd = DisassembleCommand(addr, clear_set, True)
    cmd.applyTo(program)


def find_stk_function(program):
    """Find the __STK stack probe function by address or name."""
    fm = program.getFunctionManager()
    addr_factory = program.getAddressFactory()

    # Try by known address first
    try:
        addr = addr_factory.getAddress("0x%x" % STK_FUNCTION_ADDR)
        func = fm.getFunctionAt(addr)
        if func is not None:
            return func
    except Exception:
        pass

    # Fall back to name search
    for func in fm.getFunctions(True):
        if STK_FUNCTION_NAME in func.getName():
            return func

    return None


def find_stk_call_sites(program, stk_func):
    """Find all CALL instructions that target the __STK function.

    Returns list of (caller_func, call_addr, push_addr, push_is_nop) tuples.
    """
    from ghidra.program.model.symbol import ReferenceManager

    stk_addr = stk_func.getEntryPoint()
    fm = program.getFunctionManager()
    ref_mgr = program.getReferenceManager()
    listing = program.getListing()

    results = []
    for ref in ref_mgr.getReferencesTo(stk_addr):
        if not ref.getReferenceType().isCall():
            continue

        call_addr = ref.getFromAddress()
        caller_func = fm.getFunctionContaining(call_addr)
        if caller_func is None:
            continue

        call_instr = listing.getInstructionAt(call_addr)
        if call_instr is None:
            continue

        call_length = call_instr.getLength()
        if call_length != 5:
            print("  WARN: unexpected CALL length %d at %s, skipping" % (
                call_length, call_addr))
            continue

        # Check the 5 bytes before the CALL for PUSH imm32 or 5 NOPs
        push_addr = call_addr.subtract(5)
        push_bytes = get_instruction_bytes(program, push_addr, 5)

        push_is_nop = all(b == NOP for b in push_bytes)
        push_is_push = (push_bytes[0] == PUSH_IMM32)

        if not push_is_nop and not push_is_push:
            # Check if it's something else entirely - might be inside
            # a different instruction. Try to verify via the listing.
            prev_instr = listing.getInstructionContaining(push_addr)
            if prev_instr is not None:
                prev_mnem = prev_instr.getMnemonicString().upper()
                if prev_mnem == 'PUSH' and prev_instr.getLength() == 5:
                    push_is_push = True
                    push_addr = prev_instr.getAddress()
                elif prev_mnem == 'NOP':
                    # Could be individual NOPs - check all 5 bytes
                    push_is_nop = True
                else:
                    print("  WARN: unexpected instruction before CALL at %s: %s, skipping" % (
                        call_addr, prev_mnem))
                    continue

        if not push_is_nop and not push_is_push:
            print("  WARN: can't identify bytes before CALL at %s: %s, skipping" % (
                call_addr, ' '.join('%02x' % b for b in push_bytes)))
            continue

        results.append((caller_func, call_addr, push_addr, push_is_nop))

    return results


def dry_run(program, func_filter=None):
    """Scan and report __STK call sites."""
    stk_func = find_stk_function(program)
    if stk_func is None:
        print("ERROR: Could not find __STK function")
        return

    print("Found __STK function: %s at %s" % (stk_func.getName(), stk_func.getEntryPoint()))

    sites = find_stk_call_sites(program, stk_func)

    already_nopped = 0
    needs_full_patch = 0

    print("\n" + "=" * 70)
    print("__STK CALL SITE SCAN")
    print("=" * 70)

    for caller_func, call_addr, push_addr, push_is_nop in sites:
        name = caller_func.getName()
        if func_filter and func_filter.lower() not in name.lower():
            continue

        if push_is_nop:
            status = "PUSH already NOPped, CALL remains (ESP drift!)"
            already_nopped += 1
        else:
            status = "PUSH + CALL intact"
            needs_full_patch += 1

        print("  %s  PUSH@%s  CALL@%s  %s" % (
            name, push_addr, call_addr, status))

    total = already_nopped + needs_full_patch
    print("\n  Total __STK call sites:    %d" % total)
    print("  PUSH already NOPped:       %d (have ESP drift)" % already_nopped)
    print("  PUSH + CALL intact:        %d" % needs_full_patch)
    print("  All will be patched to 10 NOPs")
    print("\n(Dry run - no changes made. Use --test to preview diffs, --apply to commit.)")


def test_patches(program, limit=10, func_filter=None):
    """Test NOPping __STK calls by applying in a transaction, re-decompiling,
    then rolling back. Shows before/after diffs.
    """
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    stk_func = find_stk_function(program)
    if stk_func is None:
        print("ERROR: Could not find __STK function")
        return

    print("Found __STK function: %s at %s" % (stk_func.getName(), stk_func.getEntryPoint()))

    sites = find_stk_call_sites(program, stk_func)

    # Filter
    filtered = []
    for caller_func, call_addr, push_addr, push_is_nop in sites:
        if func_filter and func_filter.lower() not in caller_func.getName().lower():
            continue
        filtered.append((caller_func, call_addr, push_addr, push_is_nop))
        if len(filtered) >= limit:
            break

    if not filtered:
        print("No matching __STK call sites found.")
        return

    print("Testing %d functions (changes will be rolled back)...\n" % len(filtered))

    monitor = ConsoleTaskMonitor()
    improved = 0
    unchanged = 0
    regressions = 0

    for caller_func, call_addr, push_addr, push_is_nop in filtered:
        func_name = caller_func.getName()
        func_addr = str(caller_func.getEntryPoint())

        status_tag = "PUSH NOPped" if push_is_nop else "PUSH+CALL"

        # Decompile BEFORE
        ifc = DecompInterface()
        ifc.openProgram(program)
        try:
            _, before_code = decompile_function(ifc, caller_func, monitor)
        finally:
            ifc.dispose()

        if before_code is None:
            print("  %s (%s): decompilation failed, skipping" % (func_name, func_addr))
            continue

        before_warnings = count_warnings(before_code)
        before_artifacts = count_artifacts(before_code)

        # Apply patch in a rolled-back transaction
        tx_id = program.startTransaction("Test STK NOP: %s" % func_name)
        try:
            # NOP the PUSH (or existing NOPs) + CALL = 10 bytes
            apply_nop_patch(program, push_addr, 10)

            # Also remove custom storage if the function has it,
            # since the offset shift it was compensating for is now gone
            had_custom = caller_func.hasCustomVariableStorage()
            if had_custom:
                caller_func.setCustomVariableStorage(False)

            # Re-decompile AFTER
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                _, after_code = decompile_function(ifc, caller_func, monitor)
            finally:
                ifc.dispose()
        finally:
            program.endTransaction(tx_id, False)  # roll back

        after_warnings = count_warnings(after_code) if after_code else 0
        after_artifacts = count_artifacts(after_code) if after_code else 0

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
        print("%s (%s)  [%s]  [%s]%s" % (
            func_name, func_addr, status_tag, result_str,
            "  (had custom storage)" if had_custom else ""))
        print("=" * 70)

        print("  Artifacts BEFORE: warnings=%d, artifacts=%d" % (
            before_warnings, before_artifacts))
        print("  Artifacts AFTER:  warnings=%d, artifacts=%d" % (
            after_warnings, after_artifacts))

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

    # Summary
    print("=" * 70)
    print("TEST SUMMARY")
    print("=" * 70)
    print("  Functions tested:  %d" % len(filtered))
    print("  Identical output:  %d" % unchanged)
    print("  Changed (safe):    %d" % improved)
    print("  Regressions:       %d" % regressions)
    print("\n(Test mode - all changes rolled back)")


def apply_patches(program, func_filter=None):
    """NOP out __STK calls, rolling back regressions per function."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    stk_func = find_stk_function(program)
    if stk_func is None:
        print("ERROR: Could not find __STK function")
        return 0

    print("Found __STK function: %s at %s" % (stk_func.getName(), stk_func.getEntryPoint()))

    sites = find_stk_call_sites(program, stk_func)

    # Filter
    filtered = []
    for caller_func, call_addr, push_addr, push_is_nop in sites:
        if func_filter and func_filter.lower() not in caller_func.getName().lower():
            continue
        filtered.append((caller_func, call_addr, push_addr, push_is_nop))

    if not filtered:
        print("No matching __STK call sites found.")
        return 0

    print("Processing %d __STK call sites..." % len(filtered))

    monitor = ConsoleTaskMonitor()
    applied = 0
    skipped = 0
    rolled_back = 0
    failed = 0
    rolled_back_names = []

    for i, (caller_func, call_addr, push_addr, push_is_nop) in enumerate(filtered):
        func_name = caller_func.getName()
        func_addr = str(caller_func.getEntryPoint())

        try:
            # Decompile BEFORE
            ifc = DecompInterface()
            ifc.openProgram(program)
            try:
                _, before_code = decompile_function(ifc, caller_func, monitor)
            finally:
                ifc.dispose()

            if before_code is None:
                skipped += 1
                continue

            # Apply in its own transaction
            tx_id = program.startTransaction("NOP __STK: %s" % func_name)
            try:
                apply_nop_patch(program, push_addr, 10)

                # Remove custom storage if present
                if caller_func.hasCustomVariableStorage():
                    caller_func.setCustomVariableStorage(False)

                # Re-decompile AFTER
                ifc = DecompInterface()
                ifc.openProgram(program)
                try:
                    _, after_code = decompile_function(ifc, caller_func, monitor)
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
                    applied += 1

            except Exception:
                program.endTransaction(tx_id, False)
                raise

        except Exception as e:
            print("  WARN: %s (%s): %s" % (func_name, func_addr, str(e)))
            failed += 1

        if (i + 1) % 20 == 0:
            print("  Progress: %d / %d (applied=%d, rolled_back=%d)" % (
                i + 1, len(filtered), applied, rolled_back))

    print("\n" + "=" * 70)
    print("APPLY RESULTS")
    print("=" * 70)
    print("  Call sites processed:  %d" % len(filtered))
    print("  Successfully patched:  %d" % applied)
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
        description="NOP out __STK stack probe calls",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply changes (default is dry-run)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: NOP + re-decompile + rollback, show diffs")
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
                test_patches(
                    prog,
                    limit=args.limit,
                    func_filter=args.func,
                )

            elif args.apply:
                applied = apply_patches(prog, func_filter=args.func)

                if applied > 0:
                    prog.save("NOPped __STK probe calls for %d functions" % applied, None)
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
