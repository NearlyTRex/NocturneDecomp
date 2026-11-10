#!/usr/bin/env python3
"""Read struct sizes from a build's own allocations: `new CFoo` spells sizeof(CFoo).

Watcom compiles `new CFoo` as a call to operator new with the size pushed as its
first (last-pushed) argument, then hands the result to CFoo's constructor:

    push 0x34c ; call operator_new ; ... ; push eax ; call CAmmoBox_ctor

nocedit's memory-debug build pushes a line and a file first, so the size is
still the last push. A singleton is stored to a global instead of (or as well
as) going to a constructor. This reads every call to the allocator in the
build's exported functions, straight from the executable, so it needs no
match to nocedit and no decompiler.

The class is the constructor's: its name (`..._CAmmoBox_ctor_FUN_...`), else
the last vtable it stores (a `g_<Class>VTable` label), the most-derived one
since a constructor calls its bases' first. A global holding the result names
its type by the pointer type applied to it. An allocation whose class cannot
be told is listed with its call site, for reading by hand.

Usage:
    find_allocation_sizes.py --program bw1.exe [--out sizes.json]
"""

import argparse
import json
import re
import sys
from collections import Counter, defaultdict

import derive_struct_drift as dsd
import sibling_match as sm

# The allocator: operator new under any of the names the builds give it
ALLOCATOR = re.compile(r"(operator_?new|__nw|debugAllocTracked1)_FUN_")
CTOR = re.compile(r"_(C[A-Z][A-Za-z0-9]*)_ctor(_FUN_|$)")
VTABLE_LABEL = re.compile(r"^g_([A-Z][A-Za-z0-9]*)VTable$")
IMM = re.compile(r"^0x[0-9a-f]+$|^\d+$")
GLOBAL_STORE = re.compile(r"^dword ptr \[(0x[0-9a-f]+)\]$")
# How far after the allocation its result is looked for
REACH = 16


def labels(program):
    """{address: name} of the build's labels."""
    return {int(r["addr"], 16): r.get("name") for r in sm._load_buckets(program, "symbols_label")
            if r.get("addr")}


def pointer_types(program):
    """{address: pointee type name} of the pointers applied to the build's data."""
    return {int(r["addr"], 16): r.get("to") for r in sm._load_buckets(program, "applied_pointers")
            if r.get("addr")}


def size_pushed(insns, i):
    """The immediate the last push before insns[i] pushes, or None."""
    for _, m, o in reversed(insns[max(0, i - 6):i]):
        if m == "push":
            return int(o, 0) if IMM.match(o) else None
    return None


def stored_vtable(insns, names):
    """The class of the first vtable label stored by these instructions, or None."""
    for _, m, o in insns:
        if m == "mov" and o.startswith("dword ptr ["):
            value = o.rpartition(", ")[2]
            label = VTABLE_LABEL.match(names.get(int(value, 0)) or "") if IMM.match(value) else None
            if label:
                return label.group(1)
    return None


def consumer(insns, i):
    """("ctor", address, index of the call) or ("global", address, index) the result of
    the call at insns[i] goes to, or None.

    Follows eax and the registers it is copied to; a call other than to a
    constructor taking it ends the search, since it clobbers eax.
    """
    held = {"eax"}
    tail = insns[i + 1:i + 1 + REACH]
    for j, (_, m, o) in enumerate(tail):
        if m == "push" and o in held and j + 1 < len(tail):
            nm, no = tail[j + 1][1], tail[j + 1][2]
            if nm == "call" and no.startswith("0x"):
                return "ctor", int(no, 16), i + j + 2
        if m == "mov":
            dst, _, src = o.partition(", ")
            store = GLOBAL_STORE.match(dst)
            if src in held and store:
                return "global", int(store.group(1), 16), i + j + 1
            if src in held and " " not in dst:
                held.add(dst)
            elif dst in held:
                held.discard(dst)
        if m == "call":
            return None
    return None


def ctor_class(img, address, names):
    """The class a constructor builds: from its name, else the last vtable label it stores."""
    func = img.by_addr.get(f"{address:08x}")
    if func is None:
        return None
    m = CTOR.search(func.get("name") or "")
    if m:
        return m.group(1)
    found = None
    for insn in dsd._insns_at(img, f"{address:08x}") or []:
        found = stored_vtable([insn], names) or found
    return found


