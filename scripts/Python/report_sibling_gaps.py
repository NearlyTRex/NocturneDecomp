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
                    refused it, a shape-based suggested alignment of the
                    residue, and a RANKED GUESS for whatever the suggestion
                    could not settle. This is the list to work through.
  C. DRIFT          matched pairs whose declared signatures differ, split by
                    whether the target was ever given a signature at all.
  D. SAME NAME      residue on both sides already carrying one name core.
  E. UNIT EDGES     residue before a unit's first anchor or after its last,
                    ranked against the target's unnamed residue in the same
                    unit -- no bracket bounds these, so nothing else reaches
                    them.

A ranked guess grades each candidate on what survives an edited body: how much
of the mnemonic sequence the two share, whether their callees and callers
correspond through pairs already made, shared strings and constants, and size.
It prints the runner-up and the margin, and marks a guess MUTUAL when each side
is the other's unique best. It is a reading aid -- the pseudocode paths are
printed so both bodies can be opened side by side -- and never evidence.

Pairs proposed here are NOT applied. Record the ones you confirm in the manual
pair ledger (see `--emit-ledger`), which map_sibling_functions.py reads as a
top-priority signal, then re-run the mapper: a confirmed pair also becomes an
anchor, so it typically resolves neighbours for free.

`--min-confidence` returns the mapping's weaker pairs to the residue, so they
are bracketed and ranked like any other leftover instead of being taken as
matched.

Usage:
    report_sibling_gaps.py                      # full report
    report_sibling_gaps.py --tu core_fire.cpp   # one translation unit
    report_sibling_gaps.py --section b --show 0 # every bracket, nothing elided
    report_sibling_gaps.py --mapping m.json --min-confidence 0.9 --section be
    report_sibling_gaps.py --emit-ledger /tmp/manual_pairs.json
    report_sibling_gaps.py --out /tmp/gaps.json

@category Annotations
"""

import argparse
import bisect
import json
import os
import re
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm
from audit_transferred_signatures import compare_pair
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


def name_of(img, addr):
    return (img.by_addr.get(addr) or {}).get("name")


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


SOURCE_RE = re.compile(r"FUN_([0-9a-f]{8})\.(?:cpp|c)$")
_SOURCES = {}


def source_of(program, addr):
    """Repo-relative path of the exported pseudocode for `addr`, or None.

    A `.c` unit's pseudocode is `.c`. Keeps are skipped: `.keep.cpp` is a hand
    edit, and the guess is about what the decompiler sees.
    """
    root = os.path.join(sm.ANNOTATIONS, program, "pseudocode", "src")
    if root not in _SOURCES:
        index = {}
        base = os.path.dirname(sm.ANNOTATIONS)
        for dirpath, _, files in os.walk(root):
            for fn in files:
                m = SOURCE_RE.search(fn)
                if m:
                    index[m.group(1)] = os.path.relpath(os.path.join(dirpath, fn), base)
        _SOURCES[root] = index
    return _SOURCES[root].get(addr)


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
    One missing function means "not named yet", while a class of ten going to
    zero is a build decision.
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
    c = core_of(name_of(img, addr))
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
    residue too small to hash. Nearest-size guessing is left to `rank`, which
    reports it with its runner-up rather than as a pair: a 24-instruction
    function is not the counterpart of a 3-byte stub just because nothing
    better is left.
    """
    rows, taken = [], set()
    claimed_a = set()

    def claim(x, y, why):
        taken.add(y)
        claimed_a.add(x)
        rows.append((x, y, why))

    core_b = defaultdict(list)
    for y in gap_b:
        c = core_of(name_of(b_img, y))
        if c:
            core_b[c].append(y)
    for x in gap_a:
        c = core_of(name_of(a_img, x))
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
# Ranked guesses -- grading the residue a suggestion could not settle
# --------------------------------------------------------------------------

