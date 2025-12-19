// Fix BADSPACEBASE by setting correct stack depth change for indirect calls
//@author NocturneDecomp
//@category Annotations
//@keybinding
//@menupath File.Annotations.Fix Call Stack Depth
//@toolbar

import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CallDepthChangeInfo;
import ghidra.app.cmd.function.SetStackDepthChangeCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.lang.Register;
import java.util.*;

public class FixCallStackDepth extends GhidraScript {

    @Override
    public void run() throws Exception {
        Function func = getFunctionContaining(currentAddress);
        if (func == null) {
            println("No function at current address");
            return;
        }

        println("Analyzing function: " + func.getName() + " at " + func.getEntryPoint());

        // Get stack depth info for the function
        CallDepthChangeInfo depthInfo = new CallDepthChangeInfo(func);

        AddressSetView body = func.getBody();
        InstructionIterator instrIter = currentProgram.getListing().getInstructions(body, true);

        int fixedCalls = 0;
        List<Address> indirectCalls = new ArrayList<>();
        Map<Address, Integer> stackAdjustments = new HashMap<>();

        // First pass: find all indirect calls and their subsequent stack adjustments
        Instruction prevInstr = null;
        while (instrIter.hasNext()) {
            Instruction instr = instrIter.next();
            String mnemonic = instr.getMnemonicString().toUpperCase();

            // Check if previous instruction was an indirect call
            if (prevInstr != null && isIndirectCall(prevInstr)) {
                // Check if this instruction is ADD ESP, imm
                if (mnemonic.equals("ADD")) {
                    String op0 = prevInstr.getDefaultOperandRepresentation(0).toUpperCase();
                    if (op0.contains("ESP")) {
                        // Get the immediate value
                        String op1 = instr.getDefaultOperandRepresentation(1);
                        int adjustment = parseImmediate(op1);
                        if (adjustment > 0) {
                            stackAdjustments.put(prevInstr.getAddress(), adjustment);
                            println("  Found indirect call at " + prevInstr.getAddress() +
                                    " with stack cleanup: " + adjustment + " bytes");
                        }
                    }
                }
            }

            if (isIndirectCall(instr)) {
                indirectCalls.add(instr.getAddress());
            }

            prevInstr = instr;
        }

        // Analyze each indirect call
        println("\nFound " + indirectCalls.size() + " indirect calls:");
        for (Address callAddr : indirectCalls) {
            Instruction callInstr = currentProgram.getListing().getInstructionAt(callAddr);
            String callTarget = callInstr.getDefaultOperandRepresentation(0);

            // Count pushes before this call (parameters)
            int pushCount = countPushesBeforeCall(func, callAddr);

            // Get stack adjustment after call (if any)
            Integer adjustment = stackAdjustments.get(callAddr);

            println("  " + callAddr + ": " + callInstr.toString());
            println("    Target: " + callTarget);
            println("    Pushes before: " + pushCount);
            println("    Stack cleanup after: " + (adjustment != null ? adjustment : "none"));

            // Calculate expected stack depth change
            // For __cdecl: caller cleans up, so net change is 0 (pushes balanced by ADD ESP)
            // For __stdcall: callee cleans up params, net change is -params
            // For __watcallRegister: params in registers, minimal stack effect

            int currentDepth = depthInfo.getDepth(callAddr);
            println("    Current stack depth at call: " + currentDepth);
        }

        // Report on overall stack depth tracking
        println("\nStack depth at key points:");
        Address entry = func.getEntryPoint();
        Instruction entryInstr = currentProgram.getListing().getInstructionAt(entry);
        for (int i = 0; i < 20 && entryInstr != null; i++) {
            int depth = depthInfo.getDepth(entryInstr.getAddress());
            String depthStr = (depth == Function.UNKNOWN_STACK_DEPTH_CHANGE) ? "UNKNOWN" : String.valueOf(depth);
            println("  " + entryInstr.getAddress() + ": " + entryInstr.getMnemonicString() +
                    " (depth: " + depthStr + ")");
            entryInstr = entryInstr.getNext();
        }

        // Option to fix stack depth for specific call
        if (!indirectCalls.isEmpty()) {
            boolean fix = askYesNo("Fix Stack Depth",
                "Would you like to set stack depth change for indirect calls?\n" +
                "This will set the purge value (callee stack cleanup) for each call site.");

            if (fix) {
                for (Address callAddr : indirectCalls) {
                    Integer cleanup = stackAdjustments.get(callAddr);

                    // If we see ADD ESP,X after the call, the caller cleans up
                    // So the call itself has 0 purge (callee doesn't clean)
                    // But we need to tell Ghidra about the total stack effect

                    if (cleanup != null) {
                        // Caller cleanup convention - set call purge to 0
                        // The ADD ESP,X handles cleanup
                        setCallStackPurge(callAddr, 0);
                        fixedCalls++;
                        println("Set purge=0 for call at " + callAddr + " (caller cleans " + cleanup + " bytes)");
                    } else {
                        // No visible cleanup - might be register convention or callee cleanup
                        // Try setting purge based on push count
                        int pushCount = countPushesBeforeCall(func, callAddr);
                        if (pushCount > 0) {
                            int purge = pushCount * 4;
                            setCallStackPurge(callAddr, purge);
                            fixedCalls++;
                            println("Set purge=" + purge + " for call at " + callAddr +
                                    " (callee cleans, based on " + pushCount + " pushes)");
                        }
                    }
                }
            }
        }

        println("\nFixed " + fixedCalls + " calls. Re-decompile the function to see changes.");
    }

