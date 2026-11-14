# Imports
import json
import os
import runpy
import sys
from collections import Counter

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, this_param, write_bucket, write_json
import actor_class_tree
import apply_sibling_annotations
import map_vtable_slots
import name_vtable_slot_functions as nvs


# The reference build: CDemonActor's setup and process, and CCharacter's kill,
# which has no `this_ptr` to retype.
REFERENCE = [
    function(0x401000, "core_actor.cpp_CDemonActor_setup_FUN_00401000", ret = "void", conv = "__cdecl",
             vars = {"params": [this_param("CDemonActor*")]}),
    function(0x401010, "core_actor.cpp_CDemonActor_process_FUN_00401010", ret = "void", conv = "__cdecl",
             vars = {"params": [this_param("CDemonActor*"), {"name": "delta_time", "type": "float"}]}),
    function(0x401020, "core_charactr.cpp_CCharacter_setup_FUN_00401020", ret = "void",
             vars = {"params": [this_param("CCharacter*")]}),
    function(0x401030, "core_charactr.cpp_CCharacter_kill_FUN_00401030", ret = "void"),
]
REF_TABLES = {"CDemonActor": ["00401000", "00401010"], "CCharacter": ["00401020", "00401010", "00401030"]}

# The target. Each name says which unit the function is in; the comments say
# which rule each table exercises.
TARGET = {
    0x412000: "core_actor.cpp_FUN_00412000",                     # CDemonActor::setup
    0x412010: "core_actor.cpp_FUN_00412010",                     # CDemonActor::process
    0x412020: "core_charactr.cpp_CCharacter_setup_FUN_00412020",  # already named
    0x412030: "FUN_00412030",                                    # no unit
    0x412040: "core_box.cpp_FUN_00412040",                       # CBox::setup
    0x412050: "core_crate.cpp_FUN_00412050",                     # two methods in two tables
    0x412060: "core_box.cpp_FUN_00412060",                       # past the contract
    0x412070: "core_enemy.cpp_FUN_00412070",                     # CEnemy::kill, no prototype
    0x412080: "core_enemy.cpp_FUN_00412080",                     # folded
    0x412090: "core_box.cpp_FUN_00412090",                       # in the wrong unit for CMineCar
    0x4120a0: "core_minecar.cpp_FUN_004120a0",                   # CMineCar::setup
    0x4120b0: "core_solo.cpp_FUN_004120b0",                      # no lineage in the contract
    0x4120c0: "core_wisp.cpp_FUN_004120c0",                      # CWisp::setup, under table-less CLost
    0x4120d0: "core_zombie.cpp_FUN_004120d0",                    # CZombie_Forest::setup, typed CZombieForest
    0x4120e0: "core_lost.cpp_FUN_004120e0",                      # CLost's own setup, shown by both its kids
    0x4120f0: "core_kida.cpp_FUN_004120f0",                      # each kid's own slot past the contract
    0x412100: "unkafter_kida.cpp_FUN_00412100",                  # a unit not yet known: CKidB's file supplies it
}
TABLES = {
    "CDemonActor": [0x412000, 0x412010],
    "CCharacter": [0x412020, 0x412010, 0x412030],
    "CBox": [0x412040, 0x412050, 0x412060],
    "CCrate": [0x412050, 0x412010],
    "CEnemy": [0x412080, 0x412080, 0x412070],
    "Minecar": [0x4120a0, 0x412090],     # labelled with another case than CMineCar registers
    "CGun": [0x412000, 0x412010],        # holds no core_gun.cpp function: a wrong label
    "CSolo": [0x4120b0],
    "CStray": [0x412000],                # registers nothing
    "CWisp": [0x4120c0, 0x412010],       # inherits process past its table-less parent
    "CZombie_Forest": [0x4120d0, 0x412010],
    # CLost has no table; its one setup appears in both its subclasses' tables.
    "CKidA": [0x4120e0, 0x412010, 0x4120f0],
    "CKidB": [0x4120e0, 0x412010, 0x412100],
}
CLASSES = [("CDemonActor", None, "actor"), ("CCharacter", "CDemonActor", "charactr"),
           ("CBox", "CDemonActor", "box"), ("CCrate", "CDemonActor", "crate"),
           ("CEnemy", "CCharacter", "enemy"), ("CMineCar", "CDemonActor", "minecar"),
           ("CGun", "CDemonActor", "gun"), ("CSolo", None, "solo"), ("CLost", "CDemonActor", "lost"),
           ("CWisp", "CLost", "wisp"), ("CZombie_Forest", "CDemonActor", "zombie"),
           ("CKidA", "CLost", "kida"), ("CKidB", "CLost", "kidb")]