# How much each graded signal counts. The body, the call graph and strings
# survive a renamed variable or a reordered branch; constants and size are
# corroboration, since an edit changes them first.
RANK_WEIGHTS = {"body": 3, "calls": 3, "callers": 2, "strings": 3, "consts": 1, "size": 1}
# Mnemonic n-gram width for grading two bodies; short bodies fall back to
# single mnemonics so they still compare.
BODY_GRAM = 3
# Candidates printed per leftover.
RANK_SHOW = 3
# A guess goes into the ledger skeleton only when each side is the other's
# unique best, it scores at least this, and it leads its runner-up by this.
LEDGER_MIN_SCORE = 0.6
LEDGER_MIN_MARGIN = 0.1


def dice(a, b):
    """Dice overlap of two multisets, or None when neither has anything."""
    total = sum(a.values()) + sum(b.values())
    if not total:
        return None
    return 2 * sum((a & b).values()) / total


def ngrams(seq, n=BODY_GRAM):
    if len(seq) < n:
        n = 1
    return Counter(tuple(seq[i:i + n]) for i in range(len(seq) - n + 1))


def link_overlap(mine, theirs, mapping, known):
    """How far two functions' neighbours correspond through pairs already made.

    Only the neighbours each side can place count: an unpaired callee says
    nothing either way. None when neither side has one.
    """
    ours = {mapping[c] for c in mine if c in mapping}
    other = {c for c in theirs if c in known}
    if not ours and not other:
        return None
    return len(ours & other) / max(len(ours), len(other))


class RankContext:
    """What grading reads from the two images, gathered once."""

    def __init__(self, a_img, b_img, a2b, b2a):
        self.a_img, self.b_img = a_img, b_img
        self.a2b, self.b2a = a2b, b2a
        # Every body, however small: the residue is mostly stubs and setters,
        # which are exactly what the hashing tier leaves out.
        self.shapes_a = sm.shapes_for(a_img, min_bytes=1)
        self.shapes_b = sm.shapes_for(b_img, min_bytes=1)
        self.calls_a, self.calls_b = a_img.callgraph, b_img.callgraph
        self.callers_a, self.callers_b = a_img.callers_of(), b_img.callers_of()
        self.strings_a, self.strings_b = a_img.string_refs(), b_img.string_refs()
        self._grams = {}

    def grams(self, side, addr, shape):
        key = (side, addr)
        if key not in self._grams:
            self._grams[key] = ngrams(shape.mnemonics)
        return self._grams[key]

    def features(self, x, y):
        sa, sb = self.shapes_a.get(x), self.shapes_b.get(y)
        out = {}
        if sa and sb:
            out["size"] = min(sa.ninsn, sb.ninsn) / max(sa.ninsn, sb.ninsn, 1)
            out["body"] = dice(self.grams("a", x, sa), self.grams("b", y, sb))
            out["consts"] = dice(Counter(sa.consts), Counter(sb.consts))
        out["calls"] = link_overlap(self.calls_a.get(x, ()), self.calls_b.get(y, ()),
                                    self.a2b, self.b2a)
        out["callers"] = link_overlap(self.callers_a.get(x, ()), self.callers_b.get(y, ()),
                                      self.a2b, self.b2a)
        out["strings"] = dice(Counter(self.strings_a.get(x, ())),
                              Counter(self.strings_b.get(y, ())))
        return {k: round(v, 3) for k, v in out.items() if v is not None}


def score(feats):
    """Weighted mean of the signals that could be measured; 0 when none."""
    weight = sum(RANK_WEIGHTS[k] for k in feats)
    if not weight:
        return 0.0
    return round(sum(RANK_WEIGHTS[k] * v for k, v in feats.items()) / weight, 3)


