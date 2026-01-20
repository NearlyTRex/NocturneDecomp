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

    total = len(functions)

    # Calculate decompilation stats
    clean_funcs = set()
    for f in functions:
        if f.get('complexity', {}).get('suspect_count', 0) == 0:
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
    clean_funcs = sum(1 for f in functions if f.get('complexity', {}).get('suspect_count', 0) == 0)
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
                        # Check for both .c and .cpp source files
                        base_path = json_path[:-5]  # Remove '.json'
                        if os.path.exists(base_path + '.cpp'):
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
    lines = []
    lines.append("=" * 100)
    lines.append("EASY WINS - PRIORITIZED ACTION LIST")
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
            mismatch_info = {
                'func': func,
                'declared': declared,
                'estimated': estimated,
                'confidence': confidence,
                'diff': estimated - declared,
                'call_sites': call_site_count
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
            lines.append("    Declared: %d params, Estimated: %d params (%s)" % (m['declared'], m['estimated'], diff_str))
            lines.append("    Call sites: %d, Confidence: %s" % (m['call_sites'], m['confidence']))
            lines.append("    File: %s" % vfile)
            lines.append("    Signature: %s" % signature[:80])

            # Show sample call site details
            call_sites = m['func'].get('param_estimates', {}).get('call_sites', [])
            if call_sites:
                lines.append("    Sample call sites:")
                for site in call_sites[:3]:
                    reg_params = ', '.join(site.get('reg_params', []))
                    lines.append("      %s at %s: %d reg [%s], %d stack" % (
                        site.get('caller', '?')[:30],
                        site.get('call_addr', '?'),
                        len(site.get('reg_params', [])),
                        reg_params,
                        site.get('stack_params', 0)
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

        # Show details for each category
        for category in sorted(error_categories.keys(), key=lambda x: -len(error_categories[x])):
            errors = error_categories[category]
            lines.append("=" * 100)
            lines.append("CATEGORY: %s (%d errors)" % (category, len(errors)))
            lines.append("=" * 100)
            lines.append("")

            # Show unique functions with this error type
            seen_funcs = set()
            for error in errors[:30]:
                if error['func'] not in seen_funcs:
                    seen_funcs.add(error['func'])
                    msg_preview = error['message'][:80] if error['message'] else ''
                    lines.append("  %s" % error['func'])
                    if msg_preview:
                        lines.append("    Line %d: %s..." % (error['line'], msg_preview))

            if len(errors) > 30:
                lines.append("")
                lines.append("  ... and %d more errors" % (len(errors) - 30))
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
    generate_param_mismatch_report(functions, output_path)
    generate_compilation_summary_report(functions, output_path)
    generate_csv_data(functions, files, output_path)

    # Generate SVG graphs for README
    log_info("Generating SVG graphs...")
    generate_graphs(functions, files, output_path)

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
