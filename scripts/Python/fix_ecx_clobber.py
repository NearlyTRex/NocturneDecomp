#!/usr/bin/env python3
"""
fix_ecx_clobber.py

Fixes code caves where ECX is used as a dword copy temp register but the
return site expects ECX = 0 (the post-REP-MOVSD state). For each buggy
cave, redirects its return JMP through a tiny fixup that does:

    XOR ECX, ECX    ; restore expected post-MOVSD ECX = 0
    JMP original_return

This is a trampoline: old_cave JMP -> fixup -> original return addr.

Usage:
    # Detect and show all fixes (dry run)
    python3 fix_ecx_clobber.py <project> <name> <program>

    # Apply fixes
    python3 fix_ecx_clobber.py <project> <name> <program> --apply

    # Test mode (apply + rollback with decompile diff)
    python3 fix_ecx_clobber.py <project> <name> <program> --test
"""

import argparse
import json
import os
import re
import struct
import sys
import tempfile


# ---------------------------------------------------------------------------
# ASM parsing (same patterns as detect_ecx_clobber.py)
# ---------------------------------------------------------------------------

RE_INSN = re.compile(
    r'^\s+'
    r'(\S.*?)'
    r'\s*;\s*'
    r'([0-9a-fA-F]+)'
    r'(?:\s*\|.*)?$'
)

CAVE_RANGES = [
    (0x00604000, 0x00610000),
    (0x0060c000, 0x00610000),
    (0x03fc0000, 0x04000000),
]

RE_ECX_LOAD_ESI = re.compile(
    r'^MOV\s+ECX\s*,\s*(?:dword\s+ptr\s+)?\[ESI', re.IGNORECASE)

RE_ECX_SET = re.compile(
    r'^(?:MOV\s+ECX|LEA\s+ECX|POP\s+ECX|XOR\s+ECX\s*,\s*ECX|'
    r'MOVZX\s+ECX|MOVSX\s+ECX|INC\s+ECX|DEC\s+ECX|'
    r'ADD\s+ECX|SUB\s+ECX|AND\s+ECX|OR\s+ECX|NEG\s+ECX|NOT\s+ECX)',
    re.IGNORECASE)

RE_ECX_USE = re.compile(
    r'^(?:PUSH\s+ECX|MOV\s+(?!ECX).*,\s*ECX|CMP\s+.*,?\s*ECX|TEST\s+.*ECX|'
    r'ADD\s+.*,\s*ECX|SUB\s+.*,\s*ECX|AND\s+.*,\s*ECX|OR\s+.*,\s*ECX|'
    r'XOR\s+(?!ECX\s*,\s*ECX).*,\s*ECX|SHL\s+.*,\s*CL|SHR\s+.*,\s*CL|'
    r'SAR\s+.*,\s*CL|IMUL\s+.*,\s*ECX|MUL\s+ECX|DIV\s+ECX|IDIV\s+ECX|'
    r'CALL\b)',
    re.IGNORECASE)

RE_BRANCH = re.compile(
    r'^(?:JMP|JZ|JNZ|JE|JNE|JL|JG|JLE|JGE|JA|JB|JAE|JBE|JC|JNC|'
    r'JS|JNS|JO|JNO|JP|JNP|RET|RETN)\b', re.IGNORECASE)

RE_JMP_TARGET = re.compile(
    r'^JMP\s+(?:.*\s)?0x([0-9a-fA-F]+)', re.IGNORECASE)


def is_cave_addr(addr):
    for lo, hi in CAVE_RANGES:
        if lo <= addr < hi:
            return True
    return False


def parse_asm(asm_path):
    instructions = []
    with open(asm_path, 'r') as f:
        for line in f:
            m = RE_INSN.match(line)
            if m:
                instructions.append((int(m.group(2), 16), m.group(1).strip()))
    return instructions


