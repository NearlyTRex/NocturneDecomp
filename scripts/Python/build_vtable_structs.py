#!/usr/bin/env python3
"""Create a build's actor vtable structs and apply them to its tables.

Laid out as nocedit lays its own: a part struct `<C>_vtable` holds the slots
class C introduces, and `<C>_full_vtable` embeds the parts of C's lineage in
order. A table gets the full struct of the class introducing its last slot --
`CDemonActor_vtable` alone where that is the root.

Slots and their meaning come from the build itself:

  * which class introduces a slot: the highest ancestor whose every tabled
    descendant has it. That puts a slot in a class with no labelled table of its
    own (bw1's CHero) rather than in each of its subclasses;
  * what a slot is: the build's contract (derive_vtable_contract.py), and the
    reference build's prototype for it, with the part's class as `this_ptr`.
    Each field points to a `<C>_<method>` function definition.

A slot the reference has no method for is one the build added. Its field is
`vfunc<N>` and its definition `void (<C>* this_ptr)` -- a guess, said so in the
definition's description: every such slot is an empty function in its base.

A table shorter than its parent's was compiled against an older parent
(derive_vtable_contract.stale_layouts); it gets no struct.

Usage:
    build_vtable_structs.py --program bw1.exe                          # report
    build_vtable_structs.py --program bw1.exe --apply --project ABS/projects
"""

import argparse
import json
import os
import sys
from collections import Counter

import actor_class_tree as act
import apply_sibling_annotations as asa
import name_vtable_slot_functions as nvs
import sibling_match as sm
import watcom_type_info as wti
from derive_vtable_contract import data_types, slots_of, struct_slot_names, tables_by_class
from map_vtable_slots import load_labels

PTR = 4
STRUCT_CATEGORY = "/Nocturne/Class/Game"
FUNCDEF_CATEGORY = "/Nocturne/FunctionDefinition/Game"
GUESS = "Slot added in this build, empty in its base class; parameters unknown"


def member_names(program):
    """part struct -> the member name nocedit gives it in its full structs (`_ub`)."""
    out = {}
    for s in data_types(program).get("structs", []):
        if s.get("name", "").endswith("_full_vtable"):
            for f in s.get("fields", []):
                out.setdefault(f.get("type"), f.get("name"))
    return out


def placeholders(program, parent, classes):
    """Receiver types the program lacks, with the size bounds its tree gives them.

    A class registers whether or not the compiler emitted RTTI for it, and
    without RTTI there is no size: it is at least its parent's and at most its
    smallest subclass's. The placeholder is left empty and says so, rather than
    taking a size that only looks measured.
    """
    lengths = {t.get("name"): t.get("len") for kind in data_types(program).values()
               if isinstance(kind, list) for t in kind if isinstance(t, dict)}
    out = []
    for cls in sorted(classes):
        kind = wti.type_name(cls)
        if kind in lengths:
            continue
        low = lengths.get(wti.type_name(parent.get(cls) or ""))
        highs = [lengths[wti.type_name(c)] for c in subtree(parent, cls)
                 if c != cls and lengths.get(wti.type_name(c))]
        out.append({"name": kind, "description":
                    f"Registered actor class with no RTTI record; size unknown, between "
                    f"{low if low else '?'} ({parent.get(cls) or 'no parent'}) and "
                    f"{min(highs) if highs else '?'} bytes (its smallest subclass)"})
    return out


def subtree(parent, cls):
    """`cls` and every class below it."""
    return [c for c in parent if cls in act.ancestry(parent, c)]


