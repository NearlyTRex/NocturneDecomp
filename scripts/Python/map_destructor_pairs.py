#!/usr/bin/env python3
"""
map_destructor_pairs.py

Pair destructors across sibling builds using Watcom's own destructor registry,
and use the same evidence to VALIDATE an existing mapping.

Unlike every other signal in the mapping pipeline, this one does not infer.
Shape matching, vtable alignment and source order all reason about what a
function looks like or where it sits; this reads what the compiler recorded.

The mechanism
-------------
Watcom emits a `WatcomDestructorCall` record for every statically destroyed
object:

    struct WatcomDestructorCall {
        int    delete_flags;      // +0
        void  *destructor_func;   // +4   <- the destructor
        void  *object_instance;   // +8   <- the object it destroys
    };

`object_instance` points at a global whose applied Ghidra type names the class.
So each record is a compiler-authored statement of the form "function F is the
destructor of class C" -- no similarity involved. Match C by name across the
two builds and F pairs with certainty.

Records are keyed by (class, ELEMENT COUNT), not by class alone. Watcom emits a
separate array destructor per array EXTENT, so a class with a 4-element and an
8-element global has two distinct arrdtors; keying on the class alone makes them
look like an unresolvable ambiguity when the extent separates them exactly.

ARRAYS MATTER, and are the reason this is worth running. An array destructor
walks a fixed-size element loop, so every `C*_arrdtor` in the image looks
near-identical to every other; relocation-normalized shape cannot separate
them, and the mapper leaves them unmatched. Their `object_instance` is typed as
an ARRAY of the class, so this signal identifies them exactly. Measured on this
repo: reading only applied_structs found 24 class keys and 0 unmatched pairs;
including applied_arrays found 44 keys and recovered 8 array destructors the
mapper had missed entirely.

Two outputs, and the second is the more valuable
------------------------------------------------
  pairs       classes whose destructor is unmatched in the mapping. Deterministic,
              so they are emitted at confidence 1.0 rather than scored.
  conflicts   classes where the mapping already pairs that destructor with a
              DIFFERENT function. The mapping and the compiler disagree, and the
              compiler is not guessing. Every conflict is a mapping error, and
              since transfers are built from the mapping it is a wrong name
              waiting to be applied. This is a regression test that runs on
              every export.

Usage:
    map_destructor_pairs.py                             # report
    map_destructor_pairs.py --mapping m.json            # + validate against it
    map_destructor_pairs.py --mapping m.json --out-pairs p.json
    map_destructor_pairs.py --mapping m.json --fail-on-conflict

@category Annotations
"""

import argparse
import glob
import json
import os
import struct
import sys

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)
REPO = os.path.dirname(os.path.dirname(THIS_DIR))

DCALL_STRUCT = "WatcomDestructorCall"


def ann_dir(program):
    return os.path.join(REPO, "annotations", program)


def _buckets(program, category):
    pat = os.path.join(ann_dir(program), category, f"{category}_bucket_*.json")
    for path in sorted(glob.glob(pat)):
        with open(path) as fh:
            for rec in json.load(fh):
                yield rec


def typed_globals(program):
    """addr -> (class_name, is_array).

    Both applied_structs and applied_arrays are consulted. Omitting arrays is
    what makes this signal look useless: it is precisely the array destructors
    that the other signals cannot reach.
    """
    out = {}
    for rec in _buckets(program, "applied_structs"):
        if rec.get("addr") and rec.get("name"):
            out[rec["addr"].lower()] = (rec["name"], 1)
    for rec in _buckets(program, "applied_arrays"):
        elem = rec.get("type") or ""
        # Watcom class names are C-prefixed; byte/int arrays are not objects.
        if rec.get("addr") and elem[:1] == "C":
            out.setdefault(rec["addr"].lower(), (elem, rec.get("count") or 1))
    return out


def source_names(program):
    """addr -> current function name, read from the exported annotations.

    Read fresh rather than carried from an older mapping: a name copied from a
    snapshot is exactly how `doNothing1` and `CStrList_qsortByString` survived
    long after the sibling had been renamed.
    """
    out = {}
    for rec in _buckets(program, "functions"):
        if isinstance(rec, dict) and rec.get("addr") and rec.get("name"):
            out[rec["addr"].lower()] = rec["name"]
    return out


def destructors(program, verbose=False):
    """(class_name, is_array) -> set of destructor addresses, from the registry."""
    import sibling_match as sm
    img = sm.Image(program)
    types = typed_globals(program)
    out, total, untyped = {}, 0, 0
    for rec in _buckets(program, "applied_structs"):
        if rec.get("name") != DCALL_STRUCT or not rec.get("addr"):
            continue
        total += 1
        off = img.va2off(int(rec["addr"], 16))
        if off is None:
            untyped += 1
            continue
        _flags, dtor, obj = struct.unpack_from("<III", img.data, off)
        hit = types.get("%08x" % obj)
        if not hit:
            untyped += 1
            continue
        out.setdefault(hit, set()).add("%08x" % dtor)
    if verbose:
        print(f"  {program}: {total} {DCALL_STRUCT} record(s), "
              f"{untyped} with an untyped object, {len(out)} class key(s)")
    return out


