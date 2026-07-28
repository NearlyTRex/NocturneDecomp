#!/usr/bin/env python3
"""Attribute every nocedit-vs-nocturne class size difference to the class that caused it.

Both binaries carry Watcom RTTI, and `WatcomTypeInfo.instance_size` is the
compiler's own record of how big an object is. The annotation export writes it
out verbatim as `typeinfo_size` in type_info.json -- note that the generated
globals_*.cpp render the same field as `(int)sizeof(T)` for 64-bit portability,
so the JSON, not the C, is the source of truth for the original 32-bit sizes.

That gives a direct measurement for both builds and turns "which structs differ"
into arithmetic rather than inference.

The useful question is not *which* classes differ -- most of them do, because
sizes propagate -- but which classes differ *for their own reasons*. A class
grows when a base class grows, when an embedded member grows, or when its own
fields changed. The first two are bookkeeping. Only the third is a real edit.

So: walk the type graph bottom-up, and for each class subtract what its members
already account for. The remainder is that class's own change. Everything with a
zero remainder needs no attention -- fix the roots and it follows.

Classes without RTTI of their own (CHero, CMotionList, ...) are assumed to carry
only their members' deltas. That assumption is then checked against their
RTTI-bearing subclasses, and any contradiction is reported rather than hidden.

Usage:
    compare_sibling_struct_sizes.py
    compare_sibling_struct_sizes.py --json drift.json
    compare_sibling_struct_sizes.py --class CDemonActor
"""

import argparse
import json
import os
import re
import sys

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__))))
ANNOTATIONS = os.path.join(REPO, "annotations")

ARRAY_SUFFIX = re.compile(r"^(.*?)\s*((?:\[\d+\])+)$")


def load_type_info_sizes(program):
    """name -> WatcomTypeInfo.instance_size, the binary's own record."""
    path = os.path.join(ANNOTATIONS, program, "type_info", "type_info.json")
    with open(path) as handle:
        data = json.load(handle)
    return {entry["name"]: entry["typeinfo_size"]
            for entry in data["type_info"] if "typeinfo_size" in entry}


def load_layouts(program):
    """name -> struct definition, for the field lists that drive propagation."""
    path = os.path.join(ANNOTATIONS, program, "data_types", "data_types.json")
    with open(path) as handle:
        data = json.load(handle)
    layouts = {s["name"]: s for s in data["structs"]}
    for union in data.get("unions", []):
        layouts.setdefault(union["name"], union)
    typedefs = {t["name"]: t.get("base") or t.get("type")
                for t in data.get("typedefs", [])}
    return layouts, typedefs


def resolve_layout_alias(rtti_name, layouts, rtti_size):
    """Find the layout for an RTTI class that was renamed in Ghidra.

    The RTTI name comes from the binary's own class_name string, so it is fixed.
    A struct renamed in the DB (SfxSample -> CSfxSample) still has to be the same
    object, so only accept a candidate whose size matches the value that same
    binary recorded -- that validates the pairing rather than trusting the name.
    """
    if rtti_name in layouts:
        return rtti_name
    if rtti_size is None:
        return None
    for prefix in ("C", "S", "_"):
        candidate = prefix + rtti_name
        if candidate in layouts and layouts[candidate]["len"] == rtti_size:
            return candidate
    matches = [n for n, s in layouts.items()
               if s["len"] == rtti_size and n.lower().endswith(rtti_name.lower())]
    return matches[0] if len(matches) == 1 else None


