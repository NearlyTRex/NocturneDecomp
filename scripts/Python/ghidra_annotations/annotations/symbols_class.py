import os
from ghidra_annotations.util import *
from ghidra.program.model.symbol import SymbolType

def should_track_symbol_class(type_symbol):
    if not type_symbol:
        return False
    if type_symbol.isExternal():
        return False
    return type_symbol.getSymbolType() in [SymbolType.CLASS]

def delete_symbols_class(currentProgram, path):

    # Load class symbols to get importable markings
    log_info("Loading class symbols to determine which are importable")
    symbols_data = load_json_files(path, "symbols_class")
    if symbols_data is None:
        log_info("No existing class symbols file found - nothing to delete")
        return

    # Get list of importable class symbol addresses
    importable_symbols = set()
    for sym_data in symbols_data:
        if sym_data.get("importable", False):
            sym_addr = sym_data.get("addr")
            sym_name = sym_data.get("name")
            if sym_addr and sym_name:
                sym_key = "%s|%s" % (sym_addr, sym_name)
                importable_symbols.add(sym_key)
    log_info("Found %d importable class symbols to delete" % len(importable_symbols))
    if not importable_symbols:
        log_info("No importable class symbols found - nothing to delete")
        return

    # Delete only importable class symbols
    symbol_table = currentProgram.getSymbolTable()
    tx_id = currentProgram.startTransaction("Delete Class Symbols")
    try:
        for symbol in list(symbol_table.getAllSymbols(True)):
            if not should_track_symbol_class(symbol):
                continue
            sym_key = "%s|%s" % (str(symbol.getAddress()), symbol.getName())
            if sym_key in importable_symbols:
                symbol_table.removeSymbolSpecial(symbol)
        log_info("Deleted %d class symbols" % len(importable_symbols))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_symbols_class(currentProgram, path):

    # Load class symbols
    log_info("Loading class symbols")
    symbols_class = load_json_files(path, "symbols_class")
    if symbols_class is None:
        log_error("Unable to load class symbols")

    # Import class symbols
    symbol_table = currentProgram.getSymbolTable()
    tx_id = currentProgram.startTransaction("Import Class Symbols")
    try:
        for sym in symbols_class:
            sym_name = sym.get("name")
            sym_addr = get_addr_obj(currentProgram, sym.get("addr"))
            sym_importable = sym.get("importable", False)
            if not sym_name or not sym_addr or not sym_importable:
                continue

            # Create class symbol
            log_info("Importing class symbol: %s at %s" % (sym_name, sym_addr))
            symbol_table.createClassSymbol(sym_name, sym_addr, SourceType.USER_DEFINED)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_symbols_class(currentProgram, path):

    # Load existing class symbols to preserve importable markings
    existing_importable = {}
    try:
        existing_symbols = load_json_files(path, "symbols_class")
        if existing_symbols:
            log_info("Loading existing importable markings")
            for sym_data in existing_symbols:
                sym_addr = sym_data.get("addr")
                sym_name = sym_data.get("name")
                if sym_addr and sym_name:
                    sym_key = "%s|%s" % (sym_addr, sym_name)
                    existing_importable[sym_key] = sym_data.get("importable", False)
                    log_info("Preserving importable marking for class symbol: %s at %s" % (sym_name, sym_addr))
    except:
        log_info("No existing class symbols file found, all symbols will default to non-importable")

    # Gather class symbols
    symbols_class = []
    log_info("Exporting class symbols")
    for symbol in currentProgram.getSymbolTable().getAllSymbols(True):
        if should_track_symbol_class(symbol):
            sym_name = symbol.getName()
            sym_addr = str(symbol.getAddress())
            sym_key = "%s|%s" % (sym_addr, sym_name)
            sym_importable = existing_importable.get(sym_key, True)

            # Record class symbol
            log_info("Recording class symbol at %s" % sym_addr)
            symbols_class.append({
                "name": sym_name,
                "addr": sym_addr,
                "importable": sym_importable
            })

    # Export class symbols
    log_info("Exporting %s class symbols" % len(symbols_class))
    save_json_files(
        path = path,
        filename_base = "symbols_class",
        items = symbols_class,
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
