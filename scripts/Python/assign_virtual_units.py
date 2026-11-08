#!/usr/bin/env python3
"""Give every function still without a unit the best unit its position allows.

What is known about a program's units comes in islands: functions named
through the sibling mapping, `staticInit`s proven by the init table, functions
whose own asserts name their file (see watcom_static_init.py). A unit's code is
one unbroken run, so the islands constrain everything between them, and this
script writes that down for each placeholder function:

  pin        its own __FILE__ assert names the unit
  strings    the string literals it reads sit inside one unit's (string_verdicts)
  mapping    its sibling pair, at any confidence, names a unit that fits
             where it sits (fits, accept)
  bracket    the nearest evidence on both sides is the same unit
  crt        it lies past the CRT line, so it is runtime code
  crt island it lies between two pieces of CRT evidence, so it is runtime code
  unit start it lies after an init-table entry whose unit is not known, with no
             evidence since: that entry began a unit (see watcom_static_init),
             so the run gets one virtual unit of its own (run_unit)
  between    the nearest evidence on each side differs, so it belongs to one of
             them or to a unit nothing has surfaced yet. It gets a virtual unit
             named for where it sits in link order, so the units it could be are
             the ones that sort between its neighbours.

Virtual units are 8.3, as every file the builds name is, bar two bw3 asserts.
Their folder says what kind of guess each is, and the file is the best guess
at the name:

  core/confzomb.cpp      a run holding one CDemonActor kind, named by era_stem as
                         its authors named files (CConfederateZombie). Not a
                         placeholder: all 112 of nocedit's live in core/, so
                         only the file name is a guess
  unkclass/simppart.cpp  the same, for any other class: CSimpleParticleSystem
  unkaddr/0059e0f0.cpp   a run holding no one class, or a gap before any
                         evidence, by its first address
  unkafter/special.cpp   a gap after a known unit, by that unit

The CRT line is the first CRT function after the last piece of game evidence.
Watcom links the runtime after every game object, so nothing past it is game
code, and everything there that is still unnamed becomes `crt_unknown.c`, the
catch-all nocturne already uses.

Both kinds of placeholder unit are only positions. They are never evidence for
any later analysis, and every tool that names functions replaces them freely
(sibling_match.is_placeholder_unit), so running this changes no decision the
mapping or the init table makes; it only makes sure each export files every
function somewhere.

Usage:
    assign_virtual_units.py bw1.exe                      # report
    assign_virtual_units.py bw1.exe --apply --project projects NocturneEdit
"""

import argparse
import bisect
import json
import os
import re
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm
import watcom_static_init as wsi
import watcom_type_info as wti

STEM_LIMIT = 8
VOWELS = frozenset("aeiou")
# A class named for what it serves lives in that thing's file: CClothList in
# cloth.cpp, CLevelLoader in level.cpp, CBaronWeapon in baron.cpp.
HELPER_WORDS = frozenset((
    "list", "item", "loader", "model", "decoder", "cache", "dest", "weapon", "property",
    "set", "controller", "manager", "effect", "placeholder", "instance", "entry", "info"))


def is_crt(unit):
    return bool(unit) and unit.startswith("crt_")


def name_words(cls):
    """`CHighPriestOfGardath` -> ['high', 'priest', 'of', 'gardath']."""
    bare = re.sub(r"^C(?=[A-Z])", "", cls)
    return [w.lower() for w in re.findall(r"[A-Z]+(?![a-z])|[A-Z][a-z0-9]*|[a-z0-9]+", bare)]


def drop_vowels(word, limit=STEM_LIMIT):
    """Vowels out from the end, the first letter kept, until it fits: character -> charactr."""
    chars, i = list(word), len(word) - 1
    while len(chars) > limit and i > 0:
        if chars[i] in VOWELS:
            del chars[i]
        i -= 1
    return "".join(chars)[:limit]


