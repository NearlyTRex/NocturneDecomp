#!/usr/bin/env python3
"""
generate_pcode_overrides.py

Scans exported function JSON files for fixable ESP tracking issues and generates
p-code overrides to fix them.

Handles:
- callind_esp_uncertain: CALLIND followed by ADD ESP with uncertain ESP tracking
  Fix: Override ADD ESP to anchor ESP = EBP - frame_offset

- callind_esp_no_frame: CALLIND in function without EBP frame
  Fix: Override ADD ESP to set ESP using stack-relative computation

Usage:
    # Scan and show what would be fixed (dry run)
    python generate_pcode_overrides.py /path/to/pseudocode/src

    # Apply fixes to JSON files
    python generate_pcode_overrides.py /path/to/pseudocode/src --apply

    # Process a specific file
    python generate_pcode_overrides.py /path/to/function.json --apply
"""

import argparse
import json
import os
import sys
from pathlib import Path


def to_twos_complement(value, bits=32):
    """Convert a negative value to two's complement representation."""
    if value >= 0:
        return value
    return (1 << bits) + value


def generate_esp_anchor_pcode(frame_offset):
    """Generate p-code to anchor ESP = EBP - frame_offset.

    Args:
        frame_offset: Positive value (e.g., 0x50 means ESP = EBP - 0x50)

    Returns:
        P-code operation string
    """
    # ESP = EBP + (-frame_offset)
    # register 0x10 = ESP, register 0x14 = EBP
    offset_twos = to_twos_complement(-frame_offset)
    return "INT_ADD (register,0x10,4) = (register,0x14,4), (const,0x%x,4)" % offset_twos


def generate_callind_esp_preserve_pcode(target_type, target_value):
    """Generate p-code to preserve ESP across a CALLIND.

    For cdecl calls, ESP is unchanged by the call itself (caller cleans up).
    We save ESP before the call and restore it after, so Ghidra knows ESP
    is preserved and subsequent ADD ESP works on a known value.

    Args:
        target_type: 'esp_offset' or 'register'
        target_value: The offset (int) or register name (str)

    Returns:
        List of P-code operation strings
    """
    # Register offsets for x86
    REG_OFFSETS = {
        'EAX': 0x0, 'ECX': 0x4, 'EDX': 0x8, 'EBX': 0xc,
        'ESP': 0x10, 'EBP': 0x14, 'ESI': 0x18, 'EDI': 0x1c,
    }

    # Using unique space offsets:
    #   0x10000 = saved ESP
    #   0x10010 = call target address (for esp_offset type)
    #   0x10020 = function pointer loaded from memory (for esp_offset type)

    if target_type == 'esp_offset':
        # CALL dword ptr [ESP + offset]
        return [
            "COPY (unique,0x10000,4) = (register,0x10,4)",  # save ESP
            "INT_ADD (unique,0x10010,4) = (register,0x10,4), (const,0x%x,4)" % target_value,  # addr = ESP + offset
            "LOAD (unique,0x10020,4) = (ram,(unique,0x10010,4),4)",  # load func ptr
            "CALLIND (unique,0x10020,4)",  # call the function
            "COPY (register,0x10,4) = (unique,0x10000,4)"   # restore ESP
        ]
    elif target_type == 'register':
        # CALL REG (e.g., CALL EBP)
        reg_offset = REG_OFFSETS.get(target_value, 0x14)  # default to EBP
        return [
            "COPY (unique,0x10000,4) = (register,0x10,4)",  # save ESP
            "CALLIND (register,0x%x,4)" % reg_offset,  # call via register
            "COPY (register,0x10,4) = (unique,0x10000,4)"   # restore ESP
        ]
    else:
        return None