class DeltaModel(object):
    """Propagates size deltas bottom-up through the type graph."""

    def __init__(self, truth, layouts, typedefs):
        self.truth = truth
        self.layouts = layouts
        self.typedefs = typedefs
        self.delta = {}
        self.residual = {}
        self.contributors = {}
        self._active = set()

    def resolve_field_type(self, field_type):
        """(struct name, element count) for a field, or (None, 0) if it holds no delta."""
        if "*" in field_type:
            return None, 0                      # pointers are 4 bytes in both builds
        count = 1
        match = ARRAY_SUFFIX.match(field_type)
        if match:
            field_type = match.group(1).strip()
            for dim in re.findall(r"\[(\d+)\]", match.group(2)):
                count *= int(dim)
        for _ in range(8):                      # chase typedef chains to a struct
            if field_type in self.layouts or field_type not in self.typedefs:
                break
            field_type = self.typedefs[field_type]
        if field_type not in self.layouts:
            return None, 0
        return field_type, count

    def compute(self, name):
        if name in self.delta:
            return self.delta[name]
        if name in self._active:                # self-referential type, cannot recurse
            return self.truth.get(name, 0)
        self._active.add(name)

        accounted, parts = 0, []
        for field in self.layouts.get(name, {}).get("fields", []):
            base, count = self.resolve_field_type(field.get("type", ""))
            if not base or base == name:
                continue
            carried = self.compute(base) * count
            if carried:
                accounted += carried
                parts.append({
                    "field": field.get("name"),
                    "type": base,
                    "count": count,
                    "delta": carried,
                    "offset": field.get("offset", 0),
                })

        self._active.discard(name)
        self.contributors[name] = parts
        if name in self.truth:
            self.residual[name] = self.truth[name] - accounted
            self.delta[name] = self.truth[name]
        else:
            self.residual[name] = None          # no RTTI: assume no change of its own
            self.delta[name] = accounted
        return self.delta[name]

    def subclasses_of(self, name):
        """Classes whose base (the field at offset 0) is `name`."""
        out = []
        for other, layout in self.layouts.items():
            fields = layout.get("fields") or []
            if fields and fields[0].get("offset") == 0 and fields[0].get("type") == name:
                out.append(other)
        return out


