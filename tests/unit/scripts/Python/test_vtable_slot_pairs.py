# Imports
import json
import os
import runpy
import sys
from collections import Counter

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import vtable_slot_pairs as vsp


class Image:
    def __init__(self, names, tables):
        self.by_addr = {a: {"name": n} for a, n in names.items()}
        self.vtables = [{"addr": t, "functions": [{"func_addr": f} for f in slots]} for t, slots in tables.items()]


# --- pairing tables -----------------------------------------------------------------------------

def test_tables_pair_with_their_mutual_best_by_anchors():
    slots_a = {"ta": ["a1", "a2", "a3"], "tz": ["a1", "x"]}
    slots_b = {"tb": ["b1", "b2", "b3"], "ty": ["b1", "q", "r"]}
    a2b = {"a1": "b1", "a2": "b2", "a3": "b3"}
    paired = vsp.pair_tables(slots_a, slots_b, a2b)
    assert paired == {"tb": ("ta", [(0, 0), (1, 1), (2, 2)])}           # ty and tz have one anchor only


def test_a_tie_or_a_one_way_best_pairs_nothing():
    a2b = {"a1": "b1", "a2": "b2"}
    tied = vsp.pair_tables({"ta": ["a1", "a2"], "tc": ["a1", "a2"]}, {"tb": ["b1", "b2"]}, a2b)
    assert tied == {}
    # tb's best is ta, but ta's best is td
    one_way = vsp.pair_tables({"ta": ["a1", "a2", "a3"]},
                              {"tb": ["b1", "b2"], "td": ["b1", "b2", "b3"]}, {**a2b, "a3": "b3"})
    assert one_way == {"td": ("ta", [(0, 0), (1, 1), (2, 2)])}


def test_a_back_match_that_ties_pairs_nothing():
    a2b = {"a1": "b1", "a2": "b2"}
    assert vsp.pair_tables({"ta": ["a1", "a2"]}, {"tb": ["b1", "b2"], "tc": ["b1", "b2", None]}, a2b) == {}


# --- placing slots ------------------------------------------------------------------------------

def test_anchors_and_even_gaps_are_placed_and_uneven_gaps_returned():
    placed, uneven = vsp.placed_slots(6, 6, [(0, 0), (3, 4)])
    assert placed == [(0, 0), (3, 4)]
    assert uneven == [(0, 0, 2, 3), (3, 4, 2, 1)]
    assert vsp.placed_slots(5, 6, [(0, 0), (3, 4)]) == ([(0, 0), (3, 4), (4, 5)], [(0, 0, 2, 3)])
    assert vsp.placed_slots(2, 2, []) == ([(0, 0), (1, 1)], [])
    assert vsp.placed_slots(1, 1, [(0, 0)]) == ([(0, 0)], [])


def test_gap_choices_leave_out_the_longer_sides_extras_in_order():
    assert vsp.gap_choices(1, 2) == [[(0, 1)], [(0, 0)]]
    assert vsp.gap_choices(2, 1) == [[(1, 0)], [(0, 0)]]
    assert vsp.gap_choices(0, 2) == []
    assert vsp.gap_choices(1, 4) == []                                    # too uneven
    assert vsp.gap_choices(12, 13) == []                                  # too long


def test_names_give_their_class_and_method():
    assert vsp.class_of("core_a.cpp_CBox_open_FUN_00401000") == "CBox"
    assert vsp.class_of("core_a.cpp_SFly_go_FUN_00401000") == "SFly"
    assert vsp.class_of("core_a.cpp_helper_FUN_00401000") is None
    assert vsp.class_of("core_a.cpp_Cat_go_FUN_00401000") is None        # not a class name
    assert vsp.class_of("core_a.cpp_FUN_00401000") is None
    assert vsp.method_of("core_a.cpp_CBox_open_FUN_00401000") == "open"
    assert vsp.method_of("core_a.cpp_helper_FUN_00401000") == "helper"
    assert vsp.method_of("core_a.cpp_FUN_00401000") is None


def test_ancestors_stop_at_the_root_or_a_cycle():
    assert vsp.ancestors({"C": "B", "B": "A"}, "C") == ["C", "B", "A"]
    assert vsp.ancestors({"A": "B", "B": "A"}, "A") == ["A", "B"]
    assert vsp.ancestors({}, None) == []


