# Imports
import json
import os
import runpy
import subprocess
import sys
import tempfile

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import static_analysis as sa


class Tools:
    """Stands in for subprocess.run under the three tools.

    Each tool's entry is (returncode, output) or an exception to raise; output
    may name the analyzed file as {cpp}. `--version` answers by `available`.
    """

    def __init__(self, available = ("clang++", "cppcheck", "clang-tidy"), **outputs):
        self.available = available
        self.outputs = {"clang++": (0, ""), "cppcheck": (0, ""), "clang-tidy": (0, "")}
        self.outputs.update({k.replace("_", "-"): v for k, v in outputs.items()})
        self.calls = []

    def __call__(self, cmd, **kwargs):
        self.calls.append(cmd)
        tool = cmd[0]
        if cmd[1] == "--version":
            if tool not in self.available:
                raise FileNotFoundError(tool)
            return subprocess.CompletedProcess(cmd, 0, "", "")
        answer = self.outputs[tool]
        if isinstance(answer, BaseException):
            raise answer
        code, text = answer
        text = text.replace("{cpp}", cmd[-1] if tool != "clang-tidy" else cmd[cmd.index("--") - 1])
        if tool == "clang-tidy":
            return subprocess.CompletedProcess(cmd, code, text, "")
        return subprocess.CompletedProcess(cmd, code, "", text)


@pytest.fixture(name = "tools")
def fixture_tools(monkeypatch):
    def install(*args, **kwargs):
        fake = Tools(*args, **kwargs)
        monkeypatch.setattr(sa.subprocess, "run", fake)
        return fake
    return install


# --- run_process_group -------------------------------------------------------

def test_a_process_group_returns_what_the_tool_wrote():
    proc = sa.run_process_group([sys.executable, "-c", "import sys; print('out'); print('err', file=sys.stderr); sys.exit(3)"], 30)
    assert (proc.returncode, proc.stdout, proc.stderr) == (3, "out\n", "err\n")


@pytest.mark.parametrize("killpg_fails", [False, True])
def test_a_timed_out_process_group_is_killed(killpg_fails, monkeypatch):
    if killpg_fails:
        real = os.killpg

        def killpg(pid, sig):
            real(pid, sig)
            raise OSError("already gone")
        monkeypatch.setattr(os, "killpg", killpg)
    with pytest.raises(subprocess.TimeoutExpired):
        sa.run_process_group([sys.executable, "-c", "import time; time.sleep(30)"], 0.5)


# --- tool availability and file selection ---------------------------------------

def test_a_tool_is_available_when_its_version_runs(tools):
    tools(available = ("cppcheck",))
    assert sa.check_tool_available(sa.TOOL_CPPCHECK)
    assert not sa.check_tool_available(sa.TOOL_CLANG_TIDY)
    assert not sa.check_tool_available("lint")


def test_a_tool_that_hangs_is_not_available(monkeypatch):
    def hang(cmd, **kwargs):
        raise subprocess.TimeoutExpired(cmd, 5)
    monkeypatch.setattr(sa.subprocess, "run", hang)
    assert not sa.check_tool_available(sa.TOOL_CLANG_ANALYZER)


@pytest.mark.parametrize("present, expected", [
    (["f.keep.cpp", "f.cpp", "f.mmx.cpp"], ("f.keep.cpp", "keep")),
    (["f.keep.c", "f.cpp"], ("f.keep.c", "keep")),
    (["f.cpp", "f.c"], ("f.cpp", "raw")),
    (["f.c"], ("f.c", "raw")),
    (["f.mmx.cpp", "f.byval.cpp"], (None, None)),
])
def test_the_keep_is_analyzed_before_the_raw_file(tmp_path, present, expected):
    for name in present:
        (tmp_path / name).write_text("")
    path, variant = sa.get_analyzable_cpp_path(str(tmp_path / "f.json"))
    assert (path and os.path.basename(path), variant) == expected


# --- output parsing ------------------------------------------------------------

