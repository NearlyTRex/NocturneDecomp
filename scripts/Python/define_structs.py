#!/usr/bin/env python3
"""Define structs read from a build's own code, from a JSON spec.

For types no sibling has a layout for -- the Blair Witch games' own classes --
the layout is read from the build's code and written down as a spec:

    {
     "bw1.exe": {
       "structs": [
         {"name": "SPageResource", "size": 24, "base": null, "basis": "ctor 004ba730 ...",
          "fields": [{"offset": "0x0", "name": "x", "type": "int", "len": 4, "basis": "..."}]}
       ]
     }
    }

Structs are made in the listed order, so a base or member comes before what
uses it. A field's type is any type the program has (`CBitFont *`, `char[256]`,
`SPageResource *[80]`); a field of a type it lacks refuses the struct. Fields
must not overlap, must fit the size, and must be as long as their type. Bytes
no field covers stay undefined. The struct's basis becomes its description,
each field's its comment.

An existing struct is replaced only while it is a placeholder (no fields), as
watcom_type_info.py makes them from RTTI; --replace also replaces a laid-out
one. A new struct goes under /Nocturne/Struct/Game (S-prefixed) or
/Nocturne/Class/Game.

A program's `delete` list names types the build does not have: placeholders
carried over from a sibling for a class with no RTTI, vtable, method or
string-table use. Each is removed only while it is still a placeholder and
nothing in the program uses it -- no field, function, signature, typedef or
applied data -- so a stale entry changes nothing:

    "delete": [{"name": "CTentacle", "basis": "only a class-name string"}]

Usage:
    define_structs.py spec.json --program bw1.exe                  # check
    define_structs.py spec.json --program bw1.exe --apply --project /abs/projects
"""

import argparse
import json
import os
import sys

# A spec type -> a data type, arrays of any element (`T *[80]`) included
from import_sibling_types import find_type, spec_type as resolve


def offset_of(field):
    return int(field["offset"], 0)


def problems(struct):
    """Why a spec struct cannot be made as written: overlaps, overruns, bad lengths."""
    out, end = [], 0
    for f in sorted(struct["fields"], key=offset_of):
        at = offset_of(f)
        if at < end:
            out.append(f"{struct['name']}.{f['name']} at {at:#x} overlaps the field before it")
        if at + f["len"] > struct["size"]:
            out.append(f"{struct['name']}.{f['name']} runs past the struct's {struct['size']} bytes")
        end = max(end, at + f["len"])
    return out


def category(name):
    return "/Nocturne/Struct/Game" if name.startswith("S") else "/Nocturne/Class/Game"


def build(dtm, struct, cache):
    """The spec struct as a new data type, or (None, reason)."""
    from ghidra.program.model.data import CategoryPath, StructureDataType
    existing = find_type(dtm, struct["name"])
    path = existing.getCategoryPath() if existing is not None else CategoryPath(category(struct["name"]))
    out = StructureDataType(path, struct["name"], 0, dtm)
    for f in sorted(struct["fields"], key=offset_of):
        dt = resolve(dtm, f["type"], cache)
        if dt is None:
            return None, f"{struct['name']}.{f['name']}: no type {f['type']}"
        if dt.getLength() != f["len"]:
            return None, f"{struct['name']}.{f['name']}: {f['type']} is {dt.getLength()} bytes, not {f['len']}"
        out.insertAtOffset(offset_of(f), dt, f["len"], f["name"], f.get("basis"))
    if out.getLength() < struct["size"]:
        out.growStructure(struct["size"] - out.getLength())
    out.setDescription(struct.get("basis") or "")
    return out, None


def apply(program, structs, replace=False):
    """Make each struct in order; -> [(name, outcome)]."""
    from ghidra.program.model.data import DataTypeConflictHandler
    dtm = program.getDataTypeManager()
    cache, report = {}, []
    tx = program.startTransaction("Define structs")
    ok = False
    try:
        for s in structs:
            existing = find_type(dtm, s["name"])
            if existing is not None and list(existing.getDefinedComponents()) and not replace:
                report.append((s["name"], "laid out already; left (--replace to replace)"))
                continue
            dt, why = build(dtm, s, cache)
            if dt is None:
                report.append((s["name"], why))
                continue
            if existing is not None:
                dtm.replaceDataType(existing, dt, True)
                report.append((s["name"], f"replaced, {dt.getLength()} bytes"))
            else:
                dtm.addDataType(dt, DataTypeConflictHandler.KEEP_HANDLER)
                report.append((s["name"], f"added, {dt.getLength()} bytes"))
            cache.clear()
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return report


