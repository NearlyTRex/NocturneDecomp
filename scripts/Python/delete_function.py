#!/usr/bin/env python3
"""
delete_function.py

Delete one or more mis-defined functions from a Ghidra program - the case that
neither fix_function_boundaries.py (which only MOVES or MERGES entries) nor
validate_function_ranges.py (which only repairs BODIES) can handle: a function
whose entry is stamped into a place where no real function exists at all, e.g.
1 byte inside an import/dispatch jump-thunk table, inside a jump table, or over
data. There is no valid start to slide the boundary to - the function must be
removed outright.

Report-first. Pass --apply to snapshot the project, then mutate + save.

For each target address:
  * getFunctionAt(addr) - the entry must land EXACTLY on a function entry.
  * Report the name, body range/size, and every incoming reference (call vs
    data - a data ref usually means a vtable slot, i.e. a real virtual method:
    do NOT delete those).
  * SAFETY: a function with ANY incoming reference is skipped unless --force.
    A genuinely bogus function (mid-thunk, in a jump table, over data) has zero
    incoming refs; refs are the signal that it is real.

On --apply, per target:
  * removeFunction(entry).
  * clear_vacated_symbol(): removeFunction() only DEMOTES the function symbol to a
    plain global label, stranding a phantom importable symbol at the old entry;
    delete it, matching by exact name so real LAB_*/jump-target labels survive.
  * --undefine: also clear the disassembled code units over the former body, so
    the mis-decoded bytes revert to undefined (use when the "function" was a
    mis-decode of data / a thunk-table interior and the instructions are garbage).

Persist: getDomainFile().save() - project.save() alone silently discards changes.

Usage:
    GHIDRA_INSTALL_DIR=/path/to/ghidra/lib \
    python3 -u delete_function.py <ABS_project_path> <project_name> [program_name] \
            --addr 005748cd [--addr ...] [--apply] [--undefine] [--force] [--no-snapshot]
"""

import argparse
import os
import subprocess
import sys
import traceback

# fix_misaligned_functions reaches it through this module
from fix_function_boundaries import clear_vacated_symbol  # noqa: F401

THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def parse_addr(program, hexstr):
    s = hexstr.lower()
    if s.startswith("0x"):
        s = s[2:]
    space = program.getAddressFactory().getDefaultAddressSpace()
    return space.getAddress(int(s, 16))


def incoming_refs(program, entry):
    """Return (n_call, n_data, n_other, sample_sources) for refs TO entry."""
    rm = program.getReferenceManager()
    n_call = n_data = n_other = 0
    sample = []
    it = rm.getReferencesTo(entry)
    while it.hasNext():
        ref = it.next()
        rt = ref.getReferenceType()
        if rt.isCall():
            n_call += 1
        elif rt.isData():
            n_data += 1
        else:
            n_other += 1
        if len(sample) < 6:
            sample.append("%s(%s)" % (ref.getFromAddress(), rt.getName()))
    return n_call, n_data, n_other, sample


def gather(program, hexstr):
    fm = program.getFunctionManager()
    entry = parse_addr(program, hexstr)
    fn = fm.getFunctionAt(entry)
    info = {"req": hexstr, "entry": entry, "func": fn, "skip": None}
    if fn is None:
        containing = fm.getFunctionContaining(entry)
        if containing is not None:
            info["skip"] = ("no function AT %s; it is interior to %s @ %s "
                            "(pass that entry if you meant to delete it)"
                            % (entry, containing.getName(), containing.getEntryPoint()))
        else:
            info["skip"] = "no function at or containing %s" % entry
        return info
    info["name"] = fn.getName()
    body = fn.getBody()
    info["body_min"] = body.getMinAddress()
    info["body_max"] = body.getMaxAddress()
    info["body_size"] = body.getNumAddresses()
    n_call, n_data, n_other, sample = incoming_refs(program, entry)
    info["n_call"], info["n_data"], info["n_other"] = n_call, n_data, n_other
    info["ref_sample"] = sample
    return info


