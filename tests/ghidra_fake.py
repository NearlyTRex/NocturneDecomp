# Imports
import importlib.abc
import importlib.machinery
import itertools
import sys
import types

# Stands in for Ghidra's Java API, so the Ghidra scripts import and run without
# Ghidra. Any class under the faked packages exists: one this file does not
# model is a placeholder that records its constructor arguments, and its
# upper-case attributes are named constants, as Ghidra's enums and statics are
# (SourceType.USER_DEFINED, TaskMonitor.DUMMY). A name ending in Exception is a
# real exception, so `except MemoryAccessException` works. What the scripts rely
# on behaving like Ghidra (addresses and the data type hierarchy) is modelled
# below, keeping Ghidra's interface names so isinstance() answers as it would.

FAKED_PACKAGES = ("ghidra", "java", "javax", "docking", "generic")


class Constant:
    def __init__(self, owner, name):
        self.owner = owner
        self.name = name

    def __repr__(self):
        return f"{self.owner}.{self.name}"

    def __str__(self):
        return self.name


class JavaClassMeta(type):
    def __getattr__(cls, name):
        if name.startswith("_"):
            raise AttributeError(name)
        value = Constant(cls.__name__, name)
        setattr(cls, name, value)
        return value


class JavaObject(metaclass = JavaClassMeta):
    def __init__(self, *args, **kwargs):
        self.args = args
        self.kwargs = kwargs


class JavaException(Exception, metaclass = JavaClassMeta):
    pass


# --- ghidra.program.model.address --------------------------------------------------

class Address:
    def __init__(self, offset, size = 8):
        self.offset = offset
        self.size = size
        # False for an address in a space that is not memory: external, register, stack
        self.memory = True
        # An overlay block's addresses are in a space of its own
        self.space_name = "ram"

    def isMemoryAddress(self):
        return self.memory

    def getAddressSpace(self):
        return self.space_name

    def getOffset(self):
        return self.offset

    def add(self, displacement):
        return Address(self.offset + displacement, self.size)

    def subtract(self, displacement):
        return Address(self.offset - displacement, self.size)

    # Negative, zero or positive, as Java's Comparable
    def compareTo(self, other):
        return (self.offset > other.getOffset()) - (self.offset < other.getOffset())

    def toString(self):
        return f"{self.offset:0{self.size}x}"

    def __str__(self):
        return self.toString()

    def __repr__(self):
        return f"Address({self.toString()})"

    def __eq__(self, other):
        return isinstance(other, Address) and other.offset == self.offset

    def __hash__(self):
        return hash(self.offset)


# Inclusive address ranges, as Ghidra's: AddressSet() is empty, AddressSet(a, b)
# holds a..b
class AddressRange:
    def __init__(self, start, end):
        self.start = start
        self.end = end

    def getMinAddress(self):
        return self.start

    def getMaxAddress(self):
        return self.end

    def getLength(self):
        return self.end.getOffset() - self.start.getOffset() + 1


# Ghidra's three forms: empty, one address, or start..end
class AddressSet(JavaObject):
    def __init__(self, start = None, end = None):
        super().__init__(start, end)
        self.ranges = []
        if start is not None:
            self.add(start, end)

    # Ghidra's overloads: one address, start..end, or every range of another set
    def add(self, start, end = None):
        if isinstance(start, AddressSet):
            self.ranges += start.ranges
            return
        self.ranges.append((start.getOffset(), (end or start).getOffset()))

    def isEmpty(self):
        return not self.ranges

    def getMinAddress(self):
        return Address(min(lo for lo, _ in self.ranges))

    def getMaxAddress(self):
        return Address(max(hi for _, hi in self.ranges))

    def getAddressRanges(self):
        return [AddressRange(Address(lo), Address(hi)) for lo, hi in self.ranges]

    def __iter__(self):
        return iter(self.getAddressRanges())

    def getRangeContaining(self, address):
        offset = address.getOffset()
        return next((AddressRange(Address(lo), Address(hi)) for lo, hi in self.ranges if lo <= offset <= hi), None)

    def subtract(self, other):
        out = AddressSet()
        for lo, hi in self.ranges:
            pieces = [(lo, hi)]
            for cut_lo, cut_hi in other.ranges:
                pieces = [p for a, b in pieces for p in ((a, min(b, cut_lo - 1)), (max(a, cut_hi + 1), b)) if p[0] <= p[1]]
            out.ranges += pieces
        return out

    def contains(self, address):
        return self.getRangeContaining(address) is not None