def test_analyzer_warnings_carry_their_checker_and_notes():
    stderr = ("a.cpp:1:2: note: before any warning\n"
              "a.cpp:5:3: warning: Dereference of null pointer [core.NullDereference]\n"
              "a.cpp:4: note: Null stored here\n"
              "a.cpp:9:1: error: no checker on this one\n")
    assert sa.parse_clang_analyzer_output(stderr, "a.cpp") == [
        {"line": 5, "column": 3, "message": "Dereference of null pointer", "checker": "core.NullDereference",
         "path_notes": [{"line": 4, "message": "Null stored here"}]},
        {"line": 9, "column": 1, "message": "no checker on this one", "checker": "", "path_notes": []}]


@pytest.mark.parametrize("parse", [sa.parse_clang_analyzer_output, sa.parse_cppcheck_output, sa.parse_clang_tidy_output])
def test_no_output_is_no_diagnostics(parse):
    assert parse("", "a.cpp") == []


def test_cppcheck_lines_follow_the_template():
    stderr = "a.cpp:3:7: warning: Uninitialized variable: x [uninitvar]\nnoise\n"
    assert sa.parse_cppcheck_output(stderr, "a.cpp") == [
        {"line": 3, "column": 7, "message": "Uninitialized variable: x", "severity": "warning", "check_id": "uninitvar"}]


def test_a_tidy_diagnostic_under_several_checks_is_filed_under_the_first():
    stdout = ("a.cpp:2:4: warning: char sign [bugprone-signed-char-misuse,cert-str34-c]\n"
              "a.cpp:8: error: no column and no check\n")
    assert sa.parse_clang_tidy_output(stdout, "a.cpp") == [
        {"line": 2, "column": 4, "message": "char sign", "check_name": "bugprone-signed-char-misuse"},
        {"line": 8, "column": 0, "message": "no column and no check", "check_name": ""}]


# --- the per-file runners ------------------------------------------------------------

def pseudocode(tmp_path, shims = True):
    """A pseudocode dir with include/, and shims/ holding one config default."""
    (tmp_path / "include").mkdir(parents = True)
    if shims:
        (tmp_path / "shims" / "config").mkdir(parents = True)
        (tmp_path / "shims" / "config" / "a.h").write_text("#define NOCTURNE_X 1\n")
    return str(tmp_path / "include")


@pytest.mark.parametrize("shims, expected", [(True, ["-I", "include", "-I", "shims"]), (False, ["-I", "include"])])
def test_clang_sees_the_shims_the_build_compiles_with(tmp_path, shims, expected):
    flags = sa._clang_include_flags(pseudocode(tmp_path, shims))
    assert flags == [f if f == "-I" else str(tmp_path / f) for f in expected]


FATAL_PROTOTYPES = (
    "void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...) __attribute__((format(printf, 1, 2)));\n"
    "void __cdecl crt_exit_c_ExitProcess_FUN_00602700(int exit_code);\n"
    "void __cdecl core_main_c_displayError_FUN_00506e00(char *format);\n"
    "// core_main_c_displayErrorAndQuit_FUN_00506f10(x);\n")


def with_prototypes(tmp_path, text = FATAL_PROTOTYPES):
    include = pseudocode(tmp_path)
    (tmp_path / "include" / "prototypes").mkdir()
    (tmp_path / "include" / "prototypes" / "p_500000.h").write_text(text)
    return include


def test_the_analyzer_is_told_which_functions_never_return(tmp_path, monkeypatch):
    monkeypatch.setattr(sa.tempfile, "gettempdir", lambda: str(tmp_path))
    include = with_prototypes(tmp_path)
    flags = sa._analyzer_hint_flags(include)
    # The same program shares one header across runs
    assert sa._analyzer_hint_flags(include) == flags and flags[0] == "-include"
    with open(flags[1], encoding = "utf-8") as f:
        assert f.read() == (
            '#pragma once\n#include "nocturne.h"\n'
            "void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...) "
            "__attribute__((format(printf, 1, 2))) __attribute__((analyzer_noreturn));\n"
            "void __cdecl crt_exit_c_ExitProcess_FUN_00602700(int exit_code) __attribute__((analyzer_noreturn));\n")


