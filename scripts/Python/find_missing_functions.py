#!/usr/bin/env python3
"""
find_missing_functions.py

Find (and optionally define) functions that Ghidra's auto-analysis missed.

Unlike the legacy find_hidden_functions.py (raw byte-pattern scan, report only),
this uses Ghidra's own signals for high precision and validates every candidate
with PseudoDisassembler (which disassembles WITHOUT mutating the program), so the
report reflects real, decodable subroutines rather than byte coincidences.

Discovery tiers (highest precision first):
  1. CALL_TARGET       - a CALL whose target has no function defined. Near-certain.
  2. GAP_AFTER_PADDING - undefined bytes that start right after alignment padding
                         (INT3 / NOP) or a returning instruction, at a function gap.
  3. PROLOGUE_SCAN     - classic prologue byte patterns, but ONLY at gap boundaries
                         (kills the off-by-one dupes the legacy scanner produced).

Each candidate is scored by whether PseudoDisassembler.isValidSubroutine() agrees.

Report-first by design: a run only writes a report. Pass --apply to actually
disassemble + create functions (via CreateFunctionCmd, which computes the body),
for candidates at or above --min-confidence.

Usage:
    python3 -u find_missing_functions.py <project_dir> <project_name> <program_name> \\
        [--out FILE] [--apply] [--min-confidence LEVEL]

Examples:
    # Report only (default): writes nocturne.exe_missing_functions.txt
    python3 -u find_missing_functions.py ./projects NocturneEdit nocturne.exe

    # Define every VERY_HIGH/HIGH candidate and save the project:
    python3 -u find_missing_functions.py ./projects NocturneEdit nocturne.exe --apply

    # Be aggressive - also define MEDIUM candidates:
    python3 -u find_missing_functions.py ./projects NocturneEdit nocturne.exe \\
        --apply --min-confidence MEDIUM

@author NearlyTRex
@category Annotations
"""

import os
import sys
import argparse

# Confidence ranking (higher = more certain it's a real function entry)
CONFIDENCE_ORDER = ["LOW", "MEDIUM", "HIGH", "VERY_HIGH"]


# ---------------------------------------------------------------------------
# Discovery (no mutation - safe in report mode)
# ---------------------------------------------------------------------------

def get_executable_set(program):
    from ghidra.program.model.address import AddressSet
    exec_set = AddressSet()
    for block in program.getMemory().getBlocks():
        if block.isExecute() and block.isInitialized():
            exec_set.add(block.getStart(), block.getEnd())
    return exec_set


def read_byte(program, addr):
    """Unsigned byte, or None if unreadable."""
    try:
        return program.getMemory().getByte(addr) & 0xFF
    except Exception:
        return None


# x86 prologue byte patterns (first instruction[s] of a function). Longest-first
# so the scan prefers the fuller match at a boundary.
PROLOGUE_PATTERNS = [
    ([0x55, 0x8B, 0xEC], "push ebp; mov ebp,esp"),
    ([0x53, 0x56, 0x57], "push ebx; push esi; push edi"),
    ([0x56, 0x57],       "push esi; push edi"),
    ([0x55],             "push ebp"),
    ([0x53],             "push ebx"),
    ([0x56],             "push esi"),
    ([0x83, 0xEC],       "sub esp,imm8"),
    ([0x81, 0xEC],       "sub esp,imm32"),
]

PADDING_BYTES = {0x90, 0xCC}  # NOP, INT3


def matches(program, addr, pattern):
    for i, want in enumerate(pattern):
        b = read_byte(program, addr.add(i))
        if b is None or b != want:
            return False
    return True


def is_undefined(program, addr):
    """Byte is not inside any defined instruction, data, or function."""
    listing = program.getListing()
    if listing.getInstructionContaining(addr) is not None:
        return False
    cu = listing.getCodeUnitContaining(addr)
    # An undefined byte reports as an "instruction" of length 0 / Data isDefined False
    if cu is None:
        return True
    try:
        from ghidra.program.model.listing import Data
        if isinstance(cu, Data):
            return not cu.isDefined()
    except Exception:
        pass
    return False


RET_BYTES = {0xC3, 0xC2, 0xCB, 0xCA}  # ret / ret imm16 / retf variants


def boundary_kind(program, addr):
    """
    Classify the byte IMMEDIATELY before `addr` (only the adjacent byte - never a
    distant instruction, which is what made the legacy scan flag every byte in a
    gap). Returns 'PADDING' (padding or return -> strong boundary), 'OTHER'
    (some other adjacent byte), or 'START' (no predecessor).
    """
    if addr.getOffset() == 0:
        return "START"
    try:
        pb = read_byte(program, addr.subtract(1))
    except Exception:
        return "START"
    if pb is None:
        return "START"
    if pb in PADDING_BYTES or pb in RET_BYTES:
        return "PADDING"
    return "OTHER"


