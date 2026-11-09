#!/usr/bin/env python3
"""Find Watcom's static-initialiser table and mark the translation units it proves.

Watcom collects every routine that must run before main into one table in
DGROUP, which the startup code walks by priority (`g_InitHandlers`, an array of
`RuntimeHandlerEntry`). Each entry is packed into six bytes:

    BYTE status      0 until the routine has run
    BYTE priority    64 for the program's own objects, below that for the CRT
    FUNC *func       the routine

An object file with static constructors contributes exactly one priority-64
entry, pointing at its `staticInit`, and the linker lays the table out in
object order. In nocedit every one of its 156 `staticInit`s is the FIRST
function of its unit, so each entry is a proven translation-unit start, not
an estimate.

That gives fixed points to label the rest by. A unit's code is one unbroken
run (see check_tu_alignment.py), so a function lying between two pieces of
evidence for the same unit, with nothing in between saying otherwise, belongs
to that unit. Evidence, strongest first:

  pin         a __FILE__ the function itself asserts (extract_line_pins.py)
  start       a table entry whose unit is resolved below
  name        a unit prefix already on the function's name

An entry's unit comes from its own `staticInit` name, from the mapped sibling
function, or from the sibling's table by position (see resolve_entries).

Unit names follow the project, not the binary: a unit whose stem the project
already knows keeps the project's extension, because some `.c` files were
deliberately promoted to `.cpp` here (see check_tu_alignment.path_literal).

The CRT is left alone: a static library is linked one member at a time, so
its units genuinely scatter and bracketing would mislabel them.

Usage:
    watcom_static_init.py bw1.exe --mapping map.json --out report.json
    watcom_static_init.py bw1.exe --mapping map.json --apply \\
        --project projects NocturneEdit
"""

import argparse
import json
import os
import re
import struct
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm
import watcom_type_info as wti
from thunk_names import name_thunks
from unit_names import era_stem
from watcom_type_info import find_type

ENTRY = struct.Struct("<BBI")
CLASS_NAME = re.compile(r"^C[A-Z]\w*$")
REGISTER_MIN = 3
GAME_PRIORITY = 64
EXECUTE = 0x20000000
TABLE_LABEL = "g_InitHandlers"
TABLE_TYPE = "RuntimeHandlerEntry"
STATIC_INIT = "staticInit"


def exec_ranges(image):
    return [(s.va, s.va + max(s.vsize, s.raw_size))
            for s in image.sections if s.flags & EXECUTE]


def find_init_tables(image, min_entries=8):
    """Every run of at least `min_entries` well-formed entries outside code.

    Entries are packed, so the scan tries every byte offset. A run ends at the
    first entry that is not well formed; a zero entry ends it too and is kept,
    since that is the table's terminator.
    """
    code = exec_ranges(image)

    def in_code(va):
        return any(lo <= va < hi for lo, hi in code)

    tables = []
    for s in image.sections:
        if s.flags & EXECUTE or not s.raw_size:
            continue
        raw = image.data[s.raw_off:s.raw_off + s.raw_size]
        i = 0
        while i + ENTRY.size <= len(raw):
            entries, j = [], i
            while j + ENTRY.size <= len(raw):
                status, prio, func = ENTRY.unpack_from(raw, j)
                if status == 0 and func == 0 and entries:
                    entries.append((s.va + j, status, prio, 0))
                    j += ENTRY.size
                    break
                if status not in (0, 1) or not in_code(func):
                    break
                entries.append((s.va + j, status, prio, func))
                j += ENTRY.size
            if len([e for e in entries if e[3]]) >= min_entries:
                tables.append(entries)
                i = j
            else:
                i += 1
    return tables


def pin_unit(path, stems):
    """`../core/setutil.cpp` -> the project's unit name for that file."""
    parts = [p for p in path.replace("\\", "/").split("/") if p not in ("", "..")]
    if len(parts) < 2:
        return None
    unit = ("%s_%s" % (parts[-2], parts[-1])).lower()
    stem = unit.rsplit(".", 1)[0]
    return stems.get(stem, unit)


def same_unit(a, b):
    return a is not None and b is not None and a.rsplit(".", 1)[0] == b.rsplit(".", 1)[0]