def contract_row(slot, method, sibling = None):
    return {"slot": slot, "method": method, "sibling_slot": slot if sibling is None else sibling}


CONTRACT = {
    "CDemonActor": {"slots": [contract_row(0, "setup"), contract_row(1, "process")]},
    "CCharacter": {"slots": [contract_row(0, "setup"), contract_row(1, "process"), contract_row(2, "kill")]},
    "CBox": {"slots": [contract_row(0, "setup"), contract_row(1, "process"), contract_row(2, None)]},
}


def table_label(cls):
    # CZombie_Forest's table is labelled with its type name, as actor_classes.py spells it.
    return {"Minecar": "g_CMinecarVTable", "CZombie_Forest": "g_CZombieForestVTable"}.get(cls, f"g_{cls}VTable")


@pytest.fixture(name = "builds")
def fixture_builds(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)])
    annotations = install_programs(monkeypatch, tmp_path, {
        "ref.exe": (pe, REFERENCE),
        "dst.exe": (pe, [function(a, n) for a, n in TARGET.items()])})
    write_bucket(annotations, "ref.exe", "vtables", [
        {"addr": f"0050{i}000", "functions": [{"func_addr": f} for f in funcs]}
        for i, funcs in enumerate(REF_TABLES.values())])
    write_bucket(annotations, "ref.exe", "symbols_label", [
        {"addr": f"0050{i}000", "name": f"g_{c}VTable"} for i, c in enumerate(REF_TABLES)])
    write_bucket(annotations, "dst.exe", "vtables", [
        {"addr": f"006{i:02x}000", "functions": [{"func_addr": f"{f:08x}"} for f in funcs] + [{}]}
        for i, funcs in enumerate(TABLES.values())] + [{"addr": "00690000", "functions": []}])
    write_bucket(annotations, "dst.exe", "symbols_label", [
        {"addr": f"006{i:02x}000", "name": table_label(c)} for i, c in enumerate(TABLES)]
        + [{"addr": "00690000", "name": "g_DataTable"}])
    for cls, parent, unit in CLASSES:
        folder = annotations / "dst.exe" / "pseudocode" / "src" / "core" / f"{unit}.cpp"
        folder.mkdir(parents = True)
        parent_arg = f"&g_{parent}ClassInfo" if parent else "0"
        (folder / "staticInit.cpp").write_text(
            f'core_x_cpp_registerActorClass_FUN_0040c160(&g_{cls}ClassInfo,"{cls}",f,&v,1,{parent_arg});\n')
    for module in (actor_class_tree, map_vtable_slots, nvs):
        monkeypatch.setattr(module, "REPO_ROOT", str(tmp_path))
    contract = annotations / "dst.exe" / "reports" / "actor_vtable_contract.json"
    contract.parent.mkdir()
    write_json(contract, CONTRACT)
    return tmp_path


def plan_by_addr(result):
    return {p["addr"]: p for p in result["plan"]}


