#!/usr/bin/env python3
"""
Analyze callers of clipAndDrawLine2D to identify stack variables needed.

This script examines the assembly of each caller to find:
1. The initial stack frame size (from SUB ESP in prologue)
2. The dynamic SUB ESP instructions before the CALL
3. Calculate the required local_size and stack variable offsets
"""

import re
import os
import json

ASM_DIR = "annotations/nocedit.exe/pseudocode/src"
TARGET_FUNC = "clipAndDrawLine2D"

def find_caller_files(base_dir):
    """Find all ASM files that call clipAndDrawLine2D."""
    callers = []
    for root, dirs, files in os.walk(base_dir):
        for f in files:
            if f.endswith('.asm'):
                path = os.path.join(root, f)
                with open(path, 'r') as fp:
                    content = fp.read()
                    if TARGET_FUNC in content:
                        callers.append(path)
    return callers

def analyze_asm_file(asm_path):
    """Analyze an ASM file to find stack frame info."""
    with open(asm_path, 'r') as f:
        lines = f.readlines()

    func_name = None
    push_count = 0
    initial_sub_esp = 0
    dynamic_sub_esps = []  # (address, size) tuples
    call_addresses = []
    current_local_size = None

    # Parse header for function name and current locals
    in_header = True
    for line in lines:
        line = line.strip()

        # Get function name
        if 'Label:' in line and not func_name:
            match = re.search(r'Label:\s+(\S+)', line)
            if match:
                func_name = match.group(1)

        # Get current local size from header
        if 'Local Variables:' in line:
            in_header = False

        # Check for existing stack variables
        stack_match = re.search(r'Stack\[-0x([0-9a-fA-F]+)\]', line)
        if stack_match and in_header:
            offset = int(stack_match.group(1), 16)
            if current_local_size is None or offset > current_local_size:
                current_local_size = offset

        if line.startswith('section .text'):
            in_header = False

    # Parse instructions
    for line in lines:
        line_stripped = line.strip()

        # Count PUSH instructions in prologue (before first SUB ESP)
        if initial_sub_esp == 0:
            if re.match(r'PUSH\s+E[A-Z]{2}', line_stripped):
                push_count += 1

        # Find initial SUB ESP (prologue)
        match = re.match(r'SUB\s+ESP,0x([0-9a-fA-F]+)', line_stripped)
        if match and initial_sub_esp == 0:
            initial_sub_esp = int(match.group(1), 16)
            continue

        # Find dynamic SUB ESP (after prologue, before CALL)
        if match and initial_sub_esp > 0:
            addr_match = re.search(r';\s*([0-9a-fA-F]+)', line_stripped)
            addr = addr_match.group(1) if addr_match else "unknown"
            size = int(match.group(1), 16)
            dynamic_sub_esps.append((addr, size))

        # Find CALL to target function
        if TARGET_FUNC in line_stripped and 'CALL' in line_stripped:
            addr_match = re.search(r';\s*([0-9a-fA-F]+)', line_stripped)
            if addr_match:
                call_addresses.append(addr_match.group(1))

    return {
        'file': asm_path,
        'func_name': func_name,
        'push_bytes': push_count * 4,
        'initial_sub_esp': initial_sub_esp,
        'dynamic_sub_esps': dynamic_sub_esps,
        'call_addresses': call_addresses,
        'current_local_size': current_local_size
    }

def calculate_stack_vars(info):
    """Calculate the stack variables needed based on analysis."""
    push_bytes = info['push_bytes']
    initial_sub = info['initial_sub_esp']
    dynamic_subs = info['dynamic_sub_esps']

    # Base offset after prologue
    base_offset = push_bytes + initial_sub

    # For clipAndDrawLine2D calls, we typically see:
    # SUB ESP, 0x30 (param2 area)
    # SUB ESP, 0x30 (param1 area)
    # CALL

    # Each SRenderVertex is 48 bytes (0x30)
    VERTEX_SIZE = 0x30

    results = {
        'base_offset': base_offset,
        'stack_vars': [],
        'required_local_size': base_offset
    }

    # Track cumulative offset for dynamic allocations
    cumulative = base_offset

    # Find pairs of SUB ESP, 0x30 that precede CALL
    # These are the parameter areas
    sub_30_count = sum(1 for _, size in dynamic_subs if size == VERTEX_SIZE)

    if sub_30_count >= 2:
        # Typical pattern: two SUB ESP, 0x30 for the two vertex parameters
        # First SUB creates param2 area, second creates param1 area
        param2_offset = base_offset + VERTEX_SIZE
        param1_offset = base_offset + VERTEX_SIZE * 2

        results['stack_vars'] = [
            {'name': 'param_vertex1', 'offset': -param1_offset, 'size': VERTEX_SIZE, 'type': 'SRenderVertex'},
            {'name': 'param_vertex2', 'offset': -param2_offset, 'size': VERTEX_SIZE, 'type': 'SRenderVertex'},
        ]
        results['required_local_size'] = param1_offset + 4  # +4 for safety margin

    return results

def main():
    callers = find_caller_files(ASM_DIR)
    print(f"Found {len(callers)} callers of {TARGET_FUNC}\n")

    all_results = []

    for asm_path in sorted(callers):
        info = analyze_asm_file(asm_path)
        calc = calculate_stack_vars(info)

        # Check if fix is needed
        current_size = info['current_local_size'] or 0
        required_size = calc['required_local_size']
        needs_fix = required_size > current_size or len(calc['stack_vars']) > 0

        result = {
            **info,
            **calc,
            'needs_fix': needs_fix
        }
        all_results.append(result)

        # Print summary
        short_path = asm_path.replace(ASM_DIR + "/", "")
        print(f"=== {short_path} ===")
        print(f"  Function: {info['func_name']}")
        print(f"  Push bytes: {info['push_bytes']}")
        print(f"  Initial SUB ESP: 0x{info['initial_sub_esp']:x}")
        print(f"  Dynamic SUB ESPs: {[(a, hex(s)) for a, s in info['dynamic_sub_esps']]}")
        print(f"  Current local_size: {hex(current_size) if current_size else 'unknown'}")
        print(f"  Required local_size: 0x{required_size:x} ({required_size} decimal)")

        if calc['stack_vars']:
            print(f"  Stack vars to add:")
            for var in calc['stack_vars']:
                print(f"    - {var['name']}: offset {var['offset']} (0x{abs(var['offset']):x}), "
                      f"size {var['size']}, type {var['type']}")

        if needs_fix:
            print(f"  *** NEEDS FIX ***")
        print()

    # Summary
    needs_fix_count = sum(1 for r in all_results if r['needs_fix'])
    print(f"\n{'='*60}")
    print(f"Summary: {needs_fix_count} of {len(all_results)} callers need fixes")

    # Output JSON for potential automation
    output_path = "clipdraw_caller_analysis.json"
    with open(output_path, 'w') as f:
        # Convert to JSON-serializable format
        json_results = []
        for r in all_results:
            jr = {k: v for k, v in r.items() if k != 'dynamic_sub_esps'}
            jr['dynamic_sub_esps'] = [{'addr': a, 'size': s} for a, s in r['dynamic_sub_esps']]
            json_results.append(jr)
        json.dump(json_results, f, indent=2)
    print(f"Detailed results written to: {output_path}")

if __name__ == '__main__':
    main()
