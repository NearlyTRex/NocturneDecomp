#!/usr/bin/env python3
"""Find Watcom's class-info records and give every class a correctly sized type.

For each class that is thrown, caught or constructed through the runtime,
Watcom emits a 24-byte type signature, which this project calls
`WatcomTypeInfo` (nocedit's `/Nocturne/Struct/System/watcom.h`):

    int   type_flags       0x00020100, or 0x00020104
    func *ctor             default constructor
    func *copy             copy constructor
    func *dtor             destructor
    int   instance_size    sizeof the class, as the compiler laid it out
    char *class_name       "$C3DSCamera$$", or "$SFly$:CFlies$$" when nested

The record is distinctive enough to find in any build with no help: three
code pointers, a plausible size, and a pointer to a name in that exact
mangling. On nocedit the scan finds all 252 records the type_info export
knows, plus CMotionController and filebuf, which are labelled in Ghidra but
which the export never linked to their names.

Each record is labelled with the sibling's own label for that class where it
has one, else `g_<Class>TypeInfo`.

`instance_size` is the compiler's own answer to sizeof, so it is ground truth
for each class's length in this build (see compare_sibling_struct_sizes.py),
and the three pointers name the class's constructor, copy constructor and
destructor outright. map_sibling_functions.py uses the latter as its `rtti`
signal; this script does the Ghidra side:

  * types each record as `WatcomTypeInfo`, labels it, and defines the name
    string it points at
  * gives every class the program has no type for a stub of exactly
    `instance_size` bytes, in the category nocedit files that class under
    (see default_category when nocedit has none). Fields are left for later;
    a stub asserts nothing about layout, so it cannot be wrong, but it lets
    `C... *this_ptr` and every signature that mentions the class resolve
  * leaves Watcom's own library classes (nocedit's `/Nocturne/Class/System`)
    unstubbed: they come from the same compiler, so import_sibling_types.py
    brings their full layout across and checks it against these sizes

Usage:
    watcom_type_info.py bw1.exe                    # report, against nocedit
    watcom_type_info.py bw1.exe --out report.json
    watcom_type_info.py bw1.exe --apply --project projects NocturneEdit
"""

import argparse
import json
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm

RECORD = struct.Struct("<6I")
EXECUTE = 0x20000000
TYPE_NAME = "WatcomTypeInfo"
DEFAULT_CATEGORY = "/Nocturne/Class/Game"
DEFAULT_STRUCT_CATEGORY = "/Nocturne/Struct/Game"
SYSTEM_CLASS_CATEGORY = "/Nocturne/Class/System"
STUB_DESCRIPTION = "Stub: size from Watcom RTTI, fields not yet recovered"
MANGLED = re.compile(r"^\$([A-Za-z_]\w*)\$((?::[A-Za-z_]\w*\$)*)\$$")

# The name in the record is not always the name the type has in this project.
# Kept in step with type_info.get_rtti_type_aliases, which the exporter uses.
RTTI_TYPE_ALIASES = {
    "CVector": "CVector3f",
    "GSPlayer": "SPlayer",
    "LodFace": "CLodFace",
    "LodMesh": "CLodMesh",
    "LodVert": "CLodVert",
    "SfxOptions": "CSfxOptions",
    "SfxSample": "CSfxSample",
    "SfxSlot": "CSfxSlot",
    "cIni": "CIni",
    # bw2's local-scope name for bw1/bw3's buttonStruct
    "__1hlg6hbuttonStruct": "SButtonStruct",
}


# Game classes start with C, other game structs with S, and neither has underscores
GAME_CLASS = re.compile(r"^C[A-Z0-9]")
GAME_STRUCT = re.compile(r"^S[A-Z]")
# Watcom's iostream classes, which keep their library names
LIBRARY_CLASSES = frozenset((
    "ios", "istream", "ostream", "iostream", "streambuf", "filebuf", "stdiobuf", "fstreambase",
    "ifstream", "ofstream", "fstream", "strstreambase", "strstreambuf", "istrstream", "ostrstream",
    "strstream"))


