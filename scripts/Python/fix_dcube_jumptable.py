#!/usr/bin/env python3
"""
fix_dcube_jumptable.py

Fixes CDemonCube_rotateVertices_FUN_00457650 by incorporating the orphaned
code block at 004578b7-004578e6 into the function body.

Ghidra created a separate "UndefinedFunction_004578b7" for this block because
it couldn't recover the jump table at 00457630. The block is case 3 of the
switch(rendering_mode) and should be part of CDemonCube_rotateVertices.

This script:
1. Removes the undefined function at 004578b7
2. Extends CDemonCube_rotateVertices to include 004578b7-004578e6

Usage:
    # Test mode - show before/after diff, roll back changes
    python3 -u scripts/Python/fix_dcube_jumptable.py <project_dir> <project_name> <program_name> --test

    # Apply mode - make permanent changes
    python3 -u scripts/Python/fix_dcube_jumptable.py <project_dir> <project_name> <program_name> --apply

Example:
    python3 -u scripts/Python/fix_dcube_jumptable.py ./projects NocturneEdit nocedit.exe --test
    python3 -u scripts/Python/fix_dcube_jumptable.py ./projects NocturneEdit nocedit.exe --apply
"""

import sys
import os
import argparse
import difflib


MAIN_FUNC_ADDR = 0x00457650
ORPHAN_ADDR = 0x004578b7
ORPHAN_END = 0x004578e6  # inclusive: JMP LAB_00457800 at 004578e2 is 5 bytes
SWITCH_ADDR = 0x0045776e  # JMP dword ptr [EAX + 0x457630]

# Jump table at 0x457630, 5 entries for rendering_mode 0-4:
#   case 0: 00457774 (normal-based coloring)
#   case 1: 00457774 (normal-based coloring)
#   case 2: 00457774 (normal-based coloring)
#   case 3: 004578b7 (ground-type coloring)
#   case 4: 00457774 (normal-based coloring)
JUMP_TABLE_TARGETS = [0x00457774, 0x00457774, 0x00457774, 0x004578b7, 0x00457774]


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
    """Count decompiler artifacts that indicate bad analysis."""
    import re
    artifacts = {
        'unaff_': len(re.findall(r'unaff_\w+', code)),
        'in_stack_': len(re.findall(r'in_stack_\w+', code)),
        'extraout_': len(re.findall(r'extraout_\w+', code)),
        'code_ptr': len(re.findall(r'code \*\*', code)),
        'UndefinedFunction': len(re.findall(r'UndefinedFunction', code)),
    }
    artifacts['total'] = sum(artifacts.values())
    return artifacts


def apply_fix(program):
    """Apply the jump table fix: remove orphan function and extend main function body.

    Returns True on success, False on failure.
    """
    from ghidra.program.model.address import AddressSet
    from ghidra.program.model.pcode import JumpTable
    from java.util import ArrayList

    func_mgr = program.getFunctionManager()
    addr_factory = program.getAddressFactory()
    space = addr_factory.getDefaultAddressSpace()

    main_func_addr = space.getAddress(MAIN_FUNC_ADDR)
    orphan_addr = space.getAddress(ORPHAN_ADDR)
    orphan_end = space.getAddress(ORPHAN_END)
    switch_addr = space.getAddress(SWITCH_ADDR)

    main_func = func_mgr.getFunctionAt(main_func_addr)
    if main_func is None:
        print("ERROR: Could not find CDemonCube_rotateVertices at %08x" % MAIN_FUNC_ADDR)
        return False

    # Step 1: Remove orphan function if it exists
    orphan_func = func_mgr.getFunctionAt(orphan_addr)
    if orphan_func is not None:
        print("  Removing orphan function at %08x: %s" % (ORPHAN_ADDR, orphan_func.getName()))
        func_mgr.removeFunction(orphan_addr)
    else:
        print("  No orphan function at %08x (already removed or not created)" % ORPHAN_ADDR)

    # Step 2: Extend function body to include orphan block
    current_body = main_func.getBody()
    new_body = AddressSet(current_body)
    new_body.add(orphan_addr, orphan_end)
    main_func.setBody(new_body)
    print("  Extended function body: %s" % main_func.getBody())

    # Step 3: Create jump table override so the decompiler knows the switch targets
    import jpype
    BasicOverride = jpype.JClass('ghidra.program.model.pcode.JumpTable$BasicOverride')

    case_addresses = ArrayList()
    for target in JUMP_TABLE_TARGETS:
        case_addresses.add(space.getAddress(target))

    # Create JumpTable, then attach a BasicOverride to make it an override table
    jt = JumpTable(switch_addr, case_addresses, False, 0)
    override = BasicOverride(jt, case_addresses)
    # Set the override field via reflection since it's package-private
    jt_class = jpype.JClass('ghidra.program.model.pcode.JumpTable')
    override_field = jt_class.class_.getDeclaredField("override")
    override_field.setAccessible(True)
    override_field.set(jt, override)

    jt.writeOverride(main_func)
    print("  Installed jump table override at %08x with %d cases" % (SWITCH_ADDR, len(JUMP_TABLE_TARGETS)))

    return True


