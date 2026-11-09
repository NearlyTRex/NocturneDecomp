# Imports
import json

# Local imports
from ghidra_program import Address, Program
from ghidra_annotations.annotations.equates import delete_equates, export_equates, import_equates
from ghidra_annotations.util import load_json_files


def program_with_equates():
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x100))
    table = program.getEquateTable()
    unhandled = table.createEquate("PREPROCESS_UNHANDLED", 0)
    unhandled.addReference(Address(0x401020), 1)
    unhandled.addReference(Address(0x401010), 0)
    table.createEquate("UNUSED", 7)
    return program


def equates(program):
    return {e.getName(): (e.getValue(), sorted((str(r.getAddress()), r.getOpIndex()) for r in e.getReferences()))
            for e in program.getEquateTable().getEquates()}


def test_equates_round_trip_with_only_the_references_they_are_applied_to(tmp_path):
    source = program_with_equates()
    export_equates(source, str(tmp_path))
    assert sorted(load_json_files(str(tmp_path), "equates"), key = lambda e: e["name"]) == [
        {"name": "PREPROCESS_UNHANDLED", "value": 0, "importable": True,
         "refs": [{"addr": "00401010", "opIndex": 0}, {"addr": "00401020", "opIndex": 1}]},
        {"name": "UNUSED", "value": 7, "importable": True}]

    target = Program()
    target.getMemory().add_block(".text", 0x401000, bytes(0x100))
    target.getEquateTable().createEquate("UNUSED", 7)
    import_equates(target, str(tmp_path))
    assert equates(target) == equates(source)


def test_records_without_a_name_or_value_and_unmapped_references_are_skipped(tmp_path):
    (tmp_path / "equates").mkdir()
    (tmp_path / "equates" / "equates_bucket_00.json").write_text(json.dumps([
        {"name": "NO_VALUE", "importable": True}, {"value": 3, "importable": True},
        {"name": "FAR", "value": 1, "importable": True, "refs": [{"addr": "00900000"}, {"addr": "00401000"}]}]),
        encoding = "utf-8")
    target = Program()
    target.getMemory().add_block(".text", 0x401000, bytes(0x100))
    import_equates(target, str(tmp_path))
    assert equates(target) == {"FAR": (1, [("00401000", 0)])}


def test_delete_removes_the_importable_equates(tmp_path):
    program = program_with_equates()
    (tmp_path / "equates").mkdir()
    (tmp_path / "equates" / "equates_bucket_00.json").write_text(json.dumps([
        {"name": "PREPROCESS_UNHANDLED", "importable": True}, {"name": "UNUSED", "importable": False}]),
        encoding = "utf-8")
    delete_equates(program, str(tmp_path))
    assert list(equates(program)) == ["UNUSED"]
