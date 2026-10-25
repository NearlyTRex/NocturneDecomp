# Third-party imports
import pytest

# Local imports
from ghidra_program import Address, Namespace, Program, Symbol
from ghidra_fake import (ArrayDataType, BuiltInDataType, DataType, DefaultDataType, PointerDataType,
                         StructureDataType, TerminatedStringDataType, TypedefDataType)
from ghidra_annotations.util import label

ADDR = 0x5a0010


class SpacedAddress(Address):
    def toString(self):
        return "ram:0x5A0010"


def test_address_suffix_is_lower_case_without_prefix_or_space_separator():
    assert label.get_data_label_address_suffix(Address(ADDR)) == "005a0010"
    assert label.get_data_label_address_suffix(SpacedAddress(ADDR)) == "ram_5a0010"


@pytest.mark.parametrize("type_obj, name", [
    (BuiltInDataType("dword"), "DWORD"),
    (StructureDataType("CVector3f"), "CVector3f"),
    (TypedefDataType("HANDLE", PointerDataType(BuiltInDataType("void"))), "HANDLE"),
    (PointerDataType(StructureDataType("CHero")), "CHero_PTR"),
    (ArrayDataType(PointerDataType(BuiltInDataType("char")), 4, 4), "CHAR_PTR_ARRAY"),
    (PointerDataType(None), "PTR"),
    (ArrayDataType(PointerDataType(None), 2, 4), "ARRAY_PTR"),
    (DataType("unsigned short[3]"), "unsigned_short"),
    (StructureDataType("A" * 50), "A" * 40),
])
def test_type_name_peels_wrappers_innermost_first(type_obj, name):
    assert label.get_data_label_type_name(type_obj) == name


def data_at(program, data_type, value = None, **kwargs):
    return program.getListing().add_data(ADDR, data_type, value, **kwargs)


def test_label_name_for_strings_typed_data_and_nothing():
    program = Program()
    string = data_at(program, TerminatedStringDataType(), "Can't find %s!")
    assert label.get_data_label_name(string, "005a0010") == "s_Can_t_find_s_005a0010"
    empty_string = data_at(program, TerminatedStringDataType(), "")
    assert label.get_data_label_name(empty_string, "005a0010") == "g_TERMINATEDCSTRING_005a0010"
    assert label.get_data_label_name(data_at(program, BuiltInDataType("int")), "x") == "g_INT_x"
    assert label.get_data_label_name(data_at(program, None, length = 1), "x") is None
    assert label.get_data_label_name(data_at(program, DataType("***")), "x") is None


@pytest.mark.parametrize("symbol, labeled", [
    (None, False),
    (Symbol("DAT_005a0010", Address(ADDR), dynamic = True), False),
    (Symbol("x", Address(ADDR), source = label.SourceType.DEFAULT), False),
    (Symbol("g_name", Address(ADDR), source = label.SourceType.USER_DEFINED), True),
])
def test_has_user_label(symbol, labeled):
    program = Program()
    if symbol:
        program.getSymbolTable().symbols.append(symbol)
    assert label.has_user_label(program.getSymbolTable(), Address(ADDR)) is labeled


def test_creates_a_user_label_in_global(capsys):
    program = Program()
    data = data_at(program, BuiltInDataType("float"))
    assert label.create_label_for_data(program, data) is True
    symbol = program.getSymbolTable().getPrimarySymbol(Address(ADDR))
    assert (symbol.getName(), symbol.getParentNamespace()) == ("g_FLOAT_005a0010", program.getGlobalNamespace())
    assert str(symbol.getSource()) == "USER_DEFINED"
    assert "Creating label 'g_FLOAT_005a0010' at 005a0010 (float)" in capsys.readouterr().out


def test_creates_the_label_in_a_given_namespace():
    program = Program()
    namespace = Namespace("CMoon", program.getGlobalNamespace())
    label.create_label_for_data(program, data_at(program, BuiltInDataType("int")), namespace)
    assert program.getSymbolTable().getPrimarySymbol(Address(ADDR)).getParentNamespace() is namespace


@pytest.mark.parametrize("make, message", [
    (lambda program: data_at(program, BuiltInDataType("int"), defined = False), "no data type applied"),
    (lambda program: data_at(program, DefaultDataType.dataType), "no data type applied"),
])
def test_skips_data_with_nothing_applied(make, message, capsys):
    program = Program()
    assert label.create_label_for_data(program, make(program)) is False
    assert message in capsys.readouterr().out
    assert program.getSymbolTable().symbols == []


def test_never_replaces_an_existing_label(capsys):
    program = Program()
    program.getSymbolTable().symbols.append(Symbol("g_keep", Address(ADDR)))
    assert label.create_label_for_data(program, data_at(program, BuiltInDataType("int"))) is False
    assert "already labeled 'g_keep'" in capsys.readouterr().out


def test_exits_when_no_label_can_be_derived(capsys):
    program = Program()
    with pytest.raises(SystemExit):
        label.create_label_for_data(program, data_at(program, DataType("***")))
    assert "Failed to derive a label for data at 005a0010" in capsys.readouterr().out


def test_exits_when_ghidra_refuses_the_label(capsys):
    program = Program()

    def refuse(*args):
        raise ValueError("duplicate name")

    program.getSymbolTable().createLabel = refuse
    with pytest.raises(SystemExit):
        label.create_label_for_data(program, data_at(program, BuiltInDataType("int")))
    assert "Failed to create label at 005a0010: duplicate name" in capsys.readouterr().out


def test_create_label_at_address_labels_the_data_containing_it():
    program = Program()
    data_at(program, ArrayDataType(BuiltInDataType("int", 4), 4, 4))
    assert label.create_label_at_address(program, Address(ADDR + 6)) == 1
    assert label.create_label_at_address(program, Address(ADDR + 6)) == 0
    assert label.create_label_at_address(program, Address(0x600000)) == 0


def test_create_labels_in_range_counts_what_it_labeled():
    program = Program()
    program.getListing().add_data(0x5a0000, BuiltInDataType("int"))
    program.getListing().add_data(0x5a0004, BuiltInDataType("int"), defined = False)
    program.getListing().add_data(0x5a0008, DefaultDataType.dataType)
    program.getListing().add_data(0x5a000c, BuiltInDataType("float"))
    assert label.create_labels_in_range(program, None) == 2
    assert [symbol.getName() for symbol in program.getSymbolTable().symbols] == [
        "g_INT_005a0000", "g_FLOAT_005a000c"]
