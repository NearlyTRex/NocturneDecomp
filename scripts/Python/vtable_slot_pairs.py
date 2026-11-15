#!/usr/bin/env python3
"""Pair the functions two builds' vtables hold at the same slot, for the manual ledger.

The mapping pairs a vtable's overrides by body, which fails exactly where a
body says nothing: the identical one-instruction stubs a sound device fills a
dozen slots with all match each other. Their slot says what they are. So:

  1. pair each target table with the source table it shares the most mapped
     slots with, both ways round (lcs_anchors, at least --min-anchors)
  2. align the two by LCS over those slots; a slot is placed when it is anchored
     or sits in a gap of the same length on both sides
  3. propose (source function, target function) for every placed slot where
     neither is paired yet, and keep it only if every table the target function
     appears in places it against the same source function -- an inherited
     method is placed once per derived class, so those tables check each other

and refuse a proposal when

  folded      either function fills several slots of one table: a merged stub
              is no single method
  unit        the two names disagree on the translation unit, or the target has
              none of its own -- assigned independently of the tables, so the
              check that makes a positional rule safe (map_vtable_slots.py)
  class       the target table's class is known (vtable_class_tree.py's report)
              and the source method belongs to neither it nor an ancestor
  taken       a function the mapping already pairs, or one proposed twice

A gap whose two sides differ in length holds an insertion (Blair Witch added
virtuals to several base classes) or a deletion (nocedit's editor methods).
Every way of choosing the extra slots is scored by body similarity over the
pairs it implies, summed over every table with the same gap -- the same bounds,
and the same source methods inside it, so classes sharing an interface vote
together. An insertion in a base class sits at the same index in each derived
table, which is how a table of identical stubs is placed by a sibling whose
overrides have real bodies. A choice is taken only when it beats the next by
--min-margin; otherwise its slots are counted, not proposed. Where bodies tie,
the address order decides: Watcom lays a unit out in source order.

Holdout (30% of the mapped vtable functions hidden and unnamed, 5 runs on each
Blair Witch build): 4511 of 4515 proposals right. The 4 were one pair the
mapping had wrong, CLZWDecompress::process standing in finalize's slot.

Usage:
    vtable_slot_pairs.py --mapping verified.json --out-ledger additions.json
    vtable_slot_pairs.py --mapping verified.json --out-ledger additions.json --report r.txt

#@author NearlyTRex
#@category Annotations
"""

import argparse
import json
import os
import sys
from collections import Counter, defaultdict
from itertools import combinations

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm
import watcom_type_info as wti
from report_sibling_gaps import dice, ngrams
from vtable_class_tree import folded_functions, table_slots

MIN_ANCHORS = 2
# A gap is resolved only this far apart in length, and only this long, so the
# choices stay few enough to score
MAX_EXTRA = 2
MAX_GAP = 12
MIN_MARGIN = 0.5
# What one pair of pairs in the same address order on both sides is worth
ORDER_WEIGHT = 0.25


def order_score(pairs):
    """Pairs of pairs laid out in the same address order on both sides, minus those inverted.

    Watcom emits a unit's functions in source order, so a method keeps its
    neighbours' order across builds where its body says nothing.
    """
    score = 0
    for (a1, b1), (a2, b2) in combinations(pairs, 2):
        da, db = int(a1, 16) - int(a2, 16), int(b1, 16) - int(b2, 16)
        if da and db:
            score += 1 if (da > 0) == (db > 0) else -1
    return score


def pair_tables(slots_a, slots_b, a2b, min_anchors=MIN_ANCHORS):
    """{target table: (source table, anchors)} for tables each other's best match.

    Best means the most LCS anchors, strictly more than the runner-up.
    """
    where_b = defaultdict(set)
    for tb, s in slots_b.items():
        for x in s:
            if x:
                where_b[x].add(tb)
    score = defaultdict(dict)
    for ta, sa in slots_a.items():
        mapped = [a2b.get(x) for x in sa]
        for tb in {t for x in mapped if x for t in where_b.get(x, ())}:
            anchors = sm.lcs_anchors(mapped, slots_b[tb])
            if len(anchors) >= min_anchors:
                score[tb][ta] = anchors

    def best(options):
        ranked = sorted(options.items(), key=lambda kv: -len(kv[1]))
        if len(ranked) > 1 and len(ranked[1][1]) == len(ranked[0][1]):
            return None
        return ranked[0]

    best_a = {}
    for tb, options in score.items():
        for ta, anchors in options.items():
            best_a.setdefault(ta, {})[tb] = anchors
    out = {}
    for tb, options in score.items():
        top = best(options)
        if top is None:
            continue
        ta, anchors = top
        back = best(best_a[ta])
        if back is not None and back[0] == tb:
            out[tb] = (ta, anchors)
    return out