def rank(ctx, xs, ys):
    """Each of `xs` with every one of `ys` graded, best first.

    `margin` is the lead over the runner-up; `mutual` says the best candidate
    has this function as its own unique best in return.
    """
    table = {}
    for x in xs:
        for y in ys:
            feats = ctx.features(x, y)
            table[(x, y)] = (score(feats), feats)
    out = []
    for x in xs:
        cands = sorted(ys, key=lambda y, x=x: -table[(x, y)][0])
        top = table[(x, cands[0])][0]
        second = table[(x, cands[1])][0] if len(cands) > 1 else 0.0
        column = [table[(other, cands[0])][0] for other in xs]
        mutual = top > 0 and top > second and column.count(max(column)) == 1 \
            and max(column) == top
        out.append({"a": x,
                    "candidates": [{"b": y, "score": table[(x, y)][0],
                                    "features": table[(x, y)][1]} for y in cands],
                    "margin": round(top - second, 3),
                    "mutual": mutual})
    return out


def print_ranked(ctx, row):
    a_prog, b_prog = ctx.a_img.program, ctx.b_img.program
    tag = "MUTUAL" if row["mutual"] else "      "
    print(f"      {row['a']} {short(name_of(ctx.a_img, row['a']))}")
    print(f"          {a_prog}: {source_of(a_prog, row['a']) or '(no pseudocode)'}")
    for i, cand in enumerate(row["candidates"][:RANK_SHOW]):
        lead = f"{tag} margin {row['margin']:.2f}" if i == 0 else ""
        feats = " ".join(f"{k}={v:.2f}" for k, v in sorted(cand["features"].items()))
        print(f"        {cand['score']:.2f} {cand['b']} {short(name_of(ctx.b_img, cand['b']))}"
              f"  [{feats}] {lead}")
        if i == 0:
            print(f"          {b_prog}: {source_of(b_prog, cand['b']) or '(no pseudocode)'}")
    if len(row["candidates"]) > RANK_SHOW:
        print(f"        ... {len(row['candidates']) - RANK_SHOW} more candidate(s)")


def ranked_record(ctx, row, tu, where):
    """A ranked guess as the JSON report carries it."""
    best = row["candidates"][0]
    return {"a": row["a"], "name": name_of(ctx.a_img, row["a"]), "tu": tu, "where": where,
            "a_source": source_of(ctx.a_img.program, row["a"]),
            "b_source": source_of(ctx.b_img.program, best["b"]),
            "margin": row["margin"], "mutual": row["mutual"],
            "candidates": [dict(c, name=name_of(ctx.b_img, c["b"])) for c in row["candidates"]]}


def ledger_worthy(rec):
    best = rec["candidates"][0]
    return rec["mutual"] and best["score"] >= LEDGER_MIN_SCORE \
        and rec["margin"] >= LEDGER_MIN_MARGIN


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


def bracket_reason(gap_a, gap_b_raw, shapes_a, shapes_b, a_prog):
    """Why prop_order refused a bracket, or None when it would have matched."""
    if not gap_b_raw:
        return "editor-only: nothing between the counterparts"
    if not gap_a:
        return f"game-only: nothing between these in {a_prog}"
    if len(gap_a) != len(gap_b_raw):
        return (f"count mismatch {len(gap_a)} vs {len(gap_b_raw)} -- "
                "something was added AND removed here")
    if all(shapes_a.get(x) is None and shapes_b.get(y) is None
           for x, y in zip(gap_a, gap_b_raw)):
        # bracket_aligns() cannot vote on bodies it never hashed.
        # shapes_for() skips anything under 8 bytes, which is every
        # Watcom `xor eax,eax; ret` stub, so a run of them fails the
        # check by having no evidence rather than by disagreeing.
        return ("equal counts, every body too small to hash (<8B) -- "
                "order is unopposed here")
    if not bracket_aligns(shapes_a, shapes_b, gap_a, gap_b_raw):
        return "equal counts but the bodies disagree -- alignment unsafe"
    return None


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
        # be derived. Ranked in section E against the unit's residue instead.
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
            # in practice). The target's units were assigned independently, so
            # unit agreement is a filter: keep only the target functions
            # attributed to the same unit, plus any with no unit at all, which
            # cannot contradict.
            units = Counter()
            gap_b = []
            for y in gap_b_raw:
                tu_b = sm.tu_of(name_of(b_img, y))
                units[tu_b or "?"] += 1
                if tu_b in (tu, None):
                    gap_b.append(y)
            spans = len([u for u in units if u != "?"])

            if not gap_a and not gap_b_raw:
                continue

            # The reason is what prop_order SAW, so it is computed on the raw
            # window; the unit filter is a reading aid applied afterwards and
            # must not be allowed to rewrite history.
            reason = bracket_reason(gap_a, gap_b_raw, shapes_a, shapes_b, a_img.program)
            if reason is None:
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