def wears_target_name(func):
    """A thunk still displaying its target's name, which says nothing about it.

    Ghidra shows a thunk with no symbol of its own under its target's name,
    address suffix included, so the unit in it is the target's, not the
    thunk's.
    """
    suffix = sm.ADDR_SUFFIX_RE.search(func.get("name") or "")
    target = (func.get("thtarget") or "").lower().lstrip("0")
    return bool(func.get("thunk") and suffix and target
                and suffix.group(0).rsplit("_", 1)[-1].lower().lstrip("0") == target)


def unlabelled(func):
    """Still on a placeholder: Ghidra's own, a thunk shown under its target's
    name, or a placeholder unit (see sibling_match.is_placeholder_unit) with no
    name of its own yet."""
    name = func.get("name") or ""
    unit, core = sm.split_qualified_name(name)
    return name.startswith("FUN_") or wears_target_name(func) or (
        name.startswith("thunk_FUN_") and bool(func.get("thunk"))) or (
        sm.is_placeholder_unit(unit) and core is None)


def function_evidence(image, pins, stems):
    """addr -> (unit, kind) for every function carrying its own unit evidence."""
    out = {}
    for f in image.functions:
        unit = sm.tu_of(f.get("name"))
        if unit and not wears_target_name(f) and not sm.is_placeholder_unit(unit):
            out[f["addr"].lower()] = (unit, "name")
    for addr, hits in sm.pins_by_function(image, pins).items():
        units = {pin_unit(path, stems) for path, _ in hits}
        if len(units) == 1:
            out[addr] = (units.pop(), "pin")
    return out


def basename(unit):
    """`engine_3d.c` -> `3d`: the linker sorts objects on this, folder ignored."""
    return unit.rsplit("_", 1)[-1].rsplit(".", 1)[0].lower()


def longest_increasing(pairs):
    """Longest subsequence of (i, p) pairs, already in i order, with p increasing."""
    import bisect
    tails, tail_at, prev = [], [], [None] * len(pairs)
    for k, (_, p) in enumerate(pairs):
        n = bisect.bisect_left(tails, p)
        if n == len(tails):
            tails.append(p)
            tail_at.append(k)
        else:
            tails[n] = p
            tail_at[n] = k
        prev[k] = tail_at[n - 1] if n else None
    out, k = [], tail_at[-1] if tail_at else None
    while k is not None:
        out.append(pairs[k])
        k = prev[k]
    return out[::-1]


def resolve_entries(entries, current_names, source_names, source_units, registered=None,
                    constructed=None):
    """Unit per priority-64 entry.

    `named`  the entry's function already carries a `staticInit` name
    `registered` it registers an actor class, whose unit `registered` gives
    `labelled` its function already carries a real unit
    `mapped` its sibling pair is a `staticInit`, which names the unit
    `constructs` it builds global objects of classes in one known unit
             (`constructed`)
    `order`  between two resolved entries, the sibling's table has exactly as
             many units as this one has entries, so they pair by position.
             Every unit so placed must also sort between its neighbours, the
             linker's own ordering; a gap that fails that is left unresolved.

    What follows an entry is deliberately NOT evidence. A unit without static
    constructors has no entry, so the first pin after a `staticInit` is as
    likely to be the next unit's: measured on nocedit, that guess is wrong 14%
    of the time.
    """
    rows = []
    for e in entries:
        unit, status = None, "unresolved"
        tu, core = sm.split_qualified_name(current_names.get(e["func"]))
        if core == STATIC_INIT and tu:
            unit, status = tu, "named"
        elif e["func"] in (registered or {}):
            unit, status = registered[e["func"]], "registered"
        elif tu and not sm.is_placeholder_unit(tu):
            unit, status = tu, "labelled"
        else:
            tu, core = sm.split_qualified_name(source_names.get(e["func"]))
            if core == STATIC_INIT and tu:
                unit, status = tu, "mapped"
            elif e["func"] in (constructed or {}):
                unit, status = constructed[e["func"]], "constructs"
        rows.append(dict(e, unit=unit, status=status))

    # Anchors must appear in the same order in both tables. The largest set that
    # does is kept; the rest cross it and are conflicts. Taking them greedily
    # instead lets one wrong anchor early on reject every right one after it.
    pos = {u: i for i, u in enumerate(source_units) if u}
    candidates = [(i, pos[r["unit"]]) for i, r in enumerate(rows)
                  if r["unit"] and r["unit"] in pos]
    anchors = longest_increasing(candidates)
    keep = {i for i, _ in anchors}
    for i, _ in candidates:
        if i in keep:
            continue
        # A registration is the binary naming its own class, so it stands
        # wherever it sorts between the anchors either side: the sibling's
        # table is itself out of basename order in places (core/chain.cpp).
        before = max((k for k in keep if k < i), default=None)
        after = min((k for k in keep if k > i), default=None)
        if rows[i]["status"] == "registered" and before is not None and after is not None and \
                basename(rows[before]["unit"]) <= basename(rows[i]["unit"]) <= basename(rows[after]["unit"]):
            continue
        rows[i]["status"] = "conflict"
    for (i, p), (j, q) in zip(anchors, anchors[1:]):
        gap = rows[i + 1:j]
        if not gap or any(r["unit"] for r in gap) or len(gap) != q - p - 1:
            continue
        units = source_units[p + 1:q]
        if None in units:
            continue
        names = [basename(rows[i]["unit"])] + [basename(u) for u in units] + \
                [basename(rows[j]["unit"])]
        if names != sorted(names):
            continue
        for r, u in zip(gap, units):
            r["unit"], r["status"] = u, "order"
    return rows


