#!/usr/bin/env python3
# Audit a program for Ghidra-side defects that need a human (or a targeted
# script) to fix, and emit them as a prioritized worklist.
#
# Read-only: this script NEVER mutates the program.
#
# Checks performed:
#
#   MISSING-STRING-REF
#     An instruction materializes a string's address as a bare immediate
#     ("MOV ECX,0x57e4fa") but carries no reference to it. Ghidra's
#     auto-analysis creates references for `MOV [mem],imm` but routinely misses
#     `MOV reg,imm32`, so the string shows up in the decompiler while having no
#     xref at all. That silently breaks every xref-driven query -- it is what
#     made a references-only scan under-report file-literal owners by ~8%.
#     Fix in Ghidra: right-click the operand > References > Add Reference, or
#     run an analysis pass that creates them in bulk.
#
#   UNKNOWN-CONVENTION
#     Calling convention is unknown while the signature is locked, which is the
#     decompiler's "Unknown calling convention -- yet parameter storage is
#     locked" warning. Parameters usually surface as in_stack_* pseudo-locals
#     instead of real arguments.
#     Fix in Ghidra: set the calling convention on the function signature.
#
# Usage (PyGhidra headless):
#   python audit_ghidra_fixups.py <project_dir> <project_name> [program_name]
#   python audit_ghidra_fixups.py /abs/projects NocturneEdit nocturne.exe
#   python audit_ghidra_fixups.py /abs/projects NocturneEdit nocturne.exe --file-literals-only
#
# Note: pass ABSOLUTE paths and set GHIDRA_INSTALL_DIR, per the other headless
# scripts in this directory.
#
#@author NearlyTRex
#@category Annotations

import os
import re
import sys
import argparse
from collections import Counter, defaultdict

# A __FILE__ literal as the original compiler emitted it: "..\<dir>\<file>.c".
FILE_LITERAL_RE = re.compile(r'^\.\.[\\/](.+\.(?:c|cpp))$', re.IGNORECASE)

# Immediates below this are far more likely to be plain integers that happen to
# collide with an address than real pointers.
MIN_PLAUSIBLE_ADDR = 0x1000


def collect_strings(program, file_literals_only):
    """Map string start offset -> (value, is_file_literal)."""
    out = {}
    for data in program.getListing().getDefinedData(True):
        if not data.hasStringValue():
            continue
        try:
            value = data.getValue()
        except Exception:
            continue
        if value is None:
            continue
        text = str(value)
        is_file = bool(FILE_LITERAL_RE.match(text.strip()))
        if file_literals_only and not is_file:
            continue
        out[data.getAddress().getOffset()] = (text, is_file)
    return out


def find_missing_string_refs(program, strings):
    """Instructions whose scalar immediate is a string address but carry no ref.

    Returns a list of dicts, one per offending instruction.
    """
    from ghidra.program.model.scalar import Scalar

    listing = program.getListing()
    fm = program.getFunctionManager()

    findings = []
    n_sites = 0
    for instr in listing.getInstructions(True):
        for i in range(instr.getNumOperands()):
            for obj in instr.getOpObjects(i):
                if not isinstance(obj, Scalar):
                    continue
                val = obj.getUnsignedValue()
                if val < MIN_PLAUSIBLE_ADDR or val not in strings:
                    continue
                n_sites += 1
                # Does this instruction already reference the string?
                if any(r.getToAddress() is not None
                       and r.getToAddress().getOffset() == val
                       for r in instr.getReferencesFrom()):
                    continue
                func = fm.getFunctionContaining(instr.getAddress())
                text, is_file = strings[val]
                findings.append({
                    "at": str(instr.getAddress()),
                    "target": "%08x" % val,
                    "func": func.getName() if func else "(no function)",
                    "func_addr": ("%08x" % func.getEntryPoint().getOffset()
                                  if func else ""),
                    "is_file": is_file,
                    "text": text,
                    "instr": str(instr),
                })
    return findings, n_sites


