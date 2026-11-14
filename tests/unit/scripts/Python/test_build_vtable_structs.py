# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, BuiltInDataType, StructureDataType
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, this_param, write_bucket, write_json
import actor_class_tree
import build_vtable_structs as bvs
import map_vtable_slots
import name_vtable_slot_functions


REFERENCE = [
    function(0x401000, "core_actor.cpp_CDemonActor_setup_FUN_00401000", ret = "void",
             vars = {"params": [this_param("CDemonActor*")]}),
    function(0x401010, "core_actor.cpp_CDemonActor_process_FUN_00401010", ret = "void",
             vars = {"params": [this_param("CDemonActor*"), {"name": "delta_time", "type": "float"}]}),
]
# The target: CDemonActor gained slot 2. CHero registers but has no labelled
# table; its two subclasses both have slots 3 and 4, so CHero introduced them,
# and slot 5 is CStranger's own. CChain's table is shorter than its parent's.
TARGET_TABLES = {
    "CDemonActor": [0x411000, 0x411010, 0x411020],
    "CBox": [0x411030, 0x411010, 0x411020],
    "CStranger": [0x411000, 0x411010, 0x411020, 0x411040, 0x411050, 0x411060],
    "CGabriella": [0x411000, 0x411010, 0x411020, 0x411040, 0x411050],
    "CChain": [0x411000],
}
CLASSES = [("CDemonActor", None), ("CBox", "CDemonActor"), ("CHero", "CDemonActor"),
           ("CStranger", "CHero"), ("CGabriella", "CHero"), ("CChain", "CDemonActor"), ("CLost", "CDemonActor")]


def row(slot, method, sibling):
    return {"slot": slot, "method": method, "sibling_slot": sibling}


CONTRACT = {
    "CDemonActor": {"slots": [row(0, "setup", 0), row(1, "process", 1), row(2, None, None)]},
    # A named slot the reference has no table to give a prototype for.
    "CStranger": {"slots": [row(3, "drawWeapon", 2)]},
}
# nocedit's full structs, for the member names they give each part
REF_TYPES = {"structs": [{"name": "CHero_full_vtable", "fields": [{"name": "_ub", "type": "CDemonActor_vtable"}]},
                         {"name": "CDemonActor_vtable", "fields": []}]}


@pytest.fixture(name = "builds")
def fixture_builds(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)])
    annotations = install_programs(monkeypatch, tmp_path, {
        "ref.exe": (pe, REFERENCE),
        "dst.exe": (pe, [function(0x411000 + 0x10 * i, f"core_x.cpp_FUN_{0x411000 + 0x10 * i:08x}")
                         for i in range(7)])})
    write_bucket(annotations, "ref.exe", "vtables", [{"addr": "00500000", "functions": [
        {"func_addr": "00401000"}, {"func_addr": "00401010"}]}])
    write_bucket(annotations, "ref.exe", "symbols_label", [{"addr": "00500000", "name": "g_CDemonActorVTable"}])
    (annotations / "ref.exe" / "data_types").mkdir()
    write_json(annotations / "ref.exe" / "data_types" / "data_types.json", REF_TYPES)
    # Every class has a sized type but CHero, which registers without RTTI.
    (annotations / "dst.exe" / "data_types").mkdir()
    write_json(annotations / "dst.exe" / "data_types" / "data_types.json", {"structs": [
        {"name": n, "len": size} for n, size in (("CDemonActor", 344), ("CStranger", 400), ("CGabriella", 380),
                                                 ("CBox", 350), ("CChain", 344))]})
    write_bucket(annotations, "dst.exe", "vtables", [
        {"addr": f"006{i}0000", "functions": [{"func_addr": f"{f:08x}"} for f in funcs]}
        for i, funcs in enumerate(TARGET_TABLES.values())])
    write_bucket(annotations, "dst.exe", "symbols_label", [
        {"addr": f"006{i}0000", "name": f"g_{c}VTable"} for i, c in enumerate(TARGET_TABLES)])
    unit = annotations / "dst.exe" / "pseudocode" / "src" / "core" / "x.cpp"
    unit.mkdir(parents = True)
    (unit / "staticInit.cpp").write_text("".join(
        f'r_registerActorClass_FUN_0040c160(&g_{c}ClassInfo,"{c}",f,&v,1,{f"&g_{p}ClassInfo" if p else "0"});\n'
        for c, p in CLASSES))
    for module in (actor_class_tree, map_vtable_slots, name_vtable_slot_functions):
        monkeypatch.setattr(module, "REPO_ROOT", str(tmp_path))
    contract = annotations / "dst.exe" / "reports" / "actor_vtable_contract.json"
    contract.parent.mkdir()
    write_json(contract, CONTRACT)
    return tmp_path


