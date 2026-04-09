#!/usr/bin/env python3
"""Debug script to investigate truncated function body ranges in Ghidra.

Compares func.getBody() address ranges against the actual instructions
Ghidra has for each function, to find cases where getBody() is incomplete.

Usage:
    python3 -u scripts/Python/debug_function_body.py <project_path> <project_name> <program_name> [function_name_or_addr]

Examples:
    # Check a specific function
    python3 -u scripts/Python/debug_function_body.py projects NocturneEdit nocedit.exe CCharacter_setup_FUN_00428140

    # Check all functions and report mismatches
    python3 -u scripts/Python/debug_function_body.py projects NocturneEdit nocedit.exe --all

    # Check the 17 known suspicious functions
    python3 -u scripts/Python/debug_function_body.py projects NocturneEdit nocedit.exe --suspicious
"""

import sys
import os

# Known functions with tiny address ranges but large decompiled output
SUSPICIOUS_FUNCTIONS = [
    "00428140",  # CCharacter_setup
    "00449810",  # CCurtain_setup
    "004e9180",  # CGlass_setup
    "00508a70",  # CMansionPuzzleCircle_setup
    "005ea9f0",  # CWaterActor_setup
    "00507a50",  # enterMainGameMenu
    "004864c0",  # CDraculaBride_startFreakySound
    "005e7b90",  # CVehicle_setup
    "00511840",  # checkAndCalibrateGamepad
    "005eeeb0",  # CWeather_createLightningStrike
    "0042fd20",  # CChain_setup
    "004cc820",  # CFlies_generateRandomPoint
    "004e09a0",  # calculateIrisFadeCenter
    "005e8fc0",  # CCryptVessel_setup
    "00588e00",  # CSimBox_setup
    "00402a80",  # reinitializeGraphicsSystem
]


def analyze_function(func, program_listing, func_manager):
    """Analyze a single function's body vs actual instruction coverage."""
    entry = func.getEntryPoint()
    body = func.getBody()

    # Get ranges from getBody()
    body_ranges = []
    for r in body:
        body_ranges.append((r.getMinAddress(), r.getMaxAddress()))

    body_total = 0
    for rmin, rmax in body_ranges:
        body_total += rmax.getOffset() - rmin.getOffset() + 1

    # Count actual instructions in body
    body_instr_count = 0
    for instr in program_listing.getInstructions(body, True):
        body_instr_count += 1

    # Now try to find the REAL extent of this function by following flow
    # Use Ghidra's function body directly but also check for issues
    result = {
        'name': func.getName(),
        'entry': str(entry),
        'body_ranges': [(str(rmin), str(rmax)) for rmin, rmax in body_ranges],
        'body_bytes': body_total,
        'body_instr_count': body_instr_count,
        'num_ranges': body.getNumAddressRanges(),
    }

    return result


def analyze_function_deep(func, program_listing, func_manager, reference_manager):
    """Deep analysis: follow flow from entry point to find all reachable code."""
    from ghidra.program.model.address import AddressSet

    entry = func.getEntryPoint()
    body = func.getBody()
    result = analyze_function(func, program_listing, func_manager)

    # Follow all code flow from the entry point to find reachable instructions
    # not included in func.getBody()
    visited = set()
    worklist = [entry]
    all_addrs = AddressSet()
    missing_addrs = AddressSet()

    while worklist:
        addr = worklist.pop()
        addr_offset = addr.getOffset()
        if addr_offset in visited:
            continue
        visited.add(addr_offset)

        instr = program_listing.getInstructionAt(addr)
        if instr is None:
            continue

        all_addrs.add(addr)
        if not body.contains(addr):
            missing_addrs.add(addr)

        # Follow fallthrough
        fallthrough = instr.getFallThrough()
        if fallthrough is not None:
            worklist.append(fallthrough)

        # Follow all references (jumps, branches)
        for ref in reference_manager.getReferencesFrom(addr):
            ref_type = str(ref.getReferenceType())
            if ref_type in ("UNCONDITIONAL_JUMP", "CONDITIONAL_JUMP",
                            "COMPUTED_JUMP"):
                worklist.append(ref.getToAddress())

    # Count missing instructions
    missing_instrs = []
    for instr in program_listing.getInstructions(missing_addrs, True):
        missing_instrs.append((str(instr.getAddress()), str(instr)))

    result['reachable_addrs'] = all_addrs.getNumAddresses()
    result['missing_count'] = len(missing_instrs)
    result['missing_instrs'] = missing_instrs[:20]  # First 20 for display

    # Check which functions own the missing addresses
    other_funcs = set()
    it = missing_addrs.getAddresses(True)
    count = 0
    while it.hasNext() and count < 200:
        a = it.next()
        other_func = func_manager.getFunctionContaining(a)
        if other_func is not None and str(other_func.getEntryPoint()) != str(func.getEntryPoint()):
            other_funcs.add(other_func.getName())
        count += 1

    result['owned_by_other'] = list(other_funcs)

    return result


