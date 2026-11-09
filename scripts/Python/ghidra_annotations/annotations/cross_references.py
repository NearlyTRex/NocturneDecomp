# Every reference in the program, from each address that has one. A record's
# `importable` flag is the user's, kept from the previous export.

import re

from ghidra.program.model.symbol import RefType, SourceType

from ghidra_annotations.util import (
    clean_data, create_address_set, get_addr_obj, load_json_files, log_info, parallel_scan_ranges, save_json_files)

# The reference types an import can recreate, by the name the export records
REF_TYPES = ["UNCONDITIONAL_CALL", "CONDITIONAL_CALL", "UNCONDITIONAL_JUMP", "CONDITIONAL_JUMP", "READ", "WRITE",
             "DATA", "READ_WRITE", "CALL_TERMINATOR", "COMPUTED_CALL", "COMPUTED_CALL_TERMINATOR",
             "COMPUTED_JUMP", "FALL_THROUGH", "INDIRECTION", "PARAM"]

# A name not in REF_TYPES falls back to the first kind it mentions, else DATA
FALLBACK_TYPES = ["CALL", "JUMP", "READ", "WRITE"]
FALLBACK_REF_TYPES = {"CALL": "UNCONDITIONAL_CALL", "JUMP": "UNCONDITIONAL_JUMP", "READ": "READ", "WRITE": "WRITE"}

# The order address spaces sort in: memory, then stack, register, constant, external, then anything else
SPACE_RANK = [("stack", 1), ("register", 2), ("const", 3), ("external", 4), ("ram", 0)]


def get_reference_key(ref_data):
    return "%s|%s|%d" % (ref_data.get("from"), ref_data.get("to"), ref_data.get("operand", 0))


def get_sortable_address_value(addr_str):
    """(space rank, offset, text) for an address as the export writes it, so memory sorts by offset."""
    if not addr_str:
        return (999, 0, "")
    try:
        return (0, int(addr_str, 16), addr_str)
    except ValueError:
        pass
    lower = addr_str.lower()
    for prefix, rank in SPACE_RANK:
        if lower.startswith(prefix):
            return (rank, space_offset(prefix, lower), addr_str)
    return (10, 0, addr_str)


def space_offset(prefix, lower):
    if prefix == "stack":
        match = re.search(r'\[(-?)0x([0-9a-f]+)\]', lower)
        return (-1 if match.group(1) else 1) * int(match.group(2), 16) if match else 0
    if prefix == "ram":
        match = re.search(r'ram:0x([0-9a-f]+)', lower)
        return int(match.group(1), 16) if match else 0
    if prefix in ("register", "external") and ":" in lower:
        try:
            return int(lower.split(":", 1)[1], 16)
        except ValueError:
            return 0
    return 0


def resolve_ref_type(name):
    if name not in REF_TYPES:
        upper = name.upper()
        name = next((FALLBACK_REF_TYPES[k] for k in FALLBACK_TYPES if k in upper), "DATA")
        log_info("Unknown reference type, using %s" % name)
    return getattr(RefType, name)


def importable_target(program, address):
    """Whether an import can recreate a reference to the address: one into the program's memory."""
    return address.isMemoryAddress() and program.getMemory().contains(address)


def reference_sources(ref_mgr, start_addr, end_addr):
    """The addresses in a range that references come from."""
    return ref_mgr.getReferenceSourceIterator(create_address_set(start_addr, end_addr), True)


def scan_references_worker(start_addr, end_addr, ref_mgr):
    """The records of the references from an address range."""
    references = []
    for addr in reference_sources(ref_mgr, start_addr, end_addr):
        for ref in ref_mgr.getReferencesFrom(addr):
            ref_data = {
                "from": str(ref.getFromAddress()),
                "to": str(ref.getToAddress()),
                "type": str(ref.getReferenceType())
            }
            if ref.getOperandIndex() != 0:
                ref_data["operand"] = ref.getOperandIndex()
            if not ref.isPrimary():
                ref_data["non_primary"] = True
            references.append(ref_data)
    return references


