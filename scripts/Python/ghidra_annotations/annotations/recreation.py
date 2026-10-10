import os
import re
import zlib
from ghidra_annotations.util import *
from ghidra_annotations.annotations.functions import RECEIVER_NAME
from ghidra_annotations.annotations.pseudocode.functions import generate_source_filename
from ghidra_annotations.annotations.type_info import get_class_hierarchy, get_class_files
from ghidra.program.model.data import Array
from ghidra.program.model.data import Enum
from ghidra.program.model.data import FunctionDefinition
from ghidra.program.model.data import Pointer
from ghidra.program.model.data import Structure
from ghidra.program.model.data import TypeDef
from ghidra.program.model.data import Undefined
from ghidra.util.task import TaskMonitor


# Input for scaffolding the source recreation: the program's classes, their
# hierarchy and vtables, and every TU-named function with a structured
# signature and its callers. Facts only -- scope (sibling pairing), public
# surface and C++ type choices are decided by scaffold_recreation.py.

NAME_SUFFIX = re.compile(r"_FUN_([0-9a-fA-F]{4,8})$")

# /Nocturne/<Kind>/Game -> recreation kind
GAME_KINDS = {
    "Class": "class",
    "Struct": "struct",
    "Union": "union",
    "Enum": "enum",
    "Typedef": "typedef",
    "FunctionDefinition": "funcdef",
}

# Watcom array-construction descriptors are three-slot tables of
# (ctor, copy, dtor); the vtable scan reports them alongside real vtables.
DESCRIPTOR_SLOTS = ("ctor", "copy", "dtor")

# The CRT's pure-virtual traps. The two builds name them differently
# (pureVirtualStub / handlePureVirtualCall in the editor, pureVirtual /
# pureVirtualConstructor in the game), so match the family.
PURE_VIRTUAL_STUB = re.compile(r"^crt_\w+\.c_(pureVirtual\w*|handlePureVirtualCall)_FUN_")


def classify_data_type(data_type):
    """Return (kind, system_header) for a non-pointer, non-array data type."""
    path = str(data_type.getCategoryPath().getPath())
    parts = path.split("/")
    if path.endswith("/Game") and len(parts) >= 3:
        return GAME_KINDS.get(parts[2], "other"), None
    if "/System/" in path:
        header = next((p[:-2] for p in reversed(parts) if p.endswith(".h")), "misc")
        return "system", header
    if isinstance(data_type, Undefined):
        return "undefined", None
    return "builtin", None


def describe_type(data_type):
    """Structured form of a parameter or return type."""
    ref = {"ptr": 0}
    while data_type is not None:
        if isinstance(data_type, Pointer):
            ref["ptr"] += 1
            data_type = data_type.getDataType()
        elif isinstance(data_type, Array):
            ref.setdefault("array", []).append(data_type.getNumElements())
            data_type = data_type.getDataType()
        else:
            break
    if data_type is None:
        ref.update({"name": "void", "kind": "builtin"})
        return ref
    kind, header = classify_data_type(data_type)
    ref["name"] = data_type.getName()
    ref["kind"] = kind
    if header:
        ref["header"] = header
    return ref


def describe_parameters(params):
    return [{"name": str(p.getName()), "type": describe_type(p.getDataType())} for p in params]


def base_field_parent(structure):
    """Parent named by an offset-0 field called `base`, the convention for inheritance."""
    if structure.getNumComponents() == 0:
        return None
    first = structure.getComponent(0)
    if first.getOffset() != 0 or first.getFieldName() != "base":
        return None
    field_type = first.getDataType()
    return field_type.getName() if isinstance(field_type, Structure) else None