def test_the_hierarchy_comes_from_the_class_tree_report(tmp_path, monkeypatch):
    monkeypatch.setattr(vsp.sm, "ANNOTATIONS", str(tmp_path))
    assert vsp.load_hierarchy("b.exe") == ({}, {})
    (tmp_path / "b.exe" / "reports").mkdir(parents = True)
    (tmp_path / "b.exe" / "reports" / "class_hierarchy.json").write_text(json.dumps({"tables": [
        {"table": "t1", "class": "CB", "parent_class": "CA"}, {"table": "t2", "class": "CA", "parent_class": None},
        {"table": "t3", "class": None, "parent_class": "CA"}]}), encoding = "utf-8")
    assert vsp.load_hierarchy("b.exe") == ({"t1": "CB", "t2": "CA"}, {"CB": "CA"})


def test_pairs_score_by_whether_their_address_order_agrees():
    assert vsp.order_score([("00000001", "00000010"), ("00000002", "00000020"), ("00000003", "00000005")]) == -1
    assert vsp.order_score([("00000001", "00000010"), ("00000001", "00000020")]) == 0


def test_similarity_is_the_dice_of_mnemonic_ngrams_and_cached(monkeypatch):
    computed = []

    class Shape:
        def __init__(self, mnemonics):
            self.mnemonics = mnemonics

    def shape(img, rec):
        computed.append(rec["name"])
        return None if rec["name"] == "broken" else Shape(tuple(rec["name"]))

    monkeypatch.setattr(vsp.sm, "compute_shape", shape)
    a = Image({"a1": "abcd", "a2": "broken"}, {})
    b = Image({"b1": "abcd", "b2": "wxyz"}, {})
    sim = vsp.Similarity(a, b)
    assert sim("a1", "b1") == 1.0 and sim("a1", "b2") == 0.0
    assert sim("a2", "b1") == 0.0 and sim("gone", "b1") == 0.0
    assert computed == ["abcd", "abcd", "wxyz", "broken"]


def test_similarity_of_two_empty_bodies_is_nothing(monkeypatch):
    class Shape:
        mnemonics = ()

    monkeypatch.setattr(vsp.sm, "compute_shape", lambda img, rec: Shape())
    sim = vsp.Similarity(Image({"a": "x"}, {}), Image({"b": "y"}, {}))
    assert sim("a", "b") == 0.0


# --- uneven gaps --------------------------------------------------------------------------------

def method(names):
    def look(sa, i):
        return names.get(sa[i]) if 0 <= i < len(sa) and sa[i] else None
    return look


def test_edits_record_insertions_by_their_neighbours_and_deletions_by_name():
    names = {"p": "poll", "h": "has3d", "s": "setPos", "e": "edit"}
    edits = vsp.Edits()
    edits.learn(method(names), ["p", "h", "s"], 0, 0, 2, 3, [(0, 0), (1, 2)])   # target slot 2 is new
    edits.learn(method(names), ["p", "e", "s"], 0, 0, 1, 0, [])               # source slot 1 dropped
    edits.learn(method(names), ["p", None, "s"], 0, 0, 1, 0, [])              # an unnamed one teaches nothing
    assert edits.new == {(2, "has3d", "setPos")}
    assert edits.dropped == {(1, "edit")}


def test_a_gap_is_walked_around_the_known_edits_or_not_at_all():
    names = {"p": "poll", "h": "has3d", "s": "setPos", "e": "edit"}
    edits = vsp.Edits()
    edits.new.add((2, "has3d", "setPos"))
    edits.dropped.add((2, "edit"))
    look = method(names)
    assert edits.walk(look, ["p", "h", "s"], 0, 0, 2, 3) == [(0, 0), (1, 2)]
    assert edits.walk(look, ["p", "h", "e", "s"], 0, 0, 3, 2) == [(0, 0), (2, 1)]
    assert edits.walk(look, ["p", "h", "s"], 0, 0, 2, 4) is None                # one extra unexplained


