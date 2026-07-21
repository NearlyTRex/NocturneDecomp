#!/usr/bin/env python3
"""Score a sibling function mapping against held-out __FILE__/__LINE__ pins.

map_sibling_functions.py never looks at line pins, so the pins are an
independent oracle: if a matched pair really is the same function, the source
file baked into its fatal-error calls must be the same file on both sides.

That gives a directly measurable false-positive rate, broken down by the signal
that produced each match -- which is what calibrates the confidence model.
Without this the mapping's coverage number means nothing.

A pair is scored only when *both* sides carry at least one pin; everything else
is `unpinned` and simply not evidence either way.

    agree_line  same source file, and the pin lines align under one of that
                file's supported deltas -- the strongest available confirmation
    agree_file  same source file, but the lines moved. Not an error: an edit
                inside the function shifts its own lines only.
    conflict    different source files -- the match is wrong. This is the only
                sound error signal, since filenames cannot legitimately move.
    unpinned    no pin on one or both sides; no verdict

A second, fully independent cross-check compares the two sides' instruction
shapes. Pairs matched by call-graph propagation never consulted shape, so it
covers the ~87% of pairs the pins cannot reach.

Usage:
    validate_sibling_mapping.py mapping.json pins_a.json pins_b.json
    validate_sibling_mapping.py mapping.json pins_a.json pins_b.json --list-conflicts
"""

import argparse
import json
import os
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm
from diff_line_pins import classify


def pin_index(image, pins):
    """func_addr -> {file: set(line)} for every pin landing in a function."""
    out = defaultdict(lambda: defaultdict(set))
    for p in pins:
        addr = image.func_containing(p["va"])
        if addr:
            out[addr][p["file"]].add(p["line"])
    return out


def tu_shifts(pins_a, pins_b, min_support=2):
    """source file -> set of plausible line deltas between the builds.

    A file is *not* shifted by a single constant. An edit that inserts lines in
    two places gives two regions with two different deltas -- ../core/actor.cpp
    shifts by +2 below line ~1378 and by +15 above it. Modelling that as one
    delta makes every pin in the second region look like a mismatch.

    So collect every delta supported by at least `min_support` pin pairs and
    accept a pair whose lines align under any of them. Requiring real support
    keeps this from degenerating into "any line matches any line".
    """
    def by_file(pins):
        d = defaultdict(set)
        for p in pins:
            d[p["file"]].add(p["line"])
        return d

    A, B = by_file(pins_a), by_file(pins_b)
    out = {}
    for f in set(A) & set(B):
        hist = Counter(y - x for x in A[f] for y in B[f])
        out[f] = {d for d, n in hist.items() if n >= min_support} | {0}
    return out


