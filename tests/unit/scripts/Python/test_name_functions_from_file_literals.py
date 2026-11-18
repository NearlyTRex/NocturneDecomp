# Imports
import importlib
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import DuplicateNameException, StringDataType
from ghidra_program import Instruction, Program
from repo_paths import SCRIPTS_DIR
import name_functions_from_file_literals as nf

GAME = 0x600000           # "..\core\game.cpp"
MENU = 0x600020           # "..\core\menu.cpp"
SPECIAL = 0x600040        # "..\engine\special.c"

# The faked Scalar the script tests operands against
Scalar = importlib.import_module("ghidra.program.model.scalar").Scalar


class Immediate(Scalar):
    def __init__(self, value):
        super().__init__(value)
        self.value = value

    def getUnsignedValue(self):
        return self.value


# An instruction whose operands are the objects Ghidra hands out for them
class OperandInstruction(Instruction):
    def __init__(self, *objects):
        super().__init__("MOV", *("x" for _ in objects))
        self.objects = objects

    def getOpObjects(self, index):
        return [self.objects[index]]


def add_string(prog, address, value, is_string = True):
    data = prog.getListing().add_data(address, StringDataType(), value)
    data.hasStringValue = lambda: is_string
    return data


def literal_program():
    prog = Program()
    add_string(prog, GAME, "..\\core\\game.cpp")
    add_string(prog, MENU, "../core/menu.cpp ")
    add_string(prog, SPECIAL, "..\\engine\\special.c")
    return prog


def test_file_literals_are_collected_and_unsafe_ones_set_aside():
    prog = literal_program()
    add_string(prog, 0x600060, "..\\core\\my file.cpp")
    add_string(prog, 0x600080, "hello")
    add_string(prog, 0x6000a0, None)
    add_string(prog, 0x6000c0, "..\\core\\x.cpp", is_string = False)
    broken = add_string(prog, 0x6000e0, "..\\core\\y.cpp")

    def refuse():
        raise RuntimeError("bad charset")
    broken.getValue = refuse
    literals, skipped = nf.collect_file_literals(prog)
    assert literals == {"00600000": "core/game.cpp", "00600020": "core/menu.cpp", "00600040": "engine/special.c"}
    assert skipped == ["..\\core\\my file.cpp"]


def plan_program():
    """A function per outcome: one literal by reference, one by a bare immediate, two
    files, an excluded file, an already named function, and a data-table reference."""
    prog = literal_program()
    fm, refs, listing = prog.getFunctionManager(), prog.getReferenceManager(), prog.getListing()
    fm.add("FUN_00401000", 0x401000, 0x10)
    refs.add(0x401004, GAME)
    refs.add(0x401008, GAME)
    fm.add("FUN_00402000", 0x402000, 0x10)
    listing.add_instruction(0x402004, OperandInstruction(Immediate(GAME), "EAX"))
    listing.add_instruction(0x402008, OperandInstruction(Immediate(0x1234)))
    fm.add("FUN_00403000", 0x403000, 0x10)
    refs.add(0x403004, GAME)
    refs.add(0x403008, MENU)
    listing.add_instruction(0x403004, OperandInstruction(Immediate(GAME)))      # same site as the ref
    fm.add("FUN_00404000", 0x404000, 0x10)
    refs.add(0x404004, SPECIAL)
    fm.add("core_game.cpp_CGame_run_FUN_00405000", 0x405000, 0x10)
    refs.add(0x405004, GAME)
    listing.add_instruction(0x405008, OperandInstruction(Immediate(MENU)))      # not bare: not scanned
    refs.add(0x500000, GAME)                                                     # from a data table
    return prog


def test_each_function_is_classified_from_both_passes():
    prog = plan_program()
    literals, _ = nf.collect_file_literals(prog)
    rows = nf.plan(prog, literals, {"engine/special.c"})
    got = [(r["addr"], r["action"], r["name"], r["files"], r["sites"]) for r in rows]
    assert got == [
        ("00401000", "RENAME", "core_game.cpp_FUN_00401000", ["core/game.cpp"], ["00401004", "00401008"]),
        ("00402000", "RENAME", "core_game.cpp_FUN_00402000", ["core/game.cpp"], ["00402004"]),
        ("00403000", "AMBIGUOUS", None, ["core/game.cpp", "core/menu.cpp"], ["00403004", "00403008"]),
        ("00404000", "EXCLUDED", None, ["engine/special.c"], ["00404004"]),
        ("00405000", "NAMED", None, ["core/game.cpp"], ["00405004"]),
    ]


def test_apply_renames_and_records_a_name_ghidra_refuses(capsys):
    prog = plan_program()
    rows = nf.plan(prog, nf.collect_file_literals(prog)[0], set())
    fm = prog.getFunctionManager()

    def taken(_name, _source):
        raise DuplicateNameException("name taken")
    fm.getFunctionAt(prog.getAddressFactory().getAddress("00402000")).setName = taken
    assert nf.apply(prog, rows) == 2
    assert prog.transactions == [["Name functions from __FILE__ literals", True]]
    assert [f.getName() for f in fm.getFunctions(True)] == [
        "core_game.cpp_FUN_00401000", "FUN_00402000", "FUN_00403000", "engine_special.c_FUN_00404000",
        "core_game.cpp_CGame_run_FUN_00405000"]
    failed = next(r for r in rows if r["addr"] == "00402000")
    assert (failed["action"], failed["error"]) == ("FAILED", "name taken")
    out = capsys.readouterr().out
    assert "  FAILED 00402000  FUN_00402000 -> core_game.cpp_FUN_00402000: name taken" in out
    assert "  RENAME 00401000  FUN_00401000 -> core_game.cpp_FUN_00401000" in out


