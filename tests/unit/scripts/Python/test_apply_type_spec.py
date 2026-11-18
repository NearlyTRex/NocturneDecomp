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
from ghidra_fake import (Address, BuiltInDataType, EnumDataType, FunctionDefinitionDataType, PointerDataType,
                         StructureDataType)
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


def test_a_new_enum_is_created_empty_where_the_program_lacks_it():
    have = fire_mode()
    dtm = program_with(have).getDataTypeManager()
    sizes = {"EFireMode": 4, "ECheckboxMode": 4, "EUnlisted": 1}
    changes = apply_type_spec.create_enums(dtm, sizes, {"EFireMode": {}, "ECheckboxMode": {}})
    assert changes == ["enum ECheckboxMode created (4 bytes)"]
    created = apply_type_spec.find_named(dtm, "ECheckboxMode", EnumDataType)
    assert [(e.getCategoryPath().getPath(), e.getLength(), e.values) for e in created] == [
        ("/Nocturne/Enum/Game", 4, {})]
    assert apply_type_spec.find_named(dtm, "EFireMode", EnumDataType) == [have]
    assert apply_type_spec.find_named(dtm, "EUnlisted", EnumDataType) == []


def test_apply_creates_a_new_enum_then_names_its_values(capsys):
    program = program_with()
    spec = {"enums": {"*": {"ECheckboxMode": {"CHECKBOX_MODE_BINARY": 0}}}, "new_enums": {"ECheckboxMode": 4}}
    assert apply_type_spec.run(program, spec, "nocedit.exe", True) == []
    out = capsys.readouterr().out
    assert "fixed  enum ECheckboxMode created (4 bytes)" in out
    assert "saved 2 change(s) to nocedit.exe" in out


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
        "field CDoor+0x0: int door_side, want EDoorSide door_side (no type EDoorSide)",
        "field CDoor+0x6: no field starts there"]


FLOAT = BuiltInDataType("float", 4)
VOID = BuiltInDataType("void", 0)


def device():
    return StructureDataType("CSoundDevice", [(INT, "vtable")])


def funcdef(name, ret, *arguments):
    return FunctionDefinitionDataType(name, ret, arguments)


REVERB = {"ret": "void", "params": [["CSoundDevice *", "this_ptr"], ["float", "volume"]]}


def test_a_section_is_the_shared_part_with_the_programs_own_over_it():
    spec = {"a": {"*": {"x": 1, "y": 1}, "p.exe": {"y": 2}}, "b": {"*": [1], "p.exe": [2]}, "c": {"q.exe": [3]}}
    assert apply_type_spec.section(spec, "a", "p.exe") == {"x": 1, "y": 2}
    assert apply_type_spec.section(spec, "b", "p.exe") == [1, 2]
    assert apply_type_spec.section(spec, "c", "q.exe") == [3]
    assert apply_type_spec.section(spec, "missing", "p.exe") == {}


def test_a_type_is_renamed_once_its_new_name_is_free():
    entry = StructureDataType("SSoundModeEntry")
    pointer = PointerDataType(StructureDataType("SOld"))
    dtm = program_with(entry, StructureDataType("SOld"), StructureDataType("SNew"), pointer).getDataTypeManager()
    renames = {"SSoundModeEntry": "SReverbPreset", "SOld": "SNew", "SGone": "SAny"}
    assert apply_type_spec.check_renames(dtm, renames, False) == ([
        "type SSoundModeEntry: still there, want it named SReverbPreset",
        "type SOld: still there, want it named SNew (SNew is taken)"], [])
    problems, changes = apply_type_spec.check_renames(dtm, renames, True)
    assert changes == ["type SSoundModeEntry renamed SReverbPreset"] and entry.getName() == "SReverbPreset"
    assert problems == ["type SOld: still there, want it named SNew (SNew is taken)"]
    assert apply_type_spec.check_absent(dtm, ["SOld", "SSoundModeEntry"]) == ["type SOld: still there, want it gone"]


