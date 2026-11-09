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

Every proposed pair is scored, so a held-out function proposed with two targets
counts once right and once wrong, and each pair counts once under each distinct
signal that proposed it.

Usage:
    vtable_holdout_test.py mapping.json
    vtable_holdout_test.py mapping.json --from nocedit.exe --to bw1.exe
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
SEED = 20260728


def slot_truth(doc, a_img, b_img):
    """The exact pairs whose two functions both sit in a vtable slot.

    The rest are unreachable for this pass and would only deflate recall.
    """
    in_slot_a = {f for t in a_img.vtables for f in msf._vtable_slots(t) if f}
    in_slot_b = {f for t in b_img.vtables for f in msf._vtable_slots(t) if f}
    return {p["a"]: p["b"] for p in doc["pairs"]
            if any(e.startswith("shape_strict") for e in p["evidence"])
            and p["a"] in in_slot_a and p["b"] in in_slot_b}


def without_strict(a_img):
    """shapes_for with the source side's strict hashes made unique.

    Giving each one an unmatchable value rather than removing it keeps the
    relaxed tier and the forced-order fill behaving exactly as they do in a
    real run -- dropping the Shape entirely would also disable those.
    """
    real = sm.shapes_for
    poisoned = {a: sm.Shape(f"holdout-{a}", sh.relaxed, sh.consts, sh.nbytes, sh.ninsn)
                for a, sh in real(a_img).items()}
    return lambda image, min_bytes=8: poisoned if image is a_img else real(image, min_bytes)


def holdout(doc, a_img, b_img, truth, frac):
    """(held, proposals) with `frac` of the slot truth hidden; proposals are (a, b, {signals})."""
    held = set(random.Random(SEED).sample(sorted(truth), int(len(truth) * frac)))
    mapping = msf.Mapping()
    for p in doc["pairs"]:
        if p["a"] not in held:
            mapping.add(p["a"], p["b"], p["confidence"], p["evidence"])
    ev = msf.Evidence()
    real = sm.shapes_for
    sm.shapes_for = without_strict(a_img)
    try:
        msf.prop_vtables(ev, a_img, b_img, mapping)
    finally:
        sm.shapes_for = real
    return held, [(a, b, {s for s, _ in signals}) for (a, b), signals in sorted(ev.votes.items())]


def report(frac, held, proposals, truth):
    scored = [(a, b, sigs, truth[a] == b) for a, b, sigs in proposals if a in held]
    hit = sum(1 for *_, ok in scored if ok)
    total = len(scored)
    print(f"\nheld out {frac:.0%} ({len(held)} pairs)")
    print(f"  re-proposed by vtable matching : {total} ({total / max(1, len(held)):.0%} recall)")
    print(f"  correct                        : {hit}")
    print(f"  wrong                          : {total - hit}")
    if total:
        print(f"  precision                      : {hit / total:.2%}")
    print(f"  proposals outside the holdout   : {len(proposals) - total}")
    by_sig = {}
    for _, _, sigs, ok in scored:
        for s in sigs:
            by_sig.setdefault(s, [0, 0])[not ok] += 1
    for s, (ok, bad) in sorted(by_sig.items()):
        print(f"    {s:<14} correct {ok:4d}  wrong {bad:4d}")
    for a, b, sigs, ok in scored:
        if not ok:
            print(f"    WRONG {a} -> {b} (truth {truth[a]}) {sorted(sigs)}")


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
    truth = slot_truth(doc, a_img, b_img)
    print(f"  of which sit in a vtable slot on both sides: {len(truth)}")
    for frac in FRACTIONS:
        held, proposals = holdout(doc, a_img, b_img, truth, frac)
        report(frac, held, proposals, truth)


if __name__ == "__main__":
    main()
