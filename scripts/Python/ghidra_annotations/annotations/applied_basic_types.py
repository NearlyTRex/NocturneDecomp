from ghidra.program.model.data import Array, Enum, Pointer, Structure, Union

from ghidra_annotations.annotations.tracked import (
    applied_kind, delete_tracked, export_tracked, import_tracked, known_type)
from ghidra_annotations.util import is_string_data_type_obj, resolve_data_type_name


# Whatever the other applied_* kinds leave: scalars, typedefs and the like
def tracks(dt):
    return not isinstance(dt, (Pointer, Array, Structure, Union, Enum)) and not is_string_data_type_obj(dt)


def record(program, data, dt):
    value = data.getValue()
    return {"type": resolve_data_type_name(program, dt), "value": str(value) if value is not None else None}


def rebuild(program, entry):
    return known_type(program, entry.get("type"))


KIND = applied_kind("basic types", tracks, record, rebuild)


def delete_applied_basic_types(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_applied_basic_types(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_applied_basic_types(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
