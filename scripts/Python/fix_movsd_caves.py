#!/usr/bin/env python3
"""
fix_movsd_caves.py

Replaces 4x MOVSD struct copy patterns with explicit MOV instructions
placed in code caves. Ghidra's decompiler cannot properly analyze the
MOVSD string instruction, producing garbled bVar*-8 arithmetic. Explicit
MOVs decompile cleanly as field-by-field struct copies.

For each 4x MOVSD site:
  1. Borrows adjacent instructions to get >= 5 bytes for a JMP
  2. Writes explicit 16-byte copy + borrowed instructions into a code cave
  3. Replaces the original site with JMP cave + NOPs

Usage:
    # Test on a single function
    python3 fix_movsd_caves.py <project> <name> <program> <func_addr> --test

    # Apply
    python3 fix_movsd_caves.py <project> <name> <program> <func_addr> --apply

    # Specify cave address manually
    python3 fix_movsd_caves.py <project> <name> <program> <func_addr> --cave 0x0060fb40 --test
"""

import argparse
import glob
import json
import os
import re
import struct
import sys
import tempfile


# ---------------------------------------------------------------------------
# ASM parsing (reused patterns from generate_esp_to_ebp_patches.py)
# ---------------------------------------------------------------------------

RE_INSTRUCTION = re.compile(
    r'^\s+'
    r'(\S.*?)'
    r'\s*;\s*'
    r'([0-9a-fA-F]+)'
    r'(?:\s*\|.*)?$'
)
RE_COMMENT = re.compile(r'^\s*;')
RE_SECTION = re.compile(r'^section\s')

# MOVSD string operation (the 1-byte 0xA5 opcode, not SSE movsd)
RE_MOVSD = re.compile(r'^MOVSD\s+ES:', re.IGNORECASE)

# REP MOVSD (MOVSD.REP in Ghidra syntax) — copies ECX dwords
RE_REP_MOVSD = re.compile(r'^MOVSD\.REP\s+ES:', re.IGNORECASE)


def parse_asm_file(asm_path):
    """Parse a Ghidra .asm file into (address, instruction_text) tuples."""
    instructions = []
    with open(asm_path, 'r') as f:
        for line in f:
            if RE_COMMENT.match(line) or RE_SECTION.match(line) or not line.strip():
                continue
            m = RE_INSTRUCTION.match(line)
            if m:
                insn_text = m.group(1).strip()
                addr = int(m.group(2), 16)
                instructions.append((addr, insn_text))
    return instructions


def find_movsd_groups(instructions, min_count=3):
    """Find groups of consecutive MOVSD instructions.

    Detects runs of min_count or more consecutive MOVSDs (default 3+).
    3x MOVSD = 12-byte copy (CVector3f), 4x = 16-byte copy (CQuaternion4f).

    Returns list of (start_index, start_addr, 'movsdN', count) for each group.
    """
    groups = []
    i = 0
    while i < len(instructions):
        if RE_MOVSD.match(instructions[i][1]):
            # Count consecutive MOVSDs at contiguous addresses
            run = 1
            while (i + run < len(instructions) and
                   RE_MOVSD.match(instructions[i + run][1]) and
                   instructions[i + run][0] == instructions[i][0] + run):
                run += 1
            if run >= min_count:
                groups.append((i, instructions[i][0], 'movsd%d' % run, run))
            i += run
        else:
            i += 1
    return groups


# Pattern for REP MOVSD pass-by-value: SUB ESP,N; MOV ECX,N; MOV EDI,ESP; LEA/MOV ESI,...; REP MOVSD
RE_SUB_ESP_IMM = re.compile(r'^SUB\s+ESP\s*,\s*(0x[0-9a-fA-F]+|\d+)', re.IGNORECASE)
RE_MOV_ECX_IMM = re.compile(r'^MOV\s+ECX\s*,\s*(0x[0-9a-fA-F]+|\d+)', re.IGNORECASE)
RE_MOV_EDI_ESP = re.compile(r'^MOV\s+EDI\s*,\s*ESP$', re.IGNORECASE)
RE_LEA_ESI = re.compile(r'^LEA\s+ESI\s*,', re.IGNORECASE)
RE_MOV_ESI = re.compile(r'^MOV\s+ESI\s*,', re.IGNORECASE)


