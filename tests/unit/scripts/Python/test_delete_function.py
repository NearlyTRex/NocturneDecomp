# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from boundary_program import BASE, BoundaryProgram, at, function, label
from fake_pyghidra import FakePyghidra
from ghidra_fake import AddressSet
from repo_paths import SCRIPTS_DIR
import delete_function as df


def program():
    """A bogus function at BASE + 2 inside a real one, a called one, and a vtable slot."""
    prog = BoundaryProgram()
    outer = function(prog, 0, size = 0x20)
    outer.body = AddressSet(at(BASE), at(BASE + 1))
    outer.body.add(at(BASE + 0x10), at(BASE + 0x1f))
    function(prog, 2, size = 4)
    label(prog, 2, f"FUN_{BASE + 2:08x}")                             # what removeFunction leaves
    function(prog, 0x40, size = 8, name = "CBat_hit")
    refs = prog.getReferenceManager()
    for source in range(7):
        refs.add(0x5000 + source, BASE + 0x40, call = True)
    function(prog, 0x60, name = "CBat_run")
    refs.add(0x6000, BASE + 0x60)
    refs.add(0x6004, BASE + 0x60, kind = "UNCONDITIONAL_JUMP")
    return prog


def gathered(prog, *hexes, force = False):
    infos = [df.gather(prog, h) for h in hexes]
    df.report(infos, force)
    return infos


def test_a_target_is_gathered_with_its_body_and_incoming_references():
    prog = program()
    bogus, = gathered(prog, "0x00001002")
    assert (bogus["name"], bogus["body_size"], str(bogus["body_min"]), str(bogus["body_max"])) == (
        "FUN_00001002", 4, "00001002", "00001005")
    assert (bogus["n_call"], bogus["n_data"], bogus["n_other"], bogus["skip"]) == (0, 0, 0, None)
    hit, run = gathered(prog, "00001040", "00001060")
    assert hit["n_call"] == 7 and len(hit["ref_sample"]) == 6 and hit["ref_sample"][0] == "00005000(UNCONDITIONAL_CALL)"
    assert (run["n_data"], run["n_other"]) == (1, 1)


def test_a_referenced_function_is_skipped_unless_forced(capsys):
    prog = program()
    hit, run = gathered(prog, "1040", "1060")
    assert hit["skip"].startswith("has 7 incoming ref(s)") and run["skip"].startswith("has 2 incoming")
    out = capsys.readouterr().out
    assert out.count("-> WILL SKIP") == 2 and out.count("-> NOTE: data refs usually mean a vtable slot") == 1
    assert "  e.g. 00005000(UNCONDITIONAL_CALL), " in out
    assert [i["skip"] for i in gathered(prog, "1040", "1060", force = True)] == [None, None]


def test_an_address_that_is_not_an_entry_is_skipped(capsys):
    prog = program()
    inside, nowhere = gathered(prog, "1011", "9000")
    assert inside["skip"].startswith("no function AT 00001011; it is interior to FUN_00001000 @ 00001000")
    assert nowhere["skip"] == "no function at or containing 00009000"
    assert "1011        SKIP: no function AT" in capsys.readouterr().out


def test_apply_removes_the_function_its_label_and_with_undefine_its_code(capsys):
    prog = program()
    infos = gathered(prog, "1000", "1002", "9000")
    assert df.apply(prog, infos, undefine = True) == (True, True)
    assert prog.getFunctionManager().getFunctionAt(at(BASE)) is None
    assert prog.getSymbolTable().getSymbols(at(BASE + 2)) == []
    assert [(str(lo), str(hi)) for lo, hi, _ in prog.getListing().cleared] == [
        ("00001000", "00001001"), ("00001010", "0000101f"), ("00001002", "00001005")]
    out = capsys.readouterr().out
    assert "deleted 00001000 (FUN_00001000)  + undefined 2 body range(s)" in out
    assert "cleared 1 stale symbol(s) at vacated entry addresses" in out
    assert prog.transactions == [["Delete mis-defined functions", True]]


