#!/usr/bin/env python3
"""
Test decompilation scenarios to evaluate Ghidra patches for issues.

This script tests multiple function categories:
- BROKEN: Functions with known BADSPACEBASE issues (EBP+stack align, calls, variadic)
- PARTIALLY BROKEN: Functions with other issues (variadic errors)
- CONTROL: Clean functions that should not regress

================================================================================
PREREQUISITES
================================================================================

1. Ghidra with modifications: The user will compile and install new Ghidra
   builds. Build logs are in ~/Logs/.

2. PyGhidra: Must be installed and configured to use the modified Ghidra
   at ~/Tools/Ghidra.

3. NocturneEdit project: The Ghidra project at projects/NocturneEdit must exist.

================================================================================
USAGE
================================================================================

Run all scenarios:
    cd ~/Repositories/NocturneDecomp
    python3 scripts/Python/test_decompile_scenarios.py --scenarios

Run all scenarios with output saved:
    python3 scripts/Python/test_decompile_scenarios.py --scenarios --output-dir /tmp/scenarios

Run a single function by address:
    python3 scripts/Python/test_decompile_scenarios.py 0x40ac80

NOTE: There is NO --scenario (singular) flag to filter by scenario name. The
script either runs ALL scenarios with --scenarios, or runs a single function
when you pass an address directly.

================================================================================
OUTPUT LOCATIONS
================================================================================

When using --output-dir:
    - Decompiled C code: <output_dir>/<scenario>_<func>_<addr>.c
    - Results JSON:      <output_dir>/results.json

================================================================================
SCENARIO ADDRESSES (quick reference)
================================================================================

EBP + Stack Alignment (scenario1):
    - CLodMesh_findClosestPointOnMesh:     0x51a300
    - CLodMesh_computePointToFaceDistance: 0x51a400
    - CLodMesh_buildSpatialGrid:           0x516620

EBP + Call Anchor (scenario2):
    - superopt_unnamed_1:                  0x5c8b50
    - EdgeListCheckPlusFreesLarge:         0x5c84c0

Stack Probe Before Frame (scenario3):
    - visualizeTextureAtlas:               0x447f20

Variadic Issues (scenario6):
    - CDemonActor_doCheckForInvalidPointers: 0x40ac80

See TEST_SCENARIOS list below for complete function list.

================================================================================
SUPPORTED DECOMPILER FEATURES
================================================================================

This test script automatically loads and registers all 4 decompiler features:

1. CALLFIXUPS
   Replace calls to specific functions with custom pcode at decompile time.
   - Global only: annotations/<program>/pseudocode/callfixups.json
   - See callfixups.py for JSON format documentation.

2. PROTO OVERRIDES
   Fix variadic argument detection by specifying exact call site signatures.
   - Global: annotations/<program>/pseudocode/proto_overrides.json
   - Per-function: In function JSON files under "proto_overrides" key
   - See proto.py for JSON format documentation.

3. PCODE OVERRIDES
   Replace pcode for specific instructions within a function.
   - Per-function only: In function JSON files under "pcode_overrides" key
   - See transforms.py for JSON format documentation.

4. DECOMPILER FIXES
   Enable experimental decompiler behavior on specific functions.
   - Global: annotations/<program>/pseudocode/decompiler_fixes.json
   - Per-function: In function JSON files under "decompiler_fixes" key
   - Available fix: DFIX_MULTIEQUAL_STACK_TRACE (traces MULTIEQUAL inputs for
     precise stack offsets, helps resolve BADSPACEBASE issues)
   - See decompiler_fixes.py for JSON format documentation.

================================================================================
RELATED PATHS
================================================================================

Native decompiler library:
    ~/Tools/Ghidra/Ghidra/Features/Decompiler/os/linux_x86_64/decompile

Ghidra source (dev-testing branch):
    ~/Repositories/Ghidra/Ghidra/Features/Decompiler/src/decompile/cpp/

Key C++ files:
    - decompiler_fixes.hh/cc: Per-function fix registry
    - multiequal_trace.hh/cc: MULTIEQUAL stack offset tracing
    - decomp_dbg.hh: Debug logging macros (compile-time)
    - heritage.cc: Where fixes are applied during analysis

Build logs:
    ~/Logs/
"""

