#!/usr/bin/env python3
"""
Verify that generated headers are compilable.

This script attempts to compile each header file to check for:
- Missing type definitions
- Wrong declaration order
- Missing includes
- Syntax errors

Usage:
    python verify_headers.py <include_dir> [--verbose] [--stop-on-error]

Example:
    python verify_headers.py annotations/nocedit.exe/pseudocode/include
"""

import os
import sys
import subprocess

# Add script directory to path for package imports
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ghidra_annotations.annotations.pseudocode.compiler_config import (
    DEFAULT_COMPILER, DEFAULT_COMPILE_FLAGS
)
import argparse
import tempfile
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor, as_completed


def find_header_files(include_dir, skip_dirs=None, skip_files=None, only_dirs=None):
    """Find all .h files in the include directory.

    Args:
        include_dir: Base include directory
        skip_dirs: List of directory names to skip (e.g., ['constants', 'globals'])
        skip_files: List of file patterns to skip (e.g., ['nocturne.h'])
        only_dirs: If specified, only include headers from these directories
    """
    if skip_dirs is None:
        skip_dirs = []
    if skip_files is None:
        skip_files = []
    if only_dirs is None:
        only_dirs = []

    headers = []
    for root, dirs, files in os.walk(include_dir):
        rel_root = os.path.relpath(root, include_dir)

        # If only_dirs is specified, check if we're in an allowed directory
        if only_dirs:
            in_allowed = False
            for only_dir in only_dirs:
                if rel_root == only_dir or rel_root.startswith(only_dir + os.sep) or rel_root == '.':
                    in_allowed = True
                    break
            if not in_allowed and rel_root != '.':
                continue

        # Skip specified directories
        skip_this = False
        for skip_dir in skip_dirs:
            if rel_root == skip_dir or rel_root.startswith(skip_dir + os.sep):
                skip_this = True
                break
        if skip_this:
            continue

        for f in files:
            if f.endswith('.h'):
                # Check if file should be skipped
                if f in skip_files:
                    continue
                # If only_dirs specified and we're at root, skip root files
                if only_dirs and rel_root == '.':
                    continue
                headers.append(os.path.join(root, f))
    return sorted(headers)


def compile_header(header_path, include_dir, compiler=DEFAULT_COMPILER):
    """Try to compile a single header file.

    Args:
        header_path: Path to the header file
        include_dir: Base include directory for -I flag
        compiler: Compiler to use (from compiler_config.DEFAULT_COMPILER)

    Returns:
        Tuple of (success, error_message)
    """
    # Create a temporary C++ file that includes the header
    with tempfile.NamedTemporaryFile(mode='w', suffix='.cpp', delete=False) as f:
        # Include the header
        rel_path = os.path.relpath(header_path, include_dir)
        f.write('#include "%s"\n' % rel_path)
        f.write('int main(void) { return 0; }\n')
        temp_file = f.name

    try:
        cmd = [compiler] + DEFAULT_COMPILE_FLAGS + ['-I', include_dir, temp_file]

        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=30
        )

        if result.returncode == 0:
            return (True, None)
        else:
            # Extract relevant error messages
            errors = result.stderr.strip()
            return (False, errors)

    except subprocess.TimeoutExpired:
        return (False, "Compilation timed out")
    except FileNotFoundError:
        return (False, "Compiler '%s' not found" % compiler)
    finally:
        # Clean up temp file
        try:
            os.unlink(temp_file)
        except:
            pass


def parse_error_message(error_msg, header_path):
    """Parse compiler error message to extract key info."""
    lines = error_msg.split('\n')
    issues = []

    for line in lines:
        if 'error:' in line.lower():
            # Try to extract the error type
            if 'unknown type name' in line:
                # Extract the type name
                import re
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


