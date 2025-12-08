#!/usr/bin/env python3
"""
Suspect Analysis Report Generator

Analyzes exported pseudocode JSON files to generate detailed reports on:
- Virtual file completion status (how close each file is to 100% clean)
- Function-level breakdown of suspects
- Easy wins (functions/files almost done)
- Graphs and visualizations

Usage:
    python analyze_suspects.py [path_to_annotations]
"""

import os
import sys
import json
import argparse
from collections import defaultdict
from datetime import datetime


def find_annotation_path():
    """Find the annotations directory relative to this script."""
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.dirname(script_dir)

    # Look for common annotation paths
    candidates = [
        os.path.join(repo_root, "annotations", "nocedit.exe"),
        os.path.join(repo_root, "annotations"),
    ]

    for path in candidates:
        if os.path.exists(path):
            return path

    return None


def load_function_data(pseudocode_dir):
    """Load all function JSON data from pseudocode directory."""
    functions = []

    for root, dirs, files in os.walk(pseudocode_dir):
        for filename in files:
            if filename.endswith('.json'):
                json_path = os.path.join(root, filename)
                try:
                    with open(json_path, 'r') as f:
                        data = json.load(f)

                        # Extract virtual filename from path
                        # e.g., .../src/core/actor.cpp/func.json -> core/actor.cpp
                        rel_path = os.path.relpath(root, pseudocode_dir)
                        if rel_path.startswith('src' + os.sep):
                            rel_path = rel_path[4:]  # Remove 'src/'

                        data['_json_path'] = json_path
                        data['_virtual_file'] = rel_path
                        data['_func_dir'] = root
                        functions.append(data)
                except Exception as e:
                    print(f"Warning: Failed to load {json_path}: {e}")

    return functions


def analyze_by_virtual_file(functions):
    """Group and analyze functions by virtual file."""
    files = defaultdict(lambda: {
        'functions': [],
        'total_count': 0,
        'clean_count': 0,
        'suspect_count': 0,
        'suspect_types': defaultdict(int),
        'total_lines': 0,
    })

    for func in functions:
        vfile = func.get('_virtual_file', 'unknown')
        complexity = func.get('complexity', {})
        suspects = func.get('suspects', [])

        files[vfile]['functions'].append(func)
        files[vfile]['total_count'] += 1
        files[vfile]['total_lines'] += complexity.get('pseudocode_lines', 0)

        if complexity.get('suspect_count', 0) == 0:
            files[vfile]['clean_count'] += 1
        else:
            files[vfile]['suspect_count'] += complexity.get('suspect_count', 0)
            for suspect in suspects:
                stype = suspect.get('type', 'unknown')
                files[vfile]['suspect_types'][stype] += 1

    # Calculate percentages
    for vfile, data in files.items():
        total = data['total_count']
        clean = data['clean_count']
        data['clean_percent'] = (clean * 100.0 / total) if total > 0 else 0
        data['remaining'] = total - clean

    return dict(files)