def get_main_func(program):
    """Get the main function object."""
    addr_factory = program.getAddressFactory()
    space = addr_factory.getDefaultAddressSpace()
    return program.getFunctionManager().getFunctionAt(space.getAddress(MAIN_FUNC_ADDR))


def run_test(program):
    """Test the fix: apply in a transaction, show before/after diff, then roll back."""
    main_func = get_main_func(program)
    if main_func is None:
        print("ERROR: Could not find function at %08x" % MAIN_FUNC_ADDR)
        return

    func_name = main_func.getName()
    print("=" * 70)
    print("Testing fix for: %s (%08x)" % (func_name, MAIN_FUNC_ADDR))
    print("=" * 70)

    # Decompile BEFORE
    before_code = decompile_function(program, main_func)
    before_artifacts = count_artifacts(before_code)

    # Apply fix in a transaction, decompile, then roll back
    tx_id = program.startTransaction("Test fix: %s" % func_name)
    try:
        success = apply_fix(program)
        if not success:
            print("Fix failed.")
            return

        # Re-fetch function (body changed)
        main_func = get_main_func(program)
        after_code = decompile_function(program, main_func)
        after_artifacts = count_artifacts(after_code)
    finally:
        program.endTransaction(tx_id, False)
        print("\n  Transaction rolled back (test mode).\n")

    # Show artifact counts
    print("Artifacts BEFORE: unaff=%d, in_stack=%d, extraout=%d, code_ptr=%d (total=%d)" % (
        before_artifacts['unaff_'], before_artifacts['in_stack_'],
        before_artifacts['extraout_'], before_artifacts['code_ptr'],
        before_artifacts['total']))
    print("Artifacts AFTER:  unaff=%d, in_stack=%d, extraout=%d, code_ptr=%d (total=%d)" % (
        after_artifacts['unaff_'], after_artifacts['in_stack_'],
        after_artifacts['extraout_'], after_artifacts['code_ptr'],
        after_artifacts['total']))

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


def run_apply(program):
    """Apply the fix permanently."""
    main_func = get_main_func(program)
    if main_func is None:
        print("ERROR: Could not find function at %08x" % MAIN_FUNC_ADDR)
        return

    func_name = main_func.getName()
    print("Applying fix for: %s (%08x)" % (func_name, MAIN_FUNC_ADDR))

    tx_id = program.startTransaction("Fix jump table: %s" % func_name)
    try:
        success = apply_fix(program)
        if success:
            print("Fix applied successfully. Committing.")
            program.endTransaction(tx_id, True)
            program.save("Fixed CDemonCube_rotateVertices jump table", None)
            print("Program saved.")
        else:
            print("Fix failed. Rolling back.")
            program.endTransaction(tx_id, False)
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        program.endTransaction(tx_id, False)


def main():
    parser = argparse.ArgumentParser(
        description="Fix CDemonCube_rotateVertices jump table orphan block")
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")

    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--test", action="store_true",
                       help="Test mode: show before/after diff, roll back changes")
    group.add_argument("--apply", action="store_true",
                       help="Apply mode: make permanent changes")

    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra not available. Install with: pip install pyghidra")
        sys.exit(1)

    project_path = os.path.abspath(args.project_path)

    print("Starting PyGhidra...")
    pyghidra.start()

    print("Opening project: %s/%s" % (project_path, args.project_name))
    project = pyghidra.open_project(project_path, args.project_name)

    with pyghidra.program_context(project, "/" + args.program_name) as program:
        print("Opening program: %s\n" % args.program_name)

        if args.test:
            run_test(program)
        elif args.apply:
            run_apply(program)


if __name__ == "__main__":
    main()