def placed_slots(len_a, len_b, anchors):
    """([(i, j)] placed, [(i0, j0, ga, gb)] gaps whose sides differ in length).

    A gap starts after slot i0 / j0 and is ga source and gb target slots long.
    """
    placed = list(anchors)
    uneven = []
    ext = [(-1, -1)] + list(anchors) + [(len_a, len_b)]
    for (i0, j0), (i1, j1) in zip(ext, ext[1:]):
        ga, gb = i1 - i0 - 1, j1 - j0 - 1
        if ga == gb:
            placed += [(i0 + k, j0 + k) for k in range(1, gb + 1)]
        elif ga or gb:
            uneven.append((i0, j0, ga, gb))
    return sorted(placed), uneven


def gap_choices(ga, gb):
    """Every way to pair a gap's slots in order, leaving out the longer side's extras.

    Each choice is [(source offset, target offset)] within the gap; none when
    the gap is too long or too uneven to enumerate, or one side is empty.
    """
    if not ga or not gb or abs(ga - gb) > MAX_EXTRA or max(ga, gb) > MAX_GAP:
        return []
    out = []
    if gb > ga:
        for extra in combinations(range(gb), gb - ga):
            out.append(list(zip(range(ga), [j for j in range(gb) if j not in extra])))
    else:
        for extra in combinations(range(ga), ga - gb):
            out.append(list(zip([i for i in range(ga) if i not in extra], range(gb))))
    return out


def method_of(name):
    """The method part of a `[unit_][Class_]method_FUN_addr` name, else None."""
    _, core = sm.split_qualified_name(name or "")
    if not core:
        return None
    return core.split("_", 1)[1] if class_of(name) else core


class Similarity:
    """Body similarity of a source and a target function: Dice of mnemonic n-grams, cached."""

    def __init__(self, img_a, img_b):
        self.imgs = {"a": img_a, "b": img_b}
        self.grams = {}

    def _grams(self, side, addr):
        key = (side, addr)
        if key not in self.grams:
            img = self.imgs[side]
            rec = img.by_addr.get(addr)
            shape = sm.compute_shape(img, rec) if rec else None
            self.grams[key] = ngrams(shape.mnemonics) if shape else None
        return self.grams[key]

    def __call__(self, a, b):
        ga, gb = self._grams("a", a), self._grams("b", b)
        if ga is None or gb is None:
            return 0.0
        return dice(ga, gb) or 0.0


class Edits:
    """What the resolved gaps say was inserted into the target and dropped from the source.

    An insertion is (target slot, source method before it, source method after
    it): the same new virtual sits at the same index between the same two
    methods in every class below the one that gained it. A deletion is (source
    slot, its method). Both are keyed on names so an unrelated class that merely
    shares the indices learns nothing from them.
    """

    def __init__(self):
        self.new, self.dropped = set(), set()

    def learn(self, method, sa, i0, j0, ga, gb, choice):
        """Record one gap's extras, `choice` pairing its slots ([(x, y)] offsets)."""
        paired_x, paired_y = {x for x, _ in choice}, {y for _, y in choice}
        for x in range(ga):
            if x not in paired_x and method(sa, i0 + 1 + x):
                self.dropped.add((i0 + 1 + x, method(sa, i0 + 1 + x)))
        for y in range(gb):
            if y in paired_y:
                continue
            before = [x for x, yy in choice if yy < y]
            x_prev = before[-1] if before else -1
            self.new.add((j0 + 1 + y, method(sa, i0 + 1 + x_prev), method(sa, i0 + 2 + x_prev)))

    def walk(self, method, sa, i0, j0, ga, gb):
        """Pair a gap's slots in order around the known extras, or None if it does not come out even."""
        x = y = 0
        pairs = []
        while x < ga or y < gb:
            if y < gb and (j0 + 1 + y, method(sa, i0 + x), method(sa, i0 + 1 + x)) in self.new:
                y += 1
            elif x < ga and (i0 + 1 + x, method(sa, i0 + 1 + x)) in self.dropped:
                x += 1
            elif x < ga and y < gb:
                pairs.append((x, y))
                x += 1
                y += 1
            else:
                return None
        return pairs


