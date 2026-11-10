#!/usr/bin/env python3
"""Measure how each class's field offsets shifted between the sibling builds.

nocedit.exe's type library cannot be copied onto nocturne.exe as-is. The editor
build carries extra members, so a class's fields sit at different offsets in the
two binaries -- `CDemonSet` is 1000 bytes fatter, the `CCharacter` base 408.
Importing the layouts verbatim would give nocturne confidently-wrong field
offsets, which is worse than having no types at all.

The shift is recoverable, because a matched pair of methods is the *same code*
compiled against the two layouts. Align the two instruction streams and every
place they disagree only in a displacement is one observation of
"nocedit offset X is nocturne offset Y" for whatever object that instruction was
addressing. Aggregate across all of a class's matched methods and the layout
difference falls out as a piecewise-constant map.

What this can and cannot tell you:

  * Offsets are observed only where matched code actually touches them, so the
    map has gaps. A segment boundary is known to lie *between* two observed
    offsets, never exactly; both bounds are reported.
  * A method addresses more than just `this` -- globals, arguments, other
    objects -- so a class's observations are a mixture. Segments carry a support
    count and a purity, and low-purity output should be read as a hint, not a
    layout.
  * Classes with no matched methods (plain value types like CVector3f, which are
    parameters rather than method owners) cannot be measured this way at all.
    They are listed separately as unmeasured.

Usage:
    derive_struct_drift.py mapping.json
    derive_struct_drift.py mapping.json --out drift.json --min-observations 20
    derive_struct_drift.py mapping.json --class CDemonSet -v
"""

import argparse
import difflib
import json
import os
import re
import sys
from collections import Counter, defaultdict

from capstone import Cs, CS_ARCH_X86, CS_MODE_32

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm

_MD = Cs(CS_ARCH_X86, CS_MODE_32)
_MD.detail = False

_NUM = re.compile(r"0x[0-9a-f]+|\b\d+\b")
# The class token in an exported name: core_set.cpp_CDemonSet_lightVerticies_FUN_x
_CLASS = re.compile(r"_(C[A-Z][A-Za-z0-9]*)_")
# A memory operand. A field offset is always a displacement inside one of
# these; a bare immediate (`cmp eax, 5`) never is, and counting those was what
# filled the first version's output with one-observation phantom segments.
_MEMOP = re.compile(r"\[([^\]]*)\]")
# One signed term of a memory operand: `eax`, `+ ecx*4`, `- 0x10`.
_TERM = re.compile(r"([+-]?)\s*([^+-]+)")
_NUMBER = re.compile(r"0x[0-9a-f]+|\d+")

# Displacements plausibly inside an object. Above this and it is an absolute
# address that happened to fall outside the image, not a field offset.
MAX_FIELD_OFFSET = 0x200000


def _displacements(op_str, frame=("esp", "ebp")):
    """Signed numeric displacements inside memory operands, in order.

    A term is read with its sign, so `[ecx - 0x10]` is -16 rather than +16, and
    an index scale (`ecx*4`) is not a displacement at all.

    Stack-relative operands are excluded. Watcom addresses locals off esp with
    no frame pointer, so `[esp + 0x144]` is a stack slot, not a field -- yet it
    is shaped exactly like one. Counting them was ~47% of all observations: a
    pair of functions whose frames happen to match contributes a flood of phantom
    "this offset did not move" evidence, and a pair whose frames differ by N
    contributes a phantom shift of N at every slot. That is where the spurious
    -0x1c and -0x40 segments came from. Watcom also uses ebp as an ordinary
    register, so a caller that can tell a field from a slot passes frame=("esp",).
    """
    out = []
    for mem in _MEMOP.findall(op_str):
        if any(reg in mem for reg in frame):
            continue
        for sign, term in _TERM.findall(mem):
            term = term.strip()
            if _NUMBER.fullmatch(term):
                out.append(-int(term, 0) if sign == "-" else int(term, 0))
    return out


def _insns_at(image, addr):
    """Linear disassembly of a function as [(address, mnemonic, op_str)], or None."""
    func = image.by_addr.get(addr)
    if not func:
        return None
    out = []
    for start, end in sorted((int(b["start"], 16), int(b["end"], 16))
                             for b in func.get("body", []) or []):
        off = image.va2off(start)
        if off is None:
            return None
        out.extend((i.address, i.mnemonic, i.op_str)
                   for i in _MD.disasm(image.data[off:off + (end - start + 1)], start))
    return out


def _insns(image, addr):
    """Linear disassembly of a function as [(mnemonic, op_str)], or None."""
    out = _insns_at(image, addr)
    return None if out is None else [(m, o) for _, m, o in out]


