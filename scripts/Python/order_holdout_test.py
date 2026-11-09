#!/usr/bin/env python3
"""Measure order-matching precision against known-exact pairs.

shape_strict pairs are exact by construction: identical instruction bytes once
relocated addresses are masked, unique on both sides. Hiding a sample of them
and asking the order pass to re-derive them gives a direct precision figure --
every recovered pair is checkable against an answer we already trust.

The test is harder than reality: removing an anchor also removes the bracket
structure its neighbours relied on, so the pass runs with less scaffolding than
it would ever have in a real run.

Usage:
    order_holdout_test.py mapping.json
    order_holdout_test.py mapping.json --from nocedit.exe --to bw1.exe
"""
import argparse
import json
import os
import random
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm
import map_sibling_functions as msf

FRACTIONS = (0.10, 0.20, 0.40)
SEED = 20260727


def holdout(doc, a_img, b_img, frac):
    """(held, hit, miss, unscored) when `frac` of the exact pairs are hidden from the order pass."""
    truth = {p["a"]: p["b"] for p in doc["pairs"]
             if any(e.startswith("shape_strict") for e in p["evidence"])}
    held = set(random.Random(SEED).sample(sorted(truth), int(len(truth) * frac)))
    mapping = msf.Mapping()
    for p in doc["pairs"]:
        if p["a"] not in held:
            mapping.add(p["a"], p["b"], p["confidence"], p["evidence"])
    ev = msf.Evidence()
    msf.prop_order(ev, a_img, b_img, mapping)
    proposed = dict(ev.votes)
    hit = sum(1 for a, b in proposed if a in held and truth[a] == b)
    miss = sum(1 for a, b in proposed if a in held and truth[a] != b)
    # Pairs proposed for functions that were never held out land outside the
    # ground-truth set entirely, so they are not scoreable either way.
    return len(held), hit, miss, len(proposed) - hit - miss


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("mapping", help="map_sibling_functions.py output")
    ap.add_argument("--from", dest="a_prog", default="nocedit.exe")
    ap.add_argument("--to", dest="b_prog", default="nocturne.exe")
    args = ap.parse_args(argv)
    with open(args.mapping) as fh:
        doc = json.load(fh)
    exact = sum(1 for p in doc["pairs"] if any(e.startswith("shape_strict") for e in p["evidence"]))
    print(f"exact (shape_strict) pairs available as ground truth: {exact}")
    a_img, b_img = sm.Image(args.a_prog), sm.Image(args.b_prog)
    for frac in FRACTIONS:
        held, hit, miss, unscored = holdout(doc, a_img, b_img, frac)
        total = hit + miss
        print(f"\nheld out {frac:.0%} ({held} pairs)")
        print(f"  re-proposed by order matching : {total} ({total / held if held else 0:.0%} recall)")
        print(f"  correct                       : {hit}")
        print(f"  wrong                         : {miss}")
        if total:
            print(f"  precision                     : {hit / total:.2%}")
        print(f"  proposals outside the holdout  : {unscored}")


if __name__ == "__main__":
    main()
