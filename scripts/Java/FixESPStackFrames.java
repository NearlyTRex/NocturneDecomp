// Fix BADSPACEBASE issues by creating stack variables for ESP-relative accesses
//@author NocturneDecomp
//@category Annotations
//@keybinding
//@menupath File.Annotations.Fix ESP Stack Frames
//@toolbar

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.pcode.*;
import ghidra.util.exception.*;
import java.util.*;

public class FixESPStackFrames extends GhidraScript {

    // Track ESP-relative accesses: offset -> size
    private Map<Integer, Integer> espAccesses = new TreeMap<>();

    // Common access sizes based on instruction type
    private static final int DEFAULT_SIZE = 4;

    @Override
    public void run() throws Exception {

        // Options
        boolean processAll = askYesNo("Process All Functions",
            "Process all functions? (No = only current selection/function)");
        boolean addPadding = askYesNo("Add Padding",
            "Add padding variables between detected accesses?");
        int paddingAlignment = 4;
        if (addPadding) {
            paddingAlignment = askInt("Padding Alignment", "Align variables to (bytes):");
        }

        int fixedCount = 0;
        int totalAccesses = 0;

        if (processAll) {
            // Process all functions
            FunctionIterator funcIter = currentProgram.getFunctionManager().getFunctions(true);
            while (funcIter.hasNext() && !monitor.isCancelled()) {
                Function func = funcIter.next();
                int accesses = processFunction(func, addPadding, paddingAlignment);
                if (accesses > 0) {
                    fixedCount++;
                    totalAccesses += accesses;
                }
            }
        } else {
            // Process current function or selection
            Function func = getFunctionContaining(currentAddress);
            if (func != null) {
                int accesses = processFunction(func, addPadding, paddingAlignment);
                if (accesses > 0) {
                    fixedCount++;
                    totalAccesses += accesses;
                }
            } else {
                println("No function at current address");
            }
        }

        println("Fixed " + fixedCount + " functions with " + totalAccesses + " stack accesses");
    }

    private int processFunction(Function func, boolean addPadding, int paddingAlignment) throws Exception {
        espAccesses.clear();

        // Get function bounds
        AddressSetView body = func.getBody();

        // Analyze instructions for ESP-relative accesses
        InstructionIterator instrIter = currentProgram.getListing().getInstructions(body, true);
        while (instrIter.hasNext() && !monitor.isCancelled()) {
            Instruction instr = instrIter.next();
            analyzeInstruction(instr);
        }

        if (espAccesses.isEmpty()) {
            return 0;
        }

        // Get or create stack frame
        StackFrame stackFrame = func.getStackFrame();
        if (stackFrame == null) {
            println("Cannot get stack frame for " + func.getName());
            return 0;
        }

        // Determine the stack allocation size from prologue
        int stackAllocation = findStackAllocation(func);
        if (stackAllocation <= 0) {
            // Try to infer from max offset
            int maxOffset = Collections.max(espAccesses.keySet());
            stackAllocation = ((maxOffset / 16) + 1) * 16; // Round up to 16-byte boundary
        }

        println("Processing " + func.getName() + " - stack allocation: 0x" +
                Integer.toHexString(stackAllocation) + ", accesses: " + espAccesses.size());

        // Create variables for each access
        int created = 0;
        DataTypeManager dtm = currentProgram.getDataTypeManager();

        // Convert ESP+offset to negative offsets from frame base
        // In ESP-relative frames, ESP+0x10 means offset -stackAllocation+0x10 from return address

        List<Integer> offsets = new ArrayList<>(espAccesses.keySet());
        Collections.sort(offsets);

        for (int espOffset : offsets) {
            int size = espAccesses.get(espOffset);

            // Convert ESP-relative offset to frame-relative offset
            // ESP points to bottom of allocated space
            // Frame base (return address) is at ESP + stackAllocation + savedRegs
            // So a variable at ESP+X is at offset -(stackAllocation - X) from frame base
            int frameOffset = espOffset - stackAllocation;

            // Check if variable already exists at this offset
            Variable existingVar = stackFrame.getVariableContaining(frameOffset);
            if (existingVar != null && existingVar.getStackOffset() == frameOffset) {
                continue; // Already have a variable here
            }

            // Determine data type based on size
            DataType dt = getDataTypeForSize(size, dtm);

            // Generate variable name
            String varName = "stack_" + Integer.toHexString(espOffset & 0xFFFF);

            try {
                // Create the stack variable
                stackFrame.createVariable(
                    varName,
                    frameOffset,
                    dt,
                    SourceType.USER_DEFINED
                );
                created++;
                println("  Created " + varName + " at frame offset " + frameOffset + " (ESP+" +
                        Integer.toHexString(espOffset) + "), size " + size);
            } catch (DuplicateNameException e) {
                // Try with a different name
                varName = "stack_" + Integer.toHexString(espOffset & 0xFFFF) + "_" + created;
                try {
                    stackFrame.createVariable(varName, frameOffset, dt, SourceType.USER_DEFINED);
                    created++;
                } catch (Exception e2) {
                    println("  Failed to create variable at offset " + frameOffset + ": " + e2.getMessage());
                }
            } catch (InvalidInputException e) {
                println("  Invalid input for variable at offset " + frameOffset + ": " + e.getMessage());
            }
        }

        // Add padding if requested
        if (addPadding && created > 0) {
            created += addPaddingVariables(stackFrame, stackAllocation, paddingAlignment, dtm);
        }

        return created;
    }