def main():
    parser = argparse.ArgumentParser(
        description="Attribute sibling-build struct size differences to their root causes",
        formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--from-program", default="nocedit.exe",
                        help="build supplying the field layouts (default: nocedit.exe)")
    parser.add_argument("--to-program", default="nocturne.exe",
                        help="build being compared against (default: nocturne.exe)")
    parser.add_argument("--class", dest="only", metavar="NAME",
                        help="explain a single class in detail")
    parser.add_argument("--json", metavar="PATH", help="also write the findings as JSON")
    args = parser.parse_args()

    from_sizes = load_type_info_sizes(args.from_program)
    to_sizes = load_type_info_sizes(args.to_program)
    layouts, typedefs = load_layouts(args.from_program)

    # Ground truth on both sides: the size each binary records for itself. Keyed
    # by the layout's Ghidra name, since that is what the fields hang off and
    # what the user edits. Fall back to the Ghidra layout where there is no RTTI.
    truth, measured, assumed, aliases = {}, [], [], {}
    for name, to_size in to_sizes.items():
        layout_name = resolve_layout_alias(name, layouts, from_sizes.get(name))
        key = layout_name or name
        if layout_name and layout_name != name:
            aliases[name] = layout_name
        if name in from_sizes:
            truth[key] = from_sizes[name] - to_size
            measured.append(key)
        elif layout_name:
            truth[key] = layouts[layout_name]["len"] - to_size
            assumed.append(key)

    # Where the exporting build's Ghidra struct disagrees with its own RTTI, its
    # layout is wrong and every delta derived through it inherits that error.
    suspect = []
    for name, size in from_sizes.items():
        layout_name = resolve_layout_alias(name, layouts, size)
        if layout_name and layouts[layout_name]["len"] != size:
            suspect.append((layout_name, layouts[layout_name]["len"], size))
    suspect.sort()

    # Sizes are keyed by RTTI name, everything else by layout name
    rtti_of = dict((layout, rtti) for rtti, layout in aliases.items())

    def size_in(sizes, layout_name):
        return sizes.get(rtti_of.get(layout_name, layout_name))

    def label(layout_name):
        rtti = rtti_of.get(layout_name)
        return "%s (RTTI %s)" % (layout_name, rtti) if rtti else layout_name

    model = DeltaModel(truth, layouts, typedefs)
    for name in list(layouts) + list(truth):
        model.compute(name)

    # A class with no layout on the exporting side cannot be decomposed at all
    unlayouted = sorted(n for n in truth if truth[n] and n not in layouts)
    differing = [n for n in truth if truth[n] and n in layouts]
    roots = sorted((n for n in differing if model.residual.get(n)),
                   key=lambda n: -abs(model.residual[n]))
    derived = sorted(n for n in differing if not model.residual.get(n))

    if args.only:
        name = aliases.get(args.only, args.only)
        if name not in model.delta:
            print("No layout for %s" % args.only)
            return 1
        print("%s: %s=%s  %s=%s  delta=%+d" % (
            label(name), args.from_program,
            size_in(from_sizes, name) or layouts.get(name, {}).get("len", "?"),
            args.to_program, size_in(to_sizes, name) or "?", truth.get(name, 0)))
        print("  own change: %+d" % (model.residual.get(name) or 0))
        for part in model.contributors.get(name, []):
            print("  via %-26s %+8d  %s%s @0x%x" % (
                part["type"], part["delta"], part["field"],
                ("[%d]" % part["count"]) if part["count"] > 1 else "", part["offset"]))
        subs = model.subclasses_of(name)
        if subs:
            print("  %d subclass(es) inherit this: %s" % (len(subs), ", ".join(sorted(subs))))
        return 0

    print("=" * 78)
    print("%s -> %s" % (args.from_program, args.to_program))
    print("%d classes measured on both sides, %d via %s's Ghidra layout"
          % (len(measured), len(assumed), args.from_program))
    print("%d differ in size: %d explained by members, %d changed on their own"
          % (len(differing), len(derived), len(roots)))
    print("=" * 78)

    print("\nROOT CAUSES -- fix these and the rest follows\n")
    print("  %-24s %10s %10s   %s" % ("class", "delta", "own", "from -> to"))
    for name in roots:
        frm = size_in(from_sizes, name) or layouts.get(name, {}).get("len", 0)
        print("  %-24s %10d %10d   0x%x -> 0x%x"
              % (name, truth[name], model.residual[name], frm,
                 size_in(to_sizes, name)))
        if name in rtti_of:
            print("        renamed in Ghidra, RTTI calls it %s" % rtti_of[name])
        for part in model.contributors[name]:
            print("        via %-24s %+8d  %s%s @0x%x" % (
                part["type"], part["delta"], part["field"],
                ("[%d]" % part["count"]) if part["count"] > 1 else "", part["offset"]))

    print("\nINFERRED -- classes with no RTTI, checked against their subclasses\n")
    for name in sorted(n for n in layouts if n not in truth and model.delta.get(n)):
        subs = [s for s in model.subclasses_of(name) if s in truth]
        bad = ["%s %+d" % (s, model.residual[s]) for s in subs if model.residual.get(s)]
        if bad:
            note = "CONTRADICTED by %s" % ", ".join(bad)
        elif subs:
            note = "consistent with %d RTTI subclass(es)" % len(subs)
            continue
        else:
            note = "no RTTI subclasses to check it against"
        print("  %-26s %+9d   %s" % (name, model.delta[name], note))

    if unlayouted:
        print("\nUNDECOMPOSABLE -- differ in size but %s has no layout for them\n" % args.from_program)
        for name in unlayouted:
            print("  %-26s %+9d   (%s -> %s)"
                  % (name, truth[name], size_in(from_sizes, name), size_in(to_sizes, name)))

    if suspect:
        print("\nSUSPECT -- %s's Ghidra layout disagrees with its own RTTI\n" % args.from_program)
        for name, ghidra_size, rtti_size in suspect:
            print("  %-26s ghidra=%-9d rtti=%-9d (%+d)"
                  % (name, ghidra_size, rtti_size, ghidra_size - rtti_size))

    print("\nEXPLAINED -- no edit needed, grouped by what drives them\n")
    groups = {}
    for name in derived:
        cause = ", ".join("%s%s" % (p["type"], ("x%d" % p["count"]) if p["count"] > 1 else "")
                          for p in model.contributors[name]) or "(nothing)"
        groups.setdefault((cause, truth[name]), []).append(name)
    for (cause, delta), names in sorted(groups.items(), key=lambda kv: -len(kv[1])):
        print("  %+d from %s  (%d classes)" % (delta, cause, len(names)))
        names = sorted(names)
        for i in range(0, len(names), 5):
            print("      " + "  ".join("%-22s" % n for n in names[i:i + 5]))

    if args.json:
        payload = {
            "from": args.from_program,
            "to": args.to_program,
            "roots": [{
                "name": n,
                "delta": truth[n],
                "own_delta": model.residual[n],
                "from_size": from_sizes.get(n, layouts.get(n, {}).get("len")),
                "to_size": to_sizes[n],
                "explained_by": model.contributors[n],
            } for n in roots],
            "explained": {n: {"delta": truth[n], "explained_by": model.contributors[n]}
                          for n in derived},
            "suspect_layouts": suspect,
        }
        with open(args.json, "w") as handle:
            json.dump(payload, handle, indent=2)
        print("\nWrote %s" % args.json)
    return 0


if __name__ == "__main__":
    sys.exit(main())
