#!/usr/bin/env python3
"""
fix_function_boundaries.py

Detect (and optionally fix) functions whose ENTRY POINT is wrong - the class of
error that shows up after a define pass (find_missing_functions.py, manual work)
when a function was started a few bytes too late, leaving its real prologue
orphaned, or when one real function got split into two.

This is complementary to validate_function_ranges.py: that tool fixes a function
whose *body* doesn't cover all its code (tail/interior left undisassembled). This
tool fixes a function whose *start* is wrong - orphaned bytes that PRECEDE the
entry, which the body-coverage scan can't see.

Two detected classes (thunks/externals skipped):

  ENTRY_LATE  - the instruction ending immediately before a function's entry is
                orphaned (belongs to no function) and falls through into the
                entry. Walking that fall-through chain back to a boundary
                (padding / data / another function) gives the true start. The
                function was defined too late; recreate it at the true start.
                (e.g. a `sub esp,N` / `mov eax,[esp+x]` prologue left orphaned.)

  SPLIT       - the instruction before a function's entry belongs to a DIFFERENT
                function A and falls through into this entry B. A real function
                doesn't fall through into another's entry, so A+B are one
                function that got split. Remove B and re-absorb it into A.

Both fixes remove the mis-defined function(s) and rebuild via Ghidra's flow
analysis. Function NAMES are preserved (re-applied after recreate); signatures/
params are reset by the rebuild, so named functions are reported loudly.

Report-first. Pass --apply to mutate + save. Manual overrides via
--fix WRONG=CORRECT (repeatable) bypass detection for a specific entry.

Usage:
    python3 -u fix_function_boundaries.py <project_dir> <project_name> [program] \\
        [--apply] [--only-fun] [--fix 1000a177=1000a170 ...] [--out FILE]

Examples:
    python3 -u fix_function_boundaries.py $PWD/projects NocturneEdit tridx7.dll
    python3 -u fix_function_boundaries.py $PWD/projects NocturneEdit tridx7.dll --apply
    python3 -u fix_function_boundaries.py $PWD/projects NocturneEdit nocturne.exe --apply --only-fun

@author NearlyTRex
@category Annotations
"""

import os
import sys
import argparse

MAX_CHAIN = 64  # safety bound on prologue-chain walk-back


def _ft_offset(instr):
    ft = instr.getFallThrough()
    return None if ft is None else ft.getOffset()


def detect(program):
    """Return list of findings: dicts with kind/entry/correct/other/name."""
    fm = program.getFunctionManager()
    listing = program.getListing()
    findings = []

    funcs = [f for f in fm.getFunctions(True)
             if not f.isThunk() and not f.isExternal()]
    for B in funcs:
        E = B.getEntryPoint()
        try:
            prev_byte = E.subtract(1)
        except Exception:
            continue
        if prev_byte is None:
            continue
        pinstr = listing.getInstructionContaining(prev_byte)
        if pinstr is None:
            continue  # data / undefined / padding before entry -> clean boundary
        # the instruction just before must fall through *into* this entry
        if _ft_offset(pinstr) != E.getOffset():
            continue  # prev ends in ret/jmp/noreturn -> boundary is legit

        owner = fm.getFunctionContaining(pinstr.getAddress())
        if owner is not None:
            if owner.getEntryPoint().getOffset() == E.getOffset():
                continue  # same function (shouldn't happen before entry)
            findings.append({
                "kind": "SPLIT", "entry": E, "correct": owner.getEntryPoint(),
                "other": owner, "name": B.getName(), "func": B,
            })
            continue

        # owner is None: orphan. Walk the fall-through chain back to a boundary.
        cur = E
        steps = 0
        while steps < MAX_CHAIN:
            try:
                pb = cur.subtract(1)
            except Exception:
                break
            ins = listing.getInstructionContaining(pb)
            if ins is None:
                break  # padding/data/undefined -> true start reached
            if fm.getFunctionContaining(ins.getAddress()) is not None:
                break  # ran into another function -> stop
            if _ft_offset(ins) != cur.getOffset():
                break  # this orphan doesn't flow into the chain -> stop
            cur = ins.getAddress()
            steps += 1
        if cur.getOffset() != E.getOffset():
            findings.append({
                "kind": "ENTRY_LATE", "entry": E, "correct": cur,
                "other": None, "name": B.getName(), "func": B,
            })
    return findings


