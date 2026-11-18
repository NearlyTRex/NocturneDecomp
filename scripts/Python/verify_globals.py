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

import argparse
import importlib.util
import os
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor


def _load_compiler_config():
    # By file, not through the ghidra_annotations package, whose __init__
    # imports the exporters and with them Ghidra's API.
    path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'ghidra_annotations', 'annotations',
                        'pseudocode', 'compiler_config.py')
    spec = importlib.util.spec_from_file_location('_compiler_config', path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


_config = _load_compiler_config()
DEFAULT_COMPILER = _config.DEFAULT_COMPILER
DEFAULT_COMPILE_FLAGS = _config.DEFAULT_COMPILE_FLAGS


def find_cpp_files(src_dir, skip_dirs=None, skip_files=None):
    """All .cpp files under src_dir, sorted, less skipped directories and file names."""
    skip_dirs = skip_dirs or []
    skip_files = skip_files or []
    cpp_files = []
    for root, _dirs, files in os.walk(src_dir):
        rel_root = os.path.relpath(root, src_dir)
        if any(rel_root == d or rel_root.startswith(d + os.sep) for d in skip_dirs):
            continue
        cpp_files += [os.path.join(root, f) for f in files if f.endswith('.cpp') and f not in skip_files]
    return sorted(cpp_files)


def compile_cpp_file(cpp_path, include_dir, compiler=DEFAULT_COMPILER):
    """Try to compile a single cpp file.

    Returns:
        Tuple of (success, error_message)
    """
    cmd = [compiler] + DEFAULT_COMPILE_FLAGS + ['-I', include_dir, cpp_path]
    try:
        result = subprocess.run(cmd, capture_output=True, text=True, timeout=60)
    except subprocess.TimeoutExpired:
        return (False, "Compilation timed out")
    except OSError as e:
        return (False, "Compiler '%s' could not run: %s" % (compiler, e))
    if result.returncode == 0:
        return (True, None)
    return (False, result.stderr.strip())


def parse_error_message(error_msg):
    """The error lines of a compiler's output, a missing type shortened to its name."""
    issues = []
    for line in error_msg.split('\n'):
        if 'error:' not in line.lower():
            continue
        match = re.search(r"unknown type name '(\w+)'", line)
        issues.append("Missing type: %s" % match.group(1) if match else line.strip())
    return issues or [error_msg[:200]]


def verify_globals(src_dir, include_dir, verbose=False, stop_on_error=False, compiler=DEFAULT_COMPILER,
                   max_workers=4, skip_dirs=None, skip_files=None):
    """Verify all globals cpp files in the source directory.

    Files compile in parallel unless stop_on_error asks for one at a time; either
    way they are reported in path order.

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
    failed_files = []

    def check(path):
        return compile_cpp_file(path, include_dir, compiler)

    with ThreadPoolExecutor(max_workers=max(1, max_workers)) as executor:
        if stop_on_error:
            results = map(check, cpp_files)
        else:
            results = executor.map(check, cpp_files)
        for cpp_file, (success, error) in zip(cpp_files, results):
            rel_path = os.path.relpath(cpp_file, src_dir)
            if success:
                passed += 1
                if verbose:
                    print("  OK: %s" % rel_path)
                continue
            failed_files.append((rel_path, error))
            print("FAIL: %s" % rel_path)
            if verbose:
                for issue in parse_error_message(error)[:5]:
                    print("      %s" % issue)
            if stop_on_error:
                print("\nStopping on first error.")
                break

    return (passed, len(failed_files), failed_files)


def main(argv=None):
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

    args = parser.parse_args(argv)

    include_dir = os.path.join(args.pseudocode_dir, 'include')
    globals_src_dir = os.path.join(args.pseudocode_dir, 'src', 'globals')

    for required in (globals_src_dir, include_dir):
        if not os.path.isdir(required):
            print("Error: %s is not a directory" % required)
            return 1

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

    if not failed:
        print("\nAll globals compiled successfully!")
        return 0

    print("\nFailed files:")
    for rel_path, _ in failed_files:
        print("  - %s" % rel_path)

    if args.show_errors:
        print("\n" + "=" * 60)
        print("DETAILED ERRORS")
        print("=" * 60)
        for rel_path, error in failed_files:
            print("\n--- %s ---" % rel_path)
            print(error or "(no error message)")
    return 1


if __name__ == '__main__':
    sys.exit(main())