# --- ghidra.program.model.data -----------------------------------------------------

# Ghidra gives a universal ID to the types a program defines (structures,
# unions, typedefs, function definitions) and none to pointers, arrays or
# built-ins, whose getUniversalID() is null.
UNIVERSAL_IDS = itertools.count(1)


# The interfaces the scripts test for. Each concrete type below implements the
# ones its Ghidra counterpart does.
class DataType(JavaObject):
    def __init__(self, name, length = 1, display_name = None, universal_id = None, category = "/"):
        super().__init__(name)
        self.name = name
        self.length = length
        self.display_name = display_name or name
        self.universal_id = universal_id
        self.category = category

    def getName(self):
        return self.name

    def getDisplayName(self):
        return self.display_name

    def getLength(self):
        return self.length

    def getUniversalID(self):
        return self.universal_id

    def getCategoryPath(self):
        return CategoryPath(self.category)

    def getPathName(self):
        return f"{self.category.rstrip('/')}/{self.name}"

    def setName(self, name):
        self.name = name

    def setCategoryPath(self, path):
        self.category = path.getPath()

    # Every Ghidra data type carries a description, empty until one is set
    def getDescription(self):
        return getattr(self, "description", "")

    def setDescription(self, description):
        self.description = description

    # Ghidra compares layouts; here, the same kind of type of the same size
    def isEquivalent(self, other):
        return type(self) is type(other) and self.length == other.length

    def __str__(self):
        return self.name


class CategoryPath(JavaObject):
    def __init__(self, path):
        super().__init__(path)
        self.path = path

    def getPath(self):
        return self.path

    def getName(self):
        return self.path.rstrip("/").rsplit("/", 1)[-1]

    def getParent(self):
        parent = self.path.rstrip("/").rsplit("/", 1)[0]
        return CategoryPath(parent or "/")


class BuiltInDataType(DataType):
    pass


class Pointer(DataType):
    pass


class Array(DataType):
    pass


# A type the program defines, so one with a universal ID unless given one
class DefinedDataType(DataType):
    def __init__(self, name, length = 1, universal_id = None, **kwargs):
        super().__init__(name, length, universal_id = universal_id or next(UNIVERSAL_IDS), **kwargs)


# A typedef's settings, of which only the component offset is modelled
class Settings(JavaObject):
    def __init__(self, component_offset = None):
        super().__init__(component_offset)
        self.component_offset = component_offset


class TypeDef(DefinedDataType):
    def getDefaultSettings(self):
        return Settings()

    # What the typedef chain finally names
    def getBaseDataType(self):
        data_type = self.getDataType()
        while isinstance(data_type, TypeDef):
            data_type = data_type.getDataType()
        return data_type


# How a struct or union is laid out: packing, an explicit #pragma pack value, an
# explicit minimum alignment, machine alignment. Its alignment follows Ghidra's
# rules closely enough: 1 unpacked, else the widest field (to 4) under the pack value.
class CompositeLayout(DataType):
    packed = False
    pack_value = None
    min_align = None
    machine = False
    description = ""
    # Set by the struct or union this is mixed into
    components = ()

    def isPackingEnabled(self):
        return self.packed

    def setPackingEnabled(self, packed):
        self.packed = packed

    def hasExplicitPackingValue(self):
        return self.pack_value is not None

    def getExplicitPackingValue(self):
        return self.pack_value if self.pack_value is not None else -1

    def setExplicitPackingValue(self, value):
        self.pack_value = value

    def hasExplicitMinimumAlignment(self):
        return self.min_align is not None

    def getExplicitMinimumAlignment(self):
        return self.min_align if self.min_align is not None else -1

    def setExplicitMinimumAlignment(self, value):
        self.min_align = value

    def isMachineAligned(self):
        return self.machine

    def setToMachineAligned(self):
        self.machine = True

    def getAlignment(self):
        if self.min_align is not None:
            return self.min_align
        if not self.packed:
            return 1
        widest = max([min(c.getLength(), 4) for c in self.components] or [1])
        return min(widest, self.pack_value) if self.pack_value else widest

    def getDescription(self):
        return self.description

    def setDescription(self, description):
        self.description = description

    # Ghidra compares a composite's layout: its fields and how it is packed
    def layout(self):
        return ([(c.getOffset(), c.getFieldName(), c.getDataType().getName(), c.getLength()) for c in self.components],
                self.packed, self.pack_value, self.min_align, self.machine)

    def isEquivalent(self, other):
        return type(self) is type(other) and self.getLength() == other.getLength() and self.layout() == other.layout()


