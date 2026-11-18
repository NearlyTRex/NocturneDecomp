# Imports
import os
import subprocess
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import header_compile as hc


class Compiler:
    """Stands in for subprocess.run: fails the sources whose name or included
    header is listed, and records each command with its temp source's text."""

    def __init__(self, failing = (), stderr = "x.h:1:1: error: nope", version = 0, raises = None):
        self.failing, self.stderr, self.version, self.raises = failing, stderr, version, raises
        self.runs = []

    def __call__(self, cmd, capture_output = True, text = False, timeout = None):
        assert capture_output and timeout
        if self.raises:
            raise self.raises
        if cmd[1] == "--version":
            return SimpleNamespace(returncode = self.version)
        source = cmd[-1]
        with open(source, encoding = "utf-8") as f:
            body = f.read()
        self.runs.append((cmd, body))
        failed = any(name in source or f'"{name}"' in body for name in self.failing)
        return SimpleNamespace(returncode = 1 if failed else 0, stderr = self.stderr + "\n" if failed else "")


@pytest.fixture(name = "compiler")
def fixture_compiler(monkeypatch):
    compiler = Compiler()
    monkeypatch.setattr(hc.subprocess, "run", compiler)
    return compiler


@pytest.fixture(name = "logs")
def fixture_logs(monkeypatch):
    seen = []
    monkeypatch.setattr(hc, "log_info", seen.append)
    return seen


def write(path, text = ""):
    path.parent.mkdir(parents = True, exist_ok = True)
    path.write_text(text, encoding = "utf-8")
    return path


def pseudocode_tree(tmp_path, headers = ("a.h", "constants/constants_1.h", "globals/g.h", "nocturne.h"), shims = True):
    for name in headers:
        write(tmp_path / "include" / name)
    if shims:
        (tmp_path / "shims").mkdir()
    return tmp_path


def test_headers_are_found_sorted_without_the_skipped_ones(tmp_path):
    inc = pseudocode_tree(tmp_path / "p", headers = ("b.h", "a.h", "skip/x.h", "skip/deep/y.h", "keep/z.h",
                                                       "keep/notes.txt", "nocturne.h")) / "include"
    found = hc.find_header_files(str(inc), skip_dirs = ["skip"], skip_files = ["nocturne.h"])
    assert [os.path.relpath(h, inc) for h in found] == ["a.h", "b.h", "keep/z.h"]


def test_a_header_compiles_on_its_own_with_the_shims_on_the_path(tmp_path, compiler):
    inc = pseudocode_tree(tmp_path) / "include"
    assert hc.compile_header(str(inc / "constants" / "constants_1.h"), str(inc), "cc") == (True, None)
    cmd, body = compiler.runs[0]
    # No master header first: a range header must include what it uses itself
    assert body == '#include "constants/constants_1.h"\nint main(void) { return 0; }\n'
    assert cmd[0] == "cc" and cmd[-3:-1] == ["-I", str(tmp_path / "shims")] and not os.path.exists(cmd[-1])


def test_a_header_that_fails_returns_the_compilers_errors(tmp_path, compiler):
    inc = pseudocode_tree(tmp_path, shims = False) / "include"
    compiler.failing = ("a.h",)
    assert hc.compile_header(str(inc / "a.h"), str(inc), "cc") == (False, "x.h:1:1: error: nope")
    assert "-I" in compiler.runs[0][0] and str(tmp_path / "shims") not in compiler.runs[0][0]


@pytest.mark.parametrize("raised, message", [
    (subprocess.TimeoutExpired("cc", 30), "Compilation timed out"),
    (FileNotFoundError("cc"), "Compiler 'cc' not found"),
    (PermissionError("denied"), "Compiler 'cc' could not run: denied"),
])
def test_a_compiler_that_cannot_finish_is_a_failure(tmp_path, monkeypatch, raised, message):
    monkeypatch.setattr(hc.subprocess, "run", Compiler(raises = raised))
    inc = pseudocode_tree(tmp_path) / "include"
    assert hc.compile_header(str(inc / "a.h"), str(inc), "cc") == (False, message)
    assert hc.compile_cpp_file(str(inc / "a.h"), str(inc), "cc") == (False, message)


def test_failures_come_back_in_path_order(tmp_path, compiler):
    inc = pseudocode_tree(tmp_path, headers = ("c.h", "a.h", "b.h")) / "include"
    compiler.failing = ("c.h", "a.h")
    passed, failed, failures = hc.verify_headers(str(inc), "cc", max_workers = 3)
    assert (passed, failed, [path for path, _ in failures]) == (1, 2, ["a.h", "c.h"])
    assert hc.verify_headers(str(tmp_path / "missing"), "cc") == (0, 0, [])


