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
# - param_mismatch_analysis.txt - Parameter count mismatch analysis
# - pass_by_value_report.txt - Pass-by-value struct argument detection
# - annotation_quality.txt - Annotation quality issues (unnamed funcs/params, type issues)
# - vtable_union_mismatches.txt - Wrong vtable union member accesses in pseudocode
# - virtual_files.csv - CSV for graphing
# - functions.csv - CSV for analysis
# - completion_pie.svg - Overall completion pie chart
# - files_progress.svg - Top files by completion bar chart
# - suspect_breakdown.svg - Suspect types pie chart

import os
import json
import csv
import math
from collections import defaultdict
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.suspects import has_only_safe_suspects
from ghidra_annotations.annotations.pseudocode.struct_report import generate_struct_report


# =============================================================================
# SVG Graph Generation (no external dependencies)
# =============================================================================

def fmt_num(n):
    """Format a number with comma separators (e.g., 1234 -> '1,234')."""
    return '{:,}'.format(n)


def create_pie_chart_svg(data, title, filename, output_path, colors=None):
    """Generate an SVG pie chart.

    Args:
        data: List of (label, value) tuples
        title: Chart title
        filename: Output filename (without path)
        output_path: Directory to write to
        colors: Optional list of colors for each slice
    """
    if not data or sum(v for _, v in data) == 0:
        return

    # Default color palette
    default_colors = [
        '#4CAF50',  # Green
        '#F44336',  # Red
        '#2196F3',  # Blue
        '#FF9800',  # Orange
        '#9C27B0',  # Purple
        '#00BCD4',  # Cyan
        '#FFEB3B',  # Yellow
        '#795548',  # Brown
        '#607D8B',  # Blue Grey
        '#E91E63',  # Pink
    ]
    colors = colors or default_colors

    # Chart dimensions
    width = 500
    height = 400
    cx, cy = 180, 180  # Center of pie
    radius = 140

    total = sum(v for _, v in data)

    # Build SVG
    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 16px sans-serif; }')
    svg_parts.append('    .label { font: 12px sans-serif; }')
    svg_parts.append('    .value { font: bold 12px sans-serif; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Title
    svg_parts.append('  <text x="%d" y="25" class="title" text-anchor="middle">%s</text>' % (width // 2, title))

    # Draw pie slices
    start_angle = -90  # Start from top
    for i, (label, value) in enumerate(data):
        if value == 0:
            continue

        percentage = value / total
        angle = percentage * 360
        end_angle = start_angle + angle

        # Calculate arc path
        large_arc = 1 if angle > 180 else 0

        # Convert angles to radians
        start_rad = math.radians(start_angle)
        end_rad = math.radians(end_angle)

        # Calculate start and end points
        x1 = cx + radius * math.cos(start_rad)
        y1 = cy + radius * math.sin(start_rad)
        x2 = cx + radius * math.cos(end_rad)
        y2 = cy + radius * math.sin(end_rad)

        color = colors[i % len(colors)]

        # Create path for pie slice
        if angle >= 359.9:
            # Full circle - need two arcs
            svg_parts.append('  <circle cx="%d" cy="%d" r="%d" fill="%s" stroke="white" stroke-width="2"/>' % (cx, cy, radius, color))
        else:
            path = 'M %d,%d L %.2f,%.2f A %d,%d 0 %d,1 %.2f,%.2f Z' % (
                cx, cy, x1, y1, radius, radius, large_arc, x2, y2
            )
            svg_parts.append('  <path d="%s" fill="%s" stroke="white" stroke-width="2"/>' % (path, color))

        start_angle = end_angle

    # Draw legend
    legend_x = 350
    legend_y = 60
    for i, (label, value) in enumerate(data):
        if value == 0:
            continue
        percentage = value / total * 100
        color = colors[i % len(colors)]

        # Legend color box
        svg_parts.append('  <rect x="%d" y="%d" width="15" height="15" fill="%s"/>' % (legend_x, legend_y + i * 25, color))

        # Legend text
        display_label = label[:15] + '...' if len(label) > 15 else label
        svg_parts.append('  <text x="%d" y="%d" class="label">%s</text>' % (legend_x + 20, legend_y + i * 25 + 12, display_label))
        svg_parts.append('  <text x="%d" y="%d" class="value">%.1f%%</text>' % (legend_x + 20, legend_y + i * 25 + 24, percentage))

        if i >= 8:  # Limit legend items
            break

    svg_parts.append('</svg>')

    # Write file
    svg_path = os.path.join(output_path, filename)
    try:
        with open(svg_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote SVG pie chart: %s" % svg_path)
    except Exception as e:
        log_info("Failed to write SVG pie chart: %s" % str(e))


def create_progress_bar_svg(data, title, filename, output_path, show_percent=True):
    """Generate an SVG horizontal bar chart.

    Args:
        data: List of (label, value, max_value) tuples for progress bars
              or (label, value) tuples for simple bars
        title: Chart title
        filename: Output filename (without path)
        output_path: Directory to write to
        show_percent: Whether to show percentage labels
    """
    if not data:
        return

    # Limit to top 20 items
    data = data[:20]

    # Chart dimensions
    bar_height = 22
    bar_spacing = 6
    label_width = 180
    bar_max_width = 250
    padding = 40

    height = padding * 2 + len(data) * (bar_height + bar_spacing) + 30
    width = label_width + bar_max_width + padding * 2 + 60

    # Build SVG
    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 14px sans-serif; }')
    svg_parts.append('    .label { font: 11px sans-serif; }')
    svg_parts.append('    .value { font: bold 11px sans-serif; fill: white; }')
    svg_parts.append('    .percent { font: 11px sans-serif; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Title
    svg_parts.append('  <text x="%d" y="25" class="title" text-anchor="middle">%s</text>' % (width // 2, title))

    # Draw bars
    y = padding + 20
    for item in data:
        if len(item) == 3:
            label, value, max_value = item
            percentage = (value / max_value * 100) if max_value > 0 else 0
        else:
            label, value = item
            max_value = max(v for _, v in data) if data else 1
            percentage = (value / max_value * 100) if max_value > 0 else 0

        # Truncate long labels
        display_label = label[:25] + '...' if len(label) > 25 else label

        # Label
        svg_parts.append('  <text x="%d" y="%d" class="label" text-anchor="end">%s</text>' % (
            label_width, y + bar_height - 6, display_label))

        # Background bar (gray)
        svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="#E0E0E0" rx="3"/>' % (
            label_width + 10, y, bar_max_width, bar_height))

        # Progress bar (green gradient based on percentage)
        bar_width = int(percentage / 100 * bar_max_width)
        if bar_width > 0:
            # Color based on percentage: red -> yellow -> green
            if percentage >= 90:
                color = '#4CAF50'  # Green
            elif percentage >= 50:
                color = '#FFC107'  # Amber
            else:
                color = '#FF5722'  # Deep Orange

            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="3"/>' % (
                label_width + 10, y, bar_width, bar_height, color))

        # Percentage text
        if show_percent:
            svg_parts.append('  <text x="%d" y="%d" class="percent">%.1f%%</text>' % (
                label_width + bar_max_width + 15, y + bar_height - 6, percentage))

        y += bar_height + bar_spacing

    svg_parts.append('</svg>')

    # Write file
    svg_path = os.path.join(output_path, filename)
    try:
        with open(svg_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote SVG bar chart: %s" % svg_path)
    except Exception as e:
        log_info("Failed to write SVG bar chart: %s" % str(e))


def create_overall_progress_svg(functions, compilation_results, output_path):
    """Generate SVG showing combined decompilation + compilation progress.

    Shows:
    - Main progress bar: functions that are both clean AND compile successfully
    - Detail bars: separate decompilation and compilation progress
    - Summary statistics

    Args:
        functions: List of function data dicts with 'name' and 'complexity' fields
        compilation_results: Dict from compile_all_functions() mapping func_name -> result
        output_path: Path to write the SVG file
    """
    if not functions:
        return

    # Filter out CRT and entry functions
    functions = [f for f in functions if not _is_crt_or_entry(f.get('_virtual_file', ''))]
    total = len(functions)

    # Calculate decompilation stats (effectively clean = zero suspects or only safe intrinsics)
    clean_funcs = set()
    for f in functions:
        if _is_effectively_clean(f):
            clean_funcs.add(f.get('function', {}).get('name', ''))

    # Calculate compilation stats
    compiled_funcs = set()
    if compilation_results:
        for func_name, result in compilation_results.items():
            if result.get('success', False):
                compiled_funcs.add(func_name)

    # Calculate combined stats
    fully_complete = clean_funcs & compiled_funcs  # Both clean AND compiles
    clean_only = clean_funcs - compiled_funcs      # Clean but doesn't compile
    compiles_only = compiled_funcs - clean_funcs   # Compiles but has suspects
    neither = total - len(clean_funcs | compiled_funcs)  # Neither clean nor compiles

    decompiled_count = len(clean_funcs)
    compiled_count = len(compiled_funcs)
    complete_count = len(fully_complete)

    decompiled_pct = (decompiled_count * 100.0 / total) if total > 0 else 0
    compiled_pct = (compiled_count * 100.0 / total) if total > 0 else 0
    complete_pct = (complete_count * 100.0 / total) if total > 0 else 0

    # SVG dimensions
    width = 750
    height = 200
    bar_width = 450
    bar_height = 30
    small_bar_height = 16
    margin_left = 120
    margin_top = 50

    # Colors
    complete_color = '#2E7D32'    # Dark green - fully done
    decompile_color = '#4CAF50'  # Green - clean decompilation
    compile_color = '#2196F3'    # Blue - compiles
    bg_color = '#E0E0E0'         # Gray background

    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (
        width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 16px sans-serif; }')
    svg_parts.append('    .label { font: 12px sans-serif; fill: #333; }')
    svg_parts.append('    .small-label { font: 10px sans-serif; fill: #666; }')
    svg_parts.append('    .percent { font: bold 14px sans-serif; fill: #333; }')
    svg_parts.append('    .small-percent { font: bold 11px sans-serif; fill: #333; }')
    svg_parts.append('    .summary { font: 11px sans-serif; fill: #666; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Title
    svg_parts.append('  <text x="%d" y="25" class="title" text-anchor="middle">Decompilation Progress</text>' % (width // 2))

    # Main progress bar - "Complete" (clean + compiles)
    y = margin_top
    svg_parts.append('  <text x="%d" y="%d" class="label" text-anchor="end">Complete</text>' % (
        margin_left - 10, y + bar_height // 2 + 5))

    # Background bar
    svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="4"/>' % (
        margin_left, y, bar_width, bar_height, bg_color))

    # Progress bar
    progress_width = int(complete_pct / 100.0 * bar_width)
    if progress_width > 0:
        svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="4"/>' % (
            margin_left, y, progress_width, bar_height, complete_color))

    # Percentage label
    svg_parts.append('  <text x="%d" y="%d" class="percent">%.1f%% (%s/%s)</text>' % (
        margin_left + bar_width + 10, y + bar_height // 2 + 5, complete_pct, fmt_num(complete_count), fmt_num(total)))

    # Detail bars
    detail_y = y + bar_height + 25

    # Decompilation bar
    svg_parts.append('  <text x="%d" y="%d" class="small-label" text-anchor="end">Decompiled</text>' % (
        margin_left - 10, detail_y + small_bar_height // 2 + 4))
    svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="3"/>' % (
        margin_left, detail_y, bar_width, small_bar_height, bg_color))
    decompile_width = int(decompiled_pct / 100.0 * bar_width)
    if decompile_width > 0:
        svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="3"/>' % (
            margin_left, detail_y, decompile_width, small_bar_height, decompile_color))
    svg_parts.append('  <text x="%d" y="%d" class="small-percent">%.1f%%</text>' % (
        margin_left + bar_width + 10, detail_y + small_bar_height // 2 + 4, decompiled_pct))

    # Compilation bar
    compile_y = detail_y + small_bar_height + 8
    svg_parts.append('  <text x="%d" y="%d" class="small-label" text-anchor="end">Compiles</text>' % (
        margin_left - 10, compile_y + small_bar_height // 2 + 4))
    svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="3"/>' % (
        margin_left, compile_y, bar_width, small_bar_height, bg_color))
    compile_width = int(compiled_pct / 100.0 * bar_width)
    if compile_width > 0:
        svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="3"/>' % (
            margin_left, compile_y, compile_width, small_bar_height, compile_color))
    svg_parts.append('  <text x="%d" y="%d" class="small-percent">%.1f%%</text>' % (
        margin_left + bar_width + 10, compile_y + small_bar_height // 2 + 4, compiled_pct))

    # Summary footer
    summary_y = height - 15
    svg_parts.append('  <text x="%d" y="%d" class="summary" text-anchor="middle">' % (width // 2, summary_y))
    svg_parts.append('    %s functions total | %s clean | %s compile | %s fully complete' % (
        fmt_num(total), fmt_num(decompiled_count), fmt_num(compiled_count), fmt_num(complete_count)))
    svg_parts.append('  </text>')

    svg_parts.append('</svg>')

    # Write SVG
    try:
        with open(output_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote overall progress SVG: %s" % output_path)
    except Exception as e:
        log_info("Failed to write overall progress SVG: %s" % str(e))


def create_all_files_decompilation_svg(files, output_path):
    """Generate SVG showing decompilation status for ALL virtual files.

    Args:
        files: Dict of virtual file name -> {clean_count, suspect_count, total_count, clean_percent}
        output_path: Path to write the SVG file
    """
    if not files:
        return

    # Filter out CRT and entry files
    files = {k: v for k, v in files.items() if not _is_crt_or_entry(k)}

    # Sort by clean percentage (descending), then by name
    sorted_files = sorted(
        files.items(),
        key=lambda x: (-x[1].get('clean_percent', 0), x[0])
    )

    # SVG dimensions - dynamic height based on file count
    bar_height = 18
    bar_spacing = 3
    label_width = 300
    bar_max_width = 300
    count_width = 100
    margin_top = 60
    margin_bottom = 40
    margin_left = 20
    margin_right = 20

    height = margin_top + len(sorted_files) * (bar_height + bar_spacing) + margin_bottom
    width = margin_left + label_width + bar_max_width + count_width + margin_right

    # Colors
    clean_color = '#4CAF50'  # Green
    suspect_color = '#F44336'  # Red

    # Build SVG
    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (
        width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 14px sans-serif; }')
    svg_parts.append('    .label { font: 10px monospace; }')
    svg_parts.append('    .count { font: 9px sans-serif; fill: #666; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Title
    svg_parts.append('  <text x="%d" y="20" class="title" text-anchor="middle">Virtual File Decompilation Status (All %d Files)</text>' % (
        width // 2, len(sorted_files)))

    # Legend
    legend_y = 40
    svg_parts.append('  <rect x="%d" y="%d" width="12" height="12" fill="%s"/>' % (
        width // 2 - 100, legend_y - 10, clean_color))
    svg_parts.append('  <text x="%d" y="%d" class="count">Clean</text>' % (
        width // 2 - 85, legend_y))
    svg_parts.append('  <rect x="%d" y="%d" width="12" height="12" fill="%s"/>' % (
        width // 2 + 20, legend_y - 10, suspect_color))
    svg_parts.append('  <text x="%d" y="%d" class="count">Has Suspects</text>' % (
        width // 2 + 35, legend_y))

    # Bars
    for i, (vfile, stats) in enumerate(sorted_files):
        y = margin_top + i * (bar_height + bar_spacing)
        total = stats.get('total_count', 0)
        clean = stats.get('clean_count', 0)
        # Number of functions with suspects (not the count of suspect patterns)
        with_suspects = total - clean

        if total == 0:
            continue

        clean_rate = clean / total
        suspect_rate = with_suspects / total

        clean_width = int(clean_rate * bar_max_width)
        suspect_width = int(suspect_rate * bar_max_width)

        # Truncate label if too long
        display_label = vfile
        if len(display_label) > 42:
            display_label = '...' + display_label[-39:]

        # File label
        svg_parts.append('  <text x="%d" y="%d" class="label" text-anchor="end">%s</text>' % (
            margin_left + label_width - 5, y + bar_height - 4, display_label))

        bar_x = margin_left + label_width

        # Background bar
        svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="#E0E0E0" rx="2"/>' % (
            bar_x, y, bar_max_width, bar_height))

        # Clean portion
        if clean_width > 0:
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="2"/>' % (
                bar_x, y, clean_width, bar_height, clean_color))

        # Suspect portion (stacked after clean)
        if suspect_width > 0:
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s"/>' % (
                bar_x + clean_width, y, suspect_width, bar_height, suspect_color))

        # Count label
        svg_parts.append('  <text x="%d" y="%d" class="count">%s/%s (%.0f%%)</text>' % (
            bar_x + bar_max_width + 5, y + bar_height - 4, fmt_num(clean), fmt_num(total), clean_rate * 100))

    # Summary at bottom
    total_funcs = sum(s.get('total_count', 0) for s in files.values())
    total_clean = sum(s.get('clean_count', 0) for s in files.values())
    overall_rate = (total_clean * 100.0 / total_funcs) if total_funcs > 0 else 0

    summary_y = height - 15
    svg_parts.append('  <text x="%d" y="%d" class="count" text-anchor="middle">' % (width // 2, summary_y))
    svg_parts.append('    %s files | %s/%s functions clean (%.1f%%)' % (
        fmt_num(len(files)), fmt_num(total_clean), fmt_num(total_funcs), overall_rate))
    svg_parts.append('  </text>')

    svg_parts.append('</svg>')

    # Write SVG
    try:
        with open(output_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote all files decompilation SVG: %s" % output_path)
    except Exception as e:
        log_info("Failed to write all files decompilation SVG: %s" % str(e))


def create_all_files_compilation_svg(results, src_dir, output_path):
    """Generate SVG showing compilation status for ALL virtual files.

    Args:
        results: Dict from compile_all_functions() mapping func_name -> result dict
        src_dir: Source directory to calculate relative paths
        output_path: Path to write the SVG file
    """
    if not results:
        return

    # Group results by virtual file (parent directory of cpp file)
    virtual_files = {}
    for func_name, result in results.items():
        cpp_path = result.get('cpp_path', '')
        if not cpp_path:
            continue

        # Get relative path from src_dir
        try:
            rel_path = os.path.relpath(os.path.dirname(cpp_path), src_dir)
        except ValueError:
            rel_path = os.path.dirname(cpp_path)

        if rel_path not in virtual_files:
            virtual_files[rel_path] = {'success': 0, 'failed': 0, 'total': 0}

        virtual_files[rel_path]['total'] += 1
        if result.get('success', False):
            virtual_files[rel_path]['success'] += 1
        else:
            virtual_files[rel_path]['failed'] += 1

    # Filter out CRT and entry files
    virtual_files = {k: v for k, v in virtual_files.items() if not _is_crt_or_entry(k)}

    if not virtual_files:
        return

    # Sort by success rate (descending), then by name
    sorted_files = sorted(
        virtual_files.items(),
        key=lambda x: (-x[1]['success'] / max(x[1]['total'], 1), x[0])
    )

    # SVG dimensions - dynamic height based on file count
    bar_height = 18
    bar_spacing = 3
    label_width = 300
    bar_max_width = 300
    count_width = 100
    margin_top = 60
    margin_bottom = 40
    margin_left = 20
    margin_right = 20

    height = margin_top + len(sorted_files) * (bar_height + bar_spacing) + margin_bottom
    width = margin_left + label_width + bar_max_width + count_width + margin_right

    # Colors
    success_color = '#4CAF50'  # Green
    failed_color = '#F44336'  # Red

    # Build SVG
    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (
        width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 14px sans-serif; }')
    svg_parts.append('    .label { font: 10px monospace; }')
    svg_parts.append('    .count { font: 9px sans-serif; fill: #666; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Title
    svg_parts.append('  <text x="%d" y="20" class="title" text-anchor="middle">Virtual File Compilation Status (All %d Files)</text>' % (
        width // 2, len(sorted_files)))

    # Legend
    legend_y = 40
    svg_parts.append('  <rect x="%d" y="%d" width="12" height="12" fill="%s"/>' % (
        width // 2 - 100, legend_y - 10, success_color))
    svg_parts.append('  <text x="%d" y="%d" class="count">Success</text>' % (
        width // 2 - 85, legend_y))
    svg_parts.append('  <rect x="%d" y="%d" width="12" height="12" fill="%s"/>' % (
        width // 2 + 20, legend_y - 10, failed_color))
    svg_parts.append('  <text x="%d" y="%d" class="count">Failed</text>' % (
        width // 2 + 35, legend_y))

    # Bars
    for i, (vfile, stats) in enumerate(sorted_files):
        y = margin_top + i * (bar_height + bar_spacing)
        total = stats['total']
        success = stats['success']
        failed = stats['failed']

        success_rate = success / total if total > 0 else 0
        failed_rate = failed / total if total > 0 else 0

        success_width = int(success_rate * bar_max_width)
        failed_width = int(failed_rate * bar_max_width)

        # Truncate label if too long
        display_label = vfile
        if len(display_label) > 42:
            display_label = '...' + display_label[-39:]

        # File label
        svg_parts.append('  <text x="%d" y="%d" class="label" text-anchor="end">%s</text>' % (
            margin_left + label_width - 5, y + bar_height - 4, display_label))

        bar_x = margin_left + label_width

        # Background bar
        svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="#E0E0E0" rx="2"/>' % (
            bar_x, y, bar_max_width, bar_height))

        # Success portion
        if success_width > 0:
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="2"/>' % (
                bar_x, y, success_width, bar_height, success_color))

        # Failed portion (stacked after success)
        if failed_width > 0:
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s"/>' % (
                bar_x + success_width, y, failed_width, bar_height, failed_color))

        # Count label
        svg_parts.append('  <text x="%d" y="%d" class="count">%s/%s (%.0f%%)</text>' % (
            bar_x + bar_max_width + 5, y + bar_height - 4, fmt_num(success), fmt_num(total), success_rate * 100))

    # Summary at bottom
    total_funcs = sum(s['total'] for s in virtual_files.values())
    total_success = sum(s['success'] for s in virtual_files.values())
    overall_rate = (total_success * 100.0 / total_funcs) if total_funcs > 0 else 0

    summary_y = height - 15
    svg_parts.append('  <text x="%d" y="%d" class="count" text-anchor="middle">' % (width // 2, summary_y))
    svg_parts.append('    %s files | %s/%s functions compile (%.1f%%)' % (
        fmt_num(len(virtual_files)), fmt_num(total_success), fmt_num(total_funcs), overall_rate))
    svg_parts.append('  </text>')

    svg_parts.append('</svg>')

    # Write SVG
    try:
        with open(output_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote all files compilation SVG: %s" % output_path)
    except Exception as e:
        log_info("Failed to write all files compilation SVG: %s" % str(e))


def create_compilation_overview_svg(results, output_path):
    """Generate SVG visualization of compilation status.

    Creates:
    - Pie chart showing success/fail ratios
    - Horizontal bar chart by error category with labels inside bars

    Args:
        results: Dict from compile_all_functions() mapping func_name -> result dict
        output_path: Path to write compilation_progress.svg
    """
    # Filter out CRT and entry functions by cpp_path
    def _is_crt_or_entry_path(cpp_path):
        parts = cpp_path.replace('\\', '/').split('/')
        return 'crt' in parts or 'entry' in parts
    results = {k: v for k, v in results.items()
               if not _is_crt_or_entry_path(v.get('cpp_path', ''))}

    # Calculate statistics
    total = len(results)
    if total == 0:
        return

    successful = sum(1 for r in results.values() if r.get('success', False))
    failed = total - successful

    # Count errors by category
    error_counts = {}
    for result in results.values():
        for error in result.get('errors', []):
            category = error.get('category', 'other')
            error_counts[category] = error_counts.get(category, 0) + 1

    # Sort error categories by count
    sorted_categories = sorted(error_counts.items(), key=lambda x: -x[1])[:8]

    # Format category names for display
    def format_category(cat):
        return cat.replace('_', ' ').title()

    # SVG dimensions
    width = 700
    height = 480
    pie_cx, pie_cy = 150, 180
    pie_radius = 100

    # Color palette
    colors = {
        'success': '#4CAF50',  # Green
        'failed': '#F44336',   # Red
    }
    bar_colors = [
        '#E53935', '#FB8C00', '#FDD835', '#43A047',
        '#1E88E5', '#5E35B1', '#D81B60', '#00ACC1',
    ]

    # Build SVG
    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (
        width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 18px sans-serif; }')
    svg_parts.append('    .subtitle { font: bold 13px sans-serif; fill: #444; }')
    svg_parts.append('    .label { font: 12px sans-serif; }')
    svg_parts.append('    .bar-label { font: bold 11px sans-serif; fill: white; }')
    svg_parts.append('    .bar-label-dark { font: bold 11px sans-serif; fill: #333; }')
    svg_parts.append('    .count { font: bold 12px sans-serif; fill: #333; }')
    svg_parts.append('    .summary { font: 12px sans-serif; fill: #666; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Main title
    svg_parts.append('  <text x="%d" y="30" class="title" text-anchor="middle">Function Compilation Status</text>' % (
        width // 2))

    # === PIE CHART (left side) ===
    svg_parts.append('  <text x="%d" y="60" class="subtitle" text-anchor="middle">Results</text>' % pie_cx)

    pie_data = [
        ('Successful', successful, colors['success']),
        ('Failed', failed, colors['failed']),
    ]

    start_angle = -90
    for label, value, color in pie_data:
        if value == 0:
            continue

        percentage = value / total
        angle = percentage * 360
        end_angle = start_angle + angle
        large_arc = 1 if angle > 180 else 0

        start_rad = math.radians(start_angle)
        end_rad = math.radians(end_angle)

        x1 = pie_cx + pie_radius * math.cos(start_rad)
        y1 = pie_cy + pie_radius * math.sin(start_rad)
        x2 = pie_cx + pie_radius * math.cos(end_rad)
        y2 = pie_cy + pie_radius * math.sin(end_rad)

        if angle >= 359.9:
            svg_parts.append('  <circle cx="%d" cy="%d" r="%d" fill="%s" stroke="white" stroke-width="2"/>' % (
                pie_cx, pie_cy, pie_radius, color))
        else:
            path = 'M %d,%d L %.2f,%.2f A %d,%d 0 %d,1 %.2f,%.2f Z' % (
                pie_cx, pie_cy, x1, y1, pie_radius, pie_radius, large_arc, x2, y2
            )
            svg_parts.append('  <path d="%s" fill="%s" stroke="white" stroke-width="2"/>' % (path, color))

        start_angle = end_angle

    # Pie legend (below pie)
    legend_y = 300
    for i, (label, value, color) in enumerate(pie_data):
        if value == 0:
            continue
        percentage = value / total * 100
        svg_parts.append('  <rect x="%d" y="%d" width="14" height="14" fill="%s" rx="2"/>' % (
            pie_cx - 70, legend_y + i * 24, color))
        svg_parts.append('  <text x="%d" y="%d" class="label">%s: %d (%.1f%%)</text>' % (
            pie_cx - 50, legend_y + i * 24 + 11, label, value, percentage))

    # === BAR CHART (right side) ===
    if sorted_categories:
        bar_section_x = 320
        bar_y_start = 70
        bar_max_width = 280
        bar_height = 32
        bar_spacing = 12

        svg_parts.append('  <text x="%d" y="60" class="subtitle">Error Categories</text>' % bar_section_x)

        max_count = sorted_categories[0][1] if sorted_categories else 1

        for i, (category, count) in enumerate(sorted_categories):
            y = bar_y_start + i * (bar_height + bar_spacing)
            width_pct = (count / max_count) if max_count > 0 else 0
            actual_width = max(int(width_pct * bar_max_width), 2)  # Min width of 2px

            # Background bar
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="#EEEEEE" rx="4"/>' % (
                bar_section_x, y, bar_max_width, bar_height))

            # Filled bar
            color = bar_colors[i % len(bar_colors)]
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="4"/>' % (
                bar_section_x, y, actual_width, bar_height, color))

            # Category label inside bar (or outside if bar too small)
            display_label = format_category(category)
            label_x = bar_section_x + 8
            text_y = y + bar_height // 2 + 4

            if actual_width > 120:
                # Label inside bar (white text)
                svg_parts.append('  <text x="%d" y="%d" class="bar-label">%s</text>' % (
                    label_x, text_y, display_label))
            else:
                # Label outside bar (dark text)
                svg_parts.append('  <text x="%d" y="%d" class="bar-label-dark">%s</text>' % (
                    bar_section_x + actual_width + 8, text_y, display_label))

            # Count at end of bar area
            svg_parts.append('  <text x="%d" y="%d" class="count" text-anchor="end">%s</text>' % (
                bar_section_x + bar_max_width + 50, text_y, format(count, ',')))

    # Summary stats at bottom
    summary_y = height - 25
    success_rate = (successful * 100.0 / total) if total > 0 else 0
    svg_parts.append('  <text x="%d" y="%d" class="summary" text-anchor="middle">' % (width // 2, summary_y))
    svg_parts.append('    %s functions total | %s successful | %.1f%% success rate' % (
        format(total, ','), format(successful, ','), success_rate))
    svg_parts.append('  </text>')

    svg_parts.append('</svg>')

    # Write SVG
    try:
        with open(output_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote compilation progress SVG: %s" % output_path)
    except Exception as e:
        log_info("Failed to write compilation progress SVG: %s" % str(e))


def create_compilation_by_file_svg(results, src_dir, output_path):
    """Generate SVG visualization of compilation status per virtual file.

    Groups functions by their parent directory (virtual source file) and shows
    a horizontal bar chart of compilation success rates.

    Args:
        results: Dict from compile_all_functions() mapping func_name -> result dict
        src_dir: Source directory to calculate relative paths
        output_path: Path to write virtual_file_compilation.svg
    """
    if not results:
        return

    # Group results by virtual file (parent directory of cpp file)
    virtual_files = {}
    for func_name, result in results.items():
        cpp_path = result.get('cpp_path', '')
        if not cpp_path:
            continue

        # Get relative path from src_dir
        try:
            rel_path = os.path.relpath(os.path.dirname(cpp_path), src_dir)
        except ValueError:
            rel_path = os.path.dirname(cpp_path)

        if rel_path not in virtual_files:
            virtual_files[rel_path] = {'success': 0, 'failed': 0, 'total': 0}

        virtual_files[rel_path]['total'] += 1
        if result.get('success', False):
            virtual_files[rel_path]['success'] += 1
        else:
            virtual_files[rel_path]['failed'] += 1

    # Filter out CRT and entry files
    virtual_files = {k: v for k, v in virtual_files.items() if not _is_crt_or_entry(k)}

    if not virtual_files:
        return

    # Sort by success rate (descending), then by name
    sorted_files = sorted(
        virtual_files.items(),
        key=lambda x: (-x[1]['success'] / max(x[1]['total'], 1), x[0])
    )

    # Limit to top 30 files for readability
    display_files = sorted_files[:30]

    # SVG dimensions
    bar_height = 20
    bar_spacing = 4
    label_width = 280
    bar_max_width = 300
    count_width = 80
    margin_top = 50
    margin_bottom = 40
    margin_left = 20
    margin_right = 20

    height = margin_top + len(display_files) * (bar_height + bar_spacing) + margin_bottom
    width = margin_left + label_width + bar_max_width + count_width + margin_right

    # Color palette
    success_color = '#4CAF50'  # Green
    failed_color = '#F44336'   # Red

    # Build SVG
    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (
        width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 14px sans-serif; }')
    svg_parts.append('    .label { font: 11px monospace; }')
    svg_parts.append('    .count { font: 10px sans-serif; fill: #666; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Title
    svg_parts.append('  <text x="%d" y="25" class="title" text-anchor="middle">Virtual File Compilation Status</text>' % (
        width // 2))

    # Legend
    legend_y = 40
    svg_parts.append('  <rect x="%d" y="%d" width="12" height="12" fill="%s"/>' % (
        width // 2 - 100, legend_y - 10, success_color))
    svg_parts.append('  <text x="%d" y="%d" class="count">Success</text>' % (
        width // 2 - 85, legend_y))
    svg_parts.append('  <rect x="%d" y="%d" width="12" height="12" fill="%s"/>' % (
        width // 2 + 20, legend_y - 10, failed_color))
    svg_parts.append('  <text x="%d" y="%d" class="count">Failed</text>' % (
        width // 2 + 35, legend_y))

    # Bars
    for i, (vfile, stats) in enumerate(display_files):
        y = margin_top + i * (bar_height + bar_spacing)
        total = stats['total']
        success = stats['success']
        failed = stats['failed']

        success_rate = success / total if total > 0 else 0
        failed_rate = failed / total if total > 0 else 0

        success_width = int(success_rate * bar_max_width)
        failed_width = int(failed_rate * bar_max_width)

        # Truncate label if too long
        display_label = vfile
        if len(display_label) > 38:
            display_label = '...' + display_label[-35:]

        # File label
        svg_parts.append('  <text x="%d" y="%d" class="label" text-anchor="end">%s</text>' % (
            margin_left + label_width - 5, y + bar_height - 5, display_label))

        bar_x = margin_left + label_width

        # Background bar
        svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="#E0E0E0" rx="2"/>' % (
            bar_x, y, bar_max_width, bar_height))

        # Success portion
        if success_width > 0:
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="2"/>' % (
                bar_x, y, success_width, bar_height, success_color))

        # Failed portion (stacked after success)
        if failed_width > 0:
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s"/>' % (
                bar_x + success_width, y, failed_width, bar_height, failed_color))

        # Count label
        svg_parts.append('  <text x="%d" y="%d" class="count">%s/%s (%.0f%%)</text>' % (
            bar_x + bar_max_width + 5, y + bar_height - 5, fmt_num(success), fmt_num(total), success_rate * 100))

    # Summary at bottom
    total_funcs = sum(s['total'] for s in virtual_files.values())
    total_success = sum(s['success'] for s in virtual_files.values())
    overall_rate = (total_success * 100.0 / total_funcs) if total_funcs > 0 else 0

    summary_y = height - 15
    svg_parts.append('  <text x="%d" y="%d" class="count" text-anchor="middle">' % (width // 2, summary_y))
    svg_parts.append('    %s virtual files | %s/%s functions compile (%.1f%%)' % (
        fmt_num(len(virtual_files)), fmt_num(total_success), fmt_num(total_funcs), overall_rate))
    if len(sorted_files) > 30:
        svg_parts.append(' | Showing top 30')
    svg_parts.append('  </text>')

    svg_parts.append('</svg>')

    # Write SVG
    try:
        with open(output_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote virtual file compilation SVG: %s" % output_path)
    except Exception as e:
        log_info("Failed to write virtual file compilation SVG: %s" % str(e))


def generate_graphs(functions, files, output_path):
    """Generate all SVG graphs for README embedding.

    Args:
        functions: List of function data dicts
        files: Dict of virtual file analysis data
        output_path: Directory to write graphs to
    """
    # 0. Overall progress bar (combined decompilation + compilation)
    # Extract compilation results from function data
    compilation_results = {}
    for func in functions:
        func_name = func.get('function', {}).get('name', '')
        comp_status = func.get('compilation_status', {})
        # Check if compilation was run (has success field)
        if 'success' in comp_status:
            compilation_results[func_name] = {
                'success': comp_status.get('success', False),
                'skipped': comp_status.get('skipped', False),
            }

    overall_svg_path = os.path.join(output_path, 'overall_progress.svg')
    create_overall_progress_svg(functions, compilation_results, overall_svg_path)

    # 1. Overall completion pie chart
    total_funcs = len(functions)
    clean_funcs = sum(1 for f in functions if _is_effectively_clean(f))
    suspect_funcs = total_funcs - clean_funcs

    completion_data = [
        ('Clean', clean_funcs),
        ('Has Suspects', suspect_funcs),
    ]
    create_pie_chart_svg(
        completion_data,
        'Function Completion Status (%s total)' % fmt_num(total_funcs),
        'completion_pie.svg',
        output_path,
        colors=['#4CAF50', '#F44336']  # Green, Red
    )

    # 2. Suspect type breakdown pie chart
    suspect_counts = defaultdict(int)
    for func in functions:
        for suspect in func.get('suspects', []):
            suspect_counts[suspect.get('type', 'unknown')] += 1

    # Sort by count and take top 8
    suspect_data = sorted(suspect_counts.items(), key=lambda x: -x[1])[:8]
    if suspect_data:
        create_pie_chart_svg(
            suspect_data,
            'Suspect Types Distribution',
            'suspect_breakdown.svg',
            output_path
        )

    # 4. All files decompilation status
    all_files_svg_path = os.path.join(output_path, 'all_files_decompilation.svg')
    create_all_files_decompilation_svg(files, all_files_svg_path)


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
                        # Check for source files - prefer .keep > .mmx > .cpp/.c
                        base_path = json_path[:-5]  # Remove '.json'
                        if os.path.exists(base_path + '.keep.cpp'):
                            data['_cpp_path'] = base_path + '.keep.cpp'
                        elif os.path.exists(base_path + '.keep.c'):
                            data['_cpp_path'] = base_path + '.keep.c'
                        elif os.path.exists(base_path + '.mmx.cpp'):
                            data['_cpp_path'] = base_path + '.mmx.cpp'
                        elif os.path.exists(base_path + '.mmx.c'):
                            data['_cpp_path'] = base_path + '.mmx.c'
                        elif os.path.exists(base_path + '.cpp'):
                            data['_cpp_path'] = base_path + '.cpp'
                        elif os.path.exists(base_path + '.c'):
                            data['_cpp_path'] = base_path + '.c'
                        else:
                            data['_cpp_path'] = base_path + '.cpp'  # Default
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

        if complexity.get('suspect_count', 0) == 0 or has_only_safe_suspects(suspects):
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


def _is_crt_or_entry(vfile):
    """Check if a virtual file is a CRT or entry function (excluded from reports)."""
    return vfile.startswith('crt/') or vfile == 'entry'


def _is_effectively_clean(func):
    """Check if a function is clean for reporting purposes.

    A function is effectively clean if it has zero suspects, or if all its
    suspects are safe decompiler intrinsics (e.g. ADJ, ROUND).
    """
    suspects = func.get('suspects', [])
    if func.get('complexity', {}).get('suspect_count', 0) == 0:
        return True
    return has_only_safe_suspects(suspects)


def generate_virtual_file_report(files, output_path):
    """Generate report showing virtual file completion status."""

    # Filter out CRT and entry files
    files = {k: v for k, v in files.items() if not _is_crt_or_entry(k)}

    lines = []
    lines.append("=" * 100)
    lines.append("VIRTUAL FILE COMPLETION REPORT")
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
        lines.append("  %5.1f%% | %s" % (data['clean_percent'], vfile))
        lines.append("         %d/%d clean, %d remaining" % (data['clean_count'], data['total_count'], data['remaining']))
        for func in data['functions']:
            if not _is_effectively_clean(func):
                func_info = func.get('function', {})
                complexity = func.get('complexity', {})
                suspect_types = complexity.get('suspect_types', [])
                lines.append("           - %s (%d lines) [%s]" % (
                    func_info.get('name', 'unknown'),
                    complexity.get('pseudocode_lines', 0),
                    ', '.join(suspect_types)))
        lines.append("")
    lines.append("Total: %d files" % len(almost_files))
    lines.append("")

    # Files 50-89%
    lines.append("=" * 100)
    lines.append("FILES AT 50-89%")
    lines.append("=" * 100)
    mid_files = [(k, v) for k, v in sorted_files if 50 <= v['clean_percent'] < 90]
    for vfile, data in mid_files:
        lines.append("  %5.1f%% | %s" % (data['clean_percent'], vfile))
        lines.append("         %d/%d clean, %d remaining" % (data['clean_count'], data['total_count'], data['remaining']))
        for func in data['functions']:
            if not _is_effectively_clean(func):
                func_info = func.get('function', {})
                complexity = func.get('complexity', {})
                suspect_types = complexity.get('suspect_types', [])
                lines.append("           - %s (%d lines) [%s]" % (
                    func_info.get('name', 'unknown'),
                    complexity.get('pseudocode_lines', 0),
                    ', '.join(suspect_types)))
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
        for func in data['functions']:
            if not _is_effectively_clean(func):
                func_info = func.get('function', {})
                complexity = func.get('complexity', {})
                suspect_types = complexity.get('suspect_types', [])
                lines.append("           - %s (%d lines) [%s]" % (
                    func_info.get('name', 'unknown'),
                    complexity.get('pseudocode_lines', 0),
                    ', '.join(suspect_types)))
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

    # Filter out CRT and entry functions and files
    non_crt_functions = [f for f in functions if not _is_crt_or_entry(f.get('_virtual_file', ''))]
    non_crt_files = {k: v for k, v in files.items() if not _is_crt_or_entry(k)}

    lines = []
    lines.append("=" * 100)
    lines.append("EASY WINS - PRIORITIZED ACTION LIST")
    lines.append("=" * 100)
    lines.append("")

    lines.append("This list shows the easiest paths to improving decompilation quality,")
    lines.append("sorted by effort required (lowest effort first).")
    lines.append("(CRT functions are excluded)")
    lines.append("")

    # Track files shown in priority sections
    shown_files = set()

    # 1. Files with only 1-2 functions remaining
    lines.append("=" * 100)
    lines.append("PRIORITY 1: Files with 1-2 functions remaining")
    lines.append("=" * 100)
    almost_done = [(k, v) for k, v in non_crt_files.items() if 0 < v['remaining'] <= 2]
    almost_done.sort(key=lambda x: x[1]['remaining'])
    for vfile, data in almost_done:
        shown_files.add(vfile)
        lines.append("")
        lines.append("  %s (%d remaining of %d)" % (vfile, data['remaining'], data['total_count']))
        # List the remaining functions
        for func in data['functions']:
            if not _is_effectively_clean(func):
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
        f for f in non_crt_functions
        if not _is_effectively_clean(f)
        and f.get('complexity', {}).get('suspect_count', 0) == 1
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
        for func in funcs:
            func_info = func.get('function', {})
            complexity = func.get('complexity', {})
            name = func_info.get('name', 'unknown')
            lines.append("    %-70s (%3d lines)" % (name, complexity.get('pseudocode_lines', 0)))
    lines.append("")

    # 3. Files at 90%+ that could be completed
    lines.append("=" * 100)
    lines.append("PRIORITY 3: Files at 90%+ (finish them off!)")
    lines.append("=" * 100)
    high_pct = [(k, v) for k, v in non_crt_files.items() if 90 <= v['clean_percent'] < 100]
    high_pct.sort(key=lambda x: -x[1]['clean_percent'])
    for vfile, data in high_pct:
        shown_files.add(vfile)
        lines.append("")
        lines.append("  %s (%.1f%% complete)" % (vfile, data['clean_percent']))
        lines.append("    %d functions remaining:" % data['remaining'])
        for func in data['functions']:
            if not _is_effectively_clean(func):
                func_info = func.get('function', {})
                complexity = func.get('complexity', {})
                suspect_types = complexity.get('suspect_types', [])
                lines.append("      %s (%d lines)" % (func_info.get('name', 'unknown'), complexity.get('pseudocode_lines', 0)))
                lines.append("        Types: %s" % suspect_types)
    lines.append("")

    # 4. All remaining files with incomplete functions
    lines.append("=" * 100)
    lines.append("ALL REMAINING FILES")
    lines.append("=" * 100)
    remaining = [
        (k, v) for k, v in non_crt_files.items()
        if k not in shown_files and v['remaining'] > 0
    ]
    remaining.sort(key=lambda x: -x[1]['clean_percent'])
    for vfile, data in remaining:
        lines.append("  %-60s %5.1f%%  (%d/%d clean, %d remaining)" % (
            vfile, data['clean_percent'],
            data['total_count'] - data['remaining'], data['total_count'],
            data['remaining']))

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


def generate_param_mismatch_report(functions, output_path):
    """Generate report on functions with mismatched parameter counts.

    Compares declared parameter count with estimated count from call site analysis.
    """
    lines = []
    lines.append("=" * 100)
    lines.append("PARAMETER COUNT MISMATCH ANALYSIS")
    lines.append("=" * 100)
    lines.append("")
    lines.append("This report identifies functions where the declared parameter count differs")
    lines.append("from the estimated count based on call site analysis.")
    lines.append("")
    lines.append("Mismatches may indicate:")
    lines.append("  - Incorrect function signature in Ghidra")
    lines.append("  - Calling convention misidentification")
    lines.append("  - Variadic functions")
    lines.append("  - Functions called with wrong number of arguments (bugs)")
    lines.append("")

    # Collect functions with param estimates
    funcs_with_estimates = []
    mismatches = {'high': [], 'medium': [], 'low': []}
    no_callers = []

    for func in functions:
        param_est = func.get('param_estimates')
        if not param_est:
            continue

        func_info = func.get('function', {})
        declared = param_est.get('declared_params', 0)
        estimated = param_est.get('estimated_params', 0)
        confidence = param_est.get('confidence', 'unknown')
        call_site_count = param_est.get('call_site_count', 0)

        funcs_with_estimates.append(func)

        if call_site_count == 0:
            no_callers.append(func)
            continue

        if declared != estimated:
            # Check if estimated stack bytes match declared stack bytes
            # This filters false positives from doubles (8 bytes) and structs
            declared_stack_bytes = param_est.get('declared_stack_bytes', declared * 4)
            # Get the most common estimated stack bytes from call sites
            sites = param_est.get('call_sites', [])
            est_stack_bytes_list = [s.get('stack_bytes', 0) for s in sites if s.get('stack_bytes')]
            if est_stack_bytes_list:
                from collections import Counter as _Counter
                est_stack_bytes = _Counter(est_stack_bytes_list).most_common(1)[0][0]
            else:
                est_stack_bytes = estimated * 4

            # Skip if stack bytes match (handles doubles/structs taking multiple slots)
            if est_stack_bytes == declared_stack_bytes and est_stack_bytes > 0:
                continue

            mismatch_info = {
                'func': func,
                'declared': declared,
                'estimated': estimated,
                'confidence': confidence,
                'diff': estimated - declared,
                'call_sites': call_site_count,
                'declared_stack_bytes': declared_stack_bytes,
                'estimated_stack_bytes': est_stack_bytes
            }
            if confidence in mismatches:
                mismatches[confidence].append(mismatch_info)
            else:
                mismatches['low'].append(mismatch_info)

    # Summary statistics
    total_with_estimates = len(funcs_with_estimates)
    total_mismatches = sum(len(m) for m in mismatches.values())
    total_no_callers = len(no_callers)

    lines.append("SUMMARY")
    lines.append("-" * 50)
    lines.append("Functions with parameter estimates: %d" % total_with_estimates)
    lines.append("Functions with no callers: %d" % total_no_callers)
    lines.append("Parameter mismatches detected: %d" % total_mismatches)
    if total_with_estimates > 0:
        match_rate = (total_with_estimates - total_mismatches - total_no_callers) * 100.0 / (total_with_estimates - total_no_callers) if (total_with_estimates - total_no_callers) > 0 else 0
        lines.append("Signature accuracy rate: %.1f%%" % match_rate)
    lines.append("")
    lines.append("Mismatches by confidence:")
    lines.append("  High confidence:   %d (multiple call sites agree)" % len(mismatches['high']))
    lines.append("  Medium confidence: %d (some agreement)" % len(mismatches['medium']))
    lines.append("  Low confidence:    %d (limited data)" % len(mismatches['low']))
    lines.append("")

    # High confidence mismatches (most likely to be real issues)
    if mismatches['high']:
        lines.append("=" * 100)
        lines.append("HIGH CONFIDENCE MISMATCHES - Likely signature issues")
        lines.append("=" * 100)
        lines.append("")

        # Sort by absolute difference
        mismatches['high'].sort(key=lambda x: (-abs(x['diff']), x['func'].get('function', {}).get('name', '')))

        for m in mismatches['high']:
            func_info = m['func'].get('function', {})
            vfile = m['func'].get('_virtual_file', 'unknown')
            signature = func_info.get('signature', 'unknown')

            diff_str = "+%d" % m['diff'] if m['diff'] > 0 else str(m['diff'])
            lines.append("  %s" % func_info.get('name', 'unknown'))
            lines.append("    Declared: %d params (%d bytes), Estimated: %d stack slots (%d bytes) [%s]" % (
                m['declared'], m.get('declared_stack_bytes', m['declared'] * 4),
                m['estimated'], m.get('estimated_stack_bytes', m['estimated'] * 4), diff_str))
            lines.append("    Call sites: %d, Confidence: %s" % (m['call_sites'], m['confidence']))
            lines.append("    File: %s" % vfile)
            lines.append("    Signature: %s" % signature)

            # Show sample call site details
            call_sites = m['func'].get('param_estimates', {}).get('call_sites', [])
            if call_sites:
                lines.append("    Sample call sites:")
                for site in call_sites[:3]:
                    reg_params = ', '.join(site.get('reg_params', []))
                    method = site.get('method', 'push_count')
                    stack_bytes = site.get('stack_bytes', 0)
                    lines.append("      %s at %s: %d reg [%s], %d stack (%d bytes, via %s)" % (
                        site.get('caller', '?')[:30],
                        site.get('call_addr', '?'),
                        len(site.get('reg_params', [])),
                        reg_params,
                        site.get('stack_params', 0),
                        stack_bytes,
                        method
                    ))
            lines.append("")

    # Medium confidence mismatches
    if mismatches['medium']:
        lines.append("=" * 100)
        lines.append("MEDIUM CONFIDENCE MISMATCHES")
        lines.append("=" * 100)
        lines.append("")

        mismatches['medium'].sort(key=lambda x: (-abs(x['diff']), x['func'].get('function', {}).get('name', '')))

        for m in mismatches['medium'][:50]:
            func_info = m['func'].get('function', {})
            diff_str = "+%d" % m['diff'] if m['diff'] > 0 else str(m['diff'])
            lines.append("  %-50s declared:%d est:%d (%s) [%d calls]" % (
                func_info.get('name', 'unknown')[:50],
                m['declared'], m['estimated'], diff_str, m['call_sites']))

        if len(mismatches['medium']) > 50:
            lines.append("")
            lines.append("  ... and %d more" % (len(mismatches['medium']) - 50))
        lines.append("")

    # Low confidence mismatches (informational)
    if mismatches['low']:
        lines.append("=" * 100)
        lines.append("LOW CONFIDENCE MISMATCHES (limited data)")
        lines.append("=" * 100)
        lines.append("")

        # Just show count and a few examples
        lines.append("  %d functions with low-confidence mismatches" % len(mismatches['low']))
        lines.append("  Sample:")
        for m in mismatches['low'][:10]:
            func_info = m['func'].get('function', {})
            diff_str = "+%d" % m['diff'] if m['diff'] > 0 else str(m['diff'])
            lines.append("    %-45s declared:%d est:%d (%s)" % (
                func_info.get('name', 'unknown')[:45],
                m['declared'], m['estimated'], diff_str))
        lines.append("")

    # Summary of mismatch directions
    lines.append("=" * 100)
    lines.append("MISMATCH DIRECTION ANALYSIS")
    lines.append("=" * 100)
    lines.append("")

    all_mismatches = mismatches['high'] + mismatches['medium'] + mismatches['low']
    over_declared = [m for m in all_mismatches if m['diff'] < 0]  # Declared > Estimated
    under_declared = [m for m in all_mismatches if m['diff'] > 0]  # Declared < Estimated

    lines.append("Functions where declaration has MORE params than estimated: %d" % len(over_declared))
    lines.append("  (May indicate: extra params not being passed, or params in globals)")
    lines.append("")
    lines.append("Functions where declaration has FEWER params than estimated: %d" % len(under_declared))
    lines.append("  (May indicate: missing params in signature, or calling convention issue)")
    lines.append("")

    # Group by difference amount
    diff_counts = defaultdict(int)
    for m in all_mismatches:
        diff_counts[m['diff']] += 1

    lines.append("Distribution of differences (estimated - declared):")
    for diff in sorted(diff_counts.keys()):
        diff_str = "+%d" % diff if diff > 0 else str(diff)
        lines.append("  %s params: %d functions" % (diff_str, diff_counts[diff]))

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "param_mismatch_analysis.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote parameter mismatch analysis: %s" % report_path)
    except Exception as e:
        log_info("Failed to write parameter mismatch analysis: %s" % str(e))

    return report_text


def generate_compilation_summary_report(functions, output_path):
    """Generate report on function compilation status.

    Args:
        functions: List of function data dicts (with compilation_status)
        output_path: Directory to write report
    """
    lines = []
    lines.append("=" * 100)
    lines.append("FUNCTION COMPILATION SUMMARY")
    lines.append("=" * 100)
    lines.append("")

    # Collect compilation statistics
    funcs_with_status = [f for f in functions if f.get('compilation_status')]
    if not funcs_with_status:
        lines.append("No compilation status data available.")
        lines.append("Run export with compilation verification enabled to generate this data.")
        report_text = "\n".join(lines)
        report_path = os.path.join(output_path, "compilation_summary.txt")
        try:
            with open(report_path, 'w') as f:
                f.write(report_text)
            log_info("Wrote compilation summary report: %s" % report_path)
        except Exception as e:
            log_info("Failed to write compilation summary report: %s" % str(e))
        return report_text

    # Calculate statistics
    total = len(funcs_with_status)
    successful = sum(1 for f in funcs_with_status
                     if f['compilation_status'].get('success', False))
    failed = total - successful
    success_rate = (successful * 100.0 / total) if total > 0 else 0

    lines.append("SUMMARY")
    lines.append("-" * 50)
    lines.append("Total functions compiled: %d" % total)
    lines.append("Successful: %d (%.1f%%)" % (successful, success_rate))
    lines.append("Failed: %d" % failed)
    lines.append("")

    # Count errors by category
    error_categories = defaultdict(list)
    for func in funcs_with_status:
        status = func.get('compilation_status', {})
        if not status.get('success'):
            for error in status.get('errors', []):
                category = error.get('category', 'other')
                func_name = func.get('function', {}).get('name', 'unknown')
                error_categories[category].append({
                    'func': func_name,
                    'message': error.get('message', ''),
                    'line': error.get('line', 0),
                })

    if error_categories:
        lines.append("ERROR CATEGORIES")
        lines.append("-" * 50)
        for category in sorted(error_categories.keys(), key=lambda x: -len(error_categories[x])):
            count = len(error_categories[category])
            lines.append("  %-30s %5d" % (category, count))
        lines.append("")

        # Show details for each category, sorted by error message
        for category in sorted(error_categories.keys(), key=lambda x: -len(error_categories[x])):
            errors = error_categories[category]
            lines.append("=" * 100)
            lines.append("CATEGORY: %s (%d errors)" % (category, len(errors)))
            lines.append("=" * 100)
            lines.append("")

            # Deduplicate by function, keeping first error per function
            seen_funcs = set()
            unique_errors = []
            for error in errors:
                if error['func'] not in seen_funcs:
                    seen_funcs.add(error['func'])
                    unique_errors.append(error)

            # Sort by error message to group similar errors together
            unique_errors.sort(key=lambda e: (e.get('message', ''), e.get('func', '')))

            for error in unique_errors[:30]:
                msg_preview = error['message'][:80] if error['message'] else ''
                lines.append("  %s" % error['func'])
                if msg_preview:
                    lines.append("    Line %d: %s..." % (error['line'], msg_preview))

            if len(unique_errors) > 30:
                lines.append("")
                lines.append("  ... and %d more errors" % (len(unique_errors) - 30))
            lines.append("")

    # Correlation with suspect patterns
    lines.append("=" * 100)
    lines.append("COMPILATION VS SUSPECT PATTERNS")
    lines.append("=" * 100)
    lines.append("")

    # Calculate average suspects for successful vs failed compilations
    successful_suspects = [f.get('complexity', {}).get('suspect_count', 0)
                          for f in funcs_with_status
                          if f['compilation_status'].get('success')]
    failed_suspects = [f.get('complexity', {}).get('suspect_count', 0)
                       for f in funcs_with_status
                       if not f['compilation_status'].get('success')]

    if successful_suspects:
        avg_successful = sum(successful_suspects) / len(successful_suspects)
        lines.append("Average suspects in successfully compiled functions: %.2f" % avg_successful)
    if failed_suspects:
        avg_failed = sum(failed_suspects) / len(failed_suspects)
        lines.append("Average suspects in failed compilations: %.2f" % avg_failed)

    # Count functions that compile but have suspects (may still have issues)
    compiles_with_suspects = sum(1 for f in funcs_with_status
                                  if f['compilation_status'].get('success')
                                  and f.get('complexity', {}).get('suspect_count', 0) > 0)
    lines.append("")
    lines.append("Functions that compile but have suspect patterns: %d" % compiles_with_suspects)
    lines.append("(These may have runtime issues even though syntax is valid)")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "compilation_summary.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote compilation summary report: %s" % report_path)
    except Exception as e:
        log_info("Failed to write compilation summary report: %s" % str(e))

    return report_text


def generate_compilation_detailed_report(functions, output_path):
    """Generate detailed report with all compilation errors, untruncated.

    Args:
        functions: List of function data dicts (with compilation_status)
        output_path: Directory to write report
    """
    lines = []
    lines.append("=" * 100)
    lines.append("FUNCTION COMPILATION DETAILED ERRORS")
    lines.append("=" * 100)
    lines.append("")

    funcs_with_status = [f for f in functions if f.get('compilation_status')]
    if not funcs_with_status:
        lines.append("No compilation status data available.")
        lines.append("Run export with compilation verification enabled to generate this data.")
        report_text = "\n".join(lines)
        report_path = os.path.join(output_path, "compilation_detailed.txt")
        try:
            with open(report_path, 'w') as f:
                f.write(report_text)
            log_info("Wrote compilation detailed report: %s" % report_path)
        except Exception as e:
            log_info("Failed to write compilation detailed report: %s" % str(e))
        return report_text

    total = len(funcs_with_status)
    successful = sum(1 for f in funcs_with_status
                     if f['compilation_status'].get('success', False))
    failed = total - successful
    success_rate = (successful * 100.0 / total) if total > 0 else 0

    lines.append("SUMMARY")
    lines.append("-" * 50)
    lines.append("Total functions compiled: %d" % total)
    lines.append("Successful: %d (%.1f%%)" % (successful, success_rate))
    lines.append("Failed: %d" % failed)
    lines.append("")

    # Collect errors by category
    error_categories = defaultdict(list)
    for func in funcs_with_status:
        status = func.get('compilation_status', {})
        if not status.get('success'):
            for error in status.get('errors', []):
                category = error.get('category', 'other')
                func_name = func.get('function', {}).get('name', 'unknown')
                error_categories[category].append({
                    'func': func_name,
                    'message': error.get('message', ''),
                    'line': error.get('line', 0),
                })

    if error_categories:
        lines.append("ERROR CATEGORIES")
        lines.append("-" * 50)
        for category in sorted(error_categories.keys(), key=lambda x: -len(error_categories[x])):
            count = len(error_categories[category])
            lines.append("  %-30s %5d" % (category, count))
        lines.append("")

        # Show ALL errors for each category, sorted by error message
        for category in sorted(error_categories.keys(), key=lambda x: -len(error_categories[x])):
            errors = error_categories[category]
            lines.append("=" * 100)
            lines.append("CATEGORY: %s (%d errors)" % (category, len(errors)))
            lines.append("=" * 100)
            lines.append("")

            # Deduplicate by function, keeping first error per function
            seen_funcs = set()
            unique_errors = []
            for error in errors:
                if error['func'] not in seen_funcs:
                    seen_funcs.add(error['func'])
                    unique_errors.append(error)

            # Sort by error message to group similar errors together
            unique_errors.sort(key=lambda e: (e.get('message', ''), e.get('func', '')))

            for error in unique_errors:
                lines.append("  %s" % error['func'])
                if error['message']:
                    lines.append("    Line %d: %s" % (error['line'], error['message']))

            lines.append("")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "compilation_detailed.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote compilation detailed report: %s" % report_path)
    except Exception as e:
        log_info("Failed to write compilation detailed report: %s" % str(e))

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
    # Filter out CRT and entry functions/files from report stats
    functions = [f for f in functions if not _is_crt_or_entry(f.get('_virtual_file', ''))]
    files = {k: v for k, v in files.items() if not _is_crt_or_entry(k)}

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

    clean_funcs = [f for f in functions if _is_effectively_clean(f)]
    clean_count = len(clean_funcs)
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
    report_lines.append("=" * 80)
    report_lines.append("")
    report_lines.append("(CRT and entry functions excluded)")
    report_lines.append("")
    report_lines.append("SUMMARY")
    report_lines.append("-" * 40)
    report_lines.append("Total functions: %d" % total_functions)
    report_lines.append("Clean functions: %d (%.1f%%)" % (
        clean_count, (clean_count * 100.0 / total_functions) if total_functions > 0 else 0))
    report_lines.append("Functions with suspects: %d (%.1f%%)" % (
        total_functions - clean_count,
        ((total_functions - clean_count) * 100.0 / total_functions) if total_functions > 0 else 0))
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

    # Compilation statistics (if available)
    funcs_with_compile = [f for f in functions if f.get('compilation_status')]
    if funcs_with_compile:
        compile_success = sum(1 for f in funcs_with_compile
                              if f['compilation_status'].get('success', False))
        compile_total = len(funcs_with_compile)
        compile_failed = compile_total - compile_success
        compile_rate = (compile_success * 100.0 / compile_total) if compile_total > 0 else 0

        report_lines.append("COMPILATION STATUS")
        report_lines.append("-" * 40)
        report_lines.append("Functions compiled: %d" % compile_total)
        report_lines.append("Successful: %d (%.1f%%)" % (compile_success, compile_rate))
        report_lines.append("Failed: %d" % compile_failed)
        report_lines.append("")

    report_lines.append("SUSPECT PATTERN BREAKDOWN")
    report_lines.append("-" * 40)
    for stype, count in sorted(suspect_type_counts.items(), key=lambda x: -x[1]):
        report_lines.append("  %-25s %d" % (stype, count))
    report_lines.append("")

    # Sort clean functions by line count
    report_lines.append("EASIEST FUNCTIONS (Clean, Sorted by Size)")
    report_lines.append("-" * 40)
    clean_funcs.sort(key=lambda x: x.get('complexity', {}).get('pseudocode_lines', 0))
    for func in clean_funcs[:50]:
        func_info = func.get('function', {})
        complexity = func.get('complexity', {})
        report_lines.append("  %s: %s (%d lines)" % (
            func_info.get('address', '?'),
            func_info.get('name', 'unknown'),
            complexity.get('pseudocode_lines', 0)))
    if len(clean_funcs) > 50:
        report_lines.append("  ... and %d more" % (len(clean_funcs) - 50))
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

    # List of clean function .cpp paths (sorted by name for consistency)
    zero_suspect_list_path = os.path.join(output_path, "zero_suspect_functions.txt")
    try:
        clean_funcs_sorted = sorted(clean_funcs,
            key=lambda x: x.get('function', {}).get('name', ''))
        with open(zero_suspect_list_path, 'w') as f:
            for func in clean_funcs_sorted:
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


def generate_pass_by_value_report(functions, output_path):
    """Generate report on pass-by-value struct arguments detected from assembly.

    Detects the pattern where structs are bulk-copied onto the stack
    (via REP MOVSD with MOV EDI,ESP) before a CALL, indicating pass-by-value.
    Report is grouped by callee function.

    Args:
        functions: List of function data dicts (with _asm_path)
        output_path: Directory to write report
    """
    from ghidra_annotations.annotations.pseudocode.pass_by_value import (
        analyze_single_file, format_report
    )

    all_call_sites = []
    total_movsd = 0
    pbv_count = 0

    for func in functions:
        asm_path = func.get('_asm_path', '')
        if not asm_path or not os.path.exists(asm_path):
            continue
        try:
            sites, file_movsd, file_pbv = analyze_single_file(asm_path)
            all_call_sites.extend(sites)
            total_movsd += file_movsd
            pbv_count += file_pbv
        except Exception:
            pass

    report_text = format_report(all_call_sites, total_movsd, pbv_count)

    report_path = os.path.join(output_path, "pass_by_value_report.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote pass-by-value report: %s" % report_path)
    except Exception as e:
        log_info("Failed to write pass-by-value report: %s" % str(e))

    return report_text


def _get_function_display_name(func):
    """Extract the meaningful part of a function name (without file prefix and address suffix).

    Names follow the pattern: {file_prefix}_{name}_FUN_{hex_addr}
    Returns the {name} part, or 'FUN_{hex_addr}' if there is no meaningful name.
    """
    name = func.get('function', {}).get('name', '')
    # Strip trailing _FUN_XXXXXXXX
    import re
    m = re.match(r'^(.+?)(_FUN_[0-9a-fA-F]+)$', name)
    if not m:
        return name
    prefix_and_name = m.group(1)
    fun_suffix = m.group(2)

    # Try to strip the virtual file prefix
    vfile = func.get('_virtual_file', '')
    if vfile:
        file_prefix = vfile.replace(os.sep, '_')
        if prefix_and_name == file_prefix:
            # Unnamed function: name is just file_prefix + _FUN_XXXX
            return fun_suffix[1:]  # Strip leading underscore -> 'FUN_XXXX'
        expected = file_prefix + '_'
        if prefix_and_name.startswith(expected):
            remainder = prefix_and_name[len(expected):]
            return remainder if remainder else fun_suffix[1:]
    return prefix_and_name


def _is_unnamed_function(func):
    """Check if a function still has a Ghidra auto-generated name (FUN_XXXXXXXX).

    Detects both bare unnamed functions (file_prefix_FUN_XXXX) and class methods
    where only the class name is known but the method name is still auto-generated
    (file_prefix_ClassName_FUN_XXXX).
    """
    import re
    name = func.get('function', {}).get('name', '')
    vfile = func.get('_virtual_file', '')
    if not vfile:
        return bool(re.match(r'^FUN_[0-9a-fA-F]+$', name))

    file_prefix = vfile.replace(os.sep, '_')
    expected_unnamed = file_prefix + '_FUN_'
    if name.startswith(expected_unnamed):
        rest = name[len(expected_unnamed):]
        return bool(re.match(r'^[0-9a-fA-F]+$', rest))

    # Also detect class methods with no real method name:
    # e.g. core_gabriela_cpp_CGabriella_FUN_004d4890
    # The part after file_prefix must be a single PascalCase identifier (no underscores)
    # followed by _FUN_XXXX. This avoids matching real names like CGabriella_process_FUN_XXXX.
    stripped = name[len(file_prefix) + 1:] if name.startswith(file_prefix + '_') else None
    if stripped:
        m2 = re.match(r'^([A-Z][A-Za-z0-9]+)_FUN_([0-9a-fA-F]+)$', stripped)
        if m2:
            return True

    return False


def _build_caller_counts(functions):
    """Build a map of function address -> number of callers by inverting function_calls."""
    caller_counts = defaultdict(int)
    for func in functions:
        seen_addrs = set()
        for call in func.get('function_calls', []):
            addr = call.get('addr', '')
            if addr and addr not in seen_addrs:
                caller_counts[addr] += 1
                seen_addrs.add(addr)
    return caller_counts


def generate_annotation_quality_report(functions, output_path):
    """Generate report on annotation quality issues to prioritize manual annotation work.

    Identifies unnamed functions, unnamed parameters, and type correctness issues
    based on heuristic analysis of suspects and stack frame data.

    Args:
        functions: List of function data dicts (from load_function_data)
        output_path: Directory to write report
    """
    import re

    # Filter out CRT/entry functions
    non_crt = [f for f in functions if not _is_crt_or_entry(f.get('_virtual_file', ''))]

    # Build caller count index for prioritization
    caller_counts = _build_caller_counts(functions)

    # =========================================================================
    # Collect data for all sections
    # =========================================================================

    # 1. Unnamed functions (FUN_XXXXXXXX auto-names)
    unnamed_functions = []
    for func in non_crt:
        if _is_unnamed_function(func):
            func_info = func.get('function', {})
            addr = func_info.get('address', '')
            unnamed_functions.append({
                'func': func,
                'name': func_info.get('name', ''),
                'addr': addr,
                'convention': func_info.get('convention', '?'),
                'vfile': func.get('_virtual_file', ''),
                'callers': caller_counts.get(addr, 0),
            })

    # 2. Unnamed parameters (param_N pattern)
    unnamed_params = []
    for func in non_crt:
        sf = func.get('stack_frame', {})
        params = [v for v in sf.get('variables', []) if v.get('is_param')]
        unnamed = [p for p in params if re.match(r'^param_\d+$', p.get('name', ''))]
        if unnamed:
            named = [p for p in params if not re.match(r'^param_\d+$', p.get('name', ''))]
            func_info = func.get('function', {})
            unnamed_params.append({
                'func': func,
                'name': func_info.get('name', ''),
                'display_name': _get_function_display_name(func),
                'addr': func_info.get('address', ''),
                'vfile': func.get('_virtual_file', ''),
                'unnamed': [(p.get('name', ''), p.get('type', '')) for p in unnamed],
                'named': [(p.get('name', ''), p.get('type', '')) for p in named],
                'unnamed_count': len(unnamed),
                'total_params': len(params),
            })

    # 3. Type correctness issues
    wrong_return_void = []       # void + extraout_EAX
    wrong_return_wide = []       # non-void + extraout_EDX (64-bit return)
    missing_params_reg = []      # in_EAX, in_ECX, in_EDX
    wrong_convention = []        # unaff_*
    undefined_types = []         # undefined4/2/1 in variables
    missing_params_stack = []    # in_stack_*

    for func in non_crt:
        func_info = func.get('function', {})
        suspects = func.get('suspects', [])
        sig = func_info.get('signature', '')

        suspect_types = defaultdict(list)
        for s in suspects:
            suspect_types[s.get('type', '')].append(s.get('match', ''))

        display_name = _get_function_display_name(func)
        addr = func_info.get('address', '')
        vfile = func.get('_virtual_file', '')

        # Wrong return type: void function with extraout_EAX/EDX/EAX_EAX
        if 'extra_output' in suspect_types:
            matches = suspect_types['extra_output']
            eax_matches = [m for m in matches if 'EAX' in m]
            is_void = sig.startswith('void ')
            if is_void and eax_matches:
                suggested = 'int' if any('EAX_EAX' not in m for m in eax_matches) else 'longlong'
                wrong_return_void.append({
                    'name': func_info.get('name', ''),
                    'display_name': display_name,
                    'addr': addr,
                    'vfile': vfile,
                    'matches': eax_matches,
                    'signature': sig,
                    'suggested': 'Likely returns %s or void*' % suggested,
                })
            # Wide return: non-void + extraout_EDX suggests EDX:EAX 64-bit return
            edx_matches = [m for m in matches if m.startswith('extraout_EDX')]
            if not is_void and edx_matches:
                wrong_return_wide.append({
                    'name': func_info.get('name', ''),
                    'display_name': display_name,
                    'addr': addr,
                    'vfile': vfile,
                    'matches': edx_matches,
                    'signature': sig,
                    'suggested': 'Likely returns 64-bit value (longlong) via EDX:EAX',
                })

        # Missing register params: in_EAX, in_ECX, in_EDX
        if 'register_param' in suspect_types:
            matches = suspect_types['register_param']
            # Suggest calling convention based on which registers
            has_ecx = any('ECX' in m for m in matches)
            has_edx = any('EDX' in m for m in matches)
            if has_ecx and not has_edx:
                conv_hint = '__thiscall (ECX = this pointer)'
            elif has_ecx and has_edx:
                conv_hint = '__fastcall (ECX, EDX params)'
            else:
                conv_hint = 'register-based calling convention'
            missing_params_reg.append({
                'name': func_info.get('name', ''),
                'display_name': display_name,
                'addr': addr,
                'vfile': vfile,
                'matches': matches,
                'signature': sig,
                'suggested': 'Likely %s' % conv_hint,
            })

        # Wrong calling convention: unaff_*
        if 'unaffected_reg' in suspect_types:
            matches = suspect_types['unaffected_reg']
            wrong_convention.append({
                'name': func_info.get('name', ''),
                'display_name': display_name,
                'addr': addr,
                'vfile': vfile,
                'matches': matches,
                'signature': sig,
                'suggested': 'Calling convention may be wrong (preserved registers being used)',
            })

        # Missing stack params: in_stack_*
        if 'stack_param' in suspect_types:
            matches = suspect_types['stack_param']
            missing_params_stack.append({
                'name': func_info.get('name', ''),
                'display_name': display_name,
                'addr': addr,
                'vfile': vfile,
                'matches': matches,
                'signature': sig,
                'suggested': 'Signature is missing stack parameters entirely',
            })

        # Undefined types in stack variables
        sf = func.get('stack_frame', {})
        undef_vars = []
        for v in sf.get('variables', []):
            vtype = v.get('type', '')
            if re.search(r'\bundefined\d*\b', vtype):
                undef_vars.append((v.get('name', ''), vtype, v.get('is_param', False)))
        if undef_vars:
            param_undefs = [(n, t) for n, t, ip in undef_vars if ip]
            local_undefs = [(n, t) for n, t, ip in undef_vars if not ip]
            undefined_types.append({
                'name': func_info.get('name', ''),
                'display_name': display_name,
                'addr': addr,
                'vfile': vfile,
                'param_undefs': param_undefs,
                'local_undefs': local_undefs,
                'total_undefs': len(undef_vars),
            })

    # Count functions with any type issue (deduplicate by address)
    type_issue_addrs = set()
    for lst in [wrong_return_void, wrong_return_wide, missing_params_reg,
                wrong_convention, undefined_types, missing_params_stack]:
        for entry in lst:
            type_issue_addrs.add(entry['addr'])

    # =========================================================================
    # Build report
    # =========================================================================
    lines = []
    lines.append("=" * 100)
    lines.append("ANNOTATION QUALITY REPORT")
    lines.append("=" * 100)
    lines.append("")
    lines.append("This report identifies functions, parameters, and types that still use Ghidra")
    lines.append("default names or show signs of incorrect type assignments. Use it to prioritize")
    lines.append("manual annotation work.")
    lines.append("(CRT/entry functions are excluded)")
    lines.append("")

    # ---- Section 1: Summary Statistics ----
    total = len(non_crt)
    unnamed_func_count = len(unnamed_functions)
    unnamed_param_count = len(unnamed_params)
    type_issue_count = len(type_issue_addrs)

    lines.append("=" * 100)
    lines.append("SUMMARY STATISTICS")
    lines.append("=" * 100)
    lines.append("")
    lines.append("  Total functions analyzed:          %s" % fmt_num(total))
    lines.append("  Unnamed functions (FUN_):          %s (%4.1f%%)" % (
        fmt_num(unnamed_func_count),
        unnamed_func_count * 100.0 / total if total else 0))
    lines.append("  Functions with unnamed params:     %s (%4.1f%%)" % (
        fmt_num(unnamed_param_count),
        unnamed_param_count * 100.0 / total if total else 0))
    lines.append("  Functions with type issues:        %s (%4.1f%%)" % (
        fmt_num(type_issue_count),
        type_issue_count * 100.0 / total if total else 0))
    lines.append("")
    lines.append("  Type issue breakdown:")
    lines.append("    Wrong return type (void):          %d" % len(wrong_return_void))
    lines.append("    Wrong return type (wide/64-bit):   %d" % len(wrong_return_wide))
    lines.append("    Missing register params:           %d" % len(missing_params_reg))
    lines.append("    Wrong calling convention:          %d" % len(wrong_convention))
    lines.append("    Undefined types in variables:      %d" % len(undefined_types))
    lines.append("    Unresolved stack params:           %d" % len(missing_params_stack))
    lines.append("")

    # ---- Section 2: Unnamed Functions ----
    lines.append("=" * 100)
    lines.append("UNNAMED FUNCTIONS (still using FUN_XXXXXXXX or ClassName_FUN_XXXXXXXX)")
    lines.append("=" * 100)
    lines.append("")
    lines.append("Sorted by caller count (most-referenced first = highest priority to name).")
    lines.append("")

    # Group by virtual file, sorted by max callers in group
    by_vfile = defaultdict(list)
    for entry in unnamed_functions:
        by_vfile[entry['vfile']].append(entry)

    # Sort groups by max caller count descending
    sorted_vfiles = sorted(by_vfile.keys(),
                           key=lambda vf: max(e['callers'] for e in by_vfile[vf]),
                           reverse=True)

    for vfile in sorted_vfiles:
        entries = sorted(by_vfile[vfile], key=lambda e: -e['callers'])
        lines.append("  %s (%d unnamed)" % (vfile, len(entries)))
        for entry in entries:
            lines.append("    0x%-8s  %-12s  %d callers" % (
                entry['addr'], entry['convention'], entry['callers']))
        lines.append("")

    if not unnamed_functions:
        lines.append("  (none)")
        lines.append("")

    # ---- Section 3: Unnamed Parameters ----
    lines.append("=" * 100)
    lines.append("UNNAMED PARAMETERS (still using param_N)")
    lines.append("=" * 100)
    lines.append("")
    lines.append("Sorted by number of unnamed parameters (most unnamed first).")
    lines.append("")

    unnamed_params.sort(key=lambda e: (-e['unnamed_count'], e['name']))

    for entry in unnamed_params:
        lines.append("  %s" % entry['display_name'])
        lines.append("    Address: 0x%s  File: %s" % (entry['addr'], entry['vfile']))
        unnamed_str = ', '.join('%s (%s)' % (n, t) for n, t in entry['unnamed'])
        lines.append("    Unnamed: %s" % unnamed_str)
        if entry['named']:
            named_str = ', '.join('%s (%s)' % (n, t) for n, t in entry['named'])
            lines.append("    Named:   %s" % named_str)
        lines.append("")

    if not unnamed_params:
        lines.append("  (none)")
        lines.append("")

    # ---- Section 4: Type Correctness Issues ----
    lines.append("=" * 100)
    lines.append("TYPE CORRECTNESS ISSUES (heuristic-based)")
    lines.append("=" * 100)
    lines.append("")

    def _write_type_issue_section(title, entries, lines):
        """Write a subsection of type correctness issues."""
        lines.append("-" * 80)
        lines.append("%s (%d)" % (title, len(entries)))
        lines.append("-" * 80)
        lines.append("")
        if not entries:
            lines.append("  (none)")
            lines.append("")
            return
        for entry in entries:
            lines.append("  %s" % entry['display_name'])
            lines.append("    Address: 0x%s  File: %s" % (entry['addr'], entry['vfile']))
            lines.append("    Evidence: %s" % ', '.join(entry.get('matches', [])))
            lines.append("    Signature: %s" % entry.get('signature', '?'))
            lines.append("    Suggested: %s" % entry.get('suggested', ''))
            lines.append("")

    _write_type_issue_section(
        "Wrong return type (void function with extra output)",
        wrong_return_void, lines)

    _write_type_issue_section(
        "Wrong return type (64-bit return via EDX:EAX)",
        wrong_return_wide, lines)

    _write_type_issue_section(
        "Missing register parameters (likely wrong calling convention)",
        missing_params_reg, lines)

    _write_type_issue_section(
        "Wrong calling convention (unaffected register usage)",
        wrong_convention, lines)

    _write_type_issue_section(
        "Unresolved stack parameters (missing from signature)",
        missing_params_stack, lines)

    # Undefined types section is slightly different (no matches/signature)
    lines.append("-" * 80)
    lines.append("Undefined types in variables (%d)" % len(undefined_types))
    lines.append("-" * 80)
    lines.append("")

    if not undefined_types:
        lines.append("  (none)")
        lines.append("")
    else:
        undefined_types.sort(key=lambda e: (-e['total_undefs'], e['name']))
        for entry in undefined_types:
            lines.append("  %s" % entry['display_name'])
            lines.append("    Address: 0x%s  File: %s" % (entry['addr'], entry['vfile']))
            if entry['param_undefs']:
                lines.append("    Params:  %s" % ', '.join(
                    '%s (%s)' % (n, t) for n, t in entry['param_undefs']))
            if entry['local_undefs']:
                lines.append("    Locals:  %s" % ', '.join(
                    '%s (%s)' % (n, t) for n, t in entry['local_undefs']))
            lines.append("    Suggested: Resolve undefined types to concrete types")
            lines.append("")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "annotation_quality.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote annotation quality report: %s" % report_path)
    except Exception as e:
        log_info("Failed to write annotation quality report: %s" % str(e))

    return report_text


# =============================================================================
# Vtable union mismatch report
# =============================================================================

def _build_class_hierarchy_from_headers(headers_dir):
    """Parse struct definitions to find inheritance via 'base' member at offset 0x0."""
    import re, glob as _glob
    hierarchy = {}
    for h in _glob.glob(os.path.join(headers_dir, '*.h')):
        basename = os.path.basename(h)
        if '_vtable' in basename or '_full_vtable' in basename:
            continue
        with open(h) as f:
            content = f.read()
        m_struct = re.search(r'typedef struct (C\w+)\s*\{', content)
        if not m_struct:
            continue
        m_base = re.search(r'^\s+(C\w+)\s+base;\s*//\s*0x0', content, re.MULTILINE)
        if m_base:
            hierarchy[m_struct.group(1)] = m_base.group(1)
    return hierarchy


def _get_vtable_valid_union_members(class_name, hierarchy):
    """Determine which UActorVTable union members are valid for a class."""
    chain = set()
    current = class_name
    while current:
        chain.add(current)
        current = hierarchy.get(current)
    valid = {'_ub'}
    if 'CCharacter' in chain:
        valid.add('_uc')
    if 'CEnemy' in chain:
        valid.add('_ue')
    if 'CHero' in chain:
        valid.add('_uh')
    if 'CWeapon' in chain:
        valid.add('_uw')
    return valid


def _parse_vtable_header_methods(vtable_header_path):
    """Parse a _vtable.h file to extract method names and their offsets."""
    import re
    methods = {}
    with open(vtable_header_path) as f:
        for line in f:
            m = re.match(r'\s+\w+\*?\s+(\w+);\s*//\s*(0x[0-9a-fA-F]+)', line)
            if m:
                methods[int(m.group(2), 16)] = m.group(1)
    return methods


_UNION_MEMBER_NAMES = {
    '_ub': 'CDemonActor_vtable (base)',
    '_uc': 'CCharacter_vtable',
    '_ue': 'CEnemy_vtable',
    '_uh': 'CHero_vtable',
    '_uw': 'CWeapon_vtable',
}


def generate_vtable_union_mismatch_report(pseudocode_src_dir, output_path):
    """Detect wrong vtable union member accesses in pseudocode .cpp files.

    Scans all .cpp pseudocode files for vtable method calls that use a union member
    incompatible with the declared type of the object whose vtable is accessed.

    Args:
        pseudocode_src_dir: Directory containing pseudocode src/ tree
        output_path: Directory to write the report
    """
    import re, glob as _glob

    # Derive paths from pseudocode_src_dir
    # pseudocode_src_dir is like .../pseudocode/src
    pseudocode_base = os.path.dirname(pseudocode_src_dir)
    headers_dir = os.path.join(pseudocode_base, 'include', 'types', 'classes')

    if not os.path.isdir(headers_dir):
        log_info("Skipping vtable union mismatch report: headers dir not found")
        return

    # Build class hierarchy
    hierarchy = _build_class_hierarchy_from_headers(headers_dir)
    log_info("Vtable union report: %d classes in hierarchy" % len(hierarchy))

    # Build method maps for each sub-vtable section
    vtable_files = {
        '_ub': os.path.join(headers_dir, 'CDemonActor_vtable.h'),
        '_uc': os.path.join(headers_dir, 'CCharacter_vtable.h'),
        '_ue': os.path.join(headers_dir, 'CEnemy_vtable.h'),
        '_uh': os.path.join(headers_dir, 'CHero_vtable.h'),
        '_uw': os.path.join(headers_dir, 'CWeapon_vtable.h'),
    }
    method_maps = {}
    for member, path in vtable_files.items():
        if os.path.exists(path):
            method_maps[member] = _parse_vtable_header_methods(path)

    # Regex for vtable accesses
    vtable_access_re = re.compile(
        r'(\w+)'
        r'((?:->base|\.base|\)\.base|\))*)'
        r'\.vtable\._u([bcehw])'
    )
    # Regex for method name after union member
    sub_method_re = re.compile(r'\)->_u([bcehw])\)\.(\w+)\)')
    base_method_re = re.compile(r'\)->(\w+)\)')

    # Scan all .cpp pseudocode files
    cpp_files = [f for f in _glob.glob(
        os.path.join(pseudocode_src_dir, '**', '*.cpp'), recursive=True
    ) if os.path.isfile(f)]

    all_issues = []

    for filepath in sorted(cpp_files):
        with open(filepath) as f:
            content = f.read()

        if '.vtable._u' not in content:
            continue

        # Extract variable types
        var_types = {}
        m_this = re.search(r'\((\w+)\s+\*\s*this_ptr\b', content)
        if m_this:
            var_types['this_ptr'] = m_this.group(1)
        for m in re.finditer(r'^\s+(C\w+)\s+\*\s*(\w+)\s*[;=]', content, re.MULTILINE):
            var_types[m.group(2)] = m.group(1)

        lines = content.split('\n')
        for line_no, line in enumerate(lines, 1):
            if '.vtable._u' not in line:
                continue
            # Skip constructor/assignment patterns
            if re.search(r'vtable\._u\w\s*=\s*&', line):
                continue
            if re.search(r'=\s*.*vtable\._u\w\s*;', line):
                continue

            for m in vtable_access_re.finditer(line):
                var_name = m.group(1)
                union_member = '_u' + m.group(3)

                if var_name in ('base', 'ADJ', 'struct') or union_member == '_ub':
                    continue

                var_type = var_types.get(var_name)
                if not var_type:
                    continue

                # Check this type descends from CDemonActor
                chain = []
                current = var_type
                while current:
                    chain.append(current)
                    current = hierarchy.get(current)
                if 'CDemonActor' not in chain:
                    continue

                valid = _get_vtable_valid_union_members(var_type, hierarchy)
                if union_member in valid:
                    continue

                # Extract method name
                rest = line[m.end():]
                method_name = None
                sm = sub_method_re.match(rest)
                if sm:
                    method_name = sm.group(2)
                else:
                    sm = base_method_re.match(rest)
                    if sm:
                        method_name = sm.group(1)

                # Find correct member and method
                correct = None
                for pref in ['_ue', '_uh', '_uc', '_uw']:
                    if pref in valid:
                        correct = pref
                        break
                if not correct:
                    correct = '_ub'

                correct_method = None
                if method_name and union_member in method_maps and correct in method_maps:
                    used_methods = method_maps[union_member]
                    for off, name in used_methods.items():
                        if name == method_name:
                            correct_method = method_maps[correct].get(off)
                            break

                all_issues.append({
                    'file': filepath,
                    'line_no': line_no,
                    'line': line.strip(),
                    'var_name': var_name,
                    'var_type': var_type,
                    'union_used': union_member,
                    'union_valid': sorted(valid),
                    'correct_member': correct,
                    'method_shown': method_name,
                    'method_correct': correct_method,
                    'hierarchy_chain': ' -> '.join(chain),
                })

    # Generate report text
    lines = []
    lines.append("=" * 100)
    lines.append("VTABLE UNION MEMBER MISMATCH REPORT")
    lines.append("=" * 100)
    lines.append("")
    lines.append("Pseudocode locations where a UActorVTable union member is incompatible")
    lines.append("with the declared type of the object whose vtable is accessed. When Ghidra")
    lines.append("picks the wrong union member, method names at overlapping offsets are resolved")
    lines.append("from the wrong vtable struct, producing misleading pseudocode.")
    lines.append("")

    lines.append("-" * 100)
    lines.append("SUMMARY")
    lines.append("-" * 100)
    lines.append("")
    lines.append("  Total mismatches found: %d" % len(all_issues))
    lines.append("")

    if all_issues:
        # By union member
        by_member = defaultdict(list)
        for issue in all_issues:
            by_member[issue['union_used']].append(issue)
        lines.append("  By union member used:")
        for member in sorted(by_member):
            lines.append("    %s (%s): %d" % (
                member, _UNION_MEMBER_NAMES.get(member, '?'), len(by_member[member])))
        lines.append("")

        # By source file
        by_vfile = defaultdict(list)
        for issue in all_issues:
            rel = os.path.relpath(issue['file'], pseudocode_src_dir)
            by_vfile[os.path.dirname(rel)].append(issue)
        lines.append("  By source file:")
        for vfile in sorted(by_vfile, key=lambda v: -len(by_vfile[v])):
            lines.append("    %-40s %d" % (vfile, len(by_vfile[vfile])))
        lines.append("")

        # By object type
        by_type = defaultdict(list)
        for issue in all_issues:
            by_type[issue['var_type']].append(issue)
        lines.append("  By object type:")
        for vtype in sorted(by_type, key=lambda t: -len(by_type[t])):
            chain = by_type[vtype][0]['hierarchy_chain']
            lines.append("    %-25s %d  (%s)" % (vtype, len(by_type[vtype]), chain))
        lines.append("")

        # Detailed findings
        lines.append("=" * 100)
        lines.append("DETAILED FINDINGS")
        lines.append("=" * 100)
        lines.append("")

        for vfile in sorted(by_vfile, key=lambda v: -len(by_vfile[v])):
            file_issues = by_vfile[vfile]
            lines.append("  %s (%d)" % (vfile, len(file_issues)))

            by_func = defaultdict(list)
            for issue in file_issues:
                by_func[os.path.basename(issue['file'])].append(issue)

            for func_file in sorted(by_func):
                for issue in by_func[func_file]:
                    method_info = ""
                    if issue.get('method_shown') and issue.get('method_correct'):
                        method_info = "  %s -> %s" % (
                            issue['method_shown'], issue['method_correct'])
                    elif issue.get('method_shown'):
                        method_info = "  %s -> ?" % issue['method_shown']

                    lines.append("    %-50s  %s on %-15s  used %s, need %s%s" % (
                        func_file.replace('.cpp', ''),
                        issue['var_name'],
                        issue['var_type'],
                        issue['union_used'],
                        issue['correct_member'],
                        method_info))
            lines.append("")

        # Offset collision reference
        lines.append("=" * 100)
        lines.append("OFFSET COLLISION REFERENCE")
        lines.append("=" * 100)
        lines.append("")
        lines.append("  %-8s  %-30s  %-30s" % ("Offset", "CCharacter (_uc)", "CWeapon (_uw)"))
        lines.append("  " + "-" * 72)
        uc_methods = method_maps.get('_uc', {})
        uw_methods = method_maps.get('_uw', {})
        for rel in sorted(set(list(uc_methods.keys()) + list(uw_methods.keys()))):
            abs_off = 0xec + rel
            uc_name = uc_methods.get(rel, '-')
            uw_name = uw_methods.get(rel, '-')
            lines.append("  0x%-6x  %-30s  %-30s" % (abs_off, uc_name, uw_name))
        lines.append("")

        lines.append("  %-8s  %-30s  %-30s" % ("Offset", "CEnemy (_ue)", "CHero (_uh)"))
        lines.append("  " + "-" * 72)
        ue_methods = method_maps.get('_ue', {})
        uh_methods = method_maps.get('_uh', {})
        for rel in sorted(set(list(ue_methods.keys()) + list(uh_methods.keys()))):
            abs_off = 0x154 + rel
            ue_name = ue_methods.get(rel, '-')
            uh_name = uh_methods.get(rel, '-')
            lines.append("  0x%-6x  %-30s  %-30s" % (abs_off, ue_name, uh_name))
        lines.append("")
    else:
        lines.append("  No mismatches detected.")

    report_text = '\n'.join(lines)
    report_path = os.path.join(output_path, "vtable_union_mismatches.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote vtable union mismatch report: %s (%d issues)" % (
            report_path, len(all_issues)))
    except Exception as e:
        log_info("Failed to write vtable union mismatch report: %s" % str(e))


def generate_double_usage_report(functions, output_path):
    """Generate report on functions that return double or take double parameters.

    These functions use the Watcom EAX:EDX convention for 64-bit values,
    which can cause decompiler artifacts (SUB84/CONCAT44/._0_4_/._4_4_ splits).
    This report helps identify functions that may need _SPLIT_DOUBLE typing
    or custom storage fixes.

    Args:
        functions: List of function data dicts from load_function_data()
        output_path: Base directory for output files
    """
    lines = []
    lines.append("=" * 100)
    lines.append("DOUBLE USAGE ANALYSIS")
    lines.append("=" * 100)
    lines.append("")
    lines.append("Functions that return double or take double parameters (excluding CRT/entry).")
    lines.append("These use the Watcom EAX:EDX convention for 64-bit values, which can cause")
    lines.append("decompiler artifacts (SUB84/CONCAT44/._0_4_/._4_4_ splits).")
    lines.append("")

    returns_double = []
    takes_double = []

    for func in functions:
        vfile = func.get('_virtual_file', '')
        if _is_crt_or_entry(vfile):
            continue

        func_info = func.get('function', {})
        signature = func_info.get('signature', '')
        name = func_info.get('name', 'unknown')
        address = func_info.get('address', '?')

        # Check return type - signature starts with "double __cdecl ..." or similar
        returns_dbl = False
        sig_stripped = signature.strip()
        if sig_stripped.startswith('double '):
            returns_dbl = True

        # Check parameters for double types from stack_frame
        has_double_param = False
        double_params = []
        stack_frame = func.get('stack_frame', {})
        for var in stack_frame.get('variables', []):
            if var.get('is_param') and var.get('type') in ('double', 'long double'):
                has_double_param = True
                double_params.append(var.get('name', '?'))

        # Also check signature string for double params (catches cases
        # where stack_frame might not list them properly)
        paren_idx = signature.find('(')
        if paren_idx >= 0:
            param_str = signature[paren_idx:]
            if 'double ' in param_str and not has_double_param:
                has_double_param = True

        # Count suspects related to double splitting
        double_suspects = 0
        for suspect in func.get('suspects', []):
            stype = suspect.get('type', '')
            match = suspect.get('match', '')
            if stype in ('sub84_truncation', 'decompiler_intrinsic') and \
               any(x in match for x in ('SUB84', 'CONCAT44', 'CONCAT48', '._0_4_', '._4_4_')):
                double_suspects += 1

        if returns_dbl:
            returns_double.append({
                'name': name,
                'address': address,
                'vfile': vfile,
                'signature': signature,
                'double_suspects': double_suspects,
            })

        if has_double_param:
            takes_double.append({
                'name': name,
                'address': address,
                'vfile': vfile,
                'signature': signature,
                'double_params': double_params,
                'double_suspects': double_suspects,
            })

    # Summary
    lines.append("SUMMARY")
    lines.append("-" * 50)
    lines.append("Functions returning double:         %d" % len(returns_double))
    lines.append("Functions with double parameter(s): %d" % len(takes_double))
    lines.append("")

    # Functions returning double
    lines.append("=" * 100)
    lines.append("FUNCTIONS RETURNING DOUBLE (%d)" % len(returns_double))
    lines.append("=" * 100)
    lines.append("")

    if returns_double:
        # Sort by suspect count descending (most problematic first)
        returns_double.sort(key=lambda x: (-x['double_suspects'], x['name']))
        for entry in returns_double:
            suspects_tag = " [%d double-related suspects]" % entry['double_suspects'] \
                if entry['double_suspects'] > 0 else ""
            lines.append("  %s" % entry['name'])
            lines.append("    Address: %s  File: %s%s" % (
                entry['address'], entry['vfile'], suspects_tag))
    else:
        lines.append("  (none)")
    lines.append("")

    # Functions taking double parameters
    lines.append("=" * 100)
    lines.append("FUNCTIONS WITH DOUBLE PARAMETER(S) (%d)" % len(takes_double))
    lines.append("=" * 100)
    lines.append("")

    if takes_double:
        takes_double.sort(key=lambda x: (-x['double_suspects'], x['name']))
        for entry in takes_double:
            params_str = ", ".join(entry['double_params']) if entry['double_params'] else "(from signature)"
            suspects_tag = " [%d double-related suspects]" % entry['double_suspects'] \
                if entry['double_suspects'] > 0 else ""
            lines.append("  %s" % entry['name'])
            lines.append("    Address: %s  File: %s%s" % (
                entry['address'], entry['vfile'], suspects_tag))
            lines.append("    Double params: %s" % params_str)
    else:
        lines.append("  (none)")
    lines.append("")

    report_text = "\n".join(lines)

    report_path = os.path.join(output_path, "double_usage_analysis.txt")
    try:
        with open(report_path, 'w') as f:
            f.write(report_text)
        log_info("Wrote double usage analysis: %s (%d return, %d param)" % (
            report_path, len(returns_double), len(takes_double)))
    except Exception as e:
        log_info("Failed to write double usage analysis: %s" % str(e))

    return report_text


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
    generate_param_mismatch_report(functions, output_path)
    generate_compilation_summary_report(functions, output_path)
    generate_compilation_detailed_report(functions, output_path)
    generate_pass_by_value_report(functions, output_path)
    generate_annotation_quality_report(functions, output_path)
    generate_vtable_union_mismatch_report(pseudocode_src_dir, output_path)
    generate_double_usage_report(functions, output_path)
    generate_csv_data(functions, files, output_path)

    # Generate struct quality report
    log_info("Generating struct quality report...")
    # Derive data_types.json path from pseudocode src dir
    # pseudocode_src_dir is like .../pseudocode/src/core/... but we walk it,
    # so the base is the annotations/nocedit.exe dir
    annotations_base = pseudocode_src_dir
    while annotations_base and os.path.basename(annotations_base) != 'pseudocode':
        annotations_base = os.path.dirname(annotations_base)
    if annotations_base:
        exe_dir = os.path.dirname(annotations_base)
        data_types_path = os.path.join(exe_dir, 'data_types', 'data_types.json')
        if os.path.isfile(data_types_path):
            generate_struct_report(data_types_path, pseudocode_src_dir, output_path)
        else:
            log_info("Skipping struct report: %s not found" % data_types_path)
    else:
        log_info("Skipping struct report: could not locate pseudocode base dir")

    # Generate SVG graphs for README
    log_info("Generating SVG graphs...")
    generate_graphs(functions, files, output_path)

    # Print quick summary (excluding CRT/entry)
    non_crt_functions = [f for f in functions if not _is_crt_or_entry(f.get('_virtual_file', ''))]
    non_crt_files = {k: v for k, v in files.items() if not _is_crt_or_entry(k)}
    total_funcs = len(non_crt_functions)
    clean_funcs = sum(1 for f in non_crt_functions if _is_effectively_clean(f))
    files_100 = sum(1 for f in non_crt_files.values() if f['clean_percent'] == 100)
    files_90 = sum(1 for f in non_crt_files.values() if f['clean_percent'] >= 90)
    log_info("")
    log_info("Analysis Summary (excluding CRT/entry):")
    log_info("  Total functions: %d" % total_funcs)
    log_info("  Clean functions: %d (%.1f%%)" % (clean_funcs, clean_funcs*100.0/total_funcs if total_funcs else 0))
    log_info("  Files at 100%%: %d" % files_100)
    log_info("  Files at 90%%+: %d" % files_90)
