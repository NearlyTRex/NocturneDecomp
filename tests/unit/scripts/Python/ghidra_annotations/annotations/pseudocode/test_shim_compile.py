# Imports
import os
import subprocess

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import shim_compile as sc


class Result:
    def __init__(self, returncode = 0, stdout = "", stderr = ""):
        self.returncode, self.stdout, self.stderr = returncode, stdout, stderr


class Tools:
    """Stands in for pkg-config, sdl2-config and the compilers, by command."""

    def __init__(self, have = ("pkg-config", "clang++", "clang"), packages = ("sdl2", "SDL2_ttf"), fail = ()):
        self.have, self.packages, self.fail, self.commands = set(have), set(packages), fail, []

    def run(self, cmd, capture_output = True, text = False, timeout = None):
        assert capture_output and timeout
        self.commands.append(cmd)
        tool = cmd[0]
        if tool == "slow":
            raise subprocess.TimeoutExpired(cmd, timeout)
        if tool not in self.have:
            raise FileNotFoundError(tool)
        if tool == "pkg-config" and cmd[1] == "--exists":
            return Result(0 if cmd[2] in self.packages else 1)
        if tool in ("pkg-config", "sdl2-config"):
            asked = [c for c in cmd[1:] if not c.startswith("--")]
            ok = all(p in self.packages for p in asked)
            return Result(0 if ok else 1, "-I/usr/include/SDL2 -D_REENTRANT\n" if ok else "")
        if cmd[1] == "--version":
            return Result(0)
        source = cmd[-1]
        if any(source.endswith(name) for name in self.fail):
            return Result(1, stderr = f"{source}:1:1: error: nope\n  context\n")
        return Result(0)


@pytest.fixture(name = "tools")
def fixture_tools(monkeypatch):
    tools = Tools()
    monkeypatch.setattr(sc.subprocess, "run", tools.run)
    return tools


@pytest.fixture(name = "logs")
def fixture_logs(monkeypatch):
    seen = []
    monkeypatch.setattr(sc, "log_info", seen.append)
    return seen


def test_the_sdl_flags_come_from_pkg_config_with_the_optional_packages_found(tools):
    assert sc.get_sdl2_flags() == ["-I/usr/include/SDL2", "-D_REENTRANT"]
    assert tools.commands[-1] == ["pkg-config", "--cflags", "sdl2", "SDL2_ttf"]


def test_the_sdl_flags_fall_back_to_sdl2_config(tools):
    tools.have = {"sdl2-config"}
    assert sc.get_sdl2_flags() == ["-I/usr/include/SDL2", "-D_REENTRANT"]
    tools.have = {"pkg-config"}
    tools.packages = {"SDL2_ttf"}
    assert sc.get_sdl2_flags() == []


def test_a_slow_pkg_config_is_given_up_on(monkeypatch):
    def slow(cmd, **_kwargs):
        raise subprocess.TimeoutExpired(cmd, 5)
    monkeypatch.setattr(sc.subprocess, "run", slow)
    assert sc.get_sdl2_flags() == []


def shims(root, *names):
    for name in names:
        path = root / "shims" / name
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text("")
    (root / "include").mkdir(exist_ok = True)
    return str(root / "shims")


def test_shim_files_are_found_through_the_subdirectories(tmp_path):
    root = shims(tmp_path, "a.cpp", "gl/b.c", "gl/c.h", "net/d.cpp")
    assert [os.path.relpath(p, root) for p in sc.find_shim_files(root)] == ["a.cpp", "gl/b.c", "net/d.cpp"]
    assert sc.find_shim_files(str(tmp_path / "none")) == []


def test_c_and_cpp_shims_compile_with_their_own_compiler(tmp_path, tools):
    root = shims(tmp_path, "a.cpp", "b.c")
    assert sc.compile_shim_file(os.path.join(root, "a.cpp"), "inc", "clang++", ["-DX"], root) == (True, None)
    assert tools.commands[-1] == ["clang++", *sc.SHIM_COMPILE_FLAGS, "-DX", "-I", "inc", "-I", root,
                                  os.path.join(root, "a.cpp")]
    assert sc.compile_shim_file(os.path.join(root, "b.c"), "inc", "clang++", [], root) == (True, None)
    assert tools.commands[-1][:2] == ["clang", "-fsyntax-only"]
    assert sc.compile_shim_file("x.cpp", "inc", "g++", [], root) == (False, "Compiler 'g++' not found")
    assert sc.compile_shim_file("x.cpp", "inc", "slow", [], root) == (False, "Compilation timed out")
    tools.fail = ("a.cpp",)
    ok, error = sc.compile_shim_file(os.path.join(root, "a.cpp"), "inc", "clang++", [], root)
    assert not ok and "error: nope" in error