def find_fixable_suspects(json_data, verbose=True):
    """Find suspects that can be fixed with p-code overrides.

    Args:
        json_data: Parsed JSON data from function export
        verbose: If True, print warnings

    Returns:
        Tuple of (fixes, skipped) where:
        - fixes is list of (fix_address, pcode_lines, offset_value, fix_type)
        - skipped is list of (fix_address, reason)
    """
    fixes = []
    skipped = []

    # Skip non-dict JSON (some files may be arrays or other structures)
    if not isinstance(json_data, dict):
        return fixes, skipped

    suspects = json_data.get('suspects', [])
    existing_overrides = json_data.get('pcode_overrides', {})

    for suspect in suspects:
        suspect_type = suspect.get('type', '')
        fix_address = suspect.get('fix_address', '')

        if not fix_address:
            continue

        # Normalize address for comparison
        norm_addr = fix_address.lower().replace('0x', '').lstrip('0') or '0'

        # Check if already fixed
        already_fixed = False
        for existing_addr in existing_overrides.keys():
            existing_norm = existing_addr.lower().replace('0x', '').lstrip('0') or '0'
            if existing_norm == norm_addr:
                already_fixed = True
                break

        if already_fixed:
            continue

        if suspect_type == 'callind_esp_uncertain':
            # EBP-frame function: use ESP = EBP - frame_offset
            frame_offset = suspect.get('frame_offset')

            if frame_offset is None:
                skipped.append((fix_address, 'no frame_offset'))
                continue

            if frame_offset == 0:
                skipped.append((fix_address, 'frame_offset=0 (detection may have failed)'))
                continue

            # Generate the fix
            pcode = generate_esp_anchor_pcode(frame_offset)
            fixes.append((fix_address, [pcode], frame_offset, 'ebp_anchor'))

        elif suspect_type == 'callind_esp_no_frame':
            # Non-EBP-frame function: fix the CALLIND to preserve ESP
            callind_address = suspect.get('callind_address', '')
            target_type = suspect.get('call_target_type')
            target_value = suspect.get('call_target_value')

            if not callind_address:
                skipped.append((fix_address, 'no callind_address'))
                continue

            if target_type is None:
                skipped.append((callind_address, 'unparseable indirect call'))
                continue

            # Check if callind_address already fixed
            norm_callind = callind_address.lower().replace('0x', '').lstrip('0') or '0'
            callind_already_fixed = False
            for existing_addr in existing_overrides.keys():
                existing_norm = existing_addr.lower().replace('0x', '').lstrip('0') or '0'
                if existing_norm == norm_callind:
                    callind_already_fixed = True
                    break

            if callind_already_fixed:
                continue

            # Generate the fix - override CALLIND to preserve ESP
            pcode_lines = generate_callind_esp_preserve_pcode(target_type, target_value)
            if pcode_lines is None:
                skipped.append((callind_address, 'unsupported call target type'))
                continue

            # For display, show the target info
            if target_type == 'esp_offset':
                display_value = target_value
            else:
                display_value = target_value  # register name
            fixes.append((callind_address, pcode_lines, display_value, 'callind_preserve'))

    return fixes, skipped


