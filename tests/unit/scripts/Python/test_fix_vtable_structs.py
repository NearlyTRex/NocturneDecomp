# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
import ghidra_fake
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
import fix_vtable_structs as fvs

ghidra_fake.install()


class Field:
    """A component that knows its place: offset and ordinal follow the fields before it."""

    def __init__(self, parent, data_type, name):
        self.parent = parent
        self.data_type = data_type
        self.name = name

    def getOrdinal(self):
        return self.parent.fields.index(self)

    def getOffset(self):
        return sum(f.getLength() for f in self.parent.fields[:self.getOrdinal()])

    def getLength(self):
        return self.data_type.getLength()

    def getDataType(self):
        return self.data_type

    def getFieldName(self):
        return self.name


class VtableStruct:
    """A non-packed struct as Ghidra edits one by ordinal: deleting a field closes its gap."""

    def __init__(self, name, fields = (), category = "/Nocturne/Struct/Game"):
        self.name = name
        self.category = category
        self.fields = [Field(self, data_type, field_name) for field_name, data_type in fields]

    def getName(self):
        return self.name

    def getCategoryPath(self):
        return ghidra_fake.CategoryPath(self.category)

    def getLength(self):
        return sum(f.getLength() for f in self.fields)

    def getComponents(self):
        return list(self.fields)

    def getNumComponents(self):
        return len(self.fields)

    def delete(self, ordinal):
        del self.fields[ordinal]

    def replace(self, ordinal, data_type, _length, name, _comment):
        self.fields[ordinal] = Field(self, data_type, name)

    def insertAtOffset(self, offset, data_type, _length, name, _comment):
        index = next((f.getOrdinal() for f in self.fields if f.getOffset() >= offset), len(self.fields))
        self.fields.insert(index, Field(self, data_type, name))


def slots(*names):
    return [(n, ghidra_fake.PointerDataType()) for n in names]


def funcdef(name):
    return ghidra_fake.FunctionDefinitionDataType(name)


# The contract: CDemonActor 2 slots, CCharacter 3, CEnemy 4, CHero 4, and one class it leaves alone
CONTRACT = {"CDemonActor": {"slots": [0] * 2}, "CCharacter": {"slots": [0] * 3}, "CEnemy": {"slots": [0] * 4},
            "CHero": {"slots": [0] * 4}, "CBat": {"slots": [0] * 2}}


def world():
    """The editor build's structs: CDemonActor_vtable with an editor-only slot,
    CEnemy_vtable and CStrList_vtable with bogus fields typed by phantom funcdefs,
    composites embedding the old lengths, and CSmiley already built."""
    prog = Program()
    enemy_reset, strlist_input = funcdef("CEnemy_reset"), funcdef("CStrList_handleInput")
    demon = VtableStruct("CDemonActor_vtable", slots("init", "onAreaDeleted", "dtor"))
    character = VtableStruct("CCharacter_vtable", slots("walk"))
    enemy = VtableStruct("CEnemy_vtable", slots("attack", "randomize")
                         + [("reset", ghidra_fake.PointerDataType(enemy_reset))])
    hero = VtableStruct("CHero_vtable", slots("jump"))
    weapon = VtableStruct("CWeapon_vtable", slots("fire"))
    strlist = VtableStruct("CStrList_vtable", slots("a", "b", "c", "d", "e", "f")
                           + [("handleInput", ghidra_fake.PointerDataType(strlist_input))])
    smiley = VtableStruct("CSmiley_vtable", [("reset", ghidra_fake.PointerDataType(enemy_reset))])
    composites = [
        VtableStruct("CCharacter_full_vtable", [("_ub", demon), ("_uc", character)]),
        VtableStruct("CEnemy_full_vtable", [("_ub", demon), ("_uc", character), ("_ue", enemy)]),
        VtableStruct("CHero_full_vtable", [("_ub", demon), ("_uc", character), ("_uh", hero)]),
        VtableStruct("CWeapon_full_vtable", [("_ub", demon), ("_uw", weapon)]),
        VtableStruct("CSmiley_full_vtable", [("_ud", demon), ("_uc", character), ("_ue", enemy), ("_us", smiley)]),
    ]
    prog.getDataTypeManager().add(demon, character, enemy, hero, weapon, strlist, smiley, *composites,
                                  enemy_reset, strlist_input, ghidra_fake.IntegerDataType("int", 4),
                                  VtableStruct("CBoneGuy"), funcdef("CMobster_reset"))
    functions = prog.getFunctionManager()
    functions.add("FUN_00474ea0", 0x474ea0)
    functions.add("core_boneguy.cpp_CBoneGuy_reset_FUN_00419f30", 0x419f30)
    functions.add("FUN_004dc2b0", 0x4dc2b0)
    return prog


def find(prog, name):
    return fvs.type_finder(prog.getDataTypeManager())(name)