def find_call_targets(program, exec_set, fm):
    """Tier 1: CALL flows whose target is executable but not yet a function."""
    candidates = {}
    listing = program.getListing()
    for instr in listing.getInstructions(exec_set, True):
        ft = instr.getFlowType()
        if not ft.isCall():
            continue
        for target in instr.getFlows():
            if not exec_set.contains(target):
                continue
            if fm.getFunctionAt(target) is not None:
                continue
            candidates[target.getOffset()] = (target, "CALL_TARGET",
                                              "called from %s" % instr.getAddress())
    return candidates


def match_prologue(program, addr):
    """Return the (pattern, desc) of the longest prologue matching at addr, or None."""
    for pattern, desc in PROLOGUE_PATTERNS:
        if matches(program, addr, pattern):
            return pattern, desc
    return None


def find_gap_and_prologue(program, exec_set, fm):
    """
    Tiers 2 & 3: walk each executable block CHUNK by chunk, not byte by byte.
    A chunk is a maximal run of undefined, non-padding bytes. Its start is the
    only place a new function can begin, so we emit at most one candidate per
    chunk - which is what collapses the interior-byte noise the old scan produced.
    """
    candidates = {}
    listing = program.getListing()
    for block in program.getMemory().getBlocks():
        if not (block.isExecute() and block.isInitialized()):
            continue
        addr = block.getStart()
        end = block.getEnd()
        while addr.compareTo(end) <= 0:
            func = fm.getFunctionContaining(addr)
            if func is not None:
                try:
                    addr = func.getBody().getMaxAddress().add(1)
                except Exception:
                    break
                continue

            b = read_byte(program, addr)
            if b is None:
                break
            # consume padding and defined-but-not-in-function bytes one at a time
            if b in PADDING_BYTES or not is_undefined(program, addr):
                try:
                    addr = addr.add(1)
                except Exception:
                    break
                continue

            # addr starts an undefined, non-padding chunk -> the only candidate site
            kind = boundary_kind(program, addr)
            match = match_prologue(program, addr)
            if match is not None:
                _, desc = match
                method = "GAP_AFTER_PADDING" if kind in ("PADDING", "START") \
                    else "PROLOGUE_SCAN"
                candidates[addr.getOffset()] = (addr, method, desc)

            # skip to the end of this chunk (next padding / defined / function byte)
            addr = addr.add(1)
            while addr.compareTo(end) <= 0:
                cb = read_byte(program, addr)
                if cb is None or cb in PADDING_BYTES:
                    break
                if fm.getFunctionContaining(addr) is not None:
                    break
                if not is_undefined(program, addr):
                    break
                try:
                    addr = addr.add(1)
                except Exception:
                    addr = None
                    break
            if addr is None:
                break
    return candidates


# ---------------------------------------------------------------------------
# Validation via PseudoDisassembler (no mutation)
# ---------------------------------------------------------------------------

def make_pseudo(program):
    try:
        from ghidra.app.util import PseudoDisassembler
        return PseudoDisassembler(program)
    except Exception:
        return None


def valid_subroutine(pseudo, addr):
    if pseudo is None:
        return None  # unknown
    try:
        return bool(pseudo.isValidSubroutine(addr, True))
    except Exception:
        try:
            return bool(pseudo.isValidSubroutine(addr))
        except Exception:
            return None


def score(method, valid):
    if method == "CALL_TARGET":
        return "VERY_HIGH" if valid else "HIGH"
    if method == "GAP_AFTER_PADDING":
        return "HIGH" if valid else "LOW"
    if method == "PROLOGUE_SCAN":
        return "MEDIUM" if valid else "LOW"
    return "LOW"


# ---------------------------------------------------------------------------
# Apply (mutates - only under --apply)
# ---------------------------------------------------------------------------

def define_function(program, addr, monitor):
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.app.cmd.function import CreateFunctionCmd

    if program.getListing().getInstructionAt(addr) is None:
        # restrictedSet MUST be None so followFlow disassembles the WHOLE function,
        # not just the entry instruction. Passing AddressSet(addr, addr) caps it at
        # one byte -> a single-instruction stub body (fragmented function).
        DisassembleCommand(addr, None, True).applyTo(program, monitor)
    cmd = CreateFunctionCmd(addr)
    return bool(cmd.applyTo(program, monitor))


# ---------------------------------------------------------------------------
# Report
# ---------------------------------------------------------------------------

