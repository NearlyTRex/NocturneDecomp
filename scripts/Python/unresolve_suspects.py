#!/usr/bin/env python3
"""
unresolve_suspects.py

Moves resolved_suspects back to the suspects array in exported function JSON files.
Use this to re-evaluate suspects after changing detection logic or fix strategies.

Usage:
    # Dry run - show what would be moved
    python unresolve_suspects.py /path/to/pseudocode/src

    # Actually move resolved suspects back
    python unresolve_suspects.py /path/to/pseudocode/src --apply

    # Only unresolve specific types
    python unresolve_suspects.py /path/to/pseudocode/src --type=variadic_anchor --apply
"""

import argparse
import json
import os
import sys
from pathlib import Path


def process_json_file(json_path, suspect_types=None, apply=False, verbose=True):
    """Move resolved_suspects back to suspects in a single JSON file.

    Args:
        json_path: Path to the JSON file
        suspect_types: Set of suspect types to unresolve, or None for all
        apply: If True, write changes back to the file
        verbose: If True, print progress info

    Returns:
        Number of suspects moved (0 if none)
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

    resolved = data.get('resolved_suspects', [])
    if not resolved:
        return 0

    # Filter by type if specified
    if suspect_types:
        to_move = [s for s in resolved if s.get('type') in suspect_types]
        to_keep = [s for s in resolved if s.get('type') not in suspect_types]
    else:
        to_move = resolved
        to_keep = []

    if not to_move:
        return 0

    suspects_moved = len(to_move)

    if verbose:
        func_name = data.get('function', {}).get('name', 'unknown')
        print("%s: %d suspect(s)" % (func_name, suspects_moved))
        for suspect in to_move:
            stype = suspect.get('type', 'unknown')
            addr = suspect.get('fix_address') or suspect.get('call_address') or suspect.get('callind_address') or '?'
            print("  - %s @ %s" % (stype, addr))

    if apply:
        # Ensure suspects array exists
        if 'suspects' not in data:
            data['suspects'] = []

        # Move suspects back
        data['suspects'].extend(to_move)

        # Update or remove resolved_suspects
        if to_keep:
            data['resolved_suspects'] = to_keep
        else:
            del data['resolved_suspects']

        try:
            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2)
        except IOError as e:
            print("  Error writing %s: %s" % (json_path, e))
            return 0

    return suspects_moved


def scan_directory(src_dir, suspect_types=None, apply=False, verbose=True):
    """Scan a directory tree for JSON files with resolved_suspects.

    Args:
        src_dir: Root directory to scan
        suspect_types: Set of suspect types to unresolve, or None for all
        apply: If True, move suspects in files
        verbose: If True, print progress info

    Returns:
        Tuple of (files_scanned, files_with_resolved, total_moved)
    """
    files_scanned = 0
    files_with_resolved = 0
    total_moved = 0

    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue

            json_path = os.path.join(root, filename)
            files_scanned += 1

            moved = process_json_file(json_path, suspect_types, apply=apply, verbose=verbose)

            if moved > 0:
                files_with_resolved += 1
                total_moved += moved

    return files_scanned, files_with_resolved, total_moved


def main():
    parser = argparse.ArgumentParser(
        description='Move resolved_suspects back to suspects array',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Suspect Types:
    callind_anchor        - CALLIND with ESP anchor fix
    callind_preserve      - CALLIND with ESP preserve fix
    callind_preserve_lost - CALLIND preserve (lost tracking)
    variadic_anchor       - Variadic CALL with ESP anchor
    variadic_preserve_ebp - Variadic CALL EBP-frame preserve
    variadic_preserve     - Variadic CALL non-EBP preserve

Examples:
    # Dry run - show all resolved suspects
    %(prog)s /path/to/pseudocode/src

    # Move all resolved suspects back
    %(prog)s /path/to/pseudocode/src --apply

    # Only unresolve variadic_anchor types
    %(prog)s /path/to/pseudocode/src --type=variadic_anchor --apply

    # Unresolve multiple types
    %(prog)s /path/to/pseudocode/src --type=variadic_anchor --type=variadic_preserve --apply
        """
    )
    parser.add_argument('path', help='Directory to scan or specific JSON file')
    parser.add_argument('--type', action='append', dest='types',
                        help='Suspect type to unresolve (can specify multiple)')
    parser.add_argument('--apply', action='store_true',
                        help='Actually move suspects (default: dry run)')
    parser.add_argument('-q', '--quiet', action='store_true',
                        help='Only show summary')

    args = parser.parse_args()

    path = Path(args.path)
    verbose = not args.quiet
    suspect_types = set(args.types) if args.types else None

    if not path.exists():
        print("Error: Path does not exist: %s" % path)
        sys.exit(1)

    type_desc = ', '.join(sorted(suspect_types)) if suspect_types else 'all types'

    if path.is_file():
        if not path.suffix == '.json':
            print("Error: File must be a JSON file")
            sys.exit(1)

        moved = process_json_file(str(path), suspect_types, apply=args.apply, verbose=verbose)

        if moved == 0:
            print("No resolved_suspects found for: %s" % type_desc)
        elif not args.apply:
            print("\nRun with --apply to move these suspects back")
    else:
        if verbose:
            print("Scanning %s for resolved_suspects (%s)..." % (path, type_desc))
            if not args.apply:
                print("(Dry run - use --apply to move)\n")

        files_scanned, files_with_resolved, total_moved = \
            scan_directory(str(path), suspect_types, apply=args.apply, verbose=verbose)

        print("\n" + "=" * 60)
        print("Summary:")
        print("  Types: %s" % type_desc)
        print("  Files scanned: %d" % files_scanned)
        print("  Files with resolved suspects: %d" % files_with_resolved)
        print("  Total suspects: %d" % total_moved)

        if total_moved > 0:
            if args.apply:
                print("\nMoved %d suspect(s) back in %d file(s)" % (
                    total_moved, files_with_resolved))
            else:
                print("\nRun with --apply to move these suspects back")


if __name__ == '__main__':
    main()