# Ghidra's interface for both structs and unions
class Composite(DefinedDataType):
    pass


class Structure(Composite):
    pass


class Union(Composite):
    pass


class FunctionDefinition(DefinedDataType):
    pass


class Undefined(BuiltInDataType):
    @staticmethod
    def getUndefinedDataType(size):
        return UndefinedDataType(size)


class UndefinedDataType(Undefined):
    def __init__(self, size):
        super().__init__(f"undefined{size}", size)


class DefaultDataType(DataType):
    pass


DefaultDataType.dataType = DefaultDataType("undefined", 1)


class PointerDataType(Pointer):
    # Also Ghidra's PointerDataType(type, data type manager): a default-sized pointer
    def __init__(self, data_type = None, length = 4):
        name = f"{data_type.getName()} *" if data_type is not None else "pointer"
        super().__init__(name, length if isinstance(length, int) else 4)
        self.data_type = data_type

    def getDataType(self):
        return self.data_type


class ArrayDataType(Array):
    # Also Ghidra's (type, count, element length, data type manager)
    def __init__(self, data_type, count, element_length = None, _data_type_manager = None):
        super().__init__(f"{data_type.getName()}[{count}]", count * (element_length or data_type.getLength()))
        self.data_type = data_type
        self.count = count
        self.element_length = element_length or data_type.getLength()

    def getElementLength(self):
        return self.element_length

    def getDataType(self):
        return self.data_type

    def getNumElements(self):
        return self.count


# Also Ghidra's TypedefDataType(CategoryPath, name, type)
class TypedefDataType(TypeDef):
    def __init__(self, name, data_type, real_type = None, **kwargs):
        if isinstance(name, CategoryPath):
            kwargs["category"] = name.getPath()
            name, data_type = data_type, real_type
        super().__init__(name, data_type.getLength(), **kwargs)
        self.data_type = data_type

    def getDataType(self):
        return self.data_type


# A pointer typedef whose settings carry a component offset: an offset pointer
class PointerTypedef(TypeDef):
    def __init__(self, name, pointee, _pointer_size, _manager, component_offset):
        super().__init__(name, 4)
        self.data_type = PointerDataType(pointee)
        self.component_offset = component_offset

    def getDataType(self):
        return self.data_type

    def getDefaultSettings(self):
        return Settings(self.component_offset)


# ComponentOffsetSettingsDefinition.DEF reads a typedef's component offset
class ComponentOffsetSettingsDefinition(JavaObject):
    class Definition:
        def hasValue(self, settings):
            return settings.component_offset is not None

        def getValue(self, settings):
            return settings.component_offset

    DEF = Definition()


# Ghidra compares layouts; here, the same name and an equivalent type
class DataTypeUtilities(JavaObject):
    @staticmethod
    def isSameOrEquivalentDataType(first, second):
        return first.getName() == second.getName() and first.isEquivalent(second)


class DataTypeComponent(JavaObject):
    # `length` models a field left at its type's old length after the type grew
    def __init__(self, data_type, field_name = None, offset = 0, comment = None, length = None):
        super().__init__(data_type, field_name)
        self.data_type = data_type
        self.field_name = field_name
        self.offset = offset
        self.comment = comment
        self.length = length

    def getDataType(self):
        return self.data_type

    def getFieldName(self):
        return self.field_name

    def getOffset(self):
        return self.offset

    def getLength(self):
        return self.length if self.length is not None else self.data_type.getLength()

    def getComment(self):
        return self.comment