def test_only_genuine_overrides_in_the_classs_own_unit_are_planned(builds):
    result = nvs.build_plan("dst.exe", nvs.default_contract("dst.exe"), require_tu = True, reference = "ref.exe")
    plan = plan_by_addr(result)
    assert sorted((p["cls"], p["method"]) for p in plan.values()) == [
        ("CBox", "setup"), ("CDemonActor", "process"), ("CDemonActor", "setup"),
        ("CEnemy", "kill"), ("CLost", "setup"), ("CMineCar", "setup"), ("CWisp", "setup"),
        ("CZombie_Forest", "setup")]
    # One body in two sibling tables belongs to their table-less common parent.
    assert plan["004120e0"]["new_name"] == "core_lost.cpp_CLost_setup_FUN_004120e0"
    assert plan["004120e0"]["sig"]["params"] == [this_param("CLost*")]
    assert plan["004120c0"]["sig"]["params"] == [this_param("CWisp*")]
    # An underscored registered name is spelled as its type in the name and the receiver.
    assert plan["004120d0"]["new_name"] == "core_zombie.cpp_CZombieForest_setup_FUN_004120d0"
    assert plan["004120d0"]["sig"]["params"] == [this_param("CZombieForest*")]
    box = plan["00412040"]
    assert box["new_name"] == "core_box.cpp_CBox_setup_FUN_00412040"
    assert (box["slot"], box["sibling_slot"], box["tu_agrees"]) == (0, 0, True)
    # The reference's prototype, with the overriding class as the receiver.
    assert box["sig"] == {"ret": "void", "conv": "__cdecl", "params": [this_param("CBox*")]}
    assert plan["00412010"]["sig"]["params"][1] == {"name": "delta_time", "type": "float"}
    assert plan["00412070"]["sig"] is None

    stats = result["stats"]
    assert stats["skip: folded slot"] == 2 and stats["skip: already named"] == 1
    assert stats["skip: slot past contract"] == 3 and stats["skip: no translation unit on the function"] == 1
    assert stats["skip: ambiguous across tables"] == 1 and stats["skip: unit disagrees with the class's own file"] == 1
    assert stats["table: label suspect, refused"] == 1 and stats["table: no contract lineage"] == 1
    assert stats["table: not a registered actor class"] == 1 and stats["plan: no reference signature"] == 1
    assert stats["inherited from ancestor"] == 6
    assert stats["shared by subclasses, named for their ancestor"] == 1
    assert result["ambiguous"] == [("00412050", [("CBox", "process"), ("CCrate", "setup")])]
    assert result["label_case"] == {"CMineCar": "g_CMinecarVTable"}
    assert result["unlabelled"] == ["CLost"]
    assert [s["cls"] for s in result["suspect_labels"]] == ["CGun"]


def test_an_added_slot_takes_its_recorded_name_and_prototype(builds):
    names = write_json(builds / "names.json", {"slots": [
        {"program": "dst.exe", "class": "CKidA", "slot": 2, "name": "kick", "ret": "int",
         "params": [{"name": "force", "type": "float"}]},
        {"program": "dst.exe", "class": "CKidB", "slot": 2, "name": "hop", "ret": "void", "params": []},
        {"program": "other.exe", "class": "CKidB", "slot": 2, "name": "elsewhere"}]})
    slot_names = nvs.load_slot_names(names, "dst.exe")
    assert list(slot_names) == [("CKidA", 2), ("CKidB", 2)]
    assert nvs.load_slot_names(str(builds / "none.json"), "dst.exe") == {}
    result = nvs.build_plan("dst.exe", nvs.default_contract("dst.exe"), require_tu = True, reference = "ref.exe",
                            slot_names = slot_names)
    kick = plan_by_addr(result)["004120f0"]
    assert kick["new_name"] == "core_kida.cpp_CKidA_kick_FUN_004120f0"
    assert kick["sig"] == {"ret": "int", "conv": "__cdecl",
                           "params": [this_param("CKidA*"), {"name": "force", "type": "float"}]}
    # Its placeholder unit gives way to the class's registration file.
    hop = plan_by_addr(result)["00412100"]
    assert (hop["new_name"], hop["tu_agrees"]) == ("core_kidb.cpp_CKidB_hop_FUN_00412100", True)
    assert result["stats"]["unit taken from the class's file (placeholder unit)"] == 1
    assert result["stats"]["skip: slot past contract"] == 1


def test_classes_in_separate_trees_have_no_common_ancestor():
    tree = {"CA": None, "CB": "CA", "CC": None}
    assert nvs.common_ancestor(tree, ["CB", "CA"]) == "CA"
    assert nvs.common_ancestor(tree, ["CB", "CC"]) is None
    assert nvs.named_slot({}, tree, "CB", 3) is None


def test_a_unit_mismatch_can_be_allowed(builds):
    result = nvs.build_plan("dst.exe", nvs.default_contract("dst.exe"), reference = "ref.exe")
    assert plan_by_addr(result)["00412090"]["tu_agrees"] is False


