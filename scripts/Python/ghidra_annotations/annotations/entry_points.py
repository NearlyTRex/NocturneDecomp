import os
from ghidra_annotations.util import *

def export_entry_points(currentProgram, path):

    # Gather entry points
    log_info("Gathering entry points")
    entry_points = []
    symbol_table = currentProgram.getSymbolTable()
    entry_addr = currentProgram.getImageBase()
    entry_symbol = symbol_table.getPrimarySymbol(entry_addr)
    if entry_symbol:
        entry_points.append({
            "addr": str(entry_addr),
            "name": entry_symbol.getName()
        })
    else:
        entry_points.append({
            "addr": str(entry_addr),
            "name": "entry"
        })

    # Look for common entry point functions
    common_names = ["main", "WinMain", "_start", "start"]
    for name in common_names:
        try:
            symbols = symbol_table.getGlobalSymbols(name)
            for symbol in symbols:
                if not symbol.isExternal():
                    addr_str = str(symbol.getAddress())
                    if not any(ep["addr"] == addr_str for ep in entry_points):
                        entry_points.append({
                            "addr": addr_str,
                            "name": symbol.getName()
                        })
        except:
            continue

    # Export entry points
    log_info("Exporting %s entry points" % len(entry_points))
    save_json_files(
        path = path,
        filename_base = "entry_points",
        items = clean_data(entry_points),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
