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
#       --project ABS/projects --project-name NocturneEdit --apply-labels
#
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import sys
from collections import Counter, defaultdict

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)

import sibling_match as sm

REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))

# Ghidra's own placeholder labels. A name starting with one of these is not a
# name -- it is the absence of one, spelled out.
AUTO_PREFIXES = ("PTR_", "DAT_", "LAB_", "SUB_", "UNK_", "FUN_")


def is_auto(name):
    return not name or name.startswith(AUTO_PREFIXES)


def load_applied_structs(program):
    """address -> (struct name, applied length) for data typed as a struct."""
    out = {}
    import glob
    for path in glob.glob(os.path.join(REPO_ROOT, "annotations", program,
                                       "applied_structs", "*.json")):
        with open(path) as fh:
            recs = json.load(fh)
        if not isinstance(recs, list):
            continue
        for r in recs:
            if isinstance(r, dict) and r.get("addr") and r.get("name"):
                out[r["addr"].lower()] = (r["name"], r.get("len"))
    return out


def load_labels(program):
    out = {}
    import glob
    for path in glob.glob(os.path.join(REPO_ROOT, "annotations", program,
                                       "symbols_label", "*.json")):
        with open(path) as fh:
            recs = json.load(fh)
        if not isinstance(recs, list):
            continue
        for r in recs:
            if not isinstance(r, dict):
                continue
            a = (r.get("addr") or "").lower()
            if a:
                out[a] = r.get("name")
    return out


def slots_of(table):
    return [(e.get("func_addr") or "").lower()
            for e in table.get("functions", [])]


def lcs_anchors(seq_a_mapped, seq_b):
    """Longest common subsequence over anchored slots -> [(i, j), ...].

    seq_a_mapped[i] is the nocturne function that nocedit slot i is already
    known to correspond to, or None. Insertions on either side become gaps
    rather than breaking the alignment, which is the whole point.
    """
    n, m = len(seq_a_mapped), len(seq_b)
    dp = [[0] * (m + 1) for _ in range(n + 1)]
    for i in range(n - 1, -1, -1):
        row, nxt = dp[i], dp[i + 1]
        ai = seq_a_mapped[i]
        for j in range(m - 1, -1, -1):
            row[j] = (nxt[j + 1] + 1 if ai and ai == seq_b[j]
                      else max(nxt[j], row[j + 1]))
    out, i, j = [], 0, 0
    while i < n and j < m:
        if seq_a_mapped[i] and seq_a_mapped[i] == seq_b[j]:
            out.append((i, j))
            i += 1
            j += 1
        elif dp[i + 1][j] >= dp[i][j + 1]:
            i += 1
        else:
            j += 1
    return out


