# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Address, Program
from repo_paths import SCRIPTS_DIR
import commit_signatures as cs


def record(name, addr, ret = "void", params = (), **extra):
    out = {"name": name, "addr": addr, "ret": ret, **extra}
    if params:
        out["vars"] = {"params": [{"name": f"p{i}", "type": t} for i, t in enumerate(params)]}
    return out


REFERENCE = [
    record("core_a.cpp_CA_f_FUN_00009000", "00009000", "int", ["CA*", "int"]),
    record("core_a.cpp_CA_g_FUN_00009010", "00009010", "int", ["CA*"]),
    record("core_a.cpp_staticInit_FUN_00009020", "00009020"),
    record("core_b.cpp_staticInit_FUN_00009030", "00009030", "int"),
    record("core_b.cpp_FUN_00009040", "00009040"),
]
RECORDS = [
    record("core_a.cpp_CA_f_FUN_00001000", "00001000", "int", ["CA *", "int"], sig = "analysis"),
    record("core_a.cpp_CA_g_FUN_00001010", "00001010", "int", ["CA*", "char*"], sig = "imported"),
    record("core_a.cpp_staticInit_FUN_00001020", "00001020", sig = "analysis"),
    record("core_x.cpp_CX_new_FUN_00001030", "00001030", sig = "analysis"),
    record("core_a.cpp_CA_h_FUN_00001040", "00001040", "undefined4", sig = "analysis"),
    record("core_a.cpp_CA_f_FUN_00001050", "00001050", sig = "default"),
    record("core_a.cpp_CA_f_FUN_00001060", "00001060", sig = "analysis", thunk = True),
    record("core_a.cpp_CA_f_FUN_00001070", "00001070", "int", ["CA*", "int"]),
    {"name": "no address", "sig": "analysis"},
]


def test_a_signature_is_compared_by_types_with_spacing_ignored():
    assert cs.shape(RECORDS[0]) == ("int", ["CA*", "int"])
    assert cs.has_undefined(RECORDS[4]) and not cs.has_undefined(RECORDS[0])
    assert cs.unit_file("core_a.cpp") == "a.cpp" and cs.unit_file(None) is None


def test_only_analysis_and_imported_signatures_are_checked_against_their_twin():
    rows = {r["addr"]: (v, t and t["addr"]) for r, v, t in cs.plan(RECORDS, REFERENCE)}
    assert rows == {"00001000": ("commit", "00009000"), "00001010": ("differs", "00009010"),
                    "00001020": ("commit", "00009020"), "00001030": ("no twin", None),
                    "00001040": ("undefined", None)}


def test_the_report_groups_by_verdict_and_shows_what_the_reference_has():
    rows = cs.plan(RECORDS, REFERENCE)
    lines = cs.render("game.exe", "nocedit.exe", rows, allow_no_twin = True)
    assert lines[0] == ("game.exe: 5 uncommitted analysis/imported signature(s) against nocedit.exe: "
                        "2 commit, 1 differs, 1 no twin, 1 undefined")
    assert "-- no twin --  1 (committed with --allow-no-twin)" in lines
    assert f"  00001010  {'core_a.cpp_CA_g_FUN_00001010':<60} int(CA*, char*)  | nocedit.exe int(CA*)" in lines
    assert [r["addr"] for r in cs.to_commit(rows, False)] == ["00001000", "00001020"]
    assert [r["addr"] for r in cs.to_commit(rows, True)] == ["00001000", "00001020", "00001030"]
    assert cs.render("e.exe", "n.exe", [], False) == ["e.exe: 0 uncommitted analysis/imported signature(s) against n.exe: "]


def program_with_functions():
    program = Program()
    fm = program.getFunctionManager()
    for name, addr, source in (("core_a.cpp_CA_f_FUN_00001000", 0x1000, "ANALYSIS"),
                               ("core_a.cpp_CA_g_FUN_00001010", 0x1010, "USER_DEFINED"),
                               ("renamed_FUN_00001020", 0x1020, "ANALYSIS")):
        fm.add(name, addr).signature_source = source
    return program


def test_committing_marks_the_signature_user_defined_unless_it_changed():
    program = program_with_functions()
    done = cs.commit(program, [RECORDS[0], RECORDS[1], RECORDS[2], record("x", "00002000")])
    assert dict(done) == {"committed": 1, "already committed": 1, "changed since export": 2}
    assert program.getFunctionManager().getFunctionAt(Address(0x1000)).getSignatureSource() == "USER_DEFINED"
    assert program.transactions == [["Commit signatures", True]]


@pytest.fixture(name = "annotations")
def fixture_annotations(tmp_path, monkeypatch):
    monkeypatch.setattr(cs.sm, "ANNOTATIONS", str(tmp_path))
    for program, records in (("game.exe", RECORDS), ("nocedit.exe", REFERENCE)):
        folder = tmp_path / program / "functions"
        folder.mkdir(parents = True)
        (folder / "functions_bucket_00.json").write_text(json.dumps(records))
    return tmp_path


def test_main_reports_without_applying(annotations, capsys):
    assert cs.main(["proj", "P", "game.exe"]) == 0
    out = capsys.readouterr().out
    assert out.startswith("game.exe: 5 uncommitted") and out.rstrip().endswith("(dry run -- --apply commits 2)")


def test_main_commits_and_saves(annotations, monkeypatch, capsys):
    program = program_with_functions()
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    assert cs.main(["proj", "P", "game.exe", "--apply"]) == 0
    assert capsys.readouterr().out.rstrip().endswith("changed since export=1  committed=1")
    assert program.getDomainFile().saves == 1 and pyghidra.closed == 1
    assert pyghidra.opened == [(os.path.abspath("proj"), "P"), "/game.exe"]


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["commit_signatures.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "commit_signatures.py"), run_name = "__main__")
    assert exit_info.value.code == 0
