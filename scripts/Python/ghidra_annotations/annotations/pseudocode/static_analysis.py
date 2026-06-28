# Static analysis module for decompiled pseudocode
# Runs clang static analyzer, cppcheck, and clang-tidy on function .cpp files
# and stores results in function JSON files for report generation.
#
# Only analyzes .cpp and .keep.cpp files (skips .mmx.cpp and .byval.cpp
# which are assembly wrappers with no meaningful C++ to analyze).

import os
import re
import json
import subprocess
from collections import defaultdict
from concurrent.futures import ThreadPoolExecutor, as_completed
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.compiler_config import (
    DEFAULT_COMPILER
)
from ghidra_annotations.annotations.pseudocode.function_compile import (
    strip_ansi_codes, normalize_quotes, normalize_path_in_message
)


# =============================================================================
# Constants
# =============================================================================

# File extensions eligible for static analysis (in priority order)
# Excludes .mmx and .byval variants which are assembly wrappers
_ANALYZABLE_EXTENSIONS = (
    '.keep.cpp', '.keep.c',
    '.cpp', '.c',
)

# Base compiler flags shared with static analysis tools
# (subset of DEFAULT_COMPILE_FLAGS relevant to parsing, not warnings)
_BASE_ANALYSIS_FLAGS = [
    '-m32',
    '-mmmx',
    '-fasm-blocks',
    '-std=gnu++11',
]

# Tool name constants
TOOL_CLANG_ANALYZER = 'clang_analyzer'
TOOL_CPPCHECK = 'cppcheck'
TOOL_CLANG_TIDY = 'clang_tidy'

ALL_TOOLS = [TOOL_CLANG_ANALYZER, TOOL_CPPCHECK, TOOL_CLANG_TIDY]

# Tool binary names
_TOOL_BINARIES = {
    TOOL_CLANG_ANALYZER: DEFAULT_COMPILER,  # clang++ --analyze
    TOOL_CPPCHECK: 'cppcheck',
    TOOL_CLANG_TIDY: 'clang-tidy',
}


# =============================================================================
# Tool Availability
# =============================================================================

def check_tool_available(tool_name):
    """Check if a static analysis tool binary is available.

    Args:
        tool_name: One of TOOL_CLANG_ANALYZER, TOOL_CPPCHECK, TOOL_CLANG_TIDY

    Returns:
        True if the tool is available, False otherwise
    """
    binary = _TOOL_BINARIES.get(tool_name)
    if not binary:
        return False

    try:
        if tool_name == TOOL_CLANG_ANALYZER:
            # clang++ --analyze needs the compiler itself
            result = subprocess.run([binary, '--version'],
                                    capture_output=True, timeout=5)
        elif tool_name == TOOL_CPPCHECK:
            result = subprocess.run([binary, '--version'],
                                    capture_output=True, timeout=5)
        elif tool_name == TOOL_CLANG_TIDY:
            result = subprocess.run([binary, '--version'],
                                    capture_output=True, timeout=5)
        else:
            return False
        return result.returncode == 0
    except (FileNotFoundError, subprocess.TimeoutExpired):
        return False


# =============================================================================
# File Selection
# =============================================================================

def get_analyzable_cpp_path(json_path):
    """Get the .cpp/.keep.cpp file path for static analysis from a JSON path.

    Picks the highest-priority analyzable file, skipping .mmx and .byval variants.

    Args:
        json_path: Path to the function's .json file

    Returns:
        Tuple of (cpp_path, variant) where variant is 'keep' or 'raw',
        or (None, None) if no analyzable file exists
    """
    base_path = json_path[:-5]  # Remove '.json'

    for ext in _ANALYZABLE_EXTENSIONS:
        path = base_path + ext
        if os.path.exists(path):
            variant = 'keep' if '.keep.' in ext else 'raw'
            return (path, variant)

    return (None, None)


# =============================================================================
# Output Parsing
# =============================================================================

