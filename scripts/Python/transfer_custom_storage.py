#!/usr/bin/env python3
# Transfer hand-assigned parameter storage from the sibling build.
#
# Most prototypes transfer fine by letting Ghidra allocate storage from the
# calling convention. Some cannot: the Watcom FPU conventions return in ST0 and
# pass in ST0/ST1, and Ghidra has no rule to allocate those automatically, so
# asking it to do so throws and can leave the function with storage that no
# longer matches its convention -- unreadable rather than merely un-annotated.
#
# Wherever the source build has *custom* variable storage, that storage was
# assigned deliberately because automatic allocation was wrong. Copying it
# across is both more faithful and the only thing that works for the FPU
# family.
#
# Safety:
#
#   - only pairs whose argument size was independently verified
#     (`sig_verdict == agree`) are touched, because stack storage is only
#     transferable between functions that take the same arguments
#   - each function gets its own transaction, so one Ghidra rejects costs
#     nothing but itself
#   - every function is read back after the write; anything that throws is
#     rolled back rather than left in a broken state
#
# Usage:
#   GHIDRA_INSTALL_DIR=/path/to/ghidra/lib \
#   python3 -u transfer_custom_storage.py <ABS_project_path> <project_name> \
#           [program_name] --mapping verified.json [--apply]
#
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import sys
from collections import Counter

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)


