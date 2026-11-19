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
Union = ghidra_fake.UnionDataType
INT = BuiltIn("int", 4)
UINT = BuiltIn("uint", 4)
CHAR = BuiltIn("char", 1)


def program(*labels, functions = (), blocks = (), types = ()):
    """A program with labels [(address, name)], functions [(address, name)], memory and data types."""
    prog = ghidra_program.Program()
    for address, name in labels:
        prog.symbol_table.createLabel(Address(address), name, "USER_DEFINED")
    for address, name in functions:
        prog.function_manager.add(name, address)
    for start, data in blocks:
        prog.memory.add_block("ram", start, data)
    prog.data_type_manager.add(*types)
    return prog


def le(*values, size = 4):
    return list(b"".join(v.to_bytes(size, "little", signed = v < 0) for v in values))


def floats(*values, fmt = "<f"):
    return list(b"".join(struct.pack(fmt, v) for v in values))


class Broken:
    """A program whose address factory fails, as Ghidra's does for an address it can't make."""
    def getAddressFactory(self):
        raise ValueError("no address space")


# --- integers ------------------------------------------------------------------------

@pytest.mark.parametrize("name, signed", [
    (None, False), ("unsigned int", False), ("uint", False), ("ushort", False), ("dword", False),
    ("undefined4", False), ("int", True), ("char", True), ("int32_t", True), ("float", False), ("BOOL", False),
])
def test_a_type_is_signed_when_its_name_says_int_without_a_u(name, signed):
    assert gl.is_signed_int_type(name) is signed


@pytest.mark.parametrize("val, size, type_name, text", [
    (0xFFFFFFFF, 4, "int", "-1"), (0x7F, 1, "char", "0x7F"), (0xFFFF, 2, "ushort", "0xFFFF"), (5, 4, None, "0x00000005"),
])
def test_a_signed_value_with_its_high_bit_set_is_negative(val, size, type_name, text):
    assert gl.format_signed_int(val, size, type_name) == text


def test_a_typedef_of_a_pointer_is_a_pointer_whatever_its_name():
    handle = ghidra_fake.TypedefDataType("MYHANDLE", Pointer(INT))
    assert gl.is_pointer_typedef(handle, "MYHANDLE")
    assert gl.is_pointer_typedef(None, "hwnd")
    assert not gl.is_pointer_typedef(ghidra_fake.TypedefDataType("DWORD", UINT), "DWORD")
    assert not gl.is_pointer_typedef(INT, "int")


# --- pointers to symbols -------------------------------------------------------------

@pytest.mark.parametrize("name, usable", [
    ("core_x.cpp_f_FUN_00401000", "core_x_cpp_f_FUN_00401000"),
    ("FUN_00401000", None), ("thunk_FUN_00401000", None), ("delete", None),
])
def test_a_function_is_its_own_pointer_unless_its_name_is_not_one(name, usable):
    assert gl.resolve_pointer_to_symbol(program(functions = [(0x401000, name)]), 0x401000) == (usable, name)


@pytest.mark.parametrize("names, usable, comment", [
    ([], None, None),
    (["DAT_00630000"], None, "DAT_00630000"),
    (["LAB_00630000", "new", "x.cpp_y_FUN_00630000", "FUN_00630000", "s_hi there_00630000"],
     "s_hi_there_00630000", "LAB_00630000"),
    (["g_table[3]"], "&g_table[3]", "g_table[3]"),
    (["g_obj.field+4"], "(char*)(&g_obj.field)+4", "g_obj.field+4"),
    (["a.c_tbl[2]"], "&a_c_tbl[2]", "a.c_tbl[2]"),
    (["core_x.cpp_g_count"], "core_x_cpp_g_count", "core_x.cpp_g_count"),
    (["unit.cpp"], "unit_cpp", "unit.cpp"),
    (["g_count"], "&g_count", "g_count"),
])
def test_a_data_symbol_is_used_in_the_form_its_name_needs(names, usable, comment):
    prog = program(*[(0x630000, name) for name in names])
    assert gl.resolve_pointer_to_symbol(prog, 0x630000) == (usable, comment)


