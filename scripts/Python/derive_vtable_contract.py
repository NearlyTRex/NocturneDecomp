#!/usr/bin/env python3
# Derive a class hierarchy's vtable contract for the target build.
#
# The target's own tables are mostly unnamed -- reading the contract off
# nocturne directly yields about 8 names in 52 slots. The sibling's equivalents
# are fully named, and the two are related by a single insertion block of
# editor-only methods, so the slot alignment built for function recovery can be
# reused to carry slot MEANING across. Meaning is the part that does not depend
# on function bodies at all, which is why it transfers cleanly even where the
# code drifted.
#
# Single-inheritance vtables are prefix-structured: a derived class keeps the
# base's slot order, replaces overridden entries and appends its own. So the
# contract is "slot index -> method, plus the class that introduced it", and it
# is recovered by walking the chain from the base outwards.
#
# Slots are classified:
#   MAPPED               anchored by the mapping, or inside a gap where the
#                        delta is forced (equal length on both sides)
#   MAPPED-BY-STRUCTURE  forced by its neighbours plus the editor block being
#                        constant across the hierarchy; used only where the
#                        function is too small to shape
#   AMBIGUOUS            not forced -- reported, never guessed
#
# Usage:
#   python3 derive_vtable_contract.py --mapping verified.json \
#       --classes CDemonActor,CCharacter,CNPC,CEnemy,CHero \
#       --out-md contract.md --out-json contract.json
#
#@author NearlyTRex
#@category Annotations

import argparse
import glob
import json
import os
import re
import sys
from collections import OrderedDict

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

import sibling_match as sm
from map_vtable_slots import lcs_anchors, load_labels

REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))


def tables_by_class(img, lab):
    """g_C<Name>VTable -> the table record, keyed by <Name>."""
    out = {}
    for t in img.vtables:
        n = lab.get((t.get("addr") or "").lower())
        if n and n.startswith("g_C") and n.endswith("VTable"):
            out[n[2:-6]] = t
    return out


def method_of(img, addr):
    _, core = sm.split_qualified_name(img.by_addr.get(addr, {}).get("name", "") or "")
    if not core:
        return (None, None)
    m = re.match(r"^(C[A-Za-z0-9]+)_(.+)$", core)
    return (m.group(1), m.group(2)) if m else (None, core)


def slots_of(t):
    return [(e.get("func_addr") or "").lower() for e in t.get("functions", [])]


def align_class(cls, TA, TB, A, B, a2b):
    sa, sb = slots_of(TA[cls]), slots_of(TB[cls])
    anch = lcs_anchors([a2b.get(x) for x in sa], sb)
    amap = {j: i for i, j in anch}
    status = {}
    ext = [(-1, -1)] + anch + [(len(sa), len(sb))]
    for (i0, j0), (i1, j1) in zip(ext, ext[1:]):
        ga, gb = i1 - i0 - 1, j1 - j0 - 1
        if gb == 0:
            continue
        if ga == gb:
            for k in range(1, gb + 1):
                amap[j0 + k] = i0 + k
                status[j0 + k] = "MAPPED"
        else:
            for k in range(1, gb + 1):
                status[j0 + k] = "AMBIGUOUS"
    for j in amap:
        status.setdefault(j, "MAPPED")

    rows = []
    for j in range(len(sb)):
        i = amap.get(j)
        declarer, meth = method_of(A, sa[i]) if i is not None else (None, None)
        rows.append({"slot": j, "sibling_slot": i, "status": status.get(j, "AMBIGUOUS"),
                     "declarer": declarer, "method": meth,
                     "target_func": sb[j],
                     "params": TB[cls]["functions"][j].get("param_count")})
    used = {r["sibling_slot"] for r in rows if r["sibling_slot"] is not None}
    editor = []
    for i in range(len(sa)):
        if i not in used:
            c, m = method_of(A, sa[i])
            editor.append({"sibling_slot": i, "declarer": c, "method": m,
                           "func": sa[i]})
    return rows, editor


