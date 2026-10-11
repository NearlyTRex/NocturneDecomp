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
`// nocedit 0x...` line.

Usage: recreation_itinerary.py [--out docs/recreation-itinerary.md] [--split 300] [--merge 25]
"""

import argparse
import collections
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import scaffold_recreation as scaffold  # noqa: E402

ROOT = scaffold.ROOT
SOURCE = os.path.join(scaffold.ANNOTATIONS, "nocedit.exe", "pseudocode", "src")
RECREATION = os.path.join(ROOT, "recreation")
STARTUP = ["00507a60", "00507a50", "00508570"]
INITIALIZE = STARTUP[0]
CALL = re.compile(r"FUN_([0-9a-f]{8})")
DONE = re.compile(r"^// nocedit 0x([0-9a-f]{8})$", re.MULTILINE)
SOURCE_SUFFIXES = (".c", ".cpp")
MAX_SPLIT_DEPTH = 4


def source_files():
    """Address to the raw decompiled body, which keeps the original's call order."""
    files = {}
    for directory, _, names in os.walk(SOURCE):
        for name in names:
            if not name.endswith(SOURCE_SUFFIXES) or ".keep." in name or ".chunked." in name:
                continue
            match = CALL.search(name)
            if match:
                files[match.group(1)] = os.path.join(directory, name)
    return files


def done_addresses():
    done = set()
    for directory, _, names in os.walk(RECREATION):
        for name in names:
            if name.endswith(".cpp"):
                with open(os.path.join(directory, name), encoding="utf-8") as f:
                    done.update(DONE.findall(f.read()))
    return done


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
        self.sources = source_files()
        # What pass 1 leaves to the compiler counts as done: a default constructor or destructor
        # that only returns `this`, and a copy constructor or assignment that calls nothing.
        self.generated = {a for a in self.in_scope if self.is_compiler_generated(self.functions[a])}
        self.done = done_addresses() | self.generated
        self.vtable_slots = collections.defaultdict(set)
        for table in self.model.vtables:
            for slot in table["slots"]:
                self.vtable_slots[table["addr"]].add(slot["addr"])
        self.named = {}
        self.reached = set()
        self.steps = []

    def is_compiler_generated(self, f):
        method = f["method"]
        if not f.get("cls") or f.get("calls"):
            return False
        if scaffold.is_trivial(f) and (re.match(r"^dtor\d*$", method)
                                       or (re.match(r"^ctor\d*$", method) and not f.get("params"))):
            return True
        return f["addr"] in self.model.copy_ctors or scaffold.is_copy_assignment(f)

    def names_in_source(self, addr):
        """The functions a body names, in order: its calls and the callbacks it passes on."""
        if addr not in self.named:
            names = []
            path = self.sources.get(addr)
            if path is not None:
                with open(path, encoding="utf-8", errors="replace") as f:
                    for callee in CALL.findall(f.read()):
                        if callee != addr and callee not in names and callee in self.walkable:
                            names.append(callee)
            self.named[addr] = names
        return self.named[addr]

    def successors(self, addr):
        f = self.functions[addr]
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
        for callee in self.names_in_source(INITIALIZE):
            self.add_step([callee], self.label(callee))
        for root in STARTUP:
            self.add_step([root], self.label(root))
        self.merge_small()
        self.add_unreached()

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
        return len(addrs), instructions, len(addrs & self.done)

    def function_line(self, addr):
        f = self.functions[addr]
        mark = "x" if addr in self.done else " "
        note = ", compiler-generated" if addr in self.generated else ""
        return "  - [%s] `%s` 0x%s (%d%s)" % (mark, f["method"], addr, f["instructions"], note)

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
            "function's `// nocedit` address line, or when pass 1 left it to the compiler. Sizes are",
            "in instructions.",
            "",
            "| Step | First needed by | TUs | Functions | Instructions | Done |",
            "|---|---|---|---|---|---|",
        ]
        for i, step in enumerate(self.steps):
            n, instructions, done = self.counts(step.addrs)
            lines.append("| %d | %s | %d | %d | %d | %d |"
                         % (i, step.label, len(self.tu_groups(step)), n, instructions, done))
        n, instructions, done = self.counts(self.in_scope)
        lines.append("| | **All** | | **%d** | **%d** | **%d** |" % (n, instructions, done))
        for i, step in enumerate(self.steps):
            lines += ["", "## Step %d: %s" % (i, step.label)]
            for tu, addrs in self.tu_groups(step):
                n, instructions, done = self.counts(addrs)
                lines += ["", "### `%s` (%d functions, %d instructions, %d done)"
                          % (tu, n, instructions, done)]
                by_class = collections.defaultdict(list)
                for addr in self.leaves_first(addrs, step.order):
                    by_class[self.functions[addr].get("cls") or ""].append(addr)
                for cls, members in by_class.items():
                    lines.append("- %s" % ("class `%s`" % cls if cls else "free functions"))
                    lines += [self.function_line(a) for a in members]
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
