#!/usr/bin/env python3
# Align sibling vtables by slot, and use the alignment to recover functions and
# to name nocturne's vtable globals.
#
# Why this exists separately from map_sibling_functions.py's prop_vtables():
# that one requires the two tables to have the SAME SLOT COUNT and then zips
# them positionally. The actor hierarchy is exactly where that fails --
# nocedit's actor tables run 59/67/85/88/89 slots against nocturne's 52/60/82,
# because the editor build adds a block of 7 virtual methods. The same-count
# filter therefore discards 103 of 400 tables, and a further 74 fall under its
# two-anchor bar. Those are the drifted tables, which is to say the ones worth
# recovering.
#
# The drift is well behaved. Aligned with LCS over already-matched slots, 103
# tables come out as a single insertion block, 25 as identity and 8 as a
# constant shift -- so once the step is located the rest of the table lines up.
#
# What is NOT safe is filling a gap positionally. Doing that proposed
# CCharacter::setWalkTimeout -> 00428bb0 against an existing byte-identical
# match to 00428ee0. Slot position is a good way to narrow the candidates and a
# bad way to choose between them. So:
#
#   1. pair tables by shared already-matched slots (>= --min-anchors)
#   2. LCS-align to find the anchored slots and the gaps between them
#   3. inside a gap, match by relocation-normalized body shape, and only when
#      the shape is UNIQUE within that window
#   4. require the pair to agree with nocturne's hand-assigned translation
#      unit, which was made independently of anything used above
#
# Step 4 is the check that makes this trustworthy rather than plausible: it
# agreed on 103 of 103 proposed pairs when it was measured, not gated.
#
# Usage:
#   python3 map_vtable_slots.py --mapping verified.json --out-pairs new.json
#   GHIDRA_INSTALL_DIR=... python3 map_vtable_slots.py --mapping verified.json \
#       --project ABS/projects --project-name NocturneEdit --apply-labels [--no-snapshot]
#
# Applying snapshots the project first (snapshot_project.py, tag pre-vtable-slots).
#
#@author NearlyTRex
#@category Annotations

import argparse
import glob
import json
import os
import subprocess
import sys
import traceback
from collections import Counter, defaultdict

import sibling_match as sm

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))

# Ghidra's own placeholder labels. A name starting with one of these is not a
# name -- it is the absence of one, spelled out.
AUTO_PREFIXES = ("PTR_", "DAT_", "LAB_", "SUB_", "UNK_", "FUN_")


def is_auto(name):
    return not name or name.startswith(AUTO_PREFIXES)


def _records(program, kind):
    """The dict records of annotations/<program>/<kind>/*.json. The directory's
    `<kind>_buckets.json` sharding index is a dict, not records, and is skipped."""
    for path in glob.glob(os.path.join(REPO_ROOT, "annotations", program, kind, "*.json")):
        with open(path) as fh:
            recs = json.load(fh)
        if isinstance(recs, list):
            yield from (r for r in recs if isinstance(r, dict))


def load_applied_structs(program):
    """address -> (struct name, applied length) for data typed as a struct."""
    return {r["addr"].lower(): (r["name"], r.get("len"))
            for r in _records(program, "applied_structs") if r.get("addr") and r.get("name")}


def load_labels(program):
    """address -> its primary label. An address can carry several (switch cases
    sharing a block, a placeholder beside a real name); the export marks all
    but one `non_primary`, and that one is the name Ghidra shows."""
    out = {}
    for r in _records(program, "symbols_label"):
        a = (r.get("addr") or "").lower()
        if a and (not r.get("non_primary") or a not in out):
            out[a] = r.get("name")
    return out


def slots_of(table):
    return [e["func_addr"].lower() for e in table["functions"]]


# The alignment itself now lives in sibling_match.py, shared with
# map_sibling_functions.py's prop_vtables().
lcs_anchors = sm.lcs_anchors