def verify_headers(include_dir, verbose=False, stop_on_error=False, compiler=DEFAULT_COMPILER, max_workers=4, skip_dirs=None, skip_files=None, only_dirs=None):
    """Verify all headers in the include directory.

    Args:
        include_dir: Path to include directory
        verbose: Print verbose output
        stop_on_error: Stop on first error
        compiler: Compiler to use
        max_workers: Number of parallel compilation jobs
        skip_dirs: List of directories to skip
        skip_files: List of files to skip
        only_dirs: List of directories to include (if specified, only test headers in these dirs)

    Returns:
        Tuple of (passed_count, failed_count, failed_headers)
    """
    headers = find_header_files(include_dir, skip_dirs, skip_files, only_dirs)

    if not headers:
        print("No header files found in %s" % include_dir)
        return (0, 0, [])

    print("Found %d header files to verify" % len(headers))
    print("Using compiler: %s" % compiler)
    print("-" * 60)

    passed = 0
    failed = 0
    failed_headers = []

    # Process headers
    if max_workers > 1 and not stop_on_error:
        # Parallel processing
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
                    if verbose:
                        print("  OK: %s" % rel_path)
                else:
                    failed += 1
                    failed_headers.append((rel_path, error))
                    print("FAIL: %s" % rel_path)
                    if verbose:
                        issues = parse_error_message(error, header)
                        for issue in issues[:5]:  # Limit to first 5 issues
                            print("      %s" % issue)
    else:
        # Sequential processing
        for header in headers:
            rel_path = os.path.relpath(header, include_dir)

            success, error = compile_header(header, include_dir, compiler)

            if success:
                passed += 1
                if verbose:
                    print("  OK: %s" % rel_path)
            else:
                failed += 1
                failed_headers.append((rel_path, error))
                print("FAIL: %s" % rel_path)
                if verbose:
                    issues = parse_error_message(error, header)
                    for issue in issues[:5]:
                        print("      %s" % issue)

                if stop_on_error:
                    print("\nStopping on first error.")
                    break

    return (passed, failed, failed_headers)


def main():
    parser = argparse.ArgumentParser(
        description='Verify that generated headers are compilable'
    )
    parser.add_argument(
        'include_dir',
        help='Path to the include directory'
    )
    parser.add_argument(
        '-v', '--verbose',
        action='store_true',
        help='Print verbose output (show OK headers and error details)'
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
        help='Show full error output for failed headers at the end'
    )
    parser.add_argument(
        '--skip-dir',
        action='append',
        default=[],
        metavar='DIR',
        help='Skip headers in this directory (can be used multiple times)'
    )
    parser.add_argument(
        '--skip-file',
        action='append',
        default=[],
        metavar='FILE',
        help='Skip this file (can be used multiple times)'
    )
    parser.add_argument(
        '--skip-aggregates',
        action='store_true',
        help='Skip aggregate headers (constants.h, globals.h, nocturne.h) that may timeout'
    )
    parser.add_argument(
        '--only-dir',
        action='append',
        default=[],
        metavar='DIR',
        help='Only test headers in this directory (can be used multiple times)'
    )

    args = parser.parse_args()

    if not os.path.isdir(args.include_dir):
        print("Error: %s is not a directory" % args.include_dir)
        sys.exit(1)

    skip_dirs = args.skip_dir
    skip_files = args.skip_file

    if args.skip_aggregates:
        skip_files.extend(['constants.h', 'globals.h', 'nocturne.h'])

    passed, failed, failed_headers = verify_headers(
        args.include_dir,
        verbose=args.verbose,
        stop_on_error=args.stop_on_error,
        compiler=args.compiler,
        max_workers=args.jobs,
        skip_dirs=skip_dirs,
        skip_files=skip_files,
        only_dirs=args.only_dir if args.only_dir else None
    )

    print("-" * 60)
    print("Results: %d passed, %d failed" % (passed, failed))

    if failed > 0:
        print("\nFailed headers:")
        for rel_path, _ in failed_headers:
            print("  - %s" % rel_path)

        if args.show_errors:
            print("\n" + "=" * 60)
            print("DETAILED ERRORS")
            print("=" * 60)
            for rel_path, error in failed_headers:
                print("\n--- %s ---" % rel_path)
                print(error if error else "(no error message)")

        sys.exit(1)
    else:
        print("\nAll headers compiled successfully!")
        sys.exit(0)


if __name__ == '__main__':
    main()
