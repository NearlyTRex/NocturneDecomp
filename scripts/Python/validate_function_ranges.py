#!/usr/bin/env python3
"""
validate_function_ranges.py

Detect "fragmented" function definitions - functions whose body does NOT cover
all the code that belongs to them, usually because auto-analysis stopped
disassembling partway through (a branch/fall-through lands on bytes that were
never turned into instructions). This is the class of problem that had to be
fixed by hand in nocedit.exe: a function that visibly continues, but whose tail
(or an interior block) is left as raw undefined bytes.

Signals (per function, thunks/externals skipped):
  FLOW_UNDEFINED - an instruction inside the function jumps / falls through to
                   an executable address that is NOT a defined instruction. The
                   function flows into un-disassembled bytes -> fragmented. (HIGH)
  FLOW_ORPHAN    - flows into disassembled code that belongs to NO function. The
                   code exists but the body never absorbed it. (MEDIUM)
  BODY_HOLE      - undefined bytes strictly inside [entry .. bodyMax] that aren't
                   claimed by another function. An interior gap in the body. (MEDIUM)

Inter-function jumps (tail calls, shared code) are NOT flagged - a target that
lands inside a *different* function is legitimate.

Report-first. Pass --fix to repair: disassemble the missing targets following
flow, then recompute each affected function's body with
CreateFunctionCmd.fixupFunctionBody (which preserves the function's name and
signature - it does not delete/recreate). --fix iterates until no new fragments
appear (bounded by --max-passes) since fixing one tail can reveal the next.

Usage:
    python3 -u validate_function_ranges.py <project_dir> <project_name> <program_name> \\
        [--out FILE] [--fix] [--max-passes N]

Examples:
    python3 -u validate_function_ranges.py ./projects NocturneEdit nocturne.exe
    python3 -u validate_function_ranges.py ./projects NocturneEdit nocturne.exe --fix

@author NearlyTRex
@category Annotations
"""

import os
import sys
import argparse

SEVERITY_ORDER = ["MEDIUM", "HIGH"]


def get_executable_set(program):
    from ghidra.program.model.address import AddressSet
    exec_set = AddressSet()
    for block in program.getMemory().getBlocks():
        if block.isExecute() and block.isInitialized():
            exec_set.add(block.getStart(), block.getEnd())
    return exec_set


def is_undefined(program, addr):
    """True if addr is not inside any defined instruction or defined data."""
    listing = program.getListing()
    if listing.getInstructionContaining(addr) is not None:
        return False
    from ghidra.program.model.listing import Data
    cu = listing.getCodeUnitContaining(addr)
    if cu is None:
        return True
    if isinstance(cu, Data):
        return not cu.isDefined()
    return False


def scan_function(program, func, exec_set, fm):
    """Return a list of fragmentation findings for one function."""
    listing = program.getListing()
    body = func.getBody()
    entry = func.getEntryPoint()
    findings = []
    seen_targets = set()

    for instr in listing.getInstructions(body, True):
        ft = instr.getFlowType()
        # non-call control-flow targets: jump targets + fall-through
        targets = []
        if ft.isJump():
            for t in instr.getFlows():
                targets.append(t)
        fallthrough = instr.getFallThrough()
        if fallthrough is not None:
            targets.append(fallthrough)

        for t in targets:
            if t is None or not exec_set.contains(t):
                continue
            key = t.getOffset()
            if key in seen_targets:
                continue

            at = listing.getInstructionAt(t)
            if at is None:
                # only real if the bytes are undefined (not defined data)
                if is_undefined(program, t):
                    seen_targets.add(key)
                    findings.append({
                        "kind": "FLOW_UNDEFINED", "severity": "HIGH",
                        "from": instr.getAddress(), "target": t,
                        "note": "%s -> undefined" % instr.getMnemonicString(),
                    })
            else:
                owner = fm.getFunctionContaining(t)
                if owner is None:
                    seen_targets.add(key)
                    findings.append({
                        "kind": "FLOW_ORPHAN", "severity": "MEDIUM",
                        "from": instr.getAddress(), "target": t,
                        "note": "%s -> orphan code" % instr.getMnemonicString(),
                    })
                # owner is another function -> legit inter-function jump; owner
                # is this function -> normal. Neither is flagged.

    # interior body holes: [entry..bodyMax] minus body, undefined & unclaimed
    from ghidra.program.model.address import AddressSet
    body_max = body.getMaxAddress()
    if body_max is not None and body_max.compareTo(entry) > 0:
        span = AddressSet(entry, body_max)
        gaps = span.subtract(body)
        for rng in gaps.getAddressRanges():
            a = rng.getMinAddress()
            if is_undefined(program, a) and fm.getFunctionContaining(a) is None:
                findings.append({
                    "kind": "BODY_HOLE", "severity": "MEDIUM",
                    "from": entry, "target": a,
                    "note": "interior gap %s-%s" % (rng.getMinAddress(),
                                                    rng.getMaxAddress()),
                })

    return findings


def scan_all(program, exec_set, fm, log):
    results = []  # (func, findings)
    funcs = [f for f in fm.getFunctions(True)
             if not f.isThunk() and not f.isExternal()]
    total = len(funcs)
    log("Scanning %d functions for fragmentation..." % total)
    for i, func in enumerate(funcs):
        if i and i % 1000 == 0:
            log("  ...%d/%d" % (i, total))
        findings = scan_function(program, func, exec_set, fm)
        if findings:
            results.append((func, findings))
    return results


# ---------------------------------------------------------------------------
# Fix
# ---------------------------------------------------------------------------

