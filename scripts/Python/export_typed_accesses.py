#!/usr/bin/env python3
"""Record which struct, at which offset, each memory access of the reference build reads or writes.

derive_struct_drift.py learns a sibling build's layout changes from matched
functions: the same instruction addressing `[reg + X]` in nocedit and
`[reg + Y]` in the sibling says offset X became Y. Without knowing what `reg`
points at, the tool credits the sighting to the class whose method holds the
instruction. Structs reached any other way -- value types, records a loader
fills (C3DSCamera), pointees of other classes -- are never credited, and a
method touching another object's fields credits them to the wrong class.

nocedit's decompiler knows what `reg` points at. For each memory access
(LOAD or STORE) this walks the pointer back through the ops of the same
instruction -- field and array steps, adds, casts -- to the value the register
held, and records that value's struct type and the offset the walk added. Ops
of other instructions are not crossed: once `lea eax, [ecx + 0x40]` has run,
`[eax + 4]` is relative to the embedded member eax points at, not to ecx's
object. An access whose register value is not a pointer to a struct, or whose
offset is not a constant, is not recorded.

The offset is the instruction's displacement, so the drift tool can check each
sighting: a displacement that is not the recorded offset is not credited.

Usage:
    export_typed_accesses.py --mapping annotations/bw1.exe/reports/sibling_mapping_from_nocedit.json \\
        --mapping ... --project /abs/projects --out typed_accesses.json
"""

import argparse
import json
import os
import sys

# Ops that step a pointer within one instruction
STEPS = {"PTRSUB", "PTRADD", "INT_ADD", "INT_SUB", "CAST", "COPY"}
ACCESSES = {"LOAD", "STORE"}
TIMEOUT = 60


def pointed_struct(dt):
    """The struct a pointer type points at, typedefs seen through, or None."""
    from ghidra.program.model.data import Pointer, Structure, TypeDef
    while isinstance(dt, TypeDef):
        dt = dt.getBaseDataType()
    if not isinstance(dt, Pointer):
        return None
    target = dt.getDataType()
    while isinstance(target, TypeDef):
        target = target.getBaseDataType()
    return target if isinstance(target, Structure) else None


def pointee(varnode):
    high = varnode.getHigh()
    return pointed_struct(high.getDataType()) if high is not None else None


def _target(op):
    return op.getSeqnum().getTarget().getOffset()


def _step(op):
    """(base input, constant offset it adds) for one pointer step, or None where not constant."""
    name = op.getMnemonic()
    if name in ("CAST", "COPY"):
        return op.getInput(0), 0
    a, b = op.getInput(0), op.getInput(1)
    if name == "PTRSUB":
        return (a, b.getOffset()) if b.isConstant() else None
    if name == "PTRADD":
        size = op.getInput(2)
        return (a, b.getOffset() * size.getOffset()) if b.isConstant() and size.isConstant() else None
    if a.isConstant() and name == "INT_ADD":
        a, b = b, a
    if not b.isConstant():
        return None
    return a, (b.getOffset() if name == "INT_ADD" else -b.getOffset())


def access_root(pointer, address):
    """(struct data type, offset) the access at `address` makes through `pointer`, or None."""
    offset, varnode = 0, pointer
    while True:
        op = varnode.getDef()
        if op is None or op.getMnemonic() not in STEPS or _target(op) != address:
            break
        step = _step(op)
        if step is None:
            return None
        varnode, added = step
        offset += added
    struct = pointee(varnode)
    return (struct, signed(offset)) if struct is not None else None


def signed(value):
    """A 32-bit pcode constant sum as the signed displacement the instruction holds."""
    value &= 0xffffffff
    return value - (1 << 32) if value & 0x80000000 else value


def function_accesses(hfunc, sizes):
    """{instruction address: sorted [(struct, offset)]} over the function's loads and
    stores; each struct's length goes into `sizes`."""
    out = {}
    for op in hfunc.getPcodeOps():
        if op.getMnemonic() not in ACCESSES:
            continue
        address = _target(op)
        root = access_root(op.getInput(1), address)
        if root:
            struct, offset = root
            sizes[struct.getName()] = struct.getLength()
            out.setdefault(address, set()).add((struct.getName(), offset))
    return {a: sorted(r) for a, r in out.items()}


