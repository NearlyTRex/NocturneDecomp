# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import map_sibling_functions as msf
import sibling_match as sm


def shape(strict, relaxed = None, ninsn = 10):
    return sm.Shape(strict, relaxed or strict, (), ninsn * 2, ninsn)


class FakeImage:
    """What the matcher reads from an Image, set directly."""

    def __init__(self, program, names, shapes = None, callsites = None, callers = None, vtables = None,
                 strings = None):
        self.program = program
        self.functions = [{"addr": a, "name": n} for a, n in names.items()]
        self.by_addr = {f["addr"]: f for f in self.functions}
        self.shapes = shapes or {}
        self.callsites = callsites or {}
        self._callers = callers or {}
        self.vtables = vtables or []
        self._strings = strings or {}

    @property
    def addrs_sorted(self):
        return sorted(int(a, 16) for a in self.by_addr)

    def tu_groups(self):
        out = {}
        for addr in sorted(self.by_addr, key = lambda a: int(a, 16)):
            unit = sm.tu_of(self.by_addr[addr]["name"])
            if unit:
                out.setdefault(unit, []).append(addr)
        return out

    def callers_of(self):
        return self._callers

    def string_refs(self):
        return self._strings


@pytest.fixture(autouse = True)
def fake_shapes(monkeypatch):
    monkeypatch.setattr(sm, "shapes_for", lambda image, min_bytes = 8: image.shapes)


def mapping_of(pairs):
    m = msf.Mapping()
    for a, b in pairs.items():
        m.add(a, b, 0.99, ["shape_strict"])
    return m


# -- the confidence model -----------------------------------------------------------

@pytest.mark.parametrize("a, b, verdict", [
    (None, shape("s"), "unshaped"), (shape("s"), shape("s"), "identical"),
    (shape("s", "r"), shape("t", "r"), "same_mnemonics"), (shape("s", "r", 20), shape("t", "q", 24), "similar_size"),
    (shape("s", "r", 20), shape("t", "q", 40), "size_mismatch")])
def test_two_bodies_agree_by_how_much_of_their_shape_they_share(a, b, verdict):
    assert msf.shape_agreement(a, b) == verdict


def test_each_further_distinct_signal_halves_the_remaining_doubt():
    assert msf.fuse([]) == 0.0
    assert msf.fuse([("caller", ""), ("manual", "")]) == 1.0
    assert msf.fuse([("caller", "")]) == 0.75
    assert msf.fuse([("caller", ""), ("caller", "again")]) == 0.75
    assert msf.fuse([("caller", ""), ("order", "")]) == pytest.approx(0.925)
    assert msf.fuse([("shape_strict", ""), ("string", ""), ("rtti", "")]) == 0.995


def test_evidence_ignores_a_side_that_is_missing():
    ev = msf.Evidence()
    ev.add("a", "", "caller")
    ev.add("a", "b", "caller", "x")
    assert dict(ev.votes) == {("a", "b"): [("caller", "x")]}
    assert ev.score("a", "b") == 0.75


def test_the_best_pairs_are_committed_one_to_one():
    ev = msf.Evidence()
    ev.add("a1", "b1", "shape_strict")
    ev.add("a1", "b2", "caller")
    ev.add("a2", "b2", "string")
    ev.add("a3", "b9", "caller")
    m = mapping_of({"a3": "b3"})
    assert msf.resolve(ev, m) == 2
    assert (m.a2b["a1"], m.a2b["a2"]) == ("b1", "b2")
    # b2's 0.75 is within reach of a1's 0.99, so the winner is discounted.
    assert m.detail["a1"] == {"confidence": 0.693, "evidence": ["shape_strict"], "ambiguous": True}
    assert len(m) == 3 and m.has_b("b2")


def test_a_tie_for_best_is_ambiguous_and_discounted():
    ev = msf.Evidence()
    ev.add("a", "b1", "caller")
    ev.add("a", "b2", "caller")
    m = msf.Mapping()
    msf.resolve(ev, m)
    assert m.detail["a"]["ambiguous"] and m.detail["a"]["confidence"] == pytest.approx(0.525)


def test_a_pair_recorded_by_hand_is_never_ambiguous():
    ev = msf.Evidence()
    ev.add("a", "b1", "manual", "read both")
    ev.add("a", "b2", "shape_strict")
    m = msf.Mapping()
    msf.resolve(ev, m)
    assert m.a2b["a"] == "b1" and not m.detail["a"]["ambiguous"]
    assert m.detail["a"]["evidence"] == ["manual:read both"]


