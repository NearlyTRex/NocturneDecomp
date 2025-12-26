#!/usr/bin/env python3
"""
ESP Certainty Analysis Report Generator

Analyzes .pcode files to understand ESP tracking certainty and identify
patterns that cause uncertainty. Generates actionable insights for fixing.
"""

import os
import re
import sys
from collections import defaultdict


def parse_pcode_file(filepath):
    """Parse a pcode file and extract ESP certainty info.

    Returns dict with:
        - function_name: str
        - entry_addr: str
        - instructions: list of dicts with addr, esp_offset, certainty, assembly, delta
        - has_ebp_frame: bool
    """
    result = {
        'filepath': filepath,
        'function_name': '',
        'entry_addr': '',
        'instructions': [],
        'has_ebp_frame': False,
    }

    with open(filepath, 'r') as f:
        lines = f.readlines()

    # Parse header
    for line in lines:
        if line.startswith('# Function:'):
            result['function_name'] = line.split(':', 1)[1].strip()
        elif line.startswith('# Entry:'):
            result['entry_addr'] = line.split(':', 1)[1].strip()

    # Parse instructions
    # Format: @<address> [ESP:offset](delta)<certainty>  # <assembly>
    # ESP can be numeric or ??? for unknown
    # Certainty markers: none=known, ?=computed, ~=cfg_resolved, !!=lost, !?=conflict, ??=unreachable
    instr_pattern = re.compile(
        r'^@([0-9a-fA-F]+)\s+'
        r'\[ESP:([+-]?\d+|\?\?\?)\]'  # ESP value or ???
        r'(?:\(([+-]?\d+)\))?'  # Optional delta
        r'([?~!]+)?'  # Optional certainty marker
        r'\s+#\s+(.+)$'
    )

    for line in lines:
        match = instr_pattern.match(line)
        if match:
            addr, esp_str, delta_str, certainty_marker, assembly = match.groups()

            # Determine certainty from marker
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
            elif certainty_marker == '??':
                certainty = 'unreachable'
            else:
                certainty = 'unknown_marker:' + certainty_marker

            instr = {
                'addr': addr,
                'esp_offset': None if esp_str == '???' else int(esp_str),
                'esp_unknown': esp_str == '???',
                'delta': int(delta_str) if delta_str else 0,
                'certainty': certainty,
                'assembly': assembly.strip(),
            }
            result['instructions'].append(instr)

            # Check for EBP frame setup
            if 'MOV EBP, ESP' in assembly or 'MOV EBP,ESP' in assembly:
                result['has_ebp_frame'] = True

    return result


def analyze_uncertainty_patterns(pcode_data):
    """Analyze what causes uncertainty in a function.

    Returns list of identified patterns/issues.
    """
    patterns = []
    instructions = pcode_data['instructions']

    if not instructions:
        return patterns

    # Track transitions
    prev_certainty = None
    for i, instr in enumerate(instructions):
        cert = instr['certainty']
        asm = instr['assembly']

        # Track where certainty degrades
        if prev_certainty in ('known', 'computed') and cert in ('lost', 'conflict', 'unreachable'):
            patterns.append({
                'type': 'certainty_degraded',
                'from': prev_certainty,
                'to': cert,
                'at_addr': instr['addr'],
                'assembly': asm,
                'prev_assembly': instructions[i-1]['assembly'] if i > 0 else None,
            })

        # CALLIND patterns
        if 'CALL' in asm and ('dword ptr' in asm or 'EAX' in asm or 'ECX' in asm or 'EDX' in asm or 'EBX' in asm):
            # Indirect call
            next_cert = instructions[i+1]['certainty'] if i+1 < len(instructions) else None
            patterns.append({
                'type': 'callind',
                'addr': instr['addr'],
                'assembly': asm,
                'esp_before': instr['esp_offset'],
                'certainty_after': next_cert,
            })

        # Check for unusual ESP changes
        if cert in ('lost', 'conflict') and instr['delta'] != 0:
            patterns.append({
                'type': 'uncertain_esp_change',
                'addr': instr['addr'],
                'assembly': asm,
                'delta': instr['delta'],
                'certainty': cert,
            })

        prev_certainty = cert

    return patterns