def entry_calls(image, func, limit=256):
    """[(immediates pushed since the last call, call target or None)] up to the first ret."""
    off = image.va2off(int(func, 16))
    out, pushes = [], []
    if off is None:
        return out
    for ins in sm._MD.disasm(image.data[off:off + limit], int(func, 16)):
        if ins.mnemonic == "push":
            try:
                pushes.append(int(ins.op_str, 0))
            except ValueError:
                continue
        elif ins.mnemonic == "call":
            try:
                target = "%08x" % int(ins.op_str, 0)
            except ValueError:
                target = None
            out.append((pushes, target))
            pushes = []
        elif ins.mnemonic == "ret":
            break
    return out


def string_at(image, va):
    """The string at `va`: Ghidra's, else read from the PE where Ghidra defined none."""
    return image.strings.get("%08x" % va) or wti.read_cstring(image, va)


def registrations(image, funcs):
    """(registrar, {func: {"class", "factory"}}) for the entries that register a class.

    An actor's staticInit pushes the class's name and its factory function and
    calls registerActorClass:

        push 0x410d80          factoryFuncAmmo
        push 0x61491d          "CAmmo"
        call registerActorClass

    The registrar is the function most entries call with exactly one class
    name; at least REGISTER_MIN must, or there is none.
    """
    code = exec_ranges(image)
    found = {}
    for func in funcs:
        for pushes, call in entry_calls(image, func):
            names = [string_at(image, v) for v in pushes]
            classes = [n for n in names if n and CLASS_NAME.match(n)]
            if call is None or len(classes) != 1:
                continue
            factories = [v for v in pushes if any(lo <= v < hi for lo, hi in code)]
            found[func] = {"call": call, "class": classes[0],
                           "factory": "%08x" % factories[0] if len(factories) == 1 else None}
            break
    votes = Counter(r["call"] for r in found.values())
    if not votes or votes.most_common(1)[0][1] < REGISTER_MIN:
        return None, {}
    registrar = votes.most_common(1)[0][0]
    return registrar, {f: r for f, r in found.items() if r["call"] == registrar}


def class_units(image, registered):
    """class -> unit in `image`: where it registers, else where most of its methods are."""
    counts = defaultdict(Counter)
    for f in image.functions:
        tu, core = sm.split_qualified_name(f.get("name"))
        if tu and core and not sm.is_placeholder_unit(tu):
            counts[core.split("_")[0]][tu] += 1
    out = {cls: c.most_common(1)[0][0] for cls, c in counts.items()}
    for func, r in registered.items():
        tu = sm.tu_of((image.by_addr.get(func) or {}).get("name"))
        if tu and not sm.is_placeholder_unit(tu):
            out[r["class"]] = tu
    return out


