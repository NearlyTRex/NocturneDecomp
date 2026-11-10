#!/usr/bin/env python3
"""Copy data types the target is missing from the sibling build's program.

Signature transfer is all-or-nothing per function: a parameter typed `CGame*`
cannot be applied to a program that has never heard of `CGame`, so the whole
prototype is abandoned. A handful of missing types therefore blocks a
disproportionate number of signatures, and importing them is the cheapest way
to unblock them.

The list is derived, not hardcoded, from two sources:

  prototypes  every parameter and return type named by a transferable pair
  globals     every type reachable through the source program's defined data

The second source is not optional decoration. In this codebase a function
definition is almost never a parameter or return type -- it is the pointee of
a global function pointer (`APIDLL_clear* g_APIDLL_clear`). Prototype-only
discovery cannot see one. Pass --no-globals for prototype-only discovery.

Whatever fails to resolve against the target is what gets imported, so
re-running after a mapping changes imports exactly what the new mapping needs.
A type the target already has is skipped and reported, never re-added.

Ghidra pulls dependencies in automatically. The conflict handler keeps what the
target already has, because the target's layouts are the corrected ones -- a
struct arriving from the source must reference the target's `CDemonActor`, not
drag the source's copy in beside it. `.conflict` types a run does introduce
are reported, and --prune-conflicts removes them.

--replace-stubs rebuilds a placeholder the target has (an RTTI-sized or
unsized `Stub:` struct) with the source's layout, from the target's own types,
for the names given with --type or --types-file. Name them in dependency order
(plan_struct_transfer.py writes them so): a field typed as a placeholder not
yet replaced takes that placeholder's length.

Every import is checked against Watcom RTTI afterwards:

  EXACT      the imported length matches the class's recorded size
  DRIFTED    it does not. Imported anyway, because a pointer to a wrongly sized
             struct is still the right parameter type, but the layout needs fixing
  NO_RTTI    the class was never instantiated, so nothing can be checked

Usage:
    import_sibling_types.py <ABS_project> <project> [program] --mapping verified.json \\
        [--type NAME ...] [--types-file FILE] [--kind KIND ...] [--no-globals] \\
        [--stub-structs] [--replace-stubs] [--prune-conflicts] [--apply]

#@author NearlyTRex
#@category Annotations
"""

import argparse
import json
import os
import re
import sys

import apply_sibling_annotations as asa
import sibling_match as sm

_ARRAY_RE = re.compile(r"^(.*?)\s*\[(\d+)\]$")
KINDS = ("funcdef", "struct", "union", "enum", "typedef", "other")
STUB_DESCRIPTION = "Stub: no RTTI in this build, size and fields not yet recovered"
ROW = "%-30s %-9s %-10s %8s %8s"


def base_type_name(text):
    """Strip pointer and array decoration down to the underlying type name.

    str() is not redundant: names read live out of Ghidra are java.lang.String,
    which the array regex does not match. Pointers and arrays are stripped in
    turn until neither is left, since either can wrap the other: `int[2][3]`
    and `CPodFile *[4]`, an array of pointers, both come down to the base.
    """
    if not text:
        return None
    rest, previous = str(text).strip(), None
    while rest != previous:
        previous = rest
        rest = rest.rstrip("*").strip()
        m = _ARRAY_RE.match(rest)
        if m:
            rest = m.group(1).strip()
    return rest or None


def kind_of(dt):
    """Coarse category for a Ghidra data type, matching --kind values.

    Ghidra models a C++ class as a Structure, so ask for `struct` to get both.
    """
    from ghidra.program.model.data import Enum, FunctionDefinition, Structure, TypeDef, Union
    for kind, cls in (("funcdef", FunctionDefinition), ("struct", Structure), ("union", Union),
                      ("enum", Enum), ("typedef", TypeDef)):
        if isinstance(dt, cls):
            return kind
    return "other"


RTTI_STUB_DESCRIPTION = "Stub: size from Watcom RTTI, fields not yet recovered"


def is_stub(dt):
    """A placeholder: one this tool or watcom_type_info.py made, or a struct with no fields."""
    if str(dt.getDescription() or "").startswith("Stub:"):
        return True
    from ghidra.program.model.data import Structure
    return isinstance(dt, Structure) and not list(dt.getDefinedComponents())