def generate_virtual_file_report(files, output_path):
    """Generate report showing virtual file completion status."""
    lines = []
    lines.append("=" * 100)
    lines.append("VIRTUAL FILE COMPLETION REPORT")
    lines.append(f"Generated: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    lines.append("=" * 100)
    lines.append("")

    # Sort by completion percentage (highest first)
    sorted_files = sorted(files.items(), key=lambda x: (-x[1]['clean_percent'], x[0]))

    # Summary stats
    total_funcs = sum(f['total_count'] for f in files.values())
    total_clean = sum(f['clean_count'] for f in files.values())
    files_100 = sum(1 for f in files.values() if f['clean_percent'] == 100)
    files_90_plus = sum(1 for f in files.values() if f['clean_percent'] >= 90)
    files_50_plus = sum(1 for f in files.values() if f['clean_percent'] >= 50)

    lines.append("SUMMARY")
    lines.append("-" * 50)
    lines.append(f"Total virtual files: {len(files)}")
    lines.append(f"Total functions: {total_funcs}")
    lines.append(f"Clean functions: {total_clean} ({total_clean*100.0/total_funcs:.1f}%)")
    lines.append(f"Files at 100%: {files_100}")
    lines.append(f"Files at 90%+: {files_90_plus}")
    lines.append(f"Files at 50%+: {files_50_plus}")
    lines.append("")

    # Files at 100%
    lines.append("=" * 100)
    lines.append("FILES AT 100% (COMPLETE)")
    lines.append("=" * 100)
    complete_files = [(k, v) for k, v in sorted_files if v['clean_percent'] == 100]
    for vfile, data in complete_files:
        lines.append(f"  {vfile}: {data['total_count']} functions, {data['total_lines']} lines")
    lines.append(f"\nTotal: {len(complete_files)} files")
    lines.append("")

    # Files 90-99% (almost done)
    lines.append("=" * 100)
    lines.append("FILES AT 90-99% (ALMOST COMPLETE)")
    lines.append("=" * 100)
    almost_files = [(k, v) for k, v in sorted_files if 90 <= v['clean_percent'] < 100]
    for vfile, data in almost_files:
        suspect_summary = ", ".join(f"{k}:{v}" for k, v in sorted(data['suspect_types'].items()))
        lines.append(f"  {data['clean_percent']:5.1f}% | {vfile}")
        lines.append(f"         {data['clean_count']}/{data['total_count']} clean, {data['remaining']} remaining")
        if suspect_summary:
            lines.append(f"         Suspects: {suspect_summary}")
        lines.append("")
    lines.append(f"Total: {len(almost_files)} files")
    lines.append("")

    # Files 50-89%
    lines.append("=" * 100)
    lines.append("FILES AT 50-89%")
    lines.append("=" * 100)
    mid_files = [(k, v) for k, v in sorted_files if 50 <= v['clean_percent'] < 90]
    for vfile, data in mid_files:
        suspect_summary = ", ".join(f"{k}:{v}" for k, v in sorted(data['suspect_types'].items()))
        lines.append(f"  {data['clean_percent']:5.1f}% | {vfile}")
        lines.append(f"         {data['clean_count']}/{data['total_count']} clean, {data['remaining']} remaining")
        if suspect_summary:
            lines.append(f"         Suspects: {suspect_summary}")
    lines.append(f"\nTotal: {len(mid_files)} files")
    lines.append("")

    # Files below 50%
    lines.append("=" * 100)
    lines.append("FILES BELOW 50%")
    lines.append("=" * 100)
    low_files = [(k, v) for k, v in sorted_files if v['clean_percent'] < 50]
    for vfile, data in low_files:
        suspect_summary = ", ".join(f"{k}:{v}" for k, v in sorted(data['suspect_types'].items()))
        lines.append(f"  {data['clean_percent']:5.1f}% | {vfile}")
        lines.append(f"         {data['clean_count']}/{data['total_count']} clean, {data['remaining']} remaining")
    lines.append(f"\nTotal: {len(low_files)} files")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "virtual_file_completion.txt")
    with open(report_path, 'w') as f:
        f.write(report_text)
    print(f"Wrote virtual file completion report: {report_path}")

    return report_text


