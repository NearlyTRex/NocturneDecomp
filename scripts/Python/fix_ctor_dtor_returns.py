#!/usr/bin/env python3
"""
fix_ctor_dtor_returns.py

Make constructor and destructor return types agree with their receiver.

THE CONVENTION
--------------
Watcom C++ compiles a constructor and a destructor to return `this` in EAX, so
the natural typing is

    CChain  * CChain_ctor(CChain  * this_ptr)
    CBatCreature * CBatCreature_dtor(CBatCreature * this_ptr, uint flags)

and the codebase already follows it: over 96% of the ctor/dtor/arrdtor functions
in both binaries have `return type == type of parameter 0`. This script finds and
fixes the stragglers.

IT IS NOT AN ABSOLUTE RULE, WHICH IS WHY THIS CHECKS THE ASSEMBLY
-----------------------------------------------------------------
A handful of functions genuinely do not return their receiver, and forcing the
convention on them would invent a return value that does not exist:

  * `CExternalRenderer_ctor` uses AH as a scratch (`OR AH,0x1`) after the last
    write to EAX, so EAX at RET is not a pointer at all. `void` is correct.
  * `istrstream_ctor` / `ifstream_ctor` / `ofstream_ctor` end with `SUB EAX,0x44`
    or `SUB EAX,0x48` - they return an *adjusted* base subobject pointer, not the
    receiver. Their receiver and their return are legitimately different.
  * the CRT's own `__arrdtor` returns a field (`MOV EAX,[EBX+0x8]`), not `this`.

So every proposed change is backed by evidence read out of the function's own
instructions, and anything without that evidence is reported rather than applied.

HOW THE EVIDENCE WORKS
----------------------
1. Find the receiver register: the register loaded from the parameter-0 stack
   slot in the prologue, accounting for the entry pushes (`MOV EBX,[ESP+0x8]`
   after one `PUSH` means the receiver is in EBX).
2. From every `RET`, walk backwards to the instruction that last wrote EAX -
   skipping everything that does not touch it, because Watcom routinely emits
   `MOV EAX,EBX` several instructions before the epilogue.
3. Classify that writer:
     MOV EAX,<receiver reg>            -> returns this          (RETURNS_THIS)
     MOV EAX,[ESP+<param0 slot>]       -> returns this          (RETURNS_THIS)
     a CALL                           -> EAX is the callee's   (VIA_CALL)
     anything else                     -> does not return this  (NOT_THIS)

WHAT IT DOES WITH EACH VERDICT
------------------------------
  consistent                                   -> nothing, counted only
  receiver is void*/undefined*, return is a
    concrete class pointer, RETURNS_THIS       -> FIX_RECEIVER  (retype param 0)
  receiver and return are different concrete
    types, RETURNS_THIS                        -> FIX_RETURN    (retype return)
  return is void, RETURNS_THIS                 -> FIX_RETURN
  NOT_THIS                                     -> LEAVE, reported with the reason
  VIA_CALL or no evidence                      -> REVIEW, reported

FIX_RECEIVER exists because the fix is not always "change the return". The CRT
iostream classes have the *receiver* typed `void*` and the return typed properly;
copying the receiver onto the return there would throw away the better type.

Report-first. Pass --apply to snapshot the project (tag pre-ctor-dtor-returns),
then mutate + save. Persist is via getDomainFile().save() - project.save() alone
silently discards changes.

Usage:
    GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
    python3 -u fix_ctor_dtor_returns.py <ABS_project_path> <project_name> <program_name> \
            [--apply] [--no-snapshot] [--only FIX_RETURN|FIX_RECEIVER] [--addr HEX]... [--out PATH]
"""

import argparse
import os
import re
import subprocess
import sys
import traceback

THIS_DIR = os.path.dirname(os.path.abspath(__file__))

NAME_RE = re.compile(r"_(arrdtor\d*|ctor|dtor)$")
STACK_RE = re.compile(r"^(E[A-D]X|E[SD]I|EBP),dword ptr \[ESP \+ (0x[0-9a-f]+)\]$", re.I)
EAX_SLOT_RE = re.compile(r"^EAX,dword ptr \[ESP \+ (0x[0-9a-f]+)\]$", re.I)
GP32 = ("EAX", "EBX", "ECX", "EDX", "ESI", "EDI", "EBP")
EAX_PARTS = ("EAX", "AX", "AH", "AL")