# Its components laid end to end; a (data type, field name) pair names the field
class StructureDataType(CompositeLayout, Structure):
    # Also Ghidra's own StructureDataType(CategoryPath, name, length, dtm): that
    # many undefined bytes, filed under the category
    def __init__(self, name, components = (), length = None, data_type_manager = None, **kwargs):
        if isinstance(name, CategoryPath):
            kwargs["category"] = name.getPath()
            name, components = components, ()
        if length is not None:
            kwargs["length"] = length
        super().__init__(name, **kwargs)
        self.components = []
        offset = 0
        for component in components:
            data_type, field_name = component if isinstance(component, tuple) else (component, None)
            self.components.append(DataTypeComponent(data_type, field_name, offset))
            offset += data_type.getLength()
        # As long as its fields, as Ghidra's is, unless a length was given
        if components and length is None:
            self.length = offset

    def getComponents(self):
        return self.components

    # No undefined filler bytes are modelled, so every component is defined
    def getDefinedComponents(self):
        return self.components

    def getNumComponents(self):
        return len(self.components)

    def getComponent(self, index):
        return self.components[index]

    # The component holding the byte, as Ghidra's does
    def getComponentAt(self, offset):
        for component in self.components:
            if component.getOffset() <= offset < component.getOffset() + component.getLength():
                return component
        return None

    # Into the filler, or over the component holding the byte
    def replaceAtOffset(self, offset, data_type, length, field_name, comment):
        assert length == data_type.getLength()
        replaced = self.getComponentAt(offset)
        component = DataTypeComponent(data_type, field_name, offset, comment)
        if replaced is None:
            self.components = sorted(self.components + [component], key = lambda c: c.getOffset())
        else:
            self.components[self.components.index(replaced)] = component

    # At the end, where a packed struct puts the next field
    def add(self, data_type, length, field_name, comment):
        assert length == data_type.getLength()
        offset = self.length if self.components else 0
        self.components.append(DataTypeComponent(data_type, field_name, offset, comment))
        self.length = offset + length

    # At the offset, growing the struct to reach it; a type of fixed size keeps
    # its own length whatever length is asked for, as Ghidra's does
    # As Ghidra's: every field at or after the offset moves down by the new one's length
    def insertAtOffset(self, offset, data_type, length, field_name, comment):
        width = data_type.getLength() or length
        for existing in self.components:
            if existing.getOffset() >= offset:
                existing.offset += width
        component = DataTypeComponent(data_type, field_name, offset, comment)
        self.components = sorted(self.components + [component], key = lambda c: c.getOffset())
        self.length = self.length + width if offset < self.length else offset + width

    def growStructure(self, amount):
        self.length += amount


class Enum(DefinedDataType):
    pass


# Names and values in the order added. An unsigned enum refuses a negative value, as
# Ghidra's does.
class EnumDataType(Enum):
    # Also Ghidra's EnumDataType(CategoryPath, name, size)
    def __init__(self, name, length = 4, values = None, signed = True, **kwargs):
        if isinstance(name, CategoryPath):
            kwargs["category"] = name.getPath()
            name, length = length, values or 4
            values = None
        super().__init__(name, length, **kwargs)
        self.values = dict(values or {})
        self.signed = signed

    def getNames(self):
        return list(self.values)

    def getValue(self, name):
        return self.values[name]

    def add(self, name, value):
        if name in self.values or (value < 0 and not self.signed):
            raise IllegalArgumentException(f"{name} = {value}")
        self.values[name] = value

    def remove(self, name):
        del self.values[name]


class UnionDataType(CompositeLayout, Union):
    # Also Ghidra's UnionDataType(CategoryPath, name)
    def __init__(self, name, components = (), **kwargs):
        if isinstance(name, CategoryPath):
            kwargs["category"] = name.getPath()
            name, components = components, ()
        super().__init__(name, **kwargs)
        self.components = [DataTypeComponent(dt) for dt in components]
        if self.components:
            self.length = max(c.getLength() for c in self.components)

    def getComponents(self):
        return self.components

    def getDefinedComponents(self):
        return self.components

    # A union's members all start at 0; it is as long as the longest
    def add(self, data_type, length, field_name, comment):
        self.components.append(DataTypeComponent(data_type, field_name, 0, comment))
        self.length = max(self.length if len(self.components) > 1 else 0, length)


class ParameterDefinition(JavaObject):
    def __init__(self, data_type, name = "", comment = None):
        super().__init__(data_type)
        # Ghidra stores DataType.DEFAULT for a null type
        self.data_type = data_type if data_type is not None else DefaultDataType.dataType
        self.name = name
        self.comment = comment

    def getDataType(self):
        return self.data_type

    def getName(self):
        return self.name

    def getComment(self):
        return self.comment


