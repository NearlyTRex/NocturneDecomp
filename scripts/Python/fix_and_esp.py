#!/usr/bin/env python3
"""
fix_and_esp.py

All-in-one tool to fix AND ESP stack alignment decompilation artifacts.
Takes a function address (or "all" to batch-process), generates ESP-to-EBP
patches from the .asm file, and applies them via the Ghidra byte patcher.

Usage:
    # Test a single function
    python3 fix_and_esp.py <project_dir> <project_name> <program_name> 0x0043c880 --test

    # Apply patches for a single function
    python3 fix_and_esp.py <project_dir> <project_name> <program_name> 0x0043c880 --apply

    # Test all AND ESP functions
    python3 fix_and_esp.py <project_dir> <project_name> <program_name> all --test

    # Apply all AND ESP functions
    python3 fix_and_esp.py <project_dir> <project_name> <program_name> all --apply

    # Dry run (just generate patches, don't touch Ghidra)
    python3 fix_and_esp.py <project_dir> <project_name> <program_name> 0x0043c880
"""

import argparse
import glob
import json
import os
import re
import sys
import tempfile


def find_asm_file(pseudocode_src_dir, func_addr_hex):
    """Find the .asm file for a function by its address."""
    # Address without 0x prefix, lowercase
    addr = func_addr_hex.lower().replace('0x', '').lstrip('0') or '0'
    # Pad to match FUN_ naming convention
    addr_padded = addr.zfill(8)

    pattern = os.path.join(pseudocode_src_dir, '**', '*%s*.asm' % addr_padded)
    matches = glob.glob(pattern, recursive=True)

    # Filter to only files with FUN_<addr> in the name
    exact = [m for m in matches if ('FUN_%s' % addr_padded) in m]
    if exact:
        return exact[0]
    if matches:
        return matches[0]
    return None


def find_all_and_esp_asm_files(pseudocode_src_dir):
    """Find all .asm files that contain AND ESP,0xFFFFFFF8."""
    results = []
    pattern = os.path.join(pseudocode_src_dir, '**', '*.asm')
    for path in sorted(glob.glob(pattern, recursive=True)):
        try:
            with open(path, 'r') as f:
                # Read just enough to find the prologue
                head = f.read(4096)
            if re.search(r'AND\s+ESP\s*,\s*0x[fF]+[80]', head):
                # Extract function address from filename
                m = re.search(r'FUN_([0-9a-fA-F]+)', os.path.basename(path))
                if m:
                    results.append((int(m.group(1), 16), path))
        except (IOError, UnicodeDecodeError):
            continue
    return results


def main():
    parser = argparse.ArgumentParser(
        description="Fix AND ESP decompilation artifacts via ESP-to-EBP conversion",
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("target", help="Function address (hex) or 'all'")
    parser.add_argument("--test", action="store_true",
                        help="Test mode: apply and roll back, show before/after diff")
    parser.add_argument("--apply", action="store_true",
                        help="Apply patches permanently")
    parser.add_argument("--quiet", "-q", action="store_true",
                        help="Suppress per-instruction output from patch generator")
    parser.add_argument("--pseudocode-src", type=str, default=None,
                        help="Path to pseudocode/src directory (auto-detected from project)")
    parser.add_argument("--min-conversions", type=int, default=1,
                        help="Skip functions with fewer than N conversions (default: 1)")

    args = parser.parse_args()

    # Find pseudocode src directory
    if args.pseudocode_src:
        src_dir = args.pseudocode_src
    else:
        # Auto-detect: look for annotations/<program>/pseudocode/src relative to project
        project_parent = os.path.dirname(os.path.abspath(args.project_path))
        src_dir = os.path.join(project_parent, 'annotations',
                               args.program_name, 'pseudocode', 'src')
        if not os.path.isdir(src_dir):
            # Try relative to cwd
            src_dir = os.path.join('annotations', args.program_name, 'pseudocode', 'src')

    if not os.path.isdir(src_dir):
        print("ERROR: Could not find pseudocode/src directory at %s" % src_dir)
        print("Use --pseudocode-src to specify it manually.")
        sys.exit(1)

    # Import the patch generator
    script_dir = os.path.dirname(os.path.abspath(__file__))
    sys.path.insert(0, script_dir)
    from generate_esp_to_ebp_patches import generate_patches

    # Collect target functions
    if args.target.lower() == 'all':
        targets = find_all_and_esp_asm_files(src_dir)
        print("Found %d AND ESP functions" % len(targets))
    else:
        func_addr = int(args.target, 16)
        asm_path = find_asm_file(src_dir, args.target)
        if asm_path is None:
            print("ERROR: No .asm file found for address %s" % args.target)
            sys.exit(1)
        targets = [(func_addr, asm_path)]

    if not targets:
        print("No targets found.")
        sys.exit(1)

    # Generate patches for all targets
    all_groups = []
    total_conversions = 0
    total_skipped_funcs = 0

    for func_addr, asm_path in targets:
        func_name = os.path.basename(asm_path).replace('.asm', '')
        group_name = "esp_to_ebp_0x%08x" % func_addr

        if not args.quiet or len(targets) == 1:
            print("\n" + "=" * 70)
            print("Processing: %s" % func_name)
            print("ASM: %s" % asm_path)

        try:
            patches = generate_patches(
                asm_path,
                verbose=(not args.quiet or len(targets) == 1),
            )
        except ValueError as e:
            print("  SKIP: %s" % e)
            total_skipped_funcs += 1
            continue

        # Count actual conversions (exclude the AND ESP NOP)
        num_conversions = len(patches) - 1 if patches else 0
        if num_conversions < args.min_conversions:
            if not args.quiet:
                print("  SKIP: only %d conversions (min: %d)" % (
                    num_conversions, args.min_conversions))
            total_skipped_funcs += 1
            continue

        total_conversions += num_conversions

        group = {
            'name': group_name,
            'description': 'ESP-to-EBP conversion for %s' % func_name,
            'patches': patches,
        }
        all_groups.append(group)

    print("\n" + "=" * 70)
    print("Generated patches for %d functions (%d total conversions, %d skipped)" % (
        len(all_groups), total_conversions, total_skipped_funcs))

    if not all_groups:
        print("No patches to apply.")
        sys.exit(0)

    # If neither --test nor --apply, just show the summary (dry run)
    if not args.test and not args.apply:
        print("\nDry run complete. Use --test to test or --apply to apply.")
        sys.exit(0)

    # Write combined patches to temp file
    combined = {'groups': all_groups}
    tmp_fd, tmp_path = tempfile.mkstemp(suffix='.json', prefix='esp_to_ebp_')
    try:
        with os.fdopen(tmp_fd, 'w') as f:
            json.dump(combined, f, indent=2)

        # Build fix_byte_patches.py command
        fix_script = os.path.join(script_dir, 'fix_byte_patches.py')
        cmd_args = [
            sys.executable, '-u', fix_script,
            os.path.abspath(args.project_path),
            args.project_name,
            args.program_name,
            '--patches-file', tmp_path,
        ]
        if args.test:
            cmd_args.append('--test')
        elif args.apply:
            cmd_args.append('--apply')

        print("\nRunning byte patcher...")
        import subprocess
        result = subprocess.run(cmd_args)
        sys.exit(result.returncode)

    finally:
        try:
            os.unlink(tmp_path)
        except OSError:
            pass


if __name__ == "__main__":
    main()
