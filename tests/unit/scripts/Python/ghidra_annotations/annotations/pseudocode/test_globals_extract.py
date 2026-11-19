# Imports
import struct

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import globals as gl
import ghidra_fake
import ghidra_program

Address = ghidra_fake.Address
BuiltIn = ghidra_fake.BuiltInDataType
Pointer = ghidra_fake.PointerDataType
Array = ghidra_fake.ArrayDataType
Struct = ghidra_fake.StructureDataType
Typedef = ghidra_fake.TypedefDataType
INT = BuiltIn("int", 4)
UINT = BuiltIn("uint", 4)
CHAR = BuiltIn("char", 1)
UNREADABLE = object()


def packed(fmt, *values):
    """The little-endian bytes of values in struct's format: packed("ii", 1, -1)."""
    return list(struct.pack("<" + fmt, *values))


class World:
    """A program holding data items, each in a memory block of its own, and what extraction makes of them."""

    def __init__(self):
        self.program = ghidra_program.Program()
        self.next = 0x630000

    def label(self, address, name):
        self.program.symbol_table.createLabel(Address(address), name, "USER_DEFINED")

    def add(self, data_type, data = None, value = None, name = "g_x"):
        """An item at the next address: data its bytes (zeros by default, UNREADABLE for none)."""
        address = self.next
        self.next += 0x1000
        if name:
            self.label(address, name)
        if data is not UNREADABLE:
            raw = bytes(data) if data is not None else bytes(data_type.getLength())
            self.program.memory.add_block("data", address, raw.ljust(data_type.getLength(), b"\0"))
        self.program.listing.add_data(address, data_type, value)
        return address

    def string(self, address, text):
        self.program.listing.add_data(address, ghidra_fake.TerminatedStringDataType(), text)

    def extract(self, **kwargs):
        globals_list, constants = gl.extract_globals_and_constants(self.program, **kwargs)
        return {e["name"]: ("global", e) for e in globals_list} | {e["name"]: ("constant", e) for e in constants}


def entry(data_type, data = None, value = None, name = "g_x", world = None, **kwargs):
    world = world or World()
    world.add(data_type, data, value, name)
    return world.extract(**kwargs)[gl.sanitize_c_identifier(name)][1]


def initializer(*args, **kwargs):
    return entry(*args, **kwargs)["initializer"]


# --- what is extracted -----------------------------------------------------------------

@pytest.mark.parametrize("name", ["FUN_00630000", "LAB_x", "LOOP_x", "IMAGE_DOS_HEADER", "SWITCH_x", "PTR_x"])
def test_code_labels_and_pointer_labels_are_not_globals(name):
    world = World()
    world.add(INT, packed("i", 1), name = name)
    assert world.extract() == {}


def test_an_unnamed_item_is_named_by_its_address_and_records_where_it_is():
    world = World()
    world.add(INT, packed("i", 5), name = None)
    assert world.extract()["DAT_00630000"][1] == {
        "name": "DAT_00630000", "type": "int", "address": "00630000", "size": 4, "is_initialized": True,
        "initializer": "0x5", "comment": None}


# --- bytes without a value ------------------------------------------------------------

def components(name, *fields, length = None):
    struct_type = Struct(name, list(fields))
    if length is not None:
        struct_type.length = length
    return struct_type


@pytest.mark.parametrize("data_type, data, type_name, text", [
    (Struct("GUID", length = 16), list(range(16)), "GUID",
     "{0x03020100, 0x0504, 0x0706, {0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F}}"),
    (Struct("IconResource", length = 4), [1, 2, 3, 4], "BYTE[4]", "{0x01, 0x02, 0x03, 0x04}"),
    (Struct("IconResource", length = 17), list(range(1, 18)), "BYTE[17]",
     "{\n    0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10,\n    0x11\n}"),
    (components("VS_VERSION_INFO", (INT, "length")), packed("i", 5), "VS_VERSION_INFO", "{.length = 0x00000005}"),
    (Struct("VS_VERSION_INFO", length = 4), [1, 0, 0, 0], "VS_VERSION_INFO", "{}"),
    (components("SFoo", (INT, "a")), packed("i", 5), "SFoo", "{.a = 0x00000005}"),
    (Struct("SBlob", length = 8), packed("ii", 1, 2), "SBlob", "{0x00000001, 0x00000002}"),
    (Struct("SOdd", length = 3), [1, 2, 3], "SOdd", "{0} /* raw: 0x01, 0x02, 0x03 */"),
    (ghidra_fake.UndefinedDataType(4), packed("i", 5), "undefined4", "0x00000005"),
    (Typedef("HANDLE", Pointer(None)), packed("i", 5), "HANDLE", "(HANDLE)0x5"),
    (Pointer(CHAR), packed("i", 0x640000), "char*", "(char*)0x640000"),
    (INT, packed("i", 5), "int", "0x5"),
])
def test_bytes_without_a_value_are_read_by_their_type(data_type, data, type_name, text):
    item = entry(data_type, data)
    assert (item["type"], item["initializer"], item["is_initialized"]) == (type_name, text, True)


