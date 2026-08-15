#!/usr/bin/env python3
"""Name Watcom array destructors after the array extent they destroy.

Watcom emits one thunk per (class, array-size) pair:

    PUSH <type_info>        ; which class
    PUSH <extent>           ; how many elements
    MOV  EDX,[ESP + 0xc]    ; the array
    PUSH EDX
    CALL __arrfini

Ghidra names every one of them `<Class>_arrdtor`, so a class with arrays of
four different sizes gets four functions sharing one name. The extent is the
only thing that distinguishes them, and it is sitting right there in the
second push -- so the name should carry it: `CAlphaBitmap_arrdtor7`,
`_arrdtor15`, `_arrdtor30`, `_arrdtor8`.

Ordinal suffixes (`_arrdtor1`, `_arrdtor2`) are worse than nothing: they look
like extents but are just discovery order, so the same array size gets a
different number in each build. They are rewritten to the real extent too.

`(type_info, extent)` is unique within each build, so the new names never
collide -- and because it is derived from the binary rather than from a name,
it is also an exact cross-build key: a `<Class>_arrdtorN` in one build is the
same function as `<Class>_arrdtorN` in the other.

Detection reads the exported .asm tree and needs no Ghidra; only --apply opens
the project.

Usage:
    name_array_destructors.py                    # report, all programs
    name_array_destructors.py --program nocturne.exe
    name_array_destructors.py --apply
"""

import argparse
import collections
import glob
import json
import os
import re
import sys

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

# `  MOV EDX,dword ptr [ESP + 0xc]   ; 004ee8b7`
INSTR_RE = re.compile(r'\s{2,}([A-Z][A-Z0-9]*)\s*(.*?)\s*;\s*([0-9a-f]{6,8})')
FUNC_RE = re.compile(r'(.+)_FUN_([0-9a-f]+)$')
ARRDTOR_RE = re.compile(r'_arrdtor\d*(?=_FUN_)')


def scan_program(exe):
    """Every __arrfini thunk in one exported tree -> {addr, name, typeinfo, extent}."""
    rows = []
    root = os.path.join(REPO, "annotations", exe, "pseudocode", "src")
    for path in glob.glob(os.path.join(root, "**", "*.asm"), recursive=True):
        try:
            txt = open(path, errors="replace").read()
        except OSError:
            continue
        if "__arrfini" not in txt:
            continue
        instrs = []
        for line in txt.split("\n"):
            m = INSTR_RE.match(line)
            if m:
                instrs.append((m.group(1), m.group(2)))
        call = next((i for i, (op, ops) in enumerate(instrs)
                     if op == "CALL" and "__arrfini" in ops), None)
        if call is None:
            continue
        # Watcom pushes right-to-left, so of the immediates before the CALL the
        # first is the type_info and the second is the extent. The array pointer
        # is pushed from a register and is not an immediate.
        imm = [ops for op, ops in instrs[:call]
               if op == "PUSH" and ops.startswith("0x")]
        if len(imm) < 2:
            continue
        base = os.path.basename(path)[:-4]
        fm = FUNC_RE.match(base)
        # The Ghidra symbol carries a translation-unit prefix the export
        # filename drops (`core_alpha.cpp_CAlphaBitmap_arrdtor_FUN_...` vs
        # `CAlphaBitmap_arrdtor_FUN_...`). Renaming has to preserve it, so take
        # the real symbol from the sidecar JSON and only fall back to the
        # filename when that is unavailable.
        name = fm.group(1) if fm else base
        full = None
        side = path[:-4] + ".json"
        if os.path.exists(side):
            try:
                full = (json.load(open(side)).get("function") or {}).get("name")
            except (OSError, ValueError):
                full = None
        rows.append({
            "addr": fm.group(2) if fm else None,
            "name": name,
            "full": full or name,
            "typeinfo": imm[0],
            "extent": int(imm[1], 16),
        })
    return [r for r in rows if r["addr"]]


def build_plan(rows):
    """Proposed renames plus anything that would collide."""
    plan, problems = [], []
    key = collections.Counter((r["typeinfo"], r["extent"]) for r in rows)
    for k, n in key.items():
        if n > 1:
            problems.append("type_info %s extent %d appears on %d functions -- "
                            "extent is not a discriminator here" % (k[0], k[1], n))
    for r in rows:
        cur = r["full"]
        if "_arrdtor" not in cur:
            problems.append("%s %s: no _arrdtor in the name, skipped"
                            % (r["addr"], cur))
            continue
        # Rewrite only the `_arrdtor<n>` token, leaving the TU prefix and the
        # `_FUN_<addr>` suffix exactly as Ghidra has them.
        new = ARRDTOR_RE.sub("_arrdtor%d" % r["extent"], cur)
        if new != cur:
            plan.append({**r, "cur": cur, "new": new})
    seen = collections.Counter(p["new"] for p in plan)
    for name, n in seen.items():
        if n > 1:
            problems.append("proposed name %s would apply to %d functions" % (name, n))
    return plan, problems


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--project-dir", default=os.path.join(REPO, "projects"))
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--program", action="append",
                    help="repeatable; default: nocedit.exe and nocturne.exe")
    ap.add_argument("--show", type=int, default=20)
    ap.add_argument("--out", help="write the plan as JSON")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    programs = args.program or ["nocedit.exe", "nocturne.exe"]
    plans, blocked = {}, False
    for exe in programs:
        rows = scan_program(exe)
        plan, problems = build_plan(rows)
        plans[exe] = plan
        print("=" * 70)
        print("%s -- %d __arrfini thunk(s), %d rename(s)" % (exe, len(rows), len(plan)))
        print("=" * 70)
        for p in plan[:args.show]:
            print("  %s  %-48s -> %s" % (p["addr"], p["cur"], p["new"]))
        if len(plan) > args.show:
            print("  ... and %d more (raise --show)" % (len(plan) - args.show))
        for w in problems:
            print("  PROBLEM: %s" % w)
            blocked = True
        print()

    if args.out:
        json.dump(plans, open(args.out, "w"), indent=1)
        print("wrote %s" % args.out)

    if blocked:
        print("refusing to apply while any PROBLEM is listed above")
        return 1
    if not args.apply:
        print("(report only -- re-run with --apply to rename)")
        return 0

    import pyghidra
    pyghidra.start()
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor

    project = pyghidra.open_project(args.project_dir, args.project_name)
    try:
        for exe, plan in plans.items():
            if not plan:
                continue
            with pyghidra.program_context(project, "/" + exe) as program:
                fm = program.getFunctionManager()
                af = program.getAddressFactory().getDefaultAddressSpace()
                txid = program.startTransaction("name array destructors")
                done = 0
                try:
                    for p in plan:
                        fn = fm.getFunctionAt(af.getAddress(p["addr"]))
                        if fn is None:
                            print("  NO FUNCTION at %s" % p["addr"])
                            continue
                        if fn.getName() != p["cur"]:
                            print("  SKIP %s: Ghidra says %r, expected %r"
                                  % (p["addr"], fn.getName(), p["cur"]))
                            continue
                        fn.setName(p["new"], SourceType.USER_DEFINED)
                        done += 1
                finally:
                    program.endTransaction(txid, True)
                program.getDomainFile().save(ConsoleTaskMonitor())
                print("%s: renamed %d, saved." % (exe, done))
    finally:
        project.close()

    sys.stdout.flush()
    sys.stderr.flush()
    return 0


if __name__ == "__main__":
    sys.exit(main())
