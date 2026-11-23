# Imports
import json
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
import find_code_caves as fcc
from extract_line_pins import parse_pe

CODE = section_va(0x400000, 0)
DATA = section_va(0x400000, 1)
DATA_RANGES = [(CODE, CODE + 0x200), (DATA, DATA + 0x10)]


# --- bytes ----------------------------------------------------------------------------------------

def test_bytes_are_classified_by_padding_text_and_pointers():
    info = fcc.classify_bytes(b"\x00\x90\xcc\xcc", CODE, DATA_RANGES)
    assert info == {"padding_count": 4, "non_padding_count": 0, "padding_ratio": 1.0, "has_ascii": False,
                    "has_pointers": False, "dominant_byte": 0xcc}
    assert fcc.classify_bytes(b"ab\x01abcd", CODE, DATA_RANGES)["has_ascii"]       # the run restarts
    assert not fcc.classify_bytes(b"abc\x01abc", CODE, DATA_RANGES)["has_ascii"]
    pointer = struct.pack("<I", DATA + 4)
    assert fcc.classify_bytes(pointer, CODE, DATA_RANGES)["has_pointers"]
    # read at 4-aligned addresses: from a cave at CODE + 1 the dword starts 3 bytes in
    assert fcc.classify_bytes(b"\x00" * 3 + pointer, CODE + 1, DATA_RANGES)["has_pointers"]
    assert not fcc.classify_bytes(pointer + b"\x00" * 3, CODE + 1, DATA_RANGES)["has_pointers"]
    assert not fcc.classify_bytes(struct.pack("<I", 0x10), CODE, DATA_RANGES)["has_pointers"]


def test_code_sections_and_pointer_ranges_come_from_the_sections():
    data = build_sectioned_pe([("AUTO", b"\x90" * 8, SECTION_EXECUTE, 0), ("DGROUP", b"\x00" * 4, 0),
                               (".bss", b"", 0, 0x1000)])
    _, sections = parse_pe(data)
    assert [s.name for s in fcc.code_sections(sections)] == ["AUTO"]
    assert fcc.pointer_ranges_of(sections) == [(CODE, CODE + 8), (DATA, DATA + 4)]


# --- the annotations ------------------------------------------------------------------------------

def write_json(path, doc):
    path.parent.mkdir(parents = True, exist_ok = True)
    path.write_text(json.dumps(doc))


def test_switch_tables_give_their_data_ranges(tmp_path):
    assert fcc.load_switch_table_ranges(str(tmp_path)) == []
    write_json(tmp_path / "switch_tables" / "switch_tables.json", {"switch_tables": [
        {"assembly": "JMP dword ptr [EAX*0x4 + 0x40ea00]", "target_count": 3},
        {"assembly": "JMP dword ptr [ECX*0x4 + 0x401100]", "target_count": 1},
        {"assembly": "JMP EAX", "target_count": 2},
        {"assembly": "JMP dword ptr [EAX*0x4 + 0x40ff00]", "target_count": 0}]})
    assert fcc.load_switch_table_ranges(str(tmp_path)) == [(0x401100, 0x401104), (0x40ea00, 0x40ea0c)]


def test_cross_references_give_the_addresses_they_land_on(tmp_path):
    write_json(tmp_path / "cross_references" / "cross_references_bucket_0.json", [
        {"to": "00401000"}, {"to": "Stack[0]"}, {"to": "Stack[-0x1c]"}, {"to": "register:00000004"}, {}])
    write_json(tmp_path / "cross_references" / "cross_references_bucket_1.json", [{"to": "00400ff0"}, {"to": "00401000"}])
    assert fcc.load_xref_targets(str(tmp_path)) == [0x400ff0, 0x401000]


def test_a_range_overlaps_only_what_it_shares_bytes_with():
    ranges = [(0x10, 0x14), (0x20, 0x24)]
    assert fcc.overlaps_range(0x12, 0x13, ranges) and fcc.overlaps_range(0x18, 0x21, ranges)
    assert not fcc.overlaps_range(0x14, 0x20, ranges) and not fcc.overlaps_range(0x0, 0x10, ranges)


def body(*blocks):
    return [{"start": f"{lo:08x}", "end": f"{hi:08x}", "size": hi - lo + 1} for lo, hi in blocks]