def gap_world():
    """A base class's gap where slot 2 was inserted, a sibling's longer gap holding the same
    insertion, and a pure insertion at slot 2 between the same two methods. Addresses are hex,
    as the address-order score reads them."""
    names_a = {"a0": "CD_poll", "a1": "CD_has3d", "a2": "CD_setPos",
               "c0": "CW_poll", "c1": "CW_has3d", "c2": "CW_setPos", "c3": "CW_setVel"}
    slots_a = {"sd": ["a0", "a1", "a2"], "sw": ["c0", "c1", "c2", "c3"], "sx": ["a0", "a1", "a2"]}
    slots_b = {"bd": ["b0", "b1", "bf", "b2"], "bw": ["d0", "d1", "df", "d2", "d3"], "bx": ["b0", "b1", "bf", "b2"]}
    img_a = Image({a: f"core_a.cpp_{n}_FUN_000000{a}" for a, n in names_a.items()}, {})
    return slots_a, slots_b, img_a


def test_a_gap_takes_the_choice_its_bodies_and_order_clearly_prefer():
    slots_a, slots_b, img_a = gap_world()
    scores = {("a1", "b1"): 1.0, ("a2", "b2"): 1.0}
    out, unresolved = vsp.resolve_gaps([("bd", "sd", (0, 0, 2, 3))], slots_a, slots_b, img_a,
                                       lambda a, b: scores.get((a, b), 0.0))
    assert sorted(out["bd"]) == [(1, 1), (2, 3)] and unresolved == 0


def test_a_known_insertion_places_a_gap_no_score_could():
    slots_a, slots_b, img_a = gap_world()
    gaps = [("bx", "sx", (1, 1, 0, 1)), ("bw", "sw", (0, 0, 3, 4)), ("bd", "sd", (0, 0, 2, 3))]
    out, unresolved = vsp.resolve_gaps(gaps, slots_a, slots_b, img_a, lambda a, b: 0.0, min_margin = 10)
    assert sorted(out["bw"]) == [(1, 1), (2, 3), (3, 4)]
    assert sorted(out["bd"]) == [(1, 1), (2, 3)] and unresolved == 0


def test_the_walks_stop_after_their_rounds_even_while_settling():
    slots_a, slots_b, img_a = gap_world()
    gaps = [("bx", "sx", (1, 1, 0, 1)), ("bw", "sw", (0, 0, 3, 4))]
    out, unresolved = vsp.resolve_gaps(gaps, slots_a, slots_b, img_a, lambda a, b: 0.0, min_margin = 10,
                                       rounds = 1)
    assert sorted(out["bw"]) == [(1, 1), (2, 3), (3, 4)] and unresolved == 0


def test_a_gap_no_choice_wins_by_the_margin_stays_open():
    slots_a, slots_b, img_a = gap_world()
    gaps = [("bd", "sd", (0, 0, 2, 3))]
    out, unresolved = vsp.resolve_gaps(gaps, slots_a, slots_b, img_a, lambda a, b: 0.0, min_margin = 10)
    assert dict(out) == {} and unresolved == 3


def test_an_unenumerable_gap_is_left_unless_a_walk_settles_it():
    slots_a = {"sa": [f"a{i}" for i in range(14)]}
    slots_b = {"sb": [f"b{i}" for i in range(15)]}
    img_a = Image({}, {})
    out, unresolved = vsp.resolve_gaps([("sb", "sa", (-1, -1, 14, 15))], slots_a, slots_b, img_a, lambda a, b: 1.0)
    assert dict(out) == {} and unresolved == 15


def test_a_gap_with_an_empty_slot_scores_without_it():
    slots_a = {"sa": ["a0", "a2"]}
    slots_b = {"sb": ["b0", None, "b2"]}
    out, _ = vsp.resolve_gaps([("sb", "sa", (-1, -1, 2, 3))], slots_a, slots_b, Image({}, {}),
                              lambda a, b: 1.0 if (a, b) in (("a0", "b0"), ("a2", "b2")) else 0.0)
    assert sorted(out["sb"]) == [(0, 0), (1, 2)]


# --- proposing ----------------------------------------------------------------------------------

NAMES_A = {"a0": "core_a.cpp_CBox_init_FUN_000000a0", "a1": "core_a.cpp_CBox_open_FUN_000000a1",
           "a2": "core_a.cpp_CBox_shut_FUN_000000a2", "a3": "core_a.cpp_CBox_done_FUN_000000a3",
           "a4": "core_b.cpp_CBox_far_FUN_000000a4", "a5": "core_a.cpp_FUN_000000a5",
           "a6": "core_a.cpp_CLid_tip_FUN_000000a6", "a7": "core_a.cpp_CBox_fold_FUN_000000a7",
           "a8": "core_a.cpp_CBox_x_FUN_000000a8", "a9": "core_a.cpp_CBox_y_FUN_000000a9",
           "aa": "core_a.cpp_CBox_z_FUN_000000aa", "ab": "core_a.cpp_CBox_w_FUN_000000ab"}
