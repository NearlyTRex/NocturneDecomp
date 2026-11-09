# The program's memory blocks, the gaps between them, and its address spaces.
# A block record's `importable` flag is the user's, kept from the previous
# export. The file cannot hold a block's bytes, so only an uninitialized block
# is ever deleted, and an import only creates blocks the program lacks.

import os

from ghidra.util.task import TaskMonitor

from ghidra_annotations.util import clean_data, get_addr_obj, load_json_file, log_info, save_json_file


def format_size(size_bytes):
    if size_bytes >= 1024 * 1024:
        return "%.1fMB" % (size_bytes / (1024.0 * 1024.0))
    if size_bytes >= 1024:
        return "%.0fKB" % (size_bytes / 1024.0)
    return "%dB" % size_bytes


def get_permission_string(perms):
    return ("R" if perms["read"] else "-") + ("W" if perms["write"] else "-") + ("X" if perms["execute"] else "-")


def guess_section_purpose(name, perms, initialized):
    name_lower = name.lower()
    if perms["execute"] or name_lower in [".text", ".code", "_text", "code"]:
        return "Executable code"
    if not perms["write"] and perms["read"]:
        if name_lower in [".rdata", ".rodata", "_rdata", "rdata"]:
            return "Read-only data, strings, imports"
        if "const" in name_lower:
            return "Constants"
        if "rsrc" in name_lower or "resource" in name_lower:
            return "Resources"
        return "Read-only data"
    if perms["write"] and perms["read"]:
        if not initialized or name_lower in [".bss", "_bss", "bss"]:
            return "Uninitialized data (zero-filled)"
        if name_lower in [".data", "_data", "data"]:
            return "Initialized read-write data"
        return "Read-write data"
    if name_lower in [".idata", ".edata", "_idata", "_edata", "idata", "edata"]:
        return "Import/Export tables"
    for word, purpose in [("debug", "Debug information"), ("pdb", "Debug information"), ("reloc", "Relocation data"),
                          ("stack", "Stack space"), ("heap", "Heap space")]:
        if word in name_lower:
            return purpose
    return "Custom section"


def load_layout(path):
    exists = os.path.isfile(os.path.join(path, "memory_layout", "memory_layout.json"))
    return load_json_file(path, "memory_layout") if exists else {}


def delete_memory_layout(currentProgram, path):
    """Remove the importable blocks that hold no bytes; an initialized block's could not be imported back."""
    importable = {b["name"] for b in load_layout(path).get("memory_blocks", [])
                  if b.get("importable", False) and b.get("name")}
    memory = currentProgram.getMemory()
    doomed = [block for block in memory.getBlocks() if block.getName() in importable and not block.isInitialized()]
    log_info("Found %d importable uninitialized memory blocks to delete" % len(doomed))
    if not doomed:
        return
    tx_id = currentProgram.startTransaction("Delete Memory Blocks")
    try:
        for block in doomed:
            memory.removeBlock(block, TaskMonitor.DUMMY)
    finally:
        currentProgram.endTransaction(tx_id, True)


def import_memory_layout(currentProgram, path):
    """Create each importable block the program lacks; an initialized one starts zero-filled."""
    memory = currentProgram.getMemory()
    created = skipped = 0
    tx_id = currentProgram.startTransaction("Import Memory Blocks")
    try:
        for block_data in load_layout(path).get("memory_blocks", []):
            name = block_data.get("name")
            start = get_addr_obj(currentProgram, block_data.get("start"), validate_memory = False)
            size = block_data.get("size", 0)
            if not block_data.get("importable", False) or not name or not start or size <= 0:
                skipped += 1
                continue
            if memory.getBlock(name) is not None or memory.getBlock(start) is not None:
                log_info("Memory block %s or its start %s already exists" % (name, start))
                skipped += 1
                continue
            overlay = block_data.get("overlay", False)
            if overlay or block_data.get("initialized", False):
                log_info("Creating %s zero-filled: its bytes are not in the export" % name)
                block = memory.createInitializedBlock(name, start, size, 0, TaskMonitor.DUMMY, overlay)
            else:
                block = memory.createUninitializedBlock(name, start, size, False)
            permissions = block_data.get("permissions", {})
            block.setRead(permissions.get("read", True))
            block.setWrite(permissions.get("write", False))
            block.setExecute(permissions.get("execute", False))
            if block_data.get("comment"):
                block.setComment(block_data["comment"])
            created += 1
        log_info("Created %d memory blocks, skipped %d" % (created, skipped))
    finally:
        currentProgram.endTransaction(tx_id, True)


