#!/usr/bin/env python3
"""Choose which of a sibling build's struct layouts can be copied onto a build verbatim.

A Blair Witch program's game structs are placeholders: sized by Watcom RTTI
where the build has it, length 1 where it does not. nocedit has the layouts.
Copying one is right only when the build did not change the class, and the size
alone cannot say so -- a re-ordering keeps the total (the CDemonCamera case in
nocturne). So a layout is copied when:

  * the code agrees: derive_struct_drift.py found the class's matched methods
    addressing it at the same offsets in both builds, every segment with at
    least --min-support observations at delta 0;
  * the size does not contradict it: the placeholder's RTTI size equals the
    sibling's, or the placeholder has no size (no RTTI);
  * every struct it embeds is copied too, or is already laid out in the
    target -- a field typed as a length-1 placeholder would shrink to 1 byte.

Embedded structs a chosen class needs are copied with it even with no code
observations of their own (`CMatrix3x3f`, `CLocation`): the embedding class's
agreeing offsets cover them. The output is ordered so every struct comes after
the ones it embeds, as import_sibling_types.py --replace-stubs needs it.

Usage:
    plan_struct_transfer.py --program bw1.exe --drift bw1_drift.json --out types.txt
"""

import argparse
import json
import sys

import derive_vtable_contract as dvc
from derive_struct_drift import field_delta

MIN_SUPPORT = 3


def drift_verdict(drift, name, min_support=MIN_SUPPORT):
    """zero, shifted or unobserved, from the class's well-supported segments."""
    strong = [s for s in (drift.get(name) or {}).get("segments", []) if s["support"] >= min_support]
    if not strong:
        return "unobserved"
    return "zero" if all(s["delta"] == 0 for s in strong) else "shifted"


def structs(program):
    return {s["name"]: s for s in dvc.data_types(program).get("structs", []) if s.get("name")}


def base_name(text):
    """`CVector3f[3]` -> CVector3f; a pointer, or an array of them, embeds no struct."""
    core = (text or "").strip().split("[", 1)[0].strip()
    return None if core.endswith("*") else core


def embedded(layout):
    """Names of the struct types a layout holds by value."""
    return [n for n in (base_name(f.get("type")) for f in layout.get("fields", [])) if n]


MIN_SIZE_SIGHTINGS = 2
# Support given to a hand-read shift, so it counts as settled whatever --min-support is
KNOWN_SUPPORT = 1 << 20


def load_known(path, program):
    """{struct: {"segments", "added"}} for `program` from a hand-curated file of layout
    changes read from the code (research/23-game_structs/known_layout_changes.json):
    its shifts as drift segments, the fields the build added, and the size where
    the struct has no RTTI record to give it."""
    with open(path, encoding="utf-8") as fh:
        entries = json.load(fh)
    out = {}
    for e in entries:
        if e["program"] != program:
            continue
        segments = [{"from_lo": int(s["from"], 0), "from_hi": int(s["to"], 0), "delta": s["delta"],
                     "support": KNOWN_SUPPORT} for s in e.get("shifts", [])]
        added = [{"offset": int(a["offset"], 0), "name": a["name"], "type": a["type"], "len": a["len"]}
                 for a in e.get("added", [])]
        out[e["struct"]] = {"segments": segments, "added": added, "size": e.get("size")}
    return out


def measured_size(measured, name):
    """The build's size of `name` as its allocations and array strides spell it
    (derive_struct_drift.py --typed-accesses "sizes"), when at least two sightings
    agree; else None."""
    votes = (measured or {}).get(name) or {}
    if len(votes) != 1 or sum(votes.values()) < MIN_SIZE_SIGHTINGS:
        return None
    return int(next(iter(votes)))


def target_size(t, measured, name):
    """The struct's size in the target: its RTTI-sized placeholder or layout, else
    the measured size, else None."""
    if t is not None and (t.get("fields") or (t.get("len") or 0) > 1):
        return t["len"]
    return measured_size(measured, name)


def strong_segments(drift, name, min_support=MIN_SUPPORT):
    return sorted((g for g in (drift.get(name) or {}).get("segments", []) if g["support"] >= min_support),
                  key=lambda g: g["from_lo"])


