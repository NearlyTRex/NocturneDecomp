#!/usr/bin/env python3
"""Find and repair functions whose signature is in an unreadable state.

A `Function.updateFunction()` call that throws part-way can leave the function
flagged for custom variable storage with no storage actually recorded. Nothing
warns about it; the damage only surfaces later when something asks for the
return type and gets `IndexOutOfBoundsException: Index 0 out of bounds for
length 0` -- which aborts the whole annotation export, because
`export_functions` reads every function's return type.

That is what a Watcom FPU-convention function does when you hand it
`DYNAMIC_STORAGE_FORMAL_PARAMS`: `__fpureg` / `__fpustack_safe` return in ST0
and require CUSTOM_STORAGE, so the update fails after the storage flag is
already set.

Repair is to clear custom variable storage, which drops the empty storage list
and returns the function to ordinary dynamic storage. Any function that was
unsignatured before the damage is then exactly where it started.

--fix takes a .gar snapshot first unless --no-snapshot.

Usage:
    repair_broken_signatures.py                  # report only
    repair_broken_signatures.py --fix
"""

import argparse
import os
import subprocess
import sys

THIS_DIR = os.path.dirname(os.path.abspath(__file__))


def find_broken(program):
    """[(address, name, exception class)] of every function whose return type cannot be read."""
    broken = []
    for func in program.getFunctionManager().getFunctions(True):
        try:
            func.getReturnType()
        except Exception as exc:
            broken.append((str(func.getEntryPoint()), func.getName(), type(exc).__name__))
    return broken


def repair_strategies(program):
    """Escalating repairs, weakest first, as (label, action(function)).

    Clearing the custom-storage flag alone is deliberately not in this list. It
    passes the in-session read-back and then does not survive a reload, because
    Ghidra re-derives ST0 storage from the FPU convention and lands back in the
    same empty-list state, so including it would shadow the strategies that
    actually persist. The in-session check cannot rank these -- only a fresh
    process can -- so the order is fixed by what has been observed to stick.
    """
    from ghidra.program.model.data import VoidDataType
    from ghidra.program.model.listing import ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from java.util import ArrayList

    def set_void(fn):
        fn.setReturnType(VoidDataType.dataType, SourceType.USER_DEFINED)

    def clear_and_void(fn):
        # Both, in this order: writing an explicit return type is what sticks
        fn.setCustomVariableStorage(False)
        set_void(fn)

    def rebuild(fn):
        # A function whose return *parameter* row is itself gone needs the signature rebuilt outright
        fn.updateFunction(None, ReturnParameterImpl(VoidDataType.dataType, program), ArrayList(),
                          fn.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, True,
                          SourceType.USER_DEFINED)

    return [("set return void", set_void),
            ("clear custom storage + set return void", clear_and_void),
            ("rebuild signature", rebuild)]


def repair(program, broken):
    """Repair each broken function in one transaction. Returns (fixed, [(address, name, why)])."""
    fixed, still = 0, []
    strategies = repair_strategies(program)
    space = program.getAddressFactory().getDefaultAddressSpace()
    txid = program.startTransaction("repair broken signatures")
    try:
        for addr, name, _ in broken:
            f = program.getFunctionManager().getFunctionAt(space.getAddress(addr))
            if f is None:
                still.append((addr, name, "function not found"))
                continue
            healed = None
            for label, action in strategies:
                try:
                    action(f)
                    f.getReturnType()      # prove it reads now
                    healed = label
                    break
                except Exception:
                    continue
            if healed:
                fixed += 1
                print(f"    repaired {addr} {name}  ({healed})")
            else:
                still.append((addr, name, "all strategies failed"))
    finally:
        program.endTransaction(txid, True)
    return fixed, still


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_dir), args.project_name, "--tag", "pre-repair-signatures"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def run(program, args):
    """Report, and with --fix repair and save. Returns the functions still broken."""
    broken = find_broken(program)
    print("=" * 70)
    print(f"UNREADABLE SIGNATURES  ({args.program})")
    print("=" * 70)
    print(f"  functions whose getReturnType() throws: {len(broken)}")
    for addr, name, _ in broken:
        print(f"    {addr}  {name}")
    if not broken:
        return []
    if not args.fix:
        print("\n(report only -- re-run with --fix to repair)")
        return []

    from ghidra.util.task import ConsoleTaskMonitor
    fixed, still = repair(program, broken)
    program.getDomainFile().save(ConsoleTaskMonitor())
    print(f"\n  repaired {fixed}, still broken {len(still)}")
    for addr, name, why in still:
        print(f"    STILL BROKEN {addr} {name}: {why}")
    return still


def main(argv=None):
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--project-dir", default=os.path.join(THIS_DIR, "..", "..", "projects"))
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--fix", action="store_true", help="apply the repair")
    ap.add_argument("--no-snapshot", action="store_true", help="--fix without a .gar snapshot first")
    args = ap.parse_args(argv)

    if args.fix and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.", flush=True)
        os._exit(1)

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_dir), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            still = run(program, args)
    finally:
        project.close()

    # os._exit skips atexit AND the stdio flush. Without this, a redirected run
    # (pipe or file -> block-buffered stdout) discards the entire report and
    # exits 0, which reads as "nothing was broken". Flush before exiting; the
    # hard exit itself has to stay, since a lingering JVM thread would hang a
    # normal interpreter shutdown.
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(0 if not still else 1)


if __name__ == "__main__":
    main()
