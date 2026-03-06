#!/usr/bin/env python3
"""Compute ADJ pointer type offsets from ctor/dtor assembly files.

Analyzes assembly instruction chains in constructor and destructor functions
to determine at what offsets sub-object constructors/destructors are called.
These offsets are used to generate adjusted pointer types (e.g., CMyClass_ptr_344).

The algorithm tracks register state (offset from this_ptr) through the asm,
following the ctor/dtor call chain where each call returns its this_ptr in EAX,
and ADD/SUB/LEA instructions adjust EAX to point to the next sub-object.

Usage:
    python3 compute_adj_offsets.py [base_dir]
        base_dir defaults to annotations/nocedit.exe/pseudocode/src
"""

import re
import os
import sys
import glob
from collections import defaultdict

# Markers that identify sub-object construction/destruction calls
SUBOBJ_MARKERS = ['_ctor_', '_dtor_', '__arrinit', '_arrdtor_']

# Callee-saved registers (preserved across calls per cdecl)
CALLEE_SAVED = {'EBX', 'ESI', 'EDI', 'EBP'}

# All general-purpose registers we track
ALL_REGS = {'EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI', 'EBP'}


def signed32(val):
    """Interpret a 32-bit unsigned value as signed."""
    return val - 0x100000000 if val >= 0x80000000 else val


def parse_hex(s):
    """Parse a hex string (with or without 0x prefix)."""
    return int(s, 16)


def is_subobj_call(name):
    """Check if a CALL target is a sub-object ctor/dtor/array init."""
    return any(m in name for m in SUBOBJ_MARKERS)


def extract_info(filepath):
    """Extract class name and function type from asm filename."""
    basename = os.path.basename(filepath)
    m = re.match(r'(.+?)_(ctor|dtor)_FUN_[0-9a-fA-F]+\.asm', basename)
    if m:
        return m.group(1), m.group(2)
    return None, None


def parse_instructions(filepath):
    """Parse an asm file into a list of (mnemonic, operands, address) tuples."""
    instructions = []
    with open(filepath) as f:
        for line in f:
            # Instructions with operands: "    MOV EAX,dword ptr [ESP + 0x4]  ; 004d1720"
            m = re.match(r'    (\w[\w.]*)\s+(.*?)\s*;\s*([0-9a-fA-F]+)', line)
            if m:
                mnemonic = m.group(1).upper().split('.')[0]  # Strip suffixes like .REP
                instructions.append((mnemonic, m.group(2).strip(), m.group(3)))
                continue
            # Instructions without operands: "    RET  ; 004d1789"
            m = re.match(r'    (\w+)\s*;\s*([0-9a-fA-F]+)', line)
            if m:
                instructions.append((m.group(1).upper(), '', m.group(2)))
    return instructions