@pytest.mark.parametrize("text", [None, "void __cdecl f_FUN_00401000(void);\n"])
def test_a_program_without_a_fatal_function_has_no_hints(tmp_path, text):
    include = pseudocode(tmp_path) if text is None else with_prototypes(tmp_path, text)
    assert sa._analyzer_hint_flags(include) == []


def test_the_analyzer_reads_the_hints_before_the_file(tmp_path, tools, monkeypatch):
    monkeypatch.setattr(sa.tempfile, "gettempdir", lambda: str(tmp_path))
    fake = tools(clang_ = None, **{"clang++": (0, "")})
    sa.run_clang_analyzer("f.cpp", with_prototypes(tmp_path))
    cmd = fake.calls[0]
    assert cmd[-3] == "-include" and cmd[-2].startswith(str(tmp_path)) and cmd[-1] == "f.cpp"


@pytest.mark.parametrize("deep, loop, nodes", [(False, "2", "max-nodes=25000"), (True, "4", "max-nodes=150000")])
def test_the_analyzer_runs_its_checkers_at_the_asked_depth(tmp_path, tools, deep, loop, nodes):
    fake = tools(clang_ = None, **{"clang++": (0, "/repo/x/{cpp}:3:1: warning: Value stored is never read [deadcode.DeadStores]\n")})
    include = pseudocode(tmp_path)
    result = sa.run_clang_analyzer("f.cpp", include, repo_dir = "/repo", deep = deep)
    cmd = fake.calls[0]
    # -analyzer-disable-all-checks would silence the checkers enabled after it
    assert "--analyzer-no-default-checks" in cmd and "-analyzer-disable-all-checks" not in cmd
    assert "-analyzer-max-nodes" not in cmd and nodes in cmd and cmd[cmd.index("-analyzer-max-loop") + 2] == loop
    assert cmd[-3:] == ["-I", os.path.join(str(tmp_path), "shims"), "f.cpp"]
    assert result == {"error": None, "diagnostic_count": 1, "diagnostics": [
        {"line": 3, "column": 1, "message": "Value stored is never read", "checker": "deadcode.DeadStores", "path_notes": []}]}


@pytest.mark.parametrize("answer, error", [
    # Nothing in a file that fails to compile is analyzed, so it is not a clean run
    ((1, "f.cpp:2:3: error: use of undeclared identifier 'stack0x0'\n"), "Does not compile: use of undeclared identifier 'stack0x0'"),
    ((0, "In file included from f.cpp:1:\ninc/a.h:9:1: fatal error: 'b.h' file not found\n"), "Does not compile: 'b.h' file not found"),
    ((1, "error: unknown argument: '-analyzer-max-nodes'\n"), "Analyzer failed: error: unknown argument: '-analyzer-max-nodes'"),
    ((139, ""), "Analyzer failed: exit 139"),
    (subprocess.TimeoutExpired("clang++", 30), "Analysis timed out after 30s"),
    (FileNotFoundError("clang++"), "Compiler 'clang++' not found"),
    (ValueError("odd"), "Analysis error: odd"),
])
def test_an_analyzer_run_that_analyzed_nothing_says_why(tmp_path, tools, answer, error):
    tools(**{"clang++": answer})
    result = sa.run_clang_analyzer("f.cpp", pseudocode(tmp_path), timeout = 30)
    assert result == {"diagnostics": [], "diagnostic_count": 0, "error": error}


@pytest.mark.parametrize("deep", [False, True])
def test_cppcheck_reads_the_headers_only_when_deep(tmp_path, tools, deep):
    fake = tools(cppcheck = (0, "/repo/{cpp}:4:2: warning: Null pointer [nullPointer]\n"))
    include = pseudocode(tmp_path)
    result = sa.run_cppcheck("f.cpp", include, repo_dir = "/repo", deep = deep)
    cmd = fake.calls[0]
    assert "-DNOCTURNE_X=1" in cmd and (include in cmd) is deep
    assert result["diagnostic_count"] == 1 and result["diagnostics"][0]["check_id"] == "nullPointer"


