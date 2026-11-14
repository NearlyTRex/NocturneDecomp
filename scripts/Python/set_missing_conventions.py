#!/usr/bin/env python3
"""Give a committed signature that has no calling convention the one it has.

A signature set without a convention shows "unknown" in Ghidra, and the export
records no `conv`. The decompiler then falls back to the cspec's default
prototype, `__cdecl`, so labelling a caller-clean, all-stack function `__cdecl`
changes nothing it decompiles. Labelling a function that is not one would hide
the difference, so each candidate is checked first, from the exported records
and the binary:

  twin         the reference build's function of the same name has the same
               types and a non-cdecl convention: take it
  cdecl        no `RET n`, every parameter on the stack, a register return, and
               the callers' pushes, pops or stores agree with the parameters
  cdecl, unmeasured
               the same, with no call site that measures the argument size
  review       anything else, listed with the reason: a callee-pop `RET n`, a
               register parameter, a return not in a register, an argument
               register the entry block reads before writing (Watcom's
               register conventions), callers that pop a different size, or a
               non-cdecl twin with other types

Candidates are non-thunk, non-CRT functions whose signature is committed (no
`sig`) and whose `conv` is empty. Before writing, each function's live name must
still be the exported one.

Report-first; --apply sets the conventions and saves.

    python3 -u scripts/Python/set_missing_conventions.py <ABS_project_path> <project_name> bw1.exe
    python3 -u scripts/Python/set_missing_conventions.py <ABS_project_path> <project_name> bw1.exe --apply
"""

import argparse
import os
import sys
from collections import Counter

from capstone import CS_ARCH_X86, CS_MODE_32, Cs
from capstone.x86 import X86_GRP_CALL, X86_GRP_JUMP, X86_GRP_RET, X86_OP_REG

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import commit_signatures as cs  # noqa: E402
import sibling_match as sm  # noqa: E402
import verify_sibling_signatures as vss  # noqa: E402

DEFAULT = "__cdecl"
SET_VERDICTS = ("twin", "cdecl", "cdecl, unmeasured")
ARG_REGISTERS = ("eax", "edx", "ebx", "ecx", "esi", "edi")
ENTRY_SCAN_BYTES = 256


def candidates(records):
    return [r for r in records
            if r.get("addr") and not r.get("sig") and not r.get("conv") and not r.get("thunk")
            and not r.get("name", "").startswith("crt_")]


def live_on_entry(image, record):
    """Argument registers the entry block reads before writing them, in first-read order.

    Watcom's register conventions pass arguments in EAX/EDX/EBX/ECX and a struct
    return's buffer in ESI; a cdecl function reads none of them before setting them.
    Saving one (`push`) is not a read. The scan stops at the first branch, call or
    return, so a read past it is not seen."""
    entry = int(record["addr"], 16)
    off = image.va2off(entry)
    if off is None:
        return []
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    written, live = set(), []
    for ins in md.disasm(image.data[off:off + ENTRY_SCAN_BYTES], entry):
        if ins.group(X86_GRP_JUMP) or ins.group(X86_GRP_CALL) or ins.group(X86_GRP_RET):
            break
        read, write = ins.regs_access()
        read = [] if ins.mnemonic == "push" else read
        same = len(ins.operands) == 2 and ins.operands[0].type == ins.operands[1].type == X86_OP_REG \
            and ins.operands[0].reg == ins.operands[1].reg
        if same and ins.mnemonic in ("xor", "sub"):
            read = []
        for reg in (ins.reg_name(r) for r in read):
            if reg in ARG_REGISTERS and reg not in written and reg not in live:
                live.append(reg)
        written.update(ins.reg_name(r) for r in write)
    return live