def grown_in(ref, dst, drift, name, min_support=MIN_SUPPORT):
    """A struct embedding `name` by value whose measured delta differs before and
    after it, or None. With no RTTI size, a struct that grew at its end shows no
    drift of its own; a container's fields after it moving further is the sign --
    or something inserted just after it, which the drift cannot tell apart."""
    for container in sorted(ref):
        segments = strong_segments(drift, container, min_support)
        if not segments:
            continue
        t = dst.get(container) or {}
        tail = t["len"] - ref[container]["len"] if (t.get("len") or 0) > 1 else None
        for f in ref[container].get("fields", []):
            if base_name(f.get("type")) != name:
                continue
            before = field_delta(segments, f["offset"], tail)
            after = field_delta(segments, f["offset"] + f["len"], tail)
            if before is not None and after is not None and before != after:
                return f"{container}.{f['name']}"
    return None


MIN_CONTAINERS = 2


def container_sizes(ref, dst, drift, min_support=MIN_SUPPORT):
    """{struct: {container: size}}: the size of each struct held by value, as each
    container's measured shift before and after it implies. A member that ends
    the container takes the container's whole size change after it (its RTTI
    size against the sibling's). In an array the growth is shared by every
    element. One container cannot tell a member that grew from a field it added
    just after it; see agreed_sizes."""
    votes = {}
    for name in sorted(ref):
        segments = strong_segments(drift, name, min_support)
        t = dst.get(name) or {}
        tail = t["len"] - ref[name]["len"] if (t.get("len") or 0) > 1 else None
        for f in ref[name].get("fields", []):
            inner = base_name(f.get("type"))
            if inner not in ref or (ref[inner].get("len") or 0) <= 1 or not f.get("len"):
                continue
            end = f["offset"] + f["len"]
            before = field_delta(segments, f["offset"], tail)
            after = tail if end >= ref[name]["len"] else field_delta(segments, end, tail)
            count = f["len"] // ref[inner]["len"]
            if before is None or after is None or not count or (after - before) % count:
                continue
            votes.setdefault(inner, {})[name] = ref[inner]["len"] + (after - before) // count
    return votes


def unchanged_in_arrays(ref, dst, drift, min_support=MIN_SUPPORT):
    """Structs some container holds as an array of two or more with the same shift before and
    after it, and no container says otherwise. Elements that grew would move the field after
    the array by count x growth; for an array one container settles it."""
    out, doubted = set(), set()
    for name in sorted(ref):
        segments = strong_segments(drift, name, min_support)
        t = dst.get(name) or {}
        tail = t["len"] - ref[name]["len"] if (t.get("len") or 0) > 1 else None
        for f in ref[name].get("fields", []):
            inner = base_name(f.get("type"))
            if inner not in ref or (ref[inner].get("len") or 0) <= 1 or not f.get("len"):
                continue
            end = f["offset"] + f["len"]
            before = field_delta(segments, f["offset"], tail)
            after = tail if end >= ref[name]["len"] else field_delta(segments, end, tail)
            if before is None or after is None:
                continue
            if before != after:
                doubted.add(inner)
            elif f["len"] // ref[inner]["len"] >= 2:
                out.add(inner)
    return out - doubted


def agreed_sizes(votes, min_containers=MIN_CONTAINERS):
    """{struct: size} where at least `min_containers` containers imply one size and none another."""
    return {name: next(iter(set(v.values()))) for name, v in votes.items()
            if len(v) >= min_containers and len(set(v.values())) == 1}


