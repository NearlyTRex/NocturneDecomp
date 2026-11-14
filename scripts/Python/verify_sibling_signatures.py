#!/usr/bin/env python3
"""Check transferred signatures against the target binary before trusting them.

A function mapping says "these two are the same function". It does not say the
signature is the same -- and between sibling builds a changed signature is
exactly the kind of edit that shifts a file's line numbers. Copying nocedit's
prototype onto a nocturne function that takes different arguments produces
confident-looking decompiler output that is quietly wrong, which is worse than
leaving it undefined.

So measure the argument size from nocturne's own bytes, independently of the
mapping, and compare it with the sum of the transferred parameters' stack
slots. A callee-clean function ends `RET imm16` and that imm16 *is* the
argument size; otherwise the callers reveal it, three different ways depending
on which argument-passing shape Watcom chose (see `observed_arg_bytes`).

Which parameters even belong in that sum comes from the project's Watcom cspec
(`spec/.../x86watcom.cspec`, loaded at runtime) plus the exported per-parameter
storage. Watcom's own conventions pass leading arguments in registers --
`__watcallRegister` takes four in EAX/EDX/EBX/ECX, the `__stackN_esi` family
one in ESI -- so a function with register-passed arguments correctly expects
*zero* stack bytes, and a caller that pushes nothing confirms it.

A virtual method called only through its vtable has neither a `RET imm16` nor a
call site to measure. It takes the size of a verified override of the same
virtual instead (`override_peers`), since C++ gives every override the
parameters of the virtual it overrides.

Verdicts per pair:

  agree         the binary's own argument size matches the transferred one,
                directly or through a verified override in the same slot
  conflict      it does not -- a real finding, the signature differs between
                the two builds, not noise to be silenced. Only a definite
                `RET imm16` or `ADD ESP, n` may convict; the other two
                measurements have blind spots that would fake conflicts.
  unverifiable  nothing conclusive to measure: a by-value aggregate on the
                stack (Watcom's layout there is irregular), or no call site
                that reveals the argument size

Not covered: return class (EAX / EAX:EDX / ST0 / void). Argument size alone
already gates transfer well enough that return-type checking has not been
needed; add it here if a wrong return type ever slips through.

Usage:
    verify_sibling_signatures.py mapping.json
    verify_sibling_signatures.py mapping.json --out verified.json --list-conflicts
"""

import argparse
import json
import os
import re
import sys
from collections import Counter, defaultdict

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm

_MD = Cs(CS_ARCH_X86, CS_MODE_32)
_MD.detail = False

CONVENTIONS = sm.load_conventions()

# `dword ptr [esp + 0x10], ...` / `dword ptr [esp], ...` -- a store into the
# outgoing-argument area. Anything with a second register term is indexing, not
# a fixed argument slot.
_ESP_STORE_RE = re.compile(r"^(?:\w+ ptr )?\[esp(?:\s*\+\s*(0x[0-9a-f]+|\d+))?\]\s*,")

# How far back from a CALL to look for those stores.
ARG_STORE_SCAN = 40


def expected_param_bytes(func):
    """-> (stack_bytes, n_register_params, note)

    Only the *stack-resident* parameters contribute. Watcom's own conventions
    pass the leading arguments in registers -- `__watcallRegister` takes four in
    EAX/EDX/EBX/ECX, the `__stackN_esi` family takes one in ESI -- and the
    exported per-parameter storage says exactly which went where. So a function
    whose arguments are all register-passed genuinely expects zero stack bytes,
    and a caller that pushes nothing is *confirming* the signature rather than
    defeating measurement.

    `stack_bytes` is None only when a by-value aggregate is on the stack, where
    Watcom's layout is irregular enough that this project keeps `.byval`
    variants for it.
    """
    params = (func.get("vars") or {}).get("params") or []
    top, nregs = 0, 0
    for p in params:
        st = p.get("storage") or {}
        if not st.get("stack"):
            nregs += 1
            continue
        size = st.get("size") or 4
        if size > 8:
            return None, nregs, "by-value aggregate on stack"
        # Stack slots are dword-aligned; offset 4 is the first argument
        # (offset 0 is the return address).
        slot = (size + 3) & ~3
        top = max(top, st.get("offset", 0) + slot)
    return max(0, top - 4), nregs, ""


