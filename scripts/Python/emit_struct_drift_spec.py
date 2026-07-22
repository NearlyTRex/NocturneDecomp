#!/usr/bin/env python3
"""Turn measured offset drift into a concrete per-struct edit list for Ghidra.

derive_struct_drift.py says *that* a class's fields moved and by how much.
This turns that into something actionable: which bytes to remove (or add) from
which struct, bracketed by the named fields on either side of the boundary, so
the edit can be made in Ghidra without re-deriving anything.

Two pieces of reasoning do the cleanup:

**Monotonicity.** If nocturne's copy of a class is nocedit's with members
removed, the offset delta can only move one way as offset grows -- each removal
adds to the shift and nothing gives it back. A segment that reverses direction
therefore is not this class at all; it is some other object the method also
addressed. That is how `CCharacter` picked up a spurious `-0x1c`, and filtering
on monotonicity removes that whole class of contamination.

**Shared deltas mean shared cause.** Classes drifting by the same amount almost
always share a base or an embedded member, so they are one fix rather than
several. The report groups them accordingly and names the likely root.

Usage:
    emit_struct_drift_spec.py drift.json nocedit_layouts.json -o spec.md
"""

import argparse
import json
import sys
from collections import Counter, defaultdict

# A segment must carry at least this share of a class's observations to be
# treated as that class's own layout rather than incidental noise.
RELATIVE_SUPPORT = 0.05


def dominant(segments):
    """(delta, support) of the best-supported segment."""
    agg = Counter()
    for s in segments:
        agg[s["delta"]] += s["support"]
    return agg.most_common(1)[0] if agg else (0, 0)


def backbone(segments, min_support, size=None):
    """Keep only the segments consistent with a single monotonic shift.

    Returns (kept, dropped). Offsets grow, so under a removal model the delta
    must be non-increasing; under an addition model, non-decreasing.

    `size` is the class's own length. An offset past the end of the struct
    cannot be one of its fields, so those segments belong to some other object
    the method touched -- without this clip a class that merely *reads* a large
    global picks up that global's shift and reports it as its own.
    """
    # The floor has to scale with the class, not be a flat count. `CCharacter`
    # has 604 observations; a 4-observation segment among them is noise, yet an
    # absolute threshold of 3 let it through and dragged the reported shift from
    # -8 (444 observations) to -25920.
    total = sum(s["support"] for s in segments) or 1
    floor = max(min_support, int(RELATIVE_SUPPORT * total))
    segs = [s for s in segments if s["support"] >= floor
            and (size is None or s["from_lo"] < size)]
    if not segs:
        return [], list(segments)
    dom, _ = dominant(segs)
    sign = -1 if dom < 0 else 1
    segs.sort(key=lambda s: s["from_lo"])

    kept, dropped, cur = [], [], 0
    for s in segs:
        d = s["delta"]
        # Monotonic in the dominant direction, measured from no shift at all.
        if (sign < 0 and d <= cur) or (sign > 0 and d >= cur):
            kept.append(s)
            cur = d
        else:
            dropped.append(s)
    dropped += [s for s in segments if s["support"] < floor]
    return kept, dropped


def field_at(components, offset, layouts=None, _depth=0):
    """The field containing `offset`, descending into nested structs.

    Without the descent every boundary inside an embedded base class reports as
    just `base : CCharacter @ 0x0`, which does not tell you where to cut. The
    dotted path does.
    """
    best = None
    for c in components:
        if c["off"] <= offset < c["off"] + max(c["len"], 1):
            best = c
            break
        if c["off"] <= offset and (best is None or c["off"] > best["off"]):
            best = c
    if best is None:
        return None
    inner = (layouts or {}).get(best["type"]) if _depth < 4 else None
    if inner and inner.get("components"):
        sub = field_at(inner["components"], offset - best["off"], layouts, _depth + 1)
        if sub:
            return {"name": f"{best['name']}.{sub['name']}",
                    "type": sub["type"],
                    "off": best["off"] + sub["off"],
                    "len": sub["len"]}
    return best


def describe(name, layout, info, min_support, layouts=None):
    """-> dict describing the edits needed for one class."""
    segs = info["segments"]
    size = (layout or {}).get("size")
    kept, dropped = backbone(segs, min_support, size)
    comps = (layout or {}).get("components", [])

    edits, cur = [], 0
    for s in kept:
        if s["delta"] == cur:
            continue
        change = s["delta"] - cur          # negative => remove bytes
        lo, hi = (s["boundary_before"] or [s["from_lo"], s["from_lo"]])
        edits.append({
            "bytes": change,
            "after_offset": lo,
            "before_offset": hi,
            "after_field": field_at(comps, lo, layouts),
            "before_field": field_at(comps, hi, layouts),
            "support": s["support"],
        })
        cur = s["delta"]

    return {"class": name,
            "nocedit_size": (layout or {}).get("size"),
            "total_shift": cur,
            "edits": edits,
            "dropped": dropped,
            "observations": info["observations"],
            "methods": info["compared"],
            "purity": info["purity"]}


