import os
from ghidra_annotations.util import *
from ghidra.program.model.mem import MemoryBlockType
from ghidra.program.model.address import AddressSet
from ghidra.util.task import TaskMonitor

def format_size(size_bytes):
    if size_bytes >= 1024 * 1024:
        return "%.1fMB" % (size_bytes / (1024.0 * 1024.0))
    elif size_bytes >= 1024:
        return "%.0fKB" % (size_bytes / 1024.0)
    else:
        return "%dB" % size_bytes

def get_permission_string(perms):
    r = "R" if perms["read"] else "-"
    w = "W" if perms["write"] else "-"
    x = "X" if perms["execute"] else "-"
    return r + w + x

def guess_section_purpose(name, perms, initialized):

    # Code sections
    name_lower = name.lower()
    if perms["execute"] or name_lower in [".text", ".code", "_text", "code"]:
        return "Executable code"

    # Read-only data
    elif not perms["write"] and perms["read"]:
        if name_lower in [".rdata", ".rodata", "_rdata", "rdata"]:
            return "Read-only data, strings, imports"
        elif "const" in name_lower:
            return "Constants"
        elif "rsrc" in name_lower or "resource" in name_lower:
            return "Resources"
        else:
            return "Read-only data"

    # Read-write data
    elif perms["write"] and perms["read"]:
        if not initialized:
            return "Uninitialized data (zero-filled)"
        elif name_lower in [".data", "_data", "data"]:
            return "Initialized read-write data"
        elif name_lower in [".bss", "_bss", "bss"]:
            return "Uninitialized data (zero-filled)"
        else:
            return "Read-write data"

    # Import/Export tables
    elif name_lower in [".idata", ".edata", "_idata", "_edata", "idata", "edata"]:
        return "Import/Export tables"

    # Debug sections
    elif "debug" in name_lower or "pdb" in name_lower:
        return "Debug information"

    # Relocation sections
    elif "reloc" in name_lower:
        return "Relocation data"

    # Stack/heap
    elif "stack" in name_lower:
        return "Stack space"
    elif "heap" in name_lower:
        return "Heap space"

    # Custom/unknown
    return "Custom section"

def delete_memory_layout(currentProgram, path):

    # Load memory layout to get importable markings
    log_info("Loading memory layout to determine which blocks are importable")
    memory_data = load_json_file(path, "memory_layout")
    if memory_data is None:
        log_info("No existing memory layout file found - nothing to delete")
        return

    # Get list of importable memory block names
    importable_blocks = set()
    memory_blocks = memory_data.get("memory_blocks", [])
    for block_data in memory_blocks:
        if block_data.get("importable", False):
            block_name = block_data.get("name")
            if block_name:
                importable_blocks.add(block_name)
    log_info("Found %d importable memory blocks to delete" % len(importable_blocks))
    if not importable_blocks:
        log_info("No importable memory blocks found - nothing to delete")
        return

    # Delete only importable memory blocks
    memory = currentProgram.getMemory()
    tx_id = currentProgram.startTransaction("Delete Memory Blocks")
    try:
        for block in list(memory.getBlocks()):
            block_name = block.getName()
            if block_name in importable_blocks:
                log_info("Deleting importable memory block: %s" % block_name)
                memory.removeBlock(block, TaskMonitor.DUMMY)
        log_info("Deleted %d memory blocks" % len(importable_blocks))
    finally:
        currentProgram.endTransaction(tx_id, True)