def find_type(dtm, name):
    dt = dtm.getDataType("/" + name)
    if dt is not None:
        return dt
    from java.util import ArrayList
    matches = ArrayList()
    dtm.findDataTypes(name, matches)
    return matches.get(0) if not matches.isEmpty() else None


# The first dimension is the count, as Ghidra writes them: char[16][256] is 16 char[256]
_ARRAY = re.compile(r"^(.*?)\[(\d+)\]((?:\[\d+\])*)$")


def spec_type(dtm, text, cache=None):
    """A type as a hand-written spec names it (`CBitFont *`, `CInventory[3]`, `char[16][256]`)
    -> the target's data type, arrays of any element included; None if it lacks one."""
    cache = {} if cache is None else cache
    m = _ARRAY.match(text.strip())
    if m:
        from ghidra.program.model.data import ArrayDataType
        element = spec_type(dtm, m.group(1) + m.group(3), cache)
        if element is None:
            return None
        return ArrayDataType(element, int(m.group(2)), element.getLength(), dtm)
    return asa.resolve_type(dtm, text, cache)


def in_target(dt, dtm):
    """`dt` rebuilt from the target's own types, or None if one is missing.

    Pointers and arrays are rebuilt around the target's type of the same name,
    so a struct copied this way brings its own layout and no one else's.
    """
    from ghidra.program.model.data import Array, ArrayDataType, BuiltInDataType, Pointer, PointerDataType
    if isinstance(dt, Pointer):
        inner = dt.getDataType()
        if inner is None:
            return dt
        base = in_target(inner, dtm)
        return PointerDataType(base, dtm) if base is not None else None
    if isinstance(dt, Array):
        base = in_target(dt.getDataType(), dtm)
        return ArrayDataType(base, dt.getNumElements(), dt.getElementLength(), dtm) if base else None
    if isinstance(dt, BuiltInDataType):
        return dt
    return find_type(dtm, dt.getName())


def embeds_stub(dt):
    """Whether `dt` holds a placeholder struct by value, directly or as array elements.
    Such a field would take the placeholder's length, not the member's."""
    from ghidra.program.model.data import Array, Structure
    while isinstance(dt, Array):
        dt = dt.getDataType()
    return isinstance(dt, Structure) and is_stub(dt)


def layout_in_target(sdt, dtm, placement=None):
    """The source struct `sdt` as a new struct of the target's types, or None.

    `placement` (plan_struct_transfer.py --out-shifts) is for a class whose
    size changed: only the fields it places come across, each at its target
    offset, and the struct is the target's size. The rest stay undefined bytes.
    Its "added" fields, ones the target build introduced, are inserted as well.
    A field holding a struct the target has only as a placeholder is not
    placed: copied verbatim the struct is refused (None), placed by shift the
    field stays undefined bytes.
    """
    from ghidra.program.model.data import StructureDataType
    out = StructureDataType(sdt.getCategoryPath(), sdt.getName(), 0, dtm)
    size = placement["size"] if placement else sdt.getLength()
    fields = []
    for c in sdt.getComponents():
        at = c.getOffset()
        if placement is not None:
            at = placement["place"].get(str(at))
            if at is None:
                continue
        dt = in_target(c.getDataType(), dtm)
        if dt is None or (embeds_stub(dt) and placement is None):
            return None
        if embeds_stub(dt):
            continue
        fields.append((at, dt, c.getLength(), c.getFieldName(), c.getComment()))
    for a in (placement or {}).get("added", []):
        dt = spec_type(dtm, a["type"])
        if dt is None:
            return None
        fields.append((a["offset"], dt, a["len"], a["name"], "Added in this build"))
    # In offset order: an insertion moves every field already after it
    for at, dt, length, name, comment in sorted(fields, key=lambda f: f[0]):
        out.insertAtOffset(at, dt, length, name, comment)
    fields = list(out.getDefinedComponents())
    if not fields:
        # Nothing placed: a struct of the size and nothing else. Grown from
        # empty it would come out a byte short, since Ghidra reports an
        # empty struct as 1 byte long.
        stub = StructureDataType(sdt.getCategoryPath(), sdt.getName(), size, dtm)
        stub.setDescription(RTTI_STUB_DESCRIPTION)
        return stub
    end = max(c.getOffset() + c.getLength() for c in fields)
    if end < size:
        out.growStructure(size - out.getLength())
    out.setDescription(sdt.getDescription())
    return out


