#!/usr/bin/env python3
"""
fix_misaligned_functions.py

Detect (and optionally remove) functions whose ENTRY POINT lands inside another
instruction -- a phase-shifted or hallucinated entry that is not a function at
all. The block usually IS real code; what is wrong is that a function was
declared partway through it, so the first instruction decodes from the wrong
byte offset and everything about the "function" is fiction.

This is the fourth member of the boundary-repair family, and the three existing
tools cannot see it:

  validate_function_ranges.py  a body that stops short of its own code.
                               This entry's body is fine -- it is the START
                               that is wrong, which body coverage cannot see.
  fix_function_boundaries.py   an entry a few bytes LATE, with the real prologue
                               orphaned immediately before it. Here the entry is
                               not late relative to a real function; it is inside
                               an instruction, so there is no orphaned prologue
                               to walk back to.
  find_junk_functions.py       one-instruction bodies and no-ops. These blocks
                               are 0x40-0x80 bytes of coherent code, so they do
                               not look junk-shaped at all.

Worked example (nocturne.exe engine/clipper.c): FUN_00433c70 is a real function
ending in `JMP dword ptr [EAX*0x4 + 0x433c58]`, a jump-table dispatch. Ghidra
declared a separate function at each case body. Seventeen of them open with the
byte-identical instruction `XOR byte ptr [ECX + 0x30],BH` -- seventeen unrelated
addresses cannot all genuinely start that way; it is one decode offset error
repeated. Every one of them ends by jumping back inside FUN_00433c70.

Detection is deliberately narrow, because the cost of a false positive is
deleting a real function:

  IMPOSSIBLE_ENTRY  the first instruction cannot begin a Watcom function --
                    it stores from an FPU stack the function never filled,
                    unwinds a frame it never created, or decodes padding/data.
                    This is a structural fact, not a heuristic.
  OWNER             a real function that this block flows back into, or that
                    references it. Establishes what the code actually belongs to.

A block is only ever REMOVED when BOTH hold. IMPOSSIBLE_ENTRY alone is reported
as ORPHAN and left alone: the entry is certainly wrong, but with no owner to
absorb the code, deleting the function would strand it.

Removal keeps the instructions -- removeFunction() drops the function, not the
code -- and then re-runs fixupFunctionBody on the owner so it absorbs the block.

Guards (each has cost a real function somewhere):
  * anything with an incoming CALL is never touched. Something calls it, so it
    is a function whatever its first instruction looks like.
  * named functions are skipped unless --include-named. A name means a human
    or a transfer asserted this is real.
  * thunks and external functions are skipped.
  * the owner must be a different function, and must not itself be suspect.

Nothing is written without --apply, and --apply takes a .gar snapshot first
unless --no-snapshot. Headless mutations persist only via DomainFile.save().

Usage:
    fix_misaligned_functions.py <project_dir> <project_name> [program]
    fix_misaligned_functions.py ./projects NocturneEdit nocturne.exe
    fix_misaligned_functions.py ./projects NocturneEdit nocturne.exe --tu engine/clipper.c
    fix_misaligned_functions.py ./projects NocturneEdit nocturne.exe --apply

@category Annotations
"""

import argparse
import os
import re
import sys
from collections import Counter, defaultdict

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(THIS_DIR))

# First instructions that cannot begin a function. Each entry is (regex, why).
# Derived empirically from nocturne.exe: every one of these was verified to sit
# inside a coherent code block whose real entry is elsewhere. Keep this list
# conservative -- a plausible-but-unusual prologue does NOT belong here.
# Case-insensitive throughout: Ghidra's own Instruction.toString() casing differs
# from the exporter's, and hard-casing either way silently matches nothing.
_I = re.IGNORECASE
IMPOSSIBLE = [
    (re.compile(r'^XOR\s+byte\s+ptr', _I), "decodes mid-instruction"),
    (re.compile(r'^(OR|AND|SBB|ADC)\s+byte\s+ptr', _I), "decodes mid-instruction"),
    (re.compile(r'^ADD\s+byte\s+ptr\s*\[EAX\]\s*,\s*AL$', _I), "decodes 00 00 (padding or data)"),
    (re.compile(r'^FSTP\b', _I), "stores from an FPU stack it never filled"),
    (re.compile(r'^ADD\s+ESP\s*,', _I), "unwinds a stack frame it never created"),
    (re.compile(r'^INT\b', _I), "a trap is not a function entry"),
    (re.compile(r'^POP\s+E(AX|BX|CX|DX|SI|DI|BP)$', _I), "pops a register it never pushed"),
]

