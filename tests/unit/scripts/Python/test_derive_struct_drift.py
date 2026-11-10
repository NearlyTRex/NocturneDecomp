# Imports
import json
import os
import runpy
import struct
import sys
from collections import Counter

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import code_at as at, function, install_programs, write_json
import derive_struct_drift as dsd
import sibling_match


@pytest.mark.parametrize("op_str, displacements", [
    ("eax, dword ptr [ecx + 0x10]", [0x10]), ("eax, dword ptr [ecx - 0x10]", [-0x10]),
    ("eax, dword ptr [eax + ecx*4 + 0x10]", [0x10]), ("eax, dword ptr [0x4a1234]", [0x4a1234]),
    ("eax, dword ptr [esp + 0x144]", []), ("eax, dword ptr [ebp - 8]", []), ("eax, 5", [])])
def test_displacements_are_signed_and_skip_scales_and_the_stack(op_str, displacements):
    assert dsd._displacements(op_str) == displacements


def mov_abs(address):
    return b"\xa1" + struct.pack("<I", address)


# One instruction per case: a moved field, a second moved field, a vtable call, a stack slot, an
# unchanged operand, a changed immediate, a changed immediate beside an unmoved field, a changed
# mnemonic, a changed register, a negative and an out-of-range displacement, and a relocated address.
SOURCE_BODY = (b"\x8b\x41\x08" b"\x8b\x41\x40" b"\xff\x52\x20" b"\x8b\x44\x24\x04" b"\x8b\x41\x08" b"\x6a\x05"
               b"\xc7\x41\x08\x05\x00\x00\x00" b"\x40" b"\x8b\x41\x08" b"\x8b\x41\xf0"
               b"\x8b\x81\x00\x00\x30\x00") + mov_abs(at(0x10)) + b"\xc3"
TARGET_BODY = (b"\x8b\x41\x0c" b"\x8b\x41\x48" b"\xff\x52\x24" b"\x8b\x44\x24\x08" b"\x8b\x41\x08" b"\x6a\x06"
               b"\xc7\x41\x08\x06\x00\x00\x00" b"\x48" b"\x8b\x42\x08" b"\x8b\x41\xec"
               b"\x8b\x81\x04\x00\x30\x00") + mov_abs(at(0x90)) + b"\xc3"


def program(bodies):
    code = bytearray(b"\xcc" * 0x200)
    records = []
    for offset, (name, body) in bodies.items():
        code[offset:offset + len(body)] = body
        records.append(function(at(offset), name, size = len(body)))
    records.append(function(0x00300000, "core_a.cpp_CFoo_far_FUN_00300000"))
    return build_sectioned_pe([(".text", bytes(code), SECTION_EXECUTE)]), records


@pytest.fixture(name = "mapping")
def fixture_mapping(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {
        "a.exe": program({0x00: ("core_a.cpp_CFoo_f_FUN_00401000", SOURCE_BODY),
                          0x40: ("core_a.cpp_CFoo_g_FUN_00401040", b"\x90\xc3"),
                          0x50: ("core_a.cpp_helper_FUN_00401050", b"\xc3")}),
        "b.exe": program({0x80: ("FUN_00401080", TARGET_BODY), 0xc0: ("FUN_004010c0", b"\x90\x90\xc3")})})
    pairs = [{"a": f"{at(a):08x}", "b": f"{at(b):08x}", "name": n} for a, b, n in (
        (0x00, 0x80, "core_a.cpp_CFoo_f_FUN_00401000"), (0x40, 0xc0, "core_a.cpp_CFoo_g_FUN_00401040"),
        (0x50, 0xc0, "core_a.cpp_helper_FUN_00401050"), (0x00, 0x1f0, "core_a.cpp_CBar_h_FUN_00401000"))]
    pairs.append({"a": "00300000", "b": f"{at(0x80):08x}", "name": "core_a.cpp_CFoo_far_FUN_00300000"})
    return {"from": "a.exe", "to": "b.exe", "pairs": pairs}


