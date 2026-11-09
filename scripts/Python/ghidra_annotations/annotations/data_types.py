# The program's data type database: structs, unions, enums, typedefs and
# function definitions, with the order they can be applied in. A record's
# `importable` flag is the user's, kept from the previous export.
#
# The import updates each type in place, so whatever uses it keeps using it:
# deleting a type in Ghidra turns every use into undefined bytes, so nothing is
# ever deleted.

import os
from collections import defaultdict

from ghidra.program.database.data import DataTypeUtilities
from ghidra.program.model.data import (
    BuiltInDataType, CategoryPath, ComponentOffsetSettingsDefinition, DataTypeConflictHandler, Enum, EnumDataType, FunctionDefinition,
    FunctionDefinitionDataType, ParameterDefinitionImpl, Pointer, PointerTypedef, Structure, StructureDataType,
    TypeDef, TypedefDataType, Union, UnionDataType)
from ghidra.util.exception import InvalidInputException

from ghidra_annotations.annotations.tracked import known_type
from ghidra_annotations.util import (
    collect_typedef_deps, get_primitive_data_types, load_json_file, log_info,
    normalize_data_type_name, resolve_circular_dependencies, resolve_data_type_name, save_json_file,
    should_track_as_dependency)


class DuplicateDataTypeError(Exception):
    """Two data types in one program share a name."""

# The categories data_types.json buckets types into. Kept in one place so the
# duplicate check can never drift out of sync with what export writes.
DATA_TYPE_KINDS = ("structs", "unions", "enums", "typedefs", "function_definitions")

def find_duplicate_data_types(data_types):
    """Return report lines for every name defined more than once in this program.

    A data type's name is its identity everywhere downstream: the exporter keys
    the dependency graph, the apply order and the importable markings by name,
    and headers.py emits one C declaration per name. So two types sharing a name
    is never a difference of opinion between two headers -- it is one definition
    silently winning and the other being dropped, with which one wins decided by
    dict insertion order rather than by anything a human chose.

    They accumulate: a duplicate that survives an export is re-imported by
    import_datatypes.py, which re-creates both copies, so the pair breeds rather
    than settling. Three shapes are reported, all of them defects:

      * same name twice inside one kind -- the windows.h family does this to
        itself (LONG in both windef.h and winnt.h), and deduping in Ghidra
        re-points the dependents at the *base* type rather than at the surviving
        typedef, which is how `LONG lPitch` becomes `long lPitch` and grows to
        8 bytes on the 64-bit lane.
      * the same name in two kinds -- a standalone function definition named
        exactly like the typedef that points at it (nocturne's FARPROC typedef
        has base FARPROC*, referring to itself). Typedef-referenced function
        definitions get renamed to <name>_FUNC by get_function_definition_name;
        standalone ones keep the raw Ghidra name and collide.
      * a Ghidra ".conflict" suffix -- the type manager's own marker for a name
        it could not resolve, which must never reach an export.
    """
    reports = []

    # Same name twice within one kind
    for kind in DATA_TYPE_KINDS:
        by_name = defaultdict(list)
        for entry in data_types.get(kind, []):
            by_name[entry.get("name")].append(entry.get("cat", "<no category>"))
        for name in sorted(by_name):
            cats = by_name[name]
            if len(cats) > 1:
                reports.append("%s: '%s' defined %d times in %s"
                               % (kind, name, len(cats), ", ".join(sorted(cats))))

    # Same name in more than one kind
    kinds_by_name = defaultdict(set)
    cats_by_name = defaultdict(list)
    for kind in DATA_TYPE_KINDS:
        for entry in data_types.get(kind, []):
            kinds_by_name[entry.get("name")].add(kind)
            cats_by_name[entry.get("name")].append("%s@%s" % (kind, entry.get("cat", "?")))
    for name in sorted(kinds_by_name):
        if len(kinds_by_name[name]) > 1:
            reports.append("cross-kind: '%s' is both %s -- %s"
                           % (name, " and ".join(sorted(kinds_by_name[name])),
                              ", ".join(sorted(cats_by_name[name]))))

    # Ghidra's own unresolved-name marker
    for kind in DATA_TYPE_KINDS:
        for entry in data_types.get(kind, []):
            name = entry.get("name") or ""
            if ".conflict" in name:
                reports.append("%s: '%s' carries a Ghidra .conflict suffix (%s)"
                               % (kind, name, entry.get("cat", "?")))

    return reports


