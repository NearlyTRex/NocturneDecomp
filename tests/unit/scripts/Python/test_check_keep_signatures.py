# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import check_keep_signatures as cks

EXPORT = """// Name: f_FUN_00000001
// Address: 00000001
// Address Range: 00000001-00000010
// Convention: __cdecl
// Signature: int __cdecl f_FUN_00000001(int a, void (*cb)(int))
int __cdecl f_FUN_00000001(int a, void (*cb)(int))
{
  return a;
}
"""
KEEP = """// Name: f_FUN_00000001
// Address: 00000001
// Address Range: 00000001-00000010
// Convention: __cdecl
// Signature: int __cdecl f_FUN_00000001(int a, void (*cb)(int))
// MANUAL RECONSTRUCTION
#include "nocturne.h"
/* int f_FUN_00000001(int a) { is commented out */
int helper(void) { return f_FUN_00000001(1, 0); }
int __cdecl   f_FUN_00000001(int a,
                             void (*cb)(int)) {
  return a;
}
"""


def put(directory, name, text):
    directory.mkdir(parents = True, exist_ok = True)
    (directory / name).write_text(text)


def test_the_header_is_the_leading_comment_block():
    assert cks.header_lines("// a\r\n// b\nint x;\n// c\n") == ["// a", "// b"]
    assert cks.header_lines("") == []


def test_a_definition_is_the_occurrence_followed_by_a_brace():
    assert cks.find_definition(KEEP, "f_FUN_00000001") == (
        "int __cdecl   f_FUN_00000001(int a,\n                             void (*cb)(int))")
    assert cks.find_definition("int g(void);\nx = g();\n", "g") is None
    assert cks.normalise(" int  f ( int ) ") == "intf(int)"


def test_a_matching_keep_has_nothing_to_report(tmp_path):
    put(tmp_path, "f_FUN_00000001.cpp", EXPORT)
    put(tmp_path, "f_FUN_00000001.keep.cpp", KEEP)
    assert cks.check_keep(str(tmp_path / "f_FUN_00000001.keep.cpp"), str(tmp_path / "f_FUN_00000001"),
                          cks.CHECKS) == []


def test_each_check_reports_its_own_problems(tmp_path):
    put(tmp_path, "f_FUN_00000001.c", EXPORT.replace("(int a, void (*cb)(int))", "(int a)"))
    stale = (KEEP.replace("// Convention: __cdecl\n", "")
             .replace("Address Range: 00000001-00000010", "Address Range: 00000001-00000020")
             .replace("// Address: 00000001\n", ""))
    put(tmp_path, "f_FUN_00000001.keep.c", stale)
    problems = cks.check_keep(str(tmp_path / "f_FUN_00000001.keep.c"), str(tmp_path / "f_FUN_00000001"),
                              cks.CHECKS)
    assert [c for c, _ in problems] == ["header", "header", "header", "header", "definition"]
    assert problems[0][1] == "missing // Address:"
    assert problems[1][1].startswith("stale // Address Range: 00000001-00000020\n")
    assert problems[2][1] == "missing // Convention: __cdecl"
    assert problems[4][1].startswith("differs from the export\n        keep:   int __cdecl")
    assert cks.check_keep(str(tmp_path / "f_FUN_00000001.keep.c"), str(tmp_path / "f_FUN_00000001"),
                          ("orphan",)) == []


def test_a_keep_without_its_function_or_signature(tmp_path):
    put(tmp_path, "f_FUN_00000001.cpp", EXPORT)
    put(tmp_path, "f_FUN_00000001.keep.cpp", KEEP.replace("int __cdecl   f_FUN", "int __cdecl   g_FUN"))
    base = str(tmp_path / "f_FUN_00000001")
    assert cks.check_keep(base + ".keep.cpp", base, ("definition",)) == [
        ("definition", "no definition of f_FUN_00000001")]
    put(tmp_path, "f_FUN_00000001.cpp", "// Name: f\n// Signature: int f(void)\n")
    assert cks.check_keep(base + ".keep.cpp", base, ("definition",)) == []
    put(tmp_path, "f_FUN_00000001.cpp", "// Name: f\n")
    assert cks.check_keep(base + ".keep.cpp", base, ("definition",)) == []


def test_an_orphan_is_reported_only_when_asked(tmp_path):
    put(tmp_path, "gone_FUN_2.keep.cpp", KEEP)
    base = str(tmp_path / "gone_FUN_2")
    assert cks.check_keep(base + ".keep.cpp", base, cks.CHECKS) == [("orphan", "no .cpp/.c beside it")]
    assert cks.check_keep(base + ".keep.cpp", base, ("header",)) == []


def tree(root):
    unit = root / "src" / "core" / "a.cpp"
    put(unit, "f_FUN_00000001.cpp", EXPORT)
    put(unit, "f_FUN_00000001.keep.cpp", KEEP)
    put(unit, "gone_FUN_2.keep.cpp", KEEP)
    put(unit, "notes.txt", "")
    return root / "src"


def test_collect_lists_only_keeps_with_problems_and_the_report_counts_them(tmp_path):
    src = tree(tmp_path)
    results, seen = cks.collect(str(src))
    assert seen == 2 and [os.path.basename(p) for p, _ in results] == ["gone_FUN_2.keep.cpp"]
    assert cks.format_report(results, seen, relative_to = str(src)) == (
        "core/a.cpp/gone_FUN_2.keep.cpp\n    orphan      no .cpp/.c beside it\n"
        "2 .keep files checked: 1 orphan, 0 definition, 0 header\n")
    assert cks.format_report(results, seen, ("orphan",), summary_only = True) == (
        "2 .keep files checked: 1 orphan\n")


def test_main_checks_each_program_found_and_fails_on_a_problem(tmp_path, monkeypatch, capsys):
    tree(tmp_path / "annotations" / "nocedit.exe" / "pseudocode")
    monkeypatch.setattr(cks, "ROOT", str(tmp_path))
    assert cks.main(["--program", "all", "--summary"]) == 1
    assert capsys.readouterr().out == "2 .keep files checked: 1 orphan, 0 definition, 0 header\n"
    assert cks.main(["--program", "tridx7.dll"]) == 0
    assert capsys.readouterr().out == "0 .keep files checked: 0 orphan, 0 definition, 0 header\n"


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["check_keep_signatures.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_keep_signatures.py"), run_name = "__main__")
    assert exit_info.value.code == 0
