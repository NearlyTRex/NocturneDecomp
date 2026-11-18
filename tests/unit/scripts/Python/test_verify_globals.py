# Imports
import os
import runpy
import subprocess
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import verify_globals as vg

# Fails a file that says BAD, with a missing type, another error and a warning
FAKE_COMPILER = """#!/bin/sh
for last; do :; done
if grep -q BAD "$last"; then
  echo "$last:1:1: warning: unused" >&2
  echo "$last:1:1: error: unknown type name 'CBat'" >&2
  echo "$last:2:1: error: expected ';'" >&2
  exit 1
fi
if grep -q QUIET "$last"; then
  exit 1
fi
"""


@pytest.fixture(name = "compiler")
def fixture_compiler(tmp_path):
    path = tmp_path / "fakecc"
    path.write_text(FAKE_COMPILER, encoding = "utf-8")
    path.chmod(0o755)
    return str(path)


def pseudocode(tmp_path, files):
    root = tmp_path / "pseudocode"
    (root / "include").mkdir(parents = True)
    for rel, text in files.items():
        path = root / "src" / "globals" / rel
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(text, encoding = "utf-8")
    return root


def test_the_cpp_files_are_found_sorted_less_the_skipped(tmp_path):
    root = pseudocode(tmp_path, {"b.cpp": "", "a.cpp": "", "a.h": "", "old/c.cpp": "", "old/deep/d.cpp": "",
                                 "older/e.cpp": "", "skip.cpp": ""})
    src = str(root / "src" / "globals")
    found = vg.find_cpp_files(src, ["old"], ["skip.cpp"])
    assert [os.path.relpath(f, src) for f in found] == ["a.cpp", "b.cpp", os.path.join("older", "e.cpp")]
    assert len(vg.find_cpp_files(src)) == 6


def test_a_compile_reports_success_its_errors_a_timeout_or_a_missing_compiler(tmp_path, compiler, monkeypatch):
    good, bad = tmp_path / "good.cpp", tmp_path / "bad.cpp"
    good.write_text("", encoding = "utf-8")
    bad.write_text("BAD", encoding = "utf-8")
    assert vg.compile_cpp_file(str(good), str(tmp_path), compiler) == (True, None)
    ok, error = vg.compile_cpp_file(str(bad), str(tmp_path), compiler)
    assert not ok and "unknown type name 'CBat'" in error
    ok, error = vg.compile_cpp_file(str(good), str(tmp_path), str(tmp_path / "nocc"))
    assert not ok and error.startswith(f"Compiler '{tmp_path / 'nocc'}' could not run: ")

    def time_out(*_args, **_kwargs):
        raise subprocess.TimeoutExpired("cc", 60)
    monkeypatch.setattr(vg.subprocess, "run", time_out)
    assert vg.compile_cpp_file(str(good), str(tmp_path), compiler) == (False, "Compilation timed out")


def test_the_error_lines_are_kept_with_a_missing_type_shortened():
    assert vg.parse_error_message("a: warning: x\nb: error: unknown type name 'CBat'\nc: Error: expected ';'") == [
        "Missing type: CBat", "c: Error: expected ';'"]
    assert vg.parse_error_message("x" * 300) == ["x" * 200]


def test_no_files_is_nothing_to_verify(tmp_path, capsys):
    assert vg.verify_globals(str(tmp_path), str(tmp_path)) == (0, 0, [])
    assert "No cpp files found" in capsys.readouterr().out


@pytest.mark.parametrize("jobs", [1, 4])
def test_failures_are_reported_in_path_order_with_their_issues(tmp_path, compiler, capsys, jobs):
    root = pseudocode(tmp_path, {"c.cpp": "BAD", "a.cpp": "", "b.cpp": "BAD"})
    passed, failed, failed_files = vg.verify_globals(str(root / "src" / "globals"), str(root / "include"),
                                                     verbose = True, compiler = compiler, max_workers = jobs)
    assert (passed, failed, [f for f, _ in failed_files]) == (1, 2, ["b.cpp", "c.cpp"])
    out = capsys.readouterr().out
    assert out.index("  OK: a.cpp") < out.index("FAIL: b.cpp") < out.index("FAIL: c.cpp")
    assert "      Missing type: CBat" in out


def test_stop_on_error_stops_at_the_first_failure(tmp_path, compiler, capsys):
    root = pseudocode(tmp_path, {"a.cpp": "BAD", "b.cpp": "BAD"})
    passed, failed, _ = vg.verify_globals(str(root / "src" / "globals"), str(root / "include"),
                                          stop_on_error = True, compiler = compiler)
    assert (passed, failed) == (0, 1)
    out = capsys.readouterr().out
    assert "Stopping on first error." in out and "OK:" not in out and "      " not in out


def test_main_needs_both_directories(tmp_path, capsys):
    assert vg.main([str(tmp_path)]) == 1
    (tmp_path / "src" / "globals").mkdir(parents = True)
    assert vg.main([str(tmp_path)]) == 1
    assert capsys.readouterr().out.count("is not a directory") == 2


def test_main_passes_when_everything_compiles(tmp_path, compiler, capsys):
    root = pseudocode(tmp_path, {"a.cpp": "", "skip/b.cpp": "BAD", "c.cpp": "BAD"})
    assert vg.main([str(root), "-c", compiler, "--skip-dir", "skip", "--skip-file", "c.cpp"]) == 0
    assert "All globals compiled successfully!" in capsys.readouterr().out


def test_main_lists_the_failures_and_their_full_errors(tmp_path, compiler, capsys):
    root = pseudocode(tmp_path, {"a.cpp": "BAD", "b.cpp": "QUIET"})
    assert vg.main([str(root), "-c", compiler]) == 1
    assert "DETAILED ERRORS" not in capsys.readouterr().out
    assert vg.main([str(root), "-c", compiler, "--show-errors"]) == 1
    out = capsys.readouterr().out
    assert "Failed files:\n  - a.cpp\n  - b.cpp" in out
    assert "--- a.cpp ---" in out and "--- b.cpp ---\n(no error message)" in out


def test_the_script_runs_as_main(tmp_path, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["verify_globals.py", str(tmp_path)])
    with pytest.raises(SystemExit) as exc:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "verify_globals.py"), run_name = "__main__")
    assert exc.value.code == 1
