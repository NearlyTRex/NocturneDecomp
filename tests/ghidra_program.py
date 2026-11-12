# Imports
import importlib
import itertools
import struct

# Local imports
import ghidra_fake

# A small in-memory Ghidra program for the scripts to run against: the parts of
# Program and the managers it hands out that they call, behaving as Ghidra's
# do. Tests build one, run the code under test, then read the result back out.

Address = ghidra_fake.Address
SYMBOL_IDS = itertools.count(1)


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
        self.symbol_id = next(SYMBOL_IDS)

    # The faked SymbolType's constant, the one the scripts compare against
    def getSymbolType(self):
        return getattr(importlib.import_module("ghidra.program.model.symbol").SymbolType, self.symbol_type)

    def getObject(self):
        return self.namespace_object

    # Ghidra's primary symbol is the one an address shows; here, the first at it
    def isPrimary(self):
        return self.table is not None and self.table.getPrimarySymbol(self.address) is self

    # Unique, in the order symbols were made
    def getID(self):
        return self.symbol_id

    def isGlobal(self):
        return self.namespace is None or self.namespace.getParentNamespace() is None

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
        self.read_ok = True
        self.write_ok = not execute
        self.comment = None
        self.overlay = False
        self.block_type = "DEFAULT"

    def isInitialized(self):
        return self.initialized

    def getSize(self):
        return len(self.data)

    def getType(self):
        return self.block_type

    def isRead(self):
        return self.read_ok

    def isWrite(self):
        return self.write_ok

    def getComment(self):
        return self.comment

    def isOverlay(self):
        return self.overlay

    def setRead(self, value):
        self.read_ok = value

    def setWrite(self, value):
        self.write_ok = value

    def setExecute(self, value):
        self.execute = value

    def setComment(self, comment):
        self.comment = comment

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

    # Ghidra's overloads: the block holding an address, or the block of a name
    def getBlock(self, address_or_name):
        if isinstance(address_or_name, str):
            return next((block for block in self.blocks if block.name == address_or_name), None)
        return next((block for block in self.blocks if block.contains(address_or_name)), None)

    def getBlocks(self):
        return list(self.blocks)

    def removeBlock(self, block, _monitor):
        self.blocks.remove(block)

    def createInitializedBlock(self, name, start, size, fill, _monitor, overlay):
        block = self.add_block(name, start.getOffset(), bytes([fill]) * size)
        block.overlay = overlay
        return block

    def createUninitializedBlock(self, name, start, size, overlay):
        block = self.add_block(name, start.getOffset(), bytes(size))
        block.initialized = False
        block.overlay = overlay
        return block

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


# Whether control leaves an instruction through a computed target, by a jump, or by a call
class FlowType:
    def __init__(self, computed = False, jump = False, call = False):
        self.computed = computed
        self.jump = jump
        self.call = call

    def isComputed(self):
        return self.computed

    def isJump(self):
        return self.jump

    def isCall(self):
        return self.call


# flows: the addresses control can go to from it, as getFlows returns them;
# fallthrough: the address getFallThrough returns, None for none
class Instruction:
    def __init__(self, mnemonic, *operands, flow = None, flows = (), length = 1, fallthrough = None):
        self.mnemonic = mnemonic
        self.operands = operands
        self.flow = flow or FlowType()
        self.flows = list(flows)
        self.length = length
        self.fallthrough = fallthrough
        # Set by Listing.add_instruction
        self.address = None

    def getFlows(self):
        return list(self.flows)

    def getFallThrough(self):
        return self.fallthrough

    def getLength(self):
        return self.length

    def getMinAddress(self):
        return self.address

    def getMaxAddress(self):
        return self.address.add(self.length - 1)

    def contains(self, address):
        return 0 <= address.getOffset() - self.address.getOffset() < self.length

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


# One field of a struct's data: its name, and its value (a Scalar, an Address or None)
class DataField:
    def __init__(self, name, value):
        self.name = name
        self.value = value

    def getFieldName(self):
        return self.name

    def getValue(self):
        return self.value


# A numeric value as Ghidra hands one out
class Scalar:
    def __init__(self, value):
        self.value = value

    def getValue(self):
        return self.value


