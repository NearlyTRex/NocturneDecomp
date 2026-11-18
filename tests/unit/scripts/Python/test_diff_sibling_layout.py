# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import diff_sibling_layout as dsl

BASE = 0x401000

# Machine code, one instruction per entry, as capstone prints it
A_GET = b"\x8b\x41\x04"                    # mov eax, dword ptr [ecx + 4]
A_GONE = b"\xc7\x41\x08\x00\x00\x00\x00"   # mov dword ptr [ecx + 8], 0
PUSH = b"\x53"                             # push ebx
B_OLD = b"\x8b\x51\x0c"                    # mov edx, dword ptr [ecx + 0xc]
B_NEW = b"\x8b\x51\x08"                    # mov edx, dword ptr [ecx + 8]
VCALL = b"\xff\x50\x10"                    # call dword ptr [eax + 0x10]
STACK = b"\x89\x44\x24\x04"                # mov dword ptr [esp + 4], eax
FAR = b"\x8b\x41\x40"                      # mov eax, dword ptr [ecx + 0x40]: past the class
FAR_B = b"\x8b\x41\x3c"
RET = b"\xc3"
ARR = b"\x8b\x41\x14"                      # mov eax, dword ptr [ecx + 0x14]
TO_CALL = b"\xff\x50\x04"                  # call dword ptr [eax + 4]
TO_REG = b"\x89\xd8"                       # mov eax, ebx


class CodeImage:
    """The by_addr / va2off / data an Image gives disassemble(), from code laid out at BASE."""

    def __init__(self, functions):
        self.data = b""
        self.by_addr = {}
        for addr, chunks in functions.items():
            body = []
            for code in chunks:
                start = BASE + len(self.data)
                self.data += code
                body.append({"start": f"{start:x}", "end": f"{start + len(code) - 1:x}"})
            self.by_addr[addr] = {"body": body}

    def va2off(self, va):
        return va - BASE if va < BASE + 0x1000 else None


def image_pair():
    a = CodeImage({
        "a1": [A_GET + A_GONE + PUSH + B_OLD + VCALL + STACK + FAR + RET],
        "a2": [ARR + PUSH + ARR + PUSH + PUSH + PUSH + PUSH + RET],
        "a3": [A_GONE + RET],
        "a4": [PUSH],
        "a5": [PUSH + RET],
    })
    b = CodeImage({
        "b1": [A_GET + PUSH + B_NEW + VCALL + STACK + FAR_B + RET],
        "b2": [TO_CALL + PUSH + TO_REG + PUSH + PUSH + PUSH + PUSH + RET],
        # nothing lines up, so a3's dropped store does not count as a removal
        "b3": [TO_REG + TO_REG + TO_REG],
        "b4": [PUSH],
    })
    b.by_addr["b5"] = {"body": [{"start": "500000", "end": "500001"}]}       # outside the image
    return a, b


MAPPING = {"from": "a.exe", "to": "b.exe", "pairs": [
    {"a": "a1", "b": "b1", "name": "core_box.cpp_CBox_init_FUN_00401000"},
    {"a": "a2", "b": "b2", "name": "core_box.cpp_CBox_fill_FUN_00401100"},
    {"a": "a3", "b": "b3", "name": "core_box.cpp_CBox_wipe_FUN_00401200"},
    {"a": "a4", "b": "b4", "name": "core_box.cpp_CBox_idle_FUN_00401300"},     # touches no field
    {"a": "a5", "b": "b5", "name": "core_box.cpp_CBox_far_FUN_00401400"},      # b5 does not decode
    {"a": "zz", "b": "b1", "name": "core_box.cpp_CBox_lost_FUN_00401500"},     # a has no such function
    {"a": "a1", "b": "b1", "name": "core_lid.cpp_CLid_init_FUN_00402000"},
    {"a": "a1", "b": "b1", "name": "freeFunction_FUN_00403000"},
]}


def layouts():
    return {
        "CBox": {"len": 0x20, "fields": [
            {"name": "vtable", "type": "void *", "offset": 0, "len": 4},
            {"name": "a", "type": "short", "offset": 4, "len": 2},
            {"name": "a_pad", "type": "short", "offset": 6, "len": 2},
            {"name": "gone", "type": "int", "offset": 8, "len": 4},
            {"name": "b", "type": "int", "offset": 0xc, "len": 4},
            {"name": "inner", "type": "SInner", "offset": 0x10, "len": 8},
            {"name": "tail", "type": "char[8]", "offset": 0x18, "len": 8},
        ]},
        "SInner": {"len": 8, "fields": [{"name": "lo", "type": "int", "offset": 0, "len": 4},
                                        {"name": "hi", "type": "int", "offset": 4, "len": 0}]},
        "SEmpty": {"len": 4},
    }


