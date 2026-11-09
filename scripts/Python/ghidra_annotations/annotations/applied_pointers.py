from ghidra.program.model.data import Pointer, PointerDataType

from ghidra_annotations.annotations.tracked import (
    applied_kind, delete_tracked, export_tracked, import_tracked, known_type)
from ghidra_annotations.util import resolve_data_type_name


def record(program, data, dt):
    pointee = dt.getDataType()
    return {"to": resolve_data_type_name(program, pointee) if pointee else "void",
            "type": resolve_data_type_name(program, dt)}


# The pointer type itself, else a pointer to the pointee (Pointer is an interface)
def rebuild(program, entry):
    pointer = known_type(program, entry.get("type"))
    if pointer is not None:
        return pointer
    pointee = known_type(program, entry.get("to"))
    return PointerDataType(pointee) if pointee is not None else None


KIND = applied_kind("pointers", lambda dt: isinstance(dt, Pointer), record, rebuild)


def delete_applied_pointers(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_applied_pointers(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_applied_pointers(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