import os
import sys
import argparse
import re
import json
import traceback
from pathlib import Path

# Test scenarios for validating decompilation fixes
# Each scenario has: (name, description, [(address, func_name), ...])
TEST_SCENARIOS = [
    # ============================================================================
    # BROKEN SCENARIOS - Functions with known BADSPACEBASE issues
    # ============================================================================
    ("scenario1_ebp_stack_align", "EBP FRAME + STACK ALIGNMENT (AND ESP)", [
        # Functions with "PUSH EBP; MOV EBP, ESP" followed by "AND ESP, mask"
        # Stack alignment makes ESP uncertain, causing BADSPACEBASE
        (0x0051a300, "CLodMesh_findClosestPointOnMesh"),
        (0x0051a400, "CLodMesh_computePointToFaceDistance"),
        (0x00516620, "CLodMesh_buildSpatialGrid"),
        (0x0051cdf0, "CLodMesh_eqLoad"),
        (0x00519b50, "CLodMesh_computeSamplePointDistances"),
    ]),
    ("scenario2_ebp_call_anchor", "EBP FRAME + CALL ESP ANCHOR", [
        # EBP frames where ESP becomes uncertain after calls
        # Heritage MULTIEQUAL fix resolves these by tracking ESP through phi nodes
        (0x005c8b50, "superopt_unnamed_1"),
        (0x005c84c0, "EdgeListCheckPlusFreesLarge"),
        (0x005c9500, "superopt_unnamed_2"),
        (0x005c8e70, "superopt_unnamed_3"),
    ]),
    ("scenario3_stack_probe_before_frame", "STACK PROBE BEFORE FRAME SETUP", [
        # Functions that call crt_stack.c_stack_probe BEFORE establishing EBP frame
        # ESP is already unknown when MOV EBP,ESP executes
        # Different from scenario2 - heritage MULTIEQUAL fix cannot help
        (0x00447f20, "visualizeTextureAtlas"),
    ]),
    ("scenario4_ebp_variadic", "EBP FRAME + VARIADIC CALLS", [
        # EBP frame with variadic function calls (printf, sprintf, etc.)
        (0x0046e090, "fixupCramUV"),
    ]),
    ("scenario5_non_ebp_badspacebase", "NON-EBP FRAME + BADSPACEBASE", [
        # Pure ESP-relative functions without EBP frame
        # Harder to fix - no stable base register
        (0x0060239a, "entry"),
        (0x00434870, "rotateBitmap"),
        (0x004331f0, "loadEdgeListFile"),
        (0x00431870, "readBitmapFile"),
        (0x004319b0, "applyActPalette"),
    ]),

    # ============================================================================
    # PARTIALLY BROKEN - EBP frame, no BADSPACEBASE, but has other issues
    # ============================================================================
    ("scenario6_ebp_variadic_errors", "EBP FRAME + VARIADIC ERRORS (no BADSPACEBASE)", [
        # EBP frame, no BADSPACEBASE suspect, but has variadic function issues
        # Output is broken due to variadic call mishandling, not spacebase
        (0x0040ac80, "CDemonActor_doCheckForInvalidPointers"),
    ]),

    # ============================================================================
    # CONTROL SCENARIOS - Clean functions for comparison baseline
    # ============================================================================
    ("control_clean_complex", "CONTROL: Clean complex functions (no suspects)", [
        # High complexity functions with zero suspects - should decompile cleanly
        # Use these to verify patch doesn't regress working functions
        (0x005f3980, "getKeyName"),              # complexity=347, clean
        (0x00532200, "reorderShortBlockSamples"), # complexity=141, clean
        (0x00553190, "setupColoredSoftwareEdge"), # complexity=117, clean
        (0x0051c350, "crc32UpdateBuffer"),        # complexity=73, clean
    ]),
    ("control_clean_simple", "CONTROL: Clean simple functions", [
        # Simple functions with zero suspects
        (0x004355c0, "flipEdgeArrayHorizontally"), # complexity=48, clean
        (0x005164d0, "CLodMesh_countUnprocessedFaces"), # complexity=19, clean
    ]),
]

# Add library path
this_dir = os.path.dirname(os.path.abspath(__file__))
if this_dir not in sys.path:
    sys.path.insert(0, this_dir)