RETURNS_THIS = "RETURNS_THIS"
NOT_THIS = "NOT_THIS"
VIA_CALL = "VIA_CALL"
NO_EVIDENCE = "NO_EVIDENCE"

VAGUE = ("void *", "void*", "undefined *", "undefined*", "undefined4", "undefined")

# The CRT signatures are deliberately shaped for the compiling decompilation, not
# for fidelity to what Watcom emitted: `void *` receivers on the iostream classes
# keep the reconstructed C++ compiling for nocedit. They are NOT defects and must
# not be "fixed" to match the convention. Reported as EXEMPT_CRT so the decision
# stays visible instead of turning into a silent skip. --include-crt overrides.
CRT_TU_RE = re.compile(r"^crt_")


# --------------------------------------------------------------------------

def kind_of(name):
    core = name.split("_FUN_")[0]
    m = NAME_RE.search(core)
    if not m:
        return None
    return "arrdtor" if m.group(1).startswith("arrdtor") else m.group(1)


def insn_text(insn):
    """(mnemonic, 'OP1,OP2') in the same shape the .asm export uses."""
    ops = []
    for i in range(insn.getNumOperands()):
        ops.append(str(insn.getDefaultOperandRepresentation(i)))
    return str(insn.getMnemonicString()).upper(), ",".join(ops)


def instructions(program, func):
    return list(program.getListing().getInstructions(func.getBody(), True))


def writes_eax(insn, mn, op):
    """Does this instruction clobber any part of EAX? Returns a tag or None."""
    if insn.getFlowType().isCall():
        return "call"
    for obj in insn.getResultObjects():
        nm = str(obj).upper()
        if nm in EAX_PARTS:
            return nm
    # getResultObjects misses a few forms; fall back to the destination operand
    dest = op.split(",")[0].strip().upper() if op else ""
    if dest in EAX_PARTS and mn not in ("CMP", "TEST", "PUSH"):
        return dest
    return None


def find_receiver_reg(insns):
    """Register holding parameter 0, and its stack offset."""
    depth = 0
    for insn in insns[:16]:
        mn, op = insn_text(insn)
        if mn == "PUSH" and op.upper() in GP32:
            depth += 4
            continue
        if mn == "SUB" and op.upper().startswith("ESP,"):
            try:
                depth += int(op.split(",")[1], 0)
            except ValueError:
                pass            # SUB ESP,<register>: a run-time size, not a frame
            continue
        m = STACK_RE.match(op)
        if mn == "MOV" and m and int(m.group(2), 16) == depth + 4:
            return m.group(1).upper(), depth + 4
        if mn in ("CALL", "RET", "JMP"):
            break
    return None, None


def gather_evidence(insns, recv_reg, recv_off):
    """Does any return path leave EAX holding the receiver?"""
    if not insns:
        return NO_EVIDENCE, "no instructions"
    votes = []
    for i, insn in enumerate(insns):
        mn, op = insn_text(insn)
        if mn != "RET":
            continue
        j = i - 1
        while j >= 0:
            mn2, op2 = insn_text(insns[j])
            tag = writes_eax(insns[j], mn2, op2)
            if tag is None:
                j -= 1
                continue
            if tag == "call":
                votes.append((VIA_CALL, "EAX is the result of a tail CALL"))
            elif mn2 == "MOV" and recv_reg and recv_reg != "EAX" \
                    and op2.upper() == "EAX,%s" % recv_reg:
                votes.append((RETURNS_THIS, "MOV EAX,%s" % recv_reg))
            elif mn2 == "MOV" and EAX_SLOT_RE.match(op2) \
                    and int(EAX_SLOT_RE.match(op2).group(1), 16) == (recv_off or -1):
                votes.append((RETURNS_THIS, "MOV EAX,[ESP+0x%x] (the receiver slot)" % recv_off))
            else:
                votes.append((NOT_THIS, "EAX last written by %s %s" % (mn2, op2)))
            break
        else:
            # A receiver find_receiver_reg put in EAX was loaded by a MOV before
            # the first RET, and the walk back from any RET meets that MOV, so
            # reaching the entry means nothing set EAX at all.
            votes.append((NO_EVIDENCE, "EAX is never written"))
    if not votes:
        return NO_EVIDENCE, "no RET in the body"
    for want in (RETURNS_THIS, VIA_CALL, NOT_THIS):
        hits = [w for v, w in votes if v == want]
        if hits:
            return want, "; ".join(sorted(set(hits)))
    return NO_EVIDENCE, "; ".join(sorted({w for _, w in votes}))


