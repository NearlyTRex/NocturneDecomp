#!/usr/bin/env python3
"""What the sibling mapping did NOT match, and why -- a manual-pairing worklist.

`sibling_verified_mapping.json` records what was matched. This reports the
complement: the functions left over on each side, grouped so that the ones a
human can actually resolve are separated from the ones that are genuinely
absent.

The mapper never matches by name. Every signal it has -- shape, self-identifying
strings, vtable slots, call sequences, source order -- is derived from the two
binaries' bytes and layout, so a function whose BODY WAS EDITED between the
builds can only be matched by `prop_order`, which needs two anchors bracketing
it and the same number of unmatched functions on both sides of the bracket.
When an edit added or removed a function inside the same bracket, that test
fails and the whole bracket is abandoned -- correctly, since position no longer
determines which is which, but the functions in it are usually still obvious to
a person looking at three candidates against two.

Those brackets are the worklist. Sections:

  A. TU RESIDUE     per translation unit, how much is left over on each side.
                    Residue on BOTH sides in the same unit is the pairable
                    case; residue on one side only is an added/removed
                    subsystem.
  B. BRACKETS       every unresolved bracket, with the reason the order pass
                    refused it and a shape-based suggested alignment of the
                    residue. This is the list to work through.
  C. DRIFT          matched pairs whose declared signatures differ, split by
                    whether the target was ever given a signature at all.
                    `audit_transferred_signatures.py --mapping` reports the
                    same set as one number; the split is what makes it
                    actionable, because ~4/5 of it is untransferred rather
                    than divergent.

Pairs proposed here are NOT applied. Record the ones you confirm in the manual
pair ledger (see `--emit-ledger`), which map_sibling_functions.py reads as a
top-priority signal, then re-run refresh_sibling_mapping.py: a confirmed pair
also becomes an anchor, so it typically resolves neighbours for free.

Usage:
    report_sibling_gaps.py                      # full report
    report_sibling_gaps.py --tu core_fire.cpp   # one translation unit
    report_sibling_gaps.py --section b --show 0 # every bracket, nothing elided
    report_sibling_gaps.py --emit-ledger /tmp/manual_pairs.json
    report_sibling_gaps.py --out /tmp/gaps.json

@category Annotations
"""

import argparse
import bisect
import json
import os
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm
from map_sibling_functions import bracket_aligns, longest_increasing, shape_agreement

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def canonical_mapping(to_prog):
    return os.path.join(REPO, "annotations", to_prog, "reports",
                        "sibling_verified_mapping.json")


# --------------------------------------------------------------------------
# Small helpers
# --------------------------------------------------------------------------

def short(name):
    """Drop the `_FUN_<addr>` suffix; keep a placeholder recognisable."""
    return sm.strip_addr_suffix(name or "") or "<unnamed>"


def core_of(name):
    return sm.split_qualified_name(name)[1]


def extent(func):
    """Total bytes covered by a function's body fragments."""
    total = 0
    for b in (func or {}).get("body", []) or []:
        try:
            total += int(b["end"], 16) - int(b["start"], 16) + 1
        except (KeyError, ValueError):
            continue
    return total


def describe(img, addr, shapes):
    sh = shapes.get(addr)
    func = img.by_addr.get(addr) or {}
    size = sh.nbytes if sh else extent(func)
    insn = f"{sh.ninsn:4d}i" if sh else "   ?i"
    return f"{addr} {size:5d}b {insn}  {short(func.get('name'))}"


MIN_FAMILY = 3   # a family this size vanishing wholesale is a build decision


def absent_families(a_img, b_img):
    """Classes and method categories present in A but wholly absent from B.

    Whole families get compiled out of the game build -- the entire CZThumb
    class (10 methods) and the editor-API categories (getPropertyList x96,
    addFilesToExtract x84, processInEditor, showEditorHelp) have ZERO
    instances in nocturne. Inside a bracket those functions are noise: they
    inflate A's residue and stop the counts ever balancing, so the order pass
    refuses a region whose survivors are otherwise forced.

    Only a family that disappears ENTIRELY counts, and only above MIN_FAMILY.
    One missing function means "not named yet" -- nocturne is far from fully
    named -- while a class of ten going to zero is a build decision.
    """
    def tally(img):
        cls, meth = Counter(), Counter()
        for f in img.by_addr.values():
            c = core_of(f.get("name"))
            if not c or "_" not in c:
                continue
            k, m = c.split("_", 1)
            cls[k] += 1
            meth[m.rsplit("_", 1)[-1]] += 1
        return cls, meth
    ca, ma = tally(a_img)
    cb, mb = tally(b_img)
    gone_cls = {k for k, n in ca.items() if n >= MIN_FAMILY and cb.get(k, 0) == 0}
    gone_meth = {k for k, n in ma.items() if n >= MIN_FAMILY and mb.get(k, 0) == 0}
    return gone_cls, gone_meth