def _consumers(varnode):
    """The varnode and the outputs of the casts and copies that take it."""
    out = [varnode]
    for op in varnode.getDescendants():
        if op.getMnemonic() in ("CAST", "COPY") and op.getOutput() is not None:
            out.append(op.getOutput())
    return out


def size_uses(hfunc, sizes):
    """{instruction address: sorted [(struct, size, kind)]} where the code spells a
    struct's size as a constant: "alloc" -- a call returning the struct's pointer,
    passed its size (the immediate sits in an instruction before the call); "stride"
    -- indexing an array of it, the element size in that instruction. Lengths go
    into `sizes`."""
    out = {}
    for op in hfunc.getPcodeOps():
        name = op.getMnemonic()
        if name == "CALL" and op.getOutput() is not None:
            for result in _consumers(op.getOutput()):
                struct = pointee(result)
                if struct is None:
                    continue
                length = struct.getLength()
                if any(op.getInput(i).isConstant() and op.getInput(i).getOffset() == length
                       for i in range(1, op.getNumInputs())):
                    sizes[struct.getName()] = length
                    out.setdefault(_target(op), set()).add((struct.getName(), length, "alloc"))
                break
        elif name == "PTRADD":
            struct, size = pointee(op.getInput(0)), op.getInput(2)
            if struct is not None and size.isConstant() and size.getOffset() == struct.getLength() > 1:
                sizes[struct.getName()] = struct.getLength()
                out.setdefault(_target(op), set()).add((struct.getName(), struct.getLength(), "stride"))
    return {a: sorted(r) for a, r in out.items()}


def wanted(mappings):
    """Sorted reference-side function addresses over the mappings' pairs."""
    out = set()
    for path in mappings:
        with open(path, encoding="utf-8") as fh:
            out.update(int(p["a"], 16) for p in json.load(fh)["pairs"])
    return sorted(out)


def collect(program, addresses, decompiler, monitor, timeout=TIMEOUT):
    """-> ({hex address: [[struct, offset]]}, {hex address: [[struct, size, kind]]},
    {struct: length}, {"decompiled", "failed", "missing"})."""
    space = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    accesses, uses, sizes, stats = {}, {}, {}, {"decompiled": 0, "failed": 0, "missing": 0}
    for n, addr in enumerate(addresses, 1):
        if n % 500 == 0:
            print(f"  {n}/{len(addresses)}", flush=True)
        func = fm.getFunctionAt(space.getAddress(addr))
        if func is None:
            stats["missing"] += 1
            continue
        res = decompiler.decompileFunction(func, timeout, monitor)
        hfunc = res.getHighFunction() if res.decompileCompleted() else None
        if hfunc is None:
            stats["failed"] += 1
            continue
        stats["decompiled"] += 1
        for address, roots in function_accesses(hfunc, sizes).items():
            accesses[f"{address:08x}"] = [list(r) for r in roots]
        for address, found in size_uses(hfunc, sizes).items():
            uses[f"{address:08x}"] = [list(r) for r in found]
    return accesses, uses, sizes, stats


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--mapping", action="append", required=True,
                    help="a sibling mapping whose pairs' reference functions to read (repeatable)")
    ap.add_argument("--program", default="nocedit.exe")
    ap.add_argument("--project", required=True, help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--out", required=True)
    ap.add_argument("--limit", type=int, help="read only the first N functions (a trial run)")
    args = ap.parse_args(argv)

    addresses = wanted(args.mapping)[:args.limit]
    print(f"{args.program}: {len(addresses)} functions to decompile")
    import pyghidra
    pyghidra.start()
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            decompiler = DecompInterface()
            decompiler.openProgram(program)
            try:
                accesses, uses, sizes, stats = collect(program, addresses, decompiler, ConsoleTaskMonitor())
            finally:
                decompiler.dispose()
    finally:
        project.close()
    with open(args.out, "w", encoding="utf-8") as fh:
        json.dump({"program": args.program, **stats, "sizes": dict(sorted(sizes.items())),
                   "accesses": accesses, "size_uses": uses}, fh, indent=0)
    print(f"  decompiled {stats['decompiled']}, failed {stats['failed']}, missing {stats['missing']}; "
          f"{len(accesses)} typed accesses, {len(uses)} size uses -> {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
