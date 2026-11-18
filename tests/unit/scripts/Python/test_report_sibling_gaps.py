# Imports
import json
import os
import runpy
import sys
from collections import Counter

# Third-party imports
import pytest

# Local imports
from fake_sibling_image import FakeImage, shape
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
import report_sibling_gaps as rsg
import sibling_match as sm

BODY = ("push", "mov", "call", "pop", "ret")
OTHER = ("xor", "inc", "cmp", "jne", "ret")


@pytest.fixture(autouse = True)
def fake_shapes(monkeypatch, tmp_path):
    """Shapes come from the image, and pseudocode from a fresh annotations tree."""
    monkeypatch.setattr(sm, "shapes_for", lambda image, min_bytes = 8: image.shapes)
    monkeypatch.setattr(sm, "ANNOTATIONS", str(tmp_path / "annotations"))
    monkeypatch.setattr(rsg, "_SOURCES", {})


# -- small helpers -----------------------------------------------------------------

def test_names_extents_and_descriptions():
    assert rsg.canonical_mapping("x.exe").endswith(os.path.join("x.exe", "reports",
                                                                "sibling_verified_mapping.json"))
    assert rsg.short(None) == "<unnamed>" and rsg.short("core_x.cpp_f_FUN_00401000") == "core_x.cpp_f"
    assert rsg.core_of("core_x.cpp_CFoo_go_FUN_00401000") == "CFoo_go"
    func = {"body": [{"start": "10", "end": "1f"}, {"start": "zz", "end": "1"}, {"start": "20"}]}
    assert rsg.extent(func) == 16 and rsg.extent(None) == 0
    img = FakeImage("a.exe", {"00000010": "core_x.cpp_f_FUN_00000010"}, records = {"00000010": func})
    assert rsg.describe(img, "00000010", {}) == "00000010    16b    ?i  core_x.cpp_f"
    assert rsg.describe(img, "00000010", {"00000010": shape("s", ninsn = 4)}) == \
        "00000010     8b    4i  core_x.cpp_f"


def test_pseudocode_is_found_by_address_and_keeps_are_not(tmp_path):
    folder = tmp_path / "annotations" / "a.exe" / "pseudocode" / "src" / "core" / "x.cpp"
    folder.mkdir(parents = True)
    for name in ("go_FUN_00001000.cpp", "go_FUN_00001010.keep.cpp", "go_FUN_00001000.asm", "c_FUN_00001020.c"):
        (folder / name).write_text("", encoding = "utf-8")
    assert rsg.source_of("a.exe", "00001000") == os.path.join(
        "annotations", "a.exe", "pseudocode", "src", "core", "x.cpp", "go_FUN_00001000.cpp")
    assert rsg.source_of("a.exe", "00001020").endswith("c_FUN_00001020.c")
    assert rsg.source_of("a.exe", "00001010") is None and rsg.source_of("b.exe", "00001000") is None


def test_a_family_counts_as_absent_only_when_every_member_is_gone():
    a = FakeImage("a.exe", {"1": "u_x.cpp_CZap_a_FUN_00000001", "2": "u_x.cpp_CZap_b_FUN_00000002",
                            "3": "u_x.cpp_CZap_c_FUN_00000003", "4": "u_x.cpp_CKeep_a_FUN_00000004",
                            "5": "u_x.cpp_plain_FUN_00000005", "6": "u_x.cpp_FUN_00000006"})
    b = FakeImage("b.exe", {"9": "u_x.cpp_CKeep_a_FUN_00000009"})
    gone = rsg.absent_families(a, b)
    assert gone == ({"CZap"}, set())
    assert rsg.in_absent_family(a, "1", *gone) and not rsg.in_absent_family(a, "4", *gone)
    assert not rsg.in_absent_family(a, "5", *gone) and not rsg.in_absent_family(a, "x", *gone)


