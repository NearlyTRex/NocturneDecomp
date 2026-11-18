#!/usr/bin/env python3
"""Recover the class hierarchy of every class with a vtable, from the code that installs it.

actor_class_tree.py reads the actor tree off the registerActorClass calls, but
only actors register; the sound devices, codecs, pods and puzzles do not, and
any check on their vtables needs their parents too. Every class with virtuals
installs its table in its constructors and destructors, so the code states the
tree for all of them:

  * a constructor calls its base's constructor, which installs the base's
    table, and then installs its own; a destructor installs its own first and
    calls its base's destructor last
  * a member's constructor is called the same way, but with `this` plus an
    offset (`add eax, 0x158` or `lea eax, [ebx + 0x158]` just before the call),
    so a call set up like that is not a base
  * a base's table is a prefix of its derived table's slots, so a real base
    shares at least one slot with it that holds the same unfolded function; a
    member's table, an unrelated class, shares none (a member that is itself an
    actor shares CDemonActor's slots, which is why the call setup is checked too)
  * an inlined chain installs every table in turn; the most derived one extends
    all the others, and the rest nest by length

Ghidra makes no reference for `mov [reg + n], imm32`, so the tables are found
by disassembling each function and reading the immediates.

A table's class is its label (`g_C<Name>VTable`) where it has one, else the
class of the functions that install it, else nothing: the class of the
functions *in* a table is no guide, since most slots are inherited.

Scored on the registered actors, every parent found agreed with
registerActorClass: nocedit 107/107, bw1 122/122, bw3 130/130 and blairwitch2
122 of 123. The one exception is a report finding, not a miss: blairwitch2's
CHero_ctor installs a 58-slot table extending CDemonActor, while the registered
CHero sits under the 83-slot CCharacter.

Usage:
    vtable_class_tree.py bw1.exe
    vtable_class_tree.py bw1.exe --out-json h.json --out-txt h.txt

Writes annotations/<program>/reports/class_hierarchy.{json,txt} by default.

#@author NearlyTRex
#@category Annotations
"""

import argparse
import json
import os
import re
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import actor_class_tree as act
import sibling_match as sm
import verify_sibling_signatures as vss
import watcom_type_info as wti
from map_vtable_slots import load_labels

_IMM_RE = re.compile(r"0x([0-9a-f]{6,8})\b")
# `lea eax, [ebx + 0x158]`, not a stack slot
_MEMBER_LEA_RE = re.compile(r"^\w+, \[(?!esp|ebp)\w+ \+ 0x[0-9a-f]+\]$")
# `add eax, 0x158`, not a stack adjustment
_MEMBER_ADD_RE = re.compile(r"^(?!esp)\w+, 0x[0-9a-f]+$")
# How far before a call to look for `this` being offset into a member
MEMBER_SETUP = 3
_CLASS_RE = re.compile(r"(?:^|_)(C[A-Z][A-Za-z0-9]*?)_(?:[a-z~]\w*)_FUN_")


def table_slots(img):
    """vtable address -> its slots' function addresses."""
    return {(t.get("addr") or "").lower(): [(e.get("func_addr") or "").lower()
                                            for e in t.get("functions", [])]
            for t in img.vtables if t.get("addr")}


def member_call(insns, idx):
    """Is the call at insns[idx] handed `this` plus an offset, i.e. a member's?"""
    for _, mnem, ops in insns[max(0, idx - MEMBER_SETUP):idx]:
        if (mnem == "lea" and _MEMBER_LEA_RE.match(ops)) or (mnem == "add" and _MEMBER_ADD_RE.match(ops)):
            return True
    return False


