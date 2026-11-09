from ghidra.program.model.symbol import SymbolType

from ghidra_annotations.annotations.tracked import delete_tracked, export_tracked, import_tracked, namespace_kind
from ghidra_annotations.util import get_or_create_namespace

KIND = namespace_kind("symbols_namespace", "namespace symbols", SymbolType.NAMESPACE,
                      lambda program, name, parent: get_or_create_namespace(program, name, parent))


def delete_symbols_namespace(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_symbols_namespace(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_symbols_namespace(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
