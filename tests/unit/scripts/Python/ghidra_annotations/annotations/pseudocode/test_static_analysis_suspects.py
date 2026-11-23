# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import static_analysis_suspects as sas
from repo_paths import SCRIPTS_DIR

MODULE_PATH = os.path.join(SCRIPTS_DIR, "ghidra_annotations", "annotations", "pseudocode",
                           "static_analysis_suspects.py")


def diag(check_id = "", check_name = "", message = "m", line = 2):
    return {"check_id": check_id, "check_name": check_name, "message": message, "line": line}


def function_files(folder, diagnostics, suspects = None, source = "int a;\n  x = y;\n", asm = None,
                   name = "f_FUN_00401000", analyzed = "f_FUN_00401000.cpp"):
    """A function's .json (holding the diagnostics per static_analysis key), and its .cpp and .asm."""
    folder.mkdir(parents = True, exist_ok = True)
    data = {"static_analysis": {"analyzed_file": analyzed, **{k: {"diagnostics": v} for k, v in diagnostics.items()}}}
    if suspects is not None:
        data["suspects"] = suspects
    (folder / f"{name}.json").write_text(json.dumps(data), encoding = "utf-8")
    if source is not None:
        (folder / f"{name}.cpp").write_text(source, encoding = "utf-8")
    if asm is not None:
        (folder / f"{name}.asm").write_text(asm, encoding = "utf-8")
    return folder / f"{name}.json"


def load(path):
    return json.loads(path.read_text(encoding = "utf-8"))


@pytest.mark.parametrize("key, tool", [("cppcheck_quick", "cppcheck"), ("clang_tidy_deep", "clang_tidy"),
                                       ("other", "other")])
def test_the_tool_is_the_key_without_its_mode(key, tool):
    assert sas._tool_from_key(key) == tool


def test_checks_come_from_the_id_each_alias_and_a_stranded_tag():
    found = sas._candidate_checks(diag("uninitvar", "a, b,a", "text [b,c-d]"))
    assert found == ["uninitvar", "a", "b", "c-d"]
    assert sas._candidate_checks({"check_name": None, "message": None}) == []


def test_a_whitelisted_finding_becomes_a_suspect_with_its_source_line():
    lines = ["int a;", "  x = y;"]
    suspect = sas.synthesize_suspect("clang_tidy", diag(check_name = "x,bugprone-integer-division",
                                                        message = "integer division [bugprone-integer-division]"),
                                     lines)
    assert suspect == {"type": "static_integer_division", "severity": "mild", "line": 2, "text": "x = y;",
                       "description": "integer division",
                       "match": "Clang-Tidy: integer division in floating-point context (possible mistyped field)"}
    assert sas.synthesize_suspect("cppcheck", diag("unknownCheck"), lines) is None


def test_a_cppcheck_message_ending_in_an_index_keeps_it():
    suspect = sas.synthesize_suspect("cppcheck", diag("arrayIndexOutOfBounds", message = "accessed at arr[i]",
                                                      line = None), [])
    assert (suspect["description"], suspect["line"], suspect["text"]) == ("accessed at arr[i]", 0, "")


@pytest.mark.parametrize("line_no, text", [(0, ""), (1, "int a;"), (3, ""), (9, "")])
def test_a_source_line_out_of_range_is_empty(line_no, text):
    assert sas._line_text(["int a;", "", ""], line_no) == text


def test_the_source_is_read_beside_the_json_or_not_at_all(tmp_path):
    json_path = function_files(tmp_path, {})
    cpp = sas._resolve_cpp_path(str(json_path), "f_FUN_00401000.cpp")
    assert cpp == str(tmp_path / "f_FUN_00401000.cpp") and sas._read_source(cpp) == ["int a;", "  x = y;", ""]
    assert sas._resolve_cpp_path(str(json_path), "gone.cpp") is None
    assert sas._resolve_cpp_path(str(json_path), "") is None
    assert sas._read_source(None) == [] and sas._read_source(str(tmp_path)) == []      # a directory


@pytest.mark.parametrize("name, asm", [
    ("f.keep.cpp", "f.asm"), ("f.keep.c", "f.asm"), ("f.cpp", "f.asm"), ("f.c", "f.asm"), ("f.txt", "f.txt.asm"),
])
def test_the_asm_sits_beside_the_source_under_its_base_name(tmp_path, name, asm):
    (tmp_path / asm).write_text("", encoding = "utf-8")
    assert sas._asm_path_for(str(tmp_path / name)) == str(tmp_path / asm)


