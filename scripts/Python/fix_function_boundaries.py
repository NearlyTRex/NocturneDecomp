#!/usr/bin/env python3
"""
fix_function_boundaries.py

Detect (and optionally fix) functions whose ENTRY POINT is wrong - the class of
error that shows up after a define pass (find_missing_functions.py, manual work)
when a function was started a few bytes too late, leaving its real prologue
orphaned, or when one real function got split into two.

This is complementary to validate_function_ranges.py: that tool fixes a function
whose *body* doesn't cover all its code (tail/interior left undisassembled). This
tool fixes a function whose *start* is wrong - orphaned bytes that PRECEDE the
entry, which the body-coverage scan can't see.

Five detected classes (thunks/externals skipped):

  ENTRY_LATE  - the instruction ending immediately before a function's entry is
                orphaned (belongs to no function) and falls through into the
                entry. Walking that fall-through chain back to a boundary
                (padding / data / another function) gives the true start. The
                function was defined too late; recreate it at the true start.
                (e.g. a `sub esp,N` / `mov eax,[esp+x]` prologue left orphaned.)

  SPLIT       - the instruction before a function's entry belongs to a DIFFERENT
                function A and falls through into this entry B. A real function
                doesn't fall through into another's entry, so A+B are one
                function that got split. Remove B and re-absorb it into A.

  ENTRY_EARLY - the entry sits in the inter-function ALIGNMENT PADDING before the
                real code: the function begins with a run of multi-byte NOPs
                (`NOP`, `LEA EAX,[EAX]`, `MOV ECX,ECX`, `XCHG AX,AX`), the entry
                is not 16-aligned, and skipping the NOP run lands exactly on a
                16-aligned address inside the body. The function was defined too
                early and swallowed the preceding padding; recreate it at the
                aligned address. Neither ENTRY_LATE nor SPLIT can see this: the
                padding belongs to *this* function and nothing falls into it.
                Gated on there being no incoming references to the padding entry
                (a real entry gets called; padding does not).

  ENTRY_MISALIGNED
              - the entry is not on a real instruction boundary at all: it sits
                INSIDE an instruction, so every question asked *at* the entry
                returns a phase-shifted decode. This is why ENTRY_EARLY misses
                it -- that class asks what instruction is at the entry and tests
                it with _is_nop_like, but an entry bisecting `8D 52 00`
                (`LEA EDX,[EDX]`) comes back as `PUSH EDX`, not a NOP, so its
                run length is 0 and it bails. ENTRY_LATE/SPLIT need *defined*
                code before the entry and OVERLAP needs a preceding function
                flowing into an undefined gap, so a shifted entry sitting after
                a clean RET matches none of them.
                Detected by sweeping instruction starts from a trusted anchor
                (the byte after the previous function's body) and checking
                whether the entry is among them. The correction runs in BOTH
                directions, which is why it is not a special case of
                ENTRY_EARLY: an entry inside padding moves FORWARD past the NOP
                run (0040e1cc -> 0040e1d0), while an entry inside the real first
                instruction moves BACK to it (0040e2e1 -> 0040e2e0).
                Gated on zero incoming refs to the bogus entry.

  OVERLAP     - a phase-shifted / misaligned HALLUCINATION: the entry sits after a
                run of UNDEFINED bytes that a preceding function V flows into, i.e.
                B was defined mid-instruction inside V's real (still-undisassembled)
                tail; B then x86-resyncs into V's genuine tail (often sharing its
                `ret`). Predecessor bytes are undefined (not defined code, not NOP
                padding), so ENTRY_LATE/SPLIT/ENTRY_EARLY are all blind to it - it
                otherwise only shows up as V's HIGH FLOW_UNDEFINED tail in
                validate_function_ranges. Gated on B having ZERO incoming refs and
                not being a vtable slot. The fix is a DELETE of B (+ undefine its
                body); the victim's tail is then rebuilt by validate --fix. Because
                DELETE is destructive and unlike the boundary moves, OVERLAP is
                always detected/reported but only acted on with --kind OVERLAP.

The ENTRY_* / SPLIT fixes remove the mis-defined function(s) and rebuild via flow
analysis. By default the function's NAME, SIGNATURE (return type, parameter
names/types/storage), calling convention, no-return flag, namespace, comments and
local variables are snapshotted before removal and re-applied afterwards - pass
--no-preserve to get the old lossy behaviour (rebuild resets everything but the
name). Anything that fails to restore is reported loudly.

Safety rails:
  * `removeFunction()` demotes the old function symbol to a plain global label
    rather than deleting it, which would strand a phantom symbol named for the
    old address in alignment padding (visible in exported symbols_label buckets,
    marked importable). `clear_vacated_symbol()` deletes it, matching by exact
    name and address so genuine LAB_*/jump-target labels survive.
  * Functions whose body overlaps a CODE_CAVE range (annotations/<prog>/code_caves.json)
    or contains a byte-patch address (byte_patches.json) are SKIPPED by default -
    rebuilding flow across relocated/patched code can produce garbage bodies.
    Override with --allow-patched.
  * --exclude REGEX (repeatable) drops findings by function name, e.g.
    --exclude '^crt_' to leave the CRT alone.
  * SPLIT is only reported when B has NO references from outside A, of any type,
    AND B does not occupy a vtable slot. Both checks matter and neither is
    redundant:
      - Reference check counts every RefType, not just calls. A C++ virtual
        method is reached through a vtable, which Ghidra records as a **DATA**
        reference, so a calls-only filter reports it as uncalled.
      - Vtable veto reads annotations/<prog>/vtables/*.json off disk, so it holds
        even if the reference data is incomplete.
    A genuine SPLIT fragment is reachable ONLY by flow from inside A - e.g. the
    shared `return 0` tail of checkNameHash_FUN_0040c700, entered by a JZ.
  * --split-strong-only restricts SPLIT to cases where A's body is *fragmented
    around* B. **This is a filter, NOT a safety gate.** It once shipped as
    "near-proof of a real split" and that was wrong in the worst way: a small
    virtual method sitting between two chunks of a neighbour produces exactly
    this shape, so the flag actively SELECTED FOR the vtable-absorption bug. It
    is only meaningful once the reference + vtable checks above have run.

Prefer fixing bodies (validate_function_ranges) before trusting fallthrough-only
SPLITs at all - if A's real body ends in a RET before B, the fall-through that
the detector keys on is itself an artifact of A's truncated body.

Report-first. Pass --apply to mutate + save. Manual overrides via
--fix WRONG=CORRECT (repeatable) bypass detection for a specific entry.

Usage:
    python3 -u fix_function_boundaries.py <project_dir> <project_name> [program] \\
        [--apply] [--only-fun] [--exclude REGEX] [--allow-patched] [--no-preserve] \\
        [--kind ENTRY_LATE,SPLIT,ENTRY_EARLY] [--fix 1000a177=1000a170 ...] [--out FILE]

Examples:
    python3 -u fix_function_boundaries.py $PWD/projects NocturneEdit tridx7.dll
    python3 -u fix_function_boundaries.py $PWD/projects NocturneEdit nocedit.exe --exclude '^crt_'
    python3 -u fix_function_boundaries.py $PWD/projects NocturneEdit nocedit.exe \\
        --kind ENTRY_EARLY --exclude '^crt_' --apply
    python3 -u fix_function_boundaries.py $PWD/projects NocturneEdit nocturne.exe --apply --only-fun

@author NearlyTRex
@category Annotations
"""

