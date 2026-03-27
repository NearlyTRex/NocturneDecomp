#!/usr/bin/env python3
"""
detect_ecx_clobber.py

Detects code caves where ECX is used as a temp register for dword copies
but the code at the cave's return address expects ECX to hold a meaningful
value. This is a bug introduced by cave patches that expand REP MOVSD /
MOVSD into explicit MOV ECX,[ESI+N]; MOV [EDI+N],ECX sequences.

Scans all .asm files in the pseudocode directory for this pattern.

Usage:
    python3 detect_ecx_clobber.py [pseudocode_src_dir]
"""

import os
import re
import sys


# Pattern to match instruction lines in .asm files
RE_INSN = re.compile(
    r'^\s+'
    r'(\S.*?)'
    r'\s*;\s*'
    r'([0-9a-fA-F]+)'
    r'(?:\s*\|.*)?$'
)

# Pattern for labels
RE_LABEL = re.compile(r'^\s+;\s+Label:\s+(.+)$')

# Cave address ranges (non-main-code addresses)
CAVE_RANGES = [
    (0x00604000, 0x00610000),  # old cave section
    (0x0060c000, 0x00610000),  # old cave section (extended)
    (0x03fc0000, 0x04000000),  # new cave section
]

# ECX-as-temp pattern: MOV ECX, [ESI+N] or MOV ECX, dword ptr [ESI+N]
RE_ECX_LOAD_ESI = re.compile(
    r'^MOV\s+ECX\s*,\s*(?:dword\s+ptr\s+)?\[ESI', re.IGNORECASE)

# ECX store to EDI: MOV [EDI+N], ECX
RE_ECX_STORE_EDI = re.compile(
    r'^MOV\s+(?:dword\s+ptr\s+)?\[EDI', re.IGNORECASE)

# Instructions that USE ECX (read its value)
RE_ECX_USE = re.compile(
    r'^(?:PUSH\s+ECX|MOV\s+(?!ECX).*,\s*ECX|CMP\s+.*,?\s*ECX|TEST\s+.*ECX|'
    r'ADD\s+.*,\s*ECX|SUB\s+.*,\s*ECX|AND\s+.*,\s*ECX|OR\s+.*,\s*ECX|'
    r'XOR\s+(?!ECX\s*,\s*ECX).*,\s*ECX|SHL\s+.*,\s*CL|SHR\s+.*,\s*CL|'
    r'SAR\s+.*,\s*CL|IMUL\s+.*,\s*ECX|MUL\s+ECX|DIV\s+ECX|IDIV\s+ECX|'
    r'CALL\b)',
    re.IGNORECASE)

# Instructions that SET ECX (overwrite before use)
RE_ECX_SET = re.compile(
    r'^(?:MOV\s+ECX|LEA\s+ECX|POP\s+ECX|XOR\s+ECX\s*,\s*ECX|'
    r'MOVZX\s+ECX|MOVSX\s+ECX|INC\s+ECX|DEC\s+ECX|'
    r'ADD\s+ECX|SUB\s+ECX|AND\s+ECX|OR\s+ECX|NEG\s+ECX|NOT\s+ECX)',
    re.IGNORECASE)

# JMP with target address
RE_JMP_TARGET = re.compile(
    r'^JMP\s+(?:.*\s)?0x([0-9a-fA-F]+)', re.IGNORECASE)

# Any branch (for stopping the forward scan at the return site)
RE_BRANCH = re.compile(
    r'^(?:JMP|JZ|JNZ|JE|JNE|JL|JG|JLE|JGE|JA|JB|JAE|JBE|JC|JNC|'
    r'JS|JNS|JO|JNO|JP|JNP|RET|RETN)\b', re.IGNORECASE)


def is_cave_addr(addr):
    """Check if an address is in a known cave range."""
    for lo, hi in CAVE_RANGES:
        if lo <= addr < hi:
            return True
    return False


def parse_asm(asm_path):
    """Parse an .asm file into (address, instruction_text) list."""
    instructions = []
    with open(asm_path, 'r') as f:
        for line in f:
            m = RE_INSN.match(line)
            if m:
                instructions.append((int(m.group(2), 16), m.group(1).strip()))
    return instructions


def find_cave_jmps(instructions):
    """Find JMP instructions that go to cave addresses.

    Returns list of (jmp_idx, jmp_addr, cave_target).
    """
    results = []
    for i, (addr, text) in enumerate(instructions):
        m = RE_JMP_TARGET.match(text)
        if m:
            target = int(m.group(1), 16)
            if is_cave_addr(target) and not is_cave_addr(addr):
                results.append((i, addr, target))
    return results


def find_cave_return(instructions, cave_target):
    """Find the return JMP at the end of a cave block.

    Starting from cave_target, scan forward through cave instructions
    until we find a JMP back to non-cave code.

    Returns (return_target_addr, last_ecx_value_info) or None.
    """
    # Find the cave_target in instructions
    cave_start_idx = None
    for i, (addr, text) in enumerate(instructions):
        if addr == cave_target:
            cave_start_idx = i
            break

    if cave_start_idx is None:
        return None

    # Scan the cave block
    has_ecx_copy = False
    ecx_reloaded = False  # ECX set to a new value at the end
    last_ecx_set = None

    for i in range(cave_start_idx, len(instructions)):
        addr, text = instructions[i]

        # Stop if we leave cave address space
        if i > cave_start_idx and not is_cave_addr(addr):
            break

        # Check for ECX-as-temp dword copy pattern
        if RE_ECX_LOAD_ESI.match(text):
            has_ecx_copy = True
            ecx_reloaded = False  # clobbered again

        # Check if ECX is explicitly reloaded after the copies
        if RE_ECX_SET.match(text) and not RE_ECX_LOAD_ESI.match(text):
            ecx_reloaded = True
            last_ecx_set = text

        # Check for return JMP
        m = RE_JMP_TARGET.match(text)
        if m:
            target = int(m.group(1), 16)
            if not is_cave_addr(target):
                return {
                    'return_addr': target,
                    'has_ecx_copy': has_ecx_copy,
                    'ecx_reloaded': ecx_reloaded,
                    'last_ecx_set': last_ecx_set,
                    'cave_start': cave_target,
                    'cave_end': addr,
                }

    return None


