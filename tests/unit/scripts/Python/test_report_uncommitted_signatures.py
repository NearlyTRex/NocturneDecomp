# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import report_uncommitted_signatures as rus


def params(*types):
    return {"params": [{"name": f"p{i}", "type": t} for i, t in enumerate(types)]}


FUNCTIONS = [
    {"addr": "00000010", "name": "core_a.cpp_CA_f_FUN_00000010", "ret": "int", "conv": "__cdecl"},
    {"addr": "00000020", "name": "core_a.cpp_CA_g_FUN_00000020", "ret": "undefined1", "sig": "default"},
    {"addr": "00000030", "name": "core_a.cpp_CA_h_FUN_00000030", "ret": "void", "conv": "__cdecl",
     "vars": params("int", "undefined4")},
    {"addr": "00000040", "name": "core_b.cpp_k_FUN_00000040", "ret": "undefined4*"},
    {"addr": "00000050", "name": "core_b.cpp_t_FUN_00000050", "ret": "undefined1", "thunk": True},
    {"addr": "00000060", "name": "crt_stdio.c_puts_FUN_00000060", "ret": "int", "sig": "analysis", "conv": "__cdecl"},
    {"addr": "00000070", "name": "FUN_00000070", "ret": "int", "sig": "imported", "conv": "__cdecl"},
    {"name": "no address", "ret": "undefined1"},
]


def test_each_reason_a_signature_is_not_to_be_trusted():
    by_addr = {f.get("addr"): rus.reasons(f) for f in FUNCTIONS}
    assert by_addr["00000010"] == []
    assert by_addr["00000020"] == ["sig default", "ret undefined1"]
    assert by_addr["00000030"] == ["param 1:undefined4"]
    assert by_addr["00000040"] == ["ret undefined4*", "conv unknown"]
    assert by_addr["00000050"] == []
    assert by_addr["00000060"] == ["sig analysis"]


def test_functions_are_grouped_by_unit_by_address():
    units = rus.collect(FUNCTIONS)
    assert sorted(units) == ["(no unit)", "core_a.cpp", "core_b.cpp", "crt_stdio.c"]
    assert [addr for addr, _n, _r in units["core_a.cpp"]] == ["00000020", "00000030"]
    assert units["(no unit)"] == [("00000070", "FUN_00000070", ["sig imported"])]


def test_the_report_counts_reasons_and_lists_the_crt_only_on_request():
    lines = rus.render("game.exe", len(FUNCTIONS), rus.collect(FUNCTIONS), crt = False)
    assert lines[0] == "game.exe: 8 functions, 4 game and 1 CRT with an uncommitted or undefined signature"
    assert lines[1:7] == ["  conv unknown       1", "  param undefined4   1", "  ret undefined1     1",
                          "  ret undefined4*    1", "  sig default        1", "  sig imported       1"]
    assert lines[8] == "core_a.cpp  2"
    assert lines[9] == f"  00000020  {'core_a.cpp_CA_g_FUN_00000020':<60} sig default, ret undefined1"
    assert "crt_stdio.c  1" not in lines
    assert "crt_stdio.c  1" in rus.render("game.exe", 8, rus.collect(FUNCTIONS), crt = True)


@pytest.fixture(name = "annotations")
def fixture_annotations(tmp_path, monkeypatch):
    monkeypatch.setattr(rus.sm, "ANNOTATIONS", str(tmp_path))
    folder = tmp_path / "game.exe" / "functions"
    folder.mkdir(parents = True)
    (folder / "functions_bucket_00.json").write_text(json.dumps(FUNCTIONS))
    return tmp_path


def test_main_writes_each_programs_report(annotations, capsys):
    rus.main(["game.exe", "--crt"])
    text = (annotations / "game.exe" / "reports" / rus.REPORT).read_text()
    assert text.startswith("game.exe: 8 functions, 4 game and 1 CRT") and "crt_stdio.c  1" in text
    assert capsys.readouterr().out.startswith("game.exe: 8 functions")


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["report_uncommitted_signatures.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "report_uncommitted_signatures.py"), run_name = "__main__")
    assert exit_info.value.code == 0
