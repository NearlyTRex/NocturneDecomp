#!/usr/bin/env python3
"""
Diagnostic script to determine the exact causes of BADSPACEBASE in decompiled functions.

This script analyzes all function JSON files and categorizes BADSPACEBASE occurrences
by their likely root cause, helping identify patterns that need new pcode override fixes.
"""

import os
import sys
import json
import re
from collections import defaultdict
from pathlib import Path

# Path to annotations
ANNOTATIONS_PATH = Path(__file__).parent.parent.parent / "annotations" / "nocedit.exe" / "pseudocode"


def load_all_function_jsons(annotations_path):
    """Load all function JSON files from the annotations directory."""
    functions = []
    for json_file in annotations_path.rglob("*.json"):
        try:
            with open(json_file, 'r') as f:
                data = json.load(f)
                data['_file_path'] = str(json_file)
                functions.append(data)
        except (json.JSONDecodeError, IOError) as e:
            print(f"Warning: Could not load {json_file}: {e}", file=sys.stderr)
    return functions


def has_suspect_type(func_data, suspect_type):
    """Check if function has a specific suspect type (in suspects or resolved_suspects)."""
    for suspect in func_data.get('suspects', []):
        if suspect.get('type') == suspect_type:
            return True
    for suspect in func_data.get('resolved_suspects', []):
        if suspect.get('type') == suspect_type:
            return True
    return False


def has_suspect_type_prefix(func_data, prefix):
    """Check if function has a suspect type starting with prefix."""
    for suspect in func_data.get('suspects', []):
        if suspect.get('type', '').startswith(prefix):
            return True
    for suspect in func_data.get('resolved_suspects', []):
        if suspect.get('type', '').startswith(prefix):
            return True
    return False


def has_stack_pattern(func_data, pattern_id):
    """Check if function has a specific stack pattern."""
    stack_patterns = func_data.get('stack_patterns', {})
    for pattern in stack_patterns.get('patterns', []):
        if pattern.get('pattern_id') == pattern_id:
            return True
    return False


def get_all_stack_pattern_ids(func_data):
    """Get all stack pattern IDs from the function."""
    stack_patterns = func_data.get('stack_patterns', {})
    return [p.get('pattern_id') for p in stack_patterns.get('patterns', [])]


def has_pcode_opcode(func_data, opcode):
    """Check if function has a specific pcode opcode."""
    pcode_summary = func_data.get('pcode_summary', {})
    opcode_dist = pcode_summary.get('opcode_distribution', {})
    return opcode_dist.get(opcode, 0) > 0


def is_ebp_frame(func_data):
    """Check if function uses an EBP frame."""
    return func_data.get('function', {}).get('is_ebp_frame', False)


def get_func_name(func_data):
    """Get the function name."""
    return func_data.get('function', {}).get('name', 'unknown')


def get_func_address(func_data):
    """Get the function address."""
    return func_data.get('function', {}).get('address', 'unknown')


def has_badspacebase(func_data):
    """Check if function has BADSPACEBASE suspect."""
    return has_suspect_type(func_data, 'badspacebase')


def categorize_badspacebase(func_data):
    """Categorize the cause of BADSPACEBASE in a function.

    Returns a list of category strings identifying likely causes.
    """
    causes = []

    # Check for known fixable causes
    if has_suspect_type_prefix(func_data, 'callind'):
        causes.append('callind')

    if has_suspect_type_prefix(func_data, 'variadic'):
        causes.append('variadic')

    # Check for stack alignment
    if has_stack_pattern(func_data, 'stack_alignment'):
        causes.append('stack_alignment')

    # Check for alternative frame pointer
    if has_stack_pattern(func_data, 'alt_frame_pointer'):
        causes.append('alt_frame_pointer')

    # Check for CALLIND without suspects (might be undetected)
    if has_pcode_opcode(func_data, 'CALLIND') and 'callind' not in causes:
        causes.append('untracked_callind')

    # Check for complex control flow patterns
    pcode_summary = func_data.get('pcode_summary', {})
    opcode_dist = pcode_summary.get('opcode_distribution', {})

    # High branch count might indicate complex CFG
    branch_count = opcode_dist.get('BRANCH', 0) + opcode_dist.get('CBRANCH', 0)
    if branch_count > 20:
        causes.append('complex_cfg')

    # Check for other suspect types that might be related
    if has_suspect_type(func_data, 'stack_param'):
        causes.append('stack_param')

    if has_suspect_type(func_data, 'stack_ref'):
        causes.append('stack_ref')

    if has_suspect_type(func_data, 'extra_output'):
        causes.append('wrong_calling_convention')

    return causes


