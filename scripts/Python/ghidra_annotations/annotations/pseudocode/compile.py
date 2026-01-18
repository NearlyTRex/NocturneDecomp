# Header compilation verification module
# Verifies that generated headers are compilable by running them through g++/clang++

import os
import subprocess
import tempfile
from concurrent.futures import ThreadPoolExecutor, as_completed
from ghidra_annotations.util.log import log_info

def find_header_files(include_dir, skip_dirs=None, skip_files=None):
    """Find all .h files in the include directory.

    Args:
        include_dir: Base include directory
        skip_dirs: List of directory names to skip
        skip_files: List of file names to skip

    Returns:
        List of header file paths
    """
    if skip_dirs is None:
        skip_dirs = []
    if skip_files is None:
        skip_files = []
    headers = []
    for root, dirs, files in os.walk(include_dir):
        rel_root = os.path.relpath(root, include_dir)
        skip_this = False
        for skip_dir in skip_dirs:
            if rel_root == skip_dir or rel_root.startswith(skip_dir + os.sep):
                skip_this = True
                break
        if skip_this:
            continue
        for f in files:
            if f.endswith('.h'):
                if f in skip_files:
                    continue
                headers.append(os.path.join(root, f))
    return sorted(headers)

def compile_header(header_path, include_dir, compiler='g++'):
    """Try to compile a single header file.

    Args:
        header_path: Path to the header file
        include_dir: Base include directory for -I flag
        compiler: Compiler to use (g++ or clang++)

    Returns:
        Tuple of (success, error_message)
    """
    # Create a temporary C++ file that includes the header
    with tempfile.NamedTemporaryFile(mode='w', suffix='.cpp', delete=False) as f:
        rel_path = os.path.relpath(header_path, include_dir)
        f.write('#include "%s"\n' % rel_path)
        f.write('int main(void) { return 0; }\n')
        temp_file = f.name
    try:
        cmd = [
            compiler,
            '-fsyntax-only',
            '-I', include_dir,
            '-Wno-incompatible-pointer-types',
            '-Wno-int-conversion',
            temp_file
        ]
        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=30
        )
        if result.returncode == 0:
            return (True, None)
        else:
            return (False, result.stderr.strip())
    except subprocess.TimeoutExpired:
        return (False, "Compilation timed out")
    except FileNotFoundError:
        return (False, "Compiler '%s' not found" % compiler)
    finally:
        try:
            os.unlink(temp_file)
        except:
            pass

def verify_headers(include_dir, compiler='g++', max_workers=4, skip_dirs=None, skip_files=None):
    """Verify all headers in the include directory compile successfully.

    Args:
        include_dir: Path to include directory
        compiler: Compiler to use (g++ or clang++)
        max_workers: Number of parallel compilation jobs
        skip_dirs: List of directories to skip
        skip_files: List of files to skip

    Returns:
        Tuple of (passed_count, failed_count, failed_headers)
        where failed_headers is a list of (rel_path, error_message) tuples
    """
    if skip_dirs is None:
        skip_dirs = []
    if skip_files is None:
        skip_files = []
    headers = find_header_files(include_dir, skip_dirs, skip_files)
    if not headers:
        return (0, 0, [])
    passed = 0
    failed = 0
    failed_headers = []
    with ThreadPoolExecutor(max_workers=max_workers) as executor:
        futures = {
            executor.submit(compile_header, h, include_dir, compiler): h
            for h in headers
        }
        for future in as_completed(futures):
            header = futures[future]
            rel_path = os.path.relpath(header, include_dir)
            try:
                success, error = future.result()
            except Exception as e:
                success, error = False, str(e)
            if success:
                passed += 1
            else:
                failed += 1
                failed_headers.append((rel_path, error))
    return (passed, failed, failed_headers)

