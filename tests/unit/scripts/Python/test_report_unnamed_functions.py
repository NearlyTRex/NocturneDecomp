# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import report_unnamed_functions as ruf


def fn(name, addr, *sizes):
    return {"addr": f"{addr:08X}", "name": name, "body": [{"size": s} for s in sizes]}


FUNCTIONS = [
    fn("core_a.cpp_CA_f_FUN_00000010", 0x10, 8),
    fn("core_a.cpp_FUN_00000030", 0x30, 4),
    fn("core_a.cpp_FUN_00000020", 0x20, 2),
    fn("core_a.cpp_CA_FUN_00000080", 0x80, 5),
    fn("core_a.cpp_SB2_FUN_00000090", 0x90, 1),
    fn("core_a.cpp_Cabbage_FUN_000000a0", 0xa0, 1),
    fn("core_b.cpp_FUN_00000040", 0x40, 10, 6),
    fn("FUN_00000050", 0x50, 1),
    fn("crt_stdio.c_FUN_00000060", 0x60, 3),
    {"addr": "00000070", "name": "core_c.cpp_FUN_00000070"},
]


def test_a_function_is_unnamed_without_a_class_and_method_part():
    units = ruf.unnamed(FUNCTIONS)
    assert units == {
        "core_a.cpp": [("00000020", 2, "core_a.cpp_FUN_00000020"), ("00000030", 4, "core_a.cpp_FUN_00000030"),
                       ("00000080", 5, "core_a.cpp_CA_FUN_00000080"), ("00000090", 1, "core_a.cpp_SB2_FUN_00000090")],
        "core_b.cpp": [("00000040", 16, "core_b.cpp_FUN_00000040")],
        ruf.NO_UNIT: [("00000050", 1, "FUN_00000050")],
        "crt_stdio.c": [("00000060", 3, "crt_stdio.c_FUN_00000060")],
        "core_c.cpp": [("00000070", 0, "core_c.cpp_FUN_00000070")],
    }


def test_the_report_puts_the_biggest_gap_first_and_lists_the_crt_only_on_request():
    lines = ruf.render("game.exe", len(FUNCTIONS), ruf.unnamed(FUNCTIONS), crt = False)
    assert lines[0] == "game.exe: 10 functions, 2 named (20.0%), 7 unnamed game, 1 unnamed CRT"
    headers = [line for line in lines if line and not line.startswith(" ")][1:]
    assert headers == ["core_b.cpp  1 unnamed, 16 bytes", "core_a.cpp  4 unnamed, 12 bytes",
                       "(no unit)  1 unnamed, 1 bytes", "core_c.cpp  1 unnamed, 0 bytes"]
    assert "  00000020       2  core_a.cpp_FUN_00000020" in lines
    with_crt = ruf.render("game.exe", len(FUNCTIONS), ruf.unnamed(FUNCTIONS), crt = True)
    assert "crt_stdio.c  1 unnamed, 3 bytes" in with_crt
    assert ruf.render("empty.exe", 0, {}, crt = False) == [
        "empty.exe: 0 functions, 0 named (0.0%), 0 unnamed game, 0 unnamed CRT"]


@pytest.fixture(name = "annotations")
def fixture_annotations(tmp_path, monkeypatch):
    monkeypatch.setattr(ruf.sm, "ANNOTATIONS", str(tmp_path))
    folder = tmp_path / "game.exe" / "functions"
    folder.mkdir(parents = True)
    (folder / "functions_bucket_00.json").write_text(json.dumps(FUNCTIONS))
    return tmp_path


def test_main_writes_each_programs_report(annotations, capsys):
    ruf.main(["game.exe", "--crt"])
    report = (annotations / "game.exe" / "reports" / ruf.REPORT).read_text()
    assert report.startswith("game.exe: 10 functions") and "crt_stdio.c" in report
    assert "game.exe: 10 functions" in capsys.readouterr().out


def test_runs_as_a_script(annotations, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["report_unnamed_functions.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "report_unnamed_functions.py"), run_name = "__main__")
    assert exit_info.value.code == 0 and annotations.exists()
