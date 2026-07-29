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

import json
import glob
import sys
from collections import Counter, defaultdict

sys.path.insert(0, "scripts/Python")
import sibling_match as sm

PROG = sys.argv[1] if len(sys.argv) > 1 else "nocedit.exe"


def load(kind):
    out = {}
    for f in glob.glob("annotations/%s/%s/*.json" % (PROG, kind)):
        d = json.load(open(f))
        if not isinstance(d, list):
            continue
        for r in d:
            if isinstance(r, dict) and r.get("addr"):
                out[r["addr"].lower()] = r
    return out


img = sm.Image(PROG)
applied = load("applied_structs")
labels = {a: r.get("name") for a, r in load("symbols_label").items()}

dt = json.load(open("annotations/%s/data_types/data_types.json" % PROG))
S = {s["name"]: s for s in dt["structs"]}


def slen(name):
    s = S.get(name)
    if not s:
        return None
    f = s.get("fields") or []
    if not f:
        return None
    # unpacked struct: length = last offset + its size; assume 4-byte members
    return max(int(x["offset"]) for x in f) + 4


print("=== %s: tables with an applied struct ===" % PROG)
bad, good, unknown = [], 0, 0
for t in img.vtables:
    a = (t.get("addr") or "").lower()
    rec = applied.get(a)
    if not rec:
        continue
    name = rec.get("name")
    want = t.get("count", 0) * 4
    have = rec.get("len") or slen(name)
    if have is None:
        unknown += 1
        continue
    if have == want:
        good += 1
    else:
        bad.append((a, labels.get(a), name, have, want, t.get("count")))

print("  correct   %d" % good)
print("  MISTYPED  %d" % len(bad))
print("  unknown   %d" % unknown)
for a, lab, name, have, want, slots in sorted(bad, key=lambda x: x[1] or ""):
    print("    %s %-26s %-24s struct %d bytes vs %d slots x4 = %d"
          % (a, lab or "-", name, have, slots, want))

untyped = [t for t in img.vtables if (t.get("addr") or "").lower() not in applied]
print("\n  tables with NO struct applied: %d of %d"
      % (len(untyped), len(img.vtables)))
named_untyped = [t for t in untyped
                 if (labels.get((t.get("addr") or "").lower()) or "").startswith("g_C")]
print("  of those, %d carry a g_C*VTable name" % len(named_untyped))
for t in named_untyped[:12]:
    a = (t.get("addr") or "").lower()
    print("     %s %-28s %d slots" % (a, labels.get(a), t.get("count")))
