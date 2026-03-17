#!/usr/bin/env python3
"""
generate_esp_to_ebp_patches.py

Generates byte_patches.json entries that convert ESP-relative local variable
accesses to EBP-relative accesses in functions with the AND ESP,0xFFFFFFF8
stack alignment pattern.

Input:  A Ghidra-exported .asm file
Output: A JSON file compatible with fix_byte_patches.py

Usage:
    # Dry run - show what would be generated
    python3 generate_esp_to_ebp_patches.py path/to/function.asm

    # Write standalone JSON
    python3 generate_esp_to_ebp_patches.py path/to/function.asm -o patches.json

    # Append as group to existing byte_patches.json
    python3 generate_esp_to_ebp_patches.py path/to/function.asm --append-to byte_patches.json
"""

import argparse
import json
import os
import re
import sys

from keystone import Ks, KS_ARCH_X86, KS_MODE_32


# Instruction patterns
RE_INSTRUCTION = re.compile(
    r'^\s+'                     # leading whitespace
    r'(\S.*?)'                  # instruction (mnemonic + operands)
    r'\s*;\s*'                  # separator
    r'([0-9a-fA-F]+)'          # address
    r'(?:\s*\|.*)?$'            # optional comment (global names etc.)
)
RE_LABEL = re.compile(r'^\s*;.*Label:')
RE_COMMENT = re.compile(r'^\s*;')
RE_SECTION = re.compile(r'^section\s')

# ESP memory access: [ESP + 0xNNN] or [ESP]
RE_ESP_MEM = re.compile(r'\[ESP\s*(?:\+\s*(0x[0-9a-fA-F]+))?\]', re.IGNORECASE)

# Instructions that modify ESP
RE_PUSH = re.compile(r'^PUSH\b', re.IGNORECASE)
RE_POP = re.compile(r'^POP\b', re.IGNORECASE)
RE_SUB_ESP = re.compile(r'^SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', re.IGNORECASE)
RE_ADD_ESP = re.compile(r'^ADD\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', re.IGNORECASE)
RE_LEA_ESP = re.compile(r'^LEA\s+ESP\s*,', re.IGNORECASE)
RE_AND_ESP = re.compile(r'^AND\s+ESP\s*,\s*(0x[0-9a-fA-F]+)', re.IGNORECASE)
RE_MOV_ESP = re.compile(r'^MOV\s+ESP\s*,', re.IGNORECASE)

# Prologue detection
RE_SUB_ESP_PROLOGUE = re.compile(r'^SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+)', re.IGNORECASE)
RE_AND_ESP_PROLOGUE = re.compile(r'^AND\s+ESP\s*,\s*(0x[fF]+[80])', re.IGNORECASE)


def parse_int(s):
    """Parse a hex or decimal string to int."""
    s = s.strip()
    if s.lower().startswith('0x'):
        return int(s, 16)
    return int(s)


def parse_asm_file(asm_path):
    """Parse a Ghidra .asm file into a list of (address, instruction_text) tuples."""
    instructions = []
    with open(asm_path, 'r') as f:
        for line in f:
            # Skip comments, labels, section directives
            if RE_COMMENT.match(line) or RE_SECTION.match(line) or not line.strip():
                continue
            m = RE_INSTRUCTION.match(line)
            if m:
                insn_text = m.group(1).strip()
                addr = int(m.group(2), 16)
                instructions.append((addr, insn_text))
    return instructions


def assemble(ks, insn_text, addr):
    """Assemble an instruction, return bytes or None."""
    # Normalize Ghidra syntax to keystone-compatible syntax
    text = insn_text

    # Ghidra uses "dword ptr" etc. which keystone handles,
    # but Ghidra also uses segment prefixes like "ES:" that we strip
    text = re.sub(r'\bES:', '', text)
    text = re.sub(r'\bCS:', '', text)
    text = re.sub(r'\bSS:', '', text)
    text = re.sub(r'\bDS:', '', text)

    # Ghidra uses "float ptr" and "double ptr" for FPU operands;
    # keystone expects "dword ptr" and "qword ptr"
    text = re.sub(r'\bfloat ptr\b', 'dword ptr', text, flags=re.IGNORECASE)
    text = re.sub(r'\bdouble ptr\b', 'qword ptr', text, flags=re.IGNORECASE)

    # Ghidra suffix notation: MOVSD.REP -> REP MOVSD
    if '.REP' in text.upper():
        text = 'REP ' + re.sub(r'\.REP\b', '', text, flags=re.IGNORECASE)

    try:
        encoding, _ = ks.asm(text, addr)
        if encoding is None:
            return None
        return bytes(encoding)
    except Exception:
        return None