# Default paths
DEFAULT_PROJECT_PATH = Path(__file__).parent.parent.parent / "projects"
DEFAULT_PROJECT_NAME = "NocturneEdit"
DEFAULT_PROGRAM_NAME = "nocedit.exe"
DEFAULT_PSEUDOCODE_DIR = Path(__file__).parent.parent.parent / "annotations/nocedit.exe/pseudocode"


def find_baseline_file(address_str, func_name=None):
    """Find existing baseline .cpp or .c file for a function address.

    Args:
        address_str: Function address (e.g., "0x004319b0")
        func_name: Optional function name to verify match

    Returns:
        Path to baseline file, or None if not found
    """
    # Normalize address
    addr = address_str.lower().replace('0x', '')

    # Search for matching file (.cpp first, then .c)
    candidates = []
    for cpp_file in DEFAULT_PSEUDOCODE_DIR.rglob(f"*{addr}.cpp"):
        candidates.append(cpp_file)
    for c_file in DEFAULT_PSEUDOCODE_DIR.rglob(f"*{addr}.c"):
        candidates.append(c_file)

    if not candidates:
        return None

    # If function name provided, verify it appears in the filename
    if func_name:
        for candidate in candidates:
            # Check if function name (or a reasonable prefix) appears in filename
            # Handle cases like "CLodMesh_findClosestPointOnMesh" matching filename
            filename = candidate.name.lower()
            func_lower = func_name.lower()

            # Try exact match first
            if func_lower in filename:
                return candidate

            # Try matching the main part of the function name (after class prefix)
            # e.g., "doCheckForInvalidPointers" from "CDemonActor_doCheckForInvalidPointers"
            parts = func_name.split('_')
            if len(parts) > 1:
                # Try the last significant part
                for part in parts[1:]:
                    if len(part) > 4 and part.lower() in filename:
                        return candidate

        # No match with function name - this might be a renamed function
        # Return None to avoid false matches like applyActPalette -> applyColorPalette
        return None

    # No function name provided, return first candidate
    return candidates[0] if candidates else None


def analyze_decompilation(code):
    """Analyze decompiled code for issues."""
    issues = {
        'badspacebase': [],
        'in_stack': [],
        'unaff_': [],
        'extraout_': [],
        'warnings': [],
        'variadic_missing': False,
    }

    lines = code.split('\n')
    for i, line in enumerate(lines, 1):
        # Check for BADSPACEBASE
        if 'BADSPACEBASE' in line:
            issues['badspacebase'].append((i, line.strip()))

        # Check for in_stack_ variables (lost stack references)
        matches = re.findall(r'in_stack_[A-Fa-f0-9]+', line)
        for m in matches:
            issues['in_stack'].append((i, m, line.strip()))

        # Check for unaff_ variables (unaffected registers - often wrong)
        matches = re.findall(r'unaff_[A-Z]+', line)
        for m in matches:
            issues['unaff_'].append((i, m, line.strip()))

        # Check for extraout_ variables
        matches = re.findall(r'extraout_[A-Z]+', line)
        for m in matches:
            issues['extraout_'].append((i, m, line.strip()))

        # Check for Ghidra warnings
        if line.strip().startswith('/* WARNING:'):
            issues['warnings'].append((i, line.strip()))

    # Check for variadic function calls without arguments
    # Pattern: printf(), sprintf(), etc. with just format string
    variadic_pattern = re.compile(r'\b(printf|sprintf|fprintf|snprintf|sscanf|fscanf)\s*\([^,)]+\)')
    if variadic_pattern.search(code):
        # This might be missing arguments
        issues['variadic_missing'] = True
    return issues


def compare_decompilations(baseline_code, new_code):
    """Compare baseline and new decompilations."""

    # Setup comparison
    baseline_issues = analyze_decompilation(baseline_code)
    new_issues = analyze_decompilation(new_code)
    comparison = {
        'baseline_issues': baseline_issues,
        'new_issues': new_issues,
        'improvements': [],
        'regressions': [],
    }

    # Compare issue counts
    for issue_type in ['badspacebase', 'in_stack', 'unaff_', 'extraout_', 'warnings']:
        baseline_count = len(baseline_issues[issue_type])
        new_count = len(new_issues[issue_type])
        if new_count < baseline_count:
            comparison['improvements'].append(f"{issue_type}: {baseline_count} -> {new_count} (-{baseline_count - new_count})")
        elif new_count > baseline_count:
            comparison['regressions'].append(f"{issue_type}: {baseline_count} -> {new_count} (+{new_count - baseline_count})")
    return comparison


