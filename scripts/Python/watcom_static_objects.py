#!/usr/bin/env python3
"""Type and name the static objects Watcom registers for destruction.

Each unit's staticInit constructs its file-scope objects, then registers each
one for destruction at exit by pushing a node to the registrar:

    WatcomDestructorCall        {4, dtor, &object}          DGROUP
    WatcomStaticDestructorNode  {next, &call, 1, &object}   DGROUP

The object is a global of the dtor's class: the class whose record has the dtor
in its dtor slot, or the one a `<C>_dtor` name gives. An array destructor

    push <type_info>; push <N>; mov edx, [esp+0xc]; push edx; call __arrfini

makes it an array of N, and the wrapper is named `<C>_arrdtor<N>` with the dtor
prototype. Any other DGROUP dword holding the object's address is a pointer
global to it (g_CGamePtr).

Names come from the sibling. Objects are paired in address order where the
registering unit, or failing that the whole program, has as many objects of
that class and extent as the sibling. Unpaired, a class with one object here
gets g_<C>Instance and g_<C>Ptr. A sibling name ending in an address is not
copied, and a label set by hand is kept.

Usage:
    watcom_static_objects.py bw1.exe                       # report
    watcom_static_objects.py bw1.exe --apply --project projects NocturneEdit
"""

import argparse
import bisect
import itertools
import os
import re
import struct
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import actor_classes as ac
import sibling_match as sm
import watcom_type_info as wti
from thunk_names import name_thunks

CALL_TYPE = "WatcomDestructorCall"
NODE_TYPE = "WatcomStaticDestructorNode"
DATA_SECTION = "DGROUP"
CALL_FLAGS = 4
NODE_KIND = 1
CALL_WORDS = 3
NODE_WORDS = 4
# Ghidra's default labels and anything else tied to one binary's addresses
ADDRESS_BOUND = re.compile(r"^DAT_|_[0-9a-f]{8}$")
DTOR_NAME = re.compile(r"^(\w+)_dtor$")
IMMEDIATE = re.compile(r"^(0x[0-9a-f]+|\d+)$")
PUSH_IMM32 = b"\x68"
CALL_REL32 = b"\xe8"
ARRAY_DTOR_SHAPE = 5


def data_words(image):
    """address -> dword at every byte of the initialised data; Watcom packs some nodes unaligned."""
    words = {}
    for s in image.sections:
        if s.name != DATA_SECTION:
            continue
        end = min(s.raw_size, len(image.data) - s.raw_off)
        for o in range(0, end - 3):
            words[s.va + o] = struct.unpack_from("<I", image.data, s.raw_off + o)[0]
    return words


def destructor_calls(words, funcs):
    """call address -> (dtor, object)."""
    return {va: (words[va + 4], words[va + 8]) for va, w in words.items()
            if w == CALL_FLAGS and "%08x" % words.get(va + 4, 0) in funcs and words.get(va + 8)}


def destructor_nodes(words, calls):
    """node address -> its call, for nodes naming the same object as their call."""
    return {va: words[va + 4] for va in words
            if words.get(va + 4) in calls and words.get(va + 8) == NODE_KIND
            and words.get(va + 12) == calls[words[va + 4]][1]}


def offset_va(image, off):
    """File offset -> virtual address, or None outside the sections' data."""
    for s in image.sections:
        if s.raw_off <= off < s.raw_off + s.raw_size:
            return s.va + off - s.raw_off
    return None


def registering_functions(image, nodes):
    """node -> the function that pushes it and then calls (its unit's staticInit)."""
    starts = sorted(int(a, 16) for a in image.by_addr)
    out = {}
    for node in nodes:
        pattern = PUSH_IMM32 + struct.pack("<I", node)
        i = image.data.find(pattern)
        while i != -1 and node not in out:
            va = offset_va(image, i)
            at = bisect.bisect_right(starts, va) - 1 if va is not None else -1
            if image.data[i + 5:i + 6] == CALL_REL32 and at >= 0:
                out[node] = "%08x" % starts[at]
            i = image.data.find(pattern, i + 1)
    return out