def test_disassemble_reads_each_body_range_or_gives_up():
    a, b = image_pair()
    assert dsl.disassemble(a, "a3") == ["mov dword ptr [ecx + 8], 0", "ret "]
    assert dsl.disassemble(a, "missing") is None
    assert dsl.disassemble(b, "b5") is None


def test_alignment_maps_equal_and_one_to_one_runs_and_drops_the_rest():
    assert dsl.align(["a", "x", "b", "c"], ["a", "b", "d"]) == {0: "a", 1: None, 2: "b", 3: "d"}
    assert dsl.align(["a", "x", "y"], ["a", "z"]) == {0: "a", 1: None, 2: None}


def test_a_field_path_descends_into_nested_structs():
    lays = layouts()
    assert dsl.field_path(lays, "CBox", 6) == "a_pad : short @0x6"
    assert dsl.field_path(lays, "CBox", 0x14) == "inner.hi : int @0x4"
    assert dsl.field_path(lays, "CBox", 0x16) == "inner : SInner @0x10"       # no field of SInner there
    assert dsl.field_path(lays, "CBox", 0x18) == "tail : char[8] @0x18"
    assert dsl.field_path(lays, "SInner", 9) is None
    assert dsl.field_path(lays, "CNone", 0) is None
    deep = {f"S{i}": {"fields": [{"name": f"f{i}", "type": f"S{i + 1}", "len": 4}]} for i in range(6)}
    assert dsl.field_path(deep, "S0", 0) == "f0.f1.f2.f3.f4 : S5 @0x0"


def test_collect_counts_where_each_field_went(capsys):
    a, b = image_pair()
    seen = dsl.collect(MAPPING, a, b, "CBox", 0x20, show_pairs = True)
    # a stayed at 4, gone has no counterpart, b moved to 8 (capstone prints 8 without 0x);
    # in a2 the array read became a call and then a register move
    assert {off: dict(c) for off, c in seen.items()} == {4: {4: 1}, 8: {None: 1}, 0xc: {8: 1}}
    out = capsys.readouterr().out
    assert "core_box.cpp_CBox_init_FUN_00401000" in out and "8/7 insns" in out
    assert "CBox_fill" not in out and "CBox_wipe" not in out


def test_report_lists_moves_removals_and_the_window(capsys):
    seen = {4: {4: 3}, 6: {6: 1}, 8: {None: 2, 8: 1}, 0xc: {8: 4}}
    seen = {k: dsl.Counter(v) for k, v in seen.items()}
    window = dsl.report("CBox", 0x20, 4, seen, layouts())
    out = capsys.readouterr().out
    assert "CBox  nocedit 0x20 (32)  ->  nocturne 28   must lose 4 bytes" in out
    assert "  0x6        0x6          +0        1/1      a_pad : short @0x6\n" in out
    assert "  0x8        -            REMOVED   2/3      gone : int @0x8\n" in out
    assert "  0xc        0x8          -4        4/4      b : int @0xc\n" in out
    assert "      0x8       gone : int @0x8   (2 sighting(s))" in out
    assert "removal window: after 0x6 (last unshifted) and at/before 0xc (first shifted)" in out
    assert window == {"last_stable": 6, "first_moved": 0xc, "max_shifted": 0xc}


def test_report_without_a_stable_field_names_the_first_shift(capsys):
    seen = {0xc: dsl.Counter({8: 1}), 0x30: dsl.Counter({0x30: 1})}
    window = dsl.report("CBox", 0x40, 4, seen, {})
    out = capsys.readouterr().out
    assert "first shifted offset: 0xc" in out and "?" in out
    assert window["last_stable"] is None


def test_report_with_nothing_moved_or_nothing_seen(capsys):
    assert dsl.report("CBox", 0x20, 0, {4: dsl.Counter({4: 1})}, layouts()) == {
        "last_stable": 4, "first_moved": None, "max_shifted": None}
    assert "removal window" not in capsys.readouterr().out
    assert dsl.report("CBox", 0x20, 4, {}, layouts()) is None
    assert "not measurable this way" in capsys.readouterr().out


