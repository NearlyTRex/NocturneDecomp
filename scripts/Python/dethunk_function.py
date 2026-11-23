#!/usr/bin/env python3
"""
dethunk_function.py

Convert a Ghidra JMP-thunk into a real function, so the wrapper can carry its
own signature instead of sharing the target's.

WHY THIS EXISTS
---------------
A C++ forwarding method compiles to a tail jump:

    CDemonRenderer::matrixPush(CDemonRenderer *this) { matrixPush(); }
      -> 00460be0  JMP matrixPush

Ghidra auto-detects that as a thunk, and a thunk does not own a signature - it
borrows the target's. That makes the method and the free function a single
editable unit, which is wrong in both directions:

  * give the method its `this` pointer, and the free function - which reads no
    arguments at all - is handed a fictitious parameter;
  * take the fictitious parameter off the free function, and the method silently
    loses the receiver its callers actually push.

nocedit.exe escaped this by patching the four affected wrappers from `JMP` to
`CALL` + `RET` and clearing the thunk flag, which is what this script automates
for any program.

THE TRANSFORM
-------------
    before   e9 db ce 06 00                 JMP  rel32
    after    e8 db ce 06 00  c3             CALL rel32 ; RET

`JMP rel32` and `CALL rel32` are both 5 bytes and both compute their target from
the address of the *next* instruction, so the 4 displacement bytes carry over
untouched - only the opcode changes, E9 -> E8. The cost is one extra byte for
the `RET`, which is why the trailing space has to be checked.

SAFETY GATES (a target failing any of these is skipped, not fixed)
------------------------------------------------------------------
  * a function exists exactly at the address and Ghidra considers it a thunk;
  * the thunked function resolves, is internal, and is not an external/import
    (patching an import thunk would break the import, not fix a signature);
  * the body is a single JMP with a rel8/rel32 opcode - never `JMP [mem]`;
  * SPACE: every byte from the end of the JMP up to the 6 bytes a CALL+RET needs
    must be free, meaning all of:
      - not inside any function's body,
      - carrying no symbol or label,
      - with no incoming references of any kind,
      - and (unless --force) recognisable inter-function padding: INT3, NOP,
        zero, or one of Watcom's multi-byte nops (8d 80 .., 8d 52 .., 8b db).
    Watcom aligns functions to 16 bytes, so in practice there are 11 spare
    padding bytes after a 5-byte JMP and only 1 is consumed.

The signature is captured before the thunk flag is cleared and re-applied
afterwards, so the wrapper keeps the receiver it inherited rather than reverting
to a bare `undefined FUN_xxx(void)`.

The CALL keeps the target the JMP's own bytes name, so a thunk of a thunk is
patched to call the function it jumped to, not the end of the chain.

Report-first. Pass --apply to mutate + save; it takes a .gar snapshot first
unless --no-snapshot.

Applied patches are appended to byte_patches.json (group `thunk_to_real_function`,
tagged with the program) unless --no-record, so a fresh import can be brought
back to the same state with fix_byte_patches.py. Persist is via
getDomainFile().save() - project.save() alone silently discards changes.

Usage:
    GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
    python3 -u dethunk_function.py <ABS_project_path> <project_name> <program_name> \
            --addr 00460be0 [--addr ...] [--apply] [--no-snapshot] [--force] [--no-record]

    # find every convertible thunk in the program first
    GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
    python3 -u dethunk_function.py <ABS_project_path> <project_name> <program_name> --scan
"""

import argparse
import json
import os
import struct
import subprocess
import sys
import traceback

THIS_DIR = os.path.dirname(os.path.abspath(__file__))

CALL_RET_LEN = 6           # E8 <rel32> C3
JMP_REL32 = 0xE9
JMP_REL8 = 0xEB
CALL_REL32 = 0xE8
RET = 0xC3

# Bytes that legitimately sit between functions. Watcom emits multi-byte nops
# built from LEA/MOV forms as well as the usual INT3/NOP fill.
PAD_BYTES = {0x90, 0xCC, 0x00}
PAD_RUNS = (
    b"\x8d\x80\x00\x00\x00\x00",   # LEA EAX,[EAX+0x0]
    b"\x8d\x52\x00",               # LEA EDX,[EDX+0x0]
    b"\x8b\xdb",                   # MOV EBX,EBX
    b"\x8d\x49\x00",               # LEA ECX,[ECX+0x0]
    b"\x8b\xff",                   # MOV EDI,EDI
)