def contract(tmp_path, doc = None):
    path = tmp_path / "contract.json"
    path.write_text(json.dumps(doc or CONTRACT))
    return str(path)


def test_expected_sizes_come_from_the_contract(tmp_path):
    assert fvs.expected_sizes(contract(tmp_path)) == {
        "CDemonActor_vtable": 8, "CCharacter_vtable": 4, "CEnemy_vtable": 4, "CHero_vtable": 4,
        "CStrList_vtable": 24}
    assert fvs.expected_sizes(contract(tmp_path, {"CEnemy": {"slots": [0]}})) == {"CStrList_vtable": 24}


def test_the_plan_reports_each_drop_and_the_length_it_leaves(tmp_path, capsys):
    prog = world()
    want = fvs.expected_sizes(contract(tmp_path))
    want.pop("CEnemy_vtable")
    plan = fvs.plan_drops(lambda name: find(prog, name), {**want, "CStrList_vtable": 20})
    assert [(n, [c.getFieldName() for c in p]) for n, _dt, p in plan] == [
        ("CDemonActor_vtable", ["onAreaDeleted"]), ("CEnemy_vtable", ["randomize", "reset"]),
        ("CStrList_vtable", ["handleInput"])]
    out = capsys.readouterr().out
    assert "    drop @4    onAreaDeleted              pointer" in out
    assert "    length 12 -> 8   expected 8  OK" in out and "    length 12 -> 4\n" in out
    assert "    length 28 -> 24   expected 20  MISMATCH" in out


def test_missing_structs_and_parts_are_reported_not_planned(capsys):
    prog = Program()
    prog.getDataTypeManager().add(VtableStruct("CHero_full_vtable"), VtableStruct("CDemonActor_vtable"))
    assert fvs.plan_drops(lambda name: find(prog, name), {})[0][0] == "CDemonActor_vtable"
    fvs.report_composites(lambda name: find(prog, name), {})
    out = capsys.readouterr().out
    assert "  MISSING CEnemy_vtable" in out and "  MISSING CCharacter_full_vtable" in out
    assert "  CHero_full_vtable: a part is missing, skipped" in out


def test_the_composites_are_reported_at_the_contracts_sizes(tmp_path, capsys):
    prog = world()
    fvs.report_composites(lambda name: find(prog, name), fvs.expected_sizes(contract(tmp_path)))
    assert ("  CEnemy_full_vtable       length 28 -> 16   "
            "CDemonActor_vtable@0, CCharacter_vtable@8, CEnemy_vtable@12") in capsys.readouterr().out


def test_apply_builds_drops_removes_and_rebuilds(capsys):
    prog = world()
    dtm = prog.getDataTypeManager()
    look = fvs.type_finder(dtm)
    old_full = look("CEnemy_full_vtable")
    plan = fvs.plan_drops(look, {})
    assert fvs.apply(prog, dtm, look, plan)
    out = capsys.readouterr().out

    # each new class: its own struct, a funcdef typed for it, and the full composite
    pick = look("CPickList_vtable")
    assert [(c.getFieldName(), c.getDataType().getName()) for c in pick.getComponents()] == [
        ("handleInput", "CPickList_handleInput *")]
    definition = look("CPickList_handleInput")
    assert definition.getReturnType().getName() == "int" and definition.getArguments() == []
    assert definition.getCallingConventionName() == "__cdecl"
    bone = look("CBoneGuy_reset")
    assert bone.getArguments()[0].getDataType().getName() == "CBoneGuy *"
    assert bone.getReturnType() is ghidra_fake.DefaultDataType.dataType       # no `void` in the program
    full = look("CBoneGuy_full_vtable")
    assert [c.getFieldName() for c in full.getComponents()] == ["_ud", "_uc", "_ue", "_ub"]
    assert full.getCategoryPath().getPath() == "/Nocturne/Struct/Game"

    # the implementing functions are named once, and only where unnamed
    functions = prog.getFunctionManager()
    assert functions.getFunctionAt(ghidra_fake.Address(0x474ea0)).getName() == (
        "shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0")
    assert functions.getFunctionAt(ghidra_fake.Address(0x4dc2b0)).getName() == (
        "core_mobster.cpp_CMobster_reset_FUN_004dc2b0")
    assert "named core_boneguy" not in out

    # CSmiley was built: its field now points at its own funcdef, not the phantom
    assert look("CSmiley_vtable").getComponents()[0].getDataType().getName() == "CSmiley_reset *"
    assert "  CSmiley_vtable           field types refreshed" in out

    # the bogus fields and their phantom funcdefs are gone
    assert [c.getFieldName() for c in look("CEnemy_vtable").getComponents()] == ["attack"]
    assert look("CEnemy_reset") is None and look("CStrList_handleInput") is None
    assert "  removed phantom funcdef CEnemy_reset" in out

    # composites rebuilt from the shrunk parts, keeping their field names
    assert old_full is look("CEnemy_full_vtable") and old_full.getLength() == 16
    assert [(c.getFieldName(), c.getOffset()) for c in old_full.getComponents()] == [
        ("_ub", 0), ("_uc", 8), ("_ue", 12)]
    assert prog.transactions == [["Fix vtable structs for nocturne", True]]


