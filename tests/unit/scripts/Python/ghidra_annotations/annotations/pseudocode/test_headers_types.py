# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import headers as hd
from ghidra_annotations.annotations.pseudocode import globals as gl
import ghidra_fake as gf

INT = gf.BuiltInDataType("int", 4)
CHAR = gf.BuiltInDataType("char", 1)
UINT = gf.BuiltInDataType("uint", 4)
SHORT = gf.BuiltInDataType("short", 2)


class Struct(gf.StructureDataType):
    """A struct with fields at given offsets: rows of (offset, type, name[, comment]).

    `filler` says Ghidra keeps undefined bytes between them, which it counts as
    components the defined ones do not include.
    """
    def __init__(self, name, rows = (), length = None, filler = False, **kwargs):
        super().__init__(name, **kwargs)
        self.components = [gf.DataTypeComponent(row[1], row[2], row[0], row[3] if len(row) > 3 else None)
                           for row in rows]
        ends = [c.getOffset() + c.getLength() for c in self.components]
        self.length = length if length is not None else max(ends or [0])
        self.filler = filler

    def getNumComponents(self):
        return len(self.components) + (1 if self.filler else 0)

    def getNumDefinedComponents(self):
        return len(self.components)


def union(name, members, **kwargs):
    """A union of (type, name[, comment]) members."""
    u = gf.UnionDataType(name, **kwargs)
    for member in members:
        u.add(member[0], member[0].getLength(), member[1], member[2] if len(member) > 2 else None)
    return u


def layout(dt, packed = False, pack_value = None, min_align = None):
    dt.packed, dt.pack_value, dt.min_align = packed, pack_value, min_align
    return dt


@pytest.fixture(name = "deps")
def fixture_deps(monkeypatch):
    """Dependency collection by name: deps[name] = (direct, pointer)."""
    table = {}
    monkeypatch.setattr(hd, "collect_type_dependencies_with_context",
                        lambda program, dt: tuple(set(s) for s in table.get(dt.getName(), ((), ()))))
    return table


# --- calling conventions --------------------------------------------------------------

def test_the_conventions_come_from_the_repo_cspec_default_first():
    conventions = hd.parse_cspec_calling_conventions()
    assert conventions[0] == "__cdecl" and "__stack_esi" in conventions and len(set(conventions)) == len(conventions)


@pytest.mark.parametrize("xml, expected", [
    ('<compiler_spec><default_proto><prototype name="__a"/></default_proto>'
     '<prototype name="__b"/><prototype name="__a"/><prototype/></compiler_spec>', ["__a", "__b"]),
    # A default with no name, or no prototype at all, adds nothing
    ('<compiler_spec><default_proto><prototype/></default_proto><prototype name="__b"/></compiler_spec>', ["__b"]),
    ('<compiler_spec><default_proto/></compiler_spec>', []),
    ('<compiler_spec/>', []),
])
def test_a_cspec_lists_its_default_then_its_other_conventions(tmp_path, xml, expected):
    (tmp_path / "x.cspec").write_text(xml)
    assert hd.parse_cspec_calling_conventions(str(tmp_path / "x.cspec")) == expected


@pytest.mark.parametrize("text", [None, "<compiler_spec>"])
def test_a_missing_or_broken_cspec_falls_back(tmp_path, text):
    path = tmp_path / "x.cspec"
    if text is not None:
        path.write_text(text)
    assert hd.parse_cspec_calling_conventions(str(path)) == hd.get_fallback_calling_conventions()


# --- type names -------------------------------------------------------------------------

def test_type_names_for_headers():
    s = Struct("S")
    u = union("U", [(INT, "a")])
    td = gf.TypedefDataType("LPS", gf.PointerDataType(s))
    def resolve(dt):
        return hd.resolve_data_type_name_for_headers(None, dt)
    assert resolve(None) == "void"
    assert resolve(gf.DefaultDataType.dataType) == "undefined1"
    assert resolve(td) == "LPS" and resolve(INT) == "int"
    assert resolve(gf.PointerDataType(s)) == "struct S*" and resolve(gf.PointerDataType(u)) == "union U*"
    assert resolve(gf.PointerDataType(gf.PointerDataType(INT))) == "int**"
    assert resolve(gf.ArrayDataType(gf.ArrayDataType(INT, 3), 2)) == "int[2][3]"
    assert resolve(s) == "S"
    # Without typedef names, the typedef is its own name all the same
    assert hd.resolve_data_type_name_for_headers(None, td, preserve_typedefs = False) == "LPS"
    # A name seen on the way down stops the walk there
    assert hd.resolve_data_type_name_for_headers(None, s, seen = {"S"}) == "S"


