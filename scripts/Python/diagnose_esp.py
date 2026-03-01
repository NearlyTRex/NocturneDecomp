#!/usr/bin/env python3
"""
Diagnose ESP tracking in editGore by checking what the decompiler
thinks the stack depth is at key instruction addresses.
"""

import os
import sys
import argparse


def get_address(program, offset):
    return program.getAddressFactory().getDefaultAddressSpace().getAddress(offset)


def diagnose(program):
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    func_addr = get_address(program, 0x0053e220)
    func = program.getFunctionManager().getFunctionAt(func_addr)
    if not func:
        print("ERROR: no function at 0053e220")
        return

    # First, NOP the AND ESP so we're diagnosing the patched state
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand

    and_addr = get_address(program, 0x0053e22c)
    listing = program.getListing()
    listing.clearCodeUnits(and_addr, and_addr.add(2), False)
    mem = program.getMemory()
    for i in range(3):
        mem.setByte(and_addr.add(i), 0x90 - 256)  # NOP = 0x90
    cmd = DisassembleCommand(and_addr, AddressSet(and_addr, and_addr.add(2)), True)
    cmd.applyTo(program)

    # Decompile to get high-level analysis
    iface = DecompInterface()
    iface.openProgram(program)
    try:
        res = iface.decompileFunction(func, 60, ConsoleTaskMonitor())
        if not res.decompileCompleted():
            print("Decompilation failed")
            return

        hfunc = res.getHighFunction()
        if not hfunc:
            print("No high function")
            return

        # Check calling conventions of called functions
        print("=" * 70)
        print("CALLING CONVENTIONS OF FUNCTIONS CALLED IN EDITGORE")
        print("=" * 70)

        # Get all call sites from the pcode
        fm = program.getFunctionManager()
        listing = program.getListing()

        # Check key addresses for virtual call targets
        key_addrs = {
            0x0053e33f: "LEA for CSlew_init (should be ESP=base)",
            0x0053e343: "PUSH for CSlew_init",
            0x0053e344: "CALL CSlew_init",
            0x0053e419: "Loop start (CALL doNothing)",
            0x0053e42b: "CALL setMousePointerType",
            0x0053e43a: "MOV EAX,[ESP+0x14] position.x copy",
            0x0053e479: "CALL updateOrientMatrix",
            0x0053e56b: "CALL [EBX+4] getAndClearKeyState(ESCAPE)",
            0x0053e579: "LEA for CSlew_processInput (should be ESP=base)",
            0x0053e57e: "CALL CSlew_processInput",
        }

        # Try to get stack depth from the program context
        esp_reg = program.getRegister("ESP")
        ctx = program.getProgramContext()

        print("\nStack depth at key addresses:")
        print("-" * 70)
        for addr_val, desc in sorted(key_addrs.items()):
            addr = get_address(program, addr_val)
            val = ctx.getValue(esp_reg, addr, False)
            instr = listing.getInstructionAt(addr)
            mnemonic = instr.toString() if instr else "???"
            print("  %s: ESP context = %s  [%s] %s" % (
                addr, val, mnemonic, desc))

        # Check CKeys vtable function calling conventions
        print("\n" + "=" * 70)
        print("VIRTUAL CALL ANALYSIS")
        print("=" * 70)

        # Check what function Ghidra thinks is at the vtable entries
        # g_CKeysPtr is at 0x0067cf44
        ckeys_ptr_addr = get_address(program, 0x0067cf44)
        print("\ng_CKeysPtr at %s" % ckeys_ptr_addr)

        # Check the function at each vtable call site
        vtable_calls = [
            (0x0053e56b, "[EBX+4]", "getAndClearKeyState"),
            (0x0053e687, "[EBX]", "getKeyState"),
            (0x0053e6e0, "[EBX]", "getKeyState"),
            (0x0053e765, "[EBX+4]", "getAndClearKeyState"),
            (0x0053e8a8, "[EBX+4]", "getAndClearKeyState"),
        ]

        for addr_val, vtable_slot, name in vtable_calls:
            addr = get_address(program, addr_val)
            instr = listing.getInstructionAt(addr)
            print("\n  %s: CALL %s (%s)" % (addr, vtable_slot, name))
            if instr:
                # Check flow references
                refs = instr.getReferencesFrom()
                for ref in refs:
                    target = ref.getToAddress()
                    target_func = fm.getFunctionAt(target)
                    if target_func:
                        cc = target_func.getCallingConventionName()
                        print("    -> resolved to %s at %s (convention: %s)" % (
                            target_func.getName(), target, cc))
                    else:
                        print("    -> ref to %s (no function)" % target)

        # Look at the high pcode for the virtual calls
        print("\n" + "=" * 70)
        print("HIGH PCODE AROUND KEY ADDRESSES")
        print("=" * 70)

        # Iterate through pcode ops
        pcode_iter = hfunc.getPcodeOps()
        while pcode_iter.hasNext():
            op = pcode_iter.next()
            op_addr = op.getSeqnum().getTarget()
            op_val = op_addr.getOffset()

            # Print pcode around our key addresses
            if op_val in key_addrs or (0x0053e560 <= op_val <= 0x0053e580):
                desc = key_addrs.get(op_val, "")
                print("  [%s] %s  %s" % (op_addr, op, desc))

        # Also check: what does the decompiler think the function signature
        # of the virtual call target is?
        print("\n" + "=" * 70)
        print("FUNCTION PROTOTYPE AT VTABLE CALL SITES")
        print("=" * 70)

        pcode_iter = hfunc.getPcodeOps()
        while pcode_iter.hasNext():
            op = pcode_iter.next()
            opcode = op.getOpcode()
            # CALLIND = indirect call
            from ghidra.program.model.pcode import PcodeOp
            if opcode == PcodeOp.CALLIND or opcode == PcodeOp.CALL:
                op_addr = op.getSeqnum().getTarget()
                op_val = op_addr.getOffset()
                if 0x0053e220 <= op_val <= 0x0053e9d9:
                    inputs = []
                    for i in range(op.getNumInputs()):
                        inp = op.getInput(i)
                        inputs.append(str(inp))
                    output = op.getOutput()
                    print("  [%s] %s -> %s  inputs=%s" % (
                        op_addr,
                        "CALLIND" if opcode == PcodeOp.CALLIND else "CALL",
                        output,
                        inputs))

    finally:
        iface.dispose()


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("project_path")
    parser.add_argument("project_name")
    parser.add_argument("program_name")
    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra not installed")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:
            tx_id = prog.startTransaction("Diagnose ESP")
            try:
                diagnose(prog)
            finally:
                prog.endTransaction(tx_id, False)  # roll back

        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