def era_stem(cls):
    """An 8.3 file stem for class `cls`, as this codebase's authors made them.

    Fitted to nocedit, where it gives the right file for 31 of the 51 classes
    whose names are too long for 8.3 (and every shorter one is its own name):
    `Demon` shortens to `d` (dlight), helper suffixes go to the class they
    serve (cloth), a long single word loses late vowels (charactr), a name
    whose first word leaves room is cut (batcreat), and otherwise the first
    word gives up letters to the rest (dracbrid). The other 20 were
    abbreviated by hand past what a rule recovers (inv, hpriest).
    """
    ws = name_words(cls) or ["class"]
    if ws[0] == "demon" and len(ws) > 1:
        ws = ["d"] + ws[1:]
    while len(ws) > 1 and ws[-1] in HELPER_WORDS:
        ws = ws[:-1]
    joined = "".join(ws)
    if len(joined) <= STEM_LIMIT:
        return joined
    if len(ws) == 1:
        return drop_vowels(ws[0])
    if len(ws[0]) + 3 <= STEM_LIMIT:
        return joined[:STEM_LIMIT]
    rest = "".join(ws[1:])
    keep = min(len(ws[0]), max(4, STEM_LIMIT - len(rest)))
    return (ws[0][:keep] + rest)[:STEM_LIMIT]


def virtual_unit(prev, first):
    """The virtual unit for a gap: after the nearest game unit `prev`, else at `first`."""
    if prev is None:
        return "unkaddr_%s.cpp" % first
    stem = re.sub(r"[^a-z0-9]", "", wsi.basename(prev))[:STEM_LIMIT]
    return "unkafter_%s.cpp" % stem


def crt_line(ordered, labels):
    """Index of the first CRT-labelled function after the last game one, or None."""
    last_game = max((i for i, a in enumerate(ordered)
                     if labels.get(a) and not is_crt(labels[a])), default=-1)
    return next((i for i in range(last_game + 1, len(ordered))
                 if is_crt(labels.get(ordered[i]))), None)


def run_unit(start, members, classes, files, bounds, actors):
    """(folder, stem) or a real unit, for the run an unnamed init-table entry begins.

    When the constructors and destructors found in it are all one class's, as
    most units hold one class: that class's own file, if the type info records
    one and it fits the run's place in link order (`bounds`, the units either
    side); else the class's era_stem -- in core/ itself for a CDemonActor kind,
    since every one of nocedit's 112 is there, and under unkclass/ for any
    other. Otherwise the entry's address, under unkaddr/.
    """
    found = {classes[a] for a in members if a in classes}
    if len(found) == 1:
        cls = found.pop()
        unit = files.get(cls)
        if unit and fits(unit, *bounds):
            return unit
        return ("core" if cls in actors else "unkclass", era_stem(cls))
    return ("unkaddr", start)


def settle_names(runs, taken=frozenset(), bounds=None):
    """start -> unit, every stem 8.3 and unique within its folder.

    Stems that collide keep the first (by address) whole and give the rest
    seven letters and a digit, as confeder and confede1. A name a unit already
    has (`taken`) is used only when that unit is beside the run (`bounds`), so
    the two are one; anywhere else it would claim two runs for one file, and
    the next free name is taken instead.
    """
    out, groups = {}, defaultdict(list)
    for start, unit in runs.items():
        if isinstance(unit, str):
            out[start] = unit
        else:
            groups[unit].append(start)
    used = set(taken)
    for (folder, stem), starts in sorted(groups.items()):
        n = 0
        for start in sorted(starts):
            while True:
                name = "%s_%s.cpp" % (folder, stem if n == 0 else "%s%d" % (stem[:STEM_LIMIT - 1], n))
                n += 1
                beside = name in (bounds or {}).get(start, ())
                if name not in used or (beside and name in taken):
                    break
            used.add(name)
            out[start] = name
    return out


def class_files(program):
    """class -> unit, from the files the type_info export attributes classes to."""
    path = os.path.join(sm.ANNOTATIONS, program, "type_info", "type_info.json")
    if not os.path.exists(path):
        return {}
    with open(path) as fh:
        records = json.load(fh).get("type_info", [])
    out = {}
    for r in records:
        unit = wsi.pin_unit(r.get("file") or "", {})
        if unit:
            out[r["name"]] = unit
    return out