def type_name(cls, known=frozenset()):
    """The type an RTTI class name stands for here.

    An alias, a name in `known` (the sibling's types), a library class or a
    `__`-scoped local name is kept. A game class loses its underscores
    (bw3's CAmmo_Mana is CAmmoMana, as `<unit>_<Class>_<method>` cannot say
    where such a name ends), and any other game struct is also `S`-prefixed
    (PageResource_Text is SPageResourceText).
    """
    if cls in RTTI_TYPE_ALIASES:
        return RTTI_TYPE_ALIASES[cls]
    if cls in known or cls in LIBRARY_CLASSES or cls.startswith("__"):
        return cls
    plain = cls.replace("_", "")
    if GAME_CLASS.match(cls) or GAME_STRUCT.match(cls):
        return plain
    return "S" + plain[:1].upper() + plain[1:]


def read_cstring(image, va, limit=256):
    off = image.va2off(va)
    if off is None:
        return None
    end = image.data.find(b"\0", off, off + limit)
    return image.data[off:end].decode("latin1") if end > 0 else None


def scan_type_info(image):
    """Every WatcomTypeInfo record in the image, one per class.

    A class with more than one record is reported once, at the first one
    found. That also absorbs Watcom's `.bss`, whose header claims file bytes
    that belong to DGROUP and so repeats every record in it; sections are
    scanned in header order, so DGROUP's copy is the one kept. A section that
    claims more bytes than the file holds is read only as far as the file goes.
    """
    code = [(s.va, s.va + max(s.vsize, s.raw_size))
            for s in image.sections if s.flags & EXECUTE]

    def code_or_null(va):
        return va == 0 or any(lo <= va < hi for lo, hi in code)

    by_class = {}
    for s in image.sections:
        if s.flags & EXECUTE or not (s.raw_off and s.raw_size):
            continue
        end = min(s.raw_off + s.raw_size, len(image.data))
        for off in range(s.raw_off, end - RECORD.size + 1, 4):
            va = s.va + off - s.raw_off
            flags, ctor, copy, dtor, size, name_ptr = RECORD.unpack_from(image.data, off)
            if not (code_or_null(ctor) and code_or_null(copy) and code_or_null(dtor)
                    and 0 < size < 0x1000000):
                continue
            mangled = read_cstring(image, name_ptr)
            m = MANGLED.match(mangled or "")
            if not m:
                continue
            name = m.group(1)
            scope = [p for p in m.group(2).strip(":$").split("$:") if p]
            if name in by_class:
                continue
            by_class[name] = {"addr": "%08x" % va, "class": name, "scope": scope,
                              "type": type_name(name),
                              "flags": "%08x" % flags, "ctor": "%08x" % ctor,
                              "copy": "%08x" % copy, "dtor": "%08x" % dtor,
                              "size": size, "name_addr": "%08x" % name_ptr,
                              "mangled": mangled}
    return sorted(by_class.values(), key=lambda r: r["addr"])


def slot_pairs(records_a, records_b, funcs_a, funcs_b):
    """(a, b, why) for every constructor/destructor slot both builds agree on.

    A function standing in several slots -- the runtime's shared do-nothing
    copy constructor, a destructor the compiler folded -- says nothing about
    which class it belongs to, so any address used more than once on its side
    is dropped.
    """
    def counts(records):
        n = {}
        for r in records:
            for slot in ("ctor", "copy", "dtor"):
                n[r[slot]] = n.get(r[slot], 0) + 1
        return n

    used_a, used_b = counts(records_a), counts(records_b)
    by_name = {r["class"]: r for r in records_b}
    out = []
    for ra in records_a:
        rb = by_name.get(ra["class"])
        if rb is None:
            continue
        for slot in ("ctor", "copy", "dtor"):
            a, b = ra[slot], rb[slot]
            if a == "00000000" or b == "00000000":
                continue
            if used_a[a] != 1 or used_b[b] != 1:
                continue
            if a in funcs_a and b in funcs_b:
                out.append((a, b, "%s %s" % (ra["class"], slot)))
    return out


