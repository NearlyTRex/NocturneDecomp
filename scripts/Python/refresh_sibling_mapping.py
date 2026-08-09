#!/usr/bin/env python3
"""
refresh_sibling_mapping.py

Regenerate annotations/<to>/reports/sibling_verified_mapping.json from the
exported annotation trees. Run this at the END of an export -- it is the step
that makes the mapping agree with what Ghidra currently says.

Why it has to be re-run
-----------------------
The mapping is a SNAPSHOT, not a live view. It is generated from the exported
annotations plus the raw PEs, so every export invalidates it a little further.
Three things rot, in increasing order of how much damage they do:

  names       each pair records nocedit's function name AS IT WAS. Rename a
              function in nocedit and the mapping keeps serving the old name.
              A transfer built from the mapping then applies a name that no
              longer exists on either side. (Measured on this repo: 5 stale
              names across 5 translation units, including doNothing1 for what
              is now buildBlendTables.)
  membership  a boundary repair that deletes phantom functions leaves the
              mapping pointing at addresses that are no longer function
              entries, and -- worse -- leaves the REAL functions unmatched,
              because at snapshot time their bodies were the wrong shape.
              engine/clipper.c went from 1 usable pair to 9 purely by
              re-running this after the phantoms were removed.
  anchors     every newly named function in the target is a new anchor for the
              order/callsite/caller signals, so coverage compounds. Refreshing
              after a naming batch finds pairs the previous run could not.

Stages (none needs Ghidra or a JVM -- all read annotations/ and the PEs):

  1. map_sibling_functions.py    correspondence + confidence
  2. map_vtable_slots.py         recovers pairs in vtables whose SLOT COUNTS
                                 DIFFER, which stage 1 discards outright: its
                                 prop_vtables() requires equal counts, and the
                                 editor build inserts a block of 7 virtual
                                 methods, so the actor hierarchy (59/67/85/88/89
                                 slots vs 52/60/82) fails that test everywhere.
                                 LCS-aligns the drift and fills a gap only when
                                 the body shape is UNIQUE in that window --
                                 never positionally. Omitting this stage silently
                                 drops ~77 real pairs; it is not optional.
  3. map_destructor_pairs.py     Watcom's own destructor registry. Each
                                 WatcomDestructorCall names a destructor AND the
                                 class it destroys, so pairing is by class name,
                                 not similarity. It is the only signal here that
                                 does not infer -- and the only one that can
                                 separate array destructors, which are
                                 near-identical loops by construction.
                                 It also VALIDATES: a class whose destructor the
                                 mapping pairs with a different function is a
                                 mapping error, and the refresh refuses to write
                                 rather than ship it (--allow-dtor-conflicts to
                                 override).
  4. map_factory_pairs.py        the static-init registry. g_InitHandlers points
                                 at each TU's staticInit, whose registerActorClass
                                 call names the class as a STRING beside its
                                 factory pointer. Every factory in the image is
                                 literally named `factoryFunc` and every body is
                                 the same new+ctor pair, so shape and name are
                                 both useless here -- the call is the only thing
                                 that distinguishes them. Validates the same way.
  5. merge                       stages 2-4 are additive; a target already
                                 matched by an earlier stage is never overwritten.
  6. verify_sibling_signatures.py  measures argument size from the TARGET's own
                                   bytes and adds conv/ret/sig_verdict, then
                                   writes {**mapping, pairs: verified} -- which
                                   is the canonical file

The previous mapping is kept as <name>.prev.json and diffed, so a refresh
reports what actually changed rather than silently replacing the file.

Usage:
    refresh_sibling_mapping.py                      # nocedit.exe -> nocturne.exe
    refresh_sibling_mapping.py --from a.exe --to b.exe
    refresh_sibling_mapping.py --show 20            # list changed names
    refresh_sibling_mapping.py --check              # diff only, write nothing

@category Annotations
"""

import argparse
import json
import os
import shutil
import subprocess
import sys
import tempfile

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(os.path.dirname(THIS_DIR))


def canonical_path(to_prog):
    return os.path.join(REPO, "annotations", to_prog, "reports",
                        "sibling_verified_mapping.json")


def run(stage, argv, quiet, allow_fail=False):
    """Run a pipeline stage, streaming or capturing its output.

    allow_fail returns the exit code instead of aborting, for stages whose
    non-zero exit is a finding rather than a crash."""
    cmd = [sys.executable, "-u", os.path.join(THIS_DIR, stage)] + argv
    # The matcher resolves ties by iterating sets of address strings, so Python's
    # per-process hash randomization reorders them and the greedy 1:1 pass picks
    # differently. Measured: two runs on IDENTICAL input produced 4683 vs 4678
    # pairs. Unpinned, every refresh churns a handful of pairs at random and the
    # diff below reports noise as if it were change.
    env = dict(os.environ, PYTHONHASHSEED="0")
    if not quiet:
        print(f"\n=== {stage} ===", flush=True)
        rc = subprocess.call(cmd, env=env)
    else:
        p = subprocess.run(cmd, capture_output=True, text=True, env=env)
        rc = p.returncode
        if rc:
            sys.stderr.write(p.stdout + p.stderr)
    if rc and not allow_fail:
        sys.exit(f"ERROR: {stage} failed (exit {rc})")
    return rc