@pytest.mark.parametrize("tool, runner, missing", [
    ("cppcheck", sa.run_cppcheck, "cppcheck not found"),
    ("clang-tidy", sa.run_clang_tidy, "clang-tidy not found"),
])
@pytest.mark.parametrize("answer, error", [
    (subprocess.TimeoutExpired("x", 7), "Analysis timed out after 7s"),
    (FileNotFoundError("x"), None),
    (ValueError("odd"), "Analysis error: odd"),
])
def test_a_failed_tool_run_says_why(tmp_path, tools, tool, runner, missing, answer, error):
    tools(**{tool: answer})
    result = runner("f.cpp", pseudocode(tmp_path), timeout = 7)
    assert result == {"diagnostics": [], "diagnostic_count": 0, "error": error or missing}


def test_tidy_drops_compiler_diagnostics_and_sees_the_shims(tmp_path, tools):
    fake = tools(clang_tidy = (0, "/repo/{cpp}:2:1: warning: int division [bugprone-integer-division]\n"
                                  "/repo/{cpp}:3:1: error: unknown type [clang-diagnostic-error]\n"))
    include = pseudocode(tmp_path)
    result = sa.run_clang_tidy("f.cpp", include, repo_dir = "/repo")
    assert fake.calls[0][-2:] == ["-I", os.path.join(str(tmp_path), "shims")]
    assert [d["check_name"] for d in result["diagnostics"]] == ["bugprone-integer-division"]
    assert result["diagnostic_count"] == 1


# --- the cppcheck batch ----------------------------------------------------------------------

def test_an_empty_batch_runs_nothing():
    assert sa.run_cppcheck_batch([], "inc") == {}


def test_a_batch_files_each_finding_under_the_path_it_was_given(tmp_path, monkeypatch):
    repo = tmp_path / "repo"
    (repo / "src").mkdir(parents = True)
    include = pseudocode(repo)
    cpp = str(repo / "src" / "f.cpp")
    seen = {}

    def run(cmd, timeout):
        listing = next(c for c in cmd if c.startswith("--file-list=")).split("=", 1)[1]
        with open(listing, encoding = "utf-8") as f:
            seen.update(cmd = cmd, timeout = timeout, files = f.read())
        os.unlink(listing)      # gone before the cleanup, which must not mind
        stderr = (f"{cpp}:4:2: warning: Null pointer [nullPointer]\n"
                  f"{cpp}:5:2: warning: Uninit [uninitvar]\n"
                  f"{repo}/include/a.h:1:1: warning: In a header [nullPointer]\n")
        return subprocess.CompletedProcess(cmd, 0, "", stderr)
    monkeypatch.setattr(sa, "run_process_group", run)
    # Run from elsewhere: the repo-relative paths in the output still resolve
    monkeypatch.chdir(tmp_path)
    results = sa.run_cppcheck_batch([cpp], include, num_threads = 4, repo_dir = str(repo))
    assert seen["files"] == cpp + "\n" and seen["timeout"] == 300 and "-DNOCTURNE_X=1" in seen["cmd"]
    assert results[cpp]["diagnostic_count"] == 2
    assert [d["check_id"] for d in results[cpp]["diagnostics"]] == ["nullPointer", "uninitvar"]
    assert os.path.join(str(repo), "include", "a.h") in results


def test_a_batch_without_a_repo_keeps_the_paths_cppcheck_wrote(tmp_path, monkeypatch):
    cpp = str(tmp_path / "f.cpp")
    monkeypatch.setattr(sa, "run_process_group", lambda cmd, timeout: subprocess.CompletedProcess(
        cmd, 0, "", f"{cpp}:4:2: warning: Null pointer [nullPointer]\n"))
    assert list(sa.run_cppcheck_batch([cpp], pseudocode(tmp_path), timeout = 9)) == [cpp]


