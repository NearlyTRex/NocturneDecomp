// Export All Functions P-code to Files
// Ghidra Script - Run from Script Manager
//
// Exports the raw P-code for all functions (or selected subset) to a directory.
// Each function gets its own file: func_<entry>.pcode
// Also generates an index file listing all exported functions.
//
// Usage:
//   1. Run this script
//   2. Choose output directory
//   3. Optionally filter by BADSPACEBASE or other criteria
//   4. Wait for export to complete
//
// @category Decompiler
// @keybinding
// @menupath Tools.Export All Functions P-code
// @toolbar

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.lang.*;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import ghidra.util.task.TaskMonitor;

import java.io.*;
import java.util.*;

public class ExportAllFunctionsPcode extends GhidraScript {

    // x86 32-bit register names for readability
    private static final Map<Long, String> X86_REGS = new HashMap<>();
    static {
        X86_REGS.put(0x0L, "EAX");
        X86_REGS.put(0x4L, "ECX");
        X86_REGS.put(0x8L, "EDX");
        X86_REGS.put(0xcL, "EBX");
        X86_REGS.put(0x10L, "ESP");
        X86_REGS.put(0x14L, "EBP");
        X86_REGS.put(0x18L, "ESI");
        X86_REGS.put(0x1cL, "EDI");
    }

    // Statistics
    private int totalFunctions = 0;
    private int exportedFunctions = 0;
    private int skippedFunctions = 0;
    private int functionsWithBadSpaceBase = 0;
    private long totalInstructions = 0;
    private long totalPcodeOps = 0;

    // Export options
    private boolean exportOnlyBadSpaceBase = false;
    private boolean includeThunks = false;
    private boolean includeExternal = false;
    private int minInstructions = 0;

    @Override
    protected void run() throws Exception {
        // Ask for output directory
        File outputDir = askDirectory("Select Output Directory", "Export");
        if (outputDir == null) {
            return;
        }

        // Create subdirectory for this program
        File programDir = new File(outputDir, currentProgram.getName() + "_pcode");
        if (!programDir.exists()) {
            programDir.mkdirs();
        }

        // Ask for export options
        exportOnlyBadSpaceBase = askYesNo("Export Options",
            "Export ONLY functions with BADSPACEBASE errors?\n" +
            "(No = export all functions)");

        if (!exportOnlyBadSpaceBase) {
            includeThunks = askYesNo("Export Options", "Include thunk functions?");
            includeExternal = askYesNo("Export Options", "Include external/imported functions?");
        }

        println("=".repeat(70));
        println("Exporting P-code for: " + currentProgram.getName());
        println("Output directory: " + programDir.getAbsolutePath());
        println("Export only BADSPACEBASE: " + exportOnlyBadSpaceBase);
        println("=".repeat(70));

        // Get all functions
        FunctionManager funcMgr = currentProgram.getFunctionManager();
        FunctionIterator funcIter = funcMgr.getFunctions(true);
        List<Function> allFunctions = new ArrayList<>();
        while (funcIter.hasNext()) {
            allFunctions.add(funcIter.next());
        }
        totalFunctions = allFunctions.size();

        println("Total functions in program: " + totalFunctions);

        // Initialize decompiler for BADSPACEBASE detection
        DecompInterface decompiler = null;
        if (exportOnlyBadSpaceBase) {
            decompiler = new DecompInterface();
            decompiler.openProgram(currentProgram);
        }

        // Process each function
        List<FunctionExportInfo> exportedList = new ArrayList<>();

        for (int i = 0; i < allFunctions.size(); i++) {
            if (monitor.isCancelled()) {
                break;
            }

            Function func = allFunctions.get(i);
            monitor.setMessage("Processing " + func.getName() + " (" + (i+1) + "/" + totalFunctions + ")");
            monitor.setProgress(i * 100 / totalFunctions);

            // Skip based on criteria
            if (!includeThunks && func.isThunk()) {
                skippedFunctions++;
                continue;
            }
            if (!includeExternal && func.isExternal()) {
                skippedFunctions++;
                continue;
            }

            // Check for BADSPACEBASE if filtering
            boolean hasBadSpaceBase = false;
            if (exportOnlyBadSpaceBase && decompiler != null) {
                hasBadSpaceBase = checkForBadSpaceBase(decompiler, func);
                if (!hasBadSpaceBase) {
                    skippedFunctions++;
                    continue;
                }
                functionsWithBadSpaceBase++;
            }

            // Export the function
            FunctionExportInfo info = exportFunction(func, programDir, hasBadSpaceBase);
            if (info != null) {
                exportedList.add(info);
                exportedFunctions++;
            }

            // Progress update every 100 functions
            if ((i + 1) % 100 == 0) {
                println("Progress: " + (i + 1) + "/" + totalFunctions +
                    " (" + exportedFunctions + " exported, " + skippedFunctions + " skipped)");
            }
        }

        if (decompiler != null) {
            decompiler.dispose();
        }

        // Write index file
        writeIndexFile(programDir, exportedList);

        // Write summary
        println("=".repeat(70));
        println("Export Complete!");
        println("=".repeat(70));
        println("Total functions:      " + totalFunctions);
        println("Exported:             " + exportedFunctions);
        println("Skipped:              " + skippedFunctions);
        if (exportOnlyBadSpaceBase) {
            println("With BADSPACEBASE:    " + functionsWithBadSpaceBase);
        }
        println("Total instructions:   " + totalInstructions);
        println("Total P-code ops:     " + totalPcodeOps);
        println("Output directory:     " + programDir.getAbsolutePath());
        println("=".repeat(70));

        popup("Export complete!\n\n" +
            "Exported: " + exportedFunctions + " functions\n" +
            "Output: " + programDir.getAbsolutePath());
    }

