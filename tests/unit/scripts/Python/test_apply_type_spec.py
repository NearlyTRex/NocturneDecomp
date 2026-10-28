# Imports
import contextlib
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from ghidra_program import Program
from ghidra_fake import BuiltInDataType, EnumDataType, StructureDataType
import apply_type_spec

INT = BuiltInDataType("int", 4)


def program_with(*data_types):
    program = Program()
    program.getDataTypeManager().add(*data_types)
    return program


def fire_mode(**values):
    return EnumDataType("EFireMode", values = values or {"FIRE_MODE_AUTOMATIC": 0, "FIRE_MODE_SINGLE": 1})


WANT_FIRE_MODE = {"EFireMode": {"FIRE_MODE_AUTOMATIC": 0, "FIRE_MODE_SINGLE": 1}}


def test_an_enum_with_the_specs_names_is_ok(capsys):
    dtm = program_with(fire_mode()).getDataTypeManager()
    assert apply_type_spec.check_enums(dtm, WANT_FIRE_MODE) == []
    assert "ok  enum EFireMode" in capsys.readouterr().out


def test_a_missing_or_doubled_enum_differs():
    dtm = program_with(fire_mode(), fire_mode()).getDataTypeManager()
    assert apply_type_spec.check_enums(dtm, {"EFireMode": {}, "EBloodType": {}}) == [
        "enum EFireMode: 2 of them", "enum EBloodType: missing"]


def test_each_number_whose_name_differs_is_listed():
    enum = fire_mode(FIRE_MODE_SINGLE = 0, FIRE_MODE_AUTO = 1, FIRE_MODE_PUMP = 2)
    dtm = program_with(enum).getDataTypeManager()
    want = {"EFireMode": {"FIRE_MODE_AUTOMATIC": 0, "FIRE_MODE_SINGLE": 1, "FIRE_MODE_BURST": 3}}
    assert apply_type_spec.check_enums(dtm, want) == [
        "enum EFireMode: 0 is FIRE_MODE_SINGLE (want FIRE_MODE_AUTOMATIC); "
        "1 is FIRE_MODE_AUTO (want FIRE_MODE_SINGLE); 3 missing (want FIRE_MODE_BURST); "
        "extra FIRE_MODE_PUMP=2"]


# A 4-byte enum Ghidra treats as unsigned stores -1 as 0xffffffff
def test_minus_one_matches_its_all_ones_pattern():
    enum = EnumDataType("EAmmoType", values = {"AMMO_TYPE_NONE": 0xFFFFFFFF})
    dtm = program_with(enum).getDataTypeManager()
    assert apply_type_spec.check_enums(dtm, {"EAmmoType": {"AMMO_TYPE_NONE": -1}}) == []


def test_fixing_renames_the_enum_and_its_values():
    enum = EnumDataType("EDoorOneShot", values = {"DOOR_ONE_SHOT_NO": 0, "ONE_SHOT_YES": 1})
    dtm = program_with(enum).getDataTypeManager()
    changes = apply_type_spec.fix_enums(dtm, {"EDoorOneShot": "EOneShotState"},
                                        {"EOneShotState": {"ONE_SHOT_NO": 0, "ONE_SHOT_YES": 1}})
    assert changes == ["enum EDoorOneShot renamed EOneShotState",
                       "enum EOneShotState.ONE_SHOT_NO = 0 (was DOOR_ONE_SHOT_NO)"]
    assert enum.getName() == "EOneShotState"
    assert enum.values == {"ONE_SHOT_YES": 1, "ONE_SHOT_NO": 0}


def test_a_rename_waits_while_the_new_name_is_taken():
    old = EnumDataType("EDoorOneShot")
    dtm = program_with(old, EnumDataType("EOneShotState")).getDataTypeManager()
    assert apply_type_spec.fix_enums(dtm, {"EDoorOneShot": "EOneShotState", "EGone": "ENew"}, {}) == []
    assert old.getName() == "EDoorOneShot"


