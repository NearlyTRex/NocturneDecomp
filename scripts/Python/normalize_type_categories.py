#!/usr/bin/env python3
"""File a program's data types the way nocedit files them.

nocedit keeps its types under `/Nocturne/<Kind>/<Game|System>[/<header>]`:
`HWND` in `/Nocturne/Typedef/System/winuser.h`, `CDemonActor` in
`/Nocturne/Class/Game`, the funcdef behind `FARPROC` as `FARPROC_FUNC` in
`/Nocturne/FunctionDefinition/System/windef.h`. The header generator splits
headers on that path, so a type left where Ghidra's importer put it
(`/WinDef.h`, `/winnt.h`, `/WinDef.h/functions`) lands in the wrong header or
none. A freshly imported sibling build has nothing but those.

Each type outside `/Nocturne` is planned, in this order:

  rename  a function definition named exactly like the typedef that points
          at it becomes `<name>_FUNC`, as nocedit names them, so the two no
          longer share a name
  keep    nocedit files the same name in the same place, or the type sits in
          one of the loader's categories nocedit also keeps outside /Nocturne
          (`/PE`, `/DOS`, the root)
  merge   the program already has the type at its proper path -- brought over
          from nocedit by import_sibling_types.py -- so the stray copy is
          replaced by that one everywhere it is used, provided the two are
          equivalent; a stray that differs is a conflict, reported, not merged
  move    to nocedit's category for that name, or for a name nocedit lacks, to
          `/Nocturne/<Kind>/System/<header>`, the header being the importer's
          top-level folder in lower case (`/WinDef.h` -> `windef.h`)
  leave   no rule applies: nocedit lacks it and it sits in no header folder

Usage:
    normalize_type_categories.py <ABS_project_path> <project_name> bw1.exe
    normalize_type_categories.py ... bw1.exe --apply
"""

import argparse
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm

KIND_FOLDERS = {"struct": "Struct", "union": "Union", "enum": "Enum",
                "typedef": "Typedef", "funcdef": "FunctionDefinition"}
FUNC_SUFFIX = "_FUNC"
ROOT = "/Nocturne/"


def sibling_categories(program):
    """name -> category for every type the sibling exported."""
    path = os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")
    with open(path) as fh:
        doc = json.load(fh)
    out = {}

    def walk(node):
        if isinstance(node, dict):
            if "name" in node and "cat" in node:
                out.setdefault(node["name"], node["cat"])
            for v in node.values():
                walk(v)
        elif isinstance(node, list):
            for v in node:
                walk(v)
    walk(doc)
    return out


def default_category(kind, category):
    """`/Nocturne/<Kind>/System/<header>` for an importer folder, or None."""
    header = category.strip("/").split("/")[0].lower()
    if kind not in KIND_FOLDERS or not header.endswith(".h"):
        return None
    return "%s%s/System/%s" % (ROOT, KIND_FOLDERS[kind], header)


def plan(types, sibling_cats, taken):
    """One action per type outside /Nocturne.

    `types` is [{"name", "cat", "kind", "typedef_alias"}], where typedef_alias
    is true for a funcdef a typedef of the same name points at. `taken` is the
    set of (category, name) already occupied, used to spot a merge.
    """
    # Categories the sibling itself keeps outside /Nocturne: the loader's.
    loader = {c for c in sibling_cats.values() if not c.startswith(ROOT)}
    rows, claimed = [], {}
    for t in types:
        if t["cat"].startswith(ROOT):
            continue
        name = t["name"] + FUNC_SUFFIX if t.get("typedef_alias") else t["name"]
        row = dict(t, want_name=name, want_cat=None, action="leave", detail="")
        want = sibling_cats.get(name) or default_category(t["kind"], t["cat"])
        if want is None and t["cat"] in loader and name == t["name"]:
            row["action"], row["detail"] = "keep", "loader category"
        elif want is None:
            row["detail"] = "no category rule"
        elif want == t["cat"] and name == t["name"]:
            row["action"] = "keep"
        elif (want, name) in taken:
            row["action"], row["want_cat"] = "merge", want
        elif (want, name) in claimed:
            # Two strays bound for one place: the first moves, and this one is
            # left for a second run to merge into it.
            row["detail"] = "%s/%s is taken by %s" % (want, name, claimed[(want, name)])
        else:
            row["action"], row["want_cat"] = "move", want
            claimed[(want, name)] = t["cat"]
            if name != t["name"]:
                row["detail"] = "as %s" % name
        rows.append(row)
    return rows