def test_a_null_or_unmakeable_address_has_no_symbol():
    assert gl.resolve_pointer_to_symbol(program(), 0) == (None, None)
    assert gl.resolve_pointer_to_symbol(Broken(), 0x401000) == (None, None)


@pytest.mark.parametrize("value, labels, initializer, comment", [
    (0, [], "nullptr", None),
    (0x630000, [(0x630000, "g_x")], "(int *)&g_x", None),
    (0x630000, [(0x630000, "LAB_00630000")], "(int *)0x00630000", "LAB_00630000"),
])
def test_a_pointer_initializer_names_its_target_or_casts_its_address(value, labels, initializer, comment):
    assert gl.format_pointer_initializer(program(*labels), value, "int * ") == (initializer, comment)


# --- pointers to strings -------------------------------------------------------------

def test_a_string_pointer_is_looked_up_by_its_address_in_either_spelling():
    assert gl.resolve_pointer_to_string(None, 0x630000, {"00630000": "long"}) == "long"
    assert gl.resolve_pointer_to_string(None, 0x630000, {"630000": "short"}) == "short"
    assert gl.resolve_pointer_to_string(None, 0) is None


def test_a_string_pointer_reads_the_string_data_defined_there():
    prog = program()
    prog.listing.add_data(0x630000, ghidra_fake.TerminatedStringDataType(), 'say "hi"\n')
    assert gl.resolve_pointer_to_string(prog, 0x630000, {"00999999": "other"}) == 'say \\"hi\\"\\n'


@pytest.mark.parametrize("data, text", [
    (b"abc\0", "abc"), (b"x" * 300 + b"\0", "x" * 300), (b"a\tb\0", "a\\tb"), (b"a\x01\0", None), (b"   \0", None),
    (b"\0", None),
    # Part of a string is none: memory that ends, or no NUL in reach
    (b"ok", None), (b"x" * 2000, None),
])
def test_without_string_data_a_string_pointer_reads_memory_up_to_its_nul(data, text):
    prog = program(blocks = [(0x630000, data)])
    # Data that is not a string, and a string with no value, leave memory to go on
    prog.listing.add_data(0x630000, INT, 5)
    assert gl.resolve_pointer_to_string(prog, 0x630000) == text
    prog.listing.add_data(0x630000, ghidra_fake.TerminatedStringDataType(), "")
    assert gl.resolve_pointer_to_string(prog, 0x630000) == text


def test_a_string_pointer_that_cannot_be_read_is_none():
    assert gl.resolve_pointer_to_string(Broken(), 0x630000) is None


def test_a_char_pointer_array_is_strings_when_enough_of_them_resolve():
    strings = {"00630000": "a", "00630010": "b"}
    raw = le(0x630000, 0, 0x630010, 0x640000)
    assert gl.format_char_pointer_array(program(), raw, "char*[4]", strings) == \
        '{"a", nullptr, "b", (char*)0x00640000}'
    # Under 30% of the pointers resolve, or none is set, or there is not one pointer
    assert gl.format_char_pointer_array(program(), le(0x630000, 1, 2, 3, 4), "char*[5]", strings) is None
    assert gl.format_char_pointer_array(program(), le(0, 0), "char*[2]", strings) is None
    assert gl.format_char_pointer_array(program(), [1, 2], "char*[1]", strings) is None


# --- arrays ---------------------------------------------------------------------------

def test_an_array_type_names_its_dimensions():
    assert gl.parse_array_dimensions("int[2][3][15]") == ("int", [2, 3, 15])
    assert gl.parse_array_dimensions("CFoo") == ("CFoo", [])


def test_a_type_without_dimensions_is_no_nested_array():
    assert gl.format_multidim_array([0] * 4, "int", 4) is None


def test_a_nested_array_puts_each_outer_row_on_its_own_line():
    raw = le(-1, 2, 3, 4, 5)
    # The last row runs past the bytes: zeros, then rows with no bytes at all
    assert gl.format_multidim_array(raw, "int[3][2]", 4, "int") == "{\n    {-1, 0x00000002},\n    {0x00000003, 0x00000004},\n    {0x00000005, 0}\n}"
    assert gl.format_multidim_array(le(1, 2), "int[1][2]", 4, "int") == "{{0x00000001, 0x00000002}}"
    assert gl.format_multidim_array([], "short[2][1][1]", 2, "short") == "{\n    {{0}},\n    {{0}}\n}"