def parse_clang_analyzer_output(stderr, cpp_path):
    """Parse clang static analyzer output into structured diagnostics.

    The analyzer emits diagnostics in the same file:line:col: level: message
    format as clang errors. We capture warnings and group note lines with
    their parent warning.

    Args:
        stderr: Standard error output from clang --analyze
        cpp_path: Path to the analyzed file

    Returns:
        List of diagnostic dicts with line, column, message, checker, path_notes
    """
    diagnostics = []
    if not stderr:
        return diagnostics

    pattern = re.compile(
        r'^([^:]+):(\d+):(?:(\d+):)?\s*(warning|error|note):\s*(.*)$',
        re.MULTILINE
    )

    current_diag = None

    for match in pattern.finditer(stderr):
        line = int(match.group(2))
        column = int(match.group(3)) if match.group(3) else 0
        msg_type = match.group(4).lower()
        message = match.group(5).strip()

        if msg_type in ('warning', 'error'):
            # Extract checker name from [checker.name] suffix
            checker = ''
            checker_match = re.search(r'\[([a-zA-Z][a-zA-Z0-9._-]*)\]$', message)
            if checker_match:
                checker = checker_match.group(1)
                message = message[:checker_match.start()].strip()

            current_diag = {
                'line': line,
                'column': column,
                'message': message,
                'checker': checker,
                'path_notes': [],
            }
            diagnostics.append(current_diag)
        elif msg_type == 'note' and current_diag is not None:
            current_diag['path_notes'].append({
                'line': line,
                'message': message,
            })

    return diagnostics


def parse_cppcheck_output(stderr, cpp_path):
    """Parse cppcheck output into structured diagnostics.

    Uses the custom template format:
    file:line:column: severity: message [id]

    Args:
        stderr: Standard error output from cppcheck
        cpp_path: Path to the analyzed file

    Returns:
        List of diagnostic dicts with line, column, message, severity, check_id
    """
    diagnostics = []
    if not stderr:
        return diagnostics

    pattern = re.compile(
        r'^([^:]+):(\d+):(\d+):\s*(\w+):\s*(.*?)\s*\[(\w+)\]\s*$',
        re.MULTILINE
    )

    for match in pattern.finditer(stderr):
        line = int(match.group(2))
        column = int(match.group(3))
        severity = match.group(4)
        message = match.group(5).strip()
        check_id = match.group(6)

        diagnostics.append({
            'line': line,
            'column': column,
            'message': message,
            'severity': severity,
            'check_id': check_id,
        })

    return diagnostics


def parse_clang_tidy_output(stdout, cpp_path):
    """Parse clang-tidy output into structured diagnostics.

    Output format: file:line:col: warning: message [check-name]

    Args:
        stdout: Standard output from clang-tidy
        cpp_path: Path to the analyzed file

    Returns:
        List of diagnostic dicts with line, column, message, check_name
    """
    diagnostics = []
    if not stdout:
        return diagnostics

    pattern = re.compile(
        r'^([^:]+):(\d+):(?:(\d+):)?\s*(warning|error):\s*(.*)$',
        re.MULTILINE
    )

    for match in pattern.finditer(stdout):
        line = int(match.group(2))
        column = int(match.group(3)) if match.group(3) else 0
        message = match.group(5).strip()

        # Extract check name from the [check-name] suffix. clang-tidy aliases a
        # single diagnostic under several comma-separated checks (e.g.
        # `[bugprone-signed-char-misuse,cert-str34-c]`); the comma must be in the
        # character class or the whole tag fails to match and check_name comes
        # back empty (leaving the tag stranded in the message). Store the primary
        # (first-listed) check as check_name.
        check_name = ''
        check_match = re.search(r'\[([a-zA-Z][a-zA-Z0-9._,-]*)\]$', message)
        if check_match:
            check_name = check_match.group(1).split(',')[0].strip()
            message = message[:check_match.start()].strip()

        diagnostics.append({
            'line': line,
            'column': column,
            'message': message,
            'check_name': check_name,
        })

    return diagnostics


# =============================================================================
# Per-File Analysis Functions
# =============================================================================

