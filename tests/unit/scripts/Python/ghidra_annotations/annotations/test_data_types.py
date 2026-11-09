# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_fake import (BuiltInDataType, CategoryPath, EnumDataType, FunctionDefinitionDataType, IntegerDataType,
    PointerDataType, PointerTypedef, StructureDataType, TypedefDataType, UndefinedDataType, UnionDataType)
from ghidra_program import Program
from ghidra_annotations.annotations import data_types as dts
from ghidra_annotations.util import load_json_file

INT = IntegerDataType("int", 4)
SYS = "/Nocturne/Struct/System/winnt.h"
GAME = "/Nocturne/Class/Game"


def funcdef(name, ret = INT, args = (), category = "/Nocturne/FunctionDefinition/Game", convention = "__stdcall"):
    definition = FunctionDefinitionDataType(name, ret, args, category = category)
    definition.convention = convention
    return definition


def program_with_types():
    point = StructureDataType("SPoint", [(INT, "x"), (INT, "y")], category = GAME)
    point.components[0].comment = "across"
    game = StructureDataType("CGame", [(point, "where"), (PointerDataType(point), "next"),
                                       (UndefinedDataType(1), None)], category = GAME)
    packed = StructureDataType("SPacked", [(INT, "a")], category = SYS)
    packed.packed, packed.pack_value, packed.min_align = True, 1, 2
    machine = StructureDataType("SMachine", [(INT, "a")], category = SYS)
    machine.packed, machine.machine = True, True
    number = UnionDataType("UNumber", [INT], category = GAME)
    color = EnumDataType("EColor", 4, {"RED": 0, "BLUE": 2}, category = "/Nocturne/Enum/Game")
    handle = TypedefDataType("HANDLE", PointerDataType(None), category = SYS)
    alias = TypedefDataType("POINT_T", point, category = "/Nocturne/Typedef/Game")
    callback = funcdef("Callback", args = [(point, "p"), (PointerDataType(point), "pp"), (INT, "")],
                       convention = "__cdecl")
    callback.varargs = True
    callback.arguments[0].comment = "  the point  "
    callback_ptr = TypedefDataType("CallbackPtr", PointerDataType(callback), category = "/Nocturne/Typedef/Game")
    callback_too = TypedefDataType("CallbackAlias", PointerDataType(callback), category = "/Nocturne/Typedef/Game")
    farproc_def = funcdef("FARPROC", ret = None, convention = "unknown")
    farproc = TypedefDataType("FARPROC", PointerDataType(farproc_def), category = SYS)
    placeholder = funcdef("FunctionPointer")
    handler = TypedefDataType("WndHandler", placeholder, category = SYS)
    standalone = funcdef("Standalone", convention = "unknown")
    offset = PointerTypedef("CGame_ptr_8", game, -1, None, 8)
    offset.category = "/Nocturne/Typedef/Game"
    program = Program()
    program.getDataTypeManager().add(
        point, game, packed, machine, number, color, handle, alias, callback, callback_ptr, callback_too, farproc_def,
        farproc, placeholder, handler, standalone, offset, INT, UndefinedDataType(4),
        StructureDataType("__reserved", category = SYS))
    return program


def exported(path):
    return load_json_file(str(path), "data_types")


def by_name(records):
    return {r["name"]: r for r in records}


