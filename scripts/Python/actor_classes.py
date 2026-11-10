#!/usr/bin/env python3
"""Name and type what each actor class's registration, class record and vtable prove.

Every actor file's staticInit calls

    CDemonActorType *registerActorClass(CDemonActorType *this_ptr, char *class_name,
        CDemonActor_FactoryFunc *factory_func, int *max_version, int version,
        CDemonActorType *parent_class_info)

with this_ptr = g_<C>ClassInfo, max_version = g_<C>ClassVersion and the
parent's ClassInfo, so the registrations give each class's two globals and
its parent. From those and the class records (watcom_type_info.py):

  registrar     registerActorClass gets nocedit's prototype
  globals       g_<C>ClassInfo (CDemonActorType) and g_<C>ClassVersion (int);
                the parent most classes name that registers nothing itself is
                the root, named as the sibling names its root
  getActorType  a function that is exactly `mov eax, offset g_<C>ClassInfo; ret`
  slots         each record's ctor, copy and dtor become functions named
                <C>_ctor, <C>_copy, <C>_dtor; the do-nothing copy most classes
                share keeps the sibling's name for it (pureVirtualStub)
  vtables       the last vtable a class's constructor stores is g_<C>VTable
  vtable gaps   a vtable slot pointing at code where no function starts begins
                a function; inside another function's body, that function was
                merged with it and is split there

Each class method gets nocedit's prototype for its kind, with the class's
type as this_ptr, and the name is applied only where the function has none.

Usage:
    actor_classes.py bw2.exe --sibling nocedit.exe              # report
    actor_classes.py bw2.exe --apply --project projects NocturneEdit
"""

import argparse
import os
import struct
import sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm
import watcom_static_init as wsi
import watcom_type_info as wti
from thunk_names import name_thunks

ACTOR_TYPE = "CDemonActorType"
# nocedit's prototypes, by kind; "C" is the class
PROTOTYPES = {
    "ctor": ("C*", [("C*", "this_ptr")]),
    "dtor": ("C*", [("C*", "this_ptr"), ("uint", "flags")]),
    "copy": ("C*", [("C*", "this_ptr"), ("C*", "other")]),
    "getActorType": ("CDemonActorType*", [("C*", "this_ptr")]),
}
REGISTRAR_PROTOTYPE = ("CDemonActorType*", [
    ("CDemonActorType*", "this_ptr"), ("char*", "class_name"),
    ("CDemonActor_FactoryFunc*", "factory_func"), ("int*", "max_version"),
    ("int", "version"), ("CDemonActorType*", "parent_class_info")])
SHARED_MIN = 5


def registration_args(image, func, registrar):
    """{this, class, factory, version_ptr, parent} from an entry's call to the registrar."""
    for pushes, call in wsi.entry_calls(image, func):
        if call != registrar or len(pushes) < 6:
            continue
        name = wsi.string_at(image, pushes[-2])
        if not name:
            return None
        return {"this": "%08x" % pushes[-1], "class": wti.type_name(name), "factory": "%08x" % pushes[-3],
                "version_ptr": "%08x" % pushes[-4], "parent": "%08x" % pushes[-6]}
    return None


def class_infos(image, funcs, registrar):
    """class -> registration args, and the root ClassInfo address (or None)."""
    out = {}
    for func in funcs:
        args = registration_args(image, func, registrar)
        if args:
            out[args["class"]] = args
    own = {a["this"] for a in out.values()}
    parents = Counter(a["parent"] for a in out.values() if a["parent"] not in own)
    root = parents.most_common(1)[0][0] if parents else None
    return out, root


def actor_type_getters(image, infos):
    """func -> class, for functions that are `mov eax, offset g_<C>ClassInfo; ret`."""
    by_info = {int(a["this"], 16): c for c, a in infos.items()}
    out = {}
    for addr in image.by_addr:
        off = image.va2off(int(addr, 16))
        if off is None or image.data[off:off + 1] != b"\xb8" or image.data[off + 5:off + 6] != b"\xc3":
            continue
        value = struct.unpack_from("<I", image.data, off + 1)[0]
        if value in by_info:
            out[addr] = by_info[value]
    return out