def base_of(dt):
    """What a pointer, array or typedef chain finally names."""
    while dt is not None and hasattr(dt, "getDataType"):
        dt = dt.getDataType()
    return dt


def users(program, names):
    """{name: [what uses it]} for each of `names` the program's types, functions
    or applied data reach through pointers, arrays and typedefs."""
    found = {n: [] for n in names}

    def note(dt, where):
        dt = base_of(dt)
        if dt is not None and dt.getName() in found:
            found[dt.getName()].append(where)

    for dt in program.getDataTypeManager().getAllDataTypes():
        if dt.getName() in found:
            continue
        if hasattr(dt, "getDefinedComponents"):
            for c in dt.getDefinedComponents():
                note(c.getDataType(), f"{dt.getName()}.{c.getFieldName()}")
        elif hasattr(dt, "getArguments"):
            note(dt.getReturnType(), f"{dt.getName()} returns it")
            for a in dt.getArguments():
                note(a.getDataType(), f"{dt.getName()} takes it")
        elif hasattr(dt, "getBaseDataType"):
            # a typedef; the pointers and arrays the manager also holds are not users
            note(dt, f"typedef {dt.getName()}")
    for f in program.getFunctionManager().getFunctions(True):
        note(f.getReturnType(), f"{f.getName()} returns it")
        for v in list(f.getParameters()) + list(f.getLocalVariables()):
            note(v.getDataType(), f"{f.getName()}.{v.getName()}")
    for d in program.getListing().getDefinedData(True):
        note(d.getDataType(), f"data at {d.getAddress()}")
    return found


def delete(program, entries):
    """Remove each unused placeholder; -> [(name, outcome)]."""
    from ghidra.util.task import ConsoleTaskMonitor
    dtm = program.getDataTypeManager()
    used = users(program, [e["name"] for e in entries])
    report = []
    tx = program.startTransaction("Delete absent types")
    try:
        for e in entries:
            dt = find_type(dtm, e["name"])
            if dt is None:
                report.append((e["name"], "absent already"))
            elif list(dt.getDefinedComponents()):
                report.append((e["name"], "laid out; left"))
            elif used[e["name"]]:
                report.append((e["name"], "in use; left: " + ", ".join(used[e["name"]][:3])))
            else:
                dtm.remove(dt, ConsoleTaskMonitor())
                report.append((e["name"], "deleted"))
    finally:
        program.endTransaction(tx, True)
    return report


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("spec")
    ap.add_argument("--program", required=True)
    ap.add_argument("--project", help="ABS path to the Ghidra project dir")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--replace", action="store_true", help="also replace structs that are laid out")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)

    with open(args.spec, encoding="utf-8") as fh:
        entry = json.load(fh).get(args.program, {})
    structs, absent = entry.get("structs", []), entry.get("delete", [])
    bad = [p for s in structs for p in problems(s)]
    print(f"{args.program}: {len(structs)} structs and {len(absent)} deletions in the spec, "
          f"{len(bad)} problems")
    for p in bad:
        print("  " + p)
    if bad:
        return 1
    if not args.apply:
        print("[dry-run] re-run with --project ... --apply")
        return 0
    if not args.project:
        print("ERROR: applying needs --project")
        return 2

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program) as program:
            report = apply(program, structs, args.replace) + delete(program, absent)
            for name, outcome in report:
                print(f"  {name:32s} {outcome}")
            from ghidra.util.task import ConsoleTaskMonitor
            program.getDomainFile().save(ConsoleTaskMonitor())
            print("Saved.")
    finally:
        project.close()
    return 0 if all(o.startswith(("added", "replaced", "deleted", "absent")) for _, o in report) else 1


if __name__ == "__main__":
    sys.exit(main())
