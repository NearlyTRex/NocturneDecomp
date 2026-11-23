# Imports
import re

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import strings as st
from ghidra_fake import BuiltInDataType, MemoryAccessException, TerminatedStringDataType
from ghidra_program import Program


class JavaString:
    def __init__(self, text):
        self.text = text

    def toString(self):
        return self.text


@pytest.mark.parametrize("values, per_line, text", [
    ([], 16, "{}"),
    (["0x00", "0x01"], 16, "{0x00, 0x01}"),
    (["1", "2", "3"], 2, "{\n    1, 2,\n    3\n}"),
])
def test_values_are_braced_and_wrapped(values, per_line, text):
    assert st.format_array_initializer(values, per_line) == text


@pytest.mark.parametrize("val, text", [
    (None, ""), ("café", "caf"), (JavaString("jüp"), "jp"), (42, "42"),
])
def test_a_value_becomes_ascii_text(val, text):
    assert st.get_safe_str(val) == text


@pytest.mark.parametrize("text, escaped", [
    ("", ""), (None, None), ('a"b\\c', 'a\\"b\\\\c'), ("\n\r\t\b\f\v\a", "\\n\\r\\t\\b\\f\\v\\a"),
    ("\x01\x7f", "\\001\\177"),
    ("\x001", "\\0001"),            # NUL then a digit: the digit stays its own character
])
def test_a_string_is_escaped_for_a_c_literal(text, escaped):
    assert st.escape_c_string(text) == escaped


@pytest.mark.parametrize("text, preserve, out", [
    ("", False, ""), ("plain", False, "plain"), ("plain\nkept", True, "plain\nkept"),
    ('say "hi"\\\n\r\t', False, 'say \\"hi\\"\\\\\\n\\r\\t'),
    ('a"\\\n', True, 'a"\\\n'),
    ("\x01\x7fé中", False, "\\x01\\x7f\\xe9\\u4e2d"),
    ("\x01x中", True, "\\x01x\\u4e2d"),
    ("del\x7f", False, "del\\x7f"),        # DEL is escaped on the fast path's text too
])
def test_text_is_made_ascii_safe(text, preserve, out):
    assert st.sanitize_string(text, preserve_newlines = preserve) == out


def pointer_bytes(*values):
    return [b for v in values for b in v.to_bytes(4, "little")]


def string_program():
    """A program with defined strings at 0x1000 and 0x1010, and memory holding a
    terminated string at 0x2000, one with a control byte at 0x2010, one running
    off the block at 0x2020, and an unterminated one at 0x3000."""
    prog = Program()
    prog.listing.add_data(0x1000, TerminatedStringDataType(), "hello\n")
    prog.listing.add_data(0x1010, TerminatedStringDataType(), "é")      # nothing ASCII
    prog.listing.add_data(0x1020, BuiltInDataType("byte"), 1)
    prog.memory.add_block("data", 0x2000, b"raw\0" + bytes(12) + b"\x01abc\0" + bytes(11) + b"end")
    prog.memory.add_block("long", 0x3000, b"x" * (st.MEMORY_STRING_LIMIT + 1))
    prog.memory.add_block("blank", 0x4000, b"  \0")
    return prog


def test_a_pointer_array_takes_its_strings_from_the_map_the_data_or_memory():
    prog = string_program()
    raw = pointer_bytes(0x5000, 0, 0x1000, 0x2000, 0x2010, 0x2020, 0x3000, 0x6000, 0x4000, 0x1020)
    out = st.format_char_array_as_c_strings(prog, raw, "char*[10]", {"00005000": "mapped"})
    assert out == ('{\n    "mapped", nullptr, "hello\\n", "raw",\n'
                   '    (char*)0x00002010, (char*)0x00002020, (char*)0x00003000, (char*)0x00006000,\n'
                   '    (char*)0x00004000, (char*)0x00001020\n}')


def test_a_pointer_array_with_too_few_strings_is_left_to_the_caller():
    prog = string_program()
    assert st.format_char_array_as_c_strings(prog, pointer_bytes(0x1000, 0x6000, 0x6000, 0x6000), "char*[4]") is None
    assert st.format_char_array_as_c_strings(prog, pointer_bytes(0x1000, 0), "char*[2]") == '{"hello\\n", nullptr}'


@pytest.mark.parametrize("raw, type_name", [([], "char*[1]"), ([1, 2], "char*[1]"), (pointer_bytes(0x1000), "char*")])
def test_a_pointer_array_needs_a_pointer_and_an_array_type(raw, type_name):
    assert st.format_char_array_as_c_strings(string_program(), raw, type_name) is None


def test_unreadable_memory_is_no_string(monkeypatch):
    prog = string_program()

    def unreadable(_address):
        raise MemoryAccessException("uninitialized")
    monkeypatch.setattr(prog.memory, "getByte", unreadable)
    assert st.format_char_array_as_c_strings(prog, pointer_bytes(0x2000), "char*[1]") is None


@pytest.mark.parametrize("value, out", [
    ("0x1000", '"hello\\n"'), ("0x1010", None), ("0x1020", None), ("0x6000", None), ("s_x", None), (None, None),
])
def test_a_char_pointer_is_the_string_it_points_at(value, out):
    assert st.format_single_char_pointer(string_program(), value, "p") == out


@pytest.mark.parametrize("raw, type_name, out", [
    (list(b"ab\0\0cd\0\0"), "char[2][4]", '{"ab", "cd"}'),
    (list(b"ab\0\0cd\0\0e"), "char[3][4]", '{"ab", "cd"}'),     # the bytes end inside the last row
    (list(b"ab\0\0"), "char[1][4]", None),                  # one row: under two strings
    (list(b"ab\0\0cd\0\0"), "char[8]", None),               # not a 2D array
    (list(b"ab\0\0cd\0\0"), None, None),
    ([], "char[2][4]", None),
    (list(b"ab\x01\0cd\0\0"), "char[2][4]", None),          # a control byte in a row
    (list(b"abcdef\0\0"), "char[2][4]", None),              # a row with no room for its NUL
    (list(b"\x01\x02\x03\0ab\0\0"), "char[2][4]", None),    # mostly not printable
    (list(b"abcdefgh"), "char[2][4]", None),                # no NUL at all
    (list(b"".join(bytes([65 + i]) + b"\0" for i in range(9))), "char[9][2]",
     '{\n    "A", "B", "C", "D",\n    "E", "F", "G", "H",\n    "I"\n}'),
])
def test_a_2d_char_array_becomes_one_literal_a_row(raw, type_name, out):
    assert st.format_2d_char_array(raw, type_name) == out


def test_the_string_map_holds_each_defined_strings_escaped_ascii_value():
    prog = string_program()
    prog.listing.add_data(0x1030, TerminatedStringDataType(), "")
    # Non-ASCII characters are dropped, so 0x1010's string has none left
    assert st.build_string_map(prog.listing.data.values()) == {"00001000": "hello\\n", "00001010": ""}


def test_a_symbol_is_replaced_by_its_string_when_the_map_has_it():
    pattern = re.compile(r'(s_\w+_([0-9a-fA-F]{8}))')
    string_map = {"00001000": "hi"}
    assert pattern.sub(lambda m: st.replace_symbol(m, string_map), "f(s_hi_00001000, s_x_00002000)") == \
        'f("hi", s_x_00002000)'
