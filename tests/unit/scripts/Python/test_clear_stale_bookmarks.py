# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Address, Instruction, Program
from repo_paths import SCRIPTS_DIR
import clear_stale_bookmarks as csb


def program_with_bookmarks():
    program = Program()
    program.getListing().add_instruction(0x1000, Instruction("mov", length = 5))
    manager = program.getBookmarkManager()
    manager.setBookmark(Address(0x1000), "Error", "Bad Instruction", "Failed to disassemble at 00001000")
    manager.setBookmark(Address(0x1012), "Error", "Bad Instruction", "Failed to disassemble at 00001012")
    manager.setBookmark(Address(0x1000), "Analysis", "Found Code", "found")
    manager.setBookmark(Address(0x1000), "Error", "Other", "other")
    return program


def test_a_bad_instruction_bookmark_is_stale_once_an_instruction_starts_there():
    stale, kept = csb.stale_bookmarks(program_with_bookmarks())
    assert [b.getAddress().getOffset() for b in stale] == [0x1000]
    assert [b.getAddress().getOffset() for b in kept] == [0x1012]


def test_run_reports_and_removes_only_when_applying():
    program = program_with_bookmarks()
    logged = []
    assert not csb.run(program, False, logged.append)
    assert logged == ["program.exe: 1 stale, 1 kept", "  stale  00001000  Failed to disassemble at 00001000",
                      "  kept   00001012  Failed to disassemble at 00001012"]
    assert csb.run(program, True, logged.append)
    assert len(program.getBookmarkManager().bookmarks) == 3
    assert program.transactions == [["Clear stale Bad Instruction bookmarks", True]]
    assert not csb.run(program, True, logged.append)


def test_main_saves_only_a_program_it_changed(monkeypatch, capsys):
    program = program_with_bookmarks()
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    assert csb.main(["proj", "P", "bw1.exe"]) == 0
    assert program.getDomainFile().saves == 0
    assert capsys.readouterr().out.rstrip().endswith("(dry run -- --apply removes the stale ones)")
    assert csb.main(["proj", "P", "bw1.exe", "--apply"]) == 0
    assert program.getDomainFile().saves == 1 and pyghidra.closed == 2
    assert pyghidra.opened[-1] == "/bw1.exe"


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["clear_stale_bookmarks.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "clear_stale_bookmarks.py"), run_name = "__main__")
    assert exit_info.value.code == 0