def print_issues(issues, prefix=""):
    """Print issues in a readable format."""
    total = 0
    if issues['badspacebase']:
        print(f"{prefix}BADSPACEBASE occurrences: {len(issues['badspacebase'])}")
        for line_no, line in issues['badspacebase'][:5]:  # Show first 5
            print(f"{prefix}  Line {line_no}: {line[:80]}...")
        total += len(issues['badspacebase'])
    if issues['in_stack']:
        print(f"{prefix}in_stack_ variables: {len(issues['in_stack'])}")
        for line_no, var, line in issues['in_stack'][:5]:
            print(f"{prefix}  Line {line_no}: {var}")
        total += len(issues['in_stack'])
    if issues['unaff_']:
        print(f"{prefix}unaff_ variables: {len(issues['unaff_'])}")
        for line_no, var, line in issues['unaff_'][:5]:
            print(f"{prefix}  Line {line_no}: {var}")
        total += len(issues['unaff_'])
    if issues['extraout_']:
        print(f"{prefix}extraout_ variables: {len(issues['extraout_'])}")
        total += len(issues['extraout_'])
    if issues['warnings']:
        print(f"{prefix}Ghidra warnings: {len(issues['warnings'])}")
        for line_no, warning in issues['warnings'][:3]:
            print(f"{prefix}  Line {line_no}: {warning[:60]}...")
        total += len(issues['warnings'])
    if issues['variadic_missing']:
        print(f"{prefix}Possible missing variadic arguments detected")
    return total


def decompile_function(currentProgram, address_str, quiet=False):
    """Decompile function at given address.

    Automatically registers any preloaded decompiler_fixes with the interface.
    """
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor
    from ghidra_annotations.annotations.pseudocode.decompiler_fixes import (
        register_decompiler_fixes, clear_decompiler_fixes
    )

    # Parse address
    if isinstance(address_str, int):
        addr_val = address_str
    else:
        addr_val = int(address_str, 16) if address_str.startswith('0x') else int(address_str, 16)
    addr_factory = currentProgram.getAddressFactory()
    addr = addr_factory.getDefaultAddressSpace().getAddress(addr_val)

    # Get function at address
    func_mgr = currentProgram.getFunctionManager()
    func = func_mgr.getFunctionAt(addr)
    if func is None:

        # Try to find function containing this address
        func = func_mgr.getFunctionContaining(addr)

    # No function found
    if func is None:
        if not quiet:
            print(f"ERROR: No function found at address {address_str}")
        return None, None

    # Print function info
    if not quiet:
        print(f"Function: {func.getName()}")
        print(f"Address: {func.getEntryPoint()}")
        print(f"Size: {func.getBody().getNumAddresses()} bytes")

    # Decompile
    decompiler = DecompInterface()
    decompiler.openProgram(currentProgram)

    # Register any preloaded decompiler fixes
    register_decompiler_fixes(decompiler)

    if not quiet:
        print("Decompiling...")
    result = decompiler.decompileFunction(func, 60, ConsoleTaskMonitor())
    if not result.decompileCompleted():
        if not quiet:
            print("ERROR: Decompilation failed or timed out")
        clear_decompiler_fixes(decompiler)
        decompiler.dispose()
        return func, None
    code = result.getDecompiledFunction().getC()
    clear_decompiler_fixes(decompiler)
    decompiler.dispose()
    return func, code