def test_matched_code_yields_field_and_vtable_sightings_and_nothing_else(mapping):
    a, b = sibling_match.Image("a.exe"), sibling_match.Image("b.exe")
    obs, vobs, methods, compared = dsd.observe(a, b, mapping["pairs"])
    assert obs == {"CFoo": Counter({(8, 12): 1, (0x40, 0x48): 1})}
    assert vobs == {"CFoo": Counter({(0x20, 0x24): 1})}
    assert methods == Counter({"CFoo": 3, "CBar": 1}) and compared == Counter({"CFoo": 1})
    obs, _, _, _ = dsd.observe(a, b, mapping["pairs"], include_unshifted = True)
    assert obs["CFoo"][(8, 8)] == 2


def test_sightings_fold_into_constant_shift_segments():
    segs, purity = dsd.segment(Counter({(8, 12): 3, (16, 20): 2, (0x40, 0x48): 2, (0x40, 0x40): 1, (0x50, 0x60): 1}))
    assert [(s["from_lo"], s["from_hi"], s["delta"], s["support"]) for s in segs] == [
        (8, 16, 4, 5), (0x40, 0x40, 8, 3), (0x50, 0x50, 16, 1)]
    assert segs[1]["boundary_before"] == [16, 0x40] and segs[0]["boundary_before"] is None
    assert purity == pytest.approx(1 - 1 / 9)
    assert dsd.segment(Counter({(8, 12): 1, (8, 16): 1}), min_support = 3) == ([], 0.0)


def run(tmp_path, mapping, *args):
    return dsd.main([write_json(tmp_path / "mapping.json", mapping), *args])


def test_the_report_names_drifting_and_stable_classes(mapping, tmp_path, capsys):
    out, dump = tmp_path / "drift.json", tmp_path / "obs.json"
    assert run(tmp_path, mapping, "--out", str(out), "--dump-observations", str(dump), "--min-observations", "2",
               "-v") == 0
    printed = capsys.readouterr().out
    assert "1 classes had comparable matched methods" in printed
    assert "  CFoo                     2     1  1.00  +0x4 (1 obs), +0x8 (1 obs)" in printed
    assert "        0x000008..0x000008 +0x4 x1" in printed
    doc = json.loads(out.read_text())
    assert doc["drifting"] == ["CFoo"] and doc["weak"] == [] and doc["stable"] == []
    assert json.loads(dump.read_text())["vtable_observations"] == {"CFoo": {"32,36": 1}}


def test_a_class_with_too_few_sightings_is_weak(mapping, tmp_path, capsys):
    run(tmp_path, mapping, "--out", str(tmp_path / "drift.json"))
    assert json.loads((tmp_path / "drift.json").read_text())["weak"] == ["CFoo"]
    assert "drift-free classes (0)" in capsys.readouterr().out
    run(tmp_path, mapping, "--min-observations", "1")
    printed = capsys.readouterr().out
    assert "  CFoo  " in printed and "0x000008..0x000008" not in printed


def test_a_class_whose_code_did_not_move_is_stable(mapping, tmp_path, capsys):
    mapping["pairs"] = [{"a": f"{at(0x40):08x}", "b": f"{at(0x40):08x}", "name": "core_a.cpp_CSame_f_FUN_00401040"}]
    mapping["to"] = "a.exe"
    run(tmp_path, mapping)
    assert "1 show NO field-offset drift" in capsys.readouterr().out


def test_one_class_is_detailed_segment_by_segment(mapping, tmp_path, capsys):
    assert run(tmp_path, mapping, "--class", "CFoo") == 0
    printed = capsys.readouterr().out
    assert "CFoo: 2 observations across 1/3 comparable methods, purity 1.00" in printed
    assert "between 0x8 and 0x40" in printed
    assert run(tmp_path, mapping, "--class", "CNone") == 0
    assert "CNone: no drift observed (0 comparable methods)" in capsys.readouterr().out


def test_ebp_is_a_field_base_where_the_caller_says_so():
    assert dsd._displacements("eax, dword ptr [ebp + 0x10]", ("esp",)) == [0x10]
    assert dsd._displacements("eax, dword ptr [esp + 0x10]", ("esp",)) == []


# Typed mode, one instruction each: a moved field; one off ebp; one past CFoo's 0x20 bytes; one whose
# recorded offset is not its displacement; an unmoved field; a virtual call; a changed base register;
# then an allocation (push 0xc, an unlike load in between, the call) and an array stride (imul 0xc).
TYPED_SOURCE = (b"\x8b\x41\x08" b"\x8b\x45\x10" b"\x8b\x41\x40" b"\x8b\x41\x04" b"\x8b\x41\x18" b"\xff\x51\x08"
                b"\x8b\x41\x1c" b"\x6a\x0c" b"\x8b\x41\x04" b"\xe8\x00\x00\x00\x00" b"\x6b\xc0\x0c" b"\xc3")
