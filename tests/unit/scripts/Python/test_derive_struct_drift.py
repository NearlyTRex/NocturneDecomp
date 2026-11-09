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


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["derive_struct_drift.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "derive_struct_drift.py"), run_name = "__main__")
    assert exit_info.value.code == 0