# -- seeds ------------------------------------------------------------------------------

@pytest.mark.parametrize("name_a, name_b, contradicts", [
    ("core_a.cpp_CFlies_dtor_FUN_00000001", "core_b.cpp_CStairs_dtor_FUN_00000002", True),
    ("core_a.cpp_CFlies_dtor_FUN_00000001", "core_a.cpp_CStairs_dtor_FUN_00000002", False),
    ("core_a.cpp_CFlies_FUN_00000001", "core_b.cpp_CStairs_dtor_FUN_00000002", False),
    ("core_a.cpp_CFlies_dtor_FUN_00000001", "core_b.cpp_CFlies_dtor_FUN_00000002", False),
    ("FUN_00000001", "core_b.cpp_CStairs_dtor_FUN_00000002", False)])
def test_two_named_functions_contradict_only_on_unit_class_and_method(name_a, name_b, contradicts):
    a, b = FakeImage("a", {"1": name_a}), FakeImage("b", {"2": name_b})
    assert msf._contradicts(a, b, "1", "2") is contradicts
    assert msf._contradicts(a, b, "9", "2") is False


def test_a_shape_unique_on_both_sides_seeds_unless_the_names_contradict():
    a = FakeImage("a", {"1": "core_a.cpp_CX_f_FUN_1", "2": "FUN_2", "3": "FUN_3", "4": "FUN_4"},
                  shapes = {"1": shape("bad"), "2": shape("good"), "3": shape("dup"), "4": shape("dup")})
    b = FakeImage("b", {"5": "core_b.cpp_CY_g_FUN_5", "6": "FUN_6", "7": "FUN_7"},
                  shapes = {"5": shape("bad"), "6": shape("good"), "7": shape("dup")})
    ev = msf.Evidence()
    assert msf.seed_shapes(ev, a, b, "strict", "shape_strict") == 1
    assert list(ev.votes) == [("2", "6")]


def test_the_ledger_lives_beside_its_program():
    assert msf.default_ledger("b.exe").endswith(os.path.join("annotations", "b.exe", "sibling_manual_pairs.json"))


def test_hand_pairs_are_seeded_and_stale_or_duplicate_ones_reported(tmp_path):
    a = FakeImage("a.exe", {"00001000": "x", "00001010": "y"})
    b = FakeImage("b.exe", {"00002000": "x", "00002010": "y"})
    notes = []
    assert msf.seed_manual(msf.Evidence(), a, b, None, "a.exe", "b.exe", notes.append) == 0
    assert msf.seed_manual(msf.Evidence(), a, b, str(tmp_path / "none.json"), "a.exe", "b.exe") == 0
    ledger = tmp_path / "pairs.json"
    ledger.write_text(json.dumps({"from": "a.exe", "to": "b.exe", "pairs": [
        {"a": "00001000", "b": "00002000", "note": "read both"}, {"a": "00001000", "b": "00002010"},
        {"a": "00009999", "b": "00002000"}, {"a": "00001010", "b": "00009999"}, {"a": "00001010", "b": None}]}))
    ev = msf.Evidence()
    assert msf.seed_manual(ev, a, b, str(ledger), "a.exe", "b.exe", notes.append) == 1
    assert dict(ev.votes) == {("00001000", "00002000"): [("manual", "read both")]}
    assert "  manual       : DUPLICATE 00001000->00002010 -- an address may appear once" in notes
    assert "  manual       : STALE 00009999->00002000 -- not a function entry in a.exe" in notes
    assert "  manual       : STALE 00001010->00009999 -- not a function entry in b.exe" in notes
    assert notes[-1] == "  manual       : 4 entries rejected"
    ledger.write_text(json.dumps({"pairs": [{"a": "00001000", "b": "00002000"}, {"a": "00001000", "b": "x"}]}))
    notes.clear()
    msf.seed_manual(msf.Evidence(), a, b, str(ledger), "a.exe", "b.exe", notes.append)
    assert notes[-1] == "  manual       : 1 entry rejected"
    ledger.write_text(json.dumps({"pairs": [{"a": "00001000", "b": "00002000"}]}))
    notes.clear()
    assert msf.seed_manual(msf.Evidence(), a, b, str(ledger), "a.exe", "b.exe", notes.append) == 1
    assert notes == []


