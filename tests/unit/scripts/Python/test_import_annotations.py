# Imports
import os
import runpy
import sys
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
from ghidra_annotations import annotations
import import_annotations as ia
import sync_annotations as sa


class Exited(Exception):
    pass


def test_all_is_every_importable_category_in_order():
    categories = ia.parse_categories("all")
    assert categories == ia.IMPORT_CATEGORIES
    assert categories.index("data_types") < categories.index("functions") < categories.index("cross_references")


def test_named_categories_come_back_in_import_order():
    assert ia.parse_categories(" Functions, data_types ,") == ["data_types", "functions"]


@pytest.mark.parametrize("text, named", [("metadata", "metadata"), ("data_types,vtables", "vtables"),
                                         (",", "','")])
def test_categories_with_nothing_to_import_are_refused(text, named):
    with pytest.raises(ValueError, match = f"cannot be imported: {named}"):
        ia.parse_categories(text)


@pytest.fixture(name = "calls")
def fixture_calls(monkeypatch):
    calls = []
    for name in annotations.__all__:
        monkeypatch.setattr(annotations, name, lambda program, folder, _name = name, **kw: calls.append(_name))
    return calls


def test_import_deletes_in_reverse_then_imports_in_order(calls, capsys):
    ia.run_import(Program(), "in", ["data_types", "functions"])
    assert calls == ["delete_functions", "delete_data_types", "import_data_types", "import_functions"]
    assert "IMPORT COMPLETE" in capsys.readouterr().out


def test_sync_imports_then_exports(calls, monkeypatch):
    exported = []
    monkeypatch.setattr(sa.export_annotations, "run_export",
                        lambda program, folder, categories: exported.append((folder, categories)))
    sa.run_sync(Program(), "dir", ["comments"], ["comments"])
    assert calls == ["delete_comments", "import_comments"]
    assert exported == [("dir", ["comments"])]


def args_for(folder):
    return SimpleNamespace(project_path = "proj", project_name = "P", program_name = "game.exe", folder = folder)


def test_the_program_is_saved_after_the_work_and_the_project_closed(monkeypatch):
    program = Program()
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
    worked = []
    assert ia.with_program(args_for("x"), worked.append) == 0
    assert worked == [program]
    assert (program.getDomainFile().saves, pyghidra.closed) == (1, 1)
    assert pyghidra.opened == [("proj", "P"), "/game.exe"]


def test_a_failed_import_is_not_saved_and_exits_1(monkeypatch, capsys):
    program = Program()
    pyghidra = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)

    def fail(_program):
        raise RuntimeError("bad record")

    assert ia.with_program(args_for("x"), fail) == 1
    assert (program.getDomainFile().saves, pyghidra.closed) == (0, 1)
    assert "ERROR: bad record" in capsys.readouterr().out


def run_main(monkeypatch, module, *argv):
    monkeypatch.setattr(sys, "argv", [module.__name__ + ".py", "proj", "P", "game.exe", *argv])

    def exit_now(code):
        raise Exited(code)

    monkeypatch.setattr(module.os, "_exit", exit_now)
    with pytest.raises(Exited) as exited:
        module.main()
    return exited.value.args[0]


def test_import_main_runs_the_chosen_categories(monkeypatch, tmp_path):
    runs = []
    monkeypatch.setattr(ia, "with_program", lambda args, work: runs.append(args.folder) or work(Program()) or 0)
    monkeypatch.setattr(ia, "run_import", lambda program, folder, categories: runs.append(categories))
    assert run_main(monkeypatch, ia, str(tmp_path), "comments") == 0
    assert runs == [str(tmp_path), ["comments"]]


def test_sync_main_runs_the_full_export_after_a_full_import(monkeypatch, tmp_path):
    runs = []
    monkeypatch.setattr(sa, "with_program", lambda args, work: work(Program()) or 0)
    monkeypatch.setattr(sa, "run_sync", lambda program, folder, imports, exports: runs.append((imports, exports)))
    assert run_main(monkeypatch, sa, str(tmp_path / "new")) == 0
    assert run_main(monkeypatch, sa, str(tmp_path / "new"), "comments") == 0
    assert runs == [(ia.IMPORT_CATEGORIES, sa.export_annotations.CATEGORY_NAMES), (["comments"], ["comments"])]
    assert (tmp_path / "new").is_dir()


@pytest.mark.parametrize("module, argv, message", [
    (ia, ["metadata"], "cannot be imported: metadata"), (sa, ["vtables"], "cannot be imported: vtables")])
def test_a_category_with_nothing_to_import_fails_before_ghidra(monkeypatch, tmp_path, capsys, module, argv, message):
    monkeypatch.setattr(sys, "argv", ["x.py", "proj", "P", "game.exe", str(tmp_path), *argv])
    with pytest.raises(SystemExit) as exit_info:
        module.main()
    assert exit_info.value.code == 2
    assert message in capsys.readouterr().err


def test_import_needs_its_folder(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(sys, "argv", ["x.py", "proj", "P", "game.exe", str(tmp_path / "missing")])
    with pytest.raises(SystemExit):
        ia.main()
    assert "no such folder" in capsys.readouterr().err


@pytest.mark.parametrize("script", ["import_annotations.py", "sync_annotations.py"])
def test_runs_as_a_script(monkeypatch, tmp_path, capsys, script):
    monkeypatch.setattr(sys, "argv", [script, "proj", "P", "game.exe", str(tmp_path), "metadata"])
    with pytest.raises(SystemExit):
        runpy.run_path(os.path.join(SCRIPTS_DIR, script), run_name = "__main__")
    assert "cannot be imported" in capsys.readouterr().err
