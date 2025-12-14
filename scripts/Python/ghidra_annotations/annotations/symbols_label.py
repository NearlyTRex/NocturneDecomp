import os
from ghidra_annotations.util import *
from ghidra.program.model.symbol import SourceType
from ghidra.program.model.symbol import SymbolType
from ghidra.program.model.symbol import SymbolUtilities

def should_track_symbol_label(type_symbol):
    if not type_symbol:
        return False
    if type_symbol.isExternal():
        return False
    return type_symbol.getSymbolType() in [SymbolType.LABEL]

def is_string_label(currentProgram, symbol):

    # Get the address where the symbol is located
    symbol_addr = symbol.getAddress()
    if not symbol_addr:
        return False

    # Check if there's defined data at this address
    listing = currentProgram.getListing()
    data = listing.getDefinedDataAt(symbol_addr)
    if not data:
        return False

    # Check if the data type is a string type
    data_type = data.getDataType()
    if data_type and is_string_data_type_obj(data_type):
        return True

    # Also check if the symbol name suggests it's a string (starts with "s_")
    symbol_name = symbol.getName()
    if symbol_name and symbol_name.startswith("s_"):
        return True
    return False

def is_auto_generated_label(symbol):

    # Check for typical auto-generated patterns
    name = symbol.getName()
    source = symbol.getSource()
    if name.startswith("LAB_") or name.startswith("FUN_") or name.startswith("PTR_"):
        return True

    # Check source type
    if source in [SourceType.DEFAULT, SourceType.ANALYSIS]:
        return True
    return False

def get_symbol_sort_key(symbol):

    # Primary criteria (lower number = higher priority)
    auto_generated = 1 if is_auto_generated_label(symbol) else 0
    is_primary = 0 if symbol.isPrimary() else 1

    # Source type priority (lower number = higher priority)
    source_priority = {
        SourceType.USER_DEFINED: 0,
        SourceType.IMPORTED: 1,
        SourceType.ANALYSIS: 2,
        SourceType.DEFAULT: 3
    }
    source_rank = source_priority.get(symbol.getSource(), 4)

    # Name length and alphabetical as tiebreakers
    name = symbol.getName()
    name_length = len(name)

    # Symbol ID as final tiebreaker for complete determinism
    symbol_id = symbol.getID()
    return (auto_generated, is_primary, source_rank, name_length, name, symbol_id)