def run_clang_analyzer(cpp_path, include_dir, compiler=DEFAULT_COMPILER,
                       timeout=300, repo_dir=None, deep=False):
    """Run clang static analyzer on a single .cpp file.

    Uses core, deadcode, and security checkers. Skips unix, osx, cplusplus
    checkers which produce excessive noise on decompiled code.

    Args:
        cpp_path: Path to the .cpp file
        include_dir: Path to include directory for -I flag
        compiler: Clang compiler binary
        timeout: Analysis timeout in seconds
        repo_dir: Optional repo root for normalizing paths
        deep: If True, use deeper analysis (more nodes, higher inline depth)

    Returns:
        Dict with diagnostics list, diagnostic_count, and error
    """
    result = {'diagnostics': [], 'diagnostic_count': 0, 'error': None}

    if deep:
        max_loop = '4'
        inline_depth = '5'
        max_nodes = '150000'
    else:
        max_loop = '2'
        inline_depth = '2'
        max_nodes = '25000'

    try:
        cmd = [
            compiler, '--analyze',
            '-Xanalyzer', '-analyzer-output=text',
            '-Xanalyzer', '-analyzer-disable-all-checks',
            '-Xanalyzer', '-analyzer-checker=core',
            '-Xanalyzer', '-analyzer-checker=deadcode',
            '-Xanalyzer', '-analyzer-checker=security',
            '-Xanalyzer', '-analyzer-max-loop', '-Xanalyzer', max_loop,
            '-Xanalyzer', '-analyzer-inline-max-stack-depth', '-Xanalyzer', inline_depth,
            '-Xanalyzer', '-analyzer-max-nodes', '-Xanalyzer', max_nodes,
        ] + _BASE_ANALYSIS_FLAGS + [
            '-x', 'c++',  # Force C++ mode even for .c files
            '-Wno-everything',
            '-fno-diagnostics-color',
            '-I', include_dir,
            cpp_path,
        ]

        proc = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)

        stderr = strip_ansi_codes(proc.stderr)
        stderr = normalize_quotes(stderr)
        if repo_dir:
            stderr = normalize_path_in_message(stderr, repo_dir)

        diagnostics = parse_clang_analyzer_output(stderr, cpp_path)
        result['diagnostics'] = diagnostics
        result['diagnostic_count'] = len(diagnostics)

    except subprocess.TimeoutExpired:
        result['error'] = 'Analysis timed out after %ds' % timeout
    except FileNotFoundError:
        result['error'] = "Compiler '%s' not found" % compiler
    except Exception as e:
        result['error'] = 'Analysis error: %s' % str(e)

    return result


def run_cppcheck(cpp_path, include_dir, timeout=120, repo_dir=None, deep=False):
    """Run cppcheck on a single .cpp file.

    Enables warning, performance, and portability checks. Skips style and
    information checks which produce enormous noise on decompiled code.

    Args:
        cpp_path: Path to the .cpp file
        include_dir: Path to include directory for -I flag
        timeout: Analysis timeout in seconds
        repo_dir: Optional repo root for normalizing paths
        deep: If True, use deeper analysis (no valueflow time limit)

    Returns:
        Dict with diagnostics list, diagnostic_count, and error
    """
    result = {'diagnostics': [], 'diagnostic_count': 0, 'error': None}

    try:
        cmd = [
            'cppcheck',
            '--enable=warning,performance,portability',
            '--std=c++11',
            '--quiet',
            '--template={file}:{line}:{column}: {severity}: {message} [{id}]',
            '--suppress=missingIncludeSystem',
            '--suppress=missingInclude',
            '--suppress=unknownMacro',
            '--suppress=syntaxError',
            '--suppress=preprocessorErrorDirective',
            '--suppress=unmatchedSuppression',
        ]
        if deep:
            # Deep mode: include headers for full type resolution (slow)
            cmd += ['-I', include_dir]
        # Quick mode: skip -I entirely — 136K lines of headers cause
        # cppcheck to take 40s+ per file. Without type info cppcheck
        # is limited but finishes instantly.
        cmd.append(cpp_path)

        proc = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)

        stderr = strip_ansi_codes(proc.stderr)
        if repo_dir:
            stderr = normalize_path_in_message(stderr, repo_dir)

        diagnostics = parse_cppcheck_output(stderr, cpp_path)
        result['diagnostics'] = diagnostics
        result['diagnostic_count'] = len(diagnostics)

    except subprocess.TimeoutExpired:
        result['error'] = 'Analysis timed out after %ds' % timeout
    except FileNotFoundError:
        result['error'] = "cppcheck not found"
    except Exception as e:
        result['error'] = 'Analysis error: %s' % str(e)

    return result


