#!/usr/bin/env python3
"""Diff two binaries' __FILE__/__LINE__ pin sets to classify source divergence.

__LINE__ is invariant under #ifdef: preprocessing a block out does not renumber
the physical lines below it. So for a given source file:

  * identical line sets      -> the translation unit is the same in both builds
  * one side is a subset     -> code was #ifdef'd out (or dead-stripped)
  * lines shifted by const d  -> lines were inserted/removed above -> A REAL EDIT
  * present in only one exe  -> whole TU is build-specific

That distinction decides the whole cross-binary strategy. If files come back
identical/subset, the two exes are one build flag apart and reconstructing the
original #ifdefs is on the table. If many files are shifted, the binaries are
separated by real source edits and you are doing a port, not a diff.

Usage:
    diff_line_pins.py pins_nocedit.json pins_nocturne.json
    diff_line_pins.py a.json b.json --json out.json
"""

import argparse
import json
import sys
from collections import Counter, defaultdict


def load(path):
    d = json.load(open(path))
    by_file = defaultdict(set)
    for p in d["pins"]:
        by_file[p["file"]].add(p["line"])
    return d.get("exe", path), by_file


def best_shift(a, b, max_shift=5000):
    """Largest n and the delta d such that |{x in a : x+d in b}| = n, d != 0."""
    if not a or not b:
        return 0, 0
    # candidate deltas from a sample of pairs (full cross-product is fine here:
    # per-file pin counts are in the tens, not thousands)
    deltas = Counter()
    for x in a:
        for y in b:
            d = y - x
            if d and abs(d) <= max_shift:
                deltas[d] += 1
    best_d, best_n = 0, 0
    for d, _ in deltas.most_common(40):
        n = sum(1 for x in a if x + d in b)
        if n > best_n:
            best_d, best_n = d, n
    return best_n, best_d


def classify(a, b):
    """Return (verdict, detail) for one file's line sets."""
    if a == b:
        return "identical", ""
    if not b:
        return "only-in-A", f"{len(a)} pins"
    if not a:
        return "only-in-B", f"{len(b)} pins"

    common = a & b
    if b < a:
        return "subset(B<A)", f"{len(a - b)} pins compiled out of B"
    if a < b:
        return "subset(A<B)", f"{len(b - a)} pins compiled out of A"

    n, d = best_shift(a - common, b - common)
    if n >= 2 and n >= 0.5 * len(a - common):
        return "SHIFTED", f"{n} pins shifted by {d:+d}; {len(common)} unshifted"
    return "diverged", f"{len(common)} shared, {len(a-common)} A-only, {len(b-common)} B-only"


ORDER = ["identical", "subset(B<A)", "subset(A<B)", "SHIFTED", "diverged",
         "only-in-A", "only-in-B"]


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("a_json")
    ap.add_argument("b_json")
    ap.add_argument("--json", help="write the full classification")
    ap.add_argument("--show", default="SHIFTED,diverged",
                    help="comma-separated verdicts to list in detail")
    args = ap.parse_args()

    a_name, A = load(args.a_json)
    b_name, B = load(args.b_json)
    show = set(args.show.split(","))

    results = {}
    for f in sorted(set(A) | set(B)):
        verdict, detail = classify(A.get(f, set()), B.get(f, set()))
        results[f] = {"verdict": verdict, "detail": detail,
                      "a_pins": len(A.get(f, ())), "b_pins": len(B.get(f, ()))}

    counts = Counter(r["verdict"] for r in results.values())
    print(f"A = {a_name}   ({sum(len(v) for v in A.values())} pins, {len(A)} files)")
    print(f"B = {b_name}   ({sum(len(v) for v in B.values())} pins, {len(B)} files)")
    print()
    for v in ORDER:
        if counts.get(v):
            print(f"  {v:14s} {counts[v]:4d} files")
    print()

    for f, r in results.items():
        if r["verdict"] in show:
            print(f"  [{r['verdict']:11s}] {f:34s} A={r['a_pins']:3d} B={r['b_pins']:3d}  {r['detail']}")

    shifted = counts.get("SHIFTED", 0) + counts.get("diverged", 0)
    shared = len(set(A) & set(B))
    print()
    if shared:
        print(f"VERDICT: {shifted}/{shared} shared TUs show real source drift "
              f"({100*shifted/shared:.0f}%).")
        if shifted == 0:
            print("  -> the two builds differ only by conditional compilation.")
            print("     #ifdef reconstruction is viable.")
        elif shifted < 0.15 * shared:
            print("  -> mostly one build flag apart, with a few edited files.")
            print("     #ifdef reconstruction viable for the unshifted majority.")
        else:
            print("  -> the binaries are separated by substantial source edits.")
            print("     Treat as sibling versions, not as one source + a flag.")

    if args.json:
        json.dump({"a": a_name, "b": b_name, "files": results}, open(args.json, "w"), indent=1)
        print(f"\nwrote {args.json}", file=sys.stderr)


if __name__ == "__main__":
    main()