# --- function definitions --------------------------------------------------------------------------

def is_function_definition_type(data_type):
    return isinstance(data_type, FunctionDefinition)


def is_function_pointer_typedef(currentProgram, typedef_obj):
    """A typedef of a function definition, or of a pointer to one."""
    base_type = typedef_obj.getDataType()
    if isinstance(base_type, Pointer):
        base_type = base_type.getDataType()
    return is_function_definition_type(base_type)


def get_function_definition_id(func_def):
    """What tells function definitions apart: the universal ID, else the path name."""
    universal_id = func_def.getUniversalID()
    return str(universal_id) if universal_id is not None else func_def.getPathName()


def determine_function_definition_importable(func_def_name, func_def_references, existing_importable):
    """A function definition is importable when a typedef pointing at it is, or the user marked it."""
    referencing_typedefs = func_def_references.get(func_def_name, [])
    if any(typedef_info.get("importable", False) for typedef_info in referencing_typedefs):
        return True
    if referencing_typedefs:
        return existing_importable.get(func_def_name, False)
    return existing_importable.get(func_def_name, True)


def get_function_definition_name(func_def, fallback_base_name):
    """The name a typedef's function definition is recorded under.

    Its own name, unless that is the typedef's (then <name>_FUNC) or a
    placeholder; a placeholder gets one made from the typedef's name.
    """
    existing_name = (func_def.getName() or "").strip()
    if existing_name and not existing_name.startswith("FunctionDef_") and existing_name != "FunctionPointer":
        return existing_name + "_FUNC" if existing_name == fallback_base_name else existing_name
    for suffix, replacement in (("Ptr", "Func"), ("Callback", "CallbackFunc"), ("Handler", "HandlerFunc")):
        if fallback_base_name.endswith(suffix):
            return fallback_base_name[:-len(suffix)] + replacement
    return fallback_base_name + "FuncDef"


def collect_function_definition_dependencies(currentProgram, func_def):
    """The types a function definition needs defined first: its non-pointer return and parameter types."""
    # Ghidra gives every return and parameter a type, DataType.DEFAULT at least
    dependencies = set()
    return_type = func_def.getReturnType()
    if not isinstance(return_type, Pointer):
        return_type_name = normalize_data_type_name(resolve_data_type_name(currentProgram, return_type))
        if should_track_as_dependency(return_type_name):
            dependencies.add(return_type_name)
    for param in func_def.getArguments():
        param_type = param.getDataType()
        param_type_name = normalize_data_type_name(resolve_data_type_name(currentProgram, param_type))
        # A pointer parameter needs only a forward declaration
        if not isinstance(param_type, Pointer) and should_track_as_dependency(param_type_name):
            dependencies.add(param_type_name)
        dependencies.update(dep for dep in collect_typedef_deps(currentProgram, param_type)
                            if should_track_as_dependency(dep))
    return dependencies


def export_function_signature(currentProgram, func_def):
    """A function definition's return type, calling convention, varargs and parameters."""
    # Ghidra names a convention for every function definition, "unknown" at least
    signature_info = {
        "return_type": resolve_data_type_name(currentProgram, func_def.getReturnType()),
        "calling_convention": str(func_def.getCallingConventionName()),
        "parameters": []
    }
    if func_def.hasVarArgs():
        signature_info["has_var_args"] = True
    for i, param in enumerate(func_def.getArguments()):
        param_info = {
            "name": (param.getName() or "").strip() or "param%d" % i,
            "type": resolve_data_type_name(currentProgram, param.getDataType())
        }
        if param.getComment() and param.getComment().strip():
            param_info["comment"] = param.getComment().strip()
        signature_info["parameters"].append(param_info)
    return signature_info


