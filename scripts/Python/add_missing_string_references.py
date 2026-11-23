#!/usr/bin/env python3
# Add the memory references Ghidra's auto-analysis never created for string
# addresses materialized as bare immediates.
#
# Auto-analysis creates a reference for `MOV [mem],imm` but not for
# `MOV reg,imm32`. The decompiler still renders the target as a string, so the
# code looks correct while the string carries no xref at all -- every
# xref-driven query then silently under-reports.
#
#   00477090  MOV ECX,0x57e4fa                  <- "..\shape\edittool.cpp", no xref
#   0047709f  MOV dword ptr [0x01cc4800],ECX    <- this one auto-analysis caught
#
# A reference is added only when the immediate EXACTLY equals the start address
# of an already-defined string, so an integer constant cannot be mistaken for a
# pointer unless it collides exactly with a string start.
#
# Report-first; --apply snapshots the project, then mutates + saves. Verify
# afterwards by re-running audit_ghidra_fixups.py -- the MISSING-STRING-REF
# count should drop to 0.
#
# Usage (PyGhidra headless):
#   python add_missing_string_references.py <project_dir> <project_name> [program_name]
#   python add_missing_string_references.py /abs/projects NocturneEdit nocturne.exe
#   python add_missing_string_references.py /abs/projects NocturneEdit nocturne.exe --apply
#
# Note: pass ABSOLUTE paths and set GHIDRA_INSTALL_DIR, per the other headless
# scripts in this directory.
#
#@author NearlyTRex
#@category Annotations

import os
import subprocess
import sys
import argparse
import traceback
from collections import Counter, defaultdict

from audit_ghidra_fixups import collect_strings, unreferenced_string_immediates

THIS_DIR = os.path.dirname(os.path.abspath(__file__))

# Only these mnemonics take an address as an immediate in normal compiler output
# (load-address / push-address). Anything else scoring a hit is far more likely
# to be arithmetic that collided with a string start, so it is reported under
# UNEXPECTED-MNEMONIC and left alone unless --any-mnemonic is passed.
ADDRESS_TAKING_MNEMONICS = {"MOV", "PUSH", "LEA"}


def plan(program, strings, any_mnemonic):
    """Find immediate-loads-a-string sites that carry no reference.

    action is one of:
      ADD                 - eligible; a DATA reference will be created
      UNEXPECTED-MNEMONIC - immediate matched, but the mnemonic does not take
                            addresses; almost certainly a numeric coincidence
    """
    fm = program.getFunctionManager()
    sites, n_sites = unreferenced_string_immediates(program, strings)
    rows = []
    for instr, op_index, val in sites:
        mnemonic = instr.getMnemonicString().upper()
        func = fm.getFunctionContaining(instr.getAddress())
        eligible = any_mnemonic or mnemonic in ADDRESS_TAKING_MNEMONICS
        rows.append({
            "at": str(instr.getAddress()),
            "op_index": op_index,
            "target": "%08x" % val,
            "mnemonic": mnemonic,
            "instr": str(instr),
            "func": func.getName() if func else "(no function)",
            "text": strings[val][0],
            "action": "ADD" if eligible else "UNEXPECTED-MNEMONIC",
        })
    return rows, n_sites


def apply(program, rows):
    """Create the missing references in one transaction. Returns the count added, or
    None when the transaction failed and was rolled back.

    Ghidra makes a new reference primary when its operand has no other, so an
    existing hand-made reference keeps its display.
    """
    from ghidra.program.model.symbol import RefType, SourceType

    ref_mgr = program.getReferenceManager()
    space = program.getAddressFactory().getDefaultAddressSpace()

    added = 0
    tx = program.startTransaction("Add missing string references")
    ok = True
    try:
        for r in rows:
            if r["action"] != "ADD":
                continue
            ref_mgr.addMemoryReference(
                space.getAddress(int(r["at"], 16)), space.getAddress(int(r["target"], 16)),
                RefType.DATA, SourceType.USER_DEFINED, r["op_index"])
            added += 1
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    return added if ok else None


