# Analysis report generation for pseudocode export
# Provides statistics, complexity analysis, and comprehensive report generation
#
# Generates the following reports:
# - analysis_report.txt - Overall summary and statistics
# - virtual_file_completion.txt - Virtual file completion status
# - function_suspect_breakdown.txt - Function-by-function suspect breakdown
# - suspect_type_analysis.txt - Analysis by suspect type
# - easy_wins.txt - Prioritized action list
# - stack_pattern_analysis.txt - Stack pattern correlation
# - virtual_files.csv - CSV for graphing
# - functions.csv - CSV for analysis

import os
import json
import csv
import datetime
from collections import defaultdict
from ghidra_annotations.util.log import log_info


def load_function_data(pseudocode_src_dir):
    """Load all function JSON data from pseudocode directory."""
    functions = []

    for root, dirs, files in os.walk(pseudocode_src_dir):
        for filename in files:
            if filename.endswith('.json'):
                json_path = os.path.join(root, filename)
                try:
                    with open(json_path, 'r') as f:
                        data = json.load(f)

                        # Extract virtual filename from path
                        rel_path = os.path.relpath(root, pseudocode_src_dir)
                        if rel_path.startswith('src' + os.sep):
                            rel_path = rel_path[4:]  # Remove 'src/'

                        data['_json_path'] = json_path
                        data['_virtual_file'] = rel_path
                        data['_func_dir'] = root
                        data['_cpp_path'] = json_path.replace('.json', '.cpp')
                        data['_asm_path'] = json_path.replace('.json', '.asm')
                        functions.append(data)
                except Exception as e:
                    log_info("Warning: Failed to load %s: %s" % (json_path, str(e)))

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
    lines.append("Generated: %s" % datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))
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
    lines.append("Total virtual files: %d" % len(files))
    lines.append("Total functions: %d" % total_funcs)
    lines.append("Clean functions: %d (%.1f%%)" % (total_clean, total_clean*100.0/total_funcs if total_funcs else 0))
    lines.append("Files at 100%%: %d" % files_100)
    lines.append("Files at 90%%+: %d" % files_90_plus)
    lines.append("Files at 50%%+: %d" % files_50_plus)
    lines.append("")

    # Files at 100%
    lines.append("=" * 100)
    lines.append("FILES AT 100% (COMPLETE)")
    lines.append("=" * 100)
    complete_files = [(k, v) for k, v in sorted_files if v['clean_percent'] == 100]
    for vfile, data in complete_files:
        lines.append("  %s: %d functions, %d lines" % (vfile, data['total_count'], data['total_lines']))
    lines.append("")
    lines.append("Total: %d files" % len(complete_files))
    lines.append("")

    # Files 90-99% (almost done)
    lines.append("=" * 100)
    lines.append("FILES AT 90-99% (ALMOST COMPLETE)")
    lines.append("=" * 100)
    almost_files = [(k, v) for k, v in sorted_files if 90 <= v['clean_percent'] < 100]
    for vfile, data in almost_files:
        suspect_summary = ", ".join("%s:%d" % (k, v) for k, v in sorted(data['suspect_types'].items()))
        lines.append("  %5.1f%% | %s" % (data['clean_percent'], vfile))
        lines.append("         %d/%d clean, %d remaining" % (data['clean_count'], data['total_count'], data['remaining']))
        if suspect_summary:
            lines.append("         Suspects: %s" % suspect_summary)
        lines.append("")
    lines.append("Total: %d files" % len(almost_files))
    lines.append("")

    # Files 50-89%
    lines.append("=" * 100)
    lines.append("FILES AT 50-89%")
    lines.append("=" * 100)
    mid_files = [(k, v) for k, v in sorted_files if 50 <= v['clean_percent'] < 90]
    for vfile, data in mid_files:
        suspect_summary = ", ".join("%s:%d" % (k, v) for k, v in sorted(data['suspect_types'].items()))
        lines.append("  %5.1f%% | %s" % (data['clean_percent'], vfile))
        lines.append("         %d/%d clean, %d remaining" % (data['clean_count'], data['total_count'], data['remaining']))
        if suspect_summary:
            lines.append("         Suspects: %s" % suspect_summary)
    lines.append("")
    lines.append("Total: %d files" % len(mid_files))
    lines.append("")

    # Files below 50%
    lines.append("=" * 100)
    lines.append("FILES BELOW 50%")
    lines.append("=" * 100)
    low_files = [(k, v) for k, v in sorted_files if v['clean_percent'] < 50]
    for vfile, data in low_files:
        lines.append("  %5.1f%% | %s" % (data['clean_percent'], vfile))
        lines.append("         %d/%d clean, %d remaining" % (data['clean_count'], data['total_count'], data['remaining']))
    lines.append("")
    lines.append("Total: %d files" % len(low_files))

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "virtual_file_completion.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote virtual file completion report: %s" % report_path)
    except Exception as e:
        log_info("Failed to write virtual file completion report: %s" % str(e))

    return report_text