import os
import re
import sys
import json
import argparse

MAX_CHAIN = 64     # safety bound on prologue-chain walk-back
MAX_NOP_RUN = 8    # safety bound on leading alignment-padding NOP run
MAX_SWEEP = 64     # safety bound on the ENTRY_MISALIGNED anchor->entry sweep
MAX_OVERSHOOT = 32 # how far past the entry that sweep may continue

# OVERLAP is always detected/reported but is NOT in the default apply set: its
# action is a DELETE (of a bogus function), which is a different, destructive
# operation from the boundary moves - require an explicit --kind OVERLAP to act.
DEFAULT_KINDS = ("ENTRY_LATE", "SPLIT", "ENTRY_EARLY", "ENTRY_MISALIGNED")
ALL_KINDS = ("ENTRY_LATE", "SPLIT", "ENTRY_EARLY", "ENTRY_MISALIGNED", "OVERLAP")

# Single-instruction no-ops Watcom/MSVC emit as inter-function alignment padding.
_NOP_FORMS = (
    re.compile(r'^LEA\s+(E[A-Z]{2}),\[\1\]$'),
    re.compile(r'^MOV\s+(E[A-Z]{2}),\1$'),
    re.compile(r'^XCHG\s+(E?[A-Z]{2}),\1$'),
)


def _is_nop_like(instr):
    """True if `instr` is a single-instruction no-op used as alignment padding."""
    if instr.getMnemonicString().upper() == "NOP":
        return True
    text = " ".join(str(instr).split()).upper()
    return any(rx.match(text) for rx in _NOP_FORMS)


def _external_ref_count_to(program, addr, exclude_body=None):
    """Count incoming references to `addr` of ANY type, ignoring `exclude_body`.

    Returns (count, kinds_dict).

    Counting only CALL references here was a serious bug: a C++ *virtual* method
    is never CALLed directly, it is reached through a vtable slot, which Ghidra
    records as a **DATA** reference. Filtering to isCall() therefore reported
    every vtable-only method as "no external callers" - and 11 one-byte empty
    virtual overrides (`CWeapon_onFired` had 12 DATA refs) were absorbed into
    their neighbours, blanking their vtable entries to raw addresses.

    Any reference from outside A means B is a real function. A genuine SPLIT
    fragment is reachable *only* by flow from inside A (e.g. a shared `return 0`
    tail entered by a JZ, as in checkNameHash_FUN_0040c700).
    """
    n = 0
    kinds = {}
    it = program.getReferenceManager().getReferencesTo(addr)
    while it.hasNext():
        ref = it.next()
        if exclude_body is not None and exclude_body.contains(ref.getFromAddress()):
            continue
        t = str(ref.getReferenceType())
        kinds[t] = kinds.get(t, 0) + 1
        n += 1
    return n, kinds


def load_vtable_targets(program_name):
    """Every function address that appears in an exported vtable slot.

    Independent second line of defence against absorbing a virtual method: read
    `annotations/<prog>/vtables/*.json` (field `func_addr`) straight off disk.
    Belt-and-braces with the reference check above - if either says B is a vtable
    entry, B is a real function.
    """
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.abspath(os.path.join(script_dir, "..", ".."))
    vt_dir = os.path.join(repo_root, "annotations", program_name, "vtables")
    targets = set()
    if not os.path.isdir(vt_dir):
        print("WARN: no vtables/ export at %s - vtable veto unavailable!" % vt_dir)
        return targets
    for fn in sorted(os.listdir(vt_dir)):
        if not fn.endswith(".json"):
            continue
        try:
            with open(os.path.join(vt_dir, fn)) as fh:
                blob = fh.read()
        except Exception as e:
            print("WARN: could not read %s: %s" % (fn, e))
            continue
        for m in re.finditer(r'"func_addr"\s*:\s*"([0-9a-fA-F]+)"', blob):
            targets.add(int(m.group(1), 16))
    return targets