def test_a_ledger_for_other_programs_is_skipped(tmp_path):
    ledger = tmp_path / "pairs.json"
    ledger.write_text(json.dumps({"from": "a.exe", "to": "c.exe", "pairs": [{"a": "1", "b": "2"}]}))
    notes = []
    assert msf.seed_manual(msf.Evidence(), FakeImage("a", {}), FakeImage("b", {}), str(ledger), "a.exe", "b.exe",
                           notes.append) == 0
    assert notes == ["  manual       : SKIPPED -- ledger is to=c.exe, this run is b.exe"]


def test_the_type_info_records_pair_constructors_and_destructors(monkeypatch):
    import watcom_type_info as wti
    monkeypatch.setattr(wti, "scan_type_info", lambda image: image.program)
    monkeypatch.setattr(wti, "slot_pairs", lambda ra, rb, fa, fb: [("1", "2", f"{ra}/{rb} ctor")])
    ev = msf.Evidence()
    assert msf.seed_rtti(ev, FakeImage("a", {}), FakeImage("b", {})) == 1
    assert dict(ev.votes) == {("1", "2"): [("rtti", "a/b ctor")]}


def test_a_class_method_string_one_function_reads_on_each_side_pairs_them():
    a = FakeImage("a", {}, strings = {"1": {"CX::f - bad index", "plain"}, "2": {"CX::g"}, "3": {"CX::g"}})
    b = FakeImage("b", {}, strings = {"4": {"CX::f - bad index"}, "5": {"CX::g"}})
    ev = msf.Evidence()
    assert msf.seed_strings(ev, a, b) == 1
    assert dict(ev.votes) == {("1", "4"): [("string", "CX::f - bad index")]}


# -- vtables --------------------------------------------------------------------------

def test_slots_and_folded_duplicates():
    assert msf._vtable_slots({"functions": [{"func_addr": "AB"}, {}]}) == ["ab", ""]
    assert msf._dedup(["x", "y", "x"]) == ["x", "y"]


def test_a_unit_verdict_needs_a_unit_on_both_sides():
    a = FakeImage("a", {"1": "core_a.cpp_f_FUN_1", "2": "FUN_2"})
    b = FakeImage("b", {"3": "core_a.cpp_g_FUN_3", "4": "core_b.cpp_g_FUN_4"})
    assert msf._tu_verdict(a, b, "1", "3") is True
    assert msf._tu_verdict(a, b, "1", "4") is False
    assert msf._tu_verdict(a, b, "2", "3") is None


def test_a_gap_fills_by_unique_strict_shape_then_by_forced_order():
    names_a = {"1": "core_a.cpp_f_FUN_1", "2": "core_a.cpp_g_FUN_2", "3": "core_a.cpp_h_FUN_3", "4": "FUN_4",
               "5": "core_a.cpp_k_FUN_5"}
    names_b = {"6": "core_a.cpp_FUN_6", "7": "core_b.cpp_FUN_7", "8": "core_a.cpp_FUN_8", "9": "core_a.cpp_FUN_9"}
    shapes_a = {"1": shape("u"), "2": shape("v"), "3": shape("w1", "w"), "5": shape("x1", "x")}
    shapes_b = {"6": shape("u"), "7": shape("v"), "8": shape("w2", "w"), "9": shape("x2", "x")}
    a, b = FakeImage("a", names_a), FakeImage("b", names_b)
    ev = msf.Evidence()
    # 1 pairs by shape; 2's shape twin is in another unit; 4 has no shape; 3 and 5 are left to order.
    assert msf._fill_vtable_gap(ev, a, b, shapes_a, shapes_b, ["1", "2", "4", "3", "5"], ["6", "7", "8", "9"],
                                "t") == 1
    assert dict(ev.votes) == {("1", "6"): [("vtable", "t strict")]}
    ev = msf.Evidence()
    assert msf._fill_vtable_gap(ev, a, b, shapes_a, shapes_b, ["3", "5"], ["8", "9"], "t") == 2
    assert sorted(ev.votes) == [("3", "8"), ("5", "9")]
    # Forced by order, but 7 sits in another unit, so only 3 -> 8 is taken.
    ev = msf.Evidence()
    assert msf._fill_vtable_gap(ev, a, b, shapes_a, shapes_b, ["3", "5"], ["8", "7"], "t") == 1
    assert list(ev.votes) == [("3", "8")]


