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

Usage:
    repair_broken_signatures.py                  # report only
    repair_broken_signatures.py --fix
"""

import argparse
import os
import sys

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--project-dir",
                    default=os.path.join(os.path.dirname(
                        os.path.dirname(os.path.abspath(__file__))), "..", "projects"))
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--fix", action="store_true", help="apply the repair")
    args = ap.parse_args()

    import pyghidra
    pyghidra.start()
    from ghidra.program.model.data import VoidDataType
    from ghidra.program.model.listing import ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor
    from java.util import ArrayList

    project = pyghidra.open_project(os.path.abspath(args.project_dir), args.project_name)
    broken, fixed, still = [], 0, []
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            monitor = ConsoleTaskMonitor()
            for func in program.getFunctionManager().getFunctions(True):
                try:
                    func.getReturnType()
                except Exception as exc:
                    broken.append((str(func.getEntryPoint()), func.getName(),
                                   type(exc).__name__))

            print("=" * 70)
            print(f"UNREADABLE SIGNATURES  ({args.program})")
            print("=" * 70)
            print(f"  functions whose getReturnType() throws: {len(broken)}")
            for addr, name, kind in broken:
                print(f"    {addr}  {name}")

            if broken and args.fix:
                txid = program.startTransaction("repair broken signatures")
                try:
                    for addr, name, _ in broken:
                        f = program.getFunctionManager().getFunctionAt(
                            program.getAddressFactory().getDefaultAddressSpace()
                            .getAddress(addr))
                        if f is None:
                            still.append((addr, name, "function not found"))
                            continue
                        # Escalating repairs, weakest first. Clearing the
                        # custom-storage flag is enough for most; a function
                        # whose return *parameter* row is itself gone needs the
                        # signature rebuilt outright.
                        def clear_and_void(fn):
                            # Order matters and so does doing both: clearing
                            # the flag alone passes getReturnType() in-session
                            # but does not survive a reload, because Ghidra
                            # re-derives ST0 storage from the FPU convention
                            # and lands back in the same empty-list state.
                            # Writing an explicit return type is what sticks.
                            fn.setCustomVariableStorage(False)
                            fn.setReturnType(VoidDataType.dataType,
                                             SourceType.USER_DEFINED)

                        # NOTE: "clear custom storage" alone is deliberately not
                        # in this list. It passes the in-session read-back and
                        # then does not survive a reload, so including it lets
                        # it shadow the strategies that actually persist. The
                        # in-session check cannot be trusted to rank these --
                        # only a fresh process can -- so the order is fixed by
                        # what has been observed to stick.
                        strategies = [
                            ("set return void",
                             lambda fn: fn.setReturnType(VoidDataType.dataType,
                                                         SourceType.USER_DEFINED)),
                            ("clear custom storage + set return void", clear_and_void),
                            ("rebuild signature",
                             lambda fn: fn.updateFunction(
                                 None,
                                 ReturnParameterImpl(VoidDataType.dataType, program),
                                 ArrayList(),
                                 fn.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                                 True, SourceType.USER_DEFINED)),
                        ]
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
                program.getDomainFile().save(monitor)
                print(f"\n  repaired {fixed}, still broken {len(still)}")
                for addr, name, why in still:
                    print(f"    STILL BROKEN {addr} {name}: {why}")
            elif broken:
                print("\n(report only -- re-run with --fix to repair)")
    finally:
        project.close()

    os._exit(0 if not still else 1)


if __name__ == "__main__":
    main()