def analyse(mapping_path, min_anchors, source_program, target_program):
    with open(mapping_path) as fh:
        mapping = json.load(fh)
    a2b = {p["a"].lower(): p["b"].lower() for p in mapping["pairs"]}
    b2a = {v: k for k, v in a2b.items()}

    A = sm.Image(source_program)
    B = sm.Image(target_program)
    SA, SB = sm.shapes_for(A), sm.shapes_for(B)
    labels_a, labels_b = load_labels(source_program), load_labels(target_program)
    applied_a = load_applied_structs(source_program)
    applied_b = load_applied_structs(target_program)

    b_tables = {t["addr"].lower(): slots_of(t) for t in B.vtables}
    b_member = defaultdict(set)
    for addr, fs in b_tables.items():
        for f in fs:
            b_member[f].add(addr)

    shapes_seen = Counter()
    # Votes are per target; the tiers that cast them are kept apart, so a slot
    # matched by both its strict and its relaxed shape is one target agreed on
    # twice, not two candidates tied.
    votes = defaultdict(Counter)
    tiers = defaultdict(set)
    rejected = Counter()
    table_pairs = []

    for ta in A.vtables:
        sa = slots_of(ta)
        if len(sa) < 2:
            continue
        cand = Counter()
        for f in sa:
            tgt = a2b.get(f)
            if tgt:
                for addr in b_member.get(tgt, ()):
                    cand[addr] += 1
        if not cand:
            rejected["table: no target partner"] += 1
            continue
        baddr, hits = cand.most_common(1)[0]
        if hits < min_anchors:
            rejected["table: fewer than %d anchors" % min_anchors] += 1
            continue
        sb = b_tables[baddr]
        anch = lcs_anchors([a2b.get(x) for x in sa], sb)
        if len(anch) < min_anchors:
            rejected["table: LCS under %d anchors" % min_anchors] += 1
            continue

        deltas = {i - j for i, j in anch}
        shapes_seen["identity" if deltas == {0} and len(sa) == len(sb) else
                    "constant shift" if len(deltas) == 1 else
                    "one insertion block" if len(deltas) == 2 else
                    "%d blocks" % len(deltas)] += 1
        aaddr = ta["addr"].lower()
        table_pairs.append({"a": aaddr, "b": baddr,
                            "anchors": len(anch),
                            "a_slots": len(sa), "b_slots": len(sb),
                            "a_label": labels_a.get(aaddr),
                            "b_label": labels_b.get(baddr),
                            # the struct the source applies at its table, which
                            # is the type the target's table should carry too
                            "a_type": applied_a.get(aaddr, (None,))[0],
                            "b_type": applied_b.get(baddr, (None,))[0]})

        ext = [(-1, -1)] + anch + [(len(sa), len(sb))]
        for (i0, j0), (i1, j1) in zip(ext, ext[1:]):
            ca = [sa[k] for k in range(i0 + 1, i1) if sa[k] not in a2b]
            cb = [sb[k] for k in range(j0 + 1, j1) if sb[k] not in b2a]
            if not ca or not cb:
                continue
            for tier in ("strict", "relaxed"):
                idx = defaultdict(list)
                for y in cb:
                    s = SB.get(y)
                    if s is not None:
                        idx[getattr(s, tier)].append(y)
                for x in ca:
                    s = SA.get(x)
                    if s is None:
                        continue
                    hit = idx.get(getattr(s, tier), [])
                    if len(hit) == 1:
                        votes[x][hit[0]] += 1
                        tiers[(x, hit[0])].add(tier)
                    elif len(hit) > 1:
                        rejected["slot: shape ambiguous in window"] += 1

    # resolve per-function votes, then apply the independent TU check
    pairs = []
    for x, c in votes.items():
        y, n = c.most_common(1)[0]
        if len(c) > 1 and c.most_common(2)[1][1] == n:
            rejected["slot: windows disagree"] += 1
            continue
        tier = "strict" if "strict" in tiers[(x, y)] else "relaxed"
        # A vote needs both functions' shapes, and only exported functions have one
        fa, fb = A.by_addr[x], B.by_addr[y]
        tu_a, tu_b = sm.tu_of(fa["name"]), sm.tu_of(fb["name"])
        if not tu_a or not tu_b:
            rejected["slot: no translation unit to check"] += 1
            continue
        if tu_a != tu_b:
            rejected["slot: translation units disagree"] += 1
            continue
        pairs.append({
            "a": x, "b": y,
            "name": fa["name"],
            "conv": fa.get("conv"),
            "ret": fa.get("ret"),
            "confidence": 0.90,
            # relaxed tier means the mnemonic sequence matched exactly, which
            # is what the rest of the pipeline calls same_mnemonics.
            "shape_agreement": "identical" if tier == "strict" else "same_mnemonics",
            "sig_verdict": "unverifiable",
            "sig_detail": "vtable slot + %s shape + unit agreement" % tier,
            "ambiguous": False,
            "evidence": ["vtable_slot:%s" % tier],
        })

    # one nocturne function must not be claimed twice
    by_target = Counter(p["b"] for p in pairs)
    dupes = {t for t, n in by_target.items() if n > 1}
    if dupes:
        pairs = [p for p in pairs if p["b"] not in dupes]
        rejected["slot: target claimed by two sources"] += len(dupes)

    # --- vtable global names ---
    label_plan, named_target = [], set()
    for tp in sorted(table_pairs, key=lambda t: -t["anchors"]):
        if is_auto(tp["a_label"]):
            continue
        if not is_auto(tp["b_label"]):
            rejected["label: target already named"] += 1
            continue
        if tp["b"] in named_target:
            rejected["label: target claimed twice"] += 1
            continue
        named_target.add(tp["b"])
        label_plan.append(tp)

    # --- vtable data types ---
    #
    # The source applies a real struct at each table (CDemonActor_vtable,
    # CHero_full_vtable, ...) while the target has none: its tables sit as bare
    # runs of pointers, which is where Ghidra's PTR_<first member> placeholder
    # names come from. Transferring the NAME alone, as the label pass does,
    # leaves that half undone.
    #
    # The struct is only offered here; whether it FITS is checked against the
    # target's own DTM at apply time, because the two builds' vtables differ in
    # length and a struct that is too long would silently swallow the next table.
    #
    # Several source tables can pair onto one target -- each derived class's
    # table against the base's, when the target build has the base alone -- so
    # as with the labels the best-anchored pair speaks for the target.
    type_plan, typed_target = [], set()
    for tp in sorted(table_pairs, key=lambda t: -t["anchors"]):
        if not tp["a_type"]:
            continue
        if tp["b_type"]:
            rejected["type: target already typed"] += 1
            continue
        if tp["b"] in typed_target:
            rejected["type: target claimed twice"] += 1
            continue
        typed_target.add(tp["b"])
        type_plan.append(tp)

    return {"pairs": pairs, "labels": label_plan, "tables": table_pairs,
            "types": type_plan,
            "shapes": shapes_seen, "rejected": rejected,
            "unmatched_b": len(set(B.by_addr) - set(a2b.values()))}