def generate_function_breakdown(functions, output_path):
    """Generate detailed function-by-function breakdown."""
    lines = []
    lines.append("=" * 120)
    lines.append("FUNCTION SUSPECT BREAKDOWN")
    lines.append("Generated: %s" % datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))
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
        lines.append("  %d suspects: %d functions" % (count, len(funcs)))
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
        lines.append("")
        lines.append("  [%s] (%d functions)" % (stype, len(funcs)))
        lines.append("  " + "-" * 60)
        for func in funcs[:20]:  # Show first 20
            func_info = func.get('function', {})
            complexity = func.get('complexity', {})
            suspects = func.get('suspects', [])
            suspect_text = suspects[0].get('text', '')[:60] if suspects else ''
            name = func_info.get('name', 'unknown')[:50]
            lines.append("    %-50s (%3d lines)" % (name, complexity.get('pseudocode_lines', 0)))
            lines.append("      %s..." % suspect_text)
        if len(funcs) > 20:
            lines.append("    ... and %d more" % (len(funcs) - 20))
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
        lines.append("  %s" % func_info.get('name', 'unknown')[:60])
        lines.append("    File: %s, Lines: %d, Types: %s" % (vfile, complexity.get('pseudocode_lines', 0), suspect_types))
    if len(few_suspects) > 50:
        lines.append("")
        lines.append("  ... and %d more" % (len(few_suspects) - 50))

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "function_suspect_breakdown.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote function breakdown report: %s" % report_path)
    except Exception as e:
        log_info("Failed to write function breakdown report: %s" % str(e))

    return report_text


def generate_suspect_type_analysis(functions, output_path):
    """Analyze suspects by type across all functions."""
    lines = []
    lines.append("=" * 100)
    lines.append("SUSPECT TYPE ANALYSIS")
    lines.append("Generated: %s" % datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))
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
        lines.append("  %-30s %5d (%5.1f%%)" % (stype, count, pct))
    lines.append("")

    # For each type, show examples and patterns
    for stype in sorted(by_type.keys(), key=lambda x: -len(by_type[x])):
        suspects = by_type[stype]
        lines.append("=" * 100)
        lines.append("TYPE: %s (%d occurrences)" % (stype, len(suspects)))
        lines.append("=" * 100)

        # Count unique match patterns
        match_counts = defaultdict(int)
        for s in suspects:
            match_counts[s['match']] += 1

        lines.append("")
        lines.append("Unique patterns:")
        for match, count in sorted(match_counts.items(), key=lambda x: -x[1])[:20]:
            lines.append("  %4dx  %s" % (count, match))

        # Show example functions
        lines.append("")
        lines.append("Example functions:")
        seen_funcs = set()
        for s in suspects[:30]:
            if s['func'] not in seen_funcs:
                seen_funcs.add(s['func'])
                lines.append("  %s" % s['func'])
                lines.append("    %s..." % s['text'][:80])

        lines.append("")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "suspect_type_analysis.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote suspect type analysis: %s" % report_path)
    except Exception as e:
        log_info("Failed to write suspect type analysis: %s" % str(e))

    return report_text


