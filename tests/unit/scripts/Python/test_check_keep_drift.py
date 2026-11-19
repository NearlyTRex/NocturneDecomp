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


def test_code_lines_drop_comments_blanks_includes_and_spacing():
    assert ckd.code_lines(EXPORT) == ["int f ( int a )", "{", "int b = a + 1 ;", "return b * 2 ;", "}"]
    assert ckd.code_lines(KEEP_SAME) == ckd.code_lines(EXPORT)


def test_a_comment_marker_inside_a_literal_is_not_a_comment():
    text = 'f("%s // name\\n", p->name); /* gone */ g(\'"\'); // gone\nh("/*", 1);\n'
    assert ckd.code_lines(text) == ['f ( "%s // name\\n" , p -> name ) ; g ( \'"\' ) ;',
                                     'h ( "/*" , 1 ) ;']
    # the field read after the string used to be cut off with the "comment", hiding the difference
    assert ckd.compare('f("// x", p->name);\n', 'f("// x", p);\n')[0] < 1.0


def test_a_block_comment_keeps_its_line_breaks_and_operators_and_literals_stay_whole():
    assert ckd.code_lines("a = 1; /* x\n y */ b = 2;\nc = a - -b;\n") == ["a = 1 ;", "b = 2 ;", "c = a - - b ;"]
    assert ckd.code_lines("c = a--b;") == ["c = a -- b ;"]
    assert ckd.code_lines("x <<= y >= z && w != v;") == ["x <<= y >= z && w != v ;"]
    assert ckd.code_lines('s = "a b";') != ckd.code_lines('s = "ab";')
    assert ckd.code_lines("#  include <x.h>\n# define N 1\n") == ["# define N 1"]


@pytest.mark.parametrize("ratio, kind", [(1.0, "identical"), (0.95, "near"), (0.9, "partial"),
                                         (0.8, "partial"), (0.5, "rewritten")])
def test_each_ratio_has_a_kind(ratio, kind):
    assert ckd.kind_of(ratio) == kind


def test_compare_gives_the_shared_share_and_the_lines_that_differ():
    assert ckd.compare(KEEP_SAME, EXPORT) == (1.0, 0)
    assert ckd.compare(KEEP_EDITED, EXPORT) == (0.8, 1)
    assert ckd.compare("int x;\nint y;\n", "int x;\n") == (0.6667, 1)


def test_a_keep_clears_the_counted_warnings_it_drops():
    export = ("/* WARNING: Type propagation algorithm not settling */\n"
              "/* WARNING: Removing unreachable block (ram,0x00401000) */\n"
              "/* WARNING: Restarted to delay deadcode elimination for space: stack */\n")
    keep = "/* WARNING: Restarted to delay deadcode elimination for space: stack */\n"
    assert ckd.cleared_warnings(keep, export) == ["Type propagation algorithm not settling"]
    assert ckd.cleared_warnings(export, export) == []


@pytest.mark.parametrize("row, redundant", [
    ({"kind": "identical", "shim": False, "clears": []}, True),
    ({"kind": "identical", "shim": True, "clears": []}, False),
    ({"kind": "identical", "shim": False, "clears": ["Type propagation algorithm not settling"]}, False),
    ({"kind": "near", "shim": False, "clears": []}, False),
])
def test_only_a_plain_identical_keep_that_clears_nothing_is_redundant(row, redundant):
    assert ckd.is_redundant(row) is redundant


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


def test_collect_reads_every_keep_and_marks_one_with_no_export(tmp_path):
    rows = {os.path.basename(r["keep"]): r for r in ckd.collect(str(tree(tmp_path)))}
    assert sorted(rows) == ["edited_FUN_00000002.keep.cpp", "orphan_FUN_00000005.keep.cpp",
                            "plain_FUN_00000004.keep.c", "same_FUN_00000001.keep.cpp",
                            "shim_FUN_00000003.keep.cpp"]
    assert rows["orphan_FUN_00000005.keep.cpp"] == {**rows["orphan_FUN_00000005.keep.cpp"], "ratio": 0.0,
                                                   "kind": "no export", "shim": False, "changed": 5,
                                                   "clears": []}
    # the export's inlined-function warning never counts, so dropping it clears nothing
    assert rows["same_FUN_00000001.keep.cpp"] == {**rows["same_FUN_00000001.keep.cpp"], "ratio": 1.0,
                                                 "kind": "identical", "shim": False, "changed": 0,
                                                 "clears": []}
    assert rows["shim_FUN_00000003.keep.cpp"]["shim"]
    assert rows["edited_FUN_00000002.keep.cpp"]["kind"] == "partial"