    private void analyzeInstruction(Instruction instr) {
        // Look for memory operands with ESP-relative addressing
        int numOps = instr.getNumOperands();
        String mnemonic = instr.getMnemonicString().toLowerCase();

        for (int i = 0; i < numOps; i++) {
            String opRep = instr.getDefaultOperandRepresentation(i);

            // Check for ESP-relative addressing: [ESP + offset] or [ESP+offset]
            if (opRep.contains("ESP") || opRep.contains("esp")) {
                int offset = parseESPOffset(opRep);
                if (offset >= 0) {
                    // Determine size from instruction
                    int size = inferAccessSize(instr, i, mnemonic);

                    // Track this access (keep largest size for each offset)
                    Integer existingSize = espAccesses.get(offset);
                    if (existingSize == null || size > existingSize) {
                        espAccesses.put(offset, size);
                    }
                }
            }
        }
    }

    private int parseESPOffset(String opRep) {
        // Parse patterns like:
        // [ESP + 0x10]
        // [ESP+0x10]
        // [ESP + local_var]
        // dword ptr [ESP + 0x208]

        opRep = opRep.toLowerCase();

        // Find ESP in the string
        int espIdx = opRep.indexOf("esp");
        if (espIdx < 0) return -1;

        // Look for + or - after ESP
        String afterEsp = opRep.substring(espIdx + 3).trim();

        if (afterEsp.startsWith("]") || afterEsp.isEmpty()) {
            return 0; // [ESP] with no offset
        }

        // Parse offset
        if (afterEsp.startsWith("+")) {
            afterEsp = afterEsp.substring(1).trim();
        } else if (afterEsp.startsWith("-")) {
            // Negative offset - less common for locals
            return -1;
        } else {
            return -1;
        }

        // Extract the numeric part
        // Remove trailing ] and anything after
        int bracketIdx = afterEsp.indexOf("]");
        if (bracketIdx > 0) {
            afterEsp = afterEsp.substring(0, bracketIdx).trim();
        }

        // Also handle ESP+reg*scale+offset patterns - just get the constant
        // For simplicity, try to parse as hex or decimal
        try {
            if (afterEsp.startsWith("0x")) {
                return Integer.parseInt(afterEsp.substring(2), 16);
            } else if (afterEsp.matches("\\d+")) {
                return Integer.parseInt(afterEsp);
            } else if (afterEsp.matches("[0-9a-f]+")) {
                return Integer.parseInt(afterEsp, 16);
            }
        } catch (NumberFormatException e) {
            // Complex expression, can't parse
        }

        return -1;
    }

