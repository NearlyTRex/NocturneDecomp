# Imports
import os
import runpy
import subprocess
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import verify_headers as vh

# Compiles the temporary file's one #include: fails a header that says BAD or QUIET
FAKE_COMPILER = """#!/bin/sh
inc=
while [ $# -gt 1 ]; do
  [ "$1" = -I ] && inc=$2
  shift
done
header="$inc/$(sed -n 's/^#include "\\(.*\\)"$/\\1/p' "$1")"
if grep -q BAD "$header"; then
  echo "$header:1:1: error: unknown type name 'CBat'" >&2
  exit 1
fi
if grep -q QUIET "$header"; then
  exit 1
fi
"""


@pytest.fixture(name = "compiler")
def fixture_compiler(tmp_path):
    path = tmp_path / "fakecc"
    path.write_text(FAKE_COMPILER, encoding = "utf-8")
    path.chmod(0o755)
    return str(path)


def include_tree(tmp_path, files):
    root = tmp_path / "include"
    root.mkdir()
    for rel, text in files.items():
        path = root / rel
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(text, encoding = "utf-8")
    return root


TREE = {"nocturne.h": "", "globals.h": "", "types/a.h": "", "types/b.h": "BAD", "types/a.cpp": "",
        "system/s.h": "", "system/deep/t.h": "", "systemx/u.h": "", "constants/c.h": ""}


def rel(paths, root):
    return [os.path.relpath(p, root) for p in paths]


def test_the_headers_are_found_sorted_less_the_skipped_or_only_the_chosen(tmp_path):
    root = include_tree(tmp_path, TREE)
    assert rel(vh.find_header_files(str(root)), root) == [
        os.path.join("constants", "c.h"), "globals.h", "nocturne.h", os.path.join("system", "deep", "t.h"),
        os.path.join("system", "s.h"), os.path.join("systemx", "u.h"),
        os.path.join("types", "a.h"), os.path.join("types", "b.h")]
    assert rel(vh.find_header_files(str(root), ["system", "types"], ["globals.h"]), root) == [
        os.path.join("constants", "c.h"), "nocturne.h", os.path.join("systemx", "u.h")]
    # the top-level aggregates are left out once directories are chosen
    assert rel(vh.find_header_files(str(root), ["system/deep"], only_dirs = ["system"]), root) == [
        os.path.join("system", "s.h")]


def test_a_header_compiles_through_a_temporary_file_that_is_then_removed(tmp_path, compiler, monkeypatch):
    root = include_tree(tmp_path, TREE)
    scratch = tmp_path / "scratch"
    scratch.mkdir()
    monkeypatch.setattr(vh.tempfile, "tempdir", str(scratch))
    assert vh.compile_header(str(root / "types" / "a.h"), str(root), compiler) == (True, None)
    ok, error = vh.compile_header(str(root / "types" / "b.h"), str(root), compiler)
    assert not ok and "unknown type name 'CBat'" in error
    ok, error = vh.compile_header(str(root / "types" / "a.h"), str(root), str(tmp_path / "nocc"))
    assert not ok and error.startswith(f"Compiler '{tmp_path / 'nocc'}' could not run: ")

    def time_out(*_args, **_kwargs):
        raise subprocess.TimeoutExpired("cc", 30)
    monkeypatch.setattr(vh.subprocess, "run", time_out)
    assert vh.compile_header(str(root / "types" / "a.h"), str(root), compiler) == (False, "Compilation timed out")
    assert not any(scratch.iterdir())


def test_the_error_lines_are_kept_with_a_missing_type_shortened():
    assert vh.parse_error_message("a: warning: x\nb: error: unknown type name 'CBat'\nc: error: expected ';'") == [
        "Missing type: CBat", "c: error: expected ';'"]
    assert vh.parse_error_message("") == [""]


def test_no_headers_is_nothing_to_verify(tmp_path, capsys):
    assert vh.verify_headers(str(tmp_path)) == (0, 0, [])
    assert "No header files found" in capsys.readouterr().out


@pytest.mark.parametrize("jobs", [0, 4])
def test_failures_are_reported_in_path_order_with_their_issues(tmp_path, compiler, capsys, jobs):
    root = include_tree(tmp_path, {"t/c.h": "BAD", "t/a.h": "", "t/b.h": "BAD"})
    passed, failed, failed_headers = vh.verify_headers(str(root), verbose = True, compiler = compiler,
                                                       max_workers = jobs)
    assert (passed, failed) == (1, 2)
    assert [h for h, _ in failed_headers] == [os.path.join("t", "b.h"), os.path.join("t", "c.h")]
    out = capsys.readouterr().out
    assert out.index("  OK: t/a.h") < out.index("FAIL: t/b.h") < out.index("FAIL: t/c.h")
    assert "      Missing type: CBat" in out


def test_stop_on_error_stops_at_the_first_failure(tmp_path, compiler, capsys):
    root = include_tree(tmp_path, {"a.h": "BAD", "b.h": "BAD"})
    assert vh.verify_headers(str(root), stop_on_error = True, compiler = compiler)[:2] == (0, 1)
    out = capsys.readouterr().out
    assert "Stopping on first error." in out and "      " not in out


def test_main_needs_the_include_directory(tmp_path, capsys):
    assert vh.main([str(tmp_path / "none")]) == 1
    assert "is not a directory" in capsys.readouterr().out


def test_main_passes_with_the_aggregates_skipped(tmp_path, compiler, capsys):
    root = include_tree(tmp_path, {"nocturne.h": "BAD", "globals.h": "BAD", "constants.h": "BAD", "t/a.h": "",
                                   "u/b.h": "BAD"})
    assert vh.main([str(root), "-c", compiler, "--skip-aggregates", "--skip-dir", "u"]) == 0
    assert "All headers compiled successfully!" in capsys.readouterr().out
    assert vh.main([str(root), "-c", compiler, "--only-dir", "t"]) == 0


def test_main_lists_the_failures_and_their_full_errors(tmp_path, compiler, capsys):
    root = include_tree(tmp_path, {"a.h": "BAD", "b.h": "QUIET"})
    assert vh.main([str(root), "-c", compiler, "--skip-file", "none.h"]) == 1
    assert "DETAILED ERRORS" not in capsys.readouterr().out
    assert vh.main([str(root), "-c", compiler, "--show-errors"]) == 1
    out = capsys.readouterr().out
    assert "Failed headers:\n  - a.h\n  - b.h" in out
    assert "--- a.h ---" in out and "--- b.h ---\n(no error message)" in out


def test_the_script_runs_as_main(tmp_path, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["verify_headers.py", str(tmp_path / "none")])
    with pytest.raises(SystemExit) as exc:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "verify_headers.py"), run_name = "__main__")
    assert exc.value.code == 1