def empty_stub(sdt, dtm):
    """A struct named and filed as `sdt`, asserting nothing about its layout.

    Enough for `T *` to resolve in a signature. With no RTTI record there is no
    size to give it, and the source's would be a guess across the build boundary.
    """
    from ghidra.program.model.data import StructureDataType
    stub = StructureDataType(sdt.getCategoryPath(), sdt.getName(), 0, dtm)
    stub.setDescription(STUB_DESCRIPTION)
    return stub


def globals_type_names(program):
    """Base type names reachable through the source program's defined data, in order."""
    names = []
    for data in program.getListing().getDefinedData(True):
        dt = data.getDataType()
        n = base_type_name(dt.getDisplayName()) if dt is not None else None
        if n and n not in names:
            names.append(n)
    return names


def conflict_paths(dtm):
    """Full paths of every `.conflict` type currently in a manager."""
    return {dt.getPathName() for dt in dtm.getAllDataTypes() if ".conflict" in dt.getName()}


def all_type_paths(dtm):
    return {dt.getPathName() for dt in dtm.getAllDataTypes()}


def new_types_since(dtm, before_paths):
    """Types added since the snapshot, split from derived pointer/array forms.

    Importing one funcdef can drag a whole struct in behind it, with the
    SOURCE build's layout; those are named and RTTI-checked like requests.
    Pointer and array forms carry no layout of their own and are only counted.
    """
    from ghidra.program.model.data import Array, Pointer
    fresh, derived = [], 0
    for dt in dtm.getAllDataTypes():
        if dt.getPathName() in before_paths:
            continue
        if isinstance(dt, (Pointer, Array)):
            derived += 1
        else:
            fresh.append(dt)
    return fresh, derived


def rtti_verdict(rtti, name, size):
    """EXACT / DRIFTED / NO_RTTI for one type against Watcom RTTI sizes."""
    rec = rtti.get(name)
    if rec is None:
        return "NO_RTTI", "-"
    return ("EXACT" if rec == size else "DRIFTED"), rec


def wanted_types(mapping_path, source_program, min_confidence):
    """Base type names every transferable prototype needs, in mapping order.

    The eligibility test is apply_sibling_annotations' own, never a copy: a
    copy went stale once and this tool reported "nothing to import" while 37
    prototypes were being dropped for 14 unknown types.
    """
    with open(mapping_path, encoding="utf-8") as fh:
        mapping = json.load(fh)
    src = sm.Image(source_program)
    names = []
    for p in mapping.get("pairs", []):
        if p.get("ambiguous") or not asa.signature_supported(
                p.get("shape_agreement", "unshaped"), p.get("sig_verdict", "unverifiable"),
                p.get("confidence", 0), min_confidence):
            continue
        rec = src.by_addr.get(p["a"])
        if not rec:
            continue
        for t in [rec.get("ret")] + [q.get("type") for q in (rec.get("vars") or {}).get("params") or []]:
            n = base_type_name(t)
            if n and n not in names:
                names.append(n)
    return names


def load_rtti(program_name):
    path = os.path.join(sm.ANNOTATIONS, program_name, "type_info", "type_info.json")
    try:
        with open(path, encoding="utf-8") as fh:
            doc = json.load(fh)
    except OSError:
        return {}
    return {e["name"]: e["typeinfo_size"] for e in doc.get("type_info", [])
            if "typeinfo_size" in e and "name" in e}


def triage(needed, src_dtm, dst_dtm, kinds, named, replace_stubs, relayout=False):
    """-> (have [(name, source type)], already, wrong kind, absent, names to replace).

    With `relayout`, a named struct is replaced even if it is laid out already.
    """
    replace, have, already, wrong_kind, absent = set(), [], [], [], []
    for name in needed:
        existing = find_type(dst_dtm, name)
        if existing is not None:
            if not (replace_stubs and name in named and (relayout or is_stub(existing))):
                already.append(name)
                continue
            replace.add(name)
        sdt = find_type(src_dtm, name)
        if sdt is None:
            absent.append(name)
        elif kinds and kind_of(sdt) not in kinds:
            wrong_kind.append(name)
        else:
            have.append((name, sdt))
    return have, already, wrong_kind, absent, replace