def plan(program, contract_path, reference="nocedit.exe", slot_names=None):
    """`slot_names` is name_vtable_slot_functions.load_slot_names() for the program."""
    slot_names = slot_names or {}
    img = sm.Image(program)
    parent, _ = act.load(program)
    with open(contract_path, encoding="utf-8") as fh:
        contract = json.load(fh)
    rows = {c: {int(r["slot"]): r for r in v["slots"]} for c, v in contract.items()}
    ref_img = sm.Image(reference)
    ref_tables = tables_by_class(ref_img, load_labels(reference))
    ref_names = struct_slot_names(reference)
    names = member_names(reference)

    tables = {(t.get("addr") or "").lower(): slots_of(t) for t in img.vtables}
    table_of, _ = nvs.class_tables(tables, load_labels(program), parent)
    length = {c: len(tables[a]) for c, a in table_of.items() if c in parent}

    def nearest_tabled(cls):
        return next((a for a in act.ancestry(parent, parent.get(cls)) if a in length), None)

    stale = sorted(c for c in length if nearest_tabled(c) and length[c] < length[nearest_tabled(c)])
    usable = {c: n for c, n in length.items() if c not in stale}

    def covered(cls):
        """Slots every usable table at or below `cls` has."""
        lens = [usable[c] for c in subtree(parent, cls) if c in usable]
        return min(lens) if lens else 0

    def representative(cls, slot):
        """A contract row naming `slot`, from `cls` or the classes below it."""
        for c in [cls] + sorted(subtree(parent, cls)):
            r = rows.get(c, {}).get(slot)
            if r and r.get("method"):
                return c, r
        return None, None

    # Parts: walk each lineage from the root, giving every class the slots its
    # whole subtree has beyond what its ancestors already hold.
    parts, chain_of = {}, {}
    for cls in sorted(usable, key=lambda c: (len(act.ancestry(parent, c)), c)):
        start, chain = 0, []
        for a in reversed(act.ancestry(parent, cls)):
            end = covered(a)
            if end > start:
                if a not in parts:
                    parts[a] = [field(a, j, *representative(a, j), ref_img, ref_tables, parent, ref_names,
                                      slot_names.get((wti.type_name(a), j)))
                                for j in range(start, end)]
                chain.append(a)
                start = end
        chain_of[cls] = chain

    def part_name(cls):
        return f"{wti.type_name(cls)}_vtable"

    fulls = {}
    applied = []
    for cls, chain in sorted(chain_of.items()):
        last = chain[-1]
        if len(chain) == 1:
            struct = part_name(last)
        else:
            struct = f"{wti.type_name(last)}_full_vtable"
            fulls[struct] = [(names.get(part_name(a)) or "_u" + wti.type_name(a)[1:].lower(), part_name(a))
                             for a in chain]
        size = sum(len(parts[a]) for a in chain) * PTR
        applied.append({"addr": table_of[cls], "class": cls, "struct": struct,
                        "size": size, "fits": size == usable[cls] * PTR})
    return {"program": program, "parts": {part_name(c): f for c, f in sorted(parts.items())},
            "fulls": fulls, "apply": applied, "stale": stale,
            "placeholders": placeholders(program, parent, parts),
            "unlabelled": sorted(c for c in parent if c not in length)}


def field(cls, slot, rep, row, ref_img, ref_tables, parent, ref_names=None, named=None):
    """One part member: name, its definition's name and prototype.

    `named` is the slot's entry in the added-slot names, for a slot the
    reference has no method for.
    """
    kind = wti.type_name(cls)
    if row is None and named is not None:
        return {"slot": slot, "name": named["name"], "funcdef": f"{kind}_{named['name']}",
                "sig": nvs.entry_signature(named, kind), "guess": False}
    if row is None:
        return {"slot": slot, "name": f"vfunc{slot}", "funcdef": f"{kind}_vfunc{slot}",
                "sig": {"ret": "void", "params": [{"name": "this_ptr", "type": f"{kind}*"}]},
                "guess": True}
    sig = nvs.reference_signature(ref_img, ref_tables, parent, rep, row.get("sibling_slot"),
                                  row["method"], kind, ref_names)
    return {"slot": slot, "name": row["method"], "funcdef": f"{kind}_{row['method']}",
            "sig": sig, "guess": False}


