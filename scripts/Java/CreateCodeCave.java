// Create a code cave from the selected memory region.
// Clears existing code units, fills with INT3 (0xCC) trap bytes,
// optionally removes function definitions, and marks the region
// with a plate comment for the export pipeline to discover.
//@author NocturneDecomp
//@category Annotations
//@keybinding shift Z
//@menupath File.Annotations.Create Code Cave
//@toolbar

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.symbol.*;

import java.util.*;

public class CreateCodeCave extends GhidraScript {

    // INT3 trap byte — will fault if accidentally executed
    private static final byte INT3 = (byte) 0xCC;

    // Marker prefix that the export pipeline scans for
    public static final String MARKER_PREFIX = "CODE_CAVE";

    @Override
    public void run() throws Exception {

        AddressSetView selection = currentSelection;
        if (selection == null || selection.isEmpty()) {
            popup("No selection. Select a memory range first.");
            return;
        }

        Address minAddr = selection.getMinAddress();
        Address maxAddr = selection.getMaxAddress();
        long size = maxAddr.subtract(minAddr) + 1;

        // Show what we're about to do
        String msg = String.format(
            "Create code cave: %d bytes\n\n" +
            "  Range: %s - %s\n\n" +
            "This will:\n" +
            "  1. Clear all code units (instructions/data) in the range\n" +
            "  2. Fill with INT3 (0xCC) trap bytes\n" +
            "  3. Optionally remove function definitions\n" +
            "  4. Mark with a plate comment for the export pipeline\n\n" +
            "This cannot be undone (except via undo history).",
            size, minAddr, maxAddr);

        if (!askYesNo("Create Code Cave", msg)) {
            return;
        }

        // Check for functions that are fully contained in the selection
        boolean removeContainedFunctions = false;
        FunctionManager funcMgr = currentProgram.getFunctionManager();
        int containedFuncCount = 0;
        FunctionIterator funcIter = funcMgr.getFunctions(selection, true);
        while (funcIter.hasNext()) {
            Function func = funcIter.next();
            AddressSetView funcBody = func.getBody();
            if (selection.contains(funcBody)) {
                containedFuncCount++;
            }
        }

        if (containedFuncCount > 0) {
            removeContainedFunctions = askYesNo("Remove Functions",
                String.format(
                    "%d function(s) are fully contained in the selection.\n" +
                    "Remove their definitions too?",
                    containedFuncCount));
        }

        // Ask for an optional name for this cave
        String caveName = askString("Cave Name",
            "Name for this cave (e.g. 'crt_spare_1'):",
            String.format("cave_%s", minAddr));

        // Do the work
        Listing listing = currentProgram.getListing();
        Memory memory = currentProgram.getMemory();

        int bytesFilled = 0;
        int functionsRemoved = 0;

        monitor.setMessage("Creating code cave...");
        monitor.setMaximum(size);

        // Step 1: Remove fully contained functions
        if (removeContainedFunctions) {
            funcIter = funcMgr.getFunctions(selection, true);
            while (funcIter.hasNext()) {
                Function func = funcIter.next();
                AddressSetView funcBody = func.getBody();
                if (selection.contains(funcBody)) {
                    String funcName = func.getName();
                    Address entry = func.getEntryPoint();
                    funcMgr.removeFunction(entry);
                    printf("  Removed function: %s @ %s\n", funcName, entry);
                    functionsRemoved++;
                }
            }
        }

        // Step 2: Clear code units in the range
        listing.clearCodeUnits(minAddr, maxAddr, false);

        // Step 3: Fill with INT3 bytes
        Address addr = minAddr;
        while (addr.compareTo(maxAddr) <= 0) {
            if (monitor.isCancelled()) {
                printerr("Cancelled at " + addr);
                break;
            }
            try {
                memory.setByte(addr, INT3);
                bytesFilled++;
            } catch (MemoryAccessException e) {
                printerr("Cannot write to " + addr + ": " + e.getMessage());
            }
            monitor.setProgress(bytesFilled);
            addr = addr.add(1);
        }

        // Step 4: Add marker plate comment
        // Format: CODE_CAVE <name> <size>
        // The export pipeline parses this to build code_caves.json
        String marker = String.format("%s %s %d", MARKER_PREFIX, caveName, bytesFilled);
        listing.setComment(minAddr, CodeUnit.PLATE_COMMENT, marker);

        // Step 5: Add a label at the cave start
        SymbolTable symTable = currentProgram.getSymbolTable();
        symTable.createLabel(minAddr, "CAVE_" + caveName, SourceType.USER_DEFINED);

        printf("Done: %d bytes filled with INT3, %d functions removed\n",
            bytesFilled, functionsRemoved);
        printf("Marker: %s\n", marker);
    }
}