NAMES_B = {"b0": "core_a.cpp_CBox_init_FUN_000000b0", "b2": "core_a.cpp_CBox_shut_FUN_000000b2",
           "b3": "FUN_000000b3", **{b: f"core_a.cpp_FUN_000000{b}"
                                    for b in ("b1", "b4", "b5", "b6", "b7", "b8", "b9", "ba", "bb", "bc", "bd")}}


def propose_world(tables_a = None, tables_b = None, pairs = ()):
    """A table anchored at 0, 2 and 9, a slot between for each way to refuse, and two
    unpaired tables that fold a7 and b8. The mapping already pairs aa with something else."""
    ta = {"ta": ["a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8", "a9", "aa"], "fa": ["a7", "a7"]}
    tb = {"tb": ["b0", "b1", "b2", "b3", "b4", "b5", "b6", "b7", "b8", "b9", "ba"], "fb": ["b8", "b8"]}
    ta.update(tables_a or {})
    tb.update(tables_b or {})
    mapping = {"pairs": [{"a": "a0", "b": "b0"}, {"a": "a2", "b": "b2"}, {"a": "a9", "b": "b9"},
                         {"a": "aa", "b": "elsewhere"}, {"a": "ax", "b": "bx", "ambiguous": True}, *pairs]}
    return Image(NAMES_A, ta), Image(NAMES_B, tb), mapping


def no_similarity(_a, _b):
    return 0.0


def test_each_refusal_and_the_accepted_pair():
    img_a, img_b, mapping = propose_world()
    accepted, refused, stats = vsp.propose(img_a, img_b, mapping, {"tb": "CBox"}, {}, similarity = no_similarity)
    assert accepted == [("a1", "b1", "CBox_open. vtable tb slot 1, as ta's; 1 table(s) agree, class checked.")]
    # b3 has no unit, b4's differs, b5's source is unnamed, b6's class is not CBox's, b7 and b8
    # hold a folded function, and ba sits opposite aa, which the mapping already pairs
    assert refused == Counter({"unit": 2, "named": 1, "class": 1, "folded": 2, "taken": 1})
    assert stats == {"tables_paired": 1, "unplaced_slots": 0, "accepted": 1, "gap_slots_placed": 0}


def test_a_target_function_placed_against_two_sources_is_inconsistent():
    # ub places b1 against a3, where tb places it against a1
    img_a, img_b, mapping = propose_world({"ua": ["ab", "a3", "a8"]}, {"ub": ["bc", "b1", "bd"]},
                                          [{"a": "ab", "b": "bc"}, {"a": "a8", "b": "bd"}])
    _, refused, _ = vsp.propose(img_a, img_b, mapping, similarity = no_similarity)
    assert refused["inconsistent"] == 1


def test_an_empty_slot_places_nothing():
    # ub's middle slot is empty on the source side, so b1 is only ever placed by tb
    img_a, img_b, mapping = propose_world({"ua": ["ab", None, "a8"]}, {"ub": ["bc", "b1", "bd"]},
                                          [{"a": "ab", "b": "bc"}, {"a": "a8", "b": "bd"}])
    accepted, refused, _ = vsp.propose(img_a, img_b, mapping, {"tb": "CBox"}, {}, similarity = no_similarity)
    assert [b for _, b, _ in accepted] == ["b1"] and refused["inconsistent"] == 0


def test_a_source_function_placed_against_two_targets_is_taken():
    # ub places a1 against bb, where tb places it against b1
    img_a, img_b, mapping = propose_world({"ua": ["ab", "a1", "a8"]}, {"ub": ["bc", "bb", "bd"]},
                                          [{"a": "ab", "b": "bc"}, {"a": "a8", "b": "bd"}])
    _, refused, _ = vsp.propose(img_a, img_b, mapping, similarity = no_similarity)
    # b1 and bb share a1; ba's aa and b8's a8 the mapping pairs elsewhere
    assert refused["taken"] == 4


