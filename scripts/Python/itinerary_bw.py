#!/usr/bin/env python3
"""The Blair Witch side of the recreation itinerary.

The recreation ports nocedit's code. Each Blair Witch build (bw1, bw2, bw3) adds
two kinds of work on top, both read from the `siblings` key sibling_identity.py
writes into every function's pseudocode JSON:

  variants   a nocedit function whose twin in a Blair Witch build has a different
             body (anything but identical or layout-drift, which is only structure
             offsets). Builds that share one body make one variant. A variant is
             done when the recreation has its `// bw1 0x<addr>` line (bw2, bw3
             likewise) beside the function's `// nocedit 0x<addr>` line.
  BW-only    a Blair Witch function with no nocedit twin, in a module the
             recreation ports. Its twins in the other builds are the same
             function, listed once. A named one is Blair Witch code to extract
             whole; an unnamed one may still be an unidentified nocedit function.
             Done when the recreation has a `// bwN 0x<addr>` line for any of its
             addresses.
"""

import json
import os
import re
import sys
from collections import defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import scaffold_recreation as scaffold  # noqa: E402
import sibling_identity  # noqa: E402

BUILDS = (("bw1", "bw1.exe"), ("bw2", "blairwitch2.exe"), ("bw3", "bw3.exe"))
PROGRAM = dict(BUILDS)
REFERENCE = "nocedit.exe"
SAME = {"identical", "layout-drift"}
PORTED = re.compile(r"^[ \t]*// (bw[123]) 0x([0-9a-f]{8})$")


def read_siblings(program, annotations=None):
    """{addr: siblings} from the program's per-function JSON."""
    src = os.path.join(annotations or scaffold.ANNOTATIONS, program, "pseudocode", "src")
    out = {}
    for addr, path in sibling_identity.function_jsons(src).items():
        with open(path, encoding="utf-8") as fh:
            siblings = json.load(fh).get(sibling_identity.KEY)
        if siblings:
            out[addr] = siblings
    return out


def ported(root):
    """{(build, addr)} for every `// bwN 0x<addr>` line under root."""
    done = set()
    for directory, _, names in os.walk(root):
        for name in names:
            if name.endswith((".cpp", ".h")):
                with open(os.path.join(directory, name), encoding="utf-8") as fh:
                    done |= {m.groups() for m in map(PORTED.match, fh.read().splitlines()) if m}
    return done


class Groups:
    """Union-find over hashable members."""

    def __init__(self):
        self.parent = {}

    def find(self, x):
        self.parent.setdefault(x, x)
        while self.parent[x] != x:
            self.parent[x] = self.parent[self.parent[x]]
            x = self.parent[x]
        return x

    def join(self, a, b):
        self.parent[self.find(a)] = self.find(b)

    def sets(self):
        out = defaultdict(set)
        for x in self.parent:
            out[self.find(x)].add(x)
        return list(out.values())


