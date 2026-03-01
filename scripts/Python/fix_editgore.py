#!/usr/bin/env python3
"""
fix_editgore.py

Applies specific Ghidra database fixes to improve the decompilation of
CDemonMission::editGore (0053e220).

Fixes applied:
  1. NOP the AND ESP,0xfffffff8 instruction (removes stack alignment
     uncertainty so the decompiler can resolve ESP-relative variables)
  2. Retype the CSlew local variable on the stack frame (resolves the
     byte[8] + separate float mess into a proper struct)
  3. Fix stack purge size on CSlew_init (Ghidra has it as unknown/
     0x7FFFFFFF instead of 0, which confuses the decompiler's ESP
     tracking and causes a +4 drift in subsequent stack variable
     accesses)

Usage:
    # Preview: show before decompilation only
    python3 fix_editgore.py <project_dir> <project_name> <program_name> --preview

    # Apply fixes and show before/after
    python3 fix_editgore.py <project_dir> <project_name> <program_name> --apply

Examples:
    python3 fix_editgore.py ./projects NocturneEdit nocedit.exe --preview
    python3 fix_editgore.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import argparse
import difflib


NOP = 0x90

# editGore function address
EDITGORE_ENTRY = 0x0053e220

# AND ESP,0xfffffff8 at this address (3 bytes: 83 E4 F8)
AND_ESP_ADDR = 0x0053e22c
AND_ESP_LEN = 3

# Stack layout after AND ESP is NOPed:
#   ESP = EBP - 0xBC  (from SUB ESP, 0xBC)
#   EBP = ESP_at_entry - 16  (from 4 PUSHes before MOV EBP, ESP)
#
# Ghidra StackFrame offsets use ESP-at-entry as reference:
#   Stack[X] = [ESP_at_entry + X]
#   [ESP + Y] = Stack[Y - 0xCC]  (since ESP = ESP_at_entry - 0xCC)
#
# CSlew is at [ESP + 0x14] = Stack[-0xB8]
#   Both CSlew_init and CSlew_processInput receive LEA EAX,[ESP + 0x14]
CSLEW_STACK_OFFSET = -0xB8


def get_address(program, offset):
    """Get an Address object for the given offset."""
    return program.getAddressFactory().getDefaultAddressSpace().getAddress(offset)


def nop_instruction(program, addr, length):
    """Clear existing instruction and write NOP bytes, then re-disassemble."""
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand

    listing = program.getListing()
    end_addr = addr.add(length - 1)

    # Must clear the instruction first (Ghidra won't let you overwrite
    # bytes that belong to a defined code unit)
    listing.clearCodeUnits(addr, end_addr, False)

    # Write NOP bytes
    mem = program.getMemory()
    for i in range(length):
        val = NOP if NOP < 128 else NOP - 256
        mem.setByte(addr.add(i), val)

    # Re-disassemble so the decompiler sees NOP instructions
    patch_set = AddressSet(addr, end_addr)
    cmd = DisassembleCommand(addr, patch_set, True)
    cmd.applyTo(program)


def find_data_type(program, name):
    """Find a named data type in the program's data type manager."""
    dtm = program.getDataTypeManager()
    for dt in dtm.getAllDataTypes():
        if dt.getName() == name:
            return dt
    return None


def find_or_create_cslew(program):
    """Find CSlew in the data type manager, or create it if missing/wrong size.

    CSlew layout (0x1C = 28 bytes):
        0x00  CVector3f position  (12 bytes)
        0x0C  float pitch
        0x10  float yaw
        0x14  float roll
        0x18  float slew_rate     (default 28.0)
    """
    from ghidra.program.model.data import (
        StructureDataType, FloatDataType, CategoryPath,
        DataTypeConflictHandler,
    )

    CSLEW_SIZE = 0x1C

    existing = find_data_type(program, "CSlew")
    if existing is not None and existing.getLength() == CSLEW_SIZE:
        return existing

    vec3f = find_data_type(program, "CVector3f")

    cslew = StructureDataType(CategoryPath.ROOT, "CSlew", 0)
    if vec3f is not None and vec3f.getLength() == 12:
        cslew.add(vec3f, "position", "Camera position")
    else:
        cslew.add(FloatDataType.dataType, "position_x", "")
        cslew.add(FloatDataType.dataType, "position_y", "")
        cslew.add(FloatDataType.dataType, "position_z", "")
    cslew.add(FloatDataType.dataType, "pitch", "")
    cslew.add(FloatDataType.dataType, "yaw", "")
    cslew.add(FloatDataType.dataType, "roll", "")
    cslew.add(FloatDataType.dataType, "slew_rate", "Max movement speed")

    dtm = program.getDataTypeManager()
    return dtm.addDataType(cslew, DataTypeConflictHandler.REPLACE_HANDLER)


def decompile_function(program, func, timeout=60):
    """Decompile a function and return the C code as a string."""
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