def array_extent(image, addr):
    """(type_info, N) where `addr` is an __arrfini wrapper, else None."""
    off = image.va2off(int(addr, 16))
    if off is None:
        return None
    shape = [(i.mnemonic, i.op_str) for i in
             itertools.islice(sm._MD.disasm(image.data[off:off + 32], int(addr, 16)), ARRAY_DTOR_SHAPE)]
    if (len(shape) == ARRAY_DTOR_SHAPE and shape[0][0] == shape[1][0] == "push"
            and IMMEDIATE.match(shape[0][1]) and IMMEDIATE.match(shape[1][1])
            and shape[2] == ("mov", "edx, dword ptr [esp + 0xc]") and shape[3] == ("push", "edx")
            and shape[4][0] == "call"):
        return "%08x" % int(shape[0][1], 0), int(shape[1][1], 0)
    return None


def object_class(image, dtor, slot_classes, records):
    """(class, extent) of the object `dtor` destroys; extent is None for a single object."""
    extent = array_extent(image, dtor)
    if extent is not None:
        rec = records.get(extent[0])
        return (rec["type"], extent[1]) if rec else (None, None)
    classes = slot_classes.get(dtor, set())
    if len(classes) == 1:
        return next(iter(classes)), None
    core = sm.split_qualified_name(image.by_addr[dtor]["name"])[1]
    m = DTOR_NAME.match(core or "")
    return (m.group(1), None) if m else (None, None)


def static_objects(image, records):
    """One row per registered object, in address order."""
    words = data_words(image)
    calls = destructor_calls(words, image.by_addr)
    nodes = destructor_nodes(words, calls)
    registered = registering_functions(image, nodes)
    by_addr = {r["addr"]: r for r in records}
    slot_classes = defaultdict(set)
    for r in records:
        slot_classes["%08x" % int(r["dtor"], 16)].add(r["type"])
    inside = {va + i for va in calls for i in range(4 * CALL_WORDS)}
    inside |= {va + i for va in nodes for i in range(4 * NODE_WORDS)}
    rows = {}
    for node, call in nodes.items():
        dtor, obj = "%08x" % calls[call][0], calls[call][1]
        cls, extent = object_class(image, dtor, slot_classes, by_addr)
        func = registered.get(node)
        unit = sm.split_qualified_name(image.by_addr[func]["name"])[0] if func else None
        rows[obj] = {"addr": "%08x" % obj, "node": "%08x" % node, "call": "%08x" % call, "dtor": dtor,
                     "class": cls, "extent": extent, "unit": unit, "ptrs": []}
    for va, w in sorted(words.items()):
        if w in rows and not inside.intersection(range(va, va + 4)):
            rows[w]["ptrs"].append("%08x" % va)
    return [rows[obj] for obj in sorted(rows)]


def pair_objects(objs, sib_objs):
    """object -> sibling object, in address order within equal-sized groups."""
    out = {}
    for by_unit in (True, False):
        groups = [defaultdict(list), defaultdict(list)]
        for side, items in zip(groups, (objs, sib_objs)):
            for o in items:
                if o["class"]:
                    side[(o["unit"] if by_unit else None, o["class"], o["extent"])].append(o)
        mine, theirs = groups
        for k, members in mine.items():
            other = theirs.get(k, [])
            if len(other) == len(members):
                for m, s in zip(members, other):
                    out.setdefault(m["addr"], s)
    return out


