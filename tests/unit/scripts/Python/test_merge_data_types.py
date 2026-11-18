# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
import ghidra_fake
import ghidra_program as gp
from repo_paths import SCRIPTS_DIR
import merge_data_types as mdt

INT = ghidra_fake.DataType("int", 4)


def struct(name, *fields, length = None):
    """A struct of (name, type) fields laid end to end."""
    return ghidra_fake.StructureDataType(name, [(t, n) for n, t in fields], length = length)


def corona(name, first = "row_min_x"):
    return struct(name, ("globe", INT), (first, INT), length = 12)


def export_entry(name, length, *fields):
    return {"name": name, "len": length,
            "fields": [{"name": n, "type": t, "offset": o, "len": ln} for n, t, o, ln in fields]}


@pytest.fixture(name = "exported")
def fixture_exported(tmp_path, monkeypatch):
    """A program whose export has the duplicate pair, a differing pair and a twice-defined name."""
    monkeypatch.setattr(mdt.sm, "ANNOTATIONS", str(tmp_path))
    folder = tmp_path / "game.exe" / "data_types"
    folder.mkdir(parents = True)
    structs = [export_entry("SCorona", 12, ("globe", "CDemonGlobe *", 0, 4), ("row_min_x", "int", 4, 4)),
               export_entry("SCoronaLightEntry", 12, ("globe", "CDemonGlobe*", 0, 4), ("left", "int", 4, 4)),
               export_entry("SWide", 16, ("globe", "CDemonGlobe*", 0, 4)),
               export_entry("SOther", 12, ("globe", "CDemonGlobe*", 0, 4), ("left", "float", 4, 4)),
               export_entry("SShort", 12, ("globe", "CDemonGlobe*", 0, 4)),
               export_entry("STwice", 12), export_entry("STwice", 12), {"name": "SNoLength"}, "junk"]
    (folder / "data_types.json").write_text(json.dumps({"structs": structs, "unions": [
        export_entry("UPair", 4, ("a", "int", 0, 4))]}), encoding = "utf-8")
    return tmp_path


def test_names_compare_without_spaces():
    assert mdt.norm("CDemonGlobe *") == "CDemonGlobe*" and mdt.norm(None) == ""


def test_export_layouts_read_structs_and_unions(exported):
    layouts = mdt.export_layouts("game.exe")
    assert layouts["SCorona"] == [(12, [(0, 4, "CDemonGlobe*"), (4, 4, "int")])]
    assert len(layouts["STwice"]) == 2 and "UPair" in layouts and "SNoLength" not in layouts


@pytest.mark.parametrize("merge, problems", [
    ({"from": "SCorona", "into": "SCoronaLightEntry"}, []),
    ({"from": "SCorona"}, ["needs both 'from' and 'into'"]),
    ({"from": "SCorona", "into": "SCorona"}, ["SCorona into itself"]),
    ({"from": "SGone", "into": "STwice"}, ["SGone is not in the program", "STwice is defined 2 times"]),
    ({"from": "SCorona", "into": "SWide"}, ["SCorona is 12 bytes, SWide 16"]),
    ({"from": "SCorona", "into": "SOther"}, ["SCorona and SOther differ at (4, 4, 'int') vs (4, 4, 'float')"]),
    ({"from": "SCorona", "into": "SShort"}, ["SCorona and SShort differ 2 vs 1 components"]),
])
def test_a_merge_needs_two_single_types_of_one_layout(exported, merge, problems):
    assert mdt.check(merge, mdt.export_layouts("game.exe")) == problems


def program_with(*types):
    program = gp.Program()
    program.data_type_manager.add(*types)
    return program


def test_live_layouts_take_exact_names_and_plain_types():
    near = corona("SCoronaX")
    program = program_with(corona("SCorona"), near, INT)
    dtm = program.getDataTypeManager()
    found = mdt.live_layouts(dtm, "SCorona")
    assert len(found) == 1 and found[0][0].getName() == "SCorona"
    assert found[0][1] == (12, [(0, 4, "int"), (4, 4, "int")])
    assert mdt.live_layouts(dtm, "int") == [(INT, (4, []))]