@pytest.mark.parametrize("failure", [subprocess.TimeoutExpired("cppcheck", 9), RuntimeError("boom")])
def test_a_failed_batch_has_no_results(tmp_path, monkeypatch, failure):
    def run(cmd, timeout):
        raise failure
    monkeypatch.setattr(sa, "run_process_group", run)
    assert sa.run_cppcheck_batch(["a.cpp"], pseudocode(tmp_path), timeout = 9) is None


def test_a_batch_that_cannot_write_its_file_list_has_no_results(tmp_path, monkeypatch):
    def refuse(*args, **kwargs):
        raise OSError("read-only")
    monkeypatch.setattr(tempfile, "NamedTemporaryFile", refuse)
    assert sa.run_cppcheck_batch(["a.cpp"], pseudocode(tmp_path)) is None


# --- per function and all functions ---------------------------------------------------------------

def test_a_function_runs_each_known_tool_with_the_mode_timeout(monkeypatch):
    seen = []
    for name in ("run_clang_analyzer", "run_cppcheck", "run_clang_tidy"):
        monkeypatch.setattr(sa, name, lambda cpp, inc, name = name, **kw: seen.append((name, kw)) or {"tool": name})
    results = sa.analyze_single_function("f.cpp", "inc", ["clang_analyzer", "cppcheck", "clang_tidy", "lint"], deep = True)
    assert results == {"clang_analyzer": {"tool": "run_clang_analyzer"}, "cppcheck": {"tool": "run_cppcheck"},
                       "clang_tidy": {"tool": "run_clang_tidy"}}
    assert {kw["timeout"] for _, kw in seen} == {300}
    sa.analyze_single_function("f.cpp", "inc", ["cppcheck"])
    assert seen[-1][1]["timeout"] == 30


def function(folder, name, sources = (".cpp",), json_text = None, static = None):
    """A function's .json, naming it, and its source variants."""
    folder.mkdir(parents = True, exist_ok = True)
    data = {"function": {"name": name}}
    if static is not None:
        data["static_analysis"] = static
    (folder / f"{name}.json").write_text(json_text if json_text is not None else json.dumps(data))
    for ext in sources:
        (folder / f"{name}{ext}").write_text("int x;\n")
    return folder / f"{name}.json"


def tree(tmp_path):
    src = tmp_path / "pseudocode" / "src"
    pseudocode(tmp_path / "pseudocode")
    jsons = {
        "kept": function(src / "core", "kept", (".keep.cpp", ".cpp")),
        "raw": function(src / "core", "raw"),
        "crt": function(src / "crt", "crt", (".keep.cpp",)),
        "entry": function(src / "entry" / "sub", "entry", (".keep.cpp",)),
        "nameless": function(src / "core", "", (".keep.cpp",)),
        "broken": function(src / "core", "broken", (".keep.cpp",), json_text = "{"),
        "sourceless": function(src / "core", "sourceless", ()),
    }
    (src / "core" / "notes.txt").write_text("")
    return src, jsons


def load(path):
    return json.loads(path.read_text())


def test_no_available_tool_analyzes_nothing(tmp_path, tools):
    tools(available = ())
    assert sa.analyze_all_functions(str(tmp_path), "inc") == {}


def test_a_tree_without_function_files_analyzes_nothing(tmp_path, tools):
    tools()
    assert sa.analyze_all_functions(str(tmp_path), "inc", tools = ["cppcheck"]) == {}


def test_every_function_but_the_skipped_dirs_is_analyzed_and_its_json_updated(tmp_path, tools):
    tools(available = ("clang++", "clang-tidy"),
          clang_tidy = (0, "{cpp}:1:1: warning: int division [bugprone-integer-division]\n"))
    src, jsons = tree(tmp_path)
    include = str(tmp_path / "pseudocode" / "include")
    results = sa.analyze_all_functions(str(src), include, keep_only = False, num_threads = 2)
    assert sorted(results) == ["kept", "raw"]
    assert results["kept"]["variant"] == "keep" and results["raw"]["variant"] == "raw"
    assert load(jsons["kept"])["static_analysis"] == {
        "analyzed_file": "kept.keep.cpp", "file_variant": "keep",
        "clang_tidy_quick": results["kept"]["tool_results"]["clang_tidy"]}
    assert "static_analysis" not in load(jsons["crt"])
    # Only the keep, by default
    assert sorted(sa.analyze_all_functions(str(src), include, skip_dirs = [])) == ["crt", "entry", "kept"]


