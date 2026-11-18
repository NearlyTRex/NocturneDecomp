# Imports
import importlib.util
import json
import os
import runpy
import subprocess
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT

SCRIPT = os.path.join(REPO_ROOT, "recreation", "cmake", "tidy.py")
spec = importlib.util.spec_from_file_location("tidy", SCRIPT)
tidy = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tidy)


class Result:
    def __init__(self, stdout, returncode = 0, stderr = ""):
        self.stdout, self.returncode, self.stderr = stdout, returncode, stderr


def fake_run(command, cwd = None, capture_output = True, check = False, text = False):
    """clang-tidy --version, the preprocessor (-E) and clang-tidy itself, by file name."""
    assert capture_output and (cwd is None or os.path.isdir(cwd))
    if command[-1] == "--version":
        return Result(b"clang-tidy 23\n")
    if "-E" in command:
        assert "-c" not in command and "out.o" not in command
        source = command[command.index("-E") - 1]
        if "broken" in source:
            raise subprocess.CalledProcessError(1, command)
        with open(source, "rb") as handle:
            return Result(handle.read())
    name = os.path.basename(command[-1])
    if name.startswith("bad"):
        return Result("bad.cpp:1: warning: x\n", 0, "1 warning\n")
    if name.startswith("crash"):
        return Result("", 1)
    return Result("")


def project(tmp_path):
    src, build = tmp_path / "src", tmp_path / "build"
    (src / "core").mkdir(parents = True, exist_ok = True)
    (src / ".clang-tidy").write_text("Checks: '*'\n")
    (src / "core" / "a.cpp").write_text('#include "core/a.h"\n')
    (src / "core" / "a.h").write_text("")
    for name in ("bad.cpp", "broken.cpp", "crash.cpp"):
        (src / name).write_text("int x;\n")
    checks = build / "header_checks"
    (checks / "core").mkdir(parents = True, exist_ok = True)
    (checks / "tests").mkdir(exist_ok = True)
    for header in ("core/a.h.cpp", "core/lone.h.cpp", "tests/t.h.cpp"):
        (checks / header).write_text("")
    def entry(path, style = "command"):
        if style == "command":
            return {"directory": str(build), "file": str(path),
                    "command": f"clang++ -I. -o out.o -c {path}"}
        return {"directory": str(build), "file": str(path),
                "arguments": ["clang++", "-o", "out.o", "-c", str(path)]}
    entries = [entry(src / "core" / "a.cpp"), entry(src / "bad.cpp", "arguments"),
               entry(src / "broken.cpp"), entry(src / "crash.cpp"),
               entry(checks / "core" / "a.h.cpp"), entry(checks / "core" / "lone.h.cpp"),
               entry(checks / "tests" / "t.h.cpp"), entry(tmp_path / "elsewhere.cpp")]
    (build / "compile_commands.json").write_text(json.dumps(entries))
    return src, build


def test_selection_keeps_sources_and_headers_nothing_includes(tmp_path):
    src, build = project(tmp_path)
    entries = json.loads((build / "compile_commands.json").read_text())
    chosen = [os.path.relpath(e["file"], tmp_path) for e in tidy.select(entries, src, build)]
    assert chosen == ["src/core/a.cpp", "src/bad.cpp", "src/broken.cpp", "src/crash.cpp",
                      "build/header_checks/core/lone.h.cpp"]
    assert tidy.included_headers(src) == {"core/a.h"}


def run_main(monkeypatch, tmp_path, *extra):
    src, build = project(tmp_path)
    monkeypatch.setattr(tidy.subprocess, "run", fake_run)
    return tidy.main(["--clang-tidy", "clang-tidy", "--source-dir", str(src), "--build-dir", str(build),
                      "-j", "2", *extra])


def test_a_clean_file_is_cached_and_skipped_next_time(monkeypatch, tmp_path, capsys):
    summary = tmp_path / "summary.md"
    monkeypatch.setenv("GITHUB_STEP_SUMMARY", str(summary))
    cache = tmp_path / "cache"
    cache.mkdir()
    (cache / "stale").write_text("")
    assert run_main(monkeypatch, tmp_path, "--cache-dir", str(cache)) == 1
    out = capsys.readouterr().out
    assert "clang-tidy: 5 files, 0 cached, 5 checked, 2 failed" in out
    assert "\nFailed:\n  bad.cpp\n  crash.cpp\n" in out
    assert "] checked broken.cpp" in out           # no cache key, so clang-tidy still runs
    assert "bad.cpp:1: warning: x\n1 warning\n" in out
    markers = sorted(os.listdir(cache))
    assert len(markers) == 2 and "stale" not in markers      # a.cpp and lone.h; failures never cached
    text = summary.read_text()
    assert text.startswith("### clang-tidy: 5 files") and "| Slowest | Seconds |" in text
    assert "**Failed:**\n\n- `bad.cpp`\n- `crash.cpp`\n" in text

    assert run_main(monkeypatch, tmp_path, "--cache-dir", str(cache)) == 1
    out = capsys.readouterr().out
    assert "] cached  core/a.cpp" in out and "] cached  header_checks/core/lone.h.cpp" in out
    assert "5 files, 2 cached, 3 checked" in out


def test_without_a_cache_every_file_runs(monkeypatch, tmp_path, capsys):
    monkeypatch.delenv("GITHUB_STEP_SUMMARY", raising = False)
    src, build = project(tmp_path)
    entries = json.loads((build / "compile_commands.json").read_text())
    (build / "compile_commands.json").write_text(json.dumps(entries[:1]))
    monkeypatch.setattr(tidy.subprocess, "run", fake_run)
    assert tidy.main(["--clang-tidy", "ct", "--source-dir", str(src), "--build-dir", str(build)]) == 0
    out = capsys.readouterr().out
    assert "checked core/a.cpp" in out and "1 files, 0 cached, 1 checked, 0 failed" in out


def test_an_empty_run_writes_a_bare_summary(monkeypatch, tmp_path):
    summary = tmp_path / "summary.md"
    monkeypatch.setenv("GITHUB_STEP_SUMMARY", str(summary))
    src, build = project(tmp_path)
    (build / "compile_commands.json").write_text("[]")
    monkeypatch.setattr(tidy.subprocess, "run", fake_run)
    assert tidy.main(["--clang-tidy", "ct", "--source-dir", str(src), "--build-dir", str(build)]) == 0
    assert summary.read_text().startswith("### clang-tidy: 0 files") and "Slowest" not in summary.read_text()


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["tidy.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(SCRIPT, run_name = "__main__")
    assert exit_info.value.code == 0
