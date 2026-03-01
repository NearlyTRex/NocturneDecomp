#!/usr/bin/env python3
"""
report_and_esp_nop.py

Tests AND ESP NOP patching on ALL affected functions, decompiling before and
after (with rollback), and writes a report file showing which functions get
IMPROVED, WORSE, or NO CHANGE.

The report is sorted so WORSE functions appear first.

Usage:
    python3 -u report_and_esp_nop.py <project_dir> <project_name> <program_name> <report_file>

Example:
    python3 -u report_and_esp_nop.py ./projects NocturneEdit nocedit.exe report_and_esp.txt
"""

import os
import sys
import argparse
import difflib
import re
import time

# x86 opcodes
NOP = 0x90
MAX_PROLOGUE_INSTRUCTIONS = 15


def get_instruction_bytes(program, addr, length):
    mem = program.getMemory()
    buf = bytearray(length)
    for i in range(length):
        buf[i] = mem.getByte(addr.add(i)) & 0xFF
    return bytes(buf)


def write_bytes(program, addr, data):
    mem = program.getMemory()
    for i, b in enumerate(data):
        mem.setByte(addr.add(i), b & 0xFF if b < 128 else b - 256)


def scan_prologue(program, func):
    listing = program.getListing()
    body = func.getBody()
    result = {
        'and_esp': None,
        'has_mov_ebp_esp': False,
    }

    instructions = []
    for instr in listing.getInstructions(body, True):
        instructions.append(instr)
        if len(instructions) >= MAX_PROLOGUE_INSTRUCTIONS:
            break

    saw_mov_ebp_esp = False
    for instr in instructions:
        mnemonic = instr.getMnemonicString().upper()
        num_ops = instr.getNumOperands()
        addr = instr.getAddress()
        length = instr.getLength()

        if num_ops < 2:
            continue

        op0 = instr.getDefaultOperandRepresentation(0).upper()
        op1 = instr.getDefaultOperandRepresentation(1).upper()

        if mnemonic == 'MOV' and op0 == 'EBP' and op1 == 'ESP':
            saw_mov_ebp_esp = True
            result['has_mov_ebp_esp'] = True
            continue

        if mnemonic == 'AND' and op0 == 'ESP' and saw_mov_ebp_esp:
            try:
                mask_str = op1.replace('0X', '0x')
                mask_val = int(mask_str, 16) if mask_str.startswith('0x') else int(mask_str)
                if mask_val > 0x7FFFFFFF or mask_val < 0:
                    result['and_esp'] = (addr, length, mask_val)
            except ValueError:
                pass
            continue

    return result


def find_and_esp_functions(program):
    fm = program.getFunctionManager()
    results = []
    all_functions = list(fm.getFunctions(True))
    print("Scanning %d functions..." % len(all_functions))
    for func in all_functions:
        info = scan_prologue(program, func)
        if info['and_esp']:
            results.append((func, info))
    return results


def apply_nop_patch(program, addr, length):
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand

    listing = program.getListing()
    listing.clearCodeUnits(addr, addr.add(length - 1), False)
    write_bytes(program, addr, bytes([NOP] * length))
    cmd = DisassembleCommand(addr, AddressSet(addr, addr.add(length - 1)), True)
    cmd.applyTo(program)


def decompile_function(program, func, timeout=60):
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
    artifacts = {
        'unaff_': len(re.findall(r'unaff_\w+', code)),
        'in_stack_': len(re.findall(r'in_stack_\w+', code)),
        'extraout_': len(re.findall(r'extraout_\w+', code)),
    }
    artifacts['total'] = sum(artifacts.values())
    return artifacts


