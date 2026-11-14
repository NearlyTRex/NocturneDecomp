# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import check_this_ptr as ctp


def method(name, *params, addr = "00401000"):
    return {"name": f"core_game.cpp_{name}_FUN_{addr}", "addr": addr,
            "vars": {"params": [{"name": n, "type": t} for n, t in params]}}


def write_program(root, program, entries, classes = ()):
    functions = root / program / "functions"
    functions.mkdir(parents = True)
    (functions / "functions_bucket_00.json").write_text(json.dumps(entries))
    (functions / "functions_buckets.json").write_text("{}")
    (functions / "functions_bucket_01.json").write_text(json.dumps({"not": "a list"}))
    headers = root / program / "pseudocode" / "include" / "types" / "classes"
    headers.mkdir(parents = True)
    for name in classes:
        (headers / f"{name}.h").write_text("")


ENTRIES = [
    method("CGame_ok", ("this_ptr", "CGame *")),
    method("SMemHead_ok", ("this_ptr", "SMemHead*")),
    method("SMemHead_add", ("header", "SMemHead *")),
    method("CWaypoint_go", ("this_ptr", "CWayPoint *")),
    method("CGame_both", ("menu", "CMenu *")),
    method("CGame_none"),
    method("CGame_skipped"),
    {"name": "free_function_FUN_00401000"}]


def test_the_schema_covers_classes_and_structs():
    assert ctp.METHOD_RE.match("core_x.cpp_SMemHead_add_FUN_1").group("cls") == "SMemHead"
    assert ctp.METHOD_RE.match("core_x.cpp_CGame_draw_FUN_1").group("cls") == "CGame"
    assert not ctp.METHOD_RE.match("core_x.cpp_TGame_draw_FUN_1")


def test_the_skip_file_takes_bare_and_program_scoped_symbols(tmp_path):
    path = tmp_path / "skip.txt"
    path.write_text("# header\n\nsym_a  # why\nnocedit.exe:sym_b\n")
    assert ctp.load_skip(str(path)) == {"sym_a", "nocedit.exe:sym_b"}
    assert ctp.load_skip(str(tmp_path / "absent.txt")) == set()


def test_every_kind_of_receiver_defect_is_found(tmp_path, monkeypatch):
    monkeypatch.setattr(ctp.sm, "ANNOTATIONS", str(tmp_path))
    write_program(tmp_path, "nocedit.exe", ENTRIES, classes = ("CWayPoint", "CGame"))
    total, findings = ctp.check("nocedit.exe", {"nocedit.exe:core_game.cpp_CGame_skipped_FUN_00401000"})
    assert total == 7
    kinds = {f["name"].split("_")[2] + "_" + f["name"].split("_")[3]: f["kind"] for f in findings}
    assert kinds == {"SMemHead_add": "NAME", "CWaypoint_go": "TYPE", "CGame_both": "BOTH", "CGame_none": "NO_PARAMS"}
    assert [f["cls_is_a_type"] for f in findings if f["kind"] == "TYPE"] == [False]


def test_the_verdict_names_the_side_to_fix():
    assert ctp.verdict({"kind": "NAME"}) is None
    assert "rename the function to CWayPoint" in ctp.verdict(
        {"kind": "TYPE", "have_type": "CWayPoint *", "cls": "CWaypoint", "cls_is_a_type": False})
    assert "check the assembly" in ctp.verdict(
        {"kind": "BOTH", "have_type": "CMenu *", "cls": "CGame", "cls_is_a_type": True})


def test_the_report_lists_each_kind_and_truncates(tmp_path, monkeypatch, capsys):
    monkeypatch.setattr(ctp.sm, "ANNOTATIONS", str(tmp_path))
    write_program(tmp_path, "nocedit.exe", ENTRIES + [method("CGame_none2")], classes = ("CWayPoint",))
    total, findings = ctp.check("nocedit.exe", set())
    assert ctp.report("nocedit.exe", total, findings, show = 1) == 6
    out = capsys.readouterr().out
    assert "cannot receive this" in out and "schema requires     SMemHead *this_ptr" in out
    assert "... 2 more (use --show)" in out and "rename the function to CWayPoint" in out


def test_main_fails_on_findings_and_passes_when_clean(tmp_path, monkeypatch, capsys):
    monkeypatch.setattr(ctp.sm, "ANNOTATIONS", str(tmp_path))
    write_program(tmp_path, "bad.exe", ENTRIES)
    write_program(tmp_path, "good.exe", ENTRIES[:2])
    skip = tmp_path / "skip.txt"
    skip.write_text("core_game.cpp_CGame_none_FUN_00401000\n")
    monkeypatch.setattr(sys, "argv", ["check_this_ptr.py", "bad.exe", "--skip-file", str(skip)])
    assert ctp.main() == 1
    assert "skip.txt: 1 exemption(s)" in capsys.readouterr().out
    monkeypatch.setattr(sys, "argv", ["check_this_ptr.py", "good.exe", "--skip-file", str(tmp_path / "none")])
    assert ctp.main() == 0
    assert "OK: every class method" in capsys.readouterr().out


def test_running_the_script_exits_with_the_verdict(tmp_path, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["check_this_ptr.py", "absent.exe", "--skip-file", str(tmp_path / "none")])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_this_ptr.py"), run_name = "__main__")
    assert stop.value.code == 0
