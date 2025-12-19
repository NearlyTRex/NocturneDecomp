// Find functions that have BADSPACEBASE issues in their decompilation
//@author NocturneDecomp
//@category Annotations
//@keybinding
//@menupath File.Annotations.Find BADSPACEBASE Functions
//@toolbar

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.pcode.*;
import java.util.*;

public class FindBadSpaceBaseFunctions extends GhidraScript {

    private DecompInterface decompiler;

    @Override
    public void run() throws Exception {

        // Initialize decompiler
        decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);

        // Configure decompiler options
        DecompileOptions options = new DecompileOptions();
        decompiler.setOptions(options);

        println("Searching for functions with BADSPACEBASE issues...");
        println("This may take a while for large programs.");
        println("");

        List<FunctionInfo> badFunctions = new ArrayList<>();
        int totalFunctions = 0;

        FunctionIterator funcIter = currentProgram.getFunctionManager().getFunctions(true);
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            totalFunctions++;

            if (totalFunctions % 100 == 0) {
                monitor.setMessage("Processed " + totalFunctions + " functions...");
            }

            FunctionInfo info = analyzeFunction(func);
            if (info != null && info.hasBadSpaceBase) {
                badFunctions.add(info);
            }
        }

        // Sort by complexity (most complex first - likely more impactful to fix)
        badFunctions.sort((a, b) -> Integer.compare(b.espAccessCount, a.espAccessCount));

        // Print results
        println("=".repeat(80));
        println("Found " + badFunctions.size() + " functions with BADSPACEBASE out of " + totalFunctions + " total");
        println("=".repeat(80));
        println("");

        // Group by severity
        List<FunctionInfo> severe = new ArrayList<>();
        List<FunctionInfo> moderate = new ArrayList<>();
        List<FunctionInfo> minor = new ArrayList<>();

        for (FunctionInfo info : badFunctions) {
            if (info.espAccessCount > 10) {
                severe.add(info);
            } else if (info.espAccessCount > 3) {
                moderate.add(info);
            } else {
                minor.add(info);
            }
        }

        println("SEVERE (" + severe.size() + " functions with >10 ESP accesses):");
        println("-".repeat(80));
        for (FunctionInfo info : severe) {
            printFunctionInfo(info);
        }
        println("");

        println("MODERATE (" + moderate.size() + " functions with 4-10 ESP accesses):");
        println("-".repeat(80));
        for (FunctionInfo info : moderate) {
            printFunctionInfo(info);
        }
        println("");

        println("MINOR (" + minor.size() + " functions with 1-3 ESP accesses):");
        println("-".repeat(80));
        for (FunctionInfo info : minor) {
            printFunctionInfo(info);
        }

        // Cleanup
        decompiler.dispose();

        // Offer to process
        if (!badFunctions.isEmpty()) {
            println("");
            println("Run 'Fix ESP Stack Frames' script to attempt automatic fixes.");
        }
    }

    private FunctionInfo analyzeFunction(Function func) {
        FunctionInfo info = new FunctionInfo();
        info.func = func;
        info.address = func.getEntryPoint();
        info.name = func.getName();

        // Decompile the function
        DecompileResults results = decompiler.decompileFunction(func, 30, monitor);
        if (results == null || !results.decompileCompleted()) {
            return null;
        }

        // Check decompiled C code for BADSPACEBASE
        DecompiledFunction decompiledFunc = results.getDecompiledFunction();
        if (decompiledFunc == null) {
            return null;
        }

        String cCode = decompiledFunc.getC();
        if (cCode == null) {
            return null;
        }

        // Check for BADSPACEBASE
        info.hasBadSpaceBase = cCode.contains("BADSPACEBASE");

        // Check for in_stack_ parameters (another indicator of stack issues)
        info.hasInStack = cCode.contains("in_stack_");

        // Check for &stack0x references
        info.hasStackRef = cCode.contains("&stack0x");

        // Count occurrences
        info.badSpaceBaseCount = countOccurrences(cCode, "BADSPACEBASE");
        info.inStackCount = countOccurrences(cCode, "in_stack_");
        info.stackRefCount = countOccurrences(cCode, "&stack0x");

        // Analyze assembly for ESP accesses
        info.espAccessCount = countESPAccesses(func);

        // Get stack allocation size
        info.stackAllocation = findStackAllocation(func);

        // Check if function uses EBP-based or ESP-based frame
        info.usesEBPFrame = usesEBPFrame(func);

        return info;
    }

    private int countOccurrences(String str, String sub) {
        int count = 0;
        int idx = 0;
        while ((idx = str.indexOf(sub, idx)) != -1) {
            count++;
            idx += sub.length();
        }
        return count;
    }

    private int countESPAccesses(Function func) {
        int count = 0;
        AddressSetView body = func.getBody();
        InstructionIterator instrIter = currentProgram.getListing().getInstructions(body, true);

        while (instrIter.hasNext()) {
            Instruction instr = instrIter.next();
            int numOps = instr.getNumOperands();

            for (int i = 0; i < numOps; i++) {
                String opRep = instr.getDefaultOperandRepresentation(i).toLowerCase();
                if ((opRep.contains("esp") || opRep.contains("[esp")) &&
                    opRep.contains("+")) {
                    count++;
                }
            }
        }

        return count;
    }

    private int findStackAllocation(Function func) {
        Address entry = func.getEntryPoint();
        Instruction instr = currentProgram.getListing().getInstructionAt(entry);

        for (int i = 0; i < 10 && instr != null; i++) {
            String mnemonic = instr.getMnemonicString().toLowerCase();

            if (mnemonic.equals("sub")) {
                String op0 = instr.getDefaultOperandRepresentation(0).toLowerCase();
                if (op0.contains("esp") || op0.contains("sp")) {
                    String op1 = instr.getDefaultOperandRepresentation(1);
                    try {
                        if (op1.startsWith("0x")) {
                            return Integer.parseInt(op1.substring(2), 16);
                        } else {
                            return Integer.parseInt(op1);
                        }
                    } catch (NumberFormatException e) {
                        // Couldn't parse
                    }
                }
            }

            instr = instr.getNext();
        }

        return -1;
    }

    private boolean usesEBPFrame(Function func) {
        Address entry = func.getEntryPoint();
        Instruction instr = currentProgram.getListing().getInstructionAt(entry);

        for (int i = 0; i < 5 && instr != null; i++) {
            String mnemonic = instr.getMnemonicString().toLowerCase();

            // Look for MOV EBP, ESP pattern
            if (mnemonic.equals("mov")) {
                String op0 = instr.getDefaultOperandRepresentation(0).toLowerCase();
                String op1 = instr.getDefaultOperandRepresentation(1).toLowerCase();
                if ((op0.contains("ebp") || op0.contains("bp")) &&
                    (op1.contains("esp") || op1.contains("sp"))) {
                    return true;
                }
            }

            instr = instr.getNext();
        }

        return false;
    }

    private void printFunctionInfo(FunctionInfo info) {
        StringBuilder sb = new StringBuilder();
        sb.append(String.format("  %s @ %s", info.name, info.address));
        sb.append(String.format("\n    Stack: 0x%x, ESP accesses: %d, Frame: %s",
            info.stackAllocation > 0 ? info.stackAllocation : 0,
            info.espAccessCount,
            info.usesEBPFrame ? "EBP" : "ESP"));

        if (info.badSpaceBaseCount > 0) {
            sb.append(String.format("\n    BADSPACEBASE: %d", info.badSpaceBaseCount));
        }
        if (info.inStackCount > 0) {
            sb.append(String.format(", in_stack_: %d", info.inStackCount));
        }
        if (info.stackRefCount > 0) {
            sb.append(String.format(", &stack0x: %d", info.stackRefCount));
        }

        println(sb.toString());
    }

    private static class FunctionInfo {
        Function func;
        Address address;
        String name;
        boolean hasBadSpaceBase;
        boolean hasInStack;
        boolean hasStackRef;
        int badSpaceBaseCount;
        int inStackCount;
        int stackRefCount;
        int espAccessCount;
        int stackAllocation;
        boolean usesEBPFrame;
    }
}
