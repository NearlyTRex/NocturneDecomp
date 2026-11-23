# Header compilation verification module
# Verifies that generated headers are compilable by running them through the compiler

import os
import subprocess
import tempfile
from concurrent.futures import ThreadPoolExecutor
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.compiler_config import (
    DEFAULT_COMPILER, DEFAULT_COMPILE_FLAGS
)

# The aggregate every compiled unit includes; checking it alone adds nothing
SKIP_HEADERS = ['nocturne.h']


def _walk_files(base_dir, suffix, skip_dirs, skip_files):
    """(root, file names) for each directory under base_dir that is not skipped,
    keeping the names that end in suffix and are not skipped."""
    for root, _, files in os.walk(base_dir):
        rel_root = os.path.relpath(root, base_dir)
        if any(rel_root == d or rel_root.startswith(d + os.sep) for d in skip_dirs):
            continue
        yield root, [f for f in files if f.endswith(suffix) and f not in skip_files]


def find_header_files(include_dir, skip_dirs=(), skip_files=()):
    """All .h files under include_dir, sorted, leaving out skipped directories and names."""
    return sorted(os.path.join(root, f)
                  for root, files in _walk_files(include_dir, '.h', skip_dirs, skip_files)
                  for f in files)


def _run_compiler(cmd, timeout, compiler):
    """(success, error text) for one compiler run."""
    try:
        result = subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
    except subprocess.TimeoutExpired:
        return (False, "Compilation timed out")
    except FileNotFoundError:
        return (False, "Compiler '%s' not found" % compiler)
    except OSError as e:
        return (False, "Compiler '%s' could not run: %s" % (compiler, e))
    if result.returncode == 0:
        return (True, None)
    return (False, result.stderr.strip())


def _compile_command(compiler, include_dir, source):
    cmd = [compiler] + DEFAULT_COMPILE_FLAGS + ['-I', include_dir]
    shims_dir = _shims_include_for(include_dir)
    if shims_dir:
        cmd += ['-I', shims_dir]
    return cmd + [source]


def compile_header(header_path, include_dir, compiler=DEFAULT_COMPILER):
    """Try to compile a single header file on its own.

    A range header (constants/, globals/, prototypes/) must include what it
    uses itself: putting its master header first would hide a missing include,
    and one broken range would fail every sibling the master pulls in.

    Returns:
        Tuple of (success, error_message)
    """
    rel_path = os.path.relpath(header_path, include_dir)
    with tempfile.NamedTemporaryFile(mode='w', suffix='.cpp', delete=False) as f:
        f.write('#include "%s"\n' % rel_path)
        f.write('int main(void) { return 0; }\n')
        temp_file = f.name
    try:
        return _run_compiler(_compile_command(compiler, include_dir, temp_file), 30, compiler)
    finally:
        os.unlink(temp_file)


def _verify_all(paths, base_dir, compile_one, max_workers):
    """(passed, failed, [(rel_path, error)]) with the failures in path order,
    whatever order the parallel compiles finish in."""
    with ThreadPoolExecutor(max_workers=max_workers) as executor:
        results = list(executor.map(compile_one, paths))
    failures = [(os.path.relpath(path, base_dir), error)
                for path, (success, error) in zip(paths, results) if not success]
    return (len(paths) - len(failures), len(failures), failures)


def verify_headers(include_dir, compiler=DEFAULT_COMPILER, max_workers=4, skip_dirs=(), skip_files=()):
    """Verify all headers in the include directory compile successfully.

    Returns:
        Tuple of (passed_count, failed_count, failed_headers)
        where failed_headers is a list of (rel_path, error_message) tuples
    """
    headers = find_header_files(include_dir, skip_dirs, skip_files)
    return _verify_all(headers, include_dir, lambda h: compile_header(h, include_dir, compiler), max_workers)


def make_path_relative(path, base_dir):
    """Make a path relative to base_dir if it's under base_dir."""
    if not base_dir:
        return path
    abs_path, abs_base = os.path.abspath(path), os.path.abspath(base_dir)
    if os.path.commonpath([abs_path, abs_base]) == abs_base:
        return os.path.relpath(abs_path, abs_base)
    return path


