# Local imports
from boundary_program import JavaIterator
from ghidra_fake import Address
from ghidra_program import Function, FunctionManager, Instruction, Listing, Memory, Program, ReferenceManager

# A program for the byte patchers (dethunk_function, fix_byte_patches,
# fix_import_thunks): the in-memory model plus what they read and write that the
# model leaves out (memory writes, Java-style iterators, reference counts,
# repeatable comments, code cleared from a range), and fakes of the Ghidra
# commands they drive, which record what they were asked to do.

BASE = 0x1000

at = Address


class PatchFunction(Function):
    def __init__(self, name, entry, size = 1):
        super().__init__(name, entry, size)
        self.repeatable_comment = None

    def getRepeatableComment(self):
        return self.repeatable_comment

    def setRepeatableComment(self, comment):
        self.repeatable_comment = comment

    # The signature takes what it is handed, as Ghidra's does
    def updateFunction(self, convention, ret, params, update_type, force, source):
        super().updateFunction(convention, ret, params, update_type, force, source)
        self.convention, self.return_type, self.parameters = convention, ret.getDataType(), list(params)


class PatchFunctions(FunctionManager):
    def add(self, name, entry, size = 1):
        function = PatchFunction(name, Address(entry), size)
        self.functions[Address(entry)] = function
        return function

    def getFunctions(self, forward):
        return JavaIterator(super().getFunctions(forward))


# Java's setByte takes a signed byte, as getByte hands one back
class PatchMemory(Memory):
    def setByte(self, address, value):
        if not -128 <= value <= 127:
            raise ValueError(f"{value} is not a signed byte")
        block = self.getBlock(address)
        block.data[address.getOffset() - block.start.getOffset()] = value & 0xFF


class PatchListing(Listing):
    def getInstructions(self, *set_and_forward):
        return JavaIterator(super().getInstructions(*set_and_forward))

    # Instructions in the range go too, as Ghidra's clear takes all code units
    def clearCodeUnits(self, start, end, clear_context):
        super().clearCodeUnits(start, end, clear_context)
        for address in [a for a in self.instructions if start.getOffset() <= a.getOffset() <= end.getOffset()]:
            del self.instructions[address]


class PatchReferences(ReferenceManager):
    def getReferenceCountTo(self, address):
        return len(self.getReferencesTo(address))


# `image` is the bytes of one block at BASE
class PatchProgram(Program):
    def __init__(self, image = b""):
        super().__init__()
        self.memory = PatchMemory()
        self.listing = PatchListing()
        self.function_manager = PatchFunctions()
        self.reference_manager = PatchReferences()
        self.memory.add_block(".text", BASE, image, execute = True)
        # (offset, restricted set) of each DisassembleCommand applied
        self.disassembled = []

    def bytes_at(self, offset, size):
        return self.memory.read(at(offset), size)


# Records each disassembly and leaves a decoded instruction at its start
class DisassembleCommand:
    def __init__(self, start, restricted, _follow):
        self.start = start
        self.restricted = restricted

    def applyTo(self, program, _monitor = None):
        program.disassembled.append(self.start.getOffset())
        program.getListing().add_instruction(self.start.getOffset(), Instruction("decoded"))
        return True
