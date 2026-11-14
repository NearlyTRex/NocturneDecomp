#!/usr/bin/env python3
"""Commit the signatures an analyzer set, where a sibling build agrees with them.

An uncommitted signature (the export's `sig`: default, analysis or imported) is
one Ghidra re-infers each time, and its own reports show it as undefined.
Committing it is the decompiler's Commit Params/Return: the stored signature
becomes user-defined and stays as it is.

Committing a wrong guess would lock it in, so each candidate is checked first,
from the exported records:

  commit       no undefined type, and the reference build's function of the same
               name has the same return and parameter types
  differs      the reference disagrees: listed for review, not committed
  no twin      no single reference function has the name: committed only with
               --allow-no-twin
  undefined    the stored signature still holds an undefined type: fix it first

Only `sig: analysis` and `sig: imported` signatures are candidates. A `default`
one was never set, so there is nothing to commit; transfer one instead
(apply_sibling_signatures.py). Thunks are skipped, and CRT functions unless
--crt. Before writing, each
function's live name must still be the exported one.

Report-first; --apply commits and saves.

    python3 -u scripts/Python/commit_signatures.py <ABS_project_path> <project_name> nocturne.exe
    python3 -u scripts/Python/commit_signatures.py <ABS_project_path> <project_name> nocturne.exe --apply
"""

import argparse
import os
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm  # noqa: E402

CANDIDATE_SOURCES = ("analysis", "imported")
VERDICTS = ("commit", "differs", "no twin", "undefined")


def shape(record):
    """(return type, [parameter types]) with spacing normalised."""
    params = (record.get("vars") or {}).get("params", [])
    return (str(record.get("ret", "void")).replace(" ", ""),
            [str(p.get("type", "")).replace(" ", "") for p in params])


def has_undefined(record):
    ret, params = shape(record)
    return any(t.startswith("undefined") for t in [ret] + params)


def verdict(record, twins):
    if has_undefined(record):
        return "undefined"
    if len(twins) != 1:
        return "no twin"
    return "commit" if shape(record) == shape(twins[0]) else "differs"


def unit_file(unit):
    """core_fire.cpp -> fire.cpp: the file, without the folder the name puts first."""
    return unit.split("_", 1)[1] if unit and "_" in unit else unit


def twin_finder(reference):
    """record -> [reference records with its class-and-method name].

    A name the reference uses more than once (each unit's staticInit) must also
    share the unit's file."""
    by_core, by_unit = defaultdict(list), defaultdict(list)
    for r in reference:
        unit, core = sm.split_qualified_name(r.get("name", ""))
        if core:
            by_core[core].append(r)
            by_unit[unit_file(unit), core].append(r)

    def twins_of(record):
        unit, core = sm.split_qualified_name(record.get("name", ""))
        twins = by_core.get(core, [])
        return by_unit.get((unit_file(unit), core), []) if len(twins) > 1 else twins
    return twins_of


def plan(records, reference, crt = True):
    """[(record, verdict, twin or None)] for every uncommitted analysis/imported signature.

    `crt=False` leaves out the CRT's (`crt_` names), whose signatures are shaped for
    compiling the decomp rather than inferred."""
    twins_of = twin_finder(reference)
    out = []
    for r in records:
        if r.get("sig") not in CANDIDATE_SOURCES or r.get("thunk") or not r.get("addr"):
            continue
        if not crt and r.get("name", "").startswith("crt_"):
            continue
        twins = twins_of(r)
        out.append((r, verdict(r, twins), twins[0] if len(twins) == 1 else None))
    return sorted(out, key=lambda row: (VERDICTS.index(row[1]), row[0]["addr"]))


def describe(record):
    ret, params = shape(record)
    return "%s(%s)" % (ret, ", ".join(params))


def render(program, reference, rows, allow_no_twin):
    counts = Counter(v for _r, v, _t in rows)
    lines = ["%s: %d uncommitted analysis/imported signature(s) against %s: %s" % (
        program, len(rows), reference, ", ".join("%d %s" % (counts[v], v) for v in VERDICTS if counts[v]))]
    for want in VERDICTS:
        group = [row for row in rows if row[1] == want]
        if not group:
            continue
        note = " (committed with --allow-no-twin)" if want == "no twin" and allow_no_twin else ""
        lines += ["", "-- %s --  %d%s" % (want, len(group), note)]
        for r, _v, twin in group:
            line = "  %s  %-60s %s" % (r["addr"], r["name"], describe(r))
            if want == "differs":
                line += "  | %s %s" % (reference, describe(twin))
            lines.append(line)
    return lines


def to_commit(rows, allow_no_twin):
    wanted = ("commit", "no twin") if allow_no_twin else ("commit",)
    return [r for r, v, _t in rows if v in wanted]


def commit(program, records):
    """Mark each function's stored signature user-defined; returns Counter of outcomes."""
    from ghidra.program.model.symbol import SourceType
    space = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    done = Counter()
    tx = program.startTransaction("Commit signatures")
    ok = False
    try:
        for r in records:
            func = fm.getFunctionAt(space.getAddress(int(r["addr"], 16)))
            if func is None or func.getName() != r["name"]:
                done["changed since export"] += 1
            elif str(func.getSignatureSource()) == "USER_DEFINED":
                done["already committed"] += 1
            else:
                func.setSignatureSource(SourceType.USER_DEFINED)
                done["committed"] += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return done


def apply(project_dir, project_name, program_name, records):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    try:
        with pyghidra.program_context(project, "/" + program_name) as prog:
            from ghidra.util.task import ConsoleTaskMonitor
            done = commit(prog, records)
            prog.getDomainFile().save(ConsoleTaskMonitor())
    finally:
        project.close()
    return done


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name")
    ap.add_argument("--reference", default="nocedit.exe", help="the build whose signatures must agree")
    ap.add_argument("--allow-no-twin", action="store_true", help="also commit signatures with no reference twin")
    ap.add_argument("--crt", action="store_true", help="also take CRT functions (crt_ names)")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)
    load = sm._load_buckets  # pylint: disable=protected-access
    rows = plan(load(args.program_name, "functions"), load(args.reference, "functions"), args.crt)
    print("\n".join(render(args.program_name, args.reference, rows, args.allow_no_twin)))
    chosen = to_commit(rows, args.allow_no_twin)
    if not args.apply:
        print("\n(dry run -- --apply commits %d)" % len(chosen))
        return 0
    done = apply(args.project_path, args.project_name, args.program_name, chosen)
    print("\n" + "  ".join("%s=%d" % kv for kv in sorted(done.items())))
    return 0


if __name__ == "__main__":
    sys.exit(main())
