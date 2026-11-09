# Imports
import os
import runpy
import sys
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from repo_paths import SCRIPTS_DIR
import export_annotations as ea
from ghidra_annotations.annotations.pseudocode import parallel


class Exited(Exception):
    pass


def args_for(*argv):
    return ea.build_parser().parse_args(["proj", "P", "game.exe", "out", *argv])


class Recorder:
    def __init__(self):
        self.calls = []

    def category(self, name):
        def export(program, folder, **kwargs):
            self.calls.append((name, program.getName(), folder, kwargs))
        return export


class Named:
    def __init__(self, name):
        self.name = name

    def getName(self):
        return self.name


# One folder of a Ghidra project: its domain files and subfolders
class Folder:
    def __init__(self, files = (), folders = ()):
        self.files = list(files)
        self.folders = list(folders)

    def getFiles(self):
        return self.files

    def getFolders(self):
        return self.folders


class DomainFile:
    def __init__(self, path, content_type):
        self.path = path
        self.content_type = content_type

    def getContentType(self):
        if self.content_type is None:
            raise RuntimeError("unreadable")
        return self.content_type

    def getPathname(self):
        return self.path

    def getName(self):
        return self.path.rsplit("/", 1)[1]


class Project:
    def __init__(self, root):
        self.root = root

    def getProjectData(self):
        return self

    def getRootFolder(self):
        return self.root


# --- categories -----------------------------------------------------------------------------------

def test_all_is_every_category_in_export_order():
    categories = ea.parse_categories(" ALL ")
    assert categories == ea.CATEGORY_NAMES
    assert categories is not ea.CATEGORY_NAMES
    assert categories.index("vtables") < categories.index("recreation") < categories.index("pseudocode")


def test_named_categories_keep_their_order_and_case_folds():
    assert ea.parse_categories(" Functions,data_types,, ") == ["functions", "data_types"]


@pytest.mark.parametrize("text, named", [("data_type", "data_type"), ("functions,bogus", "bogus"), (" , ", "' , '")])
def test_an_unknown_or_empty_category_list_is_refused(text, named):
    with pytest.raises(ValueError, match = f"unknown categories: {named}"):
        ea.parse_categories(text)


def test_every_category_has_its_export_function():
    exports = ea.get_export_categories()
    assert list(exports) == ea.CATEGORY_NAMES
    assert all(f.__name__ == "export_" + name for name, f in exports.items())


def test_each_category_takes_only_its_own_options():
    options = dict(ea.DEFAULT_OPTIONS, strict = True, deep_analysis = True, allow_size_mismatch = True,
        allow_name_address_mismatch = True, allow_this_ptr_mismatch = False,
        allow_duplicate_data_types = True, pseudocode_options = {"static_analysis": False})
    assert ea.category_arguments("pseudocode", options) == {
        "strict": True, "deep_analysis": True, "static_analysis": False}
    assert ea.category_arguments("type_info", options) == {"strict": True, "allow_size_mismatch": True}
    assert ea.category_arguments("functions", options) == {
        "allow_name_address_mismatch": True, "allow_this_ptr_mismatch": False}
    assert ea.category_arguments("data_types", options) == {"allow_duplicates": True}
    assert ea.category_arguments("comments", options) == {}


# --- run_export -----------------------------------------------------------------------------------

@pytest.fixture(name = "recorder")
def fixture_recorder(monkeypatch):
    recorder = Recorder()
    monkeypatch.setattr(ea, "get_export_categories",
        lambda: {name: recorder.category(name) for name in ea.CATEGORY_NAMES})
    return recorder


def test_run_export_runs_each_category_with_its_options(recorder, tmp_path, capsys):
    out = tmp_path / "new" / "game.exe"
    ea.run_export(Named("game.exe"), str(out), ["type_info", "comments"], {"strict": True})
    assert out.is_dir()
    assert recorder.calls == [
        ("type_info", "game.exe", str(out), {"strict": True, "allow_size_mismatch": False}),
        ("comments", "game.exe", str(out), {})]
    log = capsys.readouterr().out
    assert "Created output folder" in log
    assert "Categories: type_info, comments" in log
    assert "Strict mode: True" in log
    assert "EXPORT COMPLETE" in log


def test_run_export_of_everything_logs_all_and_the_pseudocode_switches(recorder, tmp_path, capsys):
    ea.run_export(Named("game.exe"), str(tmp_path), list(ea.CATEGORY_NAMES),
        {"pseudocode_options": {"header_compile": False, "static_analysis": True}})
    assert [c[0] for c in recorder.calls] == ea.CATEGORY_NAMES
    assert recorder.calls[-1][3] == {"strict": False, "deep_analysis": False,
        "header_compile": False, "static_analysis": True}
    log = capsys.readouterr().out
    assert "Categories: all" in log
    assert "Created output folder" not in log
    assert "Pseudocode header compile: False" in log
    assert log.index("header compile") < log.index("static analysis")


# --- programs -------------------------------------------------------------------------------------

