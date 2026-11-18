# Imports
import json
import os
import subprocess

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import function_compile as fc


class Proc:
    def __init__(self, returncode = 0, stderr = ""):
        self.returncode, self.stderr = returncode, stderr


@pytest.fixture(name = "logged")
def fixture_logged(monkeypatch):
    lines = []
    monkeypatch.setattr(fc, "log_info", lines.append)
    return lines


# --- precompiled header and cache ---------------------------------------------------------------

def test_no_nocturne_h_builds_no_pch(tmp_path):
    assert fc.build_nocturne_pch(str(tmp_path)) is None


def test_the_pch_is_built_without_syntax_only_and_returned(tmp_path, monkeypatch):
    (tmp_path / "nocturne.h").write_text("")
    seen = []

    def run(cmd, **_kwargs):
        seen.append(cmd)
        (tmp_path / "nocturne.h.pch").write_bytes(b"pch")
        return Proc()
    monkeypatch.setattr(fc.subprocess, "run", run)
    assert fc.build_nocturne_pch(str(tmp_path)) == str(tmp_path / "nocturne.h.pch")
    assert "-fsyntax-only" not in seen[0] and seen[0][-1] == str(tmp_path / "nocturne.h")


@pytest.mark.parametrize("stderr, shown", [("a\nb\nc\nd\ne\nf\n", ["  a", "  b", "  c", "  d", "  e"]), ("  \n", [])])
def test_a_failed_pch_build_logs_its_first_lines(tmp_path, monkeypatch, logged, stderr, shown):
    (tmp_path / "nocturne.h").write_text("")
    monkeypatch.setattr(fc.subprocess, "run", lambda cmd, **_kwargs: Proc(1, stderr))
    assert fc.build_nocturne_pch(str(tmp_path)) is None
    assert logged == ["PCH build failed (nocturne.h); falling back to per-file headers.", *shown]


def test_a_pch_build_that_cannot_run_returns_none(tmp_path, monkeypatch, logged):
    (tmp_path / "nocturne.h").write_text("")

    def run(cmd, **_kwargs):
        raise subprocess.TimeoutExpired(cmd, 1)
    monkeypatch.setattr(fc.subprocess, "run", run)
    assert fc.build_nocturne_pch(str(tmp_path)) is None and logged[0].startswith("PCH build error:")


def test_file_hashes_read_in_chunks_and_are_empty_for_nothing(tmp_path):
    path = tmp_path / "f"
    path.write_bytes(b"abcdef")
    assert len(fc._hash_file_bytes(str(path), chunk = 2)) == 16
    assert fc._hash_file_bytes(str(path), chunk = 2) == fc._hash_file_bytes(str(path))
    assert fc._hash_file_bytes(None) == "" and fc._hash_file_bytes(str(tmp_path / "none")) == ""


def test_the_cache_key_covers_source_pch_and_flags(tmp_path):
    cpp = tmp_path / "f.cpp"
    cpp.write_text("int f;")
    key = fc._compile_cache_key(str(cpp), "p", fc._flags_signature())
    assert len(key) == 16 and key != fc._compile_cache_key(str(cpp), "q", fc._flags_signature())
    assert fc._compile_cache_key(str(tmp_path / "none.cpp"), "p", "f") == ""
    assert fc._cache_path_for(os.path.join("a", "src")) == os.path.join("a", ".compile_cache.json")


@pytest.mark.parametrize("text, cache", [(None, {}), ("{", {}), ("[1]", {}), ('{"k": {}}', {"k": {}})])
def test_the_cache_loads_only_a_readable_object(tmp_path, text, cache):
    path = tmp_path / "cache.json"
    if text is not None:
        path.write_text(text)
    assert fc._load_compile_cache(str(path)) == cache


def test_the_cache_is_saved_whole_or_not_at_all(tmp_path, logged):
    path = tmp_path / "cache.json"
    assert fc._save_compile_cache(str(path), {"k": 1}) and json.loads(path.read_text()) == {"k": 1}
    taken = tmp_path / "taken"
    taken.mkdir()
    (taken / "x").write_text("")
    assert not fc._save_compile_cache(str(taken), {})                 # cannot replace a directory
    assert not os.path.exists(str(taken) + ".tmp")
    assert not fc._save_compile_cache(str(tmp_path / "none" / "c.json"), {})
    assert [line.split(":")[0] for line in logged] == ["Failed to write compile cache"] * 2


