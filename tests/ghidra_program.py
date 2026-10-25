# Imports
import struct

# Local imports
import ghidra_fake

# A small in-memory Ghidra program for the scripts to run against: the parts of
# Program and the managers it hands out that they call, behaving as Ghidra's
# do. Tests build one, run the code under test, then read the result back out.

Address = ghidra_fake.Address


class Namespace:
    def __init__(self, name, parent = None):
        self.name = name
        self.parent = parent

    def getName(self):
        return self.name

    def getParentNamespace(self):
        return self.parent


class Symbol:
    def __init__(self, name, address, namespace = None, source = "USER_DEFINED", dynamic = False):
        self.name = name
        self.address = address
        self.namespace = namespace
        self.source = source
        self.dynamic = dynamic

    def getName(self):
        return self.name

    def getAddress(self):
        return self.address

    def getParentNamespace(self):
        return self.namespace

    def getSource(self):
        return self.source

    def isDynamic(self):
        return self.dynamic


class SymbolTable:
    def __init__(self, global_namespace):
        self.global_namespace = global_namespace
        self.namespaces = {}
        self.symbols = []
        self.removed = []

    def getNamespace(self, name, parent):
        return self.namespaces.get((name, parent))

    def createNameSpace(self, parent, name, source):
        namespace = Namespace(name, parent)
        self.namespaces[(name, parent)] = namespace
        return namespace

    def createLabel(self, address, name, namespace, source):
        symbol = Symbol(name, address, namespace, source)
        self.symbols.append(symbol)
        return symbol

    def getSymbols(self, address):
        return [symbol for symbol in self.symbols if symbol.address == address]

    def getPrimarySymbol(self, address):
        symbols = self.getSymbols(address)
        return symbols[0] if symbols else None

    def removeSymbolSpecial(self, symbol):
        self.symbols.remove(symbol)
        self.removed.append(symbol)
        return True


class AddressRange:
    def __init__(self, start, end):
        self.start = start
        self.end = end

    def getMinAddress(self):
        return self.start

    def getMaxAddress(self):
        return self.end


class AddressRanges:
    def __init__(self, ranges):
        self.ranges = ranges

    def getAddressRanges(self):
        return iter(self.ranges)


class MemoryBlock:
    def __init__(self, name, start, data, execute = False):
        self.name = name
        self.start = start
        self.data = bytearray(data)
        self.execute = execute

    def getName(self):
        return self.name

    def getStart(self):
        return self.start

    def getEnd(self):
        return self.start.add(len(self.data) - 1)

    def isExecute(self):
        return self.execute

    def contains(self, address):
        return 0 <= address.getOffset() - self.start.getOffset() < len(self.data)


class Memory:
    def __init__(self):
        self.blocks = []

    def add_block(self, name, start, data, execute = False):
        block = MemoryBlock(name, Address(start), data, execute)
        self.blocks.append(block)
        return block

    def getBlock(self, address):
        return next((block for block in self.blocks if block.contains(address)), None)

    def getBlocks(self):
        return list(self.blocks)

    def contains(self, address):
        return self.getBlock(address) is not None

    def read(self, address, size):
        block = self.getBlock(address)
        if block is None or not block.contains(address.add(size - 1)):
            raise ghidra_fake.MemoryAccessException(f"no memory at {address}")
        offset = address.getOffset() - block.start.getOffset()
        return bytes(block.data[offset:offset + size])

    # Signed, as Java's are
    def getByte(self, address):
        return struct.unpack("<b", self.read(address, 1))[0]

    def getInt(self, address):
        return struct.unpack("<i", self.read(address, 4))[0]

    def getLong(self, address):
        return struct.unpack("<q", self.read(address, 8))[0]

    def getAllInitializedAddressSet(self):
        return AddressRanges([AddressRange(block.getStart(), block.getEnd()) for block in self.blocks])


class Instruction:
    def __init__(self, mnemonic, *operands):
        self.mnemonic = mnemonic
        self.operands = operands

    def getMnemonicString(self):
        return self.mnemonic

    def getNumOperands(self):
        return len(self.operands)

    def getDefaultOperandRepresentation(self, index):
        return self.operands[index]


class Data:
    def __init__(self, address, data_type, value = None, length = None, defined = True):
        self.address = address
        self.data_type = data_type
        self.value = value
        self.length = length if length is not None else (data_type.getLength() if data_type else 1)
        self.defined = defined

    def getMinAddress(self):
        return self.address

    def getDataType(self):
        return self.data_type

    def getValue(self):
        return self.value

    def getLength(self):
        return self.length

    def isDefined(self):
        return self.defined

    def contains(self, address):
        return 0 <= address.getOffset() - self.address.getOffset() < self.length


