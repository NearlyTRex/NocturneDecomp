#!/usr/bin/env python3
"""Document every game struct and how its layout differs between the builds.

Reads each build's exported data types (annotations/<build>/data_types) and its
Watcom RTTI sizes (type_info), and writes, for the research folder:

    index.md     every game struct: its size and state in each build, and
                 whether RTTI confirms the size
    changes.md   per build, against the reference: the structs that changed
                 size, and how many of their fields moved or are not placed
    structs/<Name>.md
                 the struct's fields, with each field's offset in every build
                 (matched by name), the undefined gaps a build's layout has,
                 and the size in each
    structs.json the same, machine-readable

A field a build's layout does not have is left blank in that build's column:
either the build lacks it or its offset there is not yet known. A gap is
bytes the layout leaves undefined -- members a build added, or ones not
placed. Vtable structs are documented with the actor hierarchy instead.

Usage:
    struct_layout_report.py --out-dir research/23-game_structs \\
        --program nocedit.exe --program nocturne.exe --program bw1.exe ...
"""

import argparse
import json
import os
import sys

import derive_vtable_contract as dvc
import import_sibling_types as ist

STATES = {"laid": "fields", "stub": "placeholder", None: "—"}


def _short(prog):
    return prog[:-4] if prog.endswith(".exe") else prog


def game_structs(program):
    """{name: struct} for the build's game structs, vtables aside."""
    return {s["name"]: s for s in dvc.data_types(program).get("structs", [])
            if s.get("name") and "/Game" in s.get("cat", "") and not s["name"].endswith("vtable")}


def state(struct):
    return "laid" if struct.get("fields") else "stub"


def size_of(struct, rtti_size):
    """The struct's length, or None for an empty stub: Ghidra reports an empty struct as 1 byte."""
    if not struct.get("fields") and struct.get("len") == 1 and rtti_size != 1:
        return None
    return struct.get("len")


def gaps(struct):
    """[(offset, length)] the layout leaves undefined, the tail included."""
    out, end = [], 0
    for f in sorted(struct.get("fields", []), key=lambda f: f["offset"]):
        if f["offset"] > end:
            out.append((end, f["offset"] - end))
        end = max(end, f["offset"] + (f.get("len") or 0))
    if struct.get("fields") and struct.get("len", 0) > end:
        out.append((end, struct["len"] - end))
    return out


def build(programs):
    """{name: {"category", "builds": {prog: {...}}, "fields": [...]}} over every build."""
    per = {p: game_structs(p) for p in programs}
    rtti = {p: ist.load_rtti(p) for p in programs}
    out = {}
    for name in sorted(set().union(*per.values())):
        entry = {"category": next(per[p][name]["cat"] for p in programs if name in per[p]),
                 "builds": {}, "fields": []}
        order = {}
        for p in programs:
            s = per[p].get(name)
            if s is None:
                continue
            entry["builds"][p] = {"size": size_of(s, rtti[p].get(name)), "state": state(s),
                                  "rtti": rtti[p].get(name),
                                  "gaps": gaps(s)}
            for f in sorted(s.get("fields", []), key=lambda f: f["offset"]):
                order.setdefault(f["name"], {"name": f["name"], "type": f.get("type"), "offsets": {}})
                order[f["name"]]["offsets"][p] = f["offset"]
        entry["fields"] = list(order.values())
        out[name] = entry
    return out


def size_cell(b):
    if b is None:
        return "—"
    mark = {"laid": "", "stub": " (placeholder)"}[b["state"]]
    check = " ✓" if b["rtti"] is not None and b["rtti"] == b["size"] and b["state"] == "laid" else ""
    return f"{_size(b)}{mark}{check}"


def _size(b):
    return "unsized" if b["size"] is None else b["size"]


def render_index(programs, built):
    lines = ["# Game structs", "",
             "Every game struct in any build: its size there, `(placeholder)` where the build has "
             "only a sized or empty stub (`unsized` when empty), `—` where it has none. ✓: laid out at the size the "
             "build's own Watcom RTTI records. Each name links to its fields.", ""]
    for category in sorted({e["category"] for e in built.values()}):
        lines += [f"## {category}", "", "| struct | " + " | ".join(_short(p) for p in programs) + " |",
                  "|---|" + "---:|" * len(programs)]
        for name, e in built.items():
            if e["category"] == category:
                lines.append(f"| [{name}](structs/{name}.md) | "
                             + " | ".join(size_cell(e["builds"].get(p)) for p in programs) + " |")
        lines.append("")
    return "\n".join(lines)