def test_a_suggestion_takes_names_then_shapes_then_position():
    a = FakeImage("a.exe", {"1": "u_x.cpp_CFoo_two_FUN_00000001", "2": "u_x.cpp_CFoo_three_FUN_00000002",
                            "3": "u_x.cpp_CFoo_four_FUN_00000003", "4": "u_x.cpp_CFoo_five_FUN_00000004"})
    b = FakeImage("b.exe", {"7": "u_x.cpp_CFoo_two_FUN_00000007", "8": "u_x.cpp_FUN_00000008",
                            "9": "u_x.cpp_FUN_00000009"})
    shapes_a = {"2": shape("s2"), "3": shape("s3", "r3"), "4": shape("s4")}
    shapes_b = {"8": shape("s2"), "9": shape("x3", "r3")}
    rows, rest_a, rest_b = rsg.suggest(a, b, shapes_a, shapes_b, ["1", "2", "3", "4"], ["7", "8", "9"])
    assert rows == [("1", "7", "name core"), ("2", "8", "identical"), ("3", "9", "same mnemonics")]
    assert (rest_a, rest_b) == (["4"], [])
    rows, rest_a, rest_b = rsg.suggest(a, b, {}, {}, ["3", "4"], ["8", "9"])
    assert rows == [("3", "8", "position only"), ("4", "9", "position only")] and rest_a == rest_b == []
    rows, rest_a, rest_b = rsg.suggest(a, b, {"3": shape("s")}, {}, ["3", "4"], ["8", "9"])
    assert not rows and rest_a == ["3", "4"]


def test_an_absent_family_is_stripped_before_the_counts_are_compared():
    a = FakeImage("a.exe", {"1": "u_x.cpp_CZap_a_FUN_00000001", "2": "u_x.cpp_CQ_real_FUN_00000002"})
    b = FakeImage("b.exe", {"9": "u_x.cpp_FUN_00000009"})
    rows, _, _ = rsg.suggest(a, b, {}, {}, ["1", "2"], ["9"], absent = ({"CZap"}, set()))
    assert rows == [("2", "9", "position after absent-family strip")]
    rows, rest_a, _ = rsg.suggest(a, b, {}, {}, ["1", "2"], ["9"], absent = (set(), set()))
    assert not rows and rest_a == ["1", "2"]


# -- grading -------------------------------------------------------------------------

def test_overlaps_are_none_when_there_is_nothing_to_compare():
    assert rsg.dice(Counter(), Counter()) is None
    assert rsg.dice(Counter("aab"), Counter("abb")) == pytest.approx(4 / 6)
    assert rsg.ngrams(("a", "b")) == Counter({("a",): 1, ("b",): 1})
    assert rsg.ngrams(BODY) == Counter({BODY[0:3]: 1, BODY[1:4]: 1, BODY[2:5]: 1})
    assert rsg.link_overlap(["x"], ["q"], {}, set()) is None
    assert rsg.link_overlap(["x", "y"], ["X", "Z"], {"x": "X", "y": "Y"}, {"X", "Z"}) == 0.5
    assert rsg.score({}) == 0.0 and rsg.score({"body": 1.0, "size": 0.0}) == 0.75


def rank_images():
    a = FakeImage("a.exe", {"00000001": "u_x.cpp_CFoo_four_FUN_00000001", "00000002": "u_x.cpp_CFoo_five_FUN_00000002",
                            "000000a0": "u_x.cpp_CFoo_anchor_FUN_000000a0"},
                  shapes = {"00000001": shape("a1", ninsn = 5, mnemonics = BODY, consts = (7,)),
                            "00000002": shape("a2", ninsn = 5, mnemonics = OTHER)},
                  callsites = {"00000001": ["000000a0"]}, callers = {"00000002": {"000000a0"}},
                  strings = {"00000002": {"hello"}})
    b = FakeImage("b.exe", {"00000008": "u_x.cpp_FUN_00000008", "00000009": "u_x.cpp_FUN_00000009",
                            "0000000a": "u_x.cpp_FUN_0000000a", "000000b0": "u_x.cpp_CFoo_anchor_FUN_000000b0"},
                  shapes = {"00000008": shape("b8", ninsn = 5, mnemonics = BODY, consts = (7,)),
                            "00000009": shape("b9", ninsn = 10, mnemonics = OTHER)},
                  callsites = {"00000008": ["000000b0"]}, callers = {"00000009": {"000000b0"}},
                  strings = {"00000009": {"hello"}})
    return a, b