def generate_function_breakdown(functions, output_path):
    """Generate detailed function-by-function breakdown."""
    lines = []
    lines.append("=" * 120)
    lines.append("FUNCTION SUSPECT BREAKDOWN")
    lines.append(f"Generated: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    lines.append("=" * 120)
    lines.append("")

    # Group by suspect count
    by_suspect_count = defaultdict(list)
    for func in functions:
        count = func.get('complexity', {}).get('suspect_count', 0)
        by_suspect_count[count].append(func)

    # Summary
    lines.append("SUSPECT COUNT DISTRIBUTION")
    lines.append("-" * 50)
    for count in sorted(by_suspect_count.keys()):
        funcs = by_suspect_count[count]
        lines.append(f"  {count} suspects: {len(funcs)} functions")
    lines.append("")

    # Functions with 1 suspect (easy wins)
    lines.append("=" * 120)
    lines.append("EASY WINS: FUNCTIONS WITH 1 SUSPECT")
    lines.append("=" * 120)
    one_suspect = by_suspect_count.get(1, [])
    one_suspect.sort(key=lambda x: x.get('complexity', {}).get('pseudocode_lines', 0))

    # Group by suspect type
    by_type = defaultdict(list)
    for func in one_suspect:
        suspects = func.get('suspects', [])
        if suspects:
            stype = suspects[0].get('type', 'unknown')
            by_type[stype].append(func)

    for stype in sorted(by_type.keys(), key=lambda x: -len(by_type[x])):
        funcs = by_type[stype]
        lines.append(f"\n  [{stype}] ({len(funcs)} functions)")
        lines.append("  " + "-" * 60)
        for func in funcs[:20]:  # Show first 20
            func_info = func.get('function', {})
            complexity = func.get('complexity', {})
            suspects = func.get('suspects', [])
            suspect_text = suspects[0].get('text', '')[:60] if suspects else ''
            lines.append(f"    {func_info.get('name', 'unknown')[:50]:<50} ({complexity.get('pseudocode_lines', 0):3d} lines)")
            lines.append(f"      {suspect_text}...")
        if len(funcs) > 20:
            lines.append(f"    ... and {len(funcs) - 20} more")
    lines.append("")

    # Functions with 2-3 suspects
    lines.append("=" * 120)
    lines.append("FUNCTIONS WITH 2-3 SUSPECTS")
    lines.append("=" * 120)
    few_suspects = by_suspect_count.get(2, []) + by_suspect_count.get(3, [])
    few_suspects.sort(key=lambda x: (x.get('complexity', {}).get('suspect_count', 0),
                                      x.get('complexity', {}).get('pseudocode_lines', 0)))
    for func in few_suspects[:50]:
        func_info = func.get('function', {})
        complexity = func.get('complexity', {})
        suspect_types = complexity.get('suspect_types', [])
        vfile = func.get('_virtual_file', '')
        lines.append(f"  {func_info.get('name', 'unknown')[:60]}")
        lines.append(f"    File: {vfile}, Lines: {complexity.get('pseudocode_lines', 0)}, Types: {suspect_types}")
    if len(few_suspects) > 50:
        lines.append(f"\n  ... and {len(few_suspects) - 50} more")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "function_suspect_breakdown.txt")
    with open(report_path, 'w') as f:
        f.write(report_text)
    print(f"Wrote function breakdown report: {report_path}")

    return report_text


def generate_suspect_type_analysis(functions, output_path):
    """Analyze suspects by type across all functions."""
    lines = []
    lines.append("=" * 100)
    lines.append("SUSPECT TYPE ANALYSIS")
    lines.append(f"Generated: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    lines.append("=" * 100)
    lines.append("")

    # Collect all suspects
    all_suspects = []
    for func in functions:
        for suspect in func.get('suspects', []):
            all_suspects.append({
                'type': suspect.get('type', 'unknown'),
                'match': suspect.get('match', ''),
                'text': suspect.get('text', ''),
                'line': suspect.get('line', 0),
                'func': func.get('function', {}).get('name', 'unknown'),
                'vfile': func.get('_virtual_file', ''),
            })

    # Count by type
    by_type = defaultdict(list)
    for s in all_suspects:
        by_type[s['type']].append(s)

    lines.append("SUSPECT TYPE COUNTS")
    lines.append("-" * 50)
    for stype in sorted(by_type.keys(), key=lambda x: -len(by_type[x])):
        count = len(by_type[stype])
        pct = count * 100.0 / len(all_suspects) if all_suspects else 0
        lines.append(f"  {stype:<30} {count:5d} ({pct:5.1f}%)")
    lines.append("")

    # For each type, show examples and patterns
    for stype in sorted(by_type.keys(), key=lambda x: -len(by_type[x])):
        suspects = by_type[stype]
        lines.append("=" * 100)
        lines.append(f"TYPE: {stype} ({len(suspects)} occurrences)")
        lines.append("=" * 100)

        # Count unique match patterns
        match_counts = defaultdict(int)
        for s in suspects:
            match_counts[s['match']] += 1

        lines.append("\nUnique patterns:")
        for match, count in sorted(match_counts.items(), key=lambda x: -x[1])[:20]:
            lines.append(f"  {count:4d}x  {match}")

        # Show example functions
        lines.append("\nExample functions:")
        seen_funcs = set()
        for s in suspects[:30]:
            if s['func'] not in seen_funcs:
                seen_funcs.add(s['func'])
                lines.append(f"  {s['func']}")
                lines.append(f"    {s['text'][:80]}...")

        lines.append("")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "suspect_type_analysis.txt")
    with open(report_path, 'w') as f:
        f.write(report_text)
    print(f"Wrote suspect type analysis: {report_path}")

    return report_text