def test_a_function_definition_is_checked_for_its_types_and_names(capsys):
    right = funcdef("CSoundDevice_setReverb", VOID, (PointerDataType(device()), "this_ptr"), (FLOAT, "volume"))
    wrong = funcdef("CSoundDevice_poll", INT, (PointerDataType(device()), "this_ptr"), (INT, "count"))
    dtm = program_with(device(), FLOAT, VOID, INT, right, wrong, funcdef("CTwice", VOID), funcdef("CTwice", VOID)).getDataTypeManager()
    want = {"CSoundDevice_setReverb": REVERB, "CSoundDevice_poll": {"ret": "int", "params": [["CSoundDevice *", "this_ptr"]]},
            "CSoundDevice_new": REVERB, "CTwice": REVERB}
    problems, changes = apply_type_spec.check_funcdefs(dtm, want, False, {})
    assert "ok  funcdef CSoundDevice_setReverb" in capsys.readouterr().out
    assert (problems, changes) == ([
        "funcdef CSoundDevice_poll: int (CSoundDevice * this_ptr, int count), want int (CSoundDevice * this_ptr)",
        "funcdef CSoundDevice_new: missing", "funcdef CTwice: 2 of them"], [])


def test_apply_sets_or_creates_a_function_definition():
    wrong = funcdef("CSoundDevice_poll", INT, (INT, "count"))
    program = program_with(device(), FLOAT, VOID, INT, wrong)
    dtm = program.getDataTypeManager()
    want = {"CSoundDevice_poll": {"ret": "int", "params": [["CSoundDevice *", "this_ptr"]]},
            "CSoundDevice_setReverb": dict(REVERB, category = "/Nocturne/Funcdef"),
            "CSoundDevice_bad": {"ret": "void", "params": [["CMissing *", "p"]]}}
    problems, changes = apply_type_spec.check_funcdefs(dtm, want, True, {})
    assert changes == ["funcdef CSoundDevice_poll is int (CSoundDevice * this_ptr)",
                       "funcdef CSoundDevice_setReverb is void (CSoundDevice * this_ptr, float volume)"]
    assert problems == ["funcdef CSoundDevice_bad: missing (no type CMissing *)"]
    assert [(a.getName(), a.getDataType().getName()) for a in wrong.getArguments()] == [("this_ptr", "CSoundDevice *")]
    created = apply_type_spec.find_named(dtm, "CSoundDevice_setReverb", FunctionDefinitionDataType)[0]
    assert created.getCategoryPath().getPath() == "/Nocturne/Funcdef" and created.getReturnType() is VOID
    assert apply_type_spec.check_funcdefs(dtm, want, True, {}) == (problems, [])


SETTINGS = {"size": "0xc", "fields": [["0x0", "float", "volume"], ["0x4", "float", "decay_time"],
                                      ["0x8", "float", "damping"]]}


def test_a_struct_is_checked_for_its_whole_layout(capsys):
    right = StructureDataType("SReverbSettings", [(FLOAT, "volume"), (FLOAT, "decay_time"), (FLOAT, "damping")])
    vector = StructureDataType("SVector", [(FLOAT, "x"), (FLOAT, "y")], length = 0x10)
    dtm = program_with(FLOAT, right, vector, StructureDataType("STwice"), StructureDataType("STwice")).getDataTypeManager()
    want = {"SReverbSettings": SETTINGS, "SVector": SETTINGS, "SMissing": SETTINGS, "STwice": SETTINGS}
    problems, _ = apply_type_spec.check_structs(dtm, want, False, {})
    assert "ok  struct SReverbSettings" in capsys.readouterr().out
    assert problems == [
        "struct SVector: size 0x10, want 0xc; 0x0 float x, want float volume; 0x4 float y, want float decay_time; "
        "0x8 nothing, want float damping",
        "struct SMissing: missing", "struct STwice: 2 of them"]


def test_apply_rebuilds_or_creates_a_struct_keeping_comments():
    table = StructureDataType("CSoundDeviceFull_vtable", [(INT, "close"), (INT, "poll")])
    table.getComponentAt(0).comment = "slot 0"
    table.getComponentAt(4).comment = "dropped with its name"
    program = program_with(FLOAT, INT, table)
    dtm = program.getDataTypeManager()
    want = {"CSoundDeviceFull_vtable": {"size": "0xc", "fields": [["0x0", "int", "close"], ["0x8", "int", "reset"]]},
            "SReverbSettings": dict(SETTINGS, category = "/Nocturne/Struct/Game"),
            "SBad": {"size": "0x4", "fields": [["0x0", "CMissing", "x"]]}}
    problems, changes = apply_type_spec.check_structs(dtm, want, True, {})
    assert changes == ["struct CSoundDeviceFull_vtable laid out (2 fields, 0xc bytes)",
                       "struct SReverbSettings laid out (3 fields, 0xc bytes)"]
    assert problems == ["struct SBad: missing (no type CMissing)"]
    assert [(c.getOffset(), c.getFieldName(), c.getComment()) for c in table.getDefinedComponents()] == [
        (0, "close", "slot 0"), (8, "reset", None)]
    assert table.getLength() == 0xc
    created = apply_type_spec.find_named(dtm, "SReverbSettings", StructureDataType)[0]
    assert created.getCategoryPath().getPath() == "/Nocturne/Struct/Game"
    assert apply_type_spec.layout(created) == [(0, "float", "volume"), (4, "float", "decay_time"), (8, "float", "damping")]
    assert apply_type_spec.check_structs(dtm, want, False, {})[0] == ["struct SBad: missing"]
    assert apply_type_spec.check_structs(dtm, {"SReverbSettings": SETTINGS}, True, {}) == ([], [])