def test_verify_lists_the_failures_by_path(tmp_path, tools, monkeypatch):
    root = shims(tmp_path, "z.cpp", "a.cpp", "m.cpp", "ok.cpp")
    tools.fail = ("z.cpp", "a.cpp")
    original = sc.compile_shim_file

    def crash_on_m(src, *args):
        if src.endswith("m.cpp"):
            raise OSError("disk")
        return original(src, *args)
    monkeypatch.setattr(sc, "compile_shim_file", crash_on_m)
    passed, failed, files = sc.verify_shims(root, "inc", "clang++")
    assert (passed, failed) == (1, 3)
    assert [name for name, _ in files] == ["a.cpp", "m.cpp", "z.cpp"] and files[1][1] == "disk"
    assert sc.verify_shims(str(tmp_path / "none"), "inc") == (0, 0, [])


def test_after_export_the_report_is_written_and_failures_logged(tmp_path, tools, logs):
    names = [f"s{i:02d}.cpp" for i in range(12)]
    shims(tmp_path, "ok.cpp", *names)
    tools.fail = tuple(names)
    reports = tmp_path / "reports"
    reports.mkdir()
    assert sc.verify_shims_after_export(str(tmp_path), "clang++", reports_dir = str(reports),
                                        repo_dir = str(tmp_path)) is False
    text = (reports / "shim_compilation.txt").read_text()
    assert "Shims directory: shims\n" in text and "Summary: 1 passed, 12 failed out of 13 total" in text
    assert "FILE: s00.cpp\n" in text and f"{tmp_path}" not in text
    assert "  Shim verification: 1/13 passed (7.7%)" in logs
    assert "    ... and 2 more (see report for full list)" in logs


def test_a_clean_run_says_so(tmp_path, tools, logs):
    shims(tmp_path, "ok.cpp")
    reports = tmp_path / "reports"
    reports.mkdir()
    assert sc.verify_shims_after_export(str(tmp_path), "clang++", reports_dir = str(reports)) is True
    assert "All shim files compiled successfully." in (reports / "shim_compilation.txt").read_text()
    assert sc.verify_shims_after_export(str(tmp_path), "clang++") is True


def test_a_long_or_empty_error_is_trimmed_or_noted(tmp_path, tools, logs, monkeypatch):
    shims(tmp_path, "a.cpp", "b.cpp")
    monkeypatch.setattr(sc, "verify_shims", lambda *a, **k: (0, 2, [("a.cpp", "x.cpp:1: error: " + "y" * 200),
                                                                    ("b.cpp", "")]))
    reports = tmp_path / "reports"
    reports.mkdir()
    assert sc.verify_shims_after_export(str(tmp_path), "clang++", reports_dir = str(reports)) is False
    assert "(no error output)" in (reports / "shim_compilation.txt").read_text()
    assert any(line.endswith("...") and len(line) == 6 + 120 for line in logs)


@pytest.mark.parametrize("setup, message", [
    ("no shims", "Shim verification: shims directory not found, skipping"),
    ("no compiler", "Shim verification: compiler 'clang++' not available, skipping"),
    ("broken compiler", "Shim verification: compiler 'clang++' not available, skipping"),
    ("no sdl", "Shim verification: SDL2 not found, skipping shim compilation"),
    ("no files", "Shim verification: no shim files found"),
])
def test_each_missing_piece_skips_without_failing(tmp_path, tools, logs, monkeypatch, setup, message):
    if setup != "no shims":
        shims(tmp_path, "readme.txt" if setup == "no files" else "a.cpp")
    if setup == "no compiler":
        tools.have.discard("clang++")
    if setup == "broken compiler":
        original = tools.run
        monkeypatch.setattr(sc.subprocess, "run",
                            lambda cmd, **kw: Result(1) if cmd[1:] == ["--version"] else original(cmd, **kw))
    if setup == "no sdl":
        tools.packages = set()
    assert sc.verify_shims_after_export(str(tmp_path), "clang++") is True
    assert logs[-1] == message
