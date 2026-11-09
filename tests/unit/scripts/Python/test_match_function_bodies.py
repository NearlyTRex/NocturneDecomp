# Imports
import json
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, call_rel32, push_imm32, section_va
from repo_paths import SCRIPTS_DIR
from sibling_images import code_at as at, function, install_programs
import match_function_bodies as mfb
import sibling_match

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)
RET, NOP, INC_EAX = b"\xc3", b"\x90", b"\x40"


def body(addr, layout = "k", calls = (), strings = (), ninsn = 20, exact = None):
    return mfb.Body(addr, {"exact": exact or layout, "layout": layout}, list(calls), list(strings), ninsn)


# -- matching on resolved bodies ------------------------------------------------

def test_calls_agree_through_the_pairing_or_recursion_and_conflict_against_it():
    a, b = body("a1", calls = ["s1", "a1", "s9"]), body("b1", calls = ["t1", "b1", "t2"])
    assert mfb.compare_calls(a, b, {"s1": "t1"}, {"t1": "s1"}) == (2, 0)
    assert mfb.compare_calls(a, b, {"s1": "t5"}, {"t5": "s1"}) == (1, 1)
    assert mfb.compare_calls(body("a", calls = ["s3"]), body("b", calls = ["t2"]), {}, {"t2": "s7"}) == (0, 1)


@pytest.mark.parametrize("a, agree, unique, why", [
    (body("a", ninsn = 2), 2, False, "2 calls agree"),
    (body("a", strings = ["h1", "h2"], ninsn = 2), 0, False, "2 strings"),
    (body("a", ninsn = 12), 0, True, "unique 12-instruction body"),
    (body("a", ninsn = 11), 0, True, None),
    (body("a", ninsn = 40), 0, False, None),
])
def test_a_pair_needs_evidence_beyond_its_shape(a, agree, unique, why):
    assert mfb.evidence(a, body("b"), agree, unique, 12) == why


def test_two_factories_that_hash_alike_are_told_apart_by_the_constructor_they_call():
    sources = [body("fa", calls = ["ca"]), body("fb", calls = ["cb"])]
    targets = [body("gb", calls = ["db"]), body("ga", calls = ["da"])]
    seeds = {"ca": "da", "cb": "db"}
    assert sorted(mfb.match_key(sources, targets, seeds, {v: k for k, v in seeds.items()}, 12)) == [
        ("fa", "ga", "1 calls agree"), ("fb", "gb", "1 calls agree")]


def test_an_ambiguous_key_pairs_nothing():
    twin_sources = [body("s1"), body("s2")]
    assert mfb.match_key(twin_sources, [body("t1")], {}, {}, 1) == []
    assert mfb.match_key([body("s1")], [body("t1"), body("t2")], {}, {}, 1) == []


def test_rounds_repeat_until_the_calls_they_resolve_pair_nothing_more():
    # s pairs only on the layout tier, after the exact tier has looked at o, so o waits a round.
    src = {"s": body("s", "str", strings = ["h"], ninsn = 2, exact = "s1"),
           "o": body("o", "outer", calls = ["s"], ninsn = 2), "x": body("x", "lone", ninsn = 2)}
    tgt = {"t": body("t", "str", strings = ["h"], ninsn = 2, exact = "s2"),
           "p": body("p", "outer", calls = ["t"], ninsn = 2), "y": body("y", "lone", exact = "other", ninsn = 2)}
    assert mfb.match(src, tgt, {}, min_insns = 12) == {
        "s": ("t", "layout", "1 strings"), "o": ("p", "exact", "1 calls agree")}
    assert mfb.match(src, tgt, {}, min_insns = 12, max_rounds = 1) == {"s": ("t", "layout", "1 strings")}


def test_a_drifted_body_matches_on_the_layout_tier():
    src = {"s": body("s", "k", exact = "e1", ninsn = 30)}
    tgt = {"t": body("t", "k", exact = "e2", ninsn = 30)}
    assert mfb.match(src, tgt, {}) == {"s": ("t", "layout", "unique 30-instruction body")}


def test_seeded_functions_are_not_matched_again():
    src, tgt = {"s": body("s", ninsn = 30)}, {"t": body("t", ninsn = 30)}
    assert mfb.match(src, tgt, {"s": "t"}) == {}


def test_pairs_found_another_way_are_judged_by_what_their_bodies_share():
    src = {"a": body("a", calls = ["c1", "c2"], strings = ["h"]), "b": body("b", calls = ["c1"]),
           "c": body("c", calls = ["c1"]), "d": body("d"), "e": body("e", strings = ["h"])}
    tgt = {"x": body("x", calls = ["d1", "d2"], strings = ["h"]), "y": body("y", calls = ["d1", "d9"]),
           "z": body("z", calls = ["d9"]), "w": body("w"), "v": body("v", strings = ["g"])}
    forward = {"c1": "d1", "c2": "d2", "c8": "d9"}
    assert mfb.verify(src, tgt, [("a", "x"), ("b", "y"), ("c", "z"), ("d", "w"), ("e", "v"), ("q", "x")],
                      forward) == {
        ("a", "x"): "confirmed", ("b", "y"): "rewritten", ("c", "z"): "contradicted",
        ("d", "w"): "no evidence", ("e", "v"): "no evidence", ("q", "x"): "unreadable"}