def test_each_leftover_ranks_its_candidates_best_first():
    a, b = rank_images()
    ctx = rsg.RankContext(a, b, {"000000a0": "000000b0"}, {"000000b0": "000000a0"})
    assert ctx.features("00000001", "00000008") == {"size": 1.0, "body": 1.0, "consts": 1.0, "calls": 1.0}
    assert ctx.features("00000002", "0000000a") == {"callers": 0.0, "strings": 0.0}
    ranked = rsg.rank(ctx, ["00000001", "00000002"], ["00000008", "00000009", "0000000a"])
    four, five = ranked[0], ranked[1]
    assert [c["b"] for c in four["candidates"]] == ["00000008", "00000009", "0000000a"]
    assert four["mutual"] and four["margin"] > 0.5 and five["candidates"][0]["b"] == "00000009"
    assert five["mutual"] and five["candidates"][0]["features"]["strings"] == 1.0


def test_a_tie_or_a_lone_candidate_is_never_a_mutual_best():
    a, b = rank_images()
    ctx = rsg.RankContext(a, b, {}, {})
    tied = rsg.rank(ctx, ["00000001"], ["0000000a", "00000009"])
    assert not tied[0]["mutual"] or tied[0]["margin"] > 0
    nothing = rsg.rank(ctx, ["00000002"], ["0000000a"])
    assert nothing[0]["margin"] == 0.0 and not nothing[0]["mutual"]
    shared = rsg.rank(ctx, ["00000001", "00000002"], ["00000008"])
    assert shared[0]["mutual"] and not shared[1]["mutual"]


def test_a_guess_prints_with_its_sources_and_is_ledger_worthy_only_when_clear(capsys, monkeypatch):
    a, b = rank_images()
    ctx = rsg.RankContext(a, b, {"000000a0": "000000b0"}, {"000000b0": "000000a0"})
    monkeypatch.setattr(rsg, "RANK_SHOW", 1)
    row = rsg.rank(ctx, ["00000001"], ["00000008", "00000009"])[0]
    rsg.print_ranked(ctx, row)
    text = capsys.readouterr().out
    assert "MUTUAL margin" in text and "a.exe: (no pseudocode)" in text and "... 1 more candidate(s)" in text
    rec = rsg.ranked_record(ctx, row, "u_x.cpp", "edge")
    assert rec["candidates"][0]["name"] == "u_x.cpp_FUN_00000008" and rsg.ledger_worthy(rec)
    assert not rsg.ledger_worthy(dict(rec, margin = 0.0))


# -- bracket reasons and name drift ---------------------------------------------------

@pytest.mark.parametrize("gap_a, gap_b, shapes_a, shapes_b, reason", [
    (["1"], [], {}, {}, "editor-only"),
    ([], ["9"], {}, {}, "game-only: nothing between these in a.exe"),
    (["1"], ["8", "9"], {}, {}, "count mismatch 1 vs 2"),
    (["1"], ["9"], {}, {}, "too small to hash"),
    (["1", "2"], ["8", "9"], {"1": shape("s", ninsn = 10), "2": shape("t", ninsn = 10)},
     {"8": shape("u", ninsn = 40), "9": shape("v", ninsn = 40)}, "the bodies disagree"),
    (["1"], ["9"], {"1": shape("s")}, {}, None),
])
def test_a_bracket_is_refused_for_the_reason_the_order_pass_saw(gap_a, gap_b, shapes_a, shapes_b, reason):
    got = rsg.bracket_reason(gap_a, gap_b, shapes_a, shapes_b, "a.exe")
    assert got == reason if reason is None else reason in got


@pytest.mark.parametrize("ca, cb, kind", [
    ("CFoo_go", "CFOO_go", "case-only spelling"), ("CFoo", "CFoo_go", "unnamed on one side"),
    ("CFoo_go", "CBar_go", "MAPPING SUSPECT"), ("CFoo_go", "CFoo_stub", "stubbed in target"),
    ("CFoo_returnZero", "CFoo_go", "stubbed in source"), ("CFoo_go", "CFoo_run", "renamed"),
])
def test_two_names_for_one_function_are_explained(ca, cb, kind):
    assert rsg.classify_name_drift(ca, cb, lambda core: core.split("_")[0]) == kind


def test_a_signature_is_anything_applied():
    assert not rsg._has_signature({"ret": "undefined4"})
    assert rsg._has_signature({"conv": "__cdecl"}) and rsg._has_signature({"ret": "int"})