class Data:
    def __init__(self, address, data_type, value = None, length = None, defined = True):
        self.address = address
        self.data_type = data_type
        self.value = value
        self.length = length if length is not None else (data_type.getLength() if data_type else 1)
        self.defined = defined
        # {comment type name: text}, as CodeUnit.getComment(type) reads them
        self.comments = {}
        # A struct's fields as data: DataField(name, value) for each, in order
        self.fields = []

    def getNumComponents(self):
        return len(self.fields)

    def getComponent(self, index):
        return self.fields[index]

    def getAddress(self):
        return self.address

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

    def getMaxAddress(self):
        return self.address.add(self.length - 1)

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

    def getDefinedDataContaining(self, address):
        data = self.getDataContaining(address)
        return data if data is not None and data.isDefined() else None

    # Ghidra's overloads: (forward) over the whole program, or (address set, forward)
    def getDefinedData(self, *_set_and_forward):
        return [data for _, data in sorted(self.data.items(), key = lambda item: item[0].getOffset())
                if data.isDefined()]

    def getCodeUnitAt(self, address):
        return self.instructions.get(address) or self.data.get(address)

    def getInstructionContaining(self, address):
        return next((i for i in self.instructions.values() if i.contains(address)), None)

    def getCodeUnitContaining(self, address):
        return self.getInstructionContaining(address) or self.getDataContaining(address)

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


class FunctionTag:
    def __init__(self, name):
        self.name = name

    def getName(self):
        return self.name


class LocalVariable:
    def __init__(self, name, data_type, first_use_offset):
        self.name = name
        self.data_type = data_type
        self.first_use_offset = first_use_offset

    def getName(self):
        return self.name

    def getDataType(self):
        return self.data_type

    def getFirstUseOffset(self):
        return self.first_use_offset


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
        self.local_variables = []
        # {call address: FunctionDefinition}, as HighFunctionDBUtil.writeOverride writes them
        self.overrides = {}
        # Its signature: parameters with getName and getDataType, the return type, varargs
        self.parameters = []
        self.return_type = None
        self.varargs = False
        self.called = []
        # The rest of what the functions export records, and the import sets
        self.inline = False
        self.noreturn = False
        self.custom_storage = False
        self.comment = None
        self.tags = []
        self.return_variable = None
        # (update type, [parameters]) of each replaceParameters
        self.replaced = []

    def isInline(self):
        return self.inline

    def setInline(self, value):
        self.inline = value

    def hasNoReturn(self):
        return self.noreturn

    def setNoReturn(self, value):
        self.noreturn = value

    def hasCustomVariableStorage(self):
        return self.custom_storage

    def setCustomVariableStorage(self, value):
        self.custom_storage = value

    def setVarArgs(self, value):
        self.varargs = value

    def getComment(self):
        return self.comment

    def setComment(self, comment):
        self.comment = comment

    def getTags(self):
        return [FunctionTag(tag) for tag in self.tags]

    def addTag(self, name):
        self.tags.append(name)

    def setCallingConvention(self, name):
        self.convention = name

    def setReturnType(self, data_type, _source):
        self.return_type = data_type

    def getReturn(self):
        return self.return_variable

    def setReturn(self, data_type, storage, _source):
        self.return_type = data_type
        self.return_variable = ghidra_fake.Variable("<RETURN>", data_type, storage)

    def setThunkedFunction(self, target):
        self.thunk_target = target

    # Numbered in order, as Ghidra's are
    def replaceParameters(self, update, _force, _source, params):
        self.replaced.append((update, list(params)))
        self.parameters = list(params)
        for ordinal, param in enumerate(self.parameters):
            param.ordinal = ordinal

    # The function keeps the variable it is handed, which is what Ghidra's hands back
    def addLocalVariable(self, variable, _source):
        if any(v.getName() == variable.getName() for v in self.local_variables):
            raise ghidra_fake.DuplicateNameException(variable.getName())
        self.local_variables.append(variable)
        return variable

    def getParameters(self):
        return list(self.parameters)

    def getReturnType(self):
        return self.return_type

    def hasVarArgs(self):
        return self.varargs

    def getCalledFunctions(self, _monitor):
        return list(self.called)

    def getLocalVariables(self):
        return list(self.local_variables)

    def removeVariable(self, variable):
        self.local_variables.remove(variable)

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

    # A new function's calling convention is unknown until one is set, as in Ghidra
    def createFunction(self, name, entry, body, _source):
        function = Function(name, entry)
        function.body = body
        function.convention = "unknown"
        self.functions[entry] = function
        return function

    def removeFunction(self, entry):
        return self.functions.pop(entry, None) is not None

    def getFunctionsOverlapping(self, address_set):
        return iter([f for f in self.functions.values()
                     if any(lo <= hi2 and lo2 <= hi for lo, hi in f.body.ranges for lo2, hi2 in address_set.ranges)])


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


# ref_type, when given, is the faked RefType constant a script passed to addMemoryReference
class Reference:
    def __init__(self, source, destination, call, kind = None, operand = 0, primary = True, ref_type = None):
        self.source = source
        self.destination = destination
        self.ref_type = ref_type if ref_type is not None else RefType(call, kind)
        self.operand = operand
        self.primary = primary

    def getFromAddress(self):
        return self.source

    def getToAddress(self):
        return self.destination

    def getReferenceType(self):
        return self.ref_type

    def getOperandIndex(self):
        return self.operand

    def isPrimary(self):
        return self.primary