def moved(entry, reference, program):
    """Fields both builds lay out, at different offsets in `program`."""
    return [f for f in entry["fields"]
            if reference in f["offsets"] and program in f["offsets"]
            and f["offsets"][reference] != f["offsets"][program]]


def render_changes(programs, built):
    reference = programs[0]
    lines = ["# How the structs changed", "", f"Against {reference}, per build: the structs laid out in "
             "both whose size differs, by how much, how many of the reference's fields moved, and how "
             "many the build's layout does not place (unknown, or not in that build).", ""]
    for p in programs[1:]:
        rows = []
        for name, e in built.items():
            a, b = e["builds"].get(reference), e["builds"].get(p)
            if not a or not b or a["state"] != "laid" or b["state"] != "laid" or a["size"] == b["size"]:
                continue
            ref_fields = [f for f in e["fields"] if reference in f["offsets"]]
            missing = sum(1 for f in ref_fields if p not in f["offsets"])
            rows.append((name, b["size"] - a["size"], len(moved(e, reference, p)), missing, len(ref_fields)))
        lines += [f"## {_short(p)}", "", f"{len(rows)} struct(s) changed size.", ""]
        if rows:
            lines += ["| struct | size change | fields moved | not placed |", "|---|---:|---:|---:|"]
            for name, delta, n_moved, missing, total in sorted(rows, key=lambda r: (-abs(r[1]), r[0])):
                lines.append(f"| [{name}](structs/{name}.md) | {delta:+d} | {n_moved} | {missing} of {total} |")
        lines.append("")
    return "\n".join(lines)


def render_struct(name, programs, entry):
    present = [p for p in programs if p in entry["builds"]]
    lines = [f"# {name}", "", f"Category `{entry['category']}`.", "",
             "| build | size | state | RTTI size |", "|---|---:|---|---:|"]
    for p in present:
        b = entry["builds"][p]
        lines.append(f"| {_short(p)} | {_size(b)} | {STATES[b['state']]} | {b['rtti'] if b['rtti'] is not None else '—'} |")
    if entry["fields"]:
        lines += ["", "## Fields", "", "Offsets in hex; blank where the build's layout does not have the field.", "",
                  "| field | type | " + " | ".join(_short(p) for p in present) + " |",
                  "|---|---|" + "---:|" * len(present)]
        for f in entry["fields"]:
            cells = [f"{f['offsets'][p]:#x}" if p in f["offsets"] else "" for p in present]
            lines.append(f"| `{f['name']}` | `{f['type']}` | " + " | ".join(cells) + " |")
    holes = [(p, entry["builds"][p]["gaps"]) for p in present if entry["builds"][p]["gaps"]]
    if holes:
        lines += ["", "## Undefined bytes", "",
                  "Ranges a build's layout leaves undefined: members it added, or ones not yet placed.", ""]
        for p, g in holes:
            lines.append(f"- **{_short(p)}**: " + ", ".join(f"{at:#x}+{n:#x}" for at, n in g))
    return "\n".join(lines) + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", action="append", required=True,
                    help="a build, the reference first (repeatable)")
    ap.add_argument("--out-dir", required=True)
    args = ap.parse_args(argv)

    built = build(args.program)
    pages = os.path.join(args.out_dir, "structs")
    os.makedirs(pages, exist_ok=True)
    for name in os.listdir(pages):
        if name.endswith(".md") and name[:-3] not in built:
            os.remove(os.path.join(pages, name))
    for name, entry in built.items():
        with open(os.path.join(pages, f"{name}.md"), "w", encoding="utf-8") as fh:
            fh.write(render_struct(name, args.program, entry))
    outputs = {"index.md": render_index(args.program, built),
               "changes.md": render_changes(args.program, built),
               "structs.json": json.dumps({"programs": args.program, "structs": built}, indent=1) + "\n"}
    for name, text in outputs.items():
        with open(os.path.join(args.out_dir, name), "w", encoding="utf-8") as fh:
            fh.write(text)
    print(f"wrote {len(built)} struct pages and {len(outputs)} files to {args.out_dir}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
