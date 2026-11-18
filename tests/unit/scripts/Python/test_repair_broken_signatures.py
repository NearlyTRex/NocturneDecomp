# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Address, Function, Program
from repo_paths import SCRIPTS_DIR
import repair_broken_signatures as rbs


class Damaged(Function):
    """A function whose return type throws until `cure` (a method name) has run."""

    def __init__(self, name, entry, cure):
        super().__init__(name, entry)
        self.cure, self.healed = cure, False

    def getReturnType(self):
        if not self.healed:
            raise IndexError("Index 0 out of bounds for length 0")
        return super().getReturnType()

    def setReturnType(self, data_type, source):
        if self.cure == "setReturnType" or (self.cure == "both" and not self.custom_storage):
            self.healed = True
        super().setReturnType(data_type, source)

    def updateFunction(self, *args):
        self.healed = self.healed or self.cure == "updateFunction"
        super().updateFunction(*args)


def program_with(*cures):
    program = Program()
    fm = program.getFunctionManager()
    fm.add("ok", 0x1000)
    for i, cure in enumerate(cures):
        f = Damaged(f"f{i}", Address(0x2000 + i), cure)
        f.custom_storage = True
        fm.functions[f.entry] = f
    return program


def test_find_broken_lists_the_functions_that_throw():
    assert rbs.find_broken(program_with("setReturnType")) == [("00002000", "f0", "IndexError")]


def test_each_function_takes_the_weakest_repair_that_reads_back(capsys):
    program = program_with("setReturnType", "both", "updateFunction", "never")
    broken = rbs.find_broken(program) + [("00009999", "gone", "IndexError")]
    fixed, still = rbs.repair(program, broken)
    assert fixed == 3
    assert still == [("00002003", "f3", "all strategies failed"), ("00009999", "gone", "function not found")]
    out = capsys.readouterr().out
    assert "repaired 00002000 f0  (set return void)" in out
    assert "repaired 00002001 f1  (clear custom storage + set return void)" in out
    assert "repaired 00002002 f2  (rebuild signature)" in out
    assert program.transactions == [["repair broken signatures", True]]


def run_main(monkeypatch, program, *argv):
    fake = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(rbs.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        rbs.main(["--program", "p.exe", *argv])
    return exited.value.code, fake


def test_main_reports_without_touching_the_program(monkeypatch, capsys):
    program = program_with("setReturnType")
    code, fake = run_main(monkeypatch, program)
    assert code == 0 and fake.opened[-1] == "/p.exe" and fake.closed == 1
    out = capsys.readouterr().out
    assert "functions whose getReturnType() throws: 1" in out and "report only" in out
    assert program.transactions == [] and program.getDomainFile().saves == 0


def test_main_fixes_after_a_snapshot_and_saves(monkeypatch, capsys):
    calls = []
    monkeypatch.setattr(rbs.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    program = program_with("setReturnType", "never")
    code, _ = run_main(monkeypatch, program, "--fix")
    assert code == 1 and calls[0][-2:] == ["--tag", "pre-repair-signatures"]
    assert program.getDomainFile().saves == 1
    assert "STILL BROKEN 00002001 f1: all strategies failed" in capsys.readouterr().out


def test_main_with_nothing_broken_saves_nothing(monkeypatch, capsys):
    program = program_with()
    assert run_main(monkeypatch, program, "--fix", "--no-snapshot")[0] == 0
    assert "throws: 0" in capsys.readouterr().out and program.getDomainFile().saves == 0


def test_main_refuses_to_fix_without_a_snapshot(monkeypatch, capsys):
    monkeypatch.setattr(rbs.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, None, "--fix")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["repair_broken_signatures.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "repair_broken_signatures.py"), run_name = "__main__")
    assert exit_info.value.code == 0