def generate_easy_wins_list(functions, files, output_path):
    """Generate prioritized list of easy wins."""
    lines = []
    lines.append("=" * 100)
    lines.append("EASY WINS - PRIORITIZED ACTION LIST")
    lines.append(f"Generated: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    lines.append("=" * 100)
    lines.append("")

    lines.append("This list shows the easiest paths to improving decompilation quality,")
    lines.append("sorted by effort required (lowest effort first).")
    lines.append("")

    # 1. Files with only 1-2 functions remaining
    lines.append("=" * 100)
    lines.append("PRIORITY 1: Files with 1-2 functions remaining")
    lines.append("=" * 100)
    almost_done = [(k, v) for k, v in files.items() if 0 < v['remaining'] <= 2]
    almost_done.sort(key=lambda x: x[1]['remaining'])
    for vfile, data in almost_done:
        lines.append(f"\n  {vfile} ({data['remaining']} remaining of {data['total_count']})")
        # List the remaining functions
        for func in data['functions']:
            if func.get('complexity', {}).get('suspect_count', 0) > 0:
                func_info = func.get('function', {})
                suspects = func.get('suspects', [])
                suspect_types = [s.get('type', '?') for s in suspects]
                lines.append(f"    - {func_info.get('name', 'unknown')}")
                lines.append(f"      Suspects: {', '.join(suspect_types)}")
    lines.append("")

    # 2. Simple functions with 1 suspect (under 50 lines)
    lines.append("=" * 100)
    lines.append("PRIORITY 2: Small functions with 1 suspect (<50 lines)")
    lines.append("=" * 100)
    small_one_suspect = [
        f for f in functions
        if f.get('complexity', {}).get('suspect_count', 0) == 1
        and f.get('complexity', {}).get('pseudocode_lines', 0) < 50
    ]
    small_one_suspect.sort(key=lambda x: x.get('complexity', {}).get('pseudocode_lines', 0))

    by_type = defaultdict(list)
    for func in small_one_suspect:
        suspects = func.get('suspects', [])
        if suspects:
            by_type[suspects[0].get('type', 'unknown')].append(func)

    for stype in sorted(by_type.keys(), key=lambda x: -len(by_type[x])):
        funcs = by_type[stype]
        lines.append(f"\n  [{stype}] - {len(funcs)} functions")
        for func in funcs[:10]:
            func_info = func.get('function', {})
            complexity = func.get('complexity', {})
            lines.append(f"    {func_info.get('name', 'unknown')[:55]:<55} ({complexity.get('pseudocode_lines', 0):3d} lines)")
        if len(funcs) > 10:
            lines.append(f"    ... and {len(funcs) - 10} more")
    lines.append("")

    # 3. Files at 90%+ that could be completed
    lines.append("=" * 100)
    lines.append("PRIORITY 3: Files at 90%+ (finish them off!)")
    lines.append("=" * 100)
    high_pct = [(k, v) for k, v in files.items() if 90 <= v['clean_percent'] < 100]
    high_pct.sort(key=lambda x: -x[1]['clean_percent'])
    for vfile, data in high_pct:
        lines.append(f"\n  {vfile} ({data['clean_percent']:.1f}% complete)")
        lines.append(f"    {data['remaining']} functions remaining:")
        for func in data['functions']:
            if func.get('complexity', {}).get('suspect_count', 0) > 0:
                func_info = func.get('function', {})
                complexity = func.get('complexity', {})
                suspect_types = complexity.get('suspect_types', [])
                lines.append(f"      {func_info.get('name', 'unknown')[:50]} ({complexity.get('pseudocode_lines', 0)} lines)")
                lines.append(f"        Types: {suspect_types}")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "easy_wins.txt")
    with open(report_path, 'w') as f:
        f.write(report_text)
    print(f"Wrote easy wins list: {report_path}")

    return report_text


