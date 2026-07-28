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

def prop_vtables(ev, a_img, b_img, mapping):
    """Align vtable pairs anchored by already-matched slots, then pair the rest.

    A class whose method list changed between builds mis-aligns after the
    inserted/removed slot, so only the prefix up to the first disagreement is
    propagated and the remainder is abandoned.
    """
    va, vb = a_img.vtables, b_img.vtables
    by_count_b = defaultdict(list)
    for t in vb:
        by_count_b[t.get("count", 0)].append(t)

    n = 0
    for ta in va:
        count = ta.get("count", 0)
        if count < 2:
            continue
        fa = [e.get("func_addr", "").lower() for e in ta.get("functions", [])]
        best, best_hits = None, 0
        for tb in by_count_b.get(count, []):
            fb = [e.get("func_addr", "").lower() for e in tb.get("functions", [])]
            hits = sum(1 for x, y in zip(fa, fb) if mapping.a2b.get(x) == y and y)
            if hits > best_hits:
                best, best_hits = fb, hits
        # Two independently-anchored slots agreeing is the bar for trusting
        # positional correspondence for the rest of the table.
        if best is None or best_hits < 2:
            continue
        for x, y in zip(fa, best):
            if not x or not y:
                continue
            if mapping.has_a(x) or mapping.has_b(y):
                # Already decided; a disagreement means the tables diverge here.
                if mapping.a2b.get(x) not in (None, y):
                    break
                continue
            ev.add(x, y, "vtable", f"{ta.get('addr', '')}<->{tb.get('addr', '')}")
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

def build_mapping(a_img, b_img, max_rounds=12, verbose=True, use_order=True):
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
        v = prop_vtables(ev, a_img, b_img, mapping)
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
    ap.add_argument("-q", "--quiet", action="store_true")
    args = ap.parse_args()

    a_img = sm.Image(args.a_prog)
    b_img = sm.Image(args.b_prog)
    if not args.quiet:
        print(f"{args.a_prog}: {len(a_img.functions)} functions\n"
              f"{args.b_prog}: {len(b_img.functions)} functions\n", file=sys.stderr)

    mapping, _, editor_only = build_mapping(a_img, b_img, verbose=not args.quiet,
                                            use_order=not args.no_order)

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
