# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import check_stale_keeps as csk

REPORT = """# Adjacency sentinel rewrites

- Pool `g_Orphan` sentinel `g_Nobody` (count 1)

### `core_a.cpp_f_FUN_00401000`

- Pool `g_Pool` sentinel `g_PoolEnd` (count 4)
  - Before: `while (p != &g_PoolEnd)`
  - After:  `while (p != g_Pool + 4)`
- Pool `g_Other` sentinel `g_OtherEnd` (count 2)
  - Before: `while (q != &g_OtherEnd)`

### `core_b.cpp_g_FUN_00401100`

- Pool `g_List` sentinel `g_ListEnd` (count 8)
  - Before: `while (r != (T *)&g_ListEnd)`
  - After:  `while (r != g_List + 8)`
"""


@pytest.fixture(name = "tree")
def fixture_tree(monkeypatch, tmp_path):
    report = tmp_path / "rewrites.md"
    report.write_text(REPORT)
    keeps = tmp_path / "pseudocode" / "src" / "core"
    keeps.mkdir(parents = True)
    (keeps / "f.keep.cpp").write_text("while (p != &g_PoolEnd) {}\n")
    (keeps / "g.keep.c").write_text("// &g_ListEnd mentioned\nwhile (r != &g_ListEndMarker) {}\n")
    (keeps / "h.cpp").write_text("while (p != &g_PoolEnd) {}\n")
    monkeypatch.setattr(csk, "ROOT", str(tmp_path))
    monkeypatch.setattr(csk, "REPORT", str(report))
    monkeypatch.setattr(csk, "KEEP_ROOT", str(tmp_path / "pseudocode"))
    return tmp_path


def test_rewrites_are_read_from_the_report(tree):
    rewrites = csk.parse_rewrites(csk.REPORT)
    assert [(r["function"], r["sentinel"], r["after"]) for r in rewrites] == [
        ("core_a.cpp_f_FUN_00401000", "g_PoolEnd", "while (p != g_Pool + 4)"),
        ("core_b.cpp_g_FUN_00401100", "g_ListEnd", "while (r != g_List + 8)")]
    assert csk.parse_rewrites(str(tree / "none.md")) == []


def test_only_keeps_are_searched(tree):
    assert sorted(os.path.basename(k) for k in csk.find_keeps(csk.KEEP_ROOT)) == ["f.keep.cpp", "g.keep.c"]


def test_a_keep_is_stale_only_where_a_loop_takes_the_whole_sentinels_address(tree):
    rewrites = csk.parse_rewrites(csk.REPORT)
    keeps = tree / "pseudocode" / "src" / "core"
    assert [r["sentinel"] for r in csk.check_keep(str(keeps / "f.keep.cpp"), rewrites)] == ["g_PoolEnd"]
    assert csk.check_keep(str(keeps / "g.keep.c"), rewrites) == []


def test_main_lists_stale_keeps_with_the_fix(tree, capsys):
    assert csk.main([]) == 1
    out = capsys.readouterr().out
    assert "Checking 2 .keep files against 2 known rewrites..." in out
    assert "=== 1 STALE .keep file(s) found ===" in out
    assert os.path.join("pseudocode", "src", "core", "f.keep.cpp") in out
    assert "     After:  while (p != g_Pool + 4)" in out


def test_main_is_quiet_when_nothing_is_stale_or_there_is_nothing_to_check(tree, monkeypatch, capsys):
    (tree / "pseudocode" / "src" / "core" / "f.keep.cpp").write_text("while (p != g_Pool + 4) {}\n")
    assert csk.main([]) == 0
    assert "All .keep files are clean." in capsys.readouterr().out
    (tree / "rewrites.md").write_text("# nothing rewritten\n")
    assert csk.main([]) == 0
    assert "nothing to check" in capsys.readouterr().out
    monkeypatch.setattr(csk, "REPORT", str(tree / "none.md"))
    assert csk.main([]) == 0
    assert "No rewrites report" in capsys.readouterr().err


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["check_stale_keeps.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_stale_keeps.py"), run_name = "__main__")
    assert exit_info.value.code == 0


def test_another_report_and_tree_can_be_named(tree, capsys):
    other = tree / "other"
    other.mkdir()
    assert csk.main(["--report", str(tree / "rewrites.md"), "--keep-root", str(other)]) == 0
    assert "Checking 0 .keep files" in capsys.readouterr().out