def fmt_field(c):
    if not c:
        return "?"
    return f"{c['name'] or '(unnamed)'} : {c['type']} @ {c['off']:#x}"


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("drift")
    ap.add_argument("layouts")
    ap.add_argument("-o", "--out", help="write the spec as markdown")
    ap.add_argument("--min-support", type=int, default=3,
                    help="ignore segments with less support (default: 3)")
    args = ap.parse_args()

    with open(args.drift) as fh:
        drift = json.load(fh)
    with open(args.layouts) as fh:
        layouts = json.load(fh)

    specs = {}
    for cls in drift["drifting"]:
        specs[cls] = describe(cls, layouts.get(cls), drift["drift"][cls],
                              args.min_support, layouts)

    # Group by total shift: same shift, almost certainly the same root cause.
    groups = defaultdict(list)
    for cls, s in specs.items():
        groups[s["total_shift"]].append(cls)

    L = []
    L.append("# nocturne.exe struct layout corrections")
    L.append("")
    L.append(f"Derived from {drift['from']} -> {drift['to']} matched method pairs. "
             "Offsets below are **nocedit's**; the edit makes nocturne's copy.")
    L.append("")
    L.append("Boundaries are bracketed, not exact: an offset is only observed "
             "where matched code touched it, so each edit says *between* two "
             "known fields. Confirm against the `.asm` before cutting.")
    L.append("")
    L.append(f"{len(specs)} classes need correction, in "
             f"{len(groups)} shift-groups.")
    L.append("")

    L.append("## Summary — group by total shift")
    L.append("")
    L.append("| total shift | classes | likely root |")
    L.append("|---|---|---|")
    for shift, members in sorted(groups.items(), key=lambda kv: -len(kv[1])):
        root = min(members, key=lambda c: specs[c]["nocedit_size"] or 1 << 30)
        L.append(f"| `{shift:+#x}` ({shift:+d} bytes) | {len(members)} | "
                 f"`{root}` (smallest in group) |")
    L.append("")

    L.append("## Per-group detail")
    for shift, members in sorted(groups.items(), key=lambda kv: -len(kv[1])):
        L.append("")
        L.append(f"### shift `{shift:+#x}` ({shift:+d} bytes) — {len(members)} class(es)")
        L.append("")
        root = min(members, key=lambda c: specs[c]["nocedit_size"] or 1 << 30)
        s = specs[root]
        L.append(f"Representative: **{root}** "
                 f"(nocedit {s['nocedit_size']} bytes -> nocturne "
                 f"{(s['nocedit_size'] or 0) + shift} bytes), "
                 f"{s['observations']} observations over {s['methods']} methods, "
                 f"purity {s['purity']:.2f}.")
        L.append("")
        if s["edits"]:
            L.append("| change | between | and | support |")
            L.append("|---|---|---|---|")
            for e in s["edits"]:
                verb = f"remove {-e['bytes']}" if e["bytes"] < 0 else f"add {e['bytes']}"
                L.append(f"| {verb} bytes | `{fmt_field(e['after_field'])}` | "
                         f"`{fmt_field(e['before_field'])}` | {e['support']} |")
        else:
            L.append("_No confidently-bracketed boundary; shift is known but its "
                     "location is not._")
        L.append("")
        if len(members) > 1:
            L.append("Same shift, so almost certainly the same underlying member — "
                     "fix the root and re-derive before touching the rest:")
            L.append("")
            for c in sorted(members):
                sz = specs[c]["nocedit_size"]
                L.append(f"- `{c}` (nocedit {sz} bytes, "
                         f"{specs[c]['observations']} obs)")
            L.append("")

    if args.out:
        with open(args.out, "w") as fh:
            fh.write("\n".join(L) + "\n")
        print(f"wrote {args.out}")

    print(f"\n{len(specs)} classes, {len(groups)} distinct shifts:")
    for shift, members in sorted(groups.items(), key=lambda kv: -len(kv[1])):
        print(f"  {shift:+#9x} ({shift:+7d} bytes)  {len(members):>3} class(es)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