def in_absent_family(img, addr, gone_cls, gone_meth):
    c = core_of((img.by_addr.get(addr) or {}).get("name"))
    if not c or "_" not in c:
        return False
    k, m = c.split("_", 1)
    return k in gone_cls or m.rsplit("_", 1)[-1] in gone_meth


def suggest(a_img, b_img, shapes_a, shapes_b, gap_a, gap_b, absent=None):
    """Greedily align two residue lists.

    Deliberately weaker than anything the mapper would commit on: this is a
    hint for a human reading the two lists side by side, not evidence.

    Name agreement leads, because it is the one signal the mapper structurally
    cannot use -- it matches on bytes and layout only, so two functions already
    carrying the same `<Class>_<method>` core in both builds are invisible to
    it however obvious they are to a reader. It is also the signal that
    survives an edited body, which is exactly the case that lands here.

    Then strict shape (byte-identical once relocations are masked, so only
    source order kept them apart), then mnemonic equality, then position for a
    residue too small to hash. Nearest-size guessing is reported as UNSURE and
    never as a pair: a 24-instruction function is not the counterpart of a
    3-byte stub just because nothing better is left.
    """
    rows, taken = [], set()
    claimed_a = set()

    def claim(x, y, why):
        taken.add(y)
        claimed_a.add(x)
        rows.append((x, y, why))

    core_b = defaultdict(list)
    for y in gap_b:
        c = core_of((b_img.by_addr.get(y) or {}).get("name"))
        if c:
            core_b[c].append(y)
    for x in gap_a:
        c = core_of((a_img.by_addr.get(x) or {}).get("name"))
        if c and len(core_b.get(c, ())) == 1 and core_b[c][0] not in taken:
            claim(x, core_b[c][0], "name core")

    for tier in ("strict", "relaxed"):
        for x in gap_a:
            if x in claimed_a:
                continue
            sx = shapes_a.get(x)
            if sx is None:
                continue
            hits = [y for y in gap_b if y not in taken
                    and shapes_b.get(y) is not None
                    and getattr(shapes_b[y], tier) == getattr(sx, tier)]
            if len(hits) == 1:
                claim(x, hits[0], "identical" if tier == "strict" else "same mnemonics")

    # Whatever is left, in order. Only offered as a pair when neither side has
    # a hashable body -- there the residue is a run of stubs and position is
    # genuinely all there is.
    rest_a = [x for x in gap_a if x not in claimed_a]
    rest_b = [y for y in gap_b if y not in taken]

    # Drop A-side leftovers belonging to a family the other build does not have
    # at all, then see whether the survivors balance. This is what rescued
    # nocturne 00511d80: 15 nocedit functions vs 1, of which 13 were CZThumb --
    # a class with zero instances in the game build. Stripping them leaves
    # testCameraVisibility opposite it, which is the correct pair and which the
    # order pass had refused on the raw counts.
    if absent and len(rest_a) != len(rest_b):
        kept = [x for x in rest_a if not in_absent_family(a_img, x, *absent)]
        if len(kept) == len(rest_b) and kept:
            for x, y in zip(kept, rest_b):
                claim(x, y, "position after absent-family strip")
            return rows, [], []

    if rest_a and len(rest_a) == len(rest_b) and all(
            shapes_a.get(x) is None and shapes_b.get(y) is None
            for x, y in zip(rest_a, rest_b)):
        for x, y in zip(rest_a, rest_b):
            claim(x, y, "position only")
        rest_a, rest_b = [], []

    return rows, rest_a, rest_b


