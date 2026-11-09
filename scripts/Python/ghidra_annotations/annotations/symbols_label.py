# Label symbols. Each address's labels are ranked, and the best is recorded as
# its primary; an alternate is recorded only when it is importable. A record's
# `importable` flag is the user's, kept from the previous export. A new record
# starts importable if it is the primary or labels a string. A dynamic label
# (DAT_, LAB_, s_ and the like, which Ghidra names from the references to an
# address) is never importable: it comes back with the references.

from ghidra.program.model.symbol import SourceType, SymbolType

from ghidra_annotations.util import (
    get_addr_obj, get_or_create_namespace, is_string_data_type_obj, load_json_files, log_info, save_json_files)

# Lower ranks first: names a person gave beat the ones analysis made up
SOURCE_RANK = {SourceType.USER_DEFINED: 0, SourceType.IMPORTED: 1, SourceType.ANALYSIS: 2, SourceType.DEFAULT: 3}


def should_track_symbol_label(symbol):
    return symbol is not None and not symbol.isExternal() and symbol.getSymbolType() == SymbolType.LABEL


def is_string_label(currentProgram, symbol):
    """Whether the label is on defined data that is a string, or is named like one (s_...)."""
    data = currentProgram.getListing().getDefinedDataAt(symbol.getAddress()) if symbol.getAddress() else None
    if data is None:
        return False
    return bool(is_string_data_type_obj(data.getDataType())) or symbol.getName().startswith("s_")


def is_auto_generated_label(symbol):
    name = symbol.getName()
    return name.startswith(("LAB_", "FUN_", "PTR_")) or symbol.getSource() in (SourceType.DEFAULT, SourceType.ANALYSIS)


def get_symbol_sort_key(symbol):
    """The order labels at one address are ranked in, best first; the symbol ID settles any tie."""
    return (1 if is_auto_generated_label(symbol) else 0, 0 if symbol.isPrimary() else 1,
            SOURCE_RANK.get(symbol.getSource(), 4), len(symbol.getName()), symbol.getName(), symbol.getID())


def key(entry):
    return "%s|%s" % (entry["addr"], entry["name"]) if entry.get("addr") and entry.get("name") else None


def delete_symbols_label(currentProgram, path):
    importable = {key(r) for r in load_json_files(path, "symbols_label") if r.get("importable", False) and key(r)}
    log_info("Found %d importable label symbols to delete" % len(importable))
    if not importable:
        return
    symbol_table = currentProgram.getSymbolTable()
    tx_id = currentProgram.startTransaction("Delete Label Symbols")
    try:
        doomed = [s for s in symbol_table.getAllSymbols(True) if should_track_symbol_label(s)
                  and "%s|%s" % (s.getAddress(), s.getName()) in importable]
        for symbol in doomed:
            symbol_table.removeSymbolSpecial(symbol)
        log_info("Deleted %d label symbols" % len(doomed))
    finally:
        currentProgram.endTransaction(tx_id, True)


def import_symbols_label(currentProgram, path):
    """Create the importable labels: each primary made primary, each alternate added if missing."""
    records = sorted((r for r in load_json_files(path, "symbols_label") if r.get("importable", False)),
                     key = lambda r: (r.get("addr", ""), r.get("name", "")))
    primaries = [r for r in records if not r.get("non_primary", False)]
    alternates = [r for r in records if r.get("non_primary", False)]
    log_info("Importing label symbols: %d primary, %d alternate" % (len(primaries), len(alternates)))
    symbol_table = currentProgram.getSymbolTable()
    tx_id = currentProgram.startTransaction("Import Label Symbols")
    try:
        for record, primary in [(r, True) for r in primaries] + [(r, False) for r in alternates]:
            address = get_addr_obj(currentProgram, record.get("addr"))
            if not record.get("name") or not address:
                continue
            if not primary and any(s.getName() == record["name"] for s in symbol_table.getSymbols(address)):
                continue
            namespace = get_or_create_namespace(currentProgram, record.get("ns") or "Global")
            symbol = symbol_table.createLabel(address, record["name"], namespace, SourceType.USER_DEFINED)
            if primary:
                symbol.setPrimary()
    finally:
        currentProgram.endTransaction(tx_id, True)
    log_info("Import complete")


def export_symbols_label(currentProgram, path):
    marked = {key(r): r.get("importable", False) for r in load_json_files(path, "symbols_label") if key(r)}
    labels = sorted((s for s in currentProgram.getSymbolTable().getAllSymbols(True) if should_track_symbol_label(s)),
                    key = lambda s: (str(s.getAddress()), get_symbol_sort_key(s)))
    log_info("Found %d label symbols total" % len(labels))

    records = []
    seen = set()
    for symbol in labels:
        addr = str(symbol.getAddress())
        primary = addr not in seen
        seen.add(addr)
        record = {"name": symbol.getName(), "addr": addr}
        importable = marked.get(key(record))
        if importable is None:
            importable = primary or is_string_label(currentProgram, symbol)
        # A dynamic label is Ghidra's name for a referenced address; imported, it would become a fixed label
        if symbol.isDynamic():
            importable = False
        if not primary and not importable:
            continue
        namespace = symbol.getParentNamespace()
        record.update({"ns": namespace.getName() if namespace else None, "global": symbol.isGlobal(),
                       "importable": importable})
        if not primary:
            record["non_primary"] = True
        records.append(record)

    log_info("Total addresses with labels: %d" % len(seen))
    log_info("Alternate labels found: %d" % (len(labels) - len(seen)))
    log_info("Exporting %s label symbols" % len(records))
    save_json_files(
        path = path,
        filename_base = "symbols_label",
        items = records,
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