def find_cave_bugs(instructions):
    """Find all ECX clobber bugs in a function's caves.

    Returns list of dicts with cave info and the JMP instruction to patch.
    """
    bugs = []

    for i, (addr, text) in enumerate(instructions):
        m = RE_JMP_TARGET.match(text)
        if not m:
            continue
        target = int(m.group(1), 16)
        if not is_cave_addr(target) or is_cave_addr(addr):
            continue

        # Found a JMP to cave from main code. Analyze the cave.
        cave_start_idx = None
        for j, (a, _) in enumerate(instructions):
            if a == target:
                cave_start_idx = j
                break
        if cave_start_idx is None:
            continue

        # Scan cave block
        has_ecx_copy = False
        ecx_reloaded = False
        cave_jmp_idx = None
        cave_return_addr = None

        # Track whether ECX was set to a count BEFORE the first copy
        # (indicates REP MOVSD cave) vs copies starting immediately
        # (indicates bare MOVSD cave where ECX should pass through)
        ecx_setup_before_copy = False

        for j in range(cave_start_idx, len(instructions)):
            a, t = instructions[j]
            if j > cave_start_idx and not is_cave_addr(a):
                break

            if RE_ECX_LOAD_ESI.match(t):
                has_ecx_copy = True
                ecx_reloaded = False
            elif RE_ECX_SET.match(t) and not has_ecx_copy:
                # ECX set BEFORE any copy → REP MOVSD count setup
                ecx_setup_before_copy = True
            elif RE_ECX_SET.match(t) and has_ecx_copy:
                # ECX set AFTER copies → intentional post-copy value
                ecx_reloaded = True

            jm = RE_JMP_TARGET.match(t)
            if jm:
                rt = int(jm.group(1), 16)
                if not is_cave_addr(rt):
                    cave_jmp_idx = j
                    cave_return_addr = rt
                    break

        if not has_ecx_copy or ecx_reloaded or cave_jmp_idx is None:
            continue

        # Check if return site uses ECX
        ret_idx = None
        for j, (a, _) in enumerate(instructions):
            if a == cave_return_addr:
                ret_idx = j
                break
        if ret_idx is None:
            continue

        ecx_needed = False
        for j in range(ret_idx, min(ret_idx + 5, len(instructions))):
            a, t = instructions[j]
            if is_cave_addr(a):
                break
            if RE_ECX_SET.match(t):
                break
            if RE_ECX_USE.match(t):
                ecx_needed = True
                break
            if RE_BRANCH.match(t) and j > ret_idx:
                break

        if not ecx_needed:
            continue

        # Determine fix type:
        # - REP MOVSD cave (has ECX count setup): XOR ECX,ECX
        # - Bare MOVSD cave (no ECX setup): PUSH/POP ECX to preserve
        is_rep_movsd = ecx_setup_before_copy
        fix_type = 'xor_ecx' if is_rep_movsd else 'push_pop_ecx'

        cave_jmp_addr = instructions[cave_jmp_idx][0]
        bugs.append({
            'main_jmp_addr': addr,
            'cave_start': target,
            'cave_jmp_addr': cave_jmp_addr,
            'cave_return_addr': cave_return_addr,
            'fix_type': fix_type,
        })

    return bugs


