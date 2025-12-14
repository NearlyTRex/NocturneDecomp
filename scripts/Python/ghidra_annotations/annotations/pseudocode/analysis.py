# Analysis report generation for pseudocode export
# Provides statistics, complexity analysis, and report generation

import os
import json
import datetime
from collections import defaultdict
from ghidra_annotations.util.log import log_info


def generate_analysis_report(pseudocode_src_dir, output_path):
    """Generate analysis report from exported function JSON files.

    Args:
        pseudocode_src_dir: Directory containing the .json files
        output_path: Base directory for output files
    """
    # Find all JSON files
    json_files = []
    for root, dirs, files in os.walk(pseudocode_src_dir):
        for filename in files:
            if filename.endswith('.json'):
                json_files.append(os.path.join(root, filename))
    log_info("Found %d JSON files for analysis report" % len(json_files))

    # Collect data from all JSON files
    functions_data = []
    suspect_type_counts = defaultdict(int)
    total_suspects = 0
    for json_file in json_files:
        try:
            with open(json_file, 'r') as f:
                data = json.load(f)
                functions_data.append({
                    'json_path': json_file,
                    'cpp_path': json_file.replace('.json', '.cpp'),
                    'asm_path': json_file.replace('.json', '.asm'),
                    'function': data.get('function', {}),
                    'complexity': data.get('complexity', {}),
                    'suspects': data.get('suspects', [])
                })
                for suspect in data.get('suspects', []):
                    suspect_type_counts[suspect.get('type', 'unknown')] += 1
                    total_suspects += 1
        except Exception as e:
            log_info("Warning: Failed to read %s: %s" % (json_file, str(e)))
    if not functions_data:
        log_info("No function data found for report")
        return

    # Sort by complexity score
    functions_data.sort(key=lambda x: x.get('complexity', {}).get('complexity_score', 0))

    # Calculate statistics
    total_functions = len(functions_data)
    zero_suspect_funcs = [f for f in functions_data if f.get('complexity', {}).get('suspect_count', 0) == 0]
    zero_suspect_count = len(zero_suspect_funcs)
    line_counts = [f.get('complexity', {}).get('pseudocode_lines', 0) for f in functions_data]
    avg_lines = sum(line_counts) / len(line_counts) if line_counts else 0
    max_lines = max(line_counts) if line_counts else 0
    min_lines = min(line_counts) if line_counts else 0
    scores = [f.get('complexity', {}).get('complexity_score', 0) for f in functions_data]
    avg_score = sum(scores) / len(scores) if scores else 0

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
    complex_funcs = sorted(functions_data, key=lambda x: x.get('complexity', {}).get('complexity_score', 0), reverse=True)
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
        funcs_with_type = [f for f in functions_data
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

    # Find the git repo root
    repo_root = output_path
    while repo_root and repo_root != '/':
        if os.path.exists(os.path.join(repo_root, '.git')):
            break
        repo_root = os.path.dirname(repo_root)
    if not repo_root or repo_root == '/':
        repo_root = output_path
        log_info("Warning: Could not find git repo root, using output_path for relative paths")

    def make_relative(abs_path):
        if abs_path and abs_path.startswith(repo_root):
            rel = os.path.relpath(abs_path, repo_root)
            return rel
        return abs_path

    # Generate file lists for easy batch processing
    # List of zero-suspect function .cpp paths (sorted by name for consistency)
    zero_suspect_list_path = os.path.join(output_path, "zero_suspect_functions.txt")
    try:
        zero_suspect_funcs_sorted = sorted(zero_suspect_funcs,
            key=lambda x: x.get('function', {}).get('name', ''))
        with open(zero_suspect_list_path, 'w') as f:
            for func in zero_suspect_funcs_sorted:
                rel_path = make_relative(func.get('cpp_path', ''))
                f.write(rel_path + '\n')
        log_info("Wrote zero-suspect function list: %s" % zero_suspect_list_path)
    except Exception as e:
        log_info("Failed to write zero-suspect list: %s" % str(e))

    # List of all functions sorted by complexity (easiest first)
    all_funcs_list_path = os.path.join(output_path, "functions_by_complexity.txt")
    try:
        with open(all_funcs_list_path, 'w') as f:
            for func in functions_data:
                rel_path = make_relative(func.get('cpp_path', ''))
                f.write(rel_path + '\n')
        log_info("Wrote functions-by-complexity list: %s" % all_funcs_list_path)
    except Exception as e:
        log_info("Failed to write functions-by-complexity list: %s" % str(e))