# --------------------------------------------------------------------------
# Bracket walk -- prop_order's traversal, reporting instead of matching
# --------------------------------------------------------------------------

class Bracket:
    __slots__ = ("tu", "lo_a", "hi_a", "lo_b", "hi_b", "gap_a", "gap_b",
                 "gap_b_raw", "reason", "spans")

    def __init__(self, tu, lo_a, hi_a, lo_b, hi_b, gap_a, gap_b, gap_b_raw,
                 spans, reason):
        self.tu, self.reason, self.spans = tu, reason, spans
        self.lo_a, self.hi_a, self.lo_b, self.hi_b = lo_a, hi_a, lo_b, hi_b
        self.gap_a, self.gap_b, self.gap_b_raw = gap_a, gap_b, gap_b_raw

    @property
    def pairable(self):
        return bool(self.gap_a) and bool(self.gap_b)


def walk_brackets(a_img, b_img, a2b, b2a, shapes_a, shapes_b, include_crt):
    """Every unresolved region between two anchored pairs, plus the TU edges.

    Mirrors prop_order so the reasons reported here are the reasons that pass
    actually refused. The one addition is the head and tail of each unit --
    prop_order only walks BETWEEN anchors, so residue before the first anchor
    or after the last is invisible to it and would otherwise never be
    explained.
    """
    b_all = b_img.addrs_sorted
    out, unbracketed = [], []

    for tu, addrs in sorted(a_img.tu_groups().items()):
        if tu.startswith("crt_") and not include_crt:
            continue
        matched = [(i, a) for i, a in enumerate(addrs) if a in a2b]
        residue = [a for a in addrs if a not in a2b]
        if len(matched) < 2:
            if residue:
                unbracketed.append((tu, residue, "fewer than 2 anchors in the unit"))
            continue

        keep = longest_increasing([int(a2b[a], 16) for _, a in matched])
        anchors = [matched[k] for k in keep]

        # Head and tail: bounded on one side only, so no counterpart window can
        # be derived. Reported, never aligned.
        head = [addrs[k] for k in range(0, anchors[0][0]) if addrs[k] not in a2b]
        tail = [addrs[k] for k in range(anchors[-1][0] + 1, len(addrs))
                if addrs[k] not in a2b]
        for edge, label in ((head, "before the unit's first anchor"),
                            (tail, "after the unit's last anchor")):
            if edge:
                unbracketed.append((tu, edge, label))

        for (ia, aa), (ib, ab) in zip(anchors, anchors[1:]):
            gap_a = [addrs[k] for k in range(ia + 1, ib) if addrs[k] not in a2b]
            lo, hi = int(a2b[aa], 16), int(a2b[ab], 16)
            gap_b_raw = [f"{v:08x}" for v in
                         b_all[bisect.bisect_right(b_all, lo):bisect.bisect_left(b_all, hi)]
                         if f"{v:08x}" not in b2a]

            # A bracket whose two anchors landed far apart in the target sweeps
            # up whole unrelated units, and aligning against those produces
            # confident nonsense (splitPath -> a CWaterActor static init, seen
            # in practice). nocturne's units were assigned by hand and are not
            # copied from nocedit, so unit agreement is an independent filter:
            # keep only the target functions attributed to the same unit, plus
            # any with no unit at all, which cannot contradict.
            units = Counter()
            gap_b = []
            for y in gap_b_raw:
                tu_b = sm.tu_of((b_img.by_addr.get(y) or {}).get("name"))
                units[tu_b or "?"] += 1
                if tu_b in (tu, None):
                    gap_b.append(y)
            spans = len([u for u in units if u != "?"])

            if not gap_a and not gap_b_raw:
                continue

            # The reason is what prop_order SAW, so it is computed on the raw
            # window; the unit filter is a reading aid applied afterwards and
            # must not be allowed to rewrite history.
            if not gap_b_raw:
                reason = "editor-only: nothing between the counterparts"
            elif not gap_a:
                reason = "game-only: nothing between these in nocedit"
            elif len(gap_a) != len(gap_b_raw):
                reason = (f"count mismatch {len(gap_a)} vs {len(gap_b_raw)} -- "
                          "something was added AND removed here")
            elif all(shapes_a.get(x) is None and shapes_b.get(y) is None
                     for x, y in zip(gap_a, gap_b_raw)):
                # bracket_aligns() cannot vote on bodies it never hashed.
                # shapes_for() skips anything under 8 bytes, which is every
                # Watcom `xor eax,eax; ret` stub, so a run of them fails the
                # check by having no evidence rather than by disagreeing.
                reason = ("equal counts, every body too small to hash (<8B) -- "
                          "order is unopposed here")
            elif not bracket_aligns(shapes_a, shapes_b, gap_a, gap_b_raw):
                reason = "equal counts but the bodies disagree -- alignment unsafe"
            else:
                continue  # would have matched; nothing left over

            if len(gap_b) != len(gap_b_raw):
                reason += (f"; unit filter narrows the window to {len(gap_b)}"
                           f" of {len(gap_b_raw)}")
            out.append(Bracket(tu, aa, ab, a2b[aa], a2b[ab], gap_a, gap_b,
                               gap_b_raw, spans, reason))

    return out, unbracketed