def find_rep_movsd_groups(instructions):
    """Find REP MOVSD pass-by-value copy patterns.

    Looks for: SUB ESP,size; MOV ECX,count; MOV EDI,ESP; LEA/MOV ESI,src; MOVSD.REP
    The instructions don't have to be strictly consecutive (there may be gaps
    or reordering), but they must all appear within a small window before
    the REP MOVSD.

    Returns list of (rep_index, rep_addr, 'rep_movsd', setup_info) where
    setup_info = {'sub_esp': (idx, size), 'mov_ecx': (idx, count),
                  'mov_edi_esp': idx, 'lea_mov_esi': idx, 'dword_count': int}
    """
    groups = []
    for i, (addr, text) in enumerate(instructions):
        if not RE_REP_MOVSD.match(text):
            continue

        # Search backward (up to 8 instructions) for the setup pattern
        setup = {
            'sub_esp': None,      # (index, byte_size)
            'mov_ecx': None,      # (index, dword_count)
            'mov_edi_esp': None,  # index
            'lea_mov_esi': None,  # index
        }

        for j in range(i - 1, max(i - 9, -1), -1):
            jaddr, jtext = instructions[j]

            m = RE_SUB_ESP_IMM.match(jtext)
            if m and setup['sub_esp'] is None:
                val = int(m.group(1), 16) if m.group(1).startswith('0x') else int(m.group(1))
                setup['sub_esp'] = (j, val)
                continue

            m = RE_MOV_ECX_IMM.match(jtext)
            if m and setup['mov_ecx'] is None:
                val = int(m.group(1), 16) if m.group(1).startswith('0x') else int(m.group(1))
                setup['mov_ecx'] = (j, val)
                continue

            if RE_MOV_EDI_ESP.match(jtext) and setup['mov_edi_esp'] is None:
                setup['mov_edi_esp'] = j
                continue

            if (RE_LEA_ESI.match(jtext) or RE_MOV_ESI.match(jtext)) and setup['lea_mov_esi'] is None:
                setup['lea_mov_esi'] = j
                continue

        # Need at least SUB ESP + MOV ECX + the REP MOVSD itself
        if setup['sub_esp'] is None or setup['mov_ecx'] is None:
            continue

        dword_count = setup['mov_ecx'][1]
        byte_size = setup['sub_esp'][1]

        # Sanity check: byte_size should == dword_count * 4
        if byte_size != dword_count * 4:
            continue

        setup['dword_count'] = dword_count

        # Find the earliest setup instruction
        setup_indices = [idx for idx, _ in [setup['sub_esp']] if idx is not None]
        if setup['mov_ecx'] is not None:
            setup_indices.append(setup['mov_ecx'][0])
        if setup['mov_edi_esp'] is not None:
            setup_indices.append(setup['mov_edi_esp'])
        if setup['lea_mov_esi'] is not None:
            setup_indices.append(setup['lea_mov_esi'])

        first_setup_idx = min(setup_indices)
        groups.append((first_setup_idx, instructions[first_setup_idx][0],
                       'rep_movsd', setup, i))

    return groups


# ---------------------------------------------------------------------------
# Instruction assembly via keystone
# ---------------------------------------------------------------------------

def get_assembler():
    """Create a keystone assembler for x86-32."""
    from keystone import Ks, KS_ARCH_X86, KS_MODE_32
    return Ks(KS_ARCH_X86, KS_MODE_32)


def _fix_large_hex_offset(m):
    """Convert large positive hex offsets to negative for keystone.

    Ghidra writes [EBP + 0xffffff68] for [EBP - 0x98].
    """
    sign = m.group(1)
    val = int(m.group(2), 16)
    if sign == '+' and val >= 0x80000000:
        return '- 0x%x' % (0x100000000 - val)
    return m.group(0)


