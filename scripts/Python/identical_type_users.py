#!/usr/bin/env python3
"""Find the placeholders a build can take unchanged from nocedit, by the code that uses them.

derive_struct_drift.py credits a struct only from sightings it can pair one by
one, and so misses the ones every method reaches through an array index, at
offset 0, or in a function whose length changed elsewhere: CKeys has hundreds of
typed accesses in paired functions and no sighting. Here a paired function
whose instructions are the same in both builds, operand for operand bar the
displacements and immediates, is read whole: each of nocedit's typed accesses
(export_typed_accesses.py) sits at the same index in the build's copy, and its
displacement there either agrees or contradicts. Absolute accesses (a global's
field) are left out, as their address says nothing about the offset alone.

A placeholder is unchanged when at least --min-sightings accesses agree and
none contradicts. That says the offsets the code touches did not move; the
size is still plan_struct_transfer.py's to check against the build's
allocations, so the names go to it as --unchanged-users.

Usage:
    identical_type_users.py --typed typed_nocedit.json --program bw1.exe \\
        --out bw1_unchanged.txt --report bw1_unchanged.json
"""

import argparse
import bisect
import json
import os
import sys
from collections import defaultdict

from capstone import CS_ARCH_X86, CS_MODE_32, CS_OP_IMM, CS_OP_MEM, CS_OP_REG, Cs

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm
from match_function_bodies import body_ranges, read_body

MIN_SIGHTINGS = 3
MIN_IDENTICAL = 2


def placeholders(program):
    """Structs the build has with no fields and no size."""
    path = os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")
    with open(path, encoding="utf-8") as fh:
        return {s["name"] for s in json.load(fh)["structs"]
                if not s.get("fields") and s.get("len") in (0, 1)}


def pairing(program, source):
    """{source function: build function} from the sibling mapping report."""
    stem = os.path.splitext(source)[0]
    path = os.path.join(sm.ANNOTATIONS, program, "reports", f"sibling_mapping_from_{stem}.json")
    with open(path, encoding="utf-8") as fh:
        return {p["a"].lower(): p["b"].lower() for p in json.load(fh)["pairs"]}


def owners(image):
    """va -> the function whose body holds it, or None."""
    spans = sorted((s, e, f["addr"].lower()) for f in image.functions for s, e in body_ranges(image, f))
    starts = [s for s, _, _ in spans]

    def owner(va):
        i = bisect.bisect_right(starts, va) - 1
        return spans[i][2] if i >= 0 and va <= spans[i][1] else None
    return owner


def instructions(image, func, md):
    """[(va, shape, disp)]: the operands bar displacements and immediates, and the
    displacement of a register-based memory operand (None when there is none)."""
    out = []
    for start, end in body_ranges(image, func):
        off = image.va2off(start)
        if off is None:
            return []
        for ins in md.disasm(image.data[off:off + end - start + 1], start):
            parts, disp = [ins.mnemonic], None
            for op in ins.operands:
                if op.type == CS_OP_REG:
                    parts.append(md.reg_name(op.reg))
                elif op.type == CS_OP_IMM:
                    parts.append("i")
                elif op.type == CS_OP_MEM and (op.mem.base or op.mem.index):
                    parts.append("[%s+%s*%d]" % (md.reg_name(op.mem.base) if op.mem.base else "",
                                                 md.reg_name(op.mem.index) if op.mem.index else "",
                                                 op.mem.scale))
                    disp = op.mem.disp
                else:
                    parts.append("[abs]")
            out.append((ins.address, " ".join(parts), disp))
    return out


def sites(image, typed, names):
    """{name: {function: [va]}} for the register-based typed accesses to each name."""
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    owner = owners(image)
    found = defaultdict(lambda: defaultdict(list))
    for addr, hits in typed.items():
        wanted = {h[0] for h in hits} & names
        va = int(addr, 16)
        f = owner(va) if wanted else None
        off = image.va2off(va) if f is not None else None
        if off is None:
            continue
        ins = next(md.disasm(image.data[off:off + 16], va), None)
        mem = [op.mem for op in ins.operands if op.type == CS_OP_MEM] if ins else []
        if not mem or not (mem[0].base or mem[0].index):
            continue
        for name in wanted:
            found[name][f].append(va)
    return found


def base_name(text):
    """`const SPart *[4]` -> SPart."""
    return (text or "").replace("const ", "").split("[")[0].rstrip(" *")