def process_json_file(json_path, apply=False, verbose=True):
    """Process a single JSON file for fixable suspects.

    Args:
        json_path: Path to the JSON file
        apply: If True, write fixes back to the file
        verbose: If True, print progress info

    Returns:
        Tuple of (fixes_count, skipped_count)
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)
    except (json.JSONDecodeError, IOError) as e:
        if verbose:
            print("  Error reading %s: %s" % (json_path, e))
        return 0, 0

    # Find fixable suspects
    fixes, skipped = find_fixable_suspects(data, verbose)

    if not fixes and not skipped:
        return 0, 0

    func_name = data.get('function', {}).get('name', 'unknown')

    if verbose and (fixes or skipped):
        print("\n%s:" % func_name)

        if skipped:
            print("  Skipped (%d):" % len(skipped))
            for addr, reason in skipped:
                print("    %s - %s" % (addr, reason))

        if fixes:
            print("  Fixes (%d):" % len(fixes))
            for addr, pcode_lines, offset_value, fix_type in fixes:
                if fix_type == 'ebp_anchor':
                    print("    %s (frame_offset=0x%x, type=%s):" % (addr, offset_value, fix_type))
                elif fix_type == 'callind_preserve':
                    if isinstance(offset_value, int):
                        print("    %s (esp_offset=0x%x, type=%s):" % (addr, offset_value, fix_type))
                    else:
                        print("    %s (reg=%s, type=%s):" % (addr, offset_value, fix_type))
                else:
                    print("    %s (offset=0x%x, type=%s):" % (addr, offset_value, fix_type))
                for line in pcode_lines:
                    print("      %s" % line)

    if apply and fixes:
        # Ensure pcode_overrides exists
        if 'pcode_overrides' not in data:
            data['pcode_overrides'] = {}

        # Add the new overrides
        for addr, pcode_lines, offset_value, fix_type in fixes:
            data['pcode_overrides'][addr] = pcode_lines

        # Write back
        try:
            with open(json_path, 'w') as f:
                json.dump(data, f, indent=2)
            if verbose:
                print("  Applied %d fix(es)" % len(fixes))
        except IOError as e:
            print("  Error writing %s: %s" % (json_path, e))
            return 0, len(skipped)

    return len(fixes), len(skipped)


def scan_directory(src_dir, apply=False, verbose=True):
    """Scan a directory tree for JSON files with fixable suspects.

    Args:
        src_dir: Root directory to scan
        apply: If True, apply fixes to files
        verbose: If True, print progress info

    Returns:
        Tuple of (files_scanned, files_with_fixes, total_fixes, total_skipped)
    """
    files_with_fixes = 0
    files_with_skipped = 0
    total_fixes = 0
    total_skipped = 0
    files_scanned = 0

    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue

            json_path = os.path.join(root, filename)
            files_scanned += 1

            fixes, skipped = process_json_file(json_path, apply=apply, verbose=verbose)

            if fixes > 0:
                files_with_fixes += 1
                total_fixes += fixes

            if skipped > 0:
                files_with_skipped += 1
                total_skipped += skipped

    return files_scanned, files_with_fixes, total_fixes, files_with_skipped, total_skipped


def main():
    parser = argparse.ArgumentParser(
        description='Generate p-code overrides for fixable ESP tracking issues',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
    # Dry run - show what would be fixed
    %(prog)s /path/to/pseudocode/src

    # Apply fixes to JSON files
    %(prog)s /path/to/pseudocode/src --apply

    # Process a specific file
    %(prog)s /path/to/function.json --apply
        """
    )
    parser.add_argument('path', help='Directory to scan or specific JSON file')
    parser.add_argument('--apply', action='store_true',
                        help='Apply fixes to JSON files (default: dry run)')
    parser.add_argument('-q', '--quiet', action='store_true',
                        help='Only show summary')

    args = parser.parse_args()

    path = Path(args.path)
    verbose = not args.quiet

    if not path.exists():
        print("Error: Path does not exist: %s" % path)
        sys.exit(1)

    if path.is_file():
        # Process single file
        if not path.suffix == '.json':
            print("Error: File must be a JSON file")
            sys.exit(1)

        fixes, skipped = process_json_file(str(path), apply=args.apply, verbose=verbose)

        if fixes == 0 and skipped == 0:
            print("No fixable suspects found")
        else:
            if skipped > 0:
                print("\n%d suspect(s) skipped (frame_offset=0 or missing)" % skipped)
            if fixes > 0 and not args.apply:
                print("\nRun with --apply to apply these fixes")
    else:
        # Scan directory
        if verbose:
            print("Scanning %s for fixable suspects..." % path)
            if not args.apply:
                print("(Dry run - use --apply to apply fixes)\n")

        files_scanned, files_with_fixes, total_fixes, files_with_skipped, total_skipped = \
            scan_directory(str(path), apply=args.apply, verbose=verbose)

        print("\n" + "=" * 60)
        print("Summary:")
        print("  Files scanned: %d" % files_scanned)
        print("  Files with fixes: %d" % files_with_fixes)
        print("  Total fixes: %d" % total_fixes)
        if total_skipped > 0:
            print("  Files with skipped suspects: %d" % files_with_skipped)
            print("  Total skipped: %d (frame_offset=0 or missing)" % total_skipped)

        if total_fixes > 0 and not args.apply:
            print("\nRun with --apply to apply these fixes")


if __name__ == '__main__':
    main()
