#!/usr/bin/env python3
"""Which nocedit functions touch a given offset, and did any survive into nocturne?

A field only ever touched by functions that have no nocturne counterpart is a
field only editor code uses. That is affirmative evidence it was removed, as
opposed to "no matched function happened to touch it", which is merely absence.

Usage:
    editor_only_fields.py [--mapping M] [--actor-classes F] [offset ...]

Offsets default to 0x144 0x148. The class list may be actor_class_tree.py's
--json output, or a plain file of whitespace-separated class names:

    python3 actor_class_tree.py --program nocturne.exe --json actors.json
"""
import argparse, json, os, re, sys
from collections import defaultdict
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
import sibling_match as sm

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_MAPPING = os.path.join(REPO_ROOT, "annotations", "nocturne.exe",
                               "reports", "sibling_verified_mapping.json")

ap = argparse.ArgumentParser()
ap.add_argument("--mapping", default=DEFAULT_MAPPING)
ap.add_argument("--actor-classes", required=True,
                help="actor_class_tree.py --json output, or a list of names")
ap.add_argument("offsets", nargs="*", help="field offsets, default 0x144 0x148")
args = ap.parse_args()

MD = Cs(CS_ARCH_X86, CS_MODE_32)
FIELD_OP = re.compile(r"\[(?!esp|ebp)e[a-z]{2} \+ (0x[0-9a-f]+)\]")
TARGETS = set(int(x, 0) for x in args.offsets) or {0x144, 0x148}

mapping = json.load(open(args.mapping))
matched = {p["a"] for p in mapping["pairs"]}
a_img = sm.Image(mapping["from"])
raw = open(args.actor_classes).read()
actors = set(json.loads(raw)["parent"]) if args.actor_classes.endswith(".json") \
    else set(raw.split())

hits = defaultdict(list)
for addr, func in a_img.by_addr.items():
    name = func.get("name") or ""
    cls = re.search(r"_(C[A-Z][A-Za-z0-9]*)_", name)
    if not cls or cls.group(1) not in actors:
        continue
    body = func.get("body") or []
    for start, end in sorted((int(b["start"], 16), int(b["end"], 16)) for b in body):
        off = a_img.va2off(start)
        if off is None:
            continue
        for insn in MD.disasm(a_img.data[off:off + (end - start + 1)], start):
            if insn.mnemonic in ("call", "jmp"):
                continue
            for m in FIELD_OP.finditer(insn.op_str):
                v = int(m.group(1), 0)
                if v in TARGETS:
                    hits[v].append((name, addr, addr in matched,
                                    "%s %s" % (insn.mnemonic, insn.op_str)))

for off in sorted(hits):
    rows = hits[off]
    kept = [r for r in rows if r[2]]
    print("=" * 78)
    print("offset 0x%x -- %d reference(s) in actor-hierarchy methods" % (off, len(rows)))
    print("   %d in functions that HAVE a nocturne counterpart" % len(kept))
    print("   %d in functions that do NOT (editor-only)" % (len(rows) - len(kept)))
    print()
    for name, addr, is_matched, insn in sorted(rows, key=lambda r: (not r[2], r[0])):
        print("   %-7s %-52s %s" % ("MATCHED" if is_matched else "editor",
                                    name[:52], insn))
    print()