def test_any_other_error_rolls_every_rename_back():
    prog = plan_program()
    rows = nf.plan(prog, nf.collect_file_literals(prog)[0], set())

    def broken(_name, _source):
        raise RuntimeError("database closed")
    prog.getFunctionManager().getFunctionAt(prog.getAddressFactory().getAddress("00402000")).setName = broken
    with pytest.raises(RuntimeError, match = "database closed"):
        nf.apply(prog, rows)
    assert prog.transactions == [["Name functions from __FILE__ literals", False]]


def test_the_report_counts_lists_and_explains_each_row(tmp_path):
    rows = [{"addr": "00401000", "current": "FUN_00401000", "files": ["core/game.cpp"], "sites": ["00401004"],
             "name": "core_game.cpp_FUN_00401000", "action": "RENAME"},
            {"addr": "00402000", "current": "FUN_00402000", "files": ["core/game.cpp"], "sites": ["00402004"],
             "name": "core_game.cpp_FUN_00402000", "action": "FAILED", "error": "name taken"},
            {"addr": "00403000", "current": "FUN_00403000", "files": ["a/a.c", "b/b.c"],
             "sites": ["00403004", "00403008"], "name": None, "action": "AMBIGUOUS"}]
    out = tmp_path / "report.txt"
    counts = nf.write_report(str(out), "game.exe", rows, {"1": "core/game.cpp", "2": "a/a.c"}, ["..\\x y.c"],
                             ["engine/special.c"], applied = True)
    text = out.read_text()
    assert counts == {"RENAME": 1, "FAILED": 1, "AMBIGUOUS": 1} and "mode: APPLY" in text
    assert "file literals found: 2 across 2 source files" in text
    assert "functions referencing one: 3   RENAME=1  AMBIGUOUS=1  FAILED=1" in text
    assert "excluded files: engine/special.c" in text and "  '..\\\\x y.c'" in text
    assert "== renames per source file (1) ==\n  core/game.cpp                1" in text
    assert "files: core/game.cpp  err: name taken" in text
    assert "        ref sites: 00403004, 00403008" in text
    nf.write_report(str(out), "game.exe", [], {}, [], [], applied = False)
    text = out.read_text()
    assert "mode: report" in text and "excluded files: (none)" in text and "rejected" not in text


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(nf.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        nf.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_reports_without_renaming(monkeypatch, tmp_path, capsys):
    prog = plan_program()
    code, fake = run_main(monkeypatch, tmp_path, prog, "--exclude", "core/menu.cpp")
    out = capsys.readouterr().out
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    assert "=== plan ===" in out and "  RENAME       2" in out and "  EXCLUDED     1" in out and "[dry-run]" in out
    assert "excluded files: core/menu.cpp, engine/special.c" in (tmp_path / "out.txt").read_text()


def test_main_snapshots_renames_reports_the_result_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(nf.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = plan_program()

    def taken(_name, _source):
        raise DuplicateNameException("name taken")
    prog.getFunctionManager().getFunctionAt(prog.getAddressFactory().getAddress("00402000")).setName = taken
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply", "--no-default-excludes")
    out = capsys.readouterr().out
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-file-literal-names"]
    assert "=== result ===" in out and "Renamed 2. Saving program database..." in out
    # The report is written after the renames, so the refused one shows
    assert "== FAILED (1) ==" in (tmp_path / "out.txt").read_text()
    assert prog.getDomainFile().saves == 1


def test_main_saves_nothing_when_every_rename_is_refused(monkeypatch, tmp_path, capsys):
    prog = literal_program()
    func = prog.getFunctionManager().add("FUN_00401000", 0x401000, 0x10)
    prog.getReferenceManager().add(0x401004, GAME)

    def taken(_name, _source):
        raise DuplicateNameException("name taken")
    func.setName = taken
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 0
    assert "Saving" not in capsys.readouterr().out and prog.getDomainFile().saves == 0


def test_main_with_nothing_to_rename_says_so(monkeypatch, tmp_path, capsys):
    assert run_main(monkeypatch, tmp_path, literal_program(), "--apply", "--no-snapshot")[0] == 0
    assert "Nothing to rename." in capsys.readouterr().out


def test_a_failed_apply_exits_nonzero_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    prog = plan_program()

    def broken(_name, _source):
        raise RuntimeError("database closed")
    prog.getFunctionManager().getFunctionAt(prog.getAddressFactory().getAddress("00401000")).setName = broken
    code, fake = run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")
    assert code == 1 and fake.closed == 1 and prog.getDomainFile().saves == 0
    assert "ERROR: database closed" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(nf.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["name_functions_from_file_literals.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "name_functions_from_file_literals.py"), run_name = "__main__")
    assert exit_info.value.code == 0