def plan(ref, dst, drift, min_support=MIN_SUPPORT, measured=None, aligned=None, unchanged=()):
    """-> (ordered names to copy, {name: reason} for those refused).

    `measured` is the drift's "sizes": a struct with no RTTI size whose
    allocations spell another size than the sibling's is not copied verbatim.
    `aligned` is a drift measured with --align as well. It only settles a
    struct `drift` does not observe, and only as unchanged: its sightings from
    unequal-length code have never said a shifted struct was unchanged, but
    can pair a run of like stores one slot off and so show a false shift.
    `unchanged` (unchanged_in_arrays) settles a struct no code observes as unchanged too.
    """
    refused, order, placed = {}, [], set()

    def unsized(name):
        t = dst.get(name)
        return t is None or (t.get("len") in (0, 1) and not t.get("fields"))

    def laid_out(name):
        t = dst.get(name)
        return t is not None and bool(t.get("fields"))

    def why_not(name, needs_code):
        s = ref[name]
        if not unsized(name) and s.get("len") != dst[name].get("len"):
            return f"size {s.get('len')} in the sibling, {dst[name].get('len')} here"
        size = measured_size(measured, name)
        if unsized(name) and size is not None and size != s.get("len"):
            return f"size {s.get('len')} in the sibling, {size} here by its allocations"
        # Too few sightings to size it, but enough to doubt the sibling's size
        other = sorted(int(v) for v in (measured or {}).get(name, {}) if int(v) != s.get("len"))
        if unsized(name) and other:
            return f"size {s.get('len')} in the sibling; its allocations spell {other[0]} here"
        verdict = drift_verdict(drift, name, min_support)
        if verdict == "unobserved" and aligned and drift_verdict(aligned, name, min_support) == "zero":
            verdict = "zero"
        if verdict == "unobserved" and name in unchanged:
            verdict = "zero"
        if verdict == "shifted":
            return "code shows it shifted"
        if needs_code and verdict != "zero":
            return "no code observes it"
        if unsized(name):
            grown = grown_in(ref, dst, drift, name, min_support)
            if grown:
                return f"{grown} grows across it"
        return None

    def take(name, needs_code, path):
        if name in placed or laid_out(name):
            return True
        if name in path:
            return True
        reason = why_not(name, needs_code)
        if reason is not None:
            refused.setdefault(name, reason)
            return False
        for inner in embedded(ref[name]):
            if inner in ref and not take(inner, False, path | {name}):
                refused[name] = f"embeds {inner} ({refused.get(inner)})"
                return False
        placed.add(name)
        order.append(name)
        return True

    for name in sorted(ref):
        if "/Game" in ref[name].get("cat", "") and name in dst and not name.endswith("vtable"):
            take(name, True, frozenset())
    return order, refused


def type_length(text, dst, ref_len, ref=None):
    """The target's length for a field type, or None where it has no known size.

    A type the target lacks is a built-in, the same in every build -- unless
    the sibling (`ref`) defines it as a struct, whose size here is unknown.
    """
    text = (text or "").strip()
    core = text.split("[", 1)[0].strip()
    count = 1
    for dim in text[len(core):].replace("]", "").split("[")[1:]:
        count *= int(dim)
    if core.endswith("*"):
        return 4 * count
    t = dst.get(core)
    if t is None:
        return None if core in (ref or {}) else ref_len
    if t.get("fields") or (t.get("len") or 0) > 1:
        return t["len"] * count
    return None