def generate_easy_wins_list(functions, files, output_path):
    """Generate prioritized list of easy wins."""
    lines = []
    lines.append("=" * 100)
    lines.append("EASY WINS - PRIORITIZED ACTION LIST")
    lines.append("Generated: %s" % datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))
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
        lines.append("")
        lines.append("  %s (%d remaining of %d)" % (vfile, data['remaining'], data['total_count']))
        # List the remaining functions
        for func in data['functions']:
            if func.get('complexity', {}).get('suspect_count', 0) > 0:
                func_info = func.get('function', {})
                suspects = func.get('suspects', [])
                suspect_types = [s.get('type', '?') for s in suspects]
                lines.append("    - %s" % func_info.get('name', 'unknown'))
                lines.append("      Suspects: %s" % ', '.join(suspect_types))
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
        lines.append("")
        lines.append("  [%s] - %d functions" % (stype, len(funcs)))
        for func in funcs[:10]:
            func_info = func.get('function', {})
            complexity = func.get('complexity', {})
            name = func_info.get('name', 'unknown')[:55]
            lines.append("    %-55s (%3d lines)" % (name, complexity.get('pseudocode_lines', 0)))
        if len(funcs) > 10:
            lines.append("    ... and %d more" % (len(funcs) - 10))
    lines.append("")

    # 3. Files at 90%+ that could be completed
    lines.append("=" * 100)
    lines.append("PRIORITY 3: Files at 90%+ (finish them off!)")
    lines.append("=" * 100)
    high_pct = [(k, v) for k, v in files.items() if 90 <= v['clean_percent'] < 100]
    high_pct.sort(key=lambda x: -x[1]['clean_percent'])
    for vfile, data in high_pct:
        lines.append("")
        lines.append("  %s (%.1f%% complete)" % (vfile, data['clean_percent']))
        lines.append("    %d functions remaining:" % data['remaining'])
        for func in data['functions']:
            if func.get('complexity', {}).get('suspect_count', 0) > 0:
                func_info = func.get('function', {})
                complexity = func.get('complexity', {})
                suspect_types = complexity.get('suspect_types', [])
                lines.append("      %s (%d lines)" % (func_info.get('name', 'unknown')[:50], complexity.get('pseudocode_lines', 0)))
                lines.append("        Types: %s" % suspect_types)

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "easy_wins.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote easy wins list: %s" % report_path)
    except Exception as e:
        log_info("Failed to write easy wins list: %s" % str(e))

    return report_text