def test_a_name_ghidra_refuses_is_reported_and_the_rest_goes_on(monkeypatch, capsys):
    prog = world()

    def refuse(_name, _source):
        raise ghidra_fake.InvalidInputException("bad name")
    monkeypatch.setattr(prog.getFunctionManager().getFunctionAt(ghidra_fake.Address(0x474ea0)), "setName", refuse)
    dtm = prog.getDataTypeManager()
    assert fvs.apply(prog, dtm, fvs.type_finder(dtm), [])
    assert "  could not name 00474ea0: bad name" in capsys.readouterr().out


def test_a_derived_class_whose_base_is_missing_is_skipped(capsys):
    prog = Program()
    dtm = prog.getDataTypeManager()
    assert fvs.apply(prog, dtm, fvs.type_finder(dtm), [])
    assert "  CPickList: base CStrList_vtable missing, skipped" in capsys.readouterr().out


def test_a_composite_with_a_missing_part_is_left_whole(monkeypatch, capsys):
    prog = world()
    dtm = prog.getDataTypeManager()
    monkeypatch.setattr(fvs, "NEW_DERIVED", [])
    dtm.types.remove(fvs.type_finder(dtm)("CHero_vtable"))
    look = fvs.type_finder(dtm)
    assert fvs.apply(prog, dtm, look, [])
    assert [c.getFieldName() for c in look("CHero_full_vtable").getComponents()] == ["_ub", "_uc", "_uh"]
    assert "  CHero_full_vtable        a part is missing, left as it was" in capsys.readouterr().out


def test_an_error_rolls_everything_back(monkeypatch, capsys):
    prog = world()
    dtm = prog.getDataTypeManager()

    def refuse(_data_type, _monitor):
        raise RuntimeError("locked")
    monkeypatch.setattr(dtm, "remove", refuse)
    assert not fvs.apply(prog, dtm, fvs.type_finder(dtm), [])
    assert prog.transactions[0][1] is False and "ERROR: locked" in capsys.readouterr().out


def test_verify_counts_the_structs_off_their_size(capsys):
    prog = world()
    assert fvs.verify(lambda name: find(prog, name), {"CHero_vtable": 4, "CEnemy_vtable": 4, "CNone_vtable": 4}) == 2
    out = capsys.readouterr().out
    assert "  CHero_vtable             OK (expected 4, got 4)" in out
    assert "  CNone_vtable             MISMATCH (expected 4, got None)" in out


# --- main ------------------------------------------------------------------------------------------

def run_main(monkeypatch, tmp_path, prog, *argv, doc = None):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(fvs.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        fvs.main([str(tmp_path), "P", "game.exe", "--contract", contract(tmp_path, doc), *argv])
    return exited.value.code, fake


def test_main_reports_without_changing(monkeypatch, tmp_path, capsys):
    prog = world()
    code, fake = run_main(monkeypatch, tmp_path, prog)
    assert code == 0 and fake.closed == 1 and prog.transactions == []
    out = capsys.readouterr().out
    assert "  CDemonActor_vtable       8 bytes (2 slots)" in out and "[dry-run] re-run with --apply" in out


def test_main_snapshots_then_fixes_verifies_and_saves(monkeypatch, tmp_path, capsys):
    calls = []
    monkeypatch.setattr(fvs.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = world()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-vtable-structs"]
    assert prog.getDomainFile().saves == 1 and "Saved." in capsys.readouterr().out


def test_main_does_not_save_a_struct_off_its_size(monkeypatch, tmp_path, capsys):
    prog = world()
    code, _ = run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot",
                       doc = {**CONTRACT, "CHero": {"slots": [0] * 5}})
    assert code == 1 and prog.getDomainFile().saves == 0
    assert "  1 struct(s) not at the expected size; NOT saving." in capsys.readouterr().out


def test_main_exits_1_when_the_apply_failed(monkeypatch, tmp_path):
    prog = world()
    monkeypatch.setattr(prog.getDataTypeManager(), "addDataType", None)
    assert run_main(monkeypatch, tmp_path, prog, "--apply", "--no-snapshot")[0] == 1
    assert prog.getDomainFile().saves == 0


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake = run_main(monkeypatch, tmp_path, None)
    assert code == 1 and fake.closed == 1 and "ERROR: " in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(fvs.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["fix_vtable_structs.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "fix_vtable_structs.py"), run_name = "__main__")
    assert exit_info.value.code == 0
