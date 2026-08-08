#!/usr/bin/env python3
"""Name a program's virtual methods from their vtable slot index.

This does NOT match functions between the two binaries. A vtable slot's index
already determines which method it is, given two things we now have:

  * the slot -> method contract (annotations/nocturne.exe/reports/
    actor_vtable_contract.json), derived once from nocedit and covering the
    CDemonActor/CCharacter/CNPC/CEnemy/CHero lineages;
  * the real class hierarchy, recovered from the registerActorClass() calls
    (scripts/Python/actor_class_tree.py).

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
import glob
import json
import os
import sys
from collections import Counter, defaultdict

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

import sibling_match as sm
import actor_class_tree as act

REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))
DEFAULT_CONTRACT = os.path.join(
    REPO_ROOT, "annotations", "nocturne.exe", "reports",
    "actor_vtable_contract.json")


def _slots(table):
    return [(e.get("func_addr") or "").lower()
            for e in table.get("functions", [])]


def _load_json_records(program, kind):
    out = {}
    for path in glob.glob(os.path.join(REPO_ROOT, "annotations", program,
                                       kind, "*.json")):
        with open(path) as fh:
            recs = json.load(fh)
        if not isinstance(recs, list):
            continue
        for r in recs:
            if isinstance(r, dict) and r.get("addr") and r.get("name"):
                out[r["addr"].lower()] = r["name"]
    return out


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


def build_plan(program, contract_path, require_tu=False):
    img = sm.Image(program)
    with open(contract_path) as fh:
        contract = json.load(fh)
    parent, where = act.load(program)

    slot_method = {c: {int(s["slot"]): s["method"] for s in r["slots"]}
                   for c, r in contract.items()}
    lineages = set(contract)

    tables = {(t.get("addr") or "").lower(): _slots(t) for t in img.vtables}
    labels = _load_json_records(program, "symbols_label")
    # class -> its own table, from the g_C<Class>VTable label.
    #
    # Matched case-insensitively against the registered class names: the labels
    # were typed by hand and do not always agree on case, e.g. the table for the
    # registered `CMineCar` is labelled `g_CMinecarVTable`. Comparing exactly
    # makes the class look unlabelled and silently drops its whole table.
    canon = {c.lower(): c for c in parent}
    table_of, label_case = {}, {}
    for addr in tables:
        lbl = labels.get(addr) or ""
        if not (lbl.startswith("g_C") and lbl.endswith("VTable")):
            continue
        cls = canon.get(lbl[2:-6].lower(), lbl[2:-6])
        table_of[cls] = addr
        if cls != lbl[2:-6]:
            label_case[cls] = lbl

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
        if want not in tus:
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
            method = slot_method.get(lin, {}).get(i)
            if not method:
                stats["skip: slot past contract"] += 1
                skipped["no_contract"].append((f, cls, i))
                continue
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
            proposals[f].add((cls, method, tu))

    plan, ambiguous = [], []
    for f, cands in sorted(proposals.items()):
        if len({(c, m) for c, m, _ in cands}) > 1:
            stats["skip: ambiguous across tables"] += 1
            ambiguous.append((f, sorted((c, m) for c, m, _ in cands)))
            continue
        cls, method, tu = next(iter(cands))
        expect = tu_of_class(where, cls)
        tu_agrees = (expect is not None and expect == tu)
        if require_tu and not tu_agrees:
            stats["skip: unit disagrees with the class's own file"] += 1
            skipped["tu_mismatch"].append((f, cls, method, tu, expect))
            continue
        plan.append({"addr": f, "cls": cls, "method": method, "tu": tu,
                     "class_tu": expect, "tu_agrees": tu_agrees,
                     "old_name": (img.by_addr.get(f) or {}).get("name", ""),
                     "new_name": f"{tu}_{cls}_{method}_FUN_{f}"})
        stats["PLAN"] += 1

    return {"plan": plan, "stats": stats, "ambiguous": ambiguous,
            "skipped": skipped, "tables": len(table_of),
            "suspect_labels": suspect_labels, "label_case": label_case,
            "unlabelled": sorted(c for c in parent if c not in table_of)}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--contract", default=DEFAULT_CONTRACT)
    ap.add_argument("--allow-tu-mismatch", action="store_true",
                    help="also name when the function's unit is not the class's "
                         "own source file. Off by default: that disagreement is "
                         "what exposed the mislabelled g_CGunVTable.")
    ap.add_argument("--out-plan")
    ap.add_argument("--project", help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--show", type=int, default=15)
    args = ap.parse_args()

    r = build_plan(args.program, args.contract,
                   require_tu=not args.allow_tu_mismatch)
    st = r["stats"]

    print(f"=== {args.program}: {r['tables']} labelled vtables ===")
    for k in ("slots examined", "inherited from ancestor", "own override"):
        print("  %-38s %d" % (k, st[k]))
    print("\n=== refused ===")
    for k, v in sorted(st.items()):
        if k.startswith("skip:") or k.startswith("table:"):
            print("  %-38s %d" % (k, v))

    agree = sum(1 for p in r["plan"] if p["tu_agrees"])
    print(f"\n=== plan: {len(r['plan'])} functions to name ===")
    print("  unit matches the class's own file  %d / %d  (independent check)"
          % (agree, len(r["plan"])))
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
        with open(args.out_plan, "w") as fh:
            json.dump({"program": args.program, "plan": r["plan"],
                       "ambiguous": [{"addr": f, "candidates": c}
                                     for f, c in r["ambiguous"]]},
                      fh, indent=1)
        print(f"\nwrote {args.out_plan}")

    if not args.apply:
        print("\n[dry-run] re-run with --project ... --apply")
        return
    if not args.project:
        print("ERROR: applying needs --project")
        sys.exit(2)

    import pyghidra
    print("\nStarting PyGhidra...")
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project),
                                    args.project_name)
    code = 0
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            from ghidra.program.model.symbol import SourceType
            from ghidra.util.task import ConsoleTaskMonitor

            fm = program.getFunctionManager()
            space = program.getAddressFactory().getDefaultAddressSpace()
            tx = program.startTransaction("Name vtable slots from the contract")
            done, failed = 0, []
            ok = True
            try:
                for p in r["plan"]:
                    fn = fm.getFunctionAt(space.getAddress(int(p["addr"], 16)))
                    if fn is None:
                        failed.append((p["addr"], "no function there"))
                        continue
                    # Re-check against the live program: the plan came from an
                    # export that may predate hand-naming done since.
                    _tu, core = sm.split_qualified_name(fn.getName())
                    if core:
                        failed.append((p["addr"],
                                       "already named %s" % fn.getName()))
                        continue
                    try:
                        fn.setName(p["new_name"], SourceType.USER_DEFINED)
                        done += 1
                    except Exception as e:
                        failed.append((p["addr"],
                                       str(e).split("\n")[0][:60]))
            except Exception as e:
                ok = False
                print("ERROR: %s" % e)
                import traceback
                traceback.print_exc()
            finally:
                program.endTransaction(tx, ok)

            print("named %d, failed %d" % (done, len(failed)))
            for a, m in failed[:20]:
                print("   %s %s" % (a, m))
            if ok and done:
                # project.save() alone silently discards program mutations.
                program.getDomainFile().save(ConsoleTaskMonitor())
                print("Saved.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    sys.stdout.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
