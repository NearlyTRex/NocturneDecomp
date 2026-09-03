#!/usr/bin/env python3
"""Recover sibling function pairs that name-based anchoring cannot see.

make_sibling_anchors.py pairs a nocedit function with a nocturne one only when the
base name is unique on BOTH sides.  Anything still unnamed in nocturne.exe is
therefore invisible to it -- roughly 1900 functions -- and those were never compared
by diff_functions.py at all.  CDemonSet::renderScene (d=0.449) and
CBoundingBox3D::isVisibleWithCamera (d=0.738, 447 B vs 1023 B, the mirror
actor-reflection root cause) both hid in that gap for several sessions.

Watcom emits functions in source order within one object file, so per-TU
address-sorted lists correspond.  Existing anchors are fixed points; the runs
between consecutive fixed points are then resolved two ways:

  positional  the run has the same length on both sides -> pair by position.
  size        the run lengths disagree, but some function's byte size occurs
              exactly once on each side of that run -> pair those.

Both are conjectures from *layout*.  Every candidate is then corroborated against
raw PE bytes by diff_functions.py, which is independent evidence: a pair whose
reloc-masked bodies come back identical / layout-drift / operand-change /
const-change is almost certainly the same function.  Pairs that fail that check are
written to a separate review file rather than into the mapping.

Output is `sibling_manual_pairs.json` schema, so the pairs flow through the normal
gated pipeline (map_sibling_functions -> validate -> verify_sibling_signatures ->
wall_off_crt -> apply_sibling_annotations) instead of bypassing it.

Usage:
    tu_anchor.py --anchors /tmp/anchors.json --out-dir /tmp/tu
    # then corroborate and emit:
    tu_anchor.py --anchors /tmp/anchors.json --out-dir /tmp/tu --diff /tmp/tu/diff.json
"""
import argparse
import glob
import json
import os
import re
import sys

FUN = re.compile(r"_FUN_([0-9a-fA-F]+)$")
# Body shapes that corroborate a layout conjecture. logic-change is deliberately
# excluded: it is exactly what a WRONG pairing also looks like.
PROVEN = ("identical", "layout-drift", "operand-change", "const-change")


def tu_map(root):
    """tu -> [(addr:int, stem)] sorted by address."""
    out = {}
    for d in sorted(glob.glob(os.path.join(root, "src", "*", "*"))):
        if not os.path.isdir(d):
            continue
        tu = "/".join(d.split("/")[-2:])
        rows = set()
        for f in glob.glob(os.path.join(d, "*.json")):
            stem = os.path.basename(f)[:-5]
            m = FUN.search(stem)
            if m:
                rows.add((int(m.group(1), 16), stem))
        if rows:
            out[tu] = sorted(rows)
    return out


def sizes(funcs_dir):
    """lowercase entry addr -> total body size in bytes."""
    out = {}
    for path in sorted(glob.glob(os.path.join(funcs_dir, "*.json"))):
        try:
            recs = json.load(open(path))
        except Exception:
            continue
        if not isinstance(recs, list):
            continue
        for rec in recs:
            if isinstance(rec, dict) and rec.get("addr"):
                out[rec["addr"].lower()] = sum(int(b.get("size", 0))
                                               for b in rec.get("body") or [])
    return out


