import os
from ghidra_annotations.util import *
from ghidra.program.model.data import DataUtilities
from ghidra.program.model.data import Array, Enum, Pointer, Structure, Union

def should_track_applied_basic_type(type_data):
    if not type_data:
        return False
    if isinstance(type_data, Pointer):
        return False
    if isinstance(type_data, Array):
        return False
    if isinstance(type_data, Structure):
        return False
    if isinstance(type_data, Union):
        return False
    if isinstance(type_data, Enum):
        return False
    if is_string_data_type_obj(type_data):
        return False
    return True

def delete_applied_basic_types(currentProgram, path):

    # Load applied basic types to get importable markings
    log_info("Loading applied basic types to determine which are importable")
    basic_types_data = load_json_files(path, "applied_basic_types")
    if basic_types_data is None:
        log_info("No existing applied basic types file found - nothing to delete")
        return

    # Get list of importable basic type addresses
    importable_basic_types = set()
    for basic_data in basic_types_data:
        if basic_data.get("importable", False):
            basic_addr = basic_data.get("addr")
            if basic_addr:
                importable_basic_types.add(basic_addr)
    log_info("Found %d importable applied basic types to delete" % len(importable_basic_types))
    if not importable_basic_types:
        log_info("No importable applied basic types found - nothing to delete")
        return

    # Delete only importable applied basic types
    listing = currentProgram.getListing()
    tx_id = currentProgram.startTransaction("Delete Applied Basic Types")
    try:
        to_clear = []
        for data in listing.getDefinedData(True):
            if should_track_applied_basic_type(data.getDataType()):
                basic_addr_str = str(data.getAddress())
                if basic_addr_str in importable_basic_types:
                    to_clear.append(data.getMinAddress())
        for addr in to_clear:
            listing.clearCodeUnits(addr, addr, False)
        log_info("Deleted %s applied basic type(s)" % len(to_clear))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_applied_basic_types(currentProgram, path):

    # Load applied basic types
    log_info("Loading applied basic types")
    applied_basic_types = load_json_files(path, "applied_basic_types")
    if applied_basic_types is None:
        log_error("Unable to load applied basic types")
        return

    # Import applied basic types
    log_info("Importing applied basic types")
    tx_id = currentProgram.startTransaction("Import Applied Basic Types")
    try:
        for entry in applied_basic_types:
            dt_addr = get_addr_obj(currentProgram, entry.get("addr"))
            dt_length = entry.get("len", 1)
            dt_type = resolve_data_type_obj(currentProgram, entry.get("type"))
            dt_importable = entry.get("importable", False)
            if not dt_addr or not dt_type or not dt_importable:
                continue

            # Create the data type
            log_info("Creating applied basic type at %s [%s]" % (dt_addr, dt_type))
            DataUtilities.createData(currentProgram, dt_addr, dt_type, dt_length, False,
                DataUtilities.ClearDataMode.CLEAR_ALL_CONFLICT_DATA)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_applied_basic_types(currentProgram, path):

    # Load existing applied basic types to preserve importable markings
    existing_importable = {}
    try:
        existing_basic_types = load_json_files(path, "applied_basic_types")
        if existing_basic_types:
            log_info("Loading existing importable markings")
            for basic_data in existing_basic_types:
                basic_addr = basic_data.get("addr")
                if basic_addr:
                    existing_importable[basic_addr] = basic_data.get("importable", False)
                    log_info("Preserving importable marking for applied basic type at: %s" % basic_addr)
    except:
        log_info("No existing applied basic types file found, all basic types will default to non-importable")

    # Gather applied basic types
    applied_basic_types = []
    for data in currentProgram.getListing().getDefinedData(True):
        dt = data.getDataType()
        if should_track_applied_basic_type(dt):
            dt_name = resolve_data_type_name(currentProgram, dt)
            dt_addr = str(data.getAddress())
            dt_length = data.getLength()
            dt_value = data.getValue()
            dt_importable = existing_importable.get(dt_addr, True)

            # Record applied basic type
            log_info("Recording applied basic type at %s" % dt_addr)
            entry = {
                "addr": dt_addr,
                "type": dt_name,
                "len": dt_length,
                "importable": dt_importable
            }
            if dt_value is not None:
                try:
                    entry["value"] = str(dt_value)
                except (UnicodeEncodeError, UnicodeDecodeError):
                    entry["value"] = "0x" + "".join(["%02x" % (ord(c) if isinstance(c, str) else c) for c in str(dt_value)])
            applied_basic_types.append(entry)

    # Export applied basic types
    log_info("Exporting %s applied basic types" % len(applied_basic_types))
    save_json_files(
        path = path,
        filename_base = "applied_basic_types",
        items = clean_data(applied_basic_types),
        addr_func = lambda x: x["addr"],
        bucket_bits = 4)
    log_info("Export complete")