def fix_typedef_dependencies(type_deps, data_types):
    """Add the dependency of each typedef whose base is another typedef by name.

    The base was recorded by its resolved name, which a primitive can hide;
    the match falls back to ignoring case.
    """
    typedef_bases = {t.get("name"): t.get("base") for t in data_types.get("typedefs", [])
                     if t.get("name") and t.get("base")}
    for typedef_name, base_name in typedef_bases.items():
        base_normalized = normalize_data_type_name(base_name)
        matching_typedef = base_normalized if base_normalized in typedef_bases else next(
            (other for other in typedef_bases if other.lower() == base_normalized.lower()), None)
        if matching_typedef and matching_typedef != typedef_name:
            type_deps.setdefault(typedef_name, set()).add(matching_typedef)
    return type_deps


# --- export ---------------------------------------------------------------------------------------

def skipped_name(dt_name):
    """A type the export leaves out: unnamed, undefined, reserved, or a primitive."""
    return (not dt_name or dt_name.startswith("undefined") or dt_name.startswith("__")
            or dt_name in get_primitive_data_types())


def layout_settings(composite):
    """The settings a struct or union's alignment comes from, those that are set.

    `alig` records only the result; an import needs the explicit packing
    value (#pragma pack), the explicit minimum alignment, and machine alignment.
    """
    settings = {}
    if composite.hasExplicitPackingValue():
        settings["pack_value"] = composite.getExplicitPackingValue()
    if composite.hasExplicitMinimumAlignment():
        settings["min_alig"] = composite.getExplicitMinimumAlignment()
    if composite.isMachineAligned():
        settings["machine_aligned"] = True
    return settings


def function_definition_entry(currentProgram, func_def, name, category, importable):
    signature = export_function_signature(currentProgram, func_def)
    entry = {
        "type": "function_definition",
        "name": name,
        "cat": category,
        "return_type": signature["return_type"],
        "calling_convention": signature["calling_convention"],
        "parameters": signature["parameters"],
        "importable": importable
    }
    if signature.get("has_var_args"):
        entry["has_var_args"] = True
    return entry


