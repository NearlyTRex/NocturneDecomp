#!/usr/bin/env python3
"""
Analyze ESP conflict sources - specifically separating CALLIND-related from pure CFG merge conflicts.
"""

import os
import re
import sys
from collections import defaultdict


def parse_pcode_file(filepath):
    """Parse a pcode file and extract ESP certainty info."""
    result = {
        'filepath': filepath,
        'function_name': '',
        'instructions': [],
        'has_callind': False,
        'callind_count': 0,
    }

    with open(filepath, 'r') as f:
        lines = f.readlines()

    # Parse header
    for line in lines:
        if line.startswith('# Function:'):
            result['function_name'] = line.split(':', 1)[1].strip()

    # Parse instructions
    instr_pattern = re.compile(
        r'^@([0-9a-fA-F]+)\s+'
        r'\[ESP:([+-]?\d+|\?\?\?)\]'
        r'(?:\(([+-]?\d+)\))?'
        r'([?~!>]+)?'
        r'\s+#\s+(.+)$'
    )

    for line in lines:
        match = instr_pattern.match(line)
        if match:
            addr, esp_str, delta_str, certainty_marker, assembly = match.groups()

            if certainty_marker is None:
                certainty = 'known'
            elif certainty_marker == '?':
                certainty = 'computed'
            elif certainty_marker == '~':
                certainty = 'cfg_resolved'
            elif certainty_marker == '!!':
                certainty = 'lost'
            elif certainty_marker == '!?':
                certainty = 'conflict'
            elif certainty_marker == '~!':
                certainty = 'ebp_frame_conflict'
            elif certainty_marker == '~>':
                certainty = 'frame_recovered'
            elif certainty_marker == '??':
                certainty = 'unreachable'
            else:
                certainty = 'unknown'

            instr = {
                'addr': addr,
                'esp_offset': None if esp_str == '???' else int(esp_str),
                'esp_unknown': esp_str == '???',
                'delta': int(delta_str) if delta_str else 0,
                'certainty': certainty,
                'assembly': assembly.strip(),
            }
            result['instructions'].append(instr)

            # Track CALLINDs
            if 'CALL' in assembly and ('dword ptr' in assembly or '[E' in assembly):
                result['has_callind'] = True
                result['callind_count'] += 1

    return result


def find_conflict_predecessors(instructions, conflict_idx):
    """
    Analyze what comes before a conflict point.
    Returns info about the likely source of the conflict.
    """
    conflict_instr = instructions[conflict_idx]
    conflict_addr = int(conflict_instr['addr'], 16)

    # Look backwards for jump targets, returns, etc.
    predecessors = []

    # Check previous few instructions
    for i in range(max(0, conflict_idx - 10), conflict_idx):
        instr = instructions[i]
        asm = instr['assembly']

        # Track jumps that target near the conflict
        if 'JMP' in asm or asm.startswith('J'):
            # Extract jump target
            match = re.search(r'0x([0-9a-fA-F]+)', asm)
            if match:
                target = int(match.group(1), 16)
                if abs(target - conflict_addr) < 0x100:  # Within 256 bytes
                    predecessors.append({
                        'type': 'jump_near_conflict',
                        'addr': instr['addr'],
                        'esp': instr['esp_offset'],
                        'certainty': instr['certainty'],
                        'assembly': asm,
                    })

        # Track CALLINDs
        if 'CALL' in asm and ('dword ptr' in asm or '[E' in asm):
            predecessors.append({
                'type': 'callind',
                'addr': instr['addr'],
                'esp': instr['esp_offset'],
                'certainty': instr['certainty'],
                'assembly': asm,
            })

        # Track regular CALLs
        elif 'CALL' in asm:
            predecessors.append({
                'type': 'call',
                'addr': instr['addr'],
                'esp': instr['esp_offset'],
                'certainty': instr['certainty'],
                'assembly': asm,
            })

    return predecessors