def write_report(out_path, program_name, rows, n_sites, applied):
    counts = Counter(r["action"] for r in rows)
    by_func = defaultdict(list)
    by_mnemonic = Counter(r["mnemonic"] for r in rows if r["action"] == "ADD")
    for r in rows:
        by_func[r["func"]].append(r)

    lines = []
    lines.append("Missing string references: %s" % program_name)
    lines.append("mode: %s" % ("APPLY" if applied else "report"))
    lines.append("immediate-loads-a-string sites scanned : %d" % n_sites)
    lines.append("sites with NO reference                : %d" % len(rows))
    lines.append("  %s" % "  ".join("%s=%d" % (k, v) for k, v in sorted(counts.items())))
    lines.append("distinct functions affected            : %d" % len(by_func))
    lines.append("")

    lines.append("== mnemonic histogram (ADD rows) ==")
    for m, n in by_mnemonic.most_common():
        lines.append("  %-8s %d" % (m, n))
    lines.append("")

    lines.append("== affected functions, worst first ==")
    for fname, sub in sorted(by_func.items(), key=lambda kv: (-len(kv[1]), kv[0])):
        lines.append("  %-56s %d site(s)" % (fname, len(sub)))
    lines.append("")

    for action in ("UNEXPECTED-MNEMONIC", "ADD"):
        sub = [r for r in rows if r["action"] == action]
        if not sub:
            continue
        lines.append("== %s (%d) ==" % (action, len(sub)))
        for r in sub:
            lines.append("  %s  op%d  %-34s -> %s  %r"
                         % (r["at"], r["op_index"], r["instr"], r["target"],
                            r["text"][:58]))
        lines.append("")

    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")
    return counts


def run(program, args, out_path):
    """Report, and with --apply add the references and save. Returns the exit code."""
    print("Collecting defined strings...")
    strings = collect_strings(program)
    print("  %d string(s)" % len(strings))

    print("Scanning instructions...")
    rows, n_sites = plan(program, strings, args.any_mnemonic)
    counts = write_report(out_path, args.program_name, rows, n_sites, args.apply)

    print("\n=== plan ===")
    print("  scanned  %d site(s)" % n_sites)
    for k, v in sorted(counts.items()):
        print("  %-20s %d" % (k, v))
    print("Report written to: %s" % out_path)

    n_add = counts["ADD"]
    if not args.apply:
        print("\n[dry-run] re-run with --apply to execute.")
        return 0
    if not n_add:
        print("\nNothing to add.")
        return 0
    print("\n[apply] adding %d reference(s)..." % n_add)
    added = apply(program, rows)
    if added is None:
        print("Rolled back; nothing saved.")
        return 1
    from ghidra.util.task import ConsoleTaskMonitor
    print("Added %d. Saving program database..." % added)
    program.getDomainFile().save(ConsoleTaskMonitor())
    print("Saved.")
    return 0


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_path), args.project_name, "--tag", "pre-string-refs"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    p = argparse.ArgumentParser(
        description="Add missing Ghidra references for string addresses loaded as immediates.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--any-mnemonic", action="store_true",
                   help="Also add references from mnemonics that do not normally "
                        "take an address immediate (default: report them only)")
    p.add_argument("--apply", action="store_true",
                   help="Create the references + save the program (default: report only)")
    p.add_argument("--no-snapshot", action="store_true", help="--apply without a .gar snapshot first")
    p.add_argument("--out", default=None)
    args = p.parse_args(argv)

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_string_references.txt" % args.program_name)

    if args.apply and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.", flush=True)
        os._exit(1)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 1
    project = pyghidra.open_project(project_path, args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            code = run(program, args, out_path)
    except Exception as e:
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        project.close()

    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
