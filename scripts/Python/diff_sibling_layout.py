#!/usr/bin/env python3
"""Locate the fields a sibling build removed, by diffing matched method pairs.

derive_struct_drift.py measures *how far* a class's fields moved. It cannot say
which field left, for a structural reason: it only compares method pairs whose
instruction streams are the same length, and a removed field usually means a
removed instruction. The pairs that would answer the question are exactly the
ones it discards.

This aligns the two streams with difflib instead of zipping them, so a dropped
instruction is visible as such. A field initialised in nocedit's constructor with
no counterpart in nocturne's is a field that does not exist in nocturne. That is
what pinned CDemonActor's `is_editor_hidden`.

Three operand classes are excluded, each for a reason learned the hard way:

  [esp/ebp + N]   a stack slot, not a field. Watcom has no frame pointer, so
                  these look identical to field accesses and are ~47% of all
                  memory operands.
  call/jmp [r+N]  a virtual dispatch. The displacement indexes the vtable, not
                  the object.
  offsets >= sizeof(class)   some other object the method also touched.

Usage:
    diff_sibling_layout.py mapping.json --class CDemonActor
    diff_sibling_layout.py mapping.json --roots            # every root class
    diff_sibling_layout.py mapping.json --class CPickList --show-pairs
"""

import argparse
import difflib
import json
import os
import re
import sys
from collections import Counter, defaultdict

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    sys.exit("capstone is required: pip install capstone")

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import sibling_match as sm
from compare_sibling_struct_sizes import (DeltaModel, load_layouts,
                                          load_type_info_sizes, resolve_layout_alias)

_MD = Cs(CS_ARCH_X86, CS_MODE_32)
_MD.detail = False

# A displacement off a register that is not the stack pointer.
_FIELD_OP = re.compile(r"\[(?!esp|ebp)(e[a-z]{2}) \+ (0x[0-9a-f]+)\]")
_CLASS_TOKEN = re.compile(r"_(C[A-Z][A-Za-z0-9]*)_")


def disassemble(image, addr):
    func = image.by_addr.get(addr)
    if not func:
        return None
    out = []
    for start, end in sorted((int(b["start"], 16), int(b["end"], 16))
                             for b in func.get("body") or []):
        off = image.va2off(start)
        if off is None:
            return None
        out.extend("%s %s" % (i.mnemonic, i.op_str)
                   for i in _MD.disasm(image.data[off:off + (end - start + 1)], start))
    return out


def align(a_insns, b_insns):
    """nocedit instruction index -> nocturne instruction, or None if dropped."""
    mapped = {}
    matcher = difflib.SequenceMatcher(a=a_insns, b=b_insns, autojunk=False)
    for tag, i1, i2, j1, j2 in matcher.get_opcodes():
        if tag == "equal" or (tag == "replace" and (i2 - i1) == (j2 - j1)):
            for k in range(i1, i2):
                mapped[k] = b_insns[j1 + k - i1]
        else:
            for k in range(i1, i2):
                mapped[k] = None
    return mapped


def field_path(layouts, cls, off, depth=0):
    """Dotted path of the field containing `off`, or None."""
    entry = layouts.get(cls)
    if not entry:
        return None
    for field in entry.get("fields", []):
        start = field.get("offset", 0)
        if start <= off < start + max(field.get("len", 0), 1):
            inner = field.get("type", "").split("[")[0].strip()
            if depth < 4 and inner in layouts and layouts[inner].get("fields"):
                sub = field_path(layouts, inner, off - start, depth + 1)
                if sub:
                    return "%s.%s" % (field.get("name"), sub)
            return "%s : %s @0x%x" % (field.get("name"), field.get("type"), start)
    return None


