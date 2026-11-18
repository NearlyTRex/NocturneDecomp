# Imports
import importlib

# Local imports
import ghidra_fake
from ghidra_program import Instruction, Program

# A program for the scripts that look for string addresses loaded as bare
# immediates: strings defined as data, and instructions whose operands hand out
# their objects (scalars, registers) and carry the references made from them.

ghidra_fake.install()

# The faked Ghidra class, so isinstance() in the scripts accepts an Immediate
Scalar = importlib.import_module("ghidra.program.model.scalar").Scalar


class Immediate(Scalar):
    def __init__(self, value):
        super().__init__(value)
        self.value = value

    def getUnsignedValue(self):
        return self.value


class OperandInstruction(Instruction):
    def __init__(self, program, mnemonic, *objects):
        super().__init__(mnemonic, *[f"0x{o.value:x}" if isinstance(o, Immediate) else str(o) for o in objects])
        self.program = program
        self.objects = objects

    def getOpObjects(self, index):
        return [self.objects[index]]

    def getReferencesFrom(self):
        return self.program.getReferenceManager().getReferencesFrom(self.address)


def string_program(strings):
    """A Program with each {offset: text} defined as a string; a None text has no value."""
    program = Program()
    for offset, text in strings.items():
        program.getListing().add_data(offset, ghidra_fake.TerminatedStringDataType(), text)
    return program


def put(program, offset, mnemonic, *objects):
    """Add an instruction at offset; ints among objects become immediates."""
    made = [Immediate(o) if isinstance(o, int) else o for o in objects]
    return program.getListing().add_instruction(offset, OperandInstruction(program, mnemonic, *made))