def install_events(insns, tables):
    """[("store", table) | ("call", callee)] in code order, for one function.

    A table counts wherever its address is an immediate of a mov, push or lea;
    a call whose `this` is offset into a member is left out.
    """
    out = []
    for idx, (_, mnem, ops) in enumerate(insns):
        if mnem in ("mov", "push", "lea"):
            for m in _IMM_RE.finditer(ops):
                addr = "%08x" % int(m.group(1), 16)
                if addr in tables:
                    out.append(("store", addr))
        elif mnem == "call" and re.fullmatch(r"0x[0-9a-f]+", ops) and not member_call(insns, idx):
            out.append(("call", "%08x" % int(ops, 16)))
    return out


def folded_functions(slots):
    """Functions filling more than one slot of some table: stubs the linker merged."""
    return {x for s in slots.values() for x in s if x and s.count(x) > 1}


def extends(slots, folded, t, p):
    """Can p be t's base? Its table is no longer and shares an unfolded slot with t's."""
    st, sp = slots[t], slots[p]
    if len(sp) > len(st):
        return False
    return any(a and a == b and a not in folded for a, b in zip(sp, st))


def infer_parents(events, slots):
    """table -> (parent table, votes, how) from every function that installs a table.

    `how` names the evidence: a constructor's base call, a destructor's, or an
    inlined chain. A parent needs a strict majority of its table's votes.
    """
    folded = folded_functions(slots)
    installs = defaultdict(set)
    for f, ev in events.items():
        for kind, value in ev:
            if kind == "store":
                installs[f].add(value)

    votes = defaultdict(Counter)
    how = defaultdict(Counter)
    for f, ev in events.items():
        own = list(dict.fromkeys(v for k, v in ev if k == "store"))
        if not own:
            continue
        if len(own) > 1:
            derived = [t for t in own if all(t == p or extends(slots, folded, t, p) for p in own)]
            if len(derived) != 1:
                continue
            chain = [derived[0]] + sorted((p for p in own if p != derived[0]), key=lambda p: -len(slots[p]))
            for child, par in zip(chain, chain[1:]):
                if extends(slots, folded, child, par):
                    votes[child][par] += 1
                    how[child]["inlined"] += 1
            continue
        t = own[0]
        first = next(i for i, (k, _) in enumerate(ev) if k == "store")
        calls = [(i, v) for i, (k, v) in enumerate(ev) if k == "call" and installs.get(v) and t not in installs[v]]
        before = [v for i, v in calls if i < first]
        after = [v for i, v in calls if i > first]
        for label, group in (("constructor", reversed(before)), ("destructor", reversed(after))):
            cands = [p for c in group for p in sorted(installs[c]) if extends(slots, folded, t, p)]
            if cands:
                votes[t][cands[0]] += 1
                how[t][label] += 1
                break

    out = {}
    for t, c in votes.items():
        (p, n), = c.most_common(1)
        if 2 * n > sum(c.values()):
            out[t] = (p, n, dict(how[t]))
    return out


def classes_of(img, slots, installers, labels):
    """table -> (class, source): its label, else the class of the functions installing it."""
    out = {}
    for t in slots:
        name = labels.get(t) or ""
        if name.startswith("g_C") and name.endswith("VTable"):
            out[t] = (name[2:-6], "label")
            continue
        c = Counter(m.group(1) for f in installers.get(t, ())
                    for m in [_CLASS_RE.search((img.by_addr.get(f) or {}).get("name") or "")] if m)
        if c:
            cls, n = c.most_common(1)[0]
            if 2 * n > sum(c.values()):
                out[t] = (cls, "installer")
    return out


def check_actor(tree, cls, parent_cls):
    """The registerActorClass verdict on one edge: agree, disagree, or None for a non-actor."""
    ntree = {wti.type_name(k): wti.type_name(v) if v else v for k, v in tree.items()}
    key = wti.type_name(cls) if cls else None
    if key not in ntree:
        return None
    return "agree" if ntree[key] == (wti.type_name(parent_cls) if parent_cls else None) else "disagree"