def ctor_vtables(image, records, vtable_addrs, limit=256):
    """class -> the last vtable its constructor stores into the object."""
    out = {}
    for r in records:
        if r["ctor"] == "00000000":
            continue
        off = image.va2off(int(r["ctor"], 16))
        if off is None:
            continue
        stored = None
        for ins in sm._MD.disasm(image.data[off:off + limit], int(r["ctor"], 16)):
            if ins.mnemonic == "mov" and ins.op_str.startswith("dword ptr ["):
                value = ins.op_str.rsplit(", ", 1)[-1]
                if value.startswith("0x") and "%08x" % int(value, 16) in vtable_addrs:
                    stored = "%08x" % int(value, 16)
            if ins.mnemonic == "ret":
                break
        if stored:
            out[r["class"]] = stored
    return out


def slot_functions(records):
    """(func -> (class, kind)) for unshared slots, and the shared do-nothing slot or None."""
    used = Counter(r[s] for r in records for s in ("ctor", "copy", "dtor") if r[s] != "00000000")
    shared = [a for a, n in used.most_common(1) if n >= SHARED_MIN]
    out = {}
    for r in records:
        for kind in ("ctor", "copy", "dtor"):
            a = r[kind]
            if a != "00000000" and used[a] == 1:
                out[a] = (r["type"], kind)
    return out, (shared[0] if shared else None)


def vtable_gaps(image, vtables):
    """[(slot target, containing function or None)] for slots where no function starts.

    The vtable export ends a vtable at its first slot that is not a function,
    so a slot pointing into a merged function cuts it short. Each vtable is
    read on past its exported end while the dwords still point into code and
    the next vtable has not begun.
    """
    code = wsi.exec_ranges(image)
    starts = {int(v["addr"], 16) for v in vtables}
    out, seen = [], set()
    for vt in vtables:
        at = int(vt["addr"], 16)
        while True:
            off = image.va2off(at)
            if off is None:
                break
            target = struct.unpack_from("<I", image.data, off)[0]
            if not any(lo <= target < hi for lo, hi in code):
                break
            addr = "%08x" % target
            if addr not in image.by_addr and addr not in seen:
                seen.add(addr)
                out.append((addr, image.func_containing(target)))
            at += 4
            if at in starts:
                break
    return sorted(out)


def method_name(current, unit, cls, kind, addr):
    """`<unit>_<C>_<kind>_FUN_<addr>`, or None where the function already has a name.

    `cls` is a type name (watcom_type_info.type_name), so it holds no underscore.
    """
    tu, core = sm.split_qualified_name(current)
    if core is not None:
        return None
    unit = tu if tu and not sm.is_placeholder_unit(tu) else unit or tu
    return "%s%s_%s_FUN_%s" % ("%s_" % unit if unit else "", cls, kind, addr)


