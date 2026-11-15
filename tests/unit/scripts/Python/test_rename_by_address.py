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
import ghidra_fake
import ghidra_program as gp
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


INT = ghidra_fake.DataType("int", 4)
IN_PLACE = {"conv": "__cdecl", "ret": "int", "params": [{"name": "n", "type": "int"}]}
WITH_RECEIVER = {"conv": "__cdecl", "ret": "int", "params": [{"name": "this_ptr", "type": "CThing *"}]}


class Proto(gp.Function):
    """A function whose prototype write Ghidra can refuse, or accept and leave unreadable."""

    def __init__(self, name, entry, reject = False, breaks = False):
        super().__init__(name, Address(entry))
        self.reject, self.breaks, self.broken = reject, breaks, False

    def getProgram(self):
        return None

    def getSignature(self):
        if self.broken:
            raise RuntimeError("storage half-assigned")
        return self.name

    def updateFunction(self, convention, ret, params, update_type, force, source):
        if not params:  # make_readable stripping the prototype
            self.broken = False
            return
        if self.reject:
            raise ghidra_fake.IllegalArgumentException("no storage")
        super().updateFunction(convention, ret, params, update_type, force, source)
        self.broken = self.breaks


def test_a_prototype_goes_on_first_and_a_name_waits_for_it():
    program = program_for()
    program.getDataTypeManager().add(INT)
    fm = program.getFunctionManager()
    funcs = {a: Proto(f"FUN_{a:08x}", a, **kw) for a, kw in [
        (0x401400, {}), (0x401500, {}), (0x401600, {}), (0x401700, {"reject": True}), (0x401800, {"breaks": True})]}
    fm.functions.update({f.entry: f for f in funcs.values()})
    same = funcs[0x401500]
    same.parameters, same.return_type = [ghidra_fake.Variable("n", INT)], INT
    unknown = {"ret": "int", "params": [{"name": "p", "type": "CMissing *"}]}
    rows = [{"addr": f"{a:08x}", "current": f"FUN_{a:08x}", "name": f"core_a.cpp_C_f_FUN_{a:08x}",
             "status": "rename", "sig": sig}
            for a, sig in [(0x401400, WITH_RECEIVER), (0x401600, unknown), (0x401700, WITH_RECEIVER),
                           (0x401800, WITH_RECEIVER)]]
    rows.insert(1, {"addr": "00401500", "current": "FUN_00401500", "name": "FUN_00401500",
                    "status": "retype", "sig": IN_PLACE})
    done = rba.apply_to_program(program, {"labels": [], "functions": rows})
    assert done == {"prototypes": 1, "functions": 1, "prototype already matches": 1,
                    "prototype unbuildable": 1, "prototype rejected": 2, "thunks": 0}
    applied = funcs[0x401400]
    assert applied.getName() == "core_a.cpp_C_f_FUN_00401400"
    assert applied.prototype[0] == "__cdecl" and applied.prototype[2][0].getDataType().getName() == "CThing *"
    assert [f.getName() for a, f in sorted(funcs.items())][1:] == [
        "FUN_00401500", "FUN_00401600", "FUN_00401700", "FUN_00401800"]
    assert [r["status"] for r in rows] == ["rename", "retype", "prototype unbuildable",
                                           "prototype rejected", "prototype rejected"]
    assert not funcs[0x401800].broken


def test_a_prototype_whose_types_match_but_whose_names_do_not_is_rewritten():
    program = program_for()
    program.getDataTypeManager().add(INT)
    func = Proto("FUN_00401400", 0x401400)
    func.parameters, func.return_type = [ghidra_fake.Variable("orient_x", INT)], INT
    assert rba.apply_prototype(program, func, IN_PLACE, {}) == "prototypes"
    assert func.prototype[2][0].getName() == "n"
    func.parameters = [ghidra_fake.Variable("n", INT)]
    unnamed = {"conv": "__cdecl", "ret": "int", "params": [{"type": "int"}]}
    assert rba.apply_prototype(program, func, unnamed, {}) == "prototype already matches"


def test_a_name_in_place_with_a_prototype_is_a_retype_and_the_report_shows_it(capsys):
    names = {"labels": {}, "functions": {"00401500": "FUN_00401500", "00401600": "FUN_00401600"}}
    manifest = {"p.exe": {"functions": [{"addr": "00401500", "name": "FUN_00401500", "sig": IN_PLACE},
                                        {"addr": "00401600", "name": "f_FUN_00401600", "sig": WITH_RECEIVER}]}}
    planned = rba.plan(manifest, names_of = lambda _program: names)
    assert [r["status"] for r in planned["p.exe"]["functions"]] == ["retype", "rename"]
    rba.print_report(planned)
    out = capsys.readouterr().out
    assert "p.exe functions: 1 to rename, 1 to retype, 0 of 2 skipped" in out
    assert "00401500  FUN_00401500 -> FUN_00401500\n        int __cdecl(int n)\n" in out
    assert "        int __cdecl(CThing * this_ptr)\n" in out


def test_a_renamed_label_reaches_the_keeps_as_a_whole_word(tmp_path):
    keep = tmp_path / "core" / "a.cpp" / "f_FUN_00401000.keep.cpp"
    keep.parent.mkdir(parents = True)
    keep.write_text("g_Old.x = g_OldRight + g_Old;\n")
    kinds = {"functions": [], "labels": [
        {"current": "g_Old", "name": "g_New", "status": "rename"},
        {"current": None, "name": "g_Fresh", "status": "rename"},
        {"current": "g_Same", "name": "g_Same", "status": "same"}]}
    assert rba.label_renames(kinds) == [("g_Old", "g_New")]
    assert rba.sync_keeps(str(tmp_path), [], write = True, labels = rba.label_renames(kinds)) == [
        (str(keep), None, True)]
    assert keep.read_text() == "g_New.x = g_OldRight + g_New;\n"


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
