import os
import hashlib
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

def _scan_equates_worker(start_addr, end_addr, listing, equate_table):
    """Worker function to scan instructions for scalars and applied equates.

    Returns a dict with two keys:
    - 'scalars': dict of {value: [(addr_str, op_index), ...]}
    - 'applied': dict of {equate_name: [(addr_str, op_index), ...]}
    """
    scalars = {}
    applied = {}

    try:
        addr_set = create_address_set(start_addr, end_addr)
        instruction_iter = listing.getInstructions(addr_set, True)

        while instruction_iter.hasNext():
            instruction = instruction_iter.next()
            addr = instruction.getAddress()
            addr_str = str(addr)
            num_operands = instruction.getNumOperands()

            for op_index in range(num_operands):
                # Check for applied equates
                try:
                    existing_equates = equate_table.getEquates(addr, op_index)
                    for eq in existing_equates:
                        eq_name = eq.getName()
                        if eq_name not in applied:
                            applied[eq_name] = []
                        applied[eq_name].append((addr_str, op_index))
                except:
                    pass

                # Extract scalar values
                try:
                    operand_objects = instruction.getOpObjects(op_index)
                    if operand_objects:
                        for obj in operand_objects:
                            scalar_value = None
                            if hasattr(obj, 'getValue') and hasattr(obj, 'isSigned'):
                                try:
                                    scalar_value = obj.getValue()
                                except:
                                    pass
                            elif str(type(obj)).find("Scalar") != -1:
                                try:
                                    if hasattr(obj, 'getUnsignedValue'):
                                        scalar_value = obj.getUnsignedValue()
                                    elif hasattr(obj, 'getValue'):
                                        scalar_value = obj.getValue()
                                except:
                                    pass

                            if scalar_value is not None:
                                if scalar_value not in scalars:
                                    scalars[scalar_value] = []
                                scalars[scalar_value].append((addr_str, op_index))
                except:
                    continue
    except Exception:
        pass

    return {'scalars': scalars, 'applied': applied}


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
    except:
        log_info("No existing equates files found, all equates will default to non-importable")

    # Gather equates and build value-to-equate map
    log_info("Gathering equates")
    equate_table = currentProgram.getEquateTable()
    equates_map = {}
    value_to_equates = {}

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
        if eq_value not in value_to_equates:
            value_to_equates[eq_value] = []
        value_to_equates[eq_value].append(eq_name)

    if not equates_map:
        log_info("No equates found, nothing to export")
        return

    log_info("Found %d equates with %d unique values" % (len(equates_map), len(value_to_equates)))

    # Scan in parallel
    log_info("Scanning for scalar values (parallel)")
    listing = currentProgram.getListing()
    results = parallel_scan_ranges(currentProgram, _scan_equates_worker, extra_args=(listing, equate_table))

    # Merge results from all workers
    all_scalars = {}
    all_applied = {}
    for result in results:
        for value, locations in result.get('scalars', {}).items():
            if value not in all_scalars:
                all_scalars[value] = []
            all_scalars[value].extend(locations)
        for eq_name, locations in result.get('applied', {}).items():
            if eq_name not in all_applied:
                all_applied[eq_name] = []
            all_applied[eq_name].extend(locations)

    log_info("Found %d unique scalar values" % len(all_scalars))

    # Match equates to references (O(equates) instead of O(equates × instructions))
    log_info("Matching equates to scalar locations")
    for eq_name, eq_data in equates_map.items():
        eq_value = eq_data["value"]
        refs_set = set()

        if eq_name in all_applied:
            for loc in all_applied[eq_name]:
                refs_set.add(loc)

        if eq_value in all_scalars:
            for loc in all_scalars[eq_value]:
                refs_set.add(loc)

        eq_data["refs"] = [{"addr": addr, "opIndex": op} for addr, op in refs_set]

    # Convert to list and sort
    equates = []
    for eq_name in sorted(equates_map.keys()):
        eq_data = equates_map[eq_name]
        eq_data["refs"].sort(key=lambda ref: (ref["addr"], ref["opIndex"]))
        equates.append(eq_data)
        log_info("Recording equate: %s = %s (%d references)" % (
            eq_data["name"], eq_data["value"], len(eq_data["refs"])))

    # Export equates
    log_info("Exporting %d equates using bucketing by name" % len(equates))
    save_json_files(path,
        filename_base = "equates",
        items = clean_data(equates),
        addr_func = lambda x: hashlib.md5(x["name"].encode()).hexdigest()[:8],
        bucket_bits = 4)
    log_info("Export complete")
