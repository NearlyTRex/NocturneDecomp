from ghidra.program.model.symbol import SourceType, SymbolType

from ghidra_annotations.annotations.tracked import delete_tracked, export_tracked, import_tracked, namespace_kind
from ghidra_annotations.util import get_or_create_namespace


# A class is a namespace, so it is made under its parent and has no address
def create_class(program, name, parent_name):
    parent = get_or_create_namespace(program, parent_name or "Global")
    symbol_table = program.getSymbolTable()
    if symbol_table.getNamespace(name, parent) is None:
        symbol_table.createClass(parent, name, SourceType.USER_DEFINED)


KIND = namespace_kind("symbols_class", "class symbols", SymbolType.CLASS, create_class)


def delete_symbols_class(currentProgram, path):
    delete_tracked(KIND, currentProgram, path)


def import_symbols_class(currentProgram, path):
    import_tracked(KIND, currentProgram, path)


def export_symbols_class(currentProgram, path):
    export_tracked(KIND, currentProgram, path)
