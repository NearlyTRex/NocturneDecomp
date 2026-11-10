#!/usr/bin/env python3
"""Write the actor class hierarchy and its virtual-method contract across builds.

Three things are combined, each established independently:

  * the class tree of every build, from its registerActorClass calls
    (actor_class_tree.py) -- the program's own record of its inheritance;
  * each build's slot -> method contract against the reference build
    (derive_vtable_contract.py --out-json), whose rows say how every slot was
    placed: anchored by a verified function pair, forced by its neighbours, or
    agreed by every class sharing it;
  * per-pair signature verdicts (verify_sibling_signatures.py --out), which
    check a method's parameters against how the target's callers actually push
    arguments.

The reference build supplies method names and declared signatures; a slot it
lacks is reported as new in that build, never named.

Usage:
    actor_hierarchy_report.py --out-dir research/22-actor_class_hierarchy \\
        --contract bw1.exe=bw1_contract.json --sigs bw1.exe=bw1_sigs.json ...

#@author NearlyTRex
#@category Annotations
"""

import argparse
import json
import os
from collections import Counter

import actor_class_tree as act
import name_vtable_slot_functions as nvs
import sibling_match as sm
from derive_vtable_contract import slot_method, slots_of, struct_slot_names, tables_by_class
from map_vtable_slots import load_labels


def _pairs(spec):
    """["prog=path", ...] -> {prog: path}."""
    out = {}
    for item in spec or []:
        prog, path = item.split("=", 1)
        out[prog] = path
    return out


def _load(path):
    with open(path, encoding="utf-8") as fh:
        return json.load(fh)


def signature(img, addr, method):
    """`ret method(type name, ...)` as the reference build declares it."""
    rec = img.by_addr.get(addr) or {}
    params = [p for p in (rec.get("vars") or {}).get("params", [])
              if p.get("name") != "this_ptr"]
    args = ", ".join(f"{p.get('type', '?')} {p.get('name', '?')}" for p in params)
    return f"{rec.get('ret', '?')} {method}({args})"


def reference_rows(img, tables, names=None):
    """The reference build's own tables as contract rows, slot = sibling slot.

    `names` is struct_slot_names(reference): a slot's method is its struct
    field's name where a struct is applied, since a folded stub's own name
    is right for only one of its slots.
    """
    names = names or {}
    out = {}
    for cls, table in tables.items():
        rows = []
        funcs = slots_of(table)
        for i, f in enumerate(funcs):
            declarer, method = slot_method(img, funcs, i, names.get((table.get("addr") or "").lower(), {}))
            rows.append({"slot": i, "sibling_slot": i, "status": "REFERENCE",
                         "declarer": declarer, "method": method, "target_func": f})
        out[cls] = {"slots": rows}
    return out


def nearest_tabled(tree, contract, cls):
    for a in act.ancestry(tree, tree.get(cls)):
        if a in contract:
            return a
    return None


def overrides(tree, contract, cls):
    """Rows of `cls` whose function differs from its nearest tabled ancestor's."""
    rows = contract[cls]["slots"]
    anc = nearest_tabled(tree, contract, cls)
    base = contract[anc]["slots"] if anc else []
    return [r for r in rows
            if r["slot"] >= len(base) or base[r["slot"]]["target_func"] != r["target_func"]]


def introducer(tree, contract, cls, slot):
    """The base-most tabled ancestor whose table already has `slot`."""
    out = cls
    for a in act.ancestry(tree, cls):
        if a in contract and slot < len(contract[a]["slots"]):
            out = a
    return out


def verdicts(sigs):
    """target function -> signature verdict."""
    return {(p.get("b") or "").lower(): p.get("sig_verdict") or "unverifiable"
            for p in (sigs or {}).get("pairs", [])}


