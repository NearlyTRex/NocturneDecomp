import os
from ghidra.program.model.address import AddressSet
from ghidra.program.model.data import Pointer
from ghidra.program.disassemble import Disassembler
from ghidra.util.task import TaskMonitor

def get_pointer_size(currentProgram):
    return currentProgram.getLanguage().getDefaultSpace().getPointerSize()

def read_pointer_at_address(currentProgram, addr):

    # Get pointer size
    pointer_size = get_pointer_size(currentProgram)

    # Check direct values
    memory = currentProgram.getMemory()
    if pointer_size == 4:
        value = memory.getInt(addr) & 0xFFFFFFFF
    elif pointer_size == 8:
        value = memory.getLong(addr)
    else:
        return None

    # Handle null pointers
    if value == 0:
        return None

    # Create address
    addr_factory = currentProgram.getAddressFactory()
    return addr_factory.getAddress("0x%x" % value)

def parse_address(currentProgram, addr_str):

    # Skip invalid address
    if not addr_str:
        return None

    # Try different address formats
    addr_factory = currentProgram.getAddressFactory()
    default_space = addr_factory.getDefaultAddressSpace()

    # First try the address as-is
    try:
        addr = addr_factory.getAddress(addr_str)
        if addr:
            return addr
    except:
        pass

    # Try with 0x prefix if it doesn't have one
    try:
        if not addr_str.startswith("0x") and not addr_str.startswith("0X"):
            addr = addr_factory.getAddress("0x" + addr_str)
            if addr:
                return addr
    except:
        pass

    # Try parsing as hex and creating address in default space
    try:
        if addr_str.startswith("0x") or addr_str.startswith("0X"):
            hex_value = int(addr_str, 16)
        else:
            hex_value = int(addr_str, 16)
        addr = default_space.getAddress(hex_value)
        if addr:
            return addr
    except:
        pass

    # Try with explicit default space
    try:
        addr = addr_factory.getAddress(default_space.getName() + ":" + addr_str)
        if addr:
            return addr
    except:
        pass
    return None

def get_addr_obj(currentProgram, addr_str, validate_memory = True):

    # Skip invalid address
    if not addr_str:
        return None

    # Parse the address
    addr = parse_address(currentProgram, addr_str)
    if not addr:
        return None

    # No memory validation is needed
    if not validate_memory:
        return addr

    # Return address
    return addr if currentProgram.getMemory().contains(addr) else None

def is_addr_disassembled(currentProgram, addr_obj):
    try:
        instruction = currentProgram.getListing().getInstructionAt(addr_obj)
        return instruction is not None
    except Exception as e:
        log_error("Unable to determine if address at %s is disassembled: %s" % (addr_obj, e))
        return False

def disassemble_at_addr(currentProgram, start_addr_obj, end_addr_obj, follow_flow = True):

    # Clear any existing data at this location
    listing = currentProgram.getListing()
    code_unit = listing.getCodeUnitAt(start_addr_obj)
    if code_unit and code_unit.isDefined():
        listing.clearCodeUnits(start_addr_obj, end_addr_obj, False)

    # Get disassembler
    disassembler = Disassembler.getDisassembler(
        currentProgram,
        TaskMonitor.DUMMY,
        None)

    # Perform disassembly
    address_set = AddressSet(start_addr_obj, end_addr_obj)
    disasm_result = disassembler.disassemble(address_set, None, follow_flow)
    return disasm_result and not disasm_result.isEmpty()