class FakeImage:
    by_addr = {"a": {"name": "core_x.cpp_CDemonActor_setup_FUN_00000001",
                     "vars": {"params": [{"name": "self", "type": "CDemonActor*"}]}},
               "b": {"name": "core_x.cpp_CDemonActor_think_FUN_00000002"}}


def test_a_reference_prototype_needs_the_same_method_and_a_receiver():
    tables = {"CDemonActor": {"functions": [{"func_addr": "a"}, {"func_addr": "b"}]}}
    parent = {"CBox": "CDemonActor", "CDemonActor": None}
    assert nvs.reference_signature(FakeImage(), tables, parent, "CBox", 0, "setup") is None    # not this_ptr
    assert nvs.reference_signature(FakeImage(), tables, parent, "CBox", 1, "process") is None  # another method
    assert nvs.reference_signature(FakeImage(), tables, parent, "CBox", 5, "setup") is None    # past the table
    assert nvs.reference_signature(FakeImage(), tables, parent, "CBox", None, "setup") is None
    assert nvs.reference_signature(FakeImage(), {}, parent, "CBox", 0, "setup") is None


class FoldedImage:
    """CChar's one stub fills isGrabbable and getGrabbed; CHero overrides getGrabbed with its own arguments."""
    by_addr = {
        "s": {"name": "core_x.cpp_CChar_returnZero_FUN_00000001",
              "vars": {"params": [this_param("CChar*"), {"name": "grabber", "type": "CDemonActor*"}]}},
        "g": {"name": "core_x.cpp_CHero_getGrabbed_FUN_00000002",
              "vars": {"params": [this_param("CHero*"), {"name": "grabber", "type": "CDemonActor*"},
                                  {"name": "grab_type", "type": "int"}]}},
        "d": {"name": "core_x.cpp_CGun_getDamage_FUN_00000003"},
    }


def test_a_folded_stubs_prototype_gives_way_to_a_real_implementation():
    tables = {"CChar": {"addr": "t1", "functions": [{"func_addr": "s"}, {"func_addr": "s"}]},
              "CGun": {"addr": "t2", "functions": [{"func_addr": "s"}, {"func_addr": "d"}]},
              "CHero": {"addr": "t3", "functions": [{"func_addr": "s"}, {"func_addr": "g"}]}}
    # The struct names the stub's slots; the function's own name would say returnZero.
    names = {"t1": {0: "isGrabbable", 1: "getGrabbed"}}
    sig = nvs.reference_signature(FoldedImage(), tables, {"CDoc": "CChar", "CChar": None}, "CDoc", 1,
                                  "getGrabbed", "CDoc", names)
    assert sig["params"] == [this_param("CDoc*"), {"name": "grabber", "type": "CDemonActor*"},
                             {"name": "grab_type", "type": "int"}]


def test_a_class_with_no_file_has_no_unit():
    assert nvs.tu_of_class({}, "CNone") is None
    assert nvs.tu_of_class({"CTop": "staticInit.cpp"}, "CTop") is None
    assert nvs.tu_of_class({"CBox": ("core/box.cpp/s.cpp", "g")}, "CBox") == "core_box.cpp"


def test_main_reports_the_plan_and_writes_it(builds, capsys):
    out_plan = builds / "plan.json"
    assert nvs.main(["--program", "dst.exe", "--reference", "ref.exe", "--out-plan", str(out_plan)]) == 0
    out = capsys.readouterr().out
    assert "=== dst.exe: 13 labelled vtables ===" in out
    assert "=== plan: 8 functions to name ===" in out
    assert "  with the reference's prototype     7 / 8" in out
    assert "    00412040  core_box.cpp_CBox_setup_FUN_00412040" in out
    assert "00412050  [('CBox', 'process'), ('CCrate', 'setup')]" in out
    assert "g_CGunVTable holds no core_gun.cpp function" in out
    assert "    registered CMineCar         labelled g_CMinecarVTable" in out
    assert "=== registered actor classes with no labelled vtable ===\n    CLost" in out
    assert "    CBox                   1 slot(s)" in out
    assert "[dry-run]" in out
    assert len(json.loads(out_plan.read_text())["plan"]) == 8

    nvs.main(["--program", "dst.exe", "--reference", "ref.exe", "--allow-tu-mismatch",
              "--contract", nvs.default_contract("dst.exe"), "--show", "9"])
    assert "[unit core_box.cpp != class file core_minecar.cpp]" in capsys.readouterr().out