def build(reference, programs, trees, contracts, sigs, units=None, slot_names=None):
    """-> {"methods": [...], "new_slots": {prog: {(slot, func): ...}}, "classes": {...}}.

    `units` is {prog: {function: translation unit}}, which attributes a new
    slot to the file defining it -- the class whose table shows it first may
    only be the first one with a label.
    """
    units = units or {}
    ref_contract = contracts[reference]
    ref_tree = trees[reference]
    methods, index = [], {}
    for cls in act_order(ref_tree, ref_contract):
        for r in ref_contract[cls]["slots"]:
            if introducer(ref_tree, ref_contract, cls, r["slot"]) != cls:
                continue
            key = (cls, r["slot"])
            index[key] = len(methods)
            methods.append({"introducer": cls, "method": r["method"],
                            "ref_slot": r["slot"], "ref_func": r["target_func"],
                            "slots": {reference: r["slot"]}, "evidence": {},
                            "params": {}})

    new_slots = {}
    for prog in programs:
        if prog == reference:
            continue
        tree, contract, verdict = trees[prog], contracts[prog], verdicts(sigs.get(prog))
        for cls in act_order(tree, contract):
            for r in contract[cls]["slots"]:
                intro = introducer(tree, contract, cls, r["slot"])
                if r["sibling_slot"] is None:
                    if intro == cls and r["status"] == "AMBIGUOUS":
                        # Siblings under an unlabelled parent each show the
                        # parent's new slot; it is one slot, listed once.
                        found = new_slots.setdefault(prog, {}).setdefault(
                            (r["slot"], r["target_func"]),
                            {"classes": [], "slot": r["slot"], "func": r["target_func"],
                             "unit": units.get(prog, {}).get(r["target_func"])})
                        found["classes"].append(cls)
                    continue
                ref_intro = introducer(ref_tree, ref_contract, intro, r["sibling_slot"]) \
                    if intro in ref_contract else None
                m = index.get((ref_intro, r["sibling_slot"]))
                if m is None:
                    continue
                entry = methods[m]
                if intro == cls:
                    entry["slots"][prog] = r["slot"]
                    entry["evidence"][prog] = r["status"]
                # Keyed by function: an inherited implementation is one body
                # however many tables carry it.
                entry["params"].setdefault(prog, {})[r["target_func"]] = \
                    verdict.get(r["target_func"], "unverifiable")

    classes = {}
    for prog in programs:
        tree, contract = trees[prog], contracts[prog]
        for cls, parent in tree.items():
            info = classes.setdefault(cls, {"parent": {}, "slots": {}, "overrides": {}})
            info["parent"][prog] = parent
            if cls in contract:
                info["slots"][prog] = len(contract[cls]["slots"])
                info["overrides"][prog] = [
                    r["method"] or f"<new slot {r['slot']}>"
                    for r in overrides(tree, contract, cls)]
    # `slot_names` is {program: load_slot_names()}; a new slot takes the name
    # its first table's class inherits for it, if one is recorded.
    for prog, found in new_slots.items():
        for n in found.values():
            entry = nvs.named_slot((slot_names or {}).get(prog, {}), trees[prog], n["classes"][0], n["slot"])
            n["name"] = entry["name"] if entry else None
    return {"methods": methods, "new_slots": new_slots, "classes": classes}


def act_order(tree, contract):
    """Tabled classes, every ancestor before its descendants."""
    return sorted((c for c in contract if c in tree),
                  key=lambda c: (len(act.ancestry(tree, c)), c))


def _short(prog):
    return prog[:-4] if prog.endswith(".exe") else prog


def render_hierarchy(programs, classes):
    lines = ["# Actor class hierarchy", "",
             "From each build's `registerActorClass` calls. A mark means the class "
             "registers in that build; a parent that differs from the first build "
             "naming the class is shown after the marks.", "",
             "`" + " ".join(_short(p) for p in programs) + "`", ""]
    kids = {}
    for cls, info in classes.items():
        parents = {p for p in info["parent"].values()}
        for p in parents:
            kids.setdefault(p, []).append(cls)

    def walk(cls, depth, seen):
        info = classes[cls]
        marks = " ".join("x" if p in info["parent"] else "." for p in programs)
        first = next(iter(info["parent"].values()))
        moved = sorted({f"{_short(p)}: {v}" for p, v in info["parent"].items() if v != first})
        lines.append(f"{'  ' * depth}- `{marks}` {cls}"
                     + (f" — parent differs ({', '.join(moved)})" if moved else ""))
        for k in sorted(kids.get(cls, [])):
            if k not in seen:
                seen.add(k)
                walk(k, depth + 1, seen)

    for root in sorted(kids.get(None, [])):
        walk(root, 0, {root})
    return "\n".join(lines) + "\n"


def _verdict_text(by_func):
    counts = Counter(by_func.values())
    order = ("agree", "conflict", "unverifiable")
    return " ".join(f"{k[0]}{counts[k]}" for k in order if counts.get(k))