def test_order_never_fills_a_wide_gap_or_one_whose_shapes_disagree():
    a = FakeImage("a", {k: "core_a.cpp_f_FUN_" + k for k in "1234"})
    b = FakeImage("b", {k: "core_a.cpp_f_FUN_" + k for k in "5678"})
    wide = msf.Evidence()
    assert msf._fill_vtable_gap(wide, a, b, {}, {}, list("1234"), list("5678"), "t") == 0
    shapes_a = {"1": shape("a", "a", 10), "2": shape("b", "b", 10)}
    shapes_b = {"5": shape("c", "c", 60), "6": shape("d", "d", 60)}
    assert msf._fill_vtable_gap(msf.Evidence(), a, b, shapes_a, shapes_b, ["1", "2"], ["5", "6"], "t") == 0


def test_strict_shape_twins_in_one_window_decide_nothing_and_a_taken_target_is_skipped():
    a = FakeImage("a", {"1": "FUN_1", "2": "FUN_2"})
    b = FakeImage("b", {"5": "FUN_5", "6": "FUN_6"})
    twins = msf.Evidence()
    msf._fill_vtable_gap(twins, a, b, {"1": shape("s")}, {"5": shape("s"), "6": shape("s")}, ["1"], ["5", "6"], "t")
    assert not twins.votes
    taken = msf.Evidence()
    msf._fill_vtable_gap(taken, a, b, {"1": shape("s"), "2": shape("s")}, {"5": shape("s")}, ["1", "2"], ["5"], "t")
    assert list(taken.votes) == [("1", "5")]


def vtable(addr, slots):
    return {"addr": addr, "count": len(slots), "functions": [{"func_addr": s} for s in slots]}


def test_vtables_align_by_their_anchored_slots_and_fill_the_gaps_between():
    a = FakeImage("a", {k: "FUN_" + k for k in ["a1", "a2", "a3", "a4", "x1", "z1", "z2", "z3"]},
                  shapes = {"x1": shape("gap")},
                  vtables = [vtable("ta", ["a1", "a2", "a3", "x1", "a4"]), vtable("tiny", ["a1"]),
                             vtable("cold", ["x1", "z1"]), vtable("weak", ["a1", "a2", "z1"]),
                             vtable("crossed", ["z1", "a3", "a2", "a1", "z2"]), vtable("shorter", ["a1", "a2", "a3"])])
    b = FakeImage("b", {k: "FUN_" + k for k in ["b1", "b2", "b3", "b4", "y1", "y2"]}, shapes = {"y1": shape("gap")},
                  vtables = [vtable("tb", ["b1", "b2", "b3", "y1", "b4", "y2"]), {"functions": [{}]}])
    m = mapping_of({"a1": "b1", "a2": "b2", "a3": "b3", "a4": "b4"})
    ev = msf.Evidence()
    assert msf.prop_vtables(ev, a, b, m) == 1
    assert dict(ev.votes) == {("x1", "y1"): [("vtable", "ta<->tb strict")]}


def test_the_same_count_rule_zips_tables_with_two_anchors():
    a = FakeImage("a", {}, vtables = [vtable("ta", ["a1", "a2", "x1", "", "x2"]), vtable("one", ["a1"]),
                                      vtable("lone", ["a1", "z9", "z8", "z7", "z6"]),
                                      vtable("clash", ["a1", "a2", "q1", "a3", "q2"])])
    b = FakeImage("b", {}, vtables = [vtable("tb", ["b1", "b2", "y1", "y9", "y2"]),
                                      vtable("other", ["c1", "c2", "c3", "c4", "c5"])])
    m = mapping_of({"a1": "b1", "a2": "b2", "a3": "c3"})
    ev = msf.Evidence()
    # clash stops at a3, whose known partner is not the slot it lines up with.
    assert msf.prop_vtables(ev, a, b, m, use_lcs = False) == 3
    assert ("x1", "y1") in ev.votes and ("x2", "y2") in ev.votes and ("q1", "y1") in ev.votes
    assert ("q2", "y2") not in ev.votes


# -- the other propagation signals ------------------------------------------------------

def test_an_anchored_pairs_call_sequence_pairs_its_unmatched_callees():
    a = FakeImage("a", {}, callsites = {"a1": ["k1", "x1"], "a2": ["k1", "x2"], "a3": ["x3"], "a4": ["k2", "x4"]})
    b = FakeImage("b", {}, callsites = {"b1": ["l1", "y1"], "b2": ["l9", "y2"], "b3": ["y3", "y4"],
                                        "b4": ["l2", "l1"]})
    m = mapping_of({"a1": "b1", "a2": "b2", "a3": "b3", "a4": "b4", "k1": "l1", "k2": "l2", "a9": "b9"})
    ev = msf.Evidence()
    assert msf.prop_callsites(ev, a, b, m) == 1
    assert dict(ev.votes) == {("x1", "y1"): [("callsite", "via a1")]}


