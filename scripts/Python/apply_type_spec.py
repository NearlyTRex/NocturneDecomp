#!/usr/bin/env python3
"""Check a program's enums and struct fields against a spec, and bring them in line.

The spec is JSON:

    {
      "enum_renames": {"EDoorOneShot": "EOneShotState"},
      "enums": {
        "*":           {"EFireMode": {"FIRE_MODE_AUTOMATIC": 0, "FIRE_MODE_SINGLE": 1}},
        "nocedit.exe": {"EPlatformSlewMode": {"PLATFORM_SLEW_DISABLED": 0}}
      },
      "fields": {
        "nocedit.exe": [["CWeapon", "0x2dc", "EFireMode", "fire_mode"]]
      },
      "new_enums": {"EFireMode": 4}
    }

"*" holds the enums every program has. "new_enums" gives the size of each enum that is new
to the game: --apply creates it in /Nocturne/Enum/Game where the program lacks it. Without --apply the program is only read, and each
enum and field that differs is listed. With --apply the renames are made, each listed number
gets the spec's name for it, and each field takes the spec's type and name, before the
program is checked again and saved. Any other enum the program lacks is reported and not
created: import_datatypes.py copies it from a program that has it. A field is only retyped to a
type of its own size. Exits non-zero while anything still differs.

The other types, each section keyed "*" or by program like "enums":

    "type_renames": {"*": {"SSoundModeEntry": "SReverbPreset"}},
    "absent":       {"nocedit.exe": ["CSoundDevice_setSfxPos"]},
    "funcdefs":     {"*": {"CSoundDevice_pollPlayback": {
                        "ret": "int", "params": [["CSoundDevice *", "this_ptr"]]}}},
    "structs":      {"bw1.exe": {"SReverbSettings": {"size": "0xc", "category": "/Nocturne/Struct/Game",
                        "fields": [["0x0", "float", "volume"], ["0x4", "float", "decay_time"]]}}},
    "globals":      {"nocedit.exe": [["03f693e8", "SReverbSettings"]]}

A type rename renames whatever single type has the old name (not a pointer or array), once
nothing has the new one. "absent" names types that must be gone. A function definition is
checked for its return and parameter types and names; --apply creates a missing one in its
"category" (or "/") and sets both, all or nothing. A struct is checked for its whole layout:
its size and every defined field, at its offset, with its type and name. --apply creates a
missing one, and rebuilds one that differs to exactly the spec's fields, keeping the comment
of a field the spec keeps at the same offset. A global is checked for the data type at its
address, and --apply puts it there.

    python3 scripts/Python/apply_type_spec.py <project_dir> <project_name> <program> <spec.json>
    python3 scripts/Python/apply_type_spec.py ... --apply
"""

# Imports
import argparse
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import apply_sibling_annotations as asa  # noqa: E402  (after the path it needs)


# The data types of the class and name
def find_named(dtm, name, wanted_class):
    return [dt for dt in dtm.getAllDataTypes()
            if dt.getName() == name and isinstance(dt, wanted_class)]


def enum_values(enum):
    return {str(name): int(enum.getValue(name)) for name in enum.getNames()}


# The name the enum gives a number; a 4-byte enum may hold -1 as its all-ones pattern
def name_of(by_value, value):
    return by_value.get(value, by_value.get(value & 0xFFFFFFFF))


# One line per enum: ok, missing, or each number whose name differs
def check_enums(dtm, expected):
    from ghidra.program.model.data import Enum
    problems = []
    for name, values in expected.items():
        hits = find_named(dtm, name, Enum)
        if not hits:
            problems.append(f"enum {name}: missing")
            continue
        if len(hits) > 1:
            problems.append(f"enum {name}: {len(hits)} of them")
            continue
        by_value = {v: n for n, v in enum_values(hits[0]).items()}
        diffs = []
        for value_name, value in values.items():
            have = name_of(by_value, value)
            if have is None:
                diffs.append(f"{value} missing (want {value_name})")
            elif have != value_name:
                diffs.append(f"{value} is {have} (want {value_name})")
        wanted = set(values.values()) | {v & 0xFFFFFFFF for v in values.values()}
        extra = sorted(set(by_value) - wanted)
        if extra:
            diffs.append(f"extra {', '.join(f'{by_value[v]}={v}' for v in extra)}")
        if diffs:
            problems.append(f"enum {name}: " + "; ".join(diffs))
        else:
            print(f"  ok  enum {name}")
    return problems


GAME_ENUM_CATEGORY = "/Nocturne/Enum/Game"