def import_into(dst, have, replace, stub_structs, shifts=None):
    """Stub, replace or add each type; -> the names left as they were.

    `shifts` is {name: placement} for replacements whose size changed.
    """
    shifts = shifts or {}
    from ghidra.program.model.data import DataTypeConflictHandler
    dtm, keep = dst.getDataTypeManager(), DataTypeConflictHandler.KEEP_HANDLER
    left = []
    tx = dst.startTransaction("Import sibling data types")
    ok = False
    try:
        # Stubs first, so a type imported after them that mentions one resolves
        # to the stub rather than dragging the source's layout in.
        stubbed = [(n, s) for n, s in have if stub_structs and kind_of(s) == "struct" and n not in replace]
        for _name, sdt in stubbed:
            dtm.addDataType(empty_stub(sdt, dtm), keep)
        if stubbed:
            print("\nstubbed %d struct(s) as empty placeholders" % len(stubbed))
        for name, sdt in have:
            if (name, sdt) in stubbed:
                continue
            if name in replace:
                rebuilt = layout_in_target(sdt, dtm, shifts.get(name))
                if rebuilt is None:
                    print("  %s: a field type is missing from the target; stub left as it is" % name)
                    left.append(name)
                    continue
                dtm.replaceDataType(find_type(dtm, name), rebuilt, True)
                print("  %s: stub replaced, %d bytes" % (name, rebuilt.getLength()))
                continue
            dtm.addDataType(sdt, keep)
        ok = True
    finally:
        dst.endTransaction(tx, ok)
    return left


def report_dependencies(dtm, have, types_before, rtti, from_program, program_name):
    """Name the types an import dragged in unasked, and hold them to RTTI."""
    fresh, derived = new_types_since(dtm, types_before)
    requested = {n for n, _ in have}
    deps = sorted((d for d in fresh if d.getName() not in requested), key=lambda d: d.getName())
    if deps:
        print("\n%d dependency type(s) arrived unrequested - these carry %s's layout:"
              % (len(deps), from_program))
        print(ROW % ("type", "kind", "verdict", "length", "rtti"))
        suspect = []
        for dt in deps:
            verdict, rec = rtti_verdict(rtti, dt.getName(), dt.getLength())
            print(ROW % (dt.getName(), kind_of(dt), verdict, dt.getLength(), rec))
            if verdict != "EXACT" and kind_of(dt) in ("struct", "union"):
                suspect.append(dt.getName())
        if suspect:
            print("\nWARNING: %d unverified struct/union layout(s) imported from %s: %s"
                  % (len(suspect), from_program, ", ".join(suspect)))
            print("  Layouts do not transfer across the sibling boundary. Verify each against "
                  "%s's own assembly before trusting a field offset." % program_name)
    if derived:
        print("\n%d derived pointer/array type(s) also created (no layout of their own)" % derived)


def prune(dst, paths, monitor):
    dtm = dst.getDataTypeManager()
    tx = dst.startTransaction("Prune import conflicts")
    pruned = 0
    try:
        for p in paths:
            dt = dtm.getDataType(p)
            if dt is not None and dtm.remove(dt, monitor):
                pruned += 1
    finally:
        dst.endTransaction(tx, True)
    return pruned


def requested_names(args):
    names = list(args.type)
    if args.types_file:
        with open(args.types_file, encoding="utf-8") as fh:
            names += [ln.split("#", 1)[0].strip() for ln in fh]
    return [n for n in dict.fromkeys(names) if n]


