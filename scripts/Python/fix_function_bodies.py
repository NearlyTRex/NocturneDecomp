#!/usr/bin/env python3
"""
fix_function_bodies.py

Fixes truncated function bodies in the Ghidra program database.

Some functions have incomplete body ranges — Ghidra's func.getBody() only
covers a small portion of the function, while the rest of the code is
reachable via control flow but not assigned to any function. This causes:
  - Truncated .asm files (assembly only covers the tiny body range)
  - Missing globals in JSON (globals extractor iterates func.getBody())
  - False positives in wrong_global_resolution report

The fix follows control flow from the entry point, finds all reachable
instructions not assigned to any function, and extends the function body
to include them.

Usage:
    # Dry run - show what would be fixed
    python3 -u fix_function_bodies.py <project_dir> <project_name> <program_name>

    # Apply fixes
    python3 -u fix_function_bodies.py <project_dir> <project_name> <program_name> --apply

    # Check a specific function
    python3 -u fix_function_bodies.py <project_dir> <project_name> <program_name> --func 00428140

Examples:
    python3 -u scripts/Python/fix_function_bodies.py projects NocturneEdit nocedit.exe
    python3 -u scripts/Python/fix_function_bodies.py projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import argparse


def find_reachable_unowned(func, program_listing, func_manager, reference_manager):
    """Follow control flow from entry point to find reachable-but-unowned code.

    Args:
        func: The Ghidra function
        program_listing: The program's listing
        func_manager: The program's function manager
        reference_manager: The program's reference manager

    Returns:
        Tuple of (missing_addrs_list, owned_by_other_set)
        where missing_addrs_list is [(addr, instr_str), ...] of unowned instructions
        and owned_by_other_set is set of function names that own some reachable code
    """
    entry = func.getEntryPoint()
    body = func.getBody()

    visited = set()
    worklist = [entry]
    missing = []  # (address_obj, instr_str)
    owned_by_other = set()

    while worklist:
        addr = worklist.pop()
        addr_offset = addr.getOffset()
        if addr_offset in visited:
            continue
        visited.add(addr_offset)

        instr = program_listing.getInstructionAt(addr)
        if instr is None:
            continue

        if not body.contains(addr):
            # Check if another function owns this address
            other_func = func_manager.getFunctionContaining(addr)
            if other_func is not None and str(other_func.getEntryPoint()) != str(entry):
                owned_by_other.add(other_func.getName())
                # Don't follow flow into other functions
                continue
            else:
                missing.append((addr, str(instr)))

        # Follow fallthrough
        fallthrough = instr.getFallThrough()
        if fallthrough is not None:
            worklist.append(fallthrough)

        # Follow jumps/branches
        for ref in reference_manager.getReferencesFrom(addr):
            ref_type = str(ref.getReferenceType())
            if ref_type in ("UNCONDITIONAL_JUMP", "CONDITIONAL_JUMP",
                            "COMPUTED_JUMP"):
                worklist.append(ref.getToAddress())

    # Sort by address
    missing.sort(key=lambda x: x[0].getOffset())
    return missing, owned_by_other


def build_address_set(missing_addrs, program_listing):
    """Build an AddressSet covering all missing instructions.

    Args:
        missing_addrs: List of (address_obj, instr_str) tuples
        program_listing: The program's listing

    Returns:
        AddressSet covering all missing instruction ranges
    """
    from ghidra.program.model.address import AddressSet

    addr_set = AddressSet()
    for addr, _ in missing_addrs:
        instr = program_listing.getInstructionAt(addr)
        if instr is not None:
            # Add the full instruction range (addr to addr + length - 1)
            instr_end = addr.add(instr.getLength() - 1)
            addr_set.add(addr, instr_end)
    return addr_set


def scan_all_functions(func_manager, program_listing, reference_manager,
                       target_addr=None):
    """Scan functions for truncated bodies.

    Args:
        func_manager: The program's function manager
        program_listing: The program's listing
        reference_manager: The program's reference manager
        target_addr: If set, only check the function at this address

    Returns:
        List of dicts with function info and missing addresses
    """
    issues = []
    total = 0

    if target_addr is not None:
        func = func_manager.getFunctionAt(target_addr)
        if func is None:
            print("ERROR: No function at address %s" % target_addr)
            return issues
        funcs_to_check = [func]
    else:
        funcs_to_check = []
        func_iter = func_manager.getFunctions(True)
        while func_iter.hasNext():
            funcs_to_check.append(func_iter.next())

    for func in funcs_to_check:
        total += 1
        missing, owned_by_other = find_reachable_unowned(
            func, program_listing, func_manager, reference_manager)

        if missing:
            body = func.getBody()
            body_bytes = 0
            for r in body:
                body_bytes += r.getMaxAddress().getOffset() - r.getMinAddress().getOffset() + 1

            issues.append({
                'func': func,
                'name': func.getName(),
                'entry': str(func.getEntryPoint()),
                'body_bytes': body_bytes,
                'body_ranges': body.getNumAddressRanges(),
                'missing': missing,
                'missing_count': len(missing),
                'owned_by_other': owned_by_other,
            })

        if target_addr is None and total % 500 == 0:
            print("  Scanned %d functions, %d with issues..." % (
                total, len(issues)))

    if target_addr is None:
        print("  Scanned %d functions total, %d with issues" % (
            total, len(issues)))

    return issues


def print_issue(issue, verbose=False):
    """Print a single issue."""
    print("  %s @ %s" % (issue['name'], issue['entry']))
    print("    Body: %d bytes in %d range(s), missing %d instructions" % (
        issue['body_bytes'], issue['body_ranges'], issue['missing_count']))
    if issue['owned_by_other']:
        print("    SKIP: reachable code belongs to: %s" % (
            ', '.join(sorted(issue['owned_by_other']))))
    elif verbose and issue['missing']:
        # Show first/last missing address
        first = issue['missing'][0]
        last = issue['missing'][-1]
        print("    Missing range: %s .. %s" % (first[0], last[0]))
        print("    First: %s: %s" % (first[0], first[1]))


def main():
    parser = argparse.ArgumentParser(
        description="Fix truncated function bodies in Ghidra"
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--apply", action="store_true",
                        help="Apply fixes (default is dry run)")
    parser.add_argument("--func", default=None,
                        help="Only check/fix a specific function (by address)")
    parser.add_argument("--verbose", "-v", action="store_true",
                        help="Show detailed info for each function")
    args = parser.parse_args()

    # Start PyGhidra
    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()

    project_path = os.path.abspath(args.project_path)
    print("Opening project: %s/%s" % (project_path, args.project_name))
    project = pyghidra.open_project(project_path, args.project_name)

    exit_code = 0
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as prog:
            func_manager = prog.getFunctionManager()
            program_listing = prog.getListing()
            reference_manager = prog.getReferenceManager()

            # Resolve target address if specified
            target_addr = None
            if args.func:
                target_addr = prog.getAddressFactory().getAddress(args.func)

            # Scan for issues
            mode_str = "function %s" % args.func if args.func else "all functions"
            print("\nScanning %s for truncated bodies...\n" % mode_str)
            issues = scan_all_functions(
                func_manager, program_listing, reference_manager,
                target_addr=target_addr)

            if not issues:
                print("No truncated function bodies found.")
                project.close()
                os._exit(0)

            # Separate fixable (unowned) from unfixable (owned by other)
            fixable = [i for i in issues if not i['owned_by_other']]
            thunks = [i for i in issues if i['owned_by_other']]

            # Report
            print("=" * 70)
            print("TRUNCATED FUNCTION BODIES")
            print("=" * 70)
            print()
            print("Total functions with issues: %d" % len(issues))
            print("  Fixable (unowned code):    %d" % len(fixable))
            print("  Thunks (code in other fn): %d" % len(thunks))
            print()

            total_missing = sum(i['missing_count'] for i in fixable)
            print("Total missing instructions to add: %d" % total_missing)
            print()

            if fixable:
                print("-" * 70)
                print("FIXABLE FUNCTIONS (unowned code)")
                print("-" * 70)
                for issue in sorted(fixable, key=lambda i: -i['missing_count']):
                    print_issue(issue, verbose=args.verbose)
                print()

            if thunks:
                print("-" * 70)
                print("THUNKS (code belongs to another function, skipped)")
                print("-" * 70)
                for issue in sorted(thunks, key=lambda i: -i['missing_count']):
                    print_issue(issue, verbose=args.verbose)
                print()

            # Apply fixes
            if args.apply and fixable:
                print("=" * 70)
                print("APPLYING FIXES")
                print("=" * 70)
                print()

                tx_id = prog.startTransaction("Fix truncated function bodies")
                try:
                    fixed = 0
                    failed = 0
                    for issue in fixable:
                        func = issue['func']
                        missing = issue['missing']
                        try:
                            new_addrs = build_address_set(missing, program_listing)
                            old_body = func.getBody()
                            new_body = old_body.union(new_addrs)
                            func.setBody(new_body)
                            fixed += 1

                            # Verify
                            verify_body = func.getBody()
                            new_ranges = verify_body.getNumAddressRanges()
                            new_bytes = 0
                            for r in verify_body:
                                new_bytes += r.getMaxAddress().getOffset() - r.getMinAddress().getOffset() + 1
                            print("  Fixed: %s  (%d -> %d bytes, %d ranges)" % (
                                issue['name'], issue['body_bytes'],
                                new_bytes, new_ranges))

                        except Exception as e:
                            failed += 1
                            print("  FAILED: %s: %s" % (issue['name'], e))

                    prog.endTransaction(tx_id, True)
                    print()
                    print("Fixed %d functions, %d failed" % (fixed, failed))

                    # Save to program database
                    if fixed > 0:
                        prog.save("Fix truncated function bodies", None)
                        print("Changes saved to program database.")

                except Exception as e:
                    prog.endTransaction(tx_id, False)
                    print("ERROR during apply, rolled back: %s" % e)
                    import traceback
                    traceback.print_exc()
                    exit_code = 1

            elif not args.apply and fixable:
                print("Dry run complete. Use --apply to fix %d functions." % len(fixable))

        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