def resolve_gaps(gaps, slots_a, slots_b, img_a, similarity, min_margin=MIN_MARGIN, rounds=3):
    """[(i, j)] per target table, from the uneven gaps that can be settled.

    `gaps` is [(target table, source table, (i0, j0, ga, gb))]. A gap with one
    side empty settles itself: all of the longer side is new or dropped. The
    rest are grouped by their target bounds and the source methods inside them,
    and a group whose best choice by body similarity wins by `min_margin` takes
    it. Every settled gap teaches its extras (Edits), and the gaps still open
    are walked with them, so one class's overrides place another's stubs.
    """
    def method(sa, i):
        if 0 <= i < len(sa) and sa[i]:
            return method_of((img_a.by_addr.get(sa[i]) or {}).get("name"))
        return None

    edits = Edits()
    out = defaultdict(list)
    open_gaps = []
    for tb, ta, g in gaps:
        i0, j0, ga, gb = g
        if not ga or not gb:
            edits.learn(method, slots_a[ta], i0, j0, ga, gb, [])
        else:
            open_gaps.append((tb, ta, g))

    groups = defaultdict(list)
    for tb, ta, (i0, j0, ga, gb) in open_gaps:
        methods = tuple(method(slots_a[ta], i0 + 1 + k) for k in range(ga))
        groups[(j0, ga, gb, methods)].append((tb, ta, i0, j0))
    settled = set()
    for (_, ga, gb, _), members in groups.items():
        choices = gap_choices(ga, gb)
        totals = []
        for choice in choices:
            total = 0.0
            for tb, ta, i0, j0 in members:
                pairs = [(slots_a[ta][i0 + 1 + x], slots_b[tb][j0 + 1 + y]) for x, y in choice
                         if slots_a[ta][i0 + 1 + x] and slots_b[tb][j0 + 1 + y]]
                total += sum(similarity(a, b) for a, b in pairs) + ORDER_WEIGHT * order_score(pairs)
            totals.append(total)
        ranked = sorted(range(len(choices)), key=lambda c: -totals[c])
        if not ranked or (len(ranked) > 1 and totals[ranked[0]] - totals[ranked[1]] < min_margin):
            continue
        for tb, ta, i0, j0 in members:
            out[tb] += [(i0 + 1 + x, j0 + 1 + y) for x, y in choices[ranked[0]]]
            edits.learn(method, slots_a[ta], i0, j0, ga, gb, choices[ranked[0]])
            settled.add((tb, i0, j0))

    for _ in range(rounds):
        progressed = False
        for tb, ta, (i0, j0, ga, gb) in open_gaps:
            if (tb, i0, j0) in settled:
                continue
            pairs = edits.walk(method, slots_a[ta], i0, j0, ga, gb)
            if pairs is None:
                continue
            out[tb] += [(i0 + 1 + x, j0 + 1 + y) for x, y in pairs]
            edits.learn(method, slots_a[ta], i0, j0, ga, gb, pairs)
            settled.add((tb, i0, j0))
            progressed = True
        if not progressed:
            break
    unresolved = sum(gb for tb, _, (i0, j0, _, gb) in open_gaps if (tb, i0, j0) not in settled)
    return out, unresolved


def class_of(name):
    """The class a `[unit_]Class_method_FUN_addr` name assigns, else None."""
    _, core = sm.split_qualified_name(name or "")
    if not core or "_" not in core:
        return None
    cls = core.split("_", 1)[0]
    return cls if cls[:1] in ("C", "S") and cls[1:2].isupper() else None


def ancestors(hierarchy, cls):
    """cls and every class above it, in the target's recovered hierarchy."""
    out, seen = [], set()
    while cls and cls not in seen:
        out.append(cls)
        seen.add(cls)
        cls = hierarchy.get(cls)
    return out


def load_hierarchy(program):
    """(table -> class, class -> parent class) from vtable_class_tree.py's report, or empty."""
    path = os.path.join(sm.ANNOTATIONS, program, "reports", "class_hierarchy.json")
    try:
        with open(path, encoding="utf-8") as fh:
            rows = json.load(fh)["tables"]
    except OSError:
        return {}, {}
    table_class = {r["table"]: r["class"] for r in rows if r.get("class")}
    parents = {r["class"]: r["parent_class"] for r in rows if r.get("class") and r.get("parent_class")}
    return table_class, parents