def banner(title):
    print("\n" + "=" * 78)
    print(title)
    print("=" * 78)


def section_a(a_img, b_img, a2b, b2a, editor_only, include_crt, show):
    """Per-unit leftovers on each side."""
    a_prog, b_prog = a_img.program, b_img.program
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

    banner("A. TRANSLATION-UNIT RESIDUE")
    print("  Residue on both sides of one unit is the pairable case: same source")
    print("  file, functions left over in both builds. One-sided residue means a")
    print("  subsystem was compiled out (EDITOR-ONLY) or added (GAME-ONLY).\n")
    print(f"  {'unit':<28} {a_prog:>14} {b_prog:>16} {'known-eo':>9}  verdict")
    print(f"  {'-'*28} {'-'*14} {'-'*16} {'-'*9}  {'-'*12}")
    shown = rows if not show else rows[:show]
    for _, na, nb, neo, tu, verdict in shown:
        print(f"  {tu:<28} {na:>14} {nb:>16} {neo:>9}  {verdict}")
    if len(rows) > len(shown):
        print(f"  ... and {len(rows) - len(shown)} more units (raise --show)")

    tot = Counter(r[5] for r in rows)
    print(f"\n  {sum(r[1] for r in rows)} {a_prog} / {sum(r[2] for r in rows)} {b_prog} "
          f"functions unmatched across {len(rows)} units")
    print(f"  units: {tot['PAIRABLE']} pairable, {tot['EDITOR-ONLY']} editor-only, "
          f"{tot['GAME-ONLY']} game-only")
    if not include_crt:
        print("  (crt_* units excluded; they are archive members, not source-ordered "
              "-- --include-crt)")
    return rows