def test_longest_increasing_subsequence_indices():
    assert msf.longest_increasing([]) == []
    assert msf.longest_increasing([5, 1, 6, 2, 7, 3, 8]) == [1, 3, 5, 6]


def test_a_bracket_aligns_when_most_of_its_measurable_pairs_agree():
    assert msf.bracket_aligns({}, {}, ["1"], ["2"])
    assert not msf.bracket_aligns({}, {}, ["1", "3"], ["2", "4"])
    good = {"1": shape("s"), "3": shape("t", "t", 10)}
    assert msf.bracket_aligns(good, {"2": shape("s"), "4": shape("u", "u", 60)}, ["1", "3"], ["2", "4"])
    assert not msf.bracket_aligns({"1": shape("s", "s", 10)}, {"2": shape("t", "t", 60)}, ["1", "3"], ["2", "4"])


def order_images():
    names_a = {
        "00001000": "core_a.cpp_f1_FUN_00001000", "00001010": "core_a.cpp_g1_FUN_00001010",
        "00001020": "core_a.cpp_f2_FUN_00001020", "00001030": "core_a.cpp_g2_FUN_00001030",
        "00001040": "core_a.cpp_g3_FUN_00001040", "00001050": "core_a.cpp_f3_FUN_00001050",
        "00001060": "core_a.cpp_e1_FUN_00001060", "00001070": "core_a.cpp_f4_FUN_00001070",
        "00001080": "core_a.cpp_u1_FUN_00001080", "00001090": "core_a.cpp_f5_FUN_00001090",
        "000010a0": "core_a.cpp_m1_FUN_000010a0", "000010b0": "core_a.cpp_m2_FUN_000010b0",
        "000010c0": "core_a.cpp_f6_FUN_000010c0",
        "00001100": "crt_s.c_c1_FUN_00001100", "00001110": "crt_s.c_c2_FUN_00001110",
        "00001120": "crt_s.c_c3_FUN_00001120",
        "00001200": "core_b.cpp_lone_FUN_00001200", "00001210": "core_b.cpp_x_FUN_00001210",
    }
    names_b = {f"{a:08x}": f"FUN_{a:08x}" for a in (
        0x2000, 0x2010, 0x2020, 0x2030, 0x2040, 0x2050, 0x2070, 0x2080, 0x2081, 0x2090, 0x20a0, 0x20b0, 0x20c0,
        0x2100, 0x2110, 0x2120)}
    shapes_a = {"00001030": shape("p", "p", 10), "00001040": shape("q", "q", 10),
                "000010a0": shape("m", "m", 10), "000010b0": shape("n", "n", 10)}
    shapes_b = {"00002030": shape("p"), "00002040": shape("q"),
                "000020a0": shape("o", "o", 60), "000020b0": shape("r", "r", 60)}
    return FakeImage("a", names_a, shapes_a), FakeImage("b", names_b, shapes_b)


ORDER_ANCHORS = {"00001000": "00002000", "00001020": "00002020", "00001050": "00002050",
                 "00001070": "00002070", "00001090": "00002090", "000010c0": "000020c0",
                 "00001100": "00002100", "00001120": "00002120", "00001200": "00002200"}


def test_source_order_pairs_the_functions_two_anchors_bracket():
    a, b = order_images()
    ev, editor_only = msf.Evidence(), []
    assert msf.prop_order(ev, a, b, mapping_of(ORDER_ANCHORS), editor_only) == 3
    assert ev.votes[("00001010", "00002010")][0][0] == "order"
    assert ev.votes[("00001030", "00002030")][0][0] == "order_multi"
    assert ("00001110", "00002110") not in ev.votes
    assert editor_only == [("core_a.cpp", "00001060")]
    assert msf.prop_order(msf.Evidence(), a, b, mapping_of(ORDER_ANCHORS)) == 3