def test_lists_every_program_in_the_project_tree():
    root = Folder([DomainFile("/game.exe", "Program"), DomainFile("/types.gdt", "Archive"),
        DomainFile("/broken", None)], [Folder([DomainFile("/sub/dll.dll", "Program")])])
    assert ea.list_project_program_paths(Project(root)) == [
        ("/game.exe", "game.exe"), ("/sub/dll.dll", "dll.dll")]


def test_the_compile_passes_run_for_every_program_unless_limited():
    assert ea.pseudocode_options(args_for(), "bw1.exe") == {
        "header_compile": True, "function_compile": True, "static_analysis": True}
    limited = args_for("--checks-only-for", "nocedit.exe, other.exe", "--no-function-compile")
    assert ea.pseudocode_options(limited, "nocedit.exe") == {
        "header_compile": True, "function_compile": False, "static_analysis": True}
    assert ea.pseudocode_options(limited, "bw1.exe") == {
        "header_compile": False, "function_compile": False, "static_analysis": False}


def test_export_options_come_from_the_command_line():
    assert ea.export_options(args_for("--strict", "--deep-analysis", "--allow-struct-size-mismatch",
            "--allow-name-address-mismatch", "--allow-this-ptr-mismatch", "--allow-duplicate-data-types",
            "--no-static-analysis"), "game.exe") == {
        "strict": True, "deep_analysis": True, "allow_size_mismatch": True,
        "allow_name_address_mismatch": True, "allow_this_ptr_mismatch": True,
        "allow_duplicate_data_types": True,
        "pseudocode_options": {"header_compile": True, "function_compile": True, "static_analysis": False}}


@pytest.fixture(name = "exports")
def fixture_exports(monkeypatch):
    exports = []

    def run_export(program, folder, categories, options):
        exports.append((program.getName(), folder, categories, options["strict"]))
        if program.getName() in failures:
            raise failures[program.getName()]

    failures = {}
    monkeypatch.setattr(ea, "run_export", run_export)
    return SimpleNamespace(calls = exports, failures = failures)


class Programs(FakePyghidra):
    # program_context hands out a program named after the path
    def program_context(self, project, path):
        self.program = Named(path.rsplit("/", 1)[1])
        return super().program_context(project, path)


def test_exports_the_one_named_program(exports, capsys):
    pyghidra = Programs(None)
    assert ea.export_programs(pyghidra, args_for("--strict"), ["comments"]) == (0, ["game.exe"])
    assert pyghidra.opened == [("proj", "P"), "/game.exe"]
    assert exports.calls == [("game.exe", "out", ["comments"], True)]
    assert pyghidra.closed == 1
    assert "Opening program: /game.exe -> out" in capsys.readouterr().out


def test_all_programs_land_in_their_own_folders_and_one_failure_does_not_stop_the_rest(
        monkeypatch, exports, capsys):
    monkeypatch.setattr(ea, "list_project_program_paths",
        lambda project: [("/a.exe", "a.exe"), ("/b.exe", "b.exe"), ("/c.exe", "c.exe"), ("/d.exe", "d.exe")])
    exports.failures.update({"a.exe": SystemExit(3), "b.exe": SystemExit("bad"), "c.exe": RuntimeError("boom")})
    pyghidra = Programs(None)
    code, exported = ea.export_programs(pyghidra, args_for("--all-programs"), ["comments"])
    assert (code, exported) == (1, ["d.exe"])
    assert [c[1] for c in exports.calls] == [os.path.join("out", n) for n in ("a.exe", "b.exe", "c.exe", "d.exe")]
    out = capsys.readouterr()
    assert "Found 4 program(s): a.exe, b.exe, c.exe, d.exe" in out.out
    assert "'a.exe': export exited with code 3" in out.out
    assert "'b.exe': export exited with code 1" in out.out
    assert "ERROR exporting 'c.exe': boom" in out.out
    assert "RuntimeError: boom" in out.err
    assert pyghidra.closed == 1


def test_a_system_exit_keeps_its_code(exports):
    exports.failures["game.exe"] = SystemExit(4)
    assert ea.export_programs(Programs(None), args_for(), ["comments"]) == (4, [])


def test_a_system_exit_of_zero_still_fails_the_program(exports):
    exports.failures["game.exe"] = SystemExit(0)
    assert ea.export_programs(Programs(None), args_for(), ["comments"]) == (1, [])


def test_an_empty_project_fails_and_is_still_closed(monkeypatch, exports, capsys):
    monkeypatch.setattr(ea, "list_project_program_paths", lambda project: [])
    pyghidra = Programs(None)
    assert ea.export_programs(pyghidra, args_for("--all-programs"), ["comments"]) == (1, [])
    assert (exports.calls, pyghidra.closed) == ([], 1)
    assert "No programs found in project 'P'" in capsys.readouterr().out


def test_a_project_that_will_not_open_fails(capsys):
    class Unopenable(FakePyghidra):
        def open_project(self, directory, name):
            raise RuntimeError("locked")
    pyghidra = Unopenable(None)
    assert ea.export_programs(pyghidra, args_for(), ["comments"]) == (1, [])
    assert pyghidra.closed == 0
    assert "ERROR: locked" in capsys.readouterr().out