    private int inferAccessSize(Instruction instr, int operandIndex, String mnemonic) {
        // Try to infer the access size from the instruction

        // Check for size prefixes in operand representation
        String opRep = instr.getDefaultOperandRepresentation(operandIndex).toLowerCase();
        if (opRep.contains("byte")) return 1;
        if (opRep.contains("word ptr") && !opRep.contains("dword")) return 2;
        if (opRep.contains("dword")) return 4;
        if (opRep.contains("qword")) return 8;

        // Infer from instruction type
        if (mnemonic.startsWith("movs") && mnemonic.length() > 4) {
            char suffix = mnemonic.charAt(4);
            if (suffix == 'b') return 1;
            if (suffix == 'w') return 2;
            if (suffix == 'd') return 4;
        }

        // Check result objects for size hints
        Object[] resultObjs = instr.getResultObjects();
        for (Object obj : resultObjs) {
            if (obj instanceof Register) {
                Register reg = (Register) obj;
                return reg.getBitLength() / 8;
            }
        }

        // Default to 4 bytes (common for x86)
        return DEFAULT_SIZE;
    }

    private int findStackAllocation(Function func) {
        // Look for SUB ESP, imm in the prologue
        AddressSetView body = func.getBody();
        Address entry = func.getEntryPoint();

        // Check first ~10 instructions for stack allocation
        Instruction instr = currentProgram.getListing().getInstructionAt(entry);
        for (int i = 0; i < 10 && instr != null; i++) {
            String mnemonic = instr.getMnemonicString().toLowerCase();

            if (mnemonic.equals("sub")) {
                String op0 = instr.getDefaultOperandRepresentation(0).toLowerCase();
                if (op0.contains("esp") || op0.contains("sp")) {
                    // Found stack allocation
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

            // Also account for PUSH instructions (each adds 4 bytes on x86)
            // But we mainly care about the SUB ESP

            instr = instr.getNext();
        }

        return -1;
    }

    private DataType getDataTypeForSize(int size, DataTypeManager dtm) {
        switch (size) {
            case 1: return ByteDataType.dataType;
            case 2: return WordDataType.dataType;
            case 4: return DWordDataType.dataType;
            case 8: return QWordDataType.dataType;
            default:
                // Create an array of bytes for unusual sizes
                return new ArrayDataType(ByteDataType.dataType, size, 1);
        }
    }

    private int addPaddingVariables(StackFrame stackFrame, int stackAllocation,
                                    int alignment, DataTypeManager dtm) {
        // Add padding variables to fill gaps in the stack frame
        int added = 0;

        Variable[] vars = stackFrame.getStackVariables();
        if (vars == null || vars.length < 2) return 0;

        // Sort by offset
        Arrays.sort(vars, (a, b) -> Integer.compare(a.getStackOffset(), b.getStackOffset()));

        // Find gaps
        for (int i = 0; i < vars.length - 1; i++) {
            Variable current = vars[i];
            Variable next = vars[i + 1];

            int currentEnd = current.getStackOffset() + current.getLength();
            int nextStart = next.getStackOffset();
            int gap = nextStart - currentEnd;

            if (gap > alignment) {
                // Add padding variable(s)
                int paddingOffset = currentEnd;
                if (paddingOffset % alignment != 0) {
                    paddingOffset = ((paddingOffset / alignment) + 1) * alignment;
                }

                while (paddingOffset + alignment <= nextStart) {
                    String padName = "padding_" + Integer.toHexString((-paddingOffset) & 0xFFFF);
                    try {
                        stackFrame.createVariable(
                            padName,
                            paddingOffset,
                            new ArrayDataType(ByteDataType.dataType, alignment, 1),
                            SourceType.USER_DEFINED
                        );
                        added++;
                    } catch (Exception e) {
                        // Skip if can't create
                    }
                    paddingOffset += alignment;
                }
            }
        }

        return added;
    }
}
