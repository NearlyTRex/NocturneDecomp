import os
from ghidra_annotations.util import *
from ghidra.program.model.data import Enum
from ghidra.program.model.data import DataUtilities

def should_track_applied_enum(type_data):
    if not type_data:
        return False
    return isinstance(type_data, Enum)

def delete_applied_enums(currentProgram, path):

    # Load applied enums to get importable markings
    log_info("Loading applied enums to determine which are importable")
    enums_data = load_json_files(path, "applied_enums")
    if enums_data is None:
        log_info("No existing applied enums file found - nothing to delete")
        return

    # Get list of importable enum addresses
    importable_enums = set()
    for enum_data in enums_data:
        if enum_data.get("importable", False):
            enum_addr = enum_data.get("addr")
            if enum_addr:
                importable_enums.add(enum_addr)
    log_info("Found %d importable applied enums to delete" % len(importable_enums))
    if not importable_enums:
        log_info("No importable applied enums found - nothing to delete")
        return

    # Delete only importable applied enums
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Applied Enums")
    try:
        to_clear = []
        for data in listing.getDefinedData(True):
            if should_track_applied_enum(data.getDataType()):
                enum_addr_str = str(data.getAddress())
                if enum_addr_str in importable_enums:
                    to_clear.append(data.getMinAddress())
        for addr in to_clear:
            listing.clearCodeUnits(addr, addr, False)
        log_info("Deleted %s applied enum(s)" % len(to_clear))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_applied_enums(currentProgram, path):

    # Load applied enums
    log_info("Loading applied enums")
    applied_enums = load_json_files(path, "applied_enums")
    if applied_enums is None:
        log_error("Unable to load applied enums")

    # Import applied enums
    log_info("Importing applied enums")
    tx_id = currentProgram.startTransaction("Import Applied Enums")
    try:
        for entry in applied_enums:
            dt_addr = get_addr_obj(currentProgram, entry.get("addr"))
            dt_length = entry.get("len", 1)
            dt_type = resolve_data_type_obj(currentProgram, entry.get("name"))
            dt_importable = entry.get("importable", False)
            if not dt_addr or not dt_type or not dt_importable:
                continue

            # Create the data type
            log_info("Creating applied enum at %s [%s]" % (dt_addr, dt_type))
            DataUtilities.createData(currentProgram, dt_addr, dt_type, dt_length, False,
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_applied_enums(currentProgram, path):

    # Load existing applied enums to preserve importable markings
    existing_importable = {}
    try:
        existing_enums = load_json_files(path, "applied_enums")
        if existing_enums:
            log_info("Loading existing importable markings")
            for enum_data in existing_enums:
                enum_addr = enum_data.get("addr")
                if enum_addr:
                    existing_importable[enum_addr] = enum_data.get("importable", False)
                    log_info("Preserving importable marking for applied enum at: %s" % enum_addr)
    except:
        log_info("No existing applied enums file found, all enums will default to non-importable")

    # Gather applied enums
    applied_enums = []
    for data in currentProgram.getListing().getDefinedData(True):
        dt = data.getDataType()
        if should_track_applied_enum(dt):
            dt_name = resolve_data_type_name(currentProgram, dt)
            dt_addr = str(data.getAddress())
            dt_length = data.getLength()
            dt_value = data.getValue()
            dt_importable = existing_importable.get(dt_addr, True)

            # Record applied enum
            log_info("Recording applied enum at %s" % dt_addr)
            applied_enums.append({
                "addr": dt_addr,
                "name": dt_name,
                "len": dt_length,
                "value": str(dt_value) if dt_value is not None else None,
                "importable": dt_importable
            })

    # Export applied enums
    log_info("Exporting %s applied enums" % len(applied_enums))
    save_json_files(
        path = path,
        filename_base = "applied_enums",
        items = clean_data(applied_enums),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
