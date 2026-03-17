#!/usr/bin/env python3
"""
patch_and_esp.py

Patches a 32-bit x86 PE binary to convert ESP-relative local variable
accesses to EBP-relative accesses in functions that use the AND ESP
stack alignment pattern.

Background:
    Many functions in nocedit.exe have this prologue:
        PUSH EBX / PUSH ESI / PUSH EDI / PUSH EBP
        MOV EBP, ESP
        SUB ESP, 0xNNN
        AND ESP, 0xFFFFFFF8

    The AND ESP causes Ghidra to lose track of ESP, so all ESP-relative
    local variable accesses show up as `in_stack_*` artifacts. Since EBP
    is a stable frame pointer, we can convert [ESP + offset] to
    [EBP + (offset + esp_delta - sub_value)] and NOP the AND ESP.

    The encoding benefit: [ESP + disp32] requires a SIB byte (ModRM + SIB +
    disp32 = 7 bytes for a typical MOV), while [EBP + disp8] needs only 3
    bytes. Freed bytes are filled with NOPs.

Usage:
    # Dry run (show what would change)
    python3 patch_and_esp.py nocedit.exe 0x0043c880 --dry-run

    # Apply patches
    python3 patch_and_esp.py nocedit.exe 0x0043c880

    # Verbose output
    python3 patch_and_esp.py nocedit.exe 0x0043c880 --dry-run -v

    # Specify function end address (otherwise scans until RET)
    python3 patch_and_esp.py nocedit.exe 0x0043c880 --end 0x0043d589
"""

import argparse
import struct
import sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import (
    X86_REG_ESP, X86_REG_EBP,
    X86_OP_REG, X86_OP_IMM, X86_OP_MEM,
    X86_GRP_CALL, X86_GRP_RET,
)
from keystone import Ks, KS_ARCH_X86, KS_MODE_32


# ---------------------------------------------------------------------------
# PE helpers
# ---------------------------------------------------------------------------

def parse_pe_sections(data):
    """Parse PE section headers. Returns (image_base, sections_list)."""
    pe_offset = struct.unpack_from('<I', data, 0x3C)[0]
    sig = data[pe_offset:pe_offset + 4]
    if sig != b'PE\x00\x00':
        raise ValueError("Not a valid PE file")

    coff_start = pe_offset + 4
    num_sections = struct.unpack_from('<H', data, coff_start + 2)[0]
    opt_header_size = struct.unpack_from('<H', data, coff_start + 16)[0]

    opt_start = coff_start + 20
    image_base = struct.unpack_from('<I', data, opt_start + 28)[0]

    section_start = opt_start + opt_header_size
    sections = []
    for i in range(num_sections):
        off = section_start + i * 40
        name = data[off:off + 8].rstrip(b'\x00').decode('ascii', errors='replace')
        vsize, vaddr, rawsize, rawaddr = struct.unpack_from('<IIII', data, off + 8)
        sections.append({
            'name': name,
            'vaddr': vaddr,
            'vsize': vsize,
            'rawaddr': rawaddr,
            'rawsize': rawsize,
        })
    return image_base, sections


def rva_to_file_offset(sections, rva):
    """Convert an RVA to a file offset using section table."""
    for sec in sections:
        if sec['vaddr'] <= rva < sec['vaddr'] + sec['vsize']:
            return sec['rawaddr'] + (rva - sec['vaddr'])
    raise ValueError(f"RVA 0x{rva:08x} not found in any section")


# ---------------------------------------------------------------------------
# Disassembly and analysis
# ---------------------------------------------------------------------------

def disassemble_function(data, image_base, sections, func_va, end_va=None):
    """Disassemble a function from the binary. Returns list of capstone insns."""
    rva = func_va - image_base
    file_off = rva_to_file_offset(sections, rva)

    # Read a generous chunk (64KB should cover any function)
    if end_va:
        chunk_size = (end_va - func_va) + 16  # a little extra
    else:
        chunk_size = 0x10000
    chunk = data[file_off:file_off + chunk_size]

    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    insns = list(md.disasm(chunk, func_va))

    if end_va:
        insns = [i for i in insns if i.address <= end_va]
    else:
        # Stop at first RET
        trimmed = []
        for insn in insns:
            trimmed.append(insn)
            if X86_GRP_RET in insn.groups:
                break
        insns = trimmed

    return insns


