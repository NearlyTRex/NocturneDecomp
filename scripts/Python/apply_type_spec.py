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
      }
    }

"*" holds the enums every program has. Without --apply the program is only read, and each
enum and field that differs is listed. With --apply the renames are made, each listed number
gets the spec's name for it, and each field takes the spec's type and name, before the
program is checked again and saved. An enum the program lacks is reported and never created:
import_datatypes.py copies it from a program that has it. A field is only retyped to an
enum of its own size. Exits non-zero while anything still differs.

    python3 scripts/Python/apply_type_spec.py <project_dir> <project_name> <program> <spec.json>
    python3 scripts/Python/apply_type_spec.py ... --apply
"""

# Imports
import argparse
import json
import os
import sys


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


# One line per field that differs; with apply, each is changed where it can be
def check_fields(dtm, fields, apply):
    from ghidra.program.model.data import Enum
    problems = []
    changes = []
    for struct_name, offset_text, type_name, field_name in fields:
        where = f"field {struct_name}+{offset_text}"
        struct, component, why = find_component(dtm, struct_name, int(offset_text, 16))
        if why:
            problems.append(f"{where}: {why}")
            continue
        have_type = component.getDataType().getName()
        have_name = component.getFieldName()
        if (have_type, have_name) == (type_name, field_name):
            if not apply:
                print(f"  ok  {where} {type_name} {field_name}")
            continue
        problem = f"{where}: {have_type} {have_name}, want {type_name} {field_name}"
        if not apply:
            problems.append(problem)
            continue
        new_type = component.getDataType()
        if type_name != have_type:
            hits = find_named(dtm, type_name, Enum)
            if len(hits) != 1:
                problems.append(f"{problem} ({len(hits)} enums named {type_name})")
                continue
            new_type = hits[0]
        if new_type.getLength() != component.getLength():
            problems.append(f"{problem} ({type_name} is {new_type.getLength()} bytes, "
                            f"the field {component.getLength()})")
            continue
        struct.replaceAtOffset(component.getOffset(), new_type, new_type.getLength(), field_name,
                               component.getComment())
        changes.append(f"{where} is {type_name} {field_name}")
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
    changes = []
    if apply:
        transaction = program.startTransaction("apply_type_spec")
        changes = fix_enums(dtm, spec.get("enum_renames", {}), enums)
        changes += check_fields(dtm, fields, True)[1]
        program.endTransaction(transaction, True)
        report("fixed", changes)
    problems = check_enums(dtm, enums) + check_fields(dtm, fields, False)[0]
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
