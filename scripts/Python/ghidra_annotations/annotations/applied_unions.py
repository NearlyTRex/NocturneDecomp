from ghidra.program.model.data import Union

from ghidra_annotations.annotations.tracked import applied_kind, delete_tracked, export_tracked, import_tracked
from ghidra_annotations.util import resolve_data_type_name

KIND = applied_kind("unions", lambda dt: isinstance(dt, Union),
                    lambda program, data, dt: {"name": resolve_data_type_name(program, dt)})


def delete_applied_unions(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_applied_unions(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_applied_unions(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