def main(argv=None):
    ap = argparse.ArgumentParser(description="Import missing data types from the sibling program.")
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("program_name", nargs="?", default="nocturne.exe")
    ap.add_argument("--from-program", default="nocedit.exe")
    ap.add_argument("--mapping", help="derive the needed types from this mapping")
    ap.add_argument("--min-confidence", type=float, default=0.90)
    ap.add_argument("--type", action="append", default=[], help="import this type as well (repeatable)")
    ap.add_argument("--types-file", help="more names, one per line ('#' comments ignored), in order")
    ap.add_argument("--kind", action="append", default=[], choices=KINDS,
                    help="import only types of this kind (repeatable; default: every kind). "
                         "'struct' covers C++ classes.")
    ap.add_argument("--no-globals", action="store_true",
                    help="skip discovery through the source program's global data "
                         "(funcdefs are only reachable that way)")
    ap.add_argument("--prune-conflicts", action="store_true",
                    help="delete any .conflict types this run introduces")
    ap.add_argument("--stub-structs", action="store_true",
                    help="create each missing struct as an empty placeholder at the source's "
                         "category instead of copying its layout, for a build whose layouts "
                         "are not known")
    ap.add_argument("--replace-stubs", action="store_true",
                    help="replace a named type that is still a placeholder stub with the "
                         "source's layout")
    ap.add_argument("--shifts",
                    help="with --replace-stubs: placements for classes whose size changed "
                         "(plan_struct_transfer.py --out-shifts)")
    ap.add_argument("--relayout", action="store_true",
                    help="with --replace-stubs: also replace named structs that are laid out "
                         "already, whose applied layout the code contradicts")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args(argv)
    args.placements = {}
    if args.shifts:
        with open(args.shifts, encoding="utf-8") as fh:
            args.placements = json.load(fh)

    named = requested_names(args)
    needed = list(named)
    if args.mapping:
        needed = [n for n in wanted_types(args.mapping, args.from_program, args.min_confidence)
                  if n not in named] + needed
    if not needed and args.no_globals:
        ap.error("nothing to do: pass --mapping and/or --type, or drop --no-globals")
    print("%d distinct type name(s) asked for" % len(needed))
    rtti = load_rtti(args.program_name)

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
    try:
        with pyghidra.program_context(project, "/" + args.from_program) as src:
            with pyghidra.program_context(project, "/" + args.program_name) as dst:
                run(args, needed, named, rtti, src, dst)
    finally:
        project.close()
    return 0


def run(args, needed, named, rtti, src, dst):
    src_dtm, dst_dtm = src.getDataTypeManager(), dst.getDataTypeManager()
    if not args.no_globals:
        extra = [n for n in globals_type_names(src) if n not in needed]
        needed = needed + extra
        print("%d more from global data in %s (%d total)" % (len(extra), args.from_program, len(needed)))
    have, already, wrong_kind, absent, replace = triage(
        needed, src_dtm, dst_dtm, set(args.kind), set(named), args.replace_stubs, args.relayout)

    # "nothing to import" is ambiguous between "already done" and "discovery
    # found nothing", and those need opposite responses: report the skips.
    print("\nalready in %s, skipped : %d" % (args.program_name, len(already)))
    if args.kind:
        print("excluded by --kind %s : %d" % ("/".join(sorted(args.kind)), len(wrong_kind)))
    print("to import or replace : %d" % len(have))
    if absent:
        print("  not in either program (built-ins or gone): %s" % ", ".join(sorted(absent)))
    if not have:
        print("\nnothing to import.")
        return
    print("\n" + ROW % ("type", "kind", "verdict", "length", "rtti"))
    for name, sdt in sorted(have, key=lambda t: t[0]):
        verdict, rec = rtti_verdict(rtti, name, sdt.getLength())
        print(ROW % (name, kind_of(sdt), verdict, sdt.getLength(), rec))
    if not args.apply:
        print("\n[dry-run] re-run with --apply to import.")
        return

    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()
    before = dst_dtm.getDataTypeCount(True)
    conflicts_before, types_before = conflict_paths(dst_dtm), all_type_paths(dst_dtm)
    left = import_into(dst, have, replace, args.stub_structs, args.placements)
    after = dst_dtm.getDataTypeCount(True)
    print("\nimported or replaced %d of %d type(s); data type count %d -> %d (%+d, including dependencies)"
          % (len(have) - len(left), len(have), before, after, after - before))
    report_dependencies(dst_dtm, have, types_before, rtti, args.from_program, args.program_name)
    new_conflicts = sorted(conflict_paths(dst_dtm) - conflicts_before)
    if new_conflicts:
        print("\n%d new .conflict type(s) from dependency resolution:" % len(new_conflicts))
        for p in new_conflicts:
            print("  %s" % p)
        if args.prune_conflicts:
            print("pruned %d of %d" % (prune(dst, new_conflicts, monitor), len(new_conflicts)))
        else:
            print("re-run with --prune-conflicts to remove them")
    dst.getDomainFile().save(monitor)
    print("Saved.")


if __name__ == "__main__":
    sys.exit(main())