# Ghidra's (name, type, comment) form
class ParameterDefinitionImpl(ParameterDefinition):
    def __init__(self, name, data_type, comment):
        super().__init__(data_type, name, comment)


# arguments: data types, or (type, name) pairs. Also Ghidra's FunctionDefinitionDataType(CategoryPath, name)
class FunctionDefinitionDataType(FunctionDefinition):
    def __init__(self, name, return_type = None, arguments = (), **kwargs):
        if isinstance(name, CategoryPath):
            kwargs["category"] = name.getPath()
            name, return_type = return_type, None
        super().__init__(name, **kwargs)
        self.setReturnType(return_type)
        self.arguments = [ParameterDefinition(*a) if isinstance(a, tuple) else ParameterDefinition(a)
                          for a in arguments]
        self.convention = "unknown"
        self.varargs = False

    def getReturnType(self):
        return self.return_type

    def setReturnType(self, return_type):
        self.return_type = return_type if return_type is not None else DefaultDataType.dataType

    def getArguments(self):
        return self.arguments

    def setArguments(self, arguments):
        self.arguments = list(arguments)

    def getCallingConventionName(self):
        return self.convention

    # Ghidra refuses a convention the program's compiler does not define
    def setCallingConvention(self, name):
        if name not in ("unknown", "__cdecl", "__stdcall", "__thiscall", "__fastcall", "__watcall"):
            raise InvalidInputException(name)
        self.convention = name

    def hasVarArgs(self):
        return self.varargs

    def setVarArgs(self, varargs):
        self.varargs = varargs

    # Ghidra's says it "doesn't allow the description to be changed"; a function
    # definition carries a comment instead
    def setDescription(self, description):
        raise UnsupportedOperationException(f"{type(self).__name__} doesn't allow the description to be changed")

    def getComment(self):
        return getattr(self, "comment", None)

    def setComment(self, comment):
        self.comment = comment


# Records each override where Ghidra's would write it: on the function, at the call
class HighFunctionDBUtil(JavaObject):
    @staticmethod
    def writeOverride(function, call_address, definition):
        function.overrides[call_address] = definition


class AbstractStringDataType(BuiltInDataType):
    TYPE_NAME = ""

    def __init__(self):
        super().__init__(self.TYPE_NAME)


class StringDataType(AbstractStringDataType):
    TYPE_NAME = "string"


class StringUTF8DataType(AbstractStringDataType):
    TYPE_NAME = "string-utf8"


class TerminatedStringDataType(AbstractStringDataType):
    TYPE_NAME = "TerminatedCString"


class TerminatedUnicodeDataType(AbstractStringDataType):
    TYPE_NAME = "TerminatedUnicode"


class TerminatedUnicode32DataType(AbstractStringDataType):
    TYPE_NAME = "TerminatedUnicode32"


class PascalString255DataType(AbstractStringDataType):
    TYPE_NAME = "PascalString255"


class PascalStringDataType(AbstractStringDataType):
    TYPE_NAME = "PascalString"


class PascalUnicodeDataType(AbstractStringDataType):
    TYPE_NAME = "PascalUnicode"


class UnicodeDataType(AbstractStringDataType):
    TYPE_NAME = "unicode"


class Unicode32DataType(AbstractStringDataType):
    TYPE_NAME = "unicode32"


STRING_TYPES = [StringDataType, StringUTF8DataType, TerminatedStringDataType, TerminatedUnicodeDataType,
                TerminatedUnicode32DataType, PascalString255DataType, PascalStringDataType,
                PascalUnicodeDataType, UnicodeDataType, Unicode32DataType]


# --- ghidra.program.model.mem ------------------------------------------------------

class MemoryAccessException(JavaException):
    pass


class InvalidInputException(JavaException):
    pass


class UnsupportedOperationException(JavaException):
    pass


class DuplicateNameException(JavaException):
    pass


class IllegalArgumentException(JavaException):
    pass