def analyse(mapping_path, min_anchors, source_program, target_program):
    with open(mapping_path) as fh:
        mapping = json.load(fh)
    a2b = {p["a"].lower(): p["b"].lower() for p in mapping["pairs"]}
    b2a = {v: k for k, v in a2b.items()}
    src_rec = {p["a"].lower(): p for p in mapping["pairs"]}

    A = sm.Image(source_program)
    B = sm.Image(target_program)
    SA, SB = sm.shapes_for(A), sm.shapes_for(B)
    labels_a, labels_b = load_labels(source_program), load_labels(target_program)
    applied_a = load_applied_structs(source_program)
    applied_b = load_applied_structs(target_program)

    b_tables = {t.get("addr"): slots_of(t) for t in B.vtables}
    b_member = defaultdict(set)
    for addr, fs in b_tables.items():
        for f in fs:
            if f:
                b_member[f].add(addr)

    shapes_seen = Counter()
    votes = defaultdict(Counter)
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
        aaddr = (ta.get("addr") or "").lower()
        baddr_l = (baddr or "").lower()
        table_pairs.append({"a": aaddr, "b": baddr_l,
                            "anchors": len(anch),
                            "a_slots": len(sa), "b_slots": len(sb),
                            "a_label": labels_a.get(aaddr),
                            "b_label": labels_b.get(baddr_l),
                            # the struct the source applies at its table, which
                            # is the type the target's table should carry too
                            "a_type": (applied_a.get(aaddr) or (None, None))[0],
                            "b_type": (applied_b.get(baddr_l) or (None, None))[0]})

        ext = [(-1, -1)] + anch + [(len(sa), len(sb))]
        for (i0, j0), (i1, j1) in zip(ext, ext[1:]):
            ca = [sa[k] for k in range(i0 + 1, i1) if sa[k] and sa[k] not in a2b]
            cb = [sb[k] for k in range(j0 + 1, j1) if sb[k] and sb[k] not in b2a]
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
                        votes[x][(hit[0], tier)] += 1
                    elif len(hit) > 1:
                        rejected["slot: shape ambiguous in window"] += 1

    # resolve per-function votes, then apply the independent TU check
    pairs = []
    for x, c in votes.items():
        (y, tier), n = c.most_common(1)[0]
        if len(c) > 1 and c.most_common(2)[1][1] == n:
            rejected["slot: windows disagree"] += 1
            continue
        na = A.by_addr.get(x, {}).get("name", "")
        nb = B.by_addr.get(y, {}).get("name", "")
        tu_a, tu_b = sm.tu_of(na), sm.tu_of(nb)
        if not tu_a or not tu_b:
            rejected["slot: no translation unit to check"] += 1
            continue
        if tu_a != tu_b:
            rejected["slot: translation units disagree"] += 1
            continue
        rec = src_rec.get(x, {})
        pairs.append({
            "a": x, "b": y,
            "name": na,
            "conv": A.by_addr.get(x, {}).get("conv"),
            "ret": A.by_addr.get(x, {}).get("ret"),
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
    label_plan, seen_target = [], {}
    for tp in sorted(table_pairs, key=lambda t: -t["anchors"]):
        if is_auto(tp["a_label"]):
            continue
        if not is_auto(tp["b_label"]):
            rejected["label: target already named"] += 1
            continue
        if tp["b"] in seen_target:
            rejected["label: target claimed twice"] += 1
            continue
        seen_target[tp["b"]] = tp["a_label"]
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
    type_plan = []
    for tp in sorted(table_pairs, key=lambda t: -t["anchors"]):
        if not tp["a_type"]:
            continue
        if tp["b_type"]:
            rejected["type: target already typed"] += 1
            continue
        type_plan.append(tp)

    return {"pairs": pairs, "labels": label_plan, "tables": table_pairs,
            "types": type_plan,
            "shapes": shapes_seen, "rejected": rejected,
            "unmatched_b": len(set(B.by_addr) - set(a2b.values()))}


def main():
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
    args = ap.parse_args()

    r = analyse(args.mapping, args.min_anchors, args.from_program, args.program)

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
        return

    if not args.project:
        print("ERROR: applying needs --project")
        sys.exit(2)

    import pyghidra
    print("\nStarting PyGhidra...")
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    code = 0
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            from ghidra.program.model.symbol import SourceType
            from ghidra.util.task import ConsoleTaskMonitor

            from java.util import ArrayList

            st = program.getSymbolTable()
            listing = program.getListing()
            dtm = program.getDataTypeManager()
            space = program.getAddressFactory().getDefaultAddressSpace()

            def find_type(name):
                matches = ArrayList()
                dtm.findDataTypes(name, matches)
                return matches.get(0) if not matches.isEmpty() else None

            tx = program.startTransaction("Vtable globals from sibling")
            ok, done, typed = True, 0, 0
            failures, skipped = [], []
            try:
                if args.apply_labels:
                    for tp in r["labels"]:
                        addr = space.getAddress(int(tp["b"], 16))
                        try:
                            st.createLabel(addr, tp["a_label"],
                                           SourceType.USER_DEFINED)
                            done += 1
                        except Exception as e:
                            failures.append((tp["b"], tp["a_label"],
                                             str(e).split("\n")[0][:70]))

                if args.apply_types:
                    for tp in r["types"]:
                        want = tp["b_slots"] * 4
                        # Prefer a struct named for the target's own class over
                        # whatever the sibling applied. The sibling applies the
                        # BASE's struct to derived tables it never modelled --
                        # CStrList_vtable on g_CPickListVTable, CEnemy_full_vtable
                        # on the 81-slot CBoneGuy/CMobster/CSmiley tables -- so
                        # following it blindly under-types them.
                        cands = []
                        lbl = tp.get("b_label") or ""
                        if lbl.startswith("g_C") and lbl.endswith("VTable"):
                            cls = lbl[2:-6]
                            cands += ["%s_full_vtable" % cls, "%s_vtable" % cls]
                        cands.append(tp["a_type"])
                        dt = None
                        for cand in cands:
                            c = find_type(cand)
                            if c is not None and c.getLength() == want:
                                dt = c
                                break
                        if dt is None:
                            dt = find_type(tp["a_type"])
                        if dt is None:
                            skipped.append((tp["b"], tp["a_type"], "no such type"))
                            continue
                        # The source's struct is sized for the SOURCE's table.
                        # Applying one that is too long would run over the next
                        # table; too short would leave a tail undefined. Either
                        # way the answer is to skip and report, not to trim.
                        if dt.getLength() != want:
                            skipped.append((tp["b"], tp["a_type"],
                                            "len %d != %d slots x4"
                                            % (dt.getLength(), tp["b_slots"])))
                            continue
                        start = space.getAddress(int(tp["b"], 16))
                        end = start.add(dt.getLength() - 1)
                        try:
                            listing.clearCodeUnits(start, end, False)
                            listing.createData(start, dt)
                            typed += 1
                        except Exception as e:
                            skipped.append((tp["b"], tp["a_type"],
                                            str(e).split("\n")[0][:60]))
            except Exception as e:
                ok = False
                print("ERROR: %s" % e)
                import traceback
                traceback.print_exc()
            finally:
                program.endTransaction(tx, ok)
            print("labelled %d, failed %d ; typed %d, skipped %d"
                  % (done, len(failures), typed, len(skipped)))
            for a, n, m in failures[:10]:
                print("   label  %s %-26s %s" % (a, n, m))
            for a, n, m in skipped[:15]:
                print("   type   %s %-26s %s" % (a, n, m))
            if ok and (done or typed):
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