def _ref_count_to(program, addr):
    n = 0
    it = program.getReferenceManager().getReferencesTo(addr)
    while it.hasNext():
        it.next()
        n += 1
        if n > 64:
            break
    return n


def _ft_offset(instr):
    ft = instr.getFallThrough()
    return None if ft is None else ft.getOffset()


def _detect_entry_early(program, B, listing):
    """ENTRY_EARLY: entry sits in alignment padding ahead of the real code.

    Returns (correct_addr, refs_to_correct) or None.
    """
    E = B.getEntryPoint()
    if (E.getOffset() & 0xf) == 0:
        return None  # already aligned -> entry is where the linker put it

    body = B.getBody()
    cur = E
    run = 0
    while run < MAX_NOP_RUN:
        ins = listing.getInstructionAt(cur)
        if ins is None:
            return None  # data/undefined inside the body -> not our shape
        if not _is_nop_like(ins):
            break
        cur = ins.getAddress().add(ins.getLength())
        run += 1
    if run == 0:
        return None  # entry is real code, just unaligned (tail-merged helper etc.)
    if (cur.getOffset() & 0xf) != 0:
        return None  # NOP run doesn't land on an alignment boundary
    if not body.contains(cur):
        return None  # the whole function is padding? leave it alone

    # A real entry gets called; alignment padding does not. Any incoming
    # reference to E means this is a genuine (if unaligned) entry point.
    if _ref_count_to(program, E) > 0:
        return None
    return cur, _ref_count_to(program, cur)


def _make_pseudo(program):
    """PseudoDisassembler decodes at an address WITHOUT mutating the program."""
    try:
        from ghidra.app.util import PseudoDisassembler
        return PseudoDisassembler(program)
    except Exception:
        return None


def _detect_entry_misaligned(program, B, listing, fm, pseudo):
    """ENTRY_MISALIGNED: the entry is not on a real instruction boundary.

    ENTRY_EARLY can only see an entry sitting exactly ON the first byte of a
    padding NOP, because it asks Ghidra what instruction is AT the entry and
    tests it with _is_nop_like. When the entry is phase-shifted INTO the middle
    of an instruction, that question returns garbage that happens to decode --
    `0040e1cc` is the second byte of `8D 52 00` (`LEA EDX,[EDX]`) and comes back
    as `PUSH EDX`, which is not NOP-like, so the run length is 0 and the
    detector bails. ENTRY_LATE/SPLIT are equally blind: they need *defined* code
    before the entry, and OVERLAP needs a preceding function flowing into an
    undefined gap. A phase-shifted entry after a clean `RET` matches none of
    them.

    The signal none of them use is boundary agreement. Sweep forward from a
    trusted anchor (the byte after the previous function's body, which is a
    boundary by construction) and collect real instruction starts. If the entry
    is not among them, it is mid-instruction and therefore wrong.

    The correction runs in BOTH directions, which is why this cannot be folded
    into ENTRY_EARLY:
      * entry inside padding  -> true start is past the padding run
        (`0040e1cc` -> `0040e1d0`, 4 bytes LATER)
      * entry inside the real first instruction -> true start is that
        instruction (`0040e2e1` -> `0040e2e0`, 1 byte EARLIER)

    Returns (correct_addr, refs_to_correct, direction) or None.
    """
    E = B.getEntryPoint()
    if (E.getOffset() & 0xf) == 0:
        return None          # aligned entries are where the linker put them
    if pseudo is None:
        return None

    # Neither FunctionManager nor Listing exposes getFunctionBefore here; walk
    # the backward function iterator instead and take the first entry below E.
    prev = None
    try:
        it = fm.getFunctions(E, False)
        while it.hasNext():
            f = it.next()
            if f.getEntryPoint().getOffset() < E.getOffset():
                prev = f
                break
    except Exception:
        return None
    if prev is None or prev.isExternal():
        return None
    try:
        anchor = prev.getBody().getMaxAddress().add(1)
    except Exception:
        return None
    if anchor.getOffset() >= E.getOffset():
        return None          # bodies overlap; a different pathology
    if E.getOffset() - anchor.getOffset() > MAX_SWEEP:
        return None          # too far to trust a linear sweep

    # Linear sweep: instruction starts from the anchor. Sweep PAST the entry --
    # when the entry sits inside padding the real start is *after* it, so a
    # sweep bounded at E would never collect the target.
    starts, cur, steps = [], anchor, 0
    limit = E.getOffset() + MAX_OVERSHOOT
    while cur.getOffset() <= limit and steps < MAX_CHAIN:
        try:
            ins = pseudo.disassemble(cur)
        except Exception:
            return None
        if ins is None:
            return None      # undecodable -> data, not our shape
        starts.append((cur, ins))
        cur = cur.add(ins.getLength())
        steps += 1
    if not starts:
        return None
    if any(a.getOffset() == E.getOffset() for a, _ in starts):
        return None          # entry IS a boundary -> not this bug

    # The instruction containing E is the last start below it.
    idx = None
    for i, (a, _) in enumerate(starts):
        if a.getOffset() < E.getOffset():
            idx = i
    if idx is None:
        return None

    # Watcom aligns function entries to 16 bytes, so the true start is a
    # 16-aligned, non-padding instruction start. Anchoring on alignment (rather
    # than on "the instruction containing the entry") matters because the entry
    # can sit inside ANY instruction of the function, not just the first: at
    # 00460c26 it bisects the *second* instruction, and the containing
    # instruction 00460c24 is a valid boundary but still not the entry.
    if _is_nop_like(starts[idx][1]):
        # Entry fell inside alignment padding -> real code starts after the run.
        j = idx
        while j < len(starts) and _is_nop_like(starts[j][1]):
            j += 1
        if j >= len(starts):
            return None      # padding runs past the sweep; give up
        correct, direction = starts[j][0], "forward"
    else:
        # Entry fell inside the body -> walk back to the aligned start.
        k = None
        for i in range(idx, -1, -1):
            if (starts[i][0].getOffset() & 0xf) == 0 and not _is_nop_like(starts[i][1]):
                k = i
                break
        if k is None:
            return None      # no aligned candidate in range; refuse to guess
        correct, direction = starts[k][0], "back"
    if (correct.getOffset() & 0xf) != 0:
        return None          # not an alignment boundary -> not this shape

    if correct.getOffset() == E.getOffset():
        return None
    # A real entry gets called (or sits in a vtable); padding and
    # mid-instruction addresses do not.
    if _ref_count_to(program, E) > 0:
        return None
    return correct, _ref_count_to(program, correct), direction