CALL_REFTYPES = ("UNCONDITIONAL_CALL", "CONDITIONAL_CALL", "COMPUTED_CALL")


def impossible_reason(text):
    for rx, why in IMPOSSIBLE:
        if rx.match(text):
            return why
    return None


def instr_text(ins):
    """Normalized 'MNEMONIC op,op' for an instruction. Case is preserved --
    every pattern above is case-insensitive, and upper-casing here would also
    mangle hex literals (0x30 -> 0X30)."""
    return re.sub(r'\s+', ' ', str(ins)).strip()


def tu_of(program, func):
    """Translation unit from the function's name prefix, for --tu filtering."""
    m = re.match(r'^([A-Za-z0-9]+)_([A-Za-z0-9_]+\.(?:cpp|c|h))_', func.getName())
    return f"{m.group(1)}/{m.group(2)}" if m else "?"


def incoming(program, entry):
    """(has_call, referring_functions) for references landing on an address."""
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    has_call, refs = False, set()
    for r in rm.getReferencesTo(entry):
        rt = str(r.getReferenceType())
        if rt in CALL_REFTYPES:
            has_call = True
        f = fm.getFunctionContaining(r.getFromAddress())
        if f is not None:
            refs.add(f)
    return has_call, refs


def terminal_target(program, func):
    """Address the block's last instruction unconditionally jumps to, if any."""
    lst = program.getListing()
    last = None
    for ins in lst.getInstructions(func.getBody(), True):
        last = ins
    if last is None:
        return None
    if not str(last.getMnemonicString()).upper().startswith("JMP"):
        return None
    flows = last.getFlows()
    return flows[0] if flows else None


MAX_ADOPT_DISTANCE = 0x2000
# How far before a suspect's entry a jump-table target may sit and still be the
# case body the suspect is squatting on. The observed phase shift is 6 bytes;
# 16 covers it without reaching the previous case.
PHASE_SLACK = 0x10


def owns_a_switch(program, func):
    """True if this block contains a jump-table dispatch of its own.

    Decisive for disposition. A block that dispatches a switch is a real
    function -- only its entry is in the wrong place. Deleting it would strand
    every case body it owns, so it must be REBASED, never REMOVED.
    """
    for ins in program.getListing().getInstructions(func.getBody(), True):
        ft = ins.getFlowType()
        if ft.isJump() and ft.isComputed():
            return True
    return False


def derive_true_entry(program, func, anchors):
    """Where this function really starts, as (address, why) or (None, why-not).

    A function begins where the previous one ends. If the nearest real function
    below ends within PHASE_SLACK bytes of this bogus entry, that end+1 is the
    true start, and the difference is the phase shift -- the same +6 the owners'
    jump tables independently show elsewhere. Requiring adjacency is what keeps
    this from being a guess: a larger gap means something else lives in between
    and the entry cannot be derived this way.
    """
    entry = func.getEntryPoint()
    prev = preceding_anchor(anchors, entry)
    if prev is None:
        return None, "no real function precedes it"
    end = prev.getBody().getMaxAddress().getOffset()
    shift = entry.getOffset() - (end + 1)
    if shift <= 0:
        return None, f"{prev.getName()} ends at or after this entry"
    if shift > PHASE_SLACK:
        return None, (f"nearest function {prev.getName()} ends {shift} bytes "
                      f"earlier -- too far to be a phase shift")
    true_addr = entry.getNewAddress(end + 1)

    # A case body can itself contain a nested switch, so "owns a switch" does
    # NOT prove this is a function. If the derived start carries a case label,
    # or the preceding function's own switch dispatches into this block, then
    # what we have is that function's case body -- and creating a function here
    # both invents a symbol and severs the block from its real owner.
    for sym in program.getSymbolTable().getSymbols(true_addr):
        nm = str(sym.getName())
        if nm.startswith(("caseD_", "switchD_", "case_")):
            return None, (f"{true_addr} is labelled {nm} -- this is a case body "
                          f"of another switch, not a function start")
    hi = func.getBody().getMaxAddress().getOffset()
    for ins in program.getListing().getInstructions(prev.getBody(), True):
        ft = ins.getFlowType()
        if ft.isJump() and ft.isComputed():
            for t in ins.getFlows():
                if end < t.getOffset() <= hi:
                    return None, (f"{prev.getName()} dispatches a switch to "
                                  f"{t} inside this block -- it is that "
                                  f"function's case body, not a function")

    return true_addr, (f"{prev.getName()} ends at {end:08x}; true entry "
                       f"{end + 1:08x} (+{shift} byte phase shift)")