def default_category(name):
    """Where nocedit would file a class it has never seen.

    nocedit keeps `C`-prefixed classes in Class/Game and the rest -- `SFly`,
    `SPlayer`, plain helper structs -- in Struct/Game, RTTI or not.
    """
    return DEFAULT_CATEGORY if GAME_CLASS.match(name) else DEFAULT_STRUCT_CATEGORY


def sibling_categories(program):
    """type name -> category, from the sibling's exported data types."""
    path = os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")
    if not os.path.exists(path):
        return {}
    with open(path) as fh:
        doc = json.load(fh)
    out = {}

    def walk(node):
        if isinstance(node, dict):
            if "name" in node and "cat" in node and node.get("type") in ("struct", "class", "union"):
                out.setdefault(node["name"], node["cat"])
            for v in node.values():
                walk(v)
        elif isinstance(node, list):
            for v in node:
                walk(v)
    walk(doc)
    return out


def sibling_labels(program, records):
    """class -> the label the sibling gave its record, where it gave one.

    Most follow `g_<Class>TypeInfo`, but the library classes were named by hand
    (`g_OStrStreamTypeInfo`, `g_IOSTypeInfo`), and matching them keeps one
    global under one name across the builds.
    """
    by_addr = {r["addr"]: r["class"] for r in records}
    out = {}
    for sym in sm._load_buckets(program, "symbols_label"):
        cls = by_addr.get((sym.get("addr") or "").lower())
        if cls and (sym.get("name") or "").endswith("TypeInfo"):
            out[cls] = sym["name"]
    return out


def analyse(program, sibling):
    image = sm.Image(program)
    records = scan_type_info(image)
    sib_list = scan_type_info(sm.Image(sibling)) if sibling else []
    sib_records = {r["class"]: r for r in sib_list}
    labels = sibling_labels(sibling, sib_list) if sibling else {}
    cats = sibling_categories(sibling) if sibling else {}
    for r in records:
        r["type"] = type_name(r["class"], cats)
        s = sib_records.get(r["class"])
        r["label"] = labels.get(r["class"], "g_%sTypeInfo" % r["type"])
        r["sibling_size"] = s["size"] if s else None
        r["category"] = cats.get(r["type"]) or default_category(r["type"])
        r["in_program"] = {slot: r[slot] in image.by_addr for slot in ("ctor", "copy", "dtor")}
    return {"program": program, "sibling": sibling, "records": records}


def print_report(report, show):
    recs = report["records"]
    print("%s: %d classes with type info" % (report["program"], len(recs)))
    if report["sibling"]:
        same = sum(1 for r in recs if r["sibling_size"] == r["size"])
        drift = [r for r in recs if r["sibling_size"] not in (None, r["size"])]
        new = [r for r in recs if r["sibling_size"] is None]
        print("  vs %s: %d same size, %d drifted, %d not in the sibling"
              % (report["sibling"], same, len(drift), len(new)))
        for r in drift[:show]:
            print("    %-24s %6d  (%s: %d, %+d)" % (r["class"], r["size"], report["sibling"],
                                                 r["sibling_size"], r["size"] - r["sibling_size"]))
        if new:
            print("    new: " + ", ".join(r["class"] for r in new[:40]))
    system = [r for r in recs if r["category"].startswith(SYSTEM_CLASS_CATEGORY)]
    print("  library classes, for import_sibling_types.py: " +
          ", ".join(r["type"] for r in system))


def find_type(program, name):
    """The program's data type called `name`, or None."""
    from java.util import ArrayList
    found = ArrayList()
    program.getDataTypeManager().findDataTypes(name, found)
    return None if found.isEmpty() else found.get(0)


