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

The script finds the function's address range from its .json metadata file,
then disassembles directly from the binary. If no --binary is given, it
searches common locations.
"""

import argparse
import glob
import json
import os
import re
import struct
import sys

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    print("Error: capstone not installed. Run: pip install capstone", file=sys.stderr)
    sys.exit(1)

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ANNOTATIONS_DIR = os.path.join(REPO_ROOT, "annotations", "nocedit.exe", "pseudocode")

BINARY_SEARCH_PATHS = [
    os.path.expanduser("~/Repositories/OpenNocturne/game/nocedit.exe"),
]


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


def parse_pe_sections(data):
    """Parse PE headers and return a list of (va_start, va_end, raw_offset) tuples."""
    pe_offset = struct.unpack_from('<I', data, 0x3C)[0]
    image_base = struct.unpack_from('<I', data, pe_offset + 4 + 20 + 28)[0]
    num_sections = struct.unpack_from('<H', data, pe_offset + 6)[0]
    opt_hdr_size = struct.unpack_from('<H', data, pe_offset + 20)[0]
    section_offset = pe_offset + 4 + 20 + opt_hdr_size

    sections = []
    for i in range(num_sections):
        off = section_offset + i * 40
        name = data[off:off + 8].rstrip(b'\x00').decode(errors='replace')
        virt_addr = struct.unpack_from('<I', data, off + 12)[0]
        raw_size = struct.unpack_from('<I', data, off + 16)[0]
        raw_offset = struct.unpack_from('<I', data, off + 20)[0]
        va_start = image_base + virt_addr
        sections.append((va_start, raw_offset, raw_size, name))

    # Compute effective VA ranges using next section's start
    sections.sort(key=lambda x: x[0])
    result = []
    for i, (va, raw_off, raw_sz, name) in enumerate(sections):
        if i + 1 < len(sections):
            va_end = sections[i + 1][0]
        else:
            va_end = va + raw_sz
        result.append((va, va_end, raw_off, name))
    return result


def va_to_file_offset(sections, va):
    for s_va, s_end, s_raw, s_name in sections:
        if s_va <= va < s_end:
            return s_raw + (va - s_va)
    return None


def find_json_file(name_or_addr):
    """Find the .json metadata file for a function by name fragment or address."""
    # Walk the directory tree to find matching .json files
    for root, dirs, files in os.walk(ANNOTATIONS_DIR):
        for f in files:
            if f.endswith('.json') and name_or_addr in f:
                return os.path.join(root, f)

    # Try with just the address portion
    if name_or_addr.startswith("0x") or name_or_addr.startswith("00"):
        addr = name_or_addr.lstrip("0x").lstrip("0") or "0"
        for root, dirs, files in os.walk(ANNOTATIONS_DIR):
            for f in files:
                if f.endswith('.json') and addr in f:
                    return os.path.join(root, f)

    return None


def get_address_ranges(name_or_addr):
    """Get address ranges either from a .json file or from a single address."""
    # Check if it's a raw hex address
    addr_match = re.match(r'^(?:0x)?([0-9a-fA-F]+)$', name_or_addr)

    # Try to find the JSON file first
    json_path = find_json_file(name_or_addr)
    if json_path:
        with open(json_path) as f:
            meta = json.load(f)
        # address_range may be top-level or under "function"
        addr_range = meta.get("address_range")
        if addr_range is None and "function" in meta:
            addr_range = meta["function"].get("address_range")
        if addr_range:
            ranges = []
            for r in addr_range:
                start = int(r[0], 16) if isinstance(r[0], str) else r[0]
                end = int(r[1], 16) if isinstance(r[1], str) else r[1]
                ranges.append((start, end))
            print(f"; Source: {os.path.basename(json_path)}", file=sys.stderr)
            return ranges

    # Fall back to single address with a default size
    if addr_match:
        addr = int(addr_match.group(1), 16)
        default_size = 0x400  # 1KB default
        print(f"; No .json found, disassembling 0x{default_size:X} bytes from 0x{addr:08X}",
              file=sys.stderr)
        return [(addr, addr + default_size)]

    print(f"Error: could not find function '{name_or_addr}'", file=sys.stderr)
    sys.exit(1)


def disassemble_ranges(data, sections, ranges):
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True

    # Collect all instructions with their addresses for branch target annotation
    all_instructions = []
    for start_va, end_va in ranges:
        file_off = va_to_file_offset(sections, start_va)
        if file_off is None:
            print(f"; WARNING: address 0x{start_va:08X} not found in any PE section")
            continue
        size = end_va - start_va
        code = data[file_off:file_off + size]
        for insn in md.disasm(code, start_va):
            all_instructions.append(insn)

    # Build set of instruction addresses for labeling branch targets
    insn_addrs = {insn.address for insn in all_instructions}

    # Find branch targets that land within our ranges
    branch_targets = set()
    for insn in all_instructions:
        if insn.mnemonic.startswith('j') or insn.mnemonic == 'call':
            # Try to parse the operand as an address
            try:
                target = int(insn.op_str, 0)
                if target in insn_addrs:
                    branch_targets.add(target)
            except ValueError:
                pass

    # Print with labels
    current_range_idx = 0
    for insn in all_instructions:
        # Print range header if entering a new range
        while current_range_idx < len(ranges):
            r_start, r_end = ranges[current_range_idx]
            if insn.address >= r_start:
                if insn.address == r_start:
                    print(f"\n; === 0x{r_start:08X} - 0x{r_end:08X} ===")
                current_range_idx += 1
            else:
                break

        # Print label if this is a branch target
        if insn.address in branch_targets:
            print(f"  LOC_{insn.address:08X}:")

        print(f"    {insn.address:08X}  {insn.mnemonic:<10s} {insn.op_str}")


def main():
    parser = argparse.ArgumentParser(
        description="Disassemble a function from the original nocedit.exe binary.")
    parser.add_argument("function",
                        help="Function name (or fragment), or hex address (e.g. 0x545760)")
    parser.add_argument("--binary", default=None,
                        help="Path to nocedit.exe binary")
    args = parser.parse_args()

    binary_path = find_binary(args.binary)
    print(f"; Binary: {binary_path}", file=sys.stderr)

    with open(binary_path, 'rb') as f:
        data = f.read()

    sections = parse_pe_sections(data)
    ranges = get_address_ranges(args.function)

    print(f"; Function: {args.function}")
    print(f"; Address ranges: {['0x%08X-0x%08X' % (s, e) for s, e in ranges]}")
    print(f"; Disassembled from original binary (not Ghidra)")

    disassemble_ranges(data, sections, ranges)


if __name__ == "__main__":
    main()