def derive_padding_entry(program, func):
    """Entry sits on inter-function alignment padding; the real start is past it.

    The mirror image of derive_true_entry. There the entry was a few bytes LATE
    (inside the previous instruction); here it is a few bytes EARLY, parked on
    the run of 0x00 alignment bytes that follows a function's RET. Ghidra
    decodes those zeros as `ADD byte ptr [EAX],AL` and declares a function on
    them, swallowing the real routine that begins just after.

    Requiring a RET immediately before is what makes this safe: it proves the
    zeros are inter-function padding rather than data that happens to be zero.
    """
    lst = program.getListing()
    mem = program.getMemory()
    entry = func.getEntryPoint()
    prev = lst.getInstructionBefore(entry)
    if prev is None or not str(prev.getMnemonicString()).upper().startswith("RET"):
        return None, "not immediately preceded by a RET -- may not be padding"
    hi = func.getBody().getMaxAddress().getOffset()
    n = 0
    while n < PHASE_SLACK and entry.getOffset() + n <= hi:
        if mem.getByte(entry.add(n)) != 0:
            break
        n += 1
    else:
        return None, "no non-padding byte within the window"
    if n == 0:
        return None, "entry byte is not 0x00 padding"
    return entry.add(n), (f"{n} byte(s) of 0x00 padding after the RET at "
                          f"{prev.getAddress()}; true entry {entry.add(n)}")


def computed_jump_targets(program, func, cache):
    """Offsets a function's computed (jump-table) jumps dispatch to."""
    key = func.getEntryPoint().getOffset()
    if key in cache:
        return cache[key]
    out = set()
    for ins in program.getListing().getInstructions(func.getBody(), True):
        ft = ins.getFlowType()
        if ft.isJump() and ft.isComputed():
            for t in ins.getFlows():
                out.add(t.getOffset())
    cache[key] = out
    return out


def find_owner(program, func, suspects, anchors, jt_cache):
    """The real function this block belongs to, or None.

    Four routes. None of them is positional adjacency on its own, which would
    happily adopt an unrelated neighbour.

      D  a real function's JUMP TABLE dispatches into this block. This is the
         strongest and the most common: the switch owner is intact, its case
         bodies are what got mis-declared. Note the table points at the TRUE
         case addresses, which sit a few bytes BEFORE the bogus entry -- that
         offset is the phase shift itself -- and the block usually swallows
         several later cases whole.
      A  the block's terminal JMP lands inside a real function's body
      B  exactly one real function references this entry
      C  the terminal JMP lands in code claimed by NOBODY, and the nearest real
         function preceding that target is the natural owner
    """
    fm = program.getFunctionManager()
    entry = func.getEntryPoint()
    body = func.getBody()
    lo = entry.getOffset() - PHASE_SLACK
    hi = body.getMaxAddress().getOffset()

    cand = preceding_anchor(anchors, entry)
    if cand is not None:
        hits = sorted(t for t in computed_jump_targets(program, cand, jt_cache)
                      if lo <= t <= hi)
        if hits:
            shift = entry.getOffset() - hits[0]
            return cand, (f"{cand.getName()} jump-table dispatches into this block "
                          f"({len(hits)} case target(s), first at "
                          f"{hits[0]:08x}, entry is +{shift} bytes off)")

    tgt = terminal_target(program, func)
    if tgt is not None:
        owner = fm.getFunctionContaining(tgt)
        if owner is not None and owner != func \
                and owner.getEntryPoint() not in suspects:
            return owner, f"terminal JMP lands inside {owner.getName()}"

    _, refs = incoming(program, entry)
    cands = [f for f in refs if f != func and f.getEntryPoint() not in suspects]
    if len(cands) == 1:
        return cands[0], f"only referenced from {cands[0].getName()}"

    if tgt is not None and fm.getFunctionContaining(tgt) is None:
        owner = preceding_anchor(anchors, tgt)
        if owner is not None:
            gap = entry.getOffset() - owner.getEntryPoint().getOffset()
            # Require the block to sit AFTER the owner and close to it. Without
            # the distance bound a truncated function could adopt code an
            # arbitrary distance away just for being the nearest thing above it.
            if 0 < gap <= MAX_ADOPT_DISTANCE:
                return owner, (f"terminal JMP -> {tgt} is unclaimed; nearest real "
                               f"function above it is {owner.getName()} (+0x{gap:x})")
    return None, None


