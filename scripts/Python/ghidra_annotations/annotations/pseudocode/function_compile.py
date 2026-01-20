# Function compilation verification module
# Compiles individual function .cpp files to verify syntax correctness
# and categorizes compilation errors for analysis

import os
import re
import json
import subprocess
from concurrent.futures import ThreadPoolExecutor, as_completed
from ghidra_annotations.util.log import log_info

# =============================================================================
# Path Normalization
# =============================================================================

def strip_ansi_codes(text):
    """Remove ANSI color/escape codes from text."""
    if not text:
        return text
    ansi_pattern = re.compile(r'\x1b\[[0-9;]*m')
    return ansi_pattern.sub('', text)


def normalize_quotes(text):
    """Replace Unicode fancy quotes with ASCII quotes."""
    if not text:
        return text
    # Replace left/right single quotes with ASCII single quote
    text = text.replace('\u2018', "'").replace('\u2019', "'")
    # Replace left/right double quotes with ASCII double quote
    text = text.replace('\u201c', '"').replace('\u201d', '"')
    return text


def normalize_path_in_message(message, repo_dir):
    """Replace absolute paths in message with paths relative to repo_dir."""
    if not message or not repo_dir:
        return message
    # Handle both with and without trailing slash
    repo_with_slash = repo_dir.rstrip('/') + '/'
    result = message.replace(repo_with_slash, '')
    return result.replace(repo_dir, '')


# =============================================================================
# Error Categorization
# =============================================================================

# Error category patterns (regex patterns for g++ error messages)
ERROR_CATEGORIES = {
    'undeclared_identifier': [
        r"use of undeclared identifier",
        r"'[^']+' was not declared",
        r"undeclared \(first use",
        r"'[^']+' undeclared",
    ],
    'type_error': [
        r"unknown type name",
        r"does not name a type",
        r"invalid use of incomplete type",
        r"expected class-name",
    ],
    'incomplete_type': [
        r"incomplete type",
        r"forward declaration of",
        r"has incomplete type",
    ],
    'missing_header': [
        r"file not found",
        r"No such file or directory",
        r"cannot open source file",
    ],
    'syntax_error': [
        r"expected ';'",
        r"expected '\)'",
        r"expected '\}'",
        r"expected '\{'",
        r"expected expression",
        r"expected primary-expression",
        r"expected unqualified-id",
        r"expected declaration",
        r"stray '",
        r"missing terminating",
    ],
    'undefined_reference': [
        r"undefined reference to",
        r"unresolved external",
    ],
    'incompatible_types': [
        r"incompatible",
        r"cannot convert",
        r"invalid conversion",
        r"no matching function",
        r"could not convert",
        r"invalid operands",
    ],
    'missing_member': [
        r"no member named",
        r"has no member",
        r"is not a member",
        r"class has no member",
    ],
    'redefinition': [
        r"redefinition of",
        r"redeclared",
        r"previous definition",
        r"conflicting declaration",
    ],
}


def categorize_error(error_msg):
    """Categorize an error message into a known type.

    Args:
        error_msg: Error message string from compiler

    Returns:
        Category string (one of the ERROR_CATEGORIES keys, or 'other')
    """
    if not error_msg:
        return 'other'

    error_lower = error_msg.lower()

    for category, patterns in ERROR_CATEGORIES.items():
        for pattern in patterns:
            if re.search(pattern, error_msg, re.IGNORECASE):
                return category

    return 'other'


# =============================================================================
# Error Parsing
# =============================================================================

