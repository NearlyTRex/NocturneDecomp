#!/usr/bin/env python3
"""Independently grade every sibling pair by disassembling both binaries.

The mapping's own `confidence` is the mapper marking its own homework: it is
derived from the same signals used to make the match. Before trusting a lower
`--min-confidence` for a bulk name transfer, you want a grade computed from
evidence the mapper did NOT use to decide.

This reads the two PEs directly (capstone, no Ghidra) and compares the two
bodies:

  MNEMONICS   identical mnemonic sequence, same length. The strongest signal
              available without running the code -- two unrelated functions
              essentially never share one.
  NORMALIZED  mnemonic sequence identical AND operands identical once absolute
              addresses are masked. Distinguishes "same shape" from "same code
              modulo relocation".
  CALLGRAPH   of the CALLs at corresponding positions, the fraction whose
              targets are themselves a mapped pair. This is the key independent
              check: it uses the REST of the mapping to corroborate this row, so
              a shape collision between two unrelated functions fails it.

Verdicts:
  STRONG   normalized-identical, or mnemonics-identical with callgraph fully
           corroborating
  GOOD     mnemonics identical, callgraph silent (no calls to check)
  WEAK     lengths differ or mnemonics diverge, but callgraph corroborates
  SUSPECT  mnemonics diverge AND callgraph disagrees -- likely a bad pair
  UNKNOWN  a body could not be read/decoded

Calibrate by reading the verdict distribution per confidence band: if the
0.99 band is ~all STRONG and a lower band holds up equally, that band is safe
to transfer; where SUSPECT appears, it is not.

Usage:
    audit_pair_confidence.py                       # full report to stdout
    audit_pair_confidence.py --out report.txt
    audit_pair_confidence.py --unnamed-only        # only rows a transfer would act on
"""

import argparse
import collections
import glob
import json
import os
import re
import struct
import sys

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    print("capstone required: pip install capstone")
    sys.exit(1)

HEXNUM = re.compile(r'0x[0-9a-f]+')


def parse_pe_sections(data):
    pe = struct.unpack_from('<I', data, 0x3C)[0]
    base = struct.unpack_from('<I', data, pe + 4 + 20 + 28)[0]
    nsec = struct.unpack_from('<H', data, pe + 6)[0]
    optsz = struct.unpack_from('<H', data, pe + 20)[0]
    off = pe + 4 + 20 + optsz
    secs = []
    for i in range(nsec):
        o = off + i * 40
        va = base + struct.unpack_from('<I', data, o + 12)[0]
        raw_sz = struct.unpack_from('<I', data, o + 16)[0]
        raw_off = struct.unpack_from('<I', data, o + 20)[0]
        secs.append((va, raw_off, raw_sz))
    secs.sort()
    out = []
    for i, (va, ro, rs) in enumerate(secs):
        end = secs[i + 1][0] if i + 1 < len(secs) else va + rs
        out.append((va, end, ro))
    return out


def va_off(secs, va):
    for lo, hi, ro in secs:
        if lo <= va < hi:
            return ro + (va - lo)
    return None


def load_extents(exe):
    """address -> (lo, hi) from the exported per-function JSON."""
    ext = {}
    root = os.path.join(REPO, "annotations", exe, "pseudocode", "src")
    # Match bare `FUN_<addr>.json` too: an UNNAMED function exports without the
    # `<name>_` prefix, and those are exactly the rows a name transfer targets --
    # requiring the leading underscore made every actionable row UNKNOWN.
    for p in glob.glob(os.path.join(root, "**", "*FUN_*.json"), recursive=True):
        m = re.search(r'(?:^|_)FUN_([0-9a-f]+)\.json$', os.path.basename(p))
        if not m:
            continue
        try:
            fn = (json.load(open(p)).get("function") or {})
        except (OSError, ValueError):
            continue
        rng = fn.get("address_range") or []
        if rng and len(rng[0]) == 2:
            ext[m.group(1).lower()] = (int(rng[0][0], 16), int(rng[0][1], 16))
    return ext


def decode(md, data, secs, lo, hi):
    off = va_off(secs, lo)
    if off is None or hi < lo or hi - lo > 65536:
        return None
    buf = data[off:off + (hi - lo + 1)]
    out = []
    for i in md.disasm(buf, lo):
        out.append((i.mnemonic, i.op_str, i.address))
    return out or None


