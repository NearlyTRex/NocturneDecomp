#!/usr/bin/env python3
"""Map nocedit.exe's annotated functions onto their nocturne.exe counterparts.

nocedit is fully named (6931/6931); nocturne is not (18/4365). Both were built
by the same Watcom toolchain from largely the same source tree, so most of
nocturne's functions have a counterpart in nocedit that already carries a name,
a signature and types. This script establishes that correspondence and scores
how much to believe each pair.

Evidence is gathered from several independent signals, strongest first:

  shape_strict   identical instruction shape once relocated addresses are
                 masked -- the function was not edited between the builds.
                 Exact, no inference.
  string         a shared self-identifying error string ("CDemonSet::foo - ...")
                 referenced from exactly one function on each side.
  vtable         positional slot correspondence in an anchored vtable pair.
  callsite       an anchored pair's ordered call sequence aligns, so callees at
                 the same index correspond (BinDiff-style fixpoint).
  order          two anchored pairs bracket the same number of unmatched
                 functions in the same translation unit, so source order fixes
                 the alignment. Alone in consulting no similarity at all, which
                 is why it is the only signal that can match a function whose
                 body was *edited* between the builds.
  caller         the inverse: unique unmatched caller of an anchored pair.
  shape_relaxed  identical mnemonic sequence but differing operands -- same
                 code shape, different registers/constants. Corroboration only.

Signals are fused per candidate pair, matching is resolved 1:1 greedily by
score, and propagation iterates to a fixpoint. Nothing is written to Ghidra
here -- the output is a mapping file for apply_sibling_annotations.py.

Usage:
    map_sibling_functions.py                        # report only
    map_sibling_functions.py -o /tmp/mapping.json
    map_sibling_functions.py --min-confidence 0.9 --show 40
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


# --------------------------------------------------------------------------
# Confidence model
# --------------------------------------------------------------------------

# Base confidence contributed by each signal on its own.
SIGNAL_CONFIDENCE = {
    "shape_strict":  0.99,
    "string":        0.97,
    "vtable":        0.90,
    # A vtable window whose two sides hold the same number of unmatched slots,
    # so order forces the alignment and the bracket corroborates on shape. Same
    # reasoning as `order_multi`, scored slightly above it because the window is
    # bounded by anchored slots of one class rather than by file position.
    "vtable_order":  0.82,
    "callsite":      0.85,
    # A singleton bracket is forced by two independent anchors. Its one failure
    # mode is a function removed and another added inside the same bracket,
    # which presents identically; widening the bracket only makes that more
    # likely, so multi-slot alignment is scored lower.
    "order":         0.85,
    "order_multi":   0.78,
    "caller":        0.75,
    "shape_relaxed": 0.80,
}

# Signals that are strong enough to anchor propagation on their own.
ANCHOR_SIGNALS = frozenset(("shape_strict", "string", "vtable"))

# A runner-up candidate scoring at least this fraction of the winner makes the
# match ambiguous; confidence is discounted and the pair is flagged.
AMBIGUITY_RATIO = 0.6
AMBIGUITY_PENALTY = 0.7

# Self-identifying error strings: "CDemonSet::setCameraView - invalid index".
CLASS_METHOD_RE = re.compile(r"\b([A-Za-z_]\w*)::([A-Za-z_]\w*)\b")


def shape_agreement(sha, shb):
    """How well a committed pair's two bodies actually resemble each other.

    Independent of *why* they were matched, so it is the natural gate for
    apply: a pair propagated through the call graph whose bodies differ wildly
    in size is the one worth a human look, whatever its confidence says.
    """
    if not sha or not shb:
        return "unshaped"
    if sha.strict == shb.strict:
        return "identical"
    if sha.relaxed == shb.relaxed:
        return "same_mnemonics"
    if abs(sha.ninsn - shb.ninsn) <= max(4, 0.25 * sha.ninsn):
        return "similar_size"
    return "size_mismatch"


def fuse(signals):
    """Combine independent signal confidences into one score.

    Each additional *distinct* signal halves the remaining doubt, so two weak
    but independent agreements outrank one weak signal, while never exceeding
    the ceiling of the strongest.
    """
    kinds = sorted({s for s, _ in signals}, key=lambda s: -SIGNAL_CONFIDENCE[s])
    if not kinds:
        return 0.0
    conf = SIGNAL_CONFIDENCE[kinds[0]]
    for _ in kinds[1:]:
        conf += (1.0 - conf) * 0.5
    return min(conf, 0.995)


# --------------------------------------------------------------------------
# Evidence accumulation
# --------------------------------------------------------------------------

class Evidence:
    """Candidate pairs and the signals supporting each."""

    def __init__(self):
        self.votes = defaultdict(list)   # (a, b) -> [(signal, detail)]

    def add(self, a, b, signal, detail=""):
        if a and b:
            self.votes[(a, b)].append((signal, detail))

    def score(self, a, b):
        return fuse(self.votes[(a, b)])


class Mapping:
    """A resolved 1:1 correspondence plus the reasoning behind it."""

    def __init__(self):
        self.a2b = {}
        self.b2a = {}
        self.detail = {}   # a -> dict(confidence, evidence, ambiguous)

    def __len__(self):
        return len(self.a2b)

    def add(self, a, b, confidence, evidence, ambiguous=False):
        self.a2b[a] = b
        self.b2a[b] = a
        self.detail[a] = {"confidence": round(confidence, 4),
                          "evidence": evidence,
                          "ambiguous": ambiguous}

    def has_a(self, a):
        return a in self.a2b

    def has_b(self, b):
        return b in self.b2a


def resolve(ev, mapping):
    """Greedily commit the highest-scoring unclaimed pairs into `mapping`.

    Greedy-by-score is the right resolution here rather than a global optimum:
    the score distribution is extremely bimodal (exact shape matches at 0.99,
    everything speculative well below), so the ordering is not close and a
    maximum-weight matching would cost far more for the same answer.
    """
    scored = []
    best_for_a = defaultdict(float)
    best_for_b = defaultdict(float)
    for (a, b), signals in ev.votes.items():
        if mapping.has_a(a) or mapping.has_b(b):
            continue
        s = fuse(signals)
        scored.append((s, a, b, signals))
        best_for_a[a] = max(best_for_a[a], s)
        best_for_b[b] = max(best_for_b[b], s)

    # Track the runner-up on each side so ambiguity can be detected.
    second_a, second_b = defaultdict(float), defaultdict(float)
    for s, a, b, _ in scored:
        if s < best_for_a[a]:
            second_a[a] = max(second_a[a], s)
        if s < best_for_b[b]:
            second_b[b] = max(second_b[b], s)

    scored.sort(key=lambda t: -t[0])
    added = 0
    for s, a, b, signals in scored:
        if mapping.has_a(a) or mapping.has_b(b):
            continue
        runner_up = max(second_a[a], second_b[b])
        ambiguous = runner_up >= AMBIGUITY_RATIO * s
        conf = s * (AMBIGUITY_PENALTY if ambiguous else 1.0)
        mapping.add(a, b, conf,
                    [f"{sig}:{det}" if det else sig for sig, det in signals],
                    ambiguous)
        added += 1
    return added


# --------------------------------------------------------------------------
# Seed signals
# --------------------------------------------------------------------------

def seed_shapes(ev, a_img, b_img, tier, signal):
    """Pair functions whose normalized shape is unique on both sides."""
    ia = sm.index_by(sm.shapes_for(a_img), tier)
    ib = sm.index_by(sm.shapes_for(b_img), tier)
    n = 0
    for h in set(ia) & set(ib):
        if len(ia[h]) == 1 and len(ib[h]) == 1:
            ev.add(ia[h][0], ib[h][0], signal, h[:8])
            n += 1
    return n


def seed_strings(ev, a_img, b_img):
    """Pair functions via a shared self-identifying "Class::method" string."""
    refs_a, refs_b = a_img.string_refs(), b_img.string_refs()

    def by_string(refs):
        out = defaultdict(set)
        for fn, values in refs.items():
            for v in values:
                if CLASS_METHOD_RE.search(v):
                    out[v].add(fn)
        return out

    sa, sb = by_string(refs_a), by_string(refs_b)
    n = 0
    for value in set(sa) & set(sb):
        # Require the string to identify exactly one function on each side --
        # a helper and its caller both referencing it makes it a weak hint.
        if len(sa[value]) == 1 and len(sb[value]) == 1:
            ev.add(next(iter(sa[value])), next(iter(sb[value])), "string",
                   value[:48])
            n += 1
    return n


# --------------------------------------------------------------------------
# Propagation signals
# --------------------------------------------------------------------------

# Shared anchored slots required before a source table is believed to be the
# same class as a target table. Matches map_vtable_slots.py's measured default.
VTABLE_MIN_ANCHORS = 3

# Widest gap the forced-order fill will align. A gap of one unmatched slot
# between two anchors is genuinely forced -- there is one candidate and one
# place for it. A wide gap with equal counts on both sides is a coincidence: one
# slot added and another removed keeps the totals equal while shifting the whole
# run, and bracket_aligns cannot see it here because the accessors that fill
# these tables are uniformly `same_mnemonics`, which it counts as agreement.
# Same reasoning as prop_order's `order` / `order_multi` split.
#
# Measured with reports/vtable_holdout_test.py at 10/20/40% holdouts of the
# exact pairs. Every setting makes the same single error -- the setWalkTimeout
# pair, and only once 40% of anchors are gone, which is far past real conditions
# -- so the bound buys recall rather than correctness:
#
#   cap 1   100% / 100% / 96.97%   33 correct at 40%,  4638 pairs overall
#   cap 3   100% / 100% / 98.04%   51 correct at 40%,  4649 pairs overall
#
# 3 therefore dominates 1 on both counts. Raise via the environment to explore;
# unbounded is not offered as a default because a wide equal-count gap is a
# coincidence rather than a constraint.
VTABLE_FORCED_MAX_GAP = int(os.environ.get("NOCTURNE_VTABLE_MAX_GAP", "3"))


def _vtable_slots(table):
    return [(e.get("func_addr") or "").lower()
            for e in table.get("functions", [])]


def _dedup(seq):
    """Order-preserving unique. A folded slot repeats one implementation.

    nocturne folds 14-17 slots per actor class onto a single stub (in
    CCharacter one function serves nine slots), so a raw slot list contains
    duplicates. Left in, the same target appears twice in a window and every
    shape lookup there looks ambiguous, rejecting pairs that were never in
    doubt.
    """
    seen, out = set(), []
    for x in seq:
        if x not in seen:
            seen.add(x)
            out.append(x)
    return out


def _tu_verdict(a_img, b_img, x, y):
    """True/False if both names carry a translation unit, else None.

    nocturne's units were assigned by hand, and apply_sibling_annotations.py
    preserves them rather than copying nocedit's, so unit agreement is evidence
    the vtable alignment did not itself consult.

    Unlike map_vtable_slots.py -- which ran as a post-pass over an
    already-94%-named nocturne and could therefore *require* a unit on both
    sides -- this runs while the mapping is still being built, and the functions
    it exists to match are precisely the ones nocturne has not named yet. So an
    absent unit cannot be treated as failure: this is a veto when determinable,
    not a precondition.
    """
    tu_a = sm.tu_of((a_img.by_addr.get(x) or {}).get("name"))
    tu_b = sm.tu_of((b_img.by_addr.get(y) or {}).get("name"))
    if not tu_a or not tu_b:
        return None
    return tu_a == tu_b


def _fill_vtable_gap(ev, a_img, b_img, shapes_a, shapes_b, ca, cb, detail):
    """Pair the unmatched slots between two anchors, only where forced.

    Positional filling on its own is not safe: doing it proposed
    CCharacter::setWalkTimeout -> 00428bb0 against an existing byte-identical
    match to 00428ee0. Slot position narrows the candidates well and chooses
    between them badly. So a gap is filled two ways, both requiring the choice
    to be forced rather than merely available:

      vtable        the source body's shape is UNIQUE among the window's
                    candidates -- position narrowed, shape decided.
      vtable_order  the window holds the same number of unmatched slots on both
                    sides, so order alone determines the alignment, and the
                    bracket corroborates on shape as a whole.

    The whole-bracket check is the lesson from the order-matching off-by-one:
    one function added and another removed inside the same window keeps the
    counts equal while shifting every slot, producing a run of confident,
    uniformly wrong matches.

    Only the STRICT shape tier may decide a match by uniqueness. The relaxed
    tier -- mnemonic sequence with operands discarded -- is not discriminative
    for the small accessors that fill these tables, where `mov eax,[ecx+N]; ret`
    is dozens of distinct methods, and being the only such body left in a window
    says nothing about which method it is. Measured on held-out exact pairs
    (reports/vtable_holdout_test.py) it reproduced the failure
    map_vtable_slots.py documents as unsafe, proposing
    CCharacter::setWalkTimeout -> 00428bb0 over the byte-identical 00428ee0.

    Translation-unit agreement does NOT rescue it, which is the reason the tier
    is gone rather than gated harder. The unit is blind to the case that
    actually occurs: source, wrong target and true target were all in
    core_charactr.cpp. Worse, on CLadder::getGroundType it inverted the answer --
    nocturne files the true target 005543b0 under core_weapon.cpp while the
    wrong 004c47c0 sits in core_ladder.cpp, so requiring agreement rejected the
    correct pair and kept the incorrect one. It is one of the 40 known SKIP_TU
    disagreements, and it is evidence that unit agreement bounds cross-file
    error only -- not the within-file confusion this pass has to survive.

    Relaxed shape still contributes, but as corroboration over a whole bracket
    (via bracket_aligns) rather than as a per-slot decision.
    """
    n = 0
    taken_a, taken_b = set(), set()

    idx = defaultdict(set)
    for y in cb:
        sh = shapes_b.get(y)
        if sh is not None:
            idx[sh.strict].add(y)
    for x in ca:
        sh = shapes_a.get(x)
        if sh is None:
            continue
        hit = idx.get(sh.strict)
        if not hit or len(hit) != 1:
            continue
        y = next(iter(hit))
        if y in taken_b or _tu_verdict(a_img, b_img, x, y) is False:
            continue
        ev.add(x, y, "vtable", f"{detail} strict")
        taken_a.add(x)
        taken_b.add(y)
        n += 1

    rest_a = [x for x in ca if x not in taken_a]
    rest_b = [y for y in cb if y not in taken_b]
    if (rest_a and len(rest_a) == len(rest_b)
            and len(rest_a) <= VTABLE_FORCED_MAX_GAP
            and bracket_aligns(shapes_a, shapes_b, rest_a, rest_b)):
        for x, y in zip(rest_a, rest_b):
            # Order forces the alignment only if the window really is the same
            # region of the same class in both builds; the unit is the one check
            # of that which the alignment did not itself produce.
            if _tu_verdict(a_img, b_img, x, y) is not True:
                continue
            ev.add(x, y, "vtable_order", f"{detail} forced")
            n += 1
    return n


def prop_vtables(ev, a_img, b_img, mapping, use_lcs=True):
    """Align sibling vtables by LCS over anchored slots, then fill the gaps.

    The previous rule required the two tables to have the SAME SLOT COUNT and
    then zipped them positionally. The actor hierarchy is exactly where that
    fails: nocedit's tables run 59/67/85/88/89 slots against nocturne's
    52/60/82, because the editor build inserts a contiguous block of 7 virtual
    methods (onAreaDeleted, onActorDeleted, processInEditor, getPropertyList,
    initializeInEditor, showEditorHelp, addFilesToExtract). The same-count
    filter discarded 103 of 400 tables outright and a further 74 fell under the
    two-anchor bar -- 199 tables contributing nothing, and precisely the drifted
    ones.

    So tables are paired by *shared anchored slots* rather than by count, and
    aligned with an LCS so an insertion on either side becomes a gap instead of
    breaking everything after it. See research/14-actor_vtable_contract for the
    derived contract this mirrors.

    `use_lcs=False` restores the old same-count positional rule for A/B.
    """
    if not use_lcs:
        return _prop_vtables_by_count(ev, a_img, b_img, mapping)

    shapes_a, shapes_b = sm.shapes_for(a_img), sm.shapes_for(b_img)

    b_slots, b_member = {}, defaultdict(set)
    for t in b_img.vtables:
        addr = (t.get("addr") or "").lower()
        slots = _vtable_slots(t)
        b_slots[addr] = slots
        for f in slots:
            if f:
                b_member[f].add(addr)

    n = 0
    for ta in a_img.vtables:
        sa = _vtable_slots(ta)
        if len(sa) < 2:
            continue

        # Which target table is this class? Vote with the slots already matched.
        cand = Counter()
        for f in sa:
            tgt = mapping.a2b.get(f)
            if tgt:
                for addr in b_member.get(tgt, ()):
                    cand[addr] += 1
        if not cand:
            continue
        baddr, hits = cand.most_common(1)[0]
        if hits < VTABLE_MIN_ANCHORS:
            continue
        sb = b_slots[baddr]

        anchors = sm.lcs_anchors([mapping.a2b.get(x) for x in sa], sb)
        if len(anchors) < VTABLE_MIN_ANCHORS:
            continue

        # The winning table pair, not whichever candidate the loop saw last --
        # the previous version recorded the loop variable here.
        detail = f"{(ta.get('addr') or '').lower()}<->{baddr}"

        ext = [(-1, -1)] + anchors + [(len(sa), len(sb))]
        for (i0, j0), (i1, j1) in zip(ext, ext[1:]):
            ca = _dedup([sa[k] for k in range(i0 + 1, i1)
                         if sa[k] and not mapping.has_a(sa[k])])
            cb = _dedup([sb[k] for k in range(j0 + 1, j1)
                         if sb[k] and not mapping.has_b(sb[k])])
            if not ca or not cb:
                continue
            n += _fill_vtable_gap(ev, a_img, b_img, shapes_a, shapes_b,
                                  ca, cb, detail)
    return n


def _prop_vtables_by_count(ev, a_img, b_img, mapping):
    """The pre-LCS rule: same slot count, two anchors, positional zip.

    Kept only so --no-vtable-lcs can measure what the change is worth.
    """
    by_count_b = defaultdict(list)
    for t in b_img.vtables:
        by_count_b[t.get("count", 0)].append(t)

    n = 0
    for ta in a_img.vtables:
        count = ta.get("count", 0)
        if count < 2:
            continue
        fa = _vtable_slots(ta)
        best, best_tb, best_hits = None, None, 0
        for tb in by_count_b.get(count, []):
            fb = _vtable_slots(tb)
            hits = sum(1 for x, y in zip(fa, fb) if mapping.a2b.get(x) == y and y)
            if hits > best_hits:
                best, best_tb, best_hits = fb, tb, hits
        if best is None or best_hits < 2:
            continue
        for x, y in zip(fa, best):
            if not x or not y:
                continue
            if mapping.has_a(x) or mapping.has_b(y):
                if mapping.a2b.get(x) not in (None, y):
                    break
                continue
            ev.add(x, y, "vtable",
                   f"{ta.get('addr', '')}<->{best_tb.get('addr', '')}")
            n += 1
    return n


def prop_callsites(ev, a_img, b_img, mapping):
    """Propagate along the ordered call sequences of anchored pairs."""
    ca, cb = a_img.callsites, b_img.callsites
    n = 0
    for a, b in mapping.a2b.items():
        la, lb = ca.get(a), cb.get(b)
        if not la or not lb or len(la) != len(lb):
            continue
        # Require the already-known entries to agree before trusting the rest.
        known = [(x, y) for x, y in zip(la, lb) if mapping.has_a(x)]
        if any(mapping.a2b[x] != y for x, y in known):
            continue
        for x, y in zip(la, lb):
            if not mapping.has_a(x) and not mapping.has_b(y):
                ev.add(x, y, "callsite", f"via {a}")
                n += 1
    return n


def longest_increasing(values):
    """Indices of a longest strictly-increasing subsequence of `values`."""
    tails, tail_idx, prev = [], [], [None] * len(values)
    for i, v in enumerate(values):
        j = bisect.bisect_left(tails, v)
        if j == len(tails):
            tails.append(v)
            tail_idx.append(i)
        else:
            tails[j] = v
            tail_idx[j] = i
        prev[i] = tail_idx[j - 1] if j else None
    out, k = [], (tail_idx[-1] if tail_idx else None)
    while k is not None:
        out.append(k)
        k = prev[k]
    out.reverse()
    return out


# A multi-slot bracket's identity alignment is accepted only if at least this
# fraction of its measurable pairs corroborate on shape.
BRACKET_MIN_AGREEMENT = 0.5


def bracket_aligns(shapes_a, shapes_b, gap_a, gap_b):
    """Does a multi-slot bracket's identity alignment hold up on shape?

    Equal counts do not by themselves force the alignment: a function added
    and another removed inside the same bracket keeps the count equal while
    shifting every slot, which produces a run of confident, uniformly wrong
    matches -- the worst possible failure, because it looks orderly.

    Checking the bracket *as a whole* catches that without giving up what the
    signal is for. A single edited function inside an otherwise-corroborating
    bracket is still matched, because it is outvoted by its neighbours; only
    when the bracket as a whole fails to corroborate is the alignment itself
    rejected.

    `unshaped` pairs carry no information either way and are excluded rather
    than counted as agreement.
    """
    if len(gap_a) < 2:
        return True
    good = bad = 0
    for x, y in zip(gap_a, gap_b):
        verdict = shape_agreement(shapes_a.get(x), shapes_b.get(y))
        if verdict == "size_mismatch":
            bad += 1
        elif verdict != "unshaped":
            good += 1
    if not (good + bad):
        return False
    return good >= BRACKET_MIN_AGREEMENT * (good + bad)


def prop_order(ev, a_img, b_img, mapping, editor_only=None):
    """Match by position within a translation unit.

    The linker lays an object file's code out as one contiguous run and the
    compiler keeps source order inside it, so a unit's functions appear in the
    same relative order in both builds. Two already-matched functions therefore
    bracket a region, and any unmatched function between them in nocedit must
    correspond to something between their counterparts in nocturne -- or to
    nothing at all, if the game build dropped it.

    When the two sides of a bracket hold the same number of functions, order
    alone determines the alignment; no similarity is consulted. That is what
    makes this pass able to match functions whose *body was edited* between the
    builds, which every other signal here is blind to by construction.

    Anchors are first reduced to a longest increasing subsequence. A pair that
    breaks monotonicity is either a mismatch or a genuinely moved function;
    either way it cannot be trusted to bracket a region, and one bad anchor
    would otherwise corrupt every gap it touches.

    `crt_*` units are skipped: they come from libraries, are laid out per
    archive member rather than in source order, and are the only units where
    the monotonicity this rests on measurably fails.
    """
    b_all = b_img.addrs_sorted
    shapes_a, shapes_b = sm.shapes_for(a_img), sm.shapes_for(b_img)
    n_forced = 0

    for tu, addrs in a_img.tu_groups().items():
        if tu.startswith("crt_"):
            continue
        matched = [(i, a) for i, a in enumerate(addrs) if mapping.has_a(a)]
        if len(matched) < 2:
            continue
        keep = longest_increasing([int(mapping.a2b[a], 16) for _, a in matched])
        anchors = [matched[k] for k in keep]

        for (ia, aa), (ib, ab) in zip(anchors, anchors[1:]):
            gap_a = [addrs[k] for k in range(ia + 1, ib)
                     if not mapping.has_a(addrs[k])]
            if not gap_a:
                continue
            lo, hi = int(mapping.a2b[aa], 16), int(mapping.a2b[ab], 16)
            gap_b = [f"{v:08x}" for v in
                     b_all[bisect.bisect_right(b_all, lo):bisect.bisect_left(b_all, hi)]
                     if not mapping.has_b(f"{v:08x}")]

            if not gap_b:
                # Bracketed on both sides with nothing to match: these exist in
                # the editor build and nowhere in the game build.
                if editor_only is not None:
                    editor_only.extend((tu, a) for a in gap_a)
                continue
            if len(gap_a) != len(gap_b):
                # Unequal counts mean something was added or removed as well as
                # kept; position no longer determines which is which.
                continue
            if not bracket_aligns(shapes_a, shapes_b, gap_a, gap_b):
                continue

            signal = "order" if len(gap_a) == 1 else "order_multi"
            for x, y in zip(gap_a, gap_b):
                ev.add(x, y, signal, f"{tu} between {aa} and {ab}")
                n_forced += 1

    return n_forced


def prop_callers(ev, a_img, b_img, mapping):
    """Propagate to the unique unmatched caller of an anchored pair."""
    inv_a, inv_b = a_img.callers_of(), b_img.callers_of()
    n = 0
    for a, b in mapping.a2b.items():
        ua = [x for x in inv_a.get(a, ()) if not mapping.has_a(x)]
        ub = [y for y in inv_b.get(b, ()) if not mapping.has_b(y)]
        if len(ua) == 1 and len(ub) == 1:
            ev.add(ua[0], ub[0], "caller", f"calls {a}")
            n += 1
    return n


# --------------------------------------------------------------------------
# Driver
# --------------------------------------------------------------------------

def build_mapping(a_img, b_img, max_rounds=12, verbose=True, use_order=True,
                  use_vtable_lcs=True):
    ev = Evidence()
    mapping = Mapping()
    log = []

    def note(msg):
        log.append(msg)
        if verbose:
            print(msg, file=sys.stderr)

    note("== seeding ==")
    note(f"  shape_strict : {seed_shapes(ev, a_img, b_img, 'strict', 'shape_strict')} candidate pairs")
    note(f"  string       : {seed_strings(ev, a_img, b_img)} candidate pairs")
    added = resolve(ev, mapping)
    note(f"  -> {added} matched ({len(mapping)} total)")

    note("== propagating ==")
    for rnd in range(1, max_rounds + 1):
        v = prop_vtables(ev, a_img, b_img, mapping, use_lcs=use_vtable_lcs)
        c = prop_callsites(ev, a_img, b_img, mapping)
        k = prop_callers(ev, a_img, b_img, mapping)
        o = prop_order(ev, a_img, b_img, mapping) if use_order else 0
        added = resolve(ev, mapping)
        note(f"  round {rnd}: vtable={v} callsite={c} caller={k} order={o} "
             f"-> +{added} ({len(mapping)} total)")
        # Stop when a round adds less than 1% of the current mapping.
        if added <= max(1, len(mapping) // 100):
            break

    note("== corroboration ==")
    r = seed_shapes(ev, a_img, b_img, "relaxed", "shape_relaxed")
    added = resolve(ev, mapping)
    note(f"  shape_relaxed: {r} candidate pairs -> +{added} ({len(mapping)} total)")

    # A final bracket pass: the relaxed round just added anchors, which narrows
    # gaps that were previously too loose to resolve. It also settles which
    # functions are bracketed with no counterpart at all -- meaningful only
    # once nothing further will be matched.
    editor_only = []
    if use_order:
        o = prop_order(ev, a_img, b_img, mapping, editor_only)
        added = resolve(ev, mapping)
        note(f"  order (final): {o} candidate pairs -> +{added} ({len(mapping)} total)")
        note(f"  bracketed with no counterpart: {len(editor_only)} (editor-only)")

    return mapping, log, editor_only


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--from", dest="a_prog", default="nocedit.exe",
                    help="annotated source program (default: nocedit.exe)")
    ap.add_argument("--to", dest="b_prog", default="nocturne.exe",
                    help="target program to name (default: nocturne.exe)")
    ap.add_argument("-o", "--out", help="write the mapping as JSON")
    ap.add_argument("--min-confidence", type=float, default=0.0,
                    help="drop pairs below this confidence from the output")
    ap.add_argument("--show", type=int, default=20,
                    help="sample N matches in the report (default: 20)")
    ap.add_argument("--no-order", action="store_true",
                    help="disable translation-unit order matching (for A/B)")
    ap.add_argument("--no-vtable-lcs", action="store_true",
                    help="use the old same-slot-count vtable rule (for A/B)")
    ap.add_argument("-q", "--quiet", action="store_true")
    args = ap.parse_args()

    a_img = sm.Image(args.a_prog)
    b_img = sm.Image(args.b_prog)
    if not args.quiet:
        print(f"{args.a_prog}: {len(a_img.functions)} functions\n"
              f"{args.b_prog}: {len(b_img.functions)} functions\n", file=sys.stderr)

    mapping, _, editor_only = build_mapping(a_img, b_img, verbose=not args.quiet,
                                            use_order=not args.no_order,
                                            use_vtable_lcs=not args.no_vtable_lcs)

    # ---- report ----------------------------------------------------------
    by_signal = Counter()
    by_band = Counter()
    named_transfers = 0
    for a, d in mapping.detail.items():
        for e in d["evidence"]:
            by_signal[e.split(":", 1)[0]] += 1
        c = d["confidence"]
        band = "0.95+" if c >= 0.95 else "0.90+" if c >= 0.90 else \
               "0.80+" if c >= 0.80 else "0.60+" if c >= 0.60 else "<0.60"
        by_band[band] += 1
        if not sm.is_unnamed(a_img.by_addr[a]["name"]):
            named_transfers += 1

    total_b = len(b_img.functions)
    print(f"\nmatched {len(mapping)} pairs "
          f"({100.0 * len(mapping) / total_b:.1f}% of {args.b_prog}'s {total_b} functions)")
    print(f"  carrying a real name from {args.a_prog}: {named_transfers}")
    print(f"  ambiguous (runner-up close): "
          f"{sum(1 for d in mapping.detail.values() if d['ambiguous'])}")
    print("\nby confidence band:")
    for band in ("0.95+", "0.90+", "0.80+", "0.60+", "<0.60"):
        if by_band[band]:
            print(f"  {band:>6} : {by_band[band]}")
    print("\nby supporting signal (pairs may have several):")
    for sig, n in by_signal.most_common():
        print(f"  {sig:<14}: {n}")

    if args.show:
        print(f"\nsample of {args.show} matches:")
        rows = sorted(mapping.detail.items(), key=lambda kv: -kv[1]["confidence"])
        for a, d in rows[:args.show]:
            name = sm.strip_addr_suffix(a_img.by_addr[a]["name"])
            print(f"  {d['confidence']:.2f} {a} -> {mapping.a2b[a]}  {name[:64]}")
            print(f"        {', '.join(d['evidence'])[:110]}")

    # ---- output ----------------------------------------------------------
    if args.out:
        shapes_a, shapes_b = sm.shapes_for(a_img), sm.shapes_for(b_img)
        pairs = []
        for a, b in sorted(mapping.a2b.items()):
            d = mapping.detail[a]
            if d["confidence"] < args.min_confidence:
                continue
            rec_a = a_img.by_addr[a]
            pairs.append({
                "a": a,
                "b": b,
                "name": rec_a["name"],
                "confidence": d["confidence"],
                "ambiguous": d["ambiguous"],
                "evidence": d["evidence"],
                "shape_agreement": shape_agreement(shapes_a.get(a), shapes_b.get(b)),
                "conv": rec_a.get("conv"),
                "ret": rec_a.get("ret"),
            })
        payload = {
            "from": args.a_prog,
            "to": args.b_prog,
            "pairs": pairs,
            # Bracketed by matched neighbours on both sides with nothing
            # between them in the game build: present in the editor only.
            # Stronger than "unmatched", which merely means "not found".
            "editor_only": [{"a": a, "tu": tu,
                             "name": a_img.by_addr[a]["name"]}
                            for tu, a in sorted(editor_only, key=lambda t: t[1])],
            "unmatched_a": sorted(f["addr"].lower() for f in a_img.functions
                                  if not mapping.has_a(f["addr"].lower())),
            "unmatched_b": sorted(f["addr"].lower() for f in b_img.functions
                                  if not mapping.has_b(f["addr"].lower())),
        }
        with open(args.out, "w") as fh:
            json.dump(payload, fh, indent=1)
        print(f"\nwrote {args.out} ({len(pairs)} pairs)")


if __name__ == "__main__":
    main()