# --------------------------------------------------------------------------
# Sections
# --------------------------------------------------------------------------

def section_a(a_img, b_img, a2b, b2a, editor_only, include_crt, show):
    """Per-unit leftovers on each side."""
    res_a, res_b = defaultdict(list), defaultdict(list)
    for f in a_img.functions:
        addr = f.get("addr", "").lower()
        if addr and addr not in a2b:
            res_a[sm.tu_of(f.get("name")) or "?"].append(addr)
    for f in b_img.functions:
        addr = f.get("addr", "").lower()
        if addr and addr not in b2a:
            res_b[sm.tu_of(f.get("name")) or "?"].append(addr)

    units = sorted(set(res_a) | set(res_b))
    if not include_crt:
        units = [u for u in units if not u.startswith("crt_")]

    rows = []
    for tu in units:
        na = len(res_a.get(tu, ()))
        nb = len(res_b.get(tu, ()))
        neo = sum(1 for x in res_a.get(tu, ()) if x in editor_only)
        verdict = ("PAIRABLE" if na and nb else
                   "EDITOR-ONLY" if na else "GAME-ONLY")
        rows.append((min(na, nb), na, nb, neo, tu, verdict))
    rows.sort(key=lambda r: (-r[0], -max(r[1], r[2]), r[4]))

    print("=" * 78)
    print("A. TRANSLATION-UNIT RESIDUE")
    print("=" * 78)
    print("  Residue on both sides of one unit is the pairable case: same source")
    print("  file, functions left over in both builds. One-sided residue means a")
    print("  subsystem was compiled out (EDITOR-ONLY) or added (GAME-ONLY).\n")
    print(f"  {'unit':<28} {'nocedit':>8} {'nocturne':>9} {'known-eo':>9}  verdict")
    print(f"  {'-'*28} {'-'*8} {'-'*9} {'-'*9}  {'-'*12}")
    shown = rows if not show else rows[:show]
    for _, na, nb, neo, tu, verdict in shown:
        print(f"  {tu:<28} {na:>8} {nb:>9} {neo:>9}  {verdict}")
    if len(rows) > len(shown):
        print(f"  ... and {len(rows) - len(shown)} more units (raise --show)")

    tot = Counter(r[5] for r in rows)
    print(f"\n  {sum(r[1] for r in rows)} nocedit / {sum(r[2] for r in rows)} nocturne "
          f"functions unmatched across {len(rows)} units")
    print(f"  units: {tot['PAIRABLE']} pairable, {tot['EDITOR-ONLY']} editor-only, "
          f"{tot['GAME-ONLY']} game-only")
    if not include_crt:
        print("  (crt_* units excluded; they are archive members, not source-ordered "
              "-- --include-crt)")
    return rows


