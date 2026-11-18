#!/usr/bin/env python3
"""Transfer hand-assigned parameter storage from the sibling build.

Most prototypes transfer fine by letting Ghidra allocate storage from the
calling convention. Some cannot: the Watcom FPU conventions return in ST0 and
pass in ST0/ST1, and Ghidra has no rule to allocate those automatically, so
asking it to do so throws and can leave the function with storage that no
longer matches its convention -- unreadable rather than merely un-annotated.

Wherever the source build has *custom* variable storage, that storage was
assigned deliberately because automatic allocation was wrong. Copying it
across is both more faithful and the only thing that works for the FPU
family.

Safety:

  - a pair qualifies on exactly the evidence apply_sibling_annotations.py
    takes for a prototype (`signature_evidence`, with the same --trust-*
    flags); stack storage only transfers between functions that take the same
    arguments. Walled-off CRT pairs are out, and so is a pair verify rewrote
    (its `sig_rewrite`): the source's storage is the one it found wrong for
    this target
  - types are resolved by name in the target, never copied in from the source:
    a struct the target lacks would arrive with the source's layout. A missing
    type skips the function
  - a target whose prototype is already typed is kept: a deliberate divergence
    from the source is not this tool's to overwrite
  - each function gets its own transaction, and is read back after the write;
    anything that throws is repaired rather than left broken (ending the
    transaction uncommitted does not undo it). In-session read-backs can be
    wrong either way, so a run with rejections names the fresh-process check

Usage:
  GHIDRA_INSTALL_DIR=/path/to/ghidra/lib \\
  python3 -u transfer_custom_storage.py <ABS_project_path> <project_name> \\
          [program_name] --mapping verified.json [--crt-wall wall.json] [--apply]
"""
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import apply_sibling_annotations as asa  # noqa: E402


def eligible_pairs(mapping, min_confidence, interior=(), trust_measured=False, trust_structural=False):
    """source address -> pair, for the pairs whose prototype the applier would carry."""
    wanted = {}
    for p in mapping.get("pairs", []):
        if p.get("sig_rewrite") or p["b"].lower() in interior:
            continue
        if asa.signature_evidence(p, p["confidence"] >= min_confidence, min_confidence,
                                  trust_measured, trust_structural):
            wanted[p["a"].lower()] = p
    return wanted


def readable(func):
    """Can the function's prototype still be enumerated?

    A bare getParameterCount() returns happily on a function whose types and
    storage still throw, so touch everything a later pass would touch.
    """
    try:
        ret = func.getReturnType()
        if ret is not None:
            ret.getName()
        for q in func.getParameters():
            q.getName()
            q.getDataType().getName()
            q.getVariableStorage()
        func.getSignature()
        func.getSignatureSource()
        return True
    except Exception:
        return False


def storage_key(variable):
    storage = variable.getVariableStorage()
    return "" if storage is None else str(storage)


def already_matches(sf, tf):
    """Does the target already carry exactly this prototype?

    Rewriting an identical signature is pure risk: for the FPU family the write
    can fail and take the *existing* correct storage down with it. Makes the
    pass idempotent.
    """
    try:
        if not tf.hasCustomVariableStorage():
            return False
        if tf.getParameterCount() != sf.getParameterCount():
            return False
        for a, b in zip(sf.getParameters(), tf.getParameters()):
            if a.getName() != b.getName() \
                    or a.getDataType().getName() != b.getDataType().getName() \
                    or storage_key(a) != storage_key(b):
                return False
        sr, tr = sf.getReturn(), tf.getReturn()
        return (sr.getDataType().getName() == tr.getDataType().getName()
                and storage_key(sr) == storage_key(tr))
    except Exception:
        return False