def kind_of(dt):
    from ghidra.program.model.data import (Enum, FunctionDefinition, Structure,
                                           TypeDef, Union)
    for cls, kind in ((Structure, "struct"), (Union, "union"), (Enum, "enum"),
                      (TypeDef, "typedef"), (FunctionDefinition, "funcdef")):
        if isinstance(dt, cls):
            return kind
    return None


def describe(dtm):
    """The program's own types as plan() takes them, plus the live objects."""
    from ghidra.program.model.data import Pointer, TypeDef
    # Keyed on path, not identity: pyghidra wraps each Java object afresh, so
    # one type fetched twice is two Python objects.
    live, aliased = {}, set()
    for dt in dtm.getAllDataTypes():
        kind = kind_of(dt)
        if kind is None:
            continue
        live[(str(dt.getCategoryPath().getPath()), str(dt.getName()))] = (dt, kind)
        if isinstance(dt, TypeDef):
            base = dt.getDataType()
            pointed = base.getDataType() if isinstance(base, Pointer) else base
            if kind_of(pointed) == "funcdef" and pointed.getName() == dt.getName():
                aliased.add((str(pointed.getCategoryPath().getPath()), str(pointed.getName())))
    types = [{"name": name, "cat": cat, "kind": kind, "typedef_alias": (cat, name) in aliased}
             for (cat, name), (_, kind) in sorted(live.items())]
    return types, live


def apply_to_program(program, rows, live):
    """Carry out the moves, merges and renames in one transaction."""
    from ghidra.program.model.data import CategoryPath
    dtm = program.getDataTypeManager()
    done = {"move": 0, "merge": 0, "conflict": []}
    tx = program.startTransaction("Normalize type categories")
    ok = False
    try:
        for r in rows:
            dt, _ = live[(r["cat"], r["name"])]
            if r["action"] == "merge":
                into, _ = live[(r["want_cat"], r["want_name"])]
                if not dt.isEquivalent(into):
                    done["conflict"].append(r)
                    continue
                dtm.replaceDataType(dt, into, False)
                done["merge"] += 1
            elif r["action"] == "move":
                if r["want_name"] != r["name"]:
                    dt.setName(r["want_name"])
                dtm.createCategory(CategoryPath(r["want_cat"]))
                dt.setCategoryPath(CategoryPath(r["want_cat"]))
                done["move"] += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return done


def print_plan(rows, show):
    from collections import Counter
    counts = Counter(r["action"] for r in rows)
    print("  " + "  ".join("%s=%d" % kv for kv in sorted(counts.items())))
    for action in ("move", "merge", "leave"):
        for r in [r for r in rows if r["action"] == action][:show]:
            print("    %-5s %-40s %s -> %s %s" % (action, r["name"], r["cat"],
                                                  r["want_cat"] or "-", r["detail"]))


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program")
    ap.add_argument("--sibling", default="nocedit.exe",
                    help="build whose exported categories are the standard")
    ap.add_argument("--show", type=int, default=20)
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    sibling_cats = sibling_categories(args.sibling)
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
    with pyghidra.program_context(project, "/" + args.program) as program:
        types, live = describe(program.getDataTypeManager())
        rows = plan(types, sibling_cats, set(live))
        print("%s: %d types outside %s" % (args.program, len(rows), ROOT))
        print_plan(rows, args.show)
        if args.apply:
            from ghidra.util.task import ConsoleTaskMonitor
            done = apply_to_program(program, rows, live)
            print("moved %d, merged %d, %d conflict(s)"
                  % (done["move"], done["merge"], len(done["conflict"])))
            for r in done["conflict"]:
                print("    conflict %s: %s differs from %s/%s"
                      % (r["name"], r["cat"], r["want_cat"], r["want_name"]))
            program.getDomainFile().save(ConsoleTaskMonitor())
            print("Saved.")
    project.close()


if __name__ == "__main__":
    main()
