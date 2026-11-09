# Imports
import importlib
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


# A label by default; a namespace or class symbol has no address and stands for its namespace
class Symbol:
    def __init__(self, name, address, namespace = None, source = "USER_DEFINED", dynamic = False,
                 symbol_type = "LABEL", namespace_object = None):
        self.name = name
        self.address = address
        self.namespace = namespace
        self.source = source
        self.dynamic = dynamic
        self.table = None
        self.symbol_type = symbol_type
        self.namespace_object = namespace_object
        self.external = False

    # The faked SymbolType's constant, the one the scripts compare against
    def getSymbolType(self):
        return getattr(importlib.import_module("ghidra.program.model.symbol").SymbolType, self.symbol_type)

    def getObject(self):
        return self.namespace_object

    def isExternal(self):
        return self.external

    def getName(self):
        return self.name

    def setName(self, name, source):
        self.name = name
        self.source = source

    def getAddress(self):
        return self.address

    def getParentNamespace(self):
        return self.namespace

    def getSource(self):
        return self.source

    def isDynamic(self):
        return self.dynamic

    # Ghidra's primary symbol is the one an address shows; here, the first
    def setPrimary(self):
        self.table.symbols.remove(self)
        self.table.symbols.insert(0, self)
        return True


class SymbolTable:
    def __init__(self, global_namespace):
        self.global_namespace = global_namespace
        self.namespaces = {}
        self.symbols = []
        self.removed = []
        # The addresses Ghidra records as entry points: the PE entry and the exports
        self.entry_points = []

    def getExternalEntryPointIterator(self):
        return iter(self.entry_points)

    def getNamespace(self, name, parent):
        return self.namespaces.get((name, parent))

    def createNameSpace(self, parent, name, source, symbol_type = "NAMESPACE"):
        namespace = Namespace(name, parent)
        self.namespaces[(name, parent)] = namespace
        symbol = Symbol(name, None, parent, source, symbol_type = symbol_type, namespace_object = namespace)
        symbol.table = self
        self.symbols.append(symbol)
        return namespace

    def createClass(self, parent, name, source):
        return self.createNameSpace(parent, name, source, symbol_type = "CLASS")

    def getAllSymbols(self, _include_dynamic):
        return list(self.symbols)

    # Ghidra's two overloads: (address, name, source) files it in the global namespace
    def createLabel(self, address, name, *namespace_and_source):
        namespace = namespace_and_source[0] if len(namespace_and_source) == 2 else self.global_namespace
        source = namespace_and_source[-1]
        symbol = Symbol(name, address, namespace, source)
        symbol.table = self
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
        # False for a block like .bss, whose bytes the file does not hold
        self.initialized = True

    def isInitialized(self):
        return self.initialized

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

    # Ghidra's two forms: one address, or a whole range that must lie in one block
    def contains(self, address, end = None):
        block = self.getBlock(address)
        return block is not None and (end is None or block.contains(end))

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


# Whether control leaves an instruction through a computed target, and by a jump
class FlowType:
    def __init__(self, computed = False, jump = False):
        self.computed = computed
        self.jump = jump

    def isComputed(self):
        return self.computed

    def isJump(self):
        return self.jump


class Instruction:
    def __init__(self, mnemonic, *operands, flow = None):
        self.mnemonic = mnemonic
        self.operands = operands
        self.flow = flow or FlowType()
        # Set by Listing.add_instruction
        self.address = None

    def __str__(self):
        return " ".join([self.mnemonic, ",".join(self.operands)]).strip()

    def getAddress(self):
        return self.address

    def getFlowType(self):
        return self.flow

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
        # {comment type name: text}, as CodeUnit.getComment(type) reads them
        self.comments = {}

    def getComment(self, comment_type):
        return self.comments.get(str(comment_type))

    # None removes the comment, as Ghidra's does
    def setComment(self, comment_type, text):
        if text is None:
            self.comments.pop(str(comment_type), None)
        else:
            self.comments[str(comment_type)] = text

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

    def add_instruction(self, address, instruction):
        instruction.address = Address(address)
        self.instructions[instruction.address] = instruction
        return instruction

    def getInstructionAt(self, address):
        return self.instructions.get(address)

    # The instructions in the set's ranges, in address order
    def getInstructions(self, address_set, forward):
        return [i for a, i in sorted(self.instructions.items(), key = lambda item: item[0].getOffset(),
                                     reverse = not forward)
                if any(lo <= a.getOffset() <= hi for lo, hi in address_set.ranges)]

    def getDataContaining(self, address):
        return next((data for data in self.data.values() if data.contains(address)), None)

    def getDefinedDataAt(self, address):
        data = self.data.get(address)
        return data if data is not None and data.isDefined() else None

    # Ghidra's overloads: (forward) over the whole program, or (address set, forward)
    def getDefinedData(self, *_set_and_forward):
        return [data for _, data in sorted(self.data.items(), key = lambda item: item[0].getOffset())
                if data.isDefined()]

    def getCodeUnitAt(self, address):
        return self.instructions.get(address) or self.data.get(address)

    # The data in the set's ranges, in address order
    def getCodeUnits(self, address_set, forward):
        return [data for _, data in sorted(self.data.items(), key = lambda item: item[0].getOffset(),
                                           reverse = not forward)
                if any(lo <= data.address.getOffset() <= hi for lo, hi in address_set.ranges)]

    # Records the call, and removes the data that overlaps the range
    def clearCodeUnits(self, start, end, clear_context):
        self.cleared.append((start, end, clear_context))
        for address in [a for a, data in self.data.items()
                        if a.getOffset() <= end.getOffset() < a.getOffset() + data.length
                        or start.getOffset() <= a.getOffset() <= end.getOffset()]:
            del self.data[address]

    def createData(self, address, data_type):
        length = data_type.getLength() if hasattr(data_type, "getLength") else 1
        data = Data(address, data_type, length = length)
        self.data[address] = data
        return data