def run_cppcheck_batch(cpp_paths, include_dir, num_threads=8, timeout=None,
                       repo_dir=None):
    """Run cppcheck on all files in a single batch process with -j threads.

    Runs all files in a single cppcheck invocation with -j for parallelism.
    Each file still takes ~40s of CPU for header parsing, but -j lets
    multiple files run concurrently.

    Args:
        cpp_paths: List of .cpp file paths to analyze
        include_dir: Path to include directory for -I flag
        num_threads: Number of cppcheck threads (-j flag)
        timeout: Overall timeout in seconds (default: 60s per file / threads, min 300s)
        repo_dir: Optional repo root for normalizing paths

    Returns:
        Dict mapping cpp_path -> result dict (only files with diagnostics)
    """
    if not cpp_paths:
        return {}

    if timeout is None:
        # ~60s per file / num_threads, with a generous minimum
        timeout = max(300, (len(cpp_paths) * 60) // max(num_threads, 1))

    import tempfile
    try:
        # Write file list to temp file (avoids command line length limits)
        with tempfile.NamedTemporaryFile(mode='w', suffix='.txt',
                                         delete=False) as f:
            filelist_path = f.name
            for p in cpp_paths:
                f.write(p + '\n')

        build_dir = tempfile.mkdtemp(prefix='cppcheck_cache_')

        cmd = [
            'cppcheck',
            '-j', str(num_threads),
            '--cppcheck-build-dir=%s' % build_dir,
            '--enable=warning,performance,portability',
            '--std=c++11',
            '--quiet',
            '--template={file}:{line}:{column}: {severity}: {message} [{id}]',
            '--suppress=missingIncludeSystem',
            '--suppress=missingInclude',
            '--suppress=unknownMacro',
            '--suppress=syntaxError',
            '--suppress=preprocessorErrorDirective',
            '--suppress=unmatchedSuppression',
            '-I', include_dir,
            '--file-list=%s' % filelist_path,
        ]

        proc = subprocess.run(cmd, capture_output=True, text=True,
                              timeout=timeout)

        stderr = strip_ansi_codes(proc.stderr)
        if repo_dir:
            stderr = normalize_path_in_message(stderr, repo_dir)

        # Parse output and group by source file
        results = {}
        pattern = re.compile(
            r'^([^:]+):(\d+):(\d+):\s*(\w+):\s*(.*?)\s*\[(\w+)\]\s*$',
            re.MULTILINE
        )

        for match in pattern.finditer(stderr):
            filepath = match.group(1)
            line = int(match.group(2))
            column = int(match.group(3))
            severity = match.group(4)
            message = match.group(5).strip()
            check_id = match.group(6)

            # Normalize filepath to match input paths
            filepath = os.path.abspath(filepath)

            if filepath not in results:
                results[filepath] = {
                    'diagnostics': [],
                    'diagnostic_count': 0,
                    'error': None,
                }

            results[filepath]['diagnostics'].append({
                'line': line,
                'column': column,
                'message': message,
                'severity': severity,
                'check_id': check_id,
            })
            results[filepath]['diagnostic_count'] = len(
                results[filepath]['diagnostics'])

        # Also try matching with original (non-absolute) paths
        abs_to_orig = {os.path.abspath(p): p for p in cpp_paths}
        normalized = {}
        for filepath, result in results.items():
            orig = abs_to_orig.get(filepath, filepath)
            normalized[orig] = result

        return normalized

    except subprocess.TimeoutExpired:
        log_info("Cppcheck batch timed out after %ds" % timeout)
        return {}
    except Exception as e:
        log_info("Cppcheck batch error: %s" % str(e))
        return {}
    finally:
        # Cleanup temp files
        try:
            os.unlink(filelist_path)
        except Exception:
            pass
        try:
            import shutil
            shutil.rmtree(build_dir, ignore_errors=True)
        except Exception:
            pass


def run_clang_tidy(cpp_path, include_dir, timeout=180, repo_dir=None, deep=False):
    """Run clang-tidy on a single .cpp file.

    Enables bugprone-* and cert-* checks with noisy checks disabled.
    Does not enable clang-analyzer-* checks (those are covered by the
    standalone clang static analyzer run).

    Args:
        cpp_path: Path to the .cpp file
        include_dir: Path to include directory for -I flag
        timeout: Analysis timeout in seconds
        repo_dir: Optional repo root for normalizing paths
        deep: If True, use deeper analysis (more checkers)

    Returns:
        Dict with diagnostics list, diagnostic_count, and error
    """
    result = {'diagnostics': [], 'diagnostic_count': 0, 'error': None}

    # Allowlist only the four checks the suspect mapper actually consumes
    # (see WHITELIST in static_analysis_suspects.py). Every other bugprone-*/
    # cert-* diagnostic is discarded downstream, so enabling the full families
    # just runs hundreds of matchers over the header AST for nothing — that
    # traversal, not parsing, was ~4s of the ~4.8s per-file clang-tidy cost.
    # Restricting to these four is output-identical and ~5x faster. Each CAN
    # surface a mis-typed param/var/field; cert-str34-c is clang-tidy's alias
    # for bugprone-signed-char-misuse and need not be listed separately.
    checks = ','.join([
        '-*',
        'bugprone-swapped-arguments',
        'bugprone-integer-division',
        'bugprone-signed-char-misuse',
        'cert-flp30-c',
    ])

    try:
        cmd = [
            'clang-tidy',
            '--checks=%s' % checks,
            '--quiet',
            cpp_path,
            '--',
        ] + _BASE_ANALYSIS_FLAGS + [
            '-x', 'c++',  # Force C++ mode even for .c files
            '-Wno-everything',
            '-I', include_dir,
        ]

        proc = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)

        stdout = strip_ansi_codes(proc.stdout)
        stdout = normalize_quotes(stdout)
        if repo_dir:
            stdout = normalize_path_in_message(stdout, repo_dir)

        diagnostics = parse_clang_tidy_output(stdout, cpp_path)
        # Filter out compiler diagnostics (not real lint findings)
        diagnostics = [d for d in diagnostics
                       if not d.get('check_name', '').startswith('clang-diagnostic')]
        result['diagnostics'] = diagnostics
        result['diagnostic_count'] = len(diagnostics)

    except subprocess.TimeoutExpired:
        result['error'] = 'Analysis timed out after %ds' % timeout
    except FileNotFoundError:
        result['error'] = "clang-tidy not found"
    except Exception as e:
        result['error'] = 'Analysis error: %s' % str(e)

    return result


