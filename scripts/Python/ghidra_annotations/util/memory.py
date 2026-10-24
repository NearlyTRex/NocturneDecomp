from ghidra_annotations.util.log import log_error
from ghidra.program.model.address import AddressSet
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

    # Try different address formats, in order: as-is, with a 0x prefix, as a hex
    # offset in the default space, and qualified with the default space's name
    addr_factory = currentProgram.getAddressFactory()
    default_space = addr_factory.getDefaultAddressSpace()
    attempts = [lambda: addr_factory.getAddress(addr_str)]
    if not addr_str.lower().startswith("0x"):
        attempts.append(lambda: addr_factory.getAddress("0x" + addr_str))
    attempts.append(lambda: default_space.getAddress(int(addr_str, 16)))
    attempts.append(lambda: addr_factory.getAddress(default_space.getName() + ":" + addr_str))
    for attempt in attempts:
        try:
            addr = attempt()
        except Exception:
            continue
        if addr:
            return addr
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