def test_a_nested_float_array_spells_each_float_as_c_does():
    raw = floats(1.0, float("inf"), float("-inf"), float("nan"), 1e-20)
    assert gl.format_multidim_array(raw, "float[2][3]", 4, "float") == \
        "{\n    {1.0f, INFINITY, (-INFINITY)},\n    {NAN, 9.99999968e-21f, 0.0f}\n}"


def test_a_nested_double_array_spells_each_double_as_c_does():
    raw = floats(2.0, 0.5, float("inf"), fmt = "<d")
    assert gl.format_multidim_array(raw, "double[2][2]", 8, "double") == "{\n    {2.0, 0.5},\n    {INFINITY, 0.0}\n}"
    # float10 too, by its name, and the type's own name when no element name is given
    assert gl.format_multidim_array(floats(1e300, fmt = "<d"), "double[1][1]", 8) == "{{1.0000000000000001e+300}}"
    assert gl.format_multidim_array(floats(3.0, fmt = "<d"), "float10[1][1]", 8, "float10") == "{{3.0}}"


def test_a_nested_pointer_array_resolves_char_pointers_to_their_strings():
    raw = le(0x630000, 0, 0x640000, 0x650000)
    prog = program()
    assert gl.format_multidim_array(raw, "char*[2][2]", 4, "pointer", currentProgram = prog,
                                    string_map = {"00630000": "hi"}) == \
        '{\n    {"hi", nullptr},\n    {(char*)0x00640000, (char*)0x00650000}\n}'
    # A pointer that is not to char is its address, a program or not
    assert gl.format_multidim_array(le(0x630000, 0), "void*[1][2]", 4, "pointer", currentProgram = prog) == \
        "{{(void*)0x00630000, nullptr}}"
    assert gl.format_multidim_array(le(0x630000), "char*[1][1]", 4, "pointer") == "{{(char*)0x00630000}}"


@pytest.mark.parametrize("raw, text", [
    ([], None), (list(b"ab\0x"), '"ab"'), (list(b'a"\0'), '"a\\""'), (list(b"ab"), "{ 'a', 'b' }"),
    ([0, 0], '""'), ([1, 0], None),
])
def test_a_char_array_is_a_literal_up_to_its_nul_or_its_characters_when_full(raw, text):
    assert gl.format_1d_char_array_as_string(raw) == text


@pytest.mark.parametrize("byte, literal", [
    (ord("'"), "'\\''"), (ord("\\"), "'\\\\'"), (9, "'\\t'"), (10, "'\\n'"), (13, "'\\r'"), (ord("a"), "'a'"), (1, "'\\x01'"),
])
def test_a_byte_is_the_char_literal_c_reads_back(byte, literal):
    assert gl._format_char_literal(byte) == literal


@pytest.mark.parametrize("raw, text", [
    (list(b"ab\0\0"), '"ab"'), (list(b"ab"), '"ab"'), (list(b"\t\0"), '"\\t"'), ([0, 0], '""'),
    ([0, 7], None), ([200, 0], None),
])
def test_char_field_bytes_are_a_literal_only_when_one_keeps_them(raw, text):
    assert gl.format_char_bytes_as_string(raw) == text


def test_a_guid_is_its_four_parts():
    assert gl.format_guid_initializer(list(range(16))) == \
        "{0x03020100, 0x0504, 0x0706, {0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F}}"
    assert gl.format_guid_initializer([0] * 15) is None


@pytest.mark.parametrize("type_name, declaration", [
    ("char[80]", ("char", "x[80]")), ("int[10][20]", ("int", "x[10][20]")),
    ("void*[GAME_SCREEN_MAX_HEIGHT]", ("void*", "x[GAME_SCREEN_MAX_HEIGHT]")), ("int", ("int", "x")),
])
def test_an_array_declaration_puts_its_dimensions_after_the_name(type_name, declaration):
    assert gl.format_variable_declaration(type_name, "x") == declaration