def generate_stack_pattern_report(functions, output_path):
    """Generate report on functions with stack manipulation patterns."""
    lines = []
    lines.append("=" * 100)
    lines.append("STACK PATTERN ANALYSIS")
    lines.append("Generated: %s" % datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))
    lines.append("=" * 100)
    lines.append("")
    lines.append("Functions with stack manipulation patterns that affect decompilation quality.")
    lines.append("These patterns cause Ghidra to hallucinate parameters or misidentify locals.")
    lines.append("")

    # Collect functions with stack patterns
    funcs_with_patterns = []
    pattern_counts = defaultdict(int)

    for func in functions:
        stack_patterns = func.get('stack_patterns')
        if stack_patterns and stack_patterns.get('patterns'):
            funcs_with_patterns.append(func)
            for p in stack_patterns.get('patterns', []):
                pattern_counts[p.get('pattern_id', 'unknown')] += 1

    if not funcs_with_patterns:
        lines.append("No functions with stack manipulation patterns detected.")
    else:
        # Summary
        lines.append("SUMMARY")
        lines.append("-" * 50)
        lines.append("Functions with stack patterns: %d / %d" % (len(funcs_with_patterns), len(functions)))
        lines.append("")
        lines.append("Pattern type counts:")
        for pattern_id, count in sorted(pattern_counts.items(), key=lambda x: -x[1]):
            lines.append("  %-30s %5d" % (pattern_id, count))
        lines.append("")

        # Group by severity
        by_severity = {'high': [], 'medium': [], 'low': []}
        for func in funcs_with_patterns:
            severity = func.get('stack_patterns', {}).get('severity', 'unknown')
            if severity in by_severity:
                by_severity[severity].append(func)

        # High severity functions
        if by_severity['high']:
            lines.append("=" * 100)
            lines.append("HIGH SEVERITY - Severe decompilation impact")
            lines.append("=" * 100)
            for func in by_severity['high']:
                func_info = func.get('function', {})
                stack_patterns = func.get('stack_patterns', {})
                suspects = func.get('complexity', {}).get('suspect_count', 0)
                lines.append("")
                lines.append("  %s" % func_info.get('name', 'unknown'))
                lines.append("    Address: %s" % func_info.get('address', '?'))
                lines.append("    Suspect count: %d" % suspects)
                lines.append("    Note: %s" % stack_patterns.get('note', ''))
                for p in stack_patterns.get('patterns', []):
                    lines.append("    - [%s] at %s: %s" % (p.get('pattern_id'), p.get('address', '?'), p.get('instruction', '')))
            lines.append("")

        # Medium severity functions
        if by_severity['medium']:
            lines.append("=" * 100)
            lines.append("MEDIUM SEVERITY - May cause decompiler artifacts")
            lines.append("=" * 100)
            for func in by_severity['medium'][:50]:  # Limit to 50
                func_info = func.get('function', {})
                stack_patterns = func.get('stack_patterns', {})
                suspects = func.get('complexity', {}).get('suspect_count', 0)
                vfile = func.get('_virtual_file', '')
                lines.append("")
                lines.append("  %s" % func_info.get('name', 'unknown'))
                lines.append("    File: %s, Suspects: %d" % (vfile, suspects))
                for p in stack_patterns.get('patterns', []):
                    lines.append("    - [%s] at %s: %s" % (p.get('pattern_id'), p.get('address', '?'), p.get('instruction', '')))
            if len(by_severity['medium']) > 50:
                lines.append("")
                lines.append("  ... and %d more functions" % (len(by_severity['medium']) - 50))
            lines.append("")

        # Correlation analysis
        lines.append("=" * 100)
        lines.append("CORRELATION: Stack patterns vs suspect counts")
        lines.append("=" * 100)
        lines.append("")
        lines.append("Functions with stack patterns tend to have more suspects:")
        lines.append("")

        # Calculate average suspects for functions with vs without patterns
        with_patterns_suspects = [f.get('complexity', {}).get('suspect_count', 0) for f in funcs_with_patterns]
        without_patterns_suspects = [f.get('complexity', {}).get('suspect_count', 0)
                                     for f in functions if not f.get('stack_patterns') or not f.get('stack_patterns', {}).get('patterns')]

        avg_with = sum(with_patterns_suspects) / len(with_patterns_suspects) if with_patterns_suspects else 0
        avg_without = sum(without_patterns_suspects) / len(without_patterns_suspects) if without_patterns_suspects else 0

        lines.append("  With stack patterns:    avg %.1f suspects/function" % avg_with)
        lines.append("  Without stack patterns: avg %.1f suspects/function" % avg_without)

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "stack_pattern_analysis.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote stack pattern analysis: %s" % report_path)
    except Exception as e:
        log_info("Failed to write stack pattern analysis: %s" % str(e))

    return report_text


def generate_csv_data(functions, files, output_path):
    """Generate CSV files for further analysis or graphing."""

    # Virtual files CSV
    csv_path = os.path.join(output_path, "virtual_files.csv")
    try:
        with open(csv_path, 'w', newline='') as f:
            writer = csv.writer(f)
            writer.writerow(['virtual_file', 'total_functions', 'clean_functions', 'remaining',
                             'clean_percent', 'total_lines', 'total_suspects'])
            for vfile, data in sorted(files.items()):
                writer.writerow([
                    vfile, data['total_count'], data['clean_count'], data['remaining'],
                    "%.1f" % data['clean_percent'], data['total_lines'], data['suspect_count']
                ])
        log_info("Wrote virtual files CSV: %s" % csv_path)
    except Exception as e:
        log_info("Failed to write virtual files CSV: %s" % str(e))

    # Functions CSV
    csv_path = os.path.join(output_path, "functions.csv")
    try:
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
        log_info("Wrote functions CSV: %s" % csv_path)
    except Exception as e:
        log_info("Failed to write functions CSV: %s" % str(e))