    /**
     * Check if a function's decompilation contains BADSPACEBASE
     */
    private boolean checkForBadSpaceBase(DecompInterface decompiler, Function func) {
        try {
            DecompileResults results = decompiler.decompileFunction(func, 30, monitor);
            if (results != null) {
                String decompiledC = results.getDecompiledFunction().getC();
                if (decompiledC != null && decompiledC.contains("BADSPACEBASE")) {
                    return true;
                }
            }
        } catch (Exception e) {
            // If decompilation fails, consider it might have issues
        }
        return false;
    }

    /**
     * Export a single function to a file
     */
    private FunctionExportInfo exportFunction(Function func, File outputDir, boolean hasBadSpaceBase) {
        String fileName = "func_" + func.getEntryPoint().toString() + ".pcode";
        File outputFile = new File(outputDir, fileName);

        int instrCount = 0;
        int pcodeCount = 0;

        try (PrintWriter writer = new PrintWriter(new FileWriter(outputFile))) {
            // Header
            writer.println("# " + "=".repeat(76));
            writer.println("# Function P-code Export");
            writer.println("# " + "=".repeat(76));
            writer.println("#");
            writer.println("# Function:    " + func.getName());
            writer.println("# Entry:       " + func.getEntryPoint());
            writer.println("# Signature:   " + func.getSignature().getPrototypeString());
            writer.println("# Program:     " + currentProgram.getName());
            writer.println("# Exported:    " + new java.util.Date());
            if (hasBadSpaceBase) {
                writer.println("# WARNING:     Contains BADSPACEBASE errors!");
            }
            writer.println("#");
            writer.println("# Format: @<address>  # <assembly>");
            writer.println("#         OPCODE (output) = (input1), (input2), ...");
            writer.println("#");
            writer.println("# Varnode: (space, offset, size)");
            writer.println("#   Spaces: register, const, unique, ram, stack");
            writer.println("#");
            writer.println("# x86 Registers: EAX=0x0, ECX=0x4, EDX=0x8, EBX=0xc");
            writer.println("#                ESP=0x10, EBP=0x14, ESI=0x18, EDI=0x1c");
            writer.println("#");
            writer.println("# " + "=".repeat(76));
            writer.println();

            // Get address set for function body
            AddressSetView body = func.getBody();
            Listing listing = currentProgram.getListing();

            // Iterate through instructions
            InstructionIterator instrIter = listing.getInstructions(body, true);
            while (instrIter.hasNext()) {
                Instruction instr = instrIter.next();
                instrCount++;

                // Get address and assembly
                Address addr = instr.getAddress();
                String asm = instr.toString();

                // Format assembly with operands
                String fullAsm = formatAssembly(instr);

                // Write instruction header
                writer.println("@" + addr.toString() + "  # " + fullAsm);

                // Get P-code for this instruction
                PcodeOp[] pcode = instr.getPcode();
                if (pcode == null || pcode.length == 0) {
                    writer.println("# (no p-code)");
                } else {
                    for (PcodeOp op : pcode) {
                        writer.println(formatPcodeOp(op));
                        pcodeCount++;
                    }
                }

                writer.println();
            }

            // Footer
            writer.println("# " + "=".repeat(76));
            writer.println("# Summary: " + instrCount + " instructions, " + pcodeCount + " P-code ops");
            writer.println("# " + "=".repeat(76));

            totalInstructions += instrCount;
            totalPcodeOps += pcodeCount;

            return new FunctionExportInfo(func.getName(), func.getEntryPoint().toString(),
                fileName, instrCount, pcodeCount, hasBadSpaceBase);

        } catch (IOException e) {
            printerr("Error exporting " + func.getName() + ": " + e.getMessage());
            return null;
        }
    }