def generate_csv_data(functions, files, output_path):
    """Generate CSV files for further analysis or graphing."""
    import csv

    # Virtual files CSV
    csv_path = os.path.join(output_path, "virtual_files.csv")
    with open(csv_path, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(['virtual_file', 'total_functions', 'clean_functions', 'remaining',
                         'clean_percent', 'total_lines', 'total_suspects'])
        for vfile, data in sorted(files.items()):
            writer.writerow([
                vfile, data['total_count'], data['clean_count'], data['remaining'],
                f"{data['clean_percent']:.1f}", data['total_lines'], data['suspect_count']
            ])
    print(f"Wrote virtual files CSV: {csv_path}")

    # Functions CSV
    csv_path = os.path.join(output_path, "functions.csv")
    with open(csv_path, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(['name', 'address', 'virtual_file', 'lines', 'suspect_count',
                         'suspect_types', 'complexity_score'])
        for func in functions:
            func_info = func.get('function', {})
            complexity = func.get('complexity', {})
            writer.writerow([
                func_info.get('name', ''),
                func_info.get('address', ''),
                func.get('_virtual_file', ''),
                complexity.get('pseudocode_lines', 0),
                complexity.get('suspect_count', 0),
                '|'.join(complexity.get('suspect_types', [])),
                complexity.get('complexity_score', 0)
            ])
    print(f"Wrote functions CSV: {csv_path}")


def main():
    parser = argparse.ArgumentParser(description='Analyze pseudocode suspect patterns')
    parser.add_argument('path', nargs='?', help='Path to annotations directory')
    parser.add_argument('--output', '-o', help='Output directory for reports')
    args = parser.parse_args()

    # Find annotation path
    ann_path = args.path
    if not ann_path:
        ann_path = find_annotation_path()
        if not ann_path:
            print("Error: Could not find annotations directory")
            print("Please specify path: python analyze_suspects.py <path>")
            sys.exit(1)

    pseudocode_dir = os.path.join(ann_path, "pseudocode")
    if not os.path.exists(pseudocode_dir):
        print(f"Error: Pseudocode directory not found: {pseudocode_dir}")
        sys.exit(1)

    output_path = args.output or ann_path

    print(f"Analyzing: {pseudocode_dir}")
    print(f"Output to: {output_path}")
    print("")

    # Load all function data
    print("Loading function data...")
    functions = load_function_data(pseudocode_dir)
    print(f"Loaded {len(functions)} functions")

    # Analyze by virtual file
    print("Analyzing by virtual file...")
    files = analyze_by_virtual_file(functions)
    print(f"Found {len(files)} virtual files")

    # Generate reports
    print("\nGenerating reports...")
    generate_virtual_file_report(files, output_path)
    generate_function_breakdown(functions, output_path)
    generate_suspect_type_analysis(functions, output_path)
    generate_easy_wins_list(functions, files, output_path)
    generate_csv_data(functions, files, output_path)

    print("\nDone!")

    # Print quick summary
    total_funcs = len(functions)
    clean_funcs = sum(1 for f in functions if f.get('complexity', {}).get('suspect_count', 0) == 0)
    print(f"\nQuick Summary:")
    print(f"  Total functions: {total_funcs}")
    print(f"  Clean functions: {clean_funcs} ({clean_funcs*100.0/total_funcs:.1f}%)")
    print(f"  Files at 100%: {sum(1 for f in files.values() if f['clean_percent'] == 100)}")
    print(f"  Files at 90%+: {sum(1 for f in files.values() if f['clean_percent'] >= 90)}")


if __name__ == '__main__':
    main()