def run_scenarios(currentProgram, output_dir=None, scenarios=None):
    """Run all test scenarios and collect results."""

    # Get scenario
    if scenarios is None:
        scenarios = TEST_SCENARIOS

    # Make output dir
    if output_dir:
        output_dir = Path(output_dir)
        output_dir.mkdir(parents=True, exist_ok=True)

    # Create result
    results = {
        'summary': {},
        'scenarios': {},
    }

    # Run scenarios
    total_functions = 0
    total_badspacebase = 0
    total_in_stack = 0
    total_badspacebase_delta = 0
    total_in_stack_delta = 0
    functions_with_baseline = 0
    for scenario_name, scenario_desc, functions in scenarios:
        print(f"\n{'='*70}")
        print(f"SCENARIO: {scenario_desc}")
        print(f"{'='*70}")
        scenario_results = []
        scenario_badspacebase = 0
        scenario_in_stack = 0
        for func_entry in functions:

            # Support both (addr, name) and (addr, name, flags) tuple formats
            if len(func_entry) == 3:
                addr, func_name, _flags = func_entry  # flags reserved for future use
            else:
                addr, func_name = func_entry
            print(f"\n  [{func_name}] @ 0x{addr:08x}")

            # Decompile
            func, code = decompile_function(currentProgram, addr, quiet=True)
            if code is None:
                print(f"    ERROR: Decompilation failed")
                scenario_results.append({
                    'address': f"0x{addr:08x}",
                    'name': func_name,
                    'error': True,
                })
                continue

            # Analyze new decompilation
            issues = analyze_decompilation(code)
            badspacebase_count = len(issues['badspacebase'])
            in_stack_count = len(issues['in_stack'])
            scenario_badspacebase += badspacebase_count
            scenario_in_stack += in_stack_count

            # Compare with baseline if available
            baseline_path = find_baseline_file(f"0x{addr:08x}", func_name)
            baseline_comparison = None
            if baseline_path and baseline_path.exists():
                with open(baseline_path, 'r') as f:
                    baseline_code = f.read()
                baseline_issues = analyze_decompilation(baseline_code)
                baseline_comparison = {
                    'baseline_file': str(baseline_path),
                    'baseline_badspacebase': len(baseline_issues['badspacebase']),
                    'baseline_in_stack': len(baseline_issues['in_stack']),
                    'baseline_warnings': len(baseline_issues['warnings']),
                    'badspacebase_delta': badspacebase_count - len(baseline_issues['badspacebase']),
                    'in_stack_delta': in_stack_count - len(baseline_issues['in_stack']),
                }

            # Build status string
            status = "OK" if badspacebase_count == 0 else f"BADSPACEBASE({badspacebase_count})"
            if in_stack_count > 0:
                status += f" in_stack({in_stack_count})"

            # Show baseline comparison
            if baseline_comparison:
                bs_delta = baseline_comparison['badspacebase_delta']
                is_delta = baseline_comparison['in_stack_delta']
                if bs_delta != 0 or is_delta != 0:
                    delta_parts = []
                    if bs_delta > 0:
                        delta_parts.append(f"BADSPACEBASE +{bs_delta}")
                    elif bs_delta < 0:
                        delta_parts.append(f"BADSPACEBASE {bs_delta}")
                    if is_delta > 0:
                        delta_parts.append(f"in_stack +{is_delta}")
                    elif is_delta < 0:
                        delta_parts.append(f"in_stack {is_delta}")
                    status += f" [vs baseline: {', '.join(delta_parts)}]"
                else:
                    status += " [no change vs baseline]"
            print(f"    {status}")
            result = {
                'address': f"0x{addr:08x}",
                'name': func_name,
                'badspacebase': badspacebase_count,
                'in_stack': in_stack_count,
                'warnings': len(issues['warnings']),
            }
            if baseline_comparison:
                result['baseline'] = baseline_comparison
                functions_with_baseline += 1
                total_badspacebase_delta += baseline_comparison['badspacebase_delta']
                total_in_stack_delta += baseline_comparison['in_stack_delta']
            scenario_results.append(result)

            # Save output if requested
            if output_dir:
                out_file = output_dir / f"{scenario_name}_{func_name}_0x{addr:08x}.c"
                with open(out_file, 'w') as f:
                    f.write(code)

        # Add scenario result
        results['scenarios'][scenario_name] = {
            'description': scenario_desc,
            'functions': scenario_results,
            'total_badspacebase': scenario_badspacebase,
            'total_in_stack': scenario_in_stack,
        }
        total_functions += len(functions)
        total_badspacebase += scenario_badspacebase
        total_in_stack += scenario_in_stack
        print(f"\n  Scenario totals: BADSPACEBASE={scenario_badspacebase}, in_stack={scenario_in_stack}")

    # Summary
    results['summary'] = {
        'total_functions': total_functions,
        'total_badspacebase': total_badspacebase,
        'total_in_stack': total_in_stack,
        'functions_with_baseline': functions_with_baseline,
        'total_badspacebase_delta': total_badspacebase_delta,
        'total_in_stack_delta': total_in_stack_delta,
    }

    # Overall summary
    print(f"\n{'='*70}")
    print("OVERALL SUMMARY")
    print(f"{'='*70}")
    print(f"Total functions tested: {total_functions}")
    print(f"Total BADSPACEBASE occurrences: {total_badspacebase}")
    print(f"Total in_stack_ variables: {total_in_stack}")
    if functions_with_baseline > 0:
        print(f"\nBASELINE COMPARISON ({functions_with_baseline} functions with baselines):")
        if total_badspacebase_delta > 0:
            print(f"  BADSPACEBASE: +{total_badspacebase_delta} (REGRESSION)")
        elif total_badspacebase_delta < 0:
            print(f"  BADSPACEBASE: {total_badspacebase_delta} (IMPROVEMENT)")
        else:
            print(f"  BADSPACEBASE: no change")
        if total_in_stack_delta > 0:
            print(f"  in_stack_: +{total_in_stack_delta} (REGRESSION)")
        elif total_in_stack_delta < 0:
            print(f"  in_stack_: {total_in_stack_delta} (IMPROVEMENT)")
        else:
            print(f"  in_stack_: no change")

    # Save JSON results if output dir specified
    if output_dir:
        json_file = output_dir / "results.json"
        with open(json_file, 'w') as f:
            json.dump(results, f, indent=2)
        print(f"\nResults saved to: {json_file}")
    return results


