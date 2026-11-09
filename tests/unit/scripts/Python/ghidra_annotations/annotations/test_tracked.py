# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_fake import (ArrayDataType, EnumDataType, IntegerDataType, PointerDataType, StringDataType,
    StructureDataType, UnionDataType)
from ghidra_program import Program
from ghidra_annotations.annotations import (
    applied_arrays, applied_basic_types, applied_enums, applied_pointers, applied_strings, applied_structs,
    applied_unions, symbols_class, symbols_namespace)
from ghidra_annotations.util import load_json_files

POINT = StructureDataType("SPoint", [IntegerDataType("int", 4), IntegerDataType("int", 4)])
NUMBER = UnionDataType("UNumber", [IntegerDataType("int", 4)])
COLOR = EnumDataType("EColor", 4, {"RED": 0})
INT = IntegerDataType("int", 4)

# (module, the type applied, what its record holds besides addr, len and importable)
KINDS = [
    (applied_structs, POINT, {"name": "SPoint"}),
    (applied_unions, NUMBER, {"name": "UNumber"}),
    (applied_enums, COLOR, {"name": "EColor", "value": "1"}),
    (applied_arrays, ArrayDataType(INT, 3, 4), {"type": "int", "count": 3}),
    (applied_pointers, PointerDataType(POINT), {"type": "SPoint*", "to": "SPoint"}),
    (applied_basic_types, INT, {"type": "int", "value": "1"}),
]


def program_with(data_type, value = 1, at = 0x500000):
    program = Program()
    program.getMemory().add_block(".data", 0x500000, bytes(0x100))
    program.getDataTypeManager().add(POINT, NUMBER, COLOR, INT)
    program.getListing().add_data(at, data_type, value)
    return program


def name_of(module):
    return module.KIND.base


@pytest.mark.parametrize("module, data_type, fields", KINDS, ids = [k[0].KIND.base for k in KINDS])
def test_round_trips_through_export_import_export(tmp_path, module, data_type, fields):
    base = name_of(module)
    getattr(module, "export_" + base)(program_with(data_type), str(tmp_path))
    record = dict(fields, addr = "00500000", len = data_type.getLength(), importable = True)
    assert load_json_files(str(tmp_path), base) == [record]

    target = program_with(None, at = 0x500080)
    getattr(module, "import_" + base)(target, str(tmp_path))
    applied = target.getListing().getDefinedDataAt(target.space.getAddress(0x500000))
    assert applied.getDataType().getName() == data_type.getName()
    assert applied.getLength() == data_type.getLength()


@pytest.mark.parametrize("module, data_type, fields", KINDS, ids = [k[0].KIND.base for k in KINDS])
def test_each_kind_tracks_only_its_own_types(tmp_path, module, data_type, fields):
    program = program_with(data_type)
    for other, other_type, _ in KINDS:
        if other is not module:
            program.getListing().add_data(0x500040 + 8 * KINDS.index((other, other_type, _)), other_type)
    getattr(module, "export_" + name_of(module))(program, str(tmp_path))
    assert [r["addr"] for r in load_json_files(str(tmp_path), name_of(module))] == ["00500000"]


def write_records(path, base, records):
    (path / base).mkdir(parents = True)
    (path / base / f"{base}_bucket_00.json").write_text(json.dumps(records), encoding = "utf-8")


def test_the_importable_flag_survives_a_re_export_and_new_records_start_importable(tmp_path):
    write_records(tmp_path, "applied_structs", [{"addr": "00500000", "importable": False}])
    program = program_with(POINT)
    program.getListing().add_data(0x500040, POINT)
    applied_structs.export_applied_structs(program, str(tmp_path))
    assert {r["addr"]: r["importable"] for r in load_json_files(str(tmp_path), "applied_structs")} == {
        "00500000": False, "00500040": True}