def test_fixing_adds_a_number_and_moves_a_name_to_its_number():
    enum = EnumDataType("EWalkState", values = {"WALK_STATE_IDLE": 0, "WALK_STATE_NO_PATH": 2})
    dtm = program_with(enum).getDataTypeManager()
    changes = apply_type_spec.fix_enums(dtm, {}, {
        "EWalkState": {"WALK_STATE_IDLE": 0, "WALK_STATE_WALKING": 1, "WALK_STATE_NO_PATH": 3},
        "EMissing": {"X": 0}})
    assert changes == ["enum EWalkState.WALK_STATE_WALKING = 1", "enum EWalkState.WALK_STATE_NO_PATH = 3"]
    assert enum.values == {"WALK_STATE_IDLE": 0, "WALK_STATE_WALKING": 1, "WALK_STATE_NO_PATH": 3}


def test_an_unsigned_enum_takes_minus_one_as_all_ones():
    enum = EnumDataType("EAmmoType", values = {"AMMO_TYPE_GENERIC": 0}, signed = False)
    dtm = program_with(enum).getDataTypeManager()
    apply_type_spec.fix_enums(dtm, {}, {"EAmmoType": {"AMMO_TYPE_NONE": -1}})
    assert enum.values["AMMO_TYPE_NONE"] == 0xFFFFFFFF


def door(*fields):
    return StructureDataType("CDoor", fields or [(INT, "door_side"), (INT, "door_swing")])


FIRE_FIELD = [["CWeapon", "0x4", "EFireMode", "fire_mode"]]


def weapon(field_type = INT, field_name = "fire_mode"):
    return StructureDataType("CWeapon", [(INT, "state"), (field_type, field_name)])


@pytest.mark.parametrize("data_types, offset, why", [
    ((), 0, "0 structs named CDoor"),
    ((door(), door()), 0, "2 structs named CDoor"),
    ((door(),), 2, "no field starts there"),
    ((door(),), 8, "no field starts there"),
])
def test_a_field_is_found_only_where_one_starts(data_types, offset, why):
    dtm = program_with(*data_types).getDataTypeManager()
    assert apply_type_spec.find_component(dtm, "CDoor", offset) == (None, None, why)


def test_a_conflict_copy_is_not_the_struct():
    struct = door()
    dtm = program_with(struct, StructureDataType("CDoor.conflict")).getDataTypeManager()
    found, component, why = apply_type_spec.find_component(dtm, "CDoor", 4)
    assert (found, component.getFieldName(), why) == (struct, "door_swing", None)


def test_a_field_with_the_specs_type_and_name_is_ok(capsys):
    dtm = program_with(fire_mode(), weapon(fire_mode())).getDataTypeManager()
    assert apply_type_spec.check_fields(dtm, FIRE_FIELD, False) == ([], [])
    assert "ok  field CWeapon+0x4 EFireMode fire_mode" in capsys.readouterr().out


def test_a_field_that_differs_is_listed_without_apply():
    struct = weapon()
    dtm = program_with(fire_mode(), struct).getDataTypeManager()
    assert apply_type_spec.check_fields(dtm, FIRE_FIELD, False) == (
        ["field CWeapon+0x4: int fire_mode, want EFireMode fire_mode"], [])
    assert struct.getComponentAt(4).getDataType() is INT


def test_apply_retypes_and_renames_a_field_keeping_its_comment():
    enum = fire_mode()
    struct = weapon(field_name = "mode")
    struct.getComponentAt(4).comment = "0x2dc"
    dtm = program_with(enum, struct).getDataTypeManager()
    assert apply_type_spec.check_fields(dtm, FIRE_FIELD, True) == (
        [], ["field CWeapon+0x4 is EFireMode fire_mode"])
    component = struct.getComponentAt(4)
    assert (component.getDataType(), component.getFieldName(), component.getComment()) == (
        enum, "fire_mode", "0x2dc")


def test_apply_leaves_a_field_that_is_right_alone(capsys):
    dtm = program_with(fire_mode(), weapon(fire_mode())).getDataTypeManager()
    assert apply_type_spec.check_fields(dtm, FIRE_FIELD, True) == ([], [])
    assert capsys.readouterr().out == ""


def test_apply_renames_a_field_whose_type_is_right():
    struct = door()
    dtm = program_with(struct).getDataTypeManager()
    changes = apply_type_spec.check_fields(dtm, [["CDoor", "0x0", "int", "side"]], True)[1]
    assert changes == ["field CDoor+0x0 is int side"]
    assert struct.getComponentAt(0).getFieldName() == "side"