@pytest.mark.parametrize("data_type, data, text", [
    (Array(Array(CHAR, 3), 2), list(b"ab\0cd\0"), '{"ab", "cd"}'),
    (Array(Array(CHAR, 2), 2), [1, 2, 3, 4], "{0x01, 0x02, 0x03, 0x04}"),
    (Array(CHAR, 4), list(b"ab\0\0"), '"ab"'),
    (Array(CHAR, 2), [1, 0], "{0x01, 0x00}"),
    (Array(Array(INT, 2), 2), packed("4i", 1, 2, 3, -1), "{\n    {0x00000001, 0x00000002},\n    {0x00000003, -1}\n}"),
    (Array(BuiltIn("double", 8), 2), packed("dd", 1.5, float("inf")), "{1.5, INFINITY}"),
    (Array(BuiltIn("float", 4), 3), packed("fff", 1.0, float("nan"), 1e-20), "{1.0f, NAN, 9.9999997e-21f}"),
    (Array(Typedef("SHORT16", BuiltIn("short", 2)), 2), packed("hh", -1, 2), "{-1, 0x0002}"),
    (Array(BuiltIn("byte", 1), 3), [1, 2, 3], "{0x01, 0x02, 0x03}"),
])
def test_an_array_without_a_value_is_read_element_by_element(data_type, data, text):
    assert initializer(data_type, data) == text


def test_a_char_pointer_array_is_its_strings_or_its_addresses():
    array = Array(Pointer(CHAR), 2)
    assert initializer(array, packed("ii", 0x640000, 0), string_map = {"00640000": "hi"}) == '{"hi", nullptr}'
    assert initializer(array, packed("ii", 0x640000, 0)) == "{(char*)0x00640000, nullptr}"


def test_a_pointer_array_points_at_symbols_where_there_are_some():
    world = World()
    world.label(0x650000, "g_y")
    assert initializer(Array(Pointer(None), 2), packed("ii", 0x650000, 0x660000), world = world) == \
        "{(void*)&g_y, (void*)0x00660000}"


def test_a_struct_array_is_one_struct_per_element():
    point = Struct("SPoint", [(INT, "x"), (INT, "y")])
    assert initializer(Array(point, 2), packed("4i", 1, 2, 3, 4)) == \
        "{\n    {.x = 0x00000001, .y = 0x00000002},\n    {.x = 0x00000003, .y = 0x00000004}\n}"
    assert initializer(Array(Struct("SEmpty", length = 2), 2), [1, 2, 3, 4]) == "{\n    {0x01, 0x02},\n    {0x03, 0x04}\n}"


@pytest.mark.parametrize("data_type, text, initialized", [
    (Array(INT, 2), "{}", True), (Array(CHAR, 0), '""', False), (Array(INT, 0), "{}", False),
    (Struct("SFoo", length = 4), "{}", False),
    (Pointer(INT), "nullptr", False), (INT, "0", False),
])
def test_zero_bytes_without_a_value_are_the_empty_initializer_of_their_type(data_type, text, initialized):
    item = entry(data_type)
    assert (item["initializer"], item["is_initialized"]) == (text, initialized)


def test_unreadable_memory_without_a_value_is_an_uninitialized_zero():
    item = entry(INT, UNREADABLE)
    assert (item["initializer"], item["is_initialized"]) == ("0", False)


# --- Ghidra's value -------------------------------------------------------------------

@pytest.mark.parametrize("value, text", [
    (0, "'\\0'"), (65, "'A'"), (200, "0xC8"), ("", "'\\0'"), ("\\x41", "'A'"), ("\\x00", "'\\0'"), ("\\xC8", "0xC8"),
    ("\\xZZ", "'\\0'"), ("B", "'B'"), ("\x01", "0x01"), ("AB", "'\\0'"),
])
def test_a_char_is_its_literal(value, text):
    assert initializer(CHAR, [1], value) == text


@pytest.mark.parametrize("value, text", [(1, "true"), (0, "false"), ("x", "false")])
def test_a_bool_is_true_or_false(value, text):
    assert initializer(BuiltIn("bool", 1), [1], value) == text


