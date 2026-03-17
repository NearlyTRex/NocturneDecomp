#!/usr/bin/env python3
"""
fix_byte_patches.py

Generic byte patcher for Ghidra programs. Reads patch definitions from a JSON
file (byte_patches.json) and applies them with safety checks (original byte
verification), dry-run mode, and before/after decompilation testing.

Patches are organized into named groups. You can apply all patches or filter
by group name.

Usage:
    # Dry run - show what would be patched
    python3 fix_byte_patches.py <project_dir> <project_name> <program_name>

    # Apply all patches
    python3 fix_byte_patches.py <project_dir> <project_name> <program_name> --apply

    # Apply only a specific group
    python3 fix_byte_patches.py <project_dir> <project_name> <program_name> --apply --group partial_register_returns

    # Test mode - decompile before/after to verify improvement
    python3 fix_byte_patches.py <project_dir> <project_name> <program_name> --test

    # Test a single group
    python3 fix_byte_patches.py <project_dir> <project_name> <program_name> --test --group split_double_reads

    # List available groups
    python3 fix_byte_patches.py <project_dir> <project_name> <program_name> --list-groups
"""

import os
import sys
import json
import argparse
import difflib
import re


def load_patches(json_path, group_filter=None):
    """Load patch definitions from JSON file.

    Returns a flat list of patch dicts, each with 'group' field added.
    """
    with open(json_path, 'r') as f:
        data = json.load(f)

    patches = []
    for group in data['groups']:
        group_name = group['name']
        if group_filter and group_name != group_filter:
            continue
        for patch in group['patches']:
            p = {
                'group': group_name,
                'name': patch['name'],
                'address': int(patch['address'], 16),
                'original': bytes.fromhex(patch['original']),
                'patched': bytes.fromhex(patch['patched']),
                'description': patch['description'],
            }
            assert len(p['original']) == len(p['patched']), \
                "Patch '%s': original and patched must be same length (%d vs %d)" % (
                    p['name'], len(p['original']), len(p['patched']))
            patches.append(p)
    return patches


def list_groups(json_path):
    """Print available patch groups."""
    with open(json_path, 'r') as f:
        data = json.load(f)

    for group in data['groups']:
        count = len(group['patches'])
        print("  %-35s %2d patch(es)  %s" % (
            group['name'], count, group.get('description', '')))


def get_bytes(program, addr_int, length):
    """Read raw bytes from the program."""
    mem = program.getMemory()
    addr = program.getAddressFactory().getDefaultAddressSpace().getAddress(addr_int)
    buf = bytearray(length)
    for i in range(length):
        buf[i] = mem.getByte(addr.add(i)) & 0xFF
    return bytes(buf)


def write_bytes(program, addr_int, data):
    """Write raw bytes to the program."""
    mem = program.getMemory()
    addr = program.getAddressFactory().getDefaultAddressSpace().getAddress(addr_int)
    for i, b in enumerate(data):
        mem.setByte(addr.add(i), b & 0xFF if b < 128 else b - 256)


def clear_and_disassemble(program, addr_int, length):
    """Clear existing instructions and re-disassemble after patching."""
    from ghidra.program.model.address import AddressSet
    from ghidra.app.cmd.disassemble import DisassembleCommand

    space = program.getAddressFactory().getDefaultAddressSpace()
    addr = space.getAddress(addr_int)
    end_addr = addr.add(length - 1)

    listing = program.getListing()
    listing.clearCodeUnits(addr, end_addr, False)

    addr_set = AddressSet(addr, end_addr)
    cmd = DisassembleCommand(addr, addr_set, True)
    cmd.applyTo(program)


def apply_patch(program, patch, dry_run=True):
    """Apply a single patch. Returns (success, message)."""
    addr = patch['address']
    original = patch['original']
    patched = patch['patched']

    current = get_bytes(program, addr, len(original))
    if current == patched:
        return True, "already patched"
    if current != original:
        return False, "byte mismatch at 0x%x (expected %s, got %s)" % (
            addr,
            ' '.join('%02x' % b for b in original),
            ' '.join('%02x' % b for b in current),
        )

    if not dry_run:
        space = program.getAddressFactory().getDefaultAddressSpace()
        ghidra_addr = space.getAddress(addr)
        end_addr = ghidra_addr.add(len(patched) - 1)
        program.getListing().clearCodeUnits(ghidra_addr, end_addr, False)

        write_bytes(program, addr, patched)
        clear_and_disassemble(program, addr, len(patched))

    return True, "patched" if not dry_run else "would patch"


def decompile_function_at(program, addr_int, timeout=60):
    """Decompile the function containing the given address."""
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor

    space = program.getAddressFactory().getDefaultAddressSpace()
    addr = space.getAddress(addr_int)
    func = program.getFunctionManager().getFunctionContaining(addr)
    if func is None:
        return "// No function at 0x%x\n" % addr_int

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
    """Count decompiler artifacts."""
    artifacts = {
        'undefined': len(re.findall(r'undefined\d*', code)),
        'CONCAT': len(re.findall(r'CONCAT\d+', code)),
        'extraout_': len(re.findall(r'extraout_\w+', code)),
        'unaff_': len(re.findall(r'unaff_\w+', code)),
        'in_stack_': len(re.findall(r'in_stack_\w+', code)),
        'BITCAST': len(re.findall(r'__BITCAST_\w+', code)),
        'SUB_': len(re.findall(r'SUB\d+\(', code)),
    }
    artifacts['total'] = sum(artifacts.values())
    return artifacts