def callee_pop_bytes(conv):
    """Argument bytes the callee pops per the cspec, or None if caller-clean."""
    info = CONVENTIONS.get(conv or "")
    if not info or info["extrapop"] is None:
        return None
    # extrapop counts the return address too.
    return max(0, info["extrapop"] - 4)


def observed_ret_imm(image, func):
    """The imm16 of a callee-clean `RET n`, 0 for a bare `RET`, None if absent."""
    seen = None
    for b in func.get("body", []) or []:
        try:
            start, end = int(b["start"], 16), int(b["end"], 16)
        except (KeyError, ValueError):
            continue
        off = image.va2off(start)
        if off is None:
            continue
        for ins in _MD.disasm(image.data[off:off + (end - start + 1)], start):
            if ins.mnemonic != "ret":
                continue
            imm = int(ins.op_str, 0) if ins.op_str else 0
            if seen is not None and seen != imm:
                return None          # inconsistent tails; do not guess
            seen = imm
    return seen


def _function_insns(image, cache, func_addr):
    """Cached linear disassembly of one function, in address order."""
    if func_addr in cache:
        return cache[func_addr]
    func = image.by_addr.get(func_addr)
    insns = []
    if func:
        for b in sorted((int(x["start"], 16), int(x["end"], 16))
                        for x in func.get("body", []) or []):
            off = image.va2off(b[0])
            if off is None:
                continue
            insns.extend((i.address, i.mnemonic, i.op_str)
                         for i in _MD.disasm(image.data[off:off + (b[1] - b[0] + 1)], b[0]))
    insns.sort()
    cache[func_addr] = insns
    return insns


def observed_arg_bytes(image, callsites, cache):
    """-> (pushed, popped, stored) argument-byte estimates, any may be None.

    Three individually-unreliable measurements of the same quantity, so a
    caller can demand corroboration before believing any of them. Watcom uses
    more than one argument-passing shape, and each measurement is blind to a
    different one:

    `popped` is the `ADD ESP, n` immediately after the CALL. Usually exact, but
    it also fires when the caller happens to be tearing down an unrelated local
    buffer -- that is how `WSAStartup` measured a 400-byte argument list, 400
    being `sizeof(WSADATA)`.

    `pushed` counts the contiguous `PUSH` run before the CALL. It under-reads
    whenever Watcom interleaves setup between the pushes
    (`push a; mov ecx, X; push ecx; call f` reads as one argument, not two).

    `stored` is the highest `mov [esp+n]` slot written since the previous call,
    covering the pattern where the outgoing-argument area is reserved once in
    the prologue and no push or cleanup appears at the call at all. It
    over-reads, since nearby locals are addressed the same way.
    """
    push_votes, pop_votes, mov_votes = Counter(), Counter(), Counter()
    for va in callsites:
        caller = image.func_containing(va)
        if not caller:
            continue
        insns = _function_insns(image, cache, caller)
        idx = next((i for i, ins in enumerate(insns) if ins[0] == va), None)
        if idx is None:
            continue

        # Backwards over the contiguous run of argument pushes.
        n = 0
        for _, mnem, _op in reversed(insns[:idx]):
            if mnem == "push":
                n += 4          # every push is a dword in 32-bit mode
            else:
                break
        push_votes[n] += 1

        # Watcom's other argument pattern: reserve the outgoing-argument area
        # once in the prologue and write each argument with `mov [esp+n], v`,
        # so a call has neither pushes nor cleanup. Take the highest slot
        # written since the previous call.
        top = None
        for _, mnem, op in reversed(insns[max(0, idx - ARG_STORE_SCAN):idx]):
            if mnem in ("call", "jmp"):
                break
            m = _ESP_STORE_RE.match(op)
            if mnem == "mov" and m:
                off = int(m.group(1), 0) if m.group(1) else 0
                top = max(top or 0, off + 4)
        if top is not None:
            mov_votes[top] += 1

        # Forwards for the caller-side cleanup, immediately after the call only.
        for _, mnem, op in insns[idx + 1:idx + 2]:
            if mnem == "add" and op.startswith("esp,"):
                try:
                    pop_votes[int(op.split(",")[1].strip(), 0)] += 1
                except ValueError:
                    pass
            elif mnem == "pop" and op in ("ecx", "edx"):
                # Watcom pops a single dword argument into a scratch register
                # rather than adjusting ESP.
                pop_votes[4] += 1
            else:
                pop_votes[0] += 1

    def consensus(votes):
        if not votes:
            return None
        top, n = votes.most_common(1)[0]
        return top if n >= 0.6 * sum(votes.values()) else None

    return consensus(push_votes), consensus(pop_votes), consensus(mov_votes)


