#!/usr/bin/env python3
"""
fix_nonstandard_prologues.py

Patches non-standard function prologues in the Ghidra program database so the
decompiler can correctly analyze stack frames.

Targets two MSVC compiler patterns that confuse Ghidra:

  Pattern 1 - Stack alignment (AND ESP, -N):
    PUSH regs; MOV EBP, ESP; SUB ESP, N; AND ESP, 0xFFFFFFF8
    Fix: NOP the AND ESP instruction (3 bytes -> 3 NOPs)

  Pattern 2 - Shifted frame pointer (SUB EBP, imm):
    PUSH regs; MOV EBP, ESP; SUB ESP, N; SUB EBP, imm
    Fix: NOP the SUB EBP instruction (3 bytes -> 3 NOPs)

Usage:
    # Dry run - show what would be patched
    python3 fix_nonstandard_prologues.py <project_dir> <project_name> <program_name>

    # Apply patches
    python3 fix_nonstandard_prologues.py <project_dir> <project_name> <program_name> --apply

    # Only patch Pattern 1 (AND ESP)
    python3 fix_nonstandard_prologues.py <project_dir> <project_name> <program_name> --apply --pattern=and-esp

    # Only patch Pattern 2 (SUB EBP)
    python3 fix_nonstandard_prologues.py <project_dir> <project_name> <program_name> --apply --pattern=sub-ebp

    # Test mode - decompile before/after patching to verify improvement
    python3 fix_nonstandard_prologues.py <project_dir> <project_name> <program_name> --test
    python3 fix_nonstandard_prologues.py <project_dir> <project_name> <program_name> --test --pattern=and-esp --limit=5

Examples:
    python3 fix_nonstandard_prologues.py ./projects NocturneEdit nocedit.exe
    python3 fix_nonstandard_prologues.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import argparse
import difflib


# x86 opcodes
NOP = 0x90

# Maximum number of instructions to scan from function entry for prologue patterns
MAX_PROLOGUE_INSTRUCTIONS = 15


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


def scan_prologue(program, func):
    """Scan a function's prologue for non-standard patterns.

    Returns a dict with detected patterns and their addresses.
    """
    listing = program.getListing()
    body = func.getBody()
    result = {
        'and_esp': None,      # (address, instruction_length, mask_value)
        'sub_ebp': None,      # (address, instruction_length, imm_value)
        'has_mov_ebp_esp': False,
        'has_sub_esp': False,
        'push_count_before_ebp': 0,
    }

    instructions = []
    for instr in listing.getInstructions(body, True):
        instructions.append(instr)
        if len(instructions) >= MAX_PROLOGUE_INSTRUCTIONS:
            break

    saw_mov_ebp_esp = False
    saw_sub_esp = False
    push_count = 0

    for instr in instructions:
        mnemonic = instr.getMnemonicString().upper()
        num_ops = instr.getNumOperands()
        addr = instr.getAddress()
        length = instr.getLength()

        if num_ops < 2:
            if mnemonic == 'PUSH':
                if not saw_mov_ebp_esp:
                    push_count += 1
            continue

        op0 = instr.getDefaultOperandRepresentation(0).upper()
        op1 = instr.getDefaultOperandRepresentation(1).upper()

        # MOV EBP, ESP
        if mnemonic == 'MOV' and op0 == 'EBP' and op1 == 'ESP':
            saw_mov_ebp_esp = True
            result['has_mov_ebp_esp'] = True
            result['push_count_before_ebp'] = push_count
            continue

        # SUB ESP, imm (standard stack allocation)
        if mnemonic == 'SUB' and op0 == 'ESP':
            if saw_mov_ebp_esp:
                saw_sub_esp = True
                result['has_sub_esp'] = True
            continue

        # AND ESP, mask (Pattern 1 - stack alignment)
        if mnemonic == 'AND' and op0 == 'ESP' and saw_mov_ebp_esp:
            try:
                mask_str = op1.replace('0X', '0x')
                mask_val = int(mask_str, 16) if mask_str.startswith('0x') else int(mask_str)
                # Verify it's an alignment mask (high bits set, low bits clear)
                if mask_val > 0x7FFFFFFF or mask_val < 0:
                    result['and_esp'] = (addr, length, mask_val)
            except ValueError:
                pass
            continue

        # SUB EBP, imm (Pattern 2 - shifted frame pointer)
        if mnemonic == 'SUB' and op0 == 'EBP' and saw_mov_ebp_esp:
            try:
                imm_str = op1.replace('0X', '0x')
                imm_val = int(imm_str, 16) if imm_str.startswith('0x') else int(imm_str)
                if 0 < imm_val < 0x200:  # reasonable range for frame shift
                    result['sub_ebp'] = (addr, length, imm_val)
            except ValueError:
                pass
            continue

    return result


def find_all_prologue_patterns(program):
    """Scan all functions for non-standard prologue patterns.

    Returns list of (function, prologue_info) tuples.
    """
    fm = program.getFunctionManager()
    results = []

    all_functions = list(fm.getFunctions(True))
    print("Scanning %d functions for non-standard prologues..." % len(all_functions))

    for func in all_functions:
        info = scan_prologue(program, func)
        if info['and_esp'] or info['sub_ebp']:
            results.append((func, info))

    return results


def apply_nop_patch(program, addr, length):
    """Replace instruction bytes with NOPs.

    Clears the existing instruction first (Ghidra won't let you modify bytes
    under a defined instruction), writes the NOPs, then re-disassembles.
    """
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand

    listing = program.getListing()

    # Clear the instruction(s) covering the patch range
    clear_set = AddressSet(addr, addr.add(length - 1))
    listing.clearCodeUnits(addr, addr.add(length - 1), False)

    # Write NOP bytes
    nops = bytes([NOP] * length)
    write_bytes(program, addr, nops)

    # Re-disassemble so the decompiler sees NOP instructions
    cmd = DisassembleCommand(addr, clear_set, True)
    cmd.applyTo(program)


def patch_prologues(program, dry_run=True, pattern_filter=None, func_filter=None):
    """Find and patch non-standard prologues.

    Args:
        program: Ghidra program object
        dry_run: If True, only report what would be patched
        pattern_filter: 'and-esp', 'sub-ebp', or None for both
        func_filter: Only patch functions whose name contains this substring

    Returns:
        Dict with statistics
    """
    results = find_all_prologue_patterns(program)
    if func_filter:
        results = [(f, info) for f, info in results
                   if func_filter.lower() in f.getName().lower()]

    stats = {
        'total_functions': len(list(program.getFunctionManager().getFunctions(True))),
        'and_esp_found': 0,
        'sub_ebp_found': 0,
        'and_esp_patched': 0,
        'sub_ebp_patched': 0,
        'details': [],
    }

    do_and_esp = pattern_filter in (None, 'and-esp')
    do_sub_ebp = pattern_filter in (None, 'sub-ebp')

    for func, info in results:
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())
        detail = {
            'name': func_name,
            'address': func_addr,
            'patterns': [],
        }

        if info['and_esp']:
            addr, length, mask_val = info['and_esp']
            stats['and_esp_found'] += 1
            original_bytes = get_instruction_bytes(program, addr, length)
            detail['patterns'].append({
                'type': 'AND ESP',
                'address': str(addr),
                'value': '0x%x' % (mask_val & 0xFFFFFFFF),
                'length': length,
                'original_bytes': ' '.join('%02x' % b for b in original_bytes),
            })

            if do_and_esp and not dry_run:
                apply_nop_patch(program, addr, length)
                stats['and_esp_patched'] += 1
                detail['patterns'][-1]['patched'] = True

        if info['sub_ebp']:
            addr, length, imm_val = info['sub_ebp']
            stats['sub_ebp_found'] += 1
            original_bytes = get_instruction_bytes(program, addr, length)
            detail['patterns'].append({
                'type': 'SUB EBP',
                'address': str(addr),
                'value': '0x%x' % imm_val,
                'length': length,
                'original_bytes': ' '.join('%02x' % b for b in original_bytes),
            })

            if do_sub_ebp and not dry_run:
                apply_nop_patch(program, addr, length)
                stats['sub_ebp_patched'] += 1
                detail['patterns'][-1]['patched'] = True

        stats['details'].append(detail)

    return stats


def print_report(stats, dry_run, pattern_filter):
    """Print a human-readable report of the findings/patches."""
    print("\n" + "=" * 70)
    print("NON-STANDARD PROLOGUE ANALYSIS")
    print("=" * 70)
    print("Total functions scanned: %d" % stats['total_functions'])
    print()

    # Pattern 1 summary
    print("Pattern 1 - AND ESP (stack alignment):")
    print("  Found:   %d functions" % stats['and_esp_found'])
    if not dry_run:
        print("  Patched: %d functions" % stats['and_esp_patched'])
    print()

    # Pattern 2 summary
    print("Pattern 2 - SUB EBP (shifted frame pointer):")
    print("  Found:   %d functions" % stats['sub_ebp_found'])
    if not dry_run:
        print("  Patched: %d functions" % stats['sub_ebp_patched'])
    print()

    # Detailed listing
    if stats['details']:
        print("-" * 70)
        print("AFFECTED FUNCTIONS:")
        print("-" * 70)
        for detail in sorted(stats['details'], key=lambda d: d['address']):
            print("\n  %s (%s)" % (detail['name'], detail['address']))
            for p in detail['patterns']:
                status = ""
                if 'patched' in p and p['patched']:
                    status = " -> PATCHED (NOPed)"
                elif dry_run:
                    status = " (would be NOPed)"

                print("    %s, 0x%s at %s [%s]%s" % (
                    p['type'],
                    p['value'].replace('0x', ''),
                    p['address'],
                    p['original_bytes'],
                    status,
                ))

    if dry_run:
        print("\n(Dry run - no changes were made. Use --apply to patch.)")


def decompile_function(program, func, timeout=60):
    """Decompile a single function and return the C code as a string."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    interface = DecompInterface()
    interface.openProgram(program)
    try:
        res = interface.decompileFunction(func, timeout, ConsoleTaskMonitor())
        if not res.decompileCompleted():
            return "// Decompilation failed or timed out\n"
        decomp = res.getDecompiledFunction()
        if decomp is None:
            return "// No decompiled output\n"
        return decomp.getC()
    finally:
        interface.dispose()


