from ghidra_annotations.annotations.tracked import (
    applied_kind, delete_tracked, export_tracked, import_tracked, known_type)
from ghidra_annotations.util import (
    apply_string_charset, detect_string_charset, extract_string_value, is_string_data_type_obj,
    resolve_data_type_name)


def record(program, data, dt):
    return {"type": resolve_data_type_name(program, dt),
            "charset": detect_string_charset(program, data, dt),
            "value": extract_string_value(data)}


def rebuild(program, entry):
    return known_type(program, entry.get("type"))


# createData cannot set a string's charset
def after_create(data, dt, entry):
    if entry.get("charset"):
        apply_string_charset(data, dt, entry["charset"])


KIND = applied_kind("strings", is_string_data_type_obj, record, rebuild, after_create)


def delete_applied_strings(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_applied_strings(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_applied_strings(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