def set_stack_variable(func, offset, name, data_type):
    """Set a typed variable on the function's stack frame.

    Clears any existing variables that overlap the new variable's range,
    then creates the new one.
    """
    from ghidra.program.model.symbol import SourceType

    frame = func.getStackFrame()
    var_size = data_type.getLength()

    # Clear overlapping variables
    for var in list(frame.getStackVariables()):
        vo = var.getStackOffset()
        vs = var.getLength()
        # Check overlap: [offset, offset+var_size) vs [vo, vo+vs)
        if vo < offset + var_size and vo + vs > offset:
            frame.clearVariable(vo)

    frame.createVariable(name, offset, data_type, SourceType.USER_DEFINED)


def apply_fixes(program):
    """Apply all fixes for editGore and return (before_code, after_code)."""
    addr = get_address(program, EDITGORE_ENTRY)
    func = program.getFunctionManager().getFunctionAt(addr)
    if func is None:
        print("ERROR: No function at 0x%x" % EDITGORE_ENTRY)
        return None, None

    print("Function: %s at %s" % (func.getName(), addr))

    # Decompile BEFORE
    before_code = decompile_function(program, func)

    # Fix 1: NOP the AND ESP
    and_addr = get_address(program, AND_ESP_ADDR)
    print("  [1] NOP AND ESP at %s (%d bytes)" % (and_addr, AND_ESP_LEN))
    nop_instruction(program, and_addr, AND_ESP_LEN)

    # Fix 2: Set CSlew type on stack
    cslew_type = find_or_create_cslew(program)
    print("  [2] Set CSlew (%d bytes) at stack offset %d" % (
        cslew_type.getLength(), CSLEW_STACK_OFFSET))
    set_stack_variable(func, CSLEW_STACK_OFFSET, "slew", cslew_type)

    # Fix 3: Fix stack purge size on CSlew_init
    # Ghidra has stackPurgeSize = 0x7FFFFFFF (unknown) for CSlew_init,
    # but it should be 0 for __cdecl.  The unknown purge confuses the
    # decompiler's ESP tracking after the init call, causing a +4 drift
    # that shifts all subsequent stack-relative accesses.
    init_addr = get_address(program, 0x005a2060)
    init_func = program.getFunctionManager().getFunctionAt(init_addr)
    if init_func and init_func.getStackPurgeSize() != 0:
        print("  [3] Fix CSlew_init stack purge: %d -> 0" %
              init_func.getStackPurgeSize())
        init_func.setStackPurgeSize(0)

    # Decompile AFTER
    after_code = decompile_function(program, func)

    return before_code, after_code


def show_diff(before, after):
    """Show a unified diff between before and after decompilation."""
    before_lines = before.splitlines(keepends=True)
    after_lines = after.splitlines(keepends=True)
    diff = list(difflib.unified_diff(
        before_lines, after_lines,
        fromfile="before", tofile="after", n=3,
    ))
    if diff:
        print("DIFF:")
        print("-" * 70)
        for line in diff:
            sys.stdout.write(line)
        if not diff[-1].endswith('\n'):
            print()
    else:
        print("No difference in decompiled output.")


def main():
    parser = argparse.ArgumentParser(
        description="Apply specific fixes for editGore decompilation",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")

    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--preview", action="store_true",
                       help="Show current decompilation only (no changes)")
    group.add_argument("--apply", action="store_true",
                       help="Apply fixes, show before/after diff, and save")
    group.add_argument("--test", action="store_true",
                       help="Apply fixes and show diff, but roll back (no save)")

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

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:

            if args.preview:
                addr = get_address(prog, EDITGORE_ENTRY)
                func = prog.getFunctionManager().getFunctionAt(addr)
                if func is None:
                    print("ERROR: No function at 0x%x" % EDITGORE_ENTRY)
                    exit_code = 1
                else:
                    code = decompile_function(prog, func)
                    print("\n%s" % code)

            elif args.test:
                tx_id = prog.startTransaction("Test fix editGore")
                try:
                    before, after = apply_fixes(prog)
                finally:
                    prog.endTransaction(tx_id, False)  # roll back

                if before and after:
                    print("\n" + "=" * 70)
                    print("BEFORE:")
                    print("=" * 70)
                    print(before)
                    print("=" * 70)
                    print("AFTER:")
                    print("=" * 70)
                    print(after)
                    print("=" * 70)
                    show_diff(before, after)
                    print("\n(Test mode - changes rolled back)")

            elif args.apply:
                tx_id = prog.startTransaction("Fix editGore decompilation")
                try:
                    before, after = apply_fixes(prog)
                except Exception:
                    prog.endTransaction(tx_id, False)
                    raise
                prog.endTransaction(tx_id, True)

                if before and after:
                    print("\n" + "=" * 70)
                    print("AFTER:")
                    print("=" * 70)
                    print(after)
                    print("=" * 70)
                    show_diff(before, after)

                    prog.save("Fixed editGore decompilation", None)
                    print("\nChanges saved to program database.")

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