class NoLength:
    def __init__(self, data_type):
        self.data_type = data_type

    def getDataType(self):
        return self.data_type


class BadLength(NoLength):
    def getLength(self):
        raise ValueError("no length")


def test_a_fixed_length_string_field_is_a_char_array():
    string = gf.BuiltInDataType("string", 1)
    assert hd.resolve_field_type_for_component(None, gf.DataTypeComponent(string, "s", 0, length = 12)) == "char[12]"
    assert hd.resolve_field_type_for_component(None, gf.DataTypeComponent(string, "s", 0, length = 0)) == "string"
    assert hd.resolve_field_type_for_component(None, BadLength(string)) == "string"
    assert hd.resolve_field_type_for_component(None, NoLength(string)) == "string"
    assert hd.resolve_field_type_for_component(None, gf.DataTypeComponent(INT, "i")) == "int"


def test_filler_bytes_become_one_char_array_per_run():
    s = Struct("S", [(4, INT, "a"), (8, INT, None, "note"), (12, INT, "bad name")], length = 20, filler = True)
    assert hd.struct_field_rows(None, s) == [
        ("char[4]", "field_0", 0, None), ("int", "a", 4, None), ("int", "field_8", 8, "note"),
        ("int", "bad_name", 12, None), ("char[4]", "field_16", 16, None)]
    # Without filler, the fields are the components as they are
    plain = Struct("P", [(0, INT, "a")])
    assert hd.struct_components(plain) == plain.getComponents()
    assert hd.struct_field_rows(None, plain) == [("int", "a", 0, None)]


def test_an_unnamed_union_member_is_named_for_its_index():
    u = union("U", [(INT, "a", "note"), (CHAR, None), (SHORT, None)])
    assert hd.union_field_rows(None, u) == [("int", "a", "note"), ("char", "field_1", None), ("short", "field_2", None)]


def test_function_definitions_are_known_by_class():
    assert not hd.is_function_definition_type(None)
    assert hd.is_function_definition_type(gf.FunctionDefinitionDataType("f"))
    assert not hd.is_function_definition_type(INT)


@pytest.mark.parametrize("path, name, expected", [
    ("/Nocturne/Class/Game", "C", ("types/classes", True)),
    ("/Nocturne/Odd/Game", "C", ("types/misc", True)),
    ("/Game", "C", ("system/misc", False)),
    ("/Nocturne/System/ddraw.h", "D", ("system/ddraw", False)),
    ("/Nocturne/System/sub", "D", ("system/misc", False)),
    ("/Nocturne/System", "D", ("system/misc", False)),
    ("/PE", "P", ("system/pe", False)),
    ("/", "IMAGE_DOS_HEADER", ("system/dos", False)),
    ("/", "IMAGE_NT_HEADERS", ("system/pe", False)),
    ("/", "Other", ("system/misc", False)),
    ("/", None, ("system/misc", False)),
    ("/elsewhere", "X", ("system/misc", False)),
    ("/Nocturne/Misc", "X", ("types/misc", False)),
])
def test_categories_map_to_export_paths(path, name, expected):
    assert hd.get_new_export_path(path, gf.DataType(name) if name else None) == expected


@pytest.mark.parametrize("field_type, expected", [
    ("dword:31", "dword f : 31"), ("int[4][2]", "int f[4][2]"), ("Foo::Bar", "Foo::Bar f"), ("int", "int f")])
def test_field_declarations(field_type, expected):
    assert hd.format_field_declaration(field_type, "f") == expected


class NoReturn(gf.DataType):
    """A function definition by class name, with no return or arguments to ask for."""


NoReturn.__name__ = "FunctionDefinition"


class EmptyParam:
    """A parameter with no type."""
    def getDataType(self):
        return None


# --- dependencies -----------------------------------------------------------------------

