import os
from ghidra_annotations.util import *
from ghidra.program.model.symbol import SourceType

def delete_external_imports(currentProgram, path):

    # Load external imports to get importable markings
    log_info("Loading external imports to determine which are importable")
    imports_data = load_json_file(path, "external_imports")
    if imports_data is None:
        log_info("No existing external imports file found - nothing to delete")
        return

    # Get list of importable external import identifiers
    importable_imports = set()
    for import_data in imports_data:
        if import_data.get("importable", False):
            import_name = import_data.get("name")
            import_lib = import_data.get("lib")
            if import_name and import_lib:
                import_key = "%s|%s" % (import_name, import_lib)
                importable_imports.add(import_key)
    log_info("Found %d importable external imports to delete" % len(importable_imports))
    if not importable_imports:
        log_info("No importable external imports found - nothing to delete")
        return

    # Delete only importable external imports
    sym_table = currentProgram.getSymbolTable()
    ext_mgr = currentProgram.getExternalManager()
    tx_id = currentProgram.startTransaction("Delete External Imports")
    try:
        deleted_count = 0
        for import_key in importable_imports:
            ext_name, ext_library = import_key.split("|", 1)
            log_info("Deleting importable external import: %s from %s" % (ext_name, ext_library))
            try:
                ext_loc = ext_mgr.getExternalLocation(ext_library, ext_name)
                if ext_loc:
                    ext_mgr.removeExternalLocation(ext_loc)
                    deleted_count += 1
                    log_info("Successfully deleted external import: %s" % ext_name)
                else:
                    log_info("External location not found: %s from %s" % (ext_name, ext_library))
            except Exception as e:
                log_info("Failed to delete external import %s: %s" % (ext_name, str(e)))
        log_info("Deleted %d external imports" % deleted_count)
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_external_imports(currentProgram, path):

    # Load external imports
    log_info("Loading external imports")
    external_imports = load_json_file(path, "external_imports")
    if external_imports is None:
        log_error("Unable to load external imports")
        return

    # Build map of existing external locations to detect conflicts
    ext_mgr = currentProgram.getExternalManager()
    existing_by_addr_lib = {}
    sym_table = currentProgram.getSymbolTable()
    for symbol in sym_table.getAllSymbols(True):
        if symbol.isExternal():
            ext_loc = ext_mgr.getExternalLocation(symbol)
            if ext_loc:
                addr_lib_key = (str(ext_loc.getAddress()), ext_loc.getLibraryName())
                existing_by_addr_lib[addr_lib_key] = {
                    "name": symbol.getName(),
                    "location": ext_loc
                }

    # Import external imports
    log_info("Importing external imports")
    tx_id = currentProgram.startTransaction("Import External Imports")
    try:
        imported_count = 0
        skipped_count = 0
        for ext_import in external_imports:
            ext_name = ext_import.get("name")
            ext_library = ext_import.get("lib")
            ext_address = ext_import.get("addr")
            ext_type = ext_import.get("type")
            ext_importable = ext_import.get("importable", False)
            if not ext_name or not ext_library or not ext_importable:
                continue

            # Check if this is an ordinal that conflicts with existing non-ordinal
            is_ordinal = ext_name.startswith("Ordinal_")
            addr_lib_key = (ext_address, ext_library)
            existing_entry = existing_by_addr_lib.get(addr_lib_key)
            if is_ordinal and existing_entry:
                existing_name = existing_entry["name"]
                if not existing_name.startswith("Ordinal_"):
                    log_info("Skipping ordinal import %s (non-ordinal %s already exists at %s::%s)" % (
                        ext_name, existing_name, ext_library, ext_address))
                    skipped_count += 1
                    continue

            # Check if external location already exists by name
            existing_loc = None
            try:
                existing_loc = ext_mgr.getExternalLocation(ext_library, ext_name)
            except:
                pass
            if existing_loc:
                log_info("External import already exists: %s from %s - updating with JSON data" % (ext_name, ext_library))
                try:
                    ext_mgr.removeExternalLocation(existing_loc)
                    log_info("Removed existing external import: %s from %s" % (ext_name, ext_library))
                except Exception as e:
                    log_info("Warning: Could not remove existing external import %s from %s: %s" % (ext_name, ext_library, str(e)))
                    continue

            # Create external location
            log_info("Creating external import: %s from %s" % (ext_name, ext_library))
            try:
                ext_loc = ext_mgr.addExtLocation(ext_library, ext_name, None, SourceType.USER_DEFINED)
                if ext_loc:
                    log_info("Successfully created external import: %s from %s" % (ext_name, ext_library))
                    imported_count += 1
                else:
                    log_info("Failed to create external import: %s from %s" % (ext_name, ext_library))
                    skipped_count += 1
            except Exception as e:
                log_info("Error creating external import %s from %s: %s" % (ext_name, ext_library, str(e)))
                skipped_count += 1
        log_info("Import summary: %d imported, %d skipped" % (imported_count, skipped_count))
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_external_imports(currentProgram, path):

    # Load existing external imports to preserve importable markings
    existing_importable = {}
    existing_data = {}
    try:
        existing_imports = load_json_file(path, "external_imports")
        if existing_imports:
            log_info("Loading existing importable markings")
            for import_data in existing_imports:
                import_name = import_data.get("name")
                import_lib = import_data.get("lib")
                if import_name and import_lib:
                    import_key = "%s|%s" % (import_name, import_lib)
                    existing_importable[import_key] = import_data.get("importable", True)
                    existing_data[import_key] = import_data
                    log_info("Preserving data for external import: %s from %s (importable: %s)" % (import_name, import_lib, import_data.get("importable", True)))
    except:
        log_info("No existing external imports file found, all imports will default to non-importable")

    # Gather external imports
    log_info("Gathering external imports")
    external_imports = []
    sym_table = currentProgram.getSymbolTable()
    ext_mgr = currentProgram.getExternalManager()
    for symbol in sym_table.getAllSymbols(True):
        if symbol.isExternal():
            ext_name_ghidra = symbol.getName()
            ext_loc = ext_mgr.getExternalLocation(symbol)
            if ext_loc is None:
                continue
            ext_library_ghidra = ext_loc.getLibraryName()
            ext_address_ghidra = str(ext_loc.getAddress())
            ext_type_ghidra = str(symbol.getSymbolType())
            import_key = "%s|%s" % (ext_name_ghidra, ext_library_ghidra)
            ext_importable = existing_importable.get(import_key, True)
            existing_entry = existing_data.get(import_key, {})

            # Record external import
            if ext_importable and existing_entry:
                log_info("Using JSON data for importable external import: %s from %s" % (ext_name_ghidra, ext_library_ghidra))
                entry = {
                    "name": existing_entry.get("name", ext_name_ghidra),
                    "lib": existing_entry.get("lib", ext_library_ghidra),
                    "addr": existing_entry.get("addr", ext_address_ghidra),
                    "type": existing_entry.get("type", ext_type_ghidra),
                    "importable": ext_importable
                }
            else:
                log_info("Using Ghidra data for external import: %s from %s (importable: %s)" % (ext_name_ghidra, ext_library_ghidra, ext_importable))
                entry = {
                    "name": ext_name_ghidra,
                    "lib": ext_library_ghidra,
                    "addr": ext_address_ghidra,
                    "type": ext_type_ghidra,
                    "importable": ext_importable
                }
            external_imports.append(entry)

    # Filter out ordinal entries when non-ordinal versions exist for same addr/library
    log_info("Filtering ordinal duplicates")
    addr_lib_entries = {}

    # Group by (addr, library)
    for entry in external_imports:
        addr_lib_key = (entry["addr"], entry["lib"])
        if addr_lib_key not in addr_lib_entries:
            addr_lib_entries[addr_lib_key] = []
        addr_lib_entries[addr_lib_key].append(entry)

    # Choose best entry for each (addr, library) combination
    filtered_imports = []
    ordinal_filtered_count = 0
    for addr_lib_key, entries in addr_lib_entries.items():
        if len(entries) == 1:
            filtered_imports.append(entries[0])
        else:
            non_ordinal_entries = [e for e in entries if not e["name"].startswith("Ordinal_")]
            ordinal_entries = [e for e in entries if e["name"].startswith("Ordinal_")]
            if non_ordinal_entries:
                filtered_imports.extend(non_ordinal_entries)
                ordinal_filtered_count += len(ordinal_entries)
                log_info("Filtered %d ordinal entries for %s::%s (keeping %d non-ordinal)" % (
                    len(ordinal_entries), addr_lib_key[1], addr_lib_key[0], len(non_ordinal_entries)))
            else:
                filtered_imports.extend(ordinal_entries)
    external_imports = filtered_imports
    log_info("Filtered out %d ordinal entries that had non-ordinal alternatives" % ordinal_filtered_count)

    # Sort external imports by address string, then by library
    log_info("Sorting external imports by address and library")
    external_imports.sort(key=lambda x: (x.get("addr", ""), x.get("lib", "")))

    # Export external imports
    log_info("Exporting %d external imports (sorted by address string, then library)" % len(external_imports))
    save_json_file(path, "external_imports", clean_data(external_imports))
    log_info("Export complete")