def detect_prologue(instructions):
    """Find SUB ESP,imm and AND ESP,mask in the prologue.

    Returns (sub_esp_value, sub_esp_addr, and_esp_addr, and_esp_index)
    """
    sub_esp_value = None
    sub_esp_addr = None
    and_esp_addr = None
    and_esp_index = None

    for i, (addr, text) in enumerate(instructions[:20]):
        m = RE_SUB_ESP_PROLOGUE.match(text)
        if m and sub_esp_value is None:
            sub_esp_value = parse_int(m.group(1))
            sub_esp_addr = addr
            continue

        m = RE_AND_ESP_PROLOGUE.match(text)
        if m and sub_esp_value is not None:
            and_esp_addr = addr
            and_esp_index = i
            break

    if sub_esp_value is None:
        raise ValueError("Could not find SUB ESP,imm in prologue")
    if and_esp_addr is None:
        # Check if AND ESP was already NOPed (previous --apply)
        for i, (addr, text) in enumerate(instructions[:20]):
            if text.strip() == 'NOP' and i > 0:
                prev_text = instructions[i-1][1] if i > 0 else ''
                if RE_SUB_ESP_PROLOGUE.match(prev_text):
                    raise ValueError("AND ESP already NOPed (previously patched)")
        raise ValueError("Could not find AND ESP,0xFFFFFFF8 in prologue")

    return sub_esp_value, sub_esp_addr, and_esp_addr, and_esp_index


def compute_esp_delta(text, current_delta):
    """Update ESP delta based on an instruction. Returns new delta or None."""
    if RE_PUSH.match(text):
        return current_delta - 4
    if RE_POP.match(text):
        return current_delta + 4

    m = RE_SUB_ESP.match(text)
    if m:
        return current_delta - parse_int(m.group(1))

    m = RE_ADD_ESP.match(text)
    if m:
        return current_delta + parse_int(m.group(1))

    if RE_LEA_ESP.match(text):
        return None  # LEA ESP truly unpredictable

    # MOV ESP,EBP is an epilogue/early-return sequence. Don't stop —
    # the instructions after it (past the RET) are reached via other
    # paths where ESP is at baseline. Reset delta to 0.
    if RE_MOV_ESP.match(text):
        return 0

    # RET is a dead-end path, next instruction is a new entry point
    # reached from earlier jumps. Reset delta to 0.
    if text.strip().upper() == 'RET':
        return 0

    return current_delta


def convert_instruction(text, esp_disp, ebp_offset):
    """Replace [ESP + disp] with [EBP + ebp_offset] in instruction text."""
    if ebp_offset == 0:
        replacement = '[EBP]'
    elif ebp_offset > 0:
        replacement = '[EBP + 0x%x]' % ebp_offset
    else:
        replacement = '[EBP - 0x%x]' % (-ebp_offset)

    new_text = RE_ESP_MEM.sub(replacement, text, count=1)
    return new_text


