#!/usr/bin/env python3
"""Find functions that are not real code: no-ops, padding, misaligned decodes.

Auto-analysis and boundary-repair passes both create functions that never
existed. They are cheap to leave in place and expensive to keep: each one is a
name a sibling mapping can transfer onto nothing, an entry in every coverage
count, and a false neighbour for any analysis that reasons about layout order.

Deciding what is junk needs three things at once, which is why this is not a
grep:

  the bytes      a body that decodes to nothing but no-ops, or to a single
                 instruction that swallows an address as an immediate -- the
                 signature of a decode that started at the wrong offset
  the references nothing calls it, and nothing points at it
  the mapping    the sibling build has no counterpart for it

A function failing all three is safe to delete. One that fails only the first
is usually real: `RET`-only bodies are empty virtual overrides, and a function
ending in a call to a fatal-error handler legitimately never returns.

**Not every non-terminating function is junk.** Watcom emits assert stubs that
store `__FILE__`/`__LINE__` into a fixed slot pair and then tail-call the error
handler; the trailing `lea eax,[eax]` / `nop` is alignment padding. Those are
detected and excluded rather than reported, because there are enough of them to
bury the real findings.

Nothing is modified here. Feed the addresses to delete_function.py.

Usage:
    find_junk_functions.py                          # nocturne.exe, report
    find_junk_functions.py --program nocedit.exe
    find_junk_functions.py --mapping verified.json  # also require "unmatched"
    find_junk_functions.py --addresses-only         # for delete_function.py
"""

import argparse
import json
import os
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    sys.exit("capstone is required: pip install capstone")

_MD = Cs(CS_ARCH_X86, CS_MODE_32)

# Instructions that end a flow of control. A body whose last instruction is not
# one of these either falls through or was cut short.
TERMINATORS = frozenset(("ret", "retf", "jmp", "iret", "iretd", "int3", "ud2"))

# Single-instruction bodies this small are alignment filler far more often than
# they are code.
TINY_BYTES = 8


def is_noop(ins):
    """Multi-byte NOP idioms: Watcom pads with these, not just 0x90."""
    if ins.mnemonic in ("nop", "int3"):
        return True
    ops = [o.strip() for o in ins.op_str.split(",")]
    if len(ops) != 2:
        return False
    if ins.mnemonic in ("mov", "xchg") and ops[0] == ops[1]:
        return True
    if ins.mnemonic == "lea":
        packed = ops[1].replace(" ", "")
        return packed in ("[%s]" % ops[0], "[%s+0]" % ops[0])
    return False


def decode(image, func):
    """Instructions of a function's own body, or None if unreadable.

    Cave fragments are excluded: they are annotation scaffolding attached to
    whichever function borrowed the space, not that function's code.
    """
    out = []
    for b in sorted((b for b in (func.get("body") or [])),
                    key=lambda b: b.get("start", "")):
        try:
            start, end = int(b["start"], 16), int(b["end"], 16)
        except (KeyError, ValueError):
            return None
        if image.in_cave(start):
            continue
        off = image.va2off(start)
        if off is None:
            return None
        out.extend(_MD.disasm(image.data[off:off + (end - start + 1)], start))
    return out


def falls_into_ret(image, ins, entries):
    """Does this function end by falling into the next function's `RET`?

    Watcom tail-merges: when a function's epilogue would be a bare `RET` and
    the next function starts with one, it simply omits its own and runs on into
    the neighbour's. The function is complete and correct despite having no
    terminator of its own, so this is not a defect and must not be reported as
    one.

    Alignment padding may sit between the two, so no-ops are stepped over
    before looking for the neighbour.
    """
    if not ins:
        return False
    pos = ins[-1].address + ins[-1].size
    for _ in range(16):                       # bounded: padding runs are short
        nxt = entries.get(pos)
        if nxt is not None:
            first = decode(image, nxt)
            return bool(first) and first[0].mnemonic == "ret"
        off = image.va2off(pos)
        if off is None:
            return False
        stepped = next(_MD.disasm(image.data[off:off + 16], pos), None)
        if stepped is None or not is_noop(stepped):
            return False
        pos += stepped.size
    return False


def is_assert_stub(ins):
    """A `__FILE__`/`__LINE__` store followed by a call that never returns.

    Watcom's assert/fatal paths write the source file and line into a fixed
    pair of globals and then call the handler, so the function has no `RET` and
    is nonetheless entirely real. `extract_line_pins.py` recovers those same
    slots; here only the shape matters, not which slot it is.
    """
    if not any(i.mnemonic == "call" for i in ins):
        return False
    stores = [i for i in ins
              if i.mnemonic == "mov" and i.op_str.startswith("dword ptr [0x")]
    return len(stores) >= 2