@pytest.mark.parametrize("key, cache_key, hit", [
    ("a", "", None), ("b", "h", None), ("a", "other", None),
    ("a", "h", {"success": True, "errors": [], "warnings": ["w"]}),
])
def test_a_cached_result_needs_its_stored_hash(key, cache_key, hit):
    cache = {"a": {"compile_hash": "h", "warnings": ["w"]}}
    assert fc._lookup_cached_compile_result(cache, key, cache_key) == hit


# --- messages -------------------------------------------------------------------------------------

def test_messages_lose_colour_fancy_quotes_and_the_repo_path():
    assert fc.strip_ansi_codes("\x1b[1mbold\x1b[0m") == "bold" and fc.strip_ansi_codes("") == ""
    assert fc.normalize_quotes("‘a’ “b”") == "'a' \"b\"" and fc.normalize_quotes(None) is None
    assert fc.normalize_path_in_message("/repo/src/a.cpp and /repo", "/repo/") == "src/a.cpp and "
    assert fc.normalize_path_in_message("x", None) == "x"


@pytest.mark.parametrize("message, category", [
    ("", "other"), ("something odd", "other"),
    ("unknown type name 'uint3'", "type_error"),
    ("member reference base type 'int' is not a structure or union", "member_access_error"),
    ("no matching function for call to 'f'", "overload_error"),
    ("cannot convert 'a' to 'b'", "incompatible_types"),
    ("'x.h' file not found", "missing_header"),
])
def test_each_message_gets_its_category(message, category):
    assert fc.categorize_error(message) == category


def test_placed_errors_and_warnings_are_parsed_and_notes_skipped():
    stderr = ("a.cpp:3:5: error: use of undeclared identifier 'x'\n"
              "a.cpp:3:5: note: here\n"
              "a.cpp:9: warning: array index 4 is past the end of the array\n"
              "a.cpp:1:10: fatal error: 'y.h' file not found\n")
    errors, warnings = fc.parse_error_output(stderr)
    assert [(e["line"], e["column"], e["category"]) for e in errors] == [
        (3, 5, "undeclared_identifier"), (1, 10, "missing_header")]
    assert warnings == [{"line": 9, "column": 0, "message": "array index 4 is past the end of the array",
                         "category": "array_error"}]
    assert fc.parse_error_output("") == ([], [])


@pytest.mark.parametrize("stderr, error", [
    ("ld: error: undefined reference to 'f'\n", {"line": 0, "column": 0, "category": "undefined_reference",
                                                 "message": "ld: error: undefined reference to 'f'"}),
    ("clang: crashed\nmore", {"line": 0, "column": 0, "category": "other", "message": "clang: crashed"}),
])
def test_an_unplaced_failure_reports_one_line(stderr, error):
    assert fc.parse_error_output(stderr) == ([error], [])


def test_a_long_unplaced_line_is_cut():
    assert len(fc.parse_error_output("x" * 900)[0][0]["message"]) == 500


# --- compiling one file ---------------------------------------------------------------------------

def test_a_clean_compile_keeps_its_warnings_and_cleans_their_text(monkeypatch):
    seen = []

    def run(cmd, **_kwargs):
        seen.append(cmd)
        return Proc(0, "\x1b[1m/repo/a.cpp:2:1: warning: ‘x’ format\x1b[0m\n")
    monkeypatch.setattr(fc.subprocess, "run", run)
    result = fc.compile_function_cpp("/repo/a.cpp", os.path.join("p", "include"), repo_dir = "/repo",
                                     pch_path = "n.pch")
    assert result == {"success": True, "errors": [],
                      "warnings": [{"line": 2, "column": 1, "message": "'x' format", "category": "other"}]}
    assert seen[0][-3:] == ["-include-pch", "n.pch", "/repo/a.cpp"] and os.path.join("p", "shims") in seen[0]


def test_a_failed_compile_returns_its_errors(monkeypatch):
    seen = []

    def run(cmd, **_kwargs):
        seen.append(cmd)
        return Proc(1, "a.cpp:1:1: error: expected ';'\n")
    monkeypatch.setattr(fc.subprocess, "run", run)
    result = fc.compile_function_cpp("a.cpp", "inc")
    assert not result["success"] and result["errors"][0]["category"] == "syntax_error"
    assert "-include-pch" not in seen[0]


@pytest.mark.parametrize("raised, message", [
    (subprocess.TimeoutExpired("c", 60), "Compilation timed out after 60s"),
    (FileNotFoundError(), "Compiler 'cc' not found"),
    (PermissionError("denied"), "Compilation error: denied"),
])
def test_a_compiler_that_cannot_run_is_one_unplaced_error(monkeypatch, raised, message):
    def run(cmd, **_kwargs):
        raise raised
    monkeypatch.setattr(fc.subprocess, "run", run)
    assert fc.compile_function_cpp("a.cpp", "inc", compiler = "cc") == {
        "success": False, "warnings": [], "errors": [{"line": 0, "column": 0, "message": message, "category": "other"}]}


