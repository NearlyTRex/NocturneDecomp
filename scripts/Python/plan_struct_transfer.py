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


def plan(ref, dst, drift, min_support=MIN_SUPPORT):
    """-> (ordered names to copy, {name: reason} for those refused)."""
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
        verdict = drift_verdict(drift, name, min_support)
        if verdict == "shifted":
            return "code shows it shifted"
        if needs_code and verdict != "zero":
            return "no code observes it"
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


def field_delta(segments, offset, tail_delta):
    """How far a field at the sibling's `offset` moved, or None where that is not known.

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


def type_length(text, dst, ref_len):
    """The target's length for a field type, or None where it has no known size."""
    text = (text or "").strip()
    core = text.split("[", 1)[0].strip()
    count = 1
    for dim in text[len(core):].replace("]", "").split("[")[1:]:
        count *= int(dim)
    if core.endswith("*"):
        return 4 * count
    t = dst.get(core)
    if t is None:
        return ref_len  # a built-in: the same in every build
    if t.get("fields") or (t.get("len") or 0) > 1:
        return t["len"] * count
    return None


def shift_plan(ref, dst, drift, min_support=MIN_SUPPORT):
    """{struct: placement} for the classes whose size changed, from their measured drift.

    A placement is the struct's size (its RTTI size in the target) and, for
    each field that can be placed, the sibling offset -> the target offset.
    Fields that cannot are left out, as undefined bytes.
    """
    out = {}
    for name in sorted(ref):
        s, t = ref[name], dst.get(name)
        if (t is None or t.get("fields") or (t.get("len") or 0) <= 1 or t["len"] == s.get("len")
                or "/Game" not in s.get("cat", "") or name.endswith("vtable") or name not in drift):
            continue
        segments = sorted((g for g in drift[name]["segments"] if g["support"] >= min_support),
                          key=lambda g: g["from_lo"])
        place, end = {}, 0
        for f in sorted(s.get("fields", []), key=lambda f: f["offset"]):
            delta = field_delta(segments, f["offset"], t["len"] - s["len"])
            size = type_length(f.get("type"), dst, f.get("len"))
            if delta is None or size is None:
                continue
            at = f["offset"] + delta
            if at < end or at + size > t["len"]:
                continue
            place[str(f["offset"])] = at  # keyed as JSON keys it
            end = at + size
        out[name] = {"size": t["len"], "place": place, "fields": len(s.get("fields", []))}
    return out


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", required=True)
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--drift", required=True, help="derive_struct_drift.py --out for this pair")
    ap.add_argument("--min-support", type=int, default=MIN_SUPPORT)
    ap.add_argument("--out", help="write the names, one per line, in copy order")
    ap.add_argument("--out-shifts",
                    help="write placements for the classes whose size changed (JSON), and their names "
                         "to <file>.txt for import_sibling_types.py --types-file")
    args = ap.parse_args(argv)

    with open(args.drift, encoding="utf-8") as fh:
        drift = json.load(fh)["drift"]
    order, refused = plan(structs(args.from_program), structs(args.program), drift, args.min_support)
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
        shifts = shift_plan(structs(args.from_program), structs(args.program), drift, args.min_support)
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