def import_memory_layout(currentProgram, path):

    # Load memory layout
    log_info("Loading memory layout")
    memory_data = load_json_file(path, "memory_layout")
    if memory_data is None:
        log_error("Unable to load memory layout")
        return

    # Get memory blocks
    memory_blocks = memory_data.get("memory_blocks", [])
    if not memory_blocks:
        log_info("No memory blocks found to import")
        return
    log_info("Found %d total memory blocks in JSON" % len(memory_blocks))

    # Import memory blocks
    memory = currentProgram.getMemory()
    tx_id = currentProgram.startTransaction("Import Memory Blocks")
    try:
        importable_count = 0
        created_count = 0
        skipped_count = 0
        for i, block_data in enumerate(memory_blocks):
            block_name = block_data.get("name")
            block_start_str = block_data.get("start")
            block_start = get_addr_obj(currentProgram, block_start_str, validate_memory = False)
            block_size = block_data.get("size", 0)
            block_permissions = block_data.get("permissions", {})
            block_initialized = block_data.get("initialized", False)
            block_comment = block_data.get("comment")
            block_overlay = block_data.get("overlay", False)
            block_importable = block_data.get("importable", False)
            log_info("Processing block %d: %s" % (i + 1, block_name))
            log_info("  Start: %s -> %s" % (block_start_str, block_start))
            if not block_start:
                log_info("  Address space info: %s" % currentProgram.getAddressFactory().getDefaultAddressSpace().getName())
            log_info("  Size: %d" % block_size)
            log_info("  Importable: %s" % block_importable)

            # Check import criteria
            if not block_name:
                log_info("No block name")
                skipped_count += 1
                continue
            if not block_start:
                log_info("Invalid start address '%s'" % block_start_str)
                skipped_count += 1
                continue
            if block_size <= 0:
                log_info("Invalid size %d" % block_size)
                skipped_count += 1
                continue
            if not block_importable:
                log_info("Not marked as importable")
                skipped_count += 1
                continue
            importable_count += 1
            log_info("Block meets import criteria")

            # Check if block already exists
            existing_block = memory.getBlock(block_name)
            if existing_block:
                log_info("Memory block '%s' already exists" % block_name)
                skipped_count += 1
                continue

            # Check for overlapping blocks
            overlapping_block = memory.getBlock(block_start)
            if overlapping_block:
                log_info("Address %s already has memory block '%s'" % (
                    block_start, overlapping_block.getName()))
                skipped_count += 1
                continue

            # Create memory block
            log_info("Creating memory block %s at %s (size: %s)" % (block_name, block_start, format_size(block_size)))
            try:
                # Create overlay block
                if block_overlay:
                    log_info("Creating overlay block")
                    new_block = memory.createInitializedBlock(
                        block_name, block_start, block_size,
                        0, TaskMonitor.DUMMY, True)
                else:

                    # Create initialized block (filled with zeros)
                    if block_initialized:
                        log_info("Creating initialized block")
                        new_block = memory.createInitializedBlock(
                            block_name, block_start, block_size,
                            0, TaskMonitor.DUMMY, False)

                    # Create uninitialized block
                    else:
                        log_info("Creating uninitialized block")
                        new_block = memory.createUninitializedBlock(
                            block_name, block_start, block_size, False)

                # Set permissions
                new_block.setRead(block_permissions.get("read", True))
                new_block.setWrite(block_permissions.get("write", False))
                new_block.setExecute(block_permissions.get("execute", False))

                # Set comment if provided
                if block_comment:
                    new_block.setComment(block_comment)
                log_info("Created memory block %s" % block_name)
                created_count += 1
            except Exception as e:
                log_info("Could not create memory block '%s': %s" % (block_name, str(e)))
                skipped_count += 1
                continue
        log_info("Import summary:")
        log_info("  Total blocks in JSON: %d" % len(memory_blocks))
        log_info("  Importable blocks: %d" % importable_count)
        log_info("  Successfully created: %d" % created_count)
        log_info("  Skipped: %d" % skipped_count)
    finally:
        currentProgram.endTransaction(tx_id, True)
        log_info("Import complete")