def collect(mapping, a_img, b_img, cls, size, show_pairs=False):
    """nocedit offset -> Counter of nocturne offset (or None for removed).

    A None target means the instruction touching that field has no counterpart
    in the sibling, i.e. the field is gone. It is only recorded from pairs whose
    streams align well enough for that to mean anything.
    """
    seen = defaultdict(Counter)
    used_pairs = []
    for pair in mapping["pairs"]:
        token = _CLASS_TOKEN.search(pair["name"])
        if not token or token.group(1) != cls:
            continue
        A = disassemble(a_img, pair["a"])
        B = disassemble(b_img, pair["b"])
        if not A or not B:
            continue
        mapped = align(A, B)
        # "No counterpart" only means a removed field if the rest of the two
        # streams actually line up. When a class's offsets have moved a long way
        # the instruction texts stop matching, difflib aligns almost nothing, and
        # every field reads as removed -- which is how CPodFile appeared to drop
        # the file_count and directory_entries a POD reader cannot work without.
        aligned = sum(1 for v in mapped.values() if v is not None)
        trust_removals = aligned >= 0.75 * len(A)
        touched = 0
        for index, insn in enumerate(A):
            if insn.split()[0] in ("call", "jmp"):
                continue                       # vtable dispatch, not a field
            for m in _FIELD_OP.finditer(insn):
                off = int(m.group(2), 0)
                if not 0 < off < size:
                    continue
                counterpart = mapped.get(index)
                if counterpart is None:
                    if trust_removals:
                        seen[off][None] += 1
                        touched += 1
                    continue
                if counterpart.split()[0] in ("call", "jmp"):
                    continue
                bm = _FIELD_OP.search(counterpart)
                if bm:
                    seen[off][int(bm.group(2), 0)] += 1
                    touched += 1
        if touched:
            used_pairs.append((pair["name"], len(A), len(B)))
    if show_pairs:
        for name, la, lb in used_pairs:
            print("      %-64s %d/%d insns" % (name[:64], la, lb))
    return seen


def report(cls, size, delta, seen):
    print("=" * 80)
    print("%s  nocedit 0x%x (%d)  ->  nocturne %d   must lose %d bytes"
          % (cls, size, size, size - delta, delta))
    print("=" * 80)
    if not seen:
        print("  no matched method touches this class's fields -- not measurable this way\n")
        return None

    rows = []
    for off in sorted(seen):
        votes = seen[off]
        target, n = votes.most_common(1)[0]
        rows.append((off, target, n, sum(votes.values())))

    removed = [r for r in rows if r[1] is None]
    shifted = [r for r in rows if r[1] is not None]

    print("\n  %-10s %-12s %-9s %-8s %s" % ("nocedit", "nocturne", "shift", "votes", "field"))
    for off, target, n, total in rows:
        if target is None:
            shift = "REMOVED"
            tgt = "-"
        else:
            shift = "%+d" % (target - off)
            tgt = "0x%x" % target
        print("  0x%-8x %-12s %-9s %d/%-6d %s"
              % (off, tgt, shift, n, total, FIELDS.get(off) or "?"))

    # The removal window: the first offset that moved, and the last one below it
    # that did not. Taking the global max of unshifted offsets instead would
    # straddle the boundary and report a window running backwards.
    first_moved = min((o for o, t, _, _ in shifted if t != o), default=None)
    last_stable = max((o for o, t, _, _ in shifted
                       if t == o and (first_moved is None or o < first_moved)),
                      default=None)
    print()
    if removed:
        print("  fields with NO counterpart in nocturne (initialised in nocedit only):")
        for off, _, n, _ in removed:
            print("      0x%-6x  %s   (%d sighting(s))" % (off, FIELDS.get(off) or "?", n))
    if last_stable is not None and first_moved is not None:
        print("  removal window: after 0x%x (last unshifted) and at/before 0x%x (first shifted)"
              % (last_stable, first_moved))
    elif first_moved is not None:
        print("  first shifted offset: 0x%x" % first_moved)
    print()
    max_shifted = max((o for o, t, _, _ in shifted if t != o), default=None)
    return {"last_stable": last_stable, "first_moved": first_moved,
            "max_shifted": max_shifted}


_ARRAY = re.compile(r"^(.*?)\s*\[(\d+)\]$")


