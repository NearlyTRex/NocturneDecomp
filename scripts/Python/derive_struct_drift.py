#!/usr/bin/env python3
"""Measure how each class's field offsets shifted between the sibling builds.

nocedit.exe's type library cannot be copied onto nocturne.exe as-is. The editor
build carries extra members, so a class's fields sit at different offsets in the
two binaries -- `CDemonSet` is 1000 bytes fatter, the `CCharacter` base 408.
Importing the layouts verbatim would give nocturne confidently-wrong field
offsets, which is worse than having no types at all.

The shift is recoverable, because a matched pair of methods is the *same code*
compiled against the two layouts. Align the two instruction streams and every
place they disagree only in a displacement is one observation of
"nocedit offset X is nocturne offset Y" for whatever object that instruction was
addressing. Aggregate across all of a class's matched methods and the layout
difference falls out as a piecewise-constant map.

What this can and cannot tell you:

  * Offsets are observed only where matched code actually touches them, so the
    map has gaps. A segment boundary is known to lie *between* two observed
    offsets, never exactly; both bounds are reported.
  * A method addresses more than just `this` -- globals, arguments, other
    objects -- so a class's observations are a mixture. Segments carry a support
    count and a purity, and low-purity output should be read as a hint, not a
    layout.
  * Classes with no matched methods (plain value types like CVector3f, which are
    parameters rather than method owners) cannot be measured this way at all.
    They are listed separately as unmeasured.

Usage:
    derive_struct_drift.py mapping.json
    derive_struct_drift.py mapping.json --out drift.json --min-observations 20
    derive_struct_drift.py mapping.json --class CDemonSet -v
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

_NUM = re.compile(r"0x[0-9a-f]+|\b\d+\b")
# The class token in an exported name: core_set.cpp_CDemonSet_lightVerticies_FUN_x
_CLASS = re.compile(r"_(C[A-Z][A-Za-z0-9]*)_")
# A memory operand. A field offset is always a displacement inside one of
# these; a bare immediate (`cmp eax, 5`) never is, and counting those was what
# filled the first version's output with one-observation phantom segments.
_MEMOP = re.compile(r"\[([^\]]*)\]")

# Displacements plausibly inside an object. Above this and it is an absolute
# address that happened to fall outside the image, not a field offset.
MAX_FIELD_OFFSET = 0x200000


def _displacements(op_str):
    """Numeric displacements appearing inside memory operands, in order."""
    out = []
    for mem in _MEMOP.findall(op_str):
        out.extend(_NUM.findall(mem))
    return out


def _insns(image, addr):
    """Linear disassembly of a function as [(mnemonic, op_str)], or None."""
    func = image.by_addr.get(addr)
    if not func:
        return None
    out = []
    for start, end in sorted((int(b["start"], 16), int(b["end"], 16))
                             for b in func.get("body", []) or []):
        off = image.va2off(start)
        if off is None:
            return None
        out.extend((i.mnemonic, i.op_str)
                   for i in _MD.disasm(image.data[off:off + (end - start + 1)], start))
    return out


def observe(a_img, b_img, pairs):
    """class -> Counter of (nocedit_offset, nocturne_offset) sightings."""
    obs = defaultdict(Counter)
    methods = Counter()
    compared = Counter()
    for p in pairs:
        m = _CLASS.search(p["name"])
        if not m:
            continue
        cls = m.group(1)
        methods[cls] += 1
        A, B = _insns(a_img, p["a"]), _insns(b_img, p["b"])
        # Only position-aligned streams are safe to zip; a length difference
        # means the code itself changed and the alignment would be fiction.
        if not A or not B or len(A) != len(B):
            continue
        compared[cls] += 1
        for (m1, o1), (m2, o2) in zip(A, B):
            if m1 != m2 or o1 == o2:
                continue
            # Same instruction shape, differing only in literals.
            if _NUM.sub("#", o1) != _NUM.sub("#", o2):
                continue
            dx, dy = _displacements(o1), _displacements(o2)
            if len(dx) != len(dy):
                continue
            for x, y in zip(dx, dy):
                vx, vy = int(x, 0), int(y, 0)
                if vx == vy:
                    continue
                if a_img.is_mapped_va(vx) and b_img.is_mapped_va(vy):
                    continue                      # relocated absolute address
                if 0 < vx < MAX_FIELD_OFFSET:
                    obs[cls][(vx, vy)] += 1
    return obs, methods, compared


def segment(counter, min_support=2):
    """Fold (from, to) sightings into piecewise-constant offset segments.

    Returns [{from_lo, from_hi, delta, support, purity, boundary_before}] in
    ascending offset order, plus the overall purity of the model.
    """
    # One delta per source offset: the majority vote, since a given offset can
    # be reached through different base objects in different instructions.
    per_offset = defaultdict(Counter)
    for (vx, vy), n in counter.items():
        per_offset[vx][vy - vx] += n

    points = []
    total = impure = 0
    for vx in sorted(per_offset):
        votes = per_offset[vx]
        delta, n = votes.most_common(1)[0]
        allv = sum(votes.values())
        total += allv
        impure += allv - n
        if allv >= min_support or len(votes) == 1:
            points.append((vx, delta, allv))
    if not points:
        return [], 0.0

    segs = []
    cur = {"from_lo": points[0][0], "from_hi": points[0][0],
           "delta": points[0][1], "support": points[0][2],
           "boundary_before": None}
    for vx, delta, n in points[1:]:
        if delta == cur["delta"]:
            cur["from_hi"] = vx
            cur["support"] += n
        else:
            segs.append(cur)
            cur = {"from_lo": vx, "from_hi": vx, "delta": delta, "support": n,
                   # The real boundary is somewhere in this gap; we cannot see
                   # inside it because no matched instruction touched it.
                   "boundary_before": [segs[-1]["from_hi"], vx]}
    segs.append(cur)
    purity = 1.0 - (impure / total) if total else 0.0
    return segs, purity


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("mapping")
    ap.add_argument("--out", help="write the drift spec as JSON")
    ap.add_argument("--min-observations", type=int, default=8,
                    help="ignore classes with fewer sightings (default: 8)")
    ap.add_argument("--class", dest="only", help="detail one class")
    ap.add_argument("-v", "--verbose", action="store_true",
                    help="list every segment, not just the dominant drift")
    args = ap.parse_args()

    with open(args.mapping) as fh:
        mapping = json.load(fh)
    a_img = sm.Image(mapping["from"])
    b_img = sm.Image(mapping["to"])

    obs, methods, compared = observe(a_img, b_img, mapping["pairs"])

    results = {}
    for cls, counter in obs.items():
        segs, purity = segment(counter)
        n = sum(counter.values())
        # A handful of sightings is not evidence of a layout difference: a
        # single displacement can just as easily be a global array base that
        # happened to move. Only a well-supported class is called drifting.
        verdict = "drifting" if n >= args.min_observations else "weak"
        results[cls] = {"segments": segs, "purity": round(purity, 3),
                        "observations": n, "verdict": verdict,
                        "methods": methods[cls], "compared": compared[cls]}

    # Classes that had matched methods but produced no differing displacement
    # at all: their layout is identical as far as the matched code reaches.
    stable = sorted(c for c in compared if compared[c] and not obs.get(c))

    if args.only:
        r = results.get(args.only)
        if not r:
            print(f"{args.only}: no drift observed "
                  f"({compared.get(args.only, 0)} comparable methods)")
            return 0
        print(f"{args.only}: {r['observations']} observations across "
              f"{r['compared']}/{r['methods']} comparable methods, "
              f"purity {r['purity']:.2f}\n")
        print(f"  {'nocedit offsets':<26} {'delta':>9}  {'support':>7}  boundary")
        for s in r["segments"]:
            b = (f"between {s['boundary_before'][0]:#x} and {s['boundary_before'][1]:#x}"
                 if s["boundary_before"] else "-")
            print(f"  {s['from_lo']:#08x} .. {s['from_hi']:#08x}      "
                  f"{s['delta']:+#9x}  {s['support']:>7}  {b}")
        return 0

    strong = {c: r for c, r in results.items()
              if r["observations"] >= args.min_observations}
    print(f"{len(compared)} classes had comparable matched methods\n"
          f"  {len(stable):4d} show NO field-offset drift  -> layout is transferable as-is\n"
          f"  {len(strong):4d} show drift with >= {args.min_observations} observations\n"
          f"  {len(results) - len(strong):4d} show drift but too few observations to model\n")

    print("classes needing layout correction, by evidence:")
    print(f"  {'class':<20}{'obs':>6}{'meth':>6}{'pure':>6}  dominant shift(s)")
    for cls, r in sorted(strong.items(), key=lambda kv: -kv[1]["observations"])[:30]:
        by_delta = Counter()
        for s in r["segments"]:
            by_delta[s["delta"]] += s["support"]
        top = ", ".join(f"{d:+#x} ({n} obs)" for d, n in by_delta.most_common(2))
        print(f"  {cls:<20}{r['observations']:>6}{r['compared']:>6}"
              f"{r['purity']:>6.2f}  {top}")
        if args.verbose:
            for s in r["segments"]:
                print(f"        {s['from_lo']:#08x}..{s['from_hi']:#08x} "
                      f"{s['delta']:+#x} x{s['support']}")

    print(f"\ndrift-free classes ({len(stable)}), safe to import verbatim:")
    print("  " + ", ".join(stable[:24]) + (" ..." if len(stable) > 24 else ""))

    if args.out:
        payload = {
            "from": mapping["from"], "to": mapping["to"],
            "note": ("Offsets are nocedit's. nocturne_offset = nocedit_offset + "
                     "delta. Segment boundaries are only known to lie within "
                     "boundary_before, since unobserved offsets are invisible."),
            "stable": stable,
            "drifting": sorted(c for c, r in results.items()
                               if r["verdict"] == "drifting"),
            "weak": sorted(c for c, r in results.items()
                           if r["verdict"] == "weak"),
            "drift": {c: r for c, r in sorted(results.items())},
        }
        with open(args.out, "w") as fh:
            json.dump(payload, fh, indent=1)
        print(f"\nwrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