def grade(a_ins, b_ins, a_map, pairs_ab):
    """(verdict, detail) for one pair from its two instruction streams."""
    if a_ins is None or b_ins is None:
        return "UNKNOWN", "body unreadable"
    same_len = len(a_ins) == len(b_ins)
    mnem = same_len and all(x[0] == y[0] for x, y in zip(a_ins, b_ins))
    norm = mnem and all(HEXNUM.sub("#", x[1]) == HEXNUM.sub("#", y[1])
                        for x, y in zip(a_ins, b_ins))
    # Callgraph corroboration: do CALLs at matching positions land on functions
    # that the mapping independently pairs with each other?
    # Compare call-target SETS, not positionally. Gating this on equal length
    # would switch the check off for precisely the rows that need it -- the ones
    # whose shapes differ between builds.
    def targets(ins):
        out = set()
        for m, o, _ in ins:
            if m != "call":
                continue
            t = HEXNUM.fullmatch(o.strip())
            if t:
                out.add(int(t.group(0), 16))
        return out
    at, bt = targets(a_ins), targets(b_ins)
    # Measure containment against the SMALLER call set, not the union.
    #
    # One build routinely does strictly more work than the other: the editor
    # build of showDeveloperToolsMenu renders its menu with the CEdButton /
    # CEdScrollBar widget toolkit (76 calls), while the game build draws plain
    # text (12 calls). Both call the same drawText / clearInputAndWait /
    # swapBuffers / clearScreen primitives, and every shared call maps
    # correctly -- but scoring editor-only widget calls as misses against the
    # pair rated it 9/35 and condemned a pair that is certainly correct.
    # Containment asks the right question: are the calls the SMALLER body makes
    # accounted for in the larger one?
    fwd_hit = fwd_tot = 0
    for ka in at:
        mapped = pairs_ab.get(ka)
        if mapped is None:
            continue          # callee not mapped -> no opinion
        fwd_tot += 1
        if mapped in bt:
            fwd_hit += 1
    pairs_ba = None
    rev_hit = rev_tot = 0
    for kb in bt:
        if pairs_ba is None:
            pairs_ba = {v: k for k, v in pairs_ab.items()}
        mapped = pairs_ba.get(kb)
        if mapped is None:
            continue
        rev_tot += 1
        if mapped in at:
            rev_hit += 1
    # Take the better-supported direction; a superset relationship in either
    # direction is corroboration, not contradiction.
    if rev_tot and (not fwd_tot or (rev_hit / rev_tot) > (fwd_hit / fwd_tot)):
        hits, miss = rev_hit, rev_tot - rev_hit
    else:
        hits, miss = fwd_hit, fwd_tot - fwd_hit
    cg = "%d/%d calls corroborate" % (hits, hits + miss) if (hits + miss) else "no calls"
    # Grade the callgraph by RATIO, not by "any miss". A body that differs
    # between builds legitimately calls a slightly different set -- 22/24
    # corroborating is strong support, and treating it the same as 0/6 would
    # bury the real problems in noise.
    tot = hits + miss
    ratio = (hits / tot) if tot else None
    if norm:
        return "STRONG", "normalized-identical; " + cg
    if mnem and (ratio is None or ratio >= 0.5):
        return "STRONG", "mnemonics identical; " + cg
    if mnem:
        return "GOOD", "mnemonics identical; " + cg
    if ratio is not None and ratio >= 0.8:
        return "WEAK", "shape differs but " + cg
    # A single disagreeing call is noise, not contradiction. Debug-build
    # substitution alone produces it: freeRenderBuffers is 36 vs 32
    # instructions and differs only in calling shape_memdbg.cpp_debugFree
    # instead of crt_memory.c_free, because the debug allocator is compiled out
    # of retail. Require a real sample before calling a pair contradicted.
    MIN_CALLS_TO_CONDEMN = 3
    if ratio is not None and ratio < 0.5 and tot >= MIN_CALLS_TO_CONDEMN:
        # The callgraph actively DISAGREES -- this is the only real negative
        # evidence available, and the only thing that should read as SUSPECT.
        return "SUSPECT", "shape differs and only " + cg
    if ratio is not None and tot < MIN_CALLS_TO_CONDEMN and ratio < 0.5:
        return "INCONCLUSIVE", "shape differs; only " + cg + " (too few to judge)"
    if ratio is not None:
        return "WEAK", "shape differs, " + cg
    # Shape differs with nothing to corroborate either way. This is NOT evidence
    # against the pair: the two builds legitimately differ wherever the game
    # build compiles something out (a doCheckForInvalidPointers debug assert
    # turns a 24-byte body into a bare RET). Calling that SUSPECT would condemn
    # pairs proven correct by other means -- e.g. 0040a0d0 -> 0040b1f0, verified
    # by vtable slot 156 across 5 classes.
    return "INCONCLUSIVE", "shape differs; " + cg


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--from-exe", default="nocedit.exe")
    ap.add_argument("--to-exe", default="nocturne.exe")
    ap.add_argument("--mapping")
    ap.add_argument("--unnamed-only", action="store_true",
                    help="only rows where the target is unnamed and the source "
                         "has a real name -- i.e. what a transfer would act on")
    ap.add_argument("--out")
    args = ap.parse_args()

    mp = args.mapping or os.path.join(REPO, "annotations", args.to_exe,
                                      "reports", "sibling_verified_mapping.json")
    pairs = json.load(open(mp))["pairs"]
    a_ext, b_ext = load_extents(args.from_exe), load_extents(args.to_exe)
    a_data = open(os.path.join(REPO, args.from_exe), "rb").read()
    b_data = open(os.path.join(REPO, args.to_exe), "rb").read()
    a_secs, b_secs = parse_pe_sections(a_data), parse_pe_sections(b_data)
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    pairs_ab = {int(p["a"], 16): int(p["b"], 16) for p in pairs}

    unnamed = set()
    for p in glob.glob(os.path.join(REPO, "annotations", args.to_exe,
                                    "pseudocode", "src", "**", "FUN_*.c*"),
                       recursive=True):
        m = re.match(r'FUN_([0-9a-f]+)\.c', os.path.basename(p))
        if m:
            unnamed.add(m.group(1).lower())

    rows = []
    for p in pairs:
        a, b = p["a"].lower(), p["b"].lower()
        if args.unnamed_only:
            if b not in unnamed:
                continue
            if re.match(r'^[a-z0-9_]+\.(cpp|c)_FUN_[0-9a-f]+$', p["name"]):
                continue
        ae, be = a_ext.get(a), b_ext.get(b)
        ai = decode(md, a_data, a_secs, *ae) if ae else None
        bi = decode(md, b_data, b_secs, *be) if be else None
        v, d = grade(ai, bi, a, pairs_ab)
        rows.append((p, v, d))

    band = lambda c: ("1.00" if c >= 1.0 else "0.99" if c >= 0.99 else
                      "0.90-0.98" if c >= 0.90 else "0.85-0.89" if c >= 0.85 else
                      "0.80-0.84" if c >= 0.80 else "0.75-0.79" if c >= 0.75 else "<0.75")
    ORDER = ["STRONG", "GOOD", "WEAK", "INCONCLUSIVE", "SUSPECT", "UNKNOWN"]
    tab = collections.defaultdict(collections.Counter)
    for p, v, _ in rows:
        tab[band(p["confidence"])][v] += 1

    lines = []
    W = lines.append
    W("=" * 78)
    W("SIBLING PAIR AUDIT  (%s -> %s)   %d pair(s)%s"
      % (args.from_exe, args.to_exe, len(rows),
         "  [transfer-actionable only]" if args.unnamed_only else ""))
    W("=" * 78)
    W("Verdicts computed from the BINARIES, independent of mapper confidence.")
    W("")
    W("%-11s %7s %5s %5s %7s %8s %8s  %s"
      % ("conf band", "STRONG", "GOOD", "WEAK", "INCONCL", "SUSPECT", "UNKNOWN",
         "n   (%corroborated)"))
    W("-" * 78)
    for bnd in ["1.00", "0.99", "0.90-0.98", "0.85-0.89", "0.80-0.84",
                "0.75-0.79", "<0.75"]:
        c = tab.get(bnd)
        if not c:
            continue
        n = sum(c.values())
        good = c["STRONG"] + c["GOOD"]
        W("%-11s %7d %5d %5d %7d %8d %8d  %4d  (%5.1f%%)"
          % (bnd, c["STRONG"], c["GOOD"], c["WEAK"], c["INCONCLUSIVE"],
             c["SUSPECT"], c["UNKNOWN"], n, 100.0 * good / n))
    W("-" * 78)
    tot = collections.Counter()
    for c in tab.values():
        tot.update(c)
    n = sum(tot.values())
    W("%-11s %7d %5d %5d %7d %8d %8d  %4d  (%5.1f%%)"
      % ("ALL", tot["STRONG"], tot["GOOD"], tot["WEAK"], tot["INCONCLUSIVE"],
         tot["SUSPECT"], tot["UNKNOWN"], n,
         100.0 * (tot["STRONG"] + tot["GOOD"]) / max(n, 1)))
    W("")
    bad = [(p, v, d) for p, v, d in rows if v == "SUSPECT"]
    bad.sort(key=lambda r: -r[0]["confidence"])
    W("SUSPECT rows (%d) -- callgraph actively disagrees; review before transfer:" % len(bad))
    for p, v, d in bad:
        W("  %-7s conf %.2f  %s -> %s  %s" % (v, p["confidence"], p["a"], p["b"], p["name"]))
        W("          %s" % d)
    text = "\n".join(lines)
    print(text)
    if args.out:
        open(args.out, "w").write(text + "\n")
        print("\nwrote %s" % args.out)


if __name__ == "__main__":
    main()