def analyse(a_prog, b_prog, mapping_path, verbose=True):
    if verbose:
        print("Reading Watcom destructor registries...")
    da = destructors(a_prog, verbose)
    db = destructors(b_prog, verbose)

    a2b = b2a = {}
    if mapping_path:
        with open(mapping_path) as fh:
            mp = json.load(fh)
        a2b = {p["a"].lower(): p["b"].lower() for p in mp["pairs"]}
        b2a = {v: k for k, v in a2b.items()}

    agree, new, conflicts, ambiguous = [], [], [], []
    for key in sorted(set(da) & set(db)):
        cls, count = key
        # More than one destructor recorded for a class means the evidence does
        # not single one out; refuse rather than pick.
        if len(da[key]) != 1 or len(db[key]) != 1:
            ambiguous.append((cls, count, sorted(da[key]), sorted(db[key])))
            continue
        a, b = next(iter(da[key])), next(iter(db[key]))
        if a in a2b and a2b[a] == b:
            agree.append((cls, count, a, b))
        elif a in a2b:
            conflicts.append((cls, count, a, b, f"mapping pairs {a} with {a2b[a]}"))
        elif b in b2a:
            conflicts.append((cls, count, a, b, f"mapping pairs {b} with {b2a[b]}"))
        else:
            new.append((cls, count, a, b))
    return {"agree": agree, "new": new, "conflicts": conflicts,
            "ambiguous": ambiguous, "a_keys": len(da), "b_keys": len(db)}


def report(res, show):
    print("\n" + "=" * 74)
    print("DESTRUCTOR REGISTRY PAIRING")
    print("=" * 74)
    print(f"  class keys        {res['a_keys']} / {res['b_keys']}")
    print(f"  AGREE             {len(res['agree'])}   (independent confirmation)")
    print(f"  NEW               {len(res['new'])}")
    print(f"  CONFLICT          {len(res['conflicts'])}")
    print(f"  ambiguous         {len(res['ambiguous'])}")
    if res["new"]:
        print(f"\n  NEW pairs ({len(res['new'])}):")
        for cls, cnt, a, b in res["new"][:show]:
            print(f"    {cls:26} x{cnt:<5} {a} <-> {b}")
        if len(res["new"]) > show:
            print(f"    ... and {len(res['new']) - show} more")
    if res["conflicts"]:
        print(f"\n  *** CONFLICTS ({len(res['conflicts'])}) -- the compiler's own record "
              f"disagrees with the mapping.")
        print("      The registry does not infer, so each of these is a MAPPING ERROR,")
        print("      and transfers built from it would apply a wrong name.")
        for cls, cnt, a, b, why in res["conflicts"][:show]:
            print(f"    {cls:26} x{cnt:<5} dtor {a} <-> {b}")
            print(f"        {why}")
    if res["ambiguous"]:
        print(f"\n  ambiguous ({len(res['ambiguous'])}) -- more than one destructor "
              f"recorded, not resolved:")
        for cls, cnt, aa, bb in res["ambiguous"][:show]:
            print(f"    {cls:26} x{cnt} a={aa} b={bb}")


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--from-program", dest="a_prog", default="nocedit.exe")
    ap.add_argument("--program", dest="b_prog", default="nocturne.exe")
    ap.add_argument("--mapping", help="existing mapping to validate against")
    ap.add_argument("--out-pairs", help="write the NEW pairs as JSON")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--fail-on-conflict", action="store_true",
                    help="exit non-zero if the mapping contradicts the registry")
    ap.add_argument("-q", "--quiet", action="store_true")
    args = ap.parse_args()

    res = analyse(args.a_prog, args.b_prog, args.mapping, verbose=not args.quiet)
    report(res, args.show)

    if args.out_pairs:
        # Every other stage records the SOURCE function's current name, and
        # downstream consumers (tu_sweep, the transfer generators) index on it.
        # Emitting None here produced pairs that silently broke them.
        names = source_names(args.a_prog)
        pairs = [{
            "a": a, "b": b,
            "name": names.get(a, f"FUN_{a}"),
            "confidence": 1.0,                 # deterministic, not scored
            "ambiguous": False,
            "evidence": [f"dtor_rtti:{cls}[{cnt}]"],
            "shape_agreement": "unshaped",
        } for cls, cnt, a, b in res["new"]]
        with open(args.out_pairs, "w") as fh:
            json.dump({"from": args.a_prog, "to": args.b_prog, "pairs": pairs}, fh, indent=1)
        print(f"\nwrote {args.out_pairs} ({len(pairs)} pairs)")

    if res["conflicts"] and args.fail_on_conflict:
        print("\nFAILING: registry/mapping conflict (--fail-on-conflict)")
        return 2
    return 0


if __name__ == "__main__":
    sys.exit(main())