def test_no_source_or_no_asm_has_no_asm_path(tmp_path):
    assert sas._asm_path_for(None) is None and sas._asm_path_for(str(tmp_path / "f.cpp")) is None


def asm(*insns):
    """`MNEMONIC operands ; address` lines from (address, text) pairs, some with `|` annotations."""
    return "".join(f"    {text:<36}; {addr:08x}{note}\n" for addr, text, note in insns)


FLOAT_LOOP = asm((0x100, "FLD dword ptr [EAX]", ""), (0x104, "FCOMP dword ptr [0x600000]", " | g_Limit"),
                 (0x10a, "FNSTSW AX", ""), (0x10c, "JNZ 0x00000100", ""))


@pytest.mark.parametrize("text, genuine", [
    (FLOAT_LOOP, True),                                                       # the annotated FCOMP counts
    (asm((0x100, "FCOMP ST1", ""), (0x10c, "JNZ 0x00000200", "")), False),   # a forward jump is no loop
    (asm((0x100, "INC EAX", ""), (0x104, "CMP EAX,0x4", ""), (0x10c, "JL 0x00000100", "")), False),
    (asm((0x100, "FCOMP ST1", ""), (0x10c, "LOOP 0x00000100", "")), True),
    (asm((0x100, "FCOMP ST1", ""), (0x10c, "JMP EAX", "")), False),          # no target
    (asm((0x90, "FCOMP ST1", ""), (0x100, "NOP", ""), (0x10c, "JMP 0x00000100", "")), False),   # outside it
    ("        ;   XREF to: 00000100 (CONDITIONAL_JUMP)  ; LAB_00000100\n", False),
])
def test_a_float_loop_is_genuine_when_an_fpu_compare_sits_in_a_back_edge(tmp_path, text, genuine):
    path = tmp_path / "f.asm"
    path.write_text(text, encoding = "utf-8")
    assert sas._float_loop_is_genuine(str(path)) is genuine


def test_an_unreadable_asm_is_not_a_genuine_float_loop(tmp_path):
    assert sas._float_loop_is_genuine(None) is False and sas._float_loop_is_genuine(str(tmp_path)) is False


def test_static_suspects_are_replaced_and_the_others_kept(tmp_path):
    other = {"type": "raw_offset", "line": 1}
    json_path = function_files(tmp_path, {"cppcheck_quick": [diag("uninitvar"), "junk", diag("noise")],
                                          "clang_tidy_quick": "not a list", "extra": 5},
                               suspects = [other, {"type": "static_stale"}, "junk", {"type": 3}])
    assert sas.apply_to_json(str(json_path)) == (1, True)
    suspects = load(json_path)["suspects"]
    assert suspects[:3] == [other, "junk", {"type": 3}] and suspects[3]["type"] == "static_uninitvar"
    assert suspects[3]["text"] == "x = y;"
    assert sas.apply_to_json(str(json_path)) == (1, False)      # nothing changed: not written again


def test_a_json_without_suspects_gets_none_and_one_that_lost_them_keeps_an_empty_list(tmp_path):
    plain = function_files(tmp_path / "a", {"cppcheck_quick": [diag("noise")]})
    assert sas.apply_to_json(str(plain)) == (0, False) and "suspects" not in load(plain)
    stale = function_files(tmp_path / "b", {}, suspects = [{"type": "static_uninitvar"}])
    assert sas.apply_to_json(str(stale)) == (0, True) and load(stale)["suspects"] == []
    odd = function_files(tmp_path / "c", {"cppcheck_quick": [diag("memleak")]}, suspects = {"not": "a list"})
    assert sas.apply_to_json(str(odd)) == (1, True) and load(odd)["suspects"][0]["type"] == "static_memleak"


def test_the_fast_sqrt_helpers_bit_casts_are_not_promoted(tmp_path):
    cast = {"cppcheck_quick": [diag("invalidPointerCast")]}
    helper = function_files(tmp_path / "a", cast, source = "int b = *(int *)&x + g_FastSqrtMagic;\n")
    assert sas.apply_to_json(str(helper)) == (0, False)
    other = function_files(tmp_path / "b", cast)
    assert sas.apply_to_json(str(other)) == (1, True)