def classify(image, func, refs, matched, entries):
    ins = decode(image, func)
    addr = func.get("addr", "").lower()
    nrefs = refs.get(int(addr, 16), 0) if addr else 0

    if ins is None:
        return "UNREADABLE", nrefs, ""
    if not ins:
        return "EMPTY", nrefs, "no decodable instruction"

    body = [i for i in ins if i.mnemonic != "ret"]
    text = " ; ".join(("%s %s" % (i.mnemonic, i.op_str)).strip() for i in ins[:4])
    nbytes = sum(i.size for i in ins)

    if body and all(is_noop(i) for i in body):
        return "NOOP", nrefs, text
    if all(i.mnemonic in ("nop", "int3") for i in ins):
        return "PADDING", nrefs, text

    # One instruction, no terminator, tiny, and its operand is an address in
    # this image: the decoder almost certainly started mid-instruction.
    if len(ins) == 1 and ins[0].mnemonic not in TERMINATORS and nbytes <= TINY_BYTES:
        for tok in ins[0].op_str.replace(",", " ").split():
            try:
                value = int(tok, 16) if tok.startswith("0x") else None
            except ValueError:
                value = None
            if value is not None and image.is_mapped_va(value):
                return "MISALIGNED", nrefs, text
        return "STUB", nrefs, text

    if (ins[-1].mnemonic not in TERMINATORS and not is_assert_stub(ins)
            and not falls_into_ret(image, ins, entries)):
        k = len(ins)
        while k > 0 and is_noop(ins[k - 1]):
            k -= 1
        if k == 0 or ins[k - 1].mnemonic not in TERMINATORS:
            tail = " ; ".join(("%s %s" % (i.mnemonic, i.op_str)).strip()
                              for i in ins[max(0, k - 2):k])
            return "FALLS_THROUGH", nrefs, tail
    return "OK", nrefs, ""


# Verdicts where the bytes alone are damning; the reference and mapping checks
# decide whether it is safe to act on.
JUNK = ("EMPTY", "PADDING", "NOOP", "MISALIGNED", "STUB", "UNREADABLE")


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--mapping", help="mapping JSON; matched functions are spared")
    ap.add_argument("--include-referenced", action="store_true",
                    help="also report junk-shaped functions that have references")
    ap.add_argument("--addresses-only", action="store_true",
                    help="print bare addresses, for delete_function.py")
    args = ap.parse_args()

    image = sm.Image(args.program)

    refs = Counter()
    for x in image.xrefs:
        try:
            refs[int(x["to"], 16)] += 1
        except (KeyError, ValueError):
            continue

    matched = set()
    if args.mapping:
        with open(args.mapping) as fh:
            matched = {p["b"].lower() for p in json.load(fh).get("pairs", [])}

    entries = {}
    for f in image.functions:
        try:
            entries[int(f["addr"], 16)] = f
        except (KeyError, ValueError):
            continue

    counts = Counter()
    rows = defaultdict(list)
    for f in image.functions:
        addr = f.get("addr", "").lower()
        verdict, nrefs, text = classify(image, f, refs, matched, entries)
        counts[verdict] += 1
        if verdict == "OK":
            continue
        rows[verdict].append((addr, f.get("name", ""), nrefs,
                              addr in matched, text))

    safe = [r for v in JUNK for r in rows.get(v, [])
            if r[2] == 0 and not r[3]]

    if args.addresses_only:
        for addr, *_ in sorted(safe):
            print(addr)
        return

    print("%s: %d functions" % (args.program, len(image.functions)))
    print("\nbody classification:")
    for verdict, n in counts.most_common():
        print("  %-16s %d" % (verdict, n))

    for verdict in JUNK + ("FALLS_THROUGH",):
        rs = rows.get(verdict)
        if not rs:
            continue
        shown = rs if (args.include_referenced or verdict == "FALLS_THROUGH") \
            else [r for r in rs if r[2] == 0 and not r[3]]
        if not shown:
            continue
        print("\n===== %s (%d, showing %d) =====" % (verdict, len(rs), len(shown)))
        for addr, name, nrefs, is_matched, text in sorted(shown):
            print("  %s  refs=%-4d matched=%-5s %s" % (addr, nrefs, is_matched,
                                                       name[:44]))
            if text:
                print("        %s" % text[:88])

    print("\n%d junk-shaped functions have no references and no sibling match."
          % len(safe))
    if safe:
        print("Those are the deletion candidates; re-run with --addresses-only "
              "to feed delete_function.py.")


if __name__ == "__main__":
    main()
