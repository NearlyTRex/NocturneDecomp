import os
from ghidra_annotations.util import *
from ghidra.program.model.data import Pointer
from ghidra.program.model.data import DataUtilities

def should_track_applied_pointer(type_data):
    if not type_data:
        return False
    return isinstance(type_data, Pointer)

def delete_applied_pointers(currentProgram, path):

    # Load applied pointers to get importable markings
    log_info("Loading applied pointers to determine which are importable")
    pointers_data = load_json_files(path, "applied_pointers")
    if pointers_data is None:
        log_info("No existing applied pointers file found - nothing to delete")
        return

    # Get list of importable pointer addresses
    importable_pointers = set()
    for ptr_data in pointers_data:
        if ptr_data.get("importable", False):
            ptr_addr = ptr_data.get("addr")
            if ptr_addr:
                importable_pointers.add(ptr_addr)
    log_info("Found %d importable applied pointers to delete" % len(importable_pointers))
    if not importable_pointers:
        log_info("No importable applied pointers found - nothing to delete")
        return

    # Delete only importable applied pointers
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Applied Pointers")
    try:
        to_clear = []
        for data in listing.getDefinedData(True):
            if should_track_applied_pointer(data.getDataType()):
                ptr_addr_str = str(data.getAddress())
                if ptr_addr_str in importable_pointers:
                    to_clear.append(data.getMinAddress())
        for addr in to_clear:
            listing.clearCodeUnits(addr, addr, False)
        log_info("Deleted %s applied pointer(s)" % len(to_clear))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_applied_pointers(currentProgram, path):

    # Load applied pointers
    log_info("Loading applied pointers")
    applied_pointers = load_json_files(path, "applied_pointers")
    if applied_pointers is None:
        log_error("Unable to load applied pointers")

    # Import applied pointers
    log_info("Importing applied pointers")
    tx_id = currentProgram.startTransaction("Import Applied Pointers")
    try:
        for entry in applied_pointers:
            dt_addr = get_addr_obj(currentProgram, entry.get("addr"))
            dt_length = entry.get("len", 1)
            dt_to = resolve_data_type_obj(currentProgram, entry.get("to"))
            dt_type = resolve_data_type_obj(currentProgram, entry.get("type"))
            if dt_type is None and dt_to is not None:
                dt_type = Pointer(dt_to)
            dt_importable = entry.get("importable", False)
            if not dt_addr or not dt_type or not dt_importable:
                continue

            # Create the data type
            log_info("Creating importable applied pointer at %s [%s]" % (dt_addr, dt_type))
            DataUtilities.createData(
                currentProgram, dt_addr, dt_type, dt_length, False,
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Pointer import complete")

def export_applied_pointers(currentProgram, path):

    # Load existing applied pointers to preserve importable markings
    existing_importable = {}
    try:
        existing_pointers = load_json_files(path, "applied_pointers")
        if existing_pointers:
            log_info("Loading existing importable markings")
            for ptr_data in existing_pointers:
                ptr_addr = ptr_data.get("addr")
                if ptr_addr:
                    existing_importable[ptr_addr] = ptr_data.get("importable", False)
                    log_info("Preserving importable marking for applied pointer at: %s" % ptr_addr)
    except:
        log_info("No existing applied pointers file found, all pointers will default to non-importable")

    # Gather applied pointers
    log_info("Gathering applied pointers")
    applied_pointers = []
    for data in currentProgram.getListing().getDefinedData(True):
        dt = data.getDataType()
        if should_track_applied_pointer(dt):
            dt_addr = str(data.getAddress())
            dt_length = data.getLength()
            dt_to = dt.getDataType()
            dt_importable = existing_importable.get(dt_addr, True)

            # Record applied pointer
            log_info("Recording applied pointer at %s" % dt_addr)
            applied_pointers.append({
                "addr": dt_addr,
                "len": dt_length,
                "to": resolve_data_type_name(currentProgram, dt_to) if dt_to else "void",
                "type": resolve_data_type_name(currentProgram, dt),
                "importable": dt_importable
            })

    # Export applied pointers
    log_info("Exporting %s applied pointers" % len(applied_pointers))
    save_json_files(
        path = path,
        filename_base = "applied_pointers",
        items = clean_data(applied_pointers),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
