#!/usr/bin/env python3
"""Check each measured offset drift against the size the binary records for itself.

derive_struct_drift.py infers a shift from matched code; WatcomTypeInfo states the
class's size outright. They are independent, so agreement is real corroboration
and disagreement localises the problem:

  CONFIRMED    the drift's total shift equals the exact size delta. The layout
               correction can be applied with confidence.
  CONTRADICTED they disagree. The size is ground truth, so the drift is
               contaminated -- typically the class's methods spent more
               instructions addressing some other object than `this`.
  UNMEASURED   RTTI says the size changed but no matched method observed it.
  NO-RTTI      drift measured a shift for a class with no type info to check.

Usage:
    validate_drift_against_rtti.py drift.json
    validate_drift_against_rtti.py drift.json --only-roots
"""

import argparse
import json
import os
import sys

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))
sys.path.insert(0, os.path.dirname(os.path.realpath(__file__)))

from compare_sibling_struct_sizes import (DeltaModel, load_layouts,
                                          load_type_info_sizes, resolve_layout_alias)


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("drift")
    parser.add_argument("--from-program", default="nocedit.exe")
    parser.add_argument("--to-program", default="nocturne.exe")
    parser.add_argument("--only-roots", action="store_true",
                        help="only classes whose own fields changed")
    args = parser.parse_args()

    with open(args.drift) as handle:
        drift = json.load(handle)

    from_sizes = load_type_info_sizes(args.from_program)
    to_sizes = load_type_info_sizes(args.to_program)
    layouts, typedefs = load_layouts(args.from_program)

    truth = {}
    for name, to_size in to_sizes.items():
        layout_name = resolve_layout_alias(name, layouts, from_sizes.get(name))
        if name in from_sizes:
            truth[layout_name or name] = from_sizes[name] - to_size

    model = DeltaModel(truth, layouts, typedefs)
    for name in list(layouts) + list(truth):
        model.compute(name)

    # The drift's total shift is negative (offsets move down); the size delta is
    # positive (nocedit is bigger). Compare magnitudes.
    #
    # Take the shift the same way the spec emitter does: clip to the class's own
    # size and keep only the monotonic backbone. A raw min() over segments picks
    # up whatever global the method also touched -- that is where CDemonActor's
    # "-1000" came from, observed at offsets past 1.3M.
    from emit_struct_drift_spec import backbone

    measured = {}
    for cls, info in drift.get("drift", {}).items():
        size = layouts.get(cls, {}).get("len")     # annotation schema keys it "len"
        kept, _ = backbone(info.get("segments", []), 3, size)
        if kept:
            measured[cls] = kept[-1]["delta"]

    rows = []
    for cls in sorted(set(list(truth) + list(measured))):
        expected = truth.get(cls)
        got = measured.get(cls)
        own = model.residual.get(cls)
        if args.only_roots and not own:
            continue
        if expected is None:
            verdict = "NO-RTTI"
        elif got is None:
            verdict = "UNMEASURED" if expected else "-"
        elif -got == expected:
            verdict = "CONFIRMED"
        else:
            verdict = "CONTRADICTED"
        if verdict in ("-",):
            continue
        rows.append((verdict, cls, expected, got, own))

    order = {"CONTRADICTED": 0, "UNMEASURED": 1, "CONFIRMED": 2, "NO-RTTI": 3}
    rows.sort(key=lambda r: (order[r[0]], -abs(r[2] or 0)))

    counts = {}
    for verdict, _, _, _, _ in rows:
        counts[verdict] = counts.get(verdict, 0) + 1
    print("  ".join("%s=%d" % (k, v) for k, v in sorted(counts.items())))
    print()
    print("  %-13s %-24s %10s %10s %8s" % ("verdict", "class", "rtti", "drift", "own"))
    for verdict, cls, expected, got, own in rows:
        print("  %-13s %-24s %10s %10s %8s"
              % (verdict, cls,
                 "%+d" % expected if expected is not None else "-",
                 "%+d" % -got if got is not None else "-",
                 "%+d" % own if own else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main())
