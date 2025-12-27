import os
from ghidra_annotations.util import *

def scan_for_vtables(currentProgram, addr, max_scan = 100):

    # Get pointer size
    pointer_size = get_pointer_size(currentProgram)
    function_manager = currentProgram.getFunctionManager()

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

            # Get calling convention
            func = function_manager.getFunctionAt(target_addr)
            convention = None
            param_count = 0
            if func:
                convention = func.getCallingConventionName()
                param_count = func.getParameterCount()

            functions.append({
                "offset": i * pointer_size,
                "ptr_addr": str(scan_addr),
                "func_addr": str(target_addr),
                "func_name": function_name,
                "convention": str(convention) if convention else None,
                "param_count": param_count
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

    # Analyze calling conventions across all vtables
    convention_counts = {}
    non_cdecl_funcs = []
    for vt in vtables:
        for func in vt["functions"]:
            conv = func.get("convention", "__cdecl") or "__cdecl"
            convention_counts[conv] = convention_counts.get(conv, 0) + 1
            if conv != "__cdecl":
                non_cdecl_funcs.append({
                    "vtable_addr": vt["addr"],
                    "offset": func["offset"],
                    "func_addr": func["func_addr"],
                    "func_name": func["func_name"],
                    "convention": conv,
                    "param_count": func.get("param_count", 0)
                })

    # Create convention analysis file
    convention_analysis = {
        "convention_summary": convention_counts,
        "non_cdecl_count": len(non_cdecl_funcs),
        "non_cdecl_functions": non_cdecl_funcs
    }

    # Export convention analysis
    log_info("Exporting vtable convention analysis (%d non-cdecl functions)" % len(non_cdecl_funcs))
    save_json_file(path, "vtable_conventions", clean_data(convention_analysis))

    # Export vtables using bucketed files (creates vtables_buckets.json metadata)
    # Shift address right by 4 to skip always-zero alignment bits and get better distribution
    log_info("Exporting %d vtables to bucketed files" % len(vtables))
    save_json_files(path, "vtables", vtables,
                    lambda vt: "%x" % (int(vt["addr"], 16) >> 4), bucket_bits=4)
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