def is_vague(t):
    return t is None or t.replace(" ", "") in [v.replace(" ", "") for v in VAGUE]


def classify(ret, recv, evidence, tu, include_crt):
    """(action, why). FIX_RETURN / FIX_RECEIVER / EXEMPT_CRT / LEAVE / REVIEW / OK."""
    if recv is None:
        return "REVIEW", "no parameters - receiver unknown"
    if ret == recv:
        return "OK", "already consistent"
    if CRT_TU_RE.match(tu or "") and not include_crt:
        return "EXEMPT_CRT", ("CRT signatures are shaped for the compiling "
                              "decompilation, not for ABI fidelity - left alone "
                              "on purpose (--include-crt to override)")
    if evidence == NOT_THIS:
        return "LEAVE", "the assembly shows EAX does not hold the receiver at RET"
    if evidence != RETURNS_THIS:
        return "REVIEW", "no proof either way"
    if is_vague(recv) and not is_vague(ret):
        return "FIX_RECEIVER", ("the return type is the more specific of the two; "
                               "typing the receiver from it, not the other way round")
    return "FIX_RETURN", "returns the receiver, so the return type should match it"


# --------------------------------------------------------------------------

def tu_of(name):
    """Translation-unit prefix, e.g. 'crt_fstream.cpp' from the Ghidra symbol."""
    core = name.split("_FUN_")[0]
    m = re.match(r"([a-z0-9]+_[A-Za-z0-9]+\.(?:cpp|c|h))_", core)
    return m.group(1) if m else core.split("_")[0]


def gather(program, addr_filter, include_crt):
    fm = program.getFunctionManager()
    rows = []
    for f in fm.getFunctions(True):
        name = str(f.getName())
        k = kind_of(name)
        if not k:
            continue
        entry = str(f.getEntryPoint()).lower()
        if addr_filter and entry not in addr_filter:
            continue
        params = list(f.getParameters())
        recv = str(params[0].getDataType()) if params else None
        ret = str(f.getReturnType())
        insns = instructions(program, f)
        rreg, roff = find_receiver_reg(insns)
        evidence, why = gather_evidence(insns, rreg, roff)
        tu = tu_of(name)
        action, reason = classify(ret, recv, evidence, tu, include_crt)
        rows.append({
            "func": f, "entry": entry, "name": name, "kind": k, "tu": tu,
            "ret": ret, "recv": recv, "recv_reg": rreg,
            "evidence": evidence, "why": why,
            "action": action, "reason": reason,
            "param0": params[0] if params else None,
        })
    return rows


def report(rows, out_path):
    order = ["FIX_RETURN", "FIX_RECEIVER", "REVIEW", "LEAVE", "EXEMPT_CRT", "OK"]
    counts = {a: sum(1 for r in rows if r["action"] == a) for a in order}
    lines = []
    w = lines.append
    w("=" * 78)
    w("CTOR/DTOR RETURN CONSISTENCY")
    w("=" * 78)
    w("  %d ctor/dtor/arrdtor function(s) examined" % len(rows))
    for a in order:
        w("  %-13s %d" % (a, counts[a]))
    w("")
    for a in order:
        sel = [r for r in rows if r["action"] == a]
        if not sel or a == "OK":
            continue
        w("-" * 78)
        w("%s  (%d)" % (a, len(sel)))
        w("-" * 78)
        for r in sel:
            w("")
            w("  %s  %s" % (r["entry"], r["name"]))
            w("      return   : %s" % r["ret"])
            w("      receiver : %s%s" % (r["recv"],
                                         "  (in %s)" % r["recv_reg"] if r["recv_reg"] else ""))
            if a == "FIX_RETURN":
                w("      CHANGE   : return %s -> %s" % (r["ret"], r["recv"]))
            elif a == "FIX_RECEIVER":
                w("      CHANGE   : parameter 0 %s -> %s" % (r["recv"], r["ret"]))
            w("      evidence : %s -- %s" % (r["evidence"], r["why"]))
            w("      reason   : %s" % r["reason"])
        w("")
    text = "\n".join(lines)
    print(text)
    if out_path:
        with open(out_path, "w") as fh:
            fh.write(text + "\n")
        print("Report written to: %s" % out_path)
    return counts