# A function, its own symbol (getSymbol is the function itself here), and
# optionally the function it is a thunk to
class Function:
    def __init__(self, name, entry, size = 1):
        self.name = name
        self.entry = entry
        self.source = "DEFAULT"
        self.thunk_target = None
        self.external = False
        self.body = ghidra_fake.AddressSet(entry, entry.add(size - 1))
        self.prototype = None
        self.convention = "__cdecl"
        self.parameter_count = 0

    def getCallingConventionName(self):
        return self.convention

    def getParameterCount(self):
        return self.parameter_count

    def getBody(self):
        return self.body

    def setBody(self, body):
        self.body = body

    # The arguments of the last updateFunction, as (convention, return, [params])
    def updateFunction(self, convention, ret, params, _update_type, _force, _source):
        self.prototype = (convention, ret, list(params))

    def getName(self):
        return self.name

    def setName(self, name, source):
        self.name = name
        self.source = source

    def getEntryPoint(self):
        return self.entry

    def getSymbol(self):
        return self

    def getSource(self):
        return self.source

    def isThunk(self):
        return self.thunk_target is not None

    def isExternal(self):
        return self.external

    def getThunkedFunction(self, recursive):
        target = self.thunk_target
        while recursive and target is not None and target.thunk_target is not None:
            target = target.thunk_target
        return target


class FunctionManager:
    def __init__(self):
        self.functions = {}

    def add(self, name, entry, size = 1):
        function = Function(name, Address(entry), size)
        self.functions[Address(entry)] = function
        return function

    def getFunctionAt(self, address):
        return self.functions.get(address)

    def getFunctionContaining(self, address):
        return next((f for f in self.functions.values() if f.body.contains(address)), None)

    def getFunctions(self, forward):
        return iter(sorted(self.functions.values(), key = lambda f: f.entry.getOffset(), reverse = not forward))


# A reference's kind, by its Ghidra name: a call, a flow (jumps and calls), or data
class RefType:
    FLOWS = ("UNCONDITIONAL_CALL", "COMPUTED_JUMP", "CONDITIONAL_JUMP", "UNCONDITIONAL_JUMP")

    def __init__(self, call, name = None):
        self.call = call
        self.name = name or ("UNCONDITIONAL_CALL" if call else "DATA")

    def isCall(self):
        return self.call

    def isFlow(self):
        return self.name in self.FLOWS

    def __str__(self):
        return self.name


class Reference:
    def __init__(self, source, destination, call, kind = None):
        self.source = source
        self.destination = destination
        self.ref_type = RefType(call, kind)

    def getFromAddress(self):
        return self.source

    def getToAddress(self):
        return self.destination

    def getReferenceType(self):
        return self.ref_type


class ReferenceManager:
    def __init__(self):
        self.references = []

    def add(self, source, destination, call = False, kind = None):
        self.references.append(Reference(Address(source), Address(destination), call, kind))

    def getReferencesTo(self, address):
        return [ref for ref in self.references if ref.destination == address]

    def getReferencesFrom(self, address):
        return [ref for ref in self.references if ref.source == address]


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
        self.replaced = []
        self.categories = []

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

    # Ghidra fills the list it is handed, whatever category the types are in
    def findDataTypes(self, name, found):
        for data_type in self.types:
            if data_type.getName() == name:
                found.add(data_type)

    def addDataType(self, data_type, _handler):
        self.types.append(data_type)
        return data_type

    # Every use of `old` now refers to `new`, and `old` is gone
    def replaceDataType(self, old, new, _update_category_path):
        self.types.remove(old)
        self.replaced.append((old, new))
        return new

    def createCategory(self, path):
        self.categories.append(path.getPath())
        return path