@pytest.mark.parametrize("value, text", [
    (1.5, "1.5f"), (2.0, "2.0f"), (1e-20, "1e-20f"), (float("inf"), "INFINITY"), (float("-inf"), "(-INFINITY)"),
    (float("nan"), "NAN"), ("abc", "abc"),
])
def test_a_float_value_is_a_float_literal(value, text):
    assert initializer(BuiltIn("float", 4), [1, 0, 0, 0], value) == text


@pytest.mark.parametrize("value, text", [
    (2.5, "2.5"), (float("inf"), "INFINITY"), (float("-inf"), "(-INFINITY)"), (float("nan"), "NAN"), ("zz", "zz"),
])
def test_a_double_value_is_a_double_literal(value, text):
    assert initializer(BuiltIn("double", 8), [1] + [0] * 7, value) == text


def sized(string_type, length):
    """A string type as long as its item, as Ghidra's terminated strings are."""
    string_type.length = length
    return string_type


@pytest.mark.parametrize("data_type, data, value, name, text", [
    (Array(CHAR, 4), list(b"hi\0\0"), '"hi"', "s_hi", '"hi"'),
    (Array(CHAR, 2), list(b"ab"), "ab", "s_ab", "{ 'a', 'b' }"),
    (sized(ghidra_fake.TerminatedStringDataType(), 8), list(b'say "x"\0'), 'say "x"', "g_say", '"say \\"x\\""'),
    (ghidra_fake.TerminatedUnicodeDataType(), [0x41], "w", "g_w", 'L"w"'),
    (Array(CHAR, 4), [0] * 4, "", "s_empty", '""'),
    (ghidra_fake.TerminatedUnicodeDataType(), [0], "", "g_none", 'L""'),
])
def test_a_string_is_its_literal(data_type, data, value, name, text):
    assert initializer(data_type, data, value, name) == text


def test_a_char_pointer_array_value_is_its_strings_or_its_bytes():
    array = Array(Pointer(CHAR), 2)
    assert initializer(array, packed("ii", 0x640000, 0), "x", string_map = {"00640000": "hi"}) == '{"hi", nullptr}'
    assert initializer(array, packed("ii", 0x640000, 0), "x") == "{0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00}"
    assert initializer(array, [0] * 8, "x") == "{}"


def test_a_char_pointer_value_is_its_string_its_symbol_or_its_address():
    world = World()
    world.string(0x640000, "s")
    world.label(0x650000, "g_z")
    assert initializer(Pointer(CHAR), packed("i", 1), "0x00640000", world = world) == '"s"'
    world = World()
    world.label(0x650000, "g_z")
    assert initializer(Pointer(CHAR), packed("i", 1), "00650000", world = world) == "(char*)&g_z"
    item = entry(Pointer(CHAR), packed("i", 1), "00660000", world = World())
    assert (item["initializer"], item["comment"]) == ("(char*)0x00660000", None)
    assert initializer(Pointer(CHAR), packed("i", 1), 0) == "nullptr"
    assert initializer(Pointer(CHAR), packed("i", 1), "zz") == "zz"


@pytest.mark.parametrize("data_type, data, text", [
    (Array(Array(CHAR, 3), 2), list(b"ab\0cd\0"), '{"ab", "cd"}'),
    (Array(CHAR, 4), list(b"ab\0\0"), '"ab"'),
    (Array(CHAR, 2), list(b"ab"), "{ 'a', 'b' }"),
    (Array(CHAR, 2), list(b"a\0"), "{(char)0x61, (char)0x00}"),
    (Array(CHAR, 2), [1, 2], "{(char)0x01, (char)0x02}"),
    (Array(BuiltIn("uchar", 1), 2), [1, 2], "{0x01, 0x02}"),
    (Array(CHAR, 2), [0, 0], '""'),
])
def test_a_char_array_value_is_its_text_or_its_bytes(data_type, data, text):
    assert initializer(data_type, data, "x") == text


def test_a_pointer_value_is_its_symbol_or_its_address():
    world = World()
    world.label(0x650000, "g_z")
    assert initializer(Pointer(INT), packed("i", 1), "00650000", world = world) == "(int*)&g_z"
    assert initializer(Pointer(INT), packed("i", 1), "") == "nullptr"
    assert initializer(BuiltIn("FooPtr", 4), packed("i", 1), "0x10") == "(FooPtr)0x00000010"


@pytest.mark.parametrize("data, text", [(packed("i", 5), "(HANDLE)0x5"), (packed("i", 0), "nullptr"), (UNREADABLE, "nullptr")])
def test_a_pointer_typedef_value_is_its_bytes_cast(data, text):
    assert initializer(Typedef("HANDLE", Pointer(None)), data, "x") == text