def compute_this_ptr_offsets(instructions):
    """Determine where this_ptr lives on the stack.

    Returns a dict mapping access patterns to True if they reference this_ptr.
    Handles both ESP-relative and EBP-frame-relative addressing.
    """
    # Count initial PUSH register saves
    push_saves = 0
    for mn, ops, _ in instructions:
        if mn == 'PUSH' and ops.strip().upper() in ALL_REGS:
            push_saves += 1
        else:
            break

    # Check for SUB ESP allocation and MOV EBP,ESP frame pointer
    has_frame = False
    frame_push_count = 0
    sub_esp = 0

    for i, (mn, ops, _) in enumerate(instructions):
        if mn == 'MOV' and ops.strip() == 'EBP,ESP':
            has_frame = True
            # Count pushes before the MOV EBP,ESP
            frame_push_count = sum(
                1 for mn2, ops2, _ in instructions[:i]
                if mn2 == 'PUSH' and ops2.strip().upper() in ALL_REGS
            )
            break
        if mn == 'SUB' and ops.strip().startswith('ESP,'):
            m = re.match(r'ESP,(0x[0-9a-fA-F]+)', ops.strip())
            if m:
                sub_esp = parse_hex(m.group(1))

    # Also check for AND ESP alignment (e.g., AND ESP,0xFFFFFFF8)
    # This makes ESP-relative this_ptr detection unreliable
    has_and_esp = any(
        mn == 'AND' and ops.strip().startswith('ESP,')
        for mn, ops, _ in instructions
    )

    # ESP-relative: this_ptr at [ESP + 0x4 + push_saves*4 + sub_esp]
    esp_offset = 0x4 + push_saves * 4 + sub_esp

    # EBP-relative: this_ptr at [EBP + 0x4 + frame_push_count*4]
    # (EBP was set after frame_push_count pushes, so return addr is at [EBP+4+...])
    # Actually: after PUSH EBX; PUSH EBP; MOV EBP,ESP:
    #   [EBP+0] = saved EBP, [EBP+4] = saved EBX (wait, no)
    # The stack at MOV EBP,ESP point: pushes have decremented ESP
    # Return address is at [EBP + frame_push_count * 4 + 4]... no.
    # Let me think: before any pushes, [ESP] = return addr, [ESP+4] = this_ptr
    # After N pushes: [ESP + N*4] = return addr, [ESP + N*4 + 4] = this_ptr
    # MOV EBP,ESP captures current ESP, so this_ptr = [EBP + N*4 + 4]
    # But wait, if MOV EBP,ESP is after the Nth push, then at that point:
    #   EBP = ESP (after N pushes)
    #   [EBP + 0] = last pushed value
    #   [EBP + 4] = second-to-last pushed value
    #   ...
    #   [EBP + N*4] = return address
    #   [EBP + N*4 + 4] = this_ptr (first arg)
    # No wait, that's wrong too. Let's be precise:
    # Before function entry: [ESP] = return_addr, [ESP+4] = arg1 (this_ptr)
    # PUSH EBX -> ESP -= 4: [ESP] = EBX, [ESP+4] = ret, [ESP+8] = this_ptr
    # PUSH EBP -> ESP -= 4: [ESP] = EBP, [ESP+4] = EBX, [ESP+8] = ret, [ESP+C] = this_ptr
    # MOV EBP, ESP: EBP = ESP
    # So this_ptr = [EBP + 0xC] = [EBP + frame_push_count*4 + 4]
    # Wait: frame_push_count = 2 (EBX and EBP), so 2*4 + 4 = 0xC. Correct!
    ebp_offset = frame_push_count * 4 + 4 if has_frame else None

    return {
        'esp_offset': esp_offset,
        'ebp_offset': ebp_offset,
        'has_frame': has_frame,
        'has_and_esp': has_and_esp,
        'push_saves': push_saves,
    }