# =============================================================================
# Per-Function Analysis (bundles all tools)
# =============================================================================

def _make_tool_runners(deep=False):
    """Build tool runner map with the given analysis depth."""
    return {
        TOOL_CLANG_ANALYZER: lambda cpp, inc, repo: run_clang_analyzer(
            cpp, inc, repo_dir=repo, deep=deep,
            timeout=300 if deep else 30),
        TOOL_CPPCHECK: lambda cpp, inc, repo: run_cppcheck(
            cpp, inc, repo_dir=repo, deep=deep,
            timeout=300 if deep else 30),
        TOOL_CLANG_TIDY: lambda cpp, inc, repo: run_clang_tidy(
            cpp, inc, repo_dir=repo, deep=deep,
            timeout=300 if deep else 30),
    }


def analyze_single_function(cpp_path, include_dir, tools, repo_dir=None,
                            deep=False):
    """Run all specified static analysis tools on a single .cpp file.

    Args:
        cpp_path: Path to the .cpp file
        include_dir: Path to include directory
        tools: List of tool names to run
        repo_dir: Optional repo root for normalizing paths
        deep: If True, use deeper analysis settings

    Returns:
        Dict mapping tool_name -> result dict
    """
    runners = _make_tool_runners(deep=deep)
    results = {}
    for tool in tools:
        runner = runners.get(tool)
        if runner:
            results[tool] = runner(cpp_path, include_dir, repo_dir)
    return results


# =============================================================================
# Parallel Analysis
# =============================================================================