def parse_manual(program, fix_args):
    """--fix WRONG=CORRECT -> synthetic ENTRY_LATE/SPLIT findings."""
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()
    out = []
    for spec in fix_args or []:
        wrong_s, _, correct_s = spec.partition("=")
        wrong = space.getAddress(int(wrong_s, 16))
        correct = space.getAddress(int(correct_s, 16))
        B = fm.getFunctionAt(wrong)
        other = fm.getFunctionAt(correct)
        kind = "SPLIT" if (other is not None and correct.getOffset() != wrong.getOffset()) else "ENTRY_LATE"
        out.append({
            "kind": kind + "(manual)", "entry": wrong, "correct": correct,
            "other": other if kind == "SPLIT" else None,
            "name": B.getName() if B else "<none>", "func": B,
        })
    return out


def report(findings, only_fun):
    print("\n=== boundary findings: %d ===" % len(findings))
    for f in findings:
        aligned = "" if (f["correct"].getOffset() & 0xf) else " [16-aligned]"
        named = "" if f["name"].startswith("FUN_") else "  <<NAMED: %s>>" % f["name"]
        skip = "  (skipped: --only-fun)" if (only_fun and not f["name"].startswith("FUN_")) else ""
        print("  %-18s entry %s -> %s%s%s%s" % (
            f["kind"], f["entry"], f["correct"], aligned, named, skip))
    return findings


def apply(program, findings, only_fun):
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()
    fm = program.getFunctionManager()
    listing = program.getListing()

    changed = False
    tx = program.startTransaction("Fix function boundaries")
    ok = True
    try:
        for f in findings:
            if only_fun and not f["name"].startswith("FUN_"):
                continue
            correct = f["correct"]
            name = f["name"]
            named = not name.startswith("FUN_")

            if f["kind"].startswith("SPLIT"):
                A = f["other"]
                B = f.get("func") or fm.getFunctionAt(f["entry"])
                if B is not None:
                    fm.removeFunction(B.getEntryPoint())
                CreateFunctionCmd.fixupFunctionBody(program, A, monitor)
                nf = fm.getFunctionAt(A.getEntryPoint())
                changed = True
                print("  SPLIT  removed %s, re-absorbed into %s -> body[%s-%s]" % (
                    f["entry"], A.getEntryPoint(),
                    nf.getEntryPoint() if nf else "?",
                    nf.getBody().getMaxAddress() if nf else "?"))
            else:  # ENTRY_LATE
                B = f.get("func") or fm.getFunctionAt(f["entry"])
                if B is not None:
                    fm.removeFunction(B.getEntryPoint())
                if listing.getInstructionAt(correct) is None:
                    DisassembleCommand(correct, None, True).applyTo(program, monitor)
                CreateFunctionCmd(correct).applyTo(program, monitor)
                nf = fm.getFunctionAt(correct)
                if nf is not None and named:
                    nf.setName(name, SourceType.USER_DEFINED)
                changed = True
                print("  ENTRY  %s -> %s%s  body[%s-%s]" % (
                    f["entry"], correct, ("  (name restored: %s)" % name) if named else "",
                    nf.getEntryPoint() if nf else "?",
                    nf.getBody().getMaxAddress() if nf else "?"))
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        import traceback
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    return changed and ok


def main():
    p = argparse.ArgumentParser(description="Detect/fix wrong function entry-point boundaries.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--apply", action="store_true", help="Mutate + save (default: report only)")
    p.add_argument("--only-fun", action="store_true", help="Only touch FUN_-named (unnamed) functions")
    p.add_argument("--fix", action="append", default=[], metavar="WRONG=CORRECT",
                   help="Manual override (hex addrs), repeatable; bypasses detection for that entry")
    p.add_argument("--out", default=None)
    args = p.parse_args()

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_boundary_fixes.txt" % args.program_name)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))
    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            if args.fix:
                findings = parse_manual(program, args.fix)
                print("Using %d manual --fix override(s)." % len(findings))
            else:
                print("Scanning for entry-point boundary errors...")
                findings = detect(program)
            report(findings, args.only_fun)

            lines = ["Function boundary report: %s" % args.program_name,
                     "findings: %d  mode: %s" % (len(findings), "APPLY" if args.apply else "report"), ""]
            for f in findings:
                lines.append("%-18s %s -> %s  %s" % (f["kind"], f["entry"], f["correct"], f["name"]))
            with open(out_path, "w") as fh:
                fh.write("\n".join(lines) + "\n")
            print("Report written to: %s" % out_path)

            if args.apply and findings:
                print("\n[apply]")
                changed = apply(program, findings, args.only_fun)
                if changed:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Saving program database...")
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif not args.apply:
                print("\n[dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        code = 1
    os._exit(code)


if __name__ == "__main__":
    main()