def test_only_importable_records_are_imported(tmp_path):
    write_records(tmp_path, "applied_structs", [
        {"addr": "00500000", "name": "SPoint", "importable": False},
        {"addr": "00500040", "name": "SPoint", "len": 8, "importable": True},
        {"addr": "00500050", "name": "SMissing", "importable": True},
        {"name": "SPoint", "importable": True},
        {"addr": "00900000", "name": "SPoint", "importable": True}])
    program = program_with(None, at = 0x500080)
    applied_structs.import_applied_structs(program, str(tmp_path))
    assert sorted(str(a) for a, d in program.getListing().data.items() if d.getDataType()) == ["00500040"]
    assert program.transactions == [["Import Applied Structs", True]]


@pytest.mark.parametrize("module, data_type, fields", KINDS, ids = [k[0].KIND.base for k in KINDS])
def test_delete_leaves_applied_data_for_the_import_to_replace(tmp_path, capsys, module, data_type, fields):
    program = program_with(data_type)
    getattr(module, "export_" + name_of(module))(program, str(tmp_path))
    getattr(module, "delete_" + name_of(module))(program, str(tmp_path))
    assert list(program.getListing().data) == [program.space.getAddress(0x500000)]
    assert program.transactions == []
    assert "replaces applied " in capsys.readouterr().out


def test_data_already_of_the_recorded_type_is_left_alone_and_other_data_replaced(tmp_path):
    write_records(tmp_path, "applied_structs", [
        {"addr": "00500000", "name": "SPoint", "len": 8, "importable": True},
        {"addr": "00500040", "name": "SPoint", "len": 8, "importable": True},
        {"addr": "00500060", "name": "SPoint", "len": 8, "importable": True}])
    program = program_with(POINT)
    kept = program.getListing().getDefinedDataAt(program.space.getAddress(0x500000))
    program.getListing().add_data(0x500040, NUMBER)
    program.getListing().add_data(0x500060, StructureDataType("SOther", [INT, INT]))
    applied_structs.import_applied_structs(program, str(tmp_path))
    listing = program.getListing()
    assert listing.getDefinedDataAt(program.space.getAddress(0x500000)) is kept
    assert listing.getDefinedDataAt(program.space.getAddress(0x500040)).getDataType() is POINT
    assert listing.getDefinedDataAt(program.space.getAddress(0x500060)).getDataType() is POINT


def test_a_kind_with_nothing_importable_deletes_nothing(tmp_path):
    program = Program()
    program.getSymbolTable().createClass(program.getGlobalNamespace(), "CGame", "USER_DEFINED")
    symbols_class.delete_symbols_class(program, str(tmp_path))
    assert program.transactions == []


def test_an_array_of_an_unknown_element_is_skipped(tmp_path):
    write_records(tmp_path, "applied_arrays", [
        {"addr": "00500000", "type": "SMissing", "count": 2, "importable": True},
        {"addr": "00500010", "count": 2, "importable": True}])
    program = program_with(None, at = 0x500080)
    applied_arrays.import_applied_arrays(program, str(tmp_path))
    assert [d.getDataType() for d in program.getListing().data.values()] == [None]


def test_a_pointer_whose_type_is_unknown_is_rebuilt_from_its_pointee(tmp_path):
    write_records(tmp_path, "applied_pointers", [
        {"addr": "00500000", "type": "SPoint * __ptr32", "to": "SPoint", "len": 4, "importable": True},
        {"addr": "00500010", "type": "SNone *x", "to": "SNone", "importable": True}])
    program = program_with(None, at = 0x500080)
    applied_pointers.import_applied_pointers(program, str(tmp_path))
    pointer = program.getListing().getDefinedDataAt(program.space.getAddress(0x500000)).getDataType()
    assert isinstance(pointer, PointerDataType)
    assert pointer.getDataType() is POINT
    assert program.getListing().getDefinedDataAt(program.space.getAddress(0x500010)) is None


def test_a_void_pointer_records_void(tmp_path):
    applied_pointers.export_applied_pointers(program_with(PointerDataType(None)), str(tmp_path))
    assert load_json_files(str(tmp_path), "applied_pointers")[0]["to"] == "void"


