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
import audit_ghidra_fixups as agf

# The faked Ghidra module's, so it is the constant the module compares against
SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

FILE_LITERAL = 0x57e4fa
MESSAGE = 0x57e600


def program():
    """Two strings, a __FILE__ literal and a message, loaded five ways inside and outside a function."""
    prog = string_program({FILE_LITERAL: "..\\shape\\edittool.cpp", MESSAGE: "out of memory", 0x57e700: None})
    prog.getListing().add_data(0x57e800, None, 7)                      # not a string
    prog.getFunctionManager().add("CEditTool_open", 0x477000, 0x100)
    put(prog, 0x477090, "MOV", "ECX", FILE_LITERAL)                   # unreferenced
    put(prog, 0x4770a0, "PUSH", MESSAGE)                              # unreferenced
    put(prog, 0x4770b0, "PUSH", MESSAGE)                              # referenced
    prog.getReferenceManager().add(0x4770b0, MESSAGE)
    put(prog, 0x4770c0, "ADD", "EAX", 0x10)                          # too small to be an address
    put(prog, 0x4770d0, "MOV", "EAX", 0x500000)                      # no string there
    put(prog, 0x500010, "PUSH", FILE_LITERAL)                         # outside any function
    return prog


def test_strings_are_collected_with_whether_they_are_file_literals():
    assert agf.collect_strings(program()) == {FILE_LITERAL: ("..\\shape\\edittool.cpp", True),
                                              MESSAGE: ("out of memory", False)}
    assert list(agf.collect_strings(program(), file_literals_only = True)) == [FILE_LITERAL]


def test_each_unreferenced_string_immediate_is_found():
    prog = program()
    missing, n_sites = agf.find_missing_string_refs(prog, agf.collect_strings(prog))
    assert n_sites == 4
    assert [(f["at"], f["func"], f["func_addr"], f["is_file"]) for f in missing] == [
        ("00477090", "CEditTool_open", "00477000", True), ("004770a0", "CEditTool_open", "00477000", False),
        ("00500010", "(no function)", "", True)]
    assert missing[0]["instr"] == "MOV ECX,0x57e4fa" and missing[0]["target"] == "0057e4fa"


def test_a_locked_signature_with_no_convention_is_found():
    prog = program()
    fm = prog.getFunctionManager()
    fm.functions.clear()
    made = {name: fm.add(name, entry) for name, entry in (("FUN_00402000", 0x402000), ("CBat_hit", 0x401000),
                                                         ("free", 0x403000), ("CBat_run", 0x404000))}
    made["FUN_00402000"].convention = made["free"].convention = "unknown"
    made["CBat_hit"].convention = None
    made["CBat_run"].convention = "__thiscall"
    made["free"].signature_source = SourceType.DEFAULT                 # not locked
    made["CBat_hit"].parameter_count = 2
    found = agf.find_unknown_conventions(prog)
    assert [(c["addr"], c["name"], c["params"], c["custom_storage"], c["source"]) for c in found] == [
        ("00401000", "CBat_hit", 2, False, "USER_DEFINED"), ("00402000", "FUN_00402000", 0, False, "USER_DEFINED")]


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(agf.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        agf.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_writes_the_worklist(monkeypatch, tmp_path):
    prog = program()
    prog.getFunctionManager().add("FUN_00402000", 0x402000).convention = "unknown"
    code, fake = run_main(monkeypatch, tmp_path, prog)
    assert code == 0 and fake.closed == 1 and fake.opened[-1] == "/game.exe"
    text = (tmp_path / "out.txt").read_text()
    assert "scope: all defined strings" in text
    assert "sites with NO reference                : 3 (75.0%)" in text
    assert "... of which __FILE__ literals         : 2" in text
    assert "distinct functions affected            : 2" in text
    worst = text.split("-- affected functions, worst first --\n")[1]
    assert worst.index("CEditTool_open") < worst.index("(no function)")
    assert "  (no function)" in worst and " --  1 site(s)" in worst
    assert "  00477090  MOV ECX,0x57e4fa" in text and "[FILE] '..\\\\shape\\\\edittool.cpp'" in text
    # Only the bare FUN_ group has members, so the named group's header is left out
    assert "-- still bare FUN_* (1) --" in text and "named (higher value" not in text
    assert "00402000  FUN_00402000" in text and "params=0   custom_storage=False src=USER_DEFINED" in text


def test_main_on_file_literals_only_with_no_sites(monkeypatch, tmp_path):
    prog = string_program({})
    prog.getFunctionManager().add("CBat_hit", 0x401000).convention = "unknown"
    assert run_main(monkeypatch, tmp_path, prog, "--file-literals-only")[0] == 0
    text = (tmp_path / "out.txt").read_text()
    assert "scope: __FILE__ literals only" in text and ": 0 (0.0%)" in text
    assert "-- named (higher value -- already identified) (1) --" in text and "still bare" not in text


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, None)
    assert code == 1 and fake.closed == 1
    assert "ERROR: 'NoneType' object has no attribute 'getListing'" in capsys.readouterr().out


def test_the_default_report_is_named_for_the_program(monkeypatch, tmp_path):
    monkeypatch.chdir(tmp_path)
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(string_program({})))
    monkeypatch.setattr(agf.os, "_exit", sys.exit)
    with pytest.raises(SystemExit):
        agf.main([str(tmp_path), "P"])
    assert (tmp_path / "nocturne.exe_ghidra_fixups.txt").exists()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["audit_ghidra_fixups.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "audit_ghidra_fixups.py"), run_name = "__main__")
    assert exit_info.value.code == 0