def section_b(brackets, unbracketed, a_img, b_img, shapes_a, shapes_b, show,
              tu_filter, absent=None):
    print("\n" + "=" * 78)
    print("B. UNRESOLVED BRACKETS  (the manual-pairing worklist)")
    print("=" * 78)
    print("  Each block is a region the order pass reached and refused. The suggested")
    print("  alignment is a shape hint for reading the two lists, NOT evidence -- the")
    print("  mapper would not commit any of it.\n")

    work = [b for b in brackets if b.pairable]
    if tu_filter:
        work = [b for b in work if b.tu == tu_filter]
    work.sort(key=lambda b: (-min(len(b.gap_a), len(b.gap_b)), b.tu, b.lo_a))

    proposals = []
    shown = work if not show else work[:show]
    for br in shown:
        print("-" * 78)
        print(f"{br.tu}   between {br.lo_a}->{br.lo_b} and {br.hi_a}->{br.hi_b}")
        print(f"  refused: {br.reason}")
        if br.spans > 3:
            print(f"  NOTE: the raw window covers {br.spans} different units -- the "
                  f"anchors are far apart in\n        {b_img.program} and only the "
                  f"unit-filtered residue below is worth reading.")
        print(f"  nocedit  residue ({len(br.gap_a)}):")
        for x in br.gap_a:
            print(f"      {describe(a_img, x, shapes_a)}")
        print(f"  nocturne residue ({len(br.gap_b)}"
              f"{f' of {len(br.gap_b_raw)} in window' if len(br.gap_b) != len(br.gap_b_raw) else ''}):")
        for y in br.gap_b:
            print(f"      {describe(b_img, y, shapes_b)}")
        rows, rest_a, rest_b = suggest(a_img, b_img, shapes_a, shapes_b,
                                       br.gap_a, br.gap_b, absent=absent)
        if rows:
            print("  suggested alignment:")
            for x, y, why in rows:
                print(f"      {x} -> {y}   ({why})   "
                      f"{short((a_img.by_addr.get(x) or {}).get('name'))}")
                proposals.append({"a": x, "b": y, "tu": br.tu, "basis": why,
                                  "name": (a_img.by_addr.get(x) or {}).get("name")})
        if rest_a or rest_b:
            print(f"  UNSURE -- no proposal: {len(rest_a)} nocedit / "
                  f"{len(rest_b)} nocturne left over")
    if shown:
        print("-" * 78)
    if len(work) > len(shown):
        print(f"... and {len(work) - len(shown)} more pairable brackets (raise --show)")

    one_sided = [b for b in brackets if not b.pairable]
    print(f"\n  {len(work)} pairable brackets covering "
          f"{sum(len(b.gap_a) for b in work)} nocedit / "
          f"{sum(len(b.gap_b) for b in work)} nocturne functions")
    print(f"  {len(one_sided)} one-sided brackets "
          f"({sum(len(b.gap_a) for b in one_sided)} editor-only, "
          f"{sum(len(b.gap_b) for b in one_sided)} game-only) -- not pairable by "
          f"construction")
    if unbracketed:
        n = sum(len(r[1]) for r in unbracketed)
        print(f"  {n} nocedit functions in {len(unbracketed)} regions with no bracket "
              f"at all:")
        by_reason = Counter()
        for tu, addrs, reason in unbracketed:
            by_reason[reason] += len(addrs)
        for reason, k in by_reason.most_common():
            print(f"      {k:5d}  {reason}")
        print("      (a unit with no anchors is usually absent from the game build "
              "entirely)")
    return proposals