@pytest.mark.parametrize("data_type, data, value, text", [
    (INT, packed("i", -1), "-0x1", "-1"), (UINT, packed("i", 5), "5", "0x5"), (INT, packed("i", 0), "0", "0"),
    (INT, UNREADABLE, "0x10", "0x10"), (INT, UNREADABLE, "zz", "0"), (BuiltIn("short", 2), packed("h", -2), 0, "-2"),
])
def test_an_integer_value_is_read_from_its_bytes(data_type, data, value, text):
    assert initializer(data_type, data, value) == text


@pytest.mark.parametrize("data, value, text", [(packed("i", 1), 7, "0x00000007"), (packed("i", 9), "zz", "0x00000009"), (packed("i", 0), "zz", "0")])
def test_an_undefined_value_is_its_number_or_its_bytes(data, value, text):
    assert initializer(ghidra_fake.UndefinedDataType(4), data, value) == text


@pytest.mark.parametrize("value, name, text", [
    ('"hi"', "STR_hi", '"hi"'), ("hi", "STR_hi", '"hi"'), ("", "STR_none", '""'), ('"q"', "g_q", '"q"'),
])
def test_a_quoted_value_is_a_string(value, name, text):
    assert initializer(BuiltIn("STRBUF", 8), list(b"hi\0"), value, name) == text


@pytest.mark.parametrize("data_type, value, text", [
    (BuiltIn("SBlob", 4), "5", "{0x05, 0x00, 0x00, 0x00}"),
    (BuiltIn("SBlob", 4), "AB", "{0x41, 0x42, 0x00, 0x00}"),
    (BuiltIn("SBlob", 20), "AB", "{" + ", ".join(["0x41", "0x42"] + ["0x00"] * 14) + "}"),
    (BuiltIn("SBlob", 20), "A" * 20, "{" + ", ".join(["0x41"] * 12) + " /* ... 20 bytes total */}"),
    (BuiltIn("SBlob", 4), "", "{}"),
])
def test_any_other_value_is_spelled_out_in_bytes(data_type, value, text):
    assert initializer(data_type, [1], value) == text


def test_a_nested_array_value_is_read_from_its_bytes():
    assert initializer(Array(Array(INT, 2), 2), packed("4i", 1, 2, 3, 4), "x") == \
        "{\n    {0x00000001, 0x00000002},\n    {0x00000003, 0x00000004}\n}"


def test_a_resource_with_a_value_keeps_its_bytes_in_memory():
    icon = Struct("IconResource", length = 4)
    item = entry(icon, [1, 2, 3, 4], "garbage text")
    assert (item["type"], item["initializer"]) == ("BYTE[4]", "{0x01, 0x02, 0x03, 0x04}")
    # Only memory that can't be read leaves the value's text to go on
    item = entry(icon, UNREADABLE, "AB")
    assert (item["type"], item["initializer"]) == ("BYTE[4]", "{0x41, 0x42, 0x00, 0x00}")
    big = Struct("IconResource", length = 17)
    assert entry(big, UNREADABLE, "A")["initializer"] == \
        "{\n    0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\n    0x00\n}"
    item = entry(icon, UNREADABLE, "")
    assert (item["type"], item["initializer"]) == ("IconResource", "{}")


# --- constants and globals ------------------------------------------------------------

def test_what_is_written_is_a_global_and_what_is_read_only_may_be_a_constant():
    world = World()
    written = world.add(INT, packed("i", 5), name = None)
    world.add(INT, packed("i", 5), name = None)
    world.add(Array(CHAR, 8), list(b"x\0"), name = "s_x")
    world.add(Array(CHAR, 4), list(b"ab\0\0"), "x", name = "g_text")
    world.add(Array(CHAR, 32), list(b"ab\0"), "x", name = "g_buffer")
    world.add(BuiltIn("float", 4), packed("f", 1.0), 1.0, name = "g_scale")
    world.add(INT, packed("i", 0), name = "g_zero")
    world.add(Struct("SBig", length = 12), packed("3i", 1, 2, 3), name = None)
    kinds = {name: kind for name, (kind, _) in
             world.extract(write_xref_addrs = {f"{written:08x}"}).items()}
    assert kinds == {"DAT_00630000": "global", "DAT_00631000": "constant", "s_x": "constant", "g_text": "constant",
                     "g_buffer": "global", "g_scale": "constant", "g_zero": "global", "DAT_00637000": "global"}