def analyse(program):
    img = sm.Image(program)
    slots = table_slots(img)
    cache = {}
    events = {}
    for f in img.by_addr:
        ev = install_events(vss._function_insns(img, cache, f), slots)
        if any(k == "store" for k, _ in ev):
            events[f] = ev
    installers = defaultdict(set)
    for f, ev in events.items():
        for kind, value in ev:
            if kind == "store":
                installers[value].add(f)
    parents = infer_parents(events, slots)
    classes = classes_of(img, slots, installers, load_labels(program))
    tree, _ = act.load(program)

    rows = []
    for t in sorted(slots):
        cls, source = classes.get(t, (None, None))
        p, votes, how = parents.get(t, (None, 0, {}))
        pcls = classes.get(p, (None, None))[0] if p else None
        rows.append({"table": t, "class": cls, "class_source": source, "slots": len(slots[t]),
                     "parent": p, "parent_class": pcls, "votes": votes, "evidence": how,
                     "installers": sorted(installers.get(t, ())),
                     "actor_tree": check_actor(tree, cls, pcls) if p else None,
                     "registered_parent": tree.get(cls) if cls in tree else None})
    return {"program": program, "tables": rows}


def tally(report):
    rows = report["tables"]
    return {"tables": len(rows),
            "installed": sum(1 for r in rows if r["installers"]),
            "classed": sum(1 for r in rows if r["class"]),
            "with_parent": sum(1 for r in rows if r["parent"]),
            "actor_agree": sum(1 for r in rows if r["actor_tree"] == "agree"),
            "actor_disagree": sum(1 for r in rows if r["actor_tree"] == "disagree")}


def render_tree(report):
    """The recovered tree as indented text, with disagreements and unplaced tables listed."""
    rows = {r["table"]: r for r in report["tables"]}
    children = defaultdict(list)
    for r in rows.values():
        if r["parent"]:
            children[r["parent"]].append(r["table"])

    def label(t):
        r = rows[t]
        return "%s  %s  (%d slots)" % (r["class"] or "?", t, r["slots"])

    lines = ["Class hierarchy from vtable installs: %s" % report["program"], ""]
    for k, v in tally(report).items():
        lines.append("  %-15s %d" % (k, v))
    lines.append("")

    # Each table has one parent and the walk starts at parentless tables, so it never meets a
    # table twice; a parent cycle has no root and is not printed.
    def walk(t, depth):
        lines.append("  " * depth + label(t))
        for c in sorted(children[t], key=lambda x: (rows[x]["class"] or "~", x)):
            walk(c, depth + 1)

    roots = [t for t in rows if children[t] and not rows[t]["parent"]]
    for t in sorted(roots, key=lambda x: (rows[x]["class"] or "~", x)):
        walk(t, 0)

    bad = [r for r in rows.values() if r["actor_tree"] == "disagree"]
    if bad:
        lines += ["", "Disagreements with registerActorClass:"]
        for r in bad:
            lines.append("  %s %s: installed over %s (%s), registered under %s"
                         % (r["class"], r["table"], r["parent_class"], r["parent"], r["registered_parent"]))
    return "\n".join(lines) + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("program")
    ap.add_argument("--out-json")
    ap.add_argument("--out-txt")
    args = ap.parse_args(argv)

    report = analyse(args.program)
    reports = os.path.join(sm.ANNOTATIONS, args.program, "reports")
    out_json = args.out_json or os.path.join(reports, "class_hierarchy.json")
    out_txt = args.out_txt or os.path.join(reports, "class_hierarchy.txt")
    os.makedirs(os.path.dirname(os.path.abspath(out_json)), exist_ok=True)
    os.makedirs(os.path.dirname(os.path.abspath(out_txt)), exist_ok=True)
    with open(out_json, "w", encoding="utf-8") as fh:
        json.dump(report, fh, indent=1)
    text = render_tree(report)
    with open(out_txt, "w", encoding="utf-8") as fh:
        fh.write(text)
    print("".join(text.splitlines(True)[:9]), end="")
    print("wrote %s and %s" % (out_json, out_txt))


if __name__ == "__main__":
    main()
