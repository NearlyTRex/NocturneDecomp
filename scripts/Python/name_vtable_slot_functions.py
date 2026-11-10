#!/usr/bin/env python3
"""Name and type a program's virtual methods from their vtable slot index.

This does NOT match functions between the two binaries. A vtable slot's index
already determines which method it is, given two things we now have:

  * the program's own slot -> method contract (annotations/<program>/reports/
    actor_vtable_contract.json, from derive_vtable_contract.py) -- its own,
    because the builds number their slots differently;
  * the real class hierarchy, recovered from the registerActorClass() calls
    (scripts/Python/actor_class_tree.py).

Each named override also takes the reference build's prototype for its slot,
with the class as `this_ptr`: an override keeps its base's parameters.

So if table `g_CZombieVTable` holds function F at slot 53, and the contract says
slot 53 of a CCharacter lineage is `kill`, then F is `CZombie::kill`. No body
comparison, no address correspondence, nothing inferred from similarity -- which
is why this reaches functions the sibling matcher cannot, and why it is worth
running independently of it.

The one thing that will silently produce wrong names is inheritance. 85% of the
slots in these tables (6062 of 7171) hold the PARENT's implementation, not an
override; naming those after the subclass would be false. Every slot is
therefore diffed against the nearest ancestor that has a table of its own, and
only genuine overrides are named. This is also why the hierarchy has to come
from the registrations rather than actor_hierarchy.txt, which had nine parents
wrong (CBoxActor and the CBodyPart..CAmmo block filed under CCharacter instead
of CDemonActor) -- a wrong parent mis-attributes every slot of that class.

Four further cases are refused rather than guessed:

  folded        one function serving several slots of the same table. Watcom
                merged the bodies, so the slot no longer identifies the method.
  ambiguous     one function reached as a different method from two tables --
                sibling classes sharing an implementation.
  no contract   a slot past the contract's range, i.e. a method the subclass
                introduces itself. Needs the contract extended per subclass.
  named         the function already carries a class and method; never clobbered.

Usage:
    name_vtable_slot_functions.py                                  # report
    name_vtable_slot_functions.py --out-plan plan.json
    GHIDRA_INSTALL_DIR=... name_vtable_slot_functions.py \
        --project ABS/projects --project-name NocturneEdit --apply

#@author NearlyTRex
#@category Annotations
"""

import argparse
import json
import os
import sys
from collections import Counter, defaultdict

import actor_class_tree as act
# Imported here, not where it is used: pyghidra.start() rearranges sys.path,
# and a sibling script imported after it is no longer found.
import apply_sibling_annotations as asa
import sibling_match as sm
import watcom_type_info as wti
from derive_vtable_contract import slot_method, slots_of, struct_slot_names, tables_by_class
from map_vtable_slots import load_labels

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def default_contract(program):
    """derive_vtable_contract.py's output for `program`, where it keeps it."""
    return os.path.join(REPO_ROOT, "annotations", program, "reports",
                        "actor_vtable_contract.json")


def default_slot_names():
    """The baseline names for slots a build added (research/22-actor_class_hierarchy)."""
    return os.path.join(REPO_ROOT, "research", "22-actor_class_hierarchy", "added_slot_names.json")


def load_slot_names(path, program):
    """{(class type name, slot): entry} for `program`, or {} without a file."""
    try:
        with open(path, encoding="utf-8") as fh:
            rows = json.load(fh).get("slots", [])
    except OSError:
        return {}
    return {(wti.type_name(r["class"]), int(r["slot"])): r for r in rows if r.get("program") == program}


def named_slot(slot_names, parent, cls, slot):
    """The added-slot entry `cls` inherits for `slot` from itself or an ancestor, or None."""
    for a in act.ancestry(parent, cls):
        entry = slot_names.get((wti.type_name(a), slot))
        if entry:
            return entry
    return None


def entry_signature(entry, kind):
    """An added-slot entry's prototype with `kind` as the receiver."""
    return {"ret": entry.get("ret"), "conv": "__cdecl",
            "params": [{"name": "this_ptr", "type": f"{kind}*"}]
            + [{"name": p["name"], "type": p["type"]} for p in entry.get("params", [])]}