def render_methods(reference, programs, built, ref_img, names=None):
    """`names` is the added-slot names file's entries."""
    lines = ["# Virtual methods by slot", "",
             f"Methods and signatures are {reference}'s. Each build's column is the slot "
             "index there (`—`: the build has no such slot). Evidence: `M` anchored or "
             "forced by neighbours, `S` forced by the editor block, `H` agreed by every "
             "class sharing the slot. Parameters: per build, the verdicts over every "
             "class's implementation of the slot — `a` agree, `c` conflict, `u` "
             "unverifiable (no measurable call site).", ""]
    short = {"MAPPED": "M", "MAPPED-BY-STRUCTURE": "S", "MAPPED-BY-HIERARCHY": "H"}
    current = None
    for m in built["methods"]:
        if m["introducer"] != current:
            current = m["introducer"]
            lines += ["", f"## {current}", "",
                      "| " + " | ".join(["method", "signature"] + [_short(p) for p in programs]
                                        + ["params"]) + " |",
                      "|" + "---|" * (len(programs) + 3)]
        cells = []
        for p in programs:
            s = m["slots"].get(p)
            ev = short.get(m["evidence"].get(p), "")
            cells.append("—" if s is None else f"{s}{ev}")
        params = "; ".join(f"{_short(p)} {_verdict_text(m['params'][p])}"
                           for p in programs if p in m["params"])
        lines.append(f"| `{m['method'] or '?'}` | `{signature(ref_img, m['ref_func'], m['method'] or '?')}` | "
                     + " | ".join(cells) + f" | {params or '—'} |")
    if built["new_slots"]:
        lines += ["", "## Slots with no reference method", "",
                  f"Slots a build added to a class's table; nothing in {reference} names them. "
                  "A name shown is from `added_slot_names.json` below.", "",
                  "| build | slot | name | function | unit | tables showing it first |",
                  "|---|---:|---|---|---|---|"]
        for p in programs:
            for n in built["new_slots"].get(p, {}).values():
                lines.append(f"| {_short(p)} | {n['slot']} | {('`%s`' % n['name']) if n.get('name') else '—'} | "
                             f"`{n['func']}` | {n['unit'] or '?'} | {', '.join(n['classes'])} |")
    if names:
        lines += ["", "## Named added slots", "",
                  "From `added_slot_names.json`, the baseline for naming further added slots: "
                  "each entry and the fact that settles it.", "",
                  "| build | class | slot | method | basis |", "|---|---|---:|---|---|"]
        for e in sorted(names, key=lambda e: (programs.index(e["program"]), e["class"], e["slot"])):
            args = ", ".join(f"{p['type']} {p['name']}" for p in e.get("params", []))
            # `<name>` in a basis is text, not an HTML tag for the renderer to drop.
            basis = e["basis"].replace("<", "&lt;").replace(">", "&gt;")
            lines.append(f"| {_short(e['program'])} | {e['class']} | {e['slot']} | "
                         f"`{e.get('ret', 'void')} {e['name']}({args})` | {basis} |")
    return "\n".join(lines) + "\n"


def render_classes(programs, classes):
    lines = ["# Classes", "",
             "Per class: its parent and table length in each build, and the slots it "
             "overrides (its own implementation rather than its parent's).", ""]
    for cls in sorted(classes):
        info = classes[cls]
        lines += [f"## {cls}", ""]
        for p in programs:
            if p not in info["parent"]:
                continue
            slots = info["slots"].get(p)
            over = info["overrides"].get(p)
            text = f"- **{_short(p)}**: parent {info['parent'][p] or '—'}"
            text += f", {slots} slots" if slots is not None else ", no labelled table"
            if over:
                text += f"; overrides {', '.join(sorted(set(over)))}"
            lines.append(text)
        lines.append("")
    return "\n".join(lines)


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--reference", default="nocedit.exe")
    ap.add_argument("--contract", action="append", metavar="PROG=JSON",
                    help="a build's derive_vtable_contract --out-json; one per build")
    ap.add_argument("--sigs", action="append", metavar="PROG=JSON",
                    help="a build's verify_sibling_signatures --out")
    ap.add_argument("--out-dir", required=True)
    ap.add_argument("--slot-names",
                    help="names for added slots (default: research/22-actor_class_hierarchy/added_slot_names.json)")
    args = ap.parse_args(argv)
    names_path = args.slot_names or nvs.default_slot_names()

    contract_paths, sig_paths = _pairs(args.contract), _pairs(args.sigs)
    programs = [args.reference] + list(contract_paths)
    ref_img = sm.Image(args.reference)
    contracts = {args.reference: reference_rows(
        ref_img, tables_by_class(ref_img, load_labels(args.reference)), struct_slot_names(args.reference))}
    contracts.update({p: _load(path) for p, path in contract_paths.items()})
    sigs = {p: _load(path) for p, path in sig_paths.items()}
    trees = {p: act.load(p)[0] for p in programs}
    units = {p: {a: sm.tu_of(f.get("name", "")) for a, f in sm.Image(p).by_addr.items()}
             for p in contract_paths}

    built = build(args.reference, programs, trees, contracts, sigs, units,
                  {p: nvs.load_slot_names(names_path, p) for p in programs})
    entries = [e for p in programs for e in nvs.load_slot_names(names_path, p).values()]
    os.makedirs(args.out_dir, exist_ok=True)
    outputs = {"hierarchy.md": render_hierarchy(programs, built["classes"]),
               "virtual_methods.md": render_methods(args.reference, programs, built, ref_img, entries),
               "classes.md": render_classes(programs, built["classes"]),
               "hierarchy.json": json.dumps(
                   {"programs": programs,
                    "classes": {c: {k: v for k, v in i.items() if k != "overrides"}
                                for c, i in sorted(built["classes"].items())}},
                   indent=1, sort_keys=True) + "\n"}
    for name, text in outputs.items():
        with open(os.path.join(args.out_dir, name), "w", encoding="utf-8") as fh:
            fh.write(text)
    print(f"wrote {len(outputs)} files to {args.out_dir}: {len(built['classes'])} classes, "
          f"{len(built['methods'])} reference methods, "
          f"{sum(len(v) for v in built['new_slots'].values())} new slots")


if __name__ == "__main__":
    main()
