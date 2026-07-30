#!/usr/bin/env python3
"""Recover the actor class hierarchy from the registerActorClass calls.

Every actor class registers itself in its translation unit's `staticInit`:

    registerActorClass(&g_CLightActorActorType_00764a9c, "CLightActor",
                       factory, &INT_005ad0a0, 2,
                       &g_CBoxActorActorType_00764800);
                        ^ parent

Argument 2 is the class name as a literal and argument 6 is the parent's
CDemonActorType global, so the calls *are* the inheritance tree -- recorded by
the program about itself, not inferred.

Prefer this over research/01-file_structure/actor_hierarchy.txt, whose
indentation is wrong in at least one place: it files CBoxActor (and the block
from CBodyPart down to CAmmo) under CCharacter, while the registration says
CBoxActor's parent is CDemonActor. Getting a parent wrong matters -- anything
that decides "did this class override this vtable slot, or inherit it" by
diffing against the parent's table silently mis-attributes every slot.

Usage:
    actor_class_tree.py [--program nocturne.exe] [--tree] [--json out.json]
"""

import argparse
import glob
import json
import os
import re
import sys

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.abspath(__file__))))

# The call spans several lines, so match across them. Argument 1 is the class's
# own type global, 2 the name, 6 the parent's type global (or NULL at the root).
_CALL_RE = re.compile(
    r"registerActorClass_FUN_[0-9a-fA-F]+\s*\(\s*"
    r"&?(?P<self>[A-Za-z_]\w*)\s*,\s*"
    r'"(?P<name>[^"]+)"\s*,'
    r"(?P<mid>(?:[^;()]|\([^()]*\))*?),\s*"
    r"(?:&(?P<parent>[A-Za-z_]\w*)|\(\s*CDemonActorType\s*\*\s*\)\s*0x0|0)\s*\)",
    re.S)

# g_CBoxActorActorType_00764800 -> CBoxActor
_TYPEGLOBAL_RE = re.compile(r"^_?g?_?(?P<cls>C\w+?)ActorType(?:_[0-9a-fA-F]+)?$")


def _class_of_global(name):
    m = _TYPEGLOBAL_RE.match(name or "")
    return m.group("cls") if m else None


def load(program="nocturne.exe"):
    """-> (parent: cls -> cls|None, where: cls -> (file, type global))."""
    src = os.path.join(REPO_ROOT, "annotations", program, "pseudocode", "src")
    parent, where, by_global = {}, {}, {}
    raw = []

    for path in glob.glob(os.path.join(src, "**", "*.cpp"), recursive=True):
        # The per-function layout names *directories* after the source file
        # (src/core/actor.cpp/<function>.cpp), so the glob matches both.
        if not os.path.isfile(path):
            continue
        if "/registerActorClass_" in path or ".keep." in path:
            continue
        with open(path, errors="replace") as fh:
            text = fh.read()
        if "registerActorClass_FUN_" not in text:
            continue
        for m in _CALL_RE.finditer(text):
            raw.append((m.group("name"), m.group("self"), m.group("parent"),
                        os.path.relpath(path, src)))

    for name, selfg, parentg, rel in raw:
        by_global[selfg] = name
        where[name] = (rel, selfg)

    for name, selfg, parentg, rel in raw:
        if parentg is None:
            parent[name] = None
            continue
        # Resolve by the global's own registration first; fall back to decoding
        # the symbol, which carries the class name for globals never registered
        # in a file we parsed.
        parent[name] = by_global.get(parentg) or _class_of_global(parentg)

    return parent, where


def ancestry(parent, cls):
    """[cls, base, ..., root] -- cycle-safe."""
    out, seen = [], set()
    while cls and cls not in seen:
        out.append(cls)
        seen.add(cls)
        cls = parent.get(cls)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--program", default="nocturne.exe")
    ap.add_argument("--tree", action="store_true")
    ap.add_argument("--json")
    ap.add_argument("--compare-doc", action="store_true",
                    help="diff against research/01-file_structure/actor_hierarchy.txt")
    args = ap.parse_args()

    parent, where = load(args.program)
    roots = sorted(c for c, p in parent.items() if not p)
    unresolved = sorted(c for c, p in parent.items()
                        if p and p not in parent)
    print(f"{args.program}: {len(parent)} registered actor classes, "
          f"{len(roots)} root(s)")
    if roots:
        print("  roots: %s" % ", ".join(roots))
    if unresolved:
        print(f"  parents naming an unregistered class: {len(unresolved)}")
        for c in unresolved[:10]:
            print(f"    {c} -> {parent[c]}")

    if args.tree:
        kids = {}
        for c, p in parent.items():
            kids.setdefault(p, []).append(c)

        def walk(c, depth):
            print("  " * depth + "- " + c)
            for k in sorted(kids.get(c, [])):
                walk(k, depth + 1)
        for r in roots:
            walk(r, 0)

    if args.compare_doc:
        doc = os.path.join(REPO_ROOT, "research", "01-file_structure",
                           "actor_hierarchy.txt")
        stack, doc_parent = [], {}
        with open(doc) as fh:
            for line in fh:
                if not line.strip() or line.lstrip().startswith("#"):
                    continue
                indent = (len(line) - len(line.lstrip())) // 2
                name = line.strip().lstrip("- ").split(" ")[0]
                stack[indent:] = [name]
                doc_parent[name] = stack[indent - 1] if indent else None
        print("\nvs actor_hierarchy.txt:")
        both = set(doc_parent) & set(parent)
        bad = [c for c in sorted(both) if doc_parent[c] != parent[c]]
        print(f"  {len(both)} classes in both, {len(bad)} disagree")
        for c in bad:
            print(f"    {c}: doc says {doc_parent[c]}, "
                  f"registration says {parent[c]}")

    if args.json:
        # "(abstract)" cannot be recovered from the binary -- an abstract class
        # still gets a vtable and a registration. Carry the annotation over from
        # the text file so the generated JSON is a superset of it.
        abstract = []
        docpath = os.path.join(REPO_ROOT, "research", "01-file_structure",
                               "actor_hierarchy.txt")
        try:
            with open(docpath) as fh:
                for line in fh:
                    if line.lstrip().startswith("#") or "(abstract)" not in line:
                        continue
                    abstract.append(line.strip().lstrip("- ").split(" ")[0])
        except OSError:
            pass

        with open(args.json, "w") as fh:
            json.dump({"program": args.program,
                       "source": "registerActorClass calls in staticInit",
                       "generator": "scripts/Python/actor_class_tree.py",
                       "root": roots[0] if len(roots) == 1 else roots,
                       "parent": parent,
                       "abstract": sorted(abstract),
                       "where": where}, fh, indent=1, sort_keys=True)
        print(f"\nwrote {args.json} ({len(parent)} classes, "
              f"{len(abstract)} marked abstract)")


if __name__ == "__main__":
    main()