def count_artifacts(code):
    """Count decompiler artifacts that indicate bad stack analysis."""
    import re
    artifacts = {
        'unaff_': len(re.findall(r'unaff_\w+', code)),
        'in_stack_': len(re.findall(r'in_stack_\w+', code)),
        'extraout_': len(re.findall(r'extraout_\w+', code)),
        'unaff_retaddr': len(re.findall(r'unaff_retaddr', code)),
    }
    artifacts['total'] = sum(artifacts.values())
    return artifacts


def test_patches(program, pattern_filter=None, limit=10, func_filter=None):
    """Test patching by decompiling before and after, showing diffs.

    Patches are applied within a transaction that is rolled back afterward,
    so no permanent changes are made.

    Args:
        program: Ghidra program object
        pattern_filter: 'and-esp', 'sub-ebp', or None for both
        limit: Maximum number of functions to test
        func_filter: Only test functions whose name contains this substring
    """
    results = find_all_prologue_patterns(program)

    do_and_esp = pattern_filter in (None, 'and-esp')
    do_sub_ebp = pattern_filter in (None, 'sub-ebp')

    # Filter to functions matching the pattern filter
    test_funcs = []
    for func, info in results:
        if func_filter and func_filter.lower() not in func.getName().lower():
            continue
        if (do_and_esp and info['and_esp']) or (do_sub_ebp and info['sub_ebp']):
            test_funcs.append((func, info))
        if len(test_funcs) >= limit:
            break

    if not test_funcs:
        print("No functions found matching the pattern filter.")
        return

    print("Testing %d functions (patches will be rolled back)...\n" % len(test_funcs))

    for func, info in test_funcs:
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())
        patterns_desc = []
        if info['and_esp'] and do_and_esp:
            patterns_desc.append("AND ESP 0x%x" % (info['and_esp'][2] & 0xFFFFFFFF))
        if info['sub_ebp'] and do_sub_ebp:
            patterns_desc.append("SUB EBP 0x%x" % info['sub_ebp'][2])

        print("=" * 70)
        print("%s (%s) - %s" % (func_name, func_addr, ", ".join(patterns_desc)))
        print("=" * 70)

        # Decompile BEFORE patching
        before_code = decompile_function(program, func)
        before_artifacts = count_artifacts(before_code)

        # Apply patch in a transaction, decompile, then roll back
        tx_id = program.startTransaction("Test patch: %s" % func_name)
        try:
            if info['and_esp'] and do_and_esp:
                addr, length, _ = info['and_esp']
                original_bytes = get_instruction_bytes(program, addr, length)
                apply_nop_patch(program, addr, length)

            if info['sub_ebp'] and do_sub_ebp:
                addr, length, _ = info['sub_ebp']
                original_bytes_ebp = get_instruction_bytes(program, addr, length)
                apply_nop_patch(program, addr, length)

            # Need to clear the decompiler cache by re-analyzing
            after_code = decompile_function(program, func)
            after_artifacts = count_artifacts(after_code)
        finally:
            # Roll back - pass False to discard changes
            program.endTransaction(tx_id, False)

        # Show artifact counts
        print("\nArtifacts BEFORE: unaff=%d, in_stack=%d, extraout=%d (total=%d)" % (
            before_artifacts['unaff_'], before_artifacts['in_stack_'],
            before_artifacts['extraout_'], before_artifacts['total']))
        print("Artifacts AFTER:  unaff=%d, in_stack=%d, extraout=%d (total=%d)" % (
            after_artifacts['unaff_'], after_artifacts['in_stack_'],
            after_artifacts['extraout_'], after_artifacts['total']))

        delta = after_artifacts['total'] - before_artifacts['total']
        if delta < 0:
            print("Result: IMPROVED (-%d artifacts)" % abs(delta))
        elif delta > 0:
            print("Result: WORSE (+%d artifacts)" % delta)
        else:
            print("Result: NO CHANGE in artifact count")

        # Show unified diff
        before_lines = before_code.splitlines(keepends=True)
        after_lines = after_code.splitlines(keepends=True)
        diff = list(difflib.unified_diff(
            before_lines, after_lines,
            fromfile="before", tofile="after", n=3,
        ))

        if diff:
            print("\nDiff:")
            for line in diff:
                sys.stdout.write("  " + line)
            if not diff[-1].endswith('\n'):
                print()
        else:
            print("\nNo difference in decompiled output.")

        print()