def analyze_unknown_badspacebase(functions):
    """Analyze BADSPACEBASE cases that don't have known causes.

    Look for patterns in functions that have BADSPACEBASE but no known cause.
    """
    unknown_funcs = []

    for func in functions:
        if not has_badspacebase(func):
            continue

        causes = categorize_badspacebase(func)

        # Filter to only "real" causes (not symptoms like stack_param)
        real_causes = [c for c in causes if c in (
            'callind', 'variadic', 'stack_alignment', 'alt_frame_pointer',
            'untracked_callind', 'wrong_calling_convention'
        )]

        if not real_causes:
            unknown_funcs.append(func)

    return unknown_funcs


def analyze_pcode_patterns(func_data):
    """Analyze pcode patterns for unusual stack operations.

    Returns a dict of detected patterns and their details.
    """
    patterns = {}

    pcode_summary = func_data.get('pcode_summary', {})
    opcode_dist = pcode_summary.get('opcode_distribution', {})

    # High STORE count relative to LOAD might indicate stack manipulation
    load_count = opcode_dist.get('LOAD', 0)
    store_count = opcode_dist.get('STORE', 0)
    if store_count > 0 and load_count > 0:
        patterns['store_to_load_ratio'] = store_count / load_count

    # Check for unusual operations
    patterns['has_popcount'] = opcode_dist.get('POPCOUNT', 0) > 0
    patterns['has_callind'] = opcode_dist.get('CALLIND', 0) > 0
    patterns['callind_count'] = opcode_dist.get('CALLIND', 0)
    patterns['call_count'] = opcode_dist.get('CALL', 0)
    patterns['branch_count'] = opcode_dist.get('BRANCH', 0) + opcode_dist.get('CBRANCH', 0)
    patterns['return_count'] = opcode_dist.get('RETURN', 0)

    return patterns


def analyze_pcode_file_for_esp_uncertainty(pcode_file_path):
    """Analyze a pcode file for ESP uncertainty patterns.

    Returns a dict with analysis results:
    - has_uncertain_esp_after_call: True if any CALL/CALLIND has uncertain ESP after
    - uncertain_call_count: Number of calls with uncertain ESP after
    - call_details: List of call instruction details
    - has_lea_esp: True if function uses LEA with ESP (takes address of stack var)
    - lea_esp_count: Number of LEA ESP instructions
    """
    result = {
        'has_uncertain_esp_after_call': False,
        'uncertain_call_count': 0,
        'uncertain_call_addresses': [],
        'esp_certainty_issues': [],
        'has_lea_esp': False,
        'lea_esp_count': 0,
        'lea_esp_addresses': [],
        'has_cfg_resolved': False,
        'cfg_resolved_count': 0,
    }

    try:
        with open(pcode_file_path, 'r') as f:
            lines = f.readlines()
    except IOError:
        return result

    # Parse pcode file for ESP certainty markers
    # Format: @<address> [ESP:offset](delta)<marker>  # <assembly>
    # Markers: ? = computed, ~ = cfg_resolved, !! = lost, !? = conflict
    import re
    esp_pattern = re.compile(r'^@([0-9a-fA-F]+)\s+\[ESP:([+-]?\d+)\](?:\([^)]+\))?([?~!]+)?\s+#\s+(.+)$')

    prev_was_call = False
    prev_call_addr = None

    for line in lines:
        match = esp_pattern.match(line.strip())
        if not match:
            continue

        addr = match.group(1)
        esp_offset = match.group(2)
        certainty_marker = match.group(3) or ''
        assembly = match.group(4)

        # Check for CFG-resolved markers (jump targets with uncertain ESP)
        if '~' in certainty_marker:
            result['has_cfg_resolved'] = True
            result['cfg_resolved_count'] += 1

        # Check if previous instruction was a CALL
        if prev_was_call:
            if certainty_marker in ('?', '~', '!!', '!?', '??'):
                result['has_uncertain_esp_after_call'] = True
                result['uncertain_call_count'] += 1
                result['uncertain_call_addresses'].append(prev_call_addr)
                result['esp_certainty_issues'].append({
                    'call_addr': prev_call_addr,
                    'after_addr': addr,
                    'certainty': certainty_marker,
                    'esp_offset': esp_offset
                })

        # Track if this is a CALL instruction
        is_call = assembly.upper().startswith('CALL ')
        prev_was_call = is_call
        if is_call:
            prev_call_addr = addr

        # Check for LEA with ESP - taking address of stack variable
        # Pattern: LEA reg, [ESP + offset] or LEA reg, [ESP]
        if re.match(r'LEA\s+\w+,\s*\[ESP', assembly, re.IGNORECASE):
            result['has_lea_esp'] = True
            result['lea_esp_count'] += 1
            result['lea_esp_addresses'].append(addr)

    return result


