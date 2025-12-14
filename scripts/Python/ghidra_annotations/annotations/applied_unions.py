import os
from ghidra_annotations.util import *
from ghidra.program.model.data import Union
from ghidra.program.model.data import DataUtilities

def should_track_applied_union(type_data):
    if not type_data:
        return False
    return isinstance(type_data, Union)

def delete_applied_unions(currentProgram, path):

    # Load applied unions to get importable markings
    log_info("Loading applied unions to determine which are importable")
    unions_data = load_json_files(path, "applied_unions")
    if unions_data is None:
        log_info("No existing applied unions file found - nothing to delete")
        return

    # Get list of importable union addresses
    importable_unions = set()
    for union_data in unions_data:
        if union_data.get("importable", False):
            union_addr = union_data.get("addr")
            if union_addr:
                importable_unions.add(union_addr)
    log_info("Found %d importable applied unions to delete" % len(importable_unions))
    if not importable_unions:
        log_info("No importable applied unions found - nothing to delete")
        return

    # Delete only importable applied unions
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Applied Unions")
    try:
        to_clear = []
        for data in listing.getDefinedData(True):
            if should_track_applied_union(data.getDataType()):
                union_addr_str = str(data.getAddress())
                if union_addr_str in importable_unions:
                    to_clear.append(data.getMinAddress())
        for addr in to_clear:
            listing.clearCodeUnits(addr, addr, False)
        log_info("Deleted %s applied union(s)" % len(to_clear))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_applied_unions(currentProgram, path):

    # Load applied unions
    log_info("Loading applied unions")
    applied_unions = load_json_files(path, "applied_unions")
    if applied_unions is None:
        log_error("Unable to load applied unions")

    # Start importing applied unions
    log_info("Importing applied unions")
    tx_id = currentProgram.startTransaction("Import Applied Unions")
    try:
        for entry in applied_unions:
            dt_addr = get_addr_obj(currentProgram, entry.get("addr"))
            dt_name = entry.get("name")
            dt_length = entry.get("len", 1)
            dt_type = resolve_data_type_obj(currentProgram, dt_name)
            dt_importable = entry.get("importable", False)
            if not dt_addr or not dt_type or not dt_importable:
                continue

            # Create the data type
            log_info("Creating applied union at %s [%s]" % (dt_addr, dt_type))
            DataUtilities.createData(currentProgram, dt_addr, dt_type, dt_length, False,
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_applied_unions(currentProgram, path):

    # Load existing applied unions to preserve importable markings
    existing_importable = {}
    try:
        existing_unions = load_json_files(path, "applied_unions")
        if existing_unions:
            log_info("Loading existing importable markings")
            for union_data in existing_unions:
                union_addr = union_data.get("addr")
                if union_addr:
                    existing_importable[union_addr] = union_data.get("importable", False)
                    log_info("Preserving importable marking for applied union at: %s" % union_addr)
    except:
        log_info("No existing applied unions file found, all unions will default to non-importable")

    # Gather applied unions
    applied_unions = []
    for data in currentProgram.getListing().getDefinedData(True):
        dt = data.getDataType()
        if should_track_applied_union(dt):
            dt_name = resolve_data_type_name(currentProgram, dt)
            dt_addr = str(data.getAddress())
            dt_length = data.getLength()
            dt_importable = existing_importable.get(dt_addr, True)

            # Record applied union
            log_info("Recording applied union at %s" % dt_addr)
            applied_unions.append({
                "addr": dt_addr,
                "name": dt_name,
                "len": dt_length,
                "importable": dt_importable
            })

    # Export applied unions
    log_info("Exporting %s applied unions" % len(applied_unions))
    save_json_files(
        path = path,
        filename_base = "applied_unions",
        items = clean_data(applied_unions),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