def print_summary(r):
    print("=== table alignment ===")
    for k, v in r["shapes"].most_common():
        print("  %-24s %d" % (k, v))
    print("  paired tables            %d" % len(r["tables"]))

    print("\n=== recovered function pairs ===")
    print("  proposed                 %d" % len(r["pairs"]))
    print("  of %d unmatched target functions" % r["unmatched_b"])

    print("\n=== vtable globals to name ===")
    print("  transferable             %d" % len(r["labels"]))
    for tp in r["labels"][:12]:
        print("    %-28s -> %s  (%d anchors)"
              % (tp["a_label"], tp["b"], tp["anchors"]))

    print("\n=== vtable structs to apply ===")
    print("  candidates               %d" % len(r["types"]))
    byt = Counter(t["a_type"] for t in r["types"])
    for t, n in byt.most_common(10):
        print("    %-30s %d table(s)" % (t, n))

    print("\n=== not taken ===")
    for k, v in r["rejected"].most_common():
        print("  %-42s %d" % (k, v))


def find_type(dtm, name):
    from java.util import ArrayList
    matches = ArrayList()
    dtm.findDataTypes(name, matches)
    return matches.get(0) if not matches.isEmpty() else None


def table_type(dtm, tp):
    """(struct to apply at the target table, None) or (None, why not).

    Prefer a struct named for the target's own class over whatever the sibling
    applied. The sibling applies the BASE's struct to derived tables it never
    modelled -- CStrList_vtable on g_CPickListVTable, CEnemy_full_vtable on the
    81-slot CBoneGuy/CMobster/CSmiley tables -- so following it blindly
    under-types them.

    The source's struct is sized for the SOURCE's table. Applying one that is
    too long would run over the next table; too short would leave a tail
    undefined. Either way the answer is to skip and report, not to trim.
    """
    want = tp["b_slots"] * 4
    cands = []
    lbl = tp["b_label"] or ""
    if lbl.startswith("g_C") and lbl.endswith("VTable"):
        cls = lbl[2:-6]
        cands += ["%s_full_vtable" % cls, "%s_vtable" % cls]
    cands.append(tp["a_type"])
    for cand in cands:
        dt = find_type(dtm, cand)
        if dt is not None and dt.getLength() == want:
            return dt, None
    dt = find_type(dtm, tp["a_type"])
    if dt is None:
        return None, "no such type"
    return None, "len %d != %d slots x4" % (dt.getLength(), tp["b_slots"])