# --- WatcomTypeInfo ------------------------------------------------------------------

def typeinfo(name = "WatcomTypeInfo"):
    return Struct(name, [(INT, "instance_size"), (Pointer(INT), "ctor"), (Pointer(INT), "dtor"), (Pointer(CHAR), "class_name"),
                         (INT, "flags")])


def test_a_type_name_comes_from_a_ctor_dtor_or_class_name_symbol():
    assert gl._watcom_type_candidates("core_x.cpp_CFoo_ctor_FUN_00401000") == ["CFoo"]
    assert gl._watcom_type_candidates("core_x.cpp_CFoo_dtor_FUN_00401000") == ["CFoo"]
    assert gl._watcom_type_candidates("core_x.cpp_9_ctor_FUN_00401000") == []
    assert gl._watcom_type_candidates("s_SfxSlot_0063a4f0") == ["SfxSlot", "CSfxSlot"]
    assert gl._watcom_type_candidates("s_CObj") == ["CObj"]
    assert gl._watcom_type_candidates("s_Obj_zz") == ["Obj_zz", "CObj_zz"]
    assert gl._watcom_type_candidates("s_1x") == []
    assert gl._watcom_type_candidates(None) == []


def test_the_instance_size_type_is_the_candidate_whose_size_matches():
    big_foo, big_bar = Struct("CFoo", length = 0x40), Struct("CBar", length = 0x40)
    prog = program((0x630000, "s_Bar_00630000"), functions = [(0x401000, "core_x.cpp_CFoo_ctor_FUN_00401000"),
                                                             (0x402000, "core_x.cpp_CFoo_dtor_FUN_00402000")],
                   types = [Struct("CFoo", length = 0x20), big_bar, BuiltIn("void", 0)])
    raw = le(0x40, 0x401000, 0x402000, 0x630000, 1)
    assert gl.watcom_typeinfo_sizeof_type(typeinfo(), raw, prog) == "CBar"
    # The sizes are the program's: another program has its own
    other = program((0x630000, "s_Bar_00630000"), functions = [(0x401000, "core_x.cpp_CFoo_ctor_FUN_00401000")],
                    types = [big_foo])
    assert gl.watcom_typeinfo_sizeof_type(typeinfo(), raw, other) == "CFoo"
    assert gl.watcom_typeinfo_sizeof_type(typeinfo(), le(0x41, 0x401000, 0, 0), other) is None


def test_a_typeinfo_without_a_size_or_a_program_names_no_type():
    raw = le(0, 0x401000, 0, 0)
    assert gl.watcom_typeinfo_sizeof_type(typeinfo(), raw, program()) is None
    assert gl.watcom_typeinfo_sizeof_type(typeinfo(), raw, None) is None
    assert gl.watcom_typeinfo_sizeof_type(typeinfo("CTypeInfo"), raw, program()) is None
    # Fields past the bytes are not read
    assert gl.watcom_typeinfo_sizeof_type(typeinfo(), [0x40, 0, 0], program()) is None


# --- struct initializers -------------------------------------------------------------

def components_at(name, *placed, length = None):
    """A struct of (data type, field name, offset) components, laid where they say."""
    struct_type = Struct(name, length = length or max(offset + dt.getLength() for dt, _, offset in placed))
    struct_type.components = [ghidra_fake.DataTypeComponent(dt, field, offset) for dt, field, offset in placed]
    return struct_type


def test_only_a_struct_or_union_has_an_initializer():
    assert gl.format_struct_initializer(INT, [1, 0, 0, 0]) is None
    assert gl.format_struct_initializer(Struct("SEmpty", length = 4), [0] * 4) is None
    assert gl.format_struct_initializer(Union("UEmpty"), [0] * 4) is None


def test_a_union_is_initialized_through_its_first_member():
    assert gl.format_struct_initializer(Union("U", [INT, CHAR]), [1, 2]) == "{0x00000201}"
    assert gl.format_struct_initializer(Union("U", [BuiltIn("longlong", 8)]), le(1, 2)) == "{0x0000000200000001ULL}"