def test_seeds_come_from_anchors_and_manual_pairs_and_a_clash_drops_both(tmp_path):
    anchors = tmp_path / "anchors.json"
    anchors.write_text(json.dumps([{"nocedit": "0x00401000", "nocturne": "0x00402000"},
                                   {"nocedit": "0x00401010", "nocturne": "0x00402010"}]))
    pairs = tmp_path / "pairs.json"
    pairs.write_text(json.dumps({"pairs": [{"a": "00401010", "b": "00402020"},
                                           {"a": "00401030", "b": "00402030"}]}))
    assert mfb.load_seeds([str(anchors)], [str(pairs)]) == {"00401000": "00402000", "00401030": "00402030"}


def test_new_pairs_are_written_as_manual_pairs():
    doc = mfb.pairs_document("a.exe", "b.exe", {"00401000": ("00402000", "exact", "1 strings")},
                             {"00401000": "core_x.cpp_f_FUN_00401000"})
    assert doc == {"schema": 1, "from": "a.exe", "to": "b.exe", "pairs": [
        {"a": "00401000", "b": "00402000",
         "note": "core_x.cpp_f_FUN_00401000. Body match, exact tier: 1 strings."}]}


# -- reading bodies from the raw image ------------------------------------------

def place(functions):
    """(code bytes, function records) for [(offset, bytes, name)] at CODE + offset."""
    code = bytearray(b"\xcc" * 0x400)
    records = []
    for offset, data, name in functions:
        code[offset:offset + len(data)] = data
        records.append(function(CODE + offset, name, size = len(data)))
    return bytes(code), records


def data_section(strings):
    data = bytearray(0x400)
    for offset, raw in strings.items():
        data[offset:offset + len(raw)] = raw
    return bytes(data)


def mov_eax_abs(value):
    return b"\xa1" + struct.pack("<I", value)


def program(name, functions, strings):
    code, records = place(functions)
    pe = build_sectioned_pe([(".text", code, SECTION_EXECUTE), (".data", data_section(strings), 0)], BASE)
    return name, (pe, records)


def source_functions():
    return [
        (0x000, RET, "core_a.cpp_CA_ctor_FUN_00401000"),
        (0x010, RET, "core_b.cpp_CB_ctor_FUN_00401010"),
        (0x020, call_rel32(at(0x20), at(0x00)) + RET, "core_a.cpp_factoryFuncA_FUN_00401020"),
        (0x030, call_rel32(at(0x30), at(0x10)) + RET, "core_b.cpp_factoryFuncB_FUN_00401030"),
        (0x040, push_imm32(DATA) + RET, "core_s.cpp_say_FUN_00401040"),
        (0x050, b"\x8b\x41\x08" + mov_eax_abs(DATA + 0x10) + mov_eax_abs(0x10) + b"\x6a\x05\xeb\x00"
         + b"\xe9" + struct.pack("<i", at(0x41) - at(0x50 + 21)) + RET, "core_l.cpp_load_FUN_00401050"),
        (0x080, INC_EAX * 2 + RET, "core_t.cpp_tiny_FUN_00401080"),
    ]


def target_functions():
    return [
        (0x100, RET, "core_a.cpp_CA_ctor_FUN_00401100"),
        (0x110, RET, "core_b.cpp_CB_ctor_FUN_00401110"),
        (0x120, call_rel32(at(0x120), at(0x110)) + RET, "core_b.cpp_FUN_00401120"),
        (0x130, call_rel32(at(0x130), at(0x100)) + RET, "core_a.cpp_FUN_00401130"),
        (0x140, push_imm32(DATA + 0x40) + RET, "core_s.cpp_FUN_00401140"),
        (0x150, b"\x8b\x41\x0c" + mov_eax_abs(DATA + 0x10) + mov_eax_abs(0x10) + b"\x6a\x05\xeb\x00"
         + b"\xe9" + struct.pack("<i", at(0x141) - at(0x150 + 21)) + RET, "core_l.cpp_FUN_00401150"),
        (0x180, INC_EAX * 2 + RET, "core_t.cpp_FUN_00401180"),
    ]