class BlairWitch:
    """siblings: {program: {addr: siblings}} for nocedit and each build;
    functions: {build: {addr: recreation function record}}; done: {(build, addr)}."""

    def __init__(self, siblings, functions, done):
        self.siblings = siblings
        self.functions = functions
        self.done = done

    @classmethod
    def load(cls, recreation_root):
        programs = [REFERENCE] + [p for _, p in BUILDS]
        siblings = {p: read_siblings(p) for p in programs}
        functions = {b: {f["addr"]: f for f in scaffold.load_buckets(p, "functions")} for b, p in BUILDS}
        return cls(siblings, functions, ported(recreation_root))

    def twin(self, build, addr, other):
        return self.siblings[PROGRAM[build]].get(addr, {}).get(other)

    def variants(self, addr):
        """[(builds, {build: addr}, class)] for the builds whose body differs from nocedit's."""
        own = self.siblings[REFERENCE].get(addr, {})
        differ = {b: own[p] for b, p in BUILDS if p in own and own[p].get("class") not in SAME}
        groups = Groups()
        for b in differ:
            groups.find(b)
            for other in differ:
                found = self.twin(b, differ[b]["addr"], PROGRAM[other])
                if other != b and found and found["addr"] == differ[other]["addr"] and found.get("class") in SAME:
                    groups.join(b, other)
        out = []
        for members in groups.sets():
            builds = sorted(members)
            out.append((builds, {b: differ[b]["addr"] for b in builds}, differ[builds[0]].get("class", "no body")))
        return sorted(out)

    def is_done(self, addrs):
        return any((b, a) in self.done for b, a in addrs.items())

    def variant_counts(self, addrs):
        """(functions with a variant, of those every variant done)."""
        have = [a for a in addrs if self.variants(a)]
        return len(have), sum(1 for a in have if all(self.is_done(v[1]) for v in self.variants(a)))

    def variant_lines(self, addr):
        found = self.variants(addr)
        if not found:
            return []
        parts = ["[%s] %s (%s)" % ("x" if self.is_done(addrs) else " ",
                                   " = ".join("%s 0x%s" % (b, addrs[b]) for b in builds), cls)
                 for builds, addrs, cls in found]
        return ["    - BW: " + "; ".join(parts)]

    def only(self):
        """Each BW-only function once: (tu, [(build, addr)], record, differs between builds, in nocturne)."""
        groups = Groups()
        for build, program in BUILDS:
            for addr, f in self.functions[build].items():
                siblings = self.siblings[program].get(addr, {})
                if REFERENCE in siblings or scaffold.module_of(f["tu"]) in scaffold.SKIPPED_MODULES:
                    continue
                groups.find((build, addr))
                for other, other_program in BUILDS:
                    twin = siblings.get(other_program)
                    if twin and twin["addr"] in self.functions[other]:
                        groups.join((build, addr), (other, twin["addr"]))
        out = []
        for members in groups.sets():
            members = sorted(members)
            # A twin in another build that nocedit has makes this a variant no name has
            # matched yet, not Blair Witch code.
            if any(REFERENCE in self.siblings[PROGRAM[b]].get(a, {}) for b, a in members):
                continue
            build, addr = members[0]
            f = self.functions[build][addr]
            classes = {self.siblings[PROGRAM[b]].get(a, {}).get(PROGRAM[o], {}).get("class")
                       for b, a in members for o, x in members if o != b}
            in_nocturne = any("nocturne.exe" in self.siblings[PROGRAM[b]].get(a, {}) for b, a in members)
            out.append((f["tu"], members, f, bool(classes - SAME), in_nocturne))
        return sorted(out, key=lambda g: (g[0], g[1]))

    def only_lines(self):
        groups = self.only()
        by_tu = defaultdict(list)
        for g in groups:
            by_tu[g[0]].append(g)
        done = sum(1 for g in groups if self.is_done(dict(g[1])))
        lines = ["", "## Blair Witch only", "",
                 "Functions of the Blair Witch builds with no nocedit twin, each listed once with its",
                 "address in every build that has it. A named one is Blair Witch code to extract whole;",
                 "an unnamed one may still be a nocedit function nothing has identified. Marked",
                 "`differs` when the builds' bodies differ from each other, and `in nocturne` when",
                 "the retail game has it too. Sizes are in instructions.",
                 "",
                 "| Unit | Functions | Named | Instructions | Done |", "|---|---|---|---|---|"]
        for tu, members in sorted(by_tu.items()):
            lines.append("| `%s` | %d | %d | %d | %d |" % (
                tu, len(members), sum(1 for g in members if not is_unnamed(g[2])),
                sum(g[2].get("instructions", 0) for g in members),
                sum(1 for g in members if self.is_done(dict(g[1])))))
        lines.append("| **All** | **%d** | **%d** | **%d** | **%d** |" % (
            len(groups), sum(1 for g in groups if not is_unnamed(g[2])),
            sum(g[2].get("instructions", 0) for g in groups), done))
        for tu, members in sorted(by_tu.items()):
            lines += ["", "### `%s`" % tu]
            for _tu, addrs, f, differs, in_nocturne in sorted(members, key=lambda g: (is_unnamed(g[2]), g[1])):
                notes = [n for n, on in (("differs", differs), ("in nocturne", in_nocturne)) if on]
                lines.append("- [%s] %s %s (%d%s)" % (
                    "x" if self.is_done(dict(addrs)) else " ", label(f),
                    ", ".join("%s 0x%s" % m for m in addrs),
                    f.get("instructions", 0), "".join(", " + n for n in notes)))
        return lines


def is_unnamed(f):
    return not f.get("method") or f["method"].startswith("FUN_")


def label(f):
    if is_unnamed(f):
        return "unnamed"
    return "`%s::%s`" % (f["cls"], f["method"]) if f.get("cls") else "`%s`" % f["method"]
