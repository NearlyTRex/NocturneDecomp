from ghidra.program.model.data import Structure

from ghidra_annotations.annotations.tracked import applied_kind, delete_tracked, export_tracked, import_tracked
from ghidra_annotations.util import resolve_data_type_name

KIND = applied_kind("structs", lambda dt: isinstance(dt, Structure),
                    lambda program, data, dt: {"name": resolve_data_type_name(program, dt)})


def delete_applied_structs(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_applied_structs(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_applied_structs(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
