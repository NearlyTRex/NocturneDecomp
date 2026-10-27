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

    def getOffset(self):
        return self.offset

    def add(self, displacement):
        return Address(self.offset + displacement, self.size)

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


class AddressSet(JavaObject):
    pass


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

    def __str__(self):
        return self.name


class CategoryPath(JavaObject):
    def __init__(self, path):
        super().__init__(path)
        self.path = path

    def getPath(self):
        return self.path


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


class TypeDef(DefinedDataType):
    pass


class Structure(DefinedDataType):
    pass


class Union(DefinedDataType):
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
    def __init__(self, data_type = None, length = 4):
        name = f"{data_type.getName()} *" if data_type is not None else "pointer"
        super().__init__(name, length)
        self.data_type = data_type

    def getDataType(self):
        return self.data_type


class ArrayDataType(Array):
    def __init__(self, data_type, count, element_length = None):
        super().__init__(f"{data_type.getName()}[{count}]", count * (element_length or data_type.getLength()))
        self.data_type = data_type
        self.count = count

    def getDataType(self):
        return self.data_type

    def getNumElements(self):
        return self.count


class TypedefDataType(TypeDef):
    def __init__(self, name, data_type, **kwargs):
        super().__init__(name, data_type.getLength(), **kwargs)
        self.data_type = data_type

    def getDataType(self):
        return self.data_type


class DataTypeComponent(JavaObject):
    def __init__(self, data_type, field_name = None, offset = 0, comment = None):
        super().__init__(data_type, field_name)
        self.data_type = data_type
        self.field_name = field_name
        self.offset = offset
        self.comment = comment

    def getDataType(self):
        return self.data_type

    def getFieldName(self):
        return self.field_name

    def getOffset(self):
        return self.offset

    def getLength(self):
        return self.data_type.getLength()

    def getComment(self):
        return self.comment


# Its components laid end to end; a (data type, field name) pair names the field
class StructureDataType(Structure):
    def __init__(self, name, components = (), **kwargs):
        super().__init__(name, **kwargs)
        self.components = []
        offset = 0
        for component in components:
            data_type, field_name = component if isinstance(component, tuple) else (component, None)
            self.components.append(DataTypeComponent(data_type, field_name, offset))
            offset += data_type.getLength()

    def getComponents(self):
        return self.components

    # The component holding the byte, as Ghidra's does
    def getComponentAt(self, offset):
        for component in self.components:
            if component.getOffset() <= offset < component.getOffset() + component.getLength():
                return component
        return None

    def replaceAtOffset(self, offset, data_type, length, field_name, comment):
        index = self.components.index(self.getComponentAt(offset))
        self.components[index] = DataTypeComponent(data_type, field_name, offset, comment)
        assert length == data_type.getLength()


class Enum(DefinedDataType):
    pass


# Names and values in the order added. An unsigned enum refuses a negative value, as
# Ghidra's does.
class EnumDataType(Enum):
    def __init__(self, name, length = 4, values = None, signed = True, **kwargs):
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

    def setName(self, name):
        self.name = name


class UnionDataType(Union):
    def __init__(self, name, components = (), **kwargs):
        super().__init__(name, **kwargs)
        self.components = [DataTypeComponent(dt) for dt in components]

    def getComponents(self):
        return self.components


class ParameterDefinition(JavaObject):
    def __init__(self, data_type):
        super().__init__(data_type)
        self.data_type = data_type

    def getDataType(self):
        return self.data_type


class FunctionDefinitionDataType(FunctionDefinition):
    def __init__(self, name, return_type = None, arguments = (), **kwargs):
        super().__init__(name, **kwargs)
        self.return_type = return_type
        self.arguments = [ParameterDefinition(dt) for dt in arguments]

    def getReturnType(self):
        return self.return_type

    def getArguments(self):
        return self.arguments


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


MODELLED = {
    "ghidra.program.model.address": {"Address": Address, "AddressSet": AddressSet},
    "ghidra.program.model.data": {
        "DataType": DataType, "CategoryPath": CategoryPath, "BuiltInDataType": BuiltInDataType,
        "Pointer": Pointer, "Array": Array, "TypeDef": TypeDef, "Structure": Structure, "Union": Union,
        "FunctionDefinition": FunctionDefinition, "Undefined": Undefined, "DefaultDataType": DefaultDataType,
        "PointerDataType": PointerDataType, "ArrayDataType": ArrayDataType, "TypedefDataType": TypedefDataType,
        "DataTypeComponent": DataTypeComponent, "StructureDataType": StructureDataType,
        "Enum": Enum, "EnumDataType": EnumDataType,
        "UnionDataType": UnionDataType, "ParameterDefinition": ParameterDefinition,
        "FunctionDefinitionDataType": FunctionDefinitionDataType,
        "AbstractStringDataType": AbstractStringDataType,
        "BuiltInDataTypeManager": BuiltInDataTypeManager,
        **{string_class.__name__: string_class for string_class in STRING_TYPES},
    },
    "ghidra.program.model.mem": {"MemoryAccessException": MemoryAccessException},
    "java.lang": {"IllegalArgumentException": IllegalArgumentException},
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