def assemble_one(ks, text, addr):
    """Assemble a single instruction. Returns bytes or None."""
    # Normalize Ghidra syntax
    text = re.sub(r'\bES:', '', text)
    text = re.sub(r'\bCS:', '', text)
    text = re.sub(r'\bSS:', '', text)
    text = re.sub(r'\bDS:', '', text)
    text = re.sub(r'\bfloat ptr\b', 'dword ptr', text, flags=re.IGNORECASE)
    text = re.sub(r'\bdouble ptr\b', 'qword ptr', text, flags=re.IGNORECASE)
    # Fix Ghidra's unsigned large hex offsets -> signed negative
    text = re.sub(r'([+-])\s*(0x[89a-fA-F][0-9a-fA-F]{7})\b', _fix_large_hex_offset, text)

    try:
        encoding, _ = ks.asm(text, addr)
        if encoding is None:
            return None
        return bytes(encoding)
    except Exception:
        return None


def get_insn_size(ks, text, addr):
    """Get the assembled size of an instruction."""
    b = assemble_one(ks, text, addr)
    return len(b) if b else 0


# ---------------------------------------------------------------------------
# Patch generation
# ---------------------------------------------------------------------------

def make_explicit_copy_asm(dword_count):
    """Generate explicit dword copy instructions for N dwords.

    Uses ECX as temp register (safe — it was set to the count and would be
    clobbered by REP MOVSD anyway).
    """
    insns = []
    for i in range(dword_count):
        offset = i * 4
        if offset == 0:
            insns.append('mov ecx, dword ptr [esi]')
            insns.append('mov dword ptr [edi], ecx')
        else:
            insns.append('mov ecx, dword ptr [esi+0x%x]' % offset)
            insns.append('mov dword ptr [edi+0x%x], ecx' % offset)
    return insns


# Instructions that modify ESP (unsafe to borrow without adjustment)
RE_ESP_MODIFY = re.compile(
    r'^(PUSH|POP|SUB\s+ESP|ADD\s+ESP|CALL|RET)\b', re.IGNORECASE)

# ESP-modifying instructions that are safe to borrow adjacent to MOVSD.
# MOVSD uses ESI/EDI, not ESP, so PUSH/POP/ADD ESP/SUB ESP can be
# relocated into the cave as long as they execute in the same order.
RE_ESP_SAFE_FOR_MOVSD = re.compile(
    r'^(PUSH\b|POP\b|ADD\s+ESP|SUB\s+ESP)', re.IGNORECASE)

# Instructions with relative offsets (unsafe to relocate)
RE_RELATIVE = re.compile(
    r'^(JMP|JZ|JNZ|JE|JNE|JL|JG|JLE|JGE|JA|JB|JAE|JBE|JC|JNC|JS|JNS|'
    r'JO|JNO|JP|JNP|JCXZ|JECXZ|LOOP|LOOPE|LOOPNE|CALL)\b', re.IGNORECASE)


def can_borrow(text, for_movsd=False):
    """Check if an instruction is safe to relocate into a cave.

    If for_movsd=True, allows PUSH/POP/ADD ESP/SUB ESP since MOVSD
    uses ESI/EDI and doesn't interact with the stack pointer.
    """
    if RE_ESP_MODIFY.match(text):
        if for_movsd and RE_ESP_SAFE_FOR_MOVSD.match(text):
            return True
        return False
    if RE_RELATIVE.match(text):
        return False
    return True


# Pattern to extract jump/branch targets from instructions
RE_BRANCH_TARGET = re.compile(
    r'^(?:JMP|JZ|JNZ|JE|JNE|JL|JG|JLE|JGE|JA|JB|JAE|JBE|JC|JNC|JS|JNS|'
    r'JO|JNO|JP|JNP|JCXZ|JECXZ|LOOP|LOOPE|LOOPNE)\s+'
    r'(?:.*\s)?0x([0-9a-fA-F]+)',
    re.IGNORECASE)


def collect_jump_targets(instructions):
    """Collect all branch target addresses in the function.

    Returns a set of addresses that are jumped/branched to.
    """
    targets = set()
    for addr, text in instructions:
        m = RE_BRANCH_TARGET.match(text)
        if m:
            targets.add(int(m.group(1), 16))
    return targets


