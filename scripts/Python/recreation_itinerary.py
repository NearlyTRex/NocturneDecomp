#!/usr/bin/env python3
"""Plan the order the recreation ports its game code in.

Reads the same export and scope as scaffold_recreation.py and writes the in-scope translation
units, with their classes and functions, as a sequence of steps that follows the game's startup:

  step 0       the math value types every module uses;
  then         each call initializeGameSystems makes, in source order, then enterMainGameMenu
               and finalizeGameSystems, each holding the functions it first reaches;
  last         what startup never reaches, one step per module in layer order.

A function is reached through its calls, the functions its body names (callbacks, jump
targets) and the slots of any vtable it references. A step that reaches more than --split
functions is broken into the calls it makes, in their order, and consecutive steps smaller
than --merge are joined. Each function lands in the first step that reaches it, so a class's
methods arrive as startup needs them; its header already declares them all. Translation units
and functions come leaves first. A function counts as done when the recreation has its
`// nocedit 0x...` line, and as partial when the comment above that line also holds a
`// deferred: <what>, with <what brings it>` or `// unverified: <what>, <how>` item, which may run
on over lines starting `//` and two or more spaces.

Usage: recreation_itinerary.py [--out docs/recreation-itinerary.md] [--split 300] [--merge 25]
"""

import argparse
import collections
import json
import math
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import scaffold_recreation as scaffold  # noqa: E402

ROOT = scaffold.ROOT
SOURCE = os.path.join(scaffold.ANNOTATIONS, "nocedit.exe", "pseudocode", "src")
RETAIL_SOURCE = os.path.join(scaffold.ANNOTATIONS, "nocturne.exe", "pseudocode", "src")
MAPPING = os.path.join(scaffold.ANNOTATIONS, "nocturne.exe", "reports",
                       "sibling_verified_mapping.json")
RECREATION = os.path.join(ROOT, "recreation")
STARTUP = ["00507a60", "00507a50", "00508570"]
INITIALIZE = STARTUP[0]
# displayErrorAndQuit throws in the recreation, and the teardown it ran by hand is destructors,
# so the walk doesn't follow its calls.
THROWS = {"00506f10"}
# Functions whose calls the walk takes from the retail body instead, because the editor build's
# differs: retail's showWarning opens its own modal where nocedit calls the editor's
# drawSingleButtonPrompt, and retail's modal windows skip the editor's screen backups.
RETAIL_BODIES = {
    "0049e6f0",  # CEditorTools::showWarning
    "004a0890",  # CEditorTools::createCenteredModal
    "004a0970",  # CEditorTools::createModalWindow
    "004a0f80",  # CEditorTools::paintCurrentWindow
    "004a0dd0",  # CEditorTools::restoreWindowAndCleanup
    "004a0ea0",  # CEditorTools::popWindowState
}
# Translation units ported as one step, because their halves only test together. A unit takes
# its TUs whole, plus `extra` functions and less `exclude`, and goes in next to the step holding
# `anchor`. An "after" unit claims what it reaches once the walk reaches the anchor; a "before"
# unit claims it ahead of the whole walk, for a leaf everything else stands on.
UNITS = [
    # Lookups, the pods that answer them and the opens they lead to share one state; CDemonPod's
    # load is what mounts them. The pods' checksum tools show dialogs and run on demand, so they
    # come where the game reaches them.
    {"label": "File system: `dosio`, pods",
     "tus": {"engine/dosio.cpp", "engine/pod.cpp", "core/podmain.cpp"},
     "extra": set(),
     "exclude": {"0054f2e0", "0054f3a0", "0054f3e0", "0054f490", "005507f0", "00550230",
                 "00550590", "00551000", "00551280"},
     "anchor": "00543e40", "where": "before"},
    # The device, voices and sample cache share one state, and samples load through the file
    # system. CSound brings only its constructor and destructor; the rest of it plays game sounds.
    {"label": "Sound system: `sndmain`, `CSound` lifetime, `readIniData`",
     "tus": {"sound/sndmain.cpp", "core/inivar.cpp"},
     "extra": {"005b2ce0", "005b2d60"},
     "exclude": set(),
     "anchor": "00401010", "where": "after"},
]
CALL = re.compile(r"FUN_([0-9a-f]{8})")
# Indented for a template defined in its class.
DONE = re.compile(r"^[ \t]*// nocedit 0x([0-9a-f]{8})$")
DEFERRED = re.compile(r"^[ \t]*// ((?:deferred|unverified): .+)$")
CONTINUED = re.compile(r"^[ \t]*//  +(\S.*)$")
COMMENT = re.compile(r"^[ \t]*//")
SOURCE_SUFFIXES = (".c", ".cpp")
MAX_SPLIT_DEPTH = 4