def _detect_overlap(program, B, listing, fm, vtable_targets):
    """OVERLAP: phase-shifted / misaligned hallucinated function.

    B's entry sits after a run of UNDEFINED bytes that a *preceding* function V
    flows into - i.e. B was defined mid-instruction inside V's real, still-
    undisassembled tail (V ends, a few undefined bytes remain, then B starts on a
    byte that is partway through V's next real instruction). x86 self-resync means
    B's body then rejoins V's genuine tail (often sharing its `ret`).

    Neither ENTRY_LATE/SPLIT/ENTRY_EARLY can see this: those need the bytes before
    the entry to be DEFINED code (owned or orphan) or NOP padding. Here they are
    undefined, so detect()'s `pinstr is None` arm would otherwise treat it as a
    clean boundary. It only surfaces as V's HIGH FLOW_UNDEFINED tail in
    validate_function_ranges.

    Signature (all required): an undefined gap immediately before B; the function V
    whose last instruction ends just before the gap FALLS THROUGH into the gap (V is
    fragmented - its real tail was stolen); B has ZERO incoming references; B is not
    a vtable slot. A real function after a gap gets referenced and its predecessor
    ends in ret/jmp - neither holds here.

    Returns dict(victim, gap_start) or None. The action is a DELETE of B (then the
    victim's tail is rebuilt by validate_function_ranges --fix).
    """
    E = B.getEntryPoint()
    prev = E.subtract(1) if E.getOffset() > 0 else None
    if prev is None or listing.getInstructionContaining(prev) is not None:
        return None  # predecessor is defined code -> ENTRY_LATE/SPLIT territory
    if listing.getDefinedDataContaining(prev) is not None:
        return None  # predecessor is defined DATA -> genuine data/code boundary

    # walk back through contiguous undefined bytes to the start of the gap
    g_start = E
    steps = 0
    while steps < MAX_CHAIN:
        pb = g_start.subtract(1) if g_start.getOffset() > 0 else None
        if pb is None:
            return None
        if listing.getInstructionContaining(pb) is not None:
            break
        if listing.getDefinedDataContaining(pb) is not None:
            return None  # ran into defined data before finding a function tail
        g_start = pb
        steps += 1
    if g_start.getOffset() == E.getOffset():
        return None  # no undefined gap

    vlast = listing.getInstructionContaining(g_start.subtract(1))
    if vlast is None:
        return None
    V = fm.getFunctionContaining(vlast.getAddress())
    if V is None or V.getEntryPoint().getOffset() == E.getOffset():
        return None
    if _ft_offset(vlast) != g_start.getOffset():
        return None  # V ends in ret/jmp-away -> gap is padding, B is legit-after-pad
    if E.getOffset() in vtable_targets:
        return None  # vtable slot -> real virtual method
    if _ref_count_to(program, E) > 0:
        return None  # referenced -> real function, not a hallucination
    return {"victim": V, "gap_start": g_start}


