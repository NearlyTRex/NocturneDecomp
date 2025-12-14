import os
from ghidra_annotations.util import *
from ghidra.program.model.data import DataUtilities
from ghidra.program.model.data import CategoryPath

def should_track_applied_string(type_data):
    if not type_data:
        return False
    return is_string_data_type_obj(type_data)

def delete_applied_strings(currentProgram, path):

    # Load applied strings to get importable markings
    log_info("Loading applied strings to determine which are importable")
    strings_data = load_json_files(path, "applied_strings")
    if strings_data is None:
        log_info("No existing applied strings file found - nothing to delete")
        return

    # Get list of importable string addresses
    importable_strings = set()
    for string_data in strings_data:
        if string_data.get("importable", False):
            string_addr = string_data.get("addr")
            if string_addr:
                importable_strings.add(string_addr)
    log_info("Found %d importable applied strings to delete" % len(importable_strings))
    if not importable_strings:
        log_info("No importable applied strings found - nothing to delete")
        return

    # Delete only importable applied strings
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Applied Strings")
    try:
        to_clear = []
        for data in listing.getDefinedData(True):
            if should_track_applied_string(data.getDataType()):
                string_addr_str = str(data.getAddress())
                if string_addr_str in importable_strings:
                    to_clear.append(data.getMinAddress())
        for addr in to_clear:
            listing.clearCodeUnits(addr, addr, False)
        log_info("Deleted %s applied string(s)" % len(to_clear))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_applied_strings(currentProgram, path):

    # Load applied strings
    log_info("Loading applied strings")
    applied_strings = load_json_files(path, "applied_strings")
    if applied_strings is None:
        log_error("Unable to load applied strings")

    # Get managers
    dtm = currentProgram.getDataTypeManager()

    # Start importing functions
    log_info("Importing applied strings")
    tx_id = currentProgram.startTransaction("Import Applied Strings")
    try:
        for entry in applied_strings:
            dt_addr = get_addr_obj(currentProgram, entry.get("addr"))
            dt_length = entry.get("len", 1)
            dt_charset = entry.get("charset")
            dt_type = resolve_data_type_obj(currentProgram, entry.get("type"))
            dt_importable = entry.get("importable", False)
            if not dt_addr or not dt_type or not dt_importable:
                continue

            # Create the data type
            log_info("Creating applied string at %s [%s]" % (dt_addr, dt_type))
            data = DataUtilities.createData(currentProgram, dt_addr, dt_type, dt_length, False,
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)

            # Apply charset if applicable
            if dt_charset:
                apply_string_charset(data, dt_type, dt_charset)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_applied_strings(currentProgram, path):

    # Load existing applied strings to preserve importable markings
    existing_importable = {}
    try:
        existing_strings = load_json_files(path, "applied_strings")
        if existing_strings:
            log_info("Loading existing importable markings")
            for string_data in existing_strings:
                string_addr = string_data.get("addr")
                if string_addr:
                    existing_importable[string_addr] = string_data.get("importable", False)
                    log_info("Preserving importable marking for applied string at: %s" % string_addr)
    except:
        log_info("No existing applied strings file found, all strings will default to non-importable")

    # Gather applied strings
    applied_strings = []
    for data in currentProgram.getListing().getDefinedData(True):
        dt = data.getDataType()
        if should_track_applied_string(dt):
            dt_name = resolve_data_type_name(currentProgram, dt)
            dt_addr = str(data.getMinAddress())
            dt_length = data.getLength()
            dt_charset = detect_string_charset(currentProgram, data, dt)
            dt_value = extract_string_value(data)
            dt_importable = existing_importable.get(dt_addr, True)

            # Record applied string
            log_info("Recording applied string at %s" % dt_addr)
            entry = {
                "addr": dt_addr,
                "type": dt_name,
                "len": dt_length,
                "importable": dt_importable
            }
            if dt_charset:
                entry["charset"] = dt_charset
            if dt_value:
                entry["value"] = dt_value
            applied_strings.append(entry)

    # Export applied strings
    log_info("Exporting %s applied strings" % len(applied_strings))
    save_json_files(
        path = path,
        filename_base = "applied_strings",
        items = clean_data(applied_strings),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