def merge_extra_pairs(base_path, vt_path, out_path):
    """Fold the drifted-vtable pairs into the base mapping.

    Additive only. A target already matched by stage 1 keeps that match: stage 1
    decided it with a stronger or equally strong signal and, more importantly,
    overwriting would break the 1:1 invariant every downstream consumer assumes.
    Sources already consumed are skipped for the same reason.
    """
    with open(base_path) as fh:
        base = json.load(fh)
    with open(vt_path) as fh:
        extra = json.load(fh).get("pairs", [])
    seen_b = {p["b"].lower() for p in base["pairs"]}
    seen_a = {p["a"].lower() for p in base["pairs"]}
    added = 0
    for p in extra:
        a, b = p.get("a", "").lower(), p.get("b", "").lower()
        if not a or not b or b in seen_b or a in seen_a:
            continue
        base["pairs"].append(p)
        seen_a.add(a); seen_b.add(b)
        added += 1
    base["pairs"].sort(key=lambda r: int(r["a"], 16))
    with open(out_path, "w") as fh:
        json.dump(base, fh, indent=1)
    return added


def load(path):
    if not os.path.exists(path):
        return None
    with open(path) as fh:
        return json.load(fh)


def diff(old, new, show):
    """Report what a refresh changed. This is the point of the wrapper: a
    silent overwrite hides exactly the drift the refresh exists to correct."""
    if old is None:
        print(f"\nno previous mapping -- {len(new['pairs'])} pairs written")
        return
    o = {p["b"].lower(): p for p in old.get("pairs", [])}
    n = {p["b"].lower(): p for p in new.get("pairs", [])}
    added = sorted(set(n) - set(o))
    dropped = sorted(set(o) - set(n))
    renamed, retargeted, verdict_changed = [], [], []
    for b in sorted(set(o) & set(n)):
        if o[b].get("name") != n[b].get("name"):
            renamed.append((b, o[b].get("name"), n[b].get("name")))
        if o[b].get("a") != n[b].get("a"):
            retargeted.append((b, o[b].get("a"), n[b].get("a")))
        if o[b].get("sig_verdict") != n[b].get("sig_verdict"):
            verdict_changed.append((b, o[b].get("sig_verdict"), n[b].get("sig_verdict")))

    print("\n" + "=" * 74)
    print("MAPPING REFRESH")
    print("=" * 74)
    print(f"  pairs      {len(o)} -> {len(n)}   ({len(added):+d} new, -{len(dropped)} dropped)")
    print(f"  renamed    {len(renamed)}   (stale sibling names now corrected)")
    print(f"  retargeted {len(retargeted)}   (pair now points at a different counterpart)")
    print(f"  verdicts   {len(verdict_changed)} changed")
    for label, rows, fmt in (
            ("RENAMED", renamed, lambda r: f"    {r[0]}  {r[1]}\n              -> {r[2]}"),
            ("RETARGETED", retargeted, lambda r: f"    {r[0]}  a: {r[1]} -> {r[2]}"),
            ("DROPPED", [(b,) for b in dropped], lambda r: f"    {r[0]}  {o[r[0]].get('name')}"),
            ("NEW", [(b,) for b in added], lambda r: f"    {r[0]}  {n[r[0]].get('name')}")):
        if not rows:
            continue
        print(f"\n  {label} ({len(rows)}):")
        for r in rows[:show]:
            print(fmt(r))
        if len(rows) > show:
            print(f"    ... and {len(rows) - show} more (raise --show)")


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--from", dest="a_prog", default="nocedit.exe")
    ap.add_argument("--to", dest="b_prog", default="nocturne.exe")
    ap.add_argument("--out", help="override the canonical output path")
    ap.add_argument("--show", type=int, default=10)
    ap.add_argument("--min-confidence", type=float, default=0.0)
    ap.add_argument("--check", action="store_true",
                    help="generate and diff, but leave the canonical file alone")
    ap.add_argument("--no-backup", action="store_true")
    ap.add_argument("--no-dtor-pairs", action="store_true",
                    help="skip the destructor-registry stage (also disables its "
                         "conflict check)")
    ap.add_argument("--allow-dtor-conflicts", action="store_true",
                    help="write even when the destructor registry contradicts the "
                         "mapping. Each conflict is a known-wrong pair.")
    ap.add_argument("--no-factory-pairs", action="store_true",
                    help="skip the static-init factory stage")
    ap.add_argument("--no-vtable-slots", action="store_true",
                    help="skip drifted-vtable recovery (stage 2). Costs ~77 real "
                         "pairs in the actor hierarchy; for debugging only.")
    ap.add_argument("-q", "--quiet", action="store_true",
                    help="suppress stage output unless a stage fails")
    args = ap.parse_args()

    out = os.path.abspath(args.out) if args.out else canonical_path(args.b_prog)
    os.makedirs(os.path.dirname(out), exist_ok=True)

    tmpdir = tempfile.mkdtemp(prefix="siblingmap_")
    raw = os.path.join(tmpdir, "mapping.json")
    vt = os.path.join(tmpdir, "vtable_pairs.json")
    merged = os.path.join(tmpdir, "merged.json")
    dt = os.path.join(tmpdir, "dtor_pairs.json")
    fc = os.path.join(tmpdir, "factory_pairs.json")
    verified = os.path.join(tmpdir, "verified.json")
    try:
        run("map_sibling_functions.py",
            ["--from", args.a_prog, "--to", args.b_prog, "-o", raw,
             "--min-confidence", str(args.min_confidence)]
            + (["-q"] if args.quiet else []), args.quiet)

        if args.no_vtable_slots:
            shutil.copy2(raw, merged)
            print("\n[--no-vtable-slots] skipping drifted-vtable recovery")
        else:
            run("map_vtable_slots.py",
                ["--mapping", raw, "--from-program", args.a_prog,
                 "--program", args.b_prog, "--out-pairs", vt], args.quiet)
            n_added = merge_extra_pairs(raw, vt, merged)
            print(f"\n[vtable-slots] merged {n_added} drifted-vtable pair(s) "
                  f"that the equal-slot-count test in stage 1 cannot reach")

        # Deterministic destructor evidence: adds pairs, and vetoes the whole
        # refresh if it contradicts what the earlier stages produced.
        if not args.no_dtor_pairs:
            rc = run("map_destructor_pairs.py",
                     ["--from-program", args.a_prog, "--program", args.b_prog,
                      "--mapping", merged, "--out-pairs", dt,
                      "--fail-on-conflict"] + (["-q"] if args.quiet else []),
                     args.quiet, allow_fail=True)
            if rc == 2 and not args.allow_dtor_conflicts:
                sys.exit("\nREFUSING TO WRITE: the destructor registry contradicts "
                         "the mapping.\nThe registry is compiler-authored and does not "
                         "infer, so each conflict is a mapping error that a transfer "
                         "would turn into a wrong name.\nInvestigate, or re-run with "
                         "--allow-dtor-conflicts to write anyway.")
            if rc not in (0, 2):
                sys.exit(f"ERROR: map_destructor_pairs.py failed (exit {rc})")
            n_dt = merge_extra_pairs(merged, dt, merged)
            print(f"[dtor-registry] merged {n_dt} deterministic destructor pair(s)")

        if not args.no_factory_pairs:
            rc = run("map_factory_pairs.py",
                     ["--from-program", args.a_prog, "--program", args.b_prog,
                      "--mapping", merged, "--out-pairs", fc,
                      "--fail-on-conflict"] + (["-q"] if args.quiet else []),
                     args.quiet, allow_fail=True)
            if rc == 2 and not args.allow_dtor_conflicts:
                sys.exit("\nREFUSING TO WRITE: the static-init registry contradicts "
                         "the mapping.\nThe class name comes from the registerActorClass "
                         "call itself, so each conflict is a mapping error.\nInvestigate, "
                         "or re-run with --allow-dtor-conflicts to write anyway.")
            if rc not in (0, 2):
                sys.exit(f"ERROR: map_factory_pairs.py failed (exit {rc})")
            n_fc = merge_extra_pairs(merged, fc, merged)
            print(f"[factory-registry] merged {n_fc} deterministic factory pair(s)")

        # verify's --out emits {**mapping, "pairs": verified}, so its output is
        # the canonical file -- do not merge anything by hand after this.
        run("verify_sibling_signatures.py", [merged, "--out", verified], args.quiet)

        new = load(verified)
        if new is None or not new.get("pairs"):
            sys.exit("ERROR: pipeline produced no pairs; refusing to overwrite")
        diff(load(out), new, args.show)

        if args.check:
            print(f"\n[--check] {out} left unchanged")
            return 0
        if os.path.exists(out) and not args.no_backup:
            shutil.copy2(out, out + ".prev.json")
            print(f"\nprevious kept at {out}.prev.json")
        shutil.copy2(verified, out)
        print(f"wrote {out}  ({len(new['pairs'])} pairs)")
        print("\nNEXT: re-run the per-TU sweep; pairs the old mapping missed "
              "may now resolve.")
        return 0
    finally:
        shutil.rmtree(tmpdir, ignore_errors=True)


if __name__ == "__main__":
    sys.exit(main())