def test_overlapping_fields_have_no_struct_initializer():
    assert gl.format_struct_initializer(components_at("S", (INT, "a", 0), (CHAR, "b", 0)), [0] * 4) is None


def test_a_struct_names_each_field_and_notes_bytes_past_its_end():
    s = components_at("S", (INT, "a", 0), (CHAR, None, 4), (CHAR, "bad-name", 5), (UINT, "far", 8), length = 12)
    assert gl.format_struct_initializer(s, le(-2) + [7, 8, 0, 0] + [0] * 4 + [9]) == \
        "{\n    .a = -2,\n    .field_0x4 = 0x07,\n    .field_0x5 = 0x08,\n    .far = 0x00000000\n} /* +1 trailing bytes */"
    # Positional, and fields the bytes don't reach are zero
    assert gl.format_struct_initializer(s, le(5) + [6], use_designated = False) == \
        "{\n    0x00000005,\n    0x06,\n    0x00,\n    0x00000000\n}"
    small = Struct("P", [(INT, "x"), (INT, "y")])
    assert gl.format_struct_initializer(small, le(1, 2)) == "{.x = 0x00000001, .y = 0x00000002}"
    assert gl.format_struct_initializer(small, le(1, 2), use_designated = False) == "{0x00000001, 0x00000002}"


def test_a_pointer_field_names_its_target_when_it_can():
    s = Struct("S", [(Pointer(INT), "p"), (Pointer(INT), "q"), (Pointer(None), "r"), (Pointer(INT), "n")])
    raw = le(0x630000, 0x640000, 0x650000, 0)
    assert gl.format_struct_initializer(s, raw, program((0x630000, "g_x"))) == \
        "{\n    .p = (int *)&g_x,\n    .q = (int *)0x00640000,\n    .r = (void*)0x00650000,\n    .n = nullptr\n}"
    assert ".p = (int *)0x00630000" in gl.format_struct_initializer(s, raw)


def wchar_array_named(display_name):
    """A 2-byte array known as wide text only by its display name."""
    array = Array(BuiltIn("x", 2), 2)
    array.display_name = display_name
    return array


@pytest.mark.parametrize("field_type", [
    BuiltIn("unicode", 4), Array(BuiltIn("wchar_t", 2), 2), Array(BuiltIn("ushort", 2), 2),
    Array(BuiltIn("WORD16", 2, display_name = "unicode16"), 2), wchar_array_named("WCHAR[2]"),
])
def test_wide_characters_are_words(field_type):
    # A braced field always takes the multi-line form
    assert gl.format_struct_initializer(Struct("S", [(field_type, "w")]), [0x41, 0, 0x42, 1]) == \
        "{\n    .w = {0x0041, 0x0142}\n}"


def test_char_arrays_are_strings_unless_unsigned_or_unprintable():
    s = Struct("S", [(Array(CHAR, 4), "name"), (Array(BuiltIn("uchar", 1), 2), "raw"), (Array(CHAR, 2), "bin")])
    assert gl.format_struct_initializer(s, list(b"ab\0\0") + [0x41, 0xFF] + [0x41, 0xFF]) == \
        '{\n    .name = "ab",\n    .raw = {0x41, 0xFF},\n    .bin = {0x41, -1}\n}'


def test_nested_structs_and_struct_arrays_nest_their_initializers():
    point = Struct("SPoint", [(INT, "x"), (INT, "y")])
    empty = Struct("SEmpty", length = 2)
    s = Struct("S", [(point, "at"), (empty, "pad"), (Array(point, 2), "pts"), (Array(empty, 2), "pads")])
    raw = le(1, 2) + [7, 8] + le(3, 4, 5, 6) + [1, 2, 3, 4]
    assert gl.format_struct_initializer(s, raw) == (
        "{\n    .at = {.x = 0x00000001, .y = 0x00000002},\n    .pad = {0x07, 0x08},\n"
        "    .pts = {{.x = 0x00000003, .y = 0x00000004}, {.x = 0x00000005, .y = 0x00000006}},\n"
        "    .pads = {{0x01, 0x02}, {0x03, 0x04}}\n}")