def constructed_units(image, funcs, units):
    """func -> unit, for entries that construct global objects of classes in one known unit.

    A staticInit that builds global arrays passes each element class's type
    information to __arrinit; the classes' file is the entry's.
    """
    records = {r["addr"]: r["class"] for r in wti.scan_type_info(image)}
    out = {}
    for func in funcs:
        classes = {records["%08x" % v] for pushes, _ in entry_calls(image, func)
                   for v in pushes if "%08x" % v in records}
        found = {units.get(c) for c in classes}
        if len(found) == 1 and None not in found:
            out[func] = found.pop()
    return out


def registered_units(regs, units):
    """func -> unit for each registration: the class's known unit, else a guess.

    A registered class is an actor, and every actor's file is in core/, so a
    guess is core_<era_stem>. A guess never takes a unit another class already
    has (BW2's CDog would be core_dog.cpp, which is CZombieDog's): it gets
    seven letters and a digit instead.
    """
    out = {f: units.get(r["class"]) for f, r in regs.items()}
    taken = {u for u in out.values() if u}
    for f in sorted(regs):
        if out[f]:
            continue
        stem, n = era_stem(regs[f]["class"]), 0
        while True:
            unit = "core_%s.cpp" % (stem if n == 0 else "%s%d" % (stem[:7], n))
            n += 1
            if unit not in taken:
                break
        taken.add(unit)
        out[f] = unit
    return out


def factory_core(cls):
    """`CAmmo` -> `factoryFuncAmmo`, as nocedit names them; `CAmmo_Mana` -> `factoryFuncAmmoMana`."""
    return "factoryFunc" + re.sub(r"^C(?=[A-Z])", "", wti.type_name(cls))


def source_table_units(program):
    """The sibling's table as a list of units, in table order."""
    image = sm.Image(program)
    table = max(find_init_tables(image), key=len)
    out = []
    for _, _, prio, fn in table:
        if prio != GAME_PRIORITY or not fn:
            continue
        tu, core = sm.split_qualified_name((image.by_addr.get("%08x" % fn) or {}).get("name"))
        out.append(tu if core == STATIC_INIT else None)
    return out


def bracket(ordered, labels):
    """Unlabelled functions lying between two labels for the same unit.

    `labels` is addr -> unit, with None marking a barrier that no bracket may
    cross (an unresolved table entry still starts *some* unit).
    """
    out = []
    points = [a for a in ordered if a in labels]
    pos = {a: i for i, a in enumerate(ordered)}
    for left, right in zip(points, points[1:]):
        unit = labels[left]
        if unit is None or labels[right] is None or not same_unit(unit, labels[right]):
            continue
        if unit.startswith("crt_"):
            continue
        for a in ordered[pos[left] + 1:pos[right]]:
            out.append({"addr": a, "unit": unit, "between": [left, right]})
    return out