def generate_patches(asm_path, group_name=None, verbose=True):
    """Parse asm, convert ESP-relative to EBP-relative, return patch list."""
    ks = Ks(KS_ARCH_X86, KS_MODE_32)

    instructions = parse_asm_file(asm_path)
    if not instructions:
        raise ValueError("No instructions found in %s" % asm_path)

    func_start = instructions[0][0]
    func_end = instructions[-1][0]

    sub_esp_value, sub_esp_addr, and_esp_addr, and_esp_index = detect_prologue(instructions)

    if verbose:
        print("Function: 0x%x - 0x%x" % (func_start, func_end))
        print("Prologue: SUB ESP, 0x%x at 0x%x" % (sub_esp_value, sub_esp_addr))
        print("AND ESP at 0x%x (instruction index %d)" % (and_esp_addr, and_esp_index))
        print("Conversion: [ESP + N] -> [EBP + (N + esp_delta - 0x%x)]" % sub_esp_value)
        print()

    patches = []

    # Patch 1: NOP the AND ESP
    and_esp_text = instructions[and_esp_index][1]
    and_esp_bytes = assemble(ks, and_esp_text, and_esp_addr)
    if and_esp_bytes is None:
        raise ValueError("Could not assemble AND ESP instruction: %s" % and_esp_text)

    patches.append({
        'name': 'nop_and_esp_0x%x' % and_esp_addr,
        'address': '0x%08x' % and_esp_addr,
        'original': and_esp_bytes.hex(),
        'patched': ('90' * len(and_esp_bytes)),
        'description': 'NOP AND ESP stack alignment',
    })

    # Pass 1: Analyze all instructions, compute conversions where applicable
    esp_delta = 0
    all_insns = []  # every instruction with optional conversion info

    for i in range(and_esp_index + 1, len(instructions)):
        addr, text = instructions[i]

        # Compute instruction size by assembling
        insn_bytes = assemble(ks, text, addr)
        insn_size = len(insn_bytes) if insn_bytes else 0

        entry = {
            'addr': addr,
            'text': text,
            'insn_size': insn_size,
            'conversion': None,  # filled if this is a convertible ESP access
        }

        m = RE_ESP_MEM.search(text)
        if m and insn_bytes is not None:
            esp_disp = parse_int(m.group(1)) if m.group(1) else 0
            ebp_offset = esp_disp + esp_delta - sub_esp_value

            if ebp_offset > 0x100:
                if verbose:
                    print("  0x%x: SKIP (EBP+0x%x too large) [delta=%d]: %s" % (
                        addr, ebp_offset, esp_delta, text))
            else:
                new_text = convert_instruction(text, esp_disp, ebp_offset)
                new_bytes = assemble(ks, new_text, addr)
                if new_bytes is None:
                    if verbose:
                        print("  0x%x: ERROR assembling converted: %s" % (addr, new_text))
                else:
                    entry['conversion'] = {
                        'new_text': new_text,
                        'orig_bytes': insn_bytes,
                        'new_bytes': new_bytes,
                        'esp_disp': esp_disp,
                        'ebp_offset': ebp_offset,
                        'esp_delta': esp_delta,
                    }

        all_insns.append(entry)

        new_delta = compute_esp_delta(text, esp_delta)
        if new_delta is None:
            if verbose:
                print("  0x%x: ESP unpredictable (%s), stopping" % (addr, text))
            break
        esp_delta = new_delta

    # Pass 2: Generate patches, carrying NOP budget across all sequential instructions
    # We track nop_budget as trailing NOPs in the current patch region.
    # When non-converted instructions appear between conversions, we extend the
    # patch to include them (unchanged) so the budget carries through.
    converted = 0
    skipped = 0
    nop_budget = 0
    last_patch_idx = -1
    last_patch_end = 0  # address right after the last patch region
    # Track the actual content length within the current patch (before trailing NOPs)
    patch_content_len = 0

    for entry in all_insns:
        addr = entry['addr']
        insn_size = entry['insn_size']
        conv = entry['conversion']

        if conv is None:
            # Non-converted instruction breaks the merge chain.
            # We can't carry NOP budget across non-converted instructions
            # without embedding them in the patch (which confuses Ghidra).
            nop_budget = 0
            last_patch_idx = -1
            last_patch_end = 0
            continue

        orig_bytes = conv['orig_bytes']
        new_bytes = conv['new_bytes']
        overflow = len(new_bytes) - len(orig_bytes)

        if overflow <= 0:
            # Fits or is smaller
            padded = new_bytes + b'\x90' * (-overflow)
            if padded.hex() != orig_bytes.hex():
                patches.append({
                    'name': 'esp_to_ebp_0x%x' % addr,
                    'address': '0x%08x' % addr,
                    'original': orig_bytes.hex(),
                    'patched': padded.hex(),
                    'description': '%s -> %s' % (entry['text'], conv['new_text']),
                })
                nop_budget = -overflow
                last_patch_idx = len(patches) - 1
                last_patch_end = addr + len(orig_bytes)
                patch_content_len = len(new_bytes)
                converted += 1
                if verbose:
                    print("  0x%x: [ESP+0x%x] -> [EBP%+d] (delta=%d, saved %d): %s" % (
                        addr, conv['esp_disp'], conv['ebp_offset'],
                        conv['esp_delta'], -overflow, conv['new_text']))
        elif overflow <= nop_budget and last_patch_end == addr:
            # Overflow fits in preceding patch's NOP padding
            prev_patch = patches[last_patch_idx]
            prev_orig = bytes.fromhex(prev_patch['original'])
            prev_patched_content = bytes.fromhex(prev_patch['patched'])[:patch_content_len]

            merged_orig = prev_orig + orig_bytes
            remaining_nops = nop_budget - overflow
            merged_patched = prev_patched_content + new_bytes + b'\x90' * remaining_nops

            assert len(merged_orig) == len(merged_patched), \
                "Merge size mismatch: %d vs %d" % (len(merged_orig), len(merged_patched))

            prev_patch['original'] = merged_orig.hex()
            prev_patch['patched'] = merged_patched.hex()
            prev_patch['description'] += ' + %s -> %s' % (entry['text'], conv['new_text'])

            nop_budget = remaining_nops
            patch_content_len = patch_content_len + len(new_bytes)
            last_patch_end = addr + len(orig_bytes)
            converted += 1
            if verbose:
                print("  0x%x: [ESP+0x%x] -> [EBP%+d] (delta=%d, MERGED, borrowed %d): %s" % (
                    addr, conv['esp_disp'], conv['ebp_offset'],
                    conv['esp_delta'], overflow, conv['new_text']))
        else:
            if verbose:
                reason = "new larger by %d, budget=%d" % (overflow, nop_budget)
                if last_patch_end != addr:
                    reason += " (not adjacent)"
                print("  0x%x: SKIP (%s): %s -> %s" % (
                    addr, reason, entry['text'], conv['new_text']))
            skipped += 1
            nop_budget = 0
            last_patch_idx = -1
            last_patch_end = 0

    if verbose:
        print()
        print("Summary: %d converted, %d skipped" % (converted, skipped))
        print("Total patches (incl. AND ESP NOP): %d" % len(patches))

    return patches