def unit_conflicts(objs, sib_objs):
    """unit -> the sibling unit holding all its arrays, where its namesake holds none.

    A staticInit registers its own unit's objects, so a unit whose arrays all
    live in one other unit of the sibling is misnamed. Only an array whose
    (class, extent) occurs once in each build counts: one wrapper can serve
    arrays in two units.
    """
    def arrays(items):
        found = [(o["unit"], (o["class"], o["extent"])) for o in items
                 if o["unit"] and o["class"] and o["extent"] is not None]
        once = {a for a, n in Counter(a for _, a in found).items() if n == 1}
        out = defaultdict(set)
        for unit, a in found:
            if a in once:
                out[unit].add(a)
        return out
    mine, theirs = arrays(objs), arrays(sib_objs)
    home = {a: u for u, held in theirs.items() for a in held}
    out = {}
    for unit, held in mine.items():
        if sm.is_placeholder_unit(unit) or held & theirs.get(unit, set()):
            continue
        others = {home.get(a) for a in held}
        if len(others) == 1 and None not in others:
            out[unit] = others.pop()
    return out


def transferable(name):
    return bool(name) and not ADDRESS_BOUND.search(name)


def plan_data(objs, paired, sib_labels):
    """Rows of {addr, name, type, extent, pointer} for the objects, their pointers, calls and nodes."""
    counts = Counter(o["class"] for o in objs if o["class"])
    rows = []
    for o in objs:
        s = paired.get(o["addr"])
        cls = o["class"]
        single = bool(cls) and counts[cls] == 1 and o["extent"] is None

        def borrowed(addr):
            name = sib_labels.get(addr)
            return name if transferable(name) else None
        name = borrowed(s["addr"]) if s else None
        rows.append({"addr": o["addr"], "name": name or ("g_%sInstance" % cls if single else None),
                     "type": cls, "extent": o["extent"], "pointer": False})
        sib_ptrs = s["ptrs"] if s and len(s["ptrs"]) == len(o["ptrs"]) else [None] * len(o["ptrs"])
        for p, sp in zip(o["ptrs"], sib_ptrs):
            name = borrowed(sp) if sp else None
            fallback = "g_%sPtr" % cls if single and len(o["ptrs"]) == 1 else None
            rows.append({"addr": p, "name": name or fallback, "type": cls, "extent": None, "pointer": True})
        for part, type_name in (("call", CALL_TYPE), ("node", NODE_TYPE)):
            rows.append({"addr": o[part], "name": borrowed(s[part]) if s else None,
                         "type": type_name, "extent": None, "pointer": False})
    return rows


def plan_functions(image, objs, conflicts):
    """Array destructors to name `<C>_arrdtor<N>`, as {addr, class, want}.

    An unnamed wrapper takes the unit of the staticInit registering its array,
    unless that unit is in `conflicts`.
    """
    out = {}
    for o in objs:
        if o["class"] and o["extent"] is not None and o["dtor"] not in out:
            kind = "arrdtor%d" % o["extent"]
            unit = None if o["unit"] in conflicts else o["unit"]
            want = ac.method_name(image.by_addr[o["dtor"]]["name"], unit, o["class"], kind, o["dtor"])
            out[o["dtor"]] = {"addr": o["dtor"], "class": o["class"], "want": want}
    return [out[a] for a in sorted(out)]


def labels_of(program):
    return {s["addr"]: s["name"] for s in sm._load_buckets(program, "symbols_label") if s.get("addr")}


def analyse(program, sibling="nocedit.exe"):
    image = sm.Image(program)
    objs = static_objects(image, wti.analyse(program, sibling)["records"])
    paired, sib_labels, conflicts = {}, {}, {}
    if sibling:
        sib_objs = static_objects(sm.Image(sibling), wti.analyse(sibling, "")["records"])
        paired = pair_objects(objs, sib_objs)
        sib_labels = labels_of(sibling)
        conflicts = unit_conflicts(objs, sib_objs)
    return {"program": program, "sibling": sibling, "objects": objs, "paired": len(paired),
            "conflicts": conflicts, "data": plan_data(objs, paired, sib_labels),
            "functions": plan_functions(image, objs, conflicts)}