# Creates, empty, each new enum the program lacks; returns the changes made
def create_enums(dtm, sizes, expected):
    from ghidra.program.model.data import CategoryPath, DataTypeConflictHandler, Enum, EnumDataType
    changes = []
    for name, size in sizes.items():
        if name in expected and not find_named(dtm, name, Enum):
            enum = EnumDataType(CategoryPath(GAME_ENUM_CATEGORY), name, size)
            dtm.addDataType(enum, DataTypeConflictHandler.DEFAULT_HANDLER)
            changes.append(f"enum {name} created ({size} bytes)")
    return changes


# Renames enums, then gives each listed number the spec's name; returns the changes made
def fix_enums(dtm, renames, expected):
    from ghidra.program.model.data import Enum
    changes = []
    for old, new in renames.items():
        hits = find_named(dtm, old, Enum)
        if len(hits) == 1 and not find_named(dtm, new, Enum):
            hits[0].setName(new)
            changes.append(f"enum {old} renamed {new}")
    for name, values in expected.items():
        hits = find_named(dtm, name, Enum)
        if len(hits) != 1:
            continue
        enum = hits[0]
        for value_name, value in values.items():
            actual = enum_values(enum)
            have = name_of({v: n for n, v in actual.items()}, value)
            if have == value_name:
                continue
            if have is not None:
                enum.remove(have)
            if value_name in actual:
                enum.remove(value_name)
            try:
                enum.add(value_name, value)
            except Exception:
                # An unsigned enum refuses -1 and takes its all-ones pattern
                enum.add(value_name, value & 0xFFFFFFFF)
            changes.append(f"enum {name}.{value_name} = {value}" + (f" (was {have})" if have else ""))
    return changes


# The struct's component starting at the offset, or a description of why there is none
def find_component(dtm, struct_name, offset):
    from ghidra.program.model.data import Structure
    structs = [s for s in find_named(dtm, struct_name, Structure) if ".conflict" not in s.getName()]
    if len(structs) != 1:
        return None, None, f"{len(structs)} structs named {struct_name}"
    component = structs[0].getComponentAt(offset)
    if component is None or component.getOffset() != offset:
        return None, None, "no field starts there"
    return structs[0], component, None


# A type's name as written in a spec or by Ghidra, spaces aside ("CThing *" is "CThing*")
def type_key(text):
    return (text or "").replace(" ", "")


def type_name(data_type):
    return data_type.getName() if data_type is not None else None


# The spec's section for the program: "*" merged with the program's own
def section(spec, key, program_name):
    shared, own = spec.get(key, {}).get("*"), spec.get(key, {}).get(program_name)
    if isinstance(shared if shared is not None else own, list):
        return list(shared or []) + list(own or [])
    merged = dict(shared or {})
    merged.update(own or {})
    return merged


# The program's own types with the name: not a pointer, an array or a .conflict copy
def own_types(dtm, name):
    from ghidra.program.model.data import Array, Pointer
    return [dt for dt in dtm.getAllDataTypes()
            if dt.getName() == name and not isinstance(dt, (Pointer, Array))]


def check_renames(dtm, renames, apply):
    problems, changes = [], []
    for old, new in renames.items():
        hits, taken = own_types(dtm, old), own_types(dtm, new)
        if not hits:
            continue
        if apply and len(hits) == 1 and not taken:
            hits[0].setName(new)
            changes.append(f"type {old} renamed {new}")
        else:
            problems.append(f"type {old}: still there, want it named {new}"
                            + (f" ({new} is taken)" if taken else ""))
    return problems, changes


def check_absent(dtm, names):
    return [f"type {name}: still there, want it gone" for name in names if own_types(dtm, name)]


def single(dtm, name, wanted_class, kind):
    hits = [dt for dt in find_named(dtm, name, wanted_class) if ".conflict" not in dt.getName()]
    if len(hits) == 1:
        return hits[0], None
    return None, f"{kind} {name}: {'missing' if not hits else f'{len(hits)} of them'}"


def funcdef_text(ret, params):
    return "%s (%s)" % (ret, ", ".join(f"{t} {n}" for t, n in params))


def resolve_all(dtm, texts, cache):
    """The data types for `texts`, or the first that resolves to nothing."""
    out = []
    for text in texts:
        dt = asa.resolve_type(dtm, text, cache)
        if dt is None:
            return None, text
        out.append(dt)
    return out, None


def category(path):
    from ghidra.program.model.data import CategoryPath
    return CategoryPath(path or "/")


