#!/usr/bin/env python3
"""Disassemble a function from the original nocedit.exe binary using capstone.

This bypasses Ghidra's analysis, which can be wrong when code caves or
AND ESP alignment issues cause misdisassembly. Useful for verifying what
the actual binary contains vs what Ghidra shows.

Usage:
    python3 scripts/Python/disassemble_function.py <function_name_or_address> [--binary PATH]

Examples:
    python3 scripts/Python/disassemble_function.py 0x545760
    python3 scripts/Python/disassemble_function.py CParticle_process_FUN_00545760
    python3 scripts/Python/disassemble_function.py CParticle_process_FUN_00545760 --binary /path/to/nocedit.exe

The script finds the function's address ranges from its .json metadata file
(Ghidra's ranges, whose ends are inclusive), then disassembles directly from the
binary. An address with no .json gets a fixed-size window. If no --binary is
given, it searches common locations.
"""

import argparse
import json
import os
import re
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

from extract_line_pins import parse_pe

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ANNOTATIONS_DIR = os.path.join(REPO_ROOT, "annotations", "nocedit.exe", "pseudocode")

BINARY_SEARCH_PATHS = [
    os.path.expanduser("~/Repositories/OpenNocturne/game/nocedit.exe"),
]

# Bytes shown from a bare address that has no .json
DEFAULT_WINDOW = 0x400

# An address: hex, with a digit somewhere, so a name fragment like "add" is not one
ADDRESS_RE = re.compile(r'^(?:0x)?(?=[0-9a-fA-F]*[0-9])([0-9a-fA-F]+)$')


def find_binary(explicit_path=None):
    if explicit_path:
        if os.path.isfile(explicit_path):
            return explicit_path
        print(f"Error: binary not found at {explicit_path}", file=sys.stderr)
        sys.exit(1)
    for path in BINARY_SEARCH_PATHS:
        if os.path.isfile(path):
            return path
    print("Error: nocedit.exe not found. Specify with --binary.", file=sys.stderr)
    sys.exit(1)


def va_to_file_offset(data, va):
    """The file offset holding va, or None when no section's raw data covers it."""
    _, sections = parse_pe(data)
    for sec in sections:
        if sec.va <= va < sec.va + sec.raw_size:
            return sec.raw_off + (va - sec.va)
    return None


def find_json_file(name_or_addr, root=ANNOTATIONS_DIR):
    """The .json of a function, by address or by name.

    An address matches only the function at that address (`_FUN_<addr>.json`). A
    name matches its own file first, then any file whose name contains it; the
    first such in sorted order, so the choice does not depend on the walk.
    """
    jsons = sorted(os.path.join(d, f) for d, _, files in os.walk(root)
                   for f in files if f.endswith('.json'))
    addr = ADDRESS_RE.match(name_or_addr)
    if addr:
        suffix = "_fun_%08x.json" % int(addr.group(1), 16)
        return next((p for p in jsons if os.path.basename(p).lower().endswith(suffix)), None)
    exact = name_or_addr + ".json"
    return (next((p for p in jsons if os.path.basename(p) == exact), None)
            or next((p for p in jsons if name_or_addr in os.path.basename(p)), None))


def get_address_ranges(name_or_addr, root=ANNOTATIONS_DIR):
    """[(start, end_exclusive)] from the function's .json, or a window at a bare address."""
    json_path = find_json_file(name_or_addr, root)
    if json_path:
        with open(json_path) as f:
            meta = json.load(f)
        # address_range may be top-level or under "function"
        addr_range = meta.get("address_range") or meta.get("function", {}).get("address_range")
        if addr_range:
            print(f"; Source: {os.path.basename(json_path)}", file=sys.stderr)
            return [(int(start, 16), int(end, 16) + 1) for start, end in addr_range]

    addr_match = ADDRESS_RE.match(name_or_addr)
    if addr_match:
        addr = int(addr_match.group(1), 16)
        print(f"; No .json found, disassembling 0x{DEFAULT_WINDOW:X} bytes from 0x{addr:08X}",
              file=sys.stderr)
        return [(addr, addr + DEFAULT_WINDOW)]

    print(f"Error: could not find function '{name_or_addr}'", file=sys.stderr)
    sys.exit(1)


def disassemble_ranges(data, ranges):
    md = Cs(CS_ARCH_X86, CS_MODE_32)

    # Each range's instructions, under its header
    blocks = []
    for start_va, end_va in ranges:
        file_off = va_to_file_offset(data, start_va)
        if file_off is None:
            print(f"; WARNING: address 0x{start_va:08X} not found in any PE section")
            continue
        code = data[file_off:file_off + end_va - start_va]
        blocks.append((start_va, end_va, list(md.disasm(code, start_va))))

    # Label the branch and call targets that land on one of these instructions
    insn_addrs = {insn.address for _, _, insns in blocks for insn in insns}
    branch_targets = set()
    for _, _, insns in blocks:
        for insn in insns:
            if insn.mnemonic.startswith('j') or insn.mnemonic == 'call':
                try:
                    target = int(insn.op_str, 0)
                except ValueError:
                    continue
                if target in insn_addrs:
                    branch_targets.add(target)

    for start_va, end_va, insns in blocks:
        print(f"\n; === 0x{start_va:08X} - 0x{end_va - 1:08X} ===")
        for insn in insns:
            if insn.address in branch_targets:
                print(f"  LOC_{insn.address:08X}:")
            print(f"    {insn.address:08X}  {insn.mnemonic:<10s} {insn.op_str}")


def main(argv=None):
    parser = argparse.ArgumentParser(
        description="Disassemble a function from the original nocedit.exe binary.")
    parser.add_argument("function",
                        help="Function name (or fragment), or hex address (e.g. 0x545760)")
    parser.add_argument("--binary", default=None,
                        help="Path to nocedit.exe binary")
    args = parser.parse_args(argv)

    binary_path = find_binary(args.binary)
    print(f"; Binary: {binary_path}", file=sys.stderr)

    with open(binary_path, 'rb') as f:
        data = f.read()

    ranges = get_address_ranges(args.function)

    print(f"; Function: {args.function}")
    print(f"; Address ranges: {['0x%08X-0x%08X' % (s, e - 1) for s, e in ranges]}")
    print("; Disassembled from original binary (not Ghidra)")

    disassemble_ranges(data, ranges)


if __name__ == "__main__":
    main()
