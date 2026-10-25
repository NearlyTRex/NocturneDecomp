# Third-party imports
import pytest

# Local imports
from ghidra_program import Address, Program, Symbol
from ghidra_fake import (BuiltInDataType, StructureDataType, TerminatedStringDataType, TerminatedUnicodeDataType,
                         UnicodeDataType)
from ghidra_annotations.util import string

ADDR = 0x5a0000


def test_the_string_type_tables_agree():
    types = string.get_string_types()
    assert len(types) == 10
    assert types["TerminatedStringDataType"] == {"type": TerminatedStringDataType, "name": "TerminatedCString"}
    assert string.get_string_data_type_classes() == [entry["type"] for entry in types.values()]
    assert string.get_string_data_type_names()["Unicode"] is UnicodeDataType


def test_recognises_and_builds_string_types():
    assert string.is_string_data_type_obj(TerminatedUnicodeDataType()) is True
    assert string.is_string_data_type_obj(StructureDataType("CString")) is False
    assert isinstance(string.get_string_data_type_obj("TerminatedUnicode"), TerminatedUnicodeDataType)
    assert string.get_string_data_type_obj("char") is None


@pytest.mark.parametrize("text, max_length, name", [
    ("Can't open %s!", 32, "Can_t_open_s"),
    ("...", 32, "anon"),
    ("3D API: DirectX 6", 32, "s_3D_API_DirectX_6"),
    ("abcdefghij", 4, "abcd"),
])
def test_normalize_string_name(text, max_length, name):
    assert string.normalize_string_name(text, max_length) == name


@pytest.mark.parametrize("raw, identifier", [
    ("", "unnamed"),
    ("a b--c", "a_b_c"),
    ("__reserved__name__", "__reserved_name"),
    ("___", "unnamed"),
    ("3dfx", "_3dfx"),
    ("class", "_class"),
    ("g_HeroActors", "g_HeroActors"),
])
def test_sanitize_c_identifier(raw, identifier):
    assert string.sanitize_c_identifier(raw) == identifier


def memory_with(data):
    program = Program()
    program.getMemory().add_block(".rdata", ADDR, data)
    return program.getMemory()


@pytest.mark.parametrize("data, text", [
    (b"hello\0", "hello"),
    (b"tab\there\0", "tab\there"),
    (b"\0", None),
    (b"bell\x07\0", None),
    (b"caf\xe9\0", None),
    (b"abc", None),
])
def test_read_ascii_string(data, text):
    assert string.read_ascii_string(memory_with(data), Address(ADDR)) == text


def test_read_ascii_string_stops_at_max_len():
    assert string.read_ascii_string(memory_with(b"abcdef\0"), Address(ADDR), max_len = 3) == "abc"


def test_read_utf16le_string_stops_at_max_len():
    assert string.read_utf16le_string(memory_with("abcdef".encode("utf-16le")), Address(ADDR), max_len = 2) == "ab"


@pytest.mark.parametrize("data, text", [
    ("Hi".encode("utf-16le") + b"\0\0", "Hi"),
    ("café ✓".encode("utf-16le") + b"\0\0", "café ✓"),
    (b"\0\0", None),
    (b"H\0i", None),
])
def test_read_utf16le_string(data, text):
    assert string.read_utf16le_string(memory_with(data), Address(ADDR)) == text


# ASCII is tried first and stops at the first NUL, so UTF-16 text whose first
# character is ASCII reads as that one character; UTF-16 is only reached when
# the first byte is not printable ASCII
@pytest.mark.parametrize("data, text", [
    (b"plain\0", "plain"),
    ("wide".encode("utf-16le") + b"\0\0", "w"),
    ("été".encode("utf-16le") + b"\0\0", "été"),
    (b"\x01\x02\x03\x04", None),
])
def test_read_likely_string_tries_ascii_then_utf16(data, text):
    assert string.read_likely_string(memory_with(data), Address(ADDR)) == text


class RecordingDataUtilities:
    created = []

    class ClearDataMode:
        CLEAR_ALL_CONFLICT_DATA = "CLEAR_ALL_CONFLICT_DATA"

    @classmethod
    def createData(cls, program, address, data_type, length, stack_pointers, mode):
        cls.created.append((address, data_type.getName(), length, stack_pointers, mode))


@pytest.fixture
def data_utilities(monkeypatch):
    RecordingDataUtilities.created = []
    monkeypatch.setattr(string, "DataUtilities", RecordingDataUtilities)
    return RecordingDataUtilities