def test_a_pointer_typedef_needs_only_its_struct_declared(deps):
    s = Struct("S")
    deps["LPPS"] = ({"S", "T"}, {"U"})
    deps["LPI"] = ({"I"}, set())
    deps["PLAIN"] = ({"S"}, {"S", "V"})
    lpps = gf.TypedefDataType("LPPS", gf.PointerDataType(gf.PointerDataType(s)))
    assert hd.collect_type_dependencies(None, lpps) == (set(), {"U", "S"})
    assert hd.collect_type_dependencies(None, gf.TypedefDataType("LPI", gf.PointerDataType(INT))) == ({"I"}, set())
    # Direct wins over pointer
    assert hd.collect_type_dependencies(None, gf.TypedefDataType("PLAIN", s)) == ({"S"}, {"V"})
    assert hd.collect_type_dependencies(None, Struct("PLAIN")) == ({"S"}, {"V"})


def test_prefixes_and_unique_parameter_names():
    assert [hd.strip_type_prefix(n) for n in ("struct A", "union B", "C")] == ["A", "B", "C"]
    used = set()
    assert [hd.make_unique_param_name(n, used) for n in ("a", "a", "a", "b")] == ["a", "a1", "a2", "b"]


def test_dependency_lines_declare_pointer_deps_and_include_direct_ones():
    paths = {"A": "types/classes/A.h", "U": "types/unions/U.h", "F": "types/funcdefs/F.h", "D": "types/structs/D.h",
             "Self": "types/classes/Self.h"}
    lines = hd.generate_dependency_includes(
        "Self", {"D", "struct Self", "Missing"}, {"struct A", "union U", "F", "Ext", "Self", "D", "struct D"}, paths, True)
    assert lines == ["", "// Forward declarations", "struct A;", "struct Ext;", "union U;",
                     "", "// Dependencies", '#include "system/basetypes.h"', '#include "types/structs/D.h"']
    assert hd.generate_dependency_includes("X", set(), set(), {}) == []
    assert hd.generate_dependency_includes("X", {"A"}, set(), paths) == ["", "// Dependencies", '#include "types/classes/A.h"']


def test_a_header_is_written_with_the_notice_and_a_failure_is_logged(tmp_path, monkeypatch):
    hd.write_header_file(str(tmp_path / "a.h"), "#pragma once")
    assert (tmp_path / "a.h").read_text().endswith("#pragma once\n")
    logged = []
    monkeypatch.setattr(hd, "log_info", logged.append)
    def disk_full(*_args):
        raise OSError("full")

    monkeypatch.setattr(hd, "write_if_changed", disk_full)
    hd.write_header_file(str(tmp_path / "b.h"), "x")
    assert logged == [f"Failed to write header file {tmp_path / 'b.h'}: full"]


# --- packing --------------------------------------------------------------------------------

class Misbehaving(gf.DataType):
    def isPackingEnabled(self):
        raise RuntimeError("no packing")

    def getAlignment(self):
        raise RuntimeError("no alignment")


class ExplicitFails(gf.DataType):
    def isPackingEnabled(self):
        return True

    def getAlignment(self):
        return 4

    def getExplicitPackingValue(self):
        raise RuntimeError("no value")


@pytest.mark.parametrize("dt, expected", [
    (layout(Struct("S", [(0, INT, "a")])), (1, None)),
    (layout(Struct("S", [(0, INT, "a")]), packed = True), (None, None)),
    (layout(Struct("S", [(0, INT, "a")]), packed = True, pack_value = 2), (2, None)),
    (layout(Struct("S", [(0, INT, "a")]), packed = True, pack_value = 1, min_align = 4), (1, "__attribute__((aligned(4)))")),
    (layout(Struct("S", [(0, CHAR, "a")]), packed = True), (1, None)),
    (layout(Struct("S", [(0, INT, "a")]), min_align = 0), (None, None)),
    (Misbehaving("m"), (None, None)),
    (ExplicitFails("e"), (None, None)),
])
def test_ghidra_packing_becomes_a_pragma_and_alignment(dt, expected):
    assert hd._ghidra_packing_and_alignment(dt) == expected