def test_the_ledger_skeleton_holds_each_address_once():
    ranked = [{"a": "3", "name": "u_x.cpp_f_FUN_00000003", "margin": 0.5, "mutual": True,
               "candidates": [{"b": "9", "score": 0.9}]},
              {"a": "4", "name": "u_x.cpp_g_FUN_00000004", "margin": 0.0, "mutual": False,
               "candidates": [{"b": "8", "score": 0.9}]}]
    proposals = [{"a": "1", "b": "7", "name": "u_x.cpp_h_FUN_00000001", "basis": "name core"},
                 {"a": "1", "b": "7", "name": "u_x.cpp_h_FUN_00000001", "basis": "name core [identical]"}]
    doc = rsg.ledger_skeleton("a.exe", "b.exe", proposals, ranked)
    assert (doc["from"], doc["to"]) == ("a.exe", "b.exe")
    assert doc["pairs"] == [{"a": "1", "b": "7", "note": "u_x.cpp_h: name core -- UNVERIFIED"},
                            {"a": "3", "b": "9", "note": "u_x.cpp_f: ranked 0.90, margin 0.50 -- UNVERIFIED"}]


# -- the whole report ------------------------------------------------------------------

SRC = {
    "00001000": "core_x.cpp_CFoo_one", "00001010": "core_x.cpp_CFoo_two", "00001020": "core_x.cpp_CFoo_three",
    "00001030": "core_x.cpp_CFoo_four", "00001040": "core_x.cpp_CFoo_five", "00001050": "core_x.cpp_CFoo_six",
    "00001060": "core_x.cpp_CFoo_tail", "00001100": "core_y.cpp_CBar_lonely", "00001200": "crt_z.c_crtThing",
    "00001300": "core_w.cpp_CWee_a", "00001310": "core_w.cpp_CWee_b",
    "00001400": "core_v.cpp_CVee_a", "00001410": "core_v.cpp_CVee_b", "00001420": "core_v.cpp_CVee_c",
    "00001500": "core_u.cpp_CYou_a", "00001510": "core_u.cpp_CYou_b", "00001520": "core_u.cpp_CYou_c",
    "00001600": "core_t.cpp_CTee_a", "00001610": "core_t.cpp_CTee_b",
    "00001700": "core_s.cpp_CEss_a", "00001710": "core_s.cpp_CEss_b", "00001720": "core_s.cpp_CEss_c",
    "00001730": "core_s.cpp_CEss_d",
    "00001800": "core_r.cpp_CArr_a", "00001810": "core_r.cpp_CArr_b", "00001820": "core_r.cpp_CArr_c",
    "00001830": "core_r.cpp_CArr_d",
    "00001900": "core_q.cpp_CQ_a", "00001910": "core_q.cpp_CZap_a", "00001920": "core_q.cpp_CZap_b",
    "00001930": "core_q.cpp_CZap_c", "00001940": "core_q.cpp_CQ_real", "00001950": "core_q.cpp_CQ_z",
    "00001a00": "core_p.cpp_CPee_a", "00001b00": "core_k.cpp_CKay_a",
}
DST = {
    "00002000": "core_x.cpp_CFoo_one", "00002010": "core_x.cpp_CFoo_two", "00002020": "core_x.cpp",
    "00002030": "core_x.cpp", "00002040": "core_x.cpp", "00002045": "core_y.cpp", "00002046": "core_m.cpp",
    "00002047": "core_n.cpp", "00002048": "", "00002049": "core_o.cpp", "00002050": "core_x.cpp_CFoo_six",
    "00002060": "core_x.cpp", "00002070": "core_x.cpp_CFoo_bonus", "00002200": "crt_z.c",
    "00002300": "core_w.cpp_CWee_a", "00002305": "core_w.cpp", "00002310": "core_w.cpp_CWee_b",
    "00002400": "core_v.cpp_CVee_renamed", "00002410": "core_v.cpp", "00002420": "core_v.cpp_CVee_c",
    "00002500": "core_u.cpp_CYou_a", "00002520": "core_u.cpp_CYou_c",
    "00002600": "core_t.cpp_CTee_a", "00002610": "core_t.cpp_CTee_b",
    "00002700": "core_s.cpp_CEss_alpha", "00002710": "core_s.cpp", "00002720": "core_s.cpp",
    "00002730": "core_s.cpp_CEss_d",
    "00002800": "core_r.cpp_CArr_a", "00002810": "core_r.cpp", "00002820": "core_r.cpp",
    "00002830": "core_r.cpp_CArr_d",
    "00002900": "core_q.cpp_CQ_a", "00002940": "core_q.cpp", "00002950": "core_q.cpp_CQ_z",
    "00002a00": "core_p.cpp_CPee_a", "00002a10": "core_y.cpp_CBar_lonely", "00002a20": "core_x.cpp_CFoo_tail",
    "00002a30": "core_x.cpp_CFoo_tail",
}
PAIRS = [("00001000", "00002000"), ("00001050", "00002050"), ("00001300", "00002300"), ("00001310", "00002310"),
         ("00001400", "00002400"), ("00001420", "00002420"), ("00001500", "00002500"), ("00001520", "00002520"),
         ("00001600", "00002600"), ("00001610", "00002610"), ("00001700", "00002700"), ("00001730", "00002730"),
         ("00001800", "00002800"), ("00001830", "00002830"), ("00001900", "00002900"), ("00001950", "00002950"),
         ("00001a00", "00002a00")]