def test_leftover_decompilers_are_disposed_after_each_program(monkeypatch, exports, capsys):
    monkeypatch.setattr(parallel, "dispose_decompilers", lambda: 2)
    ea.export_programs(Programs(None), args_for(), ["comments"])
    assert exports.calls
    assert "Disposed 2 leftover decompiler interfaces for 'game.exe'" in capsys.readouterr().out


# --- sibling mapping refresh ----------------------------------------------------------------------

@pytest.fixture(name = "launches")
def fixture_launches(monkeypatch):
    # The refresh's exit code, or the error launching it raises
    launches = SimpleNamespace(commands = [], code = 0, error = None)

    def call(command):
        launches.commands.append(command)
        if launches.error is not None:
            raise launches.error
        return launches.code

    monkeypatch.setattr(ea.subprocess, "call", call)
    return launches


def test_the_mapping_is_not_refreshed_when_disabled_or_without_a_sibling(launches, capsys):
    ea.maybe_refresh_sibling_mapping(["nocedit.exe"], False)
    ea.maybe_refresh_sibling_mapping(["bw1.exe"], True)
    assert launches.commands == []
    assert "no sibling program in this export" in capsys.readouterr().out


def test_the_mapping_is_refreshed_after_a_sibling_export(launches, capsys):
    ea.maybe_refresh_sibling_mapping(["nocturne.exe"], True)
    assert launches.commands == [[sys.executable, "-u", os.path.join(SCRIPTS_DIR, "refresh_sibling_mapping.py"), "-q"]]
    assert "WARNING" not in capsys.readouterr().out


def test_a_failed_refresh_only_warns(launches, capsys):
    launches.code = 5
    ea.maybe_refresh_sibling_mapping(["nocedit.exe"], True)
    assert "refresh exited 5" in capsys.readouterr().out


def test_a_refresh_that_cannot_launch_only_warns(launches, capsys):
    launches.error = OSError("no python")
    ea.maybe_refresh_sibling_mapping(["nocedit.exe"], True)
    assert "could not launch refresh: no python" in capsys.readouterr().out


def test_a_missing_refresh_script_is_skipped(monkeypatch, launches, capsys):
    real_exists = os.path.exists
    monkeypatch.setattr(ea.os.path, "exists",
        lambda path: False if path.endswith("refresh_sibling_mapping.py") else real_exists(path))
    ea.maybe_refresh_sibling_mapping(["nocedit.exe"], True)
    assert launches.commands == []
    assert "refresh_sibling_mapping.py not found" in capsys.readouterr().out


# --- main -----------------------------------------------------------------------------------------

def run_main(monkeypatch, *argv):
    monkeypatch.setattr(sys, "argv", ["export_annotations.py", "proj", "P", "game.exe", "out", *argv])

    def exit_now(code):
        raise Exited(code)

    monkeypatch.setattr(ea.os, "_exit", exit_now)
    with pytest.raises(Exited) as exited:
        ea.main()
    return exited.value.args[0]


def test_main_exports_then_refreshes_and_exits_with_the_code(monkeypatch, exports, launches):
    monkeypatch.setitem(sys.modules, "pyghidra", Programs(None))
    assert run_main(monkeypatch, "data_types,comments", "--strict") == 0
    assert exports.calls == [("game.exe", "out", ["data_types", "comments"], True)]
    assert launches.commands == []


def test_main_skips_the_refresh_when_asked(monkeypatch, exports, launches):
    monkeypatch.setitem(sys.modules, "pyghidra", Programs(None))
    exports.failures["game.exe"] = RuntimeError("boom")
    assert run_main(monkeypatch, "--no-refresh-mapping") == 1
    assert exports.calls[0][2] == ea.CATEGORY_NAMES


def test_a_mistyped_category_fails_before_pyghidra_starts(monkeypatch, capsys):
    monkeypatch.setitem(sys.modules, "pyghidra", None)
    monkeypatch.setattr(sys, "argv", ["export_annotations.py", "proj", "P", "game.exe", "out", "data_type"])
    with pytest.raises(SystemExit) as exit_info:
        ea.main()
    assert exit_info.value.code == 2
    assert "unknown categories: data_type" in capsys.readouterr().err


def test_main_needs_pyghidra(monkeypatch, capsys):
    monkeypatch.setitem(sys.modules, "pyghidra", None)
    monkeypatch.setattr(sys, "argv", ["export_annotations.py", "proj", "P", "game.exe", "out"])
    with pytest.raises(SystemExit) as exit_info:
        ea.main()
    assert exit_info.value.code == 1
    assert "pyghidra is not installed" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["export_annotations.py", "proj", "P", "game.exe", "out", "nope"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "export_annotations.py"), run_name = "__main__")
    assert exit_info.value.code == 2
    assert "unknown categories: nope" in capsys.readouterr().err
