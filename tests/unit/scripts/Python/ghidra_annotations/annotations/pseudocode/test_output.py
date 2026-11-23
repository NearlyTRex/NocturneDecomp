# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import output as out

ASM = "\n".join([
    "// 00401000: PUSH EBP",
    "//   Label: core_a.cpp_run_FUN_00401000",
    "// 00401001: CALL 0x00401100  ; int f(void)",
    "//   XREF to: 00401100 (UNCONDITIONAL_CALL)",
    "//00401006: RET",
    "",
    "  stray text",
])


def test_the_lean_cpp_names_the_function_above_its_code():
    text = out.create_lean_cpp_content("f\n", "00401000", "[[00401000, 00401010]]", None, "int f(void)",
                                       "int f(void)\n{\n  return 0;\n}")
    assert text.split("\n")[:7] == [
        "// Name: f\\n", "// Address: 00401000", "// Address Range: [[00401000, 00401010]]",
        "// Convention: unknown", "// Signature: int f(void)", "", '#include "nocturne.h"']
    assert text.endswith("return 0;\n}")


def test_the_asm_lists_the_frame_references_and_each_instruction_with_its_address():
    frame = {"variables": [{"type": "int", "name": "a", "offset": 4, "size": 4},
                           {"type": "char[8]", "name": "buf", "offset": -8, "size": 8}, {}]}
    xrefs = [{"name": f"caller{i}", "from_addr": f"0040{i:04x}"} for i in range(11)]
    globals_ = [{"type": "int", "name": "g_A", "value": "0x1"}] + [{"name": f"g_{i}"} for i in range(15)]
    calls = [{"name": f"call{i}"} for i in range(16)]
    text = out.create_asm_content("int f(int a)", ASM, frame, xrefs, globals_, calls)
    lines = text.split("\n")
    assert lines[3] == "; int f(int a)"
    assert "; int              Stack[0x4]:4   a" in lines and "; char[8]          Stack[-0x8]:8  buf" in lines
    assert "; undefined4       Stack[0x0]:4   unknown" in lines
    assert "; XREF[11]:" in lines and ";   ... and 1 more" in lines and ";   caller9 at 00400009" in lines
    assert ";   int g_A = 0x1" in lines and ";   undefined g_0" in lines and lines.count(";   ... and 1 more") == 3
    body = lines[lines.index("section .text") + 2:]
    assert body == [
        "    PUSH EBP                            ; 00401000",
        "        ;   Label: core_a.cpp_run_FUN_00401000",
        "    CALL 0x00401100                     ; 00401001 | int f(void)",
        "        ;   XREF to: 00401100 (UNCONDITIONAL_CALL)",
        "    RET                                 ; 00401006",
        "",
        "        ; stray text"]


def test_short_reference_lists_are_given_whole():
    text = out.create_asm_content("int f(void)", "", None, [{"name": "a", "from_addr": "00401000"}],
                                  [{"type": "int", "name": "g_A"}], [{"name": "c"}])
    assert "; XREF[1]:\n;   a at 00401000\n;\n; Referenced Globals:\n;   int g_A\n;\n" in text
    assert "; Called Functions:\n;   c\n;\n" in text and "more" not in text


@pytest.mark.parametrize("frame", [None, {"variables": [{"type": "int", "name": "a", "offset": 4}]},
                                   {"variables": [{"type": "int", "name": "l", "offset": -4}]}])
def test_the_asm_header_only_lists_what_the_function_has(frame):
    text = out.create_asm_content(None, "", frame, [], [], [])
    assert "; unknown" in text and "XREF[" not in text and "Referenced Globals" not in text
    assert ("; Parameters:" in text) == bool(frame and frame["variables"][0]["offset"] >= 0)
    assert ("; Local Variables:" in text) == bool(frame and frame["variables"][0]["offset"] < 0)


