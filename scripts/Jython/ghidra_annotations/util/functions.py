import os
import re
import json
from ghidra_annotations.util import *

def is_function_address(currentProgram, addr):

    # Check address
    if not addr:
        return False

    # Check if address is in memory
    memory = currentProgram.getMemory()
    if not memory.contains(addr):
        return False

    # Check if there's a function at this address
    function_manager = currentProgram.getFunctionManager()
    function = function_manager.getFunctionAt(addr)
    if function:
        return True

    # Check if there's a function entry point at this address
    ref_manager = currentProgram.getReferenceManager()
    refs_to = ref_manager.getReferencesTo(addr)
    for ref in refs_to:
        ref_type = ref.getReferenceType()
        if ref_type.isCall():
            return True

    # Check for function-like patterns
    listing = currentProgram.getListing()
    instruction = listing.getInstructionAt(addr)
    if instruction:
        block = memory.getBlock(addr)
        if block and block.isExecute():
            if is_likely_function_prologue(currentProgram, instruction):
                return True
    return False

def is_likely_function_prologue(currentProgram, instruction):

    # Invalid instruction
    if not instruction:
        return False

    # Check for common prologue patterns like:
    # push ebp/rbp
    # mov ebp, esp / mov rbp, rsp
    # sub esp, X / sub rsp, X
    # enter X, Y
    mnemonic = instruction.getMnemonicString().lower()
    if mnemonic in ["push", "mov", "sub", "enter"]:
        if mnemonic == "push":
            if instruction.getNumOperands() > 0:
                op = instruction.getDefaultOperandRepresentation(0).lower()
                if "bp" in op or "ebp" in op or "rbp" in op:
                    return True
        elif mnemonic == "mov":
            if instruction.getNumOperands() >= 2:
                op1 = instruction.getDefaultOperandRepresentation(0).lower()
                op2 = instruction.getDefaultOperandRepresentation(1).lower()
                if (("bp" in op1 or "ebp" in op1 or "rbp" in op1) and
                    ("sp" in op2 or "esp" in op2 or "rsp" in op2)):
                    return True
        elif mnemonic == "sub":
            if instruction.getNumOperands() >= 2:
                op1 = instruction.getDefaultOperandRepresentation(0).lower()
                if "sp" in op1 or "esp" in op1 or "rsp" in op1:
                    return True
        elif mnemonic == "enter":
            return True
    return False

def get_function_name(currentProgram, addr):

    # Direct check for function name
    function_manager = currentProgram.getFunctionManager()
    function = function_manager.getFunctionAt(addr)
    if function:
        return function.getName()

    # Use symbol name
    symbol_table = currentProgram.getSymbolTable()
    symbols = symbol_table.getSymbols(addr)
    if symbols:
        return symbols[0].getName()

    # Fallback
    return "func_%s" % addr.toString()
