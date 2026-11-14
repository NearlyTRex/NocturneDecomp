from ghidra_annotations.util import (
    clean_data, get_function_name, get_pointer_size, is_function_address, log_info, read_pointer_at_address,
    save_json_file, save_json_files)

# A run of function pointers this long is taken for a vtable
MIN_VTABLE_SLOTS = 3


def is_shared_return(currentProgram, addr):
    """Is addr a RET in code, though no function starts there?

    Watcom gives an empty virtual no body of its own: the slot points at a RET
    that already ends some other function (CPod's slot 1 is its destructor's
    last RET). Ghidra rightly keeps that byte in the destructor, so the slot
    targets no function -- and a scan that stopped there started the table
    after it, one or two slots late.
    """
    block = currentProgram.getMemory().getBlock(addr)
    instruction = currentProgram.getListing().getInstructionAt(addr)
    return bool(block and block.isExecute() and instruction
                and instruction.getMnemonicString().upper() == "RET")


def scan_for_vtables(currentProgram, addr):
    """The function pointers in the run starting at addr: a vtable's slots, if it is one.

    The run ends at the first pointer that is not to a function or a shared RET
    (is_shared_return), or at the end of memory.
    """
    pointer_size = get_pointer_size(currentProgram)
    function_manager = currentProgram.getFunctionManager()
    memory = currentProgram.getMemory()
    functions = []
    scan_addr = addr
    while memory.contains(scan_addr) and memory.contains(scan_addr.add(pointer_size - 1)):
        target_addr = read_pointer_at_address(currentProgram, scan_addr)
        if not target_addr or not (is_function_address(currentProgram, target_addr)
                                   or is_shared_return(currentProgram, target_addr)):
            break
        func = function_manager.getFunctionAt(target_addr)
        convention = func.getCallingConventionName() if func else None
        functions.append({
            "offset": len(functions) * pointer_size,
            "ptr_addr": str(scan_addr),
            "func_addr": str(target_addr),
            "func_name": get_function_name(currentProgram, target_addr),
            "convention": str(convention) if convention else None,
            "param_count": func.getParameterCount() if func else 0
        })
        scan_addr = scan_addr.add(pointer_size)
    return functions


def find_vtables(currentProgram):
    """Each run of MIN_VTABLE_SLOTS or more aligned function pointers in initialized data."""
    vtables = []
    pointer_size = get_pointer_size(currentProgram)
    log_info("Gathering vtables (pointer_size=%d)" % pointer_size)
    for block in currentProgram.getMemory().getBlocks():
        if not block.isInitialized() or block.isExecute():
            continue
        log_info("Scanning block: %s" % block.getName())
        start = block.getStart()
        end = block.getEnd().getOffset()
        offset = -start.getOffset() % pointer_size
        while start.getOffset() + offset + pointer_size - 1 <= end:
            current_addr = start.add(offset)
            functions = scan_for_vtables(currentProgram, current_addr)
            if len(functions) < MIN_VTABLE_SLOTS:
                offset += pointer_size
                continue
            vtables.append({
                "addr": str(current_addr),
                "size": len(functions) * pointer_size,
                "count": len(functions),
                "functions": functions,
                "block": block.getName(),
                "method": "raw_scan"
            })
            log_info("Found vtable at %s with %d functions" % (current_addr, len(functions)))
            offset += len(functions) * pointer_size
    return vtables


def convention_analysis(vtables):
    """How many slots use each calling convention, and the slots that are not __cdecl."""
    convention_counts = {}
    non_cdecl_funcs = []
    for vt in vtables:
        for func in vt["functions"]:
            conv = func["convention"] or "__cdecl"
            convention_counts[conv] = convention_counts.get(conv, 0) + 1
            if conv != "__cdecl":
                non_cdecl_funcs.append({
                    "vtable_addr": vt["addr"],
                    "offset": func["offset"],
                    "func_addr": func["func_addr"],
                    "func_name": func["func_name"],
                    "convention": conv,
                    "param_count": func["param_count"]
                })
    return {
        "convention_summary": convention_counts,
        "non_cdecl_count": len(non_cdecl_funcs),
        "non_cdecl_functions": non_cdecl_funcs
    }


def export_vtables(currentProgram, path):
    vtables = find_vtables(currentProgram)
    analysis = convention_analysis(vtables)
    log_info("Exporting vtable convention analysis (%d non-cdecl functions)" % analysis["non_cdecl_count"])
    save_json_file(path, "vtable_conventions", clean_data(analysis))

    # Bucketed by the address shifted past its always-zero alignment bits, for a better spread
    log_info("Exporting %d vtables to bucketed files" % len(vtables))
    save_json_files(path, "vtables", vtables,
                    lambda vt: "%x" % (int(vt["addr"], 16) >> 4), bucket_bits=4)
    log_info("Export complete")

    if not vtables:
        log_info("\nNo vtables found.")
        return
    log_info("\nSUMMARY:")
    for i, vt in enumerate(vtables):
        log_info("VTable %d: %s (%d functions)" % (i+1, vt["addr"], vt["count"]))
        for j, func in enumerate(vt["functions"][:5]):
            log_info("  [%d] %s -> %s" % (j, func["ptr_addr"], func["func_name"]))
        if len(vt["functions"]) > 5:
            log_info("  ... and %d more functions" % (len(vt["functions"]) - 5))
