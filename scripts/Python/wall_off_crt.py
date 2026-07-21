#!/usr/bin/env python3
"""Partition nocturne.exe into game code and statically-linked CRT, and find
the small set of CRT functions that actually need to be named.

Most of the CRT is not interesting. It is Watcom's runtime, it is the same
runtime this project already catalogued for tridx7.dll, and its internals
(`__int_realloc`, locale table walkers, the FPU emulator) are never referenced
from game source. Annotating them individually is wasted effort -- what matters
is the *boundary*: the CRT entry points that game code calls directly. Name
those, wall off everything behind them, and the runtime stops competing for
attention with the engine. This mirrors how tridx7 is handled, where the CRT is
signature-only and never compiled (memory: tridx7-crt-signature-only).

Classification, strongest evidence first:

  crt_named    matched to a `crt_*` function in the annotated sibling, so it
               arrives with a real CRT name -- including the ones Watcom places
               away from the runtime region (memcpy/memset sit near user code)
  crt_region   unmatched, but surrounded by matched CRT in the link-order
               layout, so it is runtime code the sibling could not name
  import       a PE import thunk (already named by Ghidra)
  game         everything else

The boundary is then the crt_* functions with at least one caller classified
`game`. Everything else is interior and can stay anonymous.

Usage:
    wall_off_crt.py mapping.json
    wall_off_crt.py mapping.json --out crt_wall.json --list-boundary
"""

import argparse
import bisect
import json
import os
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm


def neighbourhood_is_crt(mapped, addr, k=12, threshold=0.75):
    """Is `addr` sitting inside the runtime region, judged by its neighbours?

    Watcom emits the user's objects first and the runtime after them, so the
    CRT is broadly a tail region -- but not cleanly. `engine_dosio.cpp` links
    late and lands above the first CRT function, `memcpy`/`memset` are placed
    down among user code, and the debug-allocator wrappers interleave. A single
    cut-point is therefore wrong in both directions: one stray game function
    high up drags the boundary past hundreds of real CRT functions.

    Judging each unmapped function by the `k` nearest *matched* functions is
    robust to those islands, because a misplaced individual cannot outvote its
    surroundings.

    `mapped` is a sorted list of (addr, is_crt).
    """
    if not mapped:
        return False
    i = bisect.bisect_left(mapped, (addr, False))
    lo, hi = i, i
    picked = []
    while len(picked) < k and (lo > 0 or hi < len(mapped)):
        left = mapped[lo - 1] if lo > 0 else None
        right = mapped[hi] if hi < len(mapped) else None
        if left is not None and (right is None or
                                 addr - left[0] <= right[0] - addr):
            picked.append(left)
            lo -= 1
        elif right is not None:
            picked.append(right)
            hi += 1
        else:
            break
    if not picked:
        return False
    return sum(1 for _, c in picked if c) / len(picked) >= threshold