def main():
    parser = argparse.ArgumentParser(
        description="Generate ESP-to-EBP byte patches from a Ghidra .asm file",
    )
    parser.add_argument("asm_file", help="Path to the Ghidra .asm file")
    parser.add_argument("--output", "-o", type=str, default=None,
                        help="Write patches as standalone JSON file")
    parser.add_argument("--append-to", type=str, default=None,
                        help="Append as new group to existing byte_patches.json")
    parser.add_argument("--group-name", type=str, default=None,
                        help="Group name (default: derived from function address)")
    parser.add_argument("--quiet", "-q", action="store_true",
                        help="Suppress per-instruction output")

    args = parser.parse_args()

    if not os.path.exists(args.asm_file):
        print("ERROR: File not found: %s" % args.asm_file)
        sys.exit(1)

    try:
        patches = generate_patches(args.asm_file, verbose=not args.quiet)
    except ValueError as e:
        print("SKIP: %s" % e)
        sys.exit(1)

    if not patches:
        print("No patches generated.")
        sys.exit(1)

    # Derive group name from first patch address
    first_addr = patches[0]['address']
    group_name = args.group_name or ("esp_to_ebp_%s" % first_addr)

    group = {
        'name': group_name,
        'description': 'ESP-to-EBP conversion for function at %s' % first_addr,
        'patches': patches,
    }

    if args.output:
        output_data = {'groups': [group]}
        with open(args.output, 'w') as f:
            json.dump(output_data, f, indent=2)
        print("\nWrote %d patches to %s" % (len(patches), args.output))

    elif args.append_to:
        if os.path.exists(args.append_to):
            with open(args.append_to, 'r') as f:
                data = json.load(f)
        else:
            data = {'groups': []}
        data['groups'] = [g for g in data['groups'] if g['name'] != group_name]
        data['groups'].append(group)
        with open(args.append_to, 'w') as f:
            json.dump(data, f, indent=2)
        print("\nAppended %d patches to %s (group: %s)" % (
            len(patches), args.append_to, group_name))

    else:
        print("\nGenerated patches JSON:")
        print(json.dumps(group, indent=2))


if __name__ == "__main__":
    main()
