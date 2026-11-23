#!/usr/bin/env python3
# Bring nocturne's *_vtable struct types into line with nocturne's own vtables.
#
# The vtable structs were authored against the editor build: CDemonActor_vtable
# has 59 fields, which is nocedit's slot count. nocturne's table is 52 slots --
# the 7 editor-only methods (onAreaDeleted, onActorDeleted, processInEditor,
# getPropertyList, initializeInEditor, showEditorHelp, addFilesToExtract) do not
# exist in the shipping build. So every field from `dtor` onwards is at the
# wrong offset, and so is every composite that embeds the struct by value.
#
# Expected sizes are derived from the measured contract
# (annotations/nocturne.exe/reports/actor_vtable_contract.json), not hardcoded,
# so this stays honest if the contract is regenerated.
#
# Composites are rebuilt rather than patched: recomputing two or three offsets
# by hand is how the offsets got wrong in the first place.
#
# Usage:
#   GHIDRA_INSTALL_DIR=... python3 -u fix_vtable_structs.py \
#       <ABS_project> <project_name> [program] --contract contract.json [--apply] [--no-snapshot]
#
# --apply snapshots the project first (snapshot_project.py, tag pre-vtable-structs),
# and saves only when every struct then has its expected size.
#
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import subprocess
import sys
import traceback

THIS_DIR = os.path.dirname(os.path.abspath(__file__))

PTR = 4

# Editor-only methods, by the field names the struct actually uses.
EDITOR_ONLY = ["onAreaDeleted", "onActorDeleted", "processInEditor",
               "getPropertyList", "initializeInEditor", "showEditorHelp",
               "addFilesToExtract"]

# Fields that belong to no nocturne slot at all. `randomize` is editor-only;
# `reset` is CHero's, and was never CEnemy's in either build. `handleInput` is
# in neither build's 6-slot g_CStrListVTable -- not drift, just a wrong field.
EXTRA_DROPS = {"CEnemy_vtable": ["randomize", "reset"],
               "CStrList_vtable": ["handleInput"]}

# Expected sizes for structs outside the contract, measured from the real
# tables in both builds rather than assumed.
EXPECTED_EXTRA = {"CStrList_vtable": 6 * PTR}

# Classes that add methods on top of a base which already has a struct, but
# which had no struct of their own. nocedit applied the BASE's struct to their
# tables, under-typing each by the added slots: g_CPickListVTable (7 slots) got
# CStrList_vtable (6), and g_CBoneGuy/Mobster/SmileyVTable (81) got
# CEnemy_full_vtable (80).
#
# Each new field gets its OWN function definition, created here if missing.
# Reusing the base class's looked reasonable and was wrong: `CEnemy_reset` and
# `CStrList_handleInput` are phantoms -- no such function exists in either
# binary, and both definitions existed only to give a bogus vtable field a type.
# They also type `this_ptr` as the base rather than the real class.
#
# The implementing function is named and typed at the same time, since the
# contract already proves which method each slot is.
NEW_DERIVED = [
    # class, base parts (in order),
    #   [(field, funcdef, return type, tu, implementing address)]
    ("CPickList", ["CStrList_vtable"],
     [("handleInput", "CPickList_handleInput", "int",
       "shape_edittool.cpp", "00474ea0")]),
    ("CBoneGuy", ["CDemonActor_vtable", "CCharacter_vtable", "CEnemy_vtable"],
     [("reset", "CBoneGuy_reset", "void", "core_boneguy.cpp", "00419f30")]),
    ("CMobster", ["CDemonActor_vtable", "CCharacter_vtable", "CEnemy_vtable"],
     [("reset", "CMobster_reset", "void", "core_mobster.cpp", "004dc2b0")]),
    ("CSmiley", ["CDemonActor_vtable", "CCharacter_vtable", "CEnemy_vtable"],
     [("reset", "CSmiley_reset", "void", "core_smiley.cpp", "00520b40")]),
]

# Definitions that describe nothing once the bogus fields are gone.
PHANTOM_FUNCDEFS = ["CEnemy_reset", "CStrList_handleInput"]

# name -> its parts, base first: a composite embeds each part's struct by value.
COMPOSITES = {
    "CCharacter_full_vtable": ["CDemonActor_vtable", "CCharacter_vtable"],
    "CEnemy_full_vtable": ["CDemonActor_vtable", "CCharacter_vtable",
                           "CEnemy_vtable"],
    "CHero_full_vtable": ["CDemonActor_vtable", "CCharacter_vtable",
                          "CHero_vtable"],
    "CWeapon_full_vtable": ["CDemonActor_vtable", "CWeapon_vtable"],
}


def expected_sizes(contract_path):
    """Own-slot byte size per class, from the measured contract."""
    with open(contract_path) as fh:
        c = json.load(fh)
    n = {k: len(v["slots"]) for k, v in c.items()}
    out = {}
    if "CDemonActor" in n:
        out["CDemonActor_vtable"] = n["CDemonActor"] * PTR
    if "CCharacter" in n and "CDemonActor" in n:
        out["CCharacter_vtable"] = (n["CCharacter"] - n["CDemonActor"]) * PTR
    for c2, base in (("CEnemy", "CCharacter"), ("CHero", "CCharacter")):
        if c2 in n and base in n:
            out["%s_vtable" % c2] = (n[c2] - n[base]) * PTR
    out.update(EXPECTED_EXTRA)
    return out