# --- finding functions ----------------------------------------------------------------------------

def write_function(folder, name, sources = (".cpp",), record = None):
    folder.mkdir(parents = True, exist_ok = True)
    (folder / f"{name}.json").write_text(json.dumps(record if record is not None else
                                                    {"function": {"name": name, "address": "0x1"}}))
    for ext in sources:
        (folder / f"{name}{ext}").write_text(f"int {name};\n")
    return folder / f"{name}.json"


@pytest.mark.parametrize("sources, picked", [
    ((".cpp", ".keep.cpp"), ".keep.cpp"), ((".c", ".keep.c"), ".keep.c"), ((".c",), ".c"), ((".cpp",), ".cpp")])
def test_the_keep_is_compiled_before_the_export(tmp_path, sources, picked):
    info = fc.load_function_info_from_json(str(write_function(tmp_path, "f", sources)))
    assert info == {"name": "f", "address": "0x1", "json_path": str(tmp_path / "f.json"),
                    "cpp_path": str(tmp_path / f"f{picked}")}


@pytest.mark.parametrize("record, sources", [
    ([1], (".cpp",)), ({}, (".cpp",)), ({"function": "f"}, (".cpp",)), ({"function": {"name": ""}}, (".cpp",)),
    (None, ()),
])
def test_a_record_that_is_not_a_compilable_function_is_skipped(tmp_path, record, sources):
    assert fc.load_function_info_from_json(str(write_function(tmp_path, "f", sources, record))) is None


def test_an_unreadable_record_is_skipped(tmp_path):
    (tmp_path / "f.json").write_text("{")
    assert fc.load_function_info_from_json(str(tmp_path / "f.json")) is None


# --- compiling every function ---------------------------------------------------------------------

class Compiler:
    """subprocess.run for clang: --version, the PCH build and per-file compiles,
    which fail for any file named in `failing`."""

    def __init__(self, version_code = 0, pch = True, failing = ()):
        self.version_code, self.pch, self.failing = version_code, pch, set(failing)
        self.compiled = []

    def __call__(self, cmd, **_kwargs):
        if cmd[-1] == "--version":
            return Proc(self.version_code)
        if "c++-header" in cmd:
            if self.pch:
                with open(cmd[cmd.index("-o") + 1], "wb") as f:
                    f.write(b"pch")
            return Proc(0 if self.pch else 1)
        self.compiled.append(os.path.basename(cmd[-1]))
        if os.path.basename(cmd[-1]) in self.failing:
            return Proc(1, f"{cmd[-1]}:1:1: error: expected ';'\n")
        return Proc(0)


def pseudocode(tmp_path, count = 1):
    root = tmp_path / "pseudocode"
    for i in range(count):
        write_function(root / "src" / "core", f"f{i:03d}")
    write_function(root / "src" / "core", "bad")
    write_function(root / "src" / "core" / "globals", "nested")      # only a top-level globals/ is skipped
    write_function(root / "src" / "globals", "g")
    write_function(root / "src" / "core", "notes", record = [])          # not a function record
    (root / "include").mkdir()
    (root / "include" / "nocturne.h").write_text("")
    return root


def status_of(root, name):
    path = next(root.rglob(f"{name}.json"))
    return json.loads(path.read_text())["compilation_status"]


def test_every_function_compiles_once_then_only_failures_rerun(tmp_path, monkeypatch, logged):
    root = pseudocode(tmp_path, count = 99)
    compiler = Compiler(failing = {"bad.cpp"})
    monkeypatch.setattr(fc.subprocess, "run", compiler)
    progress = []
    results = fc.compile_all_functions(str(root / "src"), str(root / "include"), num_threads = 2,
                                       progress_callback = lambda done, total: progress.append((done, total)))
    assert len(results) == 101 and "g" not in results and not results["bad"]["success"]
    assert sorted(compiler.compiled) == sorted([f"f{i:03d}.cpp" for i in range(99)] + ["bad.cpp", "nested.cpp"])
    assert progress[-1] == (101, 101) and "  Compiled 100/101 functions..." in logged
    assert status_of(root, "f000") == {"success": True, "errors": [], "warnings": []}
    assert status_of(root, "bad")["errors"][0]["category"] == "syntax_error"
    compiler.compiled.clear()
    again = fc.compile_all_functions(str(root / "src"), str(root / "include"), skip_dirs = ["globals"])
    assert compiler.compiled == ["bad.cpp"] and again["f000"]["cached"]
    assert "  Cache hits: 100/101 (skipping clang invocation)" in logged