class Memory:
    def __init__(self, words, blocks = True):
        self.words = words
        self.blocks = blocks

    def getInt(self, address):
        return self.words.get(address.getOffset(), 0)

    def getBlock(self, address):
        if self.blocks is None or address.getOffset() >= 0x9000:
            return None
        return Block(address.getOffset() < 0x8000)


class Block:
    def __init__(self, initialized):
        self.initialized = initialized

    def isInitialized(self):
        return self.initialized


class Data:
    def __init__(self, offset, data_type):
        self.address = gf.Address(offset)
        self.data_type = data_type

    def getAddress(self):
        return self.address

    def getDataType(self):
        return self.data_type


class Program:
    def __init__(self, data, words):
        self.data = data
        self.memory = Memory(words)

    def getMemory(self):
        return self.memory

    def getListing(self):
        return self

    def getDefinedData(self, forward):
        assert forward
        return self.data


class Manager:
    def __init__(self, program):
        self.program = program

    def getProgram(self):
        return self.program


def packed(name, rows):
    return layout(Struct(name, rows), packed = True, pack_value = 1)


def test_a_packed_struct_holding_a_symbol_at_a_misaligned_64bit_offset_drops_its_packing(monkeypatch):
    ptr = gf.PointerDataType(INT)
    hazard = packed("Hazard", [(0, CHAR, "c"), (1, ptr, "p")])
    unused = packed("Unused", [(0, CHAR, "c"), (1, ptr, "p")])
    null = packed("Null", [(0, CHAR, "c"), (1, ptr, "p")])
    aligned = packed("Aligned", [(0, ptr, "p")])
    # Naturally aligned: no packing, so no hazard
    natural = layout(Struct("Natural", [(0, CHAR, "c"), (4, ptr, "p")]), packed = True)
    outer = Struct("Outer", [(0, PointerTypedef("TH", hazard), "h"), (5, INT, "i")])
    nested = Struct("Nested", [(0, outer, "o")])
    # A struct holding itself by array stops at the cycle guard
    looped = Struct("Loop", [(0, CHAR, "c")])
    looped.components.append(gf.DataTypeComponent(gf.ArrayDataType(looped, 1, 1), "self", 1))
    data = [Data(0x100, gf.ArrayDataType(hazard, 2)), Data(0x200, null), Data(0x300, nested), Data(0x400, aligned),
            Data(0x500, INT), Data(0x600, looped), Data(0x700, natural), Data(0x8100, unused), Data(0x9100, unused)]
    words = {0x101: 0x5000, 0x201: 0}
    monkeypatch.setattr(gl, "resolve_pointer_to_symbol", lambda program, value: ("sym", 0) if value == 0x5000 else (None, 0))
    program = Program(data, words)
    found = hd._find_misaligned_pointer_structs(program)
    assert found == {"Hazard"}

    # The struct asks its manager for the program, once per program
    hd._MISALIGNED_POINTER_STRUCTS.clear()
    hazard.getDataTypeManager = lambda: Manager(program)
    calls = []
    real = hd._find_misaligned_pointer_structs
    monkeypatch.setattr(hd, "_find_misaligned_pointer_structs", lambda p: calls.append(p) or real(p))
    assert hd._packing_and_alignment(hazard) == (None, None)
    assert hd._packing_and_alignment(hazard) == (None, None) and len(calls) == 1
    other = Program([], {})
    hazard.getDataTypeManager = lambda: Manager(other)
    assert hd._packing_and_alignment(hazard) == (1, None) and calls == [program, other]
    # A struct with no manager, and a union, keep their packing
    assert hd._packing_and_alignment(packed("Loose", [(0, CHAR, "c")])) == (1, None)
    assert hd._packing_and_alignment(layout(union("U", [(INT, "a")]), packed = True, pack_value = 2)) == (2, None)


class SettingsDef:
    def __init__(self, pointer_type):
        self.pointer_type = pointer_type

    def getType(self, settings):
        return self.pointer_type


class PointerTypedef(gf.TypedefDataType):
    def isPointer(self):
        return isinstance(self.getDataType(), gf.Pointer)