def test_every_kind_of_type_is_exported(tmp_path):
    dts.export_data_types(program_with_types(), str(tmp_path))
    data = exported(tmp_path)
    structs = by_name(data["structs"])
    assert sorted(structs) == ["CGame", "SMachine", "SPacked", "SPoint"]
    assert structs["SPoint"] == {"type": "struct", "name": "SPoint", "cat": GAME, "len": 8, "desc": "", "alig": 1,
        "pack": False, "importable": True, "fields": [
            {"name": "x", "type": "int", "offset": 0, "len": 4, "comment": "across"},
            {"name": "y", "type": "int", "offset": 4, "len": 4}]}
    assert [f["name"] for f in structs["CGame"]["fields"]] == ["where", "next"]
    assert {k: structs["SPacked"][k] for k in ("pack", "pack_value", "min_alig", "alig")} == {
        "pack": True, "pack_value": 1, "min_alig": 2, "alig": 2}
    assert structs["SMachine"]["machine_aligned"] is True
    assert by_name(data["unions"])["UNumber"]["fields"] == [{"name": "field_0", "type": "int", "offset": 0, "len": 4}]
    assert data["enums"] == [{"type": "enum", "name": "EColor", "cat": "/Nocturne/Enum/Game", "size": 4,
                              "values": [{"name": "RED", "val": 0}, {"name": "BLUE", "val": 2}], "importable": True}]
    typedefs = by_name(data["typedefs"])
    assert typedefs["CallbackPtr"]["function_definition"] == "Callback"
    assert typedefs["CallbackAlias"]["base"] == "Callback*"
    assert typedefs["FARPROC"]["function_definition"] == "FARPROC_FUNC"
    # A function definition the program names keeps its name, a placeholder one included
    assert typedefs["WndHandler"]["function_definition"] == "FunctionPointer"
    assert typedefs["CGame_ptr_8"]["component_offset"] == 8
    assert "component_offset" not in typedefs["POINT_T"]
    definitions = by_name(data["function_definitions"])
    assert sorted(definitions) == ["Callback", "FARPROC_FUNC", "FunctionPointer", "Standalone"]
    assert definitions["Callback"]["parameters"] == [
        {"name": "p", "type": "SPoint", "comment": "the point"}, {"name": "pp", "type": "SPoint*"},
        {"name": "param2", "type": "int"}]
    assert (definitions["Callback"]["calling_convention"], definitions["Callback"]["has_var_args"]) == (
        "__cdecl", True)
    assert definitions["Standalone"]["calling_convention"] == "unknown"
    order = [step["name"] for step in data["apply_order"]]
    assert order.index("SPoint") < order.index("CGame") and order.index("SPoint") < order.index("Callback")
    conventions = load_json_file(str(tmp_path), "func_conventions")
    assert conventions["Callback"] == {"convention": "__cdecl", "param_bytes": 16}
    assert conventions["Standalone"] == {"convention": "unknown", "param_bytes": 0}


def test_importable_flags_are_kept_and_a_function_definition_follows_its_typedefs(tmp_path):
    (tmp_path / "data_types").mkdir()
    (tmp_path / "data_types" / "data_types.json").write_text(json.dumps({
        "structs": [{"name": "SPoint", "importable": False}],
        "typedefs": [{"name": "CallbackPtr", "importable": False}, {"name": "CallbackAlias", "importable": False},
                     {"name": "WndHandler", "importable": False}],
        "function_definitions": [{"name": "Standalone", "importable": False}, {"name": "FunctionPointer",
                                                                             "importable": True}]}),
        encoding = "utf-8")
    dts.export_data_types(program_with_types(), str(tmp_path))
    data = exported(tmp_path)
    assert by_name(data["structs"])["SPoint"]["importable"] is False
    flags = {r["name"]: r["importable"] for r in data["function_definitions"]}
    assert flags == {"Callback": False, "FARPROC_FUNC": True, "Standalone": False, "FunctionPointer": True}


def test_duplicate_names_fail_the_export_after_writing_it(tmp_path, capsys):
    program = program_with_types()
    program.getDataTypeManager().add(StructureDataType("SPoint", [INT], category = SYS),
                                     TypedefDataType("Standalone", INT, category = SYS),
                                     StructureDataType("SBad.conflict", category = SYS))
    with pytest.raises(dts.DuplicateDataTypeError, match = "3 name"):
        dts.export_data_types(program, str(tmp_path))
    log = capsys.readouterr().out
    assert "structs: 'SPoint' defined 2 times in /Nocturne/Class/Game, /Nocturne/Struct/System/winnt.h" in log
    assert "cross-kind: 'Standalone' is both function_definitions and typedefs" in log
    assert ".conflict suffix" in log
    dts.export_data_types(program, str(tmp_path), allow_duplicates = True)