def analyze_unknown_with_pcode(unknown_funcs):
    """Deep analysis of unknown functions using pcode files.

    Checks for ESP uncertainty patterns that may cause BADSPACEBASE.
    """
    results = {
        'uncertain_esp_after_direct_call': [],
        'uncertain_esp_after_callind': [],
        'lea_esp_only': [],
        'cfg_resolved_only': [],
        'no_pattern_detected': []
    }

    for func in unknown_funcs:
        file_path = func.get('_file_path', '')
        if not file_path:
            continue

        # Construct pcode file path
        pcode_path = file_path.replace('.json', '.pcode')

        analysis = analyze_pcode_file_for_esp_uncertainty(pcode_path)
        func['_pcode_analysis'] = analysis  # Store for later use

        if analysis['has_uncertain_esp_after_call']:
            # Check if it's CALLIND or regular CALL
            has_callind = func.get('pcode_patterns', {}).get('has_callind', False)
            if has_callind:
                results['uncertain_esp_after_callind'].append({
                    'func': func,
                    'analysis': analysis
                })
            else:
                results['uncertain_esp_after_direct_call'].append({
                    'func': func,
                    'analysis': analysis
                })
        elif analysis['has_lea_esp']:
            # No uncertain call, but uses LEA ESP (takes address of stack var)
            results['lea_esp_only'].append({
                'func': func,
                'analysis': analysis
            })
        elif analysis['has_cfg_resolved']:
            # Has CFG-resolved markers (jump targets after RET, etc.)
            results['cfg_resolved_only'].append({
                'func': func,
                'analysis': analysis
            })
        else:
            results['no_pattern_detected'].append({
                'func': func,
                'analysis': analysis
            })

    return results


