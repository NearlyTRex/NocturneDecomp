# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from boundary_program import (BASE, BoundaryProgram, at, described_function, finding, function, gapped, label,
                              padded, put)
from fake_pyghidra import FakePyghidra
from ghidra_program import Instruction
from repo_paths import SCRIPTS_DIR
import fix_function_boundaries as ffb


# --- apply --------------------------------------------------------------------------------------

def test_an_overlap_is_deleted_and_its_bytes_undefined(capsys):
    program, victim, func = gapped()
    label(program, 0x0c, func.name)
    findings = [{**finding("OVERLAP"), "entry": at(BASE + 0x0c), "correct": at(BASE), "name": func.name,
                 "func": func, "other": victim}]
    assert ffb.apply(program, findings, True)
    assert program.getFunctionManager().getFunctionAt(at(BASE + 0x0c)) is None
    assert program.getListing().cleared == [(at(BASE + 0x0c), at(BASE + 0x0c), False)]
    assert program.symbol_table.symbols == []
    printed = capsys.readouterr().out
    assert "OVERLAP  deleted 0000100c (FUN_0000100c) + undefined body" in printed
    assert "cleared 1 stale symbol(s) left at vacated entry addresses" in printed


def test_an_overlap_already_gone_or_not_removable_changes_nothing(monkeypatch):
    program = BoundaryProgram()
    assert not ffb.apply(program, [finding("OVERLAP")], True)
    func = function(program, 2)
    monkeypatch.setattr(program.getFunctionManager(), "removeFunction", lambda _entry: False)
    assert not ffb.apply(program, [{**finding("OVERLAP"), "func": func}], True)
    assert program.transactions == [["Fix function boundaries", True]] * 2


def test_a_split_is_absorbed_into_the_function_before_it(capsys):
    program = BoundaryProgram()
    a = function(program, 0, size = 0x10)
    b = function(program, 0x10)
    label(program, 0x10, b.name)
    assert ffb.apply(program, [{**finding("SPLIT"), "entry": at(BASE + 0x10), "correct": at(BASE),
                                "name": b.name, "other": a, "func": b}], True)
    assert program.fixups == [BASE] and program.getFunctionManager().getFunctionAt(at(BASE + 0x10)) is None
    assert "SPLIT  removed 00001010, re-absorbed into 00001000 -> body[00001000-0000100f]" in capsys.readouterr().out


def test_a_split_onto_its_own_entry_or_one_that_loses_the_function_still_reports(capsys):
    program = BoundaryProgram()
    program.fixup_drops = True
    a = function(program, 0, size = 0x10)
    assert ffb.apply(program, [{**finding("SPLIT(manual)"), "entry": at(BASE), "correct": at(BASE),
                                "other": a}], True)
    assert "SPLIT  removed 00001000, re-absorbed into 00001000 -> body[?-?]" in capsys.readouterr().out


def test_a_late_entry_is_rebuilt_at_its_true_start_with_its_signature(capsys):
    program = BoundaryProgram()
    func = described_function(program)
    label(program, 0x10, func.name)
    program.disassembly = {BASE + 0x0c: [(BASE + 0x0c, Instruction("PUSH", "EBX"))]}
    assert ffb.apply(program, [{**finding("ENTRY_LATE"), "entry": at(BASE + 0x10), "correct": at(BASE + 0x0c),
                                "name": func.name, "func": func}], True)
    nf = program.getFunctionManager().getFunctionAt(at(BASE + 0x0c))
    assert nf.name == "Thing_FUN_0000100c" and program.disassembled == [BASE + 0x0c]
    assert program.getListing().cleared == [(at(BASE + 0x0c), at(BASE + 0x13), False)]
    assert ("ENTRY_LATE  00001010 -> 0000100c  (restored: name+signature, renamed -> Thing_FUN_0000100c)"
            "  body[0000100c-0000100f]") in capsys.readouterr().out


def test_an_early_entry_keeps_its_code_and_only_its_name_without_preserving(capsys):
    program = BoundaryProgram()
    func = function(program, 0x0e, size = 4, name = "Thing_FUN_0000100e")
    put(program, 0x10, "PUSH", "EBX")
    assert ffb.apply(program, [{**finding("ENTRY_EARLY"), "entry": at(BASE + 0x0e), "name": func.name,
                                "func": func}], False)
    assert program.disassembled == []
    assert program.getFunctionManager().getFunctionAt(at(BASE + 0x10)).name == "Thing_FUN_0000100e"
    assert "(name restored: Thing_FUN_0000100e)" in capsys.readouterr().out


def test_an_unnamed_function_with_no_old_body_is_rebuilt_quietly(capsys):
    program = BoundaryProgram()
    assert ffb.apply(program, [finding("ENTRY_LATE(manual)"), {**finding("ENTRY_EARLY"), "skip": "--kind"}],
                     False)
    assert "ENTRY_LATE(manual) 00001002 -> 00001010  body[00001010-00001013]" in capsys.readouterr().out


