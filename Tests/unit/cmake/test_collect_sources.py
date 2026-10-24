# Imports
import importlib.util
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT

SCRIPT = os.path.join(REPO_ROOT, "cmake", "collect_sources.py")
spec = importlib.util.spec_from_file_location("collect_sources", SCRIPT)
collect_sources = importlib.util.module_from_spec(spec)
spec.loader.exec_module(collect_sources)


def touch(root, *relative):
    for rel in relative:
        path = root.joinpath(*rel.split("/"))
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text("", encoding = "utf-8")


def no_rules():
    return collect_sources.load_skip_list(None)


@pytest.mark.parametrize("name, compiled", [
    ("f.cpp", True), ("f.c", True), ("f.keep.cpp", True), ("f.asm", False),
    ("f.mmx.cpp", False), ("f.byval.c", False), ("f.chunked.cpp", False),
])
def test_is_compiled_source(name, compiled):
    assert collect_sources.is_compiled_source(name) is compiled


def test_a_missing_skip_list_has_no_rules(tmp_path):
    empty = {"tokens": [], "paths": set(), "globs": []}
    assert collect_sources.load_skip_list(None) == empty
    assert collect_sources.load_skip_list(str(tmp_path / "absent.txt")) == empty


def test_skip_list_sorts_rules_by_kind(tmp_path):
    path = tmp_path / "skip_list.txt"
    path.write_text("# a comment\n\nFUN_00401000\nglob: engine/*.cpp/*\nsound\\mp3.cpp/f.cpp\n",
                    encoding = "utf-8")
    assert collect_sources.load_skip_list(str(path)) == {
        "tokens": ["FUN_00401000"], "paths": {"sound/mp3.cpp/f.cpp"}, "globs": ["engine/*.cpp/*"]}


@pytest.mark.parametrize("rel, skipped", [
    ("sound/mp3.cpp/f.cpp", True),
    ("sound\\mp3.cpp\\f.cpp", True),
    ("core/x.cpp/a_FUN_00401000.cpp", True),
    ("engine/3d.c/b.c", True),
    ("core/x.cpp/a_FUN_00402000.cpp", False),
])
def test_is_skipped(rel, skipped):
    rules = {"tokens": ["FUN_00401000"], "paths": {"sound/mp3.cpp/f.cpp"}, "globs": ["engine/*"]}
    assert collect_sources.is_skipped(rel, rules) is skipped


def test_pick_function_source_takes_the_highest_priority_variant_of_each_function(tmp_path):
    touch(tmp_path, "a.keep.cpp", "a.keep.c", "a.cpp", "a.c",
          "b.keep.c", "b.cpp", "c.cpp", "c.c", "d.c",
          "e.mmx.cpp", "e.byval.c", "f.asm", "sub/g.cpp")
    winners = collect_sources.pick_function_source(str(tmp_path))
    assert sorted(os.path.basename(path) for path in winners) == ["a.keep.cpp", "b.keep.c", "c.cpp", "d.c"]


def test_a_flat_module_contributes_every_compiled_source_not_skipped(tmp_path):
    touch(tmp_path, "main/b.cpp", "main/a.c", "main/a.mmx.c", "main/notes.txt", "main/gone.cpp")
    rules = {"tokens": [], "paths": {"main/gone.cpp"}, "globs": []}
    winners = collect_sources.collect_module(str(tmp_path / "main"), str(tmp_path), rules)
    assert winners == [str(tmp_path / "main" / "a.c"), str(tmp_path / "main" / "b.cpp")]


def test_a_nested_module_resolves_each_function_directory(tmp_path):
    touch(tmp_path, "core/x.cpp/f.keep.cpp", "core/x.cpp/f.cpp", "core/x.cpp/g_FUN_1.cpp",
          "core/y.c/h.c", "core/entry.cpp", "core/entry.mmx.cpp", "core/README.md", "core/old.cpp")
    os.symlink(tmp_path / "nowhere", tmp_path / "core" / "dangling")
    rules = {"tokens": ["FUN_1"], "paths": {"core/old.cpp"}, "globs": []}
    winners = collect_sources.collect_module(str(tmp_path / "core"), str(tmp_path), rules)
    assert [os.path.relpath(path, tmp_path) for path in winners] == [
        "core/entry.cpp", "core/x.cpp/f.keep.cpp", "core/y.c/h.c"]


def run_main(monkeypatch, *args):
    monkeypatch.setattr(sys, "argv", ["collect_sources.py", *args])
    return collect_sources.main()


def read_lines(path):
    return path.read_text(encoding = "utf-8").splitlines()


def test_main_writes_a_source_list_per_module(tmp_path, monkeypatch, capsys):
    src = tmp_path / "src"
    touch(src, "core/x.cpp/f.cpp", "sound/y.c/g.c", "globals/v.cpp", "unused/z.cpp/h.cpp", "stray.txt")
    touch(tmp_path, "main/main.cpp")
    out = tmp_path / "out"
    modules_file = tmp_path / "modules.txt"
    code = run_main(monkeypatch, "--src-root", str(src), "--out-dir", str(out),
                    "--module", str(tmp_path / "main"), "--exclude-module", "unused",
                    "--modules-file", str(modules_file))
    assert code == 0
    assert read_lines(modules_file) == ["core", "globals", "sound", "main"]
    assert read_lines(out / "sources_core.txt") == [str(src / "core" / "x.cpp" / "f.cpp")]
    assert read_lines(out / "sources_main.txt") == [str(tmp_path / "main" / "main.cpp")]
    assert not (out / "sources_unused.txt").exists()
    assert "core             1 files" in capsys.readouterr().out


def test_main_skips_standalone_modules_that_are_excluded_unnamed_or_missing(tmp_path, monkeypatch, capsys):
    src = tmp_path / "src"
    touch(src, "core/x.cpp/f.cpp", "checks/c.cpp")
    touch(tmp_path, "checks/c.cpp")
    code = run_main(monkeypatch, "--src-root", str(src), "--out-dir", str(tmp_path / "out"),
                    "--exclude-module", "checks", "--module", str(tmp_path / "checks"),
                    "--module", "/", "--module", str(tmp_path / "absent"))
    assert code == 0
    assert sorted(os.listdir(tmp_path / "out")) == ["sources_core.txt"]
    assert "absent       SKIPPED (not found:" in capsys.readouterr().out


def test_main_refuses_a_standalone_module_named_like_a_generated_one(tmp_path, monkeypatch, capsys):
    src = tmp_path / "src"
    touch(src, "main/x.cpp/f.cpp")
    touch(tmp_path, "main/main.cpp")
    code = run_main(monkeypatch, "--src-root", str(src), "--out-dir", str(tmp_path / "out"),
                    "--module", str(tmp_path / "main"))
    assert code == 2
    assert "duplicate module name 'main'" in capsys.readouterr().err


def test_main_fails_when_the_src_root_is_missing(tmp_path, monkeypatch, capsys):
    code = run_main(monkeypatch, "--src-root", str(tmp_path / "absent"), "--out-dir", str(tmp_path / "out"))
    assert code == 2
    assert "src root not found" in capsys.readouterr().err
    assert not (tmp_path / "out").exists()


def test_runs_as_a_script(tmp_path, monkeypatch):
    touch(tmp_path, "src/core/x.cpp/f.cpp")
    monkeypatch.setattr(sys, "argv", ["collect_sources.py", "--src-root", str(tmp_path / "src"),
                                      "--out-dir", str(tmp_path / "out")])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(SCRIPT, run_name = "__main__")
    assert exit_info.value.code == 0
    assert (tmp_path / "out" / "sources_core.txt").exists()