def _shape(insn):
    """An instruction with its literals blanked: two of one shape differ only in numbers."""
    return insn[1] + " " + _NUM.sub("#", insn[2])


def aligned(a_insns, b_insns, align=False):
    """[(a, b)] instructions paired in order: zipped when the streams are the same
    length; otherwise nothing, or with `align` the runs of equal shape difflib
    finds. Those can pair a run of like stores one slot off where the sibling
    inserted a store into it, so they are opt-in."""
    if len(a_insns) == len(b_insns):
        return list(zip(a_insns, b_insns))
    if not align:
        return []
    matcher = difflib.SequenceMatcher(a=[_shape(i) for i in a_insns],
                                      b=[_shape(i) for i in b_insns], autojunk=False)
    return [(a_insns[i + k], b_insns[j + k])
            for i, j, n in matcher.get_matching_blocks() for k in range(n)]


def load_typed(path):
    """({address: [(struct, offset)]}, {struct: reference length}, {address: [(struct,
    size, kind)]}) from export_typed_accesses.py's output."""
    with open(path, encoding="utf-8") as fh:
        data = json.load(fh)
    return ({int(a, 16): [tuple(r) for r in roots] for a, roots in data["accesses"].items()},
            data["sizes"],
            {int(a, 16): [tuple(r) for r in found] for a, found in data.get("size_uses", {}).items()})


def field_delta(segments, offset, tail_delta):
    """How far a field at the reference's `offset` moved, or None where that is not known.

    Inside an observed segment, or between two that moved alike, the field
    moved with them: a field inserted between them would show as a change of
    delta. Between segments that differ, the insertion could lie on either side
    of it. Before the first segment it is known only if that segment did not
    move; after the last, only if the class's whole size change (`tail_delta`)
    is that segment's delta -- otherwise the unexplained bytes could sit before it.
    Offset 0 never moves: nothing is inserted ahead of a struct's first member,
    a derived class's base above all.
    """
    if offset == 0:
        return 0
    prev = next_ = None
    for s in segments:
        if s["from_lo"] <= offset <= s["from_hi"]:
            return s["delta"]
        if s["from_hi"] < offset:
            prev = s
        elif next_ is None:
            next_ = s
    if prev and next_:
        return prev["delta"] if prev["delta"] == next_["delta"] else None
    if next_:
        return 0 if next_["delta"] == 0 else None
    if prev:
        return prev["delta"] if prev["delta"] == tail_delta else None
    return None