def check_ecx_at_return(instructions, return_addr):
    """Check if ECX is used at/near the return address without being set first.

    Scans forward from return_addr for up to 5 instructions (or until a
    branch). Returns info about ECX usage.
    """
    # Find the return address in instructions
    ret_idx = None
    for i, (addr, text) in enumerate(instructions):
        if addr == return_addr:
            ret_idx = i
            break

    if ret_idx is None:
        return None

    # Scan forward (up to 5 instructions or first branch)
    for i in range(ret_idx, min(ret_idx + 5, len(instructions))):
        addr, text = instructions[i]

        # Skip if we entered cave space
        if is_cave_addr(addr):
            break

        # If ECX is set before use, no bug
        if RE_ECX_SET.match(text):
            return None

        # If ECX is used, potential bug
        if RE_ECX_USE.match(text):
            return {
                'addr': addr,
                'instruction': text,
                'distance': i - ret_idx,
            }

        # Stop at branches
        if RE_BRANCH.match(text) and i > ret_idx:
            break

    return None


def scan_function(asm_path):
    """Scan a single function for ECX clobber bugs.

    Returns list of bug reports.
    """
    instructions = parse_asm(asm_path)
    if len(instructions) < 3:
        return []

    func_name = os.path.basename(asm_path).replace('.asm', '')

    # Find all JMPs to cave addresses
    cave_jmps = find_cave_jmps(instructions)
    if not cave_jmps:
        return []

    bugs = []
    for jmp_idx, jmp_addr, cave_target in cave_jmps:
        # Analyze the cave block
        cave_info = find_cave_return(instructions, cave_target)
        if cave_info is None:
            continue

        if not cave_info['has_ecx_copy']:
            continue  # Cave doesn't use ECX as temp, no issue

        if cave_info['ecx_reloaded']:
            continue  # ECX is properly set before return

        # Check if return site uses ECX
        ecx_usage = check_ecx_at_return(instructions, cave_info['return_addr'])
        if ecx_usage is None:
            continue  # ECX not used at return site

        bugs.append({
            'func_name': func_name,
            'asm_path': asm_path,
            'jmp_addr': jmp_addr,
            'cave_start': cave_info['cave_start'],
            'cave_end': cave_info['cave_end'],
            'return_addr': cave_info['return_addr'],
            'ecx_use_addr': ecx_usage['addr'],
            'ecx_use_insn': ecx_usage['instruction'],
            'ecx_use_distance': ecx_usage['distance'],
        })

    return bugs


def main():
    if len(sys.argv) > 1:
        src_dir = sys.argv[1]
    else:
        src_dir = os.path.join('annotations', 'nocedit.exe', 'pseudocode', 'src')

    if not os.path.isdir(src_dir):
        print("ERROR: Directory not found: %s" % src_dir)
        sys.exit(1)

    # Find all .asm files
    asm_files = []
    for root, dirs, files in os.walk(src_dir):
        for f in files:
            if f.endswith('.asm'):
                asm_files.append(os.path.join(root, f))

    print("Scanning %d .asm files for ECX clobber bugs..." % len(asm_files))
    print()

    all_bugs = []
    for asm_path in sorted(asm_files):
        bugs = scan_function(asm_path)
        all_bugs.extend(bugs)

    if not all_bugs:
        print("No ECX clobber bugs found.")
        return

    print("=" * 80)
    print("ECX CLOBBER BUGS FOUND: %d" % len(all_bugs))
    print("=" * 80)
    print()

    # Group by function
    by_func = {}
    for bug in all_bugs:
        name = bug['func_name']
        if name not in by_func:
            by_func[name] = []
        by_func[name].append(bug)

    for func_name, bugs in sorted(by_func.items()):
        print("  %s" % func_name)
        for bug in bugs:
            print("    Cave: 0x%08x - 0x%08x" % (bug['cave_start'], bug['cave_end']))
            print("    JMP from: 0x%08x" % bug['jmp_addr'])
            print("    Returns to: 0x%08x" % bug['return_addr'])
            print("    ECX used at: 0x%08x  %s  (+%d insns from return)" % (
                bug['ecx_use_addr'], bug['ecx_use_insn'], bug['ecx_use_distance']))
            print()

    # Summary by cave range
    old_caves = [b for b in all_bugs if 0x00600000 <= b['cave_start'] < 0x00700000]
    new_caves = [b for b in all_bugs if 0x03fc0000 <= b['cave_start'] < 0x04000000]
    print("-" * 80)
    print("Summary:")
    print("  Old caves (0x0060xxxx): %d bugs" % len(old_caves))
    print("  New caves (0x03fcxxxx): %d bugs" % len(new_caves))


if __name__ == '__main__':
    main()
