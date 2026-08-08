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
"""
import json
import os
import random
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm
import map_sibling_functions as msf

if len(sys.argv) != 2:
    sys.exit(__doc__.strip().splitlines()[-1].strip())
doc = json.load(open(sys.argv[1]))

truth = {}
for p in doc["pairs"]:
    if any(e.startswith("shape_strict") for e in p["evidence"]):
        truth[p["a"]] = p["b"]
print(f"exact (shape_strict) pairs available as ground truth: {len(truth)}")

a_img = sm.Image("nocedit.exe")
b_img = sm.Image("nocturne.exe")

for frac in (0.10, 0.20, 0.40):
    rng = random.Random(20260727)
    held = set(rng.sample(sorted(truth), int(len(truth) * frac)))

    mapping = msf.Mapping()
    for p in doc["pairs"]:
        if p["a"] in held:
            continue
        mapping.add(p["a"], p["b"], p["confidence"], p["evidence"])

    ev = msf.Evidence()
    msf.prop_order(ev, a_img, b_img, mapping)

    proposed = {a: b for (a, b) in ev.votes}
    hit = sum(1 for a, b in proposed.items() if a in held and truth[a] == b)
    miss = sum(1 for a, b in proposed.items() if a in held and truth[a] != b)
    # Pairs proposed for functions that were never held out land outside the
    # ground-truth set entirely, so they are not scoreable either way.
    unscored = len(proposed) - hit - miss
    total = hit + miss
    print(f"\nheld out {frac:.0%} ({len(held)} pairs)")
    print(f"  re-proposed by order matching : {total} ({total / len(held):.0%} recall)")
    print(f"  correct                       : {hit}")
    print(f"  wrong                         : {miss}")
    if total:
        print(f"  precision                     : {hit / total:.2%}")
    print(f"  proposals outside the holdout  : {unscored}")
