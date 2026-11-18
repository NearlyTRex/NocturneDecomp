# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, DataType, StringDataType, TerminatedStringDataType, UnicodeDataType
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
import normalize_strings as ns

RDATA = 0x500000
TEXT = 0x401000


def strings_program(*strings, text = b"\0" * 16):
    """A program whose .rdata holds each (bytes, data type, decoded value, labels) at 0x100 steps."""
    prog = Program()
    image = bytearray(0x100 * len(strings))
    for slot, (raw, data_type, value, labels) in enumerate(strings):
        address = RDATA + slot * 0x100
        image[slot * 0x100:slot * 0x100 + len(raw)] = raw
        prog.getListing().add_data(address, data_type, value, length = len(raw))
        for label in labels:
            prog.getSymbolTable().createLabel(Address(address), label, "ANALYSIS")
    prog.getMemory().add_block(".rdata", RDATA, bytes(image))
    prog.getMemory().add_block(".text", TEXT, text, execute = True)
    return prog


def by_addr(rows):
    return {int(r["addr"], 16) - RDATA >> 8: r for r in rows}


def test_each_string_is_classified():
    prog = strings_program(
        (b"Hello world\0", StringDataType(), "Hello world", ["s_Hello world_00500000"]),
        (b"Done\0", TerminatedStringDataType(), "Done", ["s_Done_00500100"]),
        (b"Done\0", TerminatedStringDataType(), "Done", ["s_Done"]),
        (b"Open\0", StringDataType(), "Open", ["s_Open_00500300"]),
        (b"Title\0", StringDataType(), "Title", ["g_Title"]),
        (b"\0", StringDataType(), None, []),
        (b"abc\0", StringDataType(), "ab", []),
        (b"W\0i\0\0\0", UnicodeDataType(), "Wi", ["u_Wi"]),
        (b"W\0i\0\0\0", UnicodeDataType(), "Wi", ["s_Wi_00500800"]),
        (b"\x07\0\0\0", DataType("int", 4), None, []),
    )
    rows, warnings = ns.plan(prog)
    got = {slot: r["action"] for slot, r in by_addr(rows).items()}
    assert got == {0: ns.RETYPE_RELABEL, 1: ns.OK, 2: ns.RELABEL, 3: ns.RETYPE, 4: ns.SKIP_NAMED,
                   5: ns.SKIP_NOVALUE, 6: ns.RELABEL, 7: ns.RELABEL, 8: ns.SKIP_UNICODE}
    rows = by_addr(rows)
    assert (rows[0]["label"], rows[0]["length"], rows[4]["current"]) == ("s_Hello_world_00500000", 12, "g_Title")
    assert warnings == ["00500600: decoded value is 2 chars but 4 bytes to NUL (label only, data left as string)"]
    forced = by_addr(ns.plan(prog, force = True)[0])
    assert forced[4]["action"] == ns.RETYPE_RELABEL


def test_a_value_ghidra_cannot_decode_is_read_from_memory():
    prog = strings_program((b"Load\0", StringDataType(), None, []))
    data = prog.getListing().getDefinedDataAt(Address(RDATA))

    def refuse():
        raise RuntimeError("bad charset")
    data.getValue = refuse
    (row,), _ = ns.plan(prog)
    assert (row["value"], row["action"]) == ("Load", ns.RETYPE_RELABEL)


def test_string_data_over_code_is_left_unless_asked():
    prog = strings_program(text = b"Hi\0\0Yo\0" + b"\0" * 9)
    prog.getListing().add_data(TEXT, StringDataType(), "Hi", length = 3)
    prog.getListing().add_data(TEXT + 4, StringDataType(), "Yo", length = 3)
    prog.getSymbolTable().createLabel(Address(TEXT), "caseD_3", "ANALYSIS")
    rows, _ = ns.plan(prog)
    assert [(r["action"], r["current"]) for r in rows] == [(ns.SKIP_CODE, "caseD_3"), (ns.SKIP_CODE, None)]
    rows, _ = ns.plan(prog, include_code = True)
    assert [r["action"] for r in rows] == [ns.SKIP_NAMED, ns.RETYPE_RELABEL]


def test_a_string_with_no_terminator_in_reach_only_has_its_label_fixed(monkeypatch):
    prog = strings_program((b"Tail", StringDataType(), "Tail", []), (b"Tail", StringDataType(), "Tail",
                                                                        ["s_Tail_00500100"]))
    # The last string runs off the end of the block; the first runs past the scan limit
    monkeypatch.setattr(ns, "MAX_STRING_BYTES", 8)
    prog.getMemory().blocks[0].data = bytearray(b"Tail" + b"x" * 0xfc + b"Tail")
    rows, warnings = ns.plan(prog)
    assert [(r["action"], r["length"]) for r in rows] == [(ns.RELABEL, None), (ns.SKIP_UNTERMINATED, None)]
    assert warnings == ["00500000: no NUL terminator within 8 bytes (label only)",
                        "00500100: no NUL terminator within 8 bytes (label only)"]


