#!/usr/bin/env python3
"""
Verify that generated globals cpp files are compilable.

This script attempts to compile each globals cpp file to check for:
- Missing type definitions
- Missing includes
- Syntax errors

Usage:
    python verify_globals.py <pseudocode_dir> [--verbose] [--stop-on-error]

Example:
    python verify_globals.py annotations/nocedit.exe/pseudocode
"""

import os
import sys
import subprocess
import argparse

# Add script directory to path for package imports
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ghidra_annotations.annotations.pseudocode.compiler_config import (
    DEFAULT_COMPILER, DEFAULT_COMPILE_FLAGS
)
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor, as_completed


def find_cpp_files(src_dir, skip_dirs=None, skip_files=None):
    """Find all .cpp files in the source directory.

    Args:
        src_dir: Base source directory
        skip_dirs: List of directory names to skip
        skip_files: List of file patterns to skip
    """
    if skip_dirs is None:
        skip_dirs = []
    if skip_files is None:
        skip_files = []

    cpp_files = []
    for root, dirs, files in os.walk(src_dir):
        rel_root = os.path.relpath(root, src_dir)

        # Skip specified directories
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


def compile_cpp_file(cpp_path, include_dir, compiler=DEFAULT_COMPILER):
    """Try to compile a single cpp file.

    Args:
        cpp_path: Path to the cpp file
        include_dir: Include directory for -I flag
        compiler: Compiler to use (from compiler_config.DEFAULT_COMPILER)

    Returns:
        Tuple of (success, error_message)
    """
    try:
        cmd = [compiler] + DEFAULT_COMPILE_FLAGS + ['-I', include_dir, cpp_path]

        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=60
        )

        if result.returncode == 0:
            return (True, None)
        else:
            errors = result.stderr.strip()
            return (False, errors)

    except subprocess.TimeoutExpired:
        return (False, "Compilation timed out")
    except FileNotFoundError:
        return (False, "Compiler '%s' not found" % compiler)


def parse_error_message(error_msg):
    """Parse compiler error message to extract key info."""
    lines = error_msg.split('\n')
    issues = []

    for line in lines:
        # Skip warning-only lines
        if 'warning:' in line.lower() and 'error:' not in line.lower():
            continue
        if 'error:' in line.lower():
            # Try to extract the error type
            import re
            if 'unknown type name' in line:
                match = re.search(r"unknown type name '(\w+)'", line)
                if match:
                    issues.append("Missing type: %s" % match.group(1))
                else:
                    issues.append(line.strip())
            elif 'undeclared' in line:
                issues.append(line.strip())
            elif 'expected' in line:
                issues.append(line.strip())
            else:
                issues.append(line.strip())

    return issues if issues else [error_msg[:200]]


def verify_globals(src_dir, include_dir, verbose=False, stop_on_error=False, compiler=DEFAULT_COMPILER, max_workers=4, skip_dirs=None, skip_files=None):
    """Verify all globals cpp files in the source directory.

    Args:
        src_dir: Path to src/globals directory
        include_dir: Path to include directory
        verbose: Print verbose output
        stop_on_error: Stop on first error
        compiler: Compiler to use
        max_workers: Number of parallel compilation jobs
        skip_dirs: List of directories to skip
        skip_files: List of files to skip

    Returns:
        Tuple of (passed_count, failed_count, failed_files)
    """
    cpp_files = find_cpp_files(src_dir, skip_dirs, skip_files)

    if not cpp_files:
        print("No cpp files found in %s" % src_dir)
        return (0, 0, [])

    print("Found %d cpp files to verify" % len(cpp_files))
    print("Using compiler: %s" % compiler)
    print("Include dir: %s" % include_dir)
    print("-" * 60)

    passed = 0
    failed = 0
    failed_files = []

    # Process files
    if max_workers > 1 and not stop_on_error:
        # Parallel processing
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
                    if verbose:
                        print("  OK: %s" % rel_path)
                else:
                    failed += 1
                    failed_files.append((rel_path, error))
                    print("FAIL: %s" % rel_path)
                    if verbose:
                        issues = parse_error_message(error)
                        for issue in issues[:5]:
                            print("      %s" % issue)
    else:
        # Sequential processing
        for cpp_file in cpp_files:
            rel_path = os.path.relpath(cpp_file, src_dir)

            success, error = compile_cpp_file(cpp_file, include_dir, compiler)

            if success:
                passed += 1
                if verbose:
                    print("  OK: %s" % rel_path)
            else:
                failed += 1
                failed_files.append((rel_path, error))
                print("FAIL: %s" % rel_path)
                if verbose:
                    issues = parse_error_message(error)
                    for issue in issues[:5]:
                        print("      %s" % issue)

                if stop_on_error:
                    print("\nStopping on first error.")
                    break

    return (passed, failed, failed_files)


def main():
    parser = argparse.ArgumentParser(
        description='Verify that generated globals cpp files are compilable'
    )
    parser.add_argument(
        'pseudocode_dir',
        help='Path to the pseudocode directory (contains src/globals/ and include/)'
    )
    parser.add_argument(
        '-v', '--verbose',
        action='store_true',
        help='Print verbose output (show OK files and error details)'
    )
    parser.add_argument(
        '-s', '--stop-on-error',
        action='store_true',
        help='Stop on first compilation error'
    )
    parser.add_argument(
        '-c', '--compiler',
        default=DEFAULT_COMPILER,
        help='Compiler to use (default: %s)' % DEFAULT_COMPILER
    )
    parser.add_argument(
        '-j', '--jobs',
        type=int,
        default=4,
        help='Number of parallel jobs (default: 4)'
    )
    parser.add_argument(
        '--show-errors',
        action='store_true',
        help='Show full error output for failed files at the end'
    )
    parser.add_argument(
        '--skip-dir',
        action='append',
        default=[],
        metavar='DIR',
        help='Skip files in this directory (can be used multiple times)'
    )
    parser.add_argument(
        '--skip-file',
        action='append',
        default=[],
        metavar='FILE',
        help='Skip this file (can be used multiple times)'
    )

    args = parser.parse_args()

    # Derive paths
    include_dir = os.path.join(args.pseudocode_dir, 'include')
    globals_src_dir = os.path.join(args.pseudocode_dir, 'src', 'globals')

    if not os.path.isdir(globals_src_dir):
        print("Error: %s is not a directory" % globals_src_dir)
        sys.exit(1)

    if not os.path.isdir(include_dir):
        print("Error: %s is not a directory" % include_dir)
        sys.exit(1)

    passed, failed, failed_files = verify_globals(
        globals_src_dir,
        include_dir,
        verbose=args.verbose,
        stop_on_error=args.stop_on_error,
        compiler=args.compiler,
        max_workers=args.jobs,
        skip_dirs=args.skip_dir,
        skip_files=args.skip_file
    )

    print("-" * 60)
    print("Results: %d passed, %d failed" % (passed, failed))

    if failed > 0:
        print("\nFailed files:")
        for rel_path, _ in failed_files:
            print("  - %s" % rel_path)

        if args.show_errors:
            print("\n" + "=" * 60)
            print("DETAILED ERRORS")
            print("=" * 60)
            for rel_path, error in failed_files:
                print("\n--- %s ---" % rel_path)
                print(error if error else "(no error message)")

        sys.exit(1)
    else:
        print("\nAll globals compiled successfully!")
        sys.exit(0)


if __name__ == '__main__':
    main()