def type_finder(dtm):
    """name -> the first data type of that name in any category, or None."""
    from java.util import ArrayList

    def find(name):
        matches = ArrayList()
        dtm.findDataTypes(name, matches)
        return matches.get(0) if not matches.isEmpty() else None
    return find


def plan_drops(find, want):
    """[(struct name, struct, components to drop)], each reported with the
    length it will have against the length the contract expects."""
    plan = []
    for name in ["CDemonActor_vtable"] + list(EXTRA_DROPS):
        dt = find(name)
        if dt is None:
            print("  MISSING %s" % name)
            continue
        drops = (EDITOR_ONLY if name == "CDemonActor_vtable" else []) + EXTRA_DROPS.get(name, [])
        present = [c for c in dt.getComponents() if c.getFieldName() in drops]
        plan.append((name, dt, present))
        print("\n%s: length=%d components=%d" % (name, dt.getLength(), dt.getNumComponents()))
        for c in present:
            print("    drop @%-4d %-26s %s"
                  % (c.getOffset(), c.getFieldName(), c.getDataType().getName()))
        after = dt.getLength() - sum(c.getLength() for c in present)
        exp = want.get(name)
        print("    length %d -> %d%s"
              % (dt.getLength(), after,
                 "" if exp is None else
                 ("   expected %d  %s" % (exp, "OK" if after == exp else "MISMATCH"))))
    return plan


def composite_parts(find, parts):
    """The parts' structs in order, or None when one is missing."""
    found = [find(p) for p in parts]
    return None if None in found else found


def report_composites(find, want):
    print("\ncomposites to rebuild:")
    for cname, parts in COMPOSITES.items():
        dt = find(cname)
        if dt is None:
            print("  MISSING %s" % cname)
            continue
        found = composite_parts(find, parts)
        if found is None:
            print("  %s: a part is missing, skipped" % cname)
            continue
        off, layout = 0, []
        for p, pdt in zip(parts, found):
            layout.append((off, p))
            off += want.get(p, pdt.getLength())
        print("  %-24s length %d -> %d   %s"
              % (cname, dt.getLength(), off, ", ".join("%s@%d" % (p, o) for o, p in layout)))


def ensure_funcdef(dtm, find, name, ret_name, cls):
    """Create `<ret> name(<cls> *this_ptr)` if it is missing."""
    from ghidra.program.model.data import (
        CategoryPath, DataTypeConflictHandler, FunctionDefinitionDataType,
        ParameterDefinitionImpl, PointerDataType)
    got = find(name)
    if got is not None:
        return got
    ret = find(ret_name)
    this = find(cls)
    fd = FunctionDefinitionDataType(CategoryPath("/Nocturne/FunctionDefinition/Game"), name)
    if ret is not None:
        fd.setReturnType(ret)
    if this is not None:
        fd.setArguments([ParameterDefinitionImpl("this_ptr", PointerDataType(this), None)])
    fd.setCallingConvention("__cdecl")
    return dtm.addDataType(fd, DataTypeConflictHandler.REPLACE_HANDLER)


def name_implementation(program, cls, fname, tu, faddr):
    """Name the function a new slot proves to be cls's fname, unless it already says cls."""
    from ghidra.program.model.symbol import SourceType
    space = program.getAddressFactory().getDefaultAddressSpace()
    fn = program.getFunctionManager().getFunctionAt(space.getAddress(int(faddr, 16)))
    if fn is None or "_%s_" % cls in fn.getName():
        return
    newname = "%s_%s_%s_FUN_%s" % (tu, cls, fname, faddr)
    try:
        fn.setName(newname, SourceType.USER_DEFINED)
        print("  named %s" % newname)
    except Exception as e:
        print("  could not name %s: %s" % (faddr, e))


def build_derived(program, dtm, find):
    """Give each NEW_DERIVED class its own struct and full composite, or, when
    both exist, repoint the own struct's fields at the class's funcdefs."""
    from ghidra.program.model.data import DataTypeConflictHandler, PointerDataType, StructureDataType
    for cls, parts, own in NEW_DERIVED:
        ownname = "%s_vtable" % cls
        fullname = "%s_full_vtable" % cls
        ref = find(parts[-1])
        if ref is None:
            print("  %s: base %s missing, skipped" % (cls, parts[-1]))
            continue
        cat = ref.getCategoryPath()

        # Funcdefs first: the struct field points at them, and the
        # implementing function is named from the same fact.
        fds = []
        for fname, fdname, retname, tu, faddr in own:
            fds.append(ensure_funcdef(dtm, find, fdname, retname, cls))
            name_implementation(program, cls, fname, tu, faddr)

        s = find(ownname)
        if s is not None and find(fullname) is not None:
            # already built -- but the field may still point at a phantom, so
            # repoint it rather than leaving it.
            for i, ((fname, _fd, _r, _t, _a), fd) in enumerate(zip(own, fds)):
                s.replace(i, PointerDataType(fd), PTR, fname, None)
            print("  %-24s field types refreshed" % ownname)
            continue

        s = StructureDataType(cat, ownname, 0, dtm)
        for (fname, _fd, _r, _t, _a), fd in zip(own, fds):
            s.add(PointerDataType(fd), PTR, fname, None)
        s = dtm.addDataType(s, DataTypeConflictHandler.REPLACE_HANDLER)

        f = StructureDataType(cat, fullname, 0, dtm)
        for p in parts:
            pdt = find(p)
            f.add(pdt, pdt.getLength(), "_u%s" % p[1:2].lower(), None)
        f.add(s, s.getLength(), "_u%s" % cls[1:2].lower(), None)
        f = dtm.addDataType(f, DataTypeConflictHandler.REPLACE_HANDLER)
        print("  created %-24s %d bytes  and %-24s %d bytes"
              % (ownname, s.getLength(), fullname, f.getLength()))


