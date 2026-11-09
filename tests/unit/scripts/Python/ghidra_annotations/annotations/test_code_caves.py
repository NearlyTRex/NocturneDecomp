# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_program import Program
from ghidra_annotations.annotations.code_caves import export_code_caves


def program_with_markers(*markers):
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x100))
    program.getMemory().add_block(".data", 0x500000, bytes(0x10))
    for address, plate in markers:
        program.getListing().add_data(address, None).comments["PLATE_COMMENT"] = plate
    return program


def read(path):
    return json.loads((path / "code_caves.json").read_text(encoding = "utf-8"))


def test_markers_become_caves_and_keep_their_recorded_allocations(tmp_path):
    (tmp_path / "code_caves.json").write_text(json.dumps({"caves": [
        {"start": "00401080", "allocations": [{"name": "thunk"}]},
        {"start": "00409999", "allocations": [{"name": "gone"}]}]}), encoding = "utf-8")
    program = program_with_markers(
        (0x401080, "CODE_CAVE late 64 16"), (0x401000, "  CODE_CAVE early 32  "),
        (0x401040, "CODE_CAVE malformed"), (0x401050, "a plain comment"), (0x500000, None))
    program.getListing().add_data(0x600000, None).comments["PLATE_COMMENT"] = "CODE_CAVE unmapped 8"
    export_code_caves(program, str(tmp_path))
    assert read(tmp_path) == {"caves": [
        {"name": "early", "start": "00401000", "total_size": 32, "free_offset": 0, "allocations": []},
        {"name": "late", "start": "00401080", "total_size": 64, "free_offset": 16,
         "allocations": [{"name": "thunk"}]}]}


def test_writes_into_a_new_folder(tmp_path):
    export_code_caves(program_with_markers((0x401000, "CODE_CAVE c 4")), str(tmp_path / "new"))
    assert read(tmp_path / "new")["caves"][0]["name"] == "c"


def test_no_markers_writes_nothing(tmp_path, capsys):
    export_code_caves(program_with_markers(), str(tmp_path))
    assert not (tmp_path / "code_caves.json").exists()
    assert "No code caves found" in capsys.readouterr().out


def test_no_markers_left_removes_the_stale_file(tmp_path, capsys):
    (tmp_path / "code_caves.json").write_text('{"caves": [{"start": "00401000"}]}', encoding = "utf-8")
    export_code_caves(program_with_markers(), str(tmp_path))
    assert not (tmp_path / "code_caves.json").exists()
    assert "removed code_caves.json" in capsys.readouterr().out


def test_an_unreadable_file_stops_the_export_rather_than_lose_its_allocations(tmp_path):
    (tmp_path / "code_caves.json").write_text("{not json", encoding = "utf-8")
    with pytest.raises(json.JSONDecodeError):
        export_code_caves(program_with_markers((0x401000, "CODE_CAVE c 4")), str(tmp_path))
    assert (tmp_path / "code_caves.json").read_text(encoding = "utf-8") == "{not json"