def analyze_conflict_sources(pcode_dir):
    """Analyze what causes ESP conflicts."""

    pcode_files = []
    for root, dirs, files in os.walk(pcode_dir):
        for f in files:
            if f.endswith('.pcode'):
                pcode_files.append(os.path.join(root, f))

    print(f"Analyzing {len(pcode_files)} pcode files for conflict sources...")
    print("=" * 80)

    # Statistics
    functions_with_conflicts = []
    conflict_sources = defaultdict(int)

    # Detailed analysis
    callind_related_conflicts = 0
    pure_cfg_conflicts = 0
    mixed_conflicts = 0

    conflict_before_any_callind = 0
    conflict_after_callind = 0

    example_pure_cfg = []
    example_callind_related = []

    for filepath in pcode_files:
        try:
            data = parse_pcode_file(filepath)
        except Exception as e:
            continue

        instructions = data['instructions']
        if not instructions:
            continue

        # Find all conflict points
        conflict_indices = []
        first_callind_idx = None

        for i, instr in enumerate(instructions):
            if instr['certainty'] == 'conflict':
                conflict_indices.append(i)

            if first_callind_idx is None and 'CALL' in instr['assembly']:
                if 'dword ptr' in instr['assembly'] or '[E' in instr['assembly']:
                    first_callind_idx = i

        if not conflict_indices:
            continue

        func_name = data['function_name']
        has_callind = data['has_callind']

        # Analyze each conflict
        func_has_callind_conflict = False
        func_has_pure_cfg_conflict = False

        for conflict_idx in conflict_indices:
            # Check if conflict is before any CALLIND
            if first_callind_idx is None or conflict_idx < first_callind_idx:
                conflict_before_any_callind += 1
                func_has_pure_cfg_conflict = True
            else:
                conflict_after_callind += 1
                func_has_callind_conflict = True

            # Analyze predecessors
            predecessors = find_conflict_predecessors(instructions, conflict_idx)

            has_callind_predecessor = any(p['type'] == 'callind' for p in predecessors)

            if has_callind_predecessor:
                conflict_sources['callind_in_path'] += 1
            else:
                conflict_sources['pure_cfg_merge'] += 1

        # Categorize function
        if func_has_callind_conflict and func_has_pure_cfg_conflict:
            mixed_conflicts += 1
        elif func_has_callind_conflict:
            callind_related_conflicts += 1
            if len(example_callind_related) < 5:
                example_callind_related.append((func_name, filepath, len(conflict_indices)))
        else:
            pure_cfg_conflicts += 1
            if len(example_pure_cfg) < 10:
                example_pure_cfg.append((func_name, filepath, len(conflict_indices), first_callind_idx))

        functions_with_conflicts.append({
            'name': func_name,
            'filepath': filepath,
            'conflict_count': len(conflict_indices),
            'has_callind': has_callind,
            'callind_count': data['callind_count'],
            'first_conflict_idx': conflict_indices[0] if conflict_indices else None,
            'first_callind_idx': first_callind_idx,
        })

    # Report
    print("\n" + "=" * 80)
    print("CONFLICT SOURCE ANALYSIS")
    print("=" * 80)

    total_funcs = len(functions_with_conflicts)
    print(f"\nTotal functions with conflicts: {total_funcs}")
    print(f"\nConflict categorization:")
    print(f"  - Functions where conflicts occur ONLY after CALLINDs: {callind_related_conflicts}")
    print(f"  - Functions where conflicts occur BEFORE any CALLIND: {pure_cfg_conflicts}")
    print(f"  - Functions with both types: {mixed_conflicts}")

    print(f"\nConflict instruction breakdown:")
    print(f"  - Conflicts before first CALLIND in function: {conflict_before_any_callind}")
    print(f"  - Conflicts after a CALLIND in function: {conflict_after_callind}")

    print(f"\nConflict path analysis:")
    for source, count in sorted(conflict_sources.items(), key=lambda x: -x[1]):
        print(f"  - {source}: {count}")

    # Functions with conflicts but NO CALLINDs at all
    no_callind_conflicts = [f for f in functions_with_conflicts if not f['has_callind']]
    print(f"\n" + "=" * 80)
    print(f"FUNCTIONS WITH CONFLICTS BUT NO CALLINDs: {len(no_callind_conflicts)}")
    print("=" * 80)
    print("These are PURE control flow merge conflicts, not related to indirect calls:")

    for f in sorted(no_callind_conflicts, key=lambda x: -x['conflict_count'])[:20]:
        rel_path = os.path.relpath(f['filepath'], pcode_dir)
        print(f"\n  {f['conflict_count']:4d} conflicts: {f['name']}")
        print(f"       File: {rel_path}")

    # Show examples of pure CFG conflicts
    print(f"\n" + "=" * 80)
    print("EXAMPLES OF PURE CFG MERGE CONFLICTS")
    print("=" * 80)
    print("Analyzing functions where first conflict is BEFORE first CALLIND:")

    for func_name, filepath, conflict_count, first_callind_idx in example_pure_cfg[:5]:
        print(f"\n  Function: {func_name}")
        print(f"  Conflicts: {conflict_count}, First CALLIND at instruction #{first_callind_idx}")

        try:
            data = parse_pcode_file(filepath)
            instructions = data['instructions']

            # Find first conflict
            first_conflict_idx = None
            for i, instr in enumerate(instructions):
                if instr['certainty'] == 'conflict':
                    first_conflict_idx = i
                    break

            if first_conflict_idx is not None:
                # Show context around first conflict
                print(f"  First conflict at instruction #{first_conflict_idx}:")
                start = max(0, first_conflict_idx - 5)
                end = min(len(instructions), first_conflict_idx + 3)

                for j in range(start, end):
                    inst = instructions[j]
                    marker = '>>>' if j == first_conflict_idx else '   '
                    esp_str = f"{inst['esp_offset']:+d}" if inst['esp_offset'] is not None else '???'
                    print(f"    {marker} @{inst['addr']} [{inst['certainty']:12s}] ESP:{esp_str:>6s}  {inst['assembly'][:45]}")
        except:
            pass

    # Summary
    print(f"\n" + "=" * 80)
    print("SUMMARY")
    print("=" * 80)

    if len(no_callind_conflicts) > 0:
        print(f"\n{len(no_callind_conflicts)} functions have conflicts with NO indirect calls.")
        print("These are pure control flow merge issues that need CFG resolver improvements.")

    pct_callind = callind_related_conflicts / total_funcs * 100 if total_funcs > 0 else 0
    pct_pure = pure_cfg_conflicts / total_funcs * 100 if total_funcs > 0 else 0
    pct_mixed = mixed_conflicts / total_funcs * 100 if total_funcs > 0 else 0

    print(f"\nBreakdown of {total_funcs} functions with conflicts:")
    print(f"  - CALLIND-related only: {callind_related_conflicts} ({pct_callind:.1f}%)")
    print(f"  - Pure CFG merge only:  {pure_cfg_conflicts} ({pct_pure:.1f}%)")
    print(f"  - Mixed:                {mixed_conflicts} ({pct_mixed:.1f}%)")


def main():
    pcode_dir = sys.argv[1] if len(sys.argv) > 1 else 'annotations/nocedit.exe/pseudocode/src'

    if not os.path.isdir(pcode_dir):
        print(f"Error: Directory not found: {pcode_dir}")
        sys.exit(1)

    analyze_conflict_sources(pcode_dir)


if __name__ == '__main__':
    main()