def build_site_patch(ks, instructions, group_idx, group_addr, jump_targets=None,
                     movsd_count=4):
    """Build a site patch by borrowing adjacent instructions.

    Args:
      movsd_count: number of consecutive MOVSD instructions (3 or 4).

    Returns:
      site_start: start address of the patched region
      site_size: total bytes being replaced
      before_insns: [(addr, text)] borrowed from before the MOVSDs
      after_insns: [(addr, text)] borrowed from after the MOVSDs
      return_addr: address to JMP back to from the cave
    """
    if jump_targets is None:
        jump_targets = set()

    movsd_start = group_addr
    movsd_end = group_addr + movsd_count  # each MOVSD is 1 byte
    movsd_size = movsd_count

    # We need >= 5 bytes for a JMP rel32
    total_size = movsd_size
    before_insns = []
    after_insns = []

    # Expand after first (safer — less likely to hit ESP/control flow)
    after_idx = group_idx + movsd_count
    while total_size < 5 and after_idx < len(instructions):
        addr, text = instructions[after_idx]
        # Don't borrow an instruction that is a branch target — other
        # code jumps here and must keep landing on this instruction.
        if addr in jump_targets:
            break
        # Make sure it's contiguous
        if addr != movsd_end + sum(
                get_insn_size(ks, t, a) for a, t in after_insns):
            break
        if not can_borrow(text, for_movsd=True):
            break
        insn_size = get_insn_size(ks, text, addr)
        if insn_size == 0:
            break
        after_insns.append((addr, text))
        total_size += insn_size
        after_idx += 1

    # Expand before if still not enough
    before_idx = group_idx - 1
    while total_size < 5 and before_idx >= 0:
        addr, text = instructions[before_idx]
        # Don't borrow an instruction that is a branch target
        if addr in jump_targets:
            break
        if not can_borrow(text, for_movsd=True):
            break
        insn_size = get_insn_size(ks, text, addr)
        if insn_size == 0:
            break
        # Check contiguity (movsd_start is updated each iteration)
        if addr + insn_size != movsd_start:
            break
        before_insns.insert(0, (addr, text))
        total_size += insn_size
        movsd_start = addr
        before_idx -= 1

    if total_size < 5:
        return None  # Can't fit a JMP

    # Compute actual site boundaries
    site_start = before_insns[0][0] if before_insns else group_addr
    # Return address is after the last borrowed instruction
    if after_insns:
        last_addr, last_text = after_insns[-1]
        last_size = get_insn_size(ks, last_text, last_addr)
        return_addr = last_addr + last_size
    else:
        return_addr = movsd_end  # right after MOVSDs

    site_size = return_addr - site_start

    # Safety check: verify no jump targets land INSIDE our patch range.
    # A jump to site_start is OK (it hits our JMP), but a jump to any
    # address in (site_start, return_addr) would land in the middle of
    # our JMP or NOP padding — corrupting control flow.
    for target in jump_targets:
        if site_start < target < return_addr:
            return None  # Unsafe — a branch lands inside our patch

    return {
        'site_start': site_start,
        'site_size': site_size,
        'before_insns': before_insns,
        'after_insns': after_insns,
        'return_addr': return_addr,
    }


def generate_cave_code(ks, site_info, cave_addr):
    """Generate cave code for a MOVSD site.

    For 'movsd4': borrowed before + 4-dword explicit copy + ESI/EDI advance + borrowed after + JMP
    For 'rep_movsd': all setup instructions + N-dword explicit copy + JMP

    Returns (bytes, description_lines).
    """
    code_bytes = b''
    desc = []
    addr = cave_addr

    def emit(asm_text, comment=''):
        nonlocal code_bytes, addr
        b = assemble_one(ks, asm_text, addr)
        label = '  0x%08x  %-40s' % (addr, asm_text)
        if comment:
            label += '  %s' % comment
        desc.append(label)
        code_bytes += b
        addr += len(b)

    def emit_borrowed(insn_addr, text):
        nonlocal code_bytes, addr
        b = assemble_one(ks, text, addr)
        if b is None:
            raise ValueError("Cannot assemble borrowed instruction at 0x%x: %s" % (insn_addr, text))
        desc.append('  0x%08x  %-40s  (borrowed from 0x%x)' % (addr, text, insn_addr))
        code_bytes += b
        addr += len(b)

    group_type = site_info.get('group_type', 'movsd4')

    if group_type.startswith('movsd'):
        # Determine dword count from group type (movsd3 -> 3, movsd4 -> 4)
        dword_count = site_info.get('movsd_count', 4)
        byte_count = dword_count * 4

        # Borrowed before instructions
        for insn_addr, text in site_info['before_insns']:
            emit_borrowed(insn_addr, text)

        # Explicit N-dword copy
        copy_insns = make_explicit_copy_asm(dword_count)
        for asm_text in copy_insns:
            emit(asm_text)

        # ESI/EDI advancement (Nx MOVSD advances both by N*4)
        emit('add esi, %d' % byte_count, '(MOVSD esi/edi advancement)')
        emit('add edi, %d' % byte_count, '(MOVSD esi/edi advancement)')

        # Borrowed after instructions
        for insn_addr, text in site_info['after_insns']:
            emit_borrowed(insn_addr, text)

    elif group_type == 'rep_movsd':
        # Emit all the setup instructions from the original site
        for insn_addr, text in site_info['setup_insns']:
            emit_borrowed(insn_addr, text)

        # Explicit N-dword copy using ECX as temp
        dword_count = site_info['dword_count']
        copy_insns = make_explicit_copy_asm(dword_count)
        for asm_text in copy_insns:
            emit(asm_text)

    # JMP back
    jmp_offset = site_info['return_addr'] - (addr + 5)
    jmp_bytes = b'\xe9' + struct.pack('<i', jmp_offset)
    desc.append('  0x%08x  jmp 0x%x' % (addr, site_info['return_addr']))
    code_bytes += jmp_bytes

    return code_bytes, desc