def test_live_layouts_skip_a_search_hit_of_another_name(monkeypatch):
    program = program_with(corona("SCorona"), corona("SCoronaX"))
    dtm = program.getDataTypeManager()

    def loose(name, found):
        for data_type in dtm.types:
            if data_type.getName().startswith(name):
                found.add(data_type)

    monkeypatch.setattr(dtm, "findDataTypes", loose)
    assert [dt.getName() for dt, _ in mdt.live_layouts(dtm, "SCorona")] == ["SCorona"]


def test_apply_merges_what_passes_and_refuses_the_rest():
    old, new = corona("SCorona"), corona("SCoronaLightEntry", "left_extents")
    program = program_with(old, new, struct("SWide", ("globe", INT), length = 16))
    report = mdt.apply(program, [{"from": "SCorona", "into": "SCoronaLightEntry"},
                                 {"from": "SCoronaLightEntry", "into": "SWide"}])
    assert [outcome for _, outcome in report] == ["merged", "refused: SCoronaLightEntry is 12 bytes, SWide 16"]
    assert program.data_type_manager.replaced == [(old, new)] and old not in program.data_type_manager.types
    assert program.transactions == [["Merge duplicate data types", True]]


def test_a_merge_that_leaves_the_duplicate_behind_fails(monkeypatch):
    program = program_with(corona("SCorona"), corona("SCoronaLightEntry"))
    monkeypatch.setattr(program.data_type_manager, "replaceDataType", lambda *_: None)
    assert [o for _, o in mdt.apply(program, [{"from": "SCorona", "into": "SCoronaLightEntry"}])] == [
        "FAILED: still present after the merge"]


def test_a_failure_mid_merge_rolls_the_transaction_back(monkeypatch):
    program = program_with(corona("SCorona"), corona("SCoronaLightEntry"))

    def broken(*_):
        raise RuntimeError("locked")

    monkeypatch.setattr(program.data_type_manager, "replaceDataType", broken)
    with pytest.raises(RuntimeError):
        mdt.apply(program, [{"from": "SCorona", "into": "SCoronaLightEntry"}])
    assert program.transactions == [["Merge duplicate data types", False]]


def write_spec(tmp_path, merges):
    path = tmp_path / "spec.json"
    path.write_text(json.dumps({"game.exe": merges}), encoding = "utf-8")
    return str(path)


def test_main_checks_the_export_then_applies_live(exported, tmp_path, monkeypatch, capsys):
    spec = write_spec(tmp_path, [{"from": "SCorona", "into": "SCoronaLightEntry"}])
    assert mdt.main([spec, "--program", "game.exe"]) == 0
    assert "1 merge(s) in the spec, 0 problem(s)" in capsys.readouterr().out
    assert mdt.main([spec, "--program", "game.exe", "--apply"]) == 2
    program = program_with(corona("SCorona"), corona("SCoronaLightEntry"))
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    assert mdt.main([spec, "--program", "game.exe", "--apply", "--project", str(tmp_path)]) == 0
    out = capsys.readouterr().out
    assert "SCorona -> SCoronaLightEntry: merged" in out and "Saved." in out
    assert program.getDomainFile().saves == 1 and pyghidra.closed == 1


def test_main_refuses_a_bad_spec_and_saves_nothing_when_live_refuses(exported, tmp_path, monkeypatch, capsys):
    bad = write_spec(tmp_path, [{"from": "SCorona", "into": "SWide"}])
    assert mdt.main([bad, "--program", "game.exe"]) == 1
    assert "SCorona -> SWide: SCorona is 12 bytes, SWide 16" in capsys.readouterr().out
    spec = write_spec(tmp_path, [{"from": "SCorona", "into": "SCoronaLightEntry"}])
    program = program_with(corona("SCorona"), struct("SCoronaLightEntry", ("globe", INT), length = 16))
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program))
    assert mdt.main([spec, "--program", "game.exe", "--apply", "--project", str(tmp_path)]) == 1
    assert program.getDomainFile().saves == 0 and "refused" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["merge_data_types.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "merge_data_types.py"), run_name = "__main__")
    assert exit_info.value.code == 0