def analyse(program, mapping_path=None, pins_path=None):
    image = sm.Image(program)
    tables = find_init_tables(image)
    if not tables:
        raise SystemExit("%s: no static-initialiser table found" % program)
    table = max(tables, key=len)

    pins_path = pins_path or os.path.join(sm.ANNOTATIONS, program, "reports",
                                          "line_pins.json")
    pins = sm.load_pins(pins_path) if os.path.exists(pins_path) else []

    source_names, stems, source_units, sibling = {}, {}, [], None
    if mapping_path:
        with open(mapping_path) as fh:
            mapping = json.load(fh)
        source_names = {p["b"].lower(): p["name"] for p in mapping["pairs"]}
        source_units = source_table_units(mapping["from"])
        sibling = sm.Image(mapping["from"])
        for name in source_names.values():
            unit = sm.tu_of(name)
            if unit:
                stems.setdefault(unit.rsplit(".", 1)[0], unit)
    for f in image.functions:
        unit = sm.tu_of(f.get("name"))
        if unit:
            stems.setdefault(unit.rsplit(".", 1)[0], unit)

    ordered = [f["addr"].lower()
               for f in sorted(image.functions, key=lambda f: int(f["addr"], 16))]
    evidence = function_evidence(image, pins, stems)

    entries = [{"entry": "%08x" % va, "status_byte": st, "priority": pr,
                "func": "%08x" % fn}
               for va, st, pr, fn in table if fn]
    game = [e for e in entries if e["priority"] == GAME_PRIORITY]
    current_names = {a: f.get("name") for a, f in image.by_addr.items()}
    registrar, regs = registrations(image, [e["func"] for e in game])
    units = class_units(image, {})
    sibling_registrar = None
    if sibling is not None:
        sibling_table = max(find_init_tables(sibling), key=len)
        sibling_registrar, sibling_regs = registrations(
            sibling, ["%08x" % fn for _, _, prio, fn in sibling_table if fn and prio == GAME_PRIORITY])
        units.update(class_units(sibling, sibling_regs))
    registered = registered_units(regs, units)
    constructed = constructed_units(image, [e["func"] for e in game if e["func"] not in regs], units)
    resolved = resolve_entries(game, current_names, source_names, source_units, registered,
                               constructed)
    for r in resolved:
        r["in_program"] = r["func"] in image.by_addr

    labels = {a: u for a, (u, _) in evidence.items()}
    for r in resolved:
        # An unresolved entry still starts some unit: a barrier, never bridged.
        labels[r["func"]] = r["unit"] if r["status"] != "conflict" else None
    # A function asserting its own __FILE__ needs no bracket: the pin is proof,
    # in the CRT as much as anywhere.
    pinned = [{"addr": a, "unit": u, "between": [a, a]}
              for a, (u, kind) in sorted(evidence.items()) if kind == "pin"]
    assigned = [b for b in pinned + bracket(ordered, labels)
                if unlabelled(image.by_addr[b["addr"]])]

    unit_of = {r["func"]: r["unit"] for r in resolved if r["unit"] and r["status"] != "conflict"}
    factories = [{"addr": r["factory"], "class": r["class"], "unit": unit_of[f],
                  "exists": r["factory"] in image.by_addr}
                 for f, r in sorted(regs.items()) if r["factory"] and f in unit_of]

    return {
        "program": program,
        "table": {"addr": "%08x" % table[0][0], "entries": len(table),
                  "game_entries": len(game), "other_tables": len(tables) - 1},
        "entries": entries,
        "units": resolved,
        "assign": assigned,
        "registrar": registrar_row(registrar, current_names, sibling, sibling_registrar),
        "factories": factories,
        "names": {a: image.by_addr[a].get("name") for a in ordered},
    }


def registrar_row(registrar, names, sibling, sibling_registrar):
    """The registrar's rename: the sibling's name for its registrar, in this program's unit."""
    if registrar is None:
        return None
    unit, core = sm.split_qualified_name(names.get(registrar))
    want = None
    if core is None and sibling is not None and sibling_registrar is not None:
        s_unit, s_core = sm.split_qualified_name((sibling.by_addr.get(sibling_registrar) or {}).get("name"))
        if s_core:
            unit = unit if unit and not sm.is_placeholder_unit(unit) else s_unit
            want = "%s_%s_FUN_%s" % (unit, s_core, registrar) if unit else "%s_FUN_%s" % (s_core, registrar)
    return {"addr": registrar, "want": want}


def plan_names(report):
    """(addr, current, wanted) renames: staticInit names, then unit prefixes."""
    renames = []
    names = report["names"]
    for r in report["units"]:
        cur = names.get(r["func"])
        if (r["unit"] and r["status"] != "conflict" and cur is not None
                and sm.split_qualified_name(cur)[1] is None):
            renames.append((r["func"], cur, "%s_%s_FUN_%s" % (r["unit"], STATIC_INIT, r["func"])))
    for b in report["assign"]:
        renames.append((b["addr"], names.get(b["addr"]),
                        "%s_FUN_%s" % (b["unit"], b["addr"])))
    registrar = report.get("registrar")
    if registrar and registrar["want"]:
        renames.append((registrar["addr"], names.get(registrar["addr"]), registrar["want"]))
    for fac in report.get("factories", []):
        cur = names.get(fac["addr"])
        if cur is None or sm.split_qualified_name(cur)[1] is None:
            renames.append((fac["addr"], cur, "%s_%s_FUN_%s" % (fac["unit"], factory_core(fac["class"]),
                                                                fac["addr"])))
    return renames


