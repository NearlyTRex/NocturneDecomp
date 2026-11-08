#!/usr/bin/env python3
"""Rename labels and functions at exact addresses, from a JSON manifest.

    {
      "nocedit.exe": {
        "labels": [
          {"addr": "006623f0", "name": "g_CDemonPodDestructorCall",
           "expect": "g_CDemonPodDestructorNode"},
          {"addr": "006842f0", "name": "g_CTextureListPtr", "type": "CTextureList*"}
        ],
        "functions": [
          {"addr": "00521b60", "name": "core_moon.cpp_staticInit_FUN_00521b60"}
        ]
      }
    }

A label renames the address's primary symbol, or creates one, and `type`
applies that data type there. `expect` is the name the row was written
against: a row whose current name differs is skipped, so a stale manifest
changes nothing. A function must already exist; its name's `_FUN_<addr>`
suffix must be its own address, as the exporter requires. A new name already
used at another address is refused.

The report checks the rows against the exported annotations. --apply checks
them again against the live program, then renames the thunks that showed the
old function names (thunk_names.py).

A renamed function's .keep files follow it: each moves to the new unit's
folder and name (core_dstrender.cpp_f_FUN_x lives at core/dstrender.cpp/
f_FUN_x.keep.cpp), and every keep has the old name replaced, in its dotted
and its C identifier (core_dstrender_cpp_f_FUN_x) forms. The pseudocode export
that follows regenerates the rest.

Usage:
    rename_by_address.py fixes.json                                # report
    rename_by_address.py fixes.json --apply --project projects NocturneEdit
"""

import argparse
import glob
import json
import os
import re
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import actor_classes as ac
import sibling_match as sm
from thunk_names import name_thunks

KINDS = ("labels", "functions")
SUFFIX = re.compile(r"_FUN_([0-9a-f]{8})$")
KEEP = ".keep."


def keeps_root(program):
    return os.path.join(sm.ANNOTATIONS, program, "pseudocode", "src")


def keep_place(name):
    """Function name -> (unit folder, file base): core_x.cpp_f_FUN_1 -> ("core/x.cpp", "f_FUN_1")."""
    unit = sm.split_qualified_name(name)[0]
    if not unit:
        return "", name
    folder, _, file = unit.partition("_")
    return os.path.join(folder, file), name[len(unit) + 1:]


def sync_keeps(root, renames, write=False):
    """Move and rewrite the .keep files under `root` for [(old, new)] function names.

    Returns [(path, new path or None when it stays, whether its text changes)].
    """
    tokens = [t for old, new in renames for t in ((old, new), (old.replace(".", "_"), new.replace(".", "_")))]
    places = {keep_place(old): keep_place(new) for old, new in renames}
    out = []
    for path in sorted(glob.glob(os.path.join(root, "**", "*" + KEEP + "*"), recursive=True)):
        folder, file = os.path.split(os.path.relpath(path, root))
        base, rest = file.split(KEEP, 1)
        moved = places.get((folder, base))
        target = os.path.join(root, moved[0], moved[1] + KEEP + rest) if moved else None
        with open(path) as fh:
            text = fh.read()
        new_text = text
        for old, new in tokens:
            new_text = new_text.replace(old, new)
        if target is None and new_text == text:
            continue
        out.append((path, target, new_text != text))
        if write:
            dest = target or path
            os.makedirs(os.path.dirname(dest), exist_ok=True)
            with open(dest, "w") as fh:
                fh.write(new_text)
            if target is not None:
                os.remove(path)
    return out


def function_renames(kinds):
    return [(r["current"], r["name"]) for r in kinds["functions"] if r["status"] == "rename"]


def current_names(program):
    """{"labels": addr -> name, "functions": addr -> name}, from the exports."""
    labels = {}
    for s in sm._load_buckets(program, "symbols_label"):
        if s.get("addr"):
            labels.setdefault(s["addr"].lower(), s["name"])
    funcs = {r["addr"].lower(): r["name"] for r in sm._load_buckets(program, "functions") if r.get("addr")}
    return {"labels": labels, "functions": funcs}


def row_problem(kind, row, current, taken):
    """Why `row` cannot be applied, or None."""
    addr, name = row["addr"].lower(), row["name"]
    have = current[kind].get(addr)
    if kind == "functions" and have is None:
        return "no function there"
    suffix = SUFFIX.search(name)
    if suffix and suffix.group(1) != addr:
        return "suffix is not its address"
    if "expect" in row and have != row["expect"]:
        return "is %s, not %s" % (have, row["expect"])
    if taken.get(name, addr) != addr:
        return "name used at %s" % taken[name]
    return None