def generate_patches_for_function(asm_path, cave_addr, cave_size, cave_offset=0,
                                   binary_path=None, verbose=True):
    """Generate MOVSD cave patches for all sites in a function.

    Args:
        asm_path: Path to the .asm file
        cave_addr: Base address of the code cave
        cave_size: Total size of the cave
        cave_offset: Current allocation offset within the cave
        binary_path: Path to the PE binary (for reading original bytes)
        verbose: Print details

    Returns:
        (patches_json, new_cave_offset, allocations)
    """
    ks = get_assembler()
    instructions = parse_asm_file(asm_path)

    # Find both pattern types
    # Collect all branch targets for safety validation
    jump_targets = collect_jump_targets(instructions)

    movsd_groups = find_movsd_groups(instructions, min_count=2)
    rep_groups = find_rep_movsd_groups(instructions)

    all_groups = []
    for idx, addr, gtype, count in movsd_groups:
        all_groups.append((gtype, idx, addr, None, None, count))
    for first_idx, first_addr, gtype, setup, rep_idx in rep_groups:
        all_groups.append(('rep_movsd', first_idx, first_addr, setup, rep_idx, 0))

    # Sort by address
    all_groups.sort(key=lambda g: g[2])

    if not all_groups:
        if verbose:
            print("No MOVSD groups found in %s" % asm_path)
        return None, cave_offset, []

    if verbose:
        mn = len(movsd_groups)
        mr = len(rep_groups)
        counts_str = ', '.join('%dx%d' % (
            sum(1 for _, _, _, c in movsd_groups if c == n), n)
            for n in sorted(set(c for _, _, _, c in movsd_groups)))
        if mr:
            counts_str += ', %d REP' % mr
        print("Found %d MOVSD group(s) in %s (%s)" % (
            len(all_groups), os.path.basename(asm_path), counts_str))

    # Read binary for original bytes
    pe_data, image_base, sections = None, None, None
    if binary_path:
        pe_data, image_base, sections = load_pe(binary_path)

    func_name = os.path.basename(asm_path).replace('.asm', '')
    patches = []
    allocations = []
    current_offset = cave_offset

    for group_num, (gtype, group_idx, group_addr, setup, rep_idx, movsd_count) in enumerate(all_groups):
        if verbose:
            print("\n  %s group %d at 0x%08x" % (gtype, group_num + 1, group_addr))

        if gtype.startswith('movsd') and gtype != 'rep_movsd':
            site_info = build_site_patch(ks, instructions, group_idx, group_addr,
                                        jump_targets=jump_targets,
                                        movsd_count=movsd_count)
            if site_info is None:
                if verbose:
                    print("    SKIP: cannot borrow enough bytes for JMP")
                continue
            site_info['group_type'] = gtype
            site_info['movsd_count'] = movsd_count

        elif gtype == 'rep_movsd':
            # The entire setup block (SUB ESP through REP MOVSD) becomes the site
            rep_addr, rep_text = instructions[rep_idx]
            rep_size = get_insn_size(ks, rep_text, rep_addr)
            site_start = group_addr
            return_addr = rep_addr + rep_size

            # Collect all instructions in the setup block
            setup_insns = []
            for j in range(group_idx, rep_idx):
                setup_insns.append(instructions[j])

            site_size = return_addr - site_start
            if site_size < 5:
                if verbose:
                    print("    SKIP: site too small (%d bytes)" % site_size)
                continue

            dword_count = setup['dword_count']
            site_info = {
                'site_start': site_start,
                'site_size': site_size,
                'return_addr': return_addr,
                'before_insns': [],
                'after_insns': [],
                'setup_insns': setup_insns,
                'dword_count': dword_count,
                'group_type': 'rep_movsd',
            }

        if verbose:
            print("    Site: 0x%08x - 0x%08x (%d bytes)" % (
                site_info['site_start'],
                site_info['return_addr'],
                site_info['site_size']))
            if site_info['before_insns']:
                print("    Borrowed before: %s" % ', '.join(
                    t for _, t in site_info['before_insns']))
            if site_info['after_insns']:
                print("    Borrowed after: %s" % ', '.join(
                    t for _, t in site_info['after_insns']))

        # Generate cave code
        this_cave_addr = cave_addr + current_offset
        try:
            cave_code, cave_desc = generate_cave_code(ks, site_info, this_cave_addr)
        except ValueError as e:
            if verbose:
                print("    SKIP: %s" % e)
            continue

        if current_offset + len(cave_code) > cave_size:
            if verbose:
                print("    SKIP: cave full (need %d bytes, %d available)" % (
                    len(cave_code), cave_size - current_offset))
            continue

        if verbose:
            print("    Cave code at 0x%08x (%d bytes):" % (this_cave_addr, len(cave_code)))
            for line in cave_desc:
                print("    %s" % line)

        # Build site patch: JMP to cave + NOPs
        site_start = site_info['site_start']
        site_size = site_info['site_size']
        jmp_offset = this_cave_addr - (site_start + 5)
        site_bytes = b'\xe9' + struct.pack('<i', jmp_offset)
        site_bytes += b'\x90' * (site_size - 5)

        # Get original bytes
        site_orig = read_pe_bytes(pe_data, image_base, sections,
                                  site_start, site_size) if pe_data else None
        cave_orig = b'\xcc' * len(cave_code)  # caves are INT3-filled

        # Create patch entries
        patch_name_base = 'movsd_%08x' % group_addr

        site_patch = {
            'name': '%s_site' % patch_name_base,
            'address': '0x%08x' % site_start,
            'original': site_orig.hex() if site_orig else '??' * site_size,
            'patched': site_bytes.hex(),
            'description': 'JMP to cave at 0x%x, replacing 4x MOVSD + %d borrowed insn(s)' % (
                this_cave_addr,
                len(site_info['before_insns']) + len(site_info['after_insns'])),
        }

        cave_patch = {
            'name': '%s_cave' % patch_name_base,
            'address': '0x%08x' % this_cave_addr,
            'original': cave_orig.hex(),
            'patched': cave_code.hex(),
            'description': 'Explicit 16-byte struct copy + JMP back to 0x%x' % (
                site_info['return_addr']),
        }

        patches.extend([site_patch, cave_patch])

        allocations.append({
            'name': patch_name_base,
            'offset': current_offset,
            'size': len(cave_code),
            'description': '4x MOVSD replacement for %s' % func_name,
            'used_by': ['0x%08x' % group_addr],
        })

        current_offset += len(cave_code)

    if not patches:
        return None, cave_offset, []

    # Get function entry address from filename (FUN_XXXXXXXX)
    func_addr_match = re.search(r'FUN_([0-9a-fA-F]+)', func_name)
    func_entry = int(func_addr_match.group(1), 16) if func_addr_match else instructions[0][0]

    # Build body extensions so cave code is included in function's .asm/.pcode
    body_extensions = []
    for alloc in allocations:
        body_extensions.append({
            'function': '0x%08x' % func_entry,
            'cave_start': '0x%08x' % (cave_addr + alloc['offset']),
            'cave_size': alloc['size'],
        })

    result = {
        'groups': [{
            'name': 'movsd_caves_%s' % func_name,
            'description': 'MOVSD struct copy replacements for %s' % func_name,
            'patches': patches,
        }],
        'function_body_extensions': body_extensions,
    }

    return result, current_offset, allocations