def section_d(a_img, b_img, a2b, b2a, shapes_a, shapes_b, show, include_crt):
    """Residue on both sides carrying the same name, anywhere in the image.

    Section B only sees functions the order pass could bracket. This sees the
    rest, and it is the highest-yield list in the report for one reason: the
    mapper cannot use names at all. Every signal it has is derived from bytes
    and layout, so two leftovers already carrying the same `<Class>_<method>`
    core are invisible to it no matter how obvious the pairing is.

    The unit is required to agree as well as the core. nocturne's units were
    assigned by hand rather than copied, so unit agreement is a second fact
    rather than a restatement of the first, and it separates a genuine
    counterpart from a same-named method on an unrelated class.

    Not circular, but not free of the mapper either: some of nocturne's names
    were applied FROM an earlier mapping. Where that mapping was right the name
    is confirmation; where it was wrong the name repeats the error. Shape
    agreement is printed alongside so a pair can be judged on evidence the name
    did not supply.
    """
    def residue_index(img, matched):
        idx = defaultdict(list)
        for f in img.functions:
            addr = f.get("addr", "").lower()
            if not addr or addr in matched:
                continue
            tu, core = sm.split_qualified_name(f.get("name"))
            if not core or (tu or "").startswith("crt_") and not include_crt:
                continue
            idx[(tu, core)].append(addr)
        return idx

    ia, ib = residue_index(a_img, a2b), residue_index(b_img, b2a)
    rows, ambiguous = [], 0
    for key in sorted(set(ia) & set(ib)):
        if len(ia[key]) != 1 or len(ib[key]) != 1:
            ambiguous += 1
            continue
        x, y = ia[key][0], ib[key][0]
        rows.append((key[0], key[1], x, y,
                     shape_agreement(shapes_a.get(x), shapes_b.get(y))))

    print("\n" + "=" * 78)
    print("D. UNMATCHED ON BOTH SIDES UNDER THE SAME NAME")
    print("=" * 78)
    print("  The mapper matches on bytes and layout only -- it never reads a name, so")
    print("  these are invisible to it. Unit and name core both agree on each row.\n")
    by_shape = Counter(r[4] for r in rows)
    print(f"  candidate pairs   : {len(rows)}")
    print(f"  ambiguous cores   : {ambiguous}   (core repeats on one side -- "
          f"overloads; excluded)")
    print(f"  by shape agreement: {dict(by_shape.most_common())}")
    print("    identical/same_mnemonics -- the body did not change either; the mapper")
    print("    missed these on layout alone, so they are as safe as a matched pair.")
    print("    size_mismatch -- the body WAS edited between the builds. That is the")
    print("    case no automatic signal can reach, and the reason to record it by hand.\n")

    order = {"size_mismatch": 0, "similar_size": 1, "unshaped": 2,
             "same_mnemonics": 3, "identical": 4}
    rows.sort(key=lambda r: (order.get(r[4], 9), r[0], r[1]))
    for tu, core, x, y, agree in (rows if not show else rows[:show]):
        print(f"    {x} -> {y}  [{agree}]  {tu}_{core}")
    if show and len(rows) > show:
        print(f"    ... and {len(rows) - show} more (raise --show)")
    return rows


# Names given to a function that carries no evidence in that build: a bare RET
# or a `xor eax,eax; ret`. They say what the compiler emitted, not what the
# function is, so they are expected to disagree with the sibling's real name.
STUB_CORES = ("doNothing", "returnZero", "handlePureVirtualCall", "emptyStub",
              "unusedFunc", "oldFunction", "stub", "nullSub")


def _stubbish(core):
    return any(core.startswith(s) or f"_{s}" in core for s in STUB_CORES)


def classify_name_drift(ca, cb, class_of):
    """Why do the two builds call one function two different things?"""
    if ca.lower() == cb.lower():
        # CSVetlana/CSvetlana, CWaypoint/CWayPoint, CMinecar/CMineCar. The pair
        # is fine; one of the two builds spells the class wrong, and a name is
        # supposed to be identical across the sibling boundary.
        return "case-only spelling"
    # A bare `CDemonSet` names a class and no method: the method was never
    # identified, so it is a placeholder and cannot contradict the sibling's
    # real name. Treating it as a class claim made CZThumb_saveZBufferTable ->
    # CDemonSet read as a mapping error when it is only an unnamed method.
    if "_" not in ca or "_" not in cb:
        return "unnamed on one side"
    cls_a, cls_b = class_of(ca), class_of(cb)
    if cls_a and cls_b and cls_a != cls_b:
        return "MAPPING SUSPECT"      # two different classes cannot be one function
    if _stubbish(cb):
        return "stubbed in nocturne"  # nocturne compiled the body out
    if _stubbish(ca):
        return "stubbed in nocedit"   # back-port: nocturne has the real name
    return "renamed"


def _has_signature(func):
    """Did anything ever type this function, or is it still the raw guess?"""
    params = (func.get("vars") or {}).get("params") or []
    ret = str(func.get("ret") or "")
    conv = func.get("conv")
    return bool(params) or bool(conv) or not (ret.startswith("undefined") or ret == "")