def plan(ordered, labels, placeholders, starts=frozenset(), classes=None, files=None,
         actors=frozenset()):
    """(addr, unit, why) for every placeholder, in address order.

    `labels` is addr -> unit for every function carrying evidence, and
    `placeholders` the functions that may be given a unit. `starts` are
    init-table entries whose unit is not known: each still begins a unit, so a
    gap is split there, nothing brackets across one, and the run it begins is
    named by run_unit from `classes` (constructor/destructor address ->
    class), `files` (class -> unit) and `actors` (CDemonActor kinds).
    """
    line = crt_line(ordered, labels)
    before, prev_game, prev, start, first = [None] * len(ordered), None, None, None, None
    for i, a in enumerate(ordered):
        if a in labels:
            start = first = None
        else:
            first = first or a
            if a in starts:
                start = a
        before[i] = (prev, prev_game, start, first)
        if a in labels:
            prev = labels[a]
            if not is_crt(prev):
                prev_game = prev
    out, nxt, runs, bounds = [], None, defaultdict(list), {}
    for i in range(len(ordered) - 1, -1, -1):
        a = ordered[i]
        if a in starts:
            bounds[a] = (before[i][1], nxt)
        if a in placeholders:
            prev, prev_game, start, first = before[i]
            if a in labels:
                unit, why = labels[a], "pin"
            elif line is not None and i >= line:
                unit, why = sm.CRT_UNKNOWN_UNIT, "crt"
            elif start is not None:
                unit, why = start, "unit start"
                runs[start].append(a)
            elif prev and nxt and wsi.same_unit(prev, nxt):
                unit, why = (sm.CRT_UNKNOWN_UNIT, "crt island") if is_crt(prev) else (prev, "bracket")
            elif is_crt(prev) and is_crt(nxt):
                unit, why = sm.CRT_UNKNOWN_UNIT, "crt island"
            else:
                unit, why = virtual_unit(prev_game, first), "between"
            out.append((a, unit, why))
        if a in labels:
            nxt = labels[a]
    names = settle_names({s: run_unit(s, members, classes or {}, files or {}, bounds[s], actors)
                          for s, members in runs.items()}, set(labels.values()), bounds)
    return [(a, names.get(u, u) if why == "unit start" else u, why) for a, u, why in out[::-1]], line


def string_reads(image):
    """func_addr -> set(string address) for every string a function reads."""
    out = defaultdict(set)
    strings = image.strings
    for x in image.xrefs:
        to = (x.get("to") or "").lower()
        if x.get("type") not in sm.DATA_XREF_TYPES or to not in strings:
            continue
        try:
            func = image.func_containing(int(x["from"], 16))
        except (KeyError, ValueError):
            continue
        if func:
            out[func].add(int(to, 16))
    return out


def string_verdicts(reads, labels, candidates):
    """Unit per candidate, from where the strings it reads sit among other units'.

    Watcom emits each object's string literals as one run, in link order, as
    it does its code. So a string lying between two strings of one unit is
    that unit's, and a function all of whose strings are one unit's belongs to
    it. Measured with each function's own strings held out, this was right for
    1737 of 1737 functions in nocedit and 887 of 887 in nocturne, no verdict
    for the rest. A string between two units, or a function whose strings
    disagree, gives no verdict.
    """
    points = sorted((s, labels[f]) for f, ss in reads.items() if f in labels
                    and not is_crt(labels[f]) for s in ss)
    addrs = [p[0] for p in points]

    def unit_at(index):
        """The one unit with a string at addrs[index], or None if several share it."""
        lo = bisect.bisect_left(addrs, addrs[index])
        hi = bisect.bisect_right(addrs, addrs[index])
        units = {u for _, u in points[lo:hi]}
        return units.pop() if len(units) == 1 else None

    out = {}
    for func in candidates:
        units = set()
        for s in reads.get(func, ()):
            i = bisect.bisect_left(addrs, s)
            j = bisect.bisect_right(addrs, s)
            if i < j:
                before = after = unit_at(i)
            else:
                before = unit_at(i - 1) if i > 0 else None
                after = unit_at(j) if j < len(points) else None
            if not (before and after and wsi.same_unit(before, after)):
                units = None
                break
            units.add(before)
        if units and len(units) == 1:
            out[func] = units.pop()
    return out