def print_result(result, deep=False):
    """Print analysis result for one function."""
    print("=" * 80)
    print("Function: %s" % result['name'])
    print("Entry:    %s" % result['entry'])
    print("Body ranges (%d):" % result['num_ranges'])
    for rmin, rmax in result['body_ranges']:
        size = int(rmax, 16) - int(rmin, 16) + 1
        print("  [%s, %s]  (%d bytes)" % (rmin, rmax, size))
    print("Total body bytes: %d" % result['body_bytes'])
    print("Instructions in body: %d" % result['body_instr_count'])

    if deep:
        print("Reachable addresses (flow analysis): %d" % result['reachable_addrs'])
        print("Missing from body: %d instructions" % result['missing_count'])
        if result['missing_instrs']:
            print("First missing instructions:")
            for addr, instr_str in result['missing_instrs']:
                print("  %s: %s" % (addr, instr_str))
        if result['owned_by_other']:
            print("WARNING: Missing addresses belong to other functions:")
            for name in result['owned_by_other']:
                print("  %s" % name)
        elif result['missing_count'] > 0:
            print("NOTE: Missing addresses are UNOWNED (not assigned to any function)")
    print()


def main():
    import argparse

    parser = argparse.ArgumentParser(
        description="Debug truncated function body ranges in Ghidra"
    )
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    parser.add_argument("--all", action="store_true",
                        help="Check all functions and report mismatches")
    parser.add_argument("--suspicious", action="store_true", default=True,
                        help="Check known suspicious functions (default)")
    parser.add_argument("target", nargs="?", default=None,
                        help="Function name or address to check")
    args = parser.parse_args()
    # --all overrides default --suspicious
    if args.all:
        args.suspicious = False
    elif args.target:
        args.suspicious = False

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
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:
            func_manager = currentProgram.getFunctionManager()
            program_listing = currentProgram.getListing()
            reference_manager = currentProgram.getReferenceManager()

            if args.all:
                # Check all functions, report ones with potential issues
                print("\nScanning all functions for body range mismatches...\n")
                issues = []
                total = 0
                func_iter = func_manager.getFunctions(True)
                while func_iter.hasNext():
                    func = func_iter.next()
                    total += 1
                    result = analyze_function_deep(func, program_listing,
                                                   func_manager, reference_manager)
                    if result['missing_count'] > 0:
                        issues.append(result)
                    if total % 500 == 0:
                        print("  Checked %d functions, %d issues so far..." % (
                            total, len(issues)))

                print("\n" + "=" * 80)
                print("RESULTS: %d / %d functions have missing body ranges" % (
                    len(issues), total))
                print("=" * 80 + "\n")

                # Sort by missing count descending
                issues.sort(key=lambda r: -r['missing_count'])
                for result in issues[:50]:
                    print_result(result, deep=True)

                # Summary of owned-by-other vs unowned
                owned = sum(1 for r in issues if r['owned_by_other'])
                unowned = sum(1 for r in issues if not r['owned_by_other']
                              and r['missing_count'] > 0)
                print("Summary:")
                print("  Missing code owned by another function: %d" % owned)
                print("  Missing code unowned (not in any function): %d" % unowned)

            elif args.suspicious:
                # Check the known suspicious functions
                print("\nChecking %d known suspicious functions...\n" % len(
                    SUSPICIOUS_FUNCTIONS))
                for addr_str in SUSPICIOUS_FUNCTIONS:
                    addr = currentProgram.getAddressFactory().getAddress(addr_str)
                    func = func_manager.getFunctionAt(addr)
                    if func is None:
                        print("Function not found at %s" % addr_str)
                        continue
                    result = analyze_function_deep(func, program_listing,
                                                   func_manager, reference_manager)
                    print_result(result, deep=True)

            else:
                # Single function lookup
                target = args.target
                func = None

                # Try as address first
                try:
                    addr = currentProgram.getAddressFactory().getAddress(target)
                    func = func_manager.getFunctionAt(addr)
                except:
                    pass

                # Try as name
                if func is None:
                    func_iter = func_manager.getFunctions(True)
                    while func_iter.hasNext():
                        f = func_iter.next()
                        if target in f.getName():
                            func = f
                            break

                if func is None:
                    print("Function not found: %s" % target)
                    exit_code = 1
                else:
                    result = analyze_function_deep(func, program_listing,
                                                   func_manager, reference_manager)
                    print_result(result, deep=True)

        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1

    os._exit(exit_code)


if __name__ == "__main__":
    main()
