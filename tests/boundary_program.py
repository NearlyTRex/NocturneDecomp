# Local imports
from ghidra_fake import Address, Variable
from ghidra_program import Function, FunctionManager, Instruction, Program, ReferenceManager, Symbol

# A program for fix_function_boundaries: the in-memory model plus what that tool
# reads that the model leaves out (Java-style iterators, getFunctions from an
# address down, namespaces and repeatable comments, deletable symbols), fakes of
# the Ghidra commands it drives, and the small layouts its tests are built from.

BASE = 0x1000

at = Address


# A Java iterator over a list, as Ghidra's iterators are walked with hasNext/next
class JavaIterator:
    def __init__(self, items):
        self.items = list(items)

    def hasNext(self):
        return bool(self.items)

    def next(self):
        return self.items.pop(0)


# A function with the namespace and repeatable comment a boundary move carries over
class BoundaryFunction(Function):
    def __init__(self, name, entry, size = 1):
        super().__init__(name, entry, size)
        self.namespace = None
        self.repeatable_comment = None

    def getParentNamespace(self):
        return self.namespace

    def setParentNamespace(self, namespace):
        self.namespace = namespace

    def getRepeatableComment(self):
        return self.repeatable_comment

    def setRepeatableComment(self, comment):
        self.repeatable_comment = comment


# Ghidra's getFunctions overloads: (forward), or (address, forward) as a Java iterator
# from the address down when backward
class Functions(FunctionManager):
    def add(self, name, entry, size = 1):
        function = BoundaryFunction(name, Address(entry), size)
        self.functions[Address(entry)] = function
        return function

    def getFunctions(self, *args):
        if len(args) == 1:
            return super().getFunctions(args[0])
        address, _forward = args
        below = [f for f in self.functions.values() if f.entry.getOffset() <= address.getOffset()]
        return JavaIterator(sorted(below, key = lambda f: -f.entry.getOffset()))


class References(ReferenceManager):
    def getReferencesTo(self, address):
        return JavaIterator(super().getReferencesTo(address))


# What the fake commands need: the instructions PseudoDisassembler decodes at an offset
# (or "raise"), the code DisassembleCommand creates, the entries CreateFunctionCmd
# refuses, and whether fixupFunctionBody drops the function it is handed
class BoundaryProgram(Program):
    def __init__(self):
        super().__init__()
        self.function_manager = Functions()
        self.reference_manager = References()
        self.pseudo = {}
        self.disassembly = {}
        self.disassembled, self.fixups = [], []
        self.uncreatable = set()
        self.fixup_drops = False


class Pseudo:
    def __init__(self, program):
        self.program = program

    def disassemble(self, address):
        decoded = self.program.pseudo.get(address.getOffset())
        if decoded == "raise":
            raise RuntimeError("cannot decode")
        return decoded


class DisassembleCommand:
    def __init__(self, address, _restricted, _follow):
        self.address = address

    def applyTo(self, program, _monitor):
        program.disassembled.append(self.address.getOffset())
        for offset, instruction in program.disassembly.get(self.address.getOffset(), []):
            program.getListing().add_instruction(offset, instruction)
        return True


class CreateFunctionCmd:
    def __init__(self, entry):
        self.entry = entry

    def applyTo(self, program, _monitor):
        offset = self.entry.getOffset()
        if offset in program.uncreatable:
            return False
        program.getFunctionManager().add(f"FUN_{offset:08x}", offset, size = 4)
        return True

    @staticmethod
    def fixupFunctionBody(program, function, _monitor):
        program.fixups.append(function.getEntryPoint().getOffset())
        if program.fixup_drops:
            program.getFunctionManager().removeFunction(function.getEntryPoint())
        return True


class DeletableSymbol(Symbol):
    def __init__(self, name, address, symbol_type = "LABEL", deletes = True):
        super().__init__(name, address, symbol_type = symbol_type)
        self.deletes = deletes

    def delete(self):
        if self.deletes:
            self.table.symbols.remove(self)
        return self.deletes


# An instruction at BASE + offset that falls through to the next byte unless `falls` is False
def instruction(offset, mnemonic, *operands, length = 1, falls = True):
    return Instruction(mnemonic, *operands, length = length,
                       fallthrough = at(BASE + offset + length) if falls else None)


def put(program, offset, mnemonic, *operands, length = 1, falls = True):
    made = instruction(offset, mnemonic, *operands, length = length, falls = falls)
    return program.getListing().add_instruction(BASE + offset, made)


# The same, as the pseudo disassembler decodes it
def decode(program, offset, mnemonic, *operands, length = 1, falls = True):
    program.pseudo[BASE + offset] = instruction(offset, mnemonic, *operands, length = length, falls = falls)


def decode_run(program, start, end, mnemonic = "PUSH", operand = "EBX"):
    for offset in range(start, end):
        decode(program, offset, mnemonic, operand)


def function(program, offset, size = 1, name = None):
    return program.getFunctionManager().add(name or f"FUN_{BASE + offset:08x}", BASE + offset, size)


def lea(register):
    return ("LEA", register, f"[{register}]")


# A function at BASE + 0x0e whose body is `padding` then a PUSH, after `before` at 0x0d
def padded(before = ("RET",), padding = (("MOV", "ECX", "ECX", 2),), size = 0x10):
    program = BoundaryProgram()
    mnemonic, *operands = before
    put(program, 0x0d, mnemonic, *operands, falls = mnemonic != "RET")
    offset = 0x0e
    for *made, length in padding:
        put(program, offset, *made, length = length)
        offset += length
    put(program, offset, "PUSH", "EBX")
    return program, function(program, 0x0e, size)


# A function at BASE whose body ends with `last` at 0x0f, so a sweep anchors at 0x10
def anchored(last = ("RET",), falls = False):
    program = BoundaryProgram()
    function(program, 0, size = 0x10)
    put(program, 0x0f, *last, falls = falls)
    return program


# Decoded padding 0x10-0x1f, real code from 0x20 on
def padding_then_code(program):
    decode(program, 0x10, *lea("EAX"), length = 6)
    decode(program, 0x16, *lea("EDX"), length = 6)
    decode(program, 0x1c, *lea("EBX"), length = 4)
    decode_run(program, 0x20, 0x60)


# A victim at BASE whose last instruction falls (or not) into an undefined gap
# 0x08-0x0b, and a function at 0x0c
def gapped(falls = True):
    program = BoundaryProgram()
    victim = function(program, 0, size = 8)
    put(program, 4, "MOV", "EAX", "EBX", length = 4, falls = falls)
    return program, victim, function(program, 0x0c)


# A named method at BASE + 0x10 with everything a rebuild must carry over
def described_function(program):
    func = function(program, 0x10, size = 4, name = "Thing_FUN_00001010")
    func.namespace = "CThing"
    func.convention = "__thiscall"
    func.noreturn = func.custom_storage = func.varargs = True
    func.comment, func.repeatable_comment = "plate", "seen everywhere"
    func.return_variable = Variable("<RETURN>", "int", "EAX")
    func.parameters = [Variable("this_ptr", "CThing *", "ECX")]
    func.local_variables = [Variable("count", "int", "Stack[-0x8]", first_use = 4)]
    return func


def finding(kind, name = "FUN_00001000", **extra):
    return {"kind": kind, "entry": at(BASE + 2), "correct": at(BASE + 0x10), "name": name,
            "func": None, "other": None, **extra}


def label(program, offset, name, **kwargs):
    symbol = DeletableSymbol(name, at(BASE + offset), **kwargs)
    symbol.table = program.getSymbolTable()
    program.getSymbolTable().symbols.append(symbol)
    return symbol