def delete_symbols_label(currentProgram, path):

    # Load label symbols to get importable markings
    log_info("Loading label symbols to determine which are importable")
    labels_data = load_json_files(path, "symbols_label")
    if labels_data is None:
        log_info("No existing label symbols file found - nothing to delete")
        return

    # Get list of importable label symbol addresses
    importable_labels = set()
    for label_data in labels_data:
        if label_data.get("importable", False):
            label_addr = label_data.get("addr")
            label_name = label_data.get("name")
            if label_addr and label_name:
                label_key = "%s|%s" % (label_addr, label_name)
                importable_labels.add(label_key)
    log_info("Found %d importable label symbols to delete" % len(importable_labels))
    if not importable_labels:
        log_info("No importable label symbols found - nothing to delete")
        return

    # Delete only importable label symbols
    symbol_table = currentProgram.getSymbolTable()
    tx_id = currentProgram.startTransaction("Delete Label Symbols")
    try:
        deleted_count = 0
        for symbol in list(symbol_table.getAllSymbols(True)):
            if not should_track_symbol_label(symbol):
                continue
            label_key = "%s|%s" % (str(symbol.getAddress()), symbol.getName())
            if label_key in importable_labels:
                symbol_table.removeSymbolSpecial(symbol)
                deleted_count += 1
        log_info("Deleted %d label symbols" % deleted_count)
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_symbols_label(currentProgram, path):

    # Load label symbols
    log_info("Loading label symbols")
    symbols_label = load_json_files(path, "symbols_label")
    if symbols_label is None:
        log_error("Unable to load label symbols")

    # Sort symbols deterministically for consistent import order
    symbols_label.sort(key=lambda s: (s.get("addr", ""), s.get("name", "")))

    # Separate primary and alternate symbols
    primary_symbols = [s for s in symbols_label if not s.get("non_primary", False) and s.get("importable", False)]
    alternate_symbols = [s for s in symbols_label if s.get("non_primary", False) and s.get("importable", False)]

    # Import label symbols
    log_info("Importing label symbols: %d primary, %d alternate" % (len(primary_symbols), len(alternate_symbols)))
    symbol_table = currentProgram.getSymbolTable()
    tx_id = currentProgram.startTransaction("Import Label Symbols")
    try:

        # Import primary symbols
        for sym in primary_symbols:
            sym_name = sym.get("name")
            sym_addr = get_addr_obj(currentProgram, sym.get("addr"))
            sym_ns = get_or_create_namespace(currentProgram, sym.get("ns"))
            if not sym_name or not sym_addr:
                continue
            log_info("Creating primary label symbol: %s at %s" % (sym_name, sym_addr))
            new_symbol = symbol_table.createLabel(sym_addr, sym_name, sym_ns, SourceType.USER_DEFINED)
            if new_symbol:
                new_symbol.setPrimary()

        # Import alternate symbols
        for sym in alternate_symbols:
            sym_name = sym.get("name")
            sym_addr = get_addr_obj(currentProgram, sym.get("addr"))
            sym_ns = get_or_create_namespace(currentProgram, sym.get("ns"))
            if not sym_name or not sym_addr:
                continue
            existing_symbols = symbol_table.getSymbols(sym_addr)
            name_exists = any(s.getName() == sym_name for s in existing_symbols)
            if not name_exists:
                log_info("Creating alternate label symbol: %s at %s" % (sym_name, sym_addr))
                symbol_table.createLabel(sym_addr, sym_name, sym_ns, SourceType.USER_DEFINED)
            else:
                log_info("Skipping alternate label %s at %s (already exists)" % (sym_name, sym_addr))
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_symbols_label(currentProgram, path):

    # Load existing label symbols to preserve importable markings
    existing_importable = {}
    try:
        existing_labels = load_json_files(path, "symbols_label")
        if existing_labels:
            log_info("Loading existing importable markings")
            for label_data in existing_labels:
                label_addr = label_data.get("addr")
                label_name = label_data.get("name")
                if label_addr and label_name:
                    label_key = "%s|%s" % (label_addr, label_name)
                    existing_importable[label_key] = label_data.get("importable", False)
                    log_info("Preserving importable marking for label symbol: %s at %s" % (label_name, label_addr))
    except:
        log_info("No existing label symbols file found, all labels will default to non-importable")

    # Gather label symbols
    all_symbols = []
    for symbol in currentProgram.getSymbolTable().getAllSymbols(True):
        if should_track_symbol_label(symbol):
            all_symbols.append(symbol)

    # Sort symbols deterministically by address first, then by preference criteria
    all_symbols.sort(key=lambda s: (str(s.getAddress()), get_symbol_sort_key(s)))
    log_info("Found %d label symbols total" % len(all_symbols))

    # Build address symbol map with deterministic ordering
    address_symbol_map = {}
    for symbol in all_symbols:
        addr_str = str(symbol.getAddress())
        if addr_str not in address_symbol_map:
            address_symbol_map[addr_str] = []
        address_symbol_map[addr_str].append(symbol)

    # Determine primary symbol for each address (using pre-sorted order)
    primary_symbols = {}
    duplicate_count = 0

    # Process addresses in sorted order for deterministic output
    for addr_str in sorted(address_symbol_map.keys()):
        symbol_list = address_symbol_map[addr_str]
        if len(symbol_list) == 1:
            primary_symbols[addr_str] = symbol_list[0]
        else:
            duplicate_count += len(symbol_list) - 1
            primary_symbols[addr_str] = symbol_list[0]
            log_info("Address %s has %d symbols, chose '%s' as primary" % (
                addr_str, len(symbol_list), symbol_list[0].getName()))

    # Process symbols in deterministic order
    symbols_label = []
    processed_addresses = set()
    for symbol in all_symbols:
        addr_str = str(symbol.getAddress())
        sym_name = symbol.getName()
        sym_ns = symbol.getParentNamespace()
        sym_global = symbol.isGlobal()
        sym_label_key = "%s|%s" % (addr_str, sym_name)
        sym_importable = existing_importable.get(sym_label_key, True)

        # Determine if this symbol is primary at its address
        is_primary = (primary_symbols[addr_str] == symbol)

        # For non-primary symbols, default to non-importable unless explicitly marked
        if not is_primary:
            sym_importable = existing_importable.get(sym_label_key, False)

        # Mark string labels as importable
        if not sym_importable and is_string_label(currentProgram, symbol):
            sym_importable = True
            log_info("Marking string label as importable: %s at %s" % (sym_name, addr_str))

        # Only process if importable or if this is the first symbol we've seen at this address
        should_include = sym_importable or (addr_str not in processed_addresses)
        if should_include:
            entry = {
                "name": sym_name,
                "addr": addr_str,
                "ns": sym_ns.getName() if sym_ns else None,
                "global": sym_global,
                "importable": sym_importable
            }
            if not is_primary:
                entry["non_primary"] = True
            symbols_label.append(entry)
            status = "primary" if is_primary else "alternate"
            log_info("Recording %s label symbol %s at %s" % (status, sym_name, addr_str))
            processed_addresses.add(addr_str)
        else:
            log_info("Skipping alternate label %s at %s (not marked importable)" % (sym_name, addr_str))

    # Log statistics
    total_addresses = len(address_symbol_map)
    addresses_with_duplicates = sum(1 for symbols in address_symbol_map.values() if len(symbols) > 1)
    log_info("Label export statistics:")
    log_info("Total addresses with labels: %d" % total_addresses)
    log_info("Addresses with multiple labels: %d" % addresses_with_duplicates)
    log_info("Total alternate labels found: %d" % duplicate_count)
    log_info("Exported labels: %d" % len(symbols_label))

    # Export label symbols
    log_info("Exporting %s label symbols" % len(symbols_label))
    save_json_files(
        path = path,
        filename_base = "symbols_label",
        items = symbols_label,
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