def section_c(pairs, a_img, b_img, show):
    """Signature differences on matched pairs, split by cause."""
    from audit_transferred_signatures import compare_pair

    never, drift, name_drift = [], [], []
    for p in pairs:
        src = a_img.by_addr.get(p["a"])
        dst = b_img.by_addr.get(p["b"])
        if not src or not dst:
            continue
        ca, cb = core_of(src.get("name")), core_of(dst.get("name"))
        if ca and cb and ca != cb:
            name_drift.append((p, ca, cb))
        diffs = compare_pair(src, dst)
        if not diffs:
            continue
        (drift if _has_signature(dst) else never).append((p, diffs))

    print("\n" + "=" * 78)
    print("C. SIGNATURE DIVERGENCE ON MATCHED PAIRS")
    print("=" * 78)
    print(f"  pairs compared        : {len(pairs)}")
    print(f"  never transferred     : {len(never)}   (nocturne side has no signature "
          f"at all -- transfer work, not drift)")
    print(f"  genuine divergence    : {len(drift)}   (both sides typed, and they "
          f"disagree -- investigate)")
    print(f"  name core differs     : {len(name_drift)}   (mapped as the same function "
          f"under two different names)")

    if drift:
        print(f"\n  -- genuine divergence, highest confidence first --")
        kinds = Counter(d.split()[0] for _, ds in drift for d in ds)
        print(f"  by kind: {dict(kinds.most_common())}\n")
        rows = sorted(drift, key=lambda t: -t[0].get("confidence", 0))
        for p, diffs in (rows if not show else rows[:show]):
            print(f"    {p['a']} -> {p['b']}  conf {p.get('confidence', 0):.2f}  "
                  f"shape {p.get('shape_agreement', '?')}")
            print(f"      {short(p.get('name'))}")
            for d in diffs:
                print(f"        {d}")
        if show and len(rows) > show:
            print(f"    ... and {len(rows) - show} more (raise --show)")

    if name_drift:
        classes = {c for img in (a_img, b_img) for f in img.functions
                   for c in [(sm.split_qualified_name(f.get("name"))[1] or "").split("_")[0]]
                   if c.startswith("C") and len(c) > 2}

        def class_of(core):
            head = core.split("_")[0]
            return head if head in classes else None

        tagged = [(classify_name_drift(ca, cb, class_of), p, ca, cb)
                  for p, ca, cb in name_drift]
        order = {"MAPPING SUSPECT": 0, "case-only spelling": 1, "renamed": 2,
                 "stubbed in nocedit": 3, "stubbed in nocturne": 4,
                 "unnamed on one side": 5}
        tagged.sort(key=lambda t: (order.get(t[0], 9), -t[1].get("confidence", 0)))

        print(f"\n  -- same pair, different name core --")
        print(f"  {dict(Counter(t[0] for t in tagged).most_common())}")
        print("    MAPPING SUSPECT     the two names claim different CLASSES, so the")
        print("                        pair is probably wrong, not the names")
        print("    case-only spelling  same name, different capitalisation -- one build")
        print("                        spells the class wrong; fix it, do not map around it")
        print("    stubbed in nocedit  nocedit had no evidence -- back-port nocturne's name")
        print("    stubbed in nocturne the game build compiled the body out; expected")
        print("    renamed             genuinely different identifiers; read both\n")
        for kind, p, ca, cb in (tagged if not show else tagged[:show]):
            print(f"    [{kind}] {p['a']} -> {p['b']}  conf {p.get('confidence', 0):.2f}  "
                  f"shape {p.get('shape_agreement', '?')}")
            print(f"      nocedit  {ca}")
            print(f"      nocturne {cb}")
        if show and len(tagged) > show:
            print(f"    ... and {len(tagged) - show} more (raise --show)")
        name_drift = [(p, ca, cb) for _, p, ca, cb in tagged]

    verdicts = Counter(p.get("sig_verdict") for p in pairs)
    print(f"\n  for reference, verify_sibling_signatures.py's byte-measured verdicts: "
          f"{dict(verdicts)}")
    print("  those measure ARGUMENT SIZE from nocturne's own bytes and are a "
          "different axis")
    return never, drift, name_drift