# How far past the entry we are willing to clear/re-disassemble. One 16-byte
# alignment slot is all a converted wrapper can ever occupy.
MAX_SLOT = 16


# --------------------------------------------------------------------------
# byte helpers (same idiom as fix_byte_patches.py)
# --------------------------------------------------------------------------

def to_addr(program, addr_int):
    return program.getAddressFactory().getDefaultAddressSpace().getAddress(addr_int)


def get_bytes(program, addr_int, length):
    mem = program.getMemory()
    addr = to_addr(program, addr_int)
    buf = bytearray(length)
    for i in range(length):
        buf[i] = mem.getByte(addr.add(i)) & 0xFF
    return bytes(buf)


def write_bytes(program, addr_int, data):
    mem = program.getMemory()
    addr = to_addr(program, addr_int)
    for i, b in enumerate(data):
        mem.setByte(addr.add(i), b & 0xFF if b < 128 else b - 256)


def is_padding(chunk):
    """Is this byte run plausible inter-function fill?"""
    i = 0
    while i < len(chunk):
        for run in PAD_RUNS:
            if chunk[i:i + len(run)] == run:
                i += len(run)
                break
        else:
            if chunk[i] in PAD_BYTES:
                i += 1
            else:
                return False
    return True


# --------------------------------------------------------------------------
# inspection
# --------------------------------------------------------------------------

def region_is_free(program, start_int, end_int, owner_entry):
    """Is [start, end) unowned? Returns (ok, reason)."""
    fm = program.getFunctionManager()
    st = program.getSymbolTable()
    rm = program.getReferenceManager()
    for a in range(start_int, end_int):
        addr = to_addr(program, a)
        holder = fm.getFunctionContaining(addr)
        if holder is not None and holder.getEntryPoint().getOffset() != owner_entry:
            return False, "0x%x is inside %s" % (a, holder.getName())
        syms = st.getSymbols(addr)
        if syms:
            return False, "0x%x carries symbol %s" % (a, syms[0].getName())
        refs = rm.getReferenceCountTo(addr)
        if refs > 0:
            return False, "0x%x has %d incoming reference(s)" % (a, refs)
    return True, None


def next_boundary(program, start_int, limit):
    """First address from `start` that a function or symbol starts at, else `limit`."""
    fm = program.getFunctionManager()
    st = program.getSymbolTable()
    for a in range(start_int, limit):
        addr = to_addr(program, a)
        if fm.getFunctionAt(addr) is not None or st.getSymbols(addr):
            return a
    return limit


def jmp_target(program, entry_int, op):
    """Where the JMP at `entry` goes, from its own displacement bytes."""
    if op == JMP_REL32:
        return entry_int + 5 + struct.unpack("<i", get_bytes(program, entry_int + 1, 4))[0]
    return entry_int + 2 + struct.unpack("<b", get_bytes(program, entry_int + 1, 1))[0]


def capture_signature(func):
    """Everything the thunk carries that must survive the conversion."""
    return {
        "name": func.getName(),
        "conv": func.getCallingConventionName(),
        "ret_dt": func.getReturnType(),
        "params": [(p.getName(), p.getDataType()) for p in func.getParameters()],
        "varargs": func.hasVarArgs(),
        "noreturn": func.hasNoReturn(),
        "plate": func.getComment(),
        "repeatable": func.getRepeatableComment(),
    }


def format_signature(sig):
    ps = ", ".join("%s %s" % (dt.getDisplayName(), nm) for nm, dt in sig["params"])
    if sig["varargs"]:
        ps = (ps + ", ...") if ps else "..."
    return "%s %s %s(%s)%s" % (sig["conv"], sig["ret_dt"].getDisplayName(),
                               sig["name"], ps or "void",
                               "  /* noreturn */" if sig["noreturn"] else "")