def strip_paths_from_error(error_text, base_dir):
    """Replace absolute paths in error text with paths relative to base_dir."""
    if not error_text or not base_dir:
        return error_text
    # Replace the base_dir with empty string (making paths relative)
    # Handle both with and without trailing slash
    base_with_slash = base_dir.rstrip('/') + '/'
    return error_text.replace(base_with_slash, '').replace(base_dir, '')


def _compiler_available(compiler, what):
    try:
        result = subprocess.run([compiler, '--version'], capture_output=True, timeout=5)
    except (FileNotFoundError, subprocess.TimeoutExpired):
        result = None
    if result is None or result.returncode != 0:
        log_info("%s verification: compiler '%s' not available, skipping" % (what, compiler))
        return False
    return True


def _write_report(report_path, title, compiler, dirs, passed, failed, failures, repo_dir, all_ok):
    """The full compilation report: summary, then each failure's error with repo paths stripped."""
    total = passed + failed
    with open(report_path, 'w') as f:
        f.write("=" * 80 + "\n")
        f.write("%s COMPILATION REPORT\n" % title)
        f.write("=" * 80 + "\n\n")
        f.write("Compiler: %s\n" % compiler)
        for label, path in dirs:
            f.write("%s: %s\n" % (label, make_path_relative(path, repo_dir)))
        f.write("\nSummary: %d passed, %d failed out of %d total (%.1f%% success)\n\n" % (
            passed, failed, total, passed * 100.0 / total))
        if failed:
            f.write("-" * 80 + "\n")
            f.write("FAILED %s (%d)\n" % ("HEADERS" if title == "HEADER" else "FILES", failed))
            f.write("-" * 80 + "\n\n")
            for rel_path, error in failures:
                f.write("FILE: %s\n" % rel_path)
                f.write("-" * 40 + "\n")
                f.write("%s\n" % (strip_paths_from_error(error, repo_dir) or "(no error output)"))
                f.write("\n")
        else:
            f.write("%s\n" % all_ok)
    log_info("  Full compilation report written to: %s" % report_path)


def _log_failures(kind, failures):
    """The first ten failures and their first error lines, trimmed for the console."""
    log_info("  FAILED %s (%d):" % (kind, len(failures)))
    for rel_path, error in failures[:10]:
        log_info("    - %s" % rel_path)
        for err_line in extract_error_lines(error, max_lines=3):
            if len(err_line) > 120:
                err_line = err_line[:117] + "..."
            log_info("      %s" % err_line)
    if len(failures) > 10:
        log_info("    ... and %d more (see report for full list)" % (len(failures) - 10))


def verify_headers_after_export(pseudocode_dir, compiler=DEFAULT_COMPILER, max_workers=4, reports_dir=None, repo_dir=None):
    """Verify headers after export, called from the export process.

    Args:
        pseudocode_dir: Base pseudocode directory (contains include/)
        compiler: Compiler to use
        max_workers: Number of parallel jobs
        reports_dir: Optional directory to write full compilation report
        repo_dir: Optional repo root directory for making paths relative in reports

    Returns:
        True if all headers compiled successfully, False otherwise
    """
    include_dir = os.path.join(pseudocode_dir, "include")
    if not os.path.isdir(include_dir):
        log_info("Header verification: include directory not found at %s" % include_dir)
        return True  # Not an error if no headers
    if not _compiler_available(compiler, "Header"):
        return True

    log_info("Verifying headers compile with %s..." % compiler)
    passed, failed, failed_headers = verify_headers(
        include_dir, compiler=compiler, max_workers=max_workers, skip_files=SKIP_HEADERS)
    total = passed + failed
    if total == 0:
        log_info("  No headers found to verify")
        return True
    log_info("  Header verification: %d/%d passed (%.1f%%)" % (passed, total, passed * 100.0 / total))

    if reports_dir:
        _write_report(os.path.join(reports_dir, "header_compilation.txt"), "HEADER", compiler,
                      [("Include directory", include_dir)], passed, failed, failed_headers, repo_dir,
                      "All headers compiled successfully.")
    if failed:
        _log_failures("headers", failed_headers)
    return failed == 0


# =============================================================================
# CPP File Compilation
# =============================================================================