def find_prologue_pattern(insns):
    """Detect the SUB ESP, imm; AND ESP, 0xFFFFFFF8 pattern.

    Returns (sub_esp_value, sub_esp_idx, and_esp_idx) or None.
    The sub_esp_value is the immediate from SUB ESP, imm.
    """
    # Scan the first ~20 instructions for the pattern
    limit = min(len(insns), 20)
    sub_esp_idx = None
    sub_esp_value = None

    for i in range(limit):
        insn = insns[i]
        ops = insn.operands

        # Look for SUB ESP, imm
        if (insn.mnemonic == 'sub' and len(ops) == 2
                and ops[0].type == X86_OP_REG and ops[0].reg == X86_REG_ESP
                and ops[1].type == X86_OP_IMM):
            sub_esp_idx = i
            sub_esp_value = ops[1].imm
            continue

        # Look for AND ESP, 0xFFFFFFF8 (or -8 signed)
        if (insn.mnemonic == 'and' and len(ops) == 2
                and ops[0].type == X86_OP_REG and ops[0].reg == X86_REG_ESP
                and ops[1].type == X86_OP_IMM):
            mask = ops[1].imm & 0xFFFFFFFF
            if mask == 0xFFFFFFF8 and sub_esp_idx is not None:
                return sub_esp_value, sub_esp_idx, i

    return None


def has_esp_index_reg(insn):
    """Check if any memory operand uses ESP as an index register (not base)."""
    for op in insn.operands:
        if op.type == X86_OP_MEM and op.mem.index == X86_REG_ESP:
            return True
    return False


def is_esp_modifier(insn):
    """Check if this instruction modifies ESP."""
    mnemonic = insn.mnemonic
    ops = insn.operands

    # PUSH, POP always modify ESP
    if mnemonic in ('push', 'pushfd', 'pushad', 'pusha'):
        return True
    if mnemonic in ('pop', 'popfd', 'popad', 'popa'):
        return True

    # CALL pushes return address, RET pops it
    if X86_GRP_CALL in insn.groups or X86_GRP_RET in insn.groups:
        return True

    # SUB ESP / ADD ESP / AND ESP / MOV ESP / LEA ESP / XOR ESP
    if len(ops) >= 1 and ops[0].type == X86_OP_REG and ops[0].reg == X86_REG_ESP:
        if mnemonic in ('sub', 'add', 'and', 'or', 'xor', 'mov', 'lea'):
            return True

    return False


def get_esp_delta_change(insn):
    """Return the ESP delta change for an instruction, or None if unknown.

    Positive = ESP increases (e.g., ADD ESP or POP), negative = decreases (PUSH, SUB ESP).
    Returns None if the change is not statically determinable.
    """
    mnemonic = insn.mnemonic
    ops = insn.operands

    if mnemonic == 'push' or mnemonic == 'pushfd':
        return -4
    if mnemonic == 'pop' or mnemonic == 'popfd':
        return 4
    if mnemonic == 'pushad' or mnemonic == 'pusha':
        return -32
    if mnemonic == 'popad' or mnemonic == 'popa':
        return 32

    # CALL pushes return addr, but the callee usually returns with RET which
    # pops it. For our purposes, after CALL executes and returns, ESP is back
    # to pre-call value (assuming cdecl or that we track ADD ESP after).
    # However, CALL itself decrements ESP by 4 momentarily. Since we're
    # analyzing the *instruction stream* not runtime, and the CALL's effect
    # on ESP within our function is: ESP-=4 (push ret addr), then the called
    # function returns (ESP+=4). Net effect from our function's perspective = 0.
    # But if we're tracking ESP *at each instruction*, CALL doesn't change
    # ESP from our frame's perspective (the callee handles its own stack).
    if X86_GRP_CALL in insn.groups:
        return 0

    if len(ops) == 2 and ops[0].type == X86_OP_REG and ops[0].reg == X86_REG_ESP:
        if ops[1].type == X86_OP_IMM:
            imm = ops[1].imm
            if mnemonic == 'sub':
                return -imm
            if mnemonic == 'add':
                return imm
        # AND ESP / MOV ESP / etc. - unknown delta
        return None

    return 0  # Not an ESP-modifying instruction


def find_esp_mem_operand_index(insn):
    """Find the index of a memory operand that uses ESP as base (no index reg).

    Returns the operand index, or -1 if none found.
    """
    for idx, op in enumerate(insn.operands):
        if (op.type == X86_OP_MEM
                and op.mem.base == X86_REG_ESP
                and op.mem.index == 0):  # No index register
            return idx
    return -1


