#!/usr/bin/env python3
"""
map_factory_pairs.py

Pair actor factory functions across sibling builds using the static-init
registry, and validate an existing mapping against it.

Sibling of map_destructor_pairs.py, and it exists for the same reason: some
functions cannot be told apart by what they look like, only by what the
compiler recorded about them.

The mechanism
-------------
`g_InitHandlers` is the C runtime's static-initializer table -- an array of
RuntimeHandlerEntry {status:u8, priority:u8, func:ptr}. Each entry points at a
translation unit's staticInit, and an actor TU's staticInit does exactly one
interesting thing:

    registerActorClass(&g_CAmmoActorType, "CAmmo", factoryFunc, ..., &parentType)

The class NAME is a string literal in that call, and the factory is a function
pointer beside it. So the registry states, per class and without inference,
which function constructs it.

Why the other signals cannot do this
------------------------------------
Every factory in the image is named `factoryFunc` -- the same name on both
sides, carrying no class -- and every body is the same shape:

    push <sizeof>; call operator new; test eax,eax; jnz; ret; push eax; call <ctor>

Only the size constant and the ctor target differ. Relocation-normalized shape
therefore sees ~101 near-identical candidates and cannot choose, exactly as it
cannot separate array destructors. Measured here: of 101 classes present in
both builds, the mapper had paired 29 and missed 72.

Two outputs, and the second matters more
----------------------------------------
  pairs       classes whose factory the mapping has not paired. Deterministic,
              emitted at confidence 1.0 rather than scored.
  conflicts   classes where the mapping pairs that factory with a DIFFERENT
              function. The registry does not guess, so a conflict is a mapping
              error -- and since transfers are generated from the mapping, it is
              a wrong name waiting to be applied.

Usage:
    map_factory_pairs.py
    map_factory_pairs.py --mapping m.json --out-pairs p.json
    map_factory_pairs.py --mapping m.json --fail-on-conflict

@category Annotations
"""

import argparse
import glob
import json
import os
import re
import struct
import sys

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
if THIS_DIR not in sys.path:
    sys.path.insert(0, THIS_DIR)
REPO = os.path.dirname(os.path.dirname(THIS_DIR))

INIT_TABLE = "g_InitHandlers"
ENTRY_SIZE = 6                       # RuntimeHandlerEntry: u8 status, u8 priority, ptr
REGISTER_HINT = "register"           # substring of the registrar's name
PUSH_RE = re.compile(r'^\s*PUSH\s+(0x[0-9a-f]+)', re.I)
CALL_RE = re.compile(r'^\s*CALL\s+(\S+)', re.I)
STR_RE = re.compile(r'=\s*"([^"]*)"')


def ann_dir(program):
    return os.path.join(REPO, "annotations", program)


def _buckets(program, category):
    pat = os.path.join(ann_dir(program), category, f"{category}_bucket_*.json")
    for path in sorted(glob.glob(pat)):
        with open(path) as fh:
            for rec in json.load(fh):
                yield rec


def function_addrs(program):
    return {r["addr"].lower(): r.get("name")
            for r in _buckets(program, "functions")
            if isinstance(r, dict) and r.get("addr")}


def init_table_addr(program):
    for rec in _buckets(program, "symbols_label"):
        if rec.get("name") == INIT_TABLE and rec.get("addr"):
            return int(rec["addr"], 16)
    return None


def init_handlers(program, limit=4096):
    """Static-init function addresses, read from g_InitHandlers itself.

    Read from the table rather than by globbing for files called staticInit:
    the table is the ground truth, and it still works for handlers that have
    not been named.
    """
    import sibling_match as sm
    base = init_table_addr(program)
    if base is None:
        return []
    img = sm.Image(program)
    off = img.va2off(base)
    if off is None:
        return []
    out = []
    for i in range(limit):
        pos = off + i * ENTRY_SIZE
        if pos + ENTRY_SIZE > len(img.data):
            break
        _st, _pr, fn = struct.unpack_from("<BBI", img.data, pos)
        if not fn:
            break
        if not img.is_mapped_va(fn):
            break
        out.append("%08x" % fn)
    return out


def asm_path(program, addr):
    hits = glob.glob(os.path.join(ann_dir(program), "pseudocode", "src",
                                  "*", "*", f"*FUN_{addr}.asm"))
    return hits[0] if hits else None


