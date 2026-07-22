#!/usr/bin/env python3
"""Assign still-unnamed functions to a translation unit from link order.

Watcom emits a program object file by object file, so a translation unit's
functions land in one contiguous stretch of the image. Measured on nocturne
after the sibling name transfer, 188 of 211 TUs occupy a *single* run -- only
the CRT fragments, because library objects get pulled in individually.

That makes the surrounding names load-bearing: an unnamed function sitting
between two `engine_2d.c` functions is almost certainly `engine_2d.c` itself.
It does not recover the function's name, but knowing the TU is most of the
value -- it says which source file to read, which `.keep` to look at, and which
subsystem the code belongs to.

Two signals, in order:

  pin       the function contains a `__FILE__`/`__LINE__` fatal-error store, so
            the binary names its own source file. Not inference at all -- this
            is ground truth, and it agreed with the transferred names on
            377 of 380 already-named functions.
  bracket   the nearest named function below and above share a TU. Checked
            against the pins on the functions where both are available:
            60 of 61 correct.

A third signal, call-graph affinity at TU boundaries, was implemented and then
removed: the same pin check scored it 2 of 5. A function calls its own TU no
more reliably than it calls its neighbours, so it was contributing assignments
at close to chance and diluting a 98%-accurate result.

Usage:
    infer_tu_membership.py                       # report
    infer_tu_membership.py --pins pins.json --out tu_map.json
"""

import argparse
import json
import os
import re
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm

# core_set.cpp_CDemonSet_lightVerticies_FUN_0050b7f0 -> core_set.cpp
TU_RE = re.compile(r"^([A-Za-z0-9]+_[A-Za-z0-9]+\.(?:cpp|c))_")


def tu_of(name):
    m = TU_RE.match(name or "")
    return m.group(1) if m else None


def tu_runs(seq):
    """Contiguous [(tu, first_addr, last_addr, count)] over named functions."""
    runs, cur = [], None
    for addr, tu, _ in seq:
        if tu is None:
            continue
        if cur and cur[0] == tu:
            cur[2], cur[3] = addr, cur[3] + 1
        else:
            if cur:
                runs.append(tuple(cur))
            cur = [tu, addr, addr, 1]
    if cur:
        runs.append(tuple(cur))
    return runs


def normalize_pin_file(path):
    """'../core/actor.cpp' -> 'core_actor.cpp', matching the name prefix form."""
    parts = path.replace("\\", "/").split("/")
    return f"{parts[-2]}_{parts[-1]}" if len(parts) >= 2 else parts[-1]


def pins_by_function(image, pins):
    """func_addr -> TU named by that function's own __FILE__ stores."""
    out = {}
    for p in pins:
        addr = image.func_containing(p["va"])
        if addr:
            out.setdefault(addr, Counter())[normalize_pin_file(p["file"])] += 1
    return {a: c.most_common(1)[0][0] for a, c in out.items()}


def infer(image, pin_tu):
    seq = [(int(f["addr"], 16), tu_of(f["name"]), f["addr"].lower())
           for f in sorted(image.functions, key=lambda f: int(f["addr"], 16))]
    known = {a: tu for a, tu, _ in seq if tu}

    results = []
    for i, (addr, tu, addr_s) in enumerate(seq):
        if tu is not None:
            continue
        rec = {"addr": addr_s, "tu": None, "how": None, "detail": ""}

        # The binary naming its own source file beats any inference.
        pinned = pin_tu.get(addr_s)
        if pinned:
            rec.update(tu=pinned, how="pin", detail="__FILE__ store in the function")
            results.append(rec)
            continue

        lo = next((seq[j] for j in range(i - 1, -1, -1) if seq[j][1]), None)
        hi = next((seq[j] for j in range(i + 1, len(seq)) if seq[j][1]), None)
        if lo and hi and lo[1] == hi[1]:
            rec.update(tu=lo[1], how="bracket",
                       detail=f"between {lo[2]} and {hi[2]}")
        elif lo and hi:
            rec.update(how="boundary", detail=f"{lo[1]} | {hi[1]}")
        else:
            rec.update(how="edge", detail="no named neighbour on one side")
        results.append(rec)
    return results, tu_runs(seq), known


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--pins", help="extract_line_pins.py output for this program; "
                                   "supplies ground-truth TUs")
    ap.add_argument("--out", help="write the inferred TU map as JSON")
    ap.add_argument("--show", type=int, default=20)
    args = ap.parse_args()

    image = sm.Image(args.program)
    pin_tu = pins_by_function(image, sm.load_pins(args.pins)) if args.pins else {}
    if args.pins:
        print(f"{len(pin_tu)} functions name their own source file via __FILE__")
    results, runs, known = infer(image, pin_tu)

    per_tu = Counter(r[0] for r in runs)
    single = sum(1 for t, n in per_tu.items() if n == 1)
    print(f"{args.program}: {len(image.functions)} functions, "
          f"{len(known)} carry a TU, {len(results)} do not")
    print(f"  {len(runs)} runs over {len(per_tu)} TUs; "
          f"{single} TUs are a single contiguous run "
          f"({100.0 * single / len(per_tu):.0f}%)")

    how = Counter(r["how"] for r in results)
    resolved = [r for r in results if r["tu"]]
    print(f"\nof the {len(results)} unnamed functions:")
    for k in ("pin", "bracket", "boundary", "edge"):
        if how[k]:
            print(f"  {k:<10}: {how[k]:>5}")
    print(f"  -> {len(resolved)} assigned to a TU "
          f"({100.0 * len(resolved) / max(1, len(results)):.0f}%)")

    gained = Counter(r["tu"] for r in resolved)
    game = {t: n for t, n in gained.items() if not t.startswith("crt_")}
    print(f"\n{sum(game.values())} land in game TUs, "
          f"{sum(gained.values()) - sum(game.values())} in crt_*")
    print(f"\ntop {args.show} TUs by functions gained:")
    for tu, n in gained.most_common(args.show):
        have = sum(1 for a, t in known.items() if t == tu)
        print(f"  {tu:<28}{n:>5} new   (had {have})")

    if args.out:
        payload = {"program": args.program,
                   "runs": [{"tu": t, "start": f"{s:08x}", "end": f"{e:08x}",
                             "functions": c} for t, s, e, c in runs],
                   "inferred": results}
        with open(args.out, "w") as fh:
            json.dump(payload, fh, indent=1)
        print(f"\nwrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