def batch_test_patches(program, pattern_filter=None, func_filter=None):
    """Batch test all matching functions and produce aggregate statistics.

    Patches each function in a transaction, decompiles before/after, rolls back.
    No permanent changes are made.

    Args:
        program: Ghidra program object
        pattern_filter: 'and-esp', 'sub-ebp', or None for both
        func_filter: Only test functions whose name contains this substring
    """
    results = find_all_prologue_patterns(program)

    do_and_esp = pattern_filter in (None, 'and-esp')
    do_sub_ebp = pattern_filter in (None, 'sub-ebp')

    test_funcs = []
    for func, info in results:
        if func_filter and func_filter.lower() not in func.getName().lower():
            continue
        if (do_and_esp and info['and_esp']) or (do_sub_ebp and info['sub_ebp']):
            test_funcs.append((func, info))

    if not test_funcs:
        print("No functions found matching the filter.")
        return

    total = len(test_funcs)
    print("Batch testing %d functions (all patches rolled back)...\n" % total)

    improved = []    # (name, addr, before_total, after_total, delta)
    worsened = []
    unchanged = []
    no_artifacts_either = []

    # Per-artifact-type totals
    total_before = {'unaff_': 0, 'in_stack_': 0, 'extraout_': 0, 'total': 0}
    total_after = {'unaff_': 0, 'in_stack_': 0, 'extraout_': 0, 'total': 0}

    for i, (func, info) in enumerate(test_funcs):
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())

        if (i + 1) % 50 == 0 or i == 0:
            print("  [%d/%d] %s..." % (i + 1, total, func_name))

        # Decompile BEFORE
        before_code = decompile_function(program, func)
        before_arts = count_artifacts(before_code)

        # Patch in transaction, decompile, roll back
        tx_id = program.startTransaction("Batch test: %s" % func_name)
        try:
            if info['and_esp'] and do_and_esp:
                addr, length, _ = info['and_esp']
                apply_nop_patch(program, addr, length)
            if info['sub_ebp'] and do_sub_ebp:
                addr, length, _ = info['sub_ebp']
                apply_nop_patch(program, addr, length)

            after_code = decompile_function(program, func)
            after_arts = count_artifacts(after_code)
        finally:
            program.endTransaction(tx_id, False)

        # Accumulate totals
        for key in total_before:
            total_before[key] += before_arts[key]
            total_after[key] += after_arts[key]

        delta = after_arts['total'] - before_arts['total']
        entry = (func_name, func_addr, before_arts['total'], after_arts['total'], delta)

        if delta < 0:
            improved.append(entry)
        elif delta > 0:
            worsened.append(entry)
        elif before_arts['total'] == 0 and after_arts['total'] == 0:
            no_artifacts_either.append(entry)
        else:
            unchanged.append(entry)

    # Sort by magnitude of change
    improved.sort(key=lambda x: x[4])        # most improved first (most negative)
    worsened.sort(key=lambda x: -x[4])       # most worsened first (most positive)

    # Print summary
    print("\n" + "=" * 70)
    print("BATCH TEST SUMMARY")
    print("=" * 70)
    print("Functions tested: %d" % total)
    print()
    print("  Improved:            %3d functions" % len(improved))
    print("  Worsened:            %3d functions" % len(worsened))
    print("  Unchanged (had art): %3d functions" % len(unchanged))
    print("  Clean (no art):      %3d functions" % len(no_artifacts_either))
    print()

    net = total_after['total'] - total_before['total']
    print("Artifact totals:")
    print("                    BEFORE    AFTER    DELTA")
    print("  unaff_          %6d   %6d   %+d" % (
        total_before['unaff_'], total_after['unaff_'],
        total_after['unaff_'] - total_before['unaff_']))
    print("  in_stack_       %6d   %6d   %+d" % (
        total_before['in_stack_'], total_after['in_stack_'],
        total_after['in_stack_'] - total_before['in_stack_']))
    print("  extraout_       %6d   %6d   %+d" % (
        total_before['extraout_'], total_after['extraout_'],
        total_after['extraout_'] - total_before['extraout_']))
    print("  TOTAL           %6d   %6d   %+d" % (
        total_before['total'], total_after['total'], net))
    print()

    if net < 0:
        print("NET RESULT: IMPROVED by %d artifacts overall" % abs(net))
    elif net > 0:
        print("NET RESULT: WORSE by %d artifacts overall" % net)
    else:
        print("NET RESULT: NO CHANGE overall")

    # Show top improved
    if improved:
        print("\n" + "-" * 70)
        print("TOP IMPROVED (up to 20):")
        print("-" * 70)
        for name, addr, before, after, delta in improved[:20]:
            print("  %s (%s): %d -> %d (%+d)" % (name, addr, before, after, delta))

    # Show all worsened (important to see every one)
    if worsened:
        print("\n" + "-" * 70)
        print("ALL WORSENED (%d):" % len(worsened))
        print("-" * 70)
        for name, addr, before, after, delta in worsened:
            print("  %s (%s): %d -> %d (%+d)" % (name, addr, before, after, delta))


