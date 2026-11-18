# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from disasm_helpers import insn
from repo_paths import SCRIPTS_DIR
import vtable_class_tree as vct


# --- what a function installs -------------------------------------------------------------------

TABLES = {"00500000": [], "00500100": []}


def test_a_table_counts_wherever_its_address_is_an_immediate():
    body = [insn("mov", "dword ptr [ebx + 0x154], 0x500000"), insn("mov", "edx, 0x500100"),
            insn("push", "0x500100"), insn("lea", "eax, [0x500000]"),
            insn("cmp", "eax, 0x500000"),               # a comparison installs nothing
            insn("mov", "eax, 0x123456")]               # not a table
    assert vct.install_events(body, TABLES) == [("store", "00500000"), ("store", "00500100"),
                                                ("store", "00500100"), ("store", "00500000")]


@pytest.mark.parametrize("setup, member", [
    ([insn("add", "eax, 0x158"), insn("push", "eax")], True),
    ([insn("lea", "eax, [ebx + 0x1e8]"), insn("push", "eax")], True),
    ([insn("push", "ebx")], False),
    ([insn("add", "esp, 4")], False),                    # a stack adjustment
    ([insn("lea", "eax, [esp + 8]")], False),            # a stack slot
    ([insn("lea", "eax, [ebx]")], False),
])
def test_a_call_handed_this_plus_an_offset_is_a_members(setup, member):
    body = setup + [insn("call", "0x401000")]
    assert vct.member_call(body, len(setup)) is member
    assert vct.install_events(body, TABLES) == ([] if member else [("call", "00401000")])


def test_indirect_calls_are_not_constructor_calls():
    assert vct.install_events([insn("call", "eax"), insn("call", "dword ptr [eax + 4]")], TABLES) == []


# --- parents ------------------------------------------------------------------------------------

# CBase: two slots; CDerived copies slot 0 and overrides slot 1; CMember shares nothing;
# CFolded shares only a folded stub; CBig is longer than CDerived
SLOTS = {"base": ["f0", "f1"], "derived": ["f0", "d1", "d2"], "member": ["m0", "m1", "m2"],
         "folded": ["s", "s"], "folds": ["s", "x", "y"], "big": ["f0", "f1", "b2", "b3"]}


def test_a_base_is_no_longer_and_shares_an_unfolded_slot():
    folded = vct.folded_functions(SLOTS)
    assert folded == {"s"}
    assert vct.extends(SLOTS, folded, "derived", "base")
    assert not vct.extends(SLOTS, folded, "derived", "member")
    assert not vct.extends(SLOTS, folded, "folds", "folded")
    assert not vct.extends(SLOTS, folded, "derived", "big")         # longer than the derived


def test_a_constructor_names_the_base_it_calls_before_installing_its_own_table():
    events = {"base_ctor": [("store", "base")],
              "member_ctor": [("store", "member")],
              "derived_ctor": [("call", "base_ctor"), ("call", "member_ctor"), ("call", "helper"),
                               ("store", "derived")]}
    assert vct.infer_parents(events, SLOTS) == {"derived": ("base", 1, {"constructor": 1})}


def test_a_destructor_names_the_base_it_calls_after_installing_its_own_table():
    events = {"base_dtor": [("store", "base")],
              "derived_dtor": [("store", "derived"), ("call", "base_dtor")]}
    assert vct.infer_parents(events, SLOTS) == {"derived": ("base", 1, {"destructor": 1})}


def test_a_callee_installing_the_same_table_is_not_a_base():
    events = {"other": [("store", "derived")], "derived_ctor": [("call", "other"), ("store", "derived")]}
    assert vct.infer_parents(events, SLOTS) == {}


def test_an_inlined_chain_nests_the_tables_it_installs():
    slots = {"root": ["r0"], "mid": ["r0", "m1"], "leaf": ["r0", "m1", "l2"], "other": ["o0", "o1"]}
    events = {"leaf_ctor": [("store", "root"), ("store", "mid"), ("store", "leaf")],
              # no table here extends all the others, so it says nothing
              "mixed": [("store", "root"), ("store", "other")]}
    assert vct.infer_parents(events, slots) == {
        "leaf": ("mid", 1, {"inlined": 1}), "mid": ("root", 1, {"inlined": 1})}