def test_function_blocks_are_loaded_with_each_functions_extent(tmp_path):
    write_json(tmp_path / "functions" / "functions_bucket_0.json", [
        {"name": "FUN_b", "body": body((0x30, 0x3f), (0x10, 0x17))},
        {"name": "FUN_a", "body": body((0x00, 0x0f))}])
    ranges, info = fcc.load_function_ranges(str(tmp_path))
    assert ranges == [(0x00, 0x0f, "FUN_a"), (0x10, 0x17, "FUN_b"), (0x30, 0x3f, "FUN_b")]
    assert info["FUN_b"] == {"start": 0x10, "end": 0x3f, "size": 0x18}


def test_caves_are_the_gaps_between_blocks_inside_a_code_section():
    image = build_sectioned_pe([("AUTO", b"\x90" * 0x40, SECTION_EXECUTE, 0)])
    _, sections = parse_pe(image)
    ranges = [(CODE, CODE + 0xf, "a"), (CODE + 0x10, CODE + 0x1f, "b"), (CODE + 0x28, CODE + 0x3f, "c"),
              (0x3fc0000, 0x3fc000f, "far"), (0x3fc0020, 0x3fc002f, "farther")]
    everywhere = fcc.find_caves(ranges)
    assert [(c["start"] - CODE, c["size"]) for c in everywhere][:1] == [(0x20, 8)]
    assert len(everywhere) == 3                     # with the gap out to the heap block, and inside it
    assert fcc.find_caves(ranges, fcc.code_sections(sections)) == [
        {"start": CODE + 0x20, "end": CODE + 0x28, "size": 8, "after_func": "b", "before_func": "c",
         "raw_offset": 0x200 + 0x20}]


# --- validation -----------------------------------------------------------------------------------

def cave(start, data_or_size):
    size = data_or_size if isinstance(data_or_size, int) else len(data_or_size)
    return {"start": start, "end": start + size, "size": size, "after_func": "FUN_a", "before_func": "FUN_b",
            "raw_offset": 0}


def validated(data, start = CODE, switches = (), xrefs = ()):
    return fcc.validate_cave(cave(start, data), data, DATA_RANGES, list(switches), sorted(xrefs))


def test_without_the_binary_a_cave_is_judged_by_tables_and_references_alone():
    assert fcc.validate_cave(cave(CODE, 4), None, [], [], [CODE - 1, CODE + 4]) == {
        "status": "unknown", "reasons": ["no binary provided for validation"], "byte_info": None}
    assert fcc.validate_cave(cave(CODE, 4), None, [], [(CODE, CODE + 4)], [])["reasons"] == [
        "overlaps switch table"]


@pytest.mark.parametrize("data, status, reasons", [
    (b"\xcc" * 4, "clean", ["all padding (0xcc)"]),
    (b"\x00" * 9 + b"\x01", "likely_clean", ["90% padding"]),
    (struct.pack("<I", DATA) + b"\x01", "data", ["contains pointer-like values"]),
    (b"\x01text", "data", ["contains ASCII strings"]),
    (struct.pack("<I", DATA) + b"text", "data", ["contains pointer-like values", "contains ASCII strings"]),
    (b"\x01\x02\x00\x00", "suspicious", ["only 50% padding (2/4 non-padding bytes)"]),
])
def test_the_bytes_decide_a_cave_nothing_else_has(data, status, reasons):
    result = validated(data)
    assert (result["status"], result["reasons"]) == (status, reasons) and result["byte_info"] is not None


@pytest.mark.parametrize("data, reasons", [
    (b"\xcc" * 4, []),
    (b"\x00" * 9 + b"\x01", []),
    (struct.pack("<I", DATA) + b"text", ["contains pointer-like values", "contains ASCII strings"]),
    (b"\x01\x02\x00\x00", []),
])
def test_a_switch_table_or_reference_outranks_the_bytes(data, reasons):
    result = validated(data, switches = [(CODE, CODE + 1)], xrefs = [CODE + 1])
    assert result["status"] == "referenced"
    assert result["reasons"] == ["overlaps switch table", "1 xref target(s) inside", *reasons]


# --- the pass-by-value report ---------------------------------------------------------------------