    /**
     * Format assembly instruction with operands
     */
    private String formatAssembly(Instruction instr) {
        StringBuilder sb = new StringBuilder();
        sb.append(instr.getMnemonicString());

        int numOperands = instr.getNumOperands();
        if (numOperands > 0) {
            sb.append(" ");
            for (int i = 0; i < numOperands; i++) {
                if (i > 0) {
                    sb.append(", ");
                }
                String opStr = instr.getDefaultOperandRepresentation(i);
                sb.append(opStr);
            }
        }

        return sb.toString();
    }

    private String formatPcodeOp(PcodeOp op) {
        StringBuilder sb = new StringBuilder();

        // Opcode mnemonic
        String mnemonic = op.getMnemonic();
        sb.append(mnemonic);

        // Output varnode (if present)
        Varnode output = op.getOutput();
        if (output != null) {
            sb.append(" ");
            sb.append(formatVarnode(output));
        }

        // Separator if we have both output and inputs
        if (output != null && op.getNumInputs() > 0) {
            sb.append(" =");
        }

        // Input varnodes
        for (int i = 0; i < op.getNumInputs(); i++) {
            Varnode input = op.getInput(i);
            sb.append(" ");
            sb.append(formatVarnode(input));
            if (i < op.getNumInputs() - 1) {
                sb.append(",");
            }
        }

        return sb.toString();
    }

    private String formatVarnode(Varnode vn) {
        if (vn == null) {
            return "(null)";
        }

        Address addr = vn.getAddress();
        AddressSpace space = addr.getAddressSpace();
        long offset = addr.getOffset();
        int size = vn.getSize();

        String spaceName = space.getName().toLowerCase();

        // Format offset as hex
        String offsetStr;
        if (offset < 0) {
            // Handle negative offsets (two's complement for 32-bit)
            offsetStr = String.format("0x%x", offset & 0xFFFFFFFFL);
        } else {
            offsetStr = String.format("0x%x", offset);
        }

        // Add comment for known registers
        String comment = "";
        if (spaceName.equals("register") && X86_REGS.containsKey(offset) && size == 4) {
            comment = " /* " + X86_REGS.get(offset) + " */";
        }

        return String.format("(%s,%s,%d)%s", spaceName, offsetStr, size, comment);
    }