def analyze_asm(filepath):
    """Analyze an asm file to find sub-object ctor/dtor calls and their offsets.

    Returns list of (call_name, offset_from_this) tuples.
    offset_from_this is an int, or None if the offset couldn't be determined.
    """
    instructions = parse_instructions(filepath)
    if not instructions:
        return []

    stack_info = compute_this_ptr_offsets(instructions)
    esp_off = stack_info['esp_offset']
    ebp_off = stack_info['ebp_offset']
    has_frame = stack_info['has_frame']
    has_and_esp = stack_info['has_and_esp']

    # Register state: maps register name -> offset from this_ptr (or None)
    regs = {r: None for r in ALL_REGS}

    # Push stack: list of offset values (int or None)
    push_stack = []

    # Track dynamic ESP adjustment from function entry (positive = ESP decreased)
    # this_ptr is always at [ESP_entry + 0x4], so at any point it's at
    # [ESP_current + 0x4 + esp_adjust]
    esp_adjust = 0

    results = []

    for i, (mn, ops, addr) in enumerate(instructions):
        ops_stripped = ops.strip()
        ops_upper = ops_stripped.upper()

        # ---- Detect this_ptr loads ----
        # this_ptr is at [ESP + 0x4 + esp_adjust] at any point in the function.
        # With AND ESP alignment, ESP-relative detection is unreliable.

        # MOV reg, dword ptr [ESP + offset]
        m = re.match(r'(\w+),dword ptr \[ESP \+ (0x[0-9a-fA-F]+)\]', ops_stripped)
        if mn == 'MOV' and m:
            reg = m.group(1).upper()
            off = parse_hex(m.group(2))
            if reg in regs and not has_and_esp:
                if off == 0x4 + esp_adjust:
                    regs[reg] = 0

        # MOV reg, dword ptr [EBP + offset]
        if has_frame:
            m = re.match(r'(\w+),dword ptr \[EBP \+ (0x[0-9a-fA-F]+)\]', ops_stripped)
            if mn == 'MOV' and m:
                reg = m.group(1).upper()
                off = parse_hex(m.group(2))
                if reg in regs and ebp_off is not None and off == ebp_off:
                    regs[reg] = 0

        # ---- MOV reg, reg ----
        m = re.match(r'(\w+),(\w+)$', ops_stripped)
        if mn == 'MOV' and m:
            dst, src = m.group(1).upper(), m.group(2).upper()
            if dst in regs and src in regs:
                regs[dst] = regs[src]

        # ---- ADD reg, imm ----
        m = re.match(r'(\w+),(0x[0-9a-fA-F]+)$', ops_stripped)
        if mn == 'ADD' and m:
            reg = m.group(1).upper()
            val = signed32(parse_hex(m.group(2)))
            if reg in regs and reg != 'ESP' and regs[reg] is not None:
                regs[reg] += val
            # ADD ESP cleans push stack and adjusts esp tracking
            if reg == 'ESP':
                n = abs(val) // 4
                if val > 0 and len(push_stack) >= n:
                    push_stack = push_stack[:-n]
                esp_adjust -= val  # ADD ESP increases ESP (decreases adjust)

        # ---- SUB reg, imm ----
        if mn == 'SUB':
            m_sub = re.match(r'(\w+),(0x[0-9a-fA-F]+)$', ops_stripped)
            if m_sub:
                reg = m_sub.group(1).upper()
                val = parse_hex(m_sub.group(2))
                if reg == 'ESP':
                    esp_adjust += val  # SUB ESP decreases ESP (increases adjust)
                elif reg in regs and regs[reg] is not None:
                    regs[reg] -= val

        # ---- LEA reg, [reg2 + offset] ----
        m = re.match(r'(\w+),\[(\w+)\s*\+\s*(0x[0-9a-fA-F]+)\]', ops_stripped)
        if mn == 'LEA' and m:
            dst = m.group(1).upper()
            src = m.group(2).upper()
            val = signed32(parse_hex(m.group(3)))
            if dst in regs and src in regs and regs[src] is not None:
                regs[dst] = regs[src] + val

        # LEA reg, [reg2] (no offset)
        m = re.match(r'(\w+),\[(\w+)\]$', ops_stripped)
        if mn == 'LEA' and m:
            dst = m.group(1).upper()
            src = m.group(2).upper()
            if dst in regs and src in regs:
                regs[dst] = regs[src]

        # ---- PUSH ----
        if mn == 'PUSH':
            tok = ops_stripped.upper()
            if tok in regs:
                push_stack.append(regs[tok])
            elif re.match(r'0x[0-9a-fA-F]+$', ops_stripped):
                push_stack.append(('imm', parse_hex(ops_stripped)))
            else:
                push_stack.append(None)
            esp_adjust += 4

        # ---- POP ----
        if mn == 'POP':
            if push_stack:
                push_stack.pop()
            esp_adjust -= 4

        # ---- CALL ----
        if mn == 'CALL':
            call_target = ops_stripped.split(';')[0].strip()

            # __STK is a watcom stack probe — it consumes a PUSH arg and
            # restores ESP internally, so undo the push tracking.
            if '__STK' in call_target:
                if push_stack:
                    push_stack.pop()
                    esp_adjust -= 4

            elif is_subobj_call(call_target):
                # Determine which push stack entry is the this_ptr/array argument.
                # cdecl pushes args RIGHT-TO-LEFT, so first param is the LAST push.
                #   ctor(this_ptr)                -> 1 arg,  this_ptr at -1
                #   dtor(this_ptr, flags)         -> 2 args, this_ptr at -1 (pushed last)
                #   arrdtor(ptr, flags)           -> 2 args, ptr at -1 (pushed last)
                #   __arrinit(ptr, count, typeinfo) -> 3 args, ptr at -1 (pushed last)
                arg_idx = -1

                arg_offset = None
                if len(push_stack) >= abs(arg_idx):
                    val = push_stack[arg_idx]
                    if isinstance(val, int):
                        arg_offset = val

                results.append((call_target, arg_offset))

                # After call, EAX = returned pointer (ctors/dtors return their this_ptr)
                if arg_offset is not None:
                    regs['EAX'] = arg_offset
                else:
                    regs['EAX'] = None
                # ECX, EDX are caller-saved (clobbered)
                regs['ECX'] = None
                regs['EDX'] = None
            else:
                # Non-subobject call: caller-saved regs are clobbered
                regs['EAX'] = None
                regs['ECX'] = None
                regs['EDX'] = None

    return results