PASS_BY_VALUE = """\
====
PASS-BY-VALUE STRUCT ARGUMENTS REPORT

engine_3d.c_clipLine_FUN_00401000
  Params: arg1=?struct_96 (0x60) arg2=SBox (0x90)
  Call sites (2):
    core_a.cpp_draw_FUN_00401100 @ 0x00401148   1x SRenderVertex
    core_a.cpp_draw_FUN_00401100 @ 0x00401158   1x SRenderVertex
  some other line

--------------------------------------------------------------------------------
crt_stdio.c_fwrite_FUN_00401200
  Params: arg1=?struct_28 (0x1c)
core_b.cpp_save_FUN_00401300
  Params: arg1=?struct_8 (0x8)

====
CALLER FRAME SIZE FIXES
====

    core_a.cpp_draw_FUN_00401100  current: 0x10  required: 0x80  (+0x70 for by-value args)
    not a fix
"""


def test_the_pass_by_value_report_gives_targets_and_frame_fixes(tmp_path):
    assert fcc.parse_pass_by_value_report(str(tmp_path)) == ([], [])
    (tmp_path / "pass_by_value_report.txt").write_text(PASS_BY_VALUE)
    targets, fixes = fcc.parse_pass_by_value_report(str(tmp_path))
    assert [t["name"] for t in targets] == ["engine_3d.c_clipLine_FUN_00401000", "crt_stdio.c_fwrite_FUN_00401200",
                                            "core_b.cpp_save_FUN_00401300"]
    assert targets[0]["params"] == [{"type": "?struct_96", "size": 0x60}, {"type": "SBox", "size": 0x90}]
    assert targets[0]["total_by_value_bytes"] == 0xf0
    assert targets[0]["call_sites"][1] == {"caller": "core_a.cpp_draw_FUN_00401100", "addr": 0x401158, "count": 1,
                                           "type": "SRenderVertex"}
    assert fixes == [{"name": "core_a.cpp_draw_FUN_00401100", "current_frame": 0x10, "required_frame": 0x80,
                      "extra_bytes": 0x70}]
    for text in ("crt_x.c_last_FUN_00401400\n", "crt_x.c_last_FUN_00401400\n---\n"):
        (tmp_path / "pass_by_value_report.txt").write_text(text)
        assert [t["name"] for t in fcc.parse_pass_by_value_report(str(tmp_path))[0]] == ["crt_x.c_last_FUN_00401400"]


def test_a_thunk_grows_with_each_param_and_each_far_offset():
    assert fcc.estimate_thunk_size({"params": []}) == 16
    assert fcc.estimate_thunk_size({"params": [{"size": 8}]}) == 32
    # 0x70 + 0x10 + 8 > 127 needs a 4-byte displacement; 0x90 also needs a 32-bit SUB
    assert fcc.estimate_thunk_size({"params": [{"size": 0x60}, {"size": 0x10}]}) == 16 + 32
    assert fcc.estimate_thunk_size({"params": [{"size": 0x70}, {"size": 0x10}]}) == 16 + 32 + 1
    assert fcc.estimate_thunk_size({"params": [{"size": 0x90}]}) == 16 + 16 + 1 + 3


# --- the report -----------------------------------------------------------------------------------

def judged(start, size, status, reasons = ()):
    made = cave(start, size)
    made["validation"] = {"status": status, "reasons": list(reasons)}
    return made


def report_world():
    caves = [judged(0x401010, 8, "clean", ["all padding (0x00)"]),
             judged(0x401050, 40, "likely_clean", ["95% padding"]),
             judged(0x480000, 2000, "clean"),
             judged(0x401090, 20, "suspicious", ["only 10% padding"]),
             judged(0x4010c0, 4, "data"),
             judged(0x401400, 16, "referenced", ["1 xref target(s) inside"]),
             judged(0x401500, 8, "unknown")]
    func_info = {"engine_3d.c_clipLine_FUN_00401000": {"start": 0x401000, "end": 0x40100f},
                 "core_a.cpp_ok_FUN_00401040": {"start": 0x401040, "end": 0x40104f},
                 "core_a.cpp_tight_FUN_00401008": {"start": 0x401000, "end": 0x40100f},
                 "core_a.cpp_bad_FUN_00401080": {"start": 0x401080, "end": 0x40108f},
                 "core_a.cpp_open_FUN_00401600": {"start": 0x401600, "end": 0x40160f},
                 "crt_far.c_far_FUN_00600000": {"start": 0x600000, "end": 0x60000f}}
    targets = [{"name": "engine_3d.c_clipLine_FUN_00401000", "params": [{"type": "SBox", "size": 8}],
                "total_by_value_bytes": 8,
                "call_sites": [{"caller": "core_a.cpp_draw_FUN_00401100"}, {"caller": "core_a.cpp_draw_FUN_00401100"},
                               {"caller": "core_b.cpp_fill_FUN_00401200"}]},
               {"name": "crt_far.c_far_FUN_00600000", "params": [{"type": "SBig", "size": 0x400}],
                "total_by_value_bytes": 0x400, "call_sites": []},
               {"name": "crt_gone.c_gone_FUN_00700000", "params": [], "total_by_value_bytes": 0,
                "call_sites": []}]
    fixes = [{"name": "core_a.cpp_ok_FUN_00401040", "extra_bytes": 0x20},
             {"name": "core_a.cpp_tight_FUN_00401008", "extra_bytes": 0x20},
             {"name": "core_a.cpp_bad_FUN_00401080", "extra_bytes": 0x10},
             {"name": "core_a.cpp_open_FUN_00401600", "extra_bytes": 0x8},
             {"name": "core_a.cpp_gone_FUN_00409000", "extra_bytes": 0x4}]
    return caves, targets, fixes, func_info