# --------------------------------------------------------------------------
# Driver
# --------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--mapping", help="default: the canonical mapping for --to")
    ap.add_argument("--from", dest="a_prog", default="nocedit.exe")
    ap.add_argument("--to", dest="b_prog", default="nocturne.exe")
    ap.add_argument("--section", default="abcd",
                    help="which sections to print (default: abcd)")
    ap.add_argument("--tu", help="restrict section B to one translation unit")
    ap.add_argument("--show", type=int, default=25,
                    help="rows per section; 0 for everything (default: 25)")
    ap.add_argument("--include-crt", action="store_true")
    ap.add_argument("--emit-ledger",
                    help="write section B's suggested pairs as a manual-pair "
                         "ledger skeleton -- REVIEW EVERY ENTRY before using it")
    ap.add_argument("--out", help="write the whole report as JSON")
    args = ap.parse_args()

    path = args.mapping or canonical_mapping(args.b_prog)
    with open(path) as fh:
        mapping = json.load(fh)
    pairs = mapping["pairs"]
    a2b = {p["a"].lower(): p["b"].lower() for p in pairs}
    b2a = {p["b"].lower(): p["a"].lower() for p in pairs}
    editor_only = {e["a"].lower() for e in mapping.get("editor_only", [])}

    a_img = sm.Image(mapping.get("from", args.a_prog))
    b_img = sm.Image(mapping.get("to", args.b_prog))
    shapes_a, shapes_b = sm.shapes_for(a_img), sm.shapes_for(b_img)

    print(f"mapping: {path}")
    print(f"  {a_img.program} {len(a_img.functions)} functions, "
          f"{b_img.program} {len(b_img.functions)} functions, "
          f"{len(pairs)} pairs\n")

    payload = {"mapping": path}
    if "a" in args.section:
        rows = section_a(a_img, b_img, a2b, b2a, editor_only,
                         args.include_crt, args.show)
        payload["tu_residue"] = [{"tu": r[4], "nocedit": r[1], "nocturne": r[2],
                                  "known_editor_only": r[3], "verdict": r[5]}
                                 for r in rows]

    proposals = []
    if "b" in args.section:
        brackets, unbracketed = walk_brackets(a_img, b_img, a2b, b2a,
                                              shapes_a, shapes_b, args.include_crt)
        absent = absent_families(a_img, b_img)
        print("  families absent from %s entirely: %d class(es), %d method categor(ies)"
              % (args.to_prog if hasattr(args, "to_prog") else "the target",
                 len(absent[0]), len(absent[1])))
        proposals = section_b(brackets, unbracketed, a_img, b_img,
                              shapes_a, shapes_b, args.show, args.tu,
                              absent=absent)
        payload["brackets"] = [
            {"tu": br.tu, "anchor_lo": [br.lo_a, br.lo_b],
             "anchor_hi": [br.hi_a, br.hi_b], "reason": br.reason,
             "gap_a": br.gap_a, "gap_b": br.gap_b}
            for br in brackets if br.pairable]

    if "d" in args.section:
        rows = section_d(a_img, b_img, a2b, b2a, shapes_a, shapes_b,
                         args.show, args.include_crt)
        payload["name_core_candidates"] = [
            {"a": x, "b": y, "tu": tu, "core": core, "shape_agreement": agree}
            for tu, core, x, y, agree in rows]
        proposals += [{"a": x, "b": y, "tu": tu, "basis": f"name core [{agree}]",
                       "name": (a_img.by_addr.get(x) or {}).get("name")}
                      for tu, core, x, y, agree in rows
                      if not any(p["a"] == x or p["b"] == y for p in proposals)]

    if "c" in args.section:
        never, drift, name_drift = section_c(pairs, a_img, b_img, args.show)
        payload["never_transferred"] = [p["b"] for p, _ in never]
        payload["signature_drift"] = [{"a": p["a"], "b": p["b"], "name": p.get("name"),
                                       "confidence": p.get("confidence"),
                                       "diffs": d} for p, d in drift]
        payload["name_drift"] = [{"a": p["a"], "b": p["b"], "nocedit": ca,
                                  "nocturne": cb} for p, ca, cb in name_drift]

    if args.emit_ledger:
        with open(args.emit_ledger, "w") as fh:
            json.dump({"schema": 1,
                       "note": "SKELETON -- every entry is a shape hint, not a "
                               "verified pair. Delete what you have not checked.",
                       "pairs": proposals}, fh, indent=1)
        print(f"\nwrote ledger skeleton {args.emit_ledger} ({len(proposals)} "
              f"UNVERIFIED entries)")

    if args.out:
        with open(args.out, "w") as fh:
            json.dump(payload, fh, indent=1)
        print(f"wrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