def generate_report(pcode_dir):
    """Generate comprehensive ESP certainty report."""

    # Collect all pcode files
    pcode_files = []
    for root, dirs, files in os.walk(pcode_dir):
        for f in files:
            if f.endswith('.pcode'):
                pcode_files.append(os.path.join(root, f))

    print(f"Found {len(pcode_files)} pcode files")
    print("=" * 80)

    # Global statistics
    total_instructions = 0
    esp_unknown_count = 0
    certainty_counts = defaultdict(int)
    functions_by_worst_certainty = defaultdict(list)
    uncertainty_patterns = defaultdict(list)

    # Per-file statistics
    files_with_lost = []
    files_with_conflict = []
    files_with_unreachable = []
    files_fully_known = []

    # Detailed pattern analysis
    callind_patterns = []
    degradation_points = []

    for filepath in pcode_files:
        try:
            data = parse_pcode_file(filepath)
        except Exception as e:
            print(f"Error parsing {filepath}: {e}")
            continue

        func_name = data['function_name']
        instructions = data['instructions']

        if not instructions:
            continue

        # Count certainties for this function
        func_certainties = defaultdict(int)
        func_unknown_count = 0
        for instr in instructions:
            cert = instr['certainty']
            certainty_counts[cert] += 1
            func_certainties[cert] += 1
            total_instructions += 1
            if instr.get('esp_unknown'):
                esp_unknown_count += 1
                func_unknown_count += 1

        # Determine worst certainty in function
        if func_certainties['lost'] > 0:
            worst = 'lost'
            files_with_lost.append((filepath, func_name, func_certainties['lost']))
        elif func_certainties['conflict'] > 0:
            worst = 'conflict'
            files_with_conflict.append((filepath, func_name, func_certainties['conflict']))
        elif func_certainties['unreachable'] > 0:
            worst = 'unreachable'
            files_with_unreachable.append((filepath, func_name, func_certainties['unreachable']))
        elif func_certainties['cfg_resolved'] > 0:
            worst = 'cfg_resolved'
        elif func_certainties['computed'] > 0:
            worst = 'computed'
        else:
            worst = 'known'
            files_fully_known.append((filepath, func_name))

        functions_by_worst_certainty[worst].append(func_name)

        # Analyze patterns
        patterns = analyze_uncertainty_patterns(data)
        for p in patterns:
            if p['type'] == 'callind':
                callind_patterns.append({
                    'function': func_name,
                    'has_ebp_frame': data['has_ebp_frame'],
                    **p
                })
            elif p['type'] == 'certainty_degraded':
                degradation_points.append({
                    'function': func_name,
                    'has_ebp_frame': data['has_ebp_frame'],
                    **p
                })

    # Print report
    print("\n" + "=" * 80)
    print("OVERALL ESP CERTAINTY STATISTICS")
    print("=" * 80)
    print(f"\nTotal instructions analyzed: {total_instructions}")
    print(f"Instructions with ESP=??? (unknown value): {esp_unknown_count} ({esp_unknown_count/total_instructions*100:.2f}%)")
    print("\nCertainty breakdown:")
    for cert in ['known', 'computed', 'cfg_resolved', 'lost', 'conflict', 'unreachable']:
        count = certainty_counts.get(cert, 0)
        pct = (count / total_instructions * 100) if total_instructions > 0 else 0
        print(f"  {cert:15s}: {count:8d} ({pct:5.2f}%)")

    print("\n" + "=" * 80)
    print("FUNCTIONS BY WORST CERTAINTY")
    print("=" * 80)
    for cert in ['known', 'computed', 'cfg_resolved', 'lost', 'conflict', 'unreachable']:
        funcs = functions_by_worst_certainty.get(cert, [])
        print(f"\n{cert}: {len(funcs)} functions")

    # Detailed breakdown of problematic functions
    print("\n" + "=" * 80)
    print("FUNCTIONS WITH LOST ESP TRACKING")
    print("=" * 80)
    files_with_lost.sort(key=lambda x: -x[2])  # Sort by count descending
    for filepath, func_name, count in files_with_lost[:50]:
        rel_path = os.path.relpath(filepath, pcode_dir)
        print(f"  {count:4d} lost instructions: {func_name}")
        print(f"       File: {rel_path}")
    if len(files_with_lost) > 50:
        print(f"  ... and {len(files_with_lost) - 50} more")

    print("\n" + "=" * 80)
    print("FUNCTIONS WITH ESP CONFLICT")
    print("=" * 80)
    files_with_conflict.sort(key=lambda x: -x[2])
    for filepath, func_name, count in files_with_conflict[:30]:
        rel_path = os.path.relpath(filepath, pcode_dir)
        print(f"  {count:4d} conflict instructions: {func_name}")
        print(f"       File: {rel_path}")
    if len(files_with_conflict) > 30:
        print(f"  ... and {len(files_with_conflict) - 30} more")

    # CALLIND analysis
    print("\n" + "=" * 80)
    print("INDIRECT CALL (CALLIND) ANALYSIS")
    print("=" * 80)

    callind_by_certainty_after = defaultdict(list)
    for p in callind_patterns:
        cert_after = p.get('certainty_after', 'unknown')
        callind_by_certainty_after[cert_after].append(p)

    print(f"\nTotal indirect calls found: {len(callind_patterns)}")
    print("\nCertainty after CALLIND:")
    for cert in ['known', 'computed', 'cfg_resolved', 'lost', 'conflict', 'unreachable', None]:
        calls = callind_by_certainty_after.get(cert, [])
        if calls:
            label = cert if cert else 'end_of_function'
            print(f"  {label:20s}: {len(calls)}")

    # Show problematic CALLINDs
    problematic_callinds = [p for p in callind_patterns
                           if p.get('certainty_after') in ('lost', 'conflict', None)]

    print(f"\nProblematic CALLINDs (lost/conflict after): {len(problematic_callinds)}")

    # Group by assembly pattern
    callind_asm_patterns = defaultdict(list)
    for p in problematic_callinds:
        # Normalize assembly to pattern
        asm = p['assembly']
        # Extract the call target pattern
        if 'dword ptr [' in asm:
            match = re.search(r'dword ptr \[([^\]]+)\]', asm)
            if match:
                pattern = f"CALL [mem:{match.group(1)[:20]}...]"
            else:
                pattern = asm
        else:
            pattern = asm
        callind_asm_patterns[pattern].append(p)

    print("\nCALLIND patterns causing problems:")
    for pattern, calls in sorted(callind_asm_patterns.items(), key=lambda x: -len(x[1]))[:20]:
        ebp_count = sum(1 for c in calls if c['has_ebp_frame'])
        no_ebp_count = len(calls) - ebp_count
        print(f"  {len(calls):4d}x {pattern}")
        print(f"        (EBP frame: {ebp_count}, no EBP frame: {no_ebp_count})")

    # Degradation analysis
    print("\n" + "=" * 80)
    print("ESP CERTAINTY DEGRADATION POINTS")
    print("=" * 80)

    degradation_by_transition = defaultdict(list)
    for d in degradation_points:
        key = f"{d['from']} -> {d['to']}"
        degradation_by_transition[key].append(d)

    print("\nTransitions that cause degradation:")
    for trans, points in sorted(degradation_by_transition.items(), key=lambda x: -len(x[1])):
        print(f"\n  {trans}: {len(points)} occurrences")

        # Group by assembly causing it
        asm_counts = defaultdict(int)
        for p in points:
            asm = p['assembly'].split()[0] if p['assembly'] else 'unknown'
            asm_counts[asm] += 1

        print("    Triggered by instructions:")
        for asm, count in sorted(asm_counts.items(), key=lambda x: -x[1])[:10]:
            print(f"      {count:4d}x {asm}")

    # Analyze why instructions are not fully "known"
    print("\n" + "=" * 80)
    print("ANALYSIS: WHY NOT FULLY KNOWN?")
    print("=" * 80)

    # Look at computed instructions - what's preventing them from being known?
    computed_patterns = defaultdict(list)
    cfg_resolved_patterns = defaultdict(list)

    for filepath in pcode_files[:500]:  # Sample first 500 for performance
        try:
            data = parse_pcode_file(filepath)
        except:
            continue

        for i, instr in enumerate(data['instructions']):
            if instr['certainty'] == 'computed':
                asm_type = instr['assembly'].split()[0] if instr['assembly'] else 'unknown'
                computed_patterns[asm_type].append({
                    'function': data['function_name'],
                    'addr': instr['addr'],
                    'assembly': instr['assembly'],
                    'delta': instr['delta'],
                    'esp': instr['esp_offset'],
                })
            elif instr['certainty'] == 'cfg_resolved':
                asm_type = instr['assembly'].split()[0] if instr['assembly'] else 'unknown'
                cfg_resolved_patterns[asm_type].append({
                    'function': data['function_name'],
                    'addr': instr['addr'],
                    'assembly': instr['assembly'],
                })

    print("\n'computed' certainty (?) - Instructions where ESP was computed, not directly known:")
    print("These have ? marker - linear tracking computed the delta but wasn't certain")
    for asm_type, items in sorted(computed_patterns.items(), key=lambda x: -len(x[1]))[:15]:
        print(f"  {len(items):4d}x {asm_type}")
        # Show example
        if items:
            ex = items[0]
            print(f"        Example: {ex['assembly']} (delta={ex['delta']}, esp={ex['esp']})")

    print("\n'cfg_resolved' certainty (~) - Instructions resolved by CFG analysis:")
    print("These have ~ marker - our CFG pass resolved what linear tracking couldn't")
    for asm_type, items in sorted(cfg_resolved_patterns.items(), key=lambda x: -len(x[1]))[:15]:
        print(f"  {len(items):4d}x {asm_type}")

    # Check what's at cfg_resolved points - are they after branches?
    print("\nContext around cfg_resolved instructions (first transitions to ~):")
    transition_count = 0
    for filepath in pcode_files[:200]:
        try:
            data = parse_pcode_file(filepath)
        except:
            continue

        prev_cert = None
        for i, instr in enumerate(data['instructions']):
            cert = instr['certainty']
            # First transition to cfg_resolved in function
            if cert == 'cfg_resolved' and prev_cert in ('known', 'computed') and transition_count < 10:
                print(f"\n  Function: {data['function_name']}")
                # Show context: 2 before, the transition, 2 after
                start = max(0, i-2)
                end = min(len(data['instructions']), i+3)
                for j in range(start, end):
                    inst = data['instructions'][j]
                    marker = '>>>' if j == i else '   '
                    print(f"    {marker} @{inst['addr']} [{inst['certainty']:12s}] {inst['assembly'][:50]}")
                transition_count += 1
                break  # Only first transition per function
            prev_cert = cert

    # Summary recommendations
    print("\n" + "=" * 80)
    print("RECOMMENDATIONS")
    print("=" * 80)

    total_lost = certainty_counts.get('lost', 0)
    total_conflict = certainty_counts.get('conflict', 0)
    total_unreachable = certainty_counts.get('unreachable', 0)
    total_problematic = total_lost + total_conflict + total_unreachable

    print(f"\nTotal problematic instructions: {total_problematic} ({total_problematic/total_instructions*100:.2f}%)")
    print(f"  - Lost: {total_lost}")
    print(f"  - Conflict: {total_conflict}")
    print(f"  - Unreachable: {total_unreachable}")

    if len(problematic_callinds) > 0:
        print(f"\n1. INDIRECT CALLS: {len(problematic_callinds)} CALLINDs cause ESP tracking issues")
        print("   - These need pcode overrides to fix ESP after the call")
        print("   - Non-EBP-frame functions are harder to fix")

    if total_conflict > 0:
        print(f"\n2. CFG CONFLICTS: {total_conflict} instructions have conflicting ESP values")
        print("   - Different code paths reach the same point with different ESP")
        print("   - May indicate unusual control flow or analysis bugs")

    if total_unreachable > 0:
        print(f"\n3. UNREACHABLE CODE: {total_unreachable} instructions marked unreachable")
        print("   - No CFG path reaches these instructions")
        print("   - May be dead code or jump table targets not recognized")

    # Return data for further processing
    return {
        'total_instructions': total_instructions,
        'certainty_counts': dict(certainty_counts),
        'functions_with_lost': files_with_lost,
        'functions_with_conflict': files_with_conflict,
        'callind_patterns': callind_patterns,
        'degradation_points': degradation_points,
    }


def main():
    if len(sys.argv) > 1:
        pcode_dir = sys.argv[1]
    else:
        # Default path
        pcode_dir = 'annotations/nocedit.exe/pseudocode/src'

    if not os.path.isdir(pcode_dir):
        print(f"Error: Directory not found: {pcode_dir}")
        sys.exit(1)

    generate_report(pcode_dir)


if __name__ == '__main__':
    main()