def analyse(program, sibling="nocedit.exe"):
    image = sm.Image(program)
    table = max(wsi.find_init_tables(image), key=len)
    funcs = ["%08x" % fn for _, _, prio, fn in table if fn and prio == wsi.GAME_PRIORITY]
    registrar, regs = wsi.registrations(image, funcs)
    infos, root = class_infos(image, funcs, registrar)
    records = wti.scan_type_info(image)
    units = wsi.class_units(image, {})
    sib = sm.Image(sibling) if sibling else None
    sibling_root, shared_name = None, None
    if sib is not None:
        sib_table = max(wsi.find_init_tables(sib), key=len)
        sib_funcs = ["%08x" % fn for _, _, prio, fn in sib_table if fn and prio == wsi.GAME_PRIORITY]
        sib_registrar, sib_regs = wsi.registrations(sib, sib_funcs)
        units.update(wsi.class_units(sib, sib_regs))
        _, sib_root_addr = class_infos(sib, sib_funcs, sib_registrar)
        labels = {s["addr"].lower(): s["name"] for s in sm._load_buckets(sibling, "symbols_label")
                  if "addr" in s}
        sibling_root = labels.get(sib_root_addr)
        _, sib_shared = slot_functions(wti.scan_type_info(sib))
        shared_name = sm.strip_addr_suffix((sib.by_addr.get(sib_shared) or {}).get("name")) or None
    names = {a: f.get("name") for a, f in image.by_addr.items()}

    methods = []
    slots, shared = slot_functions(records)
    for addr, (cls, kind) in sorted(slots.items()):
        methods.append({"addr": addr, "class": cls, "kind": kind, "exists": addr in image.by_addr})
    for addr, cls in sorted(actor_type_getters(image, infos).items()):
        methods.append({"addr": addr, "class": cls, "kind": "getActorType", "exists": True})
    for m in methods:
        m["want"] = method_name(names.get(m["addr"]), units.get(m["class"]), m["class"], m["kind"], m["addr"])

    vtable_addrs = {v["addr"].lower() for v in image.vtables}
    vtables = ctor_vtables(image, records, vtable_addrs)
    globals_ = []
    for cls, a in sorted(infos.items()):
        globals_.append({"addr": a["this"], "name": "g_%sClassInfo" % cls, "type": ACTOR_TYPE})
        globals_.append({"addr": a["version_ptr"], "name": "g_%sClassVersion" % cls, "type": "int"})
    if root and sibling_root:
        globals_.append({"addr": root, "name": sibling_root, "type": ACTOR_TYPE})
    for cls, a in sorted(vtables.items()):
        # Keyed by the RTTI class, which may be underscored (bw3's CAmmo_Mana);
        # the label is spelled as the type, like every other name for the class.
        globals_.append({"addr": a, "name": "g_%sVTable" % wti.type_name(cls), "type": None})

    return {
        "program": program,
        "registrar": registrar,
        "classes": infos,
        "parents": {c: next((p for p, b in infos.items() if b["this"] == a["parent"]), None)
                    for c, a in infos.items()},
        "methods": methods,
        "shared": {"addr": shared, "name": "%s_FUN_%s" % (shared_name, shared)}
                  if shared and shared_name else None,
        "globals": globals_,
        "gaps": vtable_gaps(image, image.vtables),
    }


def print_report(report, show):
    print("%s: %d registered classes, registrar %s" % (report["program"], len(report["classes"]),
                                                     report["registrar"]))
    kinds = Counter(m["kind"] for m in report["methods"])
    named = Counter(m["kind"] for m in report["methods"] if m["want"])
    print("  methods: " + "  ".join("%s=%d (%d to name)" % (k, kinds[k], named[k]) for k in sorted(kinds)))
    print("  missing functions: %d" % sum(1 for m in report["methods"] if not m["exists"]))
    print("  globals: %d   vtable gaps: %d (%d inside another function)"
          % (len(report["globals"]), len(report["gaps"]), sum(1 for _, inside in report["gaps"] if inside)))
    if report["shared"]:
        print("  shared slot %s -> %s" % (report["shared"]["addr"], report["shared"]["name"]))
    for m in [m for m in report["methods"] if m["want"]][:show]:
        print("    %s  %s" % (m["addr"], m["want"]))


def resolve(dtm, text):
    """A data type by name, with trailing pointer stars rebuilt, or None."""
    from java.util import ArrayList
    from ghidra.program.model.data import PointerDataType
    stars = len(text) - len(text.rstrip("*"))
    base = text.rstrip("*").strip()
    found = ArrayList()
    dtm.findDataTypes(base, found)
    if found.isEmpty():
        builtin = dtm.getDataType("/" + base)
        if builtin is None:
            return None
        dt = builtin
    else:
        dt = found.get(0)
    for _ in range(stars):
        dt = PointerDataType(dt)
    return dt


def set_prototype(program, func, ret, params, cls=None):
    """Apply (ret, [(type, name)]) with "C" standing for `cls`; False when a type is missing."""
    from java.util import ArrayList
    from ghidra.program.model.listing import Function, ParameterImpl, ReturnParameterImpl
    from ghidra.program.model.symbol import SourceType
    dtm = program.getDataTypeManager()

    def typed(text):
        return resolve(dtm, text.replace("C*", cls + "*") if cls and text.startswith("C*") else text)

    ret_type = typed(ret)
    if ret_type is None:
        return False
    args = ArrayList()
    for text, name in params:
        dt = typed(text)
        if dt is None:
            return False
        args.add(ParameterImpl(name, dt, program))
    func.updateFunction(None, ReturnParameterImpl(ret_type, program), args,
                        Function.FunctionUpdateType.DYNAMIC_STORAGE_FORMAL_PARAMS, True,
                        SourceType.USER_DEFINED)
    return True