def detect(program, vtable_targets=frozenset()):
    """Return list of findings: dicts with kind/entry/correct/other/name."""
    fm = program.getFunctionManager()
    listing = program.getListing()
    pseudo = _make_pseudo(program)
    if pseudo is None:
        print("WARN: PseudoDisassembler unavailable - ENTRY_MISALIGNED disabled")
    findings = []

    funcs = [f for f in fm.getFunctions(True)
             if not f.isThunk() and not f.isExternal()]
    for B in funcs:
        E = B.getEntryPoint()

        mis = _detect_entry_misaligned(program, B, listing, fm, pseudo)
        if mis is not None:
            correct, nrefs, direction = mis
            findings.append({
                "kind": "ENTRY_MISALIGNED", "entry": E, "correct": correct,
                "other": None, "name": B.getName(), "func": B,
                "note": "entry is mid-instruction; true start lies %s (%d ref(s) "
                        "to corrected entry)" % (direction, nrefs),
            })
            continue

        early = _detect_entry_early(program, B, listing)
        if early is not None:
            correct, nrefs = early
            findings.append({
                "kind": "ENTRY_EARLY", "entry": E, "correct": correct,
                "other": None, "name": B.getName(), "func": B,
                "note": "%d ref(s) to corrected entry" % nrefs,
            })
            continue

        try:
            prev_byte = E.subtract(1)
        except Exception:
            continue
        if prev_byte is None:
            continue
        pinstr = listing.getInstructionContaining(prev_byte)
        if pinstr is None:
            # Data / undefined / padding before entry - usually a clean boundary.
            # But an UNDEFINED gap that a preceding function flows into means B was
            # defined mid-instruction inside that function's stolen tail (OVERLAP).
            ov = _detect_overlap(program, B, listing, fm, vtable_targets)
            if ov is not None:
                findings.append({
                    "kind": "OVERLAP", "entry": E,
                    "correct": ov["victim"].getEntryPoint(),
                    "other": ov["victim"], "name": B.getName(), "func": B,
                    "note": "0-ref entry inside %s's tail (it flows into undefined "
                            "%s); delete B, then validate --fix rebuilds the victim"
                            % (ov["victim"].getName(), ov["gap_start"]),
                })
            continue  # data / undefined / padding before entry -> clean boundary
        # the instruction just before must fall through *into* this entry
        if _ft_offset(pinstr) != E.getOffset():
            continue  # prev ends in ret/jmp/noreturn -> boundary is legit

        owner = fm.getFunctionContaining(pinstr.getAddress())
        if owner is not None:
            if owner.getEntryPoint().getOffset() == E.getOffset():
                continue  # same function (shouldn't happen before entry)
            if E.getOffset() in vtable_targets:
                # B occupies a vtable slot -> it is a virtual method, however
                # small. Absorbing it blanks that slot to a raw address.
                continue
            nrefs, kinds = _external_ref_count_to(program, E, owner.getBody())
            if nrefs:
                # Anything referencing B from outside A - a CALL, or a DATA ref
                # from a vtable/function-pointer table - means B is a real
                # function and A merely runs into it (usually because A's body
                # ends in alignment padding). Absorbing B would destroy it.
                continue
            spans = owner.getBody().getMaxAddress().getOffset() > E.getOffset()
            findings.append({
                "kind": "SPLIT", "entry": E, "correct": owner.getEntryPoint(),
                "other": owner, "name": B.getName(), "func": B,
                "spans": spans,
                "note": "no external refs; A %s" % (
                    "fragmented around B" if spans else "fallthrough only"),
            })
            continue

        # owner is None: orphan predecessor.
        if _is_nop_like(pinstr):
            # Alignment padding, not an orphaned prologue. It falls through into
            # the entry so it looks identical to a too-late entry, but padding
            # before an entry is a legitimate boundary. Without this check
            # ENTRY_EARLY and ENTRY_LATE ping-pong forever: moving an entry past
            # its padding orphans the NOPs, which ENTRY_LATE then "fixes" by
            # moving it back in. Only applies to the orphan path - for SPLIT the
            # predecessor is owned by another function, and trailing padding
            # inside that owner's body is normal (see checkNameHash_FUN_0040c700,
            # whose `LEA EAX,[EAX]` pad precedes its own split-off `return 0` tail).
            continue

        # Walk the fall-through chain back to a boundary.
        cur = E
        steps = 0
        while steps < MAX_CHAIN:
            try:
                pb = cur.subtract(1)
            except Exception:
                break
            ins = listing.getInstructionContaining(pb)
            if ins is None:
                break  # padding/data/undefined -> true start reached
            if _is_nop_like(ins):
                break  # alignment padding -> true start reached, do not absorb it
            if fm.getFunctionContaining(ins.getAddress()) is not None:
                break  # ran into another function -> stop
            if _ft_offset(ins) != cur.getOffset():
                break  # this orphan doesn't flow into the chain -> stop
            cur = ins.getAddress()
            steps += 1
        if cur.getOffset() != E.getOffset():
            findings.append({
                "kind": "ENTRY_LATE", "entry": E, "correct": cur,
                "other": None, "name": B.getName(), "func": B,
            })
    return findings


def parse_manual(program, fix_args):
    """--fix WRONG=CORRECT -> synthetic ENTRY_LATE/SPLIT findings."""
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()
    out = []
    for spec in fix_args or []:
        wrong_s, _, correct_s = spec.partition("=")
        wrong = space.getAddress(int(wrong_s, 16))
        correct = space.getAddress(int(correct_s, 16))
        B = fm.getFunctionAt(wrong)
        other = fm.getFunctionAt(correct)
        kind = "SPLIT" if (other is not None and correct.getOffset() != wrong.getOffset()) else "ENTRY_LATE"
        out.append({
            "kind": kind + "(manual)", "entry": wrong, "correct": correct,
            "other": other if kind == "SPLIT" else None,
            "name": B.getName() if B else "<none>", "func": B,
        })
    return out


def load_guard_ranges(program_name):
    """Cave ranges + byte-patch addresses that make a rebuild unsafe.

    Returns (cave_ranges, patch_addrs) as plain ints. Missing files -> empty.
    """
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.abspath(os.path.join(script_dir, "..", ".."))
    cave_ranges, patch_addrs = [], []

    caves_json = os.path.join(repo_root, "annotations", program_name, "code_caves.json")
    if os.path.isfile(caves_json):
        try:
            with open(caves_json) as fh:
                for cave in json.load(fh).get("caves", []):
                    start = int(str(cave["start"]), 16)
                    cave_ranges.append((start, start + int(cave.get("total_size", 0))))
        except Exception as e:
            print("WARN: could not read %s: %s" % (caves_json, e))

    patches_json = os.path.join(script_dir, "byte_patches.json")
    if os.path.isfile(patches_json):
        try:
            with open(patches_json) as fh:
                for group in json.load(fh).get("groups", []):
                    for patch in group.get("patches", []):
                        patch_addrs.append(int(str(patch["address"]), 16))
        except Exception as e:
            print("WARN: could not read %s: %s" % (patches_json, e))

    return cave_ranges, patch_addrs


def _body_is_patched(func, cave_ranges, patch_addrs):
    """Reason string if this function's body touches a cave / byte patch, else None."""
    if func is None:
        return None
    for rng in func.getBody().getAddressRanges():
        lo = rng.getMinAddress().getOffset()
        hi = rng.getMaxAddress().getOffset()
        for cs, ce in cave_ranges:
            if lo <= ce and cs <= hi:
                return "code cave @%06x" % cs
        for pa in patch_addrs:
            if lo <= pa <= hi:
                return "byte patch @%06x" % pa
    return None


