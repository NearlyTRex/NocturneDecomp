from ghidra_annotations.util import clean_data, log_info, save_json_files


def export_entry_points(currentProgram, path):
    """The program's entry points as Ghidra records them: the PE entry, and each export.

    The image base is not one: in a PE it is the DOS header.
    """
    log_info("Gathering entry points")
    symbol_table = currentProgram.getSymbolTable()
    entry_points = []
    for address in symbol_table.getExternalEntryPointIterator():
        symbol = symbol_table.getPrimarySymbol(address)
        entry_points.append({
            "addr": str(address),
            "name": symbol.getName() if symbol is not None else "entry_%s" % address,
        })

    log_info("Exporting %s entry points" % len(entry_points))
    save_json_files(
        path = path,
        filename_base = "entry_points",
        items = clean_data(entry_points),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
