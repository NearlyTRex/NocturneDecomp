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

def _first_defined_unit(program, start, span):
    """First defined instruction/data code unit overlapping [start, start+span).

    Used to find what obstructs disassembling the instruction at `start`: an x86
    instruction is at most 15 bytes, so a span of 16 covers the first instruction's
    footprint. Returns the CodeUnit or None if the whole window is undefined.
    """
    from ghidra.program.model.listing import Data
    listing = program.getListing()
    for i in range(span):
        a = start.add(i)
        insn = listing.getInstructionContaining(a)
        if insn is not None:
            return insn
        d = listing.getDefinedDataContaining(a)
        if d is not None:
            return d
    return None


def _clear_orphan_run(program, start, monitor, cap=512):
    """Clear the contiguous run of ORPHAN (no owning function) defined code units
    starting at/after `start`, tolerating undefined bytes in between, and stopping
    at the first function-owned unit (never clears code that belongs to a function)
    or after `cap` bytes. Returns (n_cleared, clear_min, clear_max) or (0, None, None).
    """
    from ghidra.program.model.listing import Data
    listing = program.getListing()
    fm = program.getFunctionManager()
    a = start
    end_off = start.getOffset() + cap
    clear_max = None
    n = 0
    while a is not None and a.getOffset() < end_off:
        cu = listing.getCodeUnitAt(a)
        if cu is None:
            a = a.add(1)
            continue
        insn = listing.getInstructionAt(a)
        defined = (insn is not None) or (isinstance(cu, Data) and cu.isDefined())
        if defined:
            if fm.getFunctionContaining(a) is not None:
                break  # belongs to a function - stop, do not clear it
            clear_max = cu.getMaxAddress()
            n += 1
        a = cu.getMaxAddress().add(1)
    if clear_max is None:
        return (0, None, None)
    listing.clearCodeUnits(start, clear_max, False)
    return (n, start, clear_max)


def fixup_function(program, func, findings, monitor, fix_holes):
    """Disassemble missing targets following flow, then recompute the body.

    BODY_HOLE gaps are skipped unless fix_holes is set: interior holes are usually
    alignment padding (they end on 8/16-byte boundaries), and disassembling padding
    would create garbage instructions.

    When a FLOW_UNDEFINED target won't disassemble because conflicting code occupies
    its first-instruction bytes (DisassembleCommand returns True but creates nothing -
    status "Disassembler requires a start which is an undefined code unit"), the
    obstruction is diagnosed:
      * an ORPHAN stale mis-disassembly (owned by no function) is cleared and the
        target re-disassembled;
      * an overlapping FUNCTION (a misaligned/hallucinated function whose entry sits
        inside this function's real tail) is NOT touched - it is returned as a blocker
        so the caller can point the user at delete_function.py.

    Returns (progressed, blockers): progressed is True if any real disassembly/body
    change happened; blockers is a list of dicts describing function-blocked tails.
    """
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.app.cmd.function import CreateFunctionCmd
    listing = program.getListing()
    fm = program.getFunctionManager()

    kinds = ("FLOW_UNDEFINED", "BODY_HOLE") if fix_holes else ("FLOW_UNDEFINED",)
    progressed = False
    blockers = []
    for f in findings:
        if f["kind"] not in kinds:
            continue
        t = f["target"]
        if listing.getInstructionAt(t) is not None:
            continue
        DisassembleCommand(t, None, True).applyTo(program, monitor)
        if listing.getInstructionAt(t) is not None:
            progressed = True
            continue
        # blocked - diagnose the obstruction in t's first-instruction window
        blk = _first_defined_unit(program, t, 16)
        if blk is None:
            continue  # undefined but still won't disassemble; leave for the report
        owner = fm.getFunctionContaining(blk.getMinAddress())
        if owner is not None and owner.getEntryPoint() != func.getEntryPoint():
            blockers.append({
                "victim": func.getEntryPoint(), "victim_name": func.getName(),
                "target": t,
                "blocker_entry": owner.getEntryPoint(),
                "blocker_name": owner.getName(),
            })
            continue  # misaligned/overlapping function -> delete_function, not here
        # orphan (or self) obstruction -> clear the stale run and retry
        n, cmin, cmax = _clear_orphan_run(program, t, monitor)
        if n:
            DisassembleCommand(t, None, True).applyTo(program, monitor)
            if listing.getInstructionAt(t) is not None:
                progressed = True
                print("    cleared %d stale orphan unit(s) [%s-%s] blocking %s, "
                      "re-disassembled" % (n, cmin, cmax, t))

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
    return (progressed or ok, blockers)


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
    all_blockers = {}
    if do_fix and results:
        for p in range(1, max_passes + 1):
            log("Fix pass %d: repairing %d functions..." % (p, len(results)))
            tx = program.startTransaction("Fix fragmented functions (pass %d)" % p)
            ok = True
            try:
                for func, findings in results:
                    prog, blockers = fixup_function(
                        program, func, findings, monitor, fix_holes)
                    if prog:
                        changed = True
                    for b in blockers:
                        all_blockers[(b["victim"].getOffset(),
                                      b["blocker_entry"].getOffset())] = b
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

        if all_blockers:
            log("")
            log("!! %d fragmented tail(s) BLOCKED by an overlapping function - likely a"
                % len(all_blockers))
            log("   misaligned/hallucinated function whose entry sits inside a real")
            log("   function's tail. Not auto-fixable here (would need a delete):")
            addrs = []
            for b in sorted(all_blockers.values(),
                            key=lambda x: x["victim"].getOffset()):
                log("   %s %-40s tail@%s blocked by %s @ %s" % (
                    b["victim"], b["victim_name"], b["target"],
                    b["blocker_name"], b["blocker_entry"]))
                addrs.append(str(b["blocker_entry"]))
            uniq = sorted(set(addrs))
            log("   -> verify each is bogus, then:")
            log("      delete_function.py <ABS>/projects <project> %s %s --apply --undefine" % (
                program.getName(),
                " ".join("--addr %s" % a for a in uniq)))
            log("      then re-run validate_function_ranges.py ... --fix")

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