def test_the_unique_unmatched_caller_of_an_anchored_pair_pairs():
    a = FakeImage("a", {}, callers = {"a1": {"x1", "k1"}, "a2": {"x2", "x3"}})
    b = FakeImage("b", {}, callers = {"b1": {"y1"}, "b2": {"y2"}})
    ev = msf.Evidence()
    assert msf.prop_callers(ev, a, b, mapping_of({"a1": "b1", "a2": "b2", "k1": "l1"})) == 1
    assert dict(ev.votes) == {("x1", "y1"): [("caller", "calls a1")]}


# -- the whole run ----------------------------------------------------------------------

def pipeline_images():
    names_a = {f"{0x1000 + 0x10 * i:08x}": f"core_a.cpp_f{i}_FUN_{0x1000 + 0x10 * i:08x}" for i in range(6)}
    names_a["00001100"] = "FUN_00001100"
    names_b = {f"{0x2000 + 0x10 * i:08x}": f"FUN_{0x2000 + 0x10 * i:08x}" for i in range(7)}
    # 1 and 2 have no shape and pair only through 0's calls: a round that adds two, so a second runs.
    shapes_a = {a: shape(f"s{i}") for i, a in enumerate(sorted(names_a)) if i not in (1, 2)}
    shapes_b = {b: shape(f"s{i}") for i, b in enumerate(sorted(names_b)) if i not in (1, 2)}
    shapes_a["00001100"], shapes_b["00002060"] = shape("x", "rel"), shape("y", "rel")
    callsites_a = {"00001000": ["00001010", "00001020"]}
    callsites_b = {"00002000": ["00002010", "00002020"]}
    return (FakeImage("a.exe", names_a, shapes_a, callsites_a),
            FakeImage("b.exe", names_b, shapes_b, callsites_b))


def test_a_mapping_is_seeded_then_propagated_then_corroborated(monkeypatch, capsys):
    import watcom_type_info as wti
    monkeypatch.setattr(wti, "scan_type_info", lambda image: [])
    monkeypatch.setattr(wti, "slot_pairs", lambda *args: [])
    a, b = pipeline_images()
    mapping, log, editor_only = msf.build_mapping(a, b, ledger = None)
    assert mapping.a2b["00001010"] == "00002010"
    assert mapping.a2b["00001100"] == "00002060"
    assert editor_only == []
    assert "== corroboration ==" in log and "== corroboration ==" in capsys.readouterr().err
    monkeypatch.setattr(msf, "default_ledger", lambda program: None)
    mapping, log, editor_only = msf.build_mapping(a, b, verbose = False, use_order = False, max_rounds = 1)
    assert not any("order (final)" in line for line in log)


@pytest.fixture(name = "programs")
def fixture_programs(monkeypatch):
    import watcom_type_info as wti
    monkeypatch.setattr(wti, "scan_type_info", lambda image: [])
    monkeypatch.setattr(wti, "slot_pairs", lambda *args: [])
    a, b = pipeline_images()
    monkeypatch.setattr(sm, "Image", {"a.exe": a, "b.exe": b}.__getitem__)
    return a, b


def test_main_reports_the_mapping_and_writes_it(programs, tmp_path, capsys):
    out = tmp_path / "mapping.json"
    msf.main(["--from", "a.exe", "--to", "b.exe", "-o", str(out), "--min-confidence", "0.9", "--show", "2",
              "--no-ledger"])
    captured = capsys.readouterr()
    assert "a.exe: 7 functions" in captured.err
    assert "matched 7 pairs (100.0% of b.exe's 7 functions)" in captured.out
    assert "carrying a real name from a.exe: 6" in captured.out
    assert "sample of 2 matches:" in captured.out
    doc = json.loads(out.read_text())
    assert (doc["from"], doc["to"], doc["unmatched_a"], doc["unmatched_b"]) == ("a.exe", "b.exe", [], [])
    pair = next(p for p in doc["pairs"] if p["a"] == "00001000")
    assert pair["shape_agreement"] == "identical" and pair["confidence"] == 0.99
    assert all(p["confidence"] >= 0.9 for p in doc["pairs"])
    assert len(doc["pairs"]) < 7


def test_main_quietly_with_the_old_rules(programs, capsys):
    msf.main(["--from", "a.exe", "--to", "b.exe", "-q", "--show", "0", "--no-order", "--no-vtable-lcs",
              "--ledger", "none.json"])
    captured = capsys.readouterr()
    assert captured.err == "" and "sample of" not in captured.out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["map_sibling_functions.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "map_sibling_functions.py"), run_name = "__main__")
    assert exit_info.value.code == 0