def propose(cls, layouts, delta, window):
    """Candidate edits whose arithmetic accounts for the delta exactly.

    The editor build differs from the game build in two recurring ways: it keeps
    a trailing block the game has no use for, and it sizes capacity arrays far
    larger. Both leave an exact signature in the numbers, so rather than guess
    from field names, enumerate the edits that produce precisely `delta` bytes.
    """
    entry = layouts.get(cls)
    if not entry or not delta:
        return []
    fields = entry.get("fields", [])
    size = entry["len"]
    window = window or {}
    lo = window.get("last_stable") or 0
    hi = window.get("first_moved")
    max_shifted = window.get("max_shifted")
    out = []

    # 1. A trailing block the game build simply does not have. A truncated tail
    #    cannot also have been observed shifting, so any sighting of a field
    #    moving past the cut rules this out.
    for i, field in enumerate(fields):
        if size - field["offset"] == delta:
            if max_shifted is not None and field["offset"] <= max_shifted:
                break
            names = ", ".join(f["name"] for f in fields[i:][:4])
            out.append("truncate from 0x%x: drop %s%s  (new size 0x%x)"
                       % (field["offset"], names,
                          " ..." if len(fields) - i > 4 else "", field["offset"]))
            break

    # 2. A capacity array sized down, possibly nested one level.
    for field in fields:
        m = _ARRAY.match(field.get("type", ""))
        if not m:
            continue
        base, count = m.group(1).strip(), int(m.group(2))
        if count < 1:
            continue
        # The array has to straddle the boundary to be the thing that shrank.
        if field["offset"] + field["len"] < lo:
            continue
        if hi is not None and field["offset"] >= hi:
            continue
        elem = field["len"] // count
        if elem and delta % elem == 0 and delta // elem < count:
            out.append("shrink %s : %s[%d] -> [%d]  (%d x %d bytes)"
                       % (field["name"], base, count, count - delta // elem,
                          delta // elem, elem))
        # The array's element may itself hold the capacity array.
        inner = layouts.get(base)
        if inner:
            for sub in inner.get("fields", []):
                sm_ = _ARRAY.match(sub.get("type", ""))
                if not sm_:
                    continue
                sub_count = int(sm_.group(2))
                sub_elem = sub["len"] // sub_count if sub_count else 0
                per = count * sub_elem
                if per and delta % per == 0 and delta // per < sub_count:
                    out.append("shrink %s.%s : %s[%d] -> [%d]  (%d x %d bytes x %d %s)"
                               % (field["name"], sub["name"], sm_.group(1).strip(),
                                  sub_count, sub_count - delta // per,
                                  delta // per, sub_elem, count, base))

    # 3. One field, or a contiguous run of them, exactly the right size.
    for i, field in enumerate(fields):
        total = 0
        for j in range(i, len(fields)):
            total += fields[j]["len"]
            if total > delta:
                break
            end = fields[j]["offset"] + fields[j]["len"]
            if (total == delta and fields[i]["offset"] >= lo
                    and (hi is None or end <= hi)):
                names = ", ".join(f["name"] for f in fields[i:j + 1])
                out.append("remove field%s at 0x%x: %s"
                           % ("s" if j > i else "", fields[i]["offset"], names))
                break
    return out


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("mapping")
    parser.add_argument("--class", dest="only", help="class to analyse")
    parser.add_argument("--roots", action="store_true",
                        help="every class whose own fields changed")
    parser.add_argument("--from-program", default="nocedit.exe")
    parser.add_argument("--to-program", default="nocturne.exe")
    parser.add_argument("--show-pairs", action="store_true",
                        help="list the method pairs that contributed")
    args = parser.parse_args()

    with open(args.mapping) as handle:
        mapping = json.load(handle)

    from_sizes = load_type_info_sizes(args.from_program)
    to_sizes = load_type_info_sizes(args.to_program)
    layouts, typedefs = load_layouts(args.from_program)

    truth = {}
    for name, to_size in to_sizes.items():
        layout_name = resolve_layout_alias(name, layouts, from_sizes.get(name))
        if name in from_sizes:
            truth[layout_name or name] = from_sizes[name] - to_size

    model = DeltaModel(truth, layouts, typedefs)
    for name in list(layouts) + list(truth):
        model.compute(name)

    if args.roots:
        targets = sorted((n for n in truth if model.residual.get(n)),
                         key=lambda n: -abs(model.residual[n]))
    elif args.only:
        targets = [args.only]
    else:
        parser.error("give --class NAME or --roots")

    a_img, b_img = sm.Image(mapping["from"]), sm.Image(mapping["to"])

    global FIELDS
    for cls in targets:
        entry = layouts.get(cls)
        if not entry:
            print("=" * 80)
            print("%s: no layout in %s\n" % (cls, args.from_program))
            continue
        size = entry["len"]
        FIELDS = {}
        for off in range(0, size, 4):
            FIELDS[off] = field_path(layouts, cls, off)
        seen = collect(mapping, a_img, b_img, cls, size, args.show_pairs)
        window = report(cls, size, truth.get(cls, 0), seen)
        ideas = propose(cls, layouts, truth.get(cls, 0), window)
        if ideas:
            print("  candidate edits that account for exactly %d bytes:" % truth.get(cls, 0))
            for idea in ideas:
                print("      %s" % idea)
            print()
    return 0


if __name__ == "__main__":
    sys.exit(main())