def format_mem_operand(insn, op_idx, new_base_reg, new_disp):
    """Reconstruct the assembly string with one memory operand replaced.

    We rebuild the instruction text, replacing the ESP-relative operand
    with an EBP-relative one, then use keystone to assemble it.
    """
    # Strategy: use capstone's op_str and replace the ESP-based memory
    # reference. This is fragile, so we use a more robust approach:
    # reconstruct the full instruction from capstone detail.
    #
    # Actually the most reliable approach: take the original asm text,
    # find and replace the [esp ...] portion with [ebp + new_disp].

    op_str = insn.op_str
    mnemonic = insn.mnemonic

    # Build the replacement memory expression
    if new_disp == 0:
        replacement = "[ebp]"
    elif new_disp > 0:
        replacement = f"[ebp + 0x{new_disp:x}]"
    else:
        replacement = f"[ebp - 0x{-new_disp:x}]"

    # Find the ESP-based memory reference in op_str and replace it.
    # capstone formats these as: [esp], [esp + 0xNN], etc.
    # We need to find the brackets containing 'esp'.
    import re

    # Match [esp], [esp + 0xNN], [esp + 0xNNNN], [esp - 0xNN]
    # The pattern needs to handle "dword ptr [esp + 0x530]" etc.
    # We only replace the bracketed part.
    pattern = r'\[esp(?:\s*[+-]\s*0x[0-9a-fA-F]+)?\]'
    matches = list(re.finditer(pattern, op_str, re.IGNORECASE))

    if len(matches) == 0:
        return None  # Couldn't find the ESP reference

    # If multiple matches (very rare), we only handle single ESP mem operand
    # Use the op_idx-th memory operand occurrence
    mem_match_idx = 0
    mem_count = 0
    for idx, op in enumerate(insn.operands):
        if op.type == X86_OP_MEM:
            if idx == op_idx:
                break
            if op.mem.base == X86_REG_ESP and op.mem.index == 0:
                mem_match_idx += 1

    if mem_match_idx >= len(matches):
        return None

    match = matches[mem_match_idx]
    new_op_str = op_str[:match.start()] + replacement + op_str[match.end():]

    full_asm = f"{mnemonic} {new_op_str}"
    return full_asm


# ---------------------------------------------------------------------------
# Patching logic
# ---------------------------------------------------------------------------

