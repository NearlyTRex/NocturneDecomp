// Export Function P-code to File
// Ghidra Script - Run from Script Manager
//
// Exports the raw P-code for a function to a text file that can be edited
// and re-imported to fix decompilation issues like BADSPACEBASE.
//
// Usage:
//   1. Select a function in the listing
//   2. Run this script
//   3. Choose output location
//   4. Edit the .pcode file to fix issues
//   5. Place in ~/.ghidra_pcode_patches/ for auto-loading
//
// @category Decompiler
// @keybinding
// @menupath Tools.Export Function P-code
// @toolbar

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.lang.*;

import java.io.*;
import java.util.*;

public class ExportFunctionPcode extends GhidraScript {

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

    @Override
    protected void run() throws Exception {
        // Get current function
        Function func = getFunctionContaining(currentAddress);
        if (func == null) {
            popup("No function at current address");
            return;
        }

        // Default filename: func_<entry>.pcode
        String defaultName = "func_" + func.getEntryPoint().toString() + ".pcode";

        // Ask for output file
        File outputFile = askFile("Export P-code", "Save");
        if (outputFile == null) {
            return;
        }

        // If user selected a directory, use default filename
        if (outputFile.isDirectory()) {
            outputFile = new File(outputFile, defaultName);
        }

        // Ensure .pcode extension
        if (!outputFile.getName().endsWith(".pcode")) {
            outputFile = new File(outputFile.getAbsolutePath() + ".pcode");
        }

        println("Suggested filename for patch directory: " + defaultName);

        println("Exporting P-code for: " + func.getName());
        println("Entry point: " + func.getEntryPoint());

        try (PrintWriter writer = new PrintWriter(new FileWriter(outputFile))) {
            exportFunction(func, writer);
        }

        println("Exported to: " + outputFile.getAbsolutePath());
        popup("Exported P-code to:\n" + outputFile.getAbsolutePath());
    }

    private void exportFunction(Function func, PrintWriter writer) {
        // Header
        writer.println("# ============================================================================");
        writer.println("# Function P-code Export");
        writer.println("# ============================================================================");
        writer.println("#");
        writer.println("# Function: " + func.getName());
        writer.println("# Entry:    " + func.getEntryPoint());
        writer.println("# Program:  " + currentProgram.getName());
        writer.println("# Exported: " + new java.util.Date());
        writer.println("#");
        writer.println("# Format:");
        writer.println("#   @<address>  # <assembly>");
        writer.println("#   OPCODE (output) = (input1), (input2), ...");
        writer.println("#");
        writer.println("# Varnode format: (space, offset, size)");
        writer.println("#   Spaces: register, const, unique, ram, stack");
        writer.println("#");
        writer.println("# x86 Register Offsets:");
        writer.println("#   EAX=0x0, ECX=0x4, EDX=0x8, EBX=0xc");
        writer.println("#   ESP=0x10, EBP=0x14, ESI=0x18, EDI=0x1c");
        writer.println("#");
        writer.println("# To fix BADSPACEBASE:");
        writer.println("#   1. Find instructions using ESP after indirect calls");
        writer.println("#   2. Change ESP-relative to EBP-relative addressing");
        writer.println("#   3. Recalculate offset: EBP_off = ESP_off - frame_size - 4");
        writer.println("#");
        writer.println("# ============================================================================");
        writer.println();

        // Get address set for function body
        AddressSetView body = func.getBody();
        Listing listing = currentProgram.getListing();

        int instrCount = 0;
        int pcodeCount = 0;

        // Iterate through instructions
        InstructionIterator instrIter = listing.getInstructions(body, true);
        while (instrIter.hasNext()) {
            Instruction instr = instrIter.next();
            instrCount++;

            // Get address and assembly
            Address addr = instr.getAddress();
            String asm = instr.toString();

            // Write instruction header
            writer.println("@" + addr.toString() + "  # " + asm);

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
        writer.println("# ============================================================================");
        writer.println("# Summary: " + instrCount + " instructions, " + pcodeCount + " P-code ops");
        writer.println("# ============================================================================");
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
            // Handle negative offsets (two's complement)
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
}
