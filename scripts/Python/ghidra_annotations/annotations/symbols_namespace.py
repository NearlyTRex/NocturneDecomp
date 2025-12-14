import os
from ghidra_annotations.util import *
from ghidra.program.model.symbol import SymbolType
from ghidra.program.model.symbol import SourceType

def should_track_symbol_namespace(type_symbol):
    if not type_symbol:
        return False
    if type_symbol.isExternal():
        return False
    if type_symbol.isGlobal():
        return False
    return type_symbol.getSymbolType() in [SymbolType.NAMESPACE]

def delete_symbols_namespace(currentProgram, path):

    # Load namespace symbols to get importable markings
    log_info("Loading namespace symbols to determine which are importable")
    namespaces_data = load_json_files(path, "symbols_namespace")
    if namespaces_data is None:
        log_info("No existing namespace symbols file found - nothing to delete")
        return

    # Get list of importable namespace names
    importable_namespaces = set()
    for ns_data in namespaces_data:
        if ns_data.get("importable", False):
            ns_name = ns_data.get("name")
            ns_parent = ns_data.get("parent")
            if ns_name:
                ns_key = "%s|%s" % (ns_name, ns_parent or "Global")
                importable_namespaces.add(ns_key)
    log_info("Found %d importable namespace symbols to delete" % len(importable_namespaces))
    if not importable_namespaces:
        log_info("No importable namespace symbols found - nothing to delete")
        return

    # Delete only importable namespace symbols
    symbol_table = currentProgram.getSymbolTable()
    tx_id = currentProgram.startTransaction("Delete Namespace Symbols")
    try:
        for symbol in list(symbol_table.getAllSymbols(True)):
            if not should_track_symbol_namespace(symbol):
                continue
            sym_ns = symbol.getObject()
            sym_parent_ns = sym_ns.getParentNamespace()
            sym_name = sym_ns.getName()
            sym_parent_name = sym_parent_ns.getName() if sym_parent_ns else "Global"
            sym_ns_key = "%s|%s" % (sym_name, sym_parent_name)
            if sym_ns_key in importable_namespaces:
                symbol_table.removeSymbolSpecial(symbol)
        log_info("Deleted %d namespace symbols" % len(importable_namespaces))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_symbols_namespace(currentProgram, path):

    # Load namespace symbols
    log_info("Loading namespace symbols")
    symbols_namespace = load_json_files(path, "symbols_namespace")
    if symbols_namespace is None:
        log_error("Unable to load namespace symbols")

    # Import namespace symbols
    tx_id = currentProgram.startTransaction("Import Symbol Namespaces")
    try:
        for sym in symbols_namespace:
            sym_name = sym.get("name")
            sym_parent_name = sym.get("parent")
            sym_importable = sym.get("importable", False)
            if not sym_name or not sym_importable:
                continue
            get_or_create_namespace(currentProgram, sym_name, sym_parent_name)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_symbols_namespace(currentProgram, path):

    # Load existing namespace symbols to preserve importable markings
    existing_importable = {}
    try:
        existing_namespaces = load_json_files(path, "symbols_namespace")
        if existing_namespaces:
            log_info("Loading existing importable markings")
            for ns_data in existing_namespaces:
                ns_name = ns_data.get("name")
                ns_parent = ns_data.get("parent")
                if ns_name:
                    ns_key = "%s|%s" % (ns_name, ns_parent or "Global")
                    existing_importable[ns_key] = ns_data.get("importable", False)
                    log_info("Preserving importable marking for namespace: %s (parent: %s)" % (ns_name, ns_parent or "Global"))
    except:
        log_info("No existing namespace symbols file found, all namespaces will default to non-importable")

    # Gather namespace symbols
    symbols_namespace = []
    for symbol in currentProgram.getSymbolTable().getAllSymbols(True):
        if should_track_symbol_namespace(symbol):
            sym_ns = symbol.getObject()
            sym_parent_ns = sym_ns.getParentNamespace()
            sym_name = sym_ns.getName()
            sym_parent_name = sym_parent_ns.getName() if sym_parent_ns else None
            sym_ns_key = "%s|%s" % (sym_name, sym_parent_name or "Global")
            sym_importable = existing_importable.get(sym_ns_key, True)

            # Record namespace symbol
            log_info("Recording namespace symbol %s from parent %s" % (sym_name, sym_parent_name))
            symbols_namespace.append({
                "name": sym_name,
                "parent": sym_parent_name,
                "importable": sym_importable
            })

    # Export namespace symbols
    log_info("Exporting %s namespace symbols" % len(symbols_namespace))
    save_json_files(
        path = path,
        filename_base = "symbols_namespace",
        items = clean_data(symbols_namespace),
        addr_func = lambda x: x.get("name", ""),
        bucket_bits = 4)
    log_info("Export complete")
