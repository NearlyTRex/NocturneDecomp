#!/usr/bin/env python3
"""
fix_redundant_symbols.py

Removes redundant DAT_ symbol labels that fall inside existing named globals
(arrays, structs, etc.) in the Ghidra program database.

When code references an address inside an array or struct (e.g., g_HeroActors[1]
at g_HeroActors + 4), Ghidra auto-creates a DAT_ label at that address. These
redundant labels can confuse the decompiler, causing it to resolve accesses
through the DAT_ symbol instead of the parent array/struct.

Safety criteria for removal:
  1. Symbol must be a DAT_XXXXXXXX auto-generated label
  2. The address must fall within a named global that has a properly applied
     data type (array, struct, or known-size type) — not estimated
  3. The parent global must fully contain the DAT_ address (addr < parent_end)
  4. The symbol must not have any outgoing references that could be lost

Usage:
    # Dry run - show what would be removed
    python3 -u fix_redundant_symbols.py <project_dir> <project_name> <program_name>

    # Apply removals
    python3 -u fix_redundant_symbols.py <project_dir> <project_name> <program_name> --apply

    # Limit scope to a specific address range
    python3 -u fix_redundant_symbols.py <project_dir> <project_name> <program_name> --range 02d00000-03000000

Examples:
    python3 -u fix_redundant_symbols.py ./projects NocturneEdit nocedit.exe
    python3 -u fix_redundant_symbols.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import argparse
import re


def build_named_global_map(program):
    """Build a sorted map of named (non-DAT_) globals with known data types.

    Only includes globals where Ghidra has an applied data type with a known
    size, so we can safely determine containment.

    Returns:
        List of (start_addr, end_addr, name, data_type_name) sorted by start_addr
    """
    listing = program.getListing()
    symbol_table = program.getSymbolTable()
    intervals = []

    for data in listing.getDefinedData(True):
        if data is None:
            continue

        addr = data.getAddress()
        data_type = data.getDataType()
        dt_length = data_type.getLength()

        if dt_length <= 0:
            continue

        symbol = symbol_table.getPrimarySymbol(addr)
        if symbol is None:
            continue

        name = symbol.getName()

        # Skip DAT_ symbols — we only want named globals as parents
        if name.startswith("DAT_"):
            continue

        # Skip function-related symbols
        if (name.startswith("FUN_") or name.startswith("LAB_") or
                name.startswith("LOOP_") or name.startswith("SWITCH_")):
            continue

        addr_long = addr.getOffset()
        dt_name = data_type.getName()

        intervals.append((addr_long, addr_long + dt_length, name, dt_name))

    intervals.sort()
    print("Built named global map: %d entries" % len(intervals))
    return intervals


def find_containing_global(addr_long, global_map):
    """Binary search for a named global that contains the given address.

    Returns (name, data_type_name, start_addr, end_addr) or None.
    """
    import bisect
    starts = [iv[0] for iv in global_map]
    idx = bisect.bisect_right(starts, addr_long) - 1
    if idx < 0:
        return None
    start, end, name, dt_name = global_map[idx]
    if start < addr_long < end:  # Strictly inside (not at start)
        return (name, dt_name, start, end)
    return None


def find_redundant_symbols(program, global_map, addr_range=None):
    """Find DAT_ symbols that are redundant (inside named globals).

    Args:
        program: Ghidra program
        global_map: Sorted interval map from build_named_global_map()
        addr_range: Optional (start, end) tuple to limit scope

    Returns:
        List of dicts with symbol info and containing global details
    """
    from ghidra.program.model.symbol import SymbolType

    symbol_table = program.getSymbolTable()
    reference_manager = program.getReferenceManager()
    redundant = []

    # Iterate all symbols
    symbol_iter = symbol_table.getAllSymbols(True)
    for symbol in symbol_iter:
        name = symbol.getName()

        # Only consider DAT_ symbols
        if not name.startswith("DAT_"):
            continue

        # Must be a label type (not function, namespace, etc.)
        if symbol.getSymbolType() != SymbolType.LABEL:
            continue

        addr = symbol.getAddress()
        addr_long = addr.getOffset()

        # Optional address range filter
        if addr_range:
            if addr_long < addr_range[0] or addr_long >= addr_range[1]:
                continue

        # Check if this address falls inside a named global
        containing = find_containing_global(addr_long, global_map)
        if containing is None:
            continue

        parent_name, parent_type, parent_start, parent_end = containing
        offset = addr_long - parent_start

        # Safety check: does this symbol have outgoing references FROM it?
        # (References TO this address are fine — they'll resolve to the parent)
        refs_from = list(reference_manager.getReferencesFrom(addr))
        has_outgoing = len(refs_from) > 0

        # Count references TO this address (for reporting)
        refs_to = reference_manager.getReferenceCountTo(addr)

        redundant.append({
            'symbol': symbol,
            'name': name,
            'address': str(addr),
            'address_long': addr_long,
            'parent_name': parent_name,
            'parent_type': parent_type,
            'parent_start': '0x%08x' % parent_start,
            'offset': offset,
            'refs_to': refs_to,
            'has_outgoing_refs': has_outgoing,
            'safe_to_remove': not has_outgoing,
        })

    return redundant


def remove_redundant_symbols(program, redundant_list, dry_run=True):
    """Remove redundant DAT_ symbols.

    Only removes symbols marked as safe_to_remove.

    Args:
        program: Ghidra program
        redundant_list: List from find_redundant_symbols()
        dry_run: If True, don't actually remove anything

    Returns:
        Dict with statistics
    """
    stats = {
        'total_found': len(redundant_list),
        'safe_count': 0,
        'unsafe_count': 0,
        'removed': 0,
        'skipped_outgoing_refs': 0,
    }

    for entry in redundant_list:
        if entry['safe_to_remove']:
            stats['safe_count'] += 1
            if not dry_run:
                symbol = entry['symbol']
                symbol.delete()
                stats['removed'] += 1
        else:
            stats['unsafe_count'] += 1
            stats['skipped_outgoing_refs'] += 1

    return stats


def print_report(redundant_list, stats, dry_run):
    """Print a human-readable report."""
    print()
    print("=" * 70)
    print("REDUNDANT SYMBOL ANALYSIS")
    print("=" * 70)
    print("Total DAT_ symbols inside named globals: %d" % stats['total_found'])
    print("  Safe to remove (no outgoing refs):     %d" % stats['safe_count'])
    print("  Unsafe (have outgoing refs):           %d" % stats['unsafe_count'])
    if not dry_run:
        print("  Actually removed:                     %d" % stats['removed'])
    print()

    # Group by parent global
    by_parent = {}
    for entry in redundant_list:
        parent = entry['parent_name']
        by_parent.setdefault(parent, []).append(entry)

    # Show top parents by count
    sorted_parents = sorted(by_parent.items(), key=lambda x: -len(x[1]))

    print("Top globals with redundant internal DAT_ symbols:")
    print("-" * 70)
    for parent_name, entries in sorted_parents[:30]:
        safe = sum(1 for e in entries if e['safe_to_remove'])
        unsafe = sum(1 for e in entries if not e['safe_to_remove'])
        parent_type = entries[0]['parent_type']
        status = ""
        if unsafe > 0:
            status = " (%d UNSAFE)" % unsafe
        print("  %-40s %3d symbols  [%s]%s" % (
            parent_name, len(entries), parent_type, status))

    if len(sorted_parents) > 30:
        remaining = sum(len(v) for _, v in sorted_parents[30:])
        print("  ... and %d more parents with %d symbols" % (
            len(sorted_parents) - 30, remaining))

    # Show details for unsafe ones
    unsafe = [e for e in redundant_list if not e['safe_to_remove']]
    if unsafe:
        print()
        print("UNSAFE symbols (have outgoing references — NOT removed):")
        print("-" * 70)
        for entry in unsafe[:20]:
            print("  %s at %s (inside %s +0x%x, %d outgoing refs)" % (
                entry['name'], entry['address'],
                entry['parent_name'], entry['offset'],
                len(list(entry['symbol'].getReferences()))))
        if len(unsafe) > 20:
            print("  ... and %d more" % (len(unsafe) - 20))

    print()
    if dry_run:
        print("DRY RUN — no changes made. Use --apply to remove safe symbols.")
    else:
        print("Removed %d redundant symbols." % stats['removed'])
    print("=" * 70)


def parse_addr_range(range_str):
    """Parse an address range string like '02d00000-03000000'."""
    parts = range_str.split('-')
    if len(parts) != 2:
        raise ValueError("Range must be in format START-END (hex)")
    return (int(parts[0], 16), int(parts[1], 16))


def main():
    parser = argparse.ArgumentParser(
        description="Remove redundant DAT_ symbols inside named globals")
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Actually remove symbols (default is dry run)")
    parser.add_argument("--range",
                        help="Limit to address range (hex, e.g. 02d00000-03000000)")
    parser.add_argument("--verbose", action="store_true",
                        help="Show each symbol being processed")

    args = parser.parse_args()
    dry_run = not args.apply

    addr_range = None
    if args.range:
        try:
            addr_range = parse_addr_range(args.range)
        except ValueError as e:
            print("ERROR: %s" % e)
            sys.exit(1)

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        print("Install the PyGhidra package from your Ghidra installation.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)

    print("=" * 70)
    if dry_run:
        print("DRY RUN MODE — no changes will be made")
    else:
        print("APPLY MODE — redundant symbols will be removed")
    if addr_range:
        print("Address range: 0x%08x - 0x%08x" % addr_range)
    print("=" * 70)

    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:

            if not dry_run:
                tx_id = currentProgram.startTransaction("Remove redundant DAT_ symbols")

            try:
                # Build the named global map
                print("Building named global map...")
                global_map = build_named_global_map(currentProgram)

                # Find redundant symbols
                print("Scanning for redundant DAT_ symbols...")
                redundant = find_redundant_symbols(
                    currentProgram, global_map, addr_range)

                if args.verbose:
                    for entry in redundant:
                        safe = "SAFE" if entry['safe_to_remove'] else "UNSAFE"
                        print("  [%s] %s at %s -> inside %s +0x%x (refs_to=%d)" % (
                            safe, entry['name'], entry['address'],
                            entry['parent_name'], entry['offset'],
                            entry['refs_to']))

                # Remove safe ones
                stats = remove_redundant_symbols(
                    currentProgram, redundant, dry_run)

                # Print report
                print_report(redundant, stats, dry_run)

            finally:
                if not dry_run:
                    if stats['removed'] > 0:
                        currentProgram.endTransaction(tx_id, True)
                        currentProgram.save("Removed %d redundant DAT_ symbols" % stats['removed'], None)
                        print("Changes saved to program database.")
                    else:
                        currentProgram.endTransaction(tx_id, False)
                        print("No changes — transaction rolled back.")

        project.close()

    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        exit_code = 1

    sys.exit(exit_code)


if __name__ == "__main__":
    main()