def test_integer_arrays_keep_their_signedness():
    # (2-byte short and word arrays are taken for WCHAR text, so they are words)
    s = Struct("S", [(Array(INT, 2), "i"), (Array(UINT, 1), "u"), (Array(BuiltIn("dword", 4), 1), "w"),
                     (Array(Array(BuiltIn("short", 2), 1), 2), "grid"), (Array(BuiltIn("long", 4), 1), "l")])
    raw = le(-1, 2, 3, -1) + [0xFE, 0xFF, 1, 0] + le(-3)
    assert gl.format_struct_initializer(s, raw) == \
        "{\n    .i = {-1, 0x00000002},\n    .u = {0x00000003},\n    .w = {0xFFFFFFFF},\n    .grid = {0xFFFE, 0x0001},\n" \
        "    .l = {-3}\n}"


def test_a_pointer_array_field_is_one_pointer_per_element():
    target = Struct("CFoo", [(INT, "a"), (INT, "b"), (INT, "c")])
    s = Struct("S", [(Array(Pointer(target), 3), "objs"), (Array(Pointer(CHAR), 1), "names")])
    raw = le(0x630000, 0, 0x640000, 0x650000)
    assert gl.format_struct_initializer(s, raw, program((0x630000, "g_foo"))) == \
        "{\n    .objs = {(CFoo *)&g_foo, nullptr, (CFoo *)0x00640000},\n    .names = {(char *)0x00650000}\n}"


def test_floats_and_doubles_keep_their_exact_values():
    s = Struct("S", [(BuiltIn("float", 4), "f"), (BuiltIn("d3dvalue", 4), "g"), (BuiltIn("double", 8), "d")])
    cases = [
        (1.0, 2.5, "1.0f", "2.5"), (1e-20, 0.0, "9.9999997e-21f", "0"),
        (float("inf"), float("-inf"), "INFINITY", "(-INFINITY)"), (float("-inf"), float("inf"), "(-INFINITY)", "INFINITY"),
        (float("nan"), float("nan"), "NAN", "NAN"),
    ]
    for f, d, f_text, d_text in cases:
        raw = floats(f, f) + floats(d, fmt = "<d")
        assert gl.format_struct_initializer(s, raw) == "{\n    .f = %s,\n    .g = %s,\n    .d = %s\n}" % (f_text, f_text, d_text)
    # A NaN that is not the canonical one keeps its bits
    raw = le(0xFFFFFFFF, 0x7FC00001, size = 4) + le(0xFFFFFFFFFFFFFFFF, size = 8)
    assert gl.format_struct_initializer(s, [b & 0xFF for b in raw]) == \
        "{\n    .f = __BITCAST_FLOAT(0xFFFFFFFFu),\n    .g = __BITCAST_FLOAT(0x7FC00001u),\n" \
        "    .d = __BITCAST_DOUBLE(0xFFFFFFFFFFFFFFFFULL)\n}"


def test_a_union_field_and_a_wide_field_are_their_value_and_bytes():
    s = Struct("S", [(Union("U", [INT]), "u"), (BuiltIn("undefined", 10), "blob")])
    assert gl.format_struct_initializer(s, le(5) + list(range(10))) == \
        "{\n    .u = 0x00000005,\n    .blob = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09}\n}"


def test_a_typeinfo_size_is_sizeof_its_type_when_known():
    prog = program(functions = [(0x401000, "core_x.cpp_CFoo_ctor_FUN_00401000")], types = [Struct("CFoo", length = 0x40)])
    known = gl.format_struct_initializer(typeinfo(), le(0x40, 0x401000, 0, 0), prog)
    assert ".instance_size = (int)sizeof(CFoo)" in known and ".ctor = (int *)core_x_cpp_CFoo_ctor_FUN_00401000" in known
    unknown = gl.format_struct_initializer(typeinfo(), le(0x41, 0x401000, 0, 0), prog)
    assert ".instance_size = 0x00000041 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */" in unknown


def test_a_struct_ghidra_cannot_lay_out_has_no_initializer():
    class Unreadable(Struct):
        def getLength(self):
            raise ValueError("bad layout")
    assert gl.format_struct_initializer(Unreadable("S", [(INT, "a")]), [0] * 4) is None