def test_a_tree_that_all_hits_the_cache_runs_no_compiler(tmp_path, monkeypatch, logged):
    root = pseudocode(tmp_path)
    compiler = Compiler()
    monkeypatch.setattr(fc.subprocess, "run", compiler)
    fc.compile_all_functions(str(root / "src"), str(root / "include"))
    compiler.compiled.clear()
    logged.clear()
    results = fc.compile_all_functions(str(root / "src"), str(root / "include"))
    assert compiler.compiled == [] and all(r["cached"] for r in results.values())
    assert not [line for line in logged if line.startswith("  Updating")]


def test_without_a_pch_nothing_is_reused_or_stored(tmp_path, monkeypatch):
    # A PCH run fills the cache; the run without a PCH may neither use nor keep it
    root = pseudocode(tmp_path)
    monkeypatch.setattr(fc.subprocess, "run", Compiler())
    fc.compile_all_functions(str(root / "src"), str(root / "include"))
    compiler = Compiler(pch = False)
    monkeypatch.setattr(fc.subprocess, "run", compiler)
    fc.compile_all_functions(str(root / "src"), str(root / "include"))
    assert sorted(compiler.compiled) == ["bad.cpp", "f000.cpp", "nested.cpp"]
    assert json.loads((root / ".compile_cache.json").read_text()) == {}


@pytest.mark.parametrize("compiler", [Compiler(version_code = 1), FileNotFoundError])
def test_no_working_compiler_compiles_nothing(tmp_path, monkeypatch, logged, compiler):
    root = pseudocode(tmp_path)

    def run(cmd, **kwargs):
        if compiler is FileNotFoundError:
            raise FileNotFoundError(cmd[0])
        return compiler(cmd, **kwargs)
    monkeypatch.setattr(fc.subprocess, "run", run)
    assert fc.compile_all_functions(str(root / "src"), str(root / "include"), compiler = "cc") == {}
    assert logged == ["Compiler 'cc' not available, skipping function compilation"]


def test_a_tree_with_no_functions_compiles_nothing(tmp_path):
    (tmp_path / "src").mkdir()
    assert fc.compile_all_functions(str(tmp_path / "src"), str(tmp_path)) == {}


def test_a_status_that_cannot_be_written_is_logged(tmp_path, logged):
    (tmp_path / "f.json").write_text("{")
    assert not fc.update_function_json_with_compilation(str(tmp_path / "f.json"), {})
    assert logged[0].startswith(f"Failed to update {tmp_path / 'f.json'} with compilation status:")


# --- after the export -----------------------------------------------------------------------------

def test_the_export_step_needs_src_and_include(tmp_path, logged):
    assert fc.compile_functions_after_export(str(tmp_path)) is None
    (tmp_path / "src").mkdir()
    assert fc.compile_functions_after_export(str(tmp_path)) is None
    assert [line.split(":")[0] for line in logged] == ["Function compilation"] * 2


def test_the_export_step_with_nothing_compiled_reports_none(tmp_path, monkeypatch, logged):
    (tmp_path / "src").mkdir()
    (tmp_path / "include").mkdir()
    monkeypatch.setattr(fc, "compile_all_functions", lambda *args, **kwargs: {})
    assert fc.compile_functions_after_export(str(tmp_path)) is None and logged[-1] == "No functions compiled"


@pytest.mark.parametrize("reports", [None, "reports"])
def test_the_export_step_summarises_and_draws_the_reports(tmp_path, monkeypatch, reports):
    root = pseudocode(tmp_path)
    monkeypatch.setattr(fc.subprocess, "run", Compiler(failing = {"bad.cpp"}))
    drawn = []
    monkeypatch.setattr(fc, "create_compilation_overview_svg", lambda results, path: drawn.append(path))
    monkeypatch.setattr(fc, "create_all_files_compilation_svg", lambda results, src, path: drawn.append(path))
    reports_dir = str(tmp_path / reports) if reports else None
    summary = fc.compile_functions_after_export(str(root), reports_dir = reports_dir)
    assert summary == {"total": 3, "successful": 2, "failed": 1, "success_rate": 200 / 3}
    out = reports_dir or str(root)
    assert drawn == [os.path.join(out, "compilation_progress.svg"), os.path.join(out, "all_files_compilation.svg")]