def gather(program, entry_int, force):
    """Everything needed to decide and to apply. Never mutates."""
    info = {"entry": entry_int, "skip": None, "func": None, "already": False}
    fm = program.getFunctionManager()
    entry = to_addr(program, entry_int)

    func = fm.getFunctionAt(entry)
    if func is None:
        info["skip"] = "no function at this address"
        return info
    info["func"] = func
    info["name"] = func.getName()

    cur6 = get_bytes(program, entry_int, CALL_RET_LEN)
    if cur6[0] == CALL_REL32 and cur6[5] == RET and not func.isThunk():
        info["already"] = True
        info["skip"] = "already converted (CALL+RET, thunk flag clear)"
        return info

    if not func.isThunk():
        info["skip"] = "not a thunk"
        return info

    target = func.getThunkedFunction(True)
    if target is None:
        info["skip"] = "thunk with no resolvable target"
        return info
    info["target"] = target
    info["target_name"] = target.getName()
    info["target_addr"] = target.getEntryPoint().getOffset()
    if target.isExternal() or target.getEntryPoint().isExternalAddress():
        info["skip"] = "target %s is external - import thunk, do not patch" % target.getName()
        return info

    # body must be exactly one JMP
    listing = program.getListing()
    insns = []
    it = listing.getInstructions(func.getBody(), True)
    while it.hasNext():
        insns.append(it.next())
        if len(insns) > 2:
            break
    if len(insns) != 1:
        info["skip"] = "body is %d instructions, expected a single JMP" % len(insns)
        return info
    insn = insns[0]
    op = get_bytes(program, entry_int, 1)[0]
    if op == JMP_REL32:
        old_len = 5
    elif op == JMP_REL8:
        old_len = 2
    else:
        info["skip"] = "body opcode is 0x%02x, not a relative JMP (0x%02x/0x%02x)" % (
            op, JMP_REL32, JMP_REL8)
        return info
    if insn.getLength() != old_len:
        info["skip"] = "JMP is %d bytes, opcode 0x%02x implies %d" % (
            insn.getLength(), op, old_len)
        return info
    info["old_len"] = old_len
    info["old_bytes"] = get_bytes(program, entry_int, old_len)

    # the patch: CALL rel32 to where the JMP goes, then RET. Both rel32 forms
    # count from entry + 5, so a JMP rel32's displacement carries over unchanged.
    disp = jmp_target(program, entry_int, op) - (entry_int + 5)
    info["new_bytes"] = bytes([CALL_REL32]) + struct.pack("<i", disp) + bytes([RET])

    # space
    info["need"] = CALL_RET_LEN - old_len
    tail_start = entry_int + old_len
    tail_end = entry_int + CALL_RET_LEN
    ok, reason = region_is_free(program, tail_start, tail_end, entry_int)
    if not ok:
        info["skip"] = "no room: %s" % reason
        return info

    # [tail_start, tail_end) is free, so the boundary is at or past tail_end
    info["boundary"] = next_boundary(program, tail_end, entry_int + MAX_SLOT)
    info["slack"] = info["boundary"] - tail_start
    tail = get_bytes(program, tail_start, info["boundary"] - tail_start)
    info["tail_bytes"] = tail
    info["tail_is_pad"] = is_padding(tail)
    if not info["tail_is_pad"] and not force:
        info["skip"] = ("trailing bytes %s are not recognised padding "
                        "(--force to override)" % tail.hex())
        return info

    info["clear_end"] = info["boundary"]
    info["sig"] = capture_signature(func)
    return info


# --------------------------------------------------------------------------
# reporting
# --------------------------------------------------------------------------

def report(infos):
    print("=" * 78)
    print("DE-THUNK: JMP thunk -> CALL+RET real function")
    print("=" * 78)
    for i in infos:
        print("\n0x%08x  %s" % (i["entry"], i.get("name", "<no function>")))
        if i.get("target_name"):
            print("    forwards to : %s (0x%08x)" % (i["target_name"], i["target_addr"]))
        if i["skip"]:
            print("    SKIP        : %s" % i["skip"])
            continue
        print("    signature   : %s" % format_signature(i["sig"]))
        print("    bytes       : %s  ->  %s" % (
            i["old_bytes"].hex(), i["new_bytes"].hex()))
        print("    space       : needs %d extra byte(s), %d free before the next "
              "owned address (0x%08x)" % (i["need"], i["slack"], i["boundary"]))
        print("    trailing    : %s%s" % (
            i["tail_bytes"].hex() or "<none>",
            "  (padding)" if i["tail_is_pad"] else "  (NOT recognised padding)"))
        print("    verdict     : convertible")

    conv = [i for i in infos if not i["skip"]]
    done = [i for i in infos if i.get("already")]
    print("\n%d convertible, %d already converted, %d skipped" % (
        len(conv), len(done), len(infos) - len(conv) - len(done)))
    return conv