def export_recreation_types(currentProgram):
    hierarchy_parent = {}
    for parent, children in get_class_hierarchy().items():
        for child in children:
            hierarchy_parent[child] = parent
    class_files = get_class_files()

    types = []
    it = currentProgram.getDataTypeManager().getAllDataTypes()
    while it.hasNext():
        dt = it.next()
        # Pointer and array derivatives (`CFoo *`, `CFoo[16]`) share the
        # category of their target; only the type definitions themselves count.
        if isinstance(dt, (Pointer, Array)):
            continue
        kind, _ = classify_data_type(dt)
        if kind not in GAME_KINDS.values():
            continue
        name = str(dt.getName())
        entry = {"name": name, "kind": kind, "size": dt.getLength()}
        if kind in ("class", "struct") and isinstance(dt, Structure) and name.endswith("_vtable"):
            # <Class>_vtable holds the slots the class introduces, named; offsets
            # are relative to where the class's part of the table begins.
            entry["vtable_slots"] = [{"offset": c.getOffset(), "name": str(c.getFieldName())}
                                     for c in dt.getDefinedComponents() if c.getFieldName()]
        elif kind in ("class", "struct") and isinstance(dt, Structure):
            entry["parent"] = hierarchy_parent.get(name) or base_field_parent(dt)
            rtti_file = class_files.get(name)
            if rtti_file:
                entry["rtti_file"] = rtti_file.replace("..\\", "").replace("\\", "/")
        elif kind == "enum" and isinstance(dt, Enum):
            entry["values"] = [{"name": str(n), "value": int(dt.getValue(n))} for n in dt.getNames()]
        elif kind == "funcdef" and isinstance(dt, FunctionDefinition):
            entry["ret"] = describe_type(dt.getReturnType())
            entry["params"] = describe_parameters(dt.getArguments())
            entry["variadic"] = bool(dt.hasVarArgs())
        elif kind == "typedef" and isinstance(dt, TypeDef):
            entry["target"] = describe_type(dt.getDataType())
        types.append(clean_data(entry))
    types.sort(key=lambda t: t["name"])
    return types


def split_function_name(name, type_names):
    """(tu, cls, method) for <module>_<file.ext>_[<Class>_]<method>_FUN_<addr>, else None."""
    if not NAME_SUFFIX.search(name):
        return None
    path = generate_source_filename(name, "")
    tu = os.path.dirname(path)
    if not tu or not tu.endswith((".c", ".cpp")):
        return None
    stem = os.path.splitext(os.path.basename(path))[0]
    rest = NAME_SUFFIX.sub("", stem)
    parts = rest.split("_")
    for i in range(len(parts) - 1, 0, -1):
        candidate = "_".join(parts[:i])
        if candidate in type_names:
            return tu, candidate, "_".join(parts[i:])
    return tu, None, rest


def export_recreation_functions(currentProgram, type_names):
    function_manager = currentProgram.getFunctionManager()
    listing = currentProgram.getListing()
    reference_manager = currentProgram.getReferenceManager()

    functions = []
    for f in function_manager.getFunctions(True):
        name = str(f.getName())
        split = split_function_name(name, type_names)
        if not split:
            continue
        tu, cls, method = split
        params = list(f.getParameters())
        receiver = bool(cls and params and params[0].getName() == RECEIVER_NAME)
        if receiver:
            params = params[1:]

        callers, data_refs = set(), set()
        for ref in reference_manager.getReferencesTo(f.getEntryPoint()):
            source = ref.getFromAddress()
            caller = function_manager.getFunctionContaining(source)
            if ref.getReferenceType().isCall() and caller:
                callers.add(str(caller.getEntryPoint()))
            else:
                data_refs.add(str(source))

        functions.append(clean_data({
            "addr": str(f.getEntryPoint()),
            "name": name,
            "tu": tu,
            "cls": cls,
            "method": method,
            "receiver": receiver,
            "ret": describe_type(f.getReturnType()),
            "params": describe_parameters(params),
            "variadic": bool(f.hasVarArgs()),
            "conv": str(f.getCallingConventionName()),
            "callers": sorted(callers),
            "data_refs": sorted(data_refs),
            "calls": sorted(str(c.getEntryPoint()) for c in f.getCalledFunctions(TaskMonitor.DUMMY)),
            "instructions": sum(1 for _ in listing.getInstructions(f.getBody(), True)),
        }))
    return functions