def test_apply_retypes_and_relabels_in_one_transaction(capsys):
    prog = strings_program((b"Hello world\0", StringDataType(), "Hello world", ["s_Hello world_00500000"]),
                           (b"Done\0", TerminatedStringDataType(), "Done", ["s_Done", "s_Done_00500100"]),
                           (b"Title\0", StringDataType(), "Title", ["g_Title"]),
                           (b"Open\0", StringDataType(), "Open", ["s_Open_00500300"]))
    rows, _ = ns.plan(prog)
    # Done's right label is there, but so is a stale one the export would read instead
    assert [r["action"] for r in rows] == [ns.RETYPE_RELABEL, ns.RELABEL, ns.SKIP_NAMED, ns.RETYPE]
    assert ns.apply_rows(prog, rows, progress_every = 1) == (2, 2)
    assert prog.transactions == [["Normalize strings", True]]
    data = prog.getListing().getDefinedDataAt(Address(RDATA))
    assert (data.getDataType().getName(), data.getLength()) == ("TerminatedCString", 12)
    names = {s.getName() for s in prog.getSymbolTable().symbols}
    assert names == {"s_Hello_world_00500000", "s_Done_00500100", "g_Title", "s_Open_00500300"}
    assert len(prog.getSymbolTable().symbols) == 4 and "  ... 3/3" in capsys.readouterr().out


def test_an_error_rolls_the_whole_apply_back():
    prog = strings_program((b"Open\0", StringDataType(), "Open", []))
    rows, _ = ns.plan(prog)

    def refuse(*_args):
        raise RuntimeError("duplicate")
    prog.getSymbolTable().createLabel = refuse
    with pytest.raises(RuntimeError, match = "duplicate"):
        ns.apply_rows(prog, rows)
    assert prog.transactions == [["Normalize strings", False]]


def test_the_report_lists_each_action_a_sample_of_ok_and_the_warnings(tmp_path):
    rows = [{"addr": f"{i:08x}", "type": "TerminatedCString", "label": f"s_x_{i:08x}", "current": None,
             "action": ns.OK} for i in range(4)]
    rows.append({"addr": "00000010", "type": "string", "label": None, "current": "g_Name", "action": ns.SKIP_NAMED})
    out = tmp_path / "report.txt"
    counts = ns.write_report(str(out), "game.exe", rows, ["a warning"], applied = True, sample = 2)
    text = out.read_text()
    assert counts[ns.OK] == 4 and "mode: APPLY" in text and "  SKIP-NAMED=1  OK=4" in text
    assert "  00000010  string          (none)                                    cur: g_Name" in text
    assert "  ... 2 more" in text and "== warnings (1) ==\n  a warning" in text
    ns.write_report(str(out), "game.exe", [], [], applied = False)
    assert "mode: report" in out.read_text() and "warnings" not in out.read_text()


def run_main(monkeypatch, tmp_path, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(ns.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        ns.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_reports_without_writing(monkeypatch, tmp_path, capsys):
    prog = strings_program((b"Open\0", StringDataType(), "Open", []))
    code, fake = run_main(monkeypatch, tmp_path, prog)
    out = capsys.readouterr().out
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    assert "  RETYPE+RELABEL   1" in out and "[dry-run]" in out and (tmp_path / "out.txt").exists()


def test_main_snapshots_then_applies_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(ns.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = strings_program((b"abc\0", StringDataType(), "ab", []))
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply")
    out = capsys.readouterr().out
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-normalize-strings"]
    assert "  warnings         1" in out and "Retyped 0, relabeled 1." in out
    assert prog.getDomainFile().saves == 1


def test_main_with_nothing_to_normalize_saves_nothing(monkeypatch, tmp_path, capsys):
    prog = strings_program((b"Done\0", TerminatedStringDataType(), "Done", ["s_Done_00500000"]))
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 0
    assert "Nothing to normalize." in capsys.readouterr().out and prog.getDomainFile().saves == 0


def test_a_failed_apply_exits_nonzero_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    prog = strings_program((b"Open\0", StringDataType(), "Open", []))

    def refuse(*_args):
        raise RuntimeError("duplicate")
    prog.getSymbolTable().createLabel = refuse
    code, fake = run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")
    assert code == 1 and fake.closed == 1 and prog.getDomainFile().saves == 0
    assert "ERROR: duplicate" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(ns.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["normalize_strings.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "normalize_strings.py"), run_name = "__main__")
    assert exit_info.value.code == 0