def test_propose_finds_the_edits_that_account_for_the_delta():
    lays = {
        "CBig": {"len": 0x40, "fields": [
            {"name": "head", "type": "int", "offset": 0, "len": 4},
            {"name": "slots", "type": "int[8]", "offset": 4, "len": 32},
            {"name": "none", "type": "int[0]", "offset": 0x24, "len": 0},
            {"name": "cells", "type": "SCell[2]", "offset": 0x24, "len": 16},
            {"name": "t1", "type": "int", "offset": 0x34, "len": 4},
            {"name": "t2", "type": "int", "offset": 0x38, "len": 4},
            {"name": "t3", "type": "int", "offset": 0x3c, "len": 4},
        ]},
        "SCell": {"len": 8, "fields": [{"name": "id", "type": "int", "offset": 0, "len": 4},
                                       {"name": "vals", "type": "char[4]", "offset": 4, "len": 4},
                                       {"name": "nil", "type": "char[0]", "offset": 8, "len": 0}]},
    }
    ideas = dsl.propose("CBig", lays, 8, {})
    assert "truncate from 0x38: drop t2, t3  (new size 0x38)" in ideas
    assert "shrink slots : int[8] -> [6]  (2 x 4 bytes)" in ideas
    assert "shrink cells : SCell[2] -> [1]  (1 x 8 bytes)" in ideas
    assert "remove fields at 0x34: t1, t2" in ideas
    # the array inside each element shrinks by 2 bytes a cell
    assert "shrink cells.vals : char[4] -> [2]  (2 x 1 bytes x 2 SCell)" in dsl.propose("CBig", lays, 4, {})
    # a field seen shifting past the cut rules the truncation out; the window keeps runs inside it
    ideas = dsl.propose("CBig", lays, 8, {"last_stable": 0x30, "first_moved": 0x3c, "max_shifted": 0x3c})
    assert not any(i.startswith("truncate") for i in ideas)
    assert "remove fields at 0x34: t1, t2" in ideas and not any("slots" in i for i in ideas)
    assert dsl.propose("CBig", lays, 0, {}) == []
    assert dsl.propose("CNone", lays, 4, {}) == []


def test_propose_lists_at_most_four_truncated_fields():
    fields = [{"name": f"f{i}", "type": "int", "offset": 4 * i, "len": 4} for i in range(6)]
    assert dsl.propose("C", {"C": {"len": 24, "fields": fields}}, 20, {})[0] == \
        "truncate from 0x4: drop f1, f2, f3, f4 ...  (new size 0x4)"


@pytest.fixture(name = "programs")
def fixture_programs(monkeypatch, tmp_path):
    a, b = image_pair()
    lays = layouts()
    lays["CLid"] = {"len": 0x10, "fields": [{"name": "x", "type": "int", "offset": 4, "len": 4}]}
    lays["CBoxHolder"] = {"len": 0x30, "fields": [{"name": "box", "type": "CBox", "offset": 0, "len": 0x20}]}
    sizes = {"nocedit.exe": {"CBox": 0x20, "Lid": 0x10, "CBoxHolder": 0x30, "CGhost": 8},
             "nocturne.exe": {"CBox": 0x1c, "Lid": 0x10, "CBoxHolder": 0x2c, "CGhost": 4, "COnlyB": 4}}
    monkeypatch.setattr(dsl, "load_type_info_sizes", sizes.get)
    monkeypatch.setattr(dsl, "load_layouts", lambda program: (lays, {}))
    monkeypatch.setattr(dsl.sm, "Image", {"a.exe": a, "b.exe": b}.get)
    path = tmp_path / "mapping.json"
    path.write_text(dsl.json.dumps(MAPPING))
    return str(path)


def test_main_analyses_one_class(programs, capsys):
    assert dsl.main([programs, "--class", "CBox", "--show-pairs"]) == 0
    out = capsys.readouterr().out
    assert "CBox  nocedit 0x20 (32)  ->  nocturne 28   must lose 4 bytes" in out
    assert "  0x8        -            REMOVED   1/1      gone : int @0x8\n" in out
    assert ("candidate edits that account for exactly 4 bytes:\n      remove fields at 0x4: a, a_pad\n"
            "      remove field at 0x8: gone\n") in out


def test_main_analyses_every_root_and_skips_one_without_a_layout(programs, capsys):
    assert dsl.main([programs, "--roots"]) == 0
    out = capsys.readouterr().out
    # CBoxHolder's 4 bytes are all CBox's, so it is no root; CGhost changed but has no layout
    assert "CBox  nocedit" in out and "CBoxHolder  nocedit" not in out
    assert "CGhost: no layout in nocedit.exe" in out


def test_main_with_no_edits_to_offer(programs, capsys):
    assert dsl.main([programs, "--class", "CLid"]) == 0
    assert "candidate edits" not in capsys.readouterr().out


def test_main_needs_a_class_or_roots(programs, capsys):
    with pytest.raises(SystemExit):
        dsl.main([programs])
    assert "give --class NAME or --roots" in capsys.readouterr().err


def test_the_script_runs_as_main(programs, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["diff_sibling_layout.py", programs])
    with pytest.raises(SystemExit) as exc:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "diff_sibling_layout.py"), run_name = "__main__")
    assert exc.value.code == 2