def test_a_global_is_checked_for_its_type_and_apply_puts_it_there(capsys):
    settings = StructureDataType("SReverbSettings", [(FLOAT, "volume"), (FLOAT, "decay_time"), (FLOAT, "damping")])
    program = program_with(FLOAT, settings)
    program.getListing().add_data(0x1000, settings)
    program.getListing().add_data(0x2000, FLOAT)
    rows = [["00001000", "SReverbSettings"], ["00002000", "SReverbSettings"], ["00003000", "SReverbSettings[2]"],
            ["00004000", "SMissing"]]
    problems, _ = apply_type_spec.check_globals(program, rows, False, {})
    assert "ok  global 00001000 SReverbSettings" in capsys.readouterr().out
    assert problems == ["global 00002000: float, want SReverbSettings", "global 00003000: None, want SReverbSettings[2]",
                        "global 00004000: None, want SMissing"]
    problems, changes = apply_type_spec.check_globals(program, rows, True, {})
    assert changes == ["global 00002000 is SReverbSettings", "global 00003000 is SReverbSettings[2]"]
    assert problems == ["global 00004000: None, want SMissing (no type SMissing)"]
    assert program.getListing().getDefinedDataAt(Address(0x3000)).getDataType().getNumElements() == 2


def test_a_field_takes_any_type_of_its_size():
    table = StructureDataType("CSoundDeviceFull_vtable", [(INT, "poll")])
    poll = funcdef("CSoundDevice_pollPlayback", INT)
    dtm = program_with(INT, poll, table).getDataTypeManager()
    fields = [["CSoundDeviceFull_vtable", "0x0", "CSoundDevice_pollPlayback *", "poll"]]
    assert apply_type_spec.check_fields(dtm, fields, True)[1] == [
        "field CSoundDeviceFull_vtable+0x0 is CSoundDevice_pollPlayback * poll"]
    assert table.getComponentAt(0).getDataType().getDataType() is poll
    assert apply_type_spec.check_fields(dtm, fields, False) == ([], [])


def test_apply_runs_every_section_then_checks_them_all(capsys):
    entry = StructureDataType("SSoundModeEntry", [(INT, "name"), (StructureDataType("CVector3f", length = 12), "orient")])
    program = program_with(FLOAT, VOID, INT, device(), entry, funcdef("CSoundDevice_setSfxPos", INT))
    spec = {"type_renames": {"*": {"SSoundModeEntry": "SReverbPreset"}},
            "absent": {"p.exe": ["SSoundModeEntry"]},
            "funcdefs": {"*": {"CSoundDevice_setReverb": REVERB}},
            "structs": {"p.exe": {"SReverbSettings": SETTINGS,
                                  "SReverbPreset": {"size": "0x10", "fields": [["0x0", "int", "name"],
                                                                               ["0x4", "SReverbSettings", "reverb"]]}}},
            "globals": {"p.exe": [["00001000", "SReverbPreset[2]"]]}}
    assert apply_type_spec.run(program, spec, "p.exe", True) == []
    out = capsys.readouterr().out
    assert "fixed  type SSoundModeEntry renamed SReverbPreset" in out and "saved 5 change(s) to p.exe" in out
    assert apply_type_spec.layout(entry) == [(0, "int", "name"), (4, "SReverbSettings", "reverb")]
    spec["absent"]["p.exe"].append("CSoundDevice_setSfxPos")
    assert apply_type_spec.run(program, spec, "p.exe", False) == ["type CSoundDevice_setSfxPos: still there, want it gone"]


def test_a_failed_apply_rolls_the_transaction_back():
    program = program_with(INT)
    with pytest.raises(ValueError):
        apply_type_spec.run(program, {"globals": {"p.exe": [["zz", "int"]]}}, "p.exe", True)
    assert program.transactions == [["apply_type_spec", False]]


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