TYPED_TARGET = (b"\x8b\x41\x0c" b"\x8b\x45\x14" b"\x8b\x41\x48" b"\x8b\x41\x04" b"\x8b\x41\x18" b"\xff\x51\x0c"
                b"\x8b\x42\x1c" b"\x6a\x10" b"\x8b\x42\x04" b"\xe8\x00\x00\x00\x00" b"\x6b\xc0\x10" b"\xc3")
SHORT_SOURCE, SHORT_TARGET = b"\x8b\x41\x08\xc3", b"\x90\x8b\x41\x0c\xc3"


def hexes(*offsets):
    return [f"{at(0x100 + o):08x}" for o in offsets]


@pytest.fixture(name = "typed")
def fixture_typed(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {
        "a.exe": program({0x100: ("core_a.cpp_load_FUN_00401100", TYPED_SOURCE),
                          0x140: ("core_a.cpp_short_FUN_00401140", SHORT_SOURCE)}),
        "b.exe": program({0x180: ("FUN_00401180", TYPED_TARGET), 0x1c0: ("FUN_004011c0", SHORT_TARGET)})})
    pairs = [{"a": f"{at(a):08x}", "b": f"{at(b):08x}", "name": n} for a, b, n in (
        (0x100, 0x180, "core_a.cpp_load_FUN_00401100"), (0x140, 0x1c0, "core_a.cpp_short_FUN_00401140"),
        (0x100, 0x1f0, "core_a.cpp_gone_FUN_00401100"))]
    accesses = dict(zip(hexes(0, 3, 6, 9, 12, 15, 18, 0x40), (
        [["CFoo", 8]], [["CFoo", 0x10]], [["CFoo", 0x40]], [["CFoo", 8]], [["CFoo", 0x18]], [["CFoo", 8]],
        [["CFoo", 0x1c]], [["CFoo", 8]])))
    uses = dict(zip(hexes(0, 26, 31), ([["SBar", 99, "stride"]], [["SBar", 12, "alloc"]], [["SBar", 12, "stride"]])))
    path = write_json(tmp_path / "typed.json", {"accesses": accesses, "sizes": {"CFoo": 0x20}, "size_uses": uses})
    return {"mapping": {"from": "a.exe", "to": "b.exe", "pairs": pairs}, "path": path}


def test_typed_accesses_load_by_address(typed):
    accesses, sizes, uses = dsd.load_typed(typed["path"])
    assert accesses[at(0x100)] == [("CFoo", 8)] and sizes == {"CFoo": 0x20}
    assert uses[at(0x100 + 26)] == [("SBar", 12, "alloc")]


def test_unequal_streams_pair_only_when_asked():
    a = [(1, "mov", "eax, dword ptr [ecx + 8]"), (2, "ret", "")]
    b = [(5, "nop", ""), (6, "mov", "eax, dword ptr [ecx + 0xc]"), (7, "ret", "")]
    assert dsd.aligned(a, b[1:]) == list(zip(a, b[1:]))
    assert dsd.aligned(a, b) == []
    assert dsd.aligned(a, b, align = True) == list(zip(a, b[1:]))


def test_a_typed_sighting_is_credited_to_its_struct_at_its_recorded_offset(typed):
    a, b = sibling_match.Image("a.exe"), sibling_match.Image("b.exe")
    accesses, sizes, _ = dsd.load_typed(typed["path"])
    obs, vobs, pairs_seen, compared = dsd.observe_typed(a, b, typed["mapping"]["pairs"], accesses, sizes)
    assert obs == {"CFoo": Counter({(8, 12): 1, (0x10, 0x14): 1})} and vobs == {}
    assert pairs_seen == compared == Counter({"CFoo": 1})
    obs, _, pairs_seen, _ = dsd.observe_typed(a, b, typed["mapping"]["pairs"], accesses, sizes,
                                              include_unshifted = True, align = True)
    assert obs["CFoo"] == Counter({(8, 12): 2, (0x10, 0x14): 1, (0x18, 0x18): 1})
    assert pairs_seen == Counter({"CFoo": 2})