def generate_fixup_patches(all_bugs, cave_addr, cave_offset, cave_size):
    """Generate fixup patches for all ECX clobber bugs.

    Two fix types:
    - xor_ecx (REP MOVSD caves): redirect cave return JMP through
      XOR ECX,ECX + JMP original_return (7 bytes)
    - push_pop_ecx (bare MOVSD caves): wrap the cave with
      PUSH ECX before + POP ECX after (pre-fixup 6 bytes + post-fixup 6 bytes)

    Returns (patches_list, new_cave_offset, allocations).
    """
    patches = []
    allocations = []
    offset = cave_offset

    for bug in all_bugs:
        fix_type = bug.get('fix_type', 'xor_ecx')
        patch_name = 'ecx_fix_%08x' % bug['cave_jmp_addr']

        if fix_type == 'xor_ecx':
            # REP MOVSD: redirect cave return JMP through XOR ECX,ECX fixup
            fixup_addr = cave_addr + offset

            # Fixup: XOR ECX,ECX (2 bytes) + JMP return (5 bytes) = 7 bytes
            xor_ecx = b'\x31\xc9'
            jmp_rel = bug['cave_return_addr'] - (fixup_addr + 2 + 5)
            jmp_bytes = b'\xe9' + struct.pack('<i', jmp_rel)
            fixup_code = xor_ecx + jmp_bytes

            if offset + len(fixup_code) > cave_size:
                print("WARNING: cave full, cannot create fixup for 0x%08x" % bug['cave_jmp_addr'])
                continue

            # Rewrite old cave's return JMP to point to fixup
            old_jmp_addr = bug['cave_jmp_addr']
            old_jmp_rel = bug['cave_return_addr'] - (old_jmp_addr + 5)
            old_jmp_bytes = b'\xe9' + struct.pack('<i', old_jmp_rel)
            new_jmp_rel = fixup_addr - (old_jmp_addr + 5)
            new_jmp_bytes = b'\xe9' + struct.pack('<i', new_jmp_rel)

            patches.append({
                'name': '%s_redirect' % patch_name,
                'address': '0x%08x' % old_jmp_addr,
                'original': old_jmp_bytes.hex(),
                'patched': new_jmp_bytes.hex(),
                'description': 'Redirect cave JMP through XOR ECX fixup at 0x%x' % fixup_addr,
            })
            patches.append({
                'name': '%s_fixup' % patch_name,
                'address': '0x%08x' % fixup_addr,
                'original': 'cc' * len(fixup_code),
                'patched': fixup_code.hex(),
                'description': 'XOR ECX,ECX + JMP 0x%x (REP MOVSD ECX fix)' % bug['cave_return_addr'],
            })
            allocations.append({
                'name': patch_name,
                'offset': offset,
                'size': len(fixup_code),
                'description': 'ECX clobber fixup (xor) for cave at 0x%08x' % bug['cave_start'],
                'used_by': ['0x%08x' % bug['cave_jmp_addr']],
            })
            offset += len(fixup_code)

        elif fix_type == 'push_pop_ecx':
            # Bare MOVSD: wrap the cave with PUSH ECX before, POP ECX after.
            # Pre-fixup: PUSH ECX (1 byte) + JMP old_cave (5 bytes) = 6 bytes
            # Post-fixup: POP ECX (1 byte) + JMP return (5 bytes) = 6 bytes
            pre_addr = cave_addr + offset
            post_addr = cave_addr + offset + 6

            needed = 12
            if offset + needed > cave_size:
                print("WARNING: cave full, cannot create fixup for 0x%08x" % bug['cave_jmp_addr'])
                continue

            # Pre-fixup: PUSH ECX + JMP old_cave_start
            push_ecx = b'\x51'  # PUSH ECX
            jmp_to_cave = b'\xe9' + struct.pack('<i', bug['cave_start'] - (pre_addr + 1 + 5))
            pre_code = push_ecx + jmp_to_cave

            # Post-fixup: POP ECX + JMP original_return
            pop_ecx = b'\x59'  # POP ECX
            jmp_to_return = b'\xe9' + struct.pack('<i', bug['cave_return_addr'] - (post_addr + 1 + 5))
            post_code = pop_ecx + jmp_to_return

            # Redirect main code's JMP to pre-fixup (instead of old cave)
            main_jmp_addr = bug['main_jmp_addr']
            old_main_jmp_rel = bug['cave_start'] - (main_jmp_addr + 5)
            old_main_jmp_bytes = b'\xe9' + struct.pack('<i', old_main_jmp_rel)
            new_main_jmp_rel = pre_addr - (main_jmp_addr + 5)
            new_main_jmp_bytes = b'\xe9' + struct.pack('<i', new_main_jmp_rel)

            # Redirect old cave's return JMP to post-fixup
            old_cave_jmp_addr = bug['cave_jmp_addr']
            old_cave_jmp_rel = bug['cave_return_addr'] - (old_cave_jmp_addr + 5)
            old_cave_jmp_bytes = b'\xe9' + struct.pack('<i', old_cave_jmp_rel)
            new_cave_jmp_rel = post_addr - (old_cave_jmp_addr + 5)
            new_cave_jmp_bytes = b'\xe9' + struct.pack('<i', new_cave_jmp_rel)

            # Patch 1: redirect main code JMP to pre-fixup
            patches.append({
                'name': '%s_main_redirect' % patch_name,
                'address': '0x%08x' % main_jmp_addr,
                'original': old_main_jmp_bytes.hex(),
                'patched': new_main_jmp_bytes.hex(),
                'description': 'Redirect main JMP through PUSH ECX pre-fixup at 0x%x' % pre_addr,
            })
            # Patch 2: pre-fixup cave (PUSH ECX + JMP old cave)
            patches.append({
                'name': '%s_pre_fixup' % patch_name,
                'address': '0x%08x' % pre_addr,
                'original': 'cc' * len(pre_code),
                'patched': pre_code.hex(),
                'description': 'PUSH ECX + JMP 0x%x (bare MOVSD ECX preserve)' % bug['cave_start'],
            })
            # Patch 3: redirect old cave's return JMP to post-fixup
            patches.append({
                'name': '%s_cave_redirect' % patch_name,
                'address': '0x%08x' % old_cave_jmp_addr,
                'original': old_cave_jmp_bytes.hex(),
                'patched': new_cave_jmp_bytes.hex(),
                'description': 'Redirect cave return through POP ECX fixup at 0x%x' % post_addr,
            })
            # Patch 4: post-fixup cave (POP ECX + JMP return)
            patches.append({
                'name': '%s_post_fixup' % patch_name,
                'address': '0x%08x' % post_addr,
                'original': 'cc' * len(post_code),
                'patched': post_code.hex(),
                'description': 'POP ECX + JMP 0x%x (bare MOVSD ECX restore)' % bug['cave_return_addr'],
            })
            allocations.append({
                'name': patch_name,
                'offset': offset,
                'size': needed,
                'description': 'ECX clobber fixup (push/pop) for cave at 0x%08x' % bug['cave_start'],
                'used_by': ['0x%08x' % bug['cave_jmp_addr']],
            })
            offset += needed

        continue  # next bug

    return patches, offset, allocations