# The built-in primitives, by the path Ghidra files them under ("/int")
class BuiltInDataTypeManager(JavaObject):
    instance = None

    def __init__(self):
        super().__init__()
        self.types = {}

    @classmethod
    def getDataTypeManager(cls):
        if cls.instance is None:
            cls.instance = cls()
        return cls.instance

    def getDataType(self, path):
        name = path.lstrip("/")
        if name not in self.types:
            self.types[name] = BuiltInDataType(name)
        return self.types[name]


class IntegerDataType(BuiltInDataType):
    pass


IntegerDataType.dataType = IntegerDataType("int", 4)


# --- ghidra.program.model.listing --------------------------------------------------

# Only its update-type constants are reached for; the program's functions are ghidra_program.Function
class Function(JavaObject):
    class FunctionUpdateType(JavaObject):
        pass


class Register(JavaObject):
    def __init__(self, name, offset, bits = 32):
        super().__init__(name)
        self.name = name
        self.offset = offset
        self.bits = bits

    def getOffset(self):
        return self.offset

    def getBitLength(self):
        return self.bits

    def __str__(self):
        return self.name


class Varnode(JavaObject):
    def __init__(self, address, size, offset = 0):
        super().__init__(address, size)
        self.address = address
        self.size = size
        self.offset = offset

    def getAddress(self):
        return self.address

    def getSize(self):
        return self.size

    def getOffset(self):
        return self.offset


# Where a variable lives. Ghidra's forms: (program, stack offset, size), (program,
# register), (program, address, size); an address in the HASH space is a decompiler
# override. `valid` is False for storage Ghidra would refuse.
class VariableStorage(JavaObject):
    def __init__(self, _program = None, where = None, size = None):
        super().__init__(where, size)
        self.kind = "unassigned"
        self.where = where
        self.storage_size = size or 0
        self.valid = True
        self.varnodes = []
        if isinstance(where, int):
            self.kind = "stack"
        elif isinstance(where, Register):
            self.kind, self.storage_size = "register", where.getBitLength() // 8
        elif isinstance(where, Address):
            self.kind = "hash" if where.space_name == "HASH" else "memory"
            self.varnodes = [Varnode(where, size)]

    def isValid(self):
        return self.valid

    def size(self):
        return self.storage_size

    def getVarnodes(self):
        return list(self.varnodes)


VariableStorage.UNASSIGNED_STORAGE = VariableStorage()


# A parameter, local or return value: its name, type, storage, first use and comment
class Variable(JavaObject):
    def __init__(self, name, data_type, storage = None, first_use = 0, comment = None, ordinal = 0):
        super().__init__(name, data_type)
        self.name = name
        self.data_type = data_type
        self.storage = storage if storage is not None else VariableStorage.UNASSIGNED_STORAGE
        self.first_use = first_use
        self.comment = comment
        self.ordinal = ordinal

    def getName(self):
        return self.name

    def setName(self, name, _source):
        self.name = name

    def getDataType(self):
        return self.data_type

    def getVariableStorage(self):
        return self.storage

    def getFirstUseOffset(self):
        return self.first_use

    def getComment(self):
        return self.comment

    def setComment(self, comment):
        self.comment = comment

    def getOrdinal(self):
        return self.ordinal

    def isStackVariable(self):
        return self.storage.kind == "stack"

    def isRegisterVariable(self):
        return self.storage.kind == "register"

    def isMemoryVariable(self):
        return self.storage.kind == "memory"

    def isCompoundVariable(self):
        return self.storage.kind == "compound"

    def isUniqueVariable(self):
        return self.storage.kind == "unique"

    def getStackOffset(self):
        return self.storage.where

    def getRegister(self):
        return self.storage.where

    def getMinAddress(self):
        return self.storage.where


# Ghidra's forms: (name, type, program) for the convention to place, or (name, type, storage, program)
class ParameterImpl(Variable):
    def __init__(self, name, data_type, storage_or_program, _program = None):
        super().__init__(name, data_type, storage_or_program if _program is not None else None)


class LocalVariableImpl(Variable):
    def __init__(self, name, first_use, data_type, storage, _program):
        super().__init__(name, data_type, storage, first_use)


# --- java.util ---------------------------------------------------------------------

class ArrayList(list, metaclass = JavaClassMeta):
    def isEmpty(self):
        return not self

    def get(self, index):
        return self[index]

    def add(self, item):
        self.append(item)
        return True


