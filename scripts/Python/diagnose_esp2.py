#!/usr/bin/env python3
"""
Diagnose the off-by-4 ESP issue in editGore by examining:
1. The decompiler's resolved stack offsets for both LEA instructions
2. ESP tracking at specific points in the function
3. Low pcode around the two LEA sites to see the raw computation
"""

import os
import sys
import argparse


def get_address(program, offset):
    return program.getAddressFactory().getDefaultAddressSpace().getAddress(offset)


def diagnose(program):
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.program.model.pcode import PcodeOp

    func_addr = get_address(program, 0x0053e220)
    func = program.getFunctionManager().getFunctionAt(func_addr)
    if not func:
        print("ERROR: no function at 0053e220")
        return

    # NOP the AND ESP so we're diagnosing the patched state
    and_addr = get_address(program, 0x0053e22c)
    listing = program.getListing()
    listing.clearCodeUnits(and_addr, and_addr.add(2), False)
    mem = program.getMemory()
    for i in range(3):
        mem.setByte(and_addr.add(i), 0x90 - 256)  # NOP = 0x90
    cmd = DisassembleCommand(and_addr, AddressSet(and_addr, and_addr.add(2)), True)
    cmd.applyTo(program)

    # Decompile
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

        # Print the C output around the CSlew calls
        decomp = res.getDecompiledFunction()
        if decomp:
            code = decomp.getC()
            for line in code.split("\n"):
                if "CSlew" in line or "slew" in line.lower():
                    print("  C: %s" % line.strip())

        print("\n" + "=" * 70)
        print("HIGH PCODE: PTRSUB and PTRADD ops (stack variable references)")
        print("=" * 70)

        # Look for all PTRSUB ops that reference the stack area around
        # our CSlew variable (Stack[-0xB8] area)
        pcode_iter = hfunc.getPcodeOps()
        while pcode_iter.hasNext():
            op = pcode_iter.next()
            opcode = op.getOpcode()
            op_addr = op.getSeqnum().getTarget()
            op_val = op_addr.getOffset()

            # Focus on the two LEA instructions and their surrounding context
            if op_val in (0x0053e33f, 0x0053e579):
                print("\n  [%s] %s" % (op_addr, op))
                # Print input details
                for i in range(op.getNumInputs()):
                    inp = op.getInput(i)
                    print("    input[%d]: %s (space=%s, offset=0x%x, size=%d)" % (
                        i, inp, inp.getAddress().getAddressSpace().getName(),
                        inp.getOffset(), inp.getSize()))
                out = op.getOutput()
                if out:
                    print("    output: %s" % out)

        # Now look at ALL pcode ops at these two addresses to see the full computation
        print("\n" + "=" * 70)
        print("ALL PCODE OPS AT LEA ADDRESSES")
        print("=" * 70)

        for lea_addr_val in [0x0053e33f, 0x0053e579]:
            lea_addr = get_address(program, lea_addr_val)
            print("\n  Address %s:" % lea_addr)
            ops = hfunc.getPcodeOps(lea_addr)
            while ops.hasNext():
                op = ops.next()
                print("    %s" % op)
                for i in range(op.getNumInputs()):
                    inp = op.getInput(i)
                    space = inp.getAddress().getAddressSpace().getName()
                    print("      in[%d]: %s (space=%s, off=0x%x, sz=%d)" % (
                        i, inp, space, inp.getOffset(), inp.getSize()))
                out = op.getOutput()
                if out:
                    space = out.getAddress().getAddressSpace().getName()
                    print("      out: %s (space=%s, off=0x%x, sz=%d)" % (
                        out, space, out.getOffset(), out.getSize()))

        # Check the HighSymbol mappings for the slew area
        print("\n" + "=" * 70)
        print("HIGH SYMBOLS (local variables)")
        print("=" * 70)
        lsm = hfunc.getLocalSymbolMap()
        for sym in lsm.getSymbols():
            storage = sym.getStorage()
            print("  %s: %s  type=%s  storage=%s" % (
                sym.getName(), sym.getDataType().getName(),
                sym.getDataType(), storage))

        # Check the function's stack frame
        print("\n" + "=" * 70)
        print("STACK FRAME VARIABLES")
        print("=" * 70)
        frame = func.getStackFrame()
        for var in sorted(frame.getStackVariables(), key=lambda v: v.getStackOffset()):
            print("  Stack[%d] (0x%x): %s  type=%s  size=%d" % (
                var.getStackOffset(), var.getStackOffset() & 0xFFFFFFFF,
                var.getName(), var.getDataType().getName(), var.getLength()))

        # Look at varnodes in the pcode that reference our stack area
        print("\n" + "=" * 70)
        print("VARNODES REFERENCING STACK[-0xB8] TO STACK[-0xB0] AREA")
        print("=" * 70)
        pcode_iter = hfunc.getPcodeOps()
        while pcode_iter.hasNext():
            op = pcode_iter.next()
            # Check output and inputs for stack references in our range
            varnodes = []
            out = op.getOutput()
            if out:
                varnodes.append(("out", out))
            for i in range(op.getNumInputs()):
                varnodes.append(("in[%d]" % i, op.getInput(i)))

            for label, vn in varnodes:
                space = vn.getAddress().getAddressSpace().getName()
                off = vn.getOffset()
                # Stack offsets in range -0xBC to -0xB0 (signed 64-bit)
                if space == "stack" and 0xffffffffffffff44 <= off <= 0xffffffffffffff50:
                    addr = op.getSeqnum().getTarget()
                    print("  [%s] %s=%s (stack off=%d)" % (
                        addr, label, vn,
                        off - 0x10000000000000000 if off > 0x7fffffffffffffff else off))

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
            tx_id = prog.startTransaction("Diagnose ESP v2")
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