def main():
    parser = argparse.ArgumentParser(
        description="Fix ECX clobber bugs in old code caves")
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply patches permanently")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: apply and roll back")
    parser.add_argument("--pseudocode-src", type=str, default=None,
                        help="Path to pseudocode/src directory")

    args = parser.parse_args()

    if args.pseudocode_src:
        src_dir = args.pseudocode_src
    else:
        src_dir = os.path.join('annotations', args.program_name, 'pseudocode', 'src')

    annotations_dir = os.path.join('annotations', args.program_name)

    if not os.path.isdir(src_dir):
        print("ERROR: Directory not found: %s" % src_dir)
        sys.exit(1)

    # Scan all .asm files
    asm_files = []
    for root, dirs, files in os.walk(src_dir):
        for f in files:
            if f.endswith('.asm'):
                asm_files.append(os.path.join(root, f))

    print("Scanning %d .asm files for ECX clobber bugs..." % len(asm_files))

    all_bugs = []
    skipped_no_artifacts = 0
    skipped_push_pop = 0
    for asm_path in sorted(asm_files):
        instructions = parse_asm(asm_path)
        bugs = find_cave_bugs(instructions)
        if not bugs:
            continue

        func_name = os.path.basename(asm_path).replace('.asm', '')

        # Check if function has bVar_mul artifacts — skip if not
        has_bvar = False
        for ext in ('.cpp', '.c'):
            cpp_path = asm_path.replace('.asm', ext)
            if os.path.isfile(cpp_path):
                with open(cpp_path, 'r') as f:
                    has_bvar = bool(re.search(r'\bbVar\w*\s*\*\s*-', f.read()))
                break
        if not has_bvar:
            skipped_no_artifacts += len(bugs)
            continue

        for bug in bugs:
            bug['func_name'] = func_name
            bug['asm_path'] = asm_path

            # Only apply xor_ecx fixes — push_pop_ecx breaks ESP-relative
            # accesses in the cave. Bare MOVSD caves without bVar_mul artifacts
            # are already filtered above; any remaining push_pop cases would
            # need manual review.
            if bug.get('fix_type') == 'push_pop_ecx':
                skipped_push_pop += 1
                continue

            all_bugs.append(bug)

    if skipped_no_artifacts:
        print("Skipped %d sites with no bVar_mul artifacts" % skipped_no_artifacts)
    if skipped_push_pop:
        print("Skipped %d bare MOVSD sites (push/pop would break ESP)" % skipped_push_pop)

    if not all_bugs:
        print("No ECX clobber bugs found.")
        sys.exit(0)

    print("Found %d ECX clobber bugs across %d functions" % (
        len(all_bugs),
        len(set(b['func_name'] for b in all_bugs))))

    # Find cave space
    caves_path = os.path.join(annotations_dir, 'code_caves.json')
    if not os.path.isfile(caves_path):
        print("ERROR: code_caves.json not found")
        sys.exit(1)

    with open(caves_path) as f:
        caves_data = json.load(f)

    # Find best cave
    best_addr = None
    best_cave = None
    best_free = 0
    for cave in caves_data.get('caves', []):
        total = cave.get('total_size', 0)
        used = cave.get('free_offset', 0)
        free = total - used
        needed = len(all_bugs) * 7  # 7 bytes per fixup
        if free >= needed and free > best_free:
            best_addr = int(cave['start'], 16)
            best_cave = cave
            best_free = free

    if best_addr is None:
        print("ERROR: No cave with enough space (%d bytes needed)" % (len(all_bugs) * 7))
        sys.exit(1)

    cave_addr = best_addr
    cave_size = best_cave['total_size']
    cave_offset = best_cave.get('free_offset', 0)
    print("Using cave at 0x%08x (%d bytes free, need %d)" % (
        cave_addr, cave_size - cave_offset, len(all_bugs) * 7))

    # Generate patches
    patches, new_offset, allocations = generate_fixup_patches(
        all_bugs, cave_addr, cave_offset, cave_size)

    if not patches:
        print("No patches generated.")
        sys.exit(0)

    # Build function body extensions for decompiler
    # Group fixups by function to extend each function's body
    func_entry_map = {}
    for bug in all_bugs:
        func_name = bug['func_name']
        m = re.search(r'FUN_([0-9a-fA-F]+)', func_name)
        if m:
            func_entry = int(m.group(1), 16)
            if func_entry not in func_entry_map:
                func_entry_map[func_entry] = []
            # Find the matching allocation
            patch_name = 'ecx_fix_%08x' % bug['cave_jmp_addr']
            for alloc in allocations:
                if alloc['name'] == patch_name:
                    func_entry_map[func_entry].append(alloc)

    body_extensions = []
    for func_entry, allocs in func_entry_map.items():
        for alloc in allocs:
            body_extensions.append({
                'function': '0x%08x' % func_entry,
                'cave_start': '0x%08x' % (cave_addr + alloc['offset']),
                'cave_size': alloc['size'],
            })

    cave_name = best_cave.get('name', 'cave_%08x' % cave_addr)
    result = {
        'groups': [{
            'name': 'ecx_clobber_fixes',
            'description': 'Fix ECX clobber bugs in old code caves',
            'patches': patches,
        }],
        'function_body_extensions': body_extensions,
        'cave_comments': [{
            'address': '0x%08x' % cave_addr,
            'comment': 'CODE_CAVE %s %d %d' % (cave_name, cave_size, new_offset),
        }],
    }

    print("\nGenerated %d patches (%d fixups)" % (len(patches), len(patches) // 2))
    print("Cave usage: %d -> %d bytes (of %d)" % (
        cave_offset, new_offset, cave_size))

    if not args.test and not args.apply:
        print("\nDry run complete. Use --test or --apply.")
        # Print summary
        for bug in all_bugs:
            print("  0x%08x: cave 0x%08x -> fixup -> 0x%08x  (%s)" % (
                bug['cave_jmp_addr'], bug['cave_start'],
                bug['cave_return_addr'], bug['func_name']))
        sys.exit(0)

    # Write patches and run fix_byte_patches.py
    script_dir = os.path.dirname(os.path.abspath(__file__))
    fix_script = os.path.join(script_dir, 'fix_byte_patches.py')

    tmp_fd, tmp_path = tempfile.mkstemp(suffix='.json', prefix='ecx_fix_')
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