def call_sites_to(image):
    """callee_addr -> [call instruction VA]."""
    out = defaultdict(list)
    for x in image.xrefs:
        if x.get("type") not in ("UNCONDITIONAL_CALL", "COMPUTED_CALL"):
            continue
        try:
            callee, site = int(x["to"], 16), int(x["from"], 16)
        except (KeyError, ValueError):
            continue
        out[f"{callee:08x}"].append(site)
    return out


def verify_pair(a_func, b_func, b_img, sites, cache):
    """-> (verdict, detail)"""
    conv = a_func.get("conv")
    if conv and conv not in CONVENTIONS:
        return "unverifiable", f"convention {conv} not in the cspec"

    expected, nregs, note = expected_param_bytes(a_func)
    if expected is None:
        return "unverifiable", note
    regnote = f" (+{nregs} in registers)" if nregs else ""

    # 1. Callee-clean conventions state their own argument size.
    declared_pop = callee_pop_bytes(conv)
    ret_imm = observed_ret_imm(b_img, b_func)
    if declared_pop:
        if ret_imm is None:
            return "unverifiable", f"{conv} declares RET {declared_pop} but none found"
        if ret_imm == declared_pop == expected:
            return "agree", f"RET {ret_imm} == {expected} stack bytes{regnote}"
        return "conflict", (f"RET {ret_imm} vs {conv} extrapop {declared_pop} "
                            f"vs {expected} stack bytes{regnote}")
    if ret_imm:
        if ret_imm == expected:
            return "agree", f"RET {ret_imm} == {expected} stack bytes{regnote}"
        return "conflict", f"RET {ret_imm} vs {expected} stack bytes{regnote}"

    # 2. Otherwise measure the callers.
    pushed, popped, stored = observed_arg_bytes(b_img, sites, cache)

    # Any measurement matching confirms. Each errs in its own direction and
    # none errs *towards* a wrong-but-matching number, so a hit is meaningful
    # even from the sloppier ones.
    for label, value in (("pop", popped), ("push", pushed), ("store", stored)):
        if value == expected:
            return "agree", f"callers {label} {value} == {expected} stack bytes{regnote}"

    # Only a definite, positive `ADD ESP, n` may *convict*. The push count
    # under-reads interleaved setup and the store scan over-reads neighbouring
    # locals -- `CConsole::writeChar` measured 4100 bytes of "arguments", which
    # is a 4 KB line buffer -- so neither can distinguish a real signature
    # difference from its own blind spot.
    if popped and (pushed is None or pushed <= popped):
        return "conflict", (f"callers pop {popped} vs {expected} stack "
                            f"bytes{regnote} (push {pushed}, store {stored})")
    return "unverifiable", (f"no conclusive measurement; wants {expected} "
                            f"(pop {popped}, push {pushed}, store {stored})")


def override_peers(vtables):
    """function -> {(peer function, slot index)}: the other overrides of the same virtual.

    An override takes exactly the parameters of the virtual it overrides. Two
    tables holding the same function at index j share an ancestor whose table
    reaches past j, so every slot up to j is the same virtual in both. Past their
    deepest shared slot the two branches define their own virtuals -- CCharacter
    and CWeapon share CDemonActor's slots and nothing beyond -- so a slot is only
    ever compared between two tables directly, never through a third.

    A function found at two different indices is a folded stub (one `ret`
    serving many slots, as nocturne's CCharacter does nine), not any one
    virtual: it neither links tables nor stands for a slot.
    """
    tables = [[(e.get("func_addr") or "").lower() for e in t.get("functions", [])]
              for t in vtables]
    indices = defaultdict(set)
    holders = defaultdict(set)
    for ti, slots in enumerate(tables):
        for i, fn in enumerate(slots):
            if fn:
                indices[fn].add(i)
                holders[(fn, i)].add(ti)
    folded = {fn for fn, seen in indices.items() if len(seen) > 1}
    shared_depth = defaultdict(int)
    for (fn, i), owners in holders.items():
        if fn in folded:
            continue
        for t in owners:
            for u in owners:
                if t < u:
                    shared_depth[(t, u)] = max(shared_depth[(t, u)], i + 1)
    peers = defaultdict(set)
    for (t, u), depth in shared_depth.items():
        for i in range(depth):
            f, g = tables[t][i], tables[u][i]
            if f and g and f != g and f not in folded and g not in folded:
                peers[f].add((g, i))
                peers[g].add((f, i))
    return peers