def test_the_json_keeps_each_optional_section_only_when_it_has_content():
    full = out.create_function_json(
        "f", "00401000", "[[00401000, 00401010] [00401020, 00401030]]", None, "int f(void)",
        [{"name": "x"}], [{"name": "g"}], [{"name": "c"}], {"variables": []}, [], {"lines": 1},
        existing_replacements = [1], stack_patterns = [2], param_estimates = {"n": 1}, vtable_info = {"v": 1},
        existing_pcode_overrides = {"p": 1}, resolved_suspects = [3], is_ebp_frame = True,
        existing_proto_overrides = [4], existing_decompiler_fixes = [5], compilation_status = {"ok": True},
        chunked = True, compile_source = "keep.cpp")
    assert full["function"] == {"name": "f", "address": "00401000", "convention": "unknown",
                                "address_range": [["00401000", "00401010"], ["00401020", "00401030"]],
                                "signature": "int f(void)", "is_ebp_frame": True}
    assert [full[k] for k in ("replacements", "stack_patterns", "param_estimates", "vtable_info", "pcode_overrides",
                              "resolved_suspects", "proto_overrides", "decompiler_fixes", "compilation_status",
                              "chunked", "compile_source")] == [
        [1], [2], {"n": 1}, {"v": 1}, {"p": 1}, [3], [4], [5], {"ok": True}, True, "keep.cpp"]
    bare = out.create_function_json("f", "00401000", "", "__cdecl", "int f(void)", None, None, None, None, [], {})
    assert bare["function"]["address_range"] == [["00401000", "00401000"]]
    assert sorted(bare) == ["complexity", "cross_references", "function", "function_calls", "globals",
                            "stack_frame", "suspects"]
    assert bare["cross_references"] == bare["globals"] == bare["function_calls"] == []


def contents(source, **kwargs):
    return out.generate_function_file_contents(
        "/out", source, "f", "00401000", "[[00401000, 00401010]]", "__cdecl", "int f(void)",
        "int f(void)\n{\n}", ASM, [], [], [], None, [], {}, **kwargs)


@pytest.mark.parametrize("source, base, ext", [("a.cpp", "/out/a", "cpp"), ("a.c", "/out/a", "c"),
                                               ("a", "/out/a", "c")])
def test_each_output_file_is_named_from_the_source_file(source, base, ext):
    result = contents(source, mmx_decompiled_code = "m", byval_decompiled_code = "b", chunked_decompiled_code = "k")
    assert result["cpp_path"] == f"/out/{source}"
    assert [result[k] for k in ("asm_path", "json_path", "pcode_path")] == [f"{base}.asm", f"{base}.json",
                                                                          f"{base}.pcode"]
    assert [result[k] for k in ("mmx_cpp_path", "byval_cpp_path", "chunked_cpp_path")] == [
        f"{base}.mmx.{ext}", f"{base}.byval.{ext}", f"{base}.chunked.{ext}"]
    assert [result[k].split("\n")[7] for k in ("mmx_cpp_content", "byval_cpp_content", "chunked_cpp_content")] == [
        "m", "b", "k"]


def test_only_the_files_with_content_are_made(monkeypatch):
    result = contents("a.cpp")
    assert result["cpp_content"].endswith("int f(void)\n{\n}\n") and result["asm_content"].endswith("stray text\n")
    assert result["mmx_cpp_path"] is result["mmx_cpp_content"] is result["pcode_content"] is None
    assert result["chunked_cpp_path"] is None and "pcode_summary" not in json.loads(result["json_content"])


@pytest.mark.parametrize("suspects, badspacebase", [([{"pattern": "BADSPACEBASE write"}], True),
                                                    ([{"pattern": "other"}, {}], False), ([], False)])
def test_pcode_adds_its_summary_and_file(monkeypatch, suspects, badspacebase):
    calls = []
    monkeypatch.setattr(out, "create_pcode_summary", lambda data: {"ops": len(data)})
    monkeypatch.setattr(out, "generate_pcode_file_content", lambda *args: calls.append(args) or "PCODE")
    result = out.generate_function_file_contents(
        "/out", "a.cpp", "f", "00401000", "[]", "__cdecl", "int f(void)", "", "", [], [], [], None, suspects, {},
        pcode_data = [1, 2])
    assert json.loads(result["json_content"])["pcode_summary"] == {"ops": 2}
    assert result["pcode_content"] == "PCODE\n" and calls == [("f", "00401000", "int f(void)", [1, 2], badspacebase)]


