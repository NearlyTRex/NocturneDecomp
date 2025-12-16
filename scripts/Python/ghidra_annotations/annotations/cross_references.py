import os
import re
from ghidra_annotations.util import *
from ghidra.program.model.symbol import ReferenceManager
from ghidra.program.model.symbol import RefType
from ghidra.program.model.symbol import SourceType

def get_reference_key(ref_data):
    return "%s|%s|%d" % (ref_data.get("from"), ref_data.get("to"), ref_data.get("operand", 0))

def get_sortable_address_value(addr_str):

    # Invalid address
    if not addr_str:
        return (999, 0, "")

    # Handle regular hex addresses first
    try:
        if addr_str.startswith("0x") or addr_str.startswith("0X"):
            return (0, int(addr_str, 16), addr_str)
        else:
            return (0, int(addr_str, 16), addr_str)
    except ValueError:
        pass

    # Handle special address spaces with priority ordering
    addr_lower = addr_str.lower()
    if addr_lower.startswith("stack"):
        try:
            match = re.search(r'\[(-?0x[0-9a-f]+)\]', addr_lower)
            if match:
                offset_str = match.group(1)
                if offset_str.startswith('-'):
                    offset = -int(offset_str[3:], 16)
                else:
                    offset = int(offset_str, 16)
                return (1, offset, addr_str)
        except:
            pass
        return (1, 0, addr_str)
    elif addr_lower.startswith("external"):
        try:
            if ":" in addr_str:
                parts = addr_str.split(":", 1)
                if len(parts) == 2:
                    offset = int(parts[1], 16)
                    return (4, offset, addr_str)
        except:
            pass
        return (4, 0, addr_str)
    elif addr_lower.startswith("register"):
        try:
            if ":" in addr_str:
                parts = addr_str.split(":", 1)
                if len(parts) == 2:
                    offset = int(parts[1], 16)
                    return (2, offset, addr_str)
        except:
            pass
        return (2, 0, addr_str)
    elif addr_lower.startswith("const"):
        return (3, 0, addr_str)
    elif addr_lower.startswith("ram"):
        try:
            match = re.search(r'ram:0x([0-9a-f]+)', addr_lower)
            if match:
                offset = int(match.group(1), 16)
                return (0, offset, addr_str)
        except:
            pass
        return (0, 0, addr_str)

    # For any other format, use string comparison with low priority
    return (10, 0, addr_str)

