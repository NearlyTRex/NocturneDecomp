from ghidra_annotations.util import clean_data, log_info, save_json_file


def export_switch_tables(currentProgram, path):
    """Export switch/jump table information from Ghidra.

    This exports computed jump targets for switch statements, which are
    essential for accurate ESP tracking in decompiled code.
    """
    log_info("Gathering switch tables...")
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()

    switch_tables = []
    func_count = 0
    for func in currentProgram.getFunctionManager().getFunctions(True):
        func_count += 1
        for instr in listing.getInstructions(func.getBody(), True):
            # A computed jump is a switch; its flow references are the case targets
            flow_type = instr.getFlowType()
            if not flow_type.isComputed() or not flow_type.isJump():
                continue
            targets = [{"addr": str(ref.getToAddress()), "ref_type": str(ref.getReferenceType())}
                       for ref in ref_manager.getReferencesFrom(instr.getAddress())
                       if ref.getReferenceType().isFlow()]
            if targets:
                switch_tables.append({
                    "switch_addr": str(instr.getAddress()),
                    "function_addr": str(func.getEntryPoint()),
                    "function_name": func.getName(),
                    "assembly": str(instr),
                    "target_count": len(targets),
                    "targets": sorted(targets, key=lambda t: t["addr"])
                })

    log_info("Found %d switch tables in %d functions" % (len(switch_tables), func_count))
    switch_data = {
        "switch_tables": switch_tables,
        "count": len(switch_tables),
        "total_targets": sum(st["target_count"] for st in switch_tables)
    }
    log_info("Exporting %d switch tables with %d total targets" % (
        switch_data["count"], switch_data["total_targets"]))
    save_json_file(path, "switch_tables", clean_data(switch_data))
    log_info("Switch table export complete")

    if switch_tables:
        log_info("\nSWITCH TABLE SUMMARY (top 10):")
        for st in sorted(switch_tables, key=lambda x: -x["target_count"])[:10]:
            log_info("  %s: %d targets in %s" % (
                st["switch_addr"], st["target_count"], st["function_name"]))