def split_or_create(program, addr, monitor):
    """A function at `addr`, splitting off the body of a function it lies inside."""
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.program.model.address import AddressSet
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()
    at = space.getAddress(int(addr, 16))
    if fm.getFunctionAt(at) is not None:
        return False
    owner = fm.getFunctionContaining(at)
    if owner is not None:
        body = owner.getBody()
        rng = body.getRangeContaining(at)
        owner.setBody(body.subtract(AddressSet(at, rng.getMaxAddress())))
    return bool(CreateFunctionCmd(at).applyTo(program, monitor))


def apply_to_program(program, report):
    """Everything the report plans, in one transaction; returns counts."""
    from ghidra.program.model.data import IntegerDataType
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()
    fm = program.getFunctionManager()
    listing = program.getListing()
    symbols = program.getSymbolTable()
    space = program.getAddressFactory().getDefaultAddressSpace()
    dtm = program.getDataTypeManager()
    done = Counter()
    tx = program.startTransaction("Actor classes")
    ok = False
    try:
        for addr, _ in report["gaps"]:
            done["gap functions"] += split_or_create(program, addr, monitor)
        for m in report["methods"]:
            if not m["exists"]:
                done["slot functions"] += split_or_create(program, m["addr"], monitor)
        if report["registrar"]:
            func = fm.getFunctionAt(space.getAddress(int(report["registrar"], 16)))
            if func is not None and set_prototype(program, func, *REGISTRAR_PROTOTYPE):
                done["registrar prototype"] += 1
        for m in report["methods"]:
            func = fm.getFunctionAt(space.getAddress(int(m["addr"], 16)))
            if func is None or not m["want"]:
                continue
            ret, params = PROTOTYPES[m["kind"]]
            if set_prototype(program, func, ret, params, m["class"]):
                func.setName(m["want"], SourceType.USER_DEFINED)
                done["methods named"] += 1
        if report["shared"]:
            func = fm.getFunctionAt(space.getAddress(int(report["shared"]["addr"], 16)))
            if func is not None and sm.split_qualified_name(func.getName())[1] is None:
                func.setName(report["shared"]["name"], SourceType.USER_DEFINED)
                done["shared slot named"] += 1
        memory = program.getMemory()
        for g in report["globals"]:
            at = space.getAddress(int(g["addr"], 16))
            dt = IntegerDataType.dataType if g["type"] == "int" else (
                resolve(dtm, g["type"]) if g["type"] else None)
            # Ghidra maps .bss only as far as the file's size (add_runtime_heap_block.py)
            if not memory.contains(at, at.add((dt.getLength() if dt else 1) - 1)):
                done["globals outside memory"] += 1
                continue
            if dt is not None:
                listing.clearCodeUnits(at, at.add(dt.getLength() - 1), False)
                listing.createData(at, dt)
            symbols.createLabel(at, g["name"], SourceType.USER_DEFINED).setPrimary()
            done["globals"] += 1
        done["thunks"] = len(name_thunks(program))
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
        print("  " + "  ".join("%s=%d" % kv for kv in sorted(done.items())))
        program.getDomainFile().save(ConsoleTaskMonitor())
        print("Saved.")
    project.close()


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("program")
    ap.add_argument("--sibling", default="nocedit.exe")
    ap.add_argument("--show", type=int, default=15)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--project", nargs=2, metavar=("DIR", "NAME"))
    args = ap.parse_args()
    report = analyse(args.program, args.sibling)
    print_report(report, args.show)
    if args.apply:
        if not args.project:
            ap.error("--apply needs --project DIR NAME")
        apply(report, *args.project)


if __name__ == "__main__":
    main()