def main():
    parser = argparse.ArgumentParser(
        description="Test decompilation of a specific function",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("address", nargs='?', help="Function address (e.g., 0x0040ac80)")
    parser.add_argument("--scenarios", "-s", action="store_true",
                        help="Run all test scenarios")
    parser.add_argument("--output-dir", "-d", help="Output directory for scenario results")
    parser.add_argument("--baseline", "-b", help="Baseline file for comparison")
    parser.add_argument("--output", "-o", help="Output file for decompiled code")
    parser.add_argument("--project-path", default=str(DEFAULT_PROJECT_PATH),
                        help=f"Ghidra project path (default: {DEFAULT_PROJECT_PATH})")
    parser.add_argument("--project-name", default=DEFAULT_PROJECT_NAME,
                        help=f"Ghidra project name (default: {DEFAULT_PROJECT_NAME})")
    parser.add_argument("--program-name", default=DEFAULT_PROGRAM_NAME,
                        help=f"Program name (default: {DEFAULT_PROGRAM_NAME})")
    parser.add_argument("--clear-log", "-c", action="store_true",
                        help="Clear /tmp/decomp_debug.log before running (only useful if DECOMP_DEBUG_ENABLED)")
    args = parser.parse_args()

    # Validate arguments
    if not args.scenarios and not args.address:
        parser.error("Either provide an address or use --scenarios")

    # Clear debug log if requested (only useful if decompiler built with DECOMP_DEBUG_ENABLED)
    debug_log = Path("/tmp/decomp_debug.log")
    if args.clear_log and debug_log.exists():
        debug_log.unlink()
        print("Cleared debug log")

    # Import pyghidra
    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        print("Install the PyGhidra package from your Ghidra installation.")
        sys.exit(1)

    # Start PyGhidra
    print("Starting PyGhidra...")
    pyghidra.start()

    # Setup logging for ghidra_annotations modules
    from ghidra_annotations.util.log import setup_logging
    setup_logging("test_decompile")

    # Annotations directory for this program
    annotations_dir = Path(__file__).parent.parent.parent / "annotations" / args.program_name / "pseudocode"

    # Register callfixups
    print("Registering callfixups...")
    try:
        from ghidra_annotations.annotations.pseudocode.callfixups import register_callfixups
        callfixups_json = annotations_dir / "callfixups.json"
        register_callfixups(str(callfixups_json))
    except Exception as e:
        print(f"Warning: Failed to register callfixups: {e}")

    # Register proto overrides
    print("Registering proto overrides...")
    try:
        from ghidra_annotations.annotations.pseudocode.proto import register_proto_overrides
        register_proto_overrides(str(annotations_dir))
    except Exception as e:
        print(f"Warning: Failed to load proto overrides: {e}")

    # Preload decompiler fixes (global and per-function)
    print("Preloading decompiler fixes...")
    try:
        from ghidra_annotations.annotations.pseudocode.decompiler_fixes import (
            preload_decompiler_fixes, preload_per_function_decompiler_fixes
        )
        preload_decompiler_fixes(str(annotations_dir))
        preload_per_function_decompiler_fixes(str(annotations_dir / "src"))
    except Exception as e:
        print(f"Warning: Failed to preload decompiler fixes: {e}")

    # Register pcode overrides (per-function, from JSON files)
    print("Registering pcode overrides...")
    try:
        from ghidra_annotations.annotations.pseudocode.exporter import register_pcode_overrides
        pcode_count = register_pcode_overrides(str(annotations_dir / "src"))
        if pcode_count > 0:
            print(f"  Loaded {pcode_count} pcode overrides")
    except Exception as e:
        print(f"Warning: Failed to register pcode overrides: {e}")

    # Open project
    print(f"Opening project: {args.project_path}/{args.project_name}")
    print(f"Opening program: {args.program_name}")
    exit_code = 0
    try:
        project = pyghidra.open_project(args.project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as currentProgram:

            # Apply proto overrides (loaded earlier by register_proto_overrides)
            try:
                from ghidra_annotations.annotations.pseudocode.proto import apply_proto_overrides
                apply_proto_overrides(currentProgram)
            except Exception as e:
                print(f"Warning: Failed to apply proto overrides: {e}")

            # Scenarios mode
            if args.scenarios:
                run_scenarios(currentProgram, output_dir=args.output_dir)
                project.close()
                os._exit(0)

            # Single function mode
            # Decompile the function
            print("=" * 60)
            func, code = decompile_function(currentProgram, args.address)
            print("=" * 60)

            if code is None:
                exit_code = 1
            else:
                # Analyze issues
                print("\nANALYSIS:")
                print("-" * 40)
                issues = analyze_decompilation(code)
                total_issues = print_issues(issues)

                if total_issues == 0:
                    print("No issues detected!")
                else:
                    print(f"\nTotal issues: {total_issues}")

                # Find baseline - use provided or auto-detect
                baseline_path = args.baseline
                if not baseline_path:
                    func_name = func.getName() if func else None
                    baseline_path = find_baseline_file(args.address, func_name)
                    if baseline_path:
                        print(f"\nAuto-detected baseline: {baseline_path}")

                # Compare with baseline if available
                if baseline_path and os.path.exists(baseline_path):
                    print("\n" + "=" * 60)
                    print("COMPARISON WITH BASELINE:")
                    print("-" * 40)
                    with open(baseline_path, 'r') as f:
                        baseline_code = f.read()

                    comparison = compare_decompilations(baseline_code, code)

                    if comparison['improvements']:
                        print("IMPROVEMENTS:")
                        for imp in comparison['improvements']:
                            print(f"  + {imp}")

                    if comparison['regressions']:
                        print("REGRESSIONS:")
                        for reg in comparison['regressions']:
                            print(f"  - {reg}")

                    if not comparison['improvements'] and not comparison['regressions']:
                        print("No significant changes detected.")

                # Save output
                if args.output:
                    with open(args.output, 'w') as f:
                        f.write(code)
                    print(f"\nDecompiled code saved to: {args.output}")
                else:
                    # Print the code
                    print("\n" + "=" * 60)
                    print("DECOMPILED CODE:")
                    print("=" * 60)
                    print(code)

                # Check for debug log (only populated if DECOMP_DEBUG_ENABLED was set at compile time)
                debug_log = Path("/tmp/decomp_debug.log")
                if debug_log.exists():
                    print("\n" + "=" * 60)
                    print("DEBUG LOG (last 50 lines):")
                    print("-" * 40)
                    with open(debug_log, 'r') as f:
                        lines = f.readlines()
                        for line in lines[-50:]:
                            print(line.rstrip())

        project.close()
    except Exception as e:
        print(f"ERROR: {str(e)}")
        traceback.print_exc()
        exit_code = 1

    # Force exit
    os._exit(exit_code)


if __name__ == "__main__":
    main()
