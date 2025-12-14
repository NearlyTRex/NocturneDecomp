import os
from ghidra_annotations.util import *
from ghidra.program.model.data import Structure
from ghidra.program.model.data import DataUtilities

def should_track_applied_struct(type_data):
    if not type_data:
        return False
    return isinstance(type_data, Structure)

def delete_applied_structs(currentProgram, path):

    # Load applied structs to get importable markings
    log_info("Loading applied structs to determine which are importable")
    structs_data = load_json_files(path, "applied_structs")
    if structs_data is None:
        log_info("No existing applied structs file found - nothing to delete")
        return

    # Get list of importable struct addresses
    importable_structs = set()
    for struct_data in structs_data:
        if struct_data.get("importable", False):
            struct_addr = struct_data.get("addr")
            if struct_addr:
                importable_structs.add(struct_addr)
    log_info("Found %d importable applied structs to delete" % len(importable_structs))
    if not importable_structs:
        log_info("No importable applied structs found - nothing to delete")
        return

    # Delete only importable applied structs
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Applied Structs")
    try:
        to_clear = []
        for data in listing.getDefinedData(True):
            if should_track_applied_struct(data.getDataType()):
                struct_addr_str = str(data.getAddress())
                if struct_addr_str in importable_structs:
                    to_clear.append(data.getMinAddress())
        for addr in to_clear:
            listing.clearCodeUnits(addr, addr, False)
        log_info("Deleted %s applied struct(s)" % len(to_clear))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_applied_structs(currentProgram, path):

    # Load applied structs
    log_info("Loading applied structs")
    applied_structs = load_json_files(path, "applied_structs")
    if applied_structs is None:
        log_error("Unable to load applied structs")

    # Start importing applied structs
    log_info("Importing applied structs")
    tx_id = currentProgram.startTransaction("Import Applied Structs")
    try:
        for entry in applied_structs:
            dt_addr = get_addr_obj(currentProgram, entry.get("addr"))
            dt_name = entry.get("name")
            dt_length = entry.get("len", 1)
            dt_type = resolve_data_type_obj(currentProgram, dt_name)
            dt_importable = entry.get("importable", False)
            if not dt_addr or not dt_type or not dt_importable:
                continue

            # Create the data type
            log_info("Creating applied struct at %s [%s]" % (dt_addr, dt_type))
            DataUtilities.createData(currentProgram, dt_addr, dt_type, dt_length, False,
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_applied_structs(currentProgram, path):

    # Load existing applied structs to preserve importable markings
    existing_importable = {}
    try:
        existing_structs = load_json_files(path, "applied_structs")
        if existing_structs:
            log_info("Loading existing importable markings")
            for struct_data in existing_structs:
                struct_addr = struct_data.get("addr")
                if struct_addr:
                    existing_importable[struct_addr] = struct_data.get("importable", False)
                    log_info("Preserving importable marking for applied struct at: %s" % struct_addr)
    except:
        log_info("No existing applied structs file found, all structs will default to non-importable")

    # Gather applied structs
    applied_structs = []
    for data in currentProgram.getListing().getDefinedData(True):
        dt = data.getDataType()
        if should_track_applied_struct(dt):
            dt_name = resolve_data_type_name(currentProgram, dt)
            dt_addr = str(data.getAddress())
            dt_length = data.getLength()
            dt_importable = existing_importable.get(dt_addr, True)

            # Record applied struct
            log_info("Recording applied struct at %s" % dt_addr)
            applied_structs.append({
                "addr": dt_addr,
                "name": dt_name,
                "len": dt_length,
                "importable": dt_importable
            })

    # Export applied structs
    log_info("Exporting %s applied structs" % len(applied_structs))
    save_json_files(
        path = path,
        filename_base = "applied_structs",
        items = clean_data(applied_structs),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