def generate_summary_report(functions, files, output_path):
    """Generate the main analysis summary report."""
    # Calculate statistics
    total_functions = len(functions)
    if total_functions == 0:
        log_info("No function data found for report")
        return

    suspect_type_counts = defaultdict(int)
    total_suspects = 0

    for func in functions:
        for suspect in func.get('suspects', []):
            suspect_type_counts[suspect.get('type', 'unknown')] += 1
            total_suspects += 1

    zero_suspect_funcs = [f for f in functions if f.get('complexity', {}).get('suspect_count', 0) == 0]
    zero_suspect_count = len(zero_suspect_funcs)
    line_counts = [f.get('complexity', {}).get('pseudocode_lines', 0) for f in functions]
    avg_lines = sum(line_counts) / len(line_counts) if line_counts else 0
    max_lines = max(line_counts) if line_counts else 0
    min_lines = min(line_counts) if line_counts else 0
    scores = [f.get('complexity', {}).get('complexity_score', 0) for f in functions]
    avg_score = sum(scores) / len(scores) if scores else 0

    # Virtual file stats
    files_100 = sum(1 for f in files.values() if f['clean_percent'] == 100)
    files_90_plus = sum(1 for f in files.values() if f['clean_percent'] >= 90)

    # Generate text report
    report_lines = []
    report_lines.append("=" * 80)
    report_lines.append("NOCTURNE DECOMPILATION ANALYSIS REPORT")
    report_lines.append("Generated: %s" % datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S"))
    report_lines.append("=" * 80)
    report_lines.append("")
    report_lines.append("SUMMARY")
    report_lines.append("-" * 40)
    report_lines.append("Total functions: %d" % total_functions)
    report_lines.append("Functions with zero suspects: %d (%.1f%%)" % (
        zero_suspect_count, (zero_suspect_count * 100.0 / total_functions) if total_functions > 0 else 0))
    report_lines.append("Functions with suspects: %d (%.1f%%)" % (
        total_functions - zero_suspect_count,
        ((total_functions - zero_suspect_count) * 100.0 / total_functions) if total_functions > 0 else 0))
    report_lines.append("")
    report_lines.append("Total suspect patterns: %d" % total_suspects)
    report_lines.append("Average suspects per function: %.2f" % (total_suspects / total_functions if total_functions > 0 else 0))
    report_lines.append("")
    report_lines.append("Virtual files: %d total, %d at 100%%, %d at 90%%+" % (len(files), files_100, files_90_plus))
    report_lines.append("")
    report_lines.append("Pseudocode lines:")
    report_lines.append("  Min: %d, Max: %d, Average: %.1f" % (min_lines, max_lines, avg_lines))
    report_lines.append("")
    report_lines.append("Average complexity score: %.1f" % avg_score)
    report_lines.append("")
    report_lines.append("SUSPECT PATTERN BREAKDOWN")
    report_lines.append("-" * 40)
    for stype, count in sorted(suspect_type_counts.items(), key=lambda x: -x[1]):
        report_lines.append("  %-25s %d" % (stype, count))
    report_lines.append("")

    # Sort zero-suspect functions by line count
    report_lines.append("EASIEST FUNCTIONS (Zero Suspects, Sorted by Size)")
    report_lines.append("-" * 40)
    zero_suspect_funcs.sort(key=lambda x: x.get('complexity', {}).get('pseudocode_lines', 0))
    for func in zero_suspect_funcs[:50]:
        func_info = func.get('function', {})
        complexity = func.get('complexity', {})
        report_lines.append("  %s: %s (%d lines)" % (
            func_info.get('address', '?'),
            func_info.get('name', 'unknown'),
            complexity.get('pseudocode_lines', 0)))
    if len(zero_suspect_funcs) > 50:
        report_lines.append("  ... and %d more" % (len(zero_suspect_funcs) - 50))
    report_lines.append("")

    # Get top 30 by complexity score (reversed)
    report_lines.append("MOST COMPLEX FUNCTIONS (Highest Complexity Score)")
    report_lines.append("-" * 40)
    complex_funcs = sorted(functions, key=lambda x: x.get('complexity', {}).get('complexity_score', 0), reverse=True)
    for func in complex_funcs[:30]:
        func_info = func.get('function', {})
        complexity = func.get('complexity', {})
        report_lines.append("  %s: %s (score: %d, suspects: %d, lines: %d)" % (
            func_info.get('address', '?'),
            func_info.get('name', 'unknown'),
            complexity.get('complexity_score', 0),
            complexity.get('suspect_count', 0),
            complexity.get('pseudocode_lines', 0)))
    report_lines.append("")

    # Group functions by their primary suspect type
    report_lines.append("FUNCTIONS BY SUSPECT TYPE")
    report_lines.append("-" * 40)
    for stype in sorted(suspect_type_counts.keys(), key=lambda x: -suspect_type_counts[x]):
        funcs_with_type = [f for f in functions
                          if stype in f.get('complexity', {}).get('suspect_types', [])]
        report_lines.append("")
        report_lines.append("  %s (%d functions):" % (stype, len(funcs_with_type)))
        for func in funcs_with_type[:10]:
            func_info = func.get('function', {})
            report_lines.append("    %s: %s" % (func_info.get('address', '?'), func_info.get('name', 'unknown')))
        if len(funcs_with_type) > 10:
            report_lines.append("    ... and %d more" % (len(funcs_with_type) - 10))

    # Write text report
    report_path = os.path.join(output_path, "analysis_report.txt")
    try:
        with open(report_path, 'w') as f:
            f.write("\n".join(report_lines))
        log_info("Wrote analysis report: %s" % report_path)
    except Exception as e:
        log_info("Failed to write analysis report: %s" % str(e))

    # Generate file lists
    # Find the git repo root
    repo_root = output_path
    while repo_root and repo_root != '/':
        if os.path.exists(os.path.join(repo_root, '.git')):
            break
        repo_root = os.path.dirname(repo_root)
    if not repo_root or repo_root == '/':
        repo_root = output_path

    def make_relative(abs_path):
        if abs_path and abs_path.startswith(repo_root):
            return os.path.relpath(abs_path, repo_root)
        return abs_path

    # List of zero-suspect function .cpp paths (sorted by name for consistency)
    zero_suspect_list_path = os.path.join(output_path, "zero_suspect_functions.txt")
    try:
        zero_suspect_funcs_sorted = sorted(zero_suspect_funcs,
            key=lambda x: x.get('function', {}).get('name', ''))
        with open(zero_suspect_list_path, 'w') as f:
            for func in zero_suspect_funcs_sorted:
                rel_path = make_relative(func.get('_cpp_path', ''))
                f.write(rel_path + '\n')
        log_info("Wrote zero-suspect function list: %s" % zero_suspect_list_path)
    except Exception as e:
        log_info("Failed to write zero-suspect list: %s" % str(e))

    # List of all functions sorted by complexity (easiest first)
    functions_sorted = sorted(functions, key=lambda x: x.get('complexity', {}).get('complexity_score', 0))
    all_funcs_list_path = os.path.join(output_path, "functions_by_complexity.txt")
    try:
        with open(all_funcs_list_path, 'w') as f:
            for func in functions_sorted:
                rel_path = make_relative(func.get('_cpp_path', ''))
                f.write(rel_path + '\n')
        log_info("Wrote functions-by-complexity list: %s" % all_funcs_list_path)
    except Exception as e:
        log_info("Failed to write functions-by-complexity list: %s" % str(e))


def generate_analysis_report(pseudocode_src_dir, output_path):
    """Generate all analysis reports from exported function JSON files.

    Args:
        pseudocode_src_dir: Directory containing the .json files
        output_path: Base directory for output files
    """
    log_info("Loading function data from %s" % pseudocode_src_dir)
    functions = load_function_data(pseudocode_src_dir)
    log_info("Loaded %d functions for analysis" % len(functions))

    if not functions:
        log_info("No function data found for report generation")
        return

    # Analyze by virtual file
    log_info("Analyzing by virtual file...")
    files = analyze_by_virtual_file(functions)
    log_info("Found %d virtual files" % len(files))

    # Generate all reports
    log_info("Generating analysis reports...")
    generate_summary_report(functions, files, output_path)
    generate_virtual_file_report(files, output_path)
    generate_function_breakdown(functions, output_path)
    generate_suspect_type_analysis(functions, output_path)
    generate_easy_wins_list(functions, files, output_path)
    generate_stack_pattern_report(functions, output_path)
    generate_csv_data(functions, files, output_path)

    # Print quick summary
    total_funcs = len(functions)
    clean_funcs = sum(1 for f in functions if f.get('complexity', {}).get('suspect_count', 0) == 0)
    files_100 = sum(1 for f in files.values() if f['clean_percent'] == 100)
    files_90 = sum(1 for f in files.values() if f['clean_percent'] >= 90)
    log_info("")
    log_info("Analysis Summary:")
    log_info("  Total functions: %d" % total_funcs)
    log_info("  Clean functions: %d (%.1f%%)" % (clean_funcs, clean_funcs*100.0/total_funcs if total_funcs else 0))
    log_info("  Files at 100%%: %d" % files_100)
    log_info("  Files at 90%%+: %d" % files_90)
