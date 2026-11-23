# Imports
import ast
import inspect
import json
import runpy
import subprocess
import sys
import types

# Third-party imports
import pytest

# Local imports
import test_suspects as ts

CONTENT = f"{ts.PSEUDOCODE_DIR}/suspects/content.py"


def called_detectors(source, function):
    """The identify_* names a function's body calls, in order."""
    node = next(n for n in ast.walk(ast.parse(source)) if isinstance(n, ast.FunctionDef) and n.name == function)
    calls = [n.func for n in ast.walk(node) if isinstance(n, ast.Call)]
    names = [getattr(f, "attr", getattr(f, "id", "")) for f in calls]
    return [n for n in names if n.startswith("identify_")]


class FakeSuspects:
    """Every detector reports one suspect of its own name; the map builders say which file they read."""

    def __getattr__(self, name):
        if name.startswith("build_"):
            return lambda path: {name: path}
        return lambda *args: [{"type": name, "line": 1, "args": args}]


@pytest.fixture(name = "annotations")
def fixture_annotations(tmp_path, monkeypatch):
    root = tmp_path / "annotations"
    monkeypatch.setattr(ts, "ANNOTATIONS", str(root))

    def put(relpath, text = ""):
        path = root / relpath
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(text)
        return str(path)
    return put


# --- the detectors ------------------------------------------------------------------------------

def test_the_harness_runs_every_detector_the_keep_check_runs():
    with open(CONTENT, encoding = "utf-8") as f:
        export = called_detectors(f.read(), "detect_content_suspects")
    harness = called_detectors(inspect.getsource(ts), "run_detectors")
    assert set(export) <= set(harness)
    assert set(harness) - set(export) == {"identify_dropped_fyl2x", "identify_missing_cave_copy",
                                          "identify_stale_enum_name"}


def test_asm_and_regenerated_source_gate_their_detectors():
    susp = FakeSuspects()
    plain = {s["type"] for s in ts.run_detectors(susp, "code")}
    assert "identify_dropped_fyl2x" not in plain and "identify_stale_enum_name" not in plain
    full = ts.run_detectors(susp, "code", {"layout": 1}, ["globals"], {"size": 1}, "asm", {"enum": 1}, "cpp")
    by_type = {s["type"]: s["args"] for s in full}
    assert by_type["identify_dropped_fyl2x"] == ("code", "asm")
    assert by_type["identify_stale_enum_name"] == ("code", "cpp", {"enum": 1})
    assert by_type["identify_pointer_truncation_suspects"] == ("code", None, ["globals"], {"layout": 1})


def test_the_suspects_package_loads_without_ghidra(monkeypatch):
    monkeypatch.setattr(sys, "modules", dict(sys.modules))
    for name in [m for m in sys.modules if m.startswith("ghidra_annotations")]:
        monkeypatch.delitem(sys.modules, name)
    susp = ts._load_suspects_module()
    assert susp.identify_suspect_lines("") == [] and "ghidra_annotations.annotations" in sys.modules
    assert ts._load_suspects_module().identify_suspect_lines("") == []      # with its parents in place


# --- per-program types and globals ----------------------------------------------------------------

def test_globals_come_from_the_programs_own_headers(annotations):
    annotations("bw1.exe/pseudocode/include/globals/a.h", "extern void* g_Pod;\n")
    annotations("nocedit.exe/pseudocode/include/globals/a.h",
                "extern CDemonPod_vtable g_Pod;\n"
                "extern unsigned int g_Count;\n"
                "extern char g_Name[16];\n"
                "  extern int g_Count;\n"
                "int notExtern;\n")
    assert ts.build_global_ptr_intervals("nocedit.exe") == [
        (0, 0, "g_Pod", "CDemonPod_vtable"), (0, 0, "g_Count", "unsigned int"), (0, 0, "g_Name", "char[16]")]
    assert ts.build_global_ptr_intervals("bw1.exe") == [(0, 0, "g_Pod", "void*")]
    assert ts.build_global_ptr_intervals("none.exe") == []


def test_a_file_is_checked_against_the_program_it_belongs_to(annotations, tmp_path):
    annotations("bw1.exe/data_types/data_types.json", "{}")
    path = annotations("bw1.exe/pseudocode/src/a.cpp/f.cpp")
    assert ts.program_of(path) == "bw1.exe"
    assert ts.program_of(annotations("tridx7.dll/pseudocode/src/f.cpp")) == ts.DEFAULT_PROGRAM   # no data types
    assert ts.program_of(str(tmp_path / "scratch.cpp")) == ts.DEFAULT_PROGRAM


