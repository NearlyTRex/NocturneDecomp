from ghidra.program.model.data import Enum

from ghidra_annotations.annotations.tracked import applied_kind, delete_tracked, export_tracked, import_tracked
from ghidra_annotations.util import resolve_data_type_name


def record(program, data, dt):
    value = data.getValue()
    return {"name": resolve_data_type_name(program, dt), "value": str(value) if value is not None else None}


KIND = applied_kind("enums", lambda dt: isinstance(dt, Enum), record)


def delete_applied_enums(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_applied_enums(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_applied_enums(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