class ReferenceManager:
    def __init__(self):
        self.references = []

    def add(self, source, destination, call = False, kind = None, operand = 0, primary = True):
        reference = Reference(Address(source), Address(destination), call, kind, operand, primary)
        self.references.append(reference)
        return reference

    def getReferencesTo(self, address):
        return [ref for ref in self.references if ref.destination == address]

    # Ghidra's overloads: (address), or (address, operand index)
    def getReferencesFrom(self, address, operand = None):
        return [ref for ref in self.references
                if ref.source == address and (operand is None or ref.operand == operand)]

    # The addresses in the set that references come from, in order
    def getReferenceSourceIterator(self, address_set, forward):
        sources = {ref.source for ref in self.references
                   if any(lo <= ref.source.getOffset() <= hi for lo, hi in address_set.ranges)}
        return iter(sorted(sources, key = lambda a: a.getOffset(), reverse = not forward))

    # Primary when it is the first reference from the operand, as Ghidra's is
    def addMemoryReference(self, source, destination, ref_type, _source_type, operand):
        primary = not self.getReferencesFrom(source, operand)
        reference = Reference(source, destination, False, operand = operand, primary = primary, ref_type = ref_type)
        self.references.append(reference)
        return reference

    def setPrimary(self, reference, primary):
        reference.primary = primary

    def delete(self, reference):
        self.references.remove(reference)


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

    # Ghidra's space type is a number; 1 is memory
    def getType(self):
        return 1

    def getSize(self):
        return self.pointer_size * 8


# Parses addresses as Ghidra's does: hex, with or without 0x, optionally "space:"
class HashSpace:
    def getAddress(self, offset):
        address = Address(offset)
        address.space_name = "HASH"
        address.memory = False
        return address


class AddressFactory:
    def __init__(self, space):
        self.space = space
        self.has_hash_space = True

    def getDefaultAddressSpace(self):
        return self.space

    def getAddressSpaces(self):
        return [self.space]

    # The decompiler's HASH space, whose addresses name overrides; a test can take it away
    def getAddressSpace(self, name):
        return HashSpace() if name == "HASH" and self.has_hash_space else None

    # The default space's addresses, and EXTERNAL and register ones, which are not memory
    def getAddress(self, text):
        space, _, offset = text.rpartition(":")
        if space and space not in (self.space.getName(), "EXTERNAL", "register"):
            return None
        try:
            address = Address(int(offset, 16))
        except ValueError:
            return None
        address.memory = space in ("", self.space.getName())
        return address


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

    # Ghidra's overloads: (path), or (category path or its text, name)
    def getDataType(self, path_or_category, name = None):
        if name is not None and not isinstance(path_or_category, str):
            path_or_category = path_or_category.getPath()
        for data_type in self.types:
            category = data_type.getCategoryPath().getPath()
            if name is None and path_or_category == f"{category.rstrip('/')}/{data_type.getName()}":
                return data_type
            if name is not None and path_or_category == category and name == data_type.getName():
                return data_type
        return None

    def getAllDataTypes(self):
        return iter(self.types)

    def getDataTypeCount(self, _include_pointers_and_arrays):
        return len(self.types)

    # True when the type was here to remove, as Ghidra's answers
    def remove(self, data_type, _monitor):
        if data_type not in self.types:
            return False
        self.types.remove(data_type)
        return True

    # Ghidra fills the list it is handed, whatever category the types are in
    def findDataTypes(self, name, found):
        for data_type in self.types:
            if data_type.getName() == name:
                found.add(data_type)

    # A type at the path of one already here replaces it, as the REPLACE handler does
    def addDataType(self, data_type, _handler):
        existing = self.getDataType(data_type.getCategoryPath(), data_type.getName())
        if existing is not None:
            self.types.remove(existing)
        self.types.append(data_type)
        return data_type

    # Into a type already here, `old` merges: its uses refer to `new` and it is gone.
    # Otherwise `old` takes `new`'s definition, staying the type its uses refer to.
    def replaceDataType(self, old, new, _update_category_path):
        self.replaced.append((old, new))
        if new in self.types:
            self.types.remove(old)
            return new
        old.__dict__.update(new.__dict__)
        return old

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

    def addExtFunction(self, library, name, address, _source):
        return self.add(library, name, address, "FUNCTION")

    def getExternalLocation(self, symbol):
        return next((loc for loc in self.locations if loc.symbol is symbol), None)

    # The locations of a label in a library: Ghidra allows more than one
    def getExternalLocations(self, library, name):
        return {loc for loc in self.locations if loc.library == library and loc.symbol.getName() == name}


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
        self.registers = {"EAX": ghidra_fake.Register("EAX", 0), "ECX": ghidra_fake.Register("ECX", 4)}
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

    def getName(self):
        return self.domain_file.getName()

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

    # The x86 registers a test names, by name
    def getRegister(self, name):
        return self.registers.get(name)