def print_report(report, renames, show):
    t = report["table"]
    print("%s: table at %s, %d entries (%d priority %d), %d other candidate run(s)"
          % (report["program"], t["addr"], t["entries"], t["game_entries"],
             GAME_PRIORITY, t["other_tables"]))
    counts = Counter(r["status"] for r in report["units"])
    print("  unit starts: " + "  ".join("%s=%d" % kv for kv in sorted(counts.items())))
    missing = [r for r in report["units"] if not r["in_program"]]
    if missing:
        print("  %d entries point where the program has no function" % len(missing))
    for r in [r for r in report["units"] if r["status"] == "conflict"][:show]:
        print("    conflict %s  %s is out of table order" % (r["func"], r["unit"]))
    units = Counter(b["unit"] for b in report["assign"])
    print("  bracketed: %d functions in %d units" % (len(report["assign"]), len(units)))
    registrar = report.get("registrar")
    if registrar:
        factories = report.get("factories", [])
        print("  registrar %s%s; %d factories, %d not yet functions"
              % (registrar["addr"], " -> %s" % registrar["want"] if registrar["want"] else "",
                 len(factories), sum(1 for f in factories if not f["exists"])))
    print("  renames planned: %d" % len(renames))
    for addr, cur, want in renames[:show]:
        print("    %s  %s -> %s" % (addr, cur, want))


def apply_to_program(program, report, renames):
    """Write the report into `program`, in one transaction; returns what changed.

    Functions are created first, at entries the analysis never reached, so the
    renames that follow can find them.
    """
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.program.model.data import ArrayDataType
    from ghidra.program.model.symbol import SourceType

    space = program.getAddressFactory().getDefaultAddressSpace()
    listing = program.getListing()
    fm = program.getFunctionManager()
    symbols = program.getSymbolTable()
    done = {"created": 0, "typed": False, "renamed": 0}
    tx = program.startTransaction("Watcom static-initialiser table")
    ok = False
    try:
        targets = [r["func"] for r in report["units"]]
        targets += [f["addr"] for f in report.get("factories", [])]
        for addr in targets:
            at = space.getAddress(int(addr, 16))
            if fm.getFunctionAt(at) is None and CreateFunctionCmd(at).applyTo(program):
                done["created"] += 1
        start = space.getAddress(int(report["table"]["addr"], 16))
        entry_type = find_type(program, TABLE_TYPE)
        if entry_type is not None:
            count = report["table"]["entries"]
            listing.clearCodeUnits(start, start.add(count * entry_type.getLength() - 1), False)
            listing.createData(start, ArrayDataType(entry_type, count, entry_type.getLength()))
            done["typed"] = True
        symbol = symbols.getPrimarySymbol(start)
        if symbol is None or symbol.getSource() != SourceType.USER_DEFINED:
            symbols.createLabel(start, TABLE_LABEL, SourceType.USER_DEFINED).setPrimary()
        for addr, _, want in renames:
            func = fm.getFunctionAt(space.getAddress(int(addr, 16)))
            if func is not None:
                func.setName(want, SourceType.USER_DEFINED)
                done["renamed"] += 1
        done["thunks"] = len(name_thunks(program))
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return done


def apply(report, renames, project_dir, project_name):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    with pyghidra.program_context(project, "/" + report["program"]) as program:
        from ghidra.util.task import ConsoleTaskMonitor
        done = apply_to_program(program, report, renames)
        print("created %d functions, typed table: %s, renamed %d"
              % (done["created"], "yes" if done["typed"] else "no (%s missing)" % TABLE_TYPE,
                 done["renamed"]))
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    project.close()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("program")
    ap.add_argument("--mapping", help="map_sibling_functions.py output for this program")
    ap.add_argument("--pins", help="line pins (default annotations/<program>/reports/line_pins.json)")
    ap.add_argument("--out", help="write the report as JSON")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--project", nargs=2, metavar=("DIR", "NAME"),
                    help="Ghidra project to apply to")
    args = ap.parse_args()

    report = analyse(args.program, args.mapping, args.pins)
    renames = plan_names(report)
    print_report(report, renames, args.show)
    if args.out:
        with open(args.out, "w") as fh:
            json.dump({k: v for k, v in report.items() if k != "names"}, fh, indent=1)
    if args.apply:
        if not args.project:
            ap.error("--apply needs --project DIR NAME")
        apply(report, renames, *args.project)


if __name__ == "__main__":
    main()