def resolve_run(A, B, ia, ja, ib, jb, sz_a, sz_b):
    """Pair the open runs A(ia..ja) and B(ib..jb). Yields (idx_a, idx_b, method)."""
    run_a = list(range(ia + 1, ja))
    run_b = list(range(ib + 1, jb))
    if not run_a or not run_b:
        return
    if len(run_a) == len(run_b):
        for ka, kb in zip(run_a, run_b):
            yield ka, kb, "positional"
        return
    # Lengths disagree -- fall back to sizes that are unique within the run.
    from collections import Counter
    ca = Counter(sz_a.get("%08x" % A[k][0], -1) for k in run_a)
    cb = Counter(sz_b.get("%08x" % B[k][0], -2) for k in run_b)
    for ka in run_a:
        s = sz_a.get("%08x" % A[ka][0], -1)
        if s <= 0 or ca[s] != 1 or cb.get(s) != 1:
            continue
        kb = next(k for k in run_b if sz_b.get("%08x" % B[k][0]) == s)
        yield ka, kb, "size"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--anchors", required=True,
                    help="make_sibling_anchors.py output (the fixed points)")
    ap.add_argument("--from-root", default="annotations/nocedit.exe/pseudocode")
    ap.add_argument("--to-root", default="annotations/nocturne.exe/pseudocode")
    ap.add_argument("--from-funcs", default="annotations/nocedit.exe/functions")
    ap.add_argument("--to-funcs", default="annotations/nocturne.exe/functions")
    ap.add_argument("--out-dir", required=True)
    ap.add_argument("--diff", help="diff_functions.py --json output over the "
                                   "candidates; enables corroboration + emit")
    ap.add_argument("--tu", nargs="*", help="restrict to these TUs")
    ap.add_argument("--drift-ratio", type=float, default=1.5,
                    help="accept a logic-change pair as source drift when the two "
                         "bodies are within this size ratio (default 1.5). Above it, "
                         "a wrong pairing and a rewritten function look the same, so "
                         "the pair is held for review instead.")
    ap.add_argument("--reviewed",
                    default="annotations/nocturne.exe/tu_anchor_reviewed.json",
                    help="hand adjudications for held pairs (accept/reject). The "
                         "size-ratio gate cannot separate a rewrite from a "
                         "mispairing; this is where a body-reading verdict lives.")
    ap.add_argument("--merge",
                    default="annotations/nocturne.exe/sibling_manual_pairs.json",
                    help="existing manual-pairs file to merge into (collisions are "
                         "reported and the existing entry wins)")
    args = ap.parse_args()

    a, b = tu_map(args.from_root), tu_map(args.to_root)
    sz_a, sz_b = sizes(args.from_funcs), sizes(args.to_funcs)
    known = {int(r["nocedit"], 16): int(r["nocturne"], 16)
             for r in json.load(open(args.anchors))}

    cands, dropped = [], 0
    for tu in (args.tu or sorted(set(a) & set(b))):
        if tu not in a or tu not in b:
            continue
        A, B = a[tu], b[tu]
        bidx = {addr: i for i, (addr, _) in enumerate(B)}
        fixed = sorted((i, bidx[known[addr]]) for i, (addr, _) in enumerate(A)
                       if addr in known and known[addr] in bidx)
        bounds = [(-1, -1)] + fixed + [(len(A), len(B))]
        for (ia, ib), (ja, jb) in zip(bounds, bounds[1:]):
            got = list(resolve_run(A, B, ia, ja, ib, jb, sz_a, sz_b))
            dropped += (ja - ia - 1) - len(got)
            for ka, kb, how in got:
                cands.append({"a": "%08x" % A[ka][0], "b": "%08x" % B[kb][0],
                              "name": A[ka][1], "tu": tu, "method": how})

    os.makedirs(args.out_dir, exist_ok=True)
    # diff_functions.py wants [{"nocedit": "0x..", "nocturne": "0x.."}]
    with open(os.path.join(args.out_dir, "candidates_anchors.json"), "w") as fh:
        json.dump([{"nocedit": "0x" + c["a"], "nocturne": "0x" + c["b"]}
                   for c in cands], fh, indent=1)
    with open(os.path.join(args.out_dir, "candidates.json"), "w") as fh:
        json.dump(cands, fh, indent=1)
    by_m = {}
    for c in cands:
        by_m[c["method"]] = by_m.get(c["method"], 0) + 1
    print("candidates: %d (%s); %d unresolved"
          % (len(cands), ", ".join("%s %d" % kv for kv in sorted(by_m.items())), dropped))

    if not args.diff:
        print("\nnow corroborate against raw PE bytes:")
        print("  python3 scripts/Python/diff_functions.py nocedit.exe nocturne.exe \\")
        print("      %s/candidates_anchors.json \\" % args.out_dir)
        print("      --funcs-a %s --funcs-b %s \\" % (args.from_funcs, args.to_funcs))
        print("      --json %s/diff.json --show all" % args.out_dir)
        print("then re-run this with --diff %s/diff.json" % args.out_dir)
        return

    reviewed = {}
    if args.reviewed and os.path.exists(args.reviewed):
        doc = json.load(open(args.reviewed))
        reviewed = {e["a"].lower(): e for e in doc.get("entries", [])}
        print("reviewed overrides: %d" % len(reviewed))

    diff = json.load(open(args.diff))
    dl = {k.lower().replace("0x", "").zfill(8): v for k, v in diff.items()}
    ok, review = [], []
    for c in cands:
        d = dl.get(c["a"])
        if not d:
            c["verdict"], c["why"] = "NO-DIFF", "not compared"
            review.append(c)
            continue
        c["class"], c["distance"] = d["class"], d["distance"]
        c["size_a"], c["size_b"] = d["size_a"], d["size_b"]
        lo, hi = sorted((max(1, d["size_a"]), max(1, d["size_b"])))
        c["ratio"] = hi / lo
        rv = reviewed.get(c["a"])
        if rv and rv.get("b", "").lower() not in ("", c["b"]):
            rv = None            # adjudication is for a different pairing
        if rv and rv.get("status") == "reject":
            c["verdict"], c["why"] = "REJECTED", rv.get("note", "")
            review.append(c)
        elif rv and rv.get("status") == "accept":
            c["verdict"] = "REVIEWED"
            ok.append(c)
        elif d["class"] in PROVEN:
            c["verdict"] = "CORROBORATED"
            ok.append(c)
        elif c["tu"].startswith("crt/"):
            # wall_off_crt.py leaves the runtime interior anonymous by design.
            c["verdict"], c["why"] = "REVIEW", "CRT interior: walled off by policy"
            review.append(c)
        elif c["ratio"] <= args.drift_ratio:
            # Same function, source drifted between builds. A wrong pairing this
            # close in size, in the right TU slot, between two verified anchors,
            # is not a shape the layout conjecture produces.
            c["verdict"] = "DRIFT"
            ok.append(c)
        else:
            c["verdict"] = "REVIEW"
            c["why"] = ("%s d=%.3f %d/%d (%.1fx) -- too far apart to tell a rewrite "
                        "from a mispairing" % (d["class"], d["distance"],
                                               d["size_a"], d["size_b"], c["ratio"]))
            review.append(c)

    def note_for(c):
        if c["verdict"] == "CORROBORATED":
            how = "corroborated by reloc-masked bytes"
        elif c["verdict"] == "REVIEWED":
            how = "accepted on review of both bodies (see tu_anchor_reviewed.json)"
        else:
            how = ("bodies drifted but sizes agree (%.2fx), so the slot is sound"
                   % c["ratio"])
        return ("%s. TU-%s anchor in %s between verified neighbours; %s: %s d=%.3f "
                "(%d/%d B)." % (c["name"], c["method"], c["tu"], how,
                                c["class"], c["distance"], c["size_a"], c["size_b"]))

    new = {c["a"]: {"a": c["a"], "b": c["b"], "note": note_for(c)} for c in ok}
    merged, collide = [], []
    if args.merge and os.path.exists(args.merge):
        doc = json.load(open(args.merge))
        for rec in doc.get("pairs", []):
            merged.append(rec)
            a, b = rec["a"].lower(), rec["b"].lower()
            if a in new:
                if new[a]["b"] != b:
                    collide.append((a, b, new[a]["b"]))
                del new[a]
        # an address may appear once on EITHER side
        taken_b = {r["b"].lower() for r in merged}
        for a in [a for a, r in new.items() if r["b"] in taken_b]:
            collide.append((a, "<b already used>", new[a]["b"]))
            del new[a]
    merged.extend(new.values())
    merged.sort(key=lambda r: r["a"])
    with open(os.path.join(args.out_dir, "sibling_manual_pairs.json"), "w") as fh:
        json.dump({"schema": 1, "from": "nocedit.exe", "to": "nocturne.exe",
                   "pairs": merged}, fh, indent=1)
    if collide:
        print("collisions with the existing file (existing entry kept): %d" % len(collide))
        for a, b_old, b_new in collide[:10]:
            print("   %s -> existing %s, proposed %s" % (a, b_old, b_new))
    with open(os.path.join(args.out_dir, "needs_review.json"), "w") as fh:
        json.dump(sorted(review, key=lambda c: -c.get("distance", 0)), fh, indent=1)
    from collections import Counter
    tally = Counter(c["verdict"] for c in ok)
    print("accepted %d (%s), %d new"
          % (len(ok), ", ".join("%s %d" % (k.lower(), v) for k, v in sorted(tally.items())),
             len(new)))
    print("merged file (%d pairs) -> %s/sibling_manual_pairs.json"
          % (len(merged), args.out_dir))
    print("needs review %d  -> %s/needs_review.json" % (len(review), args.out_dir))


if __name__ == "__main__":
    main()