def test_apply_skips_a_field_it_cannot_retype():
    small = EnumDataType("EFireMode", length = 1)
    dtm = program_with(small, weapon(), door()).getDataTypeManager()
    fields = FIRE_FIELD + [["CDoor", "0x0", "EDoorSide", "door_side"], ["CDoor", "0x6", "int", "x"]]
    problems, changes = apply_type_spec.check_fields(dtm, fields, True)
    assert changes == []
    assert problems == [
        "field CWeapon+0x4: int fire_mode, want EFireMode fire_mode (EFireMode is 1 bytes, the field 4)",
        "field CDoor+0x0: int door_side, want EDoorSide door_side (0 enums named EDoorSide)",
        "field CDoor+0x6: no field starts there"]


SPEC = {
    "enum_renames": {"EDoorOneShot": "EOneShotState"},
    "enums": {"*": WANT_FIRE_MODE, "nocedit.exe": {"EOneShotState": {"ONE_SHOT_NO": 0}}},
    "fields": {"nocedit.exe": FIRE_FIELD},
}


def test_without_apply_the_program_is_only_read(capsys):
    program = program_with(fire_mode(), weapon(), EnumDataType("EOneShotState", values = {"ONE_SHOT_NO": 0}))
    problems = apply_type_spec.run(program, SPEC, "nocedit.exe", False)
    assert problems == ["field CWeapon+0x4: int fire_mode, want EFireMode fire_mode"]
    assert (program.transactions, program.getDomainFile().saves) == ([], 0)
    assert "1 difference(s) left in nocedit.exe" in capsys.readouterr().out


def test_apply_fixes_checks_again_and_saves(capsys):
    program = program_with(fire_mode(FIRE_MODE_AUTO = 0, FIRE_MODE_SINGLE = 1), weapon(),
                           EnumDataType("EDoorOneShot", values = {"ONE_SHOT_NO": 0}))
    assert apply_type_spec.run(program, SPEC, "nocedit.exe", True) == []
    assert (program.transactions, program.getDomainFile().saves) == ([["apply_type_spec", True]], 1)
    out = capsys.readouterr().out
    assert "fixed  enum EDoorOneShot renamed EOneShotState" in out
    assert "saved 3 change(s) to nocedit.exe" in out


def test_apply_with_nothing_to_change_does_not_save():
    program = program_with(fire_mode())
    assert apply_type_spec.run(program, {"enums": {"*": WANT_FIRE_MODE}}, "nocturne.exe", True) == []
    assert program.getDomainFile().saves == 0


# Stands in for pyghidra: hands out the one program, and records what was opened
class FakePyghidra:
    def __init__(self, program):
        self.program = program
        self.opened = []

    def start(self):
        pass

    @staticmethod
    def open_project(directory, name):
        return directory, name

    @contextlib.contextmanager
    def program_context(self, project, path):
        self.opened.append((project, path))
        yield self.program


def fake_pyghidra(program):
    return FakePyghidra(program)


@pytest.fixture(name = "spec_file")
def fixture_spec_file(tmp_path):
    path = tmp_path / "spec.json"
    path.write_text(json.dumps({"enums": {"*": WANT_FIRE_MODE}}))
    return path


@pytest.mark.parametrize("program, code", [(program_with(fire_mode()), 0), (Program(), 1)])
def test_main_exits_non_zero_while_anything_differs(monkeypatch, tmp_path, spec_file, program, code):
    module = fake_pyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    monkeypatch.setattr(sys, "argv", ["apply_type_spec.py", str(tmp_path), "NocturneEdit", "nocedit.exe",
                                      str(spec_file)])
    assert apply_type_spec.main() == code
    assert module.opened == [((str(tmp_path), "NocturneEdit"), "/nocedit.exe")]


def test_runs_as_a_script(monkeypatch, tmp_path, spec_file):
    monkeypatch.setitem(sys.modules, "pyghidra", fake_pyghidra(program_with(fire_mode())))
    monkeypatch.setattr(sys, "argv", ["apply_type_spec.py", str(tmp_path), "P", "nocedit.exe", str(spec_file)])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "apply_type_spec.py"), run_name = "__main__")
    assert exit_info.value.code == 0