def classify(b_img, mapping):
    """func_addr -> ('crt_named'|'crt_region'|'import'|'game', crt_name|None)"""
    by_b = {p["b"]: p for p in mapping["pairs"]}

    # Pass 1: everything the mapping decides directly.
    out = {}
    unmapped = []
    for f in b_img.functions:
        addr = f["addr"].lower()
        pair = by_b.get(addr)
        name = f.get("name", "")
        if pair and pair["name"].startswith("crt_"):
            out[addr] = ("crt_named", pair["name"])
        elif pair:
            out[addr] = ("game", None)
        elif not sm.is_unnamed(name):
            # Ghidra already resolved it: PE import thunks (DirectDrawCreate,
            # Ordinal_116, ...). Not CRT and not ours to name.
            out[addr] = ("import", name)
        else:
            unmapped.append(addr)

    # Pass 2: place the unmatched by the company they keep.
    mapped = sorted((int(a, 16), k == "crt_named")
                    for a, (k, _) in out.items() if k in ("crt_named", "game"))
    for addr in unmapped:
        is_crt = neighbourhood_is_crt(mapped, int(addr, 16))
        out[addr] = ("crt_region" if is_crt else "game", None)
    return out


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("mapping", help="output of map_sibling_functions.py")
    ap.add_argument("--out", help="write the wall/worklist as JSON")
    ap.add_argument("--list-boundary", action="store_true",
                    help="print every boundary CRT function")
    ap.add_argument("--min-confidence", type=float, default=0.0,
                    help="ignore mapping pairs below this confidence")
    args = ap.parse_args()

    with open(args.mapping) as fh:
        mapping = json.load(fh)
    if args.min_confidence:
        mapping["pairs"] = [p for p in mapping["pairs"]
                            if p["confidence"] >= args.min_confidence]

    b_img = sm.Image(mapping["to"])
    kinds = classify(b_img, mapping)

    tally = Counter(k for k, _ in kinds.values())
    total = len(kinds)
    crt_addrs = sorted(int(a, 16) for a, (k, _) in kinds.items()
                       if k in ("crt_named", "crt_region"))
    region_start = crt_addrs[0] if crt_addrs else None
    print(f"{mapping['to']}: {total} functions")
    for k in ("game", "crt_named", "crt_region", "import"):
        if tally[k]:
            print(f"  {k:<11}: {tally[k]:5d}  ({100.0 * tally[k] / total:.1f}%)")

    crt = {a for a, (k, _) in kinds.items() if k in ("crt_named", "crt_region")}
    print(f"\nCRT total: {len(crt)} functions "
          f"({100.0 * len(crt) / total:.1f}% of the binary)")

    # ---- the boundary ----------------------------------------------------
    inv = b_img.callers_of()
    boundary = {}
    for addr in crt:
        game_callers = sorted(c for c in inv.get(addr, ())
                              if kinds.get(c, ("game",))[0] == "game")
        if game_callers:
            boundary[addr] = game_callers

    interior = len(crt) - len(boundary)
    print(f"  called directly from game code : {len(boundary)}   <- need names")
    print(f"  reachable only from other CRT  : {interior}   <- wall off, leave anonymous")

    named = {a: kinds[a][1] for a in boundary if kinds[a][0] == "crt_named"}
    unnamed = sorted(a for a in boundary if kinds[a][0] != "crt_named")
    print(f"\nof the {len(boundary)} boundary functions:")
    print(f"  {len(named):4d} already carry a CRT name from {mapping['from']}")
    print(f"  {len(unnamed):4d} are unidentified   <- the actual manual worklist")

    if named:
        print("\nmost-called named CRT entry points:")
        for addr, callers in sorted(boundary.items(),
                                    key=lambda kv: -len(kv[1]))[:15]:
            nm = kinds[addr][1]
            label = sm.strip_addr_suffix(nm) if nm else "(unidentified)"
            print(f"  {addr}  {len(callers):4d} game callers  {label}")

    if unnamed:
        print(f"\nunidentified CRT functions called from game code "
              f"({len(unnamed)}) -- name these:")
        for addr in sorted(unnamed, key=lambda a: -len(boundary[a]))[:25]:
            print(f"  {addr}  {len(boundary[addr]):4d} game callers")

    if args.list_boundary:
        print(f"\nall {len(boundary)} boundary functions:")
        for addr in sorted(boundary):
            nm = kinds[addr][1]
            print(f"  {addr}  {len(boundary[addr]):4d}  "
                  f"{sm.strip_addr_suffix(nm) if nm else '(unidentified)'}")

    if args.out:
        payload = {
            "program": mapping["to"],
            "region_start": f"{region_start:08x}" if region_start else None,
            "counts": {k: tally[k] for k in tally},
            "crt_boundary": [
                {"addr": a,
                 "name": kinds[a][1],
                 "game_callers": boundary[a]}
                for a in sorted(boundary)],
            "crt_interior": sorted(a for a in crt if a not in boundary),
        }
        with open(args.out, "w") as fh:
            json.dump(payload, fh, indent=1)
        print(f"\nwrote {args.out}")


if __name__ == "__main__":
    main()
