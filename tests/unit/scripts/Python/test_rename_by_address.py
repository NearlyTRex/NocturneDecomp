# Imports
import importlib
import json
import os
import runpy
import sys
from pathlib import Path

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, StructureDataType
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, write_bucket
import rename_by_address as rba

# The faked Ghidra module's, so it is the constant the script compares against
SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

OLD_F = "core_dstrender.cpp_memcpyMMX_FUN_00401000"
NEW_F = "core_dstrendr.cpp_memcpyMMX_FUN_00401000"
CALLER_KEEP = "core/dcamera.cpp/CDemonCamera_end_FUN_00401100.keep.cpp"


def pe():
    return build_sectioned_pe([(".text", b"\xc3" * 0x200, SECTION_EXECUTE)])


@pytest.fixture(name = "annotations")
def fixture_annotations(monkeypatch, tmp_path):
    annotations = install_programs(monkeypatch, tmp_path, {"game.exe": (pe(), [
        function(0x401000, OLD_F), function(0x401100, "core_dcamera.cpp_CDemonCamera_end_FUN_00401100"),
        function(0x401200, "FUN_00401200")])})
    write_bucket(annotations, "game.exe", "symbols_label", [
        {"addr": "00402000", "name": "g_Old"}, {"addr": "00402010", "name": "g_Taken"}, {"name": "no address"}])
    src = annotations / "game.exe" / "pseudocode" / "src"
    keeps = {"core/dstrender.cpp/memcpyMMX_FUN_00401000.keep.cpp": f"// Name: {OLD_F}\nvoid core_dstrender_cpp_memcpyMMX_FUN_00401000(void) {{}}\n",
             CALLER_KEEP: "  core_dstrender_cpp_memcpyMMX_FUN_00401000();\n",
             "core/other.cpp/f_FUN_00401300.keep.c": "untouched\n"}
    for rel, text in keeps.items():
        (src / rel).parent.mkdir(parents = True, exist_ok = True)
        (src / rel).write_text(text)
    return annotations


MANIFEST = {"game.exe": {
    "labels": [{"addr": "00402000", "name": "g_New", "expect": "g_Old", "type": "CThing*"},
               {"addr": "00402020", "name": "g_Fresh"}],
    "functions": [{"addr": "00401000", "name": NEW_F, "expect": OLD_F}]}}


def test_current_names_come_from_the_exports(annotations):
    names = rba.current_names("game.exe")
    assert names["labels"] == {"00402000": "g_Old", "00402010": "g_Taken"}
    assert names["functions"]["00401000"] == OLD_F


@pytest.mark.parametrize("kind, row, want", [
    ("functions", {"addr": "00409999", "name": "x"}, "no function there"),
    ("functions", {"addr": "00401000", "name": "core_a.cpp_f_FUN_00409999"}, "suffix is not its address"),
    ("labels", {"addr": "00402000", "name": "g_X", "expect": "g_Other"}, "is g_Old, not g_Other"),
    ("labels", {"addr": "00402000", "name": "g_Taken"}, "name used at 00402010"),
    ("labels", {"addr": "00402000", "name": "g_X", "expect": "g_Old"}, None),
])
def test_a_row_is_refused_for_what_would_go_wrong(kind, row, want):
    current = {"labels": {"00402000": "g_Old", "00402010": "g_Taken"}, "functions": {"00401000": OLD_F}}
    taken = {"g_Old": "00402000", "g_Taken": "00402010"}
    assert rba.row_problem(kind, row, current, taken) == want


def test_a_name_given_twice_or_already_in_place_is_not_renamed():
    names = {"labels": {"0000000a": "g_Same"}, "functions": {}}
    manifest = {"p.exe": {"labels": [{"addr": "0000000A", "name": "g_Same"}, {"addr": "b", "name": "g_Two"},
                                     {"addr": "c", "name": "g_Two"}]}}
    rows = rba.plan(manifest, names_of = lambda _program: names)["p.exe"]
    assert [r["status"] for r in rows["labels"]] == ["same", "name given twice in the manifest",
                                                     "name given twice in the manifest"]
    assert rows["functions"] == []


def test_a_keep_lives_in_its_units_folder():
    assert rba.keep_place(OLD_F) == (os.path.join("core", "dstrender.cpp"), "memcpyMMX_FUN_00401000")
    assert rba.keep_place("FUN_00401000") == ("", "FUN_00401000")


def test_keeps_move_with_the_function_and_every_mention_is_renamed(annotations):
    root = str(annotations / "game.exe" / "pseudocode" / "src")
    planned = rba.sync_keeps(root, [(OLD_F, NEW_F)])
    moved = os.path.join(root, "core", "dstrendr.cpp", "memcpyMMX_FUN_00401000.keep.cpp")
    assert [(os.path.relpath(p, root), t, changed) for p, t, changed in planned] == [
        (CALLER_KEEP, None, True),
        ("core/dstrender.cpp/memcpyMMX_FUN_00401000.keep.cpp", moved, True)]
    rba.sync_keeps(root, [(OLD_F, NEW_F)], write = True)
    assert Path(moved).read_text(encoding = "utf-8") == (
        f"// Name: {NEW_F}\nvoid core_dstrendr_cpp_memcpyMMX_FUN_00401000(void) {{}}\n")
    assert not os.path.exists(os.path.join(root, "core", "dstrender.cpp", "memcpyMMX_FUN_00401000.keep.cpp"))
    assert (Path(root) / CALLER_KEEP).read_text(encoding = "utf-8") == (
        "  core_dstrendr_cpp_memcpyMMX_FUN_00401000();\n")