@pytest.mark.parametrize("path, base, out", [
    ("/repo/annotations/x", "/repo", "annotations/x"),
    ("/repo2/x", "/repo", "/repo2/x"),                    # a sibling sharing the prefix is not under it
    ("/elsewhere/x", "/repo", "/elsewhere/x"),
    ("/repo/x", None, "/repo/x"),
])
def test_paths_under_the_base_are_made_relative(path, base, out):
    assert hc.make_path_relative(path, base) == out


def test_relative_paths_are_compared_from_the_working_directory(tmp_path, monkeypatch):
    monkeypatch.chdir(tmp_path)
    assert hc.make_path_relative(str(tmp_path / "a" / "b"), "a") == "b"


@pytest.mark.parametrize("error, base, out", [
    ("", "/repo", ""), (None, "/repo", None), ("/repo/a.h:1: e", None, "/repo/a.h:1: e"),
    ("/repo/a.h:1: e /repo", "/repo", "a.h:1: e "),
])
def test_the_repo_path_is_stripped_from_errors(error, base, out):
    assert hc.strip_paths_from_error(error, base) == out


@pytest.mark.parametrize("text, out", [
    ("", []),
    ("a.h:1:2: warning: w\na.h:3:4: error: e\n  context line\nIn file included from b.h:\n",
     ["a.h:3:4: error: e", "In file included from b.h:"]),
    ("   indented only\nsecond", ["indented only"]),
    ("x: error: 1\nx: error: 2\nx: error: 3", ["x: error: 1", "x: error: 2"]),
])
def test_error_lines_skip_warnings_and_fall_back_to_the_first_line(text, out):
    assert hc.extract_error_lines(text, max_lines = 2) == out


def test_cpp_files_skip_variants_and_prefer_their_keep(tmp_path):
    src = tmp_path / "src"
    for name in ("a.cpp", "a.keep.cpp", "b.cpp", "c.mmx.cpp", "d.byval.cpp", "e.c", "skip/f.cpp", "g.cpp"):
        write(src / name)
    found = hc.find_cpp_files(str(src), skip_dirs = ["skip"], skip_files = ["g.cpp"])
    assert [os.path.relpath(f, src) for f in found] == ["a.keep.cpp", "b.cpp"]


def test_cpp_files_compile_with_the_include_dirs(tmp_path, compiler):
    root = pseudocode_tree(tmp_path)
    cpp = write(root / "src" / "globals" / "g.cpp", "int x;\n")
    assert hc.compile_cpp_file(str(cpp), str(root / "include"), "cc") == (True, None)
    assert compiler.runs[0][0][-1] == str(cpp) and compiler.runs[0][1] == "int x;\n"
    compiler.failing = ("g.cpp",)
    assert hc.verify_cpp_files(str(root / "src"), str(root / "include"), "cc") == (
        0, 1, [("globals/g.cpp", "x.h:1:1: error: nope")])
    assert hc.verify_cpp_files(str(root / "nothing"), str(root / "include"), "cc") == (0, 0, [])


def test_header_check_without_an_include_dir_passes(tmp_path, compiler, logs):
    assert hc.verify_headers_after_export(str(tmp_path), "cc") is True
    assert logs == [f"Header verification: include directory not found at {tmp_path / 'include'}"]


@pytest.mark.parametrize("compiler_fake", [
    Compiler(version = 1), Compiler(raises = FileNotFoundError("cc")),
    Compiler(raises = subprocess.TimeoutExpired("cc", 5)),
])
def test_a_missing_compiler_skips_both_checks(tmp_path, monkeypatch, logs, compiler_fake):
    monkeypatch.setattr(hc.subprocess, "run", compiler_fake)
    root = pseudocode_tree(tmp_path)
    (root / "src" / "globals").mkdir(parents = True)
    assert hc.verify_headers_after_export(str(root), "cc") is True
    assert hc.verify_globals_after_export(str(root), "cc") is True
    assert logs == ["Header verification: compiler 'cc' not available, skipping",
                    "Globals verification: compiler 'cc' not available, skipping"]


def test_an_include_dir_with_only_the_aggregate_has_nothing_to_check(tmp_path, compiler, logs):
    root = pseudocode_tree(tmp_path, headers = ("nocturne.h",))
    assert hc.verify_headers_after_export(str(root), "cc") is True
    assert logs[-1] == "  No headers found to verify" and compiler.runs == []