def test_an_inlined_chain_skips_a_link_that_does_not_extend():
    slots = {"a": ["x0", "a1"], "b": ["y0", "b1"], "leaf": ["x0", "b1", "l2"]}
    # leaf extends both a and b, but a does not extend b: only leaf -> a is a vote
    events = {"ctor": [("store", "a"), ("store", "b"), ("store", "leaf")]}
    assert vct.infer_parents(events, slots) == {"leaf": ("a", 1, {"inlined": 1})}


def test_a_parent_needs_a_strict_majority_of_its_votes():
    events = {"base_ctor": [("store", "base")], "big_ctor": [("store", "big")],
              "one": [("call", "base_ctor"), ("store", "derived")],
              "two": [("store", "derived"), ("call", "big_ctor")]}
    slots = {**SLOTS, "derived": ["f0", "f1", "d2", "d3"]}
    assert vct.infer_parents(events, slots) == {}


def test_a_function_installing_nothing_votes_for_nothing():
    assert vct.infer_parents({"f": [("call", "g")]}, SLOTS) == {}


# --- classes ------------------------------------------------------------------------------------

class Image:
    def __init__(self, by_addr, vtables = ()):
        self.by_addr = by_addr
        self.vtables = list(vtables)


def test_a_table_is_its_label_or_the_class_of_the_functions_installing_it():
    img = Image({"c1": {"name": "core_a.cpp_CFoo_ctor_FUN_00000001"},
                 "c2": {"name": "core_a.cpp_CFoo_dtor_FUN_00000002"},
                 "c3": {"name": "core_a.cpp_CBar_ctor_FUN_00000003"},
                 "n": {"name": "core_a.cpp_FUN_00000004"}})
    slots = {"t1": [], "t2": [], "t3": [], "t4": [], "t5": []}
    installers = {"t2": {"c1", "c2", "c3"}, "t3": {"c1", "c3"}, "t4": {"n", "gone"}}
    labels = {"t1": "g_CLabelledVTable", "t5": "PTR_t5"}
    assert vct.classes_of(img, slots, installers, labels) == {"t1": ("CLabelled", "label"),
                                                              "t2": ("CFoo", "installer")}


def test_the_actor_tree_check_matches_through_type_names():
    tree = {"CDemonActor": None, "CBox": "CDemonActor", "CSkeleton_Indian": "CBoneGuy", "CBoneGuy": "CDemonActor"}
    assert vct.check_actor(tree, "CBox", "CDemonActor") == "agree"
    assert vct.check_actor(tree, "CSkeletonIndian", "CBoneGuy") == "agree"
    assert vct.check_actor(tree, "CBox", "CBoneGuy") == "disagree"
    assert vct.check_actor(tree, "CDemonActor", None) == "agree"
    assert vct.check_actor(tree, "CCodec", "CThing") is None
    assert vct.check_actor(tree, None, "CThing") is None


# --- the whole run ------------------------------------------------------------------------------

def table(addr, *funcs):
    return {"addr": addr, "functions": [{"func_addr": f} for f in funcs]}


@pytest.fixture(name = "world")
def fixture_world(monkeypatch, tmp_path):
    """CBase installed by its constructor; CDerived over it, registered as an actor;
    CWrong installed over CBase but registered under CDerived; an unlabelled, uninstalled table."""
    img = Image({"00401000": {"name": "core_a.cpp_CBase_ctor_FUN_00401000"},
                 "00401100": {"name": "core_a.cpp_CDerived_ctor_FUN_00401100"},
                 "00401200": {"name": "core_a.cpp_CWrong_ctor_FUN_00401200"},
                 "00401300": {"name": "core_a.cpp_FUN_00401300"}},
                [table("00500000", "00402000", "00402004"),
                 table("00500100", "00402000", "00402104", "00402108"),
                 table("00500200", "00402000", "00402204", "00402208"),
                 table("00500300", "00402300"), {"functions": []}])
    bodies = {"00401000": [insn("mov", "dword ptr [eax], 0x500000")],
              "00401100": [insn("push", "ebx"), insn("call", "0x401000"), insn("mov", "dword ptr [ebx], 0x500100")],
              "00401200": [insn("push", "ebx"), insn("call", "0x401000"), insn("mov", "dword ptr [ebx], 0x500200")],
              "00401300": [insn("ret")]}
    monkeypatch.setattr(vct.sm, "Image", lambda program: img)
    monkeypatch.setattr(vct.sm, "ANNOTATIONS", str(tmp_path))
    monkeypatch.setattr(vct.vss, "_function_insns", lambda image, cache, addr: bodies[addr])
    monkeypatch.setattr(vct, "load_labels", lambda program: {"00500000": "g_CBaseVTable"})
    monkeypatch.setattr(vct.act, "load", lambda program: (
        {"CBase": None, "CDerived": "CBase", "CWrong": "CDerived"}, None))
    return tmp_path


