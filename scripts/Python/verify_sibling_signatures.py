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

Verdicts per pair:

  agree         the binary's own argument size matches the transferred one
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

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    sys.exit("capstone is required: pip install capstone")

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
            out[f"{int(x['to'], 16):08x}"].append(int(x["from"], 16))
        except (KeyError, ValueError):
            continue
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


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("mapping")
    ap.add_argument("--out", help="write per-pair verdicts as JSON")
    ap.add_argument("--list-conflicts", action="store_true")
    ap.add_argument("--show", type=int, default=15)
    args = ap.parse_args()

    with open(args.mapping) as fh:
        mapping = json.load(fh)

    a_img = sm.Image(mapping["from"])
    b_img = sm.Image(mapping["to"])
    sites = call_sites_to(b_img)
    insn_cache = {}

    results = []
    tally = Counter()
    by_conf = defaultdict(Counter)
    for pair in mapping["pairs"]:
        a_func = a_img.by_addr.get(pair["a"])
        b_func = b_img.by_addr.get(pair["b"])
        if not a_func or not b_func:
            continue
        verdict, detail = verify_pair(a_func, b_func, b_img,
                                      sites.get(pair["b"], ()), insn_cache)
        tally[verdict] += 1
        band = "0.95+" if pair["confidence"] >= 0.95 else \
               "0.90+" if pair["confidence"] >= 0.90 else \
               "0.80+" if pair["confidence"] >= 0.80 else "<0.80"
        by_conf[band][verdict] += 1
        results.append({**pair, "sig_verdict": verdict, "sig_detail": detail})

    total = sum(tally.values())
    print(f"verified {total} pairs from {args.mapping}\n")
    for v in ("agree", "conflict", "unverifiable"):
        print(f"  {v:<13}: {tally[v]:5d}  ({100.0 * tally[v] / total:.1f}%)")

    measurable = tally["agree"] + tally["conflict"]
    if measurable:
        print(f"\nof the {measurable} measurable pairs, "
              f"{100.0 * tally['agree'] / measurable:.1f}% agree")

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