def verify_headers_after_export(pseudocode_dir, compiler='g++', max_workers=4, reports_dir=None):
    """Verify headers after export, called from the export process.

    This is the main entry point for integration with export_pseudocode.

    Args:
        pseudocode_dir: Base pseudocode directory (contains include/)
        compiler: Compiler to use
        max_workers: Number of parallel jobs
        reports_dir: Optional directory to write full compilation report

    Returns:
        True if all headers compiled successfully, False otherwise
    """

    # Get include dir
    include_dir = os.path.join(pseudocode_dir, "include")
    if not os.path.isdir(include_dir):
        log_info("Header verification: include directory not found at %s" % include_dir)
        return True  # Not an error if no headers

    # Check if compiler is available
    try:
        result = subprocess.run([compiler, '--version'], capture_output=True, timeout=5)
        if result.returncode != 0:
            log_info("Header verification: compiler '%s' not available, skipping" % compiler)
            return True
    except (FileNotFoundError, subprocess.TimeoutExpired):
        log_info("Header verification: compiler '%s' not available, skipping" % compiler)
        return True

    # Verify headers
    log_info("Verifying headers compile with %s..." % compiler)
    skip_files = ['nocturne.h']
    passed, failed, failed_headers = verify_headers(
        include_dir,
        compiler=compiler,
        max_workers=max_workers,
        skip_files=skip_files
    )
    total = passed + failed
    if total == 0:
        log_info("  No headers found to verify")
        return True
    log_info("  Header verification: %d/%d passed (%.1f%%)" % (
        passed, total, (passed * 100.0 / total) if total > 0 else 0))

    # Write full compilation report if reports_dir provided
    if reports_dir:
        report_path = os.path.join(reports_dir, "header_compilation.txt")
        with open(report_path, 'w') as f:
            f.write("=" * 80 + "\n")
            f.write("HEADER COMPILATION REPORT\n")
            f.write("=" * 80 + "\n\n")
            f.write("Compiler: %s\n" % compiler)
            f.write("Include directory: %s\n\n" % include_dir)
            f.write("Summary: %d passed, %d failed out of %d total (%.1f%% success)\n\n" % (
                passed, failed, total, (passed * 100.0 / total) if total > 0 else 0))
            if failed > 0:
                f.write("-" * 80 + "\n")
                f.write("FAILED HEADERS (%d)\n" % failed)
                f.write("-" * 80 + "\n\n")
                for rel_path, error in failed_headers:
                    f.write("FILE: %s\n" % rel_path)
                    f.write("-" * 40 + "\n")
                    if error:
                        f.write("%s\n" % error)
                    else:
                        f.write("(no error output)\n")
                    f.write("\n")
            else:
                f.write("All headers compiled successfully.\n")
        log_info("  Full compilation report written to: %s" % report_path)

    # Show failed headers (trimmed for console)
    if failed > 0:
        log_info("  FAILED headers (%d):" % failed)
        for rel_path, error in failed_headers[:10]:
            log_info("    - %s" % rel_path)
            if error:
                error_lines = extract_error_lines(error, max_lines=3)
                for err_line in error_lines:
                    if len(err_line) > 120:
                        err_line = err_line[:117] + "..."
                    log_info("      %s" % err_line)
        if len(failed_headers) > 10:
            log_info("    ... and %d more (see report for full list)" % (len(failed_headers) - 10))
    return failed == 0

def get_failed_headers_report(pseudocode_dir, compiler='g++', max_workers=4):
    """Get a detailed report of failed header compilations.

    Args:
        pseudocode_dir: Base pseudocode directory
        compiler: Compiler to use
        max_workers: Number of parallel jobs

    Returns:
        List of dictionaries with 'path' and 'error' keys for each failed header
    """
    include_dir = os.path.join(pseudocode_dir, "include")
    if not os.path.isdir(include_dir):
        return []
    skip_files = ['nocturne.h']
    _, _, failed_headers = verify_headers(
        include_dir,
        compiler=compiler,
        max_workers=max_workers,
        skip_files=skip_files
    )
    return [{'path': path, 'error': error} for path, error in failed_headers]

# =============================================================================
# CPP File Compilation
# =============================================================================

def find_cpp_files(src_dir, skip_dirs=None, skip_files=None):
    """Find all .cpp files in the source directory.

    Args:
        src_dir: Base source directory
        skip_dirs: List of directory names to skip
        skip_files: List of file names to skip

    Returns:
        List of cpp file paths
    """
    if skip_dirs is None:
        skip_dirs = []
    if skip_files is None:
        skip_files = []
    cpp_files = []
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
            if f.endswith('.cpp'):
                if f in skip_files:
                    continue
                cpp_files.append(os.path.join(root, f))
    return sorted(cpp_files)

def compile_cpp_file(cpp_path, include_dir, compiler='g++'):
    """Try to compile a single cpp file.

    Args:
        cpp_path: Path to the cpp file
        include_dir: Include directory for -I flag
        compiler: Compiler to use (g++ or clang++)

    Returns:
        Tuple of (success, error_message)
    """
    try:
        cmd = [
            compiler,
            '-fsyntax-only',
            '-I', include_dir,
            cpp_path
        ]
        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=60
        )
        if result.returncode == 0:
            return (True, None)
        else:
            return (False, result.stderr.strip())
    except subprocess.TimeoutExpired:
        return (False, "Compilation timed out")
    except FileNotFoundError:
        return (False, "Compiler '%s' not found" % compiler)


def extract_error_lines(error_output, max_lines=5):
    """Extract actual error lines from compiler output.

    Args:
        error_output: Full stderr from compiler
        max_lines: Maximum number of error lines to return

    Returns:
        List of error line strings
    """
    if not error_output:
        return []
    lines = error_output.split('\n')
    error_lines = []
    for line in lines:
        # Skip warning-only lines
        if 'warning:' in line.lower() and 'error:' not in line.lower():
            continue
        # Include lines with 'error:' or lines that look like error context
        if 'error:' in line.lower() or (line.strip() and not line.startswith(' ') and ':' in line):
            error_lines.append(line.strip())
            if len(error_lines) >= max_lines:
                break
    return error_lines if error_lines else [lines[0].strip()] if lines else []

