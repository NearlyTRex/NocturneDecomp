# Header compilation verification module
# Verifies that generated headers are compilable by running them through gcc/clang

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

def compile_header(header_path, include_dir, compiler='gcc'):
    """Try to compile a single header file.

    Args:
        header_path: Path to the header file
        include_dir: Base include directory for -I flag
        compiler: Compiler to use (gcc or clang)

    Returns:
        Tuple of (success, error_message)
    """
    # Create a temporary C file that includes the header
    with tempfile.NamedTemporaryFile(mode='w', suffix='.c', delete=False) as f:
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

def verify_headers(include_dir, compiler='gcc', max_workers=4, skip_dirs=None, skip_files=None):
    """Verify all headers in the include directory compile successfully.

    Args:
        include_dir: Path to include directory
        compiler: Compiler to use (gcc or clang)
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

def verify_headers_after_export(pseudocode_dir, compiler='gcc', max_workers=4):
    """Verify headers after export, called from the export process.

    This is the main entry point for integration with export_pseudocode.

    Args:
        pseudocode_dir: Base pseudocode directory (contains include/)
        compiler: Compiler to use
        max_workers: Number of parallel jobs

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

    # Show failed headers
    if failed > 0:
        log_info("  FAILED headers (%d):" % failed)
        for rel_path, error in failed_headers[:10]:
            log_info("    - %s" % rel_path)
            if error:
                first_error = error.split('\n')[0]
                if len(first_error) > 100:
                    first_error = first_error[:97] + "..."
                log_info("      %s" % first_error)
        if len(failed_headers) > 10:
            log_info("    ... and %d more" % (len(failed_headers) - 10))
    return failed == 0

def get_failed_headers_report(pseudocode_dir, compiler='gcc', max_workers=4):
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