@pytest.mark.parametrize("name, typedef, made", [
    ("Real", "RealPtr", "Real"), ("Same", "Same", "Same_FUNC"), ("FunctionDef_1", "MouseCallback", "MouseCallbackFunc"),
    ("FunctionPointer", "KeyHandler", "KeyHandlerFunc"), ("", "ThingPtr", "ThingFunc"), (" ", "Other", "OtherFuncDef")])
def test_a_typedefs_function_definition_gets_a_name_of_its_own(name, typedef, made):
    assert dts.get_function_definition_name(funcdef(name), typedef) == made


def test_a_function_definition_without_a_universal_id_is_told_apart_by_path():
    definition = funcdef("Callback")
    definition.universal_id = None
    assert dts.get_function_definition_id(definition) == "/Nocturne/FunctionDefinition/Game/Callback"


def test_a_typedef_listed_before_its_function_definition_records_it_once(tmp_path):
    point = StructureDataType("SPoint", [(INT, "x")], category = GAME)
    maker = funcdef("MakePoint", ret = point)
    program = Program()
    # Ghidra lists types in no set order, and a bare pointer is none of the exported kinds
    program.getDataTypeManager().add(
        TypedefDataType("MakePointPtr", PointerDataType(maker), category = GAME), PointerDataType(point), maker, point,
        funcdef("NextPoint", ret = PointerDataType(point)))
    dts.export_data_types(program, str(tmp_path))
    data = exported(tmp_path)
    assert [d["name"] for d in data["function_definitions"]] == ["MakePoint", "NextPoint"]
    # A returned pointer needs only a forward declaration
    assert dts.collect_function_definition_dependencies(program, funcdef("NextPoint", ret = PointerDataType(point))) \
        == set()
    assert by_name(data["typedefs"])["MakePointPtr"]["function_definition"] == "MakePoint"
    order = [step["name"] for step in data["apply_order"]]
    assert order.index("SPoint") < order.index("MakePoint")


def test_a_typedef_of_a_typedef_depends_on_it_whatever_the_case():
    deps = dts.fix_typedef_dependencies({}, {"typedefs": [
        {"name": "LONG", "base": "long"}, {"name": "LPLONG", "base": "long*"}, {"name": "long", "base": "int"},
        {"name": "UINT", "base": "uint"}, {"name": "ALIAS", "base": "ALIAS"}, {"base": "x"}]})
    assert deps == {"LONG": {"long"}, "LPLONG": {"long"}}


# --- import ---------------------------------------------------------------------------------------

def write(path, data):
    (path / "data_types").mkdir(exist_ok = True)
    (path / "data_types" / "data_types.json").write_text(json.dumps(data), encoding = "utf-8")


def target():
    program = Program()
    program.getDataTypeManager().add(INT)
    return program


def types_of(program):
    return {t.getName(): t for t in program.getDataTypeManager().types}


def test_types_round_trip_through_export_and_import(tmp_path):
    dts.export_data_types(program_with_types(), str(tmp_path))
    program = target()
    dts.import_data_types(program, str(tmp_path))
    dts.export_data_types(program, str(tmp_path / "again"))
    first, second = exported(tmp_path), exported(tmp_path / "again")
    for kind in dts.DATA_TYPE_KINDS:
        assert by_name(second[kind]) == by_name(first[kind]), kind
    assert program.transactions == [["Import Data Types", True]]


def test_existing_types_are_updated_in_place_and_left_alone_when_unchanged(tmp_path):
    write(tmp_path, {"structs": [
        {"type": "struct", "name": "SPoint", "cat": GAME, "len": 8, "importable": True,
         "fields": [{"name": "x", "type": "int", "offset": 0, "len": 4}, {"name": "y", "type": "int", "offset": 4}]},
        {"type": "struct", "name": "SSame", "cat": GAME, "len": 4, "importable": True,
         "fields": [{"name": "a", "type": "int", "offset": 0, "len": 4}]}],
        "typedefs": [{"type": "typedef", "name": "ImageBaseOffset32", "base": "void*", "importable": True}]})
    program = target()
    old_point = StructureDataType("SPoint", [(INT, "x")], category = GAME)
    same = StructureDataType("SSame", [(INT, "a")], category = GAME)
    builtin = BuiltInDataType("ImageBaseOffset32", 4)
    program.getDataTypeManager().add(old_point, same, builtin)
    dts.import_data_types(program, str(tmp_path))
    manager = program.getDataTypeManager()
    assert manager.replaced == [(old_point, manager.replaced[0][1])]
    assert [c.getFieldName() for c in manager.replaced[0][1].components] == ["x", "y"]
    assert types_of(program)["SSame"] is same and types_of(program)["ImageBaseOffset32"] is builtin