def scan(program):
    """Every thunk in the program that this script could convert."""
    fm = program.getFunctionManager()
    out = []
    it = fm.getFunctions(True)
    while it.hasNext():
        f = it.next()
        if not f.isThunk():
            continue
        t = f.getThunkedFunction(True)
        if t is None or t.isExternal():
            continue
        entry = f.getEntryPoint().getOffset()
        if get_bytes(program, entry, 1)[0] not in (JMP_REL32, JMP_REL8):
            continue
        out.append((entry, f.getName(), t.getEntryPoint().getOffset(), t.getName(),
                    len(t.getParameters())))
    print("=" * 78)
    print("SCAN: internal JMP thunks (candidates for de-thunking)")
    print("=" * 78)
    print("%-10s %-52s %-10s %s" % ("thunk", "name", "target", "target params"))
    for entry, name, taddr, tname, np in sorted(out):
        print("%08x   %-52s %08x   %d  %s" % (entry, name[:52], taddr, np, tname[:30]))
    print("\n%d candidate(s)" % len(out))
    return out


# --------------------------------------------------------------------------
# apply
# --------------------------------------------------------------------------

def restore_signature(program, func, sig):
    from ghidra.program.model.listing import ParameterImpl, ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    from java.util import ArrayList

    src = SourceType.USER_DEFINED
    params = ArrayList()
    for nm, dt in sig["params"]:
        params.add(ParameterImpl(nm, dt, program))
    func.updateFunction(sig["conv"],
                        ReturnParameterImpl(sig["ret_dt"], program),
                        params,
                        func.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS,
                        True, src)
    func.setVarArgs(bool(sig["varargs"]))
    func.setNoReturn(bool(sig["noreturn"]))
    if func.getName() != sig["name"]:
        func.setName(sig["name"], src)
    if sig["plate"]:
        func.setComment(sig["plate"])
    if sig["repeatable"]:
        func.setRepeatableComment(sig["repeatable"])


def convert(program, info):
    """Patch, de-thunk, re-disassemble, restore. Returns (ok, message)."""
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.program.model.address import AddressSet

    entry_int = info["entry"]
    func = info["func"]
    sig = info["sig"]
    listing = program.getListing()

    entry = to_addr(program, entry_int)
    clear_hi = to_addr(program, info["clear_end"] - 1)
    body_hi = to_addr(program, entry_int + CALL_RET_LEN - 1)

    # 1. clear the JMP and the padding slot it will grow into
    listing.clearCodeUnits(entry, clear_hi, False)

    # 2. write CALL rel32 + RET
    write_bytes(program, entry_int, info["new_bytes"])

    # 3. break the thunk BEFORE re-disassembling, so nothing re-detects it
    func.setThunkedFunction(None)

    # 4. re-disassemble just the new body
    cmd = DisassembleCommand(entry, AddressSet(entry, body_hi), True)
    cmd.applyTo(program)

    # 5. the body is now exactly CALL+RET
    func.setBody(AddressSet(entry, body_hi))

    # 6. put the signature back - breaking a thunk drops it to a default
    restore_signature(program, func, sig)

    check = get_bytes(program, entry_int, CALL_RET_LEN)
    if check != info["new_bytes"]:
        return False, "verify failed: memory reads %s" % check.hex()
    if func.isThunk():
        return False, "verify failed: still flagged as a thunk"
    return True, "converted -> %s" % format_signature(capture_signature(func))


def record_patches(json_path, program_name, infos):
    """Append the applied patches to byte_patches.json so a re-import can replay them.

    The group is tagged with the program: fix_byte_patches.py skips groups whose
    `program` does not match the one it was pointed at, so nocedit and nocturne
    patches can share the file.

    NOTE: this rewrites the whole file through json.dump, so the first run also
    normalises the hand-aligned `"patched":  ` columns in the existing entries -
    a one-off whitespace diff, no content change. Use --no-record to skip, or
    --patches-file to keep a program's patches in a sidecar file.
    """
    with open(json_path) as fh:
        data = json.load(fh)

    group = None
    for g in data["groups"]:
        if g["name"] == "thunk_to_real_function" and g.get("program") == program_name:
            group = g
            break
    if group is None:
        group = {
            "name": "thunk_to_real_function",
            "program": program_name,
            "description": "Convert JMP thunks to CALL+RET so the wrapper is a real "
                           "function with its own parameters",
            "patches": [],
            "clear_thunks": [],
        }
        data["groups"].append(group)

    added = 0
    for i in infos:
        addr = "0x%08x" % i["entry"]
        if any(p["address"] == addr for p in group["patches"]):
            continue
        # patch and original must be the same length: pad the old JMP out with the
        # padding bytes the CALL+RET overwrites, so the verifier checks them too.
        original = get_bytes_static(i, CALL_RET_LEN)
        group["patches"].append({
            "name": "%s: JMP->CALL+RET for %s" % (
                i["name"], i["sig"]["params"][0][0] if i["sig"]["params"] else "own signature"),
            "address": addr,
            "original": original.hex(),
            "patched": i["new_bytes"].hex(),
            "description": "Convert JMP %s to CALL + RET so the wrapper carries its "
                           "own signature instead of sharing the target's" % i["target_name"],
        })
        if addr not in group["clear_thunks"]:
            group["clear_thunks"].append(addr)
        added += 1

    if added:
        with open(json_path, "w") as fh:
            json.dump(data, fh, indent=4)
            fh.write("\n")
    return added


