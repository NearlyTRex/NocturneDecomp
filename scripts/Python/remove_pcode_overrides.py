#!/usr/bin/env python3
"""
remove_pcode_overrides.py

Removes all pcode_overrides from exported function JSON files.
Use this to clean out broken or unwanted overrides.

Usage:
    # Dry run - show what would be removed
    python remove_pcode_overrides.py /path/to/pseudocode/src

    # Actually remove overrides
    python remove_pcode_overrides.py /path/to/pseudocode/src --apply
"""

import argparse
import json
import os
import sys
from pathlib import Path


def process_json_file(json_path, apply=False, verbose=True):
    """Remove pcode_overrides from a single JSON file.

    Args:
        json_path: Path to the JSON file
        apply: If True, write changes back to the file
        verbose: If True, print progress info

    Returns:
        Number of overrides removed (0 if none)
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
    except (json.JSONDecodeError, IOError) as e:
        if verbose:
            print("  Error reading %s: %s" % (json_path, e))
        return 0

    if not isinstance(data, dict):
        return 0

    overrides_removed = 0

    # Check for pcode_overrides
    if 'pcode_overrides' in data and data['pcode_overrides']:
        overrides_removed = len(data['pcode_overrides'])
        if verbose:
            func_name = data.get('function', {}).get('name', 'unknown')
            print("%s: %d override(s)" % (func_name, overrides_removed))
            for addr in sorted(data['pcode_overrides'].keys()):
                print("  - %s" % addr)

        if apply:
            del data['pcode_overrides']

    if apply and overrides_removed > 0:
        try:
            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2)
        except IOError as e:
            print("  Error writing %s: %s" % (json_path, e))
            return 0

    return overrides_removed


def scan_directory(src_dir, apply=False, verbose=True):
    """Scan a directory tree for JSON files with pcode_overrides.

    Args:
        src_dir: Root directory to scan
        apply: If True, remove overrides from files
        verbose: If True, print progress info

    Returns:
        Tuple of (files_scanned, files_with_overrides, total_overrides)
    """
    files_scanned = 0
    files_with_overrides = 0
    total_overrides = 0

    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue

            json_path = os.path.join(root, filename)
            files_scanned += 1

            removed = process_json_file(json_path, apply=apply, verbose=verbose)

            if removed > 0:
                files_with_overrides += 1
                total_overrides += removed

    return files_scanned, files_with_overrides, total_overrides


def main():
    parser = argparse.ArgumentParser(
        description='Remove pcode_overrides from function JSON files',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
    # Dry run - show what would be removed
    %(prog)s /path/to/pseudocode/src

    # Actually remove overrides
    %(prog)s /path/to/pseudocode/src --apply
        """
    )
    parser.add_argument('path', help='Directory to scan or specific JSON file')
    parser.add_argument('--apply', action='store_true',
                        help='Actually remove overrides (default: dry run)')
    parser.add_argument('-q', '--quiet', action='store_true',
                        help='Only show summary')

    args = parser.parse_args()

    path = Path(args.path)
    verbose = not args.quiet

    if not path.exists():
        print("Error: Path does not exist: %s" % path)
        sys.exit(1)

    if path.is_file():
        if not path.suffix == '.json':
            print("Error: File must be a JSON file")
            sys.exit(1)

        removed = process_json_file(str(path), apply=args.apply, verbose=verbose)

        if removed == 0:
            print("No pcode_overrides found")
        elif not args.apply:
            print("\nRun with --apply to remove these overrides")
    else:
        if verbose:
            print("Scanning %s for pcode_overrides..." % path)
            if not args.apply:
                print("(Dry run - use --apply to remove)\n")

        files_scanned, files_with_overrides, total_overrides = \
            scan_directory(str(path), apply=args.apply, verbose=verbose)

        print("\n" + "=" * 60)
        print("Summary:")
        print("  Files scanned: %d" % files_scanned)
        print("  Files with overrides: %d" % files_with_overrides)
        print("  Total overrides: %d" % total_overrides)

        if total_overrides > 0:
            if args.apply:
                print("\nRemoved %d override(s) from %d file(s)" % (
                    total_overrides, files_with_overrides))
            else:
                print("\nRun with --apply to remove these overrides")


if __name__ == '__main__':
    main()