def full(names):
    return {a: (f"{n}_FUN_{a}" if n and not n.endswith((".cpp", ".c")) else
                f"{n}_FUN_{a}" if n else f"FUN_{a}") for a, n in names.items()}


def report_images():
    big = {a: shape(f"big{a}", ninsn = 40) for a in ("00002810", "00002820")}
    a = FakeImage("src.exe", full(SRC), records = {
        "00001000": {"vars": {"params": [{"type": "CFoo *"}]}, "ret": "void"},
        "00001050": {"ret": "int"}, "00001400": {"ret": "int"}, "00001600": {"ret": "int"}},
        shapes = {"00001020": shape("three"), "00001410": shape("vee"),
                  "00001030": shape("a1", ninsn = 5, mnemonics = BODY),
                  "00001040": shape("a2", ninsn = 5, mnemonics = OTHER),
                  "00001810": shape("r1", ninsn = 10), "00001820": shape("r2", ninsn = 10),
                  "00001060": shape("tail", ninsn = 5, mnemonics = OTHER)},
        callsites = {"00001030": ["00001000"]}, strings = {"00001040": {"hello"}})
    b = FakeImage("dst.exe", full(DST), records = {
        "00002000": {"vars": {"params": [{"type": "CDemonActor *"}]}, "ret": "void"},
        "00002400": {"ret": "int"}, "00002600": {"ret": "char"}},
        shapes = {"00002020": shape("three"), "00002410": shape("vee2"),
                  "00002030": shape("b1", ninsn = 5, mnemonics = BODY),
                  "00002040": shape("b2", ninsn = 5, mnemonics = OTHER),
                  "00002060": shape("b6", ninsn = 5, mnemonics = OTHER), **big},
        callsites = {"00002030": ["00002000"]}, strings = {"00002040": {"hello"}})
    return a, b


@pytest.fixture(name = "mapping")
def fixture_mapping(tmp_path, monkeypatch):
    a, b = report_images()
    monkeypatch.setattr(sm, "Image", {"src.exe": a, "dst.exe": b}.__getitem__)
    pairs = [{"a": x, "b": y, "confidence": 0.5 if x == "00001400" else 0.95, "name": a.by_addr[x]["name"],
              "sig_verdict": "agree"} for x, y in PAIRS]
    pairs[8].pop("confidence")
    pairs.append({"a": "0000dead", "b": "0000beef", "confidence": 1.0})
    return write_json(tmp_path / "mapping.json", {"from": "src.exe", "to": "dst.exe", "pairs": pairs,
                                                  "editor_only": [{"a": "00001510"}]})