def analyze_and_patch(data, image_base, sections, func_va, end_va=None,
                      dry_run=False, verbose=False):
    """Analyze a function and convert ESP-relative to EBP-relative accesses.

    Returns (patched_data, num_conversions, num_warnings).
    """
    insns = disassemble_function(data, image_base, sections, func_va, end_va)
    if not insns:
        print("ERROR: No instructions disassembled")
        return data, 0, 0

    # Find the prologue pattern
    result = find_prologue_pattern(insns)
    if result is None:
        print("ERROR: Could not find SUB ESP, imm; AND ESP, 0xFFFFFFF8 pattern")
        return data, 0, 0

    sub_esp_value, sub_esp_idx, and_esp_idx = result
    and_esp_insn = insns[and_esp_idx]
    sub_esp_insn = insns[sub_esp_idx]

    print(f"Found prologue pattern:")
    print(f"  SUB ESP, 0x{sub_esp_value:x} at 0x{sub_esp_insn.address:08x} (idx {sub_esp_idx})")
    print(f"  AND ESP, 0xFFFFFFF8 at 0x{and_esp_insn.address:08x} (idx {and_esp_idx}, {and_esp_insn.size} bytes)")

    # Initialize keystone for reassembly
    ks = Ks(KS_ARCH_X86, KS_MODE_32)

    # Track ESP delta from the post-AND-ESP baseline.
    # At the AND ESP instruction itself, ESP = (original ESP - sub_value) & ~7.
    # After the AND, delta = 0 (our baseline).
    esp_delta = 0
    esp_delta_known = True

    patches = []  # List of (file_offset, original_bytes, new_bytes, description)
    num_conversions = 0
    num_warnings = 0

    # Process instructions starting after AND ESP
    for i in range(and_esp_idx + 1, len(insns)):
        insn = insns[i]

        # Stop at RET
        if X86_GRP_RET in insn.groups:
            break

        # Update ESP tracking
        if is_esp_modifier(insn):
            delta_change = get_esp_delta_change(insn)
            if delta_change is None:
                # Unknown ESP change (e.g., AND ESP for alignment inside function body)
                if verbose:
                    print(f"  WARNING: Unknown ESP delta at 0x{insn.address:08x}: "
                          f"{insn.mnemonic} {insn.op_str}")
                esp_delta_known = False
                num_warnings += 1
            elif delta_change != 0:
                esp_delta += delta_change
                if verbose and abs(delta_change) > 0:
                    print(f"  ESP delta: {esp_delta:+d} after 0x{insn.address:08x}: "
                          f"{insn.mnemonic} {insn.op_str}")

            # Don't try to convert ESP-modifying instructions themselves
            continue

        if not esp_delta_known:
            # Can't convert anything if we lost ESP tracking
            continue

        # Check for ESP-relative memory operand (base=ESP, no index reg)
        mem_op_idx = find_esp_mem_operand_index(insn)
        if mem_op_idx < 0:
            continue

        # Skip if there's also an ESP index register somewhere (complex addressing)
        if has_esp_index_reg(insn):
            if verbose:
                print(f"  SKIP (ESP as index): 0x{insn.address:08x}: "
                      f"{insn.mnemonic} {insn.op_str}")
            continue

        # Get the ESP displacement
        mem_op = insn.operands[mem_op_idx]
        esp_disp = mem_op.disp  # This is the displacement in [ESP + disp]

        # Compute the EBP-relative displacement:
        # [ESP + esp_disp] at current ESP delta means the actual stack location is:
        #   post_AND_ESP + esp_delta + esp_disp
        # EBP points to original ESP (before SUB ESP), so:
        #   location = EBP - sub_esp_value + esp_delta + esp_disp  (approximately)
        # But wait: AND ESP may have subtracted 0-7 more bytes. Since we're NOPing
        # the AND, after patching, post-SUB-ESP == EBP - sub_esp_value exactly.
        # The original code had ESP = (EBP - sub_value) & ~7, but our NOP makes
        # ESP = EBP - sub_value. So the conversion is:
        #   [ESP + esp_disp] with delta -> [EBP + (esp_disp + esp_delta - sub_value)]
        ebp_disp = esp_disp + esp_delta - sub_esp_value

        # Build the replacement assembly string
        asm_str = format_mem_operand(insn, mem_op_idx, X86_REG_EBP, ebp_disp)
        if asm_str is None:
            if verbose:
                print(f"  WARNING: Could not rebuild asm at 0x{insn.address:08x}: "
                      f"{insn.mnemonic} {insn.op_str}")
            num_warnings += 1
            continue

        # Assemble the replacement
        try:
            encoding, _ = ks.asm(asm_str)
        except Exception as e:
            if verbose:
                print(f"  WARNING: Keystone failed at 0x{insn.address:08x}: "
                      f"{asm_str!r} -> {e}")
            num_warnings += 1
            continue

        new_bytes = bytes(encoding)
        original_size = insn.size
        new_size = len(new_bytes)

        if new_size > original_size:
            # The new instruction is larger — this shouldn't normally happen
            # (EBP-relative is same size or smaller), but be safe.
            if verbose:
                print(f"  SKIP (larger): 0x{insn.address:08x}: {insn.mnemonic} {insn.op_str} "
                      f"-> {asm_str} ({original_size}B -> {new_size}B)")
            num_warnings += 1
            continue

        # Pad with NOPs
        padded = new_bytes + b'\x90' * (original_size - new_size)

        # Compute file offset
        rva = insn.address - image_base
        file_off = rva_to_file_offset(sections, rva)
        original_bytes = data[file_off:file_off + original_size]

        # Verify original bytes match what capstone decoded
        if original_bytes != bytes(insn.bytes):
            print(f"  ERROR: Byte mismatch at 0x{insn.address:08x}! "
                  f"Expected {bytes(insn.bytes).hex()}, got {original_bytes.hex()}")
            num_warnings += 1
            continue

        saved = original_size - new_size
        desc = (f"0x{insn.address:08x}: {insn.mnemonic} {insn.op_str} -> {asm_str} "
                f"({original_size}B -> {new_size}B, {saved}B saved, "
                f"EBP disp={ebp_disp}, ESP delta={esp_delta})")

        if verbose or dry_run:
            print(f"  CONVERT: {desc}")
            if verbose:
                print(f"           original: {original_bytes.hex()}")
                print(f"           patched:  {padded.hex()}")

        patches.append((file_off, original_bytes, padded, desc))
        num_conversions += 1

    # Also NOP the AND ESP instruction
    and_rva = and_esp_insn.address - image_base
    and_file_off = rva_to_file_offset(sections, and_rva)
    and_original = data[and_file_off:and_file_off + and_esp_insn.size]
    and_nops = b'\x90' * and_esp_insn.size
    and_desc = (f"0x{and_esp_insn.address:08x}: NOP AND ESP, 0xFFFFFFF8 "
                f"({and_esp_insn.size} bytes)")
    patches.append((and_file_off, and_original, and_nops, and_desc))

    if verbose or dry_run:
        print(f"  NOP: {and_desc}")

    # Apply patches
    if not dry_run:
        data = bytearray(data)
        for file_off, orig, new, desc in patches:
            data[file_off:file_off + len(new)] = new
        data = bytes(data)
        print(f"\nApplied {len(patches)} patches ({num_conversions} conversions + 1 AND ESP NOP)")
    else:
        print(f"\nDry run: would apply {len(patches)} patches "
              f"({num_conversions} conversions + 1 AND ESP NOP)")

    if num_warnings > 0:
        print(f"Warnings: {num_warnings}")

    # Summary statistics
    total_saved = 0
    for file_off, orig, new, desc in patches:
        nop_count = sum(1 for b in new if b == 0x90)
        # For the AND ESP NOP, all bytes are NOPs so don't count those as "saved"
        if b'\x90' * len(new) != new:
            total_saved += len(orig) - len(new.rstrip(b'\x90') if new != b'\x90' * len(new) else new)

    # More accurate: count NOP padding bytes in converted instructions
    nop_padding = 0
    for file_off, orig, new, desc in patches[:-1]:  # Exclude AND ESP NOP entry
        nop_padding += sum(1 for b in new[len(new) - new[::-1].index(next((x for x in reversed(new) if x != 0x90), -1)) if any(x != 0x90 for x in new) else 0:] if b == 0x90) if any(x != 0x90 for x in new) else 0

    # Simpler: just count how many bytes each conversion saved
    bytes_saved = 0
    for file_off, orig, new, desc in patches[:-1]:
        # Count trailing NOPs in the replacement
        trailing_nops = 0
        for b in reversed(new):
            if b == 0x90:
                trailing_nops += 1
            else:
                break
        bytes_saved += trailing_nops

    print(f"\nSummary:")
    print(f"  Function: 0x{func_va:08x}")
    print(f"  SUB ESP value: 0x{sub_esp_value:x}")
    print(f"  Instructions converted: {num_conversions}")
    print(f"  AND ESP NOPed: yes")
    print(f"  Total bytes saved (NOP padding): {bytes_saved}")
    print(f"  Warnings: {num_warnings}")

    return data, num_conversions, num_warnings


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Patch AND-ESP functions: convert ESP-relative to EBP-relative accesses"
    )
    parser.add_argument("binary", help="Path to the PE binary file")
    parser.add_argument("address", help="Function start virtual address (e.g., 0x0043c880)")
    parser.add_argument("--end", help="Function end virtual address (inclusive). "
                        "If not specified, stops at first RET.")
    parser.add_argument("--dry-run", action="store_true",
                        help="Show what would be changed without modifying the file")
    parser.add_argument("-v", "--verbose", action="store_true",
                        help="Verbose output showing each conversion in detail")
    parser.add_argument("-o", "--output", help="Output file path (default: overwrite input)")

    args = parser.parse_args()

    func_va = int(args.address, 0)
    end_va = int(args.end, 0) if args.end else None

    # Read the binary
    with open(args.binary, 'rb') as f:
        data = f.read()

    # Parse PE
    image_base, sections = parse_pe_sections(data)
    if args.verbose:
        print(f"Image base: 0x{image_base:08x}")
        print(f"Sections: {[s['name'] for s in sections]}")
        print()

    # Analyze and patch
    patched_data, num_conv, num_warn = analyze_and_patch(
        data, image_base, sections, func_va, end_va,
        dry_run=args.dry_run, verbose=args.verbose
    )

    # Write output
    if not args.dry_run and num_conv > 0:
        output_path = args.output or args.binary
        with open(output_path, 'wb') as f:
            f.write(patched_data)
        print(f"\nWritten to: {output_path}")
    elif args.dry_run:
        print(f"\nNo changes written (dry run)")
    else:
        print(f"\nNo conversions made, file not modified")


if __name__ == '__main__':
    main()