def test_the_report_lists_renames_skips_and_keeps(annotations, capsys):
    manifest = json.loads(json.dumps(MANIFEST))
    manifest["game.exe"]["labels"] += [{"addr": "00402030", "name": "g_Old"},
                                       {"addr": "00402010", "name": "g_Taken"}]
    rba.print_report(rba.plan(manifest))
    out = capsys.readouterr().out
    assert "game.exe labels: 2 to rename, 1 of 4 skipped" in out
    assert "00402000  g_Old -> g_New  (CThing*)" in out and "00402020  None -> g_Fresh\n" in out
    assert "SKIP 00402030  g_Old: name used at 00402000" in out and "g_Taken" not in out
    assert "game.exe keeps: 1 moved, 2 rewritten" in out
    rba.print_report(rba.plan({"game.exe": {}}))
    assert "keeps" not in capsys.readouterr().out


def program_for():
    program = Program()
    program.getDataTypeManager().add(StructureDataType("CThing", length = 8))
    program.getMemory().add_block("DGROUP", 0x402000, bytes(0x10))
    symbols = program.getSymbolTable()
    symbols.createLabel(Address(0x402000), "g_Old", SourceType.USER_DEFINED)
    symbols.createLabel(Address(0x402040), "g_Moved", SourceType.USER_DEFINED)
    symbols.createLabel(Address(0x402050), "g_Far", SourceType.USER_DEFINED)
    fm = program.getFunctionManager()
    fm.add(OLD_F, 0x401000)
    fm.add("FUN_00401200", 0x401200)
    return program


def rows_for(labels = (), functions = ()):
    return {"labels": [dict(r, status = "rename") for r in labels],
            "functions": [dict(r, status = "rename") for r in functions]}


def test_applying_renames_types_and_checks_the_live_names():
    program = program_for()
    kinds = rows_for(labels = [
        {"addr": "00402000", "name": "g_New", "current": "g_Old", "type": "CThing*"},
        {"addr": "00402020", "name": "g_Fresh", "current": None},
        {"addr": "00402040", "name": "g_X", "current": "g_Stale"},
        {"addr": "00402050", "name": "g_Far2", "current": "g_Far", "type": "CThing"},
        {"addr": "00402060", "name": "g_None", "current": None, "type": "CMissing"}],
        functions = [{"addr": "00401000", "name": NEW_F, "current": OLD_F},
                     {"addr": "00401200", "name": "f_FUN_00401200", "current": "FUN_99999999"},
                     {"addr": "00401300", "name": "g", "current": "FUN_00401300"}])
    done = rba.apply_to_program(program, kinds)
    symbols = program.getSymbolTable()
    assert symbols.getPrimarySymbol(Address(0x402000)).getName() == "g_New"
    assert [s.getName() for s in symbols.getSymbols(Address(0x402000))] == ["g_New"]
    assert symbols.getPrimarySymbol(Address(0x402020)).getName() == "g_Fresh"
    assert symbols.getPrimarySymbol(Address(0x402040)).getName() == "g_Moved"
    assert program.getListing().getDefinedDataAt(Address(0x402000)).getDataType().getName() == "CThing *"
    assert program.getFunctionManager().getFunctionAt(Address(0x401000)).getName() == NEW_F
    assert done == {"labels": 4, "typed": 1, "type not applied": 2, "changed since export": 3,
                    "functions": 1, "thunks": 0}
    assert [r["status"] for r in kinds["functions"]] == ["rename", "changed since export", "changed since export"]
    assert program.transactions == [["Rename by address", True]]


def test_a_failed_apply_rolls_back():
    program = program_for()
    with pytest.raises(ValueError):
        rba.apply_to_program(program, rows_for(labels = [{"addr": "zz", "name": "g", "current": None}]))
    assert program.transactions == [["Rename by address", False]]


def run_main(monkeypatch, *argv):
    monkeypatch.setattr(sys, "argv", ["rename_by_address.py", *argv])
    rba.main()


@pytest.fixture(name = "manifest_file")
def fixture_manifest_file(tmp_path):
    path = tmp_path / "fixes.json"
    path.write_text(json.dumps(dict(MANIFEST, **{"other.exe": {}})))
    return path


def test_main_applies_and_moves_the_keeps(monkeypatch, annotations, manifest_file, tmp_path, capsys):
    folder = annotations / "other.exe" / "functions"
    folder.mkdir(parents = True)
    (folder / "functions_bucket_00.json").write_text("[]")
    module = FakePyghidra(program_for())
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    run_main(monkeypatch, str(manifest_file), "--apply", "--project", str(tmp_path), "P")
    assert module.opened == [(str(tmp_path), "P"), "/game.exe"]
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)
    assert "game.exe: functions=1  keeps=2  labels=2" in capsys.readouterr().out
    assert (annotations / "game.exe" / "pseudocode" / "src" / "core" / "dstrendr.cpp").is_dir()


def test_apply_needs_a_project(monkeypatch, manifest_file):
    with pytest.raises(SystemExit) as exit_info:
        run_main(monkeypatch, str(manifest_file), "--apply")
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch, annotations, tmp_path, capsys):
    path = tmp_path / "one.json"
    path.write_text(json.dumps(MANIFEST))
    monkeypatch.setattr(sys, "argv", ["rename_by_address.py", str(path)])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "rename_by_address.py"), run_name = "__main__")
    assert "game.exe functions: 1 to rename" in capsys.readouterr().out