# ---------------------------------------------------------------------------
# PE helpers
# ---------------------------------------------------------------------------

def load_pe(binary_path):
    """Load PE binary and parse sections."""
    with open(binary_path, 'rb') as f:
        data = f.read()

    pe_offset = struct.unpack_from('<I', data, 0x3C)[0]
    coff_start = pe_offset + 4
    opt_start = coff_start + 20
    image_base = struct.unpack_from('<I', data, opt_start + 28)[0]
    opt_header_size = struct.unpack_from('<H', data, coff_start + 16)[0]
    section_start = opt_start + opt_header_size
    num_sections = struct.unpack_from('<H', data, coff_start + 2)[0]

    sections = []
    for i in range(num_sections):
        off = section_start + i * 40
        vaddr = struct.unpack_from('<I', data, off + 12)[0]
        vsize = struct.unpack_from('<I', data, off + 8)[0]
        rawaddr = struct.unpack_from('<I', data, off + 20)[0]
        rawsize = struct.unpack_from('<I', data, off + 16)[0]
        sections.append((vaddr, vsize, rawaddr, rawsize))

    return data, image_base, sections


def read_pe_bytes(data, image_base, sections, va, size):
    """Read bytes from PE at a virtual address."""
    rva = va - image_base
    for vaddr, vsize, rawaddr, rawsize in sections:
        if vaddr <= rva < vaddr + rawsize:
            offset = rawaddr + (rva - vaddr)
            return data[offset:offset + size]
    return None