def section_b(brackets, unbracketed, ctx, shapes_a, shapes_b, show, tu_filter, absent=None):
    """The bracket worklist: -> (proposals, ranked guesses)."""
    a_img, b_img = ctx.a_img, ctx.b_img
    a_prog, b_prog = a_img.program, b_img.program
    banner("B. UNRESOLVED BRACKETS  (the manual-pairing worklist)")
    print("  Each block is a region the order pass reached and refused. The suggested")
    print("  alignment is a shape hint for reading the two lists, NOT evidence -- the")
    print("  mapper would not commit any of it. What it leaves is ranked.\n")

    work = [b for b in brackets if b.pairable]
    if tu_filter:
        work = [b for b in work if b.tu == tu_filter]
    work.sort(key=lambda b: (-min(len(b.gap_a), len(b.gap_b)), b.tu, b.lo_a))

    proposals, ranked = [], []
    shown = work if not show else work[:show]
    for br in work:
        visible = br in shown
        rows, rest_a, rest_b = suggest(a_img, b_img, shapes_a, shapes_b,
                                       br.gap_a, br.gap_b, absent=absent)
        guesses = rank(ctx, rest_a, rest_b) if rest_a and rest_b else []
        for x, y, why in rows:
            proposals.append({"a": x, "b": y, "tu": br.tu, "basis": why,
                              "name": name_of(a_img, x)})
        ranked += [ranked_record(ctx, g, br.tu, f"between {br.lo_a} and {br.hi_a}")
                   for g in guesses]
        if not visible:
            continue
        print("-" * 78)
        print(f"{br.tu}   between {br.lo_a}->{br.lo_b} and {br.hi_a}->{br.hi_b}")
        print(f"  refused: {br.reason}")
        if br.spans > 3:
            print(f"  NOTE: the raw window covers {br.spans} different units -- the "
                  f"anchors are far apart in\n        {b_prog} and only the "
                  f"unit-filtered residue below is worth reading.")
        print(f"  {a_prog} residue ({len(br.gap_a)}):")
        for x in br.gap_a:
            print(f"      {describe(a_img, x, shapes_a)}")
        narrowed = f" of {len(br.gap_b_raw)} in window" if len(br.gap_b) != len(br.gap_b_raw) else ""
        print(f"  {b_prog} residue ({len(br.gap_b)}{narrowed}):")
        for y in br.gap_b:
            print(f"      {describe(b_img, y, shapes_b)}")
        if rows:
            print("  suggested alignment:")
            for x, y, why in rows:
                print(f"      {x} -> {y}   ({why})   {short(name_of(a_img, x))}")
        if guesses:
            print("  ranked guesses (a reading aid, not evidence):")
            for g in guesses:
                print_ranked(ctx, g)
        elif rest_a or rest_b:
            print(f"  UNSURE -- no proposal: {len(rest_a)} {a_prog} / "
                  f"{len(rest_b)} {b_prog} left over")
    if shown:
        print("-" * 78)
    if len(work) > len(shown):
        print(f"... and {len(work) - len(shown)} more pairable brackets (raise --show)")

    one_sided = [b for b in brackets if not b.pairable]
    print(f"\n  {len(work)} pairable brackets covering "
          f"{sum(len(b.gap_a) for b in work)} {a_prog} / "
          f"{sum(len(b.gap_b) for b in work)} {b_prog} functions")
    print(f"  {len(one_sided)} one-sided brackets "
          f"({sum(len(b.gap_a) for b in one_sided)} editor-only, "
          f"{sum(len(b.gap_b) for b in one_sided)} game-only) -- not pairable by "
          f"construction")
    if unbracketed:
        n = sum(len(r[1]) for r in unbracketed)
        print(f"  {n} {a_prog} functions in {len(unbracketed)} regions with no bracket "
              f"at all (section E ranks them):")
        by_reason = Counter()
        for _, addrs, reason in unbracketed:
            by_reason[reason] += len(addrs)
        for reason, k in by_reason.most_common():
            print(f"      {k:5d}  {reason}")
    return proposals, ranked


def section_e(unbracketed, ctx, b2a, show, tu_filter):
    """Unit edges ranked against the target's unnamed residue in the same unit."""
    a_img, b_img = ctx.a_img, ctx.b_img
    banner("E. UNIT EDGES  (residue no bracket bounds)")
    print(f"  {a_img.program} functions before a unit's first anchor or after its last,")
    print(f"  graded against every unnamed, unpaired {b_img.program} function the same")
    print("  unit holds. No window narrows these, so read the margin.\n")

    pool = defaultdict(list)
    for f in b_img.functions:
        addr = f.get("addr", "").lower()
        tu, core = sm.split_qualified_name(f.get("name"))
        if addr and addr not in b2a and tu and core is None:
            pool[tu].append(addr)

    ranked, printed = [], 0
    for tu, addrs, reason in unbracketed:
        if tu_filter and tu != tu_filter:
            continue
        cands = sorted(pool.get(tu, ()))
        if not cands:
            continue
        guesses = rank(ctx, addrs, cands)
        ranked += [ranked_record(ctx, g, tu, reason) for g in guesses]
        if show and printed >= show:
            continue
        printed += 1
        print("-" * 78)
        print(f"{tu}   {reason}: {len(addrs)} vs {len(cands)} unnamed")
        for g in guesses:
            print_ranked(ctx, g)
    if printed:
        print("-" * 78)
    regions = sum(1 for tu, _, _ in unbracketed if pool.get(tu))
    if show and regions > printed:
        print(f"... and {regions - printed} more regions (raise --show)")
    print(f"\n  {len(ranked)} edge function(s) ranked, "
          f"{sum(1 for r in ranked if r['mutual'])} with a mutual best")
    return ranked


