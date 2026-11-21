# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
import ghidra_fake
from fake_pyghidra import FakePyghidra
from ghidra_program import Address
from repo_paths import SCRIPTS_DIR
from string_immediates import put, string_program
import split_offcut_strings as sos
from ghidra_annotations.util import log
from ghidra_annotations.util import string as string_util

BASE = 0x5f8060
# "?333?CTrigger": the high bytes of 0.7f, loaded at +1, before "CTrigger" at +5
TRIGGER = 0x5f806f
GROUND = 0x5f807d       # "GROUND_WOOD", used whole and as "WOOD" at +7
UNUSED = 0x5f8090       # "spare", used by nothing
KPARM = 0x5f8097        # "kParmInt", used as "Int" at +5 and "nt" at +6: the source skipping a prefix
BINARY = 0x5f80a0       # three bytes and "abc" typed as an empty string, used at +3
LONG = 0x5f80b0         # "Message: hello", used at +9: more than a constant could be
TEXTS = ((TRIGGER, "?333?CTrigger"), (GROUND, "GROUND_WOOD"), (UNUSED, "spare"), (KPARM, "kParmInt"),
         (LONG, "Message: hello"))


def image():
    data = bytearray(0x70)
    for offset, text in TEXTS:
        data[offset - BASE:offset - BASE + len(text) + 1] = text.encode() + b"\0"
    data[BINARY - BASE:BINARY - BASE + 7] = b"\x01\x02\x03abc\0"
    return bytes(data)


def program():
    prog = string_program({})
    prog.getMemory().add_block(".data", BASE, image())
    listing = prog.getListing()
    for offset, text in TEXTS:
        listing.add_data(offset, ghidra_fake.TerminatedStringDataType(), text, length = len(text) + 1)
    listing.add_data(BINARY, ghidra_fake.TerminatedStringDataType(), "", length = 7)
    put(prog, 0x4d0000, "PUSH", KPARM + 5)
    prog.getReferenceManager().add(0x4d0008, KPARM + 6)
    put(prog, 0x4d0010, "PUSH", BINARY + 3)
    put(prog, 0x4d0020, "PUSH", LONG + 9)
    listing.add_data(0x5f8020, ghidra_fake.TerminatedStringDataType(), None, length = 4)
    listing.add_data(0x5f8030, ghidra_fake.IntegerDataType("int", 4))
    prog.getSymbolTable().createLabel(Address(TRIGGER), "s_s_333_CTrigger_005f806f", "USER_DEFINED")
    put(prog, 0x59af61, "PUSH", TRIGGER + 5)
    prog.getReferenceManager().add(0x5a0000, TRIGGER + 5)
    prog.getReferenceManager().add(0x59ab49, TRIGGER + 1)
    prog.getReferenceManager().add(0x5e0000, GROUND)
    put(prog, 0x4a0000, "PUSH", GROUND + 7)
    # Neither an address in a string: a small number, one before every string, one past a string's end
    put(prog, 0x4c0000, "MOV", "ECX", 5)
    put(prog, 0x4c0010, "PUSH", 0x1000)
    put(prog, 0x4c0020, "PUSH", UNUSED + 6)
    return prog


def test_the_plan_splits_only_strings_whose_start_nothing_uses():
    rows = sos.plan(program())
    assert [(r["start"], r["target"], r["offsets"], r["action"]) for r in rows] == [
        ("005f806f", "005f8074", [1, 5], "SPLIT"), ("005f807d", "005f8084", [7], "SHARED"),
        ("005f8097", "005f809c", [5, 6], "NAMED-PREFIX"), ("005f80a0", "005f80a3", [3], "NOT-TEXT"),
        ("005f80b0", "005f80b9", [9], "LONG-PREFIX")]
    assert rows[0]["prefix"] == b"?333?".hex() and rows[0]["uses"] == [0x59ab49, 0x59af61, 0x5a0000]
    assert rows[0]["text"] == "?333?CTrigger"


def test_apply_re_creates_the_string_at_its_use_and_drops_the_old_one():
    prog = program()
    assert sos.apply(prog, sos.plan(prog)) == 1
    listing = prog.getListing()
    assert listing.getDefinedDataAt(Address(TRIGGER)) is None
    made = listing.getDefinedDataAt(Address(TRIGGER + 5))
    assert made is not None and made.getLength() == len("CTrigger") + 1
    assert [s.getName() for s in prog.getSymbolTable().getSymbols(Address(TRIGGER + 5))] == ["s_CTrigger_005f8074"]
    assert prog.getSymbolTable().getSymbols(Address(TRIGGER)) == []
    assert listing.getDefinedDataAt(Address(GROUND)) is not None
    assert prog.transactions == [["Split offcut strings", True]]


