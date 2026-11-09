# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import install_programs, write_bucket
import audit_vtable_typing as avt


def table(addr, count):
    return {"addr": addr, "count": count}


@pytest.fixture(name = "program")
def fixture_program(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)])
    annotations = install_programs(monkeypatch, tmp_path, {"game.exe": (pe, [])})
    write_bucket(annotations, "game.exe", "vtables", [
        table("00500000", 2), table("00500100", 3), table("00500200", 2), table("00500300", 4),
        table("00500400", 5), table("00500500", 1)])
    write_bucket(annotations, "game.exe", "applied_structs", [
        {"addr": "00500000", "name": "CRight_vtable", "len": 8},
        {"addr": "00500100", "name": "CShort_vtable", "len": 8},
        {"addr": "00500200", "name": "CFields_vtable"},
        {"addr": "00500300", "name": "CEmpty_vtable"}, "not a record", {"name": "no address"}])
    (annotations / "game.exe" / "applied_structs" / "applied_structs_buckets.json").write_text("{}")
    write_bucket(annotations, "game.exe", "symbols_label", [
        {"addr": "00500100", "name": "g_CShortVTable"}, {"addr": "00500400", "name": "g_CBareVTable"}])
    (annotations / "game.exe" / "data_types").mkdir()
    (annotations / "game.exe" / "data_types" / "data_types.json").write_text(json.dumps({"structs": [
        {"name": "CFields_vtable", "fields": [{"offset": 0, "len": 4}, {"offset": 4}]},
        {"name": "CEmpty_vtable", "fields": []}]}))
    return "game.exe"


def test_a_struct_is_as_long_as_its_last_field_reaches():
    structs = {"S": {"fields": [{"offset": 0, "len": 4}, {"offset": 8, "len": 2}, {"offset": "4"}]}}
    assert avt.struct_length(structs, "S") == 10
    assert avt.struct_length(structs, "missing") is None


def test_each_typed_table_is_checked_against_four_bytes_a_slot(program):
    bad, good, unknown, untyped, labels = avt.audit(program)
    assert good == 2 and unknown == 1
    assert bad == [("00500100", "g_CShortVTable", "CShort_vtable", 8, 12, 3)]
    assert [t["addr"] for t in untyped] == ["00500400", "00500500"]
    assert labels["00500400"] == "g_CBareVTable"


def test_the_report_lists_mistyped_and_named_untyped_tables(program, capsys):
    avt.main([program])
    out = capsys.readouterr().out
    assert "  MISTYPED  1" in out
    assert "00500100 g_CShortVTable             CShort_vtable            struct 8 bytes vs 3 slots x4 = 12" in out
    assert "tables with NO struct applied: 2 of 6" in out
    assert "of those, 1 carry a g_C*VTable name" in out
    assert "00500400 g_CBareVTable                5 slots" in out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["audit_vtable_typing.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "audit_vtable_typing.py"), run_name = "__main__")
    assert exit_info.value.code == 0