def analyze_all_functions(src_dir, include_dir, tools=None, num_threads=8,
                          skip_dirs=None, keep_only=True, repo_dir=None,
                          deep=False):
    """Run static analysis on all function .cpp files in parallel.

    Walks JSON files to find functions, selects the appropriate .cpp/.keep.cpp
    file for each, and runs the specified tools in parallel.

    Args:
        src_dir: Directory containing function .json/.cpp files
        include_dir: Include directory for -I flag
        tools: List of tool names to run (default: all available)
        num_threads: Number of parallel analysis threads
        skip_dirs: List of directory names to skip
        keep_only: If True (default), only analyze .keep.cpp files.
                   Raw decompiler output is too noisy for meaningful results.
        repo_dir: Optional repo root for normalizing paths
        deep: If True, use deeper analysis (longer timeouts, more thorough checks)

    Returns:
        Dict mapping func_name -> {tool_results, cpp_path, json_path, variant}
    """
    if skip_dirs is None:
        skip_dirs = ['globals', 'crt', 'entry']

    # Determine which tools are available
    if tools is None:
        tools = ALL_TOOLS
    available_tools = [t for t in tools if check_tool_available(t)]

    if not available_tools:
        log_info("Static analysis: no tools available, skipping")
        return {}

    unavailable = set(tools) - set(available_tools)
    if unavailable:
        log_info("Static analysis: tools not available: %s" % ', '.join(sorted(unavailable)))
    log_info("Static analysis: using tools: %s" % ', '.join(available_tools))

    # Find all analyzable function files
    function_files = []
    for root, dirs, files in os.walk(src_dir):
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
                cpp_path, variant = get_analyzable_cpp_path(json_path)
                if cpp_path and (not keep_only or variant == 'keep'):
                    # Load function name from JSON
                    try:
                        with open(json_path, 'r') as jf:
                            data = json.load(jf)
                        func_name = data.get('function', {}).get('name', '')
                        if func_name:
                            function_files.append({
                                'name': func_name,
                                'json_path': json_path,
                                'cpp_path': cpp_path,
                                'variant': variant,
                            })
                    except Exception:
                        pass

    if not function_files:
        log_info("Static analysis: no analyzable function files found")
        return {}

    total = len(function_files)
    mode_str = ".keep files only" if keep_only else "all .cpp/.keep files"
    depth_str = "deep" if deep else "quick"
    log_info("Analyzing %d function files with %d threads (%s, %s)..." % (total, num_threads, mode_str, depth_str))
    log_info("  (skipping directories: %s)" % ', '.join(skip_dirs))

    results = {}
    completed = 0
    mode = 'deep' if deep else 'quick'

    # In deep mode, run cppcheck as a single batch process with -j threads.
    # cppcheck re-parses 136K lines of headers per file (~40s each), so
    # batch mode with -j lets it parallelize internally instead of
    # serializing 40s * N files through our thread pool.
    cppcheck_batch_results = {}  # cpp_path -> result dict
    per_file_tools = list(available_tools)  # tools to run per-file

    if deep and TOOL_CPPCHECK in available_tools:
        per_file_tools = [t for t in available_tools if t != TOOL_CPPCHECK]
        all_cpp_paths = [fi['cpp_path'] for fi in function_files]
        log_info("  Running cppcheck batch on %d files with -j %d..." % (
            len(all_cpp_paths), num_threads))
        cppcheck_batch_results = run_cppcheck_batch(
            all_cpp_paths, include_dir, num_threads=num_threads,
            repo_dir=repo_dir)
        log_info("  Cppcheck batch complete: %d files with findings" % sum(
            1 for r in cppcheck_batch_results.values()
            if r.get('diagnostic_count', 0) > 0))

    with ThreadPoolExecutor(max_workers=num_threads) as executor:
        future_to_func = {}
        for func_info in function_files:
            if per_file_tools:
                future = executor.submit(
                    analyze_single_function,
                    func_info['cpp_path'], include_dir, per_file_tools,
                    repo_dir, deep=deep
                )
                future_to_func[future] = func_info
            else:
                # No per-file tools to run, just use batch results
                future_to_func[None] = None  # sentinel, won't be used

        pending_json_updates = []
        # If no per-file tools, skip the executor loop
        items = as_completed(future_to_func) if per_file_tools else []
        if not per_file_tools:
            # Process all functions directly with only batch results
            for func_info in function_files:
                tool_results = {}
                if func_info['cpp_path'] in cppcheck_batch_results:
                    tool_results[TOOL_CPPCHECK] = cppcheck_batch_results[func_info['cpp_path']]

                results[func_info['name']] = {
                    'tool_results': tool_results,
                    'cpp_path': func_info['cpp_path'],
                    'json_path': func_info['json_path'],
                    'variant': func_info['variant'],
                }

                analysis_data = {
                    'analyzed_file': os.path.basename(func_info['cpp_path']),
                    'file_variant': func_info['variant'],
                }
                for tool in available_tools:
                    tool_result = tool_results.get(tool, {
                        'diagnostics': [], 'diagnostic_count': 0, 'error': None,
                    })
                    if tool_result.get('diagnostic_count', 0) > 0:
                        analysis_data[tool + '_' + mode] = tool_result

                pending_json_updates.append((func_info['json_path'], analysis_data, mode))
                completed += 1
        else:
            for future in items:
                func_info = future_to_func[future]

                try:
                    tool_results = future.result()
                except Exception as e:
                    tool_results = {}
                    for tool in per_file_tools:
                        tool_results[tool] = {
                            'diagnostics': [],
                            'diagnostic_count': 0,
                            'error': 'Exception: %s' % str(e),
                        }

                # Merge in cppcheck batch results if available
                if func_info['cpp_path'] in cppcheck_batch_results:
                    tool_results[TOOL_CPPCHECK] = cppcheck_batch_results[func_info['cpp_path']]

                results[func_info['name']] = {
                    'tool_results': tool_results,
                    'cpp_path': func_info['cpp_path'],
                    'json_path': func_info['json_path'],
                    'variant': func_info['variant'],
                }

                # Build JSON update payload — tool keys are suffixed with mode
                analysis_data = {
                    'analyzed_file': os.path.basename(func_info['cpp_path']),
                    'file_variant': func_info['variant'],
                }
                for tool in available_tools:
                    tool_result = tool_results.get(tool, {
                        'diagnostics': [], 'diagnostic_count': 0, 'error': None,
                    })
                    if tool_result.get('diagnostic_count', 0) > 0:
                        analysis_data[tool + '_' + mode] = tool_result

                pending_json_updates.append((func_info['json_path'], analysis_data, mode))

                completed += 1
                if completed % 100 == 0 or completed == total:
                    log_info("  Analyzed %d/%d functions..." % (completed, total))

    # Batch update JSON files (merge with existing findings from other mode)
    if pending_json_updates:
        log_info("  Updating %d JSON files with static analysis results..." % len(pending_json_updates))
        with ThreadPoolExecutor(max_workers=num_threads) as json_executor:
            json_futures = [
                json_executor.submit(update_function_json_with_analysis,
                                     json_path, data, mode)
                for json_path, data, mode in pending_json_updates
            ]
            for future in as_completed(json_futures):
                try:
                    future.result()
                except Exception:
                    pass

    return results