def common_ancestor(parent, classes):
    """The nearest class every one of `classes` descends from (or is), or None."""
    lines = [act.ancestry(parent, c) for c in classes]
    return next((a for a in lines[0] if all(a in line for line in lines[1:])), None)


def reference_signature(ref_img, ref_tables, parent, cls, sibling_slot, method, kind=None,
                        ref_names=None):
    """The reference build's prototype for `method`, with `cls` (typed `kind`) as the receiver.

    An override keeps its base's parameters, so any of the reference's own
    implementations of the slot gives the method's declared signature. The
    nearest ancestor (or the class itself) with a reference table is asked
    first; if it names the slot as another method, there is no answer. A stub
    folded into several slots is passed over -- its prototype is one of those
    methods' only (CCharacter's one `return 0` serves isGrabbable and the
    three-argument getGrabbed) -- for the next ancestor, then any other table
    whose slot is the same method. `ref_names` is struct_slot_names(reference).
    """
    if sibling_slot is None:
        return None
    ref_names = ref_names or {}
    lineage = [a for a in act.ancestry(parent, cls) if a in ref_tables]
    others = sorted(c for c in ref_tables if c not in lineage)
    for depth, a in enumerate(lineage + others):
        table = ref_tables[a]
        funcs = slots_of(table)
        if sibling_slot >= len(funcs):
            continue
        names = ref_names.get((table.get("addr") or "").lower(), {})
        if slot_method(ref_img, funcs, sibling_slot, names)[1] != method:
            if depth == 0 and a in lineage:
                return None
            continue
        f = funcs[sibling_slot]
        rec = ref_img.by_addr.get(f) or {}
        params = [dict(p) for p in (rec.get("vars") or {}).get("params", [])]
        if funcs.count(f) > 1 or not params or params[0].get("name") != "this_ptr":
            continue
        params[0]["type"] = f"{kind or cls}*"
        return {"ret": rec.get("ret"), "conv": rec.get("conv"),
                "params": [{"name": p.get("name"), "type": p.get("type")} for p in params]}
    return None


def tu_of_class(where, cls):
    """The source file a class registers itself in -> its TU name.

    `where[cls]` is like ("core/boxactor.cpp/staticInit_FUN_0041e260.cpp", ...),
    so the TU is the containing directory with '/' -> '_'. Independent of the
    vtables and of the function's own name, which makes it a free cross-check on
    every proposal.
    """
    rec = where.get(cls)
    if not rec:
        return None
    d = os.path.dirname(rec[0] if isinstance(rec, (list, tuple)) else rec)
    return d.replace("/", "_") or None


def class_tables(tables, labels, parent):
    """-> (class -> its table's address, class -> a label spelled otherwise).

    From the g_C<Class>VTable labels, matched case-insensitively against the
    registered class names: the labels were typed by hand and do not always
    agree on case, e.g. the table for the registered `CMineCar` is labelled
    `g_CMinecarVTable`. Comparing exactly makes the class look unlabelled and
    silently drops its whole table.

    A label spelled as the class's type name (bw3's `CAmmo_Mana` is labelled
    `g_CAmmoManaVTable`) is the class's own too, and is no misspelling.
    """
    canon = {c.lower(): c for c in parent}
    canon.update({wti.type_name(c).lower(): c for c in parent if wti.type_name(c).lower() not in canon})
    table_of, label_case = {}, {}
    for addr in tables:
        lbl = labels.get(addr) or ""
        if not (lbl.startswith("g_C") and lbl.endswith("VTable")):
            continue
        cls = canon.get(lbl[2:-6].lower(), lbl[2:-6])
        table_of[cls] = addr
        if lbl[2:-6] not in (cls, wti.type_name(cls)):
            label_case[cls] = lbl
    return table_of, label_case