def delete_cross_references(currentProgram, path):
    """Remove the importable memory references; the import cannot make the other kinds back."""
    importable = {get_reference_key(r) for r in load_json_files(path, "cross_references")
                  if r.get("importable", False)}
    log_info("Found %d importable cross references to delete" % len(importable))
    if not importable:
        return
    ref_mgr = currentProgram.getReferenceManager()
    tx_id = currentProgram.startTransaction("Delete Cross References")
    try:
        doomed = []
        for start, end in [(r.getMinAddress(), r.getMaxAddress())
                           for r in currentProgram.getMemory().getAllInitializedAddressSet().getAddressRanges()]:
            for addr in reference_sources(ref_mgr, start, end):
                doomed += [ref for ref in ref_mgr.getReferencesFrom(addr)
                           if importable_target(currentProgram, ref.getToAddress()) and "%s|%s|%d" % (ref.getFromAddress(), ref.getToAddress(), ref.getOperandIndex())
                           in importable]
        for ref in doomed:
            ref_mgr.delete(ref)
        log_info("Deleted %d cross references" % len(doomed))
    finally:
        currentProgram.endTransaction(tx_id, True)


def import_cross_references(currentProgram, path):
    """Recreate the importable memory references the program lacks.

    A reference to a stack slot, register or external is made by Ghidra's
    analysis with its own kind of reference, so it is counted and left out.
    """
    ref_mgr = currentProgram.getReferenceManager()
    imported = skipped = not_memory = 0
    tx_id = currentProgram.startTransaction("Import Cross References")
    try:
        for xref in load_json_files(path, "cross_references"):
            from_addr = get_addr_obj(currentProgram, xref.get("from"))
            to_addr = get_addr_obj(currentProgram, xref.get("to"), validate_memory = False)
            if not xref.get("importable", False) or not xref.get("type") or not from_addr or not to_addr:
                skipped += 1
                continue
            if not importable_target(currentProgram, to_addr):
                not_memory += 1
                continue
            ref_type = resolve_ref_type(xref["type"])
            operand_index = xref.get("operand", 0)
            if any(ref.getToAddress() == to_addr and ref.getReferenceType() == ref_type
                   for ref in ref_mgr.getReferencesFrom(from_addr, operand_index)):
                continue
            new_ref = ref_mgr.addMemoryReference(from_addr, to_addr, ref_type, SourceType.USER_DEFINED, operand_index)
            # Ghidra makes an operand's first reference primary itself, so the flag is set both ways
            ref_mgr.setPrimary(new_ref, not xref.get("non_primary", False))
            imported += 1
        log_info("Imported %d cross references, skipped %d, left %d that are not memory references" % (
            imported, skipped, not_memory))
    finally:
        currentProgram.endTransaction(tx_id, True)


def export_cross_references(currentProgram, path):
    importable = {get_reference_key(r): r.get("importable", True) for r in load_json_files(path, "cross_references")}
    log_info("Gathering cross references (parallel)")
    ref_mgr = currentProgram.getReferenceManager()
    cross_references = parallel_scan_ranges(currentProgram, scan_references_worker, extra_args=(ref_mgr,))
    log_info("Found %d cross references" % len(cross_references))
    for ref_data in cross_references:
        ref_data["importable"] = importable.get(get_reference_key(ref_data), True)
    cross_references.sort(key=lambda x: (
        get_sortable_address_value(x["from"]),
        x.get("operand", 0),
        get_sortable_address_value(x["to"]),
        x["type"],
        x.get("non_primary", False)
    ))
    log_info("Exporting %s cross references" % len(cross_references))
    save_json_files(
        path = path,
        filename_base = "cross_references",
        items = clean_data(cross_references),
        addr_func = lambda x: x["from"],
        bucket_bits = 5)
    log_info("Export complete")