def test_the_report_summarizes_lists_and_weighs_each_thunk_and_frame_fix():
    caves, targets, fixes, func_info = report_world()
    text = "\n".join(fcc.build_report(caves, targets, fixes, func_info))
    assert "Total caves:              7 (2,096 bytes)" in text and "Validated usable:         3 (2,048 bytes)" in text
    assert "  LIKELY OK        1 caves        40 bytes" in text and "  ?                1 caves         8 bytes" in text
    assert "  1-15 bytes (too small for thunks)                 1 caves         8 bytes" in text
    assert "  1024+ bytes                                       1 caves     2,000 bytes" in text
    assert "16-31 bytes" not in text
    usable = text.split("LARGEST USABLE CAVES (top 30)")[1].split("LARGEST REJECTED")[0]
    assert usable.index("2,000 bytes") < usable.index("40 bytes")
    assert "      40 bytes  0x00401050 - 0x00401078  [LIKELY OK] 95% padding" in usable
    rejected = text.split("LARGEST REJECTED CAVES (top 30, >= 16 bytes)")[1].split("PASS-BY-VALUE")[0]
    assert "[SUSPECT] only 10% padding" in rejected and "[DATA]" not in rejected     # 4 bytes is too small
    clip = text.split("TARGET: engine_3d.c_clipLine_FUN_00401000")[1].split("TARGET:")[0]
    assert "  By-value params:    SBox(8)" in clip and "  Thunk size needed:  ~32 bytes" in clip
    assert "  NEARBY usable caves (within 64KB, size >= 32):\n    0x00401050    40 bytes  (dist: 80)" in clip
    assert "  Callers affected (2 unique):\n    core_a.cpp_draw_FUN_00401100  (2 call sites)" in clip
    far = text.split("TARGET: crt_far.c_far_FUN_00600000")[1].split("TARGET:")[0]
    assert "  No nearby usable caves, best candidates anywhere:\n    0x00480000  2000 bytes" in far
    assert "Callers affected" not in far
    gone = text.split("TARGET: crt_gone.c_gone_FUN_00700000")[1].split("====")[0]
    assert "  Function address:   0x00000000" in gone
    assert "  NO suitable usable caves found (need 16 bytes)" not in gone          # 16 fits 40 and 2000
    frames = text.split("CALLER FRAME EXPANSION FEASIBILITY")[1]
    assert "core_a.cpp_ok_FUN_00401040" in frames and "+0x20 bytes  OK (trailing cave: 40 bytes, LIKELY OK)" in frames
    assert "+0x20 bytes  TIGHT (trailing cave: 8 bytes, need 32)" in frames
    assert "+0x10 bytes  REJECTED cave (only 10% padding)" in frames
    assert "+0x8 bytes  NO trailing cave" in frames and "gone" not in frames


def test_a_report_with_nothing_rejected_or_to_weigh_is_short():
    caves = [judged(0x401010, 4, "clean"), judged(0x401020, 40, "suspicious")]
    text = "\n".join(fcc.build_report(caves[:1], [], [], {}))
    assert "LARGEST REJECTED" not in text and "PASS-BY-VALUE" not in text and "CALLER FRAME" not in text
    lines = fcc.build_report(caves, [{"name": "x_FUN_1", "params": [{"type": "S", "size": 0x80}],
                                      "total_by_value_bytes": 0x80, "call_sites": []}], [], {})
    assert "  NO suitable usable caves found (need 36 bytes)" in lines