@pytest.fixture(name = "programs")
def fixture_programs(monkeypatch, tmp_path):
    strings = {0x00: b"Anvil\0", 0x10: b"\x01\x02\x03\x04\0", 0x20: b"ab\0", 0x40: b"Anvil\0",
               0x100: b"x" * 0x300}
    annotations = install_programs(monkeypatch, tmp_path, dict([
        program("src.exe", source_functions(), strings), program("tgt.exe", target_functions(), strings)]))
    return annotations


def test_a_body_resolves_calls_strings_and_data_and_keeps_registers_and_constants(programs):
    bodies = mfb.read_bodies(sibling_match.Image("src.exe"))
    assert bodies["00401020"].calls == ["00401000"]
    assert bodies["00401040"].strings == [mfb.string_at(sibling_match.Image("src.exe"), DATA)]
    load = bodies["00401050"]
    assert (load.calls, load.strings, load.ninsn) == ([], [], 7)


def test_the_same_source_laid_out_elsewhere_has_the_same_keys(programs):
    src = mfb.read_bodies(sibling_match.Image("src.exe"))
    tgt = mfb.read_bodies(sibling_match.Image("tgt.exe"))
    assert src["00401040"].keys == tgt["00401140"].keys
    assert src["00401050"].keys["layout"] == tgt["00401150"].keys["layout"]
    assert src["00401050"].keys["exact"] != tgt["00401150"].keys["exact"]
    assert src["00401020"].keys == src["00401030"].keys


@pytest.mark.parametrize("offset, expected", [(0x00, True), (0x10, False), (0x20, False), (0x100, False)])
def test_only_a_terminated_printable_string_counts(programs, offset, expected):
    assert (mfb.string_at(sibling_match.Image("src.exe"), DATA + offset) is not None) == expected


def test_an_address_outside_the_image_is_no_string(programs):
    assert mfb.string_at(sibling_match.Image("src.exe"), 0x00300000) is None


def test_small_unreadable_and_cave_bodies_are_left_out(programs):
    image = sibling_match.Image("src.exe")
    assert "00401080" not in mfb.read_bodies(image, min_bytes = 4)
    image.functions.append(function(0x00300000, "core_far.cpp_FUN_00300000"))
    image.functions.append(function(at(0x200), "core_bad.cpp_FUN_00401200", size = 2))
    image.data = image.data[:image.va2off(at(0x200))] + b"\xff\xff" + image.data[image.va2off(at(0x202)):]
    image._cave_ranges = [(at(0x10), at(0x11))]
    bodies = mfb.read_bodies(image)
    assert not {"00300000", "00401010", "00401200"} & bodies.keys()


def test_main_writes_new_pairs_and_judges_others(programs, tmp_path, capsys):
    anchors = tmp_path / "anchors.json"
    anchors.write_text(json.dumps([{"nocedit": f"0x{at(0x00):08x}", "nocturne": f"0x{at(0x100):08x}"},
                                   {"nocedit": f"0x{at(0x10):08x}", "nocturne": f"0x{at(0x110):08x}"}]))
    judged = tmp_path / "judged.json"
    judged.write_text(json.dumps({"pairs": [{"a": f"{at(0x20):08x}", "b": f"{at(0x120):08x}"},
                                            {"a": f"{at(0x30):08x}", "b": f"{at(0x120):08x}"}]}))
    out = tmp_path / "new.json"
    mfb.main(["src.exe", "tgt.exe", "--anchors", str(anchors), "--min-insns", "6",
              "--out", str(out), "--verify", str(judged)])
    printed = capsys.readouterr().out
    assert "src.exe -> tgt.exe: 2 seeds, 4 new pairs (exact 3, layout 1)" in printed
    assert "verified 2: confirmed 1, contradicted 1" in printed
    assert f"contradicted  {at(0x20):08x} -> {at(0x120):08x}  core_a.cpp_factoryFuncA_FUN_00401020" in printed
    pairs = {p["a"]: p["b"] for p in json.loads(out.read_text())["pairs"]}
    assert pairs == {f"{at(0x20):08x}": f"{at(0x130):08x}", f"{at(0x30):08x}": f"{at(0x120):08x}",
                     f"{at(0x40):08x}": f"{at(0x140):08x}", f"{at(0x50):08x}": f"{at(0x150):08x}"}


def test_main_without_output_only_reports(programs, capsys):
    mfb.main(["src.exe", "tgt.exe"])
    assert "src.exe -> tgt.exe: 0 seeds" in capsys.readouterr().out


def test_runs_as_a_script(programs, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["match_function_bodies.py", "src.exe", "tgt.exe"])
    monkeypatch.setattr(sibling_match, "find_program_exe",
                        lambda name: str(programs.parent / "bin" / name))
    monkeypatch.setitem(sys.modules, "sibling_match", sibling_match)
    runpy.run_path(os.path.join(SCRIPTS_DIR, "match_function_bodies.py"), run_name = "__main__")
    assert "src.exe -> tgt.exe" in capsys.readouterr().out