def write_report(path, program_name, rows, applied, min_conf):
    order = {c: i for i, c in enumerate(CONFIDENCE_ORDER)}
    rows_sorted = sorted(
        rows, key=lambda r: (-order[r["confidence"]], r["addr"].getOffset()))

    lines = []
    lines.append("Missing Function Candidates")
    lines.append("=" * 60)
    lines.append("Program: %s" % program_name)
    lines.append("Total candidates: %d" % len(rows))
    for c in reversed(CONFIDENCE_ORDER):
        n = sum(1 for r in rows if r["confidence"] == c)
        lines.append("  %-10s %d" % (c + ":", n))
    lines.append("Mode: %s" % ("APPLIED (>= %s)" % min_conf if applied else "report only"))
    lines.append("")
    header = "%-10s  %-16s  %-18s  %-6s  %s" % (
        "ADDRESS", "CONFIDENCE", "METHOD", "APPLY", "NOTE")
    lines.append(header)
    lines.append("-" * len(header))
    for r in rows_sorted:
        lines.append("%-10s  %-16s  %-18s  %-6s  %s" % (
            r["addr"], r["confidence"], r["method"],
            r.get("applied", ""), r["note"]))

    text = "\n".join(lines) + "\n"
    with open(path, "w") as fh:
        fh.write(text)
    print(text)
    print("Report written to: %s" % path)


# ---------------------------------------------------------------------------
# Core
# ---------------------------------------------------------------------------

def scan_candidates(program, exec_set, fm, pseudo, verbose=True):
    """One discovery + validation pass -> list of candidate rows."""
    if verbose:
        print("Scanning for call targets...")
    call_c = find_call_targets(program, exec_set, fm)
    if verbose:
        print("  %d call-target candidates" % len(call_c))
        print("Scanning gaps / prologues...")
    gap_c = find_gap_and_prologue(program, exec_set, fm)
    if verbose:
        print("  %d gap/prologue candidates" % len(gap_c))

    # Merge, preferring the higher-precision CALL_TARGET method per address.
    merged = dict(gap_c)
    merged.update(call_c)
    if verbose:
        print("Validating %d unique candidates with PseudoDisassembler..."
              % len(merged))

    rows = []
    for off in sorted(merged):
        addr, method, note = merged[off]
        if fm.getFunctionAt(addr) is not None:  # never redefine an existing entry
            continue
        valid = valid_subroutine(pseudo, addr)
        conf = score(method, valid)
        if valid is False:
            note = note + " [pseudo: invalid]"
        rows.append({"addr": addr, "method": method,
                     "confidence": conf, "note": note})
    return rows


def run(program, out_path, apply_changes, min_conf, max_iter=8):
    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()

    fm = program.getFunctionManager()
    exec_set = get_executable_set(program)
    pseudo = make_pseudo(program)
    order = {c: i for i, c in enumerate(CONFIDENCE_ORDER)}
    threshold = order[min_conf]

    rows = scan_candidates(program, exec_set, fm, pseudo)

    applied_any = False
    if apply_changes:
        # Iterate to a fixpoint: defining a function disassembles its body, which
        # can reveal fresh CALL targets to still-undefined functions (the cascade).
        total_created = 0
        for iteration in range(1, max_iter + 1):
            targets = [r for r in rows if order[r["confidence"]] >= threshold]
            if not targets:
                break
            print("Apply pass %d: %d candidates (>= %s)..."
                  % (iteration, len(targets), min_conf))
            tx = program.startTransaction("Define missing functions (pass %d)" % iteration)
            ok = True
            created = 0
            try:
                for r in targets:
                    success = define_function(program, r["addr"], monitor)
                    r["applied"] = "OK" if success else "FAIL"
                    if success:
                        created += 1
                        applied_any = True
            except Exception as e:
                ok = False
                print("ERROR during apply: %s" % e)
            finally:
                program.endTransaction(tx, ok)
            total_created += created
            print("  pass %d created %d (running total %d)"
                  % (iteration, created, total_created))
            if created == 0:
                break
            # re-scan for the next cascade wave; final rows drive the report
            rows = scan_candidates(program, exec_set, fm, pseudo, verbose=False)
        print("Created %d new functions across %d pass(es)."
              % (total_created, iteration))

    write_report(out_path, program.getName(), rows, apply_changes, min_conf)
    return applied_any


def main():
    parser = argparse.ArgumentParser(
        description="Find (and optionally define) functions auto-analysis missed.")
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", nargs="?", default="nocturne.exe",
                        help="Program name within the project (default nocturne.exe)")
    parser.add_argument("--out", default=None,
                        help="Report file (default <program>_missing_functions.txt)")
    parser.add_argument("--apply", action="store_true",
                        help="Actually create functions and save the project")
    parser.add_argument("--min-confidence", default="HIGH",
                        choices=CONFIDENCE_ORDER,
                        help="Lowest confidence to define under --apply (default HIGH)")
    args = parser.parse_args()

    out_path = args.out or ("%s_missing_functions.txt" % args.program_name)
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
            changed = run(program, out_path, args.apply, args.min_confidence)
            if args.apply and changed:
                # program_context only releases the consumer - it does NOT persist
                # the program DB, and project.save() saves project metadata, not the
                # program. Save the program's DomainFile while it's still open.
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