    private boolean isIndirectCall(Instruction instr) {
        String mnemonic = instr.getMnemonicString().toUpperCase();
        if (!mnemonic.equals("CALL")) return false;

        // Check if it's an indirect call (memory operand or register)
        String operand = instr.getDefaultOperandRepresentation(0);
        return operand.contains("[") ||
               (operand.matches("[A-Z]{2,3}") && !operand.startsWith("0x"));
    }

    private int countPushesBeforeCall(Function func, Address callAddr) {
        // Walk backwards from call to count consecutive pushes
        // Stop at labels, other calls, or non-push instructions that aren't stack-neutral
        int pushCount = 0;
        Instruction instr = currentProgram.getListing().getInstructionBefore(callAddr);

        while (instr != null && func.getBody().contains(instr.getAddress())) {
            String mnemonic = instr.getMnemonicString().toUpperCase();

            if (mnemonic.equals("PUSH")) {
                pushCount++;
            } else if (mnemonic.equals("CALL")) {
                // Stop at previous call
                break;
            } else if (mnemonic.equals("ADD") || mnemonic.equals("SUB")) {
                // Stack adjustment - stop counting
                String op0 = instr.getDefaultOperandRepresentation(0).toUpperCase();
                if (op0.contains("ESP")) break;
            } else if (!isStackNeutral(mnemonic)) {
                // Non-stack-neutral instruction that isn't a push
                // Could be MOV, LEA, etc. - continue looking
            }

            // Check for label (branch target) - stop if this is a merge point
            if (hasLabelBefore(instr)) {
                break;
            }

            instr = instr.getPrevious();

            // Safety limit
            if (pushCount > 20) break;
        }

        return pushCount;
    }

    private boolean isStackNeutral(String mnemonic) {
        // Instructions that don't affect ESP
        return mnemonic.equals("MOV") || mnemonic.equals("LEA") || mnemonic.equals("XOR") ||
               mnemonic.equals("AND") || mnemonic.equals("OR") || mnemonic.equals("TEST") ||
               mnemonic.equals("CMP") || mnemonic.equals("SAR") || mnemonic.equals("SHL") ||
               mnemonic.equals("SHR") || mnemonic.equals("NOP");
    }

    private boolean hasLabelBefore(Instruction instr) {
        // Check if there are references to this address (it's a branch target)
        Address addr = instr.getAddress();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(addr);
        while (refs.hasNext()) {
            Reference ref = refs.next();
            if (ref.getReferenceType().isFlow() && ref.getReferenceType().isJump()) {
                return true;
            }
        }
        return false;
    }

    private int parseImmediate(String operand) {
        try {
            operand = operand.trim();
            if (operand.startsWith("0x")) {
                return Integer.parseInt(operand.substring(2), 16);
            } else if (operand.matches("\\d+")) {
                return Integer.parseInt(operand);
            } else if (operand.matches("[0-9a-fA-F]+")) {
                return Integer.parseInt(operand, 16);
            }
        } catch (NumberFormatException e) {
            // Ignore
        }
        return -1;
    }

    private void setCallStackPurge(Address callAddr, int stackChange) throws Exception {
        // Use SetStackDepthChangeCommand to set stack depth change at this call site
        // Note: For indirect calls, the value needs to be 4 larger than expected
        // because the command includes the return address pop

        Instruction callInstr = currentProgram.getListing().getInstructionAt(callAddr);
        if (callInstr == null) return;

        // For indirect calls, add 4 to the stack change value
        // (per GitHub issue #2484)
        boolean isIndirect = isIndirectCall(callInstr);
        int adjustedChange = isIndirect ? stackChange + 4 : stackChange;

        // Create and run the command
        SetStackDepthChangeCommand cmd = new SetStackDepthChangeCommand(callAddr, adjustedChange);
        if (cmd.applyTo(currentProgram)) {
            println("  Set stack depth change to " + adjustedChange +
                    " at " + callAddr + (isIndirect ? " (indirect, +4 adjustment)" : ""));
        } else {
            println("  FAILED to set stack depth at " + callAddr + ": " + cmd.getStatusMsg());
        }

        // Also try setting on the target function if it's a direct call
        if (!isIndirect) {
            Reference[] refs = callInstr.getReferencesFrom();
            for (Reference ref : refs) {
                if (ref.getReferenceType().isCall()) {
                    Address targetAddr = ref.getToAddress();
                    Function targetFunc = getFunctionAt(targetAddr);

                    if (targetFunc != null) {
                        targetFunc.setStackPurgeSize(stackChange);
                        println("  Also set stack purge size to " + stackChange +
                                " on function " + targetFunc.getName());
                    }
                }
            }
        }
    }
}