def export_data_types(currentProgram, path, allow_duplicates = False):
    """Export the program's data type database to data_types/data_types.json.

    Fails the export when two data types share a name -- see
    find_duplicate_data_types for why that is a defect rather than a nuisance.
    Pass allow_duplicates to downgrade it to the report.
    """
    existing_importable = {dt_data["name"]: dt_data.get("importable", False)
                           for kind in DATA_TYPE_KINDS for dt_data in load_records(path).get(kind, [])
                           if dt_data.get("name")}

    type_deps = defaultdict(set)
    type_defs = {}
    function_definitions = {}
    processed_func_defs = {}
    func_def_references = defaultdict(list)
    data_types = {kind: [] for kind in DATA_TYPE_KINDS}
    all_types = list(currentProgram.getDataTypeManager().getAllDataTypes())

    # Every standalone function definition's name, category and importable flag
    original_func_def_metadata = {}
    for dt in all_types:
        if not skipped_name(dt.getName()) and is_function_definition_type(dt):
            original_func_def_metadata[get_function_definition_id(dt)] = {
                "name": dt.getName(),
                "category": dt.getCategoryPath().getPath(),
                "importable": existing_importable.get(dt.getName(), True),
            }

    # A fresh import names the function definition behind FARPROC, WNDPROC and the like
    # exactly as the typedef that points at it, so the two would collide on one name.
    # Renamed here, before either is visited, because which comes first is up to Ghidra.
    for dt in all_types:
        if not isinstance(dt, TypeDef) or not is_function_pointer_typedef(currentProgram, dt):
            continue
        base_type = dt.getDataType()
        pointed_type = base_type.getDataType() if isinstance(base_type, Pointer) else base_type
        metadata = original_func_def_metadata.get(get_function_definition_id(pointed_type))
        if metadata and metadata["name"] == dt.getName():
            metadata["name"] = get_function_definition_name(pointed_type, dt.getName())
            metadata["importable"] = existing_importable.get(metadata["name"], True)

    for dt in all_types:
        dt_name = dt.getName()
        if skipped_name(dt_name):
            continue
        dt_cat_path = dt.getCategoryPath().getPath()
        is_importable = existing_importable.get(dt_name, True)

        if isinstance(dt, Enum):
            data_types["enums"].append({
                "type": "enum",
                "name": dt_name,
                "cat": dt_cat_path,
                "size": dt.getLength(),
                "values": [{"name": n, "val": dt.getValue(n)} for n in dt.getNames()],
                "importable": is_importable
            })
            type_defs[dt_name] = "enum"
            type_deps[dt_name] = set()

        elif isinstance(dt, TypeDef):
            entry = {
                "type": "typedef",
                "name": dt_name,
                "cat": dt_cat_path,
                "base": resolve_data_type_name(currentProgram, dt.getDataType()),
                "importable": is_importable
            }
            # An offset pointer: a pointer typedef with a component offset
            settings = dt.getDefaultSettings()
            if ComponentOffsetSettingsDefinition.DEF.hasValue(settings):
                entry["component_offset"] = int(ComponentOffsetSettingsDefinition.DEF.getValue(settings))

            if is_function_pointer_typedef(currentProgram, dt):
                base_type = dt.getDataType()
                func_def = base_type.getDataType() if isinstance(base_type, Pointer) else base_type
                func_def_id = get_function_definition_id(func_def)
                if func_def_id not in processed_func_defs:
                    metadata = original_func_def_metadata.get(func_def_id) or {
                        "name": get_function_definition_name(func_def, dt_name),
                        "category": dt_cat_path, "importable": is_importable}
                    func_def_entry = function_definition_entry(
                        currentProgram, func_def, metadata["name"], metadata["category"], metadata["importable"])
                    data_types["function_definitions"].append(func_def_entry)
                    function_definitions[metadata["name"]] = func_def_entry
                    processed_func_defs[func_def_id] = metadata["name"]
                    type_defs[metadata["name"]] = "function_definition"
                    type_deps[metadata["name"]] = collect_function_definition_dependencies(currentProgram, func_def)
                func_def_name = processed_func_defs[func_def_id]
                func_def_references[func_def_name].append({"name": dt_name, "importable": is_importable})
                entry["function_definition"] = func_def_name
                entry["base"] = func_def_name + "*"
                type_deps[dt_name].add(func_def_name)
            else:
                type_deps[dt_name].update(dep for dep in collect_typedef_deps(currentProgram, dt)
                                          if dep != dt_name and should_track_as_dependency(dep))
            data_types["typedefs"].append(entry)
            type_defs[dt_name] = "typedef"

        elif isinstance(dt, (Structure, Union)):
            dt_type = "union" if isinstance(dt, Union) else "struct"
            dt_fields = []
            struct_deps = set()
            # Filler bytes are skipped below anyway; walking them is a call per byte
            for comp in dt.getDefinedComponents():
                dt_field_type = comp.getDataType()
                dt_field_type_name = resolve_data_type_name(currentProgram, dt_field_type)
                if dt_field_type_name.startswith("undefined") and comp.getLength() == 1:
                    continue
                dt_field_entry = {
                    "name": comp.getFieldName() or "field_" + str(comp.getOffset()),
                    "type": dt_field_type_name,
                    "offset": comp.getOffset(),
                    "len": comp.getLength()
                }
                if comp.getComment():
                    dt_field_entry["comment"] = comp.getComment()
                dt_fields.append(dt_field_entry)
                struct_deps.update(dep for dep in collect_typedef_deps(currentProgram, dt_field_type)
                                   if dep != dt_name and should_track_as_dependency(dep))
                # Also the field's own type, unless it is a pointer: a pointer field
                # only needs a forward declaration. Without this exception,
                # tridx7.dll's Watcom locale struct (a __lc_time_data* field to an
                # undefined __lc_time_data) aborts the export in
                # resolve_circular_dependencies.
                dt_field_type_name_norm = normalize_data_type_name(dt_field_type_name)
                if (not isinstance(dt_field_type, Pointer)
                        and should_track_as_dependency(dt_field_type_name_norm)
                        and dt_field_type_name_norm != dt_name):
                    struct_deps.add(dt_field_type_name_norm)
            record = {
                "type": dt_type,
                "name": dt_name,
                "cat": dt_cat_path,
                "len": dt.getLength(),
                "desc": dt.getDescription(),
                "fields": dt_fields,
                "alig": dt.getAlignment(),
                "pack": dt.isPackingEnabled(),
                "importable": is_importable
            }
            record.update(layout_settings(dt))
            data_types["unions" if dt_type == "union" else "structs"].append(record)
            type_defs[dt_name] = dt_type
            type_deps[dt_name] = struct_deps

        elif is_function_definition_type(dt):
            func_def_id = get_function_definition_id(dt)
            if func_def_id in processed_func_defs:
                continue
            metadata = original_func_def_metadata[func_def_id]
            entry = function_definition_entry(
                currentProgram, dt, metadata["name"], metadata["category"], metadata["importable"])
            data_types["function_definitions"].append(entry)
            function_definitions[metadata["name"]] = entry
            processed_func_defs[func_def_id] = metadata["name"]
            type_defs[metadata["name"]] = "function_definition"
            type_deps[metadata["name"]] = collect_function_definition_dependencies(currentProgram, dt)

    for func_def_entry in data_types["function_definitions"]:
        func_def_entry["importable"] = determine_function_definition_importable(
            func_def_entry["name"], func_def_references, existing_importable)

    type_deps = fix_typedef_dependencies(type_deps, data_types)
    sorted_order = resolve_circular_dependencies(type_deps, type_defs)
    data_types["apply_order"] = [{"name": n, "type": type_defs[n]} for n in sorted_order if n in type_defs]

    log_info("Exporting %d data types (%d function definitions)" % (len(type_defs), len(function_definitions)))
    save_json_file(path, "data_types", data_types)
    log_info("Export complete")

    # Function conventions lookup for ESP tracking
    export_func_conventions(currentProgram, path)

    # Duplicate name check. Reported unconditionally so a clean run states the
    # count rather than staying silent, which is what lets a count creep up
    # unnoticed between exports. log_info, not log_error: log_error exits.
    duplicates = find_duplicate_data_types(data_types)
    log_info("=" * 60)
    log_info("DUPLICATE DATA TYPE CHECK")
    log_info("  %d name(s) defined more than once" % len(duplicates))
    for msg in duplicates:
        log_info("  DUPLICATE: " + msg)
    log_info("=" * 60)

    # The JSON above is written even when this fails: it is the evidence you
    # grep to find which category each copy came from. But the export exits
    # non-zero, because every downstream consumer -- the dependency graph, the
    # apply order, the emitted headers -- assumes one definition per name, and
    # re-importing a duplicated file re-creates both copies.
    if duplicates and not allow_duplicates:
        raise DuplicateDataTypeError(
            "Duplicate data types: %d name(s) are defined more than once in %s. "
            "Delete the redundant copy in Ghidra (and re-point its dependents at "
            "the survivor -- deleting a typedef re-points them at its base type "
            "instead), or pass --allow-duplicate-data-types to export anyway.\n"
            % (len(duplicates), currentProgram.getDomainFile().getName())
            + "\n".join(duplicates))


