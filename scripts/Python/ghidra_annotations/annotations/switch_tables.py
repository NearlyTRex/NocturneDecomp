import os
from ghidra_annotations.util import *

def export_switch_tables(currentProgram, path):
    """Export switch/jump table information from Ghidra.

    This exports computed jump targets for switch statements, which are
    essential for accurate ESP tracking in decompiled code.
    """

    log_info("Gathering switch tables...")

    # Get managers
    listing = currentProgram.getListing()
    ref_manager = currentProgram.getReferenceManager()
    func_manager = currentProgram.getFunctionManager()

    switch_tables = []

    # Iterate through all functions
    func_count = 0
    for func in func_manager.getFunctions(True):
        func_count += 1
        func_addr = func.getEntryPoint()
        func_name = func.getName()
        body = func.getBody()

        # Iterate through instructions in function
        instr_iter = listing.getInstructions(body, True)
        while instr_iter.hasNext():
            instr = instr_iter.next()

            # Check if this is a computed jump (indirect jump / switch)
            flow_type = instr.getFlowType()
            if not flow_type.isComputed() or not flow_type.isJump():
                continue

            instr_addr = instr.getAddress()

            # Get all flow references from this instruction
            # These are the switch case targets
            targets = []
            refs = instr.getReferencesFrom()
            for ref in refs:
                if ref.getReferenceType().isFlow():
                    target_addr = ref.getToAddress()
                    targets.append({
                        "addr": str(target_addr),
                        "ref_type": str(ref.getReferenceType())
                    })

            # Also check for references through the reference manager
            # (might catch additional computed targets)
            refs_from = ref_manager.getReferencesFrom(instr_addr)
            for ref in refs_from:
                if ref.getReferenceType().isFlow():
                    target_addr = ref.getToAddress()
                    target_str = str(target_addr)
                    # Avoid duplicates
                    if not any(t["addr"] == target_str for t in targets):
                        targets.append({
                            "addr": target_str,
                            "ref_type": str(ref.getReferenceType())
                        })

            if targets:
                switch_entry = {
                    "switch_addr": str(instr_addr),
                    "function_addr": str(func_addr),
                    "function_name": func_name,
                    "assembly": str(instr),
                    "target_count": len(targets),
                    "targets": sorted(targets, key=lambda t: t["addr"])
                }
                switch_tables.append(switch_entry)

    log_info("Found %d switch tables in %d functions" % (len(switch_tables), func_count))

    # Create summary
    switch_data = {
        "switch_tables": switch_tables,
        "count": len(switch_tables),
        "total_targets": sum(st["target_count"] for st in switch_tables)
    }

    # Export switch tables
    log_info("Exporting %d switch tables with %d total targets" % (
        switch_data["count"], switch_data["total_targets"]))
    save_json_file(path, "switch_tables", clean_data(switch_data))
    log_info("Switch table export complete")

    # Print summary
    if switch_tables:
        log_info("\nSWITCH TABLE SUMMARY (top 10):")
        for i, st in enumerate(sorted(switch_tables, key=lambda x: -x["target_count"])[:10]):
            log_info("  %s: %d targets in %s" % (
                st["switch_addr"], st["target_count"], st["function_name"]))


def delete_switch_tables(currentProgram, path):
    """Delete switch tables export directory."""
    target_dir = os.path.join(path, "switch_tables")
    if os.path.exists(target_dir):
        import shutil
        shutil.rmtree(target_dir)
        log_info("Deleted switch_tables directory")