def test_strings_record_and_restore_their_charset(tmp_path, monkeypatch):
    charsets = []
    monkeypatch.setattr(applied_strings, "detect_string_charset", lambda program, data, dt: "UTF-8")
    monkeypatch.setattr(applied_strings, "extract_string_value", lambda data: "hello")
    monkeypatch.setattr(applied_strings, "apply_string_charset",
        lambda data, dt, charset: charsets.append((str(data.getMinAddress()), charset)))
    string = StringDataType()
    program = program_with(string)
    program.getDataTypeManager().add(string)
    applied_strings.export_applied_strings(program, str(tmp_path))
    records = load_json_files(str(tmp_path), "applied_strings")
    assert len(records) == 1
    record = records[0]
    assert (record["charset"], record["value"], record["importable"]) == ("UTF-8", "hello", True)

    record.pop("charset")
    write_records(tmp_path / "plain", "applied_strings", [dict(record, addr = "00500010")])
    target = program_with(None, at = 0x500080)
    target.getDataTypeManager().add(string)
    applied_strings.import_applied_strings(target, str(tmp_path))
    applied_strings.import_applied_strings(target, str(tmp_path / "plain"))
    assert charsets == [("00500000", "UTF-8")]
    assert target.getListing().getDefinedDataAt(target.space.getAddress(0x500010)) is not None

    applied_strings.delete_applied_strings(program, str(tmp_path))
    assert program.getListing().getDefinedDataAt(program.space.getAddress(0x500000)) is not None


# --- namespaces and classes -----------------------------------------------------------------------

def namespaces(program):
    return sorted((s.getName(), s.getParentNamespace().getName(), s.symbol_type)
                  for s in program.getSymbolTable().symbols if s.symbol_type != "LABEL")


def program_with_namespaces():
    program = Program()
    table = program.getSymbolTable()
    top = table.createNameSpace(program.getGlobalNamespace(), "core", "USER_DEFINED")
    table.createClass(top, "CGame", "USER_DEFINED")
    table.createClass(program.getGlobalNamespace(), "CMenu", "USER_DEFINED")
    external = table.createClass(program.getGlobalNamespace(), "CExternal", "IMPORTED")
    table.symbols[-1].external = True
    table.createLabel(Program().space.getAddress(0x401000), "a_label", "USER_DEFINED")
    assert external.getName() == "CExternal"
    return program


def test_top_level_and_nested_namespaces_are_both_exported(tmp_path):
    symbols_namespace.export_symbols_namespace(program_with_namespaces(), str(tmp_path))
    assert load_json_files(str(tmp_path), "symbols_namespace") == [
        {"name": "core", "parent": "Global", "importable": True}]


def test_classes_round_trip_under_their_parents(tmp_path):
    symbols_class.export_symbols_class(program_with_namespaces(), str(tmp_path))
    assert sorted(load_json_files(str(tmp_path), "symbols_class"), key = lambda r: r["name"]) == [
        {"name": "CGame", "parent": "core", "importable": True},
        {"name": "CMenu", "parent": "Global", "importable": True}]
    target = Program()
    symbols_class.import_symbols_class(target, str(tmp_path))
    symbols_class.import_symbols_class(target, str(tmp_path))
    assert namespaces(target) == [("CGame", "core", "CLASS"), ("CMenu", "Global", "CLASS"),
                                  ("core", "Global", "NAMESPACE")]


def test_namespaces_import_and_delete(tmp_path):
    write_records(tmp_path, "symbols_namespace", [
        {"name": "core", "parent": "Global", "importable": True}, {"name": "kept", "importable": False},
        {"parent": "Global", "importable": True}])
    program = Program()
    symbols_namespace.import_symbols_namespace(program, str(tmp_path))
    assert namespaces(program) == [("core", "Global", "NAMESPACE")]
    symbols_namespace.delete_symbols_namespace(program, str(tmp_path))
    assert namespaces(program) == []


def test_classes_delete(tmp_path):
    program = program_with_namespaces()
    symbols_class.export_symbols_class(program, str(tmp_path))
    symbols_class.delete_symbols_class(program, str(tmp_path))
    assert namespaces(program) == [("CExternal", "Global", "CLASS"), ("core", "Global", "NAMESPACE")]
