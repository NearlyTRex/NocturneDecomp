# Shim compilation verification module
# Verifies that hand-written shim source files compile successfully.
# Shims require SDL2 development headers; verification is skipped gracefully
# if SDL2 is not available.

import os
import subprocess
from concurrent.futures import ThreadPoolExecutor, as_completed
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.compiler_config import (
    DEFAULT_COMPILER
)
from ghidra_annotations.annotations.pseudocode.header_compile import (
    extract_error_lines, make_path_relative, strip_paths_from_error
)


# Shim compile flags: syntax-only check, no -m32 (shims are cross-platform,
# and 32-bit SDL2 dev headers may not be installed)
SHIM_COMPILE_FLAGS = [
    '-fsyntax-only',
    '-std=gnu++11',
    '-Wno-everything',
]


def get_sdl2_flags():
    """Get SDL2 compiler flags via sdl2-config or pkg-config.

    Returns:
        List of compiler flags, or empty list if SDL2 is not found.
    """
    for cmd in [
        ['sdl2-config', '--cflags'],
        ['pkg-config', '--cflags', 'sdl2'],
    ]:
        try:
            result = subprocess.run(cmd, capture_output=True, text=True, timeout=5)
            if result.returncode == 0:
                return result.stdout.strip().split()
        except (FileNotFoundError, subprocess.TimeoutExpired):
            continue
    return []


def find_shim_files(shims_dir):
    """Find all .cpp and .c files in the shims directory.

    Args:
        shims_dir: Path to shims directory

    Returns:
        Sorted list of source file paths
    """
    if not os.path.isdir(shims_dir):
        return []
    return sorted([
        os.path.join(shims_dir, f)
        for f in os.listdir(shims_dir)
        if f.endswith('.cpp') or f.endswith('.c')
    ])


def compile_shim_file(src_path, include_dir, compiler, extra_flags):
    """Compile a single shim source file for syntax verification.

    Args:
        src_path: Path to the .cpp or .c file
        include_dir: Include directory for -I flag
        compiler: Compiler to use (for .cpp files; .c files use C compiler)
        extra_flags: Additional flags (e.g., SDL2 include flags)

    Returns:
        Tuple of (success, error_message)
    """
    try:
        if src_path.endswith('.c'):
            # Plain C files: use C compiler, C standard, no project includes
            # (these are POSIX wrappers that don't need our headers)
            c_compiler = compiler.replace('clang++', 'clang').replace('g++', 'gcc')
            cmd = [c_compiler, '-fsyntax-only', '-std=c11', '-Wno-everything', src_path]
        else:
            cmd = ([compiler] + SHIM_COMPILE_FLAGS + extra_flags +
                   ['-I', include_dir, src_path])
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


def verify_shims(shims_dir, include_dir, compiler=DEFAULT_COMPILER,
                  max_workers=4, extra_flags=None):
    """Verify all shim files compile successfully.

    Args:
        shims_dir: Path to shims directory
        include_dir: Path to include directory for -I flag
        compiler: Compiler to use
        max_workers: Number of parallel compilation jobs
        extra_flags: Additional compiler flags (e.g., SDL2)

    Returns:
        Tuple of (passed_count, failed_count, failed_files)
        where failed_files is a list of (rel_path, error_message) tuples
    """
    if extra_flags is None:
        extra_flags = []

    shim_files = find_shim_files(shims_dir)
    if not shim_files:
        return (0, 0, [])

    passed = 0
    failed = 0
    failed_files = []

    with ThreadPoolExecutor(max_workers=max_workers) as executor:
        futures = {
            executor.submit(compile_shim_file, f, include_dir, compiler, extra_flags): f
            for f in shim_files
        }
        for future in as_completed(futures):
            shim_file = futures[future]
            rel_path = os.path.relpath(shim_file, shims_dir)
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


def verify_shims_after_export(pseudocode_dir, compiler=DEFAULT_COMPILER,
                               max_workers=4, reports_dir=None, repo_dir=None):
    """Verify shim source files compile after export.

    This is the main entry point for integration with export_pseudocode.
    Shim verification is non-blocking: failures are reported as warnings
    since shims depend on SDL2 which may not be installed everywhere.

    Args:
        pseudocode_dir: Base pseudocode directory (contains shims/ and include/)
        compiler: Compiler to use
        max_workers: Number of parallel jobs
        reports_dir: Optional directory to write full compilation report
        repo_dir: Optional repo root directory for making paths relative in reports

    Returns:
        True if all shims compiled successfully (or no shims/SDL2 found),
        False if there were compilation failures
    """
    shims_dir = os.path.join(pseudocode_dir, "shims")
    include_dir = os.path.join(pseudocode_dir, "include")

    if not os.path.isdir(shims_dir):
        log_info("Shim verification: shims directory not found, skipping")
        return True

    # Check if compiler is available
    try:
        result = subprocess.run([compiler, '--version'], capture_output=True, timeout=5)
        if result.returncode != 0:
            log_info("Shim verification: compiler '%s' not available, skipping" % compiler)
            return True
    except (FileNotFoundError, subprocess.TimeoutExpired):
        log_info("Shim verification: compiler '%s' not available, skipping" % compiler)
        return True

    # Get SDL2 flags (required for ddraw/dsound shims)
    sdl2_flags = get_sdl2_flags()
    if not sdl2_flags:
        log_info("Shim verification: SDL2 not found, skipping shim compilation")
        return True

    shim_files = find_shim_files(shims_dir)
    if not shim_files:
        log_info("Shim verification: no shim files found")
        return True

    log_info("Verifying %d shim files compile with %s..." % (len(shim_files), compiler))
    passed, failed, failed_files = verify_shims(
        shims_dir, include_dir,
        compiler=compiler,
        max_workers=max_workers,
        extra_flags=sdl2_flags
    )
    total = passed + failed
    if total == 0:
        log_info("  No shim files found to verify")
        return True

    log_info("  Shim verification: %d/%d passed (%.1f%%)" % (
        passed, total, (passed * 100.0 / total) if total > 0 else 0))

    # Write full compilation report if reports_dir provided
    if reports_dir:
        report_path = os.path.join(reports_dir, "shim_compilation.txt")
        shims_dir_display = make_path_relative(shims_dir, repo_dir)
        include_dir_display = make_path_relative(include_dir, repo_dir)
        with open(report_path, 'w') as f:
            f.write("=" * 80 + "\n")
            f.write("SHIM COMPILATION REPORT\n")
            f.write("=" * 80 + "\n\n")
            f.write("Compiler: %s\n" % compiler)
            f.write("Shims directory: %s\n" % shims_dir_display)
            f.write("Include directory: %s\n" % include_dir_display)
            f.write("SDL2 flags: %s\n\n" % ' '.join(sdl2_flags))
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
                        error_display = strip_paths_from_error(error, repo_dir)
                        f.write("%s\n" % error_display)
                    else:
                        f.write("(no error output)\n")
                    f.write("\n")
            else:
                f.write("All shim files compiled successfully.\n")
        log_info("  Full compilation report written to: %s" % report_path)

    # Show failed shims (trimmed for console)
    if failed > 0:
        log_info("  FAILED shims (%d):" % failed)
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