def report(infos, force):
    """Print each target, and mark the referenced ones skipped unless force."""
    print("\nDelete-function report")
    print("=" * 60)
    for i in infos:
        if i["func"] is None:
            print("%-10s  SKIP: %s" % (i["req"], i["skip"]))
            continue
        refs = i["n_call"] + i["n_data"] + i["n_other"]
        print("%-10s  %s" % (i["entry"], i["name"]))
        print("      body [%s - %s]  %d byte(s)" % (i["body_min"], i["body_max"], i["body_size"]))
        print("      incoming refs: %d call, %d data, %d other%s" % (
            i["n_call"], i["n_data"], i["n_other"],
            ("  e.g. " + ", ".join(i["ref_sample"])) if i["ref_sample"] else ""))
        if refs > 0 and not force:
            i["skip"] = ("has %d incoming ref(s) - real functions get referenced; "
                         "use --force to delete anyway" % refs)
            print("      -> WILL SKIP: %s" % i["skip"])
            if i["n_data"] > 0:
                print("      -> NOTE: data refs usually mean a vtable slot (a real "
                      "virtual method). Deleting is almost certainly wrong.")
        else:
            print("      -> deletable")
    print("=" * 60)


def apply(program, infos, undefine):
    """Delete the unskipped targets in one transaction.

    Returns (ok, changed): ok is False when an error rolled the transaction back.
    """
    fm = program.getFunctionManager()
    listing = program.getListing()

    changed = False
    stale = 0
    tx = program.startTransaction("Delete mis-defined functions")
    ok = True
    try:
        for i in infos:
            if i["skip"]:
                continue
            entry = i["entry"]
            name = i["name"]
            # capture body ranges before removal (removeFunction leaves the code)
            ranges = []
            if undefine:
                for r in i["func"].getBody().getAddressRanges():
                    ranges.append((r.getMinAddress(), r.getMaxAddress()))

            if not fm.removeFunction(entry):
                print("  !! removeFunction returned False for %s (%s)" % (entry, name))
                continue
            stale += clear_vacated_symbol(program, entry, name)

            for lo, hi in ranges:
                listing.clearCodeUnits(lo, hi, False)
            changed = True
            print("  deleted %s (%s)%s" % (
                entry, name,
                ("  + undefined %d body range(s)" % len(ranges)) if undefine else ""))
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)

    if stale:
        print("cleared %d stale symbol(s) at vacated entry addresses" % stale)
    return ok, changed


def write_report(out_path, args, infos, actionable):
    lines = ["Delete-function report: %s" % args.program_name,
             "requested: %d  actionable: %d  mode: %s%s" % (
                 len(infos), len(actionable),
                 "APPLY" if args.apply else "report",
                 " (--undefine)" if args.undefine else ""), ""]
    for i in infos:
        if i["func"] is None:
            lines.append("%-10s  --  SKIP: %s" % (i["req"], i["skip"]))
        else:
            lines.append("%-10s  %-50s refs=%d/%d/%d  %s" % (
                i["entry"], i["name"], i["n_call"], i["n_data"], i["n_other"],
                ("SKIP: %s" % i["skip"]) if i["skip"] else "deletable"))
    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")
    print("\nReport written to: %s" % out_path)


def run(program, args, out_path):
    """Report, and with --apply delete and save. Returns the exit code."""
    infos = [gather(program, h) for h in args.addr]
    report(infos, args.force)
    actionable = [i for i in infos if not i["skip"]]
    write_report(out_path, args, infos, actionable)

    if not args.apply:
        print("\n[dry-run] re-run with --apply to execute.")
        return 0
    if not actionable:
        print("\nNothing actionable to apply (all targets skipped).")
        return 0
    print("\n[apply] deleting %d function(s)" % len(actionable))
    ok, changed = apply(program, infos, args.undefine)
    if ok and changed:
        from ghidra.util.task import ConsoleTaskMonitor
        print("Saving program database...")
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    return 0 if ok else 1


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_path), args.project_name, "--tag", "pre-delete-function"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    p = argparse.ArgumentParser(description="Delete mis-defined (bogus) functions from a Ghidra program.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--addr", action="append", default=[], required=True, metavar="HEX",
                   help="function entry address to delete (repeatable), e.g. 005748cd")
    p.add_argument("--apply", action="store_true", help="Mutate + save (default: report only)")
    p.add_argument("--undefine", action="store_true",
                   help="Also clear the disassembled code units over the removed body "
                        "(revert mis-decoded bytes to undefined)")
    p.add_argument("--force", action="store_true",
                   help="Delete even functions that have incoming references (DANGEROUS)")
    p.add_argument("--no-snapshot", action="store_true", help="--apply without a .gar snapshot first")
    p.add_argument("--out", default=None)
    args = p.parse_args(argv)

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_deleted_functions.txt" % args.program_name)

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