def shift_plan(ref, dst, drift, min_support=MIN_SUPPORT, relayout=(), measured=None, known=None):
    """{struct: placement} for the classes whose size changed, from their measured drift.

    A placement is the struct's size (its RTTI size in the target, else the
    size its allocations spell) and, for each field that can be placed, the
    sibling offset -> the target offset. Fields that cannot are left out, as
    undefined bytes. A class named in `relayout` is planned even if laid out
    already or the same size: one whose applied layout the code contradicts.
    A class in `known` (load_known) is always planned, from its hand-read
    shifts instead of the drift, and its placement lists the fields the
    build added ("added"), which must not overlap a placed one.
    """
    known = known or {}
    # An entry with no shifts gives only a size, and leaves the measured drift as it is
    drift = {**drift, **{name: {"segments": k["segments"]} for name, k in known.items() if k["segments"]}}
    relayout = set(relayout) | set(known)
    sized = {name: k["size"] for name, k in known.items() if k.get("size")}
    measured = {**(measured or {}), **{name: {str(size): KNOWN_SUPPORT} for name, size in sized.items()}}
    out = {}
    for name in sorted(ref):
        s, t = ref[name], dst.get(name)
        total = target_size(t, measured, name)
        # A struct no code observes still places its first member: offset 0 never moves
        if t is None or total is None:
            continue
        if name not in relayout and (t.get("fields") or total == s.get("len")
                                     or "/Game" not in s.get("cat", "") or name.endswith("vtable")):
            continue
        segments = strong_segments(drift, name, min_support)
        # A hand-read entry can state a re-ordering: its segments are taken as
        # written, offset 0 included, and fields may land out of order
        hand_read = bool((known.get(name) or {}).get("segments"))
        place, end, spans = {}, 0, []
        for f in sorted(s.get("fields", []), key=lambda f: f["offset"]):
            if name not in drift and f["name"] != "base":
                continue  # unobserved: only a derived class's base is certain
            stated = [g["delta"] for g in segments if g["from_lo"] <= f["offset"] <= g["from_hi"]]
            delta = stated[0] if hand_read and stated else field_delta(segments, f["offset"], total - s["len"])
            size = type_length(f.get("type"), dst, f.get("len"), ref)
            if delta is None or size is None:
                continue
            at = f["offset"] + delta
            clash = any(lo < at + size and at < hi for lo, hi in spans) if hand_read else at < end
            if clash or at < 0 or at + size > total:
                continue
            place[str(f["offset"])] = at  # keyed as JSON keys it
            end = at + size
            spans.append((at, end))
        out[name] = {"size": total, "place": place, "fields": len(s.get("fields", []))}
        added = (known.get(name) or {}).get("added")
        if added:
            spans = [(at, at + (type_length(f.get("type"), dst, f.get("len"), ref) or 0))
                     for f in s.get("fields", []) for at in [place.get(str(f["offset"]))] if at is not None]
            for a in added:
                if any(lo < a["offset"] + a["len"] and a["offset"] < hi for lo, hi in spans):
                    raise ValueError(f"{name}: added field {a['name']} at {a['offset']:#x} overlaps a placed field")
            out[name]["added"] = added
    return out


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", required=True)
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--drift", required=True, help="derive_struct_drift.py --out for this pair")
    ap.add_argument("--drift-aligned",
                    help="derive_struct_drift.py --align --out for the pair: settles structs --drift "
                         "does not observe, as unchanged only")
    ap.add_argument("--alloc-sizes",
                    help="find_allocation_sizes.py --out for the build: sizes its `new`s spell")
    ap.add_argument("--min-support", type=int, default=MIN_SUPPORT)
    ap.add_argument("--out", help="write the names, one per line, in copy order")
    ap.add_argument("--out-shifts",
                    help="write placements for the classes whose size changed (JSON), and their names "
                         "to <file>.txt for import_sibling_types.py --types-file")
    ap.add_argument("--known",
                    help="with --out-shifts: hand-read layout changes (research/23-game_structs/"
                         "known_layout_changes.json); their structs are planned from them")
    ap.add_argument("--relayout", action="append", default=[], metavar="NAME",
                    help="with --out-shifts: also place this laid-out class anew from the drift "
                         "(repeatable; import with import_sibling_types.py --relayout)")
    args = ap.parse_args(argv)

    with open(args.drift, encoding="utf-8") as fh:
        data = json.load(fh)
    drift, measured, aligned = data["drift"], dict(data.get("sizes") or {}), None
    ref, dst = structs(args.from_program), structs(args.program)
    if args.alloc_sizes:
        with open(args.alloc_sizes, encoding="utf-8") as fh:
            for name, votes in json.load(fh)["sizes"].items():
                merged = dict(measured.get(name) or {})
                for size, n in votes.items():
                    # A `new` states the size, it is not a paired sighting: one settles it
                    merged[size] = merged.get(size, 0) + n * MIN_SIZE_SIGHTINGS
                measured[name] = merged
    # Sizes the containers agree on, where allocations spell none
    votes = container_sizes(ref, dst, drift, args.min_support)
    for name, size in agreed_sizes(votes).items():
        measured.setdefault(name, {str(size): len(votes[name])})
    if args.drift_aligned:
        with open(args.drift_aligned, encoding="utf-8") as fh:
            aligned = json.load(fh)["drift"]
    order, refused = plan(ref, dst, drift, args.min_support, measured, aligned,
                          unchanged_in_arrays(ref, dst, drift, args.min_support))
    print(f"{args.program}: {len(order)} layouts to copy from {args.from_program}, "
          f"{len(refused)} refused")
    reasons = {}
    for name, why in refused.items():
        reasons.setdefault(why.split(" (")[0] if why.startswith("embeds") else why, []).append(name)
    for why, names in sorted(reasons.items(), key=lambda kv: (-len(kv[1]), kv[0]))[:15]:
        print(f"  {len(names):4d}  {why}: {', '.join(sorted(names)[:6])}")
    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            fh.write("".join(f"{n}\n" for n in order))
    if args.out_shifts:
        known = load_known(args.known, args.program) if args.known else None
        shifts = shift_plan(ref, dst, drift, args.min_support, set(args.relayout), measured, known)
        placed = sum(len(p["place"]) for p in shifts.values())
        total = sum(p["fields"] for p in shifts.values())
        print(f"{len(shifts)} resized classes: {placed} of {total} fields placed by their measured shift")
        with open(args.out_shifts, "w", encoding="utf-8") as fh:
            json.dump(shifts, fh, indent=1, sort_keys=True)
        with open(args.out_shifts + ".txt", "w", encoding="utf-8") as fh:
            fh.write("".join(f"{n}\n" for n in shifts))
    return 0


if __name__ == "__main__":
    sys.exit(main())