def main():
    """Entry point for PyGhidra headless execution."""
    parser = argparse.ArgumentParser(
        description="Patch non-standard function prologues in Ghidra program database",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply patches (default is dry-run)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: decompile before/after patching to show diff (no permanent changes)")
    parser.add_argument("--batch", action="store_true",
                        help="Batch test ALL matching functions with aggregate stats (no permanent changes)")
    parser.add_argument("--pattern", choices=['and-esp', 'sub-ebp'],
                        default=None,
                        help="Only patch a specific pattern (default: both)")
    parser.add_argument("--limit", type=int, default=10,
                        help="Max functions to test in --test mode (default: 10)")
    parser.add_argument("--func", type=str, default=None,
                        help="Only process functions whose name contains this substring")

    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        print("Install the PyGhidra package from your Ghidra installation.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    dry_run = not args.apply

    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)
    if args.batch:
        print("BATCH TEST MODE - testing all functions, no permanent changes")
    elif args.test:
        print("TEST MODE - patches will be applied and rolled back")
    elif dry_run:
        print("DRY RUN MODE - no changes will be made")
    print("=" * 70)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:
            if args.batch:
                batch_test_patches(
                    currentProgram,
                    pattern_filter=args.pattern,
                    func_filter=args.func,
                )
            elif args.test:
                test_patches(
                    currentProgram,
                    pattern_filter=args.pattern,
                    limit=args.limit,
                    func_filter=args.func,
                )
            else:
                if not dry_run:
                    tx_id = currentProgram.startTransaction("Patch non-standard prologues")

                try:
                    stats = patch_prologues(
                        currentProgram,
                        dry_run=dry_run,
                        pattern_filter=args.pattern,
                        func_filter=args.func,
                    )
                    print_report(stats, dry_run, args.pattern)
                finally:
                    if not dry_run:
                        currentProgram.endTransaction(tx_id, True)

                if not dry_run:
                    total_patched = stats['and_esp_patched'] + stats['sub_ebp_patched']
                    if total_patched > 0:
                        currentProgram.save("Patched %d non-standard prologues" % total_patched, None)
                        print("\nChanges saved to program database.")
                    else:
                        print("\nNo patches applied.")

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