def plan(manifest, names_of=current_names):
    """{program: {kind: [row + status]}}, each status "rename", "same" or a problem."""
    out = {}
    for program, kinds in manifest.items():
        current = names_of(program)
        taken = {n: a for k in KINDS for a, n in current[k].items()}
        counts = Counter(r["name"] for k in KINDS for r in kinds.get(k, []))
        out[program] = {}
        for kind in KINDS:
            rows = []
            for row in kinds.get(kind, []):
                status = row_problem(kind, row, current, taken)
                if status is None and counts[row["name"]] > 1:
                    status = "name given twice in the manifest"
                if status is None:
                    status = "same" if current[kind].get(row["addr"].lower()) == row["name"] else "rename"
                rows.append(dict(row, addr=row["addr"].lower(), status=status,
                                 current=current[kind].get(row["addr"].lower())))
            out[program][kind] = rows
    return out


def print_report(planned):
    for program, kinds in planned.items():
        for kind in KINDS:
            rows = kinds[kind]
            todo = sum(1 for r in rows if r["status"] == "rename")
            print("%s %s: %d to rename, %d of %d skipped" % (
                program, kind, todo, sum(1 for r in rows if r["status"] not in ("rename", "same")), len(rows)))
            for r in rows:
                if r["status"] == "rename":
                    print("    %s  %s -> %s%s" % (r["addr"], r["current"], r["name"],
                                                  "  (%s)" % r["type"] if r.get("type") else ""))
                elif r["status"] != "same":
                    print("    SKIP %s  %s: %s" % (r["addr"], r["name"], r["status"]))
        keeps = sync_keeps(keeps_root(program), function_renames(kinds))
        if keeps:
            print("%s keeps: %d moved, %d rewritten" % (
                program, sum(1 for k in keeps if k[1]), sum(1 for k in keeps if k[2])))


def apply_to_program(program, kinds):
    """Apply the rows marked "rename"; returns what changed."""
    from ghidra.program.model.symbol import SourceType
    space = program.getAddressFactory().getDefaultAddressSpace()
    symbols, listing, memory = program.getSymbolTable(), program.getListing(), program.getMemory()
    fm = program.getFunctionManager()
    done = Counter()
    tx = program.startTransaction("Rename by address")
    ok = False
    try:
        for row in [r for r in kinds["labels"] if r["status"] == "rename"]:
            at = space.getAddress(int(row["addr"], 16))
            primary = symbols.getPrimarySymbol(at)
            live = primary.getName() if primary is not None else None
            if live != row["current"]:
                done["changed since export"] += 1
                continue
            if row.get("type"):
                dt = ac.resolve(program.getDataTypeManager(), row["type"])
                if dt is None or not memory.contains(at, at.add(dt.getLength() - 1)):
                    done["type not applied"] += 1
                else:
                    listing.clearCodeUnits(at, at.add(dt.getLength() - 1), False)
                    listing.createData(at, dt)
                    done["typed"] += 1
            if primary is not None:
                primary.setName(row["name"], SourceType.USER_DEFINED)
            else:
                symbols.createLabel(at, row["name"], SourceType.USER_DEFINED).setPrimary()
            done["labels"] += 1
        for row in [r for r in kinds["functions"] if r["status"] == "rename"]:
            func = fm.getFunctionAt(space.getAddress(int(row["addr"], 16)))
            if func is None or func.getName() != row["current"]:
                # Its keeps stay where they are too
                row["status"] = "changed since export"
                done["changed since export"] += 1
                continue
            func.setName(row["name"], SourceType.USER_DEFINED)
            done["functions"] += 1
        done["thunks"] = len(name_thunks(program))
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return dict(done)


def apply(planned, project_dir, project_name):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    for program, kinds in planned.items():
        if not any(r["status"] == "rename" for k in KINDS for r in kinds[k]):
            continue
        with pyghidra.program_context(project, "/" + program) as prog:
            from ghidra.util.task import ConsoleTaskMonitor
            done = apply_to_program(prog, kinds)
            prog.getDomainFile().save(ConsoleTaskMonitor())
            done["keeps"] = len(sync_keeps(keeps_root(program), function_renames(kinds), write=True))
            print("%s: %s" % (program, "  ".join("%s=%d" % kv for kv in sorted(done.items()))))
    project.close()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("manifest")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--project", nargs=2, metavar=("DIR", "NAME"))
    args = ap.parse_args()
    if args.apply and not args.project:
        ap.error("--apply needs --project DIR NAME")
    with open(args.manifest) as fh:
        planned = plan(json.load(fh))
    print_report(planned)
    if args.apply:
        apply(planned, *args.project)


if __name__ == "__main__":
    main()