def test_an_image_base_offset_pointer_is_not_an_address(monkeypatch):
    class Definition:
        DEF = SettingsDef("IBO32")
    monkeypatch.setattr(hd, "PointerTypeSettingsDefinition", Definition)
    monkeypatch.setattr(hd, "PointerType", type("PointerType", (), {"DEFAULT": "DEFAULT"}))
    ibo = PointerTypedef("IBO", gf.PointerDataType(INT))
    assert not hd._is_address(ibo)
    Definition.DEF = SettingsDef("DEFAULT")
    assert hd._is_address(ibo)
    assert hd._is_address(PointerTypedef("TT", PointerTypedef("T", gf.PointerDataType(INT))))
    assert not hd._is_address(PointerTypedef("TI", INT))
    assert hd._strip_typedefs(PointerTypedef("TI", INT)) is INT


def test_64bit_sizes_and_alignment(monkeypatch):
    monkeypatch.setattr(hd, "_is_address", lambda dt: isinstance(dt, gf.PointerDataType))
    memo = {}
    def size(dt):
        return hd._lp64_size_and_alignment(dt, memo)
    assert size(gf.TypedefDataType("size_t", UINT)) == (8, 8)
    assert size(gf.PointerDataType(INT)) == (8, 8)
    # A pointer that is not an address keeps its width
    assert size(gf.TypedefDataType("IBO", SomeIbo())) == (4, 4)
    assert size(gf.BuiltInDataType("long", 4)) == (8, 8) and size(gf.BuiltInDataType("ulong", 4)) == (8, 8)
    assert size(gf.ArrayDataType(SHORT, 3)) == (6, 2)
    assert [size(gf.BuiltInDataType("t", n)) for n in (0, 1, 2, 3, 4, 8, 10, 16)] == [
        (0, 1), (1, 1), (2, 2), (3, 1), (4, 4), (8, 8), (10, 2), (16, 8)]
    # Naturally aligned, a pointer after a char moves to 8; Ghidra's unpacked
    # struct is pack(1) and does not
    s = layout(Struct("S", [(0, CHAR, "c"), (1, gf.PointerDataType(INT), "p")]), packed = True)
    assert size(s) == (16, 8) and memo["/S"] == (16, 8)
    assert size(Struct("U1", [(0, CHAR, "c"), (1, gf.PointerDataType(INT), "p")])) == (9, 1)
    # Packing caps a field's alignment
    p = layout(Struct("P", [(0, CHAR, "c"), (1, gf.PointerDataType(INT), "p")]), packed = True, pack_value = 1)
    assert hd._lp64_aggregate_layout(p, {})[:2] == (9, 1)
    u = layout(union("U", [(CHAR, "c"), (gf.PointerDataType(INT), "p")]), packed = True)
    assert hd._lp64_aggregate_layout(u, {})[:2] == (8, 8)
    # Filler bytes keep their width, between fields and after them
    f = Struct("F", [(2, CHAR, "c"), (4, INT, "i")], length = 12, filler = True)
    size_f, align_f, placed = hd._lp64_aggregate_layout(f, {})
    assert (size_f, align_f) == (12, 1) and [off for _, off in placed] == [2, 4]


class SomeIbo(gf.Pointer):
    def __init__(self):
        super().__init__("ibo", 4)


# --- individual headers -----------------------------------------------------------------

def test_a_struct_header(deps):
    s = layout(Struct("S", [(0, INT, "a", "first"), (4, gf.ArrayDataType(CHAR, 2), "b")]),
               packed = True, pack_value = 1, min_align = 4)
    s.setDescription("A struct")
    deps["S"] = ({"T"}, set())
    text = hd.generate_individual_struct_header(None, s, {"T": "types/structs/T.h"})
    assert text.split("\n") == [
        "#pragma once", "", "// Dependencies", '#include "system/basetypes.h"', '#include "types/structs/T.h"',
        "", "// Structure: S", "// A struct", "// Ghidra size: 0x6 (6 bytes)", "#pragma pack(push, 1)",
        "typedef struct S {", "    int a; // 0x0, first", "    char b[2]; // 0x4",
        "} __attribute__((aligned(4))) S;", "#pragma pack(pop)", ""]
    plain = hd.generate_individual_struct_header(None, layout(Struct("P", [(0, INT, "a")]), packed = True))
    assert "#pragma pack" not in plain and "} P;" in plain and "Dependencies" not in plain