def mapping_hints(mapping):
    """b address -> the sibling's unit, for every mapped pair at any confidence."""
    out = {}
    for p in mapping.get("pairs", []):
        unit = sm.tu_of(p.get("name"))
        if unit and not sm.is_placeholder_unit(unit):
            out[p["b"].lower()] = unit
    return out


def fits(unit, prev, nxt):
    """Could a function between units `prev` and `nxt` belong to `unit`?

    Yes if it is one of them, or if it sorts strictly between them, the
    linker's own order -- a unit nothing has surfaced yet.
    """
    if wsi.same_unit(unit, prev) or wsi.same_unit(unit, nxt):
        return True
    return bool(prev and nxt and wsi.basename(prev) < wsi.basename(unit) < wsi.basename(nxt))


def accept(ordered, labels, proposals):
    """The proposals that fit their gap, gap by gap, all or none.

    A gap is the run of unlabelled functions between two labels. Each proposal
    has to fit between the gap's two ends, and the proposals of one gap have
    to run in link order between them, since every unit is one unbroken run;
    one that breaks the order condemns the whole gap rather than being
    guessed around.
    """
    out, gap, prev = {}, [], None
    for a in ordered + [None]:
        if a is not None and a not in labels:
            if a in proposals:
                gap.append((a, proposals[a]))
            continue
        nxt = labels.get(a) if a is not None else None
        if gap and all(fits(u, prev, nxt) for _, u in gap):
            order = [wsi.basename(u) for _, u in gap]
            if order == sorted(order):
                out.update(gap)
        gap, prev = [], nxt
    return out


def grow_labels(ordered, labels, placeholders, reads, hints):
    """labels plus every accepted string verdict and mapping hint, to a fixpoint.

    Returns (labels, {addr: why}) for what was added.
    """
    labels, why = dict(labels), {}
    while True:
        open_ = [a for a in ordered if a in placeholders and a not in labels]
        proposals = {a: u for a, u in hints.items() if a in placeholders and a not in labels}
        proposals.update(string_verdicts(reads, labels, open_))
        # The CRT is linked a member at a time, so its units keep no order to check against.
        proposals = {a: u for a, u in proposals.items() if not is_crt(u)}
        added = accept(ordered, labels, proposals)
        if not added:
            return labels, why
        for a, u in added.items():
            labels[a] = u
            why[a] = "strings" if a not in hints or hints[a] != u else "mapping"


def table_starts(image):
    """Every game unit's first function, from the init table (watcom_static_init)."""
    tables = wsi.find_init_tables(image)
    if not tables:
        return set()
    return {"%08x" % fn for _, _, prio, fn in max(tables, key=len)
            if fn and prio == wsi.GAME_PRIORITY}


def actor_classes(image, records=None, depth=6):
    """Classes whose constructor's first-call chain reaches CDemonActor's constructor.

    A derived constructor calls its base's first, so following only first
    calls walks up the base chain, through constructors with no class record
    of their own (CHero's) as much as through ones with. On nocedit it finds
    all 111 recorded CDemonActor kinds, plus SBodyPartFire, which constructs a
    CFlame member first, and is in core/bodypart.cpp, as every one of them is
    in core/.
    """
    records = records if records is not None else wti.scan_type_info(image)
    ctors = {r["class"]: r["ctor"] for r in records if r["ctor"] != "00000000"}
    root = ctors.get("CDemonActor")
    if root is None:
        return set()
    sites = image.callsites

    def reaches(addr):
        for _ in range(depth):
            calls = sites.get(addr)
            if not calls:
                return False
            addr = calls[0]
            if addr == root:
                return True
        return False

    return {c for c, a in ctors.items() if c != "CDemonActor" and reaches(a)}


def class_slots(image, records=None):
    """Constructor/destructor address -> class, from the class-info records.

    An address standing in for several classes (the runtime's do-nothing copy
    constructor) names none.
    """
    owners = defaultdict(set)
    for r in records if records is not None else wti.scan_type_info(image):
        for slot in ("ctor", "copy", "dtor"):
            owners[r[slot]].add(r["class"])
    return {a: c.pop() for a, c in owners.items() if len(c) == 1 and a != "00000000"}