def annotate_skips(findings, only_fun, excludes, allow_patched,
                   kinds, cave_ranges, patch_addrs, split_strong_only=False):
    """Set f['skip'] to a reason string (or None) for every finding."""
    patterns = [re.compile(rx) for rx in (excludes or [])]
    for f in findings:
        reason = None
        name = f["name"]
        if f["kind"].split("(")[0] not in kinds:
            reason = "--kind"
        elif (split_strong_only and f["kind"].startswith("SPLIT")
              and not f.get("spans")):
            reason = "--split-strong-only (A not fragmented around B)"
        elif only_fun and not name.startswith("FUN_"):
            reason = "--only-fun"
        else:
            for rx in patterns:
                if rx.search(name):
                    reason = "--exclude /%s/" % rx.pattern
                    break
        if reason is None and not allow_patched:
            patched = _body_is_patched(f.get("func"), cave_ranges, patch_addrs)
            if patched is None and f.get("other") is not None:
                patched = _body_is_patched(f["other"], cave_ranges, patch_addrs)
            if patched:
                reason = "patched (%s)" % patched
        f["skip"] = reason
    return findings


def report(findings):
    actionable = [f for f in findings if not f.get("skip")]
    print("\n=== boundary findings: %d (%d actionable, %d skipped) ===" % (
        len(findings), len(actionable), len(findings) - len(actionable)))
    for f in findings:
        aligned = "" if (f["correct"].getOffset() & 0xf) else " [16-aligned]"
        named = "" if f["name"].startswith("FUN_") else "  <<NAMED: %s>>" % f["name"]
        note = "  {%s}" % f["note"] if f.get("note") else ""
        skip = "  (skipped: %s)" % f["skip"] if f.get("skip") else ""
        print("  %-18s entry %s -> %s%s%s%s%s" % (
            f["kind"], f["entry"], f["correct"], aligned, named, note, skip))
    return findings


def snapshot_function(program, func):
    """Capture everything a remove+rebuild would otherwise destroy.

    Returns a dict of detached copies (safe to use after removeFunction).
    """
    from ghidra.program.model.listing import (
        ParameterImpl, ReturnParameterImpl, LocalVariableImpl)

    snap = {
        "name": func.getName(),
        "namespace": func.getParentNamespace(),
        "convention": func.getCallingConventionName(),
        "noreturn": func.hasNoReturn(),
        "custom_storage": func.hasCustomVariableStorage(),
        "varargs": func.hasVarArgs(),
        "comment": func.getComment(),
        "repeatable_comment": func.getRepeatableComment(),
        "ret": None, "params": [], "locals": [], "capture_errors": [],
    }
    try:
        ret = func.getReturn()
        snap["ret"] = ReturnParameterImpl(
            ret.getDataType(), ret.getVariableStorage(), program)
    except Exception as e:
        snap["capture_errors"].append("return: %s" % e)
    for p in func.getParameters():
        try:
            snap["params"].append(ParameterImpl(
                p.getName(), p.getDataType(), p.getVariableStorage(), program))
        except Exception as e:
            snap["capture_errors"].append("param %s: %s" % (p.getName(), e))
    for v in func.getLocalVariables():
        try:
            snap["locals"].append(LocalVariableImpl(
                v.getName(), v.getFirstUseOffset(), v.getDataType(),
                v.getVariableStorage(), program))
        except Exception as e:
            snap["capture_errors"].append("local %s: %s" % (v.getName(), e))
    return snap


_NAME_ADDR_SUFFIX = re.compile(r'^(.*_FUN_)([0-9a-fA-F]{6,16})$')
_DEFAULT_FUN_NAME = re.compile(r'^FUN_[0-9a-fA-F]+$')


def retarget_name(name, entry):
    """Rewrite a trailing _FUN_<hex> suffix to match `entry`.

    The project's naming convention embeds the entry address, so a boundary fix
    that moves the entry must move the suffix too - otherwise the exporter (which
    takes the address from the *name*, not the entry) emits a file whose name
    disagrees with its own `// Address:` line.

    Returns (name, changed).
    """
    m = _NAME_ADDR_SUFFIX.match(name)
    if not m:
        return name, False
    old_hex = m.group(2)
    new_hex = "%0*x" % (len(old_hex), entry.getOffset())
    if new_hex.lower() == old_hex.lower():
        return name, False
    return m.group(1) + new_hex, True


def restore_function(program, nf, snap):
    """Re-apply a snapshot onto a freshly-rebuilt function.

    Returns (problems, renamed_to_or_None).
    """
    from ghidra.program.model.listing import Function
    from ghidra.program.model.symbol import SourceType
    from java.util import ArrayList

    problems = list(snap.get("capture_errors", []))
    if nf is None:
        return problems + ["function was not recreated"], None

    try:
        if snap["namespace"] is not None:
            nf.setParentNamespace(snap["namespace"])
    except Exception as e:
        problems.append("namespace: %s" % e)

    renamed_to = None
    try:
        if _DEFAULT_FUN_NAME.match(snap["name"]):
            # Ghidra's own default name; it already re-derived one at the new
            # entry. Restoring the stale address-name would be actively wrong.
            pass
        else:
            new_name, changed = retarget_name(snap["name"], nf.getEntryPoint())
            nf.setName(new_name, SourceType.USER_DEFINED)
            if changed:
                renamed_to = new_name
    except Exception as e:
        problems.append("name: %s" % e)

    try:
        plist = ArrayList()
        for p in snap["params"]:
            plist.add(p)
        update_type = (Function.FunctionUpdateType.CUSTOM_STORAGE
                       if snap["custom_storage"]
                       else Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS)
        nf.updateFunction(snap["convention"], snap["ret"], plist,
                          update_type, True, SourceType.USER_DEFINED)
    except Exception as e:
        problems.append("signature: %s" % e)

    for flag, setter in (("varargs", "setVarArgs"), ("noreturn", "setNoReturn")):
        try:
            if snap[flag]:
                getattr(nf, setter)(True)
        except Exception as e:
            problems.append("%s: %s" % (flag, e))

    for lv in snap["locals"]:
        try:
            nf.addLocalVariable(lv, SourceType.USER_DEFINED)
        except Exception as e:
            problems.append("local %s: %s" % (lv.getName(), e))

    for key, setter in (("comment", "setComment"),
                        ("repeatable_comment", "setRepeatableComment")):
        try:
            if snap[key]:
                getattr(nf, setter)(snap[key])
        except Exception as e:
            problems.append("%s: %s" % (key, e))

    return problems, renamed_to