def test_progress_is_logged_every_hundred_functions(tmp_path, tools, monkeypatch):
    tools(available = ("cppcheck",))
    for i in range(100):
        function(tmp_path / "src", f"f{i}", (".keep.cpp",))
    logged = []
    monkeypatch.setattr(sa, "log_info", logged.append)
    assert len(sa.analyze_all_functions(str(tmp_path / "src"), "inc", tools = ["cppcheck"])) == 100
    assert "  Analyzed 100/100 functions..." in logged


def test_a_failed_function_and_a_failed_json_update_do_not_stop_the_rest(tmp_path, tools, monkeypatch):
    tools(available = ("cppcheck",))
    src, _ = tree(tmp_path)

    def fail(*args, **kwargs):
        raise RuntimeError("worker died")
    monkeypatch.setattr(sa, "analyze_single_function", fail)
    monkeypatch.setattr(sa, "update_function_json_with_analysis", fail)
    results = sa.analyze_all_functions(str(src), "inc", tools = ["cppcheck"])
    assert results["kept"]["tool_results"] == {"cppcheck": {"diagnostics": [], "diagnostic_count": 0,
                                                            "error": "Exception: worker died"}}


@pytest.mark.parametrize("tool_list, per_file", [(["cppcheck"], False), (["cppcheck", "clang_tidy"], True)])
def test_deep_cppcheck_runs_once_over_every_file(tmp_path, tools, monkeypatch, tool_list, per_file):
    tools()
    src, jsons = tree(tmp_path)
    found = {"diagnostics": [{"line": 1}], "diagnostic_count": 1, "error": None}
    batches = []

    def batch(paths, include, num_threads, repo_dir):
        batches.append(paths)
        return {paths[0]: found}
    monkeypatch.setattr(sa, "run_cppcheck_batch", batch)
    ran = []
    monkeypatch.setattr(sa, "analyze_single_function",
                        lambda cpp, inc, tools, repo, deep: ran.append(tools) or {})
    results = sa.analyze_all_functions(str(src), "inc", tools = tool_list, deep = True, keep_only = False)
    assert len(batches) == 1 and len(batches[0]) == 2
    assert bool(ran) is per_file and all(t == ["clang_tidy"] for t in ran)
    first = next(n for n, r in results.items() if r["cpp_path"] == batches[0][0])
    assert results[first]["tool_results"]["cppcheck"] is found
    assert load(jsons[first])["static_analysis"]["cppcheck_deep"] == found


# --- the JSON update ---------------------------------------------------------------------

def test_a_mode_replaces_only_its_own_findings(tmp_path):
    path = function(tmp_path, "f", static = {"analyzed_file": "f.cpp", "file_variant": "raw",
                                              "cppcheck_quick": {"old": 1}, "cppcheck_deep": {"deep": 1}})
    assert sa.update_function_json_with_analysis(str(path), {"analyzed_file": "f.keep.cpp", "file_variant": "keep",
                                                             "clang_tidy_quick": {"new": 1}}, "quick")
    assert load(path)["static_analysis"] == {"analyzed_file": "f.keep.cpp", "file_variant": "keep",
                                             "cppcheck_deep": {"deep": 1}, "clang_tidy_quick": {"new": 1}}


def test_a_tool_that_did_not_finish_keeps_its_last_findings(tmp_path):
    path = function(tmp_path, "f", static = {"cppcheck_deep": {"old": 1}, "clang_tidy_deep": {"old": 2}})
    assert sa.update_function_json_with_analysis(str(path), {"unfinished": ["cppcheck_deep"]}, "deep")
    assert load(path)["static_analysis"] == {"analyzed_file": "", "file_variant": "", "cppcheck_deep": {"old": 1}}


