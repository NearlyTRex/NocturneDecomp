# Imports
import importlib
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from repo_paths import SCRIPTS_DIR
from string_immediates import put, string_program
import add_missing_string_references as amsr

# The faked Ghidra module's, so it is the constant the module passes
RefType = importlib.import_module("ghidra.program.model.symbol").RefType

FILE_LITERAL = 0x57e4fa
MESSAGE = 0x57e600


def program():
    """Unreferenced string loads by MOV, PUSH and CMP, and one PUSH already referenced."""
    prog = string_program({FILE_LITERAL: "..\\shape\\edittool.cpp", MESSAGE: "out of memory"})
    prog.getFunctionManager().add("CEditTool_open", 0x477000, 0x100)
    put(prog, 0x4770a0, "push", MESSAGE)
    put(prog, 0x477090, "MOV", "ECX", FILE_LITERAL)
    put(prog, 0x4770b0, "CMP", "EAX", MESSAGE)
    put(prog, 0x4770c0, "PUSH", MESSAGE)
    prog.getReferenceManager().add(0x4770c0, MESSAGE)
    put(prog, 0x500010, "PUSH", FILE_LITERAL)
    return prog


def test_the_plan_adds_address_taking_loads_and_reports_the_rest():
    prog = program()
    rows, n_sites = amsr.plan(prog, amsr.collect_strings(prog), any_mnemonic = False)
    assert n_sites == 5
    assert [(r["at"], r["op_index"], r["mnemonic"], r["func"], r["action"]) for r in rows] == [
        ("00477090", 1, "MOV", "CEditTool_open", "ADD"), ("004770a0", 0, "PUSH", "CEditTool_open", "ADD"),
        ("004770b0", 1, "CMP", "CEditTool_open", "UNEXPECTED-MNEMONIC"),
        ("00500010", 0, "PUSH", "(no function)", "ADD")]
    assert rows[0]["text"] == "..\\shape\\edittool.cpp" and rows[0]["target"] == "0057e4fa"
    rows, _ = amsr.plan(prog, amsr.collect_strings(prog), any_mnemonic = True)
    assert {r["action"] for r in rows} == {"ADD"}


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(amsr.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        amsr.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_reports_without_writing(monkeypatch, tmp_path, capsys):
    prog = program()
    code, fake = run_main(monkeypatch, tmp_path, prog)
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    assert "[dry-run] re-run with --apply" in capsys.readouterr().out
    text = (tmp_path / "out.txt").read_text()
    assert "mode: report" in text and "  ADD=3  UNEXPECTED-MNEMONIC=1" in text
    assert "== mnemonic histogram (ADD rows) ==\n  PUSH     2\n  MOV      1\n" in text
    assert "  CEditTool_open" in text and " 3 site(s)" in text
    unexpected = text.split("== UNEXPECTED-MNEMONIC (1) ==\n")[1]
    assert unexpected.startswith("  004770b0  op1  CMP EAX,0x57e600")
    assert "== ADD (3) ==\n  00477090  op1  MOV ECX,0x57e4fa" in text


def test_main_snapshots_then_adds_each_reference_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(amsr.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = program()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-string-refs"]
    assert prog.transactions == [["Add missing string references", True]]
    added = prog.getReferenceManager().references[1:]
    assert [(str(r.getFromAddress()), str(r.getToAddress()), r.getOperandIndex(), r.isPrimary()) for r in added] == [
        ("00477090", "0057e4fa", 1, True), ("004770a0", "0057e600", 0, True), ("00500010", "0057e4fa", 0, True)]
    assert added[0].getReferenceType() is RefType.DATA
    assert prog.getDomainFile().saves == 1
    out = capsys.readouterr().out
    assert "[apply] adding 3 reference(s)..." in out and "Added 3. Saving" in out
    assert "mode: APPLY" in (tmp_path / "out.txt").read_text()


def test_nothing_to_add_saves_nothing(monkeypatch, tmp_path, capsys):
    prog = string_program({MESSAGE: "out of memory"})
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 0
    assert "Nothing to add." in capsys.readouterr().out and prog.getDomainFile().saves == 0


def test_a_failed_apply_rolls_back_and_exits_1(monkeypatch, tmp_path, capsys):
    prog = program()

    def refuse(*_args):
        raise RuntimeError("read-only")
    monkeypatch.setattr(prog.getReferenceManager(), "addMemoryReference", refuse)
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 1
    assert prog.transactions == [["Add missing string references", False]]
    out = capsys.readouterr().out
    assert "ERROR during apply: read-only" in out and "Rolled back; nothing saved." in out
    assert prog.getDomainFile().saves == 0


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, None)
    assert code == 1 and fake.closed == 1 and "ERROR: " in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(amsr.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_the_default_report_is_named_for_the_program(monkeypatch, tmp_path):
    monkeypatch.chdir(tmp_path)
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(string_program({})))
    monkeypatch.setattr(amsr.os, "_exit", sys.exit)
    with pytest.raises(SystemExit):
        amsr.main([str(tmp_path), "P"])
    assert (tmp_path / "nocturne.exe_string_references.txt").exists()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["add_missing_string_references.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "add_missing_string_references.py"), run_name = "__main__")
    assert exit_info.value.code == 0