def clear_vacated_symbol(program, addr, old_name):
    """Delete the label `removeFunction()` leaves behind at a vacated entry.

    Ghidra demotes a removed function's symbol to a plain global label rather
    than deleting it, so a boundary fix would otherwise leave a phantom symbol
    named for the old address sitting in (usually) alignment padding - it shows
    up in exported symbols_label buckets marked importable.

    Matches by exact name so genuine `LAB_*` / jump-target labels at the same
    address are untouched. Returns the number of symbols deleted.
    """
    from ghidra.program.model.symbol import SymbolType

    deleted = 0
    try:
        for sym in program.getSymbolTable().getSymbols(addr):
            if sym.getName() != old_name:
                continue
            if sym.getSymbolType() == SymbolType.FUNCTION:
                continue  # a live function still owns this - leave it alone
            if sym.delete():
                deleted += 1
    except Exception as e:
        print("      WARN: could not clear stale symbol at %s: %s" % (addr, e))
    return deleted


def apply(program, findings, preserve):
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()
    fm = program.getFunctionManager()
    listing = program.getListing()

    changed = False
    lossy = []
    stale_cleared = 0
    tx = program.startTransaction("Fix function boundaries")
    ok = True
    try:
        for f in findings:
            if f.get("skip"):
                continue
            correct = f["correct"]
            name = f["name"]
            named = not name.startswith("FUN_")

            if f["kind"] == "OVERLAP":
                # Delete the misaligned hallucination + undefine its (partly-garbage,
                # partly-victim-tail) body. The victim's tail is then rebuilt by
                # validate_function_ranges --fix (it disassembles the freed bytes and
                # re-absorbs them). We do not rebuild here to avoid duplicating that
                # tool's flow-disassembly logic.
                B = f.get("func") or fm.getFunctionAt(f["entry"])
                if B is None:
                    continue
                body_ranges = [(r.getMinAddress(), r.getMaxAddress())
                               for r in B.getBody().getAddressRanges()]
                if fm.removeFunction(B.getEntryPoint()):
                    stale_cleared += clear_vacated_symbol(program, f["entry"], name)
                    for lo, hi in body_ranges:
                        listing.clearCodeUnits(lo, hi, False)
                    changed = True
                    print("  OVERLAP  deleted %s (%s) + undefined body; run "
                          "validate_function_ranges --fix to rebuild victim %s" % (
                              f["entry"], name, f["correct"]))
                continue

            if f["kind"].startswith("SPLIT"):
                A = f["other"]
                B = f.get("func") or fm.getFunctionAt(f["entry"])
                # B is absorbed into A; A keeps its own signature, so only B's
                # annotations are at risk and they describe a non-function.
                if B is not None:
                    fm.removeFunction(B.getEntryPoint())
                CreateFunctionCmd.fixupFunctionBody(program, A, monitor)
                nf = fm.getFunctionAt(A.getEntryPoint())
                if f["entry"].getOffset() != A.getEntryPoint().getOffset():
                    stale_cleared += clear_vacated_symbol(program, f["entry"], name)
                changed = True
                print("  SPLIT  removed %s, re-absorbed into %s -> body[%s-%s]" % (
                    f["entry"], A.getEntryPoint(),
                    nf.getEntryPoint() if nf else "?",
                    nf.getBody().getMaxAddress() if nf else "?"))
            else:  # ENTRY_LATE / ENTRY_EARLY - same rebuild, different direction
                B = f.get("func") or fm.getFunctionAt(f["entry"])
                snap = snapshot_function(program, B) if (preserve and B is not None) else None
                old_body = B.getBody() if B is not None else None
                if B is not None:
                    fm.removeFunction(B.getEntryPoint())
                # removeFunction drops the FUNCTION but leaves its INSTRUCTIONS.
                # For a wrong entry those instructions are decoded at the wrong
                # phase, so the corrected entry can land in the middle of one --
                # e.g. at 00417ff0, inside a stale `ADD byte ptr [EBX+..],CL`
                # spanning 00417fed-00417ff2. Ghidra refuses to create an
                # overlapping instruction, so DisassembleCommand is a no-op,
                # CreateFunctionCmd finds nothing, and the function is silently
                # never recreated -- leaving the address with NO function, which
                # is worse than the wrong one we started from. Undefine the old
                # extent first (the same step a manual delete-and-recreate
                # needs), widened to cover a correction that moved backwards.
                if old_body is not None:
                    try:
                        lo = old_body.getMinAddress()
                        if correct.getOffset() < lo.getOffset():
                            lo = correct
                        listing.clearCodeUnits(lo, old_body.getMaxAddress(), False)
                    except Exception as e:
                        print("  WARN: could not clear stale code units at %s: %s"
                              % (f["entry"], e))
                if listing.getInstructionAt(correct) is None:
                    DisassembleCommand(correct, None, True).applyTo(program, monitor)
                CreateFunctionCmd(correct).applyTo(program, monitor)
                nf = fm.getFunctionAt(correct)
                if nf is None:
                    # Never leave the address bare: say so loudly rather than
                    # reporting a move that silently deleted a function.
                    print("  !! %s -> %s produced NO function; the address is now "
                          "undefined and needs a manual create"
                          % (f["entry"], correct))
                # Address-scoped to the vacated entry, so this cannot touch the
                # rebuilt function regardless of when it runs relative to the
                # rename in restore_function below.
                if f["entry"].getOffset() != correct.getOffset():
                    stale_cleared += clear_vacated_symbol(program, f["entry"], name)

                if snap is not None:
                    problems, renamed_to = restore_function(program, nf, snap)
                    if problems:
                        lossy.append((f["entry"], name, problems))
                    restored = "  (restored: name+signature%s%s)" % (
                        ", renamed -> %s" % renamed_to if renamed_to else "",
                        ", %d issue(s)" % len(problems) if problems else "")
                elif nf is not None and named:
                    nf.setName(name, SourceType.USER_DEFINED)
                    restored = "  (name restored: %s)" % name
                else:
                    restored = ""

                changed = True
                print("  %-11s %s -> %s%s  body[%s-%s]" % (
                    f["kind"], f["entry"], correct, restored,
                    nf.getEntryPoint() if nf else "?",
                    nf.getBody().getMaxAddress() if nf else "?"))
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        import traceback
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)

    if stale_cleared:
        print("\ncleared %d stale symbol(s) left at vacated entry addresses" % stale_cleared)
    if lossy:
        print("\n!! %d function(s) did not restore cleanly - re-check these in Ghidra:" % len(lossy))
        for entry, name, problems in lossy:
            print("   %s %s" % (entry, name))
            for p in problems:
                print("       - %s" % p)
    return changed and ok


