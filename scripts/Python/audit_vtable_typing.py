#!/usr/bin/env python3
# Audit a program's vtable typing against its OWN tables.
#
#   python3 audit_vtable_typing.py [program]      # default nocedit.exe
#
# Two independent checks:
#   1. every table with an applied struct: does struct length == slots * 4?
#      A mismatch means the table is mistyped in nocedit itself.
#   2. coverage: how many tables carry no struct at all.
#
# This matters beyond nocedit, because nocturne's types were seeded from there:
# a wrong struct in the source propagates on every import_sibling_types run.
#
# CAVEAT: the `slots x 4` rule assumes the table is only function pointers.
# Some Watcom vtables carry a trailer -- streambuf_vtable legitimately has
# `reserved` and `base_object_size` past its 11 slots -- so a reported mismatch
# on a CRT/iostream class should be checked against the bytes before believing
# it. Reads exported annotations only; needs no Ghidra.

import argparse
import glob
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm


def load(program, kind):
    """addr -> record over an exported category's buckets."""
    out = {}
    for f in glob.glob(os.path.join(sm.ANNOTATIONS, program, kind, "*.json")):
        with open(f) as fh:
            d = json.load(fh)
        if not isinstance(d, list):
            continue
        for r in d:
            if isinstance(r, dict) and r.get("addr"):
                out[r["addr"].lower()] = r
    return out


def struct_length(structs, name):
    """A struct's length from its fields, when the applied record does not give one."""
    fields = (structs.get(name) or {}).get("fields") or []
    if not fields:
        return None
    return max(int(f["offset"]) + int(f.get("len") or 4) for f in fields)


def audit(program):
    """(mistyped rows, correct count, unknown count, untyped tables, labels) for `program`."""
    img = sm.Image(program)
    applied = load(program, "applied_structs")
    labels = {a: r.get("name") for a, r in load(program, "symbols_label").items()}
    with open(os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")) as fh:
        structs = {s["name"]: s for s in json.load(fh)["structs"]}

    bad, good, unknown = [], 0, 0
    for t in img.vtables:
        a = (t.get("addr") or "").lower()
        rec = applied.get(a)
        if not rec:
            continue
        want = t.get("count", 0) * 4
        have = rec.get("len") or struct_length(structs, rec.get("name"))
        if have is None:
            unknown += 1
        elif have == want:
            good += 1
        else:
            bad.append((a, labels.get(a), rec.get("name"), have, want, t.get("count")))
    untyped = [t for t in img.vtables if (t.get("addr") or "").lower() not in applied]
    return bad, good, unknown, untyped, labels


def main(argv=None):
    ap = argparse.ArgumentParser(description="Audit a program's vtable typing against its own tables.")
    ap.add_argument("program", nargs="?", default="nocedit.exe")
    program = ap.parse_args(argv).program
    bad, good, unknown, untyped, labels = audit(program)

    print("=== %s: tables with an applied struct ===" % program)
    print("  correct   %d" % good)
    print("  MISTYPED  %d" % len(bad))
    print("  unknown   %d" % unknown)
    for a, lab, name, have, want, slots in sorted(bad, key=lambda x: x[1] or ""):
        print("    %s %-26s %-24s struct %d bytes vs %d slots x4 = %d"
              % (a, lab or "-", name, have, slots, want))

    total = len(untyped) + good + unknown + len(bad)
    print("\n  tables with NO struct applied: %d of %d" % (len(untyped), total))
    named_untyped = [t for t in untyped
                     if (labels.get((t.get("addr") or "").lower()) or "").startswith("g_C")]
    print("  of those, %d carry a g_C*VTable name" % len(named_untyped))
    for t in named_untyped[:12]:
        a = (t.get("addr") or "").lower()
        print("     %s %-28s %d slots" % (a, labels.get(a), t.get("count")))


if __name__ == "__main__":
    main()