# =============================================================================
# JSON Update
# =============================================================================

def update_function_json_with_analysis(json_path, analysis_data, mode):
    """Update a function's JSON file with static analysis results.

    Tool results are stored under mode-suffixed keys (e.g. clang_analyzer_quick,
    cppcheck_deep). Only overwrites keys for the current mode, preserving
    findings from the other mode.

    Args:
        json_path: Path to the function's .json file
        analysis_data: Dict with tool results to store
        mode: 'quick' or 'deep' — the mode that produced these results

    Returns:
        True if successful, False otherwise
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)

        existing = data.get('static_analysis', {})

        # Update metadata
        existing['analyzed_file'] = analysis_data.get('analyzed_file',
                                                      existing.get('analyzed_file', ''))
        existing['file_variant'] = analysis_data.get('file_variant',
                                                     existing.get('file_variant', ''))

        # Remove old keys for this mode (in case a tool no longer has findings)
        mode_suffix = '_' + mode
        for key in list(existing.keys()):
            if key.endswith(mode_suffix):
                del existing[key]

        # Add new findings for this mode
        for key, value in analysis_data.items():
            if key not in ('analyzed_file', 'file_variant'):
                existing[key] = value

        # Check if there are any tool findings at all
        has_findings = any(
            k not in ('analyzed_file', 'file_variant') for k in existing
        )

        if has_findings:
            data['static_analysis'] = existing
        elif 'static_analysis' in data:
            del data['static_analysis']

        with open(json_path, 'w') as f:
            json.dump(data, f, indent=2, sort_keys=True)

        return True

    except Exception as e:
        log_info("Failed to update %s with static analysis: %s" % (json_path, str(e)))
        return False


# =============================================================================
# Main Entry Point for Exporter Integration
# =============================================================================

def run_static_analysis_after_export(pseudocode_dir, tools=None, num_threads=8,
                                     reports_dir=None, keep_only=False, repo_dir=None,
                                     deep=False):
    """Main entry point for static analysis after export.

    Should be called from export_pseudocode() after function compilation
    and before report generation.

    Args:
        pseudocode_dir: Base pseudocode directory (contains src/ and include/)
        tools: List of tool names to run (default: all available)
        num_threads: Number of parallel analysis threads
        reports_dir: Directory to write reports (unused here, reports are in analysis.py)
        keep_only: If True (default), only analyze .keep.cpp files
        repo_dir: Optional repo root for normalizing paths
        deep: If True, use deeper analysis (longer timeouts, more thorough checks)

    Returns:
        Dict with summary statistics or None if skipped
    """
    src_dir = os.path.join(pseudocode_dir, "src")
    include_dir = os.path.join(pseudocode_dir, "include")

    if not os.path.isdir(src_dir):
        log_info("Static analysis: src directory not found at %s" % src_dir)
        return None

    if not os.path.isdir(include_dir):
        log_info("Static analysis: include directory not found at %s" % include_dir)
        return None

    depth_label = " (deep)" if deep else ""
    log_info("Starting static analysis%s%s..." % (
        " (.keep files only)" if keep_only else "", depth_label))
    results = analyze_all_functions(
        src_dir, include_dir,
        tools=tools,
        num_threads=num_threads,
        skip_dirs=['globals', 'crt', 'entry'],
        keep_only=keep_only,
        repo_dir=repo_dir,
        deep=deep
    )

    if not results:
        log_info("No functions analyzed")
        return None

    # Calculate summary
    total_files = len(results)
    total_diagnostics = 0
    files_with_findings = 0

    for func_name, func_result in results.items():
        func_diag_count = 0
        for tool, tool_result in func_result.get('tool_results', {}).items():
            func_diag_count += tool_result.get('diagnostic_count', 0)
        total_diagnostics += func_diag_count
        if func_diag_count > 0:
            files_with_findings += 1

    log_info("Static analysis complete:")
    log_info("  Total files analyzed: %d" % total_files)
    log_info("  Files with findings: %d" % files_with_findings)
    log_info("  Total diagnostics: %d" % total_diagnostics)

    return {
        'total_files': total_files,
        'files_with_findings': files_with_findings,
        'total_diagnostics': total_diagnostics,
    }


# =============================================================================
# Standalone CLI
# =============================================================================

if __name__ == '__main__':
    import argparse
    import logging

    parser = argparse.ArgumentParser(
        description='Run static analysis on decompiled pseudocode functions'
    )
    parser.add_argument('pseudocode_dir',
                        help='Path to pseudocode directory (contains src/ and include/)')
    parser.add_argument('--tools', nargs='+',
                        choices=['clang-analyzer', 'cppcheck', 'clang-tidy'],
                        default=None,
                        help='Tools to run (default: all available)')
    parser.add_argument('--threads', type=int, default=(os.cpu_count() or 8),
                        help='Number of parallel analysis threads (default: CPU count)')
    parser.add_argument('--all', action='store_true',
                        help='Analyze all .cpp files, not just .keep.cpp')
    parser.add_argument('--deep', action='store_true',
                        help='Deep analysis mode: longer timeouts (300s vs 30s), '
                             'more thorough checks')
    parser.add_argument('--repo-dir', default=None,
                        help='Repository root for path normalization')
    args = parser.parse_args()

    # Set up logging
    logging.basicConfig(
        level=logging.INFO,
        format='%(asctime)s %(message)s',
        datefmt='%H:%M:%S'
    )

    # Convert CLI tool names to internal names
    tool_map = {
        'clang-analyzer': TOOL_CLANG_ANALYZER,
        'cppcheck': TOOL_CPPCHECK,
        'clang-tidy': TOOL_CLANG_TIDY,
    }
    tools = None
    if args.tools:
        tools = [tool_map[t] for t in args.tools]

    result = run_static_analysis_after_export(
        args.pseudocode_dir,
        tools=tools,
        num_threads=args.threads,
        keep_only=not args.all,
        repo_dir=args.repo_dir,
        deep=args.deep
    )

    if result:
        print("\nSummary:")
        print("  Files analyzed: %d" % result['total_files'])
        print("  Files with findings: %d" % result['files_with_findings'])
        print("  Total diagnostics: %d" % result['total_diagnostics'])