def block_record(block, importable):
    record = {
        "name": block.getName(),
        "start": str(block.getStart()),
        "end": str(block.getEnd()),
        "size": block.getSize(),
        "permissions": {"read": block.isRead(), "write": block.isWrite(), "execute": block.isExecute()},
        "initialized": block.isInitialized(),
        "type": str(block.getType()),
        "importable": importable,
        "comment": block.getComment(),
    }
    if block.isOverlay():
        record["overlay"] = True
        record["overlay_space"] = str(block.getStart().getAddressSpace())
    return record


def find_gaps(blocks):
    """The unmapped space between consecutive blocks; an overlay's addresses are not on the same line."""
    ordered = sorted((b for b in blocks if not b.get("overlay")), key=lambda b: int(b["start"], 16))
    gaps = []
    for before, after in zip(ordered, ordered[1:]):
        gap_start, gap_end = int(before["end"], 16) + 1, int(after["start"], 16) - 1
        if gap_start <= gap_end:
            gaps.append({
                "start": "0x%x" % gap_start,
                "end": "0x%x" % gap_end,
                "size": gap_end - gap_start + 1,
                "note": "Gap between %s and %s" % (before["name"], after["name"]),
                "preceding_block": before["name"],
                "following_block": after["name"]
            })
    return ordered, gaps


def overview_of(ordered, gaps):
    overview = [{
        "name": block["name"],
        "range": "%s-%s" % (block["start"], block["end"]),
        "size": block["size"],
        "size_formatted": format_size(block["size"]),
        "permissions": get_permission_string(block["permissions"]),
        "permissions_detailed": block["permissions"],
        "likely_purpose": guess_section_purpose(block["name"], block["permissions"], block["initialized"]),
        "type": "memory_block",
        "initialized": block["initialized"]
    } for block in ordered]
    overview += [{
        "name": "Gap",
        "range": "%s-%s" % (gap["start"], gap["end"]),
        "size": gap["size"],
        "size_formatted": format_size(gap["size"]),
        "permissions": "---",
        "permissions_detailed": {"read": False, "write": False, "execute": False},
        "likely_purpose": "Unmapped space between %s and %s" % (gap["preceding_block"], gap["following_block"]),
        "type": "gap",
        "preceding_block": gap["preceding_block"],
        "following_block": gap["following_block"]
    } for gap in gaps]
    overview.sort(key=lambda x: int(x["range"].split("-")[0], 16))
    return overview


# The size is the space's address width in bits
def space_record(space):
    return {"name": space.getName(), "type": str(space.getType()), "size": space.getSize()}


def export_memory_layout(currentProgram, path):
    importable = {b["name"]: b.get("importable", False) for b in load_layout(path).get("memory_blocks", [])
                  if b.get("name")}
    memory_blocks = [block_record(block, importable.get(block.getName(), True))
                     for block in currentProgram.getMemory().getBlocks()]
    ordered, gaps = find_gaps(memory_blocks)
    total_mapped_size = sum(block["size"] for block in memory_blocks)
    total_gap_size = sum(gap["size"] for gap in gaps)
    memory_layout = {
        "memory_blocks": memory_blocks,
        "gaps": gaps,
        "address_spaces": [space_record(space) for space in currentProgram.getAddressFactory().getAddressSpaces()],
        "analysis": {
            "overview": overview_of(ordered, gaps),
            "summary": {
                "total_mapped_size": total_mapped_size,
                "total_mapped_formatted": format_size(total_mapped_size),
                "total_gap_size": total_gap_size,
                "total_gap_formatted": format_size(total_gap_size),
                "block_count": len(memory_blocks),
                "gap_count": len(gaps)
            }
        }
    }
    log_info("Exporting memory layout with %d blocks" % len(memory_blocks))
    save_json_file(path, "memory_layout", clean_data(memory_layout))
    log_info("Export complete")