def export_recreation_vtables(path, functions, types):
    """Vtables with an owning class, and the array descriptors split out."""
    by_addr = {f["addr"]: f for f in functions}
    parent = {t["name"]: t.get("parent") for t in types}

    def ancestors(cls):
        chain = []
        p = parent.get(cls)
        while p and p not in chain:
            chain.insert(0, p)
            p = parent.get(p)
        return chain

    vtables, descriptors = [], []
    for table in load_json_files(path, "vtables") or []:
        slots = [by_addr.get(s["func_addr"]) for s in table["functions"]]
        methods = [s.get("method") if s else None for s in slots]

        # A special member the class lacks is filled with the CRT stub, so a
        # descriptor is any short table whose other slots hold the member its
        # position names.
        stubs = [bool(PURE_VIRTUAL_STUB.match(s["func_name"])) for s in table["functions"]]
        if (len(slots) <= len(DESCRIPTOR_SLOTS) and not all(stubs)
                and all(stub or re.fullmatch(role + r"\d*", method or "")
                        for stub, method, role in zip(stubs, methods, DESCRIPTOR_SLOTS))):
            members = {DESCRIPTOR_SLOTS[i]: s for i, s in enumerate(table["functions"]) if not stubs[i]}
            descriptors.append({
                "addr": table["addr"],
                "cls": next(by_addr[s["func_addr"]].get("cls") for s in members.values()),
                "slots": {role: s["func_addr"] for role, s in members.items()},
            })
            continue

        owners = {}
        for s in slots:
            if s and s.get("cls"):
                owners[s["cls"]] = owners.get(s["cls"], 0) + 1
        if not owners:
            continue

        def coverage(cls):
            chain = set(ancestors(cls)) | {cls}
            return sum(n for c, n in owners.items() if c in chain)

        owner = max(sorted(owners), key=lambda c: (coverage(c), len(ancestors(c))))
        entry = {"addr": table["addr"], "owner": owner, "slots": []}
        for raw, s in zip(table["functions"], slots):
            slot = {"offset": raw["offset"], "addr": raw["func_addr"], "name": raw["func_name"]}
            if PURE_VIRTUAL_STUB.match(raw["func_name"]):
                slot["pure"] = True
            elif s and s.get("cls") and s["cls"] != owner and s["cls"] not in ancestors(owner):
                # A class outside the owner's chain: either a body folded with a
                # sibling's, or a method filed under the wrong class name.
                slot["foreign"] = s["cls"]
            entry["slots"].append(clean_data(slot))
        vtables.append(entry)
    return vtables, descriptors


def export_recreation(currentProgram, path):
    log_info("Gathering recreation types")
    types = export_recreation_types(currentProgram)
    type_names = {t["name"] for t in types if t["kind"] in ("class", "struct", "union")}

    log_info("Gathering recreation functions")
    functions = export_recreation_functions(currentProgram, type_names)

    log_info("Assigning vtable owners")
    if not load_json_files(path, "vtables"):
        log_warning("No vtables export found; run the vtables category first")
    vtables, descriptors = export_recreation_vtables(path, functions, types)

    # Bucketed under recreation/<part>/. Types have no address, so they bucket
    # on a CRC of the name: the hash() fallback is salted per process and would
    # reshuffle the buckets on every export.
    folder = os.path.join(path, "recreation")
    save_json_files(folder, "types", types,
                    lambda t: "%x" % zlib.crc32(t["name"].encode()), bucket_bits=4)
    save_json_files(folder, "functions", functions,
                    lambda f: f["addr"], bucket_bits=7)
    save_json_files(folder, "vtables", vtables,
                    lambda v: "%x" % (int(v["addr"], 16) >> 4), bucket_bits=4)
    save_json_files(folder, "descriptors", descriptors,
                    lambda d: "%x" % (int(d["addr"], 16) >> 4), bucket_bits=4)
    log_info("Exported recreation input: %d types, %d functions, %d vtables, %d descriptors"
             % (len(types), len(functions), len(vtables), len(descriptors)))