# ---------------------------------------------------------------------------
# Code cave management
# ---------------------------------------------------------------------------

def find_cave(annotations_dir, min_size):
    """Find a cave with enough free space from code_caves.json."""
    caves_path = os.path.join(annotations_dir, 'code_caves.json')
    if not os.path.isfile(caves_path):
        return None, None

    with open(caves_path) as f:
        data = json.load(f)

    for cave in data.get('caves', []):
        total = cave.get('total_size', 0)
        used = cave.get('free_offset', 0)
        free = total - used
        if free >= min_size:
            addr = int(cave['start'], 16)
            return addr, cave

    return None, None


def find_asm_file(pseudocode_src_dir, func_addr_hex):
    """Find the .asm file for a function by address."""
    addr = func_addr_hex.lower().replace('0x', '').lstrip('0').zfill(8)
    pattern = os.path.join(pseudocode_src_dir, '**', '*FUN_%s*.asm' % addr)
    matches = glob.glob(pattern, recursive=True)
    return matches[0] if matches else None


def find_binary(annotations_dir):
    """Auto-detect binary path."""
    candidates = [
        os.path.join(os.path.dirname(os.path.dirname(annotations_dir)),
                     '..', 'OpenNocturne', 'game', 'nocedit.exe'),
        os.path.join(annotations_dir, '..', '..', 'game', 'nocedit.exe'),
    ]
    for path in candidates:
        resolved = os.path.abspath(path)
        if os.path.isfile(resolved):
            return resolved
    return None


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Replace 4x MOVSD struct copies with explicit MOVs in code caves")
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("target", help="Function address (hex)")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: apply and roll back, show before/after diff")
    parser.add_argument("--apply", action="store_true",
                        help="Apply patches permanently")
    parser.add_argument("--cave", type=str, default=None,
                        help="Code cave address (hex). Auto-detected from code_caves.json if omitted")
    parser.add_argument("--binary", type=str, default=None,
                        help="Path to the PE binary")
    parser.add_argument("--pseudocode-src", type=str, default=None,
                        help="Path to pseudocode/src directory")

    args = parser.parse_args()

    # Find pseudocode src directory
    if args.pseudocode_src:
        src_dir = args.pseudocode_src
    else:
        src_dir = os.path.join('annotations', args.program_name, 'pseudocode', 'src')

    annotations_dir = os.path.join('annotations', args.program_name)

    # Find ASM file
    asm_path = find_asm_file(src_dir, args.target)
    if not asm_path:
        print("ERROR: No .asm file found for %s" % args.target)
        sys.exit(1)

    # Find binary
    binary_path = args.binary or find_binary(annotations_dir)

    # Find or use specified cave
    if args.cave:
        cave_addr = int(args.cave, 16)
        # Look up in code_caves.json
        caves_path = os.path.join(annotations_dir, 'code_caves.json')
        cave_info = None
        if os.path.isfile(caves_path):
            with open(caves_path) as f:
                data = json.load(f)
            for c in data.get('caves', []):
                if int(c['start'], 16) == cave_addr:
                    cave_info = c
                    break
        if cave_info:
            cave_size = cave_info['total_size']
            cave_offset = cave_info.get('free_offset', 0)
        else:
            print("WARNING: Cave 0x%x not found in code_caves.json, using defaults" % cave_addr)
            cave_size = 442  # fallback
            cave_offset = 0
    else:
        cave_addr, cave_info = find_cave(annotations_dir, 64)
        if cave_addr is None:
            print("ERROR: No code cave with enough space found in code_caves.json")
            print("Use --cave to specify one manually")
            sys.exit(1)
        cave_size = cave_info['total_size']
        cave_offset = cave_info.get('free_offset', 0)
        print("Using cave at 0x%08x (%d bytes free)" % (
            cave_addr, cave_size - cave_offset))

    # Generate patches
    cave_name = cave_info.get('name', 'cave_%08x' % cave_addr) if cave_info else 'cave_%08x' % cave_addr

    result, new_offset, allocations = generate_patches_for_function(
        asm_path, cave_addr, cave_size, cave_offset,
        binary_path=binary_path, verbose=True)

    if result is None:
        print("\nNo patches generated.")
        sys.exit(0)

    # Add cave comment update so the Ghidra marker stays in sync
    result['cave_comments'] = [{
        'address': '0x%08x' % cave_addr,
        'comment': 'CODE_CAVE %s %d %d' % (cave_name, cave_size, new_offset),
    }]

    total_patches = len(result['groups'][0]['patches'])
    print("\nGenerated %d patches (%d MOVSD sites)" % (
        total_patches, total_patches // 2))
    print("Cave usage: %d -> %d bytes (of %d)" % (
        cave_offset, new_offset, cave_size))

    if not args.test and not args.apply:
        print("\nDry run complete. Use --test or --apply.")
        print(json.dumps(result, indent=2))
        sys.exit(0)

    # Write patches to temp file and run fix_byte_patches.py
    script_dir = os.path.dirname(os.path.abspath(__file__))
    fix_script = os.path.join(script_dir, 'fix_byte_patches.py')

    tmp_fd, tmp_path = tempfile.mkstemp(suffix='.json', prefix='movsd_cave_')
    try:
        with os.fdopen(tmp_fd, 'w') as f:
            json.dump(result, f, indent=2)

        cmd_args = [
            sys.executable, '-u', fix_script,
            os.path.abspath(args.project_path),
            args.project_name,
            args.program_name,
            '--patches-file', tmp_path,
        ]
        if args.test:
            cmd_args.append('--test')
        elif args.apply:
            cmd_args.append('--apply')

        print("\nRunning byte patcher...")
        import subprocess
        proc = subprocess.run(cmd_args)

        # Update code_caves.json if applied successfully
        if args.apply and proc.returncode == 0 and allocations:
            caves_path = os.path.join(annotations_dir, 'code_caves.json')
            if os.path.isfile(caves_path):
                with open(caves_path) as f:
                    caves_data = json.load(f)
                for cave in caves_data.get('caves', []):
                    if int(cave['start'], 16) == cave_addr:
                        cave['free_offset'] = new_offset
                        existing_allocs = cave.get('allocations', [])
                        existing_allocs.extend(allocations)
                        cave['allocations'] = existing_allocs
                        break
                with open(caves_path, 'w') as f:
                    json.dump(caves_data, f, indent=2)
                print("Updated code_caves.json (free_offset=%d)" % new_offset)

        sys.exit(proc.returncode)

    finally:
        try:
            os.unlink(tmp_path)
        except OSError:
            pass


if __name__ == '__main__':
    main()