def test_records_naming_a_missing_type_wait_for_it_and_are_reported_if_it_never_comes(tmp_path, capsys):
    write(tmp_path, {"apply_order": [{"name": "TLater", "type": "typedef"}, {"name": "SLater", "type": "struct"}],
                     "typedefs": [{"type": "typedef", "name": "TLater", "base": "SLater", "importable": True},
                                  {"type": "typedef", "name": "TNever", "base": "SNowhere", "importable": True}],
                     "structs": [{"type": "struct", "name": "SLater", "len": 4, "importable": True, "fields": [
                         {"name": "a", "type": "int", "offset": 0, "len": 4}]},
                                 {"type": "struct", "name": "SBroken", "len": 4, "importable": True, "fields": [
                                     {"name": "a", "type": "SNowhere", "offset": 0}]}],
                     "unions": [{"type": "union", "name": "UBroken", "importable": True, "fields": [
                         {"name": "a", "type": "SNowhere"}]}],
                     "function_definitions": [
                         {"type": "function_definition", "name": "FNever", "return_type": "SNowhere",
                          "importable": True},
                         {"type": "function_definition", "name": "FSkipped", "importable": False}]})
    program = target()
    dts.import_data_types(program, str(tmp_path))
    made = types_of(program)
    assert made["TLater"].getDataType() is made["SLater"]
    assert "TNever" not in made and "FSkipped" not in made
    assert "4 data types name a type the program lacks: FNever, SBroken, TNever, UBroken" in capsys.readouterr().out


def test_an_offset_pointer_points_at_what_the_recorded_pointer_does(tmp_path):
    write(tmp_path, {"typedefs": [{"type": "typedef", "name": "CGame_ptr_8", "base": "CGame*", "cat": "/T",
                                   "component_offset": 8, "importable": True},
                                  {"type": "typedef", "name": "Raw_ptr_4", "base": "CGame", "component_offset": 4,
                                   "importable": True}],
                     "structs": [{"type": "struct", "name": "CGame", "len": 4, "importable": True, "fields": []}]})
    program = target()
    dts.import_data_types(program, str(tmp_path))
    made = types_of(program)
    assert made["CGame_ptr_8"].getDataType().getDataType() is made["CGame"]
    assert made["CGame_ptr_8"].getCategoryPath().getPath() == "/T"
    assert made["Raw_ptr_4"].getDataType().getDataType() is made["CGame"]


def test_a_calling_convention_the_program_lacks_is_reported(tmp_path, capsys):
    write(tmp_path, {"function_definitions": [{"type": "function_definition", "name": "F", "importable": True,
                                               "calling_convention": "__bogus"}]})
    program = target()
    dts.import_data_types(program, str(tmp_path))
    assert types_of(program)["F"].getCallingConventionName() == "unknown"
    assert "F names a calling convention the program lacks: __bogus" in capsys.readouterr().out


def test_layout_settings_are_set_as_recorded():
    struct = dts.with_layout(StructureDataType(CategoryPath("/"), "S", 0), {"desc": "d", "pack": True,
                                                                         "pack_value": 2, "machine_aligned": True})
    assert (struct.getDescription(), struct.packed, struct.pack_value, struct.min_align, struct.machine) == (
        "d", True, 2, None, True)


def test_nothing_is_ever_deleted_and_no_previous_export_imports_nothing(tmp_path, capsys):
    program = program_with_types()
    before = list(program.getDataTypeManager().types)
    dts.delete_data_types(program, str(tmp_path))
    dts.import_data_types(program, str(tmp_path))
    assert program.getDataTypeManager().types == before
    assert "never deleted" in capsys.readouterr().out