def test_a_programs_maps_come_from_its_data_types(annotations):
    data_types = annotations("bw1.exe/data_types/data_types.json", "{}")
    annotations("bw1.exe/pseudocode/include/globals/a.h", "extern int *g_P;\n")
    layout, size, enums, globals_ = ts.program_maps(FakeSuspects(), "bw1.exe")
    assert layout == {"build_struct_layout_map": data_types} and size == {"build_struct_size_map": data_types}
    assert enums == {"build_enum_value_map": data_types} and globals_ == [(0, 0, "g_P", "int *")]
    assert ts.program_maps(FakeSuspects(), "none.exe") == ({}, {}, {}, [])


# --- the files beside a source ----------------------------------------------------------------------

@pytest.mark.parametrize("name", ["f.keep.cpp", "f.keep.c", "f.cpp", "f.c", "f.h"])
def test_the_asm_beside_a_source_is_read(tmp_path, name):
    (tmp_path / "f.asm").write_text("FYL2X")
    (tmp_path / "f.h.asm").write_text("header asm")
    expected = "header asm" if name == "f.h" else "FYL2X"
    assert ts._sibling_asm(str(tmp_path / name)) == expected
    assert ts._sibling_asm(str(tmp_path / "g.cpp")) == ""


def test_a_keep_is_compared_with_the_regenerated_source(tmp_path):
    (tmp_path / "f.cpp").write_text("cpp")
    (tmp_path / "g.c").write_text("c")
    assert ts._regenerated_cpp(str(tmp_path / "f.keep.cpp")) == "cpp"
    assert ts._regenerated_cpp(str(tmp_path / "g.keep.c")) == "c"
    assert ts._regenerated_cpp(str(tmp_path / "h.keep.cpp")) == ""
    assert ts._regenerated_cpp(str(tmp_path / "f.cpp")) == ""


# --- cppcheck ---------------------------------------------------------------------------------------

def test_cppcheck_diagnostics_are_parsed_with_the_programs_defines(monkeypatch):
    ran = []

    def run(cmd, **kwargs):
        ran.append((cmd, kwargs["timeout"]))
        return subprocess.CompletedProcess(cmd, 0, "", "f.cpp:12:3: warning: shift too far [shiftTooManyBits]\nnoise\n")
    monkeypatch.setattr(ts.subprocess, "run", run)
    monkeypatch.setattr(ts._config_defines, "pseudocode_dir_for", lambda path: "/p" if "keep" in path else None)
    monkeypatch.setattr(ts._config_defines, "config_define_flags", lambda directory: [f"-DFROM={directory}"])
    diagnostics, err = ts.run_cppcheck_quick("f.keep.cpp", timeout = 5)
    assert err is None and diagnostics == [{"line": 12, "column": 3, "severity": "warning",
                                            "message": "shift too far", "check_id": "shiftTooManyBits"}]
    assert ran[0][0][0] == "cppcheck" and ran[0][0][-2:] == ["-DFROM=/p", "f.keep.cpp"] and ran[0][1] == 5
    ts.run_cppcheck_quick("f.cpp")
    assert ran[1][0][-2] == "--suppress=unmatchedSuppression" and ran[1][1] == 60


@pytest.mark.parametrize("error, expected", [
    (FileNotFoundError(), "cppcheck-missing"),
    (subprocess.TimeoutExpired("cppcheck", 60), "cppcheck timed out after 60s"),
])
def test_cppcheck_that_cannot_run_gives_no_diagnostics(monkeypatch, error, expected):
    def run(cmd, **kwargs):
        raise error
    monkeypatch.setattr(ts.subprocess, "run", run)
    assert ts.run_cppcheck_quick("x.cpp") == ([], expected)


# --- the report -------------------------------------------------------------------------------------

def test_a_suspect_shows_its_match_unless_it_repeats_the_description():
    assert ts.format_suspect({"line": 4, "type": "t", "severity": "high", "match": "m", "description": "d"}) == \
        "    L4    [high/t] m — d"
    assert ts.format_suspect({"line": 4, "type": "t", "severity": "high", "match": "d", "description": "d"}) == \
        "    L4    [high/t] d"
    assert ts.format_suspect({}) == "    L?    [?/?] "
    assert ts.format_cppcheck_diag({}) == "    L?    [?/cppcheck:?] "