def parse_error_output(stderr, cpp_path):
    """Parse g++ error output into structured format.

    Args:
        stderr: Standard error output from g++
        cpp_path: Path to the compiled file (for path normalization)

    Returns:
        Tuple of (errors: list[dict], warnings: list[dict])
    """
    errors = []
    warnings = []

    if not stderr:
        return (errors, warnings)

    # Get basename for matching
    cpp_basename = os.path.basename(cpp_path)
    cpp_dir = os.path.dirname(cpp_path)

    # Regex to match g++ error/warning format:
    # file:line:col: error: message
    # file:line:col: warning: message
    # file:line: error: message
    pattern = re.compile(
        r'^([^:]+):(\d+):(?:(\d+):)?\s*(error|warning|note):\s*(.*)$',
        re.MULTILINE
    )

    for match in pattern.finditer(stderr):
        file_path = match.group(1)
        line = int(match.group(2))
        column = int(match.group(3)) if match.group(3) else 0
        msg_type = match.group(4).lower()
        message = match.group(5).strip()

        # Skip notes (they're context for errors/warnings)
        if msg_type == 'note':
            continue

        entry = {
            'line': line,
            'column': column,
            'message': message,
            'category': categorize_error(message),
        }

        if msg_type == 'error':
            errors.append(entry)
        elif msg_type == 'warning':
            warnings.append(entry)

    # If no structured errors found but stderr has content, create a generic error
    if not errors and stderr.strip():
        # Look for any line containing 'error'
        for line in stderr.split('\n'):
            if 'error:' in line.lower():
                errors.append({
                    'line': 0,
                    'column': 0,
                    'message': line.strip(),
                    'category': categorize_error(line),
                })
                break

        # If still no errors, use first non-empty line
        if not errors:
            first_line = stderr.strip().split('\n')[0]
            errors.append({
                'line': 0,
                'column': 0,
                'message': first_line[:500],  # Limit length
                'category': 'other',
            })

    return (errors, warnings)


# =============================================================================
# Single File Compilation
# =============================================================================

def compile_function_cpp(cpp_path, include_dir, compiler='g++', timeout=60, repo_dir=None):
    """Compile a single function .cpp file with g++ -fsyntax-only.

    Args:
        cpp_path: Path to the .cpp file
        include_dir: Path to include directory for -I flag
        compiler: Compiler to use (default: g++)
        timeout: Compilation timeout in seconds
        repo_dir: Optional repo root for normalizing paths in error messages

    Returns:
        Dict with:
            success: bool
            errors: list[dict] with line, column, message, category
            warnings: list[dict] with line, column, message, category
    """
    result = {
        'success': False,
        'errors': [],
        'warnings': [],
    }

    try:
        cmd = [
            compiler,
            '-fsyntax-only',
            '-fno-diagnostics-color',  # Prevent ANSI color codes in output
            '-std=c++11',
            '-I', include_dir,
            '-Wno-incompatible-pointer-types',
            '-Wno-int-conversion',
            '-Wno-unused-value',
            '-Wno-unused-variable',
            cpp_path
        ]

        proc_result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=timeout
        )

        # Clean up stderr: strip ANSI codes, normalize quotes and paths
        stderr = strip_ansi_codes(proc_result.stderr)
        stderr = normalize_quotes(stderr)
        if repo_dir:
            stderr = normalize_path_in_message(stderr, repo_dir)

        if proc_result.returncode == 0:
            result['success'] = True
            # Still parse warnings
            _, warnings = parse_error_output(stderr, cpp_path)
            result['warnings'] = warnings
        else:
            errors, warnings = parse_error_output(stderr, cpp_path)
            result['errors'] = errors
            result['warnings'] = warnings

    except subprocess.TimeoutExpired:
        result['errors'] = [{
            'line': 0,
            'column': 0,
            'message': 'Compilation timed out after %ds' % timeout,
            'category': 'other',
        }]
    except FileNotFoundError:
        result['errors'] = [{
            'line': 0,
            'column': 0,
            'message': "Compiler '%s' not found" % compiler,
            'category': 'other',
        }]
    except Exception as e:
        result['errors'] = [{
            'line': 0,
            'column': 0,
            'message': 'Compilation error: %s' % str(e),
            'category': 'other',
        }]

    return result


# =============================================================================
# Parallel Compilation
# =============================================================================