def section_d(a_img, b_img, a2b, b2a, shapes_a, shapes_b, show, include_crt):
    """Residue on both sides carrying the same name, anywhere in the image.

    Section B only sees functions the order pass could bracket. This sees the
    rest, and it is the highest-yield list in the report for one reason: the
    mapper cannot use names at all. Every signal it has is derived from bytes
    and layout, so two leftovers already carrying the same `<Class>_<method>`
    core are invisible to it no matter how obvious the pairing is.

    The unit is required to agree as well as the core. The target's units were
    assigned independently, so unit agreement is a second fact rather than a
    restatement of the first, and it separates a genuine counterpart from a
    same-named method on an unrelated class.

    Not circular, but not free of the mapper either: some target names were
    applied FROM an earlier mapping. Where that mapping was right the name is
    confirmation; where it was wrong the name repeats the error. Shape
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

    banner("D. UNMATCHED ON BOTH SIDES UNDER THE SAME NAME")
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
    rows.sort(key=lambda r: (order[r[4]], r[0], r[1]))
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
        return "stubbed in target"    # the target compiled the body out
    if _stubbish(ca):
        return "stubbed in source"    # back-port: the target has the real name
    return "renamed"


def _has_signature(func):
    """Did anything ever type this function, or is it still the raw guess?"""
    params = (func.get("vars") or {}).get("params") or []
    ret = str(func.get("ret") or "")
    conv = func.get("conv")
    return bool(params) or bool(conv) or not (ret.startswith("undefined") or ret == "")


DRIFT_ORDER = {"MAPPING SUSPECT": 0, "case-only spelling": 1, "renamed": 2,
               "stubbed in source": 3, "stubbed in target": 4, "unnamed on one side": 5}


def section_c(pairs, a_img, b_img, show):
    """Signature differences on matched pairs, split by cause."""
    a_prog, b_prog = a_img.program, b_img.program
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

    banner("C. SIGNATURE DIVERGENCE ON MATCHED PAIRS")
    print(f"  pairs compared        : {len(pairs)}")
    print(f"  never transferred     : {len(never)}   ({b_prog} side has no signature "
          f"at all -- transfer work, not drift)")
    print(f"  genuine divergence    : {len(drift)}   (both sides typed, and they "
          f"disagree -- investigate)")
    print(f"  name core differs     : {len(name_drift)}   (mapped as the same function "
          f"under two different names)")

    if drift:
        print("\n  -- genuine divergence, highest confidence first --")
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
                   for c in [(core_of(f.get("name")) or "").split("_")[0]]
                   if c.startswith("C") and len(c) > 2}

        def class_of(core):
            head = core.split("_")[0]
            return head if head in classes else None

        tagged = [(classify_name_drift(ca, cb, class_of), p, ca, cb)
                  for p, ca, cb in name_drift]
        tagged.sort(key=lambda t: (DRIFT_ORDER[t[0]], -t[1].get("confidence", 0)))

        print("\n  -- same pair, different name core --")
        print(f"  {dict(Counter(t[0] for t in tagged).most_common())}")
        print("    MAPPING SUSPECT     the two names claim different CLASSES, so the")
        print("                        pair is probably wrong, not the names")
        print("    case-only spelling  same name, different capitalisation -- one build")
        print("                        spells the class wrong; fix it, do not map around it")
        print(f"    stubbed in source   {a_prog} had no evidence -- back-port {b_prog}'s name")
        print(f"    stubbed in target   {b_prog} compiled the body out; expected")
        print("    renamed             genuinely different identifiers; read both\n")
        for kind, p, ca, cb in (tagged if not show else tagged[:show]):
            print(f"    [{kind}] {p['a']} -> {p['b']}  conf {p.get('confidence', 0):.2f}  "
                  f"shape {p.get('shape_agreement', '?')}")
            print(f"      {a_prog:<16} {ca}")
            print(f"      {b_prog:<16} {cb}")
        if show and len(tagged) > show:
            print(f"    ... and {len(tagged) - show} more (raise --show)")
        name_drift = [(p, ca, cb) for _, p, ca, cb in tagged]

    verdicts = Counter(p.get("sig_verdict") for p in pairs)
    print(f"\n  for reference, verify_sibling_signatures.py's byte-measured verdicts: "
          f"{dict(verdicts)}")
    print(f"  those measure ARGUMENT SIZE from {b_prog}'s own bytes and are a "
          "different axis")
    return never, drift, name_drift


# --------------------------------------------------------------------------
# Ledger skeleton
# --------------------------------------------------------------------------

def ledger_skeleton(a_prog, b_prog, proposals, ranked):
    """Every proposal, then each ledger-worthy ranked guess, one entry per address.

    Written in the form map_sibling_functions.py seeds from, so a reviewed
    skeleton can be merged into annotations/<to>/sibling_manual_pairs.json
    as it is: the `note` carries the name and the basis the reviewer judged.
    """
    pairs, used_a, used_b = [], set(), set()

    def add(a, b, note):
        if a in used_a or b in used_b:
            return
        used_a.add(a)
        used_b.add(b)
        pairs.append({"a": a, "b": b, "note": f"{note} -- UNVERIFIED"})

    for p in proposals:
        add(p["a"], p["b"], f"{short(p['name'])}: {p['basis']}")
    for rec in ranked:
        if ledger_worthy(rec):
            best = rec["candidates"][0]
            add(rec["a"], best["b"], f"{short(rec['name'])}: ranked {best['score']:.2f}, "
                                     f"margin {rec['margin']:.2f}")
    return {"schema": 1, "from": a_prog, "to": b_prog,
            "note": "SKELETON -- every entry is a hint, not a verified pair. "
                    "Delete what you have not checked.",
            "pairs": pairs}


# --------------------------------------------------------------------------
# Driver
# --------------------------------------------------------------------------

def parse_args(argv):
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--mapping", help="default: the canonical mapping for --to")
    ap.add_argument("--from", dest="a_prog", default="nocedit.exe")
    ap.add_argument("--to", dest="b_prog", default="nocturne.exe")
    ap.add_argument("--section", default="abcde",
                    help="which sections to print (default: abcde)")
    ap.add_argument("--tu", help="restrict sections B and E to one translation unit")
    ap.add_argument("--show", type=int, default=25,
                    help="rows per section; 0 for everything (default: 25)")
    ap.add_argument("--min-confidence", type=float, default=0.0,
                    help="treat the mapping's pairs below this as unmatched, so "
                         "they are bracketed and ranked (default: 0, keep all)")
    ap.add_argument("--include-crt", action="store_true")
    ap.add_argument("--emit-ledger",
                    help="write the proposals and mutual ranked guesses as a "
                         "manual-pair ledger skeleton -- REVIEW EVERY ENTRY")
    ap.add_argument("--out", help="write the whole report as JSON")
    return ap.parse_args(argv)


def main(argv=None):
    args = parse_args(argv)
    path = args.mapping or canonical_mapping(args.b_prog)
    with open(path, encoding="utf-8") as fh:
        mapping = json.load(fh)
    pairs = [p for p in mapping["pairs"]
             if (p.get("confidence") if p.get("confidence") is not None else 1.0)
             >= args.min_confidence]
    a2b = {p["a"].lower(): p["b"].lower() for p in pairs}
    b2a = {p["b"].lower(): p["a"].lower() for p in pairs}
    editor_only = {e["a"].lower() for e in mapping.get("editor_only", [])}

    a_img = sm.Image(mapping.get("from", args.a_prog))
    b_img = sm.Image(mapping.get("to", args.b_prog))
    shapes_a, shapes_b = sm.shapes_for(a_img), sm.shapes_for(b_img)

    print(f"mapping: {path}")
    dropped = len(mapping["pairs"]) - len(pairs)
    print(f"  {a_img.program} {len(a_img.functions)} functions, "
          f"{b_img.program} {len(b_img.functions)} functions, "
          f"{len(pairs)} pairs"
          + (f" ({dropped} below {args.min_confidence} returned to the residue)"
             if dropped else ""))

    payload = {"mapping": path, "from": a_img.program, "to": b_img.program}
    if "a" in args.section:
        rows = section_a(a_img, b_img, a2b, b2a, editor_only,
                         args.include_crt, args.show)
        payload["tu_residue"] = [{"tu": r[4], "source": r[1], "target": r[2],
                                  "known_editor_only": r[3], "verdict": r[5]}
                                 for r in rows]

    proposals, ranked = [], []
    if "b" in args.section or "e" in args.section:
        ctx = RankContext(a_img, b_img, a2b, b2a)
        brackets, unbracketed = walk_brackets(a_img, b_img, a2b, b2a,
                                              shapes_a, shapes_b, args.include_crt)
        if "b" in args.section:
            absent = absent_families(a_img, b_img)
            print(f"\n  families absent from {b_img.program} entirely: "
                  f"{len(absent[0])} class(es), {len(absent[1])} method categor(ies)")
            proposals, ranked = section_b(brackets, unbracketed, ctx, shapes_a, shapes_b,
                                          args.show, args.tu, absent=absent)
            payload["brackets"] = [
                {"tu": br.tu, "anchor_lo": [br.lo_a, br.lo_b],
                 "anchor_hi": [br.hi_a, br.hi_b], "reason": br.reason,
                 "gap_a": br.gap_a, "gap_b": br.gap_b}
                for br in brackets if br.pairable]
        if "e" in args.section:
            ranked += section_e(unbracketed, ctx, b2a, args.show, args.tu)
        payload["ranked"] = ranked

    if "d" in args.section:
        rows = section_d(a_img, b_img, a2b, b2a, shapes_a, shapes_b,
                         args.show, args.include_crt)
        payload["name_core_candidates"] = [
            {"a": x, "b": y, "tu": tu, "core": core, "shape_agreement": agree}
            for tu, core, x, y, agree in rows]
        proposals += [{"a": x, "b": y, "tu": tu, "basis": f"name core [{agree}]",
                       "name": name_of(a_img, x)}
                      for tu, core, x, y, agree in rows]

    if "c" in args.section:
        never, drift, name_drift = section_c(pairs, a_img, b_img, args.show)
        payload["never_transferred"] = [p["b"] for p, _ in never]
        payload["signature_drift"] = [{"a": p["a"], "b": p["b"], "name": p.get("name"),
                                       "confidence": p.get("confidence"),
                                       "diffs": d} for p, d in drift]
        payload["name_drift"] = [{"a": p["a"], "b": p["b"], "source": ca,
                                  "target": cb} for p, ca, cb in name_drift]

    if args.emit_ledger:
        doc = ledger_skeleton(a_img.program, b_img.program, proposals, ranked)
        with open(args.emit_ledger, "w", encoding="utf-8") as fh:
            json.dump(doc, fh, indent=1)
        print(f"\nwrote ledger skeleton {args.emit_ledger} ({len(doc['pairs'])} "
              f"UNVERIFIED entries)")

    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            json.dump(payload, fh, indent=1)
        print(f"wrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