def generate_report(program, report_path):
    funcs = find_and_esp_functions(program)
    total = len(funcs)
    print("Found %d AND ESP functions. Testing each (this will take a while)...\n" % total)

    entries = []  # (verdict, delta, func_name, func_addr, before_arts, after_arts, diff_text)

    for i, (func, info) in enumerate(funcs):
        func_name = func.getName()
        func_addr = str(func.getEntryPoint())
        mask_val = info['and_esp'][2] & 0xFFFFFFFF

        print("[%d/%d] %s (%s) AND ESP 0x%x ..." % (i + 1, total, func_name, func_addr, mask_val),
              end="", flush=True)

        before_code = decompile_function(program, func)
        before_arts = count_artifacts(before_code)

        tx_id = program.startTransaction("Test AND ESP NOP: %s" % func_name)
        try:
            addr, length, _ = info['and_esp']
            apply_nop_patch(program, addr, length)
            after_code = decompile_function(program, func)
            after_arts = count_artifacts(after_code)
        finally:
            program.endTransaction(tx_id, False)

        delta = after_arts['total'] - before_arts['total']
        if delta < 0:
            verdict = "IMPROVED"
        elif delta > 0:
            verdict = "WORSE"
        else:
            verdict = "NO_CHANGE"

        # Generate diff
        diff_lines = list(difflib.unified_diff(
            before_code.splitlines(keepends=True),
            after_code.splitlines(keepends=True),
            fromfile="before", tofile="after", n=3,
        ))
        diff_text = "".join(diff_lines) if diff_lines else ""

        entries.append((verdict, delta, func_name, func_addr, before_arts, after_arts, diff_text))
        print(" %s (delta=%+d)" % (verdict, delta))

    # Sort: WORSE first, then IMPROVED, then NO_CHANGE
    sort_order = {"WORSE": 0, "IMPROVED": 1, "NO_CHANGE": 2}
    entries.sort(key=lambda e: (sort_order[e[0]], -abs(e[1]), e[3]))

    # Count verdicts
    worse_count = sum(1 for e in entries if e[0] == "WORSE")
    improved_count = sum(1 for e in entries if e[0] == "IMPROVED")
    no_change_count = sum(1 for e in entries if e[0] == "NO_CHANGE")

    # Write report
    with open(report_path, "w") as f:
        f.write("AND ESP NOP PATCHING REPORT\n")
        f.write("=" * 70 + "\n")
        f.write("Generated: %s\n" % time.strftime("%Y-%m-%d %H:%M:%S"))
        f.write("Total AND ESP functions tested: %d\n" % total)
        f.write("\n")
        f.write("SUMMARY\n")
        f.write("-" * 70 + "\n")
        f.write("  WORSE:     %d functions\n" % worse_count)
        f.write("  IMPROVED:  %d functions\n" % improved_count)
        f.write("  NO CHANGE: %d functions\n" % no_change_count)
        f.write("\n")

        if worse_count > 0:
            f.write("=" * 70 + "\n")
            f.write("WORSE FUNCTIONS (artifact count increased after NOP)\n")
            f.write("=" * 70 + "\n\n")
            for verdict, delta, name, addr, before, after, diff in entries:
                if verdict != "WORSE":
                    continue
                f.write("%s (%s)  delta=%+d\n" % (name, addr, delta))
                f.write("  BEFORE: unaff=%d  in_stack=%d  extraout=%d  total=%d\n" % (
                    before['unaff_'], before['in_stack_'], before['extraout_'], before['total']))
                f.write("  AFTER:  unaff=%d  in_stack=%d  extraout=%d  total=%d\n" % (
                    after['unaff_'], after['in_stack_'], after['extraout_'], after['total']))
                if diff:
                    f.write("\n  DIFF:\n")
                    for line in diff.splitlines():
                        f.write("    %s\n" % line)
                f.write("\n")

        if improved_count > 0:
            f.write("=" * 70 + "\n")
            f.write("IMPROVED FUNCTIONS (artifact count decreased after NOP)\n")
            f.write("=" * 70 + "\n\n")
            for verdict, delta, name, addr, before, after, diff in entries:
                if verdict != "IMPROVED":
                    continue
                f.write("%s (%s)  delta=%+d\n" % (name, addr, delta))
                f.write("  BEFORE: unaff=%d  in_stack=%d  extraout=%d  total=%d\n" % (
                    before['unaff_'], before['in_stack_'], before['extraout_'], before['total']))
                f.write("  AFTER:  unaff=%d  in_stack=%d  extraout=%d  total=%d\n" % (
                    after['unaff_'], after['in_stack_'], after['extraout_'], after['total']))
                if diff:
                    f.write("\n  DIFF:\n")
                    for line in diff.splitlines():
                        f.write("    %s\n" % line)
                f.write("\n")

        f.write("=" * 70 + "\n")
        f.write("NO CHANGE FUNCTIONS (%d total)\n" % no_change_count)
        f.write("=" * 70 + "\n\n")
        for verdict, delta, name, addr, before, after, diff in entries:
            if verdict != "NO_CHANGE":
                continue
            has_diff = "  (cosmetic diff)" if diff else ""
            f.write("  %s (%s)  artifacts=%d%s\n" % (name, addr, before['total'], has_diff))

        f.write("\n")

    print("\nReport written to: %s" % report_path)
    print("WORSE: %d  IMPROVED: %d  NO CHANGE: %d" % (worse_count, improved_count, no_change_count))


def main():
    parser = argparse.ArgumentParser(
        description="Test AND ESP NOP on all affected functions, generate report",
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("report_file", help="Output report file path")

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
            generate_report(prog, args.report_file)
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