def propagate_through_slots(results, expected_by_b, peers):
    """Confirm unverifiable pairs from verified overrides of the same virtual.

    `results` are the per-pair records with their verdicts, `expected_by_b` the
    stack bytes each pair's prototype wants. A pair takes `agree` when every
    verified override of its virtual wants the size its own prototype does.
    Never `conflict`: an override is indirect evidence, and a mismatch says the
    prototype or a pairing is off, not which. Returns how many it confirmed.
    """
    verified = {r["b"]: expected_by_b[r["b"]] for r in results
                if r["sig_verdict"] == "agree" and expected_by_b.get(r["b"]) is not None}
    confirmed = 0
    for r in results:
        expected = expected_by_b.get(r["b"])
        if r["sig_verdict"] != "unverifiable" or expected is None:
            continue
        witnesses = sorted((g, i) for g, i in peers.get(r["b"], ()) if g in verified)
        if witnesses and {verified[g] for g, _ in witnesses} == {expected}:
            g, i = witnesses[0]
            r["sig_verdict"] = "agree"
            r["sig_detail"] = (f"vtable slot {i} shares {expected} stack bytes with "
                               f"verified override {g}")
            confirmed += 1
    return confirmed


# A fixed stack slot read through ESP or EBP; an index register makes it an array, not an argument
_ESP_READ_RE = re.compile(r"\[esp(?:\s*\+\s*(0x[0-9a-f]+|\d+))?\]")
_EBP_READ_RE = re.compile(r"\[ebp\s*\+\s*(0x[0-9a-f]+|\d+)\]")
_ESP_IMM_RE = re.compile(r"^esp,\s*(0x[0-9a-f]+|\d+)$")