# One line per function definition that differs; with apply, created or set where it can be
def check_funcdefs(dtm, funcdefs, apply, cache):
    from ghidra.program.model.data import (DataTypeConflictHandler, FunctionDefinition,
                                           FunctionDefinitionDataType, ParameterDefinitionImpl)
    problems, changes = [], []
    for name, want in funcdefs.items():
        want_params = [tuple(p) for p in want.get("params", [])]
        found, why = single(dtm, name, FunctionDefinition, "funcdef")
        if found is not None:
            have_params = [(type_name(a.getDataType()), a.getName()) for a in found.getArguments()]
            have = (type_key(type_name(found.getReturnType())), [(type_key(t), n) for t, n in have_params])
            if have == (type_key(want["ret"]), [(type_key(t), n) for t, n in want_params]):
                if not apply:
                    print(f"  ok  funcdef {name}")
                continue
            problem = (f"funcdef {name}: {funcdef_text(type_name(found.getReturnType()), have_params)}, "
                       f"want {funcdef_text(want['ret'], want_params)}")
        elif why.endswith("missing"):
            problem = why
        else:
            problems.append(why)
            continue
        if not apply:
            problems.append(problem)
            continue
        types, missing = resolve_all(dtm, [want["ret"]] + [t for t, _ in want_params], cache)
        if types is None:
            problems.append(f"{problem} (no type {missing})")
            continue
        if found is None:
            found = dtm.addDataType(FunctionDefinitionDataType(category(want.get("category")), name),
                                    DataTypeConflictHandler.DEFAULT_HANDLER)
        found.setReturnType(types[0])
        found.setArguments([ParameterDefinitionImpl(n, dt, None) for (_, n), dt in zip(want_params, types[1:])])
        changes.append(f"funcdef {name} is {funcdef_text(want['ret'], want_params)}")
    return problems, changes


def layout(struct):
    return [(c.getOffset(), type_key(type_name(c.getDataType())), c.getFieldName())
            for c in struct.getDefinedComponents()]


def layout_diff(struct, size, fields):
    have = {o: (t, n) for o, t, n in layout(struct)}
    want = {int(o, 16): (type_key(t), n) for o, t, n in fields}
    diffs = [] if struct.getLength() == size else [f"size {struct.getLength():#x}, want {size:#x}"]
    for offset in sorted(set(have) | set(want)):
        if have.get(offset) != want.get(offset):
            shown = lambda pair: " ".join(pair) if pair else "nothing"  # noqa: E731
            diffs.append(f"{offset:#x} {shown(have.get(offset))}, want {shown(want.get(offset))}")
    return diffs


# One line per struct whose layout differs; with apply, created or rebuilt where it can be
def check_structs(dtm, structs, apply, cache):
    from ghidra.program.model.data import DataTypeConflictHandler, Structure, StructureDataType
    problems, changes = [], []
    for name, want in structs.items():
        size, fields = int(want["size"], 16), want["fields"]
        found, why = single(dtm, name, Structure, "struct")
        if found is not None:
            diffs = layout_diff(found, size, fields)
            if not diffs:
                if not apply:
                    print(f"  ok  struct {name}")
                continue
            problem = f"struct {name}: " + "; ".join(diffs)
        elif why.endswith("missing"):
            problem = why
        else:
            problems.append(why)
            continue
        if not apply:
            problems.append(problem)
            continue
        types, missing = resolve_all(dtm, [t for _, t, _ in fields], cache)
        if types is None:
            problems.append(f"{problem} (no type {missing})")
            continue
        if found is None:
            found = dtm.addDataType(StructureDataType(category(want.get("category")), name, 0, dtm),
                                    DataTypeConflictHandler.DEFAULT_HANDLER)
        comments = {(c.getOffset(), c.getFieldName()): c.getComment() for c in found.getDefinedComponents()}
        found.deleteAll()
        found.growStructure(size)
        for (offset_text, _, field_name), dt in zip(fields, types):
            offset = int(offset_text, 16)
            found.replaceAtOffset(offset, dt, dt.getLength(), field_name, comments.get((offset, field_name)))
        changes.append(f"struct {name} laid out ({len(fields)} fields, {size:#x} bytes)")
    return problems, changes


# One line per global whose data type differs; with apply, the spec's type is put there
def check_globals(program, rows, apply, cache):
    dtm = program.getDataTypeManager()
    space = program.getAddressFactory().getDefaultAddressSpace()
    listing = program.getListing()
    problems, changes = [], []
    for row in rows:
        addr_text, want = row[0], row[1]
        at = space.getAddress(int(addr_text, 16))
        data = listing.getDefinedDataAt(at)
        have = type_name(data.getDataType()) if data is not None else None
        if type_key(have) == type_key(want):
            if not apply:
                print(f"  ok  global {addr_text} {want}")
            continue
        problem = f"global {addr_text}: {have}, want {want}"
        if not apply:
            problems.append(problem)
            continue
        dt = asa.resolve_type(dtm, want, cache)
        if dt is None:
            problems.append(f"{problem} (no type {want})")
            continue
        listing.clearCodeUnits(at, at.add(dt.getLength() - 1), False)
        listing.createData(at, dt)
        changes.append(f"global {addr_text} is {want}")
    return problems, changes