def source_files(source=SOURCE):
    """Address to the raw decompiled body, which keeps the original's call order."""
    files = {}
    for directory, _, names in os.walk(source):
        for name in names:
            if not name.endswith(SOURCE_SUFFIXES) or ".keep." in name or ".chunked." in name:
                continue
            match = CALL.search(name)
            if match:
                files[match.group(1)] = os.path.join(directory, name)
    return files


def deferred_items(lines):
    """Each address line's deferred and unverified items, from the comment block just above it,
    and the line number of each item no address line follows."""
    found = {}
    orphans = []
    block = []
    for number, line in enumerate(lines, 1):
        done = DONE.match(line)
        if done:
            found.setdefault(done.group(1), []).extend(item for _, item in block)
            block = []
            continue
        deferred = DEFERRED.match(line)
        continued = CONTINUED.match(line)
        if deferred:
            block.append((number, deferred.group(1)))
        elif continued and block:
            block[-1] = (block[-1][0], block[-1][1] + " " + continued.group(1))
        elif not COMMENT.match(line):
            orphans += [n for n, _ in block]
            block = []
    return found, orphans + [n for n, _ in block]


def done_addresses():
    """Every ported address, with the items it still defers or hasn't verified. An item that no
    address line follows would go uncounted, so it is fatal."""
    done = {}
    orphans = []
    for directory, _, names in os.walk(RECREATION):
        for name in names:
            if name.endswith((".cpp", ".h")):
                path = os.path.join(directory, name)
                with open(path, encoding="utf-8") as f:
                    found, stray = deferred_items(f.read().splitlines())
                for addr, items in found.items():
                    done.setdefault(addr, []).extend(items)
                orphans += ["%s:%d" % (os.path.relpath(path, ROOT), n) for n in stray]
    if orphans:
        sys.exit("deferred or unverified items with no address line under them:\n  " +
                 "\n  ".join(orphans))
    return done


def percent(done, total):
    # Rounded down, so 100% means every function is done.
    return "%.1f%%" % (math.floor(done * 1000 / total) / 10 if total else 0)


class Step:
    def __init__(self, label, addrs, order):
        self.labels = [label]
        self.addrs = set(addrs)
        self.order = dict(order)

    def absorb(self, other):
        offset = len(self.order)
        self.labels += other.labels
        self.addrs |= other.addrs
        self.order.update({a: offset + i for a, i in other.order.items()})

    @property
    def label(self):
        return ", ".join(self.labels)