def test_a_float_loop_finding_is_promoted_only_when_the_loop_is_not_float_driven(tmp_path):
    flp = {"clang_tidy_quick": [diag(check_name = "cert-flp30-c"), diag(check_name = "cert-flp30-c", line = 1)]}
    genuine = function_files(tmp_path / "a", flp, asm = FLOAT_LOOP)
    assert sas.apply_to_json(str(genuine)) == (0, False)
    mistyped = function_files(tmp_path / "b", flp, asm = asm((0x100, "INC EAX", ""), (0x10c, "JL 0x00000100", "")))
    assert sas.apply_to_json(str(mistyped)) == (2, True)
    assert [s["type"] for s in load(mistyped)["suspects"]] == ["static_float_loop_induction"] * 2


@pytest.mark.parametrize("content", ["{not json", None])
def test_an_unreadable_json_is_an_error(tmp_path, content):
    path = tmp_path / "f.json"
    if content is None:
        path.mkdir()
    else:
        path.write_text(content, encoding = "utf-8")
    assert sas.apply_to_json(str(path)) == (-1, False)


def test_a_json_that_cannot_be_written_is_an_error(tmp_path, monkeypatch):
    json_path = function_files(tmp_path, {"cppcheck_quick": [diag("memleak")]})
    real_open = open

    def read_only(path, *args, **kwargs):
        if "w" in (args[0] if args else kwargs.get("mode", "r")):
            raise PermissionError(path)
        return real_open(path, *args, **kwargs)
    monkeypatch.setattr("builtins.open", read_only)
    assert sas.apply_to_json(str(json_path)) == (-1, False)


def test_every_json_under_src_is_visited_except_skipped_dirs(tmp_path):
    src = tmp_path / "src"
    function_files(src / "core", {"cppcheck_quick": [diag("memleak"), diag("nullPointer")]})
    function_files(src / "core", {}, name = "g_FUN_00402000")
    function_files(src / "globals", {"cppcheck_quick": [diag("memleak")]})
    (src / "core" / "bad.json").write_text("{", encoding = "utf-8")
    (src / "core" / "notes.txt").write_text("", encoding = "utf-8")
    assert sas.apply_to_all_json(str(src), skip_dirs = ["globals"]) == {
        "total_files": 3, "files_with_static_suspects": 1, "files_rewritten": 1,
        "total_static_suspects": 2, "errors": 1}


def test_the_export_pass_logs_its_counts(tmp_path, monkeypatch):
    logs = []
    monkeypatch.setattr(sas, "log_info", logs.append)
    assert sas.run_after_static_analysis(str(tmp_path)) is None
    assert logs == [f"Static-analysis suspects: src directory not found at {tmp_path / 'src'}"]
    function_files(tmp_path / "src", {"cppcheck_quick": [diag("memleak")]})
    (tmp_path / "src" / "bad.json").write_text("{", encoding = "utf-8")
    assert sas.run_after_static_analysis(str(tmp_path))["errors"] == 1
    assert logs[-1] == ("Static-analysis suspects: 2 files scanned, 1 with static suspects (1 total), "
                        "1 JSONs rewritten, 1 errors")
    (tmp_path / "src" / "bad.json").unlink()
    sas.run_after_static_analysis(str(tmp_path))
    assert logs[-1] == "Static-analysis suspects: 1 files scanned, 1 with static suspects (1 total), 0 JSONs rewritten"


def test_the_cli_runs_the_pass_and_fails_without_a_src_dir(tmp_path, monkeypatch, capsys):
    function_files(tmp_path / "src" / "core", {"cppcheck_quick": [diag("memleak")]})
    function_files(tmp_path / "src" / "crt", {"cppcheck_quick": [diag("memleak")]})
    # Standalone the package's logger may be unavailable; it prints instead
    monkeypatch.setitem(sys.modules, "ghidra_annotations.util.log", None)
    monkeypatch.setattr(sys, "argv", ["static_analysis_suspects.py", "--pseudocode-dir", str(tmp_path)])
    runpy.run_path(MODULE_PATH, run_name = "__main__")
    assert capsys.readouterr().out.splitlines()[-1] == (
        "Static-analysis suspects: 1 files scanned, 1 with static suspects (1 total), 1 JSONs rewritten")
    monkeypatch.setattr(sys, "argv", ["static_analysis_suspects.py", "--pseudocode-dir", str(tmp_path / "none")])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(MODULE_PATH, run_name = "__main__")
    assert exit_info.value.code == 1