def test_the_full_report_names_every_kind_of_leftover(mapping, tmp_path, capsys):
    out, ledger = tmp_path / "gaps.json", tmp_path / "ledger.json"
    assert rsg.main(["--mapping", mapping, "--show", "0", "--out", str(out), "--emit-ledger", str(ledger)]) == 0
    text = capsys.readouterr().out
    for line in ("A. TRANSLATION-UNIT RESIDUE", "core_w.cpp", "GAME-ONLY", "EDITOR-ONLY",
                 "crt_* units excluded", "families absent from dst.exe entirely: 1 class(es)",
                 "count mismatch 4 vs 9", "NOTE: the raw window covers 5 different units",
                 "unit filter narrows the window to 5 of 9", "too small to hash",
                 "the bodies disagree", "position after absent-family strip", "position only",
                 "ranked guesses", "MUTUAL", "E. UNIT EDGES", "after the unit's last anchor",
                 "fewer than 2 anchors in the unit", "D. UNMATCHED ON BOTH SIDES UNDER THE SAME NAME",
                 "C. SIGNATURE DIVERGENCE", "genuine divergence    : 2", "never transferred     : 1",
                 "[renamed]", "wrote ledger skeleton"):
        assert line in text, line
    doc = json.loads(out.read_text(encoding = "utf-8"))
    assert (doc["from"], doc["to"]) == ("src.exe", "dst.exe")
    best = {r["a"]: r["candidates"][0]["b"] for r in doc["ranked"]}
    assert best["00001030"] == "00002030" and best["00001040"] == "00002040"
    assert best["00001060"] == "00002060" and best["00001100"] == "00002045"
    assert doc["name_core_candidates"][0]["core"] == "CFoo_two"
    assert doc["signature_drift"][0]["diffs"] == ["param0 CFoo * -> CDemonActor *"]
    pairs = json.loads(ledger.read_text(encoding = "utf-8"))["pairs"]
    assert {p["a"]: p["b"] for p in pairs}["00001030"] == "00002030"
    assert len({p["a"] for p in pairs}) == len(pairs) == len({p["b"] for p in pairs})


def test_weak_pairs_can_return_to_the_residue_and_crt_can_be_read(mapping, capsys):
    rsg.main(["--mapping", mapping, "--min-confidence", "0.6", "--include-crt", "--section", "ae"])
    text = capsys.readouterr().out
    assert "(1 below 0.6 returned to the residue)" in text and "crt_z.c" in text
    assert "B. UNRESOLVED" not in text and "crt_* units excluded" not in text


def test_the_report_can_be_narrowed_to_one_unit_and_a_few_rows(mapping, capsys):
    rsg.main(["--mapping", mapping, "--show", "1", "--tu", "core_x.cpp", "--section", "abcde"])
    text = capsys.readouterr().out
    assert "more units (raise --show)" in text and "core_r.cpp   between" not in text
    rsg.main(["--mapping", mapping, "--show", "1", "--section", "be"])
    text = capsys.readouterr().out
    assert "more pairable brackets (raise --show)" in text and "more regions (raise --show)" in text


def test_the_brackets_alone_and_rows_elided_past_the_limit(mapping, capsys):
    rsg.main(["--mapping", mapping, "--section", "b"])
    text = capsys.readouterr().out
    assert "B. UNRESOLVED" in text and "E. UNIT EDGES" not in text
    rsg.main(["--mapping", mapping, "--section", "cd", "--show", "1"])
    text = capsys.readouterr().out
    assert text.count("more (raise --show)") == 3 and "ambiguous cores   : 1" in text


def test_empty_sections_say_so_and_a_one_sided_leftover_is_unsure(capsys):
    a, b = report_images()
    ctx = rsg.RankContext(a, b, {}, {})
    assert rsg.section_b([], [], ctx, {}, {}, 5, None) == ([], [])
    assert rsg.section_e([], ctx, {}, 5, None) == []
    one_sided = rsg.Bracket("core_x.cpp", "00001000", "00001050", "00002000", "00002050",
                            ["00001030", "00001040"], ["00002030"], ["00002030"], 1, "count mismatch")
    rsg.section_b([one_sided], [], ctx, a.shapes, {"00002030": shape("a1")}, 5, None)
    assert rsg.section_c([{"a": "00001000", "b": "00002000"}, {"a": "0000dead", "b": "00002000"}],
                         a, a, 5) == ([], [], [])
    text = capsys.readouterr().out
    assert "UNSURE -- no proposal: 1 src.exe / 0 dst.exe left over" in text
    assert "0 edge function(s) ranked" in text and "genuine divergence    : 0" in text


def test_the_canonical_mapping_is_the_default(mapping, monkeypatch, capsys):
    monkeypatch.setattr(rsg, "canonical_mapping", lambda program: mapping)
    rsg.main(["--section", "c", "--show", "0"])
    assert f"mapping: {mapping}" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["report_sibling_gaps.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "report_sibling_gaps.py"), run_name = "__main__")
    assert exit_info.value.code == 0