def by_value_members(program):
    """{struct: [(offset, member struct, count, element length)]}: the structs each of the
    program's structs holds by value, alone or as an array, from its exported layouts."""
    path = os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")
    try:
        with open(path, encoding="utf-8") as fh:
            structs = json.load(fh).get("structs", [])
    except OSError:
        return {}
    sizes = {s.get("name"): s.get("len") or 0 for s in structs}
    out = {}
    for s in structs:
        members = []
        for f in s.get("fields", []):
            core = (f.get("type") or "").split("[", 1)[0].strip()
            length = sizes.get(core, 0)
            if core.endswith("*") or length <= 1 or (f.get("len") or 0) < length:
                continue
            members.append((f["offset"], core, f["len"] // length, length))
        if members:
            out[s.get("name")] = members
    return out


def nest(obs, members, rounds=6, min_support=3):
    """(sightings, element sizes): `obs` plus what each struct held by value learns
    from its container's sightings, and the sibling's size of array elements.

    A container's sighting at offset x inside a member struct S at offset o is a
    sighting of S itself: inner offset x - o, sibling offset y - o', where o' is
    o moved by the container's own measured shift (field_delta; unknown there,
    nothing is passed down). In an array, a sighting in element k > 0 says
    k * size + inner offset, so with S's own shift at that inner offset known it
    gives S's sibling size. Each round passes the last round's new sightings one
    level down (a class's `base`, then its members), with the shifts measured
    over everything gathered so far.
    """
    total = {name: Counter(c) for name, c in obs.items()}
    sizes = defaultdict(Counter)
    frontier = obs
    for _ in range(rounds):
        shifts = {name: [s for s in segment(c)[0] if s["support"] >= min_support] for name, c in total.items()}
        found = defaultdict(Counter)
        for name, counter in frontier.items():
            for (x, y), n in counter.items():
                for offset, inner_name, count, length in members.get(name, []):
                    if not offset <= x < offset + count * length:
                        continue
                    base = field_delta(shifts.get(name, []), offset, None)
                    if base is None:
                        break
                    k, inner = divmod(x - offset, length)
                    rel = y - offset - base
                    if k == 0:
                        found[inner_name][(inner, rel)] += n
                    else:
                        moved = field_delta(shifts.get(inner_name, []), inner, None)
                        if moved is not None and (rel - inner - moved) % k == 0:
                            sizes[inner_name][(rel - inner - moved) // k] += n
                    break
        if not found:
            break
        for name, c in found.items():
            total.setdefault(name, Counter()).update(c)
        frontier = found
    return total, sizes


# How far before an allocator call its size argument may be loaded
ALLOC_WINDOW = 8


def _paired_numbers(o1, o2, value):
    """The sibling's literals at the places the reference's operand spells `value`."""
    xs, ys = _NUM.findall(o1), _NUM.findall(o2)
    return [int(y, 0) for x, y in zip(xs, ys) if int(x, 0) == value]


def observe_sizes(a_img, b_img, pairs, uses):
    """struct -> Counter of the sibling's size, read where the reference spells the
    struct's size as a constant (export_typed_accesses.py size uses): at an array
    stride, in that instruction; at an allocation, in the few instructions before
    the call that load its argument. Only instructions of the same shape are read."""
    seen = defaultdict(Counter)
    for p in pairs:
        A, B = _insns_at(a_img, p["a"]), _insns_at(b_img, p["b"])
        if not A or not B:
            continue
        paired = aligned(A, B)
        index = {a[0]: i for i, (a, _) in enumerate(paired)}
        for va, found in ((va, uses[va]) for va in index if va in uses):
            i = index[va]
            for name, size, kind in found:
                window = paired[i:i + 1] if kind == "stride" else paired[max(0, i - ALLOC_WINDOW):i]
                for (_, m1, o1), (_, m2, o2) in reversed(window):
                    if m1 != m2 or _NUM.sub("#", o1) != _NUM.sub("#", o2):
                        continue
                    got = _paired_numbers(o1, o2, size)
                    if got:
                        seen[name][got[0]] += 1
                        break
    return seen


def observe_typed(a_img, b_img, pairs, typed, sizes, include_unshifted=False, align=False):
    """observe(), crediting each sighting to the struct the reference's decompiler
    types the access with (`typed`, from load_typed) rather than to the method's
    owner. A displacement is credited only where it is the access's recorded
    offset, which is what makes ebp operands safe to read, and only inside the
    struct's reference size (`sizes`): past it, the pointer held a derived object
    its variable's type does not name. Every matched pair counts, methods or not.
    """
    obs = defaultdict(Counter)
    pairs_seen, compared = Counter(), Counter()
    for p in pairs:
        A, B = _insns_at(a_img, p["a"]), _insns_at(b_img, p["b"])
        if not A or not B:
            continue
        touched = set()
        for (va, m1, o1), (_, m2, o2) in aligned(A, B, align):
            roots = typed.get(va)
            if not roots or m1 != m2 or m1 in ("call", "jmp") or _NUM.sub("#", o1) != _NUM.sub("#", o2):
                continue
            for vx, vy in zip(_displacements(o1, ("esp",)), _displacements(o2, ("esp",))):
                for name, offset in roots:
                    if offset != vx or not 0 <= offset < sizes.get(name, 0):
                        continue
                    touched.add(name)
                    if vx != vy or include_unshifted:
                        obs[name][(vx, vy)] += 1
        for name in touched:
            pairs_seen[name] += 1
            compared[name] += 1
    return obs, defaultdict(Counter), pairs_seen, compared


def observe(a_img, b_img, pairs, include_unshifted=False):
    """class -> Counter of (nocedit_offset, nocturne_offset) sightings.

    Returns field sightings and vtable-slot sightings separately. `call [edx +
    0x120]` is a virtual dispatch: edx holds the vtable pointer, so 0x120 indexes
    the vtable, not the object. Mixing the two conflates unrelated address spaces
    and was the source of the phantom -0x1c segment on every actor class -- that
    shift is real, but it is seven virtual methods dropped from the actor vtable,
    not twenty-eight bytes removed from the struct.
    """
    obs = defaultdict(Counter)
    vobs = defaultdict(Counter)
    methods = Counter()
    compared = Counter()
    for p in pairs:
        m = _CLASS.search(p["name"])
        if not m:
            continue
        cls = m.group(1)
        methods[cls] += 1
        A, B = _insns(a_img, p["a"]), _insns(b_img, p["b"])
        # Only position-aligned streams are safe to zip; a length difference
        # means the code itself changed and the alignment would be fiction.
        if not A or not B or len(A) != len(B):
            continue
        compared[cls] += 1
        for (m1, o1), (m2, o2) in zip(A, B):
            if m1 != m2:
                continue
            # An identical operand is normally nothing to say, but it is the only
            # evidence that an offset did *not* move -- and without a "did not
            # move" bound every boundary is open-ended on the low side.
            if o1 == o2 and not include_unshifted:
                continue
            # Same instruction shape, differing only in literals -- which also
            # means both operands hold their displacements in the same places.
            if _NUM.sub("#", o1) != _NUM.sub("#", o2):
                continue
            for vx, vy in zip(_displacements(o1), _displacements(o2)):
                if vx == vy and not include_unshifted:
                    continue
                if a_img.is_mapped_va(vx) and b_img.is_mapped_va(vy):
                    continue                      # relocated absolute address
                if 0 < vx < MAX_FIELD_OFFSET:
                    sink = vobs if m1 in ("call", "jmp") else obs
                    sink[cls][(vx, vy)] += 1
    return obs, vobs, methods, compared


def segment(counter, min_support=2):
    """Fold (from, to) sightings into piecewise-constant offset segments.

    Returns [{from_lo, from_hi, delta, support, purity, boundary_before}] in
    ascending offset order, plus the overall purity of the model.
    """
    # One delta per source offset: the majority vote, since a given offset can
    # be reached through different base objects in different instructions.
    per_offset = defaultdict(Counter)
    for (vx, vy), n in counter.items():
        per_offset[vx][vy - vx] += n

    points = []
    total = impure = 0
    for vx in sorted(per_offset):
        votes = per_offset[vx]
        delta, n = votes.most_common(1)[0]
        allv = sum(votes.values())
        total += allv
        impure += allv - n
        if allv >= min_support or len(votes) == 1:
            points.append((vx, delta, allv))
    if not points:
        return [], 0.0

    segs = []
    cur = {"from_lo": points[0][0], "from_hi": points[0][0],
           "delta": points[0][1], "support": points[0][2],
           "boundary_before": None}
    for vx, delta, n in points[1:]:
        if delta == cur["delta"]:
            cur["from_hi"] = vx
            cur["support"] += n
        else:
            segs.append(cur)
            cur = {"from_lo": vx, "from_hi": vx, "delta": delta, "support": n,
                   # The real boundary is somewhere in this gap; we cannot see
                   # inside it because no matched instruction touched it.
                   "boundary_before": [segs[-1]["from_hi"], vx]}
    segs.append(cur)
    purity = 1.0 - (impure / total) if total else 0.0
    return segs, purity


def main(argv=None):
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("mapping")
    ap.add_argument("--out", help="write the drift spec as JSON")
    ap.add_argument("--include-unshifted", action="store_true",
                    help="also record offsets that did NOT move, which bound a "
                         "boundary from below (noisier: only for --dump-observations)")
    ap.add_argument("--dump-observations", metavar="PATH",
                    help="write the raw (nocedit_offset, nocturne_offset) sightings, "
                         "which the segmented output discards. Needed to pool a base "
                         "class's observations across its subclasses.")
    ap.add_argument("--min-observations", type=int, default=8,
                    help="ignore classes with fewer sightings (default: 8)")
    ap.add_argument("--typed-accesses", metavar="PATH",
                    help="export_typed_accesses.py output for the reference build: credit "
                         "each sighting to the struct the access is typed with")
    ap.add_argument("--align", action="store_true",
                    help="with --typed-accesses, also pair the instructions of unequal-length "
                         "pairs by shape (more sightings, some one slot off)")
    ap.add_argument("--class", dest="only", help="detail one class")
    ap.add_argument("-v", "--verbose", action="store_true",
                    help="list every segment, not just the dominant drift")
    args = ap.parse_args(argv)

    with open(args.mapping) as fh:
        mapping = json.load(fh)
    a_img = sm.Image(mapping["from"])
    b_img = sm.Image(mapping["to"])

    measured = {}
    if args.typed_accesses:
        typed, sizes, uses = load_typed(args.typed_accesses)
        obs, vobs, methods, compared = observe_typed(a_img, b_img, mapping["pairs"], typed, sizes,
                                                     include_unshifted=args.include_unshifted,
                                                     align=args.align)
        obs, element_sizes = nest(obs, by_value_members(mapping["from"]))
        spelled = observe_sizes(a_img, b_img, mapping["pairs"], uses)
        for name, c in element_sizes.items():
            spelled[name].update(c)
        measured = {name: {str(size): n for size, n in sorted(c.items())}
                    for name, c in sorted(spelled.items())}
    else:
        obs, vobs, methods, compared = observe(a_img, b_img, mapping["pairs"],
                                               include_unshifted=args.include_unshifted)

    if args.dump_observations:
        with open(args.dump_observations, "w") as fh:
            json.dump({"from": mapping["from"], "to": mapping["to"],
                       "observations": {cls: {"%d,%d" % pair: n
                                              for pair, n in counter.items()}
                                        for cls, counter in obs.items()},
                       "vtable_observations": {cls: {"%d,%d" % pair: n
                                                     for pair, n in counter.items()}
                                               for cls, counter in vobs.items()}}, fh)
        print("wrote %s (%d classes, %d distinct sightings)"
              % (args.dump_observations, len(obs), sum(len(c) for c in obs.values())))

    results = {}
    for cls, counter in obs.items():
        segs, purity = segment(counter)
        n = sum(counter.values())
        # A handful of sightings is not evidence of a layout difference: a
        # single displacement can just as easily be a global array base that
        # happened to move. Only a well-supported class is called drifting.
        verdict = "drifting" if n >= args.min_observations else "weak"
        results[cls] = {"segments": segs, "purity": round(purity, 3),
                        "observations": n, "verdict": verdict,
                        "methods": methods[cls], "compared": compared[cls]}

    # Classes that had matched methods but produced no differing displacement
    # at all: their layout is identical as far as the matched code reaches.
    stable = sorted(c for c in compared if compared[c] and not obs.get(c))

    if args.only:
        r = results.get(args.only)
        if not r:
            print(f"{args.only}: no drift observed "
                  f"({compared.get(args.only, 0)} comparable methods)")
            return 0
        print(f"{args.only}: {r['observations']} observations across "
              f"{r['compared']}/{r['methods']} comparable methods, "
              f"purity {r['purity']:.2f}\n")
        print(f"  {'nocedit offsets':<26} {'delta':>9}  {'support':>7}  boundary")
        for s in r["segments"]:
            b = (f"between {s['boundary_before'][0]:#x} and {s['boundary_before'][1]:#x}"
                 if s["boundary_before"] else "-")
            print(f"  {s['from_lo']:#08x} .. {s['from_hi']:#08x}      "
                  f"{s['delta']:+#9x}  {s['support']:>7}  {b}")
        return 0

    strong = {c: r for c, r in results.items()
              if r["observations"] >= args.min_observations}
    print(f"{len(compared)} classes had comparable matched methods\n"
          f"  {len(stable):4d} show NO field-offset drift  -> layout is transferable as-is\n"
          f"  {len(strong):4d} show drift with >= {args.min_observations} observations\n"
          f"  {len(results) - len(strong):4d} show drift but too few observations to model\n")

    print("classes needing layout correction, by evidence:")
    print(f"  {'class':<20}{'obs':>6}{'meth':>6}{'pure':>6}  dominant shift(s)")
    for cls, r in sorted(strong.items(), key=lambda kv: -kv[1]["observations"])[:30]:
        by_delta = Counter()
        for s in r["segments"]:
            by_delta[s["delta"]] += s["support"]
        top = ", ".join(f"{d:+#x} ({n} obs)" for d, n in by_delta.most_common(2))
        print(f"  {cls:<20}{r['observations']:>6}{r['compared']:>6}"
              f"{r['purity']:>6.2f}  {top}")
        if args.verbose:
            for s in r["segments"]:
                print(f"        {s['from_lo']:#08x}..{s['from_hi']:#08x} "
                      f"{s['delta']:+#x} x{s['support']}")

    print(f"\ndrift-free classes ({len(stable)}), safe to import verbatim:")
    print("  " + ", ".join(stable[:24]) + (" ..." if len(stable) > 24 else ""))

    if args.out:
        payload = {
            "from": mapping["from"], "to": mapping["to"],
            "note": ("Offsets are nocedit's. nocturne_offset = nocedit_offset + "
                     "delta. Segment boundaries are only known to lie within "
                     "boundary_before, since unobserved offsets are invisible."),
            "stable": stable,
            "drifting": sorted(c for c, r in results.items()
                               if r["verdict"] == "drifting"),
            "weak": sorted(c for c, r in results.items()
                           if r["verdict"] == "weak"),
            "drift": {c: r for c, r in sorted(results.items())},
            # With --typed-accesses: the sibling's size of each struct, as its
            # allocations and array strides spell it, {struct: {size: sightings}}
            "sizes": measured,
        }
        with open(args.out, "w") as fh:
            json.dump(payload, fh, indent=1)
        print(f"\nwrote {args.out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