# Applies a type at an address through the program's listing, as Ghidra's does
# once it has cleared what was there
class DataUtilities(JavaObject):
    class ClearDataMode(JavaObject):
        pass

    @staticmethod
    def createData(program, address, data_type, length, _stack_pointers, _clear_mode):
        data = program.getListing().createData(address, data_type)
        data.length = length if length > 0 else data.length
        return data


# --- ghidra.app.cmd.function -------------------------------------------------------

# Creates a placeholder-named function at its address, as Ghidra's does once the
# analysis it runs finds a body there
class CreateFunctionCmd(JavaObject):
    def __init__(self, entry):
        super().__init__(entry)
        self.entry = entry

    # Ghidra's two overloads: with or without a task monitor
    def applyTo(self, program, _monitor = None):
        offset = self.entry.getOffset()
        program.getFunctionManager().add(f"FUN_{offset:08x}", offset)
        return True


MODELLED = {
    "ghidra.program.model.address": {"Address": Address, "AddressSet": AddressSet},
    "ghidra.program.model.data": {
        "DataType": DataType, "CategoryPath": CategoryPath, "BuiltInDataType": BuiltInDataType,
        "Pointer": Pointer, "Array": Array, "TypeDef": TypeDef, "Structure": Structure, "Union": Union,
        "Composite": Composite,
        "FunctionDefinition": FunctionDefinition, "Undefined": Undefined, "DefaultDataType": DefaultDataType,
        "PointerDataType": PointerDataType, "ArrayDataType": ArrayDataType, "TypedefDataType": TypedefDataType,
        "DataTypeComponent": DataTypeComponent, "StructureDataType": StructureDataType,
        "Enum": Enum, "EnumDataType": EnumDataType,
        "UnionDataType": UnionDataType, "ParameterDefinition": ParameterDefinition,
        "FunctionDefinitionDataType": FunctionDefinitionDataType,
        "AbstractStringDataType": AbstractStringDataType,
        "BuiltInDataTypeManager": BuiltInDataTypeManager,
        "IntegerDataType": IntegerDataType, "DataUtilities": DataUtilities,
        "ParameterDefinitionImpl": ParameterDefinitionImpl, "PointerTypedef": PointerTypedef,
        "ComponentOffsetSettingsDefinition": ComponentOffsetSettingsDefinition,
        **{string_class.__name__: string_class for string_class in STRING_TYPES},
    },
    "ghidra.program.model.mem": {"MemoryAccessException": MemoryAccessException},
    "ghidra.program.model.pcode": {"HighFunctionDBUtil": HighFunctionDBUtil},
    "ghidra.program.database.data": {"DataTypeUtilities": DataTypeUtilities},
    "ghidra.util.exception": {"InvalidInputException": InvalidInputException,
                              "DuplicateNameException": DuplicateNameException},
    "ghidra.program.model.listing": {"Function": Function, "VariableStorage": VariableStorage,
                                     "ParameterImpl": ParameterImpl, "LocalVariableImpl": LocalVariableImpl},
    "ghidra.app.cmd.function": {"CreateFunctionCmd": CreateFunctionCmd},
    "java.lang": {"IllegalArgumentException": IllegalArgumentException},
    "java.util": {"ArrayList": ArrayList},
}


# A module of the faked API: modelled names first, any other name a placeholder
class FakeModule(types.ModuleType):
    def __init__(self, name):
        super().__init__(name)
        self.__path__ = []
        for attr, value in MODELLED.get(name, {}).items():
            setattr(self, attr, value)

    def __getattr__(self, name):
        if name.startswith("_"):
            raise AttributeError(name)
        base = JavaException if name.endswith("Exception") else JavaObject
        value = JavaClassMeta(name, (base,), {"__module__": self.__name__})
        setattr(self, name, value)
        return value


class FakeFinder(importlib.abc.MetaPathFinder, importlib.abc.Loader):
    def find_spec(self, fullname, path = None, target = None):
        if fullname.split(".")[0] not in FAKED_PACKAGES:
            return None
        return importlib.machinery.ModuleSpec(fullname, self, is_package = True)

    def create_module(self, spec):
        return FakeModule(spec.name)

    def exec_module(self, module):
        pass


FINDER = FakeFinder()


# Makes the faked packages importable; idempotent
def install():
    if FINDER not in sys.meta_path:
        sys.meta_path.insert(0, FINDER)