def load_function_info_from_json(json_path):
    """Load function name and metadata from a JSON file.

    Args:
        json_path: Path to the function JSON file

    Returns:
        Dict with 'name', 'address', 'json_path', 'cpp_path' or None on error
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)

        func_info = data.get('function', {})
        func_name = func_info.get('name', '')
        func_addr = func_info.get('address', '')

        if not func_name:
            return None

        # Derive cpp path from json path
        cpp_path = json_path.replace('.json', '.cpp')

        return {
            'name': func_name,
            'address': func_addr,
            'json_path': json_path,
            'cpp_path': cpp_path,
        }
    except Exception:
        return None


def compile_all_functions(src_dir, include_dir, compiler='g++', num_threads=8,
                          skip_dirs=None, progress_callback=None, repo_dir=None):
    """Compile all function .cpp files in parallel.

    Reads JSON files to get actual function names for skip detection,
    then compiles the corresponding cpp files and updates JSON with results.

    Args:
        src_dir: Directory containing function .json/.cpp files
        include_dir: Include directory for -I flag
        compiler: Compiler to use
        num_threads: Number of parallel compilation threads
        skip_dirs: List of directory names to skip (e.g., ['globals', 'crt', 'entry'])
        progress_callback: Optional callback(completed, total) for progress
        repo_dir: Optional repo root for normalizing paths in error messages

    Returns:
        Dict mapping func_name -> compilation_result dict
    """
    if skip_dirs is None:
        skip_dirs = ['globals', 'crt', 'entry']  # Skip globals, CRT, and entry by default

    results = {}

    # Find all .json files (which represent functions)
    function_files = []
    for root, dirs, files in os.walk(src_dir):
        # Skip specified directories
        rel_root = os.path.relpath(root, src_dir)
        skip_this = False
        for skip_dir in skip_dirs:
            if rel_root == skip_dir or rel_root.startswith(skip_dir + os.sep):
                skip_this = True
                break
        if skip_this:
            continue

        for f in files:
            if f.endswith('.json'):
                json_path = os.path.join(root, f)
                func_info = load_function_info_from_json(json_path)
                if func_info and os.path.exists(func_info['cpp_path']):
                    function_files.append(func_info)

    if not function_files:
        return results

    total = len(function_files)

    # Check if compiler is available
    try:
        check_result = subprocess.run([compiler, '--version'],
                                      capture_output=True, timeout=5)
        if check_result.returncode != 0:
            log_info("Compiler '%s' not available, skipping function compilation" % compiler)
            return results
    except (FileNotFoundError, subprocess.TimeoutExpired):
        log_info("Compiler '%s' not available, skipping function compilation" % compiler)
        return results

    log_info("Compiling %d function files with %d threads..." % (total, num_threads))
    log_info("  (skipping directories: %s)" % ', '.join(skip_dirs))

    completed = 0

    with ThreadPoolExecutor(max_workers=num_threads) as executor:
        # Submit compilation tasks
        future_to_func = {}
        for func_info in function_files:
            future = executor.submit(compile_function_cpp, func_info['cpp_path'], include_dir,
                                     compiler, 60, repo_dir)
            future_to_func[future] = func_info

        # Collect results and update JSON files
        for future in as_completed(future_to_func):
            func_info = future_to_func[future]
            func_name = func_info['name']

            try:
                compile_result = future.result()
                compilation_status = {
                    'success': compile_result['success'],
                    'errors': compile_result['errors'],
                    'warnings': compile_result['warnings'],
                }
            except Exception as e:
                compilation_status = {
                    'success': False,
                    'errors': [{
                        'line': 0,
                        'column': 0,
                        'message': 'Exception: %s' % str(e),
                        'category': 'other',
                    }],
                    'warnings': [],
                }

            results[func_name] = {
                'success': compilation_status['success'],
                'errors': compilation_status['errors'],
                'warnings': compilation_status['warnings'],
                'cpp_path': func_info['cpp_path'],
                'json_path': func_info['json_path'],
            }

            # Update JSON file with compilation status
            update_function_json_with_compilation(func_info['json_path'], compilation_status)

            completed += 1
            if progress_callback:
                progress_callback(completed, total)

            # Progress logging
            if completed % 100 == 0:
                log_info("  Compiled %d/%d functions..." % (completed, total))

    return results


# =============================================================================
# SVG Progress Visualization
# =============================================================================

def generate_progress_svg(results, output_path):
    """Generate SVG visualization of compilation status.

    Creates:
    - Pie chart showing success/fail/skipped ratios
    - Bar chart by error category

    Args:
        results: Dict from compile_all_functions()
        output_path: Path to write compilation_progress.svg
    """
    import math

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

    # SVG dimensions
    width = 800
    height = 500
    pie_cx, pie_cy = 200, 200
    pie_radius = 140

    # Color palette
    colors = {
        'success': '#4CAF50',  # Green
        'failed': '#F44336',   # Red
    }
    bar_colors = [
        '#FF5722', '#FF9800', '#FFC107', '#FFEB3B',
        '#8BC34A', '#03A9F4', '#3F51B5', '#9C27B0',
    ]

    # Build SVG
    svg_parts = []
    svg_parts.append('<?xml version="1.0" encoding="UTF-8"?>')
    svg_parts.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d">' % (
        width, height, width, height))
    svg_parts.append('  <style>')
    svg_parts.append('    .title { font: bold 16px sans-serif; }')
    svg_parts.append('    .subtitle { font: bold 14px sans-serif; }')
    svg_parts.append('    .label { font: 12px sans-serif; }')
    svg_parts.append('    .value { font: bold 12px sans-serif; }')
    svg_parts.append('  </style>')

    # Background
    svg_parts.append('  <rect width="100%%" height="100%%" fill="white"/>')

    # Main title
    svg_parts.append('  <text x="%d" y="30" class="title" text-anchor="middle">Function Compilation Status</text>' % (
        width // 2))

    # === PIE CHART (left side) ===
    svg_parts.append('  <text x="%d" y="60" class="subtitle" text-anchor="middle">Compilation Results</text>' % pie_cx)

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

    # Pie legend
    legend_y = 360
    for i, (label, value, color) in enumerate(pie_data):
        if value == 0:
            continue
        percentage = value / total * 100
        svg_parts.append('  <rect x="80" y="%d" width="15" height="15" fill="%s"/>' % (
            legend_y + i * 22, color))
        svg_parts.append('  <text x="100" y="%d" class="label">%s: %d (%.1f%%)</text>' % (
            legend_y + i * 22 + 12, label, value, percentage))

    # === BAR CHART (right side) ===
    if sorted_categories:
        bar_x = 420
        bar_y = 80
        bar_width = 200
        bar_height = 25
        bar_spacing = 8

        svg_parts.append('  <text x="%d" y="60" class="subtitle">Error Categories</text>' % bar_x)

        max_count = sorted_categories[0][1] if sorted_categories else 1

        for i, (category, count) in enumerate(sorted_categories):
            y = bar_y + i * (bar_height + bar_spacing)
            width_pct = (count / max_count) if max_count > 0 else 0
            actual_width = int(width_pct * bar_width)

            # Category label (truncated)
            display_label = category[:20]
            svg_parts.append('  <text x="%d" y="%d" class="label" text-anchor="end">%s</text>' % (
                bar_x - 5, y + bar_height - 8, display_label))

            # Background bar
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="#E0E0E0" rx="3"/>' % (
                bar_x, y, bar_width, bar_height))

            # Filled bar
            color = bar_colors[i % len(bar_colors)]
            svg_parts.append('  <rect x="%d" y="%d" width="%d" height="%d" fill="%s" rx="3"/>' % (
                bar_x, y, actual_width, bar_height, color))

            # Count label
            svg_parts.append('  <text x="%d" y="%d" class="value">%d</text>' % (
                bar_x + bar_width + 10, y + bar_height - 8, count))

    # Summary stats at bottom
    summary_y = 450
    success_rate = (successful * 100.0 / total) if total > 0 else 0
    svg_parts.append('  <text x="%d" y="%d" class="label" text-anchor="middle">' % (width // 2, summary_y))
    svg_parts.append('    Total: %d | Success Rate: %.1f%%' % (total, success_rate))
    svg_parts.append('  </text>')

    svg_parts.append('</svg>')

    # Write SVG
    try:
        with open(output_path, 'w') as f:
            f.write('\n'.join(svg_parts))
        log_info("Wrote compilation progress SVG: %s" % output_path)
    except Exception as e:
        log_info("Failed to write compilation progress SVG: %s" % str(e))


# =============================================================================
# JSON Update Functions
# =============================================================================

def update_function_json_with_compilation(json_path, compilation_status):
    """Update a function's JSON file with compilation status.

    Args:
        json_path: Path to the function's .json file
        compilation_status: Dict with success, errors, warnings

    Returns:
        True if successful, False otherwise
    """
    try:
        # Load existing JSON
        with open(json_path, 'r') as f:
            data = json.load(f)

        # Add compilation_status
        data['compilation_status'] = {
            'success': compilation_status.get('success', False),
            'errors': compilation_status.get('errors', []),
            'warnings': compilation_status.get('warnings', []),
        }

        # Write back
        with open(json_path, 'w') as f:
            json.dump(data, f, indent=2, sort_keys=True)

        return True

    except Exception as e:
        log_info("Failed to update %s with compilation status: %s" % (json_path, str(e)))
        return False


def update_all_function_jsons(src_dir, compilation_results):
    """Update all function JSON files with compilation status.

    Args:
        src_dir: Source directory containing function files
        compilation_results: Dict from compile_all_functions()

    Returns:
        Tuple of (updated_count, failed_count)
    """
    updated = 0
    failed = 0

    for func_name, result in compilation_results.items():
        cpp_path = result.get('cpp_path')
        if not cpp_path:
            continue

        # Derive JSON path from cpp path
        json_path = cpp_path.replace('.cpp', '.json')
        if not os.path.exists(json_path):
            continue

        if update_function_json_with_compilation(json_path, result):
            updated += 1
        else:
            failed += 1

    log_info("Updated %d function JSON files with compilation status (%d failed)" % (updated, failed))
    return (updated, failed)


# =============================================================================
# Main Entry Point for Exporter Integration
# =============================================================================

def compile_functions_after_export(pseudocode_dir, compiler='g++', num_threads=8, reports_dir=None, repo_dir=None):
    """Main entry point for function compilation after export.

    This function should be called from export_pseudocode() after all
    function files have been written.

    Args:
        pseudocode_dir: Base pseudocode directory (contains src/ and include/)
        compiler: Compiler to use
        num_threads: Number of parallel compilation threads
        reports_dir: Directory to write reports (defaults to pseudocode_dir)
        repo_dir: Optional repo root for normalizing paths in error messages

    Returns:
        Dict with summary statistics:
            total, successful, failed, success_rate
    """
    src_dir = os.path.join(pseudocode_dir, "src")
    include_dir = os.path.join(pseudocode_dir, "include")

    if not os.path.isdir(src_dir):
        log_info("Function compilation: src directory not found at %s" % src_dir)
        return None

    if not os.path.isdir(include_dir):
        log_info("Function compilation: include directory not found at %s" % include_dir)
        return None

    # Compile all functions (this also updates JSON files with compilation status)
    log_info("Starting function compilation verification...")
    results = compile_all_functions(
        src_dir, include_dir,
        compiler=compiler,
        num_threads=num_threads,
        skip_dirs=['globals', 'crt', 'entry'],  # Skip globals, CRT, and entry directories
        repo_dir=repo_dir
    )

    if not results:
        log_info("No functions compiled")
        return None

    # Calculate summary
    total = len(results)
    successful = sum(1 for r in results.values() if r.get('success', False))
    failed = total - successful
    success_rate = (successful * 100.0 / total) if total > 0 else 0

    log_info("Function compilation complete:")
    log_info("  Total compiled: %d" % total)
    log_info("  Successful: %d (%.1f%%)" % (successful, success_rate))
    log_info("  Failed: %d" % failed)

    # Generate progress visualization
    if reports_dir is None:
        reports_dir = pseudocode_dir

    svg_path = os.path.join(reports_dir, "compilation_progress.svg")
    generate_progress_svg(results, svg_path)

    return {
        'total': total,
        'successful': successful,
        'failed': failed,
        'success_rate': success_rate,
    }