def drop_fields(plan):
    for name, dt, present in plan:
        # Delete by ordinal, highest first, so earlier ordinals stay valid as
        # the list shrinks.
        for c in sorted(present, key=lambda c: -c.getOrdinal()):
            dt.delete(c.getOrdinal())
        print("  %-24s now length %d, %d components"
              % (name, dt.getLength(), dt.getNumComponents()))


def remove_phantoms(dtm, find):
    # Ghidra removes a type whatever still uses it, so this has to come after
    # drop_fields has taken out the bogus fields that pointed at them.
    for name in PHANTOM_FUNCDEFS:
        ph = find(name)
        if ph is not None:
            dtm.remove(ph, None)
            print("  removed phantom funcdef %s" % name)


def rebuild_composites(find):
    for cname, parts in COMPOSITES.items():
        dt = find(cname)
        if dt is None:
            continue
        found = composite_parts(find, parts)
        if found is None:
            # Emptying it first and finding out after would leave it short.
            print("  %-24s a part is missing, left as it was" % cname)
            continue
        # Keep the existing field names: anything downstream that already
        # refers to `_ub`/`_uc` should keep working, and a rename here would be
        # an unrelated change smuggled in.
        old = {c.getDataType().getName(): c.getFieldName() for c in dt.getComponents()}
        while dt.getNumComponents():
            dt.delete(0)
        off = 0
        for p, pdt in zip(parts, found):
            dt.insertAtOffset(off, pdt, pdt.getLength(), old.get(p), None)
            off += pdt.getLength()
        print("  %-24s rebuilt, length %d, fields %s"
              % (cname, dt.getLength(), [c.getFieldName() for c in dt.getComponents()]))


def apply(program, dtm, find, plan):
    """All the changes in one transaction, rolled back on any error. Returns ok."""
    tx = program.startTransaction("Fix vtable structs for nocturne")
    ok = True
    try:
        build_derived(program, dtm, find)
        drop_fields(plan)
        remove_phantoms(dtm, find)
        rebuild_composites(find)
    except Exception as e:
        ok = False
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)
    return ok


def verify(find, want):
    """How many structs are not at their expected size."""
    print("\nverifying...")
    bad = 0
    for name, exp in sorted(want.items()):
        dt = find(name)
        got = dt.getLength() if dt else None
        bad += got != exp
        print("  %-24s %s (expected %d, got %s)" % (name, "OK" if got == exp else "MISMATCH", exp, got))
    return bad


def run(program, args, want):
    """Report, and with --apply change, verify and save. Returns the exit code."""
    dtm = program.getDataTypeManager()
    find = type_finder(dtm)
    plan = plan_drops(find, want)
    report_composites(find, want)
    if not args.apply:
        print("\n[dry-run] re-run with --apply")
        return 0
    if not apply(program, dtm, find, plan):
        return 1
    bad = verify(find, want)
    if bad:
        print("  %d struct(s) not at the expected size; NOT saving." % bad)
        return 1
    from ghidra.util.task import ConsoleTaskMonitor
    program.getDomainFile().save(ConsoleTaskMonitor())
    print("Saved.")
    return 0


def snapshot(args):
    cmd = [sys.executable, os.path.join(THIS_DIR, "snapshot_project.py"),
           os.path.abspath(args.project_path), args.project_name, "--tag", "pre-vtable-structs"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main(argv=None):
    ap = argparse.ArgumentParser(description="Bring the *_vtable structs into line with the program's vtables.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--contract", required=True)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--no-snapshot", action="store_true", help="--apply without a .gar snapshot first")
    args = ap.parse_args(argv)

    want = expected_sizes(args.contract)
    print("expected sizes from the contract:")
    for k, v in sorted(want.items()):
        print("  %-24s %d bytes (%d slots)" % (k, v, v // PTR))

    if args.apply and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.", flush=True)
        os._exit(1)

    import pyghidra
    print("\nStarting PyGhidra...")
    pyghidra.start()
    code = 1
    project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            code = run(program, args, want)
    except Exception as e:
        print("ERROR: %s" % e)
        traceback.print_exc()
    finally:
        project.close()
    sys.stdout.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