def main():
    p = argparse.ArgumentParser(description="Detect/fix wrong function entry-point boundaries.")
    p.add_argument("project_path")
    p.add_argument("project_name")
    p.add_argument("program_name", nargs="?", default="nocturne.exe")
    p.add_argument("--apply", action="store_true", help="Mutate + save (default: report only)")
    p.add_argument("--only-fun", action="store_true", help="Only touch FUN_-named (unnamed) functions")
    p.add_argument("--exclude", action="append", default=[], metavar="REGEX",
                   help="Skip findings whose function name matches (repeatable), e.g. '^crt_'")
    p.add_argument("--kind", default=",".join(DEFAULT_KINDS),
                   help="Comma-separated kinds to act on (valid: %s; default: %s - "
                        "OVERLAP is detected/reported always but only DELETED when you "
                        "opt in with --kind OVERLAP)" % (
                            ",".join(ALL_KINDS), ",".join(DEFAULT_KINDS)))
    p.add_argument("--split-strong-only", action="store_true",
                   help="Only act on SPLITs where A's body is fragmented around B "
                        "(near-proof); skip fallthrough-only ones, which can be "
                        "truncated-body artifacts")
    p.add_argument("--allow-patched", action="store_true",
                   help="Do not skip functions overlapping a code cave / byte patch")
    p.add_argument("--no-preserve", action="store_true",
                   help="Do not snapshot+restore signature/locals (old lossy behaviour)")
    p.add_argument("--fix", action="append", default=[], metavar="WRONG=CORRECT",
                   help="Manual override (hex addrs), repeatable; bypasses detection for that entry")
    p.add_argument("--out", default=None)
    args = p.parse_args()

    kinds = tuple(k.strip().upper() for k in args.kind.split(",") if k.strip())
    unknown = [k for k in kinds if k not in ALL_KINDS]
    if unknown:
        p.error("unknown --kind value(s): %s (valid: %s)" % (
            ",".join(unknown), ",".join(ALL_KINDS)))

    project_path = os.path.abspath(args.project_path)
    out_path = args.out or ("%s_boundary_fixes.txt" % args.program_name)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))
    code = 0
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            if args.fix:
                findings = parse_manual(program, args.fix)
                print("Using %d manual --fix override(s)." % len(findings))
            else:
                vtable_targets = load_vtable_targets(args.program_name)
                print("Loaded %d vtable slot target(s) for the virtual-method veto"
                      % len(vtable_targets))
                print("Scanning for entry-point boundary errors...")
                findings = detect(program, vtable_targets)

            cave_ranges, patch_addrs = load_guard_ranges(args.program_name)
            print("Guards: %d code-cave range(s), %d byte-patch address(es)%s" % (
                len(cave_ranges), len(patch_addrs),
                " (ignored: --allow-patched)" if args.allow_patched else ""))
            annotate_skips(findings, args.only_fun, args.exclude, args.allow_patched,
                           kinds, cave_ranges, patch_addrs, args.split_strong_only)
            report(findings)

            actionable = [f for f in findings if not f.get("skip")]
            lines = ["Function boundary report: %s" % args.program_name,
                     "findings: %d  actionable: %d  mode: %s  preserve: %s" % (
                         len(findings), len(actionable),
                         "APPLY" if args.apply else "report",
                         "no" if args.no_preserve else "yes"), ""]
            for f in findings:
                lines.append("%-12s %s -> %s  %-60s %s" % (
                    f["kind"], f["entry"], f["correct"], f["name"],
                    ("SKIP: %s" % f["skip"]) if f.get("skip") else ""))
            with open(out_path, "w") as fh:
                fh.write("\n".join(lines) + "\n")
            print("Report written to: %s" % out_path)

            if args.apply and actionable:
                print("\n[apply] %d function(s)" % len(actionable))
                changed = apply(program, findings, not args.no_preserve)
                if changed:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Saving program database...")
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
            elif not args.apply:
                print("\n[dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        code = 1
    os._exit(code)


if __name__ == "__main__":
    main()