def allocations(img, names, pointees, allocator=ALLOCATOR):
    """[{site, size, class, via}] for every call to the allocator in the build's functions."""
    targets = {int(a, 16) for a, f in img.by_addr.items() if allocator.search(f.get("name") or "")}
    out = []
    for addr in sorted(img.by_addr):
        insns = dsd._insns_at(img, addr) or []
        for i, (va, m, o) in enumerate(insns):
            if m != "call" or not o.startswith("0x") or int(o, 16) not in targets:
                continue
            row = {"site": f"{va:08x}", "function": img.by_addr[addr].get("name"),
                   "size": size_pushed(insns, i), "class": None, "via": None}
            used = consumer(insns, i)
            if used and used[0] == "ctor":
                # A class with no constructor of its own calls its base's, then stores its vtable
                after = stored_vtable(insns[used[2] + 1:used[2] + 4], names)
                row["class"] = after or ctor_class(img, used[1], names)
                row["via"] = f"ctor {used[1]:08x}" + (" + vtable" if after else "")
            elif used:
                pointee = pointees.get(used[1])
                label = names.get(used[1])
                row["class"] = pointee if pointee and pointee not in ("void", "undefined1") else None
                row["via"] = f"global {used[1]:08x} {label or ''}".rstrip()
            else:
                # An inlined constructor stores the vtable itself
                row["class"] = stored_vtable(insns[i + 1:i + 1 + 2 * REACH], names)
                row["via"] = "inline vtable" if row["class"] else None
            out.append(row)
    return out


def paired(rows, reference, pairs):
    """Classes for `rows` without one, from the reference build's allocations
    (`reference`, this tool's rows for nocedit) in the matched function (`pairs`,
    a sibling mapping's): the nth allocation in a function is the nth in its
    match, when both allocate the same number of times."""
    by_function = defaultdict(list)
    for r in reference:
        by_function[r["function"].rsplit("_FUN_", 1)[-1]].append(r)
    match = {p["b"]: p["a"] for p in pairs}
    mine = defaultdict(list)
    for r in rows:
        mine[r["function"].rsplit("_FUN_", 1)[-1]].append(r)
    for function, found in mine.items():
        theirs = by_function.get(match.get(function), [])
        if len(theirs) != len(found):
            continue
        for r, t in zip(found, theirs):
            if not r["class"] and t["class"]:
                r["class"], r["via"] = t["class"], f"{r['via'] or 'paired'}; as nocedit {t['site']}"
    return rows


def sizes(rows):
    """{class: Counter(size)} over the allocations whose class and size are known."""
    out = defaultdict(Counter)
    for r in rows:
        if r["class"] and r["size"] is not None:
            out[r["class"]][r["size"]] += 1
    return out


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--program", required=True)
    ap.add_argument("--out", help="write the allocations and sizes as JSON")
    ap.add_argument("--reference", help="this tool's --out for the reference build (nocedit)")
    ap.add_argument("--mapping", help="with --reference: the sibling mapping pairing their functions")
    ap.add_argument("--unresolved", type=int, default=20,
                    help="list this many allocations whose class is unknown (default 20)")
    args = ap.parse_args(argv)

    img = sm.Image(args.program)
    rows = allocations(img, labels(args.program), pointer_types(args.program))
    if args.reference and args.mapping:
        with open(args.reference, encoding="utf-8") as fh:
            reference = json.load(fh)["allocations"]
        with open(args.mapping, encoding="utf-8") as fh:
            rows = paired(rows, reference, json.load(fh)["pairs"])
    found = sizes(rows)
    unknown = [r for r in rows if not r["class"]]
    print(f"{args.program}: {len(rows)} allocations; {len(found)} classes sized; "
          f"{len(unknown)} with no class; {sum(r['size'] is None for r in rows)} with no constant size")
    for name, c in sorted(found.items()):
        mark = "" if len(c) == 1 else "   <-- sizes disagree"
        print(f"  {name:32s} {dict(c)}{mark}")
    for r in unknown[:args.unresolved]:
        print(f"  ? {r['site']} size {r['size']} {r['via'] or ''}  in {(r['function'] or '')[:60]}")
    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            json.dump({"program": args.program, "allocations": rows,
                       "sizes": {n: {str(s): k for s, k in c.items()} for n, c in sorted(found.items())}},
                      fh, indent=1)
    return 0


if __name__ == "__main__":
    sys.exit(main())