@pytest.mark.parametrize("error, kept", [
    ("Cppcheck batch did not finish", True), ("Analysis timed out after 30s", True),
    ("Exception: worker died", True), ("Does not compile: x.cpp:1: error", False), (None, False)])
def test_only_a_run_that_did_not_finish_leaves_old_findings(error, kept):
    assert sa._did_not_finish({"error": error}) is kept


def test_a_timed_out_deep_batch_leaves_every_function_its_findings(tmp_path, tools, monkeypatch):
    tools()
    src, jsons = tree(tmp_path)
    for path in jsons.values():
        if path.read_text() != "{":
            data = load(path)
            data["static_analysis"] = {"cppcheck_deep": {"old": 1}}
            path.write_text(json.dumps(data))
    monkeypatch.setattr(sa, "run_cppcheck_batch", lambda paths, include, num_threads, repo_dir: None)
    results = sa.analyze_all_functions(str(src), "inc", tools = ["cppcheck"], deep = True)
    assert results["kept"]["tool_results"]["cppcheck"]["error"] == "Cppcheck batch did not finish"
    assert load(jsons["kept"])["static_analysis"]["cppcheck_deep"] == {"old": 1}


@pytest.mark.parametrize("static", [{"analyzed_file": "f.cpp", "cppcheck_quick": {"old": 1}}, None])
def test_a_function_left_with_no_findings_has_no_static_analysis(tmp_path, static):
    path = function(tmp_path, "f", static = static)
    assert sa.update_function_json_with_analysis(str(path), {}, "quick")
    assert "static_analysis" not in load(path)


def test_an_unreadable_json_is_not_updated(tmp_path):
    path = function(tmp_path, "f", json_text = "not json")
    assert not sa.update_function_json_with_analysis(str(path), {}, "quick")


# --- the exporter entry point and the CLI -------------------------------------------------------------

@pytest.mark.parametrize("make", ["", "src"])
def test_a_pseudocode_dir_without_src_and_include_is_skipped(tmp_path, make):
    if make:
        (tmp_path / make).mkdir()
    assert sa.run_static_analysis_after_export(str(tmp_path)) is None


def test_the_export_summary_counts_files_and_findings(tmp_path, tools):
    tools(available = ("clang-tidy",), clang_tidy = (0, "{cpp}:1:1: warning: a [bugprone-integer-division]\n"
                                                         "{cpp}:2:1: warning: b [bugprone-integer-division]\n"))
    tree(tmp_path)
    summary = sa.run_static_analysis_after_export(str(tmp_path / "pseudocode"), keep_only = True)
    assert summary == {"total_files": 1, "files_with_findings": 1, "total_diagnostics": 2}
    tools(available = ("clang-tidy",))
    summary = sa.run_static_analysis_after_export(str(tmp_path / "pseudocode"))
    assert summary == {"total_files": 2, "files_with_findings": 0, "total_diagnostics": 0}


def test_an_export_with_nothing_to_analyze_has_no_summary(tmp_path, tools):
    tools()
    pseudocode(tmp_path)
    (tmp_path / "src").mkdir()
    assert sa.run_static_analysis_after_export(str(tmp_path)) is None


@pytest.mark.parametrize("extra, printed", [(["--tools", "clang-tidy", "cppcheck"], True), ([], False)])
def test_the_cli_prints_the_summary(tmp_path, tools, monkeypatch, capsys, extra, printed):
    tools(available = ("clang-tidy",) if printed else (),
          clang_tidy = (0, "{cpp}:1:1: warning: a [bugprone-integer-division]\n"))
    tree(tmp_path)
    monkeypatch.setattr(sys, "argv", ["static_analysis.py", str(tmp_path / "pseudocode"), "--threads", "2", *extra])
    monkeypatch.delitem(sys.modules, sa.__name__)
    runpy.run_module(sa.__name__, run_name = "__main__")
    out = capsys.readouterr().out
    assert ("Files analyzed: 1" in out) is printed