def test_allocations_and_strides_read_the_siblings_size(typed):
    a, b = sibling_match.Image("a.exe"), sibling_match.Image("b.exe")
    _, _, uses = dsd.load_typed(typed["path"])
    assert dsd.observe_sizes(a, b, typed["mapping"]["pairs"], uses) == {"SBar": Counter({16: 2})}
    assert dsd._paired_numbers("eax, eax, 0xc", "eax, eax, 0x10", 12) == [16]


def test_the_typed_report_carries_the_measured_sizes(typed, tmp_path, capsys):
    out = tmp_path / "drift.json"
    assert run(tmp_path, typed["mapping"], "--typed-accesses", typed["path"], "--align", "--out", str(out)) == 0
    doc = json.loads(out.read_text())
    assert doc["sizes"] == {"SBar": {"16": 2}} and doc["drift"]["CFoo"]["observations"] == 3
    assert "wrote" in capsys.readouterr().out


def test_the_typed_report_adds_the_element_sizes_nesting_finds(typed, tmp_path, monkeypatch):
    monkeypatch.setattr(dsd, "nest", lambda obs, members: (obs, {"SBar": Counter({16: 1}),
                                                                  "SHand": Counter({120: 7})}))
    out = tmp_path / "drift.json"
    run(tmp_path, typed["mapping"], "--typed-accesses", typed["path"], "--out", str(out))
    assert json.loads(out.read_text())["sizes"] == {"SBar": {"16": 3}, "SHand": {"120": 7}}


def test_by_value_members_are_read_from_the_layouts(monkeypatch, tmp_path):
    folder = tmp_path / "ref.exe" / "data_types"
    folder.mkdir(parents = True)
    write_json(folder / "data_types.json", {"structs": [
        {"name": "SHand", "len": 8, "fields": []},
        {"name": "CChar", "len": 40, "fields": [
            {"name": "base", "type": "CBase", "offset": 0, "len": 4},
            {"name": "hands", "type": "SHand[2]", "offset": 8, "len": 16},
            {"name": "held", "type": "SHand *", "offset": 24, "len": 4},
            {"name": "stub", "type": "SStub", "offset": 28, "len": 4}]},
        {"name": "CBase", "len": 4, "fields": []}, {"name": "SStub", "len": 1, "fields": []},
        {"name": "CNone", "len": 4, "fields": [{"name": "x", "type": "int", "offset": 0, "len": 4}]}]})
    monkeypatch.setattr(sibling_match, "ANNOTATIONS", str(tmp_path))
    assert dsd.by_value_members("ref.exe") == {"CChar": [(0, "CBase", 1, 4), (8, "SHand", 2, 8)]}
    assert dsd.by_value_members("none.exe") == {}


def test_a_containers_sightings_pass_down_to_its_members():
    members = {"CChar": [(0, "CBase", 1, 8), (16, "SHand", 2, 8)], "CBase": [(4, "SPoint", 1, 4)]}
    obs = {"CChar": Counter({
        (4, 4): 3,                 # base.point, unmoved: two rounds down to SPoint
        (16, 24): 3, (20, 28): 3,  # hands[0] moved 8 with the class
        (24, 36): 2,               # hands[1].+0: element 1 starts 12 after element 0 -> SHand is 12
        (40, 52): 3})}             # past the members: stays the class's own
    total, sizes = dsd.nest(obs, members)
    assert total["CBase"] == Counter({(4, 4): 3}) and total["SPoint"] == Counter({(0, 0): 3})
    assert total["SHand"] == Counter({(0, 0): 3, (4, 4): 3})
    assert sizes == {"SHand": Counter({12: 2})}
    # One round reaches only the first level down
    total, _ = dsd.nest(obs, members, rounds = 1)
    assert "CBase" in total and "SPoint" not in total
    # A member whose container's shift there is unknown learns nothing
    total, sizes = dsd.nest({"CChar": Counter({(20, 28): 1})}, members)
    assert "SHand" not in total and sizes == {}
    # Nor does an element past the first while the member's own shift is unknown, or does not divide
    total, sizes = dsd.nest({"CChar": Counter({(16, 24): 3, (24, 36): 1, (36, 47): 1})},
                            {"CChar": [(16, "SHand", 3, 8)]})
    assert sizes == {"SHand": Counter({12: 1})}


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["derive_struct_drift.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "derive_struct_drift.py"), run_name = "__main__")
    assert exit_info.value.code == 0