def propose(img_a, img_b, mapping, table_class=None, parents=None, min_anchors=MIN_ANCHORS,
            min_margin=MIN_MARGIN, similarity=None):
    """-> (accepted [(a, b, note)], refused Counter, stats dict)."""
    table_class, parents = table_class or {}, parents or {}
    similarity = similarity or Similarity(img_a, img_b)
    pairs = [p for p in mapping["pairs"] if not p.get("ambiguous")]
    a2b = {p["a"].lower(): p["b"].lower() for p in pairs}
    b2a = {b: a for a, b in a2b.items()}
    slots_a, slots_b = table_slots(img_a), table_slots(img_b)
    folded_a, folded_b = folded_functions(slots_a), folded_functions(slots_b)
    matched = pair_tables(slots_a, slots_b, a2b, min_anchors)

    placed_by_table, uneven = {}, []
    for tb, (ta, anchors) in matched.items():
        placed, gaps = placed_slots(len(slots_a[ta]), len(slots_b[tb]), anchors)
        placed_by_table[tb] = placed
        uneven += [(tb, ta, g) for g in gaps]
    from_gaps, unplaced = resolve_gaps(uneven, slots_a, slots_b, img_a, similarity, min_margin)

    seen = defaultdict(set)              # target function -> source functions it was placed against
    where = defaultdict(list)            # target function -> (target table, source table, slot)
    for tb, (ta, _) in matched.items():
        sa, sb = slots_a[ta], slots_b[tb]
        for i, j in placed_by_table[tb] + from_gaps.get(tb, []):
            a, b = sa[i], sb[j]
            if a and b:
                seen[b].add(a)
                where[b].append((tb, ta, j))

    refused = Counter()
    accepted = []
    used_a = Counter(next(iter(s)) for b, s in seen.items() if len(s) == 1)
    for b in sorted(seen):
        if b in b2a:
            continue
        if len(seen[b]) != 1:
            refused["inconsistent"] += 1
            continue
        a = next(iter(seen[b]))
        if a in a2b or used_a[a] > 1:
            refused["taken"] += 1
            continue
        if a in folded_a or b in folded_b:
            refused["folded"] += 1
            continue
        name_a = (img_a.by_addr.get(a) or {}).get("name") or ""
        name_b = (img_b.by_addr.get(b) or {}).get("name") or ""
        _, core_a = sm.split_qualified_name(name_a)
        _, core_b = sm.split_qualified_name(name_b)
        if not core_a or core_b:
            refused["named"] += 1
            continue
        unit_a, unit_b = sm.tu_of(name_a), sm.tu_of(name_b)
        if not unit_b or unit_a != unit_b:
            refused["unit"] += 1
            continue
        cls = class_of(name_a)
        known = [table_class[tb] for tb, _, _ in where[b] if tb in table_class]
        if cls and known and not any(wti.type_name(cls) in [wti.type_name(c) for c in ancestors(parents, k)]
                                     for k in known):
            refused["class"] += 1
            continue
        tb, ta, j = where[b][0]
        note = "%s. vtable %s slot %d, as %s's; %d table(s) agree%s." % (
            core_a, tb, j, ta, len(where[b]), ", class checked" if cls and known else "")
        accepted.append((a, b, note))
    stats = {"tables_paired": len(matched), "unplaced_slots": unplaced, "accepted": len(accepted),
             "gap_slots_placed": sum(len(v) for v in from_gaps.values())}
    return accepted, refused, stats


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--mapping", required=True, help="the verified mapping, source -> target")
    ap.add_argument("--out-ledger", required=True, help="sibling_manual_pairs.json-shaped additions")
    ap.add_argument("--report", help="also write every proposal, one per line")
    ap.add_argument("--min-anchors", type=int, default=MIN_ANCHORS)
    ap.add_argument("--min-margin", type=float, default=MIN_MARGIN,
                    help="how far an uneven gap's best choice must beat the next")
    args = ap.parse_args(argv)

    with open(args.mapping, encoding="utf-8") as fh:
        mapping = json.load(fh)
    src, dst = mapping.get("from", "nocedit.exe"), mapping["to"]
    table_class, parents = load_hierarchy(dst)
    accepted, refused, stats = propose(sm.Image(src), sm.Image(dst), mapping, table_class, parents,
                                       args.min_anchors, args.min_margin)
    print("%d table pair(s); %d slot(s) placed from uneven gaps, %d left unplaced" % (
        stats["tables_paired"], stats["gap_slots_placed"], stats["unplaced_slots"]))
    print("%d pair(s) proposed; refused: %s" % (
        len(accepted), ", ".join("%s %d" % kv for kv in sorted(refused.items())) or "none"))
    if not table_class:
        print("(no class_hierarchy.json for %s: the class check was skipped)" % dst)
    with open(args.out_ledger, "w", encoding="utf-8") as fh:
        json.dump({"schema": 1, "from": src, "to": dst, "pairs": [{"a": a, "b": b, "note": note} for a, b, note in accepted]}, fh, indent=1)
    print("wrote %s" % args.out_ledger)
    if args.report:
        with open(args.report, "w", encoding="utf-8") as fh:
            fh.write("".join("%s %s  %s\n" % p for p in accepted))
        print("wrote %s" % args.report)


if __name__ == "__main__":
    main()
