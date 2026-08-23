#!/usr/bin/env python3
"""Build a diff_functions.py anchor file by matching function names across builds.

`annotations/nocturne.exe/sibling_manual_pairs.json` holds 274 hand-forced pairs.
That is far fewer than the mapping we actually have: the sibling name transfer
already put nocedit's names on most of nocturne's functions in Ghidra, so any
base name (the symbol minus its `_FUN_<addr>` suffix) that occurs exactly once
on each side is a pair. That yields ~5000.

Uniqueness on BOTH sides is the whole safety property here. A base name that
appears twice in one build is ambiguous and is dropped rather than guessed, so
the output is a conservative subset, not a best-effort alignment.

Usage:
    make_sibling_anchors.py --out /tmp/anchors.json
    diff_functions.py nocedit.exe nocturne.exe /tmp/anchors.json \\
        --funcs-a annotations/nocedit.exe/functions \\
        --funcs-b annotations/nocturne.exe/functions \\
        --json /tmp/sibdiff.json

Note that a name match is not proof the bodies correspond — the transfer itself
can be wrong. diff_functions.py surfaces those as wildly mismatched sizes (a
2175-byte function paired against an 11-byte stub); treat large size ratios in
the `logic-change` bucket as suspect pairings, not as findings.
"""

import argparse
import glob
import json
import os
import re
import sys

FUN_SUFFIX = re.compile(r"_FUN_[0-9a-fA-F]+$")


def load_named(funcs_dir):
    """base name -> [addr, ...] for every non-placeholder function."""
    out = {}
    for path in sorted(glob.glob(os.path.join(funcs_dir, "*.json"))):
        try:
            recs = json.load(open(path))
        except Exception as exc:
            print(f"  skip {os.path.basename(path)}: {exc}", file=sys.stderr)
            continue
        if not isinstance(recs, list):
            continue  # functions_buckets.json is an index, not a bucket
        for rec in recs:
            if not isinstance(rec, dict):
                continue
            name = rec.get("name", "")
            if not name or name.startswith("FUN_") or name.startswith("thunk_"):
                continue
            out.setdefault(FUN_SUFFIX.sub("", name), []).append(rec["addr"])
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--funcs-a", default="annotations/nocedit.exe/functions")
    ap.add_argument("--funcs-b", default="annotations/nocturne.exe/functions")
    ap.add_argument("--key-a", default="nocedit", help="field name for the A side")
    ap.add_argument("--key-b", default="nocturne", help="field name for the B side")
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    a = load_named(args.funcs_a)
    b = load_named(args.funcs_b)

    pairs, ambiguous = [], 0
    for base, addrs_a in sorted(a.items()):
        addrs_b = b.get(base)
        if addrs_b is None:
            continue
        if len(addrs_a) != 1 or len(addrs_b) != 1:
            ambiguous += 1
            continue
        pairs.append({args.key_a: "0x" + addrs_a[0], args.key_b: "0x" + addrs_b[0]})

    json.dump(pairs, open(args.out, "w"))
    print(f"{args.key_a}: {len(a)} named bases")
    print(f"{args.key_b}: {len(b)} named bases")
    print(f"unique 1-to-1 pairs: {len(pairs)}  (dropped {ambiguous} ambiguous)")
    print(f"wrote {args.out}")


if __name__ == "__main__":
    main()