def apply_structs(program, built):
    """Create the definitions and structs, then lay each struct over its table."""
    from ghidra.program.model.data import (CategoryPath, DataTypeConflictHandler,
                                           FunctionDefinitionDataType, ParameterDefinitionImpl,
                                           PointerDataType, StructureDataType)

    dtm = program.getDataTypeManager()
    replace = DataTypeConflictHandler.REPLACE_HANDLER
    cache, out = {}, Counter()

    def funcdef(f):
        spec = f["sig"]
        ret = asa.resolve_type(dtm, (spec or {}).get("ret"), cache)
        params = [(p.get("name"), asa.resolve_type(dtm, p.get("type"), cache))
                  for p in (spec or {}).get("params", [])]
        if spec is None or ret is None or any(t is None for _, t in params):
            out["field typed void* (prototype unresolved)"] += 1
            return PointerDataType()
        fd = FunctionDefinitionDataType(CategoryPath(FUNCDEF_CATEGORY), f["funcdef"])
        fd.setReturnType(ret)
        fd.setArguments([ParameterDefinitionImpl(n, t, None) for n, t in params])
        if f["guess"]:
            # A function definition takes a comment; Ghidra refuses it a description.
            fd.setComment(GUESS)
            out["guessed slot definitions"] += 1
        return PointerDataType(dtm.addDataType(fd, replace))

    tx = program.startTransaction("Actor vtable structs")
    ok = False
    try:
        # Before the definitions, whose receivers they are.
        for p in built.get("placeholders", []):
            if dtm.getDataType(f"{STRUCT_CATEGORY}/{p['name']}") is None:
                s = StructureDataType(CategoryPath(STRUCT_CATEGORY), p["name"], 0, dtm)
                s.setDescription(p["description"])
                dtm.addDataType(s, replace)
                out["placeholder class structs"] += 1
        made = {}
        for name, fields in built["parts"].items():
            s = StructureDataType(CategoryPath(STRUCT_CATEGORY), name, 0, dtm)
            for f in fields:
                s.add(funcdef(f), PTR, f["name"], None)
            made[name] = dtm.addDataType(s, replace)
            out["part structs"] += 1
        for name, members in built["fulls"].items():
            s = StructureDataType(CategoryPath(STRUCT_CATEGORY), name, 0, dtm)
            for member, part in members:
                s.add(made[part], made[part].getLength(), member, None)
            made[name] = dtm.addDataType(s, replace)
            out["full structs"] += 1
        listing = program.getListing()
        space = program.getAddressFactory().getDefaultAddressSpace()
        for a in built["apply"]:
            if not a["fits"]:
                out["table skipped (size differs)"] += 1
                continue
            start = space.getAddress(int(a["addr"], 16))
            listing.clearCodeUnits(start, start.add(a["size"] - 1), False)
            listing.createData(start, made[a["struct"]])
            out["tables typed"] += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return out


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", required=True)
    ap.add_argument("--contract",
                    help="default: annotations/<program>/reports/actor_vtable_contract.json")
    ap.add_argument("--reference", default="nocedit.exe")
    ap.add_argument("--out-json")
    ap.add_argument("--project", help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--slot-names",
                    help="names for slots the build added (default: research/22-actor_class_hierarchy/"
                         "added_slot_names.json)")
    args = ap.parse_args(argv)

    built = plan(args.program, args.contract or nvs.default_contract(args.program), args.reference,
                 nvs.load_slot_names(args.slot_names or nvs.default_slot_names(), args.program))
    guesses = sum(f["guess"] for fields in built["parts"].values() for f in fields)
    unsigned = sum(f["sig"] is None for fields in built["parts"].values() for f in fields)
    misfit = [a for a in built["apply"] if not a["fits"]]
    print(f"{args.program}: {len(built['parts'])} part structs, {len(built['fulls'])} full structs, "
          f"{len(built['apply'])} tables to type ({len(misfit)} whose size differs)")
    print(f"  slots added in this build (guessed vfuncN): {guesses}; "
          f"named slots with no reference prototype: {unsigned}")
    for name, fields in built["parts"].items():
        print(f"    {name:28s} {len(fields):3d} slots")
    for a in misfit:
        print(f"  SIZE DIFFERS {a['class']} at {a['addr']}: {a['struct']} is {a['size']} bytes")
    if built["stale"]:
        print(f"  stale layouts, left untyped: {', '.join(built['stale'])}")
    for p in built.get("placeholders", []):
        print(f"  placeholder {p['name']}: {p['description']}")
    if args.out_json:
        with open(args.out_json, "w", encoding="utf-8") as fh:
            json.dump(built, fh, indent=1)

    if not args.apply:
        print("[dry-run] re-run with --project ... --apply")
        return 0
    if not args.project:
        print("ERROR: applying needs --project")
        return 2

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            for outcome, n in sorted(apply_structs(program, built).items()):
                print(f"  {outcome:42s} {n}")
            from ghidra.util.task import ConsoleTaskMonitor
            program.getDomainFile().save(ConsoleTaskMonitor())
            print("Saved.")
    finally:
        project.close()
    return 0


if __name__ == "__main__":
    sys.exit(main())
