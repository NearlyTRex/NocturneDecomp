#!/usr/bin/env python3
"""Measure vtable-slot matching precision against known-exact pairs.

The companion to order_holdout_test.py, for prop_vtables()' LCS alignment.

It exists because line pins cannot score this pass. In the run that motivated
it, all 306 `vtable_order` pairs were unpinned, so validate_sibling_mapping.py
reported "0 conflicts" over a population that contained none of them -- a true
statement carrying no evidence either way. shape_strict pairs are exact by
construction (identical instruction bytes once relocated addresses are masked,
unique on both sides), so hiding a sample and asking the vtable pass to
re-derive them gives a precision figure over pairs we already trust.

Two things make the measurement conservative:

  - Removing an anchor also removes it from the tables it anchored, so the pass
    runs with weaker alignment than it would ever have in a real run.
  - The strict shape tier is *disabled* while scoring. A held-out pair was found
    by unique strict shape in the first place, so leaving that tier on lets the
    pass recover it by the very signal being tested, which measures nothing.
    Only the relaxed tier and the forced-order fill are exercised.

Usage:
    vtable_holdout_test.py mapping.json
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

# Restrict the ground truth to functions that actually sit in a vtable slot --
# the rest are unreachable for this pass and would only deflate recall.
in_slot_a = {f for t in a_img.vtables for f in msf._vtable_slots(t) if f}
in_slot_b = {f for t in b_img.vtables for f in msf._vtable_slots(t) if f}
truth = {a: b for a, b in truth.items() if a in in_slot_a and b in in_slot_b}
print(f"  of which sit in a vtable slot on both sides: {len(truth)}")


_real_shapes_for = sm.shapes_for

# The source side with every strict hash made unique, so no pair can match on
# the strict tier. Giving each one an unmatchable value rather than removing it
# keeps the relaxed tier and the forced-order fill behaving exactly as they do
# in a real run -- dropping the Shape entirely would also disable those.
_POISONED_A = {a: sm.Shape(f"holdout-{a}", sh.relaxed, sh.consts,
                           sh.nbytes, sh.ninsn)
               for a, sh in _real_shapes_for(a_img).items()}


def _shapes_without_strict(image, min_bytes=8):
    if image is a_img:
        return _POISONED_A
    return _real_shapes_for(image, min_bytes)


for frac in (0.10, 0.20, 0.40):
    rng = random.Random(20260728)
    held = set(rng.sample(sorted(truth), int(len(truth) * frac)))

    mapping = msf.Mapping()
    for p in doc["pairs"]:
        if p["a"] in held:
            continue
        mapping.add(p["a"], p["b"], p["confidence"], p["evidence"])

    ev = msf.Evidence()
    sm.shapes_for = _shapes_without_strict
    try:
        msf.prop_vtables(ev, a_img, b_img, mapping)
    finally:
        sm.shapes_for = _real_shapes_for

    proposed = {}
    for (a, b), signals in ev.votes.items():
        proposed.setdefault(a, (b, signals))

    hit = sum(1 for a, (b, _) in proposed.items() if a in held and truth[a] == b)
    miss = sum(1 for a, (b, _) in proposed.items() if a in held and truth[a] != b)
    unscored = len(proposed) - hit - miss
    total = hit + miss

    print(f"\nheld out {frac:.0%} ({len(held)} pairs)")
    print(f"  re-proposed by vtable matching : {total} "
          f"({total / max(1, len(held)):.0%} recall)")
    print(f"  correct                        : {hit}")
    print(f"  wrong                          : {miss}")
    if total:
        print(f"  precision                      : {hit / total:.2%}")
    print(f"  proposals outside the holdout   : {unscored}")

    by_sig = {}
    for a, (b, signals) in proposed.items():
        if a not in held:
            continue
        for s, _ in signals:
            r = by_sig.setdefault(s, [0, 0])
            r[truth[a] != b] += 1
    for s, (ok, bad) in sorted(by_sig.items()):
        print(f"    {s:<14} correct {ok:4d}  wrong {bad:4d}")
    for a, (b, signals) in sorted(proposed.items()):
        if a in held and truth[a] != b:
            print(f"    WRONG {a} -> {b} (truth {truth[a]}) "
                  f"{[s for s, _ in signals]}")