def stack_args_read(insns):
    """Indices of the stack arguments a body reads, from its own instructions.

    ESP is tracked linearly through PUSH/POP/PUSHAD/POPAD and immediate SUB/ADD,
    and an EBP frame from `mov ebp, esp`. Argument 0 sits at [ESP+4] on entry.
    Linear tracking ignores branches, which Watcom bodies keep balanced; a
    misread surfaces as a slot past the declared parameters, which the rule
    below refuses.
    """
    delta, ebp, out = 0, None, set()
    for _, mnem, ops in insns:
        for m in _ESP_READ_RE.finditer(ops):
            off = int(m.group(1) or "0", 0) - delta
            if off >= 4 and off % 4 == 0:
                out.add((off - 4) // 4)
        if ebp is not None:
            for m in _EBP_READ_RE.finditer(ops):
                off = int(m.group(1), 0) - ebp
                if off >= 4 and off % 4 == 0:
                    out.add((off - 4) // 4)
        if mnem == "push":
            delta += 4
        elif mnem == "pop":
            delta -= 4
        elif mnem == "pushal":
            delta += 32
        elif mnem == "popal":
            delta -= 32
        elif mnem in ("sub", "add"):
            m = _ESP_IMM_RE.match(ops)
            if m:
                delta += int(m.group(1), 0) * (1 if mnem == "sub" else -1)
        elif mnem == "mov" and ops.replace(" ", "") == "ebp,esp":
            ebp = delta
    return out


def direct_callees(insns):
    """Direct call targets in order, as 8-digit hex."""
    out = []
    for _, mnem, ops in insns:
        if mnem == "call" and re.fullmatch(r"0x[0-9a-f]+", ops):
            out.append("%08x" % int(ops, 16))
    return out


def callees_in_order(a_insns, b_insns, a_to_b):
    """Does the target call every mapped callee of the source, in the source's order?

    None when the source calls nothing the mapping pairs: no evidence either way.
    """
    mapped = [a_to_b[c] for c in direct_callees(a_insns) if c in a_to_b]
    if not mapped:
        return None
    calls = direct_callees(b_insns)
    if not set(mapped) <= set(calls):
        return False
    prev = [0] * (len(calls) + 1)
    for x in mapped:
        cur = [0]
        for j, y in enumerate(calls):
            cur.append(prev[j] + 1 if x == y else max(prev[j + 1], cur[j]))
        prev = cur
    return prev[-1] == len(mapped)


def structural_match(a_func, a_insns, b_insns, a_to_b):
    """The structural receiver check, for pairs nothing can measure.

    True when the target calls every mapped callee in order, both bodies read
    exactly the same stack arguments with argument 0 among them, and the
    source reads none past its declared parameters (which leaves out varargs
    and bodies the ESP tracking misreads). Scored against the measured pairs
    of the three Blair Witch builds: 0 conflicts in 3461 accepted.

    A source with no mapped callee has no call order to compare; see leaf_match.
    """
    params = (a_func.get("vars") or {}).get("params") or []
    if not params:
        return False
    order = callees_in_order(a_insns, b_insns, a_to_b)
    if order is None:
        return leaf_match(params, a_insns, b_insns, a_to_b)
    if not order:
        return False
    read_a, read_b = stack_args_read(a_insns), stack_args_read(b_insns)
    return 0 in read_b and read_a == read_b and all(i < len(params) for i in read_a)


def leaf_match(params, a_insns, b_insns, a_to_b):
    """structural_match for a source that calls nothing the mapping pairs.

    The call order cannot vouch for the pairing, so the target must not call a
    mapped function the source does not, and every slot read must be a declared
    *stack* parameter: a source pinning a parameter to a register while its body
    reads the stack has the wrong prototype, which equal reads would carry over.
    Scored on the measured pairs of the three Blair Witch builds: 1360 accepted,
    0 conflicts (the 3 the rule rejects were one CRT function, mis-prototyped so).
    """
    b_to_a = {b: a for a, b in a_to_b.items()}
    if callees_in_order(b_insns, a_insns, b_to_a) is False:
        return False
    n_stack = sum(1 for p in params if (p.get("storage") or {}).get("stack"))
    read_a, read_b = stack_args_read(a_insns), stack_args_read(b_insns)
    return 0 in read_b and read_a == read_b and all(i < n_stack for i in read_a)


def structural_tally(results):
    """How the structural check scores against the measured verdicts.

    A rewritten prototype (see esi_output_param) is scored on its own line.
    """
    return Counter((r["sig_verdict"], r["sig_structural"]) for r in results
                   if r["sig_verdict"] in ("agree", "conflict") and not r.get("sig_rewrite"))


# Watcom returns a struct through a buffer whose address the caller passes in ESI,
# after the stack arguments. The cspec has one convention per stack-argument count.
ESI_OUTPUT_CONVENTIONS = {0: "__esi", 1: "__stack_esi", 2: "__stack2_esi",
                          3: "__stack3_esi", 4: "__stack4_esi", 5: "__stack5_esi"}

_ESI_RE = re.compile(r"\besi\b")
_STRING_OPS = frozenset(("movsb", "movsw", "movsd", "lodsb", "lodsw", "lodsd",
                         "cmpsb", "cmpsw", "cmpsd", "outsb", "outsw", "outsd"))
_REG_WRITES = frozenset(("mov", "lea", "pop", "movzx", "movsx"))

# Names a source gives the pointer its function fills in
_OUTPUT_NAME_RE = re.compile(r"out|result|dest|dst|ret", re.I)


def esi_live_in(insns):
    """Does the body read ESI before it writes it? Saving it with `push esi` is neither."""
    for _, mnem, ops in insns:
        if mnem.split()[-1] in _STRING_OPS:
            return True
        if not _ESI_RE.search(ops) or (mnem == "push" and ops == "esi"):
            continue
        dst, _, src = (s.strip() for s in ops.partition(","))
        if dst == "esi" and ((mnem in _REG_WRITES and not _ESI_RE.search(src))
                             or (mnem in ("xor", "sub") and src == "esi")):
            return False
        return True
    return False


def calls_agree(a_insns, b_insns, a_to_b):
    """The call evidence structural_match accepts: in order, or a leaf on both sides."""
    order = callees_in_order(a_insns, b_insns, a_to_b)
    if order is not None:
        return order
    b_to_a = {b: a for a, b in a_to_b.items()}
    return callees_in_order(b_insns, a_insns, b_to_a) is not False


def esi_output_param(a_func, a_insns, b_insns, a_to_b):
    """Index of the source's output pointer that the target takes in ESI, else None.

    The target returns a struct the Watcom way where the source passed the buffer
    as an ordinary stack argument: the target reads ESI on entry and the source
    does not, and the target's stack reads are the source's with that one slot
    taken out. The parameter must be a pointer. Taking out any slot of a run of
    consecutive reads leaves the same reads, so when more than one slot fits, the
    type proves nothing: the pointer the source returns, or failing that the only
    one named as an output, is taken; otherwise none is.

    Read on pairs nocedit's own prototype does not fit, the rewritten prototype
    measured 18 agreements and no conflict across the three Blair Witch builds,
    5 of them pairs that conflicted as nocedit declared them.
    """
    params = (a_func.get("vars") or {}).get("params") or []
    if not params or (a_func.get("conv") or "__cdecl") != "__cdecl" \
            or len(params) - 1 not in ESI_OUTPUT_CONVENTIONS \
            or any(not (p.get("storage") or {}).get("stack") for p in params):
        return None
    if esi_live_in(a_insns) or not esi_live_in(b_insns) \
            or not calls_agree(a_insns, b_insns, a_to_b):
        return None
    read_a, read_b = stack_args_read(a_insns), stack_args_read(b_insns)
    if any(i >= len(params) for i in read_a):
        return None
    fits = [k for k in sorted(read_a) if {i - (i > k) for i in read_a if i != k} == read_b]
    pointers = [k for k in fits if (params[k].get("type") or "").rstrip().endswith("*")]
    if len(fits) == 1:
        return pointers[0] if pointers else None
    fits = pointers
    ret = (a_func.get("ret") or "").replace(" ", "")
    returned = [k for k in fits if (params[k].get("type") or "").replace(" ", "") == ret]
    named = [k for k in (returned or fits) if _OUTPUT_NAME_RE.search(params[k].get("name") or "")]
    for choice in (named, returned):
        if len(choice) == 1:
            return choice[0]
    return None


def esi_output_function(a_func, k):
    """The source function as the target declares it: parameter k moved last, into ESI."""
    params = a_func["vars"]["params"]
    rest = [p for i, p in enumerate(params) if i != k]
    moved = [{**p, "storage": {"stack": True, "offset": 4 + 4 * i, "size": 4}}
             for i, p in enumerate(rest)]
    moved.append({**params[k], "storage": {"stack": False, "reg": "ESI", "size": 4}})
    return {**a_func, "conv": ESI_OUTPUT_CONVENTIONS[len(rest)], "vars": {"params": moved}}


def esi_rewrite(a_func, k):
    """What the applier needs to declare the rewritten prototype.

    No storage: the convention places every parameter, the last in ESI, so the
    prototype can be laid out by rule rather than pinned by hand.
    """
    f = esi_output_function(a_func, k)
    return {"kind": "esi_output", "output": a_func["vars"]["params"][k].get("name"),
            "conv": f["conv"],
            "params": [{"name": p.get("name"), "type": p.get("type")} for p in f["vars"]["params"]]}


def main(argv=None):
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("mapping")
    ap.add_argument("--out", help="write per-pair verdicts as JSON")
    ap.add_argument("--list-conflicts", action="store_true")
    ap.add_argument("--show", type=int, default=15)
    args = ap.parse_args(argv)

    with open(args.mapping) as fh:
        mapping = json.load(fh)

    a_img = sm.Image(mapping["from"])
    b_img = sm.Image(mapping["to"])
    sites = call_sites_to(b_img)
    insn_cache = {}

    results = []
    expected_by_b = {}
    a_to_b = {p["a"]: p["b"] for p in mapping["pairs"] if not p.get("ambiguous")}
    a_cache = {}
    for pair in mapping["pairs"]:
        a_func = a_img.by_addr.get(pair["a"])
        b_func = b_img.by_addr.get(pair["b"])
        if not a_func or not b_func:
            continue
        verdict, detail = verify_pair(a_func, b_func, b_img,
                                      sites.get(pair["b"], ()), insn_cache)
        expected_by_b[pair["b"]] = expected_param_bytes(a_func)[0]
        a_insns = _function_insns(a_img, a_cache, pair["a"])
        b_insns = _function_insns(b_img, insn_cache, pair["b"])
        structural = structural_match(a_func, a_insns, b_insns, a_to_b)
        record = {**pair, "sig_verdict": verdict, "sig_detail": detail,
                  "sig_structural": structural}
        k = None if verdict == "agree" or structural else \
            esi_output_param(a_func, a_insns, b_insns, a_to_b)
        if k is not None:
            # nocedit's prototype does not fit and the target takes its output in
            # ESI: measure the prototype the target actually has instead.
            rewritten = esi_output_function(a_func, k)
            verdict, detail = verify_pair(rewritten, b_func, b_img,
                                          sites.get(pair["b"], ()), insn_cache)
            expected_by_b[pair["b"]] = expected_param_bytes(rewritten)[0]
            record.update(sig_verdict=verdict, sig_structural=True,
                          sig_detail="output %s in ESI: %s" % (rewritten["vars"]["params"][-1].get("name"),
                                                                detail),
                          sig_rewrite=esi_rewrite(a_func, k))
        results.append(record)
    by_slot = propagate_through_slots(results, expected_by_b, override_peers(b_img.vtables))

    tally = Counter(r["sig_verdict"] for r in results)
    by_conf = defaultdict(Counter)
    for r in results:
        band = "0.95+" if r["confidence"] >= 0.95 else \
               "0.90+" if r["confidence"] >= 0.90 else \
               "0.80+" if r["confidence"] >= 0.80 else "<0.80"
        by_conf[band][r["sig_verdict"]] += 1

    total = sum(tally.values())
    print(f"verified {total} pairs from {args.mapping}\n")
    for v in ("agree", "conflict", "unverifiable"):
        print(f"  {v:<13}: {tally[v]:5d}  ({100.0 * tally[v] / total:.1f}%)")

    if by_slot:
        print(f"  ({by_slot} of the agreements through a verified override of the same virtual)")

    measurable = tally["agree"] + tally["conflict"]
    if measurable:
        print(f"\nof the {measurable} measurable pairs, "
              f"{100.0 * tally['agree'] / measurable:.1f}% agree")

    # The structural check's own score, against the pairs that were measured:
    # what --trust-structural-signature rests on, re-checked on every run.
    st = structural_tally(results)
    accepted = st[("agree", True)] + st[("conflict", True)]
    unverified = sum(1 for r in results if r["sig_verdict"] == "unverifiable" and r["sig_structural"])
    print(f"\nstructural match: {accepted} measured pair(s) accepted, "
          f"{st[('conflict', True)]} of them conflicts; "
          f"{unverified} unverifiable pair(s) it would carry")
    rewrites = Counter(r["sig_verdict"] for r in results if r.get("sig_rewrite"))
    print(f"output in ESI: {sum(rewrites.values())} prototype(s) rewritten, "
          f"{rewrites['agree']} agree, {rewrites['conflict']} conflict")

    print("\nby mapping confidence:")
    print(f"  {'':<8} {'agree':>7} {'conflict':>9} {'unverif':>9}")
    for band in ("0.95+", "0.90+", "0.80+", "<0.80"):
        c = by_conf.get(band)
        if c:
            print(f"  {band:<8} {c['agree']:>7} {c['conflict']:>9} {c['unverifiable']:>9}")

    conflicts = [r for r in results if r["sig_verdict"] == "conflict"]
    if conflicts and (args.list_conflicts or args.show):
        n = len(conflicts) if args.list_conflicts else min(args.show, len(conflicts))
        print(f"\n{n} of {len(conflicts)} signature conflicts "
              f"(each is a real difference between the builds):")
        for r in sorted(conflicts, key=lambda r: -r["confidence"])[:n]:
            print(f"  {r['confidence']:.2f} {r['a']} -> {r['b']}  "
                  f"{sm.strip_addr_suffix(r['name'])[:52]}")
            print(f"        {r['sig_detail']}")

    if args.out:
        with open(args.out, "w") as fh:
            json.dump({**mapping, "pairs": results}, fh, indent=1)
        print(f"\nwrote {args.out}")


if __name__ == "__main__":
    main()
