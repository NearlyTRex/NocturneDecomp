from ghidra.program.model.data import Array, ArrayDataType

from ghidra_annotations.annotations.tracked import (
    applied_kind, delete_tracked, export_tracked, import_tracked, known_type)
from ghidra_annotations.util import resolve_data_type_name


def record(program, data, dt):
    return {"type": resolve_data_type_name(program, dt.getDataType()), "count": dt.getNumElements()}


# An array is recorded by its element type and count, and rebuilt from them
def rebuild(program, entry):
    element = known_type(program, entry.get("type"))
    if element is None:
        return None
    return ArrayDataType(element, entry.get("count", 1), element.getLength())


KIND = applied_kind("arrays", lambda dt: isinstance(dt, Array), record, rebuild)


def delete_applied_arrays(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_applied_arrays(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_applied_arrays(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