def verify_cpp_files(src_dir, include_dir, compiler='g++', max_workers=4, skip_dirs=None, skip_files=None):
    """Verify all cpp files in the source directory compile successfully.

    Args:
        src_dir: Path to source directory
        include_dir: Path to include directory for -I flag
        compiler: Compiler to use (g++ or clang++)
        max_workers: Number of parallel compilation jobs
        skip_dirs: List of directories to skip
        skip_files: List of files to skip

    Returns:
        Tuple of (passed_count, failed_count, failed_files)
        where failed_files is a list of (rel_path, error_message) tuples
    """
    if skip_dirs is None:
        skip_dirs = []
    if skip_files is None:
        skip_files = []
    cpp_files = find_cpp_files(src_dir, skip_dirs, skip_files)
    if not cpp_files:
        return (0, 0, [])
    passed = 0
    failed = 0
    failed_files = []
    with ThreadPoolExecutor(max_workers=max_workers) as executor:
        futures = {
            executor.submit(compile_cpp_file, f, include_dir, compiler): f
            for f in cpp_files
        }
        for future in as_completed(futures):
            cpp_file = futures[future]
            rel_path = os.path.relpath(cpp_file, src_dir)
            try:
                success, error = future.result()
            except Exception as e:
                success, error = False, str(e)
            if success:
                passed += 1
            else:
                failed += 1
                failed_files.append((rel_path, error))
    return (passed, failed, failed_files)

def verify_globals_after_export(pseudocode_dir, compiler='g++', max_workers=4, reports_dir=None):
    """Verify globals cpp files after export.

    Args:
        pseudocode_dir: Base pseudocode directory (contains src/globals/ and include/)
        compiler: Compiler to use
        max_workers: Number of parallel jobs
        reports_dir: Optional directory to write full compilation report

    Returns:
        True if all globals compiled successfully, False otherwise
    """

    # Get directories
    include_dir = os.path.join(pseudocode_dir, "include")
    globals_src_dir = os.path.join(pseudocode_dir, "src", "globals")
    if not os.path.isdir(globals_src_dir):
        log_info("Globals verification: src/globals directory not found")
        return True
    if not os.path.isdir(include_dir):
        log_info("Globals verification: include directory not found")
        return True

    # Check if compiler is available
    try:
        result = subprocess.run([compiler, '--version'], capture_output=True, timeout=5)
        if result.returncode != 0:
            log_info("Globals verification: compiler '%s' not available, skipping" % compiler)
            return True
    except (FileNotFoundError, subprocess.TimeoutExpired):
        log_info("Globals verification: compiler '%s' not available, skipping" % compiler)
        return True

    # Verify globals
    log_info("Verifying globals compile with %s..." % compiler)
    passed, failed, failed_files = verify_cpp_files(
        globals_src_dir,
        include_dir,
        compiler=compiler,
        max_workers=max_workers
    )
    total = passed + failed
    if total == 0:
        log_info("  No globals cpp files found to verify")
        return True
    log_info("  Globals verification: %d/%d passed (%.1f%%)" % (
        passed, total, (passed * 100.0 / total) if total > 0 else 0))

    # Write full compilation report if reports_dir provided
    if reports_dir:
        report_path = os.path.join(reports_dir, "globals_compilation.txt")
        with open(report_path, 'w') as f:
            f.write("=" * 80 + "\n")
            f.write("GLOBALS COMPILATION REPORT\n")
            f.write("=" * 80 + "\n\n")
            f.write("Compiler: %s\n" % compiler)
            f.write("Source directory: %s\n" % globals_src_dir)
            f.write("Include directory: %s\n\n" % include_dir)
            f.write("Summary: %d passed, %d failed out of %d total (%.1f%% success)\n\n" % (
                passed, failed, total, (passed * 100.0 / total) if total > 0 else 0))
            if failed > 0:
                f.write("-" * 80 + "\n")
                f.write("FAILED FILES (%d)\n" % failed)
                f.write("-" * 80 + "\n\n")
                for rel_path, error in failed_files:
                    f.write("FILE: %s\n" % rel_path)
                    f.write("-" * 40 + "\n")
                    if error:
                        f.write("%s\n" % error)
                    else:
                        f.write("(no error output)\n")
                    f.write("\n")
            else:
                f.write("All globals compiled successfully.\n")
        log_info("  Full compilation report written to: %s" % report_path)

    # Show failed globals (trimmed for console)
    if failed > 0:
        log_info("  FAILED globals (%d):" % failed)
        for rel_path, error in failed_files[:10]:
            log_info("    - %s" % rel_path)
            if error:
                error_lines = extract_error_lines(error, max_lines=3)
                for err_line in error_lines:
                    if len(err_line) > 120:
                        err_line = err_line[:117] + "..."
                    log_info("      %s" % err_line)
        if len(failed_files) > 10:
            log_info("    ... and %d more (see report for full list)" % (len(failed_files) - 10))
    return failed == 0