    /**
     * Write index file listing all exported functions
     */
    private void writeIndexFile(File outputDir, List<FunctionExportInfo> exportedList) {
        File indexFile = new File(outputDir, "_index.txt");

        try (PrintWriter writer = new PrintWriter(new FileWriter(indexFile))) {
            writer.println("# " + "=".repeat(76));
            writer.println("# P-code Export Index");
            writer.println("# " + "=".repeat(76));
            writer.println("#");
            writer.println("# Program:     " + currentProgram.getName());
            writer.println("# Exported:    " + new java.util.Date());
            writer.println("# Functions:   " + exportedList.size());
            writer.println("#");
            writer.println("# " + "=".repeat(76));
            writer.println();

            // Sort by entry address
            exportedList.sort((a, b) -> a.entryAddress.compareTo(b.entryAddress));

            // Summary of BADSPACEBASE functions
            List<FunctionExportInfo> badSpaceBaseFuncs = new ArrayList<>();
            for (FunctionExportInfo info : exportedList) {
                if (info.hasBadSpaceBase) {
                    badSpaceBaseFuncs.add(info);
                }
            }

            if (!badSpaceBaseFuncs.isEmpty()) {
                writer.println("# BADSPACEBASE Functions (" + badSpaceBaseFuncs.size() + "):");
                writer.println("# " + "-".repeat(76));
                for (FunctionExportInfo info : badSpaceBaseFuncs) {
                    writer.println("# " + info.fileName + "  " + info.name);
                }
                writer.println();
            }

            // Full list
            writer.println("# All Exported Functions:");
            writer.println("# " + "-".repeat(76));
            writer.println(String.format("# %-20s %-40s %6s %8s %s",
                "Entry", "Name", "Instrs", "P-code", "File"));
            writer.println("# " + "-".repeat(76));

            for (FunctionExportInfo info : exportedList) {
                String marker = info.hasBadSpaceBase ? "*" : " ";
                writer.println(String.format("%s %-20s %-40s %6d %8d %s",
                    marker, info.entryAddress, truncate(info.name, 40),
                    info.instrCount, info.pcodeCount, info.fileName));
            }

            writer.println();
            writer.println("# Legend: * = Contains BADSPACEBASE");

        } catch (IOException e) {
            printerr("Error writing index file: " + e.getMessage());
        }

        // Also write a CSV for easy processing
        File csvFile = new File(outputDir, "_index.csv");
        try (PrintWriter writer = new PrintWriter(new FileWriter(csvFile))) {
            writer.println("entry,name,instructions,pcode_ops,has_badspacebase,filename");
            for (FunctionExportInfo info : exportedList) {
                writer.println(String.format("%s,\"%s\",%d,%d,%s,%s",
                    info.entryAddress,
                    info.name.replace("\"", "\"\""),
                    info.instrCount,
                    info.pcodeCount,
                    info.hasBadSpaceBase ? "true" : "false",
                    info.fileName));
            }
        } catch (IOException e) {
            printerr("Error writing CSV file: " + e.getMessage());
        }
    }

    private String truncate(String s, int maxLen) {
        if (s.length() <= maxLen) {
            return s;
        }
        return s.substring(0, maxLen - 3) + "...";
    }

    /**
     * Info about an exported function
     */
    private static class FunctionExportInfo {
        String name;
        String entryAddress;
        String fileName;
        int instrCount;
        int pcodeCount;
        boolean hasBadSpaceBase;

        FunctionExportInfo(String name, String entry, String file, int instr, int pcode, boolean bad) {
            this.name = name;
            this.entryAddress = entry;
            this.fileName = file;
            this.instrCount = instr;
            this.pcodeCount = pcode;
            this.hasBadSpaceBase = bad;
        }
    }
}