def test_the_analysis_places_every_installed_table(world):
    report = vct.analyse("b.exe")
    rows = {r["table"]: r for r in report["tables"]}
    assert set(rows) == {"00500000", "00500100", "00500200", "00500300"}
    assert rows["00500100"] == {
        "table": "00500100", "class": "CDerived", "class_source": "installer", "slots": 3,
        "parent": "00500000", "parent_class": "CBase", "votes": 1, "evidence": {"constructor": 1},
        "installers": ["00401100"], "actor_tree": "agree", "registered_parent": "CBase"}
    assert rows["00500200"]["actor_tree"] == "disagree"
    assert (rows["00500000"]["class_source"], rows["00500000"]["parent"]) == ("label", None)
    assert rows["00500300"]["class"] is None and rows["00500300"]["actor_tree"] is None
    assert vct.tally(report) == {"tables": 4, "installed": 3, "classed": 3, "with_parent": 2,
                                 "actor_agree": 1, "actor_disagree": 1}


def test_the_tree_text_nests_children_and_lists_disagreements(world):
    text = vct.render_tree(vct.analyse("b.exe"))
    assert "CBase  00500000  (2 slots)\n  CDerived  00500100  (3 slots)\n  CWrong  00500200  (3 slots)\n" in text
    assert ("Disagreements with registerActorClass:\n"
            "  CWrong 00500200: installed over CBase (00500000), registered under CDerived\n") in text
    assert "  with_parent     2" in text


def test_a_tree_without_disagreements_lists_none_and_tolerates_a_cycle():
    report = {"program": "b.exe", "tables": [
        {"table": "a", "class": None, "slots": 1, "parent": "b", "actor_tree": None},
        {"table": "b", "class": "CB", "slots": 1, "parent": "a", "actor_tree": None},
        {"table": "r", "class": "CR", "slots": 2, "parent": None, "actor_tree": None, "installers": []},
        {"table": "c", "class": "CC", "slots": 3, "parent": "r", "actor_tree": "agree", "installers": ["f"]}]}
    for r in report["tables"]:
        r.setdefault("installers", [])
    text = vct.render_tree(report)
    assert "CR  r  (2 slots)\n  CC  c  (3 slots)\n" in text
    assert "Disagreements" not in text and "CB" not in text      # a cycle has no root to print from


def test_main_writes_both_reports_to_the_programs_reports_by_default(world, capsys):
    vct.main(["b.exe"])
    reports = world / "b.exe" / "reports"
    assert json.loads((reports / "class_hierarchy.json").read_text())["program"] == "b.exe"
    assert (reports / "class_hierarchy.txt").read_text().startswith("Class hierarchy from vtable installs: b.exe")
    out = capsys.readouterr().out
    assert "  actor_disagree  1" in out and "wrote " in out


def test_main_writes_where_it_is_told(world, tmp_path):
    vct.main(["b.exe", "--out-json", str(tmp_path / "x" / "h.json"), "--out-txt", str(tmp_path / "y" / "h.txt")])
    assert (tmp_path / "x" / "h.json").exists() and (tmp_path / "y" / "h.txt").exists()


def test_the_script_runs_as_main(monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["vtable_class_tree.py", "--help"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "vtable_class_tree.py"), run_name = "__main__")
    assert stop.value.code == 0
    assert "Recover the class hierarchy" in capsys.readouterr().out