def storage_for(variable, program):
    """Rebuild a variable's storage against the target program.

    A `void` return and an unassigned parameter both carry no varnodes, and the
    VariableStorage constructor rejects an empty list -- they need the
    singleton storages instead.
    """
    from ghidra.program.model.listing import VariableStorage

    storage = variable.getVariableStorage()
    varnodes = storage.getVarnodes()
    if varnodes is None or len(varnodes) == 0:
        return (VariableStorage.VOID_STORAGE if storage.isVoidStorage()
                else VariableStorage.UNASSIGNED_STORAGE)
    return VariableStorage(program, varnodes)


def target_types(sf, dtm, cache):
    """(return type, [parameter types]) by name in the target, or the first name it lacks."""
    ret_name = sf.getReturn().getDataType().getName()
    ret = asa.resolve_type(dtm, ret_name, cache)
    if ret is None:
        return None, ret_name
    types = []
    for q in sf.getParameters():
        name = q.getDataType().getName()
        dt = asa.resolve_type(dtm, name, cache)
        if dt is None:
            return None, name
        types.append(dt)
    return (ret, types), None


def find_jobs(src, dst, wanted):
    """(source function, target function, pair) for each eligible source with custom storage."""
    dst_funcs = {"%08x" % f.getEntryPoint().getOffset(): f
                 for f in dst.getFunctionManager().getFunctions(True)}
    jobs = []
    for f in src.getFunctionManager().getFunctions(True):
        pair = wanted.get("%08x" % f.getEntryPoint().getOffset())
        if pair is None or not f.hasCustomVariableStorage():
            continue
        target = dst_funcs.get(pair["b"].lower())
        if target is not None:
            jobs.append((f, target, pair))
    return jobs


def write_prototype(dst, sf, tf, types):
    """Give `tf` the source's prototype with its storage; raises when Ghidra will not hold it."""
    from ghidra.program.model.listing import Function, ParameterImpl, ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from java.util import ArrayList

    ret_type, param_types = types
    params = ArrayList()
    for q, dt in zip(sf.getParameters(), param_types):
        params.add(ParameterImpl(q.getName(), dt, storage_for(q, dst), dst))
    ret_var = ReturnParameterImpl(ret_type, storage_for(sf.getReturn(), dst), dst)
    tf.updateFunction(sf.getCallingConventionName(), ret_var, params,
                      Function.FunctionUpdateType.CUSTOM_STORAGE, True, SourceType.USER_DEFINED)
    # Read it back: a write Ghidra accepted but cannot re-read is exactly the
    # state worth undoing.
    if not readable(tf):
        raise RuntimeError("unreadable after write")
    if tf.getParameterCount() != sf.getParameterCount():
        raise RuntimeError("parameter count %d != source %d"
                           % (tf.getParameterCount(), sf.getParameterCount()))


def repair(dst, tf, addr):
    """Reset a function a failed write left half-assigned; True when it reads again.

    Clear the flag AND write a return type, in that order, as
    repair_broken_signatures.py does: clearing alone passes a read-back and
    reverts on reload, and so does an empty dynamic-storage rewrite. Even this
    check is in-session, which can be wrong either way -- confirm any rejected
    run with repair_broken_signatures.py from a fresh process.
    """
    from ghidra.program.model.data import VoidDataType
    from ghidra.program.model.symbol import SourceType

    tx = dst.startTransaction("repair %s" % addr)
    try:
        tf.setCustomVariableStorage(False)
        tf.setReturnType(VoidDataType.dataType, SourceType.USER_DEFINED)
    except Exception:
        pass
    dst.endTransaction(tx, True)
    return readable(tf)


def plan(jobs, dtm):
    """Per job: (job, action, detail, types). Actions: write, same, typed, missing."""
    cache = {}
    out = []
    for sf, tf, pair in jobs:
        if already_matches(sf, tf):
            out.append(((sf, tf, pair), "same", "", None))
            continue
        if asa.prototype_typed(tf):
            out.append(((sf, tf, pair), "typed", "target prototype already typed", None))
            continue
        types, missing = target_types(sf, dtm, cache)
        if types is None:
            out.append(((sf, tf, pair), "missing", missing, None))
        else:
            out.append(((sf, tf, pair), "write", "", types))
    return out