def run_test_mode(prog, patches):
    """Test mode: apply each patch in a transaction, decompile, roll back."""
    # Group patches by containing function to batch them
    from collections import OrderedDict
    func_patches = OrderedDict()
    fm = prog.getFunctionManager()
    space = prog.getAddressFactory().getDefaultAddressSpace()

    for patch in patches:
        addr = space.getAddress(patch['address'])
        func = fm.getFunctionContaining(addr)
        func_key = func.getEntryPoint().getOffset() if func else patch['address']
        if func_key not in func_patches:
            func_patches[func_key] = []
        func_patches[func_key].append(patch)

    for func_addr, func_patch_list in func_patches.items():
        print("=" * 70)
        func = fm.getFunctionContaining(space.getAddress(func_addr))
        func_name = func.getName() if func else "0x%x" % func_addr
        print("Function: %s" % func_name)
        for p in func_patch_list:
            print("  Patch: %s (0x%x)" % (p['name'], p['address']))
            print("    %s" % p['description'])
        print("=" * 70)

        # Decompile before
        before_code = decompile_function_at(prog, func_addr)
        before_arts = count_artifacts(before_code)

        # Apply all patches for this function in one transaction, decompile, roll back
        tx_id = prog.startTransaction("Test: %s" % func_name)
        try:
            all_ok = True
            for p in func_patch_list:
                ok, msg = apply_patch(prog, p, dry_run=False)
                if not ok:
                    print("  SKIP %s: %s" % (p['name'], msg))
                    all_ok = False
            if all_ok:
                after_code = decompile_function_at(prog, func_addr)
                after_arts = count_artifacts(after_code)
            else:
                after_code = before_code
                after_arts = before_arts
        finally:
            prog.endTransaction(tx_id, False)

        # Show results
        print("\nArtifacts BEFORE: undefined=%d CONCAT=%d BITCAST=%d SUB=%d extraout=%d (total=%d)" % (
            before_arts['undefined'], before_arts['CONCAT'],
            before_arts['BITCAST'], before_arts['SUB_'],
            before_arts['extraout_'], before_arts['total']))
        print("Artifacts AFTER:  undefined=%d CONCAT=%d BITCAST=%d SUB=%d extraout=%d (total=%d)" % (
            after_arts['undefined'], after_arts['CONCAT'],
            after_arts['BITCAST'], after_arts['SUB_'],
            after_arts['extraout_'], after_arts['total']))

        delta = after_arts['total'] - before_arts['total']
        if delta < 0:
            print("Result: IMPROVED (-%d artifacts)" % abs(delta))
        elif delta > 0:
            print("Result: WORSE (+%d artifacts)" % delta)
        else:
            print("Result: NO CHANGE")

        diff = list(difflib.unified_diff(
            before_code.splitlines(keepends=True),
            after_code.splitlines(keepends=True),
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


def run_apply_or_dry(prog, patches, dry_run):
    """Apply or dry-run all patches."""
    if not dry_run:
        tx_id = prog.startTransaction("Apply byte patches")

    try:
        current_group = None
        for patch in patches:
            if patch['group'] != current_group:
                current_group = patch['group']
                print("\n[%s]" % current_group)
            print("  %s (0x%x):" % (patch['name'], patch['address']), end=" ")
            ok, msg = apply_patch(prog, patch, dry_run=dry_run)
            print(msg)
            if not ok:
                print("    WARNING: %s" % msg)
    finally:
        if not dry_run:
            prog.endTransaction(tx_id, True)

    if not dry_run:
        prog.save("Applied byte patches", None)
        print("\nChanges saved.")
    else:
        print("\n(Dry run - no changes made. Use --apply to patch.)")


def main():
    parser = argparse.ArgumentParser(
        description="Generic byte patcher for Ghidra programs",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply patches (default is dry-run)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: decompile before/after to show diff")
    parser.add_argument("--group", type=str, default=None,
                        help="Only process patches in this group")
    parser.add_argument("--list-groups", action="store_true",
                        help="List available patch groups and exit")
    parser.add_argument("--patches-file", type=str, default=None,
                        help="Path to byte_patches.json (default: alongside this script)")

    args = parser.parse_args()

    # Locate patches JSON
    if args.patches_file:
        json_path = args.patches_file
    else:
        json_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'byte_patches.json')

    if not os.path.exists(json_path):
        print("ERROR: Patches file not found: %s" % json_path)
        sys.exit(1)

    if args.list_groups:
        print("Available patch groups:")
        list_groups(json_path)
        sys.exit(0)

    patches = load_patches(json_path, group_filter=args.group)
    if not patches:
        print("No patches found%s." % (" for group '%s'" % args.group if args.group else ""))
        sys.exit(1)

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
        print("TEST MODE - patches will be applied and rolled back")
    elif not args.apply:
        print("DRY RUN MODE - no changes will be made")
    if args.group:
        print("Group filter: %s" % args.group)
    print("=" * 70)
    print("%d patch(es) loaded\n" % len(patches))

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as prog:
            if args.test:
                run_test_mode(prog, patches)
            else:
                run_apply_or_dry(prog, patches, dry_run=not args.apply)
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