# --- main -----------------------------------------------------------------------------------------

def annotations(tmp_path):
    root = tmp_path / "nocedit.exe"
    write_json(root / "functions" / "functions_bucket_0.json", [
        {"name": "engine_3d.c_clipLine_FUN_00401000", "body": body((CODE, CODE + 0xf))},
        {"name": "core_a.cpp_draw_FUN_00401100", "body": body((CODE + 0x20, CODE + 0x2f))},
        {"name": "core_a.cpp_far_FUN_00401200", "body": body((CODE + 0x40, CODE + 0x4f))},
        {"name": "FUN_03fc0000", "body": body((0x3fc0000, 0x3fc000f))}])
    write_json(root / "switch_tables" / "switch_tables.json", {"switch_tables": []})
    write_json(root / "cross_references" / "cross_references_bucket_0.json", [{"to": f"{CODE + 0x30:08x}"}])
    (root / "reports").mkdir()
    (root / "reports" / "pass_by_value_report.txt").write_text(
        "engine_3d.c_clipLine_FUN_00401000\n  Params: arg1=SBox (0x8)\n"
        "    core_a.cpp_draw_FUN_00401100 @ 0x00401128   1x SBox\n")
    code = b"\x90" * 0x10 + b"\x00" * 0x10 + b"\x90" * 0x10 + b"\x01\x02" * 8 + b"\x90" * 0x10
    exe = tmp_path / "nocedit.exe.bin"
    exe.write_bytes(build_sectioned_pe([("AUTO", code, SECTION_EXECUTE, 0)]))
    return root, exe


def test_main_finds_validates_and_writes_the_report(tmp_path, capsys, monkeypatch):
    root, exe = annotations(tmp_path)
    monkeypatch.setattr(fcc, "find_program_exe", lambda program: str(exe) if program == "nocedit.exe" else None)
    fcc.main([str(root), "--min-size", "2"])
    out = capsys.readouterr().out
    assert f"Binary: {exe}" in out and "  Image base: 0x00400000, 1 sections, 1 executable" in out
    assert "  2 caves found (32 bytes total)" in out      # the heap block's distance is no cave
    assert "  CLEAN        1\n  HAS XREFS    1" in out
    assert "  1 pass-by-value target functions" in out and "Usable natural caves: 1 (16 bytes)" in out
    assert "  engine_3d.c_clipLine_FUN_00401000                    1 call sites  need  32 bytes  0 usable caves" in out
    text = (root / "reports" / "natural_caves_analysis.txt").read_text()
    assert "  1-15 bytes" not in text and "[HAS XREFS] 1 xref target(s) inside" in text


def test_main_without_a_binary_validates_nothing_and_finds_the_default_program(tmp_path, capsys, monkeypatch):
    root, _ = annotations(tmp_path)
    (root / "reports" / "pass_by_value_report.txt").unlink()

    def missing(program):
        raise FileNotFoundError(program)
    monkeypatch.setattr(fcc, "find_program_exe", missing)
    scripts = tmp_path / "scripts" / "Python"
    monkeypatch.setattr(fcc, "__file__", str(scripts / "find_code_caves.py"))
    os.makedirs(tmp_path / "annotations")
    os.rename(root, tmp_path / "annotations" / "nocedit.exe")
    fcc.main([])
    out = capsys.readouterr().out
    assert "WARNING: No binary found." in out and "  3 caves found" in out and "  ?            2" in out
    assert "Pass-by-value thunk summary" not in out
    assert (tmp_path / "annotations" / "nocedit.exe" / "reports" / "natural_caves_analysis.txt").exists()


def test_main_refuses_a_binary_that_is_not_there(tmp_path, capsys):
    with pytest.raises(SystemExit) as stop:
        fcc.main([str(tmp_path), "--binary", str(tmp_path / "none.exe")])
    assert stop.value.code == 2 and "no such binary" in capsys.readouterr().err


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["find_code_caves.py", "--help"])
    with pytest.raises(SystemExit):
        runpy.run_path(os.path.join(SCRIPTS_DIR, "find_code_caves.py"), run_name = "__main__")