def resolve(dtm, type_name):
    """Find the DataType for a printed type name, pointers included.

    A class lives in a category (/Nocturne/Struct/Game/...), not at the root,
    so the search by name is what finds it. Ghidra fills the java.util.List it
    is handed; a Python list reaches Java as a converted copy, never filled
    back, so it has to be a Java list, as every other caller here uses.
    """
    from ghidra.program.model.data import PointerDataType
    from java.util import ArrayList
    nm = type_name.strip()
    stars = 0
    while nm.endswith("*"):
        stars += 1
        nm = nm[:-1].strip()
    base = dtm.getDataType("/" + nm)
    if base is None:
        found = ArrayList()
        dtm.findDataTypes(nm, found)
        if found.isEmpty():
            return None
        base = found.get(0)
    for _ in range(stars):
        base = PointerDataType(base, dtm)
    return base


def apply(program, rows, only):
    """Retype what the rows propose, in one transaction. Returns (ok, changed)."""
    from ghidra.program.model.symbol import SourceType

    todo = [r for r in rows if r["action"] in ("FIX_RETURN", "FIX_RECEIVER")]
    if only:
        todo = [r for r in todo if r["action"] == only]
    if not todo:
        print("\nNothing to apply.")
        return True, 0

    dtm = program.getDataTypeManager()

    print("\n[apply] %d change(s)" % len(todo))
    changed = 0
    tx = program.startTransaction("ctor/dtor return consistency")
    ok = True
    try:
        for r in todo:
            want = r["recv"] if r["action"] == "FIX_RETURN" else r["ret"]
            dt = resolve(dtm, want)
            if dt is None:
                print("  %s %s: SKIP - cannot resolve type %r" % (r["entry"], r["name"], want))
                continue
            if r["action"] == "FIX_RETURN":
                r["func"].setReturnType(dt, SourceType.USER_DEFINED)
                print("  %s %s: return %s -> %s" % (r["entry"], r["name"], r["ret"], want))
            else:
                r["param0"].setDataType(dt, SourceType.USER_DEFINED)
                print("  %s %s: parameter 0 %s -> %s" % (r["entry"], r["name"], r["recv"], want))
            changed += 1
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    return ok, changed


def run(program, args, addr_filter, out_path):
    """Report, and with --apply retype and save. Returns the exit code."""
    rows = gather(program, addr_filter, args.include_crt)
    report(rows, out_path)
    if not args.apply:
        print("\n[dry-run] re-run with --apply to execute.")
        return 0
    ok, changed = apply(program, rows, args.only)
    if ok and changed:
        from ghidra.util.task import ConsoleTaskMonitor
        print("Saving program database...")
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    return 0 if ok else 1


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_path), args.project_name, "--tag", "pre-ctor-dtor-returns"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    p = argparse.ArgumentParser(
        description="Make ctor/dtor return types agree with their receiver.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--apply", action="store_true", help="mutate + save (default: report only)")
    p.add_argument("--only", choices=["FIX_RETURN", "FIX_RECEIVER"], default=None,
                   help="apply just one class of fix")
    p.add_argument("--addr", action="append", default=[], metavar="HEX",
                   help="restrict to these function entries (repeatable)")
    p.add_argument("--include-crt", action="store_true",
                   help="also propose changes for crt_* translation units. Off by "
                        "default: those signatures are deliberately shaped for the "
                        "compiling decompilation, not for ABI fidelity.")
    p.add_argument("--out", default=None, help="report path")
    p.add_argument("--no-snapshot", action="store_true", help="--apply without a .gar snapshot first")
    args = p.parse_args(argv)

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_ctor_dtor_returns.txt" % args.program_name)
    addr_filter = {"%08x" % int(a, 16) for a in args.addr} or None

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
            code = run(program, args, addr_filter, out_path)
    except Exception as e:
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        project.close()
    sys.stdout.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