class Itinerary:
    def __init__(self, split, merge):
        self.model = scaffold.Model()
        self.split = split
        self.merge = merge
        self.functions = self.model.functions
        self.in_scope = set(self.model.in_scope)
        # What the game runs: in scope, or replaced by a platform interface whose callers still
        # reach game code through it.
        self.walkable = self.in_scope | set(self.model.replaced)
        # What the recreation drops never runs, so the walk doesn't follow its calls either.
        self.dropped = {a for a, f in self.model.replaced.items()
                        if scaffold.boundary_destination(f).startswith("dropped")}
        self.sources = source_files()
        with open(MAPPING, encoding="utf-8") as f:
            pairs = json.load(f)["pairs"]
        retail_sources = source_files(RETAIL_SOURCE)
        self.retail = {p["a"]: retail_sources.get(p["b"]) for p in pairs if p["a"] in RETAIL_BODIES}
        self.from_retail = {p["b"]: p["a"] for p in pairs}
        # What pass 1 leaves to the compiler counts as done: a default constructor or destructor
        # that only returns `this`, a copy constructor or assignment that calls nothing, and an
        # empty static initializer.
        self.generated = {a for a in self.in_scope if self.is_compiler_generated(self.functions[a])}
        ported = done_addresses()
        self.deferred = {a: items for a, items in ported.items() if items}
        self.done = (set(ported) - set(self.deferred)) | self.generated
        self.vtable_slots = collections.defaultdict(set)
        for table in self.model.vtables:
            for slot in table["slots"]:
                self.vtable_slots[table["addr"]].add(slot["addr"])
        self.named = {}
        self.reached = set()
        self.steps = []

    def is_compiler_generated(self, f):
        method = f["method"]
        if f.get("calls"):
            return False
        # A static initializer with nothing to construct is a lone RET.
        if not f.get("cls"):
            return method == "staticInit" and f.get("instructions") == 1
        if scaffold.is_trivial(f) and (re.match(r"^dtor\d*$", method)
                                       or (re.match(r"^ctor\d*$", method) and not f.get("params"))):
            return True
        return f["addr"] in self.model.copy_ctors or scaffold.is_copy_assignment(f)

    def names_in_source(self, addr):
        """The functions a body names, in order: its calls and the callbacks it passes on."""
        if addr not in self.named:
            names = []
            path = self.retail[addr] if addr in RETAIL_BODIES else self.sources.get(addr)
            if path is not None:
                with open(path, encoding="utf-8", errors="replace") as f:
                    found = CALL.findall(f.read())
                if addr in RETAIL_BODIES:
                    found = [self.from_retail.get(callee) for callee in found]
                for callee in found:
                    if callee != addr and callee not in names and callee in self.walkable:
                            names.append(callee)
            self.named[addr] = names
        return self.named[addr]

    def successors(self, addr):
        if addr in THROWS or addr in self.dropped:
            return []
        f = self.functions[addr]
        if addr in RETAIL_BODIES:
            return sorted(self.names_in_source(addr))
        out = set(f.get("calls", [])) | set(self.names_in_source(addr))
        for ref in f.get("data_refs", []):
            out |= self.vtable_slots.get(ref, set())
            if ref in self.functions:
                out.add(ref)
        return sorted(out & self.walkable)

    def closure(self, roots):
        """What roots reach that no step holds yet, with a post-order: callees before callers."""
        seen, order = set(), {}
        stack = [(addr, False) for addr in reversed(roots) if addr in self.walkable]
        while stack:
            addr, expanded = stack.pop()
            if expanded:
                order[addr] = len(order)
                continue
            if addr in seen or addr in self.reached:
                continue
            seen.add(addr)
            stack.append((addr, True))
            stack.extend((nxt, False) for nxt in reversed(self.successors(addr)))
        return seen, order

    def label(self, addr):
        f = self.functions[addr]
        return "`%s::%s`" % (f["cls"], f["method"]) if f.get("cls") else "`%s`" % f["method"]

    def add_step(self, roots, label, depth=0):
        reached, order = self.closure(roots)
        if len(reached & self.in_scope) > self.split and len(roots) == 1 and depth < MAX_SPLIT_DEPTH:
            for callee in self.names_in_source(roots[0]):
                self.add_step([callee], self.label(callee), depth + 1)
            reached, order = self.closure(roots)
        self.record(label, reached, order)

    def record(self, label, reached, order):
        self.reached |= reached
        scoped = reached & self.in_scope
        if scoped:
            self.steps.append(Step(label, scoped, order))

    def build(self):
        math = {a for a in self.in_scope
                if scaffold.MATH_TYPE.match(self.functions[a].get("cls") or "")}
        self.record("Math value types", math, {})
        units = [(unit["label"],
                  {a for a in self.in_scope
                   if (self.functions[a]["tu"] in unit["tus"] or a in unit["extra"])
                   and a not in unit["exclude"]},
                  unit["anchor"], unit["where"])
                 for unit in UNITS]
        for unit in units:
            self.reached |= unit[1]
        placed = [(self.take_unit(label, addrs), anchor, 0)
                  for label, addrs, anchor, where in units if where == "before"]
        pending = [u for u in units if u[3] == "after"]
        for roots in ([[c] for c in self.names_in_source(INITIALIZE)] + [[r] for r in STARTUP]):
            self.add_step(roots, self.label(roots[0]))
            for unit in [u for u in pending if u[2] in self.reached]:
                pending.remove(unit)
                placed.append((self.take_unit(unit[0], unit[1]), unit[2], 1))
        self.merge_small()
        for step, anchor, offset in placed:
            position = next(i + offset for i, s in enumerate(self.steps) if anchor in s.addrs)
            self.steps.insert(position, step)
        self.add_unreached()

    def take_unit(self, label, addrs):
        """The unit and what it reaches that no earlier step holds, claimed as soon as its anchor
        is, so the steps after it don't take its callees."""
        self.reached -= addrs
        reached, order = self.closure(sorted(addrs))
        self.reached |= reached
        return Step(label, reached & self.in_scope, order)

    def merge_small(self):
        """Joins runs of small startup steps, then folds any left alone into the step after."""
        first, rest = self.steps[0], self.steps[1:]
        merged = []
        for step in rest:
            if merged and len(step.addrs) < self.merge and len(merged[-1].addrs) < self.merge:
                merged[-1].absorb(step)
            else:
                merged.append(step)
        folded = []
        carry = None
        for step in merged:
            if carry is not None:
                carry.absorb(step)
                step, carry = carry, None
            if len(step.addrs) < self.merge and step is not merged[-1]:
                carry = step
                continue
            folded.append(step)
        self.steps = [first] + folded

    def add_unreached(self):
        rest = self.in_scope - self.reached
        by_module = collections.defaultdict(list)
        for addr in sorted(rest):
            by_module[scaffold.module_of(self.functions[addr]["tu"])].append(addr)
        for module in sorted(by_module, key=scaffold.module_layer):
            members = set(by_module[module])
            _, order = self.closure(by_module[module])
            parts = self.split_by_tu(members, order)
            for i, part in enumerate(parts):
                suffix = " (part %d of %d)" % (i + 1, len(parts)) if len(parts) > 1 else ""
                self.record("Not reached from startup: `%s/`%s" % (module, suffix), part, order)

    def split_by_tu(self, members, order):
        """Whole translation units, leaves first, gathered into parts of about --split."""
        tus = collections.defaultdict(set)
        for addr in members:
            tus[self.functions[addr]["tu"]].add(addr)
        last = len(order)
        parts, current = [], set()
        for _, addrs in sorted(tus.items(),
                               key=lambda item: (max(order.get(a, last) for a in item[1]), item[0])):
            if current and len(current) + len(addrs) > self.split:
                parts.append(current)
                current = set()
            current |= addrs
        if current:
            parts.append(current)
        return parts

    # --- rendering --------------------------------------------------------------------------

    @staticmethod
    def leaves_first(addrs, order):
        last = len(order)
        return sorted(addrs, key=lambda a: (order.get(a, last), a))

    def tu_groups(self, step):
        tus = collections.defaultdict(set)
        for addr in step.addrs:
            tus[self.functions[addr]["tu"]].add(addr)
        last = len(step.order)
        return sorted(tus.items(),
                      key=lambda item: (max(step.order.get(a, last) for a in item[1]), item[0]))

    def counts(self, addrs):
        instructions = sum(self.functions[a]["instructions"] for a in addrs)
        return (len(addrs), instructions, len(addrs & self.done),
                len(addrs & set(self.deferred)))

    def function_lines(self, addr):
        f = self.functions[addr]
        mark = "x" if addr in self.done else "~" if addr in self.deferred else " "
        note = ", compiler-generated" if addr in self.generated else ""
        lines = ["  - [%s] `%s` 0x%s (%d%s)" % (mark, f["method"], addr, f["instructions"], note)]
        lines += ["    - %s" % item for item in self.deferred.get(addr, [])]
        return lines

    def render(self):
        lines = [
            "# Recreation itinerary",
            "",
            "Generated by `scripts/Python/recreation_itinerary.py`; re-run it rather than editing.",
            "",
            "The order the game code is ported in. After the math value types, each step is a call",
            "startup makes, in the order it makes them, holding the functions that call is the first",
            "to need; then what startup never reaches, by module. Within a step, translation units",
            "and functions come leaves first. A box is ticked when the recreation has the",
            "function's `// nocedit` address line, or when pass 1 left it to the compiler. It is",
            "marked `[~]`, partial, when the function still defers part of the original or has a",
            "path not yet verified against it, and each such item is listed under it. Partial",
            "functions don't count as done. Sizes are in instructions.",
            "",
            "| Step | First needed by | TUs | Functions | Instructions | Done | Partial | % Done |",
            "|---|---|---|---|---|---|---|---|",
        ]
        for i, step in enumerate(self.steps):
            n, instructions, done, partial = self.counts(step.addrs)
            lines.append("| %d | %s | %d | %d | %d | %d | %d | %s |"
                         % (i, step.label, len(self.tu_groups(step)), n, instructions, done,
                            partial, percent(done, n)))
        n, instructions, done, partial = self.counts(self.in_scope)
        lines.append("| | **All** | | **%d** | **%d** | **%d** | **%d** | **%s** |"
                     % (n, instructions, done, partial, percent(done, n)))
        for i, step in enumerate(self.steps):
            lines += ["", "## Step %d: %s" % (i, step.label)]
            for tu, addrs in self.tu_groups(step):
                n, instructions, done, partial = self.counts(addrs)
                lines += ["", "### `%s` (%d functions, %d instructions, %d done, %d partial)"
                          % (tu, n, instructions, done, partial)]
                by_class = collections.defaultdict(list)
                for addr in self.leaves_first(addrs, step.order):
                    by_class[self.functions[addr].get("cls") or ""].append(addr)
                for cls, members in by_class.items():
                    lines.append("- %s" % ("class `%s`" % cls if cls else "free functions"))
                    for addr in members:
                        lines += self.function_lines(addr)
        stray = sorted(set(self.deferred) - self.in_scope)
        if stray:
            lines += ["", "## Partial outside the itinerary", ""]
            for addr in stray:
                lines += ["- 0x%s" % addr] + ["  - %s" % item for item in self.deferred[addr]]
        return "\n".join(lines) + "\n"


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--out", default=os.path.join(ROOT, "docs", "recreation-itinerary.md"))
    parser.add_argument("--split", type=int, default=300,
                        help="break a step reaching more functions than this into its calls")
    parser.add_argument("--merge", type=int, default=25,
                        help="join consecutive steps smaller than this")
    args = parser.parse_args()
    itinerary = Itinerary(args.split, args.merge)
    itinerary.build()
    with open(args.out, "w", encoding="utf-8") as f:
        f.write(itinerary.render())
    print("wrote %s: %d steps" % (os.path.relpath(args.out, ROOT), len(itinerary.steps)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