def print_report(functions):
    """Print a comprehensive diagnostic report."""

    # Filter to BADSPACEBASE functions
    badspacebase_funcs = [f for f in functions if has_badspacebase(f)]

    print("=" * 80)
    print("BADSPACEBASE Diagnostic Report")
    print("=" * 80)
    print()
    print(f"Total functions analyzed: {len(functions)}")
    print(f"Functions with BADSPACEBASE: {len(badspacebase_funcs)}")
    print()

    # Categorize all BADSPACEBASE functions
    cause_counts = defaultdict(int)
    cause_examples = defaultdict(list)

    for func in badspacebase_funcs:
        causes = categorize_badspacebase(func)
        if not causes:
            causes = ['unknown']

        for cause in causes:
            cause_counts[cause] += 1
            if len(cause_examples[cause]) < 5:
                cause_examples[cause].append({
                    'name': get_func_name(func),
                    'address': get_func_address(func),
                    'is_ebp_frame': is_ebp_frame(func),
                })

    # Print cause breakdown
    print("-" * 80)
    print("Cause Breakdown (functions may have multiple causes)")
    print("-" * 80)

    for cause, count in sorted(cause_counts.items(), key=lambda x: -x[1]):
        pct = 100 * count / len(badspacebase_funcs)
        print(f"  {cause:30s}: {count:5d} ({pct:5.1f}%)")

    print()

    # Print EBP frame breakdown
    ebp_frame_count = sum(1 for f in badspacebase_funcs if is_ebp_frame(f))
    non_ebp_count = len(badspacebase_funcs) - ebp_frame_count
    print("-" * 80)
    print("Frame Type Breakdown")
    print("-" * 80)
    print(f"  EBP frame:     {ebp_frame_count:5d} ({100*ebp_frame_count/len(badspacebase_funcs):.1f}%)")
    print(f"  Non-EBP frame: {non_ebp_count:5d} ({100*non_ebp_count/len(badspacebase_funcs):.1f}%)")
    print()

    # Analyze unknown causes
    unknown_funcs = analyze_unknown_badspacebase(functions)

    print("-" * 80)
    print(f"Functions with UNKNOWN cause: {len(unknown_funcs)}")
    print("-" * 80)

    if unknown_funcs:
        # Group by common patterns
        unknown_patterns = defaultdict(list)

        for func in unknown_funcs:
            patterns = analyze_pcode_patterns(func)

            # Create a pattern signature
            sig_parts = []
            if patterns.get('has_callind'):
                sig_parts.append(f"CALLIND({patterns['callind_count']})")
            if patterns.get('branch_count', 0) > 10:
                sig_parts.append(f"BRANCHES({patterns['branch_count']})")
            if patterns.get('return_count', 0) > 1:
                sig_parts.append(f"RETURNS({patterns['return_count']})")

            sig = '+'.join(sig_parts) if sig_parts else 'simple'
            unknown_patterns[sig].append(func)

        print("\nPattern signatures in unknown functions:")
        for sig, funcs in sorted(unknown_patterns.items(), key=lambda x: -len(x[1])):
            print(f"\n  {sig}: {len(funcs)} functions")
            for func in funcs[:3]:
                print(f"    - {get_func_name(func)} @ {get_func_address(func)}")
                print(f"      EBP frame: {is_ebp_frame(func)}")
                print(f"      Stack patterns: {get_all_stack_pattern_ids(func)}")

                # Show all suspect types
                all_suspects = set()
                for s in func.get('suspects', []):
                    all_suspects.add(s.get('type'))
                for s in func.get('resolved_suspects', []):
                    all_suspects.add(s.get('type') + ' (resolved)')
                print(f"      Suspect types: {sorted(all_suspects)}")

    print()

    # Cross-reference analysis: BADSPACEBASE without CALLIND/variadic but with stack_alignment
    only_alignment = []
    for func in badspacebase_funcs:
        causes = categorize_badspacebase(func)
        has_fix = any(c in causes for c in ('callind', 'variadic', 'untracked_callind'))
        has_alignment = 'stack_alignment' in causes
        if has_alignment and not has_fix:
            only_alignment.append(func)

    print("-" * 80)
    print(f"BADSPACEBASE with ONLY stack_alignment (no CALLIND/variadic): {len(only_alignment)}")
    print("-" * 80)

    if only_alignment:
        for func in only_alignment[:10]:
            print(f"  - {get_func_name(func)} @ {get_func_address(func)}")

    print()

    # Print resolution opportunities
    print("-" * 80)
    print("Resolution Opportunities")
    print("-" * 80)

    # CALLIND suspects not yet resolved
    unresolved_callind = sum(1 for f in badspacebase_funcs
                            for s in f.get('suspects', [])
                            if s.get('type', '').startswith('callind'))
    resolved_callind = sum(1 for f in badspacebase_funcs
                          for s in f.get('resolved_suspects', [])
                          if s.get('type', '').startswith('callind'))
    print(f"  CALLIND suspects: {unresolved_callind} unresolved, {resolved_callind} resolved")

    # Variadic suspects not yet resolved
    unresolved_variadic = sum(1 for f in badspacebase_funcs
                             for s in f.get('suspects', [])
                             if s.get('type', '').startswith('variadic'))
    resolved_variadic = sum(1 for f in badspacebase_funcs
                           for s in f.get('resolved_suspects', [])
                           if s.get('type', '').startswith('variadic'))
    print(f"  Variadic suspects: {unresolved_variadic} unresolved, {resolved_variadic} resolved")

    print()

    # Summary
    print("=" * 80)
    print("Summary")
    print("=" * 80)

    known_fixable = sum(1 for f in badspacebase_funcs
                        if any(c in categorize_badspacebase(f)
                              for c in ('callind', 'variadic')))
    stack_alignment_only = len(only_alignment)
    truly_unknown = len(unknown_funcs)

    print(f"  Known fixable (CALLIND/variadic): {known_fixable}")
    print(f"  Stack alignment only:              {stack_alignment_only}")
    print(f"  Truly unknown cause:               {truly_unknown}")
    print()

    # Deep analysis of unknown functions using pcode
    if unknown_funcs:
        print("=" * 80)
        print("Deep Analysis: ESP Uncertainty in Unknown Functions")
        print("=" * 80)

        pcode_analysis = analyze_unknown_with_pcode(unknown_funcs)

        direct_call_uncertain = len(pcode_analysis['uncertain_esp_after_direct_call'])
        callind_uncertain = len(pcode_analysis['uncertain_esp_after_callind'])
        lea_esp_only = len(pcode_analysis['lea_esp_only'])
        cfg_resolved_only = len(pcode_analysis['cfg_resolved_only'])
        no_pattern = len(pcode_analysis['no_pattern_detected'])

        print(f"\n  Pattern Breakdown:")
        print(f"  -----------------------------------------------")
        print(f"  Uncertain ESP after DIRECT CALL: {direct_call_uncertain:4d}")
        print(f"  Uncertain ESP after CALLIND:     {callind_uncertain:4d}")
        print(f"  LEA ESP only (stack addr taken): {lea_esp_only:4d}")
        print(f"  CFG-resolved only (jump targets):{cfg_resolved_only:4d}")
        print(f"  NO pattern detected:             {no_pattern:4d}")

        if pcode_analysis['uncertain_esp_after_direct_call']:
            print("\n  Examples of ESP uncertainty after direct CALL:")
            for item in pcode_analysis['uncertain_esp_after_direct_call'][:5]:
                func = item['func']
                analysis = item['analysis']
                print(f"    - {get_func_name(func)} @ {get_func_address(func)}")
                print(f"      Uncertain calls: {analysis['uncertain_call_count']}")
                if analysis['esp_certainty_issues']:
                    issue = analysis['esp_certainty_issues'][0]
                    print(f"      First issue: CALL @ {issue['call_addr']}, ESP marker '{issue['certainty']}' after")

        if pcode_analysis['lea_esp_only']:
            print("\n  Examples with LEA ESP (takes address of stack variable):")
            for item in pcode_analysis['lea_esp_only'][:5]:
                func = item['func']
                analysis = item['analysis']
                print(f"    - {get_func_name(func)} @ {get_func_address(func)}")
                print(f"      LEA ESP count: {analysis['lea_esp_count']}")
                print(f"      LEA addresses: {', '.join(analysis['lea_esp_addresses'][:3])}")
                print(f"      EBP frame: {is_ebp_frame(func)}")

        if pcode_analysis['cfg_resolved_only']:
            print("\n  Examples with CFG-resolved markers (jump targets):")
            for item in pcode_analysis['cfg_resolved_only'][:5]:
                func = item['func']
                analysis = item['analysis']
                print(f"    - {get_func_name(func)} @ {get_func_address(func)}")
                print(f"      CFG-resolved count: {analysis['cfg_resolved_count']}")
                print(f"      EBP frame: {is_ebp_frame(func)}")

        if pcode_analysis['no_pattern_detected']:
            print("\n  Examples with NO detected pattern (truly unknown):")
            for item in pcode_analysis['no_pattern_detected'][:5]:
                func = item['func']
                analysis = item['analysis']
                print(f"    - {get_func_name(func)} @ {get_func_address(func)}")
                patterns = analyze_pcode_patterns(func)
                print(f"      CALL count: {patterns.get('call_count', 0)}, CALLIND: {patterns.get('callind_count', 0)}")
                print(f"      EBP frame: {is_ebp_frame(func)}")
                print(f"      Has LEA ESP: {analysis['has_lea_esp']}, CFG resolved: {analysis['has_cfg_resolved']}")

        print()

    return unknown_funcs