def declared_by(image, names):
    """{name: [function]} for the functions whose return, parameters or locals are of each name."""
    found = defaultdict(list)
    for f in image.functions:
        variables = f.get("vars") or {}
        types = [f.get("ret")] + [v.get("type") for kind in ("params", "locals")
                                  for v in variables.get(kind) or []]
        for name in {base_name(t) for t in types} & names:
            found[name].append(f["addr"].lower())
    return found


def identical_bodies(src, tgt, names, pairs):
    """{name: (identical, differing)}: the paired functions declaring each name whose
    bodies match_function_bodies keys alike to the last displacement and constant."""
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    out = {}
    for name, functions in declared_by(src, names).items():
        same = differ = 0
        for a in functions:
            b = pairs.get(a)
            if b is None or b not in tgt.by_addr:
                continue
            mine, theirs = read_body(src, src.by_addr[a], md), read_body(tgt, tgt.by_addr[b], md)
            if mine is None or theirs is None:
                continue
            if mine.keys["exact"] == theirs.keys["exact"]:
                same += 1
            else:
                differ += 1
        out[name] = (same, differ)
    return out


def judge(src, tgt, typed, names, pairs):
    """{name: {"agree", "contradict", "rewritten", "unpaired", "functions",
    "identical", "differing"}}."""
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    cache = {}

    def listing(image, addr):
        key = (image.program, addr)
        if key not in cache:
            cache[key] = instructions(image, image.by_addr[addr], md)
        return cache[key]

    out = {}
    for name, by_function in sites(src, typed, names).items():
        row = {"agree": 0, "contradict": 0, "rewritten": 0, "unpaired": 0, "functions": []}
        for a, vas in sorted(by_function.items()):
            b = pairs.get(a)
            if b is None or b not in tgt.by_addr:
                row["unpaired"] += len(vas)
                continue
            mine, theirs = listing(src, a), listing(tgt, b)
            if not mine or [s for _, s, _ in mine] != [s for _, s, _ in theirs]:
                row["rewritten"] += len(vas)
                continue
            index = {va: i for i, (va, _, _) in enumerate(mine)}
            for va in vas:
                same = mine[index[va]][2] == theirs[index[va]][2]
                row["agree" if same else "contradict"] += 1
                if not same:
                    row.setdefault("moved", []).append("%08x: %#x -> %#x" % (
                        va, mine[index[va]][2], theirs[index[va]][2]))
            row["functions"].append(a)
        out[name] = row
    for name, (same, differ) in identical_bodies(src, tgt, names, pairs).items():
        row = out.setdefault(name, {"agree": 0, "contradict": 0, "rewritten": 0, "unpaired": 0,
                                    "functions": []})
        row["identical"], row["differing"] = same, differ
    return out


def unchanged(verdicts, min_sightings=MIN_SIGHTINGS, min_identical=MIN_IDENTICAL):
    """Names no access contradicts, with enough agreeing accesses or identical declaring bodies."""
    return sorted(n for n, r in verdicts.items() if not r["contradict"] and (
        r["agree"] >= min_sightings or r.get("identical", 0) >= min_identical))


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--typed", required=True, help="export_typed_accesses.py output for the source")
    ap.add_argument("--program", required=True, help="the build, as bw1.exe")
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--min-sightings", type=int, default=MIN_SIGHTINGS)
    ap.add_argument("--min-identical", type=int, default=MIN_IDENTICAL,
                    help="identical declaring bodies that settle a name with too few sightings")
    ap.add_argument("--out", help="write the unchanged names, one per line")
    ap.add_argument("--report", help="write every placeholder's counts (JSON)")
    args = ap.parse_args(argv)

    with open(args.typed, encoding="utf-8") as fh:
        typed = json.load(fh)["accesses"]
    names = placeholders(args.program)
    verdicts = judge(sm.Image(args.from_program), sm.Image(args.program), typed, names,
                     pairing(args.program, args.from_program))
    same = unchanged(verdicts, args.min_sightings, args.min_identical)
    print(f"{args.program}: {len(names)} placeholders, {len(verdicts)} reached by its code, "
          f"{len(same)} unchanged")
    for name in sorted(verdicts):
        r = verdicts[name]
        print(f"  {name:30s} agree {r['agree']:4d}  contradict {r['contradict']:3d}  "
              f"rewritten {r['rewritten']:4d}  unpaired {r['unpaired']:3d}  "
              f"identical {r.get('identical', 0):3d}  differing {r.get('differing', 0):3d}")
    if args.out:
        with open(args.out, "w", encoding="utf-8") as fh:
            fh.write("".join(f"{n}\n" for n in same))
    if args.report:
        with open(args.report, "w", encoding="utf-8") as fh:
            json.dump(verdicts, fh, indent=1, sort_keys=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
