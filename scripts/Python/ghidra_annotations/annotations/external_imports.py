# The program's imports from other libraries, in one file. A record's
# `importable` flag is the user's, kept from the previous export.

import os

from ghidra.program.model.symbol import SourceType

from ghidra_annotations.util import clean_data, load_json_file, log_info, save_json_file

FILENAME = "external_imports"


def is_ordinal(name):
    return name.startswith("Ordinal_")


def key(entry):
    return "%s|%s" % (entry["name"], entry["lib"]) if entry.get("name") and entry.get("lib") else None


# The previous export's records, or none before the first
def load_records(path):
    exists = os.path.isfile(os.path.join(path, FILENAME, FILENAME + ".json"))
    return load_json_file(path, FILENAME) if exists else []


def external_locations(program):
    """(symbol, its external location) for each external symbol that has one."""
    manager = program.getExternalManager()
    found = []
    for symbol in program.getSymbolTable().getAllSymbols(True):
        location = manager.getExternalLocation(symbol) if symbol.isExternal() else None
        if location is not None:
            found.append((symbol, location))
    return found


def find_location(manager, library, name):
    """The program's import of `name` from `library`, or None."""
    return next(iter(manager.getExternalLocations(library, name)), None)


def drop_shadowed_ordinals(records):
    """An ordinal import of an address and library a named import also has is the same import."""
    named = {(r["addr"], r["lib"]) for r in records if not is_ordinal(r["name"])}
    kept = [r for r in records if not is_ordinal(r["name"]) or (r["addr"], r["lib"]) not in named]
    log_info("Filtered out %d ordinal entries that had non-ordinal alternatives" % (len(records) - len(kept)))
    return kept


def delete_external_imports(currentProgram, path):
    """Removes nothing: the import only adds the imports a program lacks.

    Removing an import loses the references to it, which an import cannot make
    back, and deleting an external function's symbol leaves its location behind
    as a label, so there is nothing a delete could do that the import needs.
    """
    log_info("External imports are only added, never removed")


def import_external_imports(currentProgram, path):
    """Add each importable import the program lacks. One it has is left alone, so its references stay."""
    manager = currentProgram.getExternalManager()
    named_at = {(str(location.getAddress()), location.getLibraryName())
                for symbol, location in external_locations(currentProgram) if not is_ordinal(symbol.getName())}
    imported = skipped = 0
    tx_id = currentProgram.startTransaction("Import External Imports")
    try:
        for record in load_records(path):
            if not record.get("importable", False) or key(record) is None:
                continue
            name, library = record["name"], record["lib"]
            if (is_ordinal(name) and (record.get("addr"), library) in named_at) or \
                    find_location(manager, library, name) is not None:
                skipped += 1
                continue
            if record.get("type") == "Function":
                manager.addExtFunction(library, name, None, SourceType.USER_DEFINED)
            else:
                manager.addExtLocation(library, name, None, SourceType.USER_DEFINED)
            imported += 1
        log_info("Import summary: %d imported, %d skipped" % (imported, skipped))
    finally:
        currentProgram.endTransaction(tx_id, True)


def export_external_imports(currentProgram, path):
    importable = {key(r): r.get("importable", True) for r in load_records(path) if key(r)}
    records = []
    for symbol, location in external_locations(currentProgram):
        record = {"name": symbol.getName(), "lib": location.getLibraryName(),
                  "addr": str(location.getAddress()), "type": str(symbol.getSymbolType())}
        record["importable"] = importable.get(key(record), True)
        records.append(record)
    records = drop_shadowed_ordinals(records)
    records.sort(key = lambda r: (r["addr"], r["lib"]))
    log_info("Exporting %d external imports" % len(records))
    save_json_file(path, FILENAME, clean_data(records))
    log_info("Export complete")