def apply_to_program(program, report):
    """Write the records and stubs into `program`, in one transaction.

    Returns what changed. A type the program already has is never replaced,
    only reported when its length disagrees with the record.
    """
    from ghidra.program.model.data import (CategoryPath, DataTypeConflictHandler,
                                           StructureDataType, TerminatedStringDataType)
    from ghidra.program.model.symbol import SourceType

    info_type = find_type(program, TYPE_NAME)
    if info_type is None:
        raise SystemExit("%s has no %s; run import_sibling_types.py --type %s first"
                         % (report["program"], TYPE_NAME, TYPE_NAME))
    dtm = program.getDataTypeManager()
    listing = program.getListing()
    space = program.getAddressFactory().getDefaultAddressSpace()
    symbols = program.getSymbolTable()
    done = {"typed": 0, "labelled": 0, "stubbed": 0, "renamed": 0, "mismatched": [], "deferred": []}
    tx = program.startTransaction("Watcom type info")
    ok = False
    try:
        for r in report["records"]:
            at = space.getAddress(int(r["addr"], 16))
            listing.clearCodeUnits(at, at.add(info_type.getLength() - 1), False)
            listing.createData(at, info_type)
            done["typed"] += 1
            name_at = space.getAddress(int(r["name_addr"], 16))
            if listing.getDefinedDataAt(name_at) is None:
                listing.clearCodeUnits(name_at, name_at.add(len(r["mangled"])), False)
                listing.createData(name_at, TerminatedStringDataType.dataType)
            primary = symbols.getPrimarySymbol(at)
            if primary is None or primary.getSource() != SourceType.USER_DEFINED:
                symbols.createLabel(at, r["label"], SourceType.USER_DEFINED).setPrimary()
                done["labelled"] += 1

            existing = find_type(program, r["type"])
            # A stub made under the RTTI spelling, or with only its underscores dropped
            earlier = [n for n in dict.fromkeys((r["class"], r["class"].replace("_", ""))) if n != r["type"]]
            spelled = next((t for t in (find_type(program, n) for n in earlier) if t is not None), None)
            if existing is None and spelled is not None:
                spelled.setName(r["type"])
                done["renamed"] += 1
                existing = spelled
            if existing is not None:
                if existing.getLength() != r["size"]:
                    done["mismatched"].append((r["type"], existing.getLength(), r["size"]))
            elif r["category"].startswith(SYSTEM_CLASS_CATEGORY):
                done["deferred"].append(r["type"])
            else:
                stub = StructureDataType(CategoryPath(r["category"]), r["type"], r["size"], dtm)
                stub.setDescription(STUB_DESCRIPTION)
                dtm.addDataType(stub, DataTypeConflictHandler.KEEP_HANDLER)
                done["stubbed"] += 1
        ok = True
    finally:
        program.endTransaction(tx, ok)
    return done


def apply(report, project_dir, project_name):
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    with pyghidra.program_context(project, "/" + report["program"]) as program:
        from ghidra.util.task import ConsoleTaskMonitor
        done = apply_to_program(program, report)
        print("typed %d records, labelled %d, created %d class stubs, renamed %d"
              % (done["typed"], done["labelled"], done["stubbed"], done["renamed"]))
        for name, have, want in done["mismatched"]:
            print("  existing %s is %d bytes, RTTI says %d" % (name, have, want))
        if done["deferred"]:
            print("  library classes left for import_sibling_types.py: " + " ".join(
                "--type %s" % t for t in done["deferred"]))
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    project.close()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("program")
    ap.add_argument("--sibling", default="nocedit.exe",
                    help="build to compare sizes with and take categories from")
    ap.add_argument("--out", help="write the records as JSON")
    ap.add_argument("--show", type=int, default=20)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--project", nargs=2, metavar=("DIR", "NAME"))
    args = ap.parse_args()

    report = analyse(args.program, args.sibling)
    print_report(report, args.show)
    if args.out:
        with open(args.out, "w") as fh:
            json.dump(report, fh, indent=1)
    if args.apply:
        if not args.project:
            ap.error("--apply needs --project DIR NAME")
        apply(report, *args.project)


if __name__ == "__main__":
    main()