def build_plan(program, contract_path, require_tu=False, reference="nocedit.exe", slot_names=None):
    """`slot_names` is load_slot_names(): names for slots the contract has no method for."""
    slot_names = slot_names or {}
    img = sm.Image(program)
    with open(contract_path, encoding="utf-8") as fh:
        contract = json.load(fh)
    parent, where = act.load(program)
    ref_img = sm.Image(reference)
    ref_tables = tables_by_class(ref_img, load_labels(reference))
    ref_names = struct_slot_names(reference)

    slot_row = {c: {int(s["slot"]): s for s in r["slots"]}
                for c, r in contract.items()}
    lineages = set(contract)

    tables = {(t.get("addr") or "").lower(): slots_of(t) for t in img.vtables}
    table_of, label_case = class_tables(tables, load_labels(program), parent)

    def nearest_tabled_ancestor(cls):
        for a in act.ancestry(parent, parent.get(cls)):
            if a in table_of:
                return a
        return None

    def lineage_of(cls):
        for a in act.ancestry(parent, cls):
            if a in lineages:
                return a
        return None

    # A table whose slots contain NO function from the class's own source file is
    # very likely labelled for the wrong class. Sibling classes share every
    # inherited slot, so transferring a label by anchor count cannot tell them
    # apart -- this is how nocturne's `g_CGunVTable` ended up on the table that
    # holds four core_flashlit.cpp functions and no core_gun.cpp ones, while
    # CGun's real table kept its `CWeapon_full_vtable_*` placeholder. Naming
    # slots from a mislabelled table is the worst outcome available here, so
    # flag it and refuse the table's proposals.
    suspect_labels = []
    for cls, addr in sorted(table_of.items()):
        want = tu_of_class(where, cls)
        if not want:
            continue
        tus = Counter(sm.tu_of((img.by_addr.get(f) or {}).get("name", ""))
                      for f in tables[addr] if f)
        # A function whose unit is still a placeholder may well be the class's own.
        if want not in tus and not any(sm.is_placeholder_unit(t) for t in tus):
            suspect_labels.append({"table": addr, "cls": cls, "expected_tu": want,
                                   "actual": tus.most_common(4)})
    suspect_classes = {s["cls"] for s in suspect_labels}

    proposals = defaultdict(set)      # func addr -> {(class, method)}
    stats = Counter()
    skipped = defaultdict(list)

    for cls, addr in sorted(table_of.items()):
        if cls in suspect_classes:
            stats["table: label suspect, refused"] += 1
            continue
        if cls not in parent:
            stats["table: not a registered actor class"] += 1
            continue
        lin = lineage_of(cls)
        if lin is None:
            stats["table: no contract lineage"] += 1
            continue
        anc = nearest_tabled_ancestor(cls)
        base = tables.get(table_of.get(anc), []) if anc else []
        mine = tables[addr]
        counts = Counter(f for f in mine if f)

        for i, f in enumerate(mine):
            if not f:
                continue
            stats["slots examined"] += 1
            if base and i < len(base) and base[i] == f:
                stats["inherited from ancestor"] += 1
                continue
            stats["own override"] += 1
            if counts[f] > 1:
                stats["skip: folded slot"] += 1
                skipped["folded"].append((f, cls, i))
                continue
            srow = slot_row.get(lin, {}).get(i) or {}
            method, named = srow.get("method"), None
            if not method:
                entry = named_slot(slot_names, parent, cls, i)
                if entry is None:
                    stats["skip: slot past contract"] += 1
                    skipped["no_contract"].append((f, cls, i))
                    continue
                method, named = entry["name"], (wti.type_name(entry["class"]), i)
            tu, core = sm.split_qualified_name(
                (img.by_addr.get(f) or {}).get("name", ""))
            if core:
                stats["skip: already named"] += 1
                skipped["already_named"].append((f, cls, method, core))
                continue
            if not tu:
                stats["skip: no translation unit on the function"] += 1
                skipped["no_tu"].append((f, cls, method))
                continue
            proposals[f].add((cls, method, tu, i, srow.get("sibling_slot"), named))

    plan, ambiguous = [], []
    for f, cands in sorted(proposals.items()):
        # One method from several tables is one implementation they share --
        # a base that has no table of its own (bw1's CHero), so each subclass
        # shows it. It belongs to their common ancestor. Several methods is a
        # body the compiler folded, which no one name fits.
        classes = {c for c, *_ in cands}
        owner = common_ancestor(parent, classes) if len(classes) > 1 else next(iter(classes))
        if len({m for _, m, *_ in cands}) > 1 or owner is None:
            stats["skip: ambiguous across tables"] += 1
            ambiguous.append((f, sorted({(c, m) for c, m, *_ in cands})))
            continue
        if len(classes) > 1:
            stats["shared by subclasses, named for their ancestor"] += 1
        _cls, method, tu, slot, sibling_slot, named = min(cands, key=lambda c: (c[0], c[3]))
        cls = owner
        expect = tu_of_class(where, cls)
        if expect is not None and tu != expect and sm.is_placeholder_unit(tu):
            # `unkafter_prye.cpp` only says the unit is not known yet; the
            # class's own registration file is what knows it.
            tu = expect
            stats["unit taken from the class's file (placeholder unit)"] += 1
        tu_agrees = (expect is not None and expect == tu)
        if require_tu and not tu_agrees:
            stats["skip: unit disagrees with the class's own file"] += 1
            skipped["tu_mismatch"].append((f, cls, method, tu, expect))
            continue
        # Names and receivers use the class's type name: bw3 registers
        # `CAmmo_Mana`, whose struct is `CAmmoMana`, and `<unit>_<Class>_<method>`
        # cannot say where an underscored class name ends.
        kind = wti.type_name(cls)
        if named:
            sig = entry_signature(slot_names[named], kind)
        else:
            sig = reference_signature(ref_img, ref_tables, parent, cls, sibling_slot, method, kind, ref_names)
        if sig is None:
            stats["plan: no reference signature"] += 1
        plan.append({"addr": f, "cls": cls, "method": method, "tu": tu,
                     "slot": slot, "sibling_slot": sibling_slot,
                     "class_tu": expect, "tu_agrees": tu_agrees,
                     "old_name": (img.by_addr.get(f) or {}).get("name", ""),
                     "new_name": f"{tu}_{kind}_{method}_FUN_{f}", "sig": sig})
        stats["PLAN"] += 1

    return {"plan": plan, "stats": stats, "ambiguous": ambiguous,
            "skipped": skipped, "tables": len(table_of),
            "suspect_labels": suspect_labels, "label_case": label_case,
            "unlabelled": sorted(c for c in parent if c not in table_of)}


