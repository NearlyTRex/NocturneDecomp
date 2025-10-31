import os
from ghidra_annotations.util.log import *
from ghidra.program.model.symbol import SymbolType
from ghidra.program.model.symbol import SourceType

def get_or_create_namespace(currentProgram, name, parent_name = None, created_cache = None):

    # Create cache if necessary
    if created_cache is None:
        created_cache = {}

    # Handle global namespace
    if name == "Global" and (parent_name is None or parent_name == "Global"):
        return currentProgram.getGlobalNamespace()

    # Check if already in cache
    key = (parent_name, name)
    if key in created_cache:
        return created_cache[key]

    # Get parent
    if parent_name is None or parent_name == "Global":
        parent = currentProgram.getGlobalNamespace()
    else:
        parent = get_or_create_namespace(currentProgram, parent_name, None, created_cache)

    # Get child
    symbol_table = currentProgram.getSymbolTable()
    child = symbol_table.getNamespace(name, parent)
    if child is None:
        log_info("Creating namespace: %s under parent: %s" % (name, parent.getName()))
        child = symbol_table.createNameSpace(parent, name, SourceType.USER_DEFINED)
    created_cache[key] = child
    return child