def preceding_anchor(anchors, addr):
    """Greatest non-suspect function whose entry precedes addr."""
    import bisect
    off = addr.getOffset()
    i = bisect.bisect_left([a[0] for a in anchors], off)
    return anchors[i - 1][1] if i > 0 else None


def scan(program, args):
    fm = program.getFunctionManager()
    lst = program.getListing()

    # Pass 1: entries that cannot begin a function.
    suspects = {}
    for func in fm.getFunctions(True):
        if func.isThunk() or func.isExternal():
            continue
        name = func.getName()
        if not args.include_named and not re.search(r'FUN_[0-9a-fA-F]{6,}$', name):
            continue
        entry = func.getEntryPoint()
        ins = lst.getInstructionAt(entry)
        if ins is None:
            continue
        why = impossible_reason(instr_text(ins))
        if why is None:
            continue
        if args.tu and tu_of(program, func) != args.tu:
            continue
        suspects[entry] = {"func": func, "name": name, "entry": entry,
                           "first": instr_text(ins), "why": why,
                           "tu": tu_of(program, func)}

    # Pass 2: guards and owner resolution. Owner lookup must know the whole
    # suspect set, so that one bogus block never adopts another.
    suspect_entries = set(suspects)
    anchors = sorted(
        (f.getEntryPoint().getOffset(), f)
        for f in fm.getFunctions(True)
        if not f.isThunk() and not f.isExternal()
        and f.getEntryPoint() not in suspect_entries)

    jt_cache = {}
    rows = []
    for rec in suspects.values():
        func = rec["func"]
        has_call, _ = incoming(program, rec["entry"])
        if has_call:
            rec["action"], rec["detail"] = "KEEP-CALLED", "has an incoming CALL"
            rows.append(rec)
            continue
        # Entry parked on alignment padding: the real function starts a few
        # bytes later. Handle before everything else -- such a block has no
        # owner and no switch, so every other route would call it an ORPHAN.
        if rec["why"].startswith("decodes 00 00"):
            true_entry, why = derive_padding_entry(program, func)
            if true_entry is not None:
                rec["action"] = "REBASE"
                rec["true_entry"] = true_entry
                rec["detail"] = why
            else:
                rec["action"] = "ORPHAN"
                rec["detail"] = f"looks like padding but is not safely resolvable: {why}"
            rows.append(rec)
            continue

        # A block that dispatches its own switch is a real function with a bad
        # entry. Decide this BEFORE looking for an owner: deleting a switch
        # owner would strand every case body it dispatches to.
        if owns_a_switch(program, func):
            true_entry, why = derive_true_entry(program, func, anchors)
            if true_entry is not None:
                rec["action"] = "REBASE"
                rec["true_entry"] = true_entry
                rec["detail"] = why
            else:
                rec["action"] = "ORPHAN"
                rec["detail"] = f"owns a switch but its true entry is undecidable: {why}"
            rows.append(rec)
            continue

        owner, why = find_owner(program, func, suspect_entries, anchors, jt_cache)
        if owner is None:
            rec["action"] = "ORPHAN"
            rec["detail"] = "no owning function found -- entry is wrong but code would be stranded"
        else:
            rec["action"] = "REMOVE"
            rec["owner"] = owner
            rec["detail"] = why
        rows.append(rec)
    rows.sort(key=lambda r: str(r["entry"]))
    return rows