@pytest.fixture(name = "built")
def fixture_built(builds):
    return bvs.plan("dst.exe", name_vtable_slot_functions.default_contract("dst.exe"), "ref.exe")


def test_each_slot_belongs_to_the_highest_class_whose_subtree_all_has_it(built):
    parts = {name: [(f["slot"], f["name"]) for f in fields] for name, fields in built["parts"].items()}
    assert parts == {"CDemonActor_vtable": [(0, "setup"), (1, "process"), (2, "vfunc2")],
                     "CHero_vtable": [(3, "drawWeapon"), (4, "vfunc4")],
                     "CStranger_vtable": [(5, "vfunc5")]}
    assert built["stale"] == ["CChain"] and built["unlabelled"] == ["CHero", "CLost"]


def test_fields_take_the_reference_prototype_or_say_they_guess(built):
    demon = {f["name"]: f for f in built["parts"]["CDemonActor_vtable"]}
    assert demon["process"]["funcdef"] == "CDemonActor_process"
    assert demon["process"]["sig"]["params"] == [this_param("CDemonActor*"), {"name": "delta_time", "type": "float"}]
    assert demon["vfunc2"] == {"slot": 2, "name": "vfunc2", "funcdef": "CDemonActor_vfunc2", "guess": True,
                               "sig": {"ret": "void", "params": [this_param("CDemonActor*")]}}
    hero = {f["name"]: f for f in built["parts"]["CHero_vtable"]}
    assert hero["drawWeapon"]["sig"] is None and not hero["drawWeapon"]["guess"]


def test_a_recorded_name_replaces_the_guess(builds):
    entry = {"class": "CDemonActor", "slot": 2, "name": "markResourcesInUse", "ret": "void", "params": []}
    named = bvs.plan("dst.exe", name_vtable_slot_functions.default_contract("dst.exe"), "ref.exe",
                     {("CDemonActor", 2): entry})
    field = named["parts"]["CDemonActor_vtable"][2]
    assert field == {"slot": 2, "name": "markResourcesInUse", "funcdef": "CDemonActor_markResourcesInUse",
                     "guess": False, "sig": {"ret": "void", "conv": "__cdecl", "params": [this_param("CDemonActor*")]}}


def test_each_table_gets_the_struct_of_the_class_introducing_its_last_slot(built):
    applied = {a["class"]: (a["struct"], a["size"], a["fits"]) for a in built["apply"]}
    assert applied == {"CDemonActor": ("CDemonActor_vtable", 12, True), "CBox": ("CDemonActor_vtable", 12, True),
                       "CGabriella": ("CHero_full_vtable", 20, True),
                       "CStranger": ("CStranger_full_vtable", 24, True)}
    # The reference's member name where it has one, else one made from the class.
    assert built["fulls"]["CStranger_full_vtable"] == [
        ("_ub", "CDemonActor_vtable"), ("_uhero", "CHero_vtable"), ("_ustranger", "CStranger_vtable")]


def test_a_reference_without_data_types_names_no_members(builds):
    assert bvs.member_names("nowhere.exe") == {}


def test_a_receiver_with_no_type_gets_an_empty_placeholder_with_its_bounds(built, builds):
    assert built["placeholders"] == [{"name": "CHero", "description":
                                      "Registered actor class with no RTTI record; size unknown, between "
                                      "344 (CDemonActor) and 380 bytes (its smallest subclass)"}]
    # Nothing to bound it by: no parent, no sized subclass.
    assert bvs.placeholders("nowhere.exe", {"CRoot": None}, ["CRoot"])[0]["description"].endswith(
        "between ? (no parent) and ? bytes (its smallest subclass)")