def test_with_no_known_class_the_class_check_is_skipped():
    img_a, img_b, mapping = propose_world()
    accepted, refused, _ = vsp.propose(img_a, img_b, mapping, similarity = no_similarity)
    assert ("a6", "b6", "CLid_tip. vtable tb slot 6, as ta's; 1 table(s) agree.") in accepted
    assert "class" not in refused


def test_a_class_ancestor_passes_the_class_check():
    img_a, img_b, mapping = propose_world()
    accepted, refused, _ = vsp.propose(img_a, img_b, mapping, {"tb": "CBox"}, {"CBox": "CLid"},
                                       similarity = no_similarity)
    assert any(b == "b6" for _, b, _ in accepted) and "class" not in refused


def test_the_default_similarity_is_built_from_the_images(monkeypatch):
    built = []
    monkeypatch.setattr(vsp, "Similarity", lambda a, b: built.append((a, b)) or no_similarity)
    img_a, img_b, mapping = propose_world()
    vsp.propose(img_a, img_b, mapping)
    assert built == [(img_a, img_b)]


def test_an_uneven_gap_in_a_paired_table_is_resolved_on_the_way():
    img_a, img_b, mapping = propose_world({"ta": ["a0", "a1", "a2", "a8"]}, {"tb": ["b0", "b5", "b1", "b2", "bd"]},
                                          [{"a": "a8", "b": "bd"}])
    accepted, _, stats = vsp.propose(img_a, img_b, mapping,
                                     similarity = lambda a, b: 1.0 if (a, b) == ("a1", "b1") else 0.0)
    assert stats["gap_slots_placed"] == 1 and [b for _, b, _ in accepted] == ["b1"]


# --- main ---------------------------------------------------------------------------------------

@pytest.fixture(name = "run")
def fixture_run(tmp_path, monkeypatch):
    img_a, img_b, mapping = propose_world()
    monkeypatch.setattr(vsp.sm, "Image", lambda program: img_a if program == "a.exe" else img_b)
    monkeypatch.setattr(vsp.sm, "ANNOTATIONS", str(tmp_path))
    monkeypatch.setattr(vsp, "Similarity", lambda a, b: no_similarity)
    path = tmp_path / "mapping.json"
    path.write_text(json.dumps({**mapping, "from": "a.exe", "to": "b.exe"}), encoding = "utf-8")

    def go(*extra):
        vsp.main(["--mapping", str(path), "--out-ledger", str(tmp_path / "ledger.json"), *extra])
        return json.loads((tmp_path / "ledger.json").read_text(encoding = "utf-8"))
    return go


def test_main_writes_the_proposals_as_ledger_pairs(run, tmp_path, capsys):
    ledger = run("--report", str(tmp_path / "r.txt"))
    assert (ledger["schema"], ledger["from"], ledger["to"]) == (1, "a.exe", "b.exe")
    assert {"a": "a1", "b": "b1",
            "note": "CBox_open. vtable tb slot 1, as ta's; 1 table(s) agree."} in ledger["pairs"]
    out = capsys.readouterr().out
    assert "1 table pair(s); 0 slot(s) placed from uneven gaps, 0 left unplaced" in out
    assert "(no class_hierarchy.json for b.exe: the class check was skipped)" in out
    assert (tmp_path / "r.txt").read_text(encoding = "utf-8").startswith("a1 b1  CBox_open.")


def test_main_with_a_hierarchy_and_nothing_refused_says_so(run, tmp_path, capsys, monkeypatch):
    monkeypatch.setattr(vsp, "propose", lambda *args: ([], Counter(), {"tables_paired": 0, "gap_slots_placed": 0,
                                                                      "unplaced_slots": 0, "accepted": 0}))
    monkeypatch.setattr(vsp, "load_hierarchy", lambda program: ({"t": "C"}, {}))
    assert run()["pairs"] == []
    out = capsys.readouterr().out
    assert "0 pair(s) proposed; refused: none" in out and "class check was skipped" not in out


def test_the_script_runs_as_main(monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["vtable_slot_pairs.py", "--help"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "vtable_slot_pairs.py"), run_name = "__main__")
    assert stop.value.code == 0
    assert "Pair the functions two builds' vtables hold" in capsys.readouterr().out