def test_a_union_header(deps):
    u = layout(union("U", [(INT, "a", "note"), (CHAR, None)]), packed = True, pack_value = 1, min_align = 4)
    u.setDescription("A union")
    text = hd.generate_individual_union_header(None, u, {})
    assert text.split("\n") == [
        "#pragma once", "", "// Dependencies", '#include "system/basetypes.h"', "", "// Union: U", "// A union",
        "#pragma pack(push, 1)", "typedef union U {", "    int a; // note", "    char field_1;",
        "} __attribute__((aligned(4))) U;", "#pragma pack(pop)", ""]
    plain = hd.generate_individual_union_header(None, layout(union("V", [(INT, "a")]), packed = True))
    assert "#pragma pack" not in plain and "} V;" in plain


@pytest.mark.parametrize("length, typedef_type", [(1, "uchar"), (2, "ushort"), (4, "int"), (8, "long long")])
def test_an_enum_header_is_typedefed_by_its_size(length, typedef_type):
    e = gf.EnumDataType("E", length, {"A": 0, "B": 255, "C": -2})
    text = hd.generate_individual_enum_header(None, e)
    assert "    A = 0x0,\n    B = 0xFF,\n    C = -2\n};\ntypedef %s E;" % typedef_type in text
    assert ('#include "system/basetypes.h"' in text) == (typedef_type != "int")
    e.setDescription("An enum")
    assert "// Enum: E\n// An enum\n" in hd.generate_individual_enum_header(None, e)


# --- adjusted pointer designators ---------------------------------------------------------

def test_member_designators_name_the_deepest_field():
    inner = Struct("Inner", [(0, INT, "x"), (4, INT, "y")])
    holder = Struct("Holder", [(0, gf.TypedefDataType("TI", inner), "in"), (8, gf.ArrayDataType(inner, 2), "arr"),
                               (24, gf.ArrayDataType(SHORT, 2), "shorts"), (28, INT, "class"), (32, INT, None)],
                    length = 40)
    def design(dt, off):
        return hd.build_member_designator(dt, off)
    assert design(holder, 0) == (".in", 0)
    assert design(holder, 4) == (".in.y", 0)
    assert design(holder, 6) == (".in.y", 2)
    assert design(holder, 8) == (".arr", 0)
    assert design(holder, 20) == (".arr[1].y", 0)
    assert design(holder, 26) == (".shorts[1]", 0)
    assert design(holder, 27) == (".shorts[1]", 1)
    # The field is named as the header declares it
    assert design(holder, 30) == ("._class", 2)
    # Padding, an unnamed field, and an offset past the end have no path
    assert design(holder, 32) is None and design(holder, 36) is None
    # Through a union, the first member long enough
    u = union("U", [(SHORT, "s"), (inner, "in")])
    assert design(u, 6) == (".in.y", 2)


class NoComponents(gf.DataType):
    pass


class ZeroStride(gf.ArrayDataType):
    """An array of zero-length elements, as Ghidra's of an empty struct."""
    def getElementLength(self):
        return 0


def test_designators_through_arrays_and_dead_ends():
    inner = Struct("Inner", [(0, INT, "x")], length = 8)
    assert hd.build_member_designator(gf.ArrayDataType(inner, 2), 12) is None
    assert hd.build_member_designator(gf.ArrayDataType(inner, 2), 16) is None
    assert hd.build_member_designator(ZeroStride(INT, 2), 0) is None
    nested = gf.ArrayDataType(gf.ArrayDataType(SHORT, 2), 2)
    assert hd.build_member_designator(nested, 6) == ("[1][1]", 0)
    holder = Struct("H", [(0, inner, "in")])
    assert hd.build_member_designator(holder, 4) is None
    assert hd.build_member_designator(INT, 0) is None
    assert hd._containing_component(NoComponents("n"), 0) is None


class Manager2:
    def __init__(self, types):
        self.types = types

    def getAllDataTypes(self):
        return self.types

    def getDataTypeManager(self):
        return self


