# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import check_keep_drift as ckd

EXPORT = """// Name: f
// Signature: int f(int a)
#include "nocturne.h"
/* WARNING: Inlined function: g */
int f(int a)
{
  int b = a + 1;
  return b * 2;
}
"""
KEEP_SAME = """// Name: f
// MANUAL RECONSTRUCTION
#include "nocturne.h"
#include "other.h"
int f(int a)
{
    int b = a + 1;   // the same, spaced differently
    return b * 2;
}
"""
KEEP_EDITED = KEEP_SAME.replace("return b * 2;", "return b * 3;")
KEEP_SHIM = KEEP_SAME.replace("int f(int a)", "#if SHIM_FOO\n#endif\nint f(int a)")


def test_code_lines_drop_comments_blanks_includes_and_whitespace():
    assert ckd.code_lines(EXPORT) == ["intf(inta)", "{", "intb=a+1;", "returnb*2;", "}"]
    assert ckd.code_lines(KEEP_SAME) == ckd.code_lines(EXPORT)


@pytest.mark.parametrize("ratio, kind", [(1.0, "identical"), (0.95, "near"), (0.9, "partial"),
                                         (0.8, "partial"), (0.5, "rewritten")])
def test_each_ratio_has_a_kind(ratio, kind):
    assert ckd.kind_of(ratio) == kind


def test_compare_gives_the_shared_share_and_the_lines_that_differ():
    assert ckd.compare(KEEP_SAME, EXPORT) == (1.0, 0)
    assert ckd.compare(KEEP_EDITED, EXPORT) == (0.8, 1)
    assert ckd.compare("int x;\nint y;\n", "int x;\n") == (0.6667, 1)


def tree(tmp_path):
    unit = tmp_path / "src" / "core" / "a.cpp"
    unit.mkdir(parents = True)
    for name, keep in (("same_FUN_00000001", KEEP_SAME), ("edited_FUN_00000002", KEEP_EDITED),
                       ("shim_FUN_00000003", KEEP_SHIM)):
        (unit / f"{name}.cpp").write_text(EXPORT)
        (unit / f"{name}.keep.cpp").write_text(keep)
    c_unit = tmp_path / "src" / "engine" / "b.c"
    c_unit.mkdir(parents = True)
    (c_unit / "plain_FUN_00000004.c").write_text(EXPORT)
    (c_unit / "plain_FUN_00000004.keep.c").write_text(KEEP_SAME.replace("+ 1", "+ 2"))
    (unit / "orphan_FUN_00000005.keep.cpp").write_text(KEEP_SAME)
    (unit / "notes.txt").write_text("not a keep")
    return tmp_path / "src"


def test_collect_reads_every_keep_with_an_export_beside_it(tmp_path):
    rows = {os.path.basename(r["keep"]): r for r in ckd.collect(str(tree(tmp_path)))}
    assert sorted(rows) == ["edited_FUN_00000002.keep.cpp", "plain_FUN_00000004.keep.c",
                            "same_FUN_00000001.keep.cpp", "shim_FUN_00000003.keep.cpp"]
    assert rows["same_FUN_00000001.keep.cpp"] == {**rows["same_FUN_00000001.keep.cpp"], "ratio": 1.0,
                                                 "kind": "identical", "shim": False, "changed": 0}
    assert rows["shim_FUN_00000003.keep.cpp"]["shim"]
    assert rows["edited_FUN_00000002.keep.cpp"]["kind"] == "partial"


def test_the_report_lists_redundant_and_near_keeps_but_never_a_shim_one():
    rows = [{"keep": "/r/a.keep.cpp", "ratio": 1.0, "changed": 0, "kind": "identical", "shim": False},
            {"keep": "/r/s.keep.cpp", "ratio": 1.0, "changed": 0, "kind": "identical", "shim": True},
            {"keep": "/r/n.keep.cpp", "ratio": 0.96, "changed": 2, "kind": "near", "shim": False},
            {"keep": "/r/m.keep.cpp", "ratio": 0.99, "changed": 1, "kind": "near", "shim": False},
            {"keep": "/r/w.keep.cpp", "ratio": 0.2, "changed": 9, "kind": "rewritten", "shim": False}]
    lines = ckd.format_report(rows, relative_to = "/r").splitlines()
    assert lines[0] == "5 .keep files compared with the export beside them"
    assert lines[1] == "  identical      1   (+1 using shim/AUTHENTIC switches)"
    assert lines[4] == "  rewritten      1   (+0 using shim/AUTHENTIC switches)"
    redundant = lines.index("-- REDUNDANT: identical code, no shim switch - can be deleted --  1")
    assert lines[redundant + 1] == "  1.000    0 line(s) differ  a.keep.cpp"
    near = lines.index("-- NEAR: a few lines from the export - finish in Ghidra, then delete --  2")
    assert lines[near + 1:] == ["  0.990    1 line(s) differ  m.keep.cpp", "  0.960    2 line(s) differ  n.keep.cpp"]


def test_main_reports_each_program_found(tmp_path, monkeypatch, capsys):
    src = tree(tmp_path / "annotations" / "nocedit.exe" / "pseudocode")
    assert src.is_dir()
    monkeypatch.setattr(ckd, "ROOT", str(tmp_path))
    assert ckd.main([]) == 0
    assert capsys.readouterr().out.startswith("4 .keep files compared")
    assert ckd.main(["--program", "all"]) == 0
    assert "core/a.cpp/same_FUN_00000001.keep.cpp" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["check_keep_drift.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_keep_drift.py"), run_name = "__main__")
    assert exit_info.value.code == 0