# One line per field that differs; with apply, each is changed where it can be
def check_fields(dtm, fields, apply, cache=None):
    cache = {} if cache is None else cache
    problems = []
    changes = []
    for struct_name, offset_text, want_type, field_name in fields:
        where = f"field {struct_name}+{offset_text}"
        struct, component, why = find_component(dtm, struct_name, int(offset_text, 16))
        if why:
            problems.append(f"{where}: {why}")
            continue
        have_type = component.getDataType().getName()
        have_name = component.getFieldName()
        if (type_key(have_type), have_name) == (type_key(want_type), field_name):
            if not apply:
                print(f"  ok  {where} {want_type} {field_name}")
            continue
        problem = f"{where}: {have_type} {have_name}, want {want_type} {field_name}"
        if not apply:
            problems.append(problem)
            continue
        new_type = component.getDataType()
        if type_key(want_type) != type_key(have_type):
            new_type = asa.resolve_type(dtm, want_type, cache)
            if new_type is None:
                problems.append(f"{problem} (no type {want_type})")
                continue
        if new_type.getLength() != component.getLength():
            problems.append(f"{problem} ({want_type} is {new_type.getLength()} bytes, "
                            f"the field {component.getLength()})")
            continue
        struct.replaceAtOffset(component.getOffset(), new_type, new_type.getLength(), field_name,
                               component.getComment())
        changes.append(f"{where} is {want_type} {field_name}")
    return problems, changes


def report(heading, lines):
    for line in lines:
        print(f"  {heading}  {line}")


# Checks, and with apply fixes, the program; returns what still differs
def run(program, spec, program_name, apply):
    dtm = program.getDataTypeManager()
    enums = dict(spec.get("enums", {}).get("*", {}))
    enums.update(spec.get("enums", {}).get(program_name, {}))
    fields = spec.get("fields", {}).get(program_name, [])
    renames = section(spec, "type_renames", program_name)
    funcdefs = section(spec, "funcdefs", program_name)
    structs = section(spec, "structs", program_name)
    global_rows = section(spec, "globals", program_name)
    cache = {}
    changes = []
    if apply:
        transaction = program.startTransaction("apply_type_spec")
        ok = False
        try:
            changes = create_enums(dtm, spec.get("new_enums", {}), enums)
            changes += fix_enums(dtm, spec.get("enum_renames", {}), enums)
            # Renamed before anything is looked up by its new name; function definitions
            # before the structs whose fields point to them
            changes += check_renames(dtm, renames, True)[1]
            changes += check_funcdefs(dtm, funcdefs, True, cache)[1]
            changes += check_structs(dtm, structs, True, cache)[1]
            changes += check_fields(dtm, fields, True, cache)[1]
            changes += check_globals(program, global_rows, True, cache)[1]
            ok = True
        finally:
            program.endTransaction(transaction, ok)
        report("fixed", changes)
    problems = (check_enums(dtm, enums) + check_renames(dtm, renames, False)[0]
                + check_absent(dtm, section(spec, "absent", program_name))
                + check_funcdefs(dtm, funcdefs, False, cache)[0] + check_structs(dtm, structs, False, cache)[0]
                + check_fields(dtm, fields, False)[0] + check_globals(program, global_rows, False, cache)[0])
    report("DIFFERS", problems)
    if changes:
        from ghidra.util.task import ConsoleTaskMonitor
        program.getDomainFile().save(ConsoleTaskMonitor())
        print(f"saved {len(changes)} change(s) to {program_name}")
    print(f"{len(problems)} difference(s) left in {program_name}")
    return problems


def main():
    parser = argparse.ArgumentParser(description = __doc__.splitlines()[0])
    parser.add_argument("project_dir")
    parser.add_argument("project_name")
    parser.add_argument("program")
    parser.add_argument("spec")
    parser.add_argument("--apply", action = "store_true", help = "make the changes and save")
    args = parser.parse_args()
    with open(args.spec, encoding = "utf-8") as handle:
        spec = json.load(handle)

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_dir), args.project_name)
    with pyghidra.program_context(project, "/" + args.program) as program:
        problems = run(program, spec, args.program, args.apply)
    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main())