class Listing:
    def __init__(self):
        self.instructions = {}
        self.data = {}
        self.cleared = []

    def add_data(self, address, data_type, value = None, **kwargs):
        data = Data(Address(address), data_type, value, **kwargs)
        self.data[data.address] = data
        return data

    def getInstructionAt(self, address):
        return self.instructions.get(address)

    def getDataContaining(self, address):
        return next((data for data in self.data.values() if data.contains(address)), None)

    def getDefinedDataAt(self, address):
        data = self.data.get(address)
        return data if data is not None and data.isDefined() else None

    def getDefinedData(self, address_set, forward):
        return [data for _, data in sorted(self.data.items(), key = lambda item: item[0].getOffset())
                if data.isDefined()]

    def getCodeUnitAt(self, address):
        return self.instructions.get(address) or self.data.get(address)

    def clearCodeUnits(self, start, end, clear_context):
        self.cleared.append((start, end, clear_context))


class Function:
    def __init__(self, name, entry):
        self.name = name
        self.entry = entry

    def getName(self):
        return self.name

    def getEntryPoint(self):
        return self.entry


class FunctionManager:
    def __init__(self):
        self.functions = {}

    def add(self, name, entry):
        self.functions[Address(entry)] = Function(name, Address(entry))

    def getFunctionAt(self, address):
        return self.functions.get(address)


class RefType:
    def __init__(self, call):
        self.call = call

    def isCall(self):
        return self.call


class Reference:
    def __init__(self, source, destination, call):
        self.source = source
        self.destination = destination
        self.ref_type = RefType(call)

    def getFromAddress(self):
        return self.source

    def getToAddress(self):
        return self.destination

    def getReferenceType(self):
        return self.ref_type


class ReferenceManager:
    def __init__(self):
        self.references = []

    def add(self, source, destination, call = False):
        self.references.append(Reference(Address(source), Address(destination), call))

    def getReferencesTo(self, address):
        return [ref for ref in self.references if ref.destination == address]


class AddressSpace:
    def __init__(self, name = "ram", pointer_size = 4):
        self.name = name
        self.pointer_size = pointer_size

    def getName(self):
        return self.name

    def getPointerSize(self):
        return self.pointer_size

    def getAddress(self, offset):
        return Address(offset)


# Parses addresses as Ghidra's does: hex, with or without 0x, optionally "space:"
class AddressFactory:
    def __init__(self, space):
        self.space = space

    def getDefaultAddressSpace(self):
        return self.space

    def getAddress(self, text):
        space, _, offset = text.rpartition(":")
        if space and space != self.space.getName():
            return None
        try:
            return Address(int(offset, 16))
        except ValueError:
            return None


class Language:
    def __init__(self, space):
        self.space = space

    def getDefaultSpace(self):
        return self.space


# The program's data types, found by path ("/Category/Name") or by category and name
class DataTypeManager:
    def __init__(self, types = ()):
        self.types = list(types)

    def add(self, *data_types):
        self.types.extend(data_types)

    def getDataType(self, path_or_category, name = None):
        for data_type in self.types:
            category = data_type.getCategoryPath().getPath()
            if name is None and path_or_category == f"{category.rstrip('/')}/{data_type.getName()}":
                return data_type
            if name is not None and str(path_or_category) == category and name == data_type.getName():
                return data_type
        return None

    def getAllDataTypes(self):
        return iter(self.types)


class Program:
    def __init__(self, pointer_size = 4):
        self.global_namespace = Namespace("Global")
        self.symbol_table = SymbolTable(self.global_namespace)
        self.memory = Memory()
        self.listing = Listing()
        self.function_manager = FunctionManager()
        self.reference_manager = ReferenceManager()
        self.space = AddressSpace(pointer_size = pointer_size)
        self.address_factory = AddressFactory(self.space)
        self.language = Language(self.space)
        self.data_type_manager = DataTypeManager()

    def getDataTypeManager(self):
        return self.data_type_manager

    def getGlobalNamespace(self):
        return self.global_namespace

    def getSymbolTable(self):
        return self.symbol_table

    def getMemory(self):
        return self.memory

    def getListing(self):
        return self.listing

    def getFunctionManager(self):
        return self.function_manager

    def getReferenceManager(self):
        return self.reference_manager

    def getAddressFactory(self):
        return self.address_factory

    def getLanguage(self):
        return self.language