def main(argv=None):
    ap = argparse.ArgumentParser()
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--contract",
                    help="default: annotations/<program>/reports/actor_vtable_contract.json")
    ap.add_argument("--reference", default="nocedit.exe",
                    help="the build whose prototypes the named overrides take")
    ap.add_argument("--allow-tu-mismatch", action="store_true",
                    help="also name when the function's unit is not the class's "
                         "own source file. Off by default: that disagreement is "
                         "what exposed the mislabelled g_CGunVTable.")
    ap.add_argument("--out-plan")
    ap.add_argument("--project", help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--slot-names",
                    help="names for slots the build added (default: research/22-actor_class_hierarchy/"
                         "added_slot_names.json)")
    args = ap.parse_args(argv)

    r = build_plan(args.program, args.contract or default_contract(args.program),
                   require_tu=not args.allow_tu_mismatch, reference=args.reference,
                   slot_names=load_slot_names(args.slot_names or default_slot_names(), args.program))
    st = r["stats"]

    print(f"=== {args.program}: {r['tables']} labelled vtables ===")
    for k in ("slots examined", "inherited from ancestor", "own override",
              "shared by subclasses, named for their ancestor",
              "unit taken from the class's file (placeholder unit)"):
        print("  %-38s %d" % (k, st[k]))
    print("\n=== refused ===")
    for k, v in sorted(st.items()):
        if k.startswith("skip:") or k.startswith("table:"):
            print("  %-38s %d" % (k, v))

    agree = sum(1 for p in r["plan"] if p["tu_agrees"])
    print(f"\n=== plan: {len(r['plan'])} functions to name ===")
    print("  unit matches the class's own file  %d / %d  (independent check)"
          % (agree, len(r["plan"])))
    print("  with the reference's prototype     %d / %d"
          % (sum(1 for p in r["plan"] if p["sig"]), len(r["plan"])))
    for p in r["plan"][:args.show]:
        flag = "" if p["tu_agrees"] else "   [unit %s != class file %s]" % (
            p["tu"], p["class_tu"])
        print("    %s  %s%s" % (p["addr"], p["new_name"], flag))

    if r["ambiguous"]:
        print("\n=== ambiguous, refused (one body, several methods) ===")
        for f, cands in r["ambiguous"][:10]:
            print("    %s  %s" % (f, cands))

    if r["suspect_labels"]:
        print("\n=== vtable labels that look wrong -- FIX THESE, table refused ===")
        for s in r["suspect_labels"]:
            print("    %s  g_%sVTable holds no %s function"
                  % (s["table"], s["cls"], s["expected_tu"]))
            print("        actual: %s" % (s["actual"],))

    if r["label_case"]:
        print("\n=== labels whose spelling differs from the registered class ===")
        for cls, lbl in sorted(r["label_case"].items()):
            print("    registered %-16s labelled %s" % (cls, lbl))

    if r["unlabelled"]:
        print("\n=== registered actor classes with no labelled vtable ===")
        print("    %s" % ", ".join(r["unlabelled"]))

    nc = r["skipped"].get("no_contract", [])
    if nc:
        print("\n=== slots past the contract (extend it per subclass) ===")
        for cls, n in Counter(c for _, c, _ in nc).most_common(10):
            print("    %-22s %d slot(s)" % (cls, n))

    if args.out_plan:
        with open(args.out_plan, "w", encoding="utf-8") as fh:
            json.dump({"program": args.program, "plan": r["plan"],
                       "ambiguous": [{"addr": f, "candidates": c}
                                     for f, c in r["ambiguous"]]},
                      fh, indent=1)
        print(f"\nwrote {args.out_plan}")

    if not args.apply:
        print("\n[dry-run] re-run with --project ... --apply")
        return 0
    if not args.project:
        print("ERROR: applying needs --project")
        return 2

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            outcomes = apply_plan(program, r["plan"])
            for outcome, n in sorted(outcomes.items()):
                print("  %-40s %d" % (outcome, n))
            if any(k.startswith("name") for k in outcomes):
                from ghidra.util.task import ConsoleTaskMonitor
                # project.save() alone silently discards program mutations.
                program.getDomainFile().save(ConsoleTaskMonitor())
                print("Saved.")
    finally:
        project.close()
    return 0