def export_unknown_for_analysis(unknown_funcs, output_file="badspacebase_unknown.json"):
    """Export unknown functions to JSON for further analysis."""
    output_path = Path(__file__).parent / output_file

    export_data = []
    for func in unknown_funcs:
        # Convert full path to relative path from annotations root
        full_path = func.get('_file_path', '')
        relative_path = ''
        if full_path:
            try:
                relative_path = str(Path(full_path).relative_to(ANNOTATIONS_PATH))
            except ValueError:
                # If not relative to ANNOTATIONS_PATH, just use the filename
                relative_path = Path(full_path).name

        export_data.append({
            'name': get_func_name(func),
            'address': get_func_address(func),
            'is_ebp_frame': is_ebp_frame(func),
            'file_path': relative_path,
            'stack_patterns': get_all_stack_pattern_ids(func),
            'suspect_types': list(set(s.get('type') for s in func.get('suspects', []))),
            'pcode_patterns': analyze_pcode_patterns(func),
        })

    with open(output_path, 'w') as f:
        json.dump(export_data, f, indent=2)

    print(f"Exported {len(export_data)} unknown functions to {output_path}")


def main():
    """Main entry point."""
    print("Loading function JSONs...")
    functions = load_all_function_jsons(ANNOTATIONS_PATH)
    print(f"Loaded {len(functions)} functions")
    print()

    unknown_funcs = print_report(functions)

    # Export unknown for further analysis
    if unknown_funcs:
        export_unknown_for_analysis(unknown_funcs)


if __name__ == '__main__':
    main()
