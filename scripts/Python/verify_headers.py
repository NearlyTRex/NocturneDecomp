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

import argparse
import importlib.util
import os
import re
import subprocess
import sys
import tempfile
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


def _under(rel_root, dirs):
    return any(rel_root == d or rel_root.startswith(d + os.sep) for d in dirs)


def find_header_files(include_dir, skip_dirs=None, skip_files=None, only_dirs=None):
    """All .h files under include_dir, sorted.

    Args:
        include_dir: Base include directory
        skip_dirs: Directories to leave out (e.g., ['constants', 'globals'])
        skip_files: File names to leave out (e.g., ['nocturne.h'])
        only_dirs: If given, only headers inside these directories, which leaves
            out the aggregate headers at the top level
    """
    skip_dirs = skip_dirs or []
    skip_files = skip_files or []
    headers = []
    for root, _dirs, files in os.walk(include_dir):
        rel_root = os.path.relpath(root, include_dir)
        if (only_dirs and not _under(rel_root, only_dirs)) or _under(rel_root, skip_dirs):
            continue
        headers += [os.path.join(root, f) for f in files if f.endswith('.h') and f not in skip_files]
    return sorted(headers)


def compile_header(header_path, include_dir, compiler=DEFAULT_COMPILER):
    """Try to compile a single header file, through a C++ file that includes it.

    Returns:
        Tuple of (success, error_message)
    """
    with tempfile.NamedTemporaryFile(mode='w', suffix='.cpp', delete=False) as f:
        f.write('#include "%s"\n' % os.path.relpath(header_path, include_dir))
        f.write('int main(void) { return 0; }\n')
        temp_file = f.name

    cmd = [compiler] + DEFAULT_COMPILE_FLAGS + ['-I', include_dir, temp_file]
    try:
        result = subprocess.run(cmd, capture_output=True, text=True, timeout=30)
    except subprocess.TimeoutExpired:
        return (False, "Compilation timed out")
    except OSError as e:
        return (False, "Compiler '%s' could not run: %s" % (compiler, e))
    finally:
        os.unlink(temp_file)
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


def verify_headers(include_dir, verbose=False, stop_on_error=False, compiler=DEFAULT_COMPILER, max_workers=4,
                   skip_dirs=None, skip_files=None, only_dirs=None):
    """Verify all headers in the include directory.

    Headers compile in parallel unless stop_on_error asks for one at a time;
    either way they are reported in path order.

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
    failed_headers = []

    def check(path):
        return compile_header(path, include_dir, compiler)

    with ThreadPoolExecutor(max_workers=max(1, max_workers)) as executor:
        if stop_on_error:
            results = map(check, headers)
        else:
            results = executor.map(check, headers)
        for header, (success, error) in zip(headers, results):
            rel_path = os.path.relpath(header, include_dir)
            if success:
                passed += 1
                if verbose:
                    print("  OK: %s" % rel_path)
                continue
            failed_headers.append((rel_path, error))
            print("FAIL: %s" % rel_path)
            if verbose:
                for issue in parse_error_message(error)[:5]:
                    print("      %s" % issue)
            if stop_on_error:
                print("\nStopping on first error.")
                break

    return (passed, len(failed_headers), failed_headers)


def main(argv=None):
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

    args = parser.parse_args(argv)

    if not os.path.isdir(args.include_dir):
        print("Error: %s is not a directory" % args.include_dir)
        return 1

    skip_files = args.skip_file
    if args.skip_aggregates:
        skip_files += ['constants.h', 'globals.h', 'nocturne.h']

    passed, failed, failed_headers = verify_headers(
        args.include_dir,
        verbose=args.verbose,
        stop_on_error=args.stop_on_error,
        compiler=args.compiler,
        max_workers=args.jobs,
        skip_dirs=args.skip_dir,
        skip_files=skip_files,
        only_dirs=args.only_dir
    )

    print("-" * 60)
    print("Results: %d passed, %d failed" % (passed, failed))

    if not failed:
        print("\nAll headers compiled successfully!")
        return 0

    print("\nFailed headers:")
    for rel_path, _ in failed_headers:
        print("  - %s" % rel_path)

    if args.show_errors:
        print("\n" + "=" * 60)
        print("DETAILED ERRORS")
        print("=" * 60)
        for rel_path, error in failed_headers:
            print("\n--- %s ---" % rel_path)
            print(error or "(no error message)")
    return 1


if __name__ == '__main__':
    sys.exit(main())