def test_clean_headers_write_a_clean_report(tmp_path, compiler, logs):
    root = pseudocode_tree(tmp_path / "repo" / "p")
    reports = tmp_path / "reports"
    reports.mkdir()
    assert hc.verify_headers_after_export(str(root), "cc", reports_dir = str(reports),
                                          repo_dir = str(tmp_path / "repo")) is True
    text = (reports / "header_compilation.txt").read_text(encoding = "utf-8")
    assert text == ("=" * 80 + "\nHEADER COMPILATION REPORT\n" + "=" * 80 + "\n\nCompiler: cc\n"
                    "Include directory: p/include\n\n"
                    "Summary: 3 passed, 0 failed out of 3 total (100.0% success)\n\n"
                    "All headers compiled successfully.\n")
    assert "  Header verification: 3/3 passed (100.0%)" in logs and len(compiler.runs) == 3


def test_failing_headers_are_reported_in_path_order_and_logged_trimmed(tmp_path, compiler, logs):
    names = [f"h{i:02d}.h" for i in range(12)]
    root = pseudocode_tree(tmp_path, headers = names)
    compiler.failing = tuple(names)
    compiler.stderr = f"{tmp_path}/include/x.h:1: error: " + "y" * 130
    assert hc.verify_headers_after_export(str(root), "cc", reports_dir = str(tmp_path),
                                          repo_dir = str(tmp_path)) is False
    text = (tmp_path / "header_compilation.txt").read_text(encoding = "utf-8")
    assert "FAILED HEADERS (12)" in text and text.index("FILE: h00.h") < text.index("FILE: h11.h")
    assert "include/x.h:1: error: yyy" in text and str(tmp_path) not in text.split("Summary")[1]
    assert logs[logs.index("  FAILED headers (12):") + 1] == "    - h00.h"
    error_logs = [line for line in logs if line.startswith("      ")]
    assert len(error_logs) == 10 and {len(line) for line in error_logs} == {126}
    assert error_logs[0].endswith("y...") and logs[-1] == "    ... and 2 more (see report for full list)"


def test_a_failure_with_no_output_says_so(tmp_path, compiler, logs):
    root = pseudocode_tree(tmp_path, headers = ("a.h",))
    compiler.failing, compiler.stderr = ("a.h",), ""
    assert hc.verify_headers_after_export(str(root), "cc", reports_dir = str(tmp_path)) is False
    assert "FILE: a.h\n" + "-" * 40 + "\n(no error output)\n" in (
        tmp_path / "header_compilation.txt").read_text(encoding = "utf-8")
    assert logs[-1] == "    - a.h"
    assert hc.verify_headers_after_export(str(root), "cc") is False      # no report asked for


@pytest.mark.parametrize("make, message", [
    ((), "Globals verification: src/globals directory not found"),
    (("src/globals",), "Globals verification: include directory not found"),
])
def test_globals_check_needs_both_directories(tmp_path, compiler, logs, make, message):
    for name in make:
        (tmp_path / name).mkdir(parents = True)
    assert hc.verify_globals_after_export(str(tmp_path), "cc") is True
    assert logs == [message]


def test_a_globals_dir_with_no_sources_has_nothing_to_check(tmp_path, compiler, logs):
    root = pseudocode_tree(tmp_path)
    (root / "src" / "globals").mkdir(parents = True)
    assert hc.verify_globals_after_export(str(root), "cc") is True
    assert logs[-1] == "  No globals cpp files found to verify"


def test_globals_are_compiled_and_reported(tmp_path, compiler, logs):
    root = pseudocode_tree(tmp_path / "p")
    for name in ("g1.cpp", "g2.cpp"):
        write(root / "src" / "globals" / name)
    assert hc.verify_globals_after_export(str(root), "cc", reports_dir = str(tmp_path), repo_dir = str(tmp_path))
    assert ("Source directory: p/src/globals\nInclude directory: p/include\n\nSummary: 2 passed"
            in (tmp_path / "globals_compilation.txt").read_text(encoding = "utf-8"))
    compiler.failing = ("g2.cpp",)
    assert hc.verify_globals_after_export(str(root), "cc", reports_dir = str(tmp_path)) is False
    text = (tmp_path / "globals_compilation.txt").read_text(encoding = "utf-8")
    assert "FAILED FILES (1)\n" in text and "FILE: g2.cpp" in text
    assert logs[-3:] == ["  FAILED globals (1):", "    - g2.cpp", "      x.h:1:1: error: nope"]
    assert hc.verify_globals_after_export(str(root), "cc") is False      # no report asked for