def report(rows, args):
    counts = Counter(r["action"] for r in rows)
    print("=" * 78)
    print(f"MISALIGNED FUNCTION ENTRIES  ({args.program})")
    print("=" * 78)
    print(f"  suspect entries: {len(rows)}")
    for a in ("REBASE", "REMOVE", "ORPHAN", "KEEP-CALLED"):
        if counts[a]:
            print(f"    {a:12} {counts[a]}")
    by_tu = Counter(r["tu"] for r in rows)
    print("\n  by translation unit:")
    for tu, n in by_tu.most_common():
        print(f"    {n:4}  {tu}")
    for action in ("REBASE", "REMOVE", "ORPHAN", "KEEP-CALLED"):
        sel = [r for r in rows if r["action"] == action]
        if not sel:
            continue
        print(f"\n  ===== {action} ({len(sel)}) =====")
        for r in sel[:args.show]:
            print(f"    {r['entry']}  {r['name']}")
            print(f"        first : {r['first']}   <- {r['why']}")
            if action == "REMOVE":
                print(f"        owner : {r['owner'].getName()} @ {r['owner'].getEntryPoint()}")
            if action == "REBASE":
                print(f"        move  : {r['entry']} -> {r['true_entry']}")
            print(f"        {r['detail']}")
        if len(sel) > args.show:
            print(f"    ... and {len(sel) - args.show} more (raise --show)")


def snapshot(args):
    """Take a .gar before mutating. Reuses snapshot_project.py, which needs no JVM."""
    sys.path.insert(0, THIS_DIR)
    import snapshot_project as sp
    name = args.project_name
    gpr = os.path.join(args.project_dir, name + ".gpr")
    rep = os.path.join(args.project_dir, name + ".rep")
    if not (os.path.exists(gpr) and os.path.isdir(rep)):
        sys.exit(f"ERROR: cannot snapshot -- {gpr} or {rep} missing")
    # choose_out_path does not default the date itself -- passing None names the
    # archive "<name>_None_...", which sorts wrong and hides when it was taken.
    import datetime
    today = datetime.date.today().strftime("%Y_%m_%d")
    out = sp.choose_out_path(args.project_dir, name, today, "pre-misaligned-fix")
    entries = sp.collect_entries(gpr, rep, name)
    comment = "Ghidra archive file for %s project." % name
    sp.write_archive(out, entries, comment)
    sp.verify_archive(out, entries, comment)
    print(f"Snapshot written: {out}")
    return out


def _disassemble(program, addr):
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.util.task import ConsoleTaskMonitor
    return DisassembleCommand(addr, None, True).applyTo(program, ConsoleTaskMonitor())


def _create_function(program, addr):
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.util.task import ConsoleTaskMonitor
    return CreateFunctionCmd(addr).applyTo(program, ConsoleTaskMonitor())


def apply_rows(program, rows):
    """Remove the bogus function AND clear its mis-decoded bytes.

    Removing the function alone is not a repair: the instructions stay, still
    decoded from the wrong offset, and any later pass re-adopts them exactly as
    they are. The bytes have to go back to undefined so that a flow-following
    disassembly can decode them from the RIGHT offset, which is what the owner's
    jump table points at.

    Re-disassembly is deliberately left to validate_function_ranges.py --fix,
    which already does 'disassemble missing targets following flow, then
    fixupFunctionBody' and is QA-gated for it. After this pass the owner will
    show up there as FLOW_UNDEFINED (HIGH) -- flowing into undefined bytes --
    which is precisely the input that tool is built for.
    """
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.util.task import ConsoleTaskMonitor
    import delete_function as df

    fm = program.getFunctionManager()
    lst = program.getListing()
    monitor = ConsoleTaskMonitor()
    removed, cleared, fixed, failed = 0, 0, set(), []

    # REBASE first: these are real functions, and the blocks that REMOVE wants
    # to fold away are often their case bodies. Fixing the owner first means the
    # removals land against a function that is already the right shape.
    rebased = 0
    for r in [x for x in rows if x["action"] == "REBASE"]:
        name, entry, true_entry = r["name"], r["entry"], r["true_entry"]
        try:
            body = r["func"].getBody()
            hi = body.getMaxAddress()
            if not fm.removeFunction(entry):
                failed.append((name, "removeFunction returned False"))
                continue
            df.clear_vacated_symbol(program, entry, name)
            # Clear from whichever comes first. A backward rebase leaves the
            # phase-shift bytes below the true entry alone; a forward one (entry
            # parked on padding) must also clear the bogus instructions Ghidra
            # decoded out of the padding itself, or they stay as fake code.
            lo = true_entry if true_entry.getOffset() < entry.getOffset() else entry
            lst.clearCodeUnits(lo, hi, False)
            _disassemble(program, true_entry)
            _create_function(program, true_entry)
            rebased += 1
        except Exception as exc:
            failed.append((name, f"rebase: {exc}"))

    for r in [x for x in rows if x["action"] == "REMOVE"]:
        name, entry = r["name"], r["entry"]
        try:
            body = r["func"].getBody()
            if not fm.removeFunction(entry):
                failed.append((name, "removeFunction returned False"))
                continue
            # removeFunction only DEMOTES the symbol to a label; clear it or the
            # vacated entry keeps a FUN_-shaped name that later passes re-adopt.
            df.clear_vacated_symbol(program, entry, name)
            removed += 1
            for rng in body.getAddressRanges():
                lst.clearCodeUnits(rng.getMinAddress(), rng.getMaxAddress(), False)
                cleared += 1
            fixed.add(r["owner"])
        except Exception as exc:
            failed.append((name, str(exc)))

    redisassemble_jump_targets(program, fixed, failed)

    for owner in fixed:
        try:
            CreateFunctionCmd.fixupFunctionBody(program, owner, monitor)
        except Exception as exc:
            failed.append((owner.getName(), f"fixupFunctionBody: {exc}"))
    return rebased, removed, cleared, len(fixed), failed