def export_func_conventions(currentProgram, path):
    """Each function definition's calling convention and stack bytes, for CALLIND handling in pcode.py."""
    conventions = {}
    for dt in currentProgram.getDataTypeManager().getAllDataTypes():
        if not is_function_definition_type(dt) or not dt.getName() or dt.getName().startswith("undefined"):
            continue
        # Each argument takes at least a stack slot, rounded up to 4 bytes
        param_bytes = sum(max(4, ((arg.getDataType().getLength() + 3) // 4) * 4)
                          for arg in dt.getArguments())
        conventions[dt.getName()] = {'convention': str(dt.getCallingConventionName()), 'param_bytes': param_bytes}
    log_info("Exported %d function conventions" % len(conventions))
    save_json_file(path, "func_conventions", conventions)


# --- import ---------------------------------------------------------------------------------------

def load_records(path):
    """The previous export's data_types.json, or nothing before the first."""
    exists = os.path.isfile(os.path.join(path, "data_types", "data_types.json"))
    return load_json_file(path, "data_types") if exists else {}


def delete_data_types(currentProgram, path):
    """Removes nothing: the import updates each type in place.

    Deleting a type in Ghidra turns every use of it into undefined bytes, which
    an import cannot restore.
    """
    log_info("Data types are updated in place by the import, never deleted")


def category_of(record):
    return CategoryPath(record.get("cat") or "/")


def add_or_update_data_type(currentProgram, new_data_type):
    """Add the type, or replace the existing one of its name and category in place so its uses follow.

    A built-in type of that name is Ghidra's own and is left alone: the export
    records ImageBaseOffset32 as a typedef of void*, which would lose that its
    pointers are image-base relative.
    """
    dtm = currentProgram.getDataTypeManager()
    existing = dtm.getDataType(new_data_type.getCategoryPath(), new_data_type.getName())
    if existing is None:
        return dtm.addDataType(new_data_type, DataTypeConflictHandler.REPLACE_HANDLER)
    if not isinstance(existing, BuiltInDataType) and \
            not DataTypeUtilities.isSameOrEquivalentDataType(existing, new_data_type):
        dtm.replaceDataType(existing, new_data_type, False)
    return existing


def with_layout(composite, record):
    """Set a struct or union's description, packing and the alignment settings it records (layout_settings)."""
    if record.get("desc"):
        composite.setDescription(record["desc"])
    composite.setPackingEnabled(bool(record.get("pack")))
    if record.get("pack_value"):
        composite.setExplicitPackingValue(record["pack_value"])
    if record.get("min_alig"):
        composite.setExplicitMinimumAlignment(record["min_alig"])
    elif record.get("machine_aligned"):
        composite.setToMachineAligned()
    return composite


def build_struct(currentProgram, record):
    """The struct, its fields at their offsets in its recorded length, or None if a field's type is missing."""
    packed = bool(record.get("pack"))
    struct = StructureDataType(category_of(record), record["name"], 0 if packed else record.get("len", 0))
    struct.setPackingEnabled(packed)
    for field in record.get("fields", []):
        field_type = known_type(currentProgram, field.get("type"))
        if field_type is None:
            return None
        length = field.get("len") or field_type.getLength()
        if packed:
            struct.add(field_type, length, field.get("name"), field.get("comment"))
        else:
            struct.replaceAtOffset(field["offset"], field_type, length, field.get("name"), field.get("comment"))
    return with_layout(struct, record)


def build_union(currentProgram, record):
    union = UnionDataType(category_of(record), record["name"])
    for field in record.get("fields", []):
        field_type = known_type(currentProgram, field.get("type"))
        if field_type is None:
            return None
        union.add(field_type, field.get("len") or field_type.getLength(), field.get("name"), field.get("comment"))
    return with_layout(union, record)


def build_enum(currentProgram, record):
    enum = EnumDataType(category_of(record), record["name"], record.get("size", 4))
    for value in record.get("values", []):
        enum.add(value["name"], value["val"])
    return enum


def build_typedef(currentProgram, record):
    """The typedef; an offset pointer is a PointerTypedef to what the recorded pointer points at."""
    base_type = known_type(currentProgram, record.get("base"))
    if base_type is None:
        return None
    if record.get("component_offset") is None:
        return TypedefDataType(category_of(record), record["name"], base_type)
    pointee = base_type.getDataType() if isinstance(base_type, Pointer) else base_type
    typedef = PointerTypedef(record["name"], pointee, -1, currentProgram.getDataTypeManager(),
                             record["component_offset"])
    typedef.setCategoryPath(category_of(record))
    return typedef


def build_function_definition(currentProgram, record):
    return_type = known_type(currentProgram, record.get("return_type", "void"))
    params = [(p.get("name", "param%d" % i), known_type(currentProgram, p.get("type")), p.get("comment"))
              for i, p in enumerate(record.get("parameters", []))]
    if return_type is None or any(param_type is None for _, param_type, _ in params):
        return None
    func_def = FunctionDefinitionDataType(category_of(record), record["name"])
    func_def.setReturnType(return_type)
    func_def.setArguments([ParameterDefinitionImpl(name, t, comment) for name, t, comment in params])
    func_def.setVarArgs(bool(record.get("has_var_args")))
    try:
        func_def.setCallingConvention(record["calling_convention"])
    except InvalidInputException:
        log_info("%s names a calling convention the program lacks: %s" % (
            record["name"], record["calling_convention"]))
    return func_def


BUILDERS = {"struct": build_struct, "union": build_union, "enum": build_enum, "typedef": build_typedef,
            "function_definition": build_function_definition}


def import_order(data_types):
    """The importable records in apply order, then any the order leaves out."""
    by_name = {(r.get("type"), r.get("name")): r for kind in DATA_TYPE_KINDS for r in data_types.get(kind, [])}
    ordered = [by_name.pop((step.get("type"), step.get("name"))) for step in data_types.get("apply_order", [])
               if (step.get("type"), step.get("name")) in by_name]
    return [r for r in ordered + list(by_name.values()) if r.get("importable", False) and r.get("name")]


def import_data_types(currentProgram, path):
    """Apply each importable record, updating the type of its name in place.

    A struct or union the program lacks is made first as an empty shell of its
    recorded size, so a type that refers to it -- a pointer to it, or a cycle --
    can be made before it is filled in. A record naming a type the program does
    not have yet is retried once the rest are in; one still missing is reported.
    """
    records = import_order(load_records(path))
    dtm = currentProgram.getDataTypeManager()
    tx_id = currentProgram.startTransaction("Import Data Types")
    try:
        for record in records:
            if record["type"] in ("struct", "union") and dtm.getDataType(category_of(record), record["name"]) is None:
                shell = (StructureDataType(category_of(record), record["name"], record.get("len", 0))
                         if record["type"] == "struct" else UnionDataType(category_of(record), record["name"]))
                dtm.addDataType(shell, DataTypeConflictHandler.REPLACE_HANDLER)
        pending = records
        while pending:
            missing = []
            for record in pending:
                built = BUILDERS[record["type"]](currentProgram, record)
                if built is None:
                    missing.append(record)
                else:
                    add_or_update_data_type(currentProgram, built)
            if len(missing) == len(pending):
                log_info("%d data types name a type the program lacks: %s" % (
                    len(missing), ", ".join(sorted(r["name"] for r in missing))))
                break
            pending = missing
    finally:
        currentProgram.endTransaction(tx_id, True)
    log_info("Import complete")