def merged_hints(mappings):
    """mapping_hints over several siblings; a function they disagree on gets none."""
    out, torn = {}, set()
    for mapping in mappings:
        for addr, unit in mapping_hints(mapping).items():
            if addr in out and not wsi.same_unit(out[addr], unit):
                torn.add(addr)
            out.setdefault(addr, unit)
    return {a: u for a, u in out.items() if a not in torn}


def analyse(program, pins_path=None, mapping_paths=()):
    image = sm.Image(program)
    pins_path = pins_path or os.path.join(sm.ANNOTATIONS, program, "reports", "line_pins.json")
    pins = sm.load_pins(pins_path) if os.path.exists(pins_path) else []
    stems = {}
    for f in image.functions:
        unit = sm.tu_of(f.get("name"))
        if unit and not sm.is_placeholder_unit(unit):
            stems.setdefault(unit.rsplit(".", 1)[0], unit)
    ordered = [f["addr"].lower() for f in sorted(image.functions, key=lambda f: int(f["addr"], 16))]
    labels = {a: u for a, (u, _) in wsi.function_evidence(image, pins, stems).items()}
    placeholders = {a for a, f in image.by_addr.items() if wsi.unlabelled(f)}
    mappings = []
    for path in mapping_paths:
        with open(path) as fh:
            mappings.append(json.load(fh))
    hints = merged_hints(mappings)
    labels, grown = grow_labels(ordered, labels, placeholders, string_reads(image), hints)
    starts = {a for a in table_starts(image) if a not in labels}
    records = wti.scan_type_info(image)
    rows, line = plan(ordered, labels, placeholders, starts, class_slots(image, records),
                      class_files(program), actor_classes(image, records))
    rows = [(a, u, grown.get(a, why)) for a, u, why in rows]
    names = {a: image.by_addr[a].get("name") for a in ordered}
    renames = [(a, names[a], "%s_FUN_%s" % (unit, a), why) for a, unit, why in rows
               if "%s_FUN_%s" % (unit, a) != names[a]]
    return {"program": program, "functions": len(ordered),
            "crt_line": ordered[line] if line is not None else None,
            "rows": rows, "renames": renames}


def print_report(report, show):
    print("%s: %d functions, %d still without a unit; CRT line at %s"
          % (report["program"], report["functions"], len(report["rows"]), report["crt_line"]))
    counts = Counter(why for _, _, why in report["rows"])
    print("  " + "  ".join("%s=%d" % kv for kv in sorted(counts.items())))
    virtual = Counter(u for _, u, why in report["rows"] if why == "between")
    print("  %d virtual units, largest: %s" % (len(virtual), ", ".join(
        "%s (%d)" % kv for kv in virtual.most_common(5))))
    print("  renames planned: %d" % len(report["renames"]))
    for addr, cur, want, why in report["renames"][:show]:
        print("    %s  %-10s %s -> %s" % (addr, why, cur, want))


def apply_to_program(program, renames):
    """Rename in one transaction; returns how many functions were found and renamed."""
    from ghidra.program.model.symbol import SourceType
    space = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    renamed = 0
    tx = program.startTransaction("Assign virtual units")
    ok = False
    try:
        for addr, _, want, _ in renames:
            func = fm.getFunctionAt(space.getAddress(int(addr, 16)))
            if func is not None:
                func.setName(want, SourceType.USER_DEFINED)
                renamed += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return renamed


def apply(report, project_dir, project_name):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    with pyghidra.program_context(project, "/" + report["program"]) as program:
        from ghidra.util.task import ConsoleTaskMonitor
        print("renamed %d" % apply_to_program(program, report["renames"]))
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    project.close()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("program")
    ap.add_argument("--pins", help="line pins (default annotations/<program>/reports/line_pins.json)")
    ap.add_argument("--mapping", action="append", default=[],
                    help="map_sibling_functions.py output, repeatable: its pairs' units, at any "
                         "confidence, are taken where they fit the layout and no other "
                         "mapping disagrees")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--project", nargs=2, metavar=("DIR", "NAME"))
    args = ap.parse_args()
    report = analyse(args.program, args.pins, args.mapping)
    print_report(report, args.show)
    if args.apply:
        if not args.project:
            ap.error("--apply needs --project DIR NAME")
        apply(report, *args.project)


if __name__ == "__main__":
    main()
