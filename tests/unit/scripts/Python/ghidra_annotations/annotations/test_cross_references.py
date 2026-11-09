# Imports
import importlib
import json

# Third-party imports
import pytest

# Local imports
from ghidra_program import Program
from ghidra_annotations.annotations import cross_references as xr
from ghidra_annotations.util import load_json_files

RefType = importlib.import_module("ghidra.program.model.symbol").RefType


def program_with_references():
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x100))
    program.getMemory().add_block(".data", 0x500000, bytes(0x100))
    refs = program.getReferenceManager()
    refs.add(0x401010, 0x500000, kind = "DATA", operand = 1)
    refs.add(0x401000, 0x401080, call = True)
    refs.add(0x401000, 0x500010, kind = "DATA", primary = False)
    refs.add(0x700000, 0x401000, kind = "DATA")
    return program


def records(path):
    return load_json_files(str(path), "cross_references")


def test_exports_each_reference_in_address_order(tmp_path):
    (tmp_path / "cross_references").mkdir()
    (tmp_path / "cross_references" / "cross_references_bucket_00.json").write_text(json.dumps([
        {"from": "00401000", "to": "00401080", "importable": False}]), encoding = "utf-8")
    xr.export_cross_references(program_with_references(), str(tmp_path))
    assert sorted(records(tmp_path), key = lambda r: (r["from"], r["to"])) == [
        {"from": "00401000", "to": "00401080", "type": "UNCONDITIONAL_CALL", "importable": False},
        {"from": "00401000", "to": "00500010", "type": "DATA", "non_primary": True, "importable": True},
        {"from": "00401010", "to": "00500000", "type": "DATA", "operand": 1, "importable": True}]


@pytest.mark.parametrize("text, rank", [
    ("00401000", (0, 0x401000)), ("Stack[-0x8]", (1, -8)), ("Stack[0x10]", (1, 16)), ("Stack[?]", (1, 0)),
    ("register:0004", (2, 4)), ("register:EAX", (2, 0)), ("register", (2, 0)), ("const:0x5", (3, 0)),
    ("EXTERNAL:00000001", (4, 1)), ("ram:0x401000", (0, 0x401000)), ("ram:?", (0, 0)), ("odd", (10, 0)),
    ("", (999, 0))])
def test_addresses_sort_by_space_then_offset(text, rank):
    assert xr.get_sortable_address_value(text)[:2] == rank


@pytest.mark.parametrize("name, ref_type", [
    ("READ_WRITE", "READ_WRITE"), ("INDIRECT_CALL", "UNCONDITIONAL_CALL"), ("ODD_JUMP", "UNCONDITIONAL_JUMP"),
    ("READ_IND", "READ"), ("WRITE_IND", "WRITE"), ("THUNK", "DATA")])
def test_reference_types_resolve_by_name_or_the_kind_they_mention(name, ref_type):
    assert xr.resolve_ref_type(name) is getattr(RefType, ref_type)


def write(path, entries):
    (path / "cross_references").mkdir()
    (path / "cross_references" / "cross_references_bucket_00.json").write_text(json.dumps(entries), encoding = "utf-8")


def test_import_recreates_missing_memory_references_only(tmp_path, capsys):
    write(tmp_path, [
        {"from": "00401000", "to": "00500000", "type": "DATA", "operand": 1, "importable": True},
        {"from": "00401004", "to": "00500004", "type": "READ", "non_primary": True, "importable": True},
        {"from": "00401008", "to": "00500008", "type": "READ", "importable": True},
        {"from": "0040100c", "to": "EXTERNAL:00000001", "type": "DATA", "importable": True},
        {"from": "00401010", "to": "00900000", "type": "DATA", "importable": True},
        {"from": "00401014", "to": "00500000", "type": "DATA", "importable": False},
        {"from": "00401018", "to": "00500000", "importable": True}])
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x100))
    program.getMemory().add_block(".data", 0x500000, bytes(0x100))
    refs = program.getReferenceManager()
    existing = refs.addMemoryReference(program.space.getAddress(0x401008), program.space.getAddress(0x500008),
                                       RefType.READ, None, 0)
    xr.import_cross_references(program, str(tmp_path))
    made = [(str(r.getFromAddress()), str(r.getToAddress()), r.getOperandIndex(), r.isPrimary())
            for r in refs.references if r is not existing]
    assert made == [("00401000", "00500000", 1, True), ("00401004", "00500004", 0, False)]
    assert "Imported 2 cross references, skipped 2, left 2 that are not memory references" in capsys.readouterr().out


def test_delete_removes_the_importable_memory_references_only(tmp_path):
    program = program_with_references()
    program.getReferenceManager().add(0x401020, 0x8).destination.memory = False
    program.getReferenceManager().add(0x401024, 0x100)
    write(tmp_path, [{"from": "00401000", "to": "00401080", "importable": True},
                     {"from": "00401010", "to": "00500000", "operand": 1, "importable": False},
                     {"from": "00401020", "to": "00000008", "importable": True},
                     {"from": "00401024", "to": "00000100", "importable": True}])
    xr.delete_cross_references(program, str(tmp_path))
    assert sorted(str(r.getToAddress()) for r in program.getReferenceManager().references) == [
        "00000008", "00000100", "00401000", "00500000", "00500010"]


def test_delete_with_nothing_importable_does_nothing(tmp_path):
    program = program_with_references()
    xr.delete_cross_references(program, str(tmp_path))
    assert program.transactions == []