def find_cpp_files(src_dir, skip_dirs=(), skip_files=()):
    """All .cpp files under src_dir, sorted.

    .mmx/.byval variants are generated but not compiled, and a .keep.cpp
    stands in for the .cpp beside it.
    """
    cpp_files = []
    for root, files in _walk_files(src_dir, '.cpp', skip_dirs, skip_files):
        for f in files:
            if '.mmx.' in f or '.byval.' in f:
                continue
            if '.keep.' not in f and f[:-len('.cpp')] + '.keep.cpp' in files:
                continue
            cpp_files.append(os.path.join(root, f))
    return sorted(cpp_files)


def _shims_include_for(include_dir):
    """Return the sibling shims/ dir if it exists, else None.

    nocturne.h pulls in shim_config.h, which lives under pseudocode/shims/.
    Mirror what scripts/Bash/test_compilation.sh does: add the shims dir to
    the include path when present.
    """
    shims_dir = os.path.join(os.path.dirname(include_dir), "shims")
    return shims_dir if os.path.isdir(shims_dir) else None


def compile_cpp_file(cpp_path, include_dir, compiler=DEFAULT_COMPILER):
    """Try to compile a single cpp file.

    Returns:
        Tuple of (success, error_message)
    """
    return _run_compiler(_compile_command(compiler, include_dir, cpp_path), 60, compiler)


def extract_error_lines(error_output, max_lines=5):
    """Extract actual error lines from compiler output.

    Args:
        error_output: Full stderr from compiler
        max_lines: Maximum number of error lines to return

    Returns:
        List of error line strings; the first line when none looks like an error
    """
    if not error_output:
        return []
    lines = error_output.split('\n')
    error_lines = []
    for line in lines:
        lower = line.lower()
        # Skip warning-only lines
        if 'warning:' in lower and 'error:' not in lower:
            continue
        # Include lines with 'error:' or lines that look like error context
        if 'error:' in lower or (line.strip() and not line.startswith(' ') and ':' in line):
            error_lines.append(line.strip())
            if len(error_lines) >= max_lines:
                break
    return error_lines or [lines[0].strip()]


def verify_cpp_files(src_dir, include_dir, compiler=DEFAULT_COMPILER, max_workers=4, skip_dirs=(), skip_files=()):
    """Verify all cpp files in the source directory compile successfully.

    Returns:
        Tuple of (passed_count, failed_count, failed_files)
        where failed_files is a list of (rel_path, error_message) tuples
    """
    cpp_files = find_cpp_files(src_dir, skip_dirs, skip_files)
    return _verify_all(cpp_files, src_dir, lambda f: compile_cpp_file(f, include_dir, compiler), max_workers)


def verify_globals_after_export(pseudocode_dir, compiler=DEFAULT_COMPILER, max_workers=4, reports_dir=None, repo_dir=None):
    """Verify globals cpp files after export.

    Args:
        pseudocode_dir: Base pseudocode directory (contains src/globals/ and include/)
        compiler: Compiler to use
        max_workers: Number of parallel jobs
        reports_dir: Optional directory to write full compilation report
        repo_dir: Optional repo root directory for making paths relative in reports

    Returns:
        True if all globals compiled successfully, False otherwise
    """
    include_dir = os.path.join(pseudocode_dir, "include")
    globals_src_dir = os.path.join(pseudocode_dir, "src", "globals")
    if not os.path.isdir(globals_src_dir):
        log_info("Globals verification: src/globals directory not found")
        return True
    if not os.path.isdir(include_dir):
        log_info("Globals verification: include directory not found")
        return True
    if not _compiler_available(compiler, "Globals"):
        return True

    log_info("Verifying globals compile with %s..." % compiler)
    passed, failed, failed_files = verify_cpp_files(
        globals_src_dir, include_dir, compiler=compiler, max_workers=max_workers)
    total = passed + failed
    if total == 0:
        log_info("  No globals cpp files found to verify")
        return True
    log_info("  Globals verification: %d/%d passed (%.1f%%)" % (passed, total, passed * 100.0 / total))

    if reports_dir:
        _write_report(os.path.join(reports_dir, "globals_compilation.txt"), "GLOBALS", compiler,
                      [("Source directory", globals_src_dir), ("Include directory", include_dir)],
                      passed, failed, failed_files, repo_dir, "All globals compiled successfully.")
    if failed:
        _log_failures("globals", failed_files)
    return failed == 0