def test_a_file_reports_its_visible_findings_sorted(capsys):
    suspects = [{"line": 9, "type": "b"}, {"line": 2, "type": "a"}, {"line": 1, "type": "mmx_assembly"}]
    diags = [{"line": 5, "check_id": "z"}, {"line": 3, "check_id": "y"}]
    assert ts.report_file("f.cpp", suspects, diags, show_omitted = True) == 4
    out = capsys.readouterr().out.splitlines()
    assert out[0] == "  2 suspect(s), 2 cppcheck  f.cpp"
    assert [ln.split("]")[0].strip() for ln in out[1:5]] == ["L2    [?/a", "L9    [?/b", "L3    [?/cppcheck:y",
                                                             "L5    [?/cppcheck:z"]
    assert out[5] == "  (omitted: 1 filtered by OMIT_SUSPECT_TYPES)"


def test_a_file_with_only_omitted_findings_is_clean(capsys):
    assert ts.report_file("f.cpp", [{"type": "mmx_assembly"}], [], show_omitted = False) == 0
    assert capsys.readouterr().out == "  clean         f.cpp\n"
    assert ts.report_file("g.cpp", [], [{"line": 1}], show_omitted = True) == 1
    assert capsys.readouterr().out.startswith("  1 cppcheck  g.cpp\n")


# --- main ---------------------------------------------------------------------------------------------

@pytest.fixture(name = "run")
def fixture_run(annotations, monkeypatch, capsys):
    monkeypatch.setattr(ts, "_load_suspects_module", FakeSuspects)
    monkeypatch.setattr(ts, "run_detectors", lambda susp, code, *maps: json.loads(code))
    annotations(f"{ts.DEFAULT_PROGRAM}/data_types/data_types.json", "{}")
    cppcheck = {}
    monkeypatch.setattr(ts, "run_cppcheck_quick", lambda path: cppcheck.get(path, ([], None)))

    def go(*argv):
        code = ts.main(list(argv))
        return code, capsys.readouterr().out
    return go, annotations, cppcheck


def test_main_reports_each_file_and_a_total(run):
    go, annotations, cppcheck = run
    one = annotations(f"{ts.DEFAULT_PROGRAM}/pseudocode/src/f.cpp", json.dumps([{"line": 1, "type": "x"}]))
    two = annotations(f"{ts.DEFAULT_PROGRAM}/pseudocode/src/g.cpp", "[]")
    cppcheck[two] = ([{"line": 2, "check_id": "c"}], None)
    code, out = go(one, two)
    assert code == 0 and f"  1 suspect(s)  {one}" in out and f"  1 cppcheck  {two}" in out
    assert out.endswith("Total: 2 finding(s) across 2 file(s)\n")


def test_main_says_once_that_cppcheck_is_missing_and_shows_other_errors(run):
    go, annotations, cppcheck = run
    files = [annotations(f"{ts.DEFAULT_PROGRAM}/pseudocode/src/{n}.cpp", "[]") for n in "abc"]
    cppcheck.update({files[0]: ([], "cppcheck-missing"), files[1]: ([], "cppcheck-missing"),
                     files[2]: ([], "cppcheck timed out after 60s")})
    _, out = go(*files)
    assert out.count("(cppcheck not on $PATH") == 1 and "  (cppcheck error: cppcheck timed out after 60s)" in out
    _, out = go("--no-cppcheck", files[0])
    assert "cppcheck" not in out and "Total" not in out


def test_a_missing_file_fails_the_run(run, tmp_path):
    go, annotations, _ = run
    present = annotations(f"{ts.DEFAULT_PROGRAM}/pseudocode/src/f.cpp", "[]")
    code, out = go(str(tmp_path / "gone.cpp"), present)
    assert code == 1 and f"  ERROR         {tmp_path / 'gone.cpp'} — not found" in out
    assert out.endswith("Total: 0 finding(s) across 1 file(s)\n")


def test_the_script_runs_as_main(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(sys, "modules", dict(sys.modules))
    monkeypatch.setattr(sys, "argv", ["test_suspects.py", "--no-cppcheck", str(tmp_path / "gone.cpp")])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(ts.__file__, run_name = "__main__")
    assert stop.value.code == 1 and "not found" in capsys.readouterr().out


def test_config_defines_are_loaded_by_path():
    assert isinstance(ts._config_defines, types.ModuleType) and ts._config_defines.__name__ == "_config_defines"