def test_creates_a_string_from_memory_and_labels_it(data_utilities, capsys):
    program = Program()
    program.getMemory().add_block(".rdata", ADDR, b"Not enough memory\0")
    program.getSymbolTable().symbols.append(Symbol("DAT_005a0000", Address(ADDR)))
    assert string.create_or_replace_string(program, Address(ADDR)) is True
    assert program.getListing().cleared == [(Address(ADDR), Address(ADDR + 17), False)]
    assert [symbol.getName() for symbol in program.getSymbolTable().removed] == ["DAT_005a0000"]
    assert data_utilities.created == [(Address(ADDR), "TerminatedCString", 18, False, "CLEAR_ALL_CONFLICT_DATA")]
    symbol = program.getSymbolTable().getPrimarySymbol(Address(ADDR))
    assert symbol.getName() == "s_Not_enough_memory_005a0000"
    assert "Creating string label 'Global::s_Not_enough_memory_005a0000' at 005a0000" in capsys.readouterr().out


def test_prefers_the_value_of_an_existing_string(data_utilities):
    program = Program()
    program.getListing().add_data(ADDR, TerminatedStringDataType(), "kept")
    assert string.create_or_replace_string(program, Address(ADDR)) is True
    assert data_utilities.created[0][2] == 5


def test_reads_memory_when_the_existing_data_has_no_value(data_utilities):
    program = Program()
    program.getMemory().add_block(".rdata", ADDR, b"read\0")
    program.getListing().add_data(ADDR, BuiltInDataType("dword"), None)
    assert string.create_or_replace_string(program, Address(ADDR)) is True
    assert data_utilities.created[0][2] == 5


def test_does_nothing_without_a_string(data_utilities, capsys):
    program = Program()
    program.getMemory().add_block(".rdata", ADDR, b"\x01\x02")
    assert string.create_or_replace_string(program, Address(ADDR)) is False
    assert data_utilities.created == []
    assert "No valid string found at 005a0000" in capsys.readouterr().out


def test_exits_when_ghidra_refuses_the_string(monkeypatch, capsys):
    class Refusing(RecordingDataUtilities):
        @classmethod
        def createData(cls, *args):
            raise RuntimeError("conflicting data")

    monkeypatch.setattr(string, "DataUtilities", Refusing)
    program = Program()
    program.getMemory().add_block(".rdata", ADDR, b"text\0")
    with pytest.raises(SystemExit):
        string.create_or_replace_string(program, Address(ADDR))
    assert "Failed to create TerminatedCString at 005a0000: conflicting data" in capsys.readouterr().out


class Item:
    def __init__(self, value = None, error = None):
        self.value = value
        self.error = error

    def getValue(self):
        if self.error:
            raise self.error
        return self.value


def test_extract_string_value():
    assert string.extract_string_value(Item(b"x".decode())) == "x"
    assert string.extract_string_value(Item(42)) == "42"
    assert string.extract_string_value(Item(None)) is None


def test_extract_string_value_exits_on_error(capsys):
    with pytest.raises(SystemExit):
        string.extract_string_value(Item(error = ValueError("bad")))
    assert "Failed to extract string value: bad" in capsys.readouterr().out


# A string type that answers getCharsetName as Ghidra's do, from the settings it is handed
class CharsetType:
    def getCharsetName(self, settings):
        return settings.charset


class Settings:
    def __init__(self, charset):
        self.charset = charset


def test_detect_string_charset_asks_the_type_with_the_items_own_settings():
    assert string.detect_string_charset(Program(), Settings("UTF-16"), CharsetType()) == "UTF-16"


def test_detect_string_charset_exits_on_error(capsys):
    with pytest.raises(SystemExit):
        string.detect_string_charset(Program(), object(), CharsetType())
    assert "Failed to detect charset" in capsys.readouterr().out


class RecordingCharset:
    def __init__(self, error = None):
        self.calls = []
        self.error = error

    def setCharset(self, settings, charset):
        if self.error:
            raise self.error
        self.calls.append((settings, charset))


def test_apply_string_charset_sets_the_items_charset(monkeypatch):
    charset = RecordingCharset()
    monkeypatch.setattr(string.CharsetSettingsDefinition, "CHARSET", charset)
    item = Item("text")
    assert string.apply_string_charset(item, TerminatedStringDataType(), "UTF-8") is True
    assert charset.calls == [(item, "UTF-8")]


def test_apply_string_charset_exits_on_error(monkeypatch, capsys):
    monkeypatch.setattr(string.CharsetSettingsDefinition, "CHARSET", RecordingCharset(ValueError("unknown charset")))
    with pytest.raises(SystemExit):
        string.apply_string_charset(Item(), TerminatedStringDataType(), "EBCDIC")
    assert "Failed to apply charset 'EBCDIC': unknown charset" in capsys.readouterr().out
