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
# (research/14-actor_vtable_contract), not hardcoded, so this stays honest if
# the contract is regenerated.
#
# Composites are rebuilt rather than patched: recomputing two or three offsets
# by hand is how the offsets got wrong in the first place.
#
# Usage:
#   GHIDRA_INSTALL_DIR=... python3 -u fix_vtable_structs.py \
#       <ABS_project> <project_name> [program] --contract contract.json [--apply]
#
#@author NearlyTRex
#@category Annotations

import argparse
import json
import os
import sys

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

# name -> (class, base class or None). A composite is base-first by definition.
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


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--contract", required=True)
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    want = expected_sizes(args.contract)
    print("expected sizes from the contract:")
    for k, v in sorted(want.items()):
        print("  %-24s %d bytes (%d slots)" % (k, v, v // PTR))

    import pyghidra
    print("\nStarting PyGhidra...")
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path),
                                    args.project_name)
    code = 0
    try:
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            from ghidra.util.task import ConsoleTaskMonitor
            from java.util import ArrayList

            dtm = program.getDataTypeManager()

            def find(name):
                matches = ArrayList()
                dtm.findDataTypes(name, matches)
                return matches.get(0) if not matches.isEmpty() else None

            plan = []
            for name in ["CDemonActor_vtable"] + list(EXTRA_DROPS):
                dt = find(name)
                if dt is None:
                    print("  MISSING %s" % name)
                    continue
                drops = EDITOR_ONLY if name == "CDemonActor_vtable" else []
                drops = drops + EXTRA_DROPS.get(name, [])
                present = [c for c in dt.getComponents()
                           if c.getFieldName() in drops]
                plan.append((name, dt, present))
                print("\n%s: length=%d components=%d"
                      % (name, dt.getLength(), dt.getNumComponents()))
                for c in present:
                    print("    drop @%-4d %-26s %s"
                          % (c.getOffset(), c.getFieldName(),
                             c.getDataType().getName()))
                after = dt.getLength() - sum(c.getLength() for c in present)
                exp = want.get(name)
                print("    length %d -> %d%s"
                      % (dt.getLength(), after,
                         "" if exp is None else
                         ("   expected %d  %s" % (exp, "OK" if after == exp else "MISMATCH"))))

            print("\ncomposites to rebuild:")
            for cname, parts in COMPOSITES.items():
                dt = find(cname)
                if dt is None:
                    print("  MISSING %s" % cname)
                    continue
                off, layout = 0, []
                ok = True
                for p in parts:
                    pdt = find(p)
                    if pdt is None:
                        ok = False
                        break
                    size = want.get(p, pdt.getLength())
                    layout.append((off, p, size))
                    off += size
                if not ok:
                    print("  %s: a part is missing, skipped" % cname)
                    continue
                print("  %-24s length %d -> %d   %s"
                      % (cname, dt.getLength(), off,
                         ", ".join("%s@%d" % (p, o) for o, p, _ in layout)))

            if not args.apply:
                print("\n[dry-run] re-run with --apply")
                project.close()
                sys.stdout.flush()
                os._exit(0)

            tx = program.startTransaction("Fix vtable structs for nocturne")
            ok = True
            try:
                from ghidra.program.model.data import (
                    StructureDataType, PointerDataType, DataTypeConflictHandler,
                    FunctionDefinitionDataType, ParameterDefinitionImpl,
                    CategoryPath)
                from ghidra.program.model.symbol import SourceType as _ST

                def ensure_funcdef(name, ret_name, cls):
                    """Create `<ret> name(<cls> *this_ptr)` if it is missing."""
                    got = find(name)
                    if got is not None:
                        return got
                    ret = find(ret_name)
                    this = find(cls)
                    fd = FunctionDefinitionDataType(
                        CategoryPath("/Nocturne/FunctionDefinition/Game"), name)
                    if ret is not None:
                        fd.setReturnType(ret)
                    if this is not None:
                        fd.setArguments([ParameterDefinitionImpl(
                            "this_ptr", PointerDataType(this), None)])
                    # The setter is spelled differently across Ghidra versions,
                    # and __cdecl is the default anyway -- not worth failing over.
                    for setter in ("setCallingConventionName",
                                   "setCallingConvention"):
                        try:
                            getattr(fd, setter)("__cdecl")
                            break
                        except Exception:
                            pass
                    return dtm.addDataType(fd, DataTypeConflictHandler.REPLACE_HANDLER)

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
                    for fname, fdname, retname, tu, faddr in own:
                        fd = ensure_funcdef(fdname, retname, cls)
                        space = program.getAddressFactory().getDefaultAddressSpace()
                        fn = program.getFunctionManager().getFunctionAt(
                            space.getAddress(int(faddr, 16)))
                        if fn is not None and not fn.getName().count("_%s_" % cls):
                            newname = "%s_%s_%s_FUN_%s" % (tu, cls, fname, faddr)
                            try:
                                fn.setName(newname, _ST.USER_DEFINED)
                                print("  named %s" % newname)
                            except Exception as e:
                                print("  could not name %s: %s" % (faddr, e))

                    if find(ownname) is not None and find(fullname) is not None:
                        # already built -- but the field may still point at a
                        # phantom, so repoint it rather than leaving it.
                        s = find(ownname)
                        for i, (fname, fdname, _r, _t, _a) in enumerate(own):
                            fd = find(fdname)
                            if fd is not None and i < s.getNumComponents():
                                s.replace(i, PointerDataType(fd), PTR, fname, None)
                        print("  %-24s field types refreshed" % ownname)
                        continue

                    s = StructureDataType(cat, ownname, 0, dtm)
                    for fname, fdname, _r, _t, _a in own:
                        ft = find(fdname)
                        s.add(PointerDataType(ft) if ft is not None
                              else PointerDataType(), PTR, fname, None)
                    s = dtm.addDataType(s, DataTypeConflictHandler.REPLACE_HANDLER)

                    f = StructureDataType(cat, fullname, 0, dtm)
                    for p in parts:
                        pdt = find(p)
                        f.add(pdt, pdt.getLength(),
                              "_u%s" % p[1:2].lower(), None)
                    f.add(s, s.getLength(), "_u%s" % cls[1:2].lower(), None)
                    f = dtm.addDataType(f, DataTypeConflictHandler.REPLACE_HANDLER)
                    print("  created %-24s %d bytes  and %-24s %d bytes"
                          % (ownname, s.getLength(), fullname, f.getLength()))

                for name, dt, present in plan:
                    # Delete by ordinal, highest first, so earlier ordinals stay
                    # valid as the list shrinks.
                    for c in sorted(present, key=lambda c: -c.getOrdinal()):
                        dt.delete(c.getOrdinal())
                    print("  %-24s now length %d, %d components"
                          % (name, dt.getLength(), dt.getNumComponents()))

                for name in PHANTOM_FUNCDEFS:
                    ph = find(name)
                    if ph is None:
                        continue
                    # Only once nothing points at it -- the field repointing
                    # above is what makes that true.
                    if dtm.remove(ph, None):
                        print("  removed phantom funcdef %s" % name)
                    else:
                        print("  phantom %s still referenced, left alone" % name)

                for cname, parts in COMPOSITES.items():
                    dt = find(cname)
                    if dt is None:
                        continue
                    # Keep the existing field names: anything downstream that
                    # already refers to `_ub`/`_uc` should keep working, and a
                    # rename here would be an unrelated change smuggled in.
                    old = {}
                    for c in dt.getComponents():
                        old[c.getDataType().getName()] = c.getFieldName()
                    while dt.getNumComponents():
                        dt.delete(0)
                    off = 0
                    for p in parts:
                        pdt = find(p)
                        if pdt is None:
                            continue
                        dt.insertAtOffset(off, pdt, pdt.getLength(),
                                          old.get(p), None)
                        off += pdt.getLength()
                    print("  %-24s rebuilt, length %d, fields %s"
                          % (cname, dt.getLength(),
                             [c.getFieldName() for c in dt.getComponents()]))
            except Exception as e:
                ok = False
                print("ERROR: %s" % e)
                import traceback
                traceback.print_exc()
            finally:
                program.endTransaction(tx, ok)

            if ok:
                print("\nverifying...")
                bad = 0
                for name, exp in sorted(want.items()):
                    dt = find(name)
                    got = dt.getLength() if dt else None
                    flag = "OK" if got == exp else "MISMATCH"
                    bad += got != exp
                    print("  %-24s %s (expected %d, got %s)" % (name, flag, exp, got))
                if bad:
                    print("  %d struct(s) not at the expected size; NOT saving." % bad)
                else:
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    sys.stdout.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