def test_main_reports_nothing_it_has_nothing_to_say_about(monkeypatch, capsys):
    empty = {"plan": [], "stats": Counter(), "ambiguous": [], "skipped": {}, "tables": 0,
             "suspect_labels": [], "label_case": {}, "unlabelled": []}
    monkeypatch.setattr(nvs, "build_plan", lambda *_args, **_kwargs: empty)
    nvs.main(["--program", "dst.exe", "--contract", "unused.json"])
    out = capsys.readouterr().out
    assert "=== plan: 0 functions to name ===" in out
    for section in ("ambiguous, refused", "look wrong", "spelling differs", "no labelled vtable",
                    "slots past the contract"):
        assert section not in out


def recorder(calls, outcome = "name+signature"):
    def apply_row(program, func, row, want, dtm, cache):
        calls.append((func.getName(), row, want, dtm is program.getDataTypeManager(), cache))
        return outcome
    return apply_row


def target_program():
    program = Program()
    fm = program.getFunctionManager()
    fm.add("core_box.cpp_FUN_00412040", 0x412040)
    fm.add("core_enemy.cpp_CEnemy_kill_FUN_00412070", 0x412070)
    fm.add("core_actor.cpp_FUN_00412000", 0x412000)
    return program


def test_each_plan_row_goes_through_the_shared_applier(builds, monkeypatch):
    calls = []
    monkeypatch.setattr(apply_sibling_annotations, "apply_row", recorder(calls))
    plan = nvs.build_plan("dst.exe", nvs.default_contract("dst.exe"), reference = "ref.exe")["plan"]
    program = target_program()
    outcomes = nvs.apply_plan(program, plan + [{"addr": "00499999"}])
    assert outcomes == {"name+signature": 2, "skipped (already named)": 1, "skipped (no function there)": 7}
    name, row, want, same_dtm, _cache = calls[0]
    assert (name, want, same_dtm) == ("core_actor.cpp_FUN_00412000", True, True)
    assert row == {"action": "NAME_SIG", "want": "core_actor.cpp_CDemonActor_setup_FUN_00412000",
                   "current": "core_actor.cpp_FUN_00412000", "conv": "__cdecl", "receiver_from_signature": True,
                   "sig": {"ret": "void", "conv": "__cdecl", "params": [this_param("CDemonActor*")]}}
    assert program.transactions == [["Name vtable slots from the contract", True]]


def test_a_failing_apply_rolls_back(builds, monkeypatch):
    def broken(*_args):
        raise ValueError("boom")
    monkeypatch.setattr(apply_sibling_annotations, "apply_row", broken)
    program = target_program()
    with pytest.raises(ValueError):
        nvs.apply_plan(program, [{"addr": "00412040", "new_name": "x"}])
    assert program.transactions == [["Name vtable slots from the contract", False]]


def test_main_applies_and_saves_only_what_it_named(builds, monkeypatch, capsys):
    calls = []
    monkeypatch.setattr(apply_sibling_annotations, "apply_row", recorder(calls))
    module = FakePyghidra(target_program())
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    argv = ["--program", "dst.exe", "--reference", "ref.exe", "--apply", "--project", str(builds)]
    assert nvs.main(argv) == 0
    assert "  name+signature                           2" in capsys.readouterr().out
    assert module.opened == [(str(builds), "NocturneEdit"), "/dst.exe"]
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)

    monkeypatch.setattr(apply_sibling_annotations, "apply_row", recorder(calls, "skipped (no receiver)"))
    module = FakePyghidra(target_program())
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    assert nvs.main(argv) == 0
    assert (module.program.getDomainFile().saves, module.closed) == (0, 1)


def test_apply_needs_a_project(builds, capsys):
    assert nvs.main(["--program", "dst.exe", "--reference", "ref.exe", "--apply"]) == 2
    assert "ERROR: applying needs --project" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["name_vtable_slot_functions.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "name_vtable_slot_functions.py"), run_name = "__main__")
    assert exit_info.value.code == 0