def target_program():
    program = Program()
    program.getDataTypeManager().add(
        StructureDataType("CDemonActor", length = 8), StructureDataType("CHero", length = 8),
        StructureDataType("CStranger", length = 8), BuiltInDataType("void", 0), BuiltInDataType("float", 4))
    return program


def test_applying_builds_definitions_structs_and_types_the_tables(built):
    program = target_program()
    built["apply"].append({"addr": "00690000", "class": "CMisfit", "struct": "CDemonActor_vtable",
                           "size": 4, "fits": False})
    out = bvs.apply_structs(program, built)
    assert out == {"part structs": 3, "full structs": 2, "tables typed": 4, "table skipped (size differs)": 1,
                   "guessed slot definitions": 3, "field typed void* (prototype unresolved)": 1,
                   "placeholder class structs": 1}
    dtm = program.getDataTypeManager()
    hero = dtm.getDataType("/Nocturne/Class/Game/CHero")
    assert (hero.getLength(), hero.getDescription()) == (0, built["placeholders"][0]["description"])
    # Applied again, the placeholder already there is left alone.
    assert "placeholder class structs" not in bvs.apply_structs(program, built)
    demon = dtm.getDataType("/Nocturne/Class/Game/CDemonActor_vtable")
    assert [c.getFieldName() for c in demon.getComponents()] == ["setup", "process", "vfunc2"]
    guess = dtm.getDataType("/Nocturne/FunctionDefinition/Game/CDemonActor_vfunc2")
    assert guess.getComment() == bvs.GUESS
    full = dtm.getDataType("/Nocturne/Class/Game/CStranger_full_vtable")
    assert [c.getFieldName() for c in full.getComponents()] == ["_ub", "_uhero", "_ustranger"]
    data = program.getListing().data
    assert data[Address(0x620000)].data_type is full
    assert data[Address(0x630000)].data_type is dtm.getDataType("/Nocturne/Class/Game/CHero_full_vtable")
    assert program.transactions == [["Actor vtable structs", True]] * 2


def test_a_failed_apply_rolls_back(built):
    program = target_program()
    built["fulls"]["CBroken_full_vtable"] = [("_ux", "CNoSuch_vtable")]
    with pytest.raises(KeyError):
        bvs.apply_structs(program, built)
    assert program.transactions == [["Actor vtable structs", False]]


def test_main_reports_the_plan(builds, capsys):
    out_json = builds / "structs.json"
    assert bvs.main(["--program", "dst.exe", "--reference", "ref.exe", "--out-json", str(out_json)]) == 0
    out = capsys.readouterr().out
    assert "dst.exe: 3 part structs, 2 full structs, 4 tables to type (0 whose size differs)" in out
    assert "  slots added in this build (guessed vfuncN): 3; named slots with no reference prototype: 1" in out
    assert "    CHero_vtable                   2 slots" in out
    assert "  stale layouts, left untyped: CChain" in out
    assert "  placeholder CHero: Registered actor class with no RTTI record" in out
    assert "[dry-run]" in out
    assert json.loads(out_json.read_text())["stale"] == ["CChain"]


def test_main_shows_a_table_its_struct_does_not_fit(builds, monkeypatch, capsys):
    built = {"parts": {}, "fulls": {}, "stale": [], "unlabelled": [],
             "apply": [{"addr": "00600000", "class": "CX", "struct": "CX_vtable", "size": 8, "fits": False}]}
    monkeypatch.setattr(bvs, "plan", lambda *_args: built)
    bvs.main(["--program", "dst.exe", "--contract", "unused.json"])
    out = capsys.readouterr().out
    assert "  SIZE DIFFERS CX at 00600000: CX_vtable is 8 bytes" in out
    assert "stale layouts" not in out


def test_main_applies_and_saves(builds, monkeypatch, capsys):
    module = FakePyghidra(target_program())
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    assert bvs.main(["--program", "dst.exe", "--reference", "ref.exe", "--apply", "--project", str(builds)]) == 0
    assert "  tables typed                               4" in capsys.readouterr().out
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)


def test_apply_needs_a_project(builds, capsys):
    assert bvs.main(["--program", "dst.exe", "--reference", "ref.exe", "--apply"]) == 2
    assert "ERROR: applying needs --project" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["build_vtable_structs.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "build_vtable_structs.py"), run_name = "__main__")
    assert exit_info.value.code == 0