def test_apply_without_undefine_keeps_the_code(capsys):
    prog = program()
    prog.getSymbolTable().symbols.clear()
    assert df.apply(prog, gathered(prog, "1002"), undefine = False) == (True, True)
    assert prog.getListing().cleared == [] and "deleted 00001002 (FUN_00001002)\n" in capsys.readouterr().out


def test_a_function_that_will_not_go_changes_nothing(monkeypatch, capsys):
    prog = program()
    infos = gathered(prog, "1002")
    monkeypatch.setattr(prog.getFunctionManager(), "removeFunction", lambda entry: False)
    assert df.apply(prog, infos, undefine = True) == (True, False)
    assert "!! removeFunction returned False for 00001002 (FUN_00001002)" in capsys.readouterr().out


def test_an_error_rolls_the_deletions_back(monkeypatch, capsys):
    prog = program()
    infos = gathered(prog, "1002")

    def refuse(_entry):
        raise RuntimeError("locked")
    monkeypatch.setattr(prog.getFunctionManager(), "removeFunction", refuse)
    assert df.apply(prog, infos, undefine = False) == (False, False)
    assert prog.transactions == [["Delete mis-defined functions", False]]
    assert "ERROR during apply: locked" in capsys.readouterr().out


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(df.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        df.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_reports_without_deleting(monkeypatch, tmp_path, capsys):
    prog = program()
    code, fake = run_main(monkeypatch, tmp_path, prog, "--addr", "1002", "--addr", "1040", "--addr", "9000")
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    assert "[dry-run] re-run with --apply" in capsys.readouterr().out
    lines = (tmp_path / "out.txt").read_text().splitlines()
    assert lines[1] == "requested: 3  actionable: 1  mode: report"
    assert lines[3].startswith("00001002") and lines[3].endswith("refs=0/0/0  deletable")
    assert "refs=7/0/0  SKIP: has 7 incoming ref(s)" in lines[4]
    assert lines[5] == "9000        --  SKIP: no function at or containing 00009000"


def test_main_snapshots_then_deletes_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(df.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = program()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--addr", "1002", "--apply", "--undefine")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-delete-function"]
    assert prog.getFunctionManager().getFunctionAt(at(BASE + 2)) is None and prog.getDomainFile().saves == 1
    assert "mode: APPLY (--undefine)" in (tmp_path / "out.txt").read_text()
    assert "[apply] deleting 1 function(s)" in capsys.readouterr().out


def test_main_with_everything_skipped_applies_nothing(monkeypatch, tmp_path, capsys):
    prog = program()
    assert run_main(monkeypatch, tmp_path, prog, "--addr", "1040", "--apply", "--no-snapshot")[0] == 0
    assert "Nothing actionable to apply" in capsys.readouterr().out and prog.transactions == []


def test_main_saves_nothing_when_nothing_was_removed(monkeypatch, tmp_path):
    prog = program()
    monkeypatch.setattr(prog.getFunctionManager(), "removeFunction", lambda entry: False)
    assert run_main(monkeypatch, tmp_path, prog, "--addr", "1002", "--apply", "--no-snapshot")[0] == 0
    assert prog.getDomainFile().saves == 0


def test_main_exits_1_when_the_apply_failed(monkeypatch, tmp_path):
    prog = program()

    def refuse(_entry):
        raise RuntimeError("locked")
    monkeypatch.setattr(prog.getFunctionManager(), "removeFunction", refuse)
    assert run_main(monkeypatch, tmp_path, prog, "--addr", "1002", "--apply", "--no-snapshot")[0] == 1
    assert prog.getDomainFile().saves == 0


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, None, "--addr", "1002")
    assert code == 1 and fake.closed == 1 and "ERROR: " in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(df.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--addr", "1002", "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_the_default_report_is_named_for_the_program(monkeypatch, tmp_path):
    monkeypatch.chdir(tmp_path)
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program()))
    monkeypatch.setattr(df.os, "_exit", sys.exit)
    with pytest.raises(SystemExit):
        df.main([str(tmp_path), "P", "--addr", "9000"])
    assert (tmp_path / "nocturne.exe_deleted_functions.txt").exists()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["delete_function.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "delete_function.py"), run_name = "__main__")
    assert exit_info.value.code == 0
