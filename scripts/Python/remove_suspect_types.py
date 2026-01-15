#!/usr/bin/env python3
"""
remove_suspect_types.py

Removes specified suspect types from exported function JSON files.
Use this to clean out unwanted or obsolete suspect patterns.

Usage:
    # Dry run - show what would be removed
    python remove_suspect_types.py /path/to/pseudocode/src call_esp_preserve variadic_preserve

    # Actually remove suspects
    python remove_suspect_types.py /path/to/pseudocode/src call_esp_preserve variadic_preserve --apply
"""

import argparse
import json
import os
import sys
from pathlib import Path


def process_json_file(json_path, suspect_types, apply=False, verbose=True):
    """Remove specified suspect types from a single JSON file.

    Args:
        json_path: Path to the JSON file
        suspect_types: Set of suspect type strings to remove
        apply: If True, write changes back to the file
        verbose: If True, print progress info

    Returns:
        Number of suspects removed (0 if none)
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

    total_removed = 0

    # Process both suspects and resolved_suspects arrays
    for array_name in ('suspects', 'resolved_suspects'):
        suspects = data.get(array_name, [])
        if not suspects:
            continue

        # Find suspects to remove
        to_remove = []
        for i, suspect in enumerate(suspects):
            if suspect.get('type') in suspect_types:
                to_remove.append(i)

        if not to_remove:
            continue

        if verbose and total_removed == 0:
            func_name = data.get('function', {}).get('name', 'unknown')
            print("%s:" % func_name)

        if verbose:
            for i in to_remove:
                s = suspects[i]
                label = "[resolved] " if array_name == 'resolved_suspects' else ""
                # Use line if available, otherwise call_address, otherwise ?
                loc = s.get('line') or s.get('call_address') or '?'
                print("  - %s%s (%s)" % (label, s.get('type'), loc))

        total_removed += len(to_remove)

        if apply:
            # Remove suspects in reverse order to preserve indices
            for i in reversed(to_remove):
                del suspects[i]

    if total_removed == 0:
        return 0

    if apply:
        # Update complexity fields based on remaining suspects
        if 'complexity' in data:
            remaining_suspects = data.get('suspects', [])
            data['complexity']['suspect_count'] = len(remaining_suspects)
            # Rebuild suspect_types list from remaining suspects
            remaining_types = sorted(set(s.get('type') for s in remaining_suspects if s.get('type')))
            data['complexity']['suspect_types'] = remaining_types

        try:
            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2)
                f.write("\n")
        except IOError as e:
            print("  Error writing %s: %s" % (json_path, e))
            return 0

    return total_removed


def scan_directory(src_dir, suspect_types, apply=False, verbose=True):
    """Scan a directory tree for JSON files with specified suspect types.

    Args:
        src_dir: Root directory to scan
        suspect_types: Set of suspect type strings to remove
        apply: If True, remove suspects from files
        verbose: If True, print progress info

    Returns:
        Tuple of (files_scanned, files_modified, total_removed)
    """
    files_scanned = 0
    files_modified = 0
    total_removed = 0

    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue

            json_path = os.path.join(root, filename)
            files_scanned += 1

            removed = process_json_file(json_path, suspect_types, apply=apply, verbose=verbose)

            if removed > 0:
                files_modified += 1
                total_removed += removed

    return files_scanned, files_modified, total_removed


def main():
    parser = argparse.ArgumentParser(
        description='Remove specified suspect types from function JSON files',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
    # Dry run - show what would be removed
    %(prog)s /path/to/pseudocode/src call_esp_preserve variadic_preserve

    # Actually remove suspects
    %(prog)s /path/to/pseudocode/src call_esp_preserve variadic_preserve --apply

Common suspect types:
    call_esp_preserve     - Direct CALL in non-EBP-frame function
    variadic_preserve     - Variadic function call pattern
    unaffected_reg        - Unaffected register variable (unaff_*)
    badspacebase          - BADSPACEBASE decompiler error
    register_param        - Inferred register parameter (in_*)
    extraout              - Extra output variable (extraout_*)
        """
    )
    parser.add_argument('path', help='Directory to scan or specific JSON file')
    parser.add_argument('types', nargs='+', help='Suspect type(s) to remove')
    parser.add_argument('--apply', action='store_true',
                        help='Actually remove suspects (default: dry run)')
    parser.add_argument('-q', '--quiet', action='store_true',
                        help='Only show summary')

    args = parser.parse_args()

    path = Path(args.path)
    suspect_types = set(args.types)
    verbose = not args.quiet

    if not path.exists():
        print("Error: Path does not exist: %s" % path)
        sys.exit(1)

    print("Suspect types to remove: %s" % ', '.join(sorted(suspect_types)))

    if path.is_file():
        if not path.suffix == '.json':
            print("Error: File must be a JSON file")
            sys.exit(1)

        removed = process_json_file(str(path), suspect_types, apply=args.apply, verbose=verbose)

        if removed == 0:
            print("No matching suspects found")
        elif not args.apply:
            print("\nRun with --apply to remove these suspects")
    else:
        if verbose:
            print("Scanning %s..." % path)
            if not args.apply:
                print("(Dry run - use --apply to remove)\n")

        files_scanned, files_modified, total_removed = \
            scan_directory(str(path), suspect_types, apply=args.apply, verbose=verbose)

        print("\n" + "=" * 60)
        print("Summary:")
        print("  Files scanned: %d" % files_scanned)
        print("  Files with matching suspects: %d" % files_modified)
        print("  Total suspects: %d" % total_removed)

        if total_removed > 0:
            if args.apply:
                print("\nRemoved %d suspect(s) from %d file(s)" % (
                    total_removed, files_modified))
            else:
                print("\nRun with --apply to remove these suspects")


if __name__ == '__main__':
    main()
