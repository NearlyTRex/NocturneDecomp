// Find and create functions that auto-analysis missed
//@author NearlyTRex
//@category Annotations
//@keybinding
//@menupath File.Annotations.Find Missing Functions
//@toolbar

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.util.exception.InvalidInputException;
import ghidra.program.model.lang.Register;
import ghidra.program.model.pcode.PcodeOp;
import java.util.*;

public class FindMissingFunctions extends GhidraScript {

    @Override
    public void run() throws Exception {

        // Search for missed functions
        println("Starting search for missed functions...");
        int functionsCreated = 0;
        AddressSetView executableMemory = getExecutableMemory();

        // Method 1: Look for function prologues
        functionsCreated += findFunctionPrologues(executableMemory);

        // Method 2: Look for call targets that aren't functions
        functionsCreated += findCallTargets(executableMemory);

        // Method 3: Look for jump targets that might be functions
        functionsCreated += findJumpTargets(executableMemory);

        // Method 4: Look for addresses referenced in data
        functionsCreated += findReferencedAddresses(executableMemory);
        println("Analysis complete. Created " + functionsCreated + " new functions.");
    }

    private AddressSetView getExecutableMemory() {
        AddressSet executableSet = new AddressSet();
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            if (block.isExecute()) {
                executableSet.add(block.getStart(), block.getEnd());
            }
        }
        return executableSet;
    }

    private int findFunctionPrologues(AddressSetView memory) throws Exception {

        // Search for function prologues
        println("Searching for function prologues...");
        int count = 0;
        InstructionIterator instructions = currentProgram.getListing().getInstructions(memory, true);
        while (instructions.hasNext() && !monitor.isCancelled()) {
            Instruction instr = instructions.next();
            Address addr = instr.getAddress();

            // Skip if already in a function
            if (currentProgram.getFunctionManager().getFunctionAt(addr) != null) {
                continue;
            }

            // Check for common function prologue patterns
            if (isPotentialPrologue(instr)) {
                if (createFunctionIfValid(addr)) {
                    count++;
                    println("Created function at prologue: " + addr);
                }
            }
        }
        return count;
    }

    private boolean isPotentialPrologue(Instruction instr) {

        // Common x86/x64 prologue patterns
        String mnemonic = instr.getMnemonicString().toLowerCase();
        if (mnemonic.equals("push")) {

            // Check if pushing base pointer
            if (instr.getNumOperands() > 0) {
                String op = instr.getDefaultOperandRepresentation(0).toLowerCase();
                if (op.contains("bp") || op.contains("ebp") || op.contains("rbp")) {
                    return true;
                }
            }
        }

        // SUB ESP/RSP instruction (stack allocation)
        if (mnemonic.equals("sub")) {
            if (instr.getNumOperands() >= 2) {
                String op1 = instr.getDefaultOperandRepresentation(0).toLowerCase();
                if (op1.contains("sp") || op1.contains("esp") || op1.contains("rsp")) {
                    return true;
                }
            }
        }

        // MOV EBP, ESP / MOV RBP, RSP
        if (mnemonic.equals("mov")) {
            if (instr.getNumOperands() >= 2) {
                String op1 = instr.getDefaultOperandRepresentation(0).toLowerCase();
                String op2 = instr.getDefaultOperandRepresentation(1).toLowerCase();
                if ((op1.contains("bp") || op1.contains("ebp") || op1.contains("rbp")) &&
                    (op2.contains("sp") || op2.contains("esp") || op2.contains("rsp"))) {
                    return true;
                }
            }
        }
        return false;
    }

    private int findCallTargets(AddressSetView memory) throws Exception {

        // Search for call targets
        println("Searching for call targets...");
        int count = 0;
        InstructionIterator instructions = currentProgram.getListing().getInstructions(memory, true);
        while (instructions.hasNext() && !monitor.isCancelled()) {
            Instruction instr = instructions.next();
            if (instr.getFlowType().isCall()) {
                Address[] flows = instr.getFlows();
                for (Address target : flows) {

                    // Skip external addresses
                    if (!memory.contains(target)) {
                        continue;
                    }

                    // Check if target is not already a function
                    if (currentProgram.getFunctionManager().getFunctionAt(target) == null) {
                        if (createFunctionIfValid(target)) {
                            count++;
                            println("Created function at call target: " + target);
                        }
                    }
                }
            }
        }
        return count;
    }

    private int findJumpTargets(AddressSetView memory) throws Exception {

        // Track jump targets and their frequency
        println("Searching for jump targets that might be functions...");
        Map<Address, Integer> jumpTargets = new HashMap<>();
        InstructionIterator instructions = currentProgram.getListing().getInstructions(memory, true);
        while (instructions.hasNext() && !monitor.isCancelled()) {
            Instruction instr = instructions.next();
            if (instr.getFlowType().isJump()) {
                Address[] flows = instr.getFlows();
                for (Address target : flows) {
                    if (!memory.contains(target)) {
                        continue;
                    }
                    jumpTargets.put(target, jumpTargets.getOrDefault(target, 0) + 1);
                }
            }
        }

        // Create functions for frequently referenced jump targets
        int count = 0;
        for (Map.Entry<Address, Integer> entry : jumpTargets.entrySet()) {
            Address target = entry.getKey();
            int refCount = entry.getValue();

            // Much more conservative: require at least 3 references and check if it's a conditional jump target
            if (refCount >= 3 && currentProgram.getFunctionManager().getFunctionAt(target) == null) {

                // Additional check: make sure this isn't just a loop target
                if (isLikelyFunctionEntry(target)) {
                    if (createFunctionIfValid(target)) {
                        count++;
                        println("Created function at jump target: " + target + " (refs: " + refCount + ")");
                    }
                }
            }
        }
        return count;
    }

    private int findReferencedAddresses(AddressSetView memory) throws Exception {

        // Search for addresses in data sections
        println("Searching for addresses referenced in data sections...");
        int count = 0;
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            if (!block.isExecute() && block.isInitialized()) {
                AddressSet blockAddresses = new AddressSet(block.getStart(), block.getEnd());
                AddressIterator addrIter = blockAddresses.getAddresses(true);
                while (addrIter.hasNext() && !monitor.isCancelled()) {
                    Address addr = addrIter.next();
                    Reference[] refs = refMgr.getReferencesFrom(addr);
                    for (Reference ref : refs) {
                        Address target = ref.getToAddress();

                        // Check if target is in executable memory and not already a function
                        if (memory.contains(target) &&
                            currentProgram.getFunctionManager().getFunctionAt(target) == null) {
                            if (createFunctionIfValid(target)) {
                                count++;
                                println("Created function at data reference: " + target);
                            }
                        }
                    }
                }
            }
        }
        return count;
    }

    private boolean createFunctionIfValid(Address addr) {
        try {

            // Check if there's a valid instruction at this address
            Instruction instr = currentProgram.getListing().getInstructionAt(addr);
            if (instr == null) {
                return false;
            }

            // Don't create function in middle of existing function
            Function containingFunc = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (containingFunc != null) {
                return false;
            }

            // Additional validation: Check if this looks like a real function start
            if (!looksLikeFunctionStart(addr)) {
                return false;
            }

            // Check if address is properly aligned (most architectures require alignment)
            if (addr.getOffset() % 4 != 0) {
                return false;
            }

            // Make sure we have at least a few instructions that make sense
            if (!hasValidInstructionSequence(addr)) {
                return false;
            }

            // Try to create the function
            Function newFunc = currentProgram.getFunctionManager().createFunction(
                null, addr, new AddressSet(addr), SourceType.ANALYSIS);
            return newFunc != null;

        } catch (Exception e) {
            // Function creation failed, which is expected for invalid locations
            return false;
        }
    }

    private boolean looksLikeFunctionStart(Address addr) {

        // Get the instruction referenced at this address
        Instruction instr = currentProgram.getListing().getInstructionAt(addr);
        if (instr == null) {
            return false;
        }
        String mnemonic = instr.getMnemonicString().toLowerCase();

        // Should NOT start with these instructions (middle of function indicators)
        if (mnemonic.equals("ret") || mnemonic.equals("retf") ||
            mnemonic.equals("retn") || mnemonic.equals("pop") ||
            mnemonic.equals("leave") || mnemonic.equals("jmp")) {
            return false;
        }

        // Look for function prologue patterns or reasonable starting instructions
        return isPotentialPrologue(instr) ||
               mnemonic.equals("mov") ||
               mnemonic.equals("push") ||
               mnemonic.equals("sub") ||
               mnemonic.equals("xor") ||
               mnemonic.equals("cmp") ||
               mnemonic.equals("test");
    }

    private boolean hasValidInstructionSequence(Address addr) {

        // Check the first 5-10 instructions to see if they make sense
        int instructionCount = 0;
        Address currentAddr = addr;
        for (int i = 0; i < 10 && currentAddr != null; i++) {
            Instruction instr = currentProgram.getListing().getInstructionAt(currentAddr);
            if (instr == null) {
                break;
            }

            // Next instruction
            instructionCount++;
            String mnemonic = instr.getMnemonicString().toLowerCase();

            // If we hit a return too early, probably not a real function
            if (i < 3 && (mnemonic.equals("ret") || mnemonic.equals("retf") || mnemonic.equals("retn"))) {
                return false;
            }

            // Next address
            try {
                currentAddr = instr.getMaxAddress().next();
            } catch (AddressOutOfBoundsException e) {
                break;
            }
        }

        // Should have at least 3 valid instructions
        return instructionCount >= 3;
    }

    private boolean isLikelyFunctionEntry(Address addr) {

        // Check if the previous instruction is a return or similar function-ending instruction
        try {
            Address prevAddr = addr.previous();
            Instruction prevInstr = currentProgram.getListing().getInstructionBefore(addr);
            if (prevInstr != null) {
                String prevMnemonic = prevInstr.getMnemonicString().toLowerCase();

                // If previous instruction is a return, this is likely a new function
                if (prevMnemonic.equals("ret") || prevMnemonic.equals("retf") ||
                    prevMnemonic.equals("retn") || prevMnemonic.equals("leave")) {
                    return true;
                }
            }
        } catch (AddressOutOfBoundsException e) {
            // At beginning of memory, could be valid
        }

        // Check if this address has a symbol or label
        Symbol[] symbols = currentProgram.getSymbolTable().getSymbols(addr);
        if (symbols.length > 0) {
            for (Symbol sym : symbols) {
                if (sym.getSymbolType() == SymbolType.LABEL ||
                    sym.getSymbolType() == SymbolType.FUNCTION) {
                    return true;
                }
            }
        }
        return looksLikeFunctionStart(addr);
    }
}