def get_bytes_static(info, length):
    """The pre-patch bytes over the full patch width, from what gather() read."""
    return (info["old_bytes"] + info["tail_bytes"])[:length]


# --------------------------------------------------------------------------

def write_report(out_path, program_name, infos, convertible, apply):
    lines = ["De-thunk report: %s" % program_name,
             "requested: %d  convertible: %d  mode: %s" % (
                 len(infos), len(convertible), "APPLY" if apply else "report"), ""]
    for i in infos:
        lines.append("%08x  %-46s %s" % (
            i["entry"], i.get("name", "<none>")[:46],
            ("SKIP: %s" % i["skip"]) if i["skip"] else "convertible"))
    with open(out_path, "w") as fh:
        fh.write("\n".join(lines) + "\n")
    print("\nReport written to: %s" % out_path)


def apply_all(program, convertible):
    """Convert every thunk in one transaction, all or nothing. -> True when committed."""
    print("\n[apply] converting %d thunk(s)" % len(convertible))
    tx = program.startTransaction("De-thunk JMP wrappers")
    ok = True
    try:
        for i in convertible:
            good, msg = convert(program, i)
            print("  0x%08x %s: %s" % (i["entry"], i["name"], msg))
            ok = ok and good
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    return ok


def run(program, args, json_path, out_path):
    """Scan, or report and (with --apply) convert. -> exit code."""
    if args.scan:
        scan(program)
        return 0

    infos = [gather(program, int(a, 16), args.force) for a in args.addr]
    convertible = report(infos)
    write_report(out_path, args.program_name, infos, convertible, args.apply)

    if not args.apply:
        print("\n[dry-run] re-run with --apply to execute.")
        return 0
    if not convertible:
        print("\nNothing convertible to apply.")
        return 0
    if not apply_all(program, convertible):
        print("Transaction rolled back - nothing saved.")
        return 1

    from ghidra.util.task import ConsoleTaskMonitor
    print("Saving program database...")
    program.getDomainFile().save(ConsoleTaskMonitor())
    print("Saved.")
    if not args.no_record:
        n = record_patches(json_path, args.program_name, convertible)
        print("Recorded %d patch(es) in %s" % (n, json_path))
    return 0


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_path), args.project_name, "--tag", "pre-dethunk"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    p = argparse.ArgumentParser(
        description="Convert a Ghidra JMP thunk into a real CALL+RET function.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--addr", action="append", default=[], metavar="HEX",
                   help="thunk entry address to convert (repeatable)")
    p.add_argument("--scan", action="store_true",
                   help="list every internal JMP thunk in the program and exit")
    p.add_argument("--apply", action="store_true",
                   help="mutate + save (default: report only)")
    p.add_argument("--no-snapshot", action="store_true", help="--apply without a .gar snapshot first")
    p.add_argument("--force", action="store_true",
                   help="convert even when the trailing bytes are not recognised "
                        "padding (they must still be unowned and unreferenced)")
    p.add_argument("--no-record", action="store_true",
                   help="do not append the applied patches to byte_patches.json")
    p.add_argument("--patches-file", default=None,
                   help="path to byte_patches.json (default: alongside this script)")
    p.add_argument("--out", default=None, help="report path")
    args = p.parse_args(argv)

    if not args.scan and not args.addr:
        p.error("give at least one --addr, or --scan to list candidates")

    project_path = os.path.abspath(args.project_path)
    json_path = args.patches_file or os.path.join(THIS_DIR, "byte_patches.json")
    out_path = args.out or ("%s_dethunk.txt" % args.program_name)

    if args.apply and not args.scan and not args.no_snapshot and not snapshot(args):
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
            code = run(program, args, json_path, out_path)
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