class ExternalLocation:
    def __init__(self, library, symbol, address):
        self.library = library
        self.symbol = symbol
        self.address = address

    def getLibraryName(self):
        return self.library

    def getAddress(self):
        return self.address


# External locations, each with an external symbol in the program's symbol table
class ExternalManager:
    def __init__(self, symbol_table):
        self.symbol_table = symbol_table
        self.locations = []

    def add(self, library, name, address = None, symbol_type = "FUNCTION"):
        symbol = Symbol(name, None, symbol_type = symbol_type)
        symbol.external = True
        symbol.table = self.symbol_table
        self.symbol_table.symbols.append(symbol)
        self.locations.append(ExternalLocation(library, symbol, address))
        return self.locations[-1]

    def addExtLocation(self, library, name, address, _source):
        return self.add(library, name, address, "LABEL")

    # Ghidra's overloads: (symbol), or (library name, label)
    def getExternalLocation(self, symbol_or_library, name = None):
        if name is None:
            return next((loc for loc in self.locations if loc.symbol is symbol_or_library), None)
        return next((loc for loc in self.locations
                     if loc.library == symbol_or_library and loc.symbol.getName() == name), None)

    def removeExternalLocation(self, location):
        self.locations.remove(location)
        self.symbol_table.symbols.remove(location.symbol)
        return True


class EquateReference:
    def __init__(self, address, op_index):
        self.address = address
        self.op_index = op_index

    def getAddress(self):
        return self.address

    def getOpIndex(self):
        return self.op_index


class Equate:
    def __init__(self, name, value):
        self.name = name
        self.value = value
        self.references = []

    def getName(self):
        return self.name

    def getValue(self):
        return self.value

    def getReferences(self):
        return list(self.references)

    def addReference(self, address, op_index):
        self.references.append(EquateReference(address, op_index))


class EquateTable:
    def __init__(self):
        self.equates = {}

    def getEquates(self):
        return iter(self.equates.values())

    def getEquate(self, name):
        return self.equates.get(name)

    def createEquate(self, name, value):
        self.equates[name] = Equate(name, value)
        return self.equates[name]

    def removeEquate(self, name):
        return self.equates.pop(name, None) is not None


class Bookmark:
    def __init__(self, address, type_string, category, comment):
        self.address = address
        self.type_string = type_string
        self.category = category
        self.comment = comment

    def getAddress(self):
        return self.address

    def getTypeString(self):
        return self.type_string

    def getCategory(self):
        return self.category

    def getComment(self):
        return self.comment


# One bookmark per address, type and category, as Ghidra keeps them
class BookmarkManager:
    def __init__(self):
        self.bookmarks = []

    def setBookmark(self, address, type_string, category, comment):
        self.bookmarks = [b for b in self.bookmarks
                          if (b.address, b.type_string, b.category) != (address, type_string, category)]
        bookmark = Bookmark(address, type_string, category, comment)
        self.bookmarks.append(bookmark)
        return bookmark

    def getBookmarksIterator(self):
        return iter(sorted(self.bookmarks, key = lambda b: b.address.getOffset()))

    def removeBookmark(self, bookmark):
        self.bookmarks.remove(bookmark)


# The program's file in the project, counting the times it is saved
class DomainFile:
    def __init__(self, name = "program.exe"):
        self.saves = 0
        self.name = name

    def getName(self):
        return self.name

    def save(self, _monitor):
        self.saves += 1


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
        self.domain_file = DomainFile()
        self.bookmark_manager = BookmarkManager()
        self.equate_table = EquateTable()
        self.external_manager = ExternalManager(self.symbol_table)
        # (name, committed) for each transaction, committed None while it is open
        self.transactions = []
        # What the program records about the file it was imported from
        self.image_base = self.space.getAddress(0x400000)
        self.language_id = "x86:LE:32:default"
        self.compiler_spec_id = "windows"
        self.executable_format = "Portable Executable (PE)"
        self.md5 = "0" * 32
        self.sha256 = "0" * 64

    def getImageBase(self):
        return self.image_base

    def getBookmarkManager(self):
        return self.bookmark_manager

    def getEquateTable(self):
        return self.equate_table

    def getExternalManager(self):
        return self.external_manager

    def getLanguageID(self):
        return self.language_id

    # Stands in for both the CompilerSpec and its ID
    def getCompilerSpec(self):
        return self

    def getCompilerSpecID(self):
        return self.compiler_spec_id

    def getExecutableFormat(self):
        return self.executable_format

    def getExecutableMD5(self):
        return self.md5

    def getExecutableSHA256(self):
        return self.sha256

    def startTransaction(self, name):
        self.transactions.append([name, None])
        return len(self.transactions) - 1

    def endTransaction(self, transaction, commit):
        self.transactions[transaction][1] = commit

    def getDomainFile(self):
        return self.domain_file

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