def test_a_file_that_cannot_be_made_is_logged_and_the_rest_still_are(monkeypatch):
    logged = []
    monkeypatch.setattr(out, "log_info", logged.append)
    monkeypatch.setattr(out, "generate_pcode_file_content", lambda *args: 1 / 0)
    result = out.generate_function_file_contents(
        "/out", "a.cpp", "f", "00401000", "[]", "__cdecl", "int f(void)", "", "",
        [], [], [], {"variables": [{"offset": None}]}, [], {"bad": object()}, pcode_data = [1])
    assert result["cpp_content"] and result["asm_content"] is result["json_content"] is result["pcode_content"] is None
    assert [m.split(":")[0] for m in logged] == [
        "Failed to generate .asm content for a.asm", "Failed to generate .json content for a.json",
        "Failed to generate .pcode content for a.pcode"]


def test_a_batch_writes_each_file_and_logs_the_ones_that_fail(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(out, "log_info", logged.append)
    monkeypatch.chdir(tmp_path)
    blocked = tmp_path / "blocked"
    blocked.write_text("")
    files = [(str(blocked / "c.txt"), "C"), (str(tmp_path / "d" / "a.txt"), "A"), (str(tmp_path / "d" / "b.txt"), "B"),
             ("top.txt", "T"), (None, "x"), ("empty.txt", "")]
    # A path under a file fails on its own; the rest of the batch is still written
    assert out.write_batched_files(files) == 3
    assert (tmp_path / "d" / "b.txt").read_text() == "B" and (tmp_path / "top.txt").read_text() == "T"
    assert len(logged) == 1 and logged[0].startswith(f"Batch write failed for {blocked / 'c.txt'}: ")
    assert not (tmp_path / "empty.txt").exists()


def test_a_batch_write_that_fails_is_logged(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(out, "log_info", logged.append)
    monkeypatch.setattr(out, "write_if_changed", lambda path, content: 1 / 0)
    assert out.write_batched_files([(str(tmp_path / "a.txt"), "A")]) == 0
    assert logged == [f"Batch write failed for {tmp_path / 'a.txt'}: division by zero"]


def test_each_unit_gets_a_prototype_header_sorted_by_address(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(out, "log_info", logged.append)
    groups = {"engine/2d.h": [
        {"name": "engine_2d.c_plotLine_FUN_00401200", "address": "00401200",
         "signature": "void __cdecl engine_2d.c_plotLine_FUN_00401200(int x)"},
        {"name": "engine_2d.c_plotPixel_FUN_00401140", "address": "00401140",
         "signature": "void __cdecl engine_2d.c_plotPixel_FUN_00401140(int x)"}]}
    out.export_function_prototypes(None, str(tmp_path), groups)
    text = (tmp_path / "prototypes" / "engine" / "2d.h").read_text()
    assert "// Function prototypes for engine/2d.cpp" in text
    assert text.index("void __cdecl plotPixel(int x);") < text.index("void __cdecl plotLine(int x);")
    assert logged == ["Created prototype header: engine/2d.h with 2 functions", "Created 1 function prototype headers"]
    out.export_function_prototypes(None, str(tmp_path), groups)
    assert logged[2:] == ["Created 1 function prototype headers"]          # unchanged: written once


def test_a_prototype_header_that_cannot_be_written_is_logged(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(out, "log_info", logged.append)
    monkeypatch.setattr(out, "write_if_changed", lambda path, content: 1 / 0)
    out.export_function_prototypes(None, str(tmp_path), {"a.h": []})
    assert logged == ["Failed to write prototype header a.h: division by zero", "Created 0 function prototype headers"]