def test_a_rebuild_that_creates_nothing_says_so_and_lists_what_did_not_restore(capsys):
    program = BoundaryProgram()
    program.uncreatable = {BASE + 0x10}
    func = described_function(program)
    assert ffb.apply(program, [{**finding("ENTRY_EARLY"), "entry": at(BASE + 0x10), "name": func.name,
                                "func": func}, {**finding("ENTRY_LATE(manual)"), "entry": at(BASE + 0x10)}], True)
    printed = capsys.readouterr().out
    assert "!! 00001010 -> 00001010 produced NO function; the address is now undefined" in printed
    assert "!! 1 function(s) did not restore cleanly - re-check these in Ghidra:" in printed
    assert "   00001010 Thing_FUN_00001010\n       - function was not recreated" in printed
    assert "  (restored: name+signature, 1 issue(s))  body[?-?]" in printed


def test_stale_code_that_cannot_be_cleared_is_warned_about(monkeypatch, capsys):
    program = BoundaryProgram()
    func = function(program, 0x0e)

    def refuse(*_args):
        raise RuntimeError("locked")

    monkeypatch.setattr(program.getListing(), "clearCodeUnits", refuse)
    assert ffb.apply(program, [{**finding("ENTRY_EARLY"), "entry": at(BASE + 0x0e), "func": func}], False)
    assert "WARN: could not clear stale code units at 0000100e: locked" in capsys.readouterr().out


def test_an_error_mid_apply_rolls_the_transaction_back(capsys):
    program = BoundaryProgram()
    assert not ffb.apply(program, [{**finding("SPLIT"), "other": None}], True)
    assert program.transactions == [["Fix function boundaries", False]]
    assert "ERROR during apply: 'NoneType' object has no attribute 'getEntryPoint'" in capsys.readouterr().out


# --- main ---------------------------------------------------------------------------------------

class BrokenPyghidra(FakePyghidra):
    def open_project(self, directory, name):
        raise RuntimeError("no such project")


def test_main_reports_without_applying_to_the_default_path(launch, tmp_path, monkeypatch, capsys):
    monkeypatch.chdir(tmp_path)
    program, _ = padded()
    pyghidra = FakePyghidra(program)
    assert launch(pyghidra, "projects", "Proj", "bw1.exe") == 0
    report = (tmp_path / "bw1.exe_boundary_fixes.txt").read_text(encoding = "utf-8")
    assert "findings: 1  actionable: 1  mode: report  preserve: yes" in report
    assert "[dry-run] re-run with --apply to execute." in capsys.readouterr().out
    assert pyghidra.closed == 1 and program.getDomainFile().saves == 0


def test_main_applies_and_saves(launch, tmp_path, capsys):
    program, _ = padded()
    out = tmp_path / "r.txt"
    assert launch(FakePyghidra(program), "projects", "Proj", "bw1.exe", "--apply", "--no-preserve",
                  "--allow-patched", "--out", str(out)) == 0
    assert "mode: APPLY  preserve: no" in out.read_text(encoding = "utf-8")
    printed = capsys.readouterr().out
    assert "(ignored: --allow-patched)" in printed and "Saved." in printed
    assert program.getDomainFile().saves == 1


def test_main_applies_manual_fixes_and_skips_saving_when_nothing_changed(launch, tmp_path, capsys, monkeypatch):
    program = BoundaryProgram()
    function(program, 0x10)
    out = tmp_path / "r.txt"
    monkeypatch.setattr(ffb, "apply", lambda *_args: False)
    assert launch(FakePyghidra(program), "projects", "Proj", "bw1.exe", "--apply", "--fix", "1010=100c",
                  "--out", str(out)) == 0
    assert "Using 1 manual --fix override(s)." in capsys.readouterr().out
    assert program.getDomainFile().saves == 0
    assert "SKIP" not in out.read_text(encoding = "utf-8")


def test_main_with_nothing_actionable_neither_applies_nor_suggests_it(launch, tmp_path, capsys):
    program, _ = padded()
    out = tmp_path / "r.txt"
    assert launch(FakePyghidra(program), "projects", "Proj", "bw1.exe", "--apply", "--kind", "split",
                  "--out", str(out)) == 0
    printed = capsys.readouterr().out
    assert "[apply]" not in printed and "[dry-run]" not in printed
    assert "SKIP: --kind" in out.read_text(encoding = "utf-8")


def test_main_refuses_unknown_kinds(launch, capsys):
    assert launch(FakePyghidra(BoundaryProgram()), "projects", "Proj", "--kind", "ENTRY_EARLY,BOGUS") == 2
    assert "unknown --kind value(s): BOGUS" in capsys.readouterr().err


def test_main_fails_when_the_project_cannot_open(launch, capsys):
    assert launch(BrokenPyghidra(BoundaryProgram()), "projects", "Proj") == 1
    assert "ERROR: no such project" in capsys.readouterr().out


def test_running_the_script_runs_main(monkeypatch, capsys):
    monkeypatch.setattr(os, "_exit", sys.exit)
    monkeypatch.setitem(sys.modules, "pyghidra", BrokenPyghidra(BoundaryProgram()))
    monkeypatch.setattr(sys, "argv", ["fix_function_boundaries.py", "projects", "Proj"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "fix_function_boundaries.py"), run_name = "__main__")
    assert stop.value.code == 1
    assert "ERROR: no such project" in capsys.readouterr().out