def short_call_name(call_target):
    """Shorten a call target for display."""
    # "core_actor.cpp_CDemonActor_ctor_FUN_004088b0" -> "CDemonActor_ctor"
    if '_FUN_' in call_target:
        prefix = call_target.split('_FUN_')[0]
        # Get last two meaningful parts (ClassName_ctor or ClassName_dtor)
        parts = prefix.split('_')
        # Find the ctor/dtor/arrinit/arrdtor part
        for j, p in enumerate(parts):
            if p in ('ctor', 'dtor', 'arrdtor'):
                # Class name is the part before
                return '_'.join(parts[max(0, j-1):j+1])
            if p == 'arrinit' and j > 0 and parts[j-1] == '_':
                return '__arrinit'
        # Fallback: last 2 parts
        return '_'.join(parts[-2:]) if len(parts) >= 2 else prefix
    return call_target


def main():
    base_dir = sys.argv[1] if len(sys.argv) > 1 else os.path.join(
        "annotations", "nocedit.exe", "pseudocode", "src"
    )

    if not os.path.isdir(base_dir):
        print(f"Error: directory not found: {base_dir}", file=sys.stderr)
        sys.exit(1)

    # Find all ctor/dtor asm files (skip CRT functions)
    asm_files = []
    for pattern in ['**/*_ctor_*.asm', '**/*_dtor_*.asm']:
        for f in glob.glob(os.path.join(base_dir, pattern), recursive=True):
            if os.sep + 'crt' + os.sep not in f:
                asm_files.append(f)
    asm_files.sort()

    print(f"Scanning {len(asm_files)} ctor/dtor asm files in {base_dir}...\n")

    # Collect results
    needed_types = defaultdict(set)  # class_name -> set of offsets
    unknown_offsets = []  # (filepath, call_name) for manual review
    details = []  # (filepath, class_name, func_type, calls) for detailed output

    for path in asm_files:
        class_name, func_type = extract_info(path)
        if not class_name:
            continue

        calls = analyze_asm(path)

        has_nonzero = False
        has_unknown = False
        for call_name, offset in calls:
            if offset is not None and offset != 0:
                needed_types[class_name].add(offset)
                has_nonzero = True
            elif offset is None:
                unknown_offsets.append((path, call_name))
                has_unknown = True

        if has_nonzero or has_unknown:
            details.append((path, class_name, func_type, calls))

    # Check which .cpp files still need ADJ() (don't have it yet)
    unfinished = []  # (path, class_name, func_type, calls) for files missing ADJ
    finished = []    # same, for files already using ADJ

    for path, class_name, func_type, calls in details:
        cpp_path = path.replace('.asm', '.cpp')
        has_adj = False
        if os.path.isfile(cpp_path):
            with open(cpp_path) as f:
                has_adj = 'ADJ(' in f.read()

        nonzero_calls = [(n, o) for n, o in calls if o is not None and o != 0]
        unknown_calls = [(n, o) for n, o in calls if o is None]

        if has_adj:
            finished.append((path, class_name, func_type, calls))
        elif nonzero_calls or unknown_calls:
            unfinished.append((path, class_name, func_type, calls))

    # ---- Print unfinished section at the top ----
    print("=" * 70)
    print(f"UNFINISHED CTORS/DTORS ({len(unfinished)} files still need ADJ)")
    print("=" * 70)

    # Group by source file (virtual file)
    by_vfile = defaultdict(list)
    for path, class_name, func_type, calls in unfinished:
        # Extract virtual file from path: .../src/core/actor.cpp/ClassName_ctor_...
        parts = path.split(os.sep)
        # Find the .cpp directory component
        vfile = None
        for j, p in enumerate(parts):
            if p.endswith('.cpp') and j < len(parts) - 1:
                vfile = os.path.join(*parts[j-1:j+1])  # e.g. "core/actor.cpp"
                break
        if not vfile:
            vfile = "unknown"
        by_vfile[vfile].append((path, class_name, func_type, calls))

    for vfile in sorted(by_vfile):
        entries = by_vfile[vfile]
        print(f"\n  [{vfile}]")
        for path, class_name, func_type, calls in entries:
            basename = os.path.basename(path).replace('.asm', '')
            nonzero = [(n, o) for n, o in calls if o is not None and o != 0]
            unknown = [(n, o) for n, o in calls if o is None]
            print(f"    {basename}:")
            for call_name, offset in nonzero:
                short = short_call_name(call_name)
                print(f"      {short} @ this+0x{offset:x} ({offset}) -> {class_name}_ptr_{offset}")
            for call_name, _ in unknown:
                short = short_call_name(call_name)
                print(f"      {short} @ ??? (UNKNOWN)")

    # ---- Print already-finished section ----
    if finished:
        print(f"\n{'=' * 70}")
        print(f"ALREADY FINISHED ({len(finished)} files have ADJ)")
        print("=" * 70)
        for path, class_name, func_type, calls in finished:
            basename = os.path.basename(path).replace('.asm', '')
            print(f"  {basename}")

    # ---- Print detailed results ----
    if '--verbose' in sys.argv or '-v' in sys.argv:
        print(f"\n{'=' * 70}")
        print("DETAILED RESULTS")
        print("=" * 70)
        for path, class_name, func_type, calls in details:
            basename = os.path.basename(path)
            print(f"\n{basename}:")
            for call_name, offset in calls:
                short = short_call_name(call_name)
                if offset == 0:
                    print(f"  {short} @ this+0x0 (no ADJ needed)")
                elif offset is None:
                    print(f"  {short} @ ??? (MANUAL REVIEW)")
                else:
                    print(f"  {short} @ this+0x{offset:x} ({offset}) -> {class_name}_ptr_{offset}")
        print()

    # ---- Print full type summary ----
    print("=" * 70)
    print("NEEDED ADJ POINTER TYPES")
    print("=" * 70)
    total = 0
    for cls in sorted(needed_types):
        for off in sorted(needed_types[cls]):
            print(f"  {cls}_ptr_{off}  (0x{off:x})")
            total += 1

    print(f"\nTotal: {total} types across {len(needed_types)} classes")

    # ---- Print unknowns ----
    if unknown_offsets:
        print(f"\n{'=' * 70}")
        print(f"MANUAL REVIEW NEEDED ({len(unknown_offsets)} calls with unknown offset)")
        print("=" * 70)
        for path, call_name in unknown_offsets:
            basename = os.path.basename(path)
            short = short_call_name(call_name)
            print(f"  {basename}: {short}")

    return 0 if not unknown_offsets else 1


if __name__ == '__main__':
    sys.exit(main())