def test_an_adjusted_pointer_typedef_is_a_struct_that_recovers_its_base(deps):
    inner = Struct("Inner", [(0, INT, "x"), (4, INT, "y")])
    base = Struct("Base", [(0, INT, "vt"), (4, gf.ArrayDataType(inner, 2), "parts"), (20, INT, "z")])
    program = Manager2([INT, base])
    ptr = gf.TypedefDataType("Base_ptr_4", gf.PointerDataType(base))
    ptr.setDescription("adjusted")
    text = hd.generate_individual_typedef_header(program, ptr, {"Base": "types/classes/Base.h"})
    assert "struct Inner;" in text and "// Points to Inner at offset 0x4 in Base" in text and "// adjusted" in text
    assert '#include "types/classes/Base.h"' in text
    assert "    Base* adj() const { return (Base*)((char*)_raw - offsetof(Base, parts)); }" in text
    assert "    Inner* operator->() const { return (Inner*)_raw; }" in text
    # Inside a field: the path and the bytes past it
    mid = hd.generate_individual_typedef_header(program, gf.TypedefDataType("Base_ptr_22", gf.PointerDataType(base)),
                                                {"Base": "types/classes/Base.h"})
    assert "(offsetof(Base, z) + 2)" in mid and "// Points to Base at offset 0x16 in Base" in mid
    assert "struct Inner;" not in mid
    # No header for the base, or no field at the offset: the 32-bit literal
    for name, paths in (("Base_ptr_4", {}), ("Base_ptr_99", {"Base": "types/classes/Base.h"})):
        loose = hd.generate_individual_typedef_header(program, gf.TypedefDataType(name, gf.PointerDataType(base)), paths)
        assert "/* FIXME(64bit): unresolved field path, 32-bit-only offset */" in loose
    # No such struct at all
    gone = hd.generate_individual_typedef_header(Manager2([]), gf.TypedefDataType("Gone_ptr_4", gf.PointerDataType(base)))
    assert "FIXME(64bit)" in gone and "// Points to Gone at offset 0x4 in Gone" in gone


def test_a_plain_typedef(deps):
    td = gf.TypedefDataType("LPI", gf.PointerDataType(INT))
    td.setDescription("a typedef")
    assert hd.generate_individual_typedef_header(None, td).split("\n") == [
        "#pragma once", "", "// Typedef: LPI", "// a typedef", "typedef int* LPI;", ""]
    # A _ptr_N name over something that is not a struct pointer stays a typedef
    assert "typedef int* X_ptr_4;" in hd.generate_individual_typedef_header(
        None, gf.TypedefDataType("X_ptr_4", gf.PointerDataType(INT)))


def test_a_function_definition_header_declares_structs_instead_of_including_them(deps):
    s = Struct("S")
    u = union("U", [(INT, "a")])
    f = gf.FunctionDefinitionDataType("F", gf.PointerDataType(s), [(gf.PointerDataType(u), "this"), (INT, "a"), (gf.PointerDataType(INT), "a"), (None, "")])
    f.setComment("does f")
    deps["F"] = ({"struct S", "E", "Free"}, {"union U", "C", "Loose"})
    paths = {"S": "types/structs/S.h", "C": "types/classes/C.h", "E": "types/enums/E.h", "U": "types/unions/U.h"}
    text = hd.generate_individual_function_definition_header(None, f, paths)
    assert text.split("\n") == [
        "#pragma once", "", "// Forward declarations", "struct Loose;", "union U;",
        "", "// Dependencies", '#include "system/basetypes.h"', '#include "types/enums/E.h"',
        "", "// Forward declarations", "struct S;", "union U;",
        "", "// Function Definition: F", "// does f", "typedef struct S* F(union U* _this, int a, int* a1, undefined1 param);", ""]
    g = gf.FunctionDefinitionDataType("G", INT)
    assert hd.generate_individual_function_definition_header(None, g).split("\n")[-2] == "typedef int G(void);"
    # One with no return type or arguments to ask for is void(void)
    bare = NoReturn("H")
    bare.getComment = lambda: None
    assert "typedef void H(void);" in hd.generate_individual_function_definition_header(None, bare)


def test_a_parameter_without_a_type_is_void():
    f = gf.FunctionDefinitionDataType("F", INT)
    f.arguments = [EmptyParam()]
    assert "typedef int F(void param);" in hd.generate_individual_function_definition_header(None, f)


# --- system header ordering -------------------------------------------------------------