def fixup_function(program, func, findings, monitor, fix_holes):
    """Disassemble missing targets following flow, then recompute the body.

    BODY_HOLE gaps are skipped unless fix_holes is set: interior holes are usually
    alignment padding (they end on 8/16-byte boundaries), and disassembling padding
    would create garbage instructions.
    """
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.app.cmd.function import CreateFunctionCmd

    kinds = ("FLOW_UNDEFINED", "BODY_HOLE") if fix_holes else ("FLOW_UNDEFINED",)
    disasm_any = False
    for f in findings:
        if f["kind"] in kinds:
            t = f["target"]
            if program.getListing().getInstructionAt(t) is None:
                DisassembleCommand(t, None, True).applyTo(program, monitor)
                disasm_any = True

    # recompute body preserving the function's name/signature
    ok = False
    try:
        ok = bool(CreateFunctionCmd.fixupFunctionBody(program, func, monitor))
    except Exception as e:
        # fallback: recompute via a fresh body from flow (still no delete)
        try:
            ok = bool(CreateFunctionCmd.fixupFunctionBody(
                program, func.getEntryPoint(), monitor))
        except Exception:
            print("    fixup failed for %s: %s" % (func.getEntryPoint(), e))
    return disasm_any or ok


# ---------------------------------------------------------------------------
# Report
# ---------------------------------------------------------------------------

def write_report(path, program_name, results, fixed):
    def sev_rank(findings):
        return max(SEVERITY_ORDER.index(f["severity"]) for f in findings)

    results_sorted = sorted(
        results, key=lambda r: (-sev_rank(r[1]), r[0].getEntryPoint().getOffset()))

    n_high = sum(1 for _, fs in results if any(f["severity"] == "HIGH" for f in fs))
    n_med = len(results) - n_high

    lines = []
    lines.append("Fragmented Function Report")
    lines.append("=" * 60)
    lines.append("Program: %s" % program_name)
    lines.append("Fragmented functions: %d" % len(results))
    lines.append("  with HIGH (flows into undefined bytes): %d" % n_high)
    lines.append("  MEDIUM only (orphan code / interior gap): %d" % n_med)
    lines.append("Mode: %s" % ("FIXED" if fixed else "report only"))
    lines.append("")
    for func, findings in results_sorted:
        worst = "HIGH" if any(f["severity"] == "HIGH" for f in findings) else "MEDIUM"
        lines.append("%-10s  %-6s  %s  (%d issue%s)" % (
            func.getEntryPoint(), worst, func.getName(),
            len(findings), "" if len(findings) == 1 else "s"))
        for f in findings[:8]:
            lines.append("      %-14s from %-10s -> %-10s  %s" % (
                f["kind"], f["from"], f["target"], f["note"]))
        if len(findings) > 8:
            lines.append("      ... +%d more" % (len(findings) - 8))
    text = "\n".join(lines) + "\n"
    with open(path, "w") as fh:
        fh.write(text)
    print(text[:4000])
    if len(text) > 4000:
        print("... (report truncated in console; full report on disk)")
    print("Report written to: %s" % path)


# ---------------------------------------------------------------------------
# Core
# ---------------------------------------------------------------------------

def run(program, out_path, do_fix, max_passes, fix_holes):
    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()
    log = lambda m: print(m)

    fm = program.getFunctionManager()
    exec_set = get_executable_set(program)

    results = scan_all(program, exec_set, fm, log)
    log("Found %d fragmented functions." % len(results))

    changed = False
    if do_fix and results:
        for p in range(1, max_passes + 1):
            log("Fix pass %d: repairing %d functions..." % (p, len(results)))
            tx = program.startTransaction("Fix fragmented functions (pass %d)" % p)
            ok = True
            try:
                for func, findings in results:
                    if fixup_function(program, func, findings, monitor, fix_holes):
                        changed = True
            except Exception as e:
                ok = False
                log("ERROR during fix: %s" % e)
            finally:
                program.endTransaction(tx, ok)
            # re-scan to see what remains
            results = scan_all(program, exec_set, fm, log)
            log("  after pass %d: %d fragmented remain" % (p, len(results)))
            if not results:
                break

    write_report(out_path, program.getName(), results, do_fix)
    return changed


def main():
    parser = argparse.ArgumentParser(
        description="Detect (and optionally fix) fragmented function definitions.")
    parser.add_argument("project_path")
    parser.add_argument("project_name")
    parser.add_argument("program_name", nargs="?", default="nocturne.exe")
    parser.add_argument("--out", default=None)
    parser.add_argument("--fix", action="store_true",
                        help="Disassemble missing code (FLOW_UNDEFINED) and recompute bodies, then save")
    parser.add_argument("--fix-holes", action="store_true",
                        help="Also disassemble interior BODY_HOLE gaps (usually alignment padding - off by default)")
    parser.add_argument("--max-passes", type=int, default=4)
    args = parser.parse_args()

    out_path = args.out or ("%s_fragmented_functions.txt" % args.program_name)
    project_path = os.path.abspath(args.project_path)

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed (use your Ghidra's pyghidra).")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening project: %s/%s" % (project_path, args.project_name))
    print("Opening program: %s" % args.program_name)
    exit_code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            changed = run(program, out_path, args.fix, args.max_passes, args.fix_holes)
            if args.fix and changed:
                from ghidra.util.task import ConsoleTaskMonitor
                print("Saving program database...")
                program.getDomainFile().save(ConsoleTaskMonitor())
        project.save()
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        exit_code = 1
    os._exit(exit_code)


if __name__ == "__main__":
    main()