def export_memory_layout(currentProgram, path):

    # Load existing memory layout to preserve importable markings
    existing_importable = {}
    try:
        existing_data = load_json_file(path, "memory_layout")
        if existing_data:
            log_info("Loading existing importable markings")
            existing_blocks = existing_data.get("memory_blocks", [])
            for block_data in existing_blocks:
                block_name = block_data.get("name")
                if block_name:
                    existing_importable[block_name] = block_data.get("importable", False)
                    log_info("Preserving importable marking for memory block: %s" % block_name)
    except:
        log_info("No existing memory layout file found, all blocks will default to non-importable")

    # Export memory blocks
    memory = currentProgram.getMemory()
    memory_blocks = []
    for block in memory.getBlocks():
        block_name = block.getName()
        block_importable = existing_importable.get(block_name, True)
        block_data = {
            "name": block_name,
            "start": str(block.getStart()),
            "end": str(block.getEnd()),
            "size": block.getSize(),
            "permissions": {
                "read": block.isRead(),
                "write": block.isWrite(),
                "execute": block.isExecute()
            },
            "initialized": block.isInitialized(),
            "type": str(block.getType()),
            "importable": block_importable
        }

        # Add comment if present
        if block.getComment():
            block_data["comment"] = block.getComment()

        # Add overlay information if applicable
        if block.isOverlay():
            block_data["overlay"] = True
            block_data["overlay_space"] = str(block.getStart().getAddressSpace())
        memory_blocks.append(block_data)
        log_info("Recording memory block: %s (importable: %s)" % (block_name, block_importable))

    # Calculate memory gaps
    gaps = []
    sorted_blocks = sorted(memory_blocks, key=lambda b: int(b["start"], 16))
    for i in range(len(sorted_blocks) - 1):
        current_end = int(sorted_blocks[i]["end"], 16)
        next_start = int(sorted_blocks[i + 1]["start"], 16)
        gap_start = current_end + 1
        gap_end = next_start - 1
        if gap_start <= gap_end:
            gap_size = gap_end - gap_start + 1
            gaps.append({
                "start": "0x%x" % gap_start,
                "end": "0x%x" % gap_end,
                "size": gap_size,
                "note": "Gap between %s and %s" % (
                    sorted_blocks[i]["name"],
                    sorted_blocks[i + 1]["name"]
                ),
                "preceding_block": sorted_blocks[i]["name"],
                "following_block": sorted_blocks[i + 1]["name"]
            })

    # Create structured analysis overview
    overview = []
    for block in sorted_blocks:
        overview_entry = {
            "name": block["name"],
            "range": "%s-%s" % (block["start"], block["end"]),
            "size": block["size"],
            "size_formatted": format_size(block["size"]),
            "permissions": get_permission_string(block["permissions"]),
            "permissions_detailed": block["permissions"],
            "likely_purpose": guess_section_purpose(block["name"], block["permissions"], block["initialized"]),
            "type": "memory_block",
            "initialized": block["initialized"]
        }
        overview.append(overview_entry)
    for gap in gaps:
        overview_entry = {
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
        }
        overview.append(overview_entry)
    overview.sort(key=lambda x: int(x["range"].split("-")[0], 16))

    # Export address spaces
    addr_factory = currentProgram.getAddressFactory()
    address_spaces = []
    for space in addr_factory.getAddressSpaces():
        space_data = {
            "name": space.getName(),
            "type": str(space.getType())
        }
        try:
            if hasattr(space, 'getWordSize'):
                space_data["word_size"] = space.getWordSize()
            elif hasattr(space, 'getSize'):
                space_data["size"] = space.getSize()
        except:
            pass
        try:
            if hasattr(space, 'isDefaultSpace'):
                space_data["default"] = space.isDefaultSpace()
        except:
            pass
        address_spaces.append(space_data)

    # Calculate totals
    total_mapped_size = sum(block["size"] for block in memory_blocks)
    total_gap_size = sum(gap["size"] for gap in gaps)

    # Combine everything
    memory_layout = {
        "memory_blocks": memory_blocks,
        "gaps": gaps,
        "address_spaces": address_spaces,
        "analysis": {
            "overview": overview,
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

    # Export memory layout
    log_info("Exporting memory layout with %d blocks" % len(memory_blocks))
    save_json_file(path, "memory_layout", clean_data(memory_layout))
    log_info("Export complete")