def test_apply_sets_up_the_logging_the_string_helper_needs(monkeypatch):
    # Headless, nothing else has: the helper's first log line used to fail the whole split
    monkeypatch.setattr(log, "logger_instance", None)
    prog = program()
    assert sos.apply(prog, sos.plan(prog)) == 1


def test_a_string_that_cant_be_made_rolls_the_split_back(monkeypatch, capsys):
    prog = program()
    monkeypatch.setattr(string_util, "create_or_replace_string", lambda *_args: False)
    assert sos.apply(prog, sos.plan(prog)) is None
    assert prog.transactions == [["Split offcut strings", False]]
    assert "ERROR during apply: no string could be made at 005f8074" in capsys.readouterr().out


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(sos.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        sos.main([str(tmp_path), "P", "bw1.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_reports_without_writing(monkeypatch, tmp_path, capsys):
    prog = program()
    code, fake = run_main(monkeypatch, tmp_path, prog)
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    assert "[dry-run] re-run with --apply" in capsys.readouterr().out
    text = (tmp_path / "out.txt").read_text(encoding = "utf-8")
    assert "mode: report" in text and "  LONG-PREFIX=1  NAMED-PREFIX=1  NOT-TEXT=1  SHARED=1  SPLIT=1" in text
    assert "== NAMED-PREFIX (1) ==\n  005f8097 +5,6  'kParmInt'  prefix 6b5061726d" in text
    assert ("== SPLIT (1) ==\n  005f806f +1,5  '?333?CTrigger'  prefix 3f3333333f  used by 0059ab49 0059af61 005a0000\n"
            in text)
    assert "== SHARED (1) ==\n  005f807d +7  'GROUND_WOOD'" in text


def test_the_scripts_folder_is_put_back_on_the_path_after_pyghidra_starts(monkeypatch, tmp_path):
    # pyghidra drops the working directory, which is the scripts folder when run from there
    monkeypatch.setattr(sys, "path", [p for p in sys.path if p != sos.THIS_DIR])
    run_main(monkeypatch, tmp_path, string_program({}))
    assert sys.path[0] == sos.THIS_DIR


def test_a_long_use_list_is_cut_short_in_the_report(tmp_path):
    rows = [{"start": "00001000", "target": "00001001", "text": "x", "offsets": [1], "prefix": "00",
             "uses": [1, 2, 3, 4, 5], "action": "SPLIT"}]
    sos.write_report(str(tmp_path / "r.txt"), "p", rows, False)
    assert "used by 00000001 00000002 00000003 00000004 ...\n" in (tmp_path / "r.txt").read_text(encoding = "utf-8")


def test_main_snapshots_then_splits_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(sos.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = program()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-offcut-strings"]
    assert prog.getDomainFile().saves == 1
    out = capsys.readouterr().out
    assert "[apply] splitting 1 string(s)..." in out and "Split 1. Saving" in out
    assert "mode: APPLY" in (tmp_path / "out.txt").read_text(encoding = "utf-8")


def test_nothing_to_split_saves_nothing(monkeypatch, tmp_path, capsys):
    prog = string_program({0x5f8000: "alone"})
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 0
    assert "Nothing to split." in capsys.readouterr().out and prog.getDomainFile().saves == 0


def test_a_failed_apply_exits_1_without_saving(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(string_util, "create_or_replace_string", lambda *_args: False)
    prog = program()
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 1
    assert "Rolled back; nothing saved." in capsys.readouterr().out and prog.getDomainFile().saves == 0


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, None)
    assert code == 1 and fake.closed == 1 and "ERROR: " in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(sos.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_the_default_report_is_named_for_the_program(monkeypatch, tmp_path):
    monkeypatch.chdir(tmp_path)
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(string_program({})))
    monkeypatch.setattr(sos.os, "_exit", sys.exit)
    with pytest.raises(SystemExit):
        sos.main([str(tmp_path), "P"])
    assert (tmp_path / "nocturne.exe_offcut_strings.txt").exists()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["split_offcut_strings.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "split_offcut_strings.py"), run_name = "__main__")
    assert exit_info.value.code == 0