def redisassemble_jump_targets(program, owners, failed):
    """Re-decode each owner's jump-table case bodies from the CORRECT offset.

    Clearing the bogus block drops the computed-jump references with it, so the
    owner's switch no longer advertises where its cases are and nothing can find
    them by following flow -- they would sit as undefined bytes owned by nobody.
    The table itself is still in the data section, so re-reading the JMP's
    targets and disassembling each one restores them at the right boundary.

    This is why the targets must be re-read AFTER the clear: they are the true
    case addresses, which is exactly what the mis-declared entries were NOT.
    """
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()
    lst = program.getListing()
    for owner in owners:
        try:
            targets = set()
            for ins in lst.getInstructions(owner.getBody(), True):
                ft = ins.getFlowType()
                if ft.isJump() and ft.isComputed():
                    for t in ins.getFlows():
                        targets.add(t)
            for t in sorted(targets, key=lambda a: a.getOffset()):
                if t.isExternalAddress() or not t.isMemoryAddress():
                    continue
                if lst.getInstructionAt(t) is None:
                    lst.clearCodeUnits(t, t, False)
                    DisassembleCommand(t, None, True).applyTo(program, monitor)
        except Exception as exc:
            failed.append((owner.getName(), f"redisassemble: {exc}"))


def repair_jumptables(program, args):
    """Standalone: re-decode undefined jump-table case bodies and re-absorb them.

    Independent of the removal pass. Finds any function whose computed jump
    dispatches to bytes that are not instructions -- code that exists but was
    cleared, or never decoded -- disassembles each target from its true
    boundary, and recomputes the owner's body.
    """
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.util.task import ConsoleTaskMonitor

    fm = program.getFunctionManager()
    lst = program.getListing()
    monitor = ConsoleTaskMonitor()

    broken = []
    for func in fm.getFunctions(True):
        if func.isThunk() or func.isExternal():
            continue
        bad = []
        for ins in lst.getInstructions(func.getBody(), True):
            ft = ins.getFlowType()
            if ft.isJump() and ft.isComputed():
                for t in ins.getFlows():
                    # EXTERNAL:xxxx targets are import thunks, not code in this
                    # image -- there is nothing local to disassemble.
                    if t.isExternalAddress() or not t.isMemoryAddress():
                        continue
                    if lst.getInstructionAt(t) is None:
                        bad.append(t)
        if bad:
            broken.append((func, sorted(set(bad), key=lambda a: a.getOffset())))

    print("=" * 78)
    print(f"JUMP-TABLE CASE BODIES THAT ARE NOT CODE  ({args.program})")
    print("=" * 78)
    print(f"  functions affected: {len(broken)}")
    for func, bad in broken[:args.show]:
        print(f"    {func.getEntryPoint()}  {func.getName()}  "
              f"{len(bad)} undefined target(s): "
              f"{', '.join(str(b) for b in bad[:6])}")
    if not broken:
        print("\nNothing to repair.")
        return 0

    tx = program.startTransaction("repair jump-table case bodies")
    fixed, failed = 0, []
    try:
        for func, bad in broken:
            try:
                for t in bad:
                    lst.clearCodeUnits(t, t, False)
                    from ghidra.app.cmd.disassemble import DisassembleCommand
                    DisassembleCommand(t, None, True).applyTo(program, monitor)
                CreateFunctionCmd.fixupFunctionBody(program, func, monitor)
                fixed += 1
            except Exception as exc:
                failed.append((func.getName(), str(exc)))
    finally:
        program.endTransaction(tx, True)
    program.getDomainFile().save(ConsoleTaskMonitor())
    print(f"\nrepaired {fixed} function(s); failed {len(failed)}")
    for n, e in failed:
        print(f"  FAILED {n}: {e}")
    print("Saved.")
    return 1 if failed else 0


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_dir")
    ap.add_argument("project_name")
    ap.add_argument("program", nargs="?", default="nocturne.exe")
    ap.add_argument("--tu", help="restrict to one translation unit, e.g. engine/clipper.c")
    ap.add_argument("--show", type=int, default=20)
    ap.add_argument("--include-named", action="store_true",
                    help="also consider functions that already have a real name "
                         "(a name means somebody asserted it is real -- off by default)")
    ap.add_argument("--no-snapshot", action="store_true",
                    help="skip the pre-apply .gar snapshot (not recommended)")
    ap.add_argument("--apply", action="store_true", help="fix + save (default: report)")
    ap.add_argument("--max-passes", type=int, default=5,
                    help="iterate scan/fix until convergence (default 5)")
    ap.add_argument("--repair-jumptables", action="store_true",
                    help="no removal: find functions whose jump-table case bodies "
                         "are undefined bytes, re-disassemble them and re-absorb. "
                         "Heals a program where the cases were cleared but never "
                         "re-decoded. Implies --apply semantics; snapshots first.")
    args = ap.parse_args()
    args.project_dir = os.path.abspath(args.project_dir)

    if (args.apply or args.repair_jumptables) and not args.no_snapshot:
        snapshot(args)

    import pyghidra
    pyghidra.start()
    from ghidra.util.task import ConsoleTaskMonitor

    project = pyghidra.open_project(args.project_dir, args.project_name)
    code = 0
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            if args.repair_jumptables:
                code = repair_jumptables(program, args)
                raise SystemExit(code)
            rows = scan(program, args)
            report(rows, args)

            todo = [r for r in rows if r["action"] in ("REBASE", "REMOVE")]
            if not args.apply:
                print(f"\n[dry-run] re-run with --apply to fix {len(todo)} entr(ies)")
            elif not todo:
                print("\nNothing to apply.")
            else:
                # Iterate: rebasing a switch owner turns it into a real function,
                # which lets the NEXT pass resolve the case bodies that were
                # ORPHAN only because their owner was itself a suspect. One pass
                # can never fix a chain; convergence is the whole point.
                tot_reb = tot_rem = 0
                failed = []
                for npass in range(1, args.max_passes + 1):
                    if npass > 1:
                        rows = scan(program, args)
                        todo = [r for r in rows if r["action"] in ("REBASE", "REMOVE")]
                        if not todo:
                            print(f"\n=== pass {npass}: converged, nothing left ===")
                            break
                        print(f"\n=== pass {npass}: {len(todo)} newly actionable ===")
                        for r in todo[:args.show]:
                            print(f"    {r['action']:7} {r['entry']}  {r['name']}")
                    tx = program.startTransaction(f"misaligned entries pass {npass}")
                    try:
                        reb, rem, cle, own, fail = apply_rows(program, rows)
                    finally:
                        program.endTransaction(tx, True)
                    tot_reb += reb
                    tot_rem += rem
                    failed += fail
                    print(f"  pass {npass}: rebased {reb}, removed {rem}, "
                          f"cleared {cle}, owners re-fixed {own}, failed {len(fail)}")
                    if fail:
                        print("  stopping: a pass failed, not iterating further")
                        break
                print(f"\nTOTAL rebased {tot_reb}, removed {tot_rem}, failed {len(failed)}")
                for n, e in failed:
                    print(f"  FAILED {n}: {e}")
                program.getDomainFile().save(ConsoleTaskMonitor())
                print("Saved.")
                print("\nQA gate: validate_function_ranges.py, "
                      "fix_function_boundaries.py, then re-export.")
                code = 1 if failed else 0
    except Exception as exc:
        print(f"ERROR: {exc}")
        import traceback
        traceback.print_exc()
        code = 1
    finally:
        try:
            project.close()
        except Exception:
            pass

    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