def test_function_definitions_declare_structs_they_meet_first(deps):
    s = Struct("S")
    later = Struct("Later")
    f = gf.FunctionDefinitionDataType("F")
    deps["F"] = (set(), {"struct S", "struct Later", "E", "Ext"})
    types = [s, f, later, gf.EnumDataType("E")]
    # In the file: a struct declared before its first use needs nothing, an enum is not declarable
    assert hd.collect_forward_declarations_needed(None, types, {"S", "F", "Later", "E"}) == {"Later", "Ext"}
    assert hd.collect_forward_declarations_needed(None, types, {"F"}) == {"S", "Later", "E", "Ext"}


def test_types_are_ordered_by_their_direct_dependencies(deps):
    a, b, c = Struct("A"), Struct("B"), Struct("C")
    f, g = gf.FunctionDefinitionDataType("F"), gf.FunctionDefinitionDataType("G")
    deps["A"] = ({"struct B", "Outside", "A"}, set())
    deps["F"] = ({"G", "C"}, set())
    def names(types):
        return [t.getName() for t in types]
    assert names(hd.topological_sort_types(None, [a, b, c, f, g], {"A", "B", "C", "F", "G"})) == ["B", "A", "C", "F", "G"]
    # A type waits for all its dependencies; one named in the file but not sorted holds nothing up
    deps["D"] = ({"A", "B", "Ghost"}, set())
    d = Struct("D")
    assert names(hd.topological_sort_types(None, [d, a, b], {"A", "B", "D", "Ghost"})) == ["B", "A", "D"]
    # A cycle is left in the order given
    deps["B"] = ({"A"}, set())
    assert names(hd.topological_sort_types(None, [a, b], {"A", "B"})) == ["A", "B"]


def test_system_type_definitions():
    def define(dt):
        return hd.generate_type_definition(None, dt)
    e = gf.EnumDataType("E", 1, {"A": -1})
    e.setDescription("enum")
    assert define(e) == ["", "// Enum: E", "// enum", "enum {", "    A = -1", "};", "typedef uchar E;"]
    assert define(gf.EnumDataType("F", 4, {"B": 1}))[1:3] == ["// Enum: F", "enum {"]
    td = gf.TypedefDataType("T", INT)
    td.setDescription("td")
    assert define(td) == ["", "// Typedef: T", "// td", "typedef int T;"]
    assert define(gf.TypedefDataType("V", INT)) == ["", "// Typedef: V", "typedef int V;"]
    u = layout(union("U", [(INT, "a", "c")]), packed = True, pack_value = 1, min_align = 4)
    u.setDescription("u")
    assert define(u) == ["", "// Union: U", "// u", "#pragma pack(push, 1)", "typedef union U {", "    int a; // c",
                         "} __attribute__((aligned(4))) U;", "#pragma pack(pop)"]
    assert define(layout(union("V", [(INT, "a")]), packed = True))[-1] == "} V;"
    va = Struct("va_list_t", [(0, gf.ArrayDataType(gf.PointerDataType(CHAR), 1), "value")])
    va.setDescription("va")
    assert define(va)[3:5] == ["#pragma pack(push, 1)", "typedef struct va_list_t {"]
    s = layout(Struct("S", [(0, INT, "a", "c")]), packed = True, pack_value = 1, min_align = 4)
    s.setDescription("s")
    assert define(s) == ["", "// Structure: S", "// s", "#pragma pack(push, 1)", "typedef struct S {", "    int a; // c",
                         "} __attribute__((aligned(4))) S;", "#pragma pack(pop)"]
    assert define(layout(Struct("P", [(0, INT, "a")]), packed = True))[-1] == "} P;"
    f = gf.FunctionDefinitionDataType("F", INT, [(INT, "this"), (INT, "this"), (None, "")])
    f.setComment("f")
    assert define(f) == ["", "// Function Definition: F", "// f", "typedef int F(int _this, int _this1, undefined1 param);"]
    g = gf.FunctionDefinitionDataType("G", INT)
    g.arguments = [EmptyParam()]
    assert define(g)[-1] == "typedef int G(void param);"
    bare = NoReturn("H")
    assert define(bare) == ["", "// Function Definition: H", "typedef void H(void);"]
    assert define(INT) == []