def tu_classes(pins_a, pins_b):
    """source file -> divergence verdict, via diff_line_pins.classify."""
    def by_file(pins):
        d = defaultdict(set)
        for p in pins:
            d[p["file"]].add(p["line"])
        return d

    A, B = by_file(pins_a), by_file(pins_b)
    return {f: classify(A.get(f, set()), B.get(f, set()))[0]
            for f in set(A) | set(B)}


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("mapping")
    ap.add_argument("pins_a")
    ap.add_argument("pins_b")
    ap.add_argument("--list-conflicts", action="store_true",
                    help="print every conflicting pair")
    ap.add_argument("--out", help="write the per-pair verdicts as JSON")
    args = ap.parse_args()

    with open(args.mapping) as fh:
        mapping = json.load(fh)

    a_img = sm.Image(mapping["from"])
    b_img = sm.Image(mapping["to"])
    pins_a = sm.load_pins(args.pins_a)
    pins_b = sm.load_pins(args.pins_b)

    fa = pin_index(a_img, pins_a)
    fb = pin_index(b_img, pins_b)
    tus = tu_classes(pins_a, pins_b)
    shifts = tu_shifts(pins_a, pins_b)

    # Second, independent oracle: the relaxed instruction shape. Pairs matched
    # purely by call-graph propagation never consulted it, so disagreement
    # there is a real error signal covering far more pairs than the pins do.
    shapes_a = sm.shapes_for(a_img)
    shapes_b = sm.shapes_for(b_img)

    print(f"pins: {len(pins_a)} in {mapping['from']} ({len(fa)} functions), "
          f"{len(pins_b)} in {mapping['to']} ({len(fb)} functions)\n")

    verdicts = []
    # per-signal and per-band tallies: Counter of (bucket -> agree/conflict)
    by_signal = defaultdict(Counter)
    by_band = defaultdict(Counter)
    overall = Counter()
    shape_check = Counter()

    for pair in mapping["pairs"]:
        a, b = pair["a"], pair["b"]
        sa, sb = fa.get(a), fb.get(b)
        if not sa or not sb:
            verdict = "unpinned"
        elif not (set(sa) & set(sb)):
            # Different source file on the two sides. This is the only sound
            # error signal here: line numbers can legitimately move, filenames
            # cannot.
            verdict = "conflict"
        else:
            # Same file. Lines aligning under one of the file's supported
            # deltas is stronger evidence still, but failing to align is not
            # proof of error -- a local edit inside the function moves its
            # lines without moving anything else.
            verdict = "agree_file"
            for f in set(sa) & set(sb):
                deltas = shifts.get(f, {0})
                if any({x + d for x in sa[f]} & sb[f] for d in deltas):
                    verdict = "agree_line"
                    break

        overall[verdict] += 1

        # shape cross-check (independent of pins entirely)
        sha, shb = shapes_a.get(a), shapes_b.get(b)
        if sha and shb:
            if sha.strict == shb.strict:
                shape_check["identical"] += 1
            elif sha.relaxed == shb.relaxed:
                shape_check["same_mnemonics"] += 1
            elif abs(sha.ninsn - shb.ninsn) <= max(4, 0.25 * sha.ninsn):
                shape_check["similar_size"] += 1
            else:
                shape_check["size_mismatch"] += 1
        else:
            shape_check["unshaped"] += 1
        c = pair["confidence"]
        band = "0.95+" if c >= 0.95 else "0.90+" if c >= 0.90 else \
               "0.80+" if c >= 0.80 else "0.60+" if c >= 0.60 else "<0.60"
        by_band[band][verdict] += 1
        for e in pair["evidence"]:
            by_signal[e.split(":", 1)[0]][verdict] += 1

        if verdict != "unpinned":
            verdicts.append({
                "a": a, "b": b, "name": pair["name"], "verdict": verdict,
                "confidence": c, "evidence": pair["evidence"],
                "a_files": sorted(sa), "b_files": sorted(sb),
                "tu_class": tus.get(sorted(sa)[0], "unknown"),
            })

    scored = overall["agree_line"] + overall["agree_file"] + overall["conflict"]
    print(f"{len(mapping['pairs'])} pairs: {scored} scoreable "
          f"({overall['unpinned']} unpinned)")
    if scored:
        print(f"  agree (line)  {overall['agree_line']:5d}  "
              f"({100.0*overall['agree_line']/scored:.1f}%)  same file, lines align")
        print(f"  agree (file)  {overall['agree_file']:5d}  "
              f"({100.0*overall['agree_file']/scored:.1f}%)  same file, lines moved")
        print(f"  CONFLICT      {overall['conflict']:5d}  "
              f"({100.0*overall['conflict']/scored:.1f}%)  different source file")

    print("\nindependent shape cross-check (all pairs, pins not involved):")
    tot = sum(shape_check.values())
    for k in ("identical", "same_mnemonics", "similar_size", "size_mismatch", "unshaped"):
        if shape_check[k]:
            print(f"  {k:<16}: {shape_check[k]:5d}  ({100.0*shape_check[k]/tot:.1f}%)")

    def table(title, data, order=None):
        print(f"\n{title}")
        print(f"  {'':<15} {'line':>6} {'file':>6} {'CONFLICT':>9} {'err%':>7} {'unpinned':>9}")
        for key in (order or sorted(data, key=lambda k: -sum(data[k].values()))):
            c = data.get(key)
            if not c:
                continue
            n = c["agree_line"] + c["agree_file"] + c["conflict"]
            err = f"{100.0 * c['conflict'] / n:.1f}%" if n else "-"
            print(f"  {key:<15} {c['agree_line']:>6} {c['agree_file']:>6} "
                  f"{c['conflict']:>9} {err:>7} {c['unpinned']:>9}")

    table("by supporting signal (a pair counts under each of its signals):", by_signal)
    table("by confidence band:", by_band,
          order=["0.95+", "0.90+", "0.80+", "0.60+", "<0.60"])

    # A conflict inside a diverged TU is far less alarming than one inside an
    # identical TU, where the two builds' sources agree and a mismatch is
    # unambiguously a matcher error.
    conflicts = [v for v in verdicts if v["verdict"] == "conflict"]
    if conflicts:
        print("\nconflicts by TU class of the source-side file:")
        for tu, n in Counter(v["tu_class"] for v in conflicts).most_common():
            print(f"  {tu:<15}: {n}")

    if args.list_conflicts and conflicts:
        print(f"\nall {len(conflicts)} conflicts:")
        for v in sorted(conflicts, key=lambda v: -v["confidence"]):
            print(f"  {v['confidence']:.2f} {v['a']} -> {v['b']}  "
                  f"{sm.strip_addr_suffix(v['name'])[:56]}")
            print(f"        A={','.join(v['a_files'])}  B={','.join(v['b_files'])}")
            print(f"        {', '.join(v['evidence'])[:110]}")

    if args.out:
        with open(args.out, "w") as fh:
            json.dump({"mapping": args.mapping, "verdicts": verdicts}, fh, indent=1)
        print(f"\nwrote {args.out}", file=sys.stderr)

    return 0


if __name__ == "__main__":
    sys.exit(main())