def print_report(report, show):
    objs = report["objects"]
    print("%s: %d static objects, %d classed, %d paired with %s, %d pointer globals"
          % (report["program"], len(objs), sum(1 for o in objs if o["class"]), report["paired"],
             report["sibling"] or "no sibling", sum(len(o["ptrs"]) for o in objs)))
    named = [r for r in report["data"] if r["name"]]
    print("  names: %d   array destructors: %d" % (len(named), len(report["functions"])))
    for r in named[:show]:
        shown = r["type"] + ("[%d]" % r["extent"] if r["extent"] else "") + ("*" if r["pointer"] else "")
        print("    %s  %-36s %s" % (r["addr"], r["name"], shown))
    for o in [o for o in objs if not o["class"]][:show]:
        print("    unclassed %s  dtor %s" % (o["addr"], o["dtor"]))
    for unit, other in sorted(report["conflicts"].items()):
        print("  unit %s registers the objects %s has in %s" % (unit, report["sibling"], other))


def data_type(dtm, row):
    """The Ghidra type a data row stands for, or None where the class is missing."""
    from ghidra.program.model.data import ArrayDataType, PointerDataType
    base = ac.resolve(dtm, row["type"]) if row["type"] else None
    if base is None:
        return None
    if row["pointer"]:
        return PointerDataType(base)
    if row["extent"] is not None:
        return ArrayDataType(base, row["extent"], base.getLength())
    return base


def apply_to_program(program, report):
    from ghidra.program.model.symbol import SourceType
    dtm = program.getDataTypeManager()
    space = program.getAddressFactory().getDefaultAddressSpace()
    listing, symbols, memory = program.getListing(), program.getSymbolTable(), program.getMemory()
    fm = program.getFunctionManager()
    done = Counter()
    tx = program.startTransaction("Watcom static objects")
    ok = False
    try:
        for f in report["functions"]:
            func = fm.getFunctionAt(space.getAddress(int(f["addr"], 16)))
            if func is None or f["want"] is None:
                continue
            ret, params = ac.PROTOTYPES["dtor"]
            if ac.set_prototype(program, func, ret, params, f["class"]):
                func.setName(f["want"], SourceType.USER_DEFINED)
                done["array destructors named"] += 1
        for row in report["data"]:
            at = space.getAddress(int(row["addr"], 16))
            dt = data_type(dtm, row)
            if dt is None:
                done["untyped"] += 1
            elif not memory.contains(at, at.add(dt.getLength() - 1)):
                # Ghidra maps .bss only as far as the file's size (add_runtime_heap_block.py)
                done["outside memory"] += 1
            else:
                listing.clearCodeUnits(at, at.add(dt.getLength() - 1), False)
                listing.createData(at, dt)
                done["typed"] += 1
            primary = symbols.getPrimarySymbol(at)
            if row["name"] and (primary is None or primary.getSource() != SourceType.USER_DEFINED):
                symbols.createLabel(at, row["name"], SourceType.USER_DEFINED).setPrimary()
                done["labelled"] += 1
        done["thunks"] = len(name_thunks(program))
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return dict(done)


def apply(report, project_dir, project_name):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    with pyghidra.program_context(project, "/" + report["program"]) as program:
        from ghidra.util.task import ConsoleTaskMonitor
        done = apply_to_program(program, report)
        print("  " + "  ".join("%s=%d" % kv for kv in sorted(done.items())))
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    project.close()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("program")
    ap.add_argument("--sibling", default="nocedit.exe")
    ap.add_argument("--show", type=int, default=20)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--project", nargs=2, metavar=("DIR", "NAME"))
    args = ap.parse_args()
    if args.apply and not args.project:
        ap.error("--apply needs --project DIR NAME")
    report = analyse(args.program, args.sibling)
    print_report(report, args.show)
    if args.apply:
        apply(report, *args.project)


if __name__ == "__main__":
    main()