def apply_plan(program, plan):
    """Name each planned function and give it its reference prototype.

    Goes through apply_sibling_annotations.apply_row, so the same rules hold as
    for every other transferred name: a class-qualified name needs the
    signature that supplies its `this_ptr`, and a prototype that cannot be
    built in full is not applied in part. Returns {outcome: count}.
    """
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()
    dtm, cache = program.getDataTypeManager(), {}
    outcomes = Counter()
    tx = program.startTransaction("Name vtable slots from the contract")
    ok = False
    try:
        for p in plan:
            fn = fm.getFunctionAt(space.getAddress(int(p["addr"], 16)))
            if fn is None:
                outcomes["skipped (no function there)"] += 1
                continue
            # Re-check against the live program: the plan came from an export
            # that may predate naming done since.
            if sm.split_qualified_name(fn.getName())[1]:
                outcomes["skipped (already named)"] += 1
                continue
            sig = p.get("sig")
            row = {"action": "NAME_SIG", "want": p["new_name"], "current": fn.getName(),
                   "sig": sig, "conv": (sig or {}).get("conv"),
                   "receiver_from_signature": True}
            outcomes[asa.apply_row(program, fn, row, True, dtm, cache)] += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return outcomes


if __name__ == "__main__":
    sys.exit(main())