def delete_cross_references(currentProgram, path):

    # Load cross references to get importable markings
    log_info("Loading cross references to determine which are importable")
    xrefs_data = load_json_files(path, "cross_references")
    if xrefs_data is None:
        log_info("No existing cross references file found - nothing to delete")
        return

    # Get list of importable cross reference keys
    importable_xrefs = set()
    for xref_data in xrefs_data:
        if xref_data.get("importable", False):
            xref_key = get_reference_key(xref_data)
            importable_xrefs.add(xref_key)
            to_addr = xref_data.get("to", "")
    log_info("Found %d importable cross references to delete" % len(importable_xrefs))
    if not importable_xrefs:
        log_info("No importable cross references found - nothing to delete")
        return

    # Delete only importable cross references
    ref_mgr = currentProgram.getReferenceManager()
    tx_id = currentProgram.startTransaction("Delete Cross References")
    try:
        deleted_count = 0
        address_set = currentProgram.getMemory().getAllInitializedAddressSet()
        addresses = address_set.getAddresses(True)
        while addresses.hasNext():
            from_addr = addresses.next()
            refs = list(ref_mgr.getReferencesFrom(from_addr))
            for ref in refs:
                from_addr_str = str(ref.getFromAddress())
                to_addr_str = str(ref.getToAddress())
                operand_index = ref.getOperandIndex()
                ref_key = "%s|%s|%d" % (from_addr_str, to_addr_str, operand_index)
                if ref_key in importable_xrefs:
                    ref_mgr.delete(ref)
                    deleted_count += 1
        log_info("Deleted %d cross references" % deleted_count)
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_cross_references(currentProgram, path):

    # Load cross references
    log_info("Loading cross references")
    cross_references = load_json_files(path, "cross_references")
    if cross_references is None:
        log_error("Unable to load cross references")

    # Import cross references
    log_info("Importing cross references")
    ref_mgr = currentProgram.getReferenceManager()
    tx_id = currentProgram.startTransaction("Import Cross References")
    try:
        imported_count = 0
        skipped_count = 0
        for xref in cross_references:
            from_addr_str = xref.get("from")
            to_addr_str = xref.get("to")

            # Handle special addresses that may not be in memory map
            if "Stack[" in to_addr_str or "EXTERNAL:" in to_addr_str or "register:" in to_addr_str:
                from_addr = get_addr_obj(currentProgram, from_addr_str)
                to_addr = get_addr_obj(currentProgram, to_addr_str, validate_memory=False)
            else:
                from_addr = get_addr_obj(currentProgram, from_addr_str)
                to_addr = get_addr_obj(currentProgram, to_addr_str)
            ref_type_str = xref.get("type")
            operand_index = xref.get("operand", 0)
            is_primary = not xref.get("non_primary", False)
            is_importable = xref.get("importable", False)
            if not from_addr or not to_addr or not ref_type_str or not is_importable:
                skipped_count += 1
                continue

            # Try to resolve reference type
            ref_type = None
            ref_type_map = {
                "UNCONDITIONAL_CALL": RefType.UNCONDITIONAL_CALL,
                "CONDITIONAL_CALL": RefType.CONDITIONAL_CALL,
                "UNCONDITIONAL_JUMP": RefType.UNCONDITIONAL_JUMP,
                "CONDITIONAL_JUMP": RefType.CONDITIONAL_JUMP,
                "READ": RefType.READ,
                "WRITE": RefType.WRITE,
                "DATA": RefType.DATA,
                "READ_WRITE": RefType.READ_WRITE,
                "CALL_TERMINATOR": RefType.CALL_TERMINATOR,
                "COMPUTED_CALL": RefType.COMPUTED_CALL,
                "COMPUTED_JUMP": RefType.COMPUTED_JUMP,
                "FALL_THROUGH": RefType.FALL_THROUGH,
                "INDIRECTION": RefType.INDIRECTION,
                "PARAM": RefType.PARAM
            }
            ref_type = ref_type_map.get(ref_type_str)
            if not ref_type:
                log_info("Unknown reference type '%s', using fallback logic" % ref_type_str)
                if "CALL" in ref_type_str.upper():
                    ref_type = RefType.UNCONDITIONAL_CALL
                elif "JUMP" in ref_type_str.upper():
                    ref_type = RefType.UNCONDITIONAL_JUMP
                elif "READ" in ref_type_str.upper():
                    ref_type = RefType.READ
                elif "WRITE" in ref_type_str.upper():
                    ref_type = RefType.WRITE
                else:
                    ref_type = RefType.DATA

            # Check if reference already exists
            existing_refs = ref_mgr.getReferencesFrom(from_addr, operand_index)
            ref_exists = False
            for existing_ref in existing_refs:
                if (existing_ref.getToAddress().equals(to_addr) and
                    existing_ref.getReferenceType() == ref_type):
                    ref_exists = True
                    break

            # Create the reference
            if not ref_exists:
                new_ref = ref_mgr.addMemoryReference(
                    from_addr, to_addr, ref_type, SourceType.USER_DEFINED, operand_index)
                if is_primary and new_ref:
                    ref_mgr.setPrimary(new_ref, True)
                imported_count += 1
        log_info("Imported %d cross references, skipped %d" % (imported_count, skipped_count))
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def scan_references_worker(start_addr, end_addr, ref_mgr):
    """Worker function to scan references in an address range."""
    references = []
    try:
        addr_set = create_address_set(start_addr, end_addr)
        addresses = addr_set.getAddresses(True)

        while addresses.hasNext():
            addr = addresses.next()
            refs = list(ref_mgr.getReferencesFrom(addr))

            for ref in refs:
                ref_data = {
                    "from": str(ref.getFromAddress()),
                    "to": str(ref.getToAddress()),
                    "type": str(ref.getReferenceType())
                }
                operand_index = ref.getOperandIndex()
                if operand_index != 0:
                    ref_data["operand"] = operand_index
                if not ref.isPrimary():
                    ref_data["non_primary"] = True
                references.append(ref_data)
    except Exception:
        pass
    return references


def export_cross_references(currentProgram, path):

    # Load existing cross references to preserve importable markings
    existing_importable = {}
    try:
        existing_xrefs = load_json_files(path, "cross_references")
        if existing_xrefs:
            log_info("Loading existing importable markings")
            for xref_data in existing_xrefs:
                xref_key = get_reference_key(xref_data)
                existing_importable[xref_key] = xref_data.get("importable", True)
    except:
        log_info("No existing cross references file found, all cross references will default to non-importable")

    # Scan in parallel
    log_info("Gathering cross references (parallel)")
    ref_mgr = currentProgram.getReferenceManager()
    cross_references = parallel_scan_ranges(currentProgram, scan_references_worker, extra_args=(ref_mgr,))
    log_info("Found %d cross references" % len(cross_references))

    # Apply importable markings
    for ref_data in cross_references:
        ref_key = get_reference_key(ref_data)
        ref_data["importable"] = existing_importable.get(ref_key, True)

    # Sort cross references for consistent output
    log_info("Sorting cross references by address and operand index")
    cross_references.sort(key=lambda x: (
        get_sortable_address_value(x["from"]),
        x.get("operand", 0),
        get_sortable_address_value(x["to"]),
        x["type"],
        x.get("non_primary", False)
    ))

    # Export cross references
    log_info("Exporting %s cross references" % len(cross_references))
    save_json_files(
        path = path,
        filename_base = "cross_references",
        items = clean_data(cross_references),
        addr_func = lambda x: x["from"],
        bucket_bits = 5)
    log_info("Export complete")