def class_to_factory(program, verbose=False):
    """class name -> {factory addresses}, parsed from each staticInit's register call."""
    funcs = function_addrs(program)
    out, seen, noreg = {}, 0, 0
    for addr in init_handlers(program):
        path = asm_path(program, addr)
        if not path:
            continue
        seen += 1
        pushes, hit = [], False
        for line in open(path):
            code = line.split(";")[0]
            m = PUSH_RE.match(code)
            if m:
                s = STR_RE.search(line)
                pushes.append(("%08x" % int(m.group(1), 16),
                               s.group(1) if s else None))
                continue
            c = CALL_RE.match(code)
            if c:
                if REGISTER_HINT in c.group(1).lower():
                    hit = True
                    break
                pushes = []          # a different call: its args are not ours
        if not hit:
            noreg += 1
            continue
        cls = next((s for _v, s in pushes if s), None)
        # The factory is the pushed value that is a real function entry. Using
        # the function list rather than an address range matters: the two images
        # have different .text extents and a range guess silently loses matches.
        facs = [v for v, s in pushes if s is None and v in funcs]
        if cls and facs:
            out.setdefault(cls, set()).update(facs)
    if verbose:
        print(f"  {program}: {seen} init handler(s) read, {noreg} without a register "
              f"call, {len(out)} class key(s)")
    return out


def analyse(a_prog, b_prog, mapping_path, verbose=True):
    if verbose:
        print("Reading static-init registries...")
    da = class_to_factory(a_prog, verbose)
    db = class_to_factory(b_prog, verbose)
    a2b = b2a = {}
    if mapping_path:
        with open(mapping_path) as fh:
            mp = json.load(fh)
        a2b = {p["a"].lower(): p["b"].lower() for p in mp["pairs"]}
        b2a = {v: k for k, v in a2b.items()}

    agree, new, conflicts, ambiguous = [], [], [], []
    for cls in sorted(set(da) & set(db)):
        if len(da[cls]) != 1 or len(db[cls]) != 1:
            ambiguous.append((cls, sorted(da[cls]), sorted(db[cls])))
            continue
        a, b = next(iter(da[cls])), next(iter(db[cls]))
        if a in a2b and a2b[a] == b:
            agree.append((cls, a, b))
        elif a in a2b:
            conflicts.append((cls, a, b, f"mapping pairs {a} with {a2b[a]}"))
        elif b in b2a:
            conflicts.append((cls, a, b, f"mapping pairs {b} with {b2a[b]}"))
        else:
            new.append((cls, a, b))
    return {"agree": agree, "new": new, "conflicts": conflicts,
            "ambiguous": ambiguous, "a_keys": len(da), "b_keys": len(db)}


def report(res, show):
    print("\n" + "=" * 74)
    print("STATIC-INIT FACTORY PAIRING")
    print("=" * 74)
    print(f"  class keys        {res['a_keys']} / {res['b_keys']}")
    print(f"  AGREE             {len(res['agree'])}   (independent confirmation)")
    print(f"  NEW               {len(res['new'])}")
    print(f"  CONFLICT          {len(res['conflicts'])}")
    print(f"  ambiguous         {len(res['ambiguous'])}")
    if res["new"]:
        print(f"\n  NEW pairs ({len(res['new'])}):")
        for cls, a, b in res["new"][:show]:
            print(f"    {cls:26} {a} <-> {b}")
        if len(res["new"]) > show:
            print(f"    ... and {len(res['new']) - show} more")
    if res["conflicts"]:
        print(f"\n  *** CONFLICTS ({len(res['conflicts'])}) -- the static-init registry "
              f"disagrees with the mapping.")
        print("      The registry names the class in the call itself, so each of these")
        print("      is a MAPPING ERROR that a transfer would turn into a wrong name.")
        for cls, a, b, why in res["conflicts"][:show]:
            print(f"    {cls:26} factory {a} <-> {b}\n        {why}")


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--from-program", dest="a_prog", default="nocedit.exe")
    ap.add_argument("--program", dest="b_prog", default="nocturne.exe")
    ap.add_argument("--mapping")
    ap.add_argument("--out-pairs")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--fail-on-conflict", action="store_true")
    ap.add_argument("-q", "--quiet", action="store_true")
    args = ap.parse_args()

    res = analyse(args.a_prog, args.b_prog, args.mapping, verbose=not args.quiet)
    report(res, args.show)

    if args.out_pairs:
        names = function_addrs(args.a_prog)
        pairs = [{
            "a": a, "b": b,
            "name": names.get(a) or f"FUN_{a}",
            "confidence": 1.0,
            "ambiguous": False,
            "evidence": [f"factory_registry:{cls}"],
            "shape_agreement": "unshaped",
        } for cls, a, b in res["new"]]
        with open(args.out_pairs, "w") as fh:
            json.dump({"from": args.a_prog, "to": args.b_prog, "pairs": pairs}, fh, indent=1)
        print(f"\nwrote {args.out_pairs} ({len(pairs)} pairs)")

    if res["conflicts"] and args.fail_on_conflict:
        print("\nFAILING: registry/mapping conflict (--fail-on-conflict)")
        return 2
    return 0


if __name__ == "__main__":
    sys.exit(main())
