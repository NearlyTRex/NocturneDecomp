# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
import disassemble_function as df

TEXT = section_va(0x400000, 0)     # 0x401000
# push ebp; call +0 (to the next instruction); jmp back to it; jmp eax; ret
CODE = bytes([0x55, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xEB, 0xF9, 0xFF, 0xE0, 0xC3])


@pytest.fixture(name = "exe")
def fixture_exe(tmp_path):
    path = tmp_path / "nocedit.exe"
    path.write_bytes(build_sectioned_pe([(".text", CODE + b"\xcc" * 5, 0x60000020),
                                         (".bss", b"", 0xc0000080, 0x100)]))
    return path


@pytest.fixture(name = "tree")
def fixture_tree(tmp_path):
    unit = tmp_path / "src" / "core" / "a.cpp"
    unit.mkdir(parents = True)
    end = f"{TEXT + len(CODE) - 1:08x}"
    (unit / "f_FUN_00401000.json").write_text(json.dumps({"address_range": [["00401000", end]]}))
    (unit / "f_helper_FUN_00401000.json").write_text("{}")
    (unit / "g_FUN_01401000.json").write_text(json.dumps({"function": {"address_range": [["01401000", "01401001"]]}}))
    (unit / "f_FUN_00401000.cpp").write_text("")
    return tmp_path


def test_a_function_is_found_by_its_address_or_its_name(tree):
    found = df.find_json_file
    assert os.path.basename(found("0x401000", str(tree))) == "f_FUN_00401000.json"
    assert os.path.basename(found("401000", str(tree))) == "f_FUN_00401000.json"     # not g_FUN_01401000
    assert os.path.basename(found("f_FUN_00401000", str(tree))) == "f_FUN_00401000.json"
    assert os.path.basename(found("helper", str(tree))) == "f_helper_FUN_00401000.json"
    assert found("0x999", str(tree)) is None and found("nothing", str(tree)) is None
    assert df.ADDRESS_RE.match("add") is None


def test_ranges_come_from_the_json_with_their_inclusive_end(tree, capsys):
    assert df.get_address_ranges("0x401000", str(tree)) == [(TEXT, TEXT + len(CODE))]
    assert df.get_address_ranges("g_FUN", str(tree)) == [(0x1401000, 0x1401002)]
    assert df.get_address_ranges("0x500000", str(tree)) == [(0x500000, 0x500400)]
    err = capsys.readouterr().err
    assert "; Source: f_FUN_00401000.json" in err and "disassembling 0x400 bytes from 0x00500000" in err


def test_a_name_with_no_ranges_or_no_file_is_an_error(tree, capsys):
    with pytest.raises(SystemExit):
        df.get_address_ranges("helper", str(tree))
    with pytest.raises(SystemExit):
        df.get_address_ranges("nothing", str(tree))
    assert "could not find function 'nothing'" in capsys.readouterr().err


def test_the_binary_is_the_one_given_or_the_first_found(exe, monkeypatch, capsys):
    assert df.find_binary(str(exe)) == str(exe)
    monkeypatch.setattr(df, "BINARY_SEARCH_PATHS", ["/nonexistent", str(exe)])
    assert df.find_binary() == str(exe)
    monkeypatch.setattr(df, "BINARY_SEARCH_PATHS", [])
    for given in (None, "/nonexistent"):
        with pytest.raises(SystemExit):
            df.find_binary(given)
    assert "Specify with --binary" in capsys.readouterr().err


def test_the_disassembly_keeps_the_last_instruction_and_labels_targets(exe, capsys):
    data = exe.read_bytes()
    assert df.va_to_file_offset(data, TEXT + 1) == 0x201 and df.va_to_file_offset(data, 0x300000) is None
    df.disassemble_ranges(data, [(TEXT, TEXT + len(CODE)), (0x300000, 0x300010)])
    out = capsys.readouterr().out
    assert "; WARNING: address 0x00300000 not found in any PE section" in out
    assert "; === 0x00401000 - 0x0040100A ===" in out
    assert "  LOC_00401006:\n    00401006  jmp" in out
    assert out.rstrip().endswith("0040100A  ret")
    df.disassemble_ranges(data, [(TEXT + 1, TEXT + 6)])       # the call's target is outside
    assert "LOC_" not in capsys.readouterr().out


def test_main_prints_the_function(exe, tree, monkeypatch, capsys):
    monkeypatch.setattr(df, "ANNOTATIONS_DIR", str(tree))
    monkeypatch.setattr(df, "get_address_ranges", lambda name: [(TEXT, TEXT + len(CODE))])
    df.main(["f_FUN_00401000", "--binary", str(exe)])
    out = capsys.readouterr().out
    assert out.startswith("; Function: f_FUN_00401000\n; Address ranges: ['0x00401000-0x0040100A']")
    assert "ret" in out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["disassemble_function.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "disassemble_function.py"), run_name = "__main__")
    assert exit_info.value.code == 0