def own_shape_problem(record, image, sites, cache):
    """Why `record` is not a plain caller-clean all-stack function, or None and the measurement."""
    params = (record.get("vars") or {}).get("params") or []
    if any(not (p.get("storage") or {}).get("stack") for p in params):
        return "register parameter", None
    ret_storage = (record.get("vars") or {}).get("ret_storage")
    if ret_storage and not ret_storage.get("reg"):
        return "return not in a register", None
    live = live_on_entry(image, record)
    if live:
        return "reads %s on entry" % "/".join(live), None
    verdict, detail = vss.verify_pair(record, record, image, sites, cache)
    if verdict == "conflict":
        return detail, None
    return None, verdict


def classify(record, twins, image, sites, cache):
    """-> (verdict, convention or None, detail)"""
    if len(twins) == 1 and twins[0].get("conv") not in (None, DEFAULT):
        conv = twins[0]["conv"]
        if cs.shape(record) == cs.shape(twins[0]):
            return "twin", conv, "%s, same types" % conv
        return "review", None, "twin is %s with other types: %s" % (conv, cs.describe(twins[0]))
    problem, measured = own_shape_problem(record, image, sites, cache)
    if problem:
        return "review", None, problem
    if measured == "agree":
        return "cdecl", DEFAULT, "callers agree"
    return "cdecl, unmeasured", DEFAULT, "no measuring call site"


def plan(records, reference, image):
    """[(record, verdict, convention, detail)] for every candidate, review first."""
    twins_of = cs.twin_finder(reference)
    sites = vss.call_sites_to(image)
    cache = {}
    out = [(r,) + classify(r, twins_of(r), image, sites.get(r["addr"], ()), cache) for r in candidates(records)]
    order = ("review",) + SET_VERDICTS
    return sorted(out, key=lambda row: (order.index(row[1]), row[0]["addr"]))


def render(program, reference, rows):
    counts = Counter(v for _r, v, _c, _d in rows)
    order = ("review",) + SET_VERDICTS
    lines = ["%s: %d committed signature(s) with no convention, against %s: %s" % (
        program, len(rows), reference, ", ".join("%d %s" % (counts[v], v) for v in order if counts[v]))]
    for want in order:
        group = [row for row in rows if row[1] == want]
        if not group:
            continue
        lines += ["", "-- %s --  %d" % (want, len(group))]
        lines += ["  %s  %-60s %s" % (r["addr"], r["name"], detail) for r, _v, _c, detail in group]
    return lines


def to_set(rows):
    return [(r, conv) for r, verdict, conv, _d in rows if verdict in SET_VERDICTS]


def set_conventions(program, chosen):
    """Set each function's calling convention; returns Counter of outcomes."""
    space = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    done = Counter()
    tx = program.startTransaction("Set missing calling conventions")
    ok = False
    try:
        for r, conv in chosen:
            func = fm.getFunctionAt(space.getAddress(int(r["addr"], 16)))
            if func is None or func.getName() != r["name"]:
                done["changed since export"] += 1
            elif func.getCallingConventionName() not in (None, "unknown"):
                done["already set"] += 1
            else:
                func.setCallingConvention(conv)
                done["set " + conv] += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return done


def apply(project_dir, project_name, program_name, chosen):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    try:
        with pyghidra.program_context(project, "/" + program_name) as prog:
            from ghidra.util.task import ConsoleTaskMonitor
            done = set_conventions(prog, chosen)
            prog.getDomainFile().save(ConsoleTaskMonitor())
    finally:
        project.close()
    return done


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name")
    ap.add_argument("--reference", default="nocedit.exe", help="the build whose conventions are taken")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)
    image = sm.Image(args.program_name)
    rows = plan(image.functions, sm._load_buckets(args.reference, "functions"), image)  # pylint: disable=protected-access
    print("\n".join(render(args.program_name, args.reference, rows)))
    chosen = to_set(rows)
    if not args.apply:
        print("\n(dry run -- --apply sets %d)" % len(chosen))
        return 0
    done = apply(args.project_path, args.project_name, args.program_name, chosen)
    print("\n" + "  ".join("%s=%d" % kv for kv in sorted(done.items())))
    return 0


if __name__ == "__main__":
    sys.exit(main())