def test_the_report_lists_every_keep_once_with_shim_ones_apart():
    rows = [{"keep": "/r/a.keep.cpp", "ratio": 1.0, "changed": 0, "kind": "identical", "shim": False},
            {"keep": "/r/s.keep.cpp", "ratio": 1.0, "changed": 0, "kind": "identical", "shim": True},
            {"keep": "/r/n.keep.cpp", "ratio": 0.96, "changed": 2, "kind": "near", "shim": False},
            {"keep": "/r/m.keep.cpp", "ratio": 0.99, "changed": 1, "kind": "near", "shim": False},
            {"keep": "/r/p.keep.cpp", "ratio": 0.9, "changed": 4, "kind": "partial", "shim": False},
            {"keep": "/r/q.keep.cpp", "ratio": 0.85, "changed": 5, "kind": "partial", "shim": True},
            {"keep": "/r/w.keep.cpp", "ratio": 0.2, "changed": 9, "kind": "rewritten", "shim": False},
            {"keep": "/r/o.keep.cpp", "ratio": 0.0, "changed": 3, "kind": "no export", "shim": True}]
    rows = [{**r, "clears": []} for r in rows]
    rows.append({"keep": "/r/v.keep.cpp", "ratio": 1.0, "changed": 0, "kind": "identical", "shim": False,
                 "clears": ["Type propagation algorithm not settling"]})
    lines = ckd.format_report(rows, relative_to = "/r").splitlines()
    assert lines[:6] == ["9 .keep files, each compared with the export beside it",
                         "  identical      2   (+1 using shim/AUTHENTIC switches)",
                         "  near           2   (+0 using shim/AUTHENTIC switches)",
                         "  partial        1   (+1 using shim/AUTHENTIC switches)",
                         "  rewritten      1   (+0 using shim/AUTHENTIC switches)",
                         "  no export      0   (+1 using shim/AUTHENTIC switches)"]

    def section(title):
        start = next(i for i, ln in enumerate(lines) if ln.startswith("-- " + title))
        end = next((i for i in range(start + 1, len(lines)) if not lines[i]), len(lines))
        return lines[start], lines[start + 1:end]

    assert section("REDUNDANT") == ("-- REDUNDANT: identical code, no shim switch - can be deleted --  1",
                                    ["  1.000    0 line(s) differ  a.keep.cpp"])
    assert section("REVIEWED")[1] == ["  1.000    0 line(s) differ  v.keep.cpp"]
    assert section("NEAR")[1] == ["  0.990    1 line(s) differ  m.keep.cpp", "  0.960    2 line(s) differ  n.keep.cpp"]
    assert section("PARTIAL")[1] == ["  0.900    4 line(s) differ  p.keep.cpp"]
    assert section("REWRITTEN")[1] == ["  0.200    9 line(s) differ  w.keep.cpp"]
    assert section("SHIM")[1] == ["  1.000    0 line(s) differ  s.keep.cpp  [identical]",
                                  "  0.850    5 line(s) differ  q.keep.cpp  [partial]"]
    assert section("NO EXPORT")[1] == ["  0.000    3 line(s) differ  o.keep.cpp"]
    listed = [ln for ln in lines if ln.startswith("  ") and "line(s) differ" in ln]
    assert len(listed) == len(rows)


def test_main_reports_each_program_found(tmp_path, monkeypatch, capsys):
    src = tree(tmp_path / "annotations" / "nocedit.exe" / "pseudocode")
    assert src.is_dir()
    monkeypatch.setattr(ckd, "ROOT", str(tmp_path))
    assert ckd.main([]) == 0
    assert capsys.readouterr().out.startswith("5 .keep files, each compared")
    assert ckd.main(["--program", "all"]) == 0
    assert "core/a.cpp/same_FUN_00000001.keep.cpp" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["check_keep_drift.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_keep_drift.py"), run_name = "__main__")
    assert exit_info.value.code == 0
