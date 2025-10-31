import os
from ghidra_annotations.util import *

def scan_for_vtables(currentProgram, addr, max_scan = 100):

    # Get pointer size
    pointer_size = get_pointer_size(currentProgram)

    # Find vtables
    scan_addr = addr
    functions = []
    memory = currentProgram.getMemory()
    for i in range(max_scan):
        if not memory.contains(scan_addr) or not memory.contains(scan_addr.add(pointer_size - 1)):
            break

        # Read potential function pointer
        target_addr = read_pointer_at_address(currentProgram, scan_addr)
        if target_addr and is_function_address(currentProgram, target_addr):
            function_name = get_function_name(currentProgram, target_addr)
            functions.append({
                "offset": i * pointer_size,
                "ptr_addr": str(scan_addr),
                "func_addr": str(target_addr),
                "func_name": function_name
            })
            scan_addr = scan_addr.add(pointer_size)
        else:
            break
    return functions

def export_vtables(currentProgram, path):

    # Gather vtables
    vtables = []
    pointer_size = get_pointer_size(currentProgram)
    log_info("Gathering vtables (pointer_size=%d)" % pointer_size)
    for block in currentProgram.getMemory().getBlocks():
        if not block.isInitialized() or block.isExecute():
            continue

        # Scan memory block
        log_info("Scanning block: %s" % block.getName())
        current_addr = block.getStart()
        addr_offset = current_addr.getOffset()
        if addr_offset % pointer_size != 0:
            current_addr = current_addr.add(pointer_size - (addr_offset % pointer_size))

        # Look for functions in this memory
        while current_addr and current_addr.compareTo(block.getEnd()) <= 0:
            if current_addr.add(pointer_size - 1).compareTo(block.getEnd()) > 0:
                break

            # Determine if vtable seems likely
            functions = scan_for_vtables(currentProgram, current_addr, 100)
            if len(functions) >= 3:
                vtable = {
                    "addr": str(current_addr),
                    "size": len(functions) * pointer_size,
                    "count": len(functions),
                    "functions": functions,
                    "block": block.getName(),
                    "method": "raw_scan"
                }
                vtables.append(vtable)
                log_info("Found vtable at %s with %d functions" % (current_addr, len(functions)))
                current_addr = current_addr.add(len(functions) * pointer_size)
            else:
                current_addr = current_addr.add(pointer_size)

    # Create summary
    vtables_data = {
        "vtables": vtables,
        "count": len(vtables),
        "total_functions": sum(vt["count"] for vt in vtables)
    }

    # Export vtables
    log_info("Exporting %d vtables" % len(vtables))
    save_json_file(path, "vtables", clean_data(vtables_data))
    log_info("Export complete")

    # Print summary
    if vtables:
        log_info("\nSUMMARY:")
        for i, vt in enumerate(vtables):
            log_info("VTable %d: %s (%d functions)" % (i+1, vt["addr"], vt["count"]))
            for j, func in enumerate(vt["functions"][:5]):
                log_info("  [%d] %s -> %s" % (j, func["ptr_addr"], func["func_name"]))
            if len(vt["functions"]) > 5:
                log_info("  ... and %d more functions" % (len(vt["functions"]) - 5))
    else:
        log_info("\nNo vtables found.")