def find_unknown_conventions(program):
    """Functions with an unknown calling convention but a locked signature."""
    from ghidra.program.model.symbol import SourceType

    findings = []
    for func in program.getFunctionManager().getFunctions(True):
        conv = func.getCallingConventionName()
        if conv not in (None, "unknown"):
            continue
        if func.getSignatureSource() == SourceType.DEFAULT:
            continue  # not locked; the decompiler is free to infer
        findings.append({
            "addr": "%08x" % func.getEntryPoint().getOffset(),
            "name": func.getName(),
            "params": func.getParameterCount(),
            "custom_storage": bool(func.hasCustomVariableStorage()),
            "source": str(func.getSignatureSource()),
        })
    findings.sort(key=lambda r: int(r["addr"], 16))
    return findings


def write_report(out_path, program_name, missing, n_sites, conventions,
                 strings, file_literals_only):
    lines = []
    lines.append("Ghidra fix-up worklist: %s" % program_name)
    lines.append("scope: %s" % ("__FILE__ literals only" if file_literals_only
                                else "all defined strings"))
    lines.append("")

    # --- MISSING-STRING-REF -------------------------------------------------
    by_func = defaultdict(list)
    for f in missing:
        by_func[(f["func_addr"], f["func"])].append(f)
    n_file = sum(1 for f in missing if f["is_file"])

    lines.append("== MISSING-STRING-REF ==")
    lines.append("  immediate-loads-a-string sites scanned : %d" % n_sites)
    lines.append("  sites with NO reference                : %d (%.1f%%)"
                 % (len(missing), 100.0 * len(missing) / n_sites if n_sites else 0.0))
    lines.append("  ... of which __FILE__ literals         : %d" % n_file)
    lines.append("  distinct functions affected            : %d" % len(by_func))
    lines.append("  Fix: add a memory reference on the immediate operand.")
    lines.append("")
    lines.append("  -- affected functions, worst first --")
    for (faddr, fname), rows in sorted(by_func.items(),
                                       key=lambda kv: (-len(kv[1]), kv[0])):
        lines.append("  %-52s %s  %d site(s)" % (fname, faddr or "--", len(rows)))
    lines.append("")
    lines.append("  -- every site --")
    for f in sorted(missing, key=lambda r: int(r["at"], 16)):
        lines.append("  %s  %-34s -> %s  %s%r"
                     % (f["at"], f["instr"], f["target"],
                        "[FILE] " if f["is_file"] else "", f["text"][:60]))
    lines.append("")

    # --- UNKNOWN-CONVENTION -------------------------------------------------
    lines.append("== UNKNOWN-CONVENTION ==")
    lines.append("  functions: %d" % len(conventions))
    lines.append("  Fix: set the calling convention on the function signature.")
    lines.append("")
    named = [c for c in conventions if not c["name"].startswith("FUN_")]
    bare = [c for c in conventions if c["name"].startswith("FUN_")]
    for label, group in (("named (higher value -- already identified)", named),
                         ("still bare FUN_*", bare)):
        if not group:
            continue
        lines.append("  -- %s (%d) --" % (label, len(group)))
        for c in group:
            lines.append("  %s  %-52s params=%-3d custom_storage=%-5s src=%s"
                         % (c["addr"], c["name"], c["params"],
                            c["custom_storage"], c["source"]))
        lines.append("")

    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")


def main():
    p = argparse.ArgumentParser(
        description="Audit a program for Ghidra-side defects needing a manual fix.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--file-literals-only", action="store_true",
                   help="Restrict the string scan to __FILE__ path literals")
    p.add_argument("--out", default=None)
    args = p.parse_args()

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_ghidra_fixups.txt" % args.program_name)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            print("Collecting defined strings...")
            strings = collect_strings(program, args.file_literals_only)
            print("  %d string(s)" % len(strings))

            print("Scanning instructions for unreferenced string immediates...")
            missing, n_sites = find_missing_string_refs(program, strings)
            print("  %d/%d site(s) missing a reference" % (len(missing), n_sites))

            print("Checking calling conventions...")
            conventions = find_unknown_conventions(program)
            print("  %d function(s) with unknown convention + locked signature"
                  % len(conventions))

            write_report(out_path, args.program_name, missing, n_sites,
                         conventions, strings, args.file_literals_only)
            print("\nReport written to: %s" % out_path)
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        code = 1

    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