def resolve_by_structure(per_class, chain):
    """Fill AMBIGUOUS slots the rest of the hierarchy already agrees on.

    A slot whose neighbours anchor on both sides, and whose sibling-side gap is
    fully accounted for by the editor block that every other class shows at the
    same sibling slots, has exactly one candidate left. Used only for functions
    too small to carry a shape.
    """
    # editor block = sibling slots excluded in a majority of classes
    from collections import Counter
    blk = Counter()
    for c in chain:
        for e in per_class[c][1]:
            blk[e["sibling_slot"]] += 1
    common = {s for s, n in blk.items() if n >= max(2, len(chain) - 1)}

    fixed = 0
    for c in chain:
        rows, editor = per_class[c]
        for r in rows:
            if r["status"] != "AMBIGUOUS":
                continue
            j = r["slot"]
            prev = next((x for x in reversed(rows[:j]) if x["sibling_slot"] is not None), None)
            nxt = next((x for x in rows[j + 1:] if x["sibling_slot"] is not None), None)
            if not prev or not nxt:
                continue
            cand = [i for i in range(prev["sibling_slot"] + 1, nxt["sibling_slot"])
                    if i not in common]
            if len(cand) != 1:
                continue
            i = cand[0]
            hit = next((e for e in editor if e["sibling_slot"] == i), None)
            if hit is None:
                continue
            r.update({"sibling_slot": i, "status": "MAPPED-BY-STRUCTURE",
                      "declarer": hit["declarer"], "method": hit["method"]})
            editor.remove(hit)
            fixed += 1
    return fixed


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--mapping", required=True)
    ap.add_argument("--classes", required=True,
                    help="base-first, comma separated")
    ap.add_argument("--parents", default="",
                    help="Child=Parent,... . Without this the classes are "
                         "treated as one linear chain, which silently "
                         "misattributes sibling branches: CEnemy and CHero both "
                         "derive from CCharacter and both add their own slot 78, "
                         "so a chain lets whichever comes first claim it.")
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--out-md")
    ap.add_argument("--out-json")
    args = ap.parse_args()

    chain = [c.strip() for c in args.classes.split(",") if c.strip()]
    with open(args.mapping) as fh:
        mapping = json.load(fh)
    a2b = {p["a"].lower(): p["b"].lower() for p in mapping["pairs"]}

    A, B = sm.Image(args.from_program), sm.Image(args.program)
    TA = tables_by_class(A, load_labels(args.from_program))
    TB = tables_by_class(B, load_labels(args.program))

    missing = [c for c in chain if c not in TA or c not in TB]
    if missing:
        print("no vtable for: %s" % ", ".join(missing))
        chain = [c for c in chain if c not in missing]

    per = {c: align_class(c, TA, TB, A, B, a2b) for c in chain}
    fixed = resolve_by_structure(per, chain)

    print("=== alignment ===")
    for c in chain:
        rows, editor = per[c]
        named = sum(1 for r in rows if r["method"])
        amb = sum(1 for r in rows if r["status"] == "AMBIGUOUS")
        own = sum(1 for r in rows if r["declarer"] == c)
        print("  %-14s %3d slots  named=%-3d ambiguous=%-2d own-impl=%-3d editor-only=%d"
              % (c, len(rows), named, amb, own, len(editor)))
    if fixed:
        print("  (%d slot(s) resolved by hierarchy structure)" % fixed)

    print("\n=== editor-only methods (in %s, absent from %s) ==="
          % (args.from_program, args.program))
    for c in chain:
        ed = per[c][1]
        if ed:
            print("  %s: %s" % (c, ", ".join(
                "%s::%s" % (e["declarer"] or "?", e["method"] or "?") for e in ed)))

    parents = {}
    for bit in args.parents.split(","):
        if "=" in bit:
            k, v = bit.split("=", 1)
            parents[k.strip()] = v.strip()

    def ancestry(c):
        out = [c]
        while out[-1] in parents:
            out.append(parents[out[-1]])
        return out[::-1]                      # base-first

    def base_of(c):
        return parents.get(c)

    # A slot belongs to the base-most ancestor whose table is long enough to
    # contain it. Without the tree, two sibling branches both claiming slot 78
    # would be merged into one bogus linear contract.
    inherited = {}
    for c in chain:
        p = base_of(c)
        inherited[c] = len(per[p][0]) if p in per else 0

    md = []
    emitted = set()
    for c in chain:
        own = [r for r in per[c][0] if r["slot"] >= inherited[c]]
        if not own:
            md.append("\n### `%s` — adds no slots of its own\n" % c)
            continue
        md.append("\n### `%s` — slots %d..%d%s\n"
                  % (c, own[0]["slot"], own[-1]["slot"],
                     "" if not base_of(c) else " (on top of `%s`)" % base_of(c)))
        md.append("| slot | method | overridden by | params |")
        md.append("|---:|---|---|---:|")
        for r in own:
            # Only a DESCENDANT can override. A sibling branch that happens to
            # use the same slot index declares its own method there; calling
            # that an override would invent an inheritance link that does not
            # exist -- which is exactly how CEnemy and CHero got conflated.
            over = [d for d in chain
                    if d != c and c in ancestry(d)
                    and any(x["slot"] == r["slot"] and x["declarer"] == d
                            for x in per[d][0])]
            md.append("| %d | `%s` | %s | %s |"
                      % (r["slot"], r["method"] or "?",
                         ", ".join("`%s`" % o for o in over) or "—",
                         r["params"]))
        emitted.update(x["slot"] for x in own)
    if args.out_md:
        with open(args.out_md, "w") as fh:
            fh.write("\n".join(md) + "\n")
        print("\nwrote %s (%d distinct slots across %d classes)"
              % (args.out_md, len(emitted), len(chain)))
    if args.out_json:
        with open(args.out_json, "w") as fh:
            json.dump({c: {"target_vtable": TB[c]["addr"],
                           "sibling_vtable": TA[c]["addr"],
                           "slots": per[c][0], "editor_only": per[c][1]}
                       for c in chain}, fh, indent=1)
        print("wrote %s" % args.out_json)


if __name__ == "__main__":
    main()