def apply(program, r, labels, types):
    """Label and/or type the target tables in one transaction. (ok, changes)."""
    from ghidra.program.model.symbol import SourceType

    st = program.getSymbolTable()
    listing = program.getListing()
    dtm = program.getDataTypeManager()
    space = program.getAddressFactory().getDefaultAddressSpace()

    tx = program.startTransaction("Vtable globals from sibling")
    ok, done, typed = True, 0, 0
    failures, skipped = [], []
    try:
        if labels:
            for tp in r["labels"]:
                addr = space.getAddress(int(tp["b"], 16))
                try:
                    st.createLabel(addr, tp["a_label"], SourceType.USER_DEFINED)
                    done += 1
                except Exception as e:
                    failures.append((tp["b"], tp["a_label"], str(e).split("\n")[0][:70]))
        if types:
            for tp in r["types"]:
                dt, why = table_type(dtm, tp)
                if dt is None:
                    skipped.append((tp["b"], tp["a_type"], why))
                    continue
                start = space.getAddress(int(tp["b"], 16))
                try:
                    listing.clearCodeUnits(start, start.add(dt.getLength() - 1), False)
                    listing.createData(start, dt)
                    typed += 1
                except Exception as e:
                    skipped.append((tp["b"], tp["a_type"], str(e).split("\n")[0][:60]))
    except Exception as e:
        ok = False
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    print("labelled %d, failed %d ; typed %d, skipped %d"
          % (done, len(failures), typed, len(skipped)))
    for a, n, m in failures[:10]:
        print("   label  %s %-26s %s" % (a, n, m))
    for a, n, m in skipped[:15]:
        print("   type   %s %-26s %s" % (a, n, m))
    return ok, done + typed


def run(program, r, args):
    """Apply, and save what took. Returns the exit code."""
    ok, changed = apply(program, r, args.apply_labels, args.apply_types)
    if ok and changed:
        from ghidra.util.task import ConsoleTaskMonitor
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    return 0 if ok else 1


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project), args.project_name, "--tag", "pre-vtable-slots"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    ap = argparse.ArgumentParser(
        description="Align sibling vtables; recover functions and name globals.")
    ap.add_argument("--mapping", required=True)
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--min-anchors", type=int, default=3)
    ap.add_argument("--out-pairs", help="write recovered function pairs as JSON")
    ap.add_argument("--out-labels", help="write the vtable label plan as JSON")
    ap.add_argument("--project", help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--apply-labels", action="store_true")
    ap.add_argument("--apply-types", action="store_true",
                    help="also apply the source's vtable struct at each table")
    ap.add_argument("--no-snapshot", action="store_true", help="apply without a .gar snapshot first")
    args = ap.parse_args(argv)

    r = analyse(args.mapping, args.min_anchors, args.from_program, args.program)
    print_summary(r)

    if args.out_pairs:
        with open(args.out_pairs, "w") as fh:
            json.dump({"from": args.from_program, "pairs": r["pairs"]}, fh, indent=1)
        print("\nwrote %s" % args.out_pairs)
    if args.out_labels:
        with open(args.out_labels, "w") as fh:
            json.dump(r["labels"], fh, indent=1)
        print("wrote %s" % args.out_labels)

    if not (args.apply_labels or args.apply_types):
        print("\n[dry-run] pass --apply-labels / --apply-types (with --project).")
        return 0
    if not args.project:
        print("ERROR: applying needs --project")
        return 2
    if not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.")
        return 1

    import pyghidra
    print("\nStarting PyGhidra...")
    pyghidra.start()
    code = 1
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            code = run(program, r, args)
    except Exception as e:
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        project.close()
    sys.stdout.flush()
    os._exit(code)


if __name__ == "__main__":
    sys.exit(main())
