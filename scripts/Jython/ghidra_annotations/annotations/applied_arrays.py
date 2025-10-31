import os
from ghidra_annotations.util import *
from ghidra.program.model.data import Array
from ghidra.program.model.data import DataUtilities

def should_track_applied_array(type_data):
    if not type_data:
        return False
    return isinstance(type_data, Array)

def delete_applied_arrays(currentProgram, path):

    # Load applied arrays to get importable markings
    log_info("Loading applied arrays to determine which are importable")
    arrays_data = load_json_files(path, "applied_arrays")
    if arrays_data is None:
        log_info("No existing applied arrays file found - nothing to delete")
        return

    # Get list of importable array addresses
    importable_arrays = set()
    for array_data in arrays_data:
        if array_data.get("importable", False):
            array_addr = array_data.get("addr")
            if array_addr:
                importable_arrays.add(array_addr)
    log_info("Found %d importable applied arrays to delete" % len(importable_arrays))
    if not importable_arrays:
        log_info("No importable applied arrays found - nothing to delete")
        return

    # Delete only importable applied arrays
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Applied Arrays")
    try:
        to_clear = []
        for data in listing.getDefinedData(True):
            if should_track_applied_array(data.getDataType()):
                array_addr_str = str(data.getAddress())
                if array_addr_str in importable_arrays:
                    to_clear.append(data.getMinAddress())
        for addr in to_clear:
            listing.clearCodeUnits(addr, addr, False)
        log_info("Deleted %s applied array(s)" % len(to_clear))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_applied_arrays(currentProgram, path):

    # Load applied arrays
    log_info("Loading applied arrays")
    applied_arrays = load_json_files(path, "applied_arrays")
    if applied_arrays is None:
        log_error("Unable to load applied arrays")

    # Start importing applied arrays
    log_info("Importing applied arrays")
    tx_id = currentProgram.startTransaction("Import Applied Arrays")
    try:
        for entry in applied_arrays:
            dt_addr = get_addr_obj(currentProgram, entry.get("addr"))
            dt_length = entry.get("len", 1)
            dt_element_type_name = entry.get("type")
            dt_element_count = entry.get("count", 1)
            dt_importable = entry.get("importable", False)
            if not dt_addr or not dt_element_type_name or not dt_importable:
                continue

            # Resolve the element type first
            dt_element_type = resolve_data_type_obj(currentProgram, dt_element_type_name)
            if not dt_element_type:
                log_info("Could not resolve element type '%s' for array at %s" % (dt_element_type_name, dt_addr))
                continue

            # Create the array type from element type and count
            from ghidra.program.model.data import ArrayDataType
            dt_array_type = ArrayDataType(dt_element_type, dt_element_count, dt_element_type.getLength())

            # Create the data type
            log_info("Creating applied array at %s [%s[%d]]" % (dt_addr, dt_element_type_name, dt_element_count))
            DataUtilities.createData(currentProgram, dt_addr, dt_array_type, dt_length, False,
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_applied_arrays(currentProgram, path):

    # Load existing applied arrays to preserve importable markings
    existing_importable = {}
    try:
        existing_arrays = load_json_files(path, "applied_arrays")
        if existing_arrays:
            log_info("Loading existing importable markings")
            for array_data in existing_arrays:
                array_addr = array_data.get("addr")
                if array_addr:
                    existing_importable[array_addr] = array_data.get("importable", False)
                    log_info("Preserving importable marking for applied array at: %s" % array_addr)
    except:
        log_info("No existing applied arrays file found, all arrays will default to non-importable")

    # Gather applied arrays
    applied_arrays = []
    for data in currentProgram.getListing().getDefinedData(True):
        dt = data.getDataType()
        if should_track_applied_array(dt):
            dt_addr = str(data.getAddress())
            dt_element_type = resolve_data_type_name(currentProgram, dt.getDataType())
            dt_element_count = dt.getNumElements()
            dt_length = data.getLength()
            dt_importable = existing_importable.get(dt_addr, True)

            # Record applied array
            log_info("Recording applied array at %s" % dt_addr)
            applied_arrays.append({
                "addr": dt_addr,
                "type": dt_element_type,
                "count": dt_element_count,
                "len": dt_length,
                "importable": dt_importable
            })

    # Export applied arrays
    log_info("Exporting %s applied arrays" % len(applied_arrays))
    save_json_files(
        path = path,
        filename_base = "applied_arrays",
        items = clean_data(applied_arrays),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