def apply_plan(dst, planned):
    """Write every `write` row; returns (done, [(addr, conv, problem)], [unrepaired addr])."""
    done, problems, unrepaired = 0, [], []
    for (sf, tf, _pair), action, _detail, types in planned:
        if action != "write":
            continue
        addr = "%08x" % tf.getEntryPoint().getOffset()
        tx = dst.startTransaction("custom storage %s" % addr)
        ok = True
        try:
            write_prototype(dst, sf, tf, types)
        except Exception as e:
            ok = False
            problems.append((addr, sf.getCallingConventionName(), str(e).split("\n")[0][:70]))
        dst.endTransaction(tx, ok)
        if ok:
            done += 1
        elif not repair(dst, tf, addr):
            unrepaired.append(addr)
    return done, problems, unrepaired


def report(planned):
    counts = Counter(action for _, action, _, _ in planned)
    print("plan: " + "  ".join("%s=%d" % (k, counts[k])
                               for k in ("write", "same", "typed", "missing") if counts[k]))
    convs = Counter(sf.getCallingConventionName() or "?" for (sf, _, _), _, _, _ in planned)
    print("by calling convention:")
    for conv, n in convs.most_common():
        print("  %-22s %d" % (conv, n))
    for (sf, tf, pair), action, detail, _ in planned:
        print("  %-7s %08x <- %s  %-18s %s%s" % (
            action, tf.getEntryPoint().getOffset(), pair["a"], sf.getCallingConventionName(),
            pair.get("name", ""), ("  (%s)" % detail) if detail else ""))


def main(argv=None):
    ap = argparse.ArgumentParser(description="Copy custom variable storage from the sibling build.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--mapping", required=True)
    ap.add_argument("--crt-wall", help="wall_off_crt.py output; skips CRT interior")
    ap.add_argument("--min-confidence", type=float, default=0.90)
    ap.add_argument("--trust-measured-signature", action="store_true",
                    help="as apply_sibling_annotations.py: a measured agreement outweighs a weak shape")
    ap.add_argument("--trust-structural-signature", action="store_true",
                    help="as apply_sibling_annotations.py: take verify's structural match")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)

    with open(args.mapping) as fh:
        mapping = json.load(fh)
    interior = set()
    if args.crt_wall:
        with open(args.crt_wall) as fh:
            interior = {a.lower() for a in json.load(fh).get("crt_interior", [])}
    wanted = eligible_pairs(mapping, args.min_confidence, interior, args.trust_measured_signature,
                            args.trust_structural_signature)
    print("%d pair(s) eligible" % len(wanted))

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    code = 0
    try:
        project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
        with pyghidra.program_context(project, "/" + args.from_program) as src, \
                pyghidra.program_context(project, "/" + args.program_name) as dst:
            jobs = find_jobs(src, dst, wanted)
            print("%d have custom storage and a target function" % len(jobs))
            planned = plan(jobs, dst.getDataTypeManager())
            report(planned)
            if not args.apply:
                print("\n[dry-run] re-run with --apply to transfer.")
            else:
                done, problems, unrepaired = apply_plan(dst, planned)
                print("\ntransferred %d, rejected %d" % (done, len(problems)))
                for addr, conv, msg in problems[:15]:
                    print("  %s conv=%-18s %s" % (addr, conv, msg))
                if unrepaired:
                    print("\n%d function(s) left UNREADABLE -- the annotation export will abort "
                          "until these are repaired:" % len(unrepaired))
                    for addr in unrepaired:
                        print("  %s" % addr)
                if problems:
                    print("\nconfirm from a fresh process: repair_broken_signatures.py --program %s"
                          % args.program_name)
                # Repairs are mutations too, and are the ones that must not be
                # lost -- save whenever anything was written.
                if done or problems:
                    from ghidra.util.task import ConsoleTaskMonitor
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
