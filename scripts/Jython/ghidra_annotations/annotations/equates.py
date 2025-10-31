import os
from ghidra_annotations.util import *

def delete_equates(currentProgram, path):

    # Load equates to get importable markings
    log_info("Loading equates to determine which are importable")
    equates_data = load_json_files(path, "equates")
    if equates_data is None or len(equates_data) == 0:
        log_info("No existing equates files found - nothing to delete")
        return

    # Get list of importable equate names
    importable_equates = set()
    for eq_data in equates_data:
        if eq_data.get("importable", False):
            eq_name = eq_data.get("name")
            if eq_name:
                importable_equates.add(eq_name)
    log_info("Found %d importable equates to delete" % len(importable_equates))
    if not importable_equates:
        log_info("No importable equates found - nothing to delete")
        return

    # Delete only importable equates
    equate_table = currentProgram.getEquateTable()
    tx_id = currentProgram.startTransaction("Delete Equates")
    try:
        equates = list(equate_table.getEquates())
        for equate in equates:
            eq_name = equate.getName()
            if eq_name in importable_equates:
                equate_table.removeEquate(eq_name)
        log_info("Deleted %d equates" % len(importable_equates))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_equates(currentProgram, path):

    # Load equates
    log_info("Loading equates")
    equates_data = load_json_files(path, "equates")
    if equates_data is None or len(equates_data) == 0:
        log_error("Unable to load equates")

    # Import equates
    equate_table = currentProgram.getEquateTable()
    tx_id = currentProgram.startTransaction("Import Equates")
    try:
        for eq_data in equates_data:
            eq_name = eq_data.get("name")
            eq_value = eq_data.get("value")
            eq_refs = eq_data.get("refs", [])
            eq_importable = eq_data.get("importable", False)
            if not eq_name or eq_value is None or not eq_importable:
                continue

            # Create equate
            log_info("Creating equate: %s = %s" % (eq_name, eq_value))
            equate = equate_table.createEquate(eq_name, eq_value)
            for ref in eq_refs:
                ref_addr = get_addr_obj(currentProgram, ref.get("addr"))
                ref_op_index = ref.get("opIndex", 0)
                if ref_addr:
                    equate.addReference(ref_addr, ref_op_index)
                    log_info("Applied equate %s at %s[%d]" % (eq_name, ref_addr, ref_op_index))
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_equates(currentProgram, path):

    # Load existing equates to preserve importable markings
    existing_importable = {}
    try:
        existing_equates = load_json_files(path, "equates")
        if existing_equates:
            log_info("Loading existing importable markings")
            for eq_data in existing_equates:
                eq_name = eq_data.get("name")
                if eq_name:
                    existing_importable[eq_name] = eq_data.get("importable", False)
                    log_info("Preserving importable marking for equate: %s" % eq_name)
    except:
        log_info("No existing equates files found, all equates will default to non-importable")

    # Gather equates
    log_info("Gathering equates")
    equate_table = currentProgram.getEquateTable()
    equates_map = {}

    # Build map of all equates
    for equate in equate_table.getEquates():
        eq_name = equate.getName()
        eq_value = equate.getValue()
        eq_importable = existing_importable.get(eq_name, True)
        equates_map[eq_name] = {
            "name": eq_name,
            "value": eq_value,
            "refs": [],
            "importable": eq_importable
        }

    # Now scan for references using a comprehensive approach
    log_info("Scanning for equate references using comprehensive method")
    listing = currentProgram.getListing()

    # For each equate, search through all instructions to find references
    for eq_name, eq_data in equates_map.items():
        eq_value = eq_data["value"]
        log_info("Searching for references to equate %s (value=%d)" % (eq_name, eq_value))

        # Scan all instructions in the program
        instruction_iter = listing.getInstructions(True)
        while instruction_iter.hasNext():
            instruction = instruction_iter.next()
            addr = instruction.getAddress()

            # Check each operand of this instruction
            num_operands = instruction.getNumOperands()
            for op_index in range(num_operands):

                # First check if there's already an equate applied here
                existing_equates = equate_table.getEquates(addr, op_index)
                for existing_equate in existing_equates:
                    if existing_equate.getName() == eq_name:
                        ref_entry = {
                            "addr": str(addr),
                            "opIndex": op_index
                        }
                        if ref_entry not in eq_data["refs"]:
                            eq_data["refs"].append(ref_entry)
                            log_info("Found applied equate reference: %s at %s[%d]" % (eq_name, addr, op_index))

                # Also check for scalar values that match this equate value
                try:
                    operand_objects = instruction.getOpObjects(op_index)
                    if operand_objects:
                        for obj in operand_objects:

                            # Check if this is a scalar that matches our equate value
                            if hasattr(obj, 'getValue') and hasattr(obj, 'isSigned'):
                                try:
                                    scalar_value = obj.getValue()
                                    if scalar_value == eq_value:
                                        ref_entry = {
                                            "addr": str(addr),
                                            "opIndex": op_index
                                        }
                                        if ref_entry not in eq_data["refs"]:
                                            eq_data["refs"].append(ref_entry)
                                            log_info("Found scalar match for equate: %s=%d at %s[%d]" % (eq_name, eq_value, addr, op_index))
                                except:
                                    continue

                            # Also check if it's a general scalar object
                            elif str(type(obj)).find("Scalar") != -1:
                                try:
                                    # Try to get the value different ways
                                    scalar_value = None
                                    if hasattr(obj, 'getUnsignedValue'):
                                        scalar_value = obj.getUnsignedValue()
                                    elif hasattr(obj, 'getValue'):
                                        scalar_value = obj.getValue()

                                    if scalar_value is not None and scalar_value == eq_value:
                                        ref_entry = {
                                            "addr": str(addr),
                                            "opIndex": op_index
                                        }
                                        if ref_entry not in eq_data["refs"]:
                                            eq_data["refs"].append(ref_entry)
                                            log_info("Found scalar object match for equate: %s=%d at %s[%d]" % (eq_name, eq_value, addr, op_index))
                                except:
                                    continue
                except:
                    continue

    # Convert to list and sort
    equates = []
    for eq_name in sorted(equates_map.keys()):
        eq_data = equates_map[eq_name]
        eq_data["refs"].sort(key=lambda ref: (ref["addr"], ref["opIndex"]))
        equates.append(eq_data)
        log_info("Recording equate: %s = %s (%d references)" % (
            eq_data["name"], eq_data["value"], len(eq_data["refs"])))

    # Export equates using bucketing by name hash to manage file size
    log_info("Exporting %d equates using bucketing by name" % len(equates))
    save_json_files(path,
        filename_base = "equates",
        items = clean_data(equates),
        addr_func = lambda x: "%08x" % (hash(x["name"]) & 0xFFFFFFFF),
        bucket_bits = 4)
    log_info("Export complete")