def main():
    ap = argparse.ArgumentParser(
        description="Copy custom variable storage from the sibling build.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--mapping", required=True)
    ap.add_argument("--min-confidence", type=float, default=0.90)
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    with open(args.mapping) as fh:
        mapping = json.load(fh)
    # Only verified pairs: storage is only meaningful between two functions
    # that genuinely take the same arguments.
    wanted = {}
    for p in mapping.get("pairs", []):
        if p.get("sig_verdict") != "agree":
            continue
        if p.get("confidence", 0) < args.min_confidence:
            continue
        wanted[p["a"].lower()] = p
    print("%d verified pair(s) eligible" % len(wanted))

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    code = 0
    try:
        project = pyghidra.open_project(os.path.abspath(args.project_path),
                                        args.project_name)
        with pyghidra.program_context(project, "/" + args.from_program) as src:
            with pyghidra.program_context(project, "/" + args.program_name) as dst:
                from ghidra.program.model.data import DataTypeConflictHandler
                from ghidra.program.model.listing import (Function, ParameterImpl,
                                                          ReturnParameterImpl,
                                                          VariableStorage)
                from ghidra.program.model.symbol import SourceType
                from ghidra.program.model.data import Undefined4DataType
                from ghidra.util.task import ConsoleTaskMonitor
                from java.util import ArrayList

                dst_dtm = dst.getDataTypeManager()
                dst_funcs = {}
                for f in dst.getFunctionManager().getFunctions(True):
                    dst_funcs["%08x" % f.getEntryPoint().getOffset()] = f

                def readable(f):
                    """Can the function's prototype still be enumerated?

                    A bare getParameterCount() returns happily on a function
                    whose types and storage still throw, so touch everything a
                    later pass would touch.
                    """
                    try:
                        rt = f.getReturnType()
                        if rt is not None:
                            rt.getName()
                        for q in f.getParameters():
                            q.getName()
                            q.getDataType().getName()
                            q.getVariableStorage()
                        f.getSignature()
                        f.getSignatureSource()
                        return True
                    except Exception:
                        return False

                def storage_key(variable):
                    st = variable.getVariableStorage()
                    return "" if st is None else str(st)

                def already_matches(sf, tf):
                    """Does the target already carry exactly this prototype?

                    Rewriting an identical signature is pure risk: for the FPU
                    family the write can fail and take the *existing* correct
                    storage down with it, and there is nothing to gain when the
                    answer is already in place. Makes the pass idempotent.
                    """
                    try:
                        if not tf.hasCustomVariableStorage():
                            return False
                        if tf.getParameterCount() != sf.getParameterCount():
                            return False
                        for a, b in zip(sf.getParameters(), tf.getParameters()):
                            if a.getName() != b.getName():
                                return False
                            if a.getDataType().getName() != b.getDataType().getName():
                                return False
                            if storage_key(a) != storage_key(b):
                                return False
                        sr, tr = sf.getReturn(), tf.getReturn()
                        return (sr.getDataType().getName() == tr.getDataType().getName()
                                and storage_key(sr) == storage_key(tr))
                    except Exception:
                        return False

                def storage_for(variable):
                    """Rebuild a variable's storage against the target program.

                    A `void` return and an unassigned parameter both carry no
                    varnodes, and the VariableStorage constructor rejects an
                    empty list -- they need the singleton storages instead.
                    """
                    st = variable.getVariableStorage()
                    varnodes = st.getVarnodes()
                    if varnodes is None or len(varnodes) == 0:
                        return (VariableStorage.VOID_STORAGE if st.isVoidStorage()
                                else VariableStorage.UNASSIGNED_STORAGE)
                    return VariableStorage(dst, varnodes)

                jobs = []
                for f in src.getFunctionManager().getFunctions(True):
                    a = "%08x" % f.getEntryPoint().getOffset()
                    pair = wanted.get(a)
                    if pair is None or not f.hasCustomVariableStorage():
                        continue
                    target = dst_funcs.get(pair["b"].lower())
                    if target is not None:
                        jobs.append((f, target, pair))

                print("%d have custom storage and a target function" % len(jobs))
                counts = Counter()
                rows = []
                for sf, tf, pair in jobs:
                    conv = sf.getCallingConventionName()
                    rows.append((("%08x" % tf.getEntryPoint().getOffset()), conv,
                                 sf.getParameterCount(), pair["shape_agreement"]))
                    counts[conv or "?"] += 1

                print("\nby calling convention:")
                for k, n in counts.most_common():
                    print("  %-22s %d" % (k, n))

                if not args.apply:
                    print("\nsample:")
                    for addr, conv, np, shape in rows[:12]:
                        print("  %s conv=%-18s params=%d shape=%s"
                              % (addr, conv, np, shape))
                    print("\n[dry-run] re-run with --apply to transfer.")
                else:
                    done = failed = skipped = 0
                    problems = []
                    unrepaired = []
                    for sf, tf, pair in jobs:
                        addr = "%08x" % tf.getEntryPoint().getOffset()
                        if already_matches(sf, tf):
                            skipped += 1
                            continue
                        tx = dst.startTransaction("custom storage %s" % addr)
                        ok = True
                        try:
                            params = ArrayList()
                            for q in sf.getParameters():
                                dt = dst_dtm.resolve(
                                    q.getDataType(),
                                    DataTypeConflictHandler.KEEP_HANDLER)
                                params.add(ParameterImpl(q.getName(), dt,
                                                         storage_for(q), dst))
                            sret = sf.getReturn()
                            rdt = dst_dtm.resolve(
                                sret.getDataType(),
                                DataTypeConflictHandler.KEEP_HANDLER)
                            ret_var = ReturnParameterImpl(rdt, storage_for(sret),
                                                          dst)

                            tf.updateFunction(
                                sf.getCallingConventionName(), ret_var, params,
                                Function.FunctionUpdateType.CUSTOM_STORAGE,
                                True, SourceType.USER_DEFINED)
                            # Read it back: a write Ghidra accepted but cannot
                            # re-read is exactly the state worth rolling back.
                            # Enumerate everything a later pass would touch --
                            # a bare getParameterCount() returns happily on a
                            # function whose types and storage still throw.
                            if not readable(tf):
                                raise RuntimeError("unreadable after write")
                            if tf.getParameterCount() != sf.getParameterCount():
                                raise RuntimeError(
                                    "parameter count %d != source %d"
                                    % (tf.getParameterCount(),
                                       sf.getParameterCount()))
                        except Exception as e:
                            ok = False
                            problems.append((addr, sf.getCallingConventionName(),
                                             str(e).split("\n")[0][:70]))
                        dst.endTransaction(tx, ok)
                        if ok:
                            done += 1
                        else:
                            failed += 1
                            # Ending the transaction uncommitted does NOT
                            # reliably undo a half-assigned signature -- it was
                            # measured leaving the FPU family unreadable on the
                            # next open, which aborts the annotation export.
                            # Repair explicitly instead of trusting rollback.
                            rtx = dst.startTransaction("repair %s" % addr)
                            try:
                                tf.setCustomVariableStorage(False)
                                tf.updateFunction(
                                    None,
                                    ReturnParameterImpl(Undefined4DataType(), dst),
                                    ArrayList(),
                                    Function.FunctionUpdateType
                                    .DYNAMIC_STORAGE_FORMAL_PARAMS,
                                    True, SourceType.ANALYSIS)
                            except Exception:
                                pass
                            dst.endTransaction(rtx, True)
                            # Verify only after the commit: the function's state
                            # settles at the transaction boundary, so a check
                            # inside the transaction reports the damage rather
                            # than the repair.
                            if not readable(tf):
                                unrepaired.append(addr)

                    print("\ntransferred %d, rejected %d, already correct %d"
                          % (done, failed, skipped))
                    for addr, conv, msg in problems[:15]:
                        print("  %s conv=%-18s %s" % (addr, conv, msg))
                    if unrepaired:
                        print("\n%d function(s) left UNREADABLE -- the annotation "
                              "export will abort until these are repaired:"
                              % len(unrepaired))
                        for addr in unrepaired:
                            print("  %s" % addr)
                    # Repairs are mutations too, and are the ones that must not
                    # be lost -- save whenever anything was written.
                    if done or failed:
                        print("Saving...")
                        dst.getDomainFile().save(ConsoleTaskMonitor())
                        print("Saved.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
