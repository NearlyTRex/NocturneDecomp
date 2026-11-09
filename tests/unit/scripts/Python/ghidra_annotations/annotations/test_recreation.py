# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_fake import (ArrayDataType, EnumDataType, FunctionDefinitionDataType, IntegerDataType,
    ParameterDefinition, PointerDataType, StructureDataType, TypedefDataType, UndefinedDataType)
from ghidra_program import Address, Program
from ghidra_annotations.annotations import recreation as rc
from ghidra_annotations.util import load_json_files

GAME = "/Nocturne/%s/Game"
INT = IntegerDataType("int", 4)


@pytest.fixture(autouse = True)
def classes(monkeypatch):
    monkeypatch.setattr(rc, "get_class_hierarchy", lambda: {"CBase": ["CGame"]})
    monkeypatch.setattr(rc, "get_class_files", lambda: {"CGame": "..\\core\\game.cpp"})


def game_types():
    base = StructureDataType("CBase", [INT], category = GAME % "Class")
    child = StructureDataType("CChild", [(base, "base")], category = GAME % "Class")
    return [
        base, child,
        StructureDataType("CGame", [INT], category = GAME % "Class"),
        StructureDataType("CGame_vtable", [(INT, "update"), (INT, None)], category = GAME % "Class"),
        StructureDataType("SEmpty", category = GAME % "Struct"),
        StructureDataType("SNotBase", [(INT, "base")], category = GAME % "Struct"),
        EnumDataType("EState", 4, {"IDLE": 0, "RUN": 1}, category = GAME % "Enum"),
        FunctionDefinitionDataType("Callback", PointerDataType(INT), [INT], category = GAME % "FunctionDefinition"),
        TypedefDataType("HANDLE_T", PointerDataType(None), category = GAME % "Typedef"),
        StructureDataType("CODD", category = GAME % "Odd"),
        StructureDataType("CONTEXT", category = "/Nocturne/Struct/System/winnt.h"),
        PointerDataType(base), ArrayDataType(base, 4), INT,
    ]


def test_types_describe_game_definitions_only(tmp_path):
    program = Program()
    program.getDataTypeManager().add(*game_types())
    types = {t["name"]: t for t in rc.export_recreation_types(program)}
    # CODD's category names no game kind, CONTEXT is a system type, the rest derive from CBase or are built in
    assert sorted(types) == ["CBase", "CChild", "CGame", "CGame_vtable", "Callback", "EState", "HANDLE_T",
                             "SEmpty", "SNotBase"]
    assert types["CGame"] == {"name": "CGame", "kind": "class", "size": 4, "parent": "CBase",
                              "rtti_file": "core/game.cpp"}
    assert types["CChild"]["parent"] == "CBase"
    assert "parent" not in types["SEmpty"] and "parent" not in types["SNotBase"]
    assert types["CGame_vtable"]["vtable_slots"] == [{"offset": 0, "name": "update"}]
    assert types["EState"]["values"] == [{"name": "IDLE", "value": 0}, {"name": "RUN", "value": 1}]
    assert types["Callback"]["ret"] == {"ptr": 1, "name": "int", "kind": "builtin"}
    assert types["Callback"]["params"] == [{"type": {"ptr": 0, "name": "int", "kind": "builtin"}}]
    assert types["HANDLE_T"]["target"] == {"ptr": 1, "name": "void", "kind": "builtin"}
    assert rc.classify_data_type(StructureDataType("CODD", category = GAME % "Odd")) == ("other", None)


def test_a_type_filed_under_the_wrong_kind_is_listed_without_its_details():
    program = Program()
    program.getDataTypeManager().add(StructureDataType("SFiled", [INT], category = GAME % "Typedef"),
                                     TypedefDataType("TFiled", INT, category = GAME % "Struct"))
    assert rc.export_recreation_types(program) == [
        {"name": "SFiled", "kind": "typedef", "size": 4}, {"name": "TFiled", "kind": "struct", "size": 4}]


@pytest.mark.parametrize("data_type, described", [
    (ArrayDataType(ArrayDataType(INT, 3), 2), {"ptr": 0, "array": [2, 3], "name": "int", "kind": "builtin"}),
    (StructureDataType("CONTEXT", category = "/Nocturne/Struct/System/winnt.h"),
     {"ptr": 0, "name": "CONTEXT", "kind": "system", "header": "winnt"}),
    (StructureDataType("MSG", category = "/Nocturne/Struct/System/"),
     {"ptr": 0, "name": "MSG", "kind": "system", "header": "misc"}),
    (UndefinedDataType(4), {"ptr": 0, "name": "undefined4", "kind": "undefined"}),
    (None, {"ptr": 0, "name": "void", "kind": "builtin"})])
def test_a_type_is_described_by_its_pointers_arrays_and_kind(data_type, described):
    assert rc.describe_type(data_type) == described


@pytest.mark.parametrize("name, split", [
    ("core_game.cpp_CGame_update_FUN_00401000", ("core/game.cpp", "CGame", "update")),
    ("core_game.cpp_CGame_Sub_go_FUN_00401000", ("core/game.cpp", "CGame_Sub", "go")),
    ("core_game.cpp_helper_FUN_00401000", ("core/game.cpp", None, "helper")),
    ("core_game.cpp_free_helper_FUN_00401000", ("core/game.cpp", None, "free_helper")),
    ("FUN_00401000", None), ("core_game.cpp_noSuffix", None), ("thing_name_FUN_00401000", None)])
def test_function_names_split_into_unit_class_and_method(name, split):
    assert rc.split_function_name(name, {"CGame", "CGame_Sub"}) == split


def program_with_functions():
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x400))
    functions = program.getFunctionManager()
    update = functions.add("core_game.cpp_CGame_update_FUN_00401000", 0x401000, size = 0x20)
    update.parameters = [ParameterDefinition(PointerDataType(INT), "this_ptr"), ParameterDefinition(INT, "dt")]
    update.return_type = INT
    caller = functions.add("core_game.cpp_main_FUN_00401100", 0x401100, size = 0x20)
    caller.called = [update]
    caller.varargs = True
    functions.add("core_game.cpp_CGame_ctor_FUN_00401200", 0x401200).parameters = [
        ParameterDefinition(INT, "notthis")]
    functions.add("FUN_00401300", 0x401300)
    references = program.getReferenceManager()
    references.add(0x401108, 0x401000, call = True)
    references.add(0x500000, 0x401000)
    return program


def test_functions_record_their_signature_callers_and_calls():
    functions = {f["name"]: f for f in rc.export_recreation_functions(program_with_functions(), {"CGame"})}
    assert sorted(functions) == ["core_game.cpp_CGame_ctor_FUN_00401200", "core_game.cpp_CGame_update_FUN_00401000",
                                 "core_game.cpp_main_FUN_00401100"]
    update = functions["core_game.cpp_CGame_update_FUN_00401000"]
    assert (update["cls"], update["method"], update["receiver"], update["conv"]) == ("CGame", "update", True, "__cdecl")
    assert update["params"] == [{"name": "dt", "type": {"ptr": 0, "name": "int", "kind": "builtin"}}]
    assert (update["callers"], update["data_refs"]) == (["00401100"], ["00500000"])
    assert functions["core_game.cpp_main_FUN_00401100"]["calls"] == ["00401000"]
    assert functions["core_game.cpp_main_FUN_00401100"]["variadic"] is True
    assert functions["core_game.cpp_CGame_ctor_FUN_00401200"]["receiver"] is False


def write_vtables(path, tables):
    (path / "vtables").mkdir(parents = True)
    (path / "vtables" / "vtables_bucket_00.json").write_text(json.dumps(tables), encoding = "utf-8")


def slot(offset, addr, name):
    return {"offset": offset, "func_addr": addr, "func_name": name}


PURE = "crt_purevirt.c_pureVirtual_FUN_00409000"


def test_vtables_get_an_owner_and_descriptors_are_split_out(tmp_path):
    functions = [
        {"addr": "00401000", "cls": "CBase", "method": "update"},
        {"addr": "00401010", "cls": "CGame", "method": "draw"},
        {"addr": "00401020", "cls": "CMenu", "method": "draw"},
        {"addr": "00401030", "cls": "CGame", "method": "ctor"},
        {"addr": "00401040", "cls": "CGame", "method": "dtor2"},
        {"addr": "00401050", "method": "free"},
        {"addr": "00401060", "cls": "CX", "method": "go"}]
    # CX and CY name each other as parent: the ancestor walk must still end
    types = [{"name": "CGame", "parent": "CBase"}, {"name": "CX", "parent": "CY"}, {"name": "CY", "parent": "CX"}]
    write_vtables(tmp_path, [
        {"addr": "00500000", "functions": [slot(0, "00401000", "u"), slot(4, "00401010", "d"),
                                           slot(8, "00401020", "m"), slot(12, "00409000", PURE),
                                           slot(16, "00409999", "unknown")]},
        {"addr": "00500100", "functions": [slot(0, "00401030", "c"), slot(4, "00409000", PURE),
                                           slot(8, "00401040", "d")]},
        {"addr": "00500200", "functions": [slot(0, "00409000", PURE), slot(4, "00409000", PURE)]},
        {"addr": "00500300", "functions": [slot(0, "00401050", "f"), slot(4, "00409999", "x"), slot(8, "x", "y"),
                                           slot(12, "z", "w")]},
        {"addr": "00500400", "functions": [slot(0, "00401060", "g")]}])
    vtables, descriptors = rc.export_recreation_vtables(str(tmp_path), functions, types)
    assert descriptors == [{"addr": "00500100", "cls": "CGame", "slots": {"ctor": "00401030", "dtor": "00401040"}}]
    assert [(v["addr"], v["owner"]) for v in vtables] == [("00500000", "CGame"), ("00500400", "CX")]
    assert vtables[0]["owner"] == "CGame"
    assert vtables[0]["slots"][2] == {"offset": 8, "addr": "00401020", "name": "m", "foreign": "CMenu"}
    assert vtables[0]["slots"][3]["pure"] is True


def test_the_whole_export_writes_each_part(tmp_path, capsys):
    program = program_with_functions()
    program.getDataTypeManager().add(*game_types())
    rc.export_recreation(program, str(tmp_path))
    assert "No vtables export found" in capsys.readouterr().out
    folder = tmp_path / "recreation"
    assert len(load_json_files(str(folder), "types")) == 9
    assert len(load_json_files(str(folder), "functions")) == 3
    assert load_json_files(str(folder), "vtables") == []
    write_vtables(tmp_path, [{"addr": "00500000", "functions": [slot(0, "00401000", "u")]}])
    rc.export_recreation(program, str(tmp_path))
    assert load_json_files(str(folder), "vtables")[0]["owner"] == "CGame"
    assert Address(0x401000) in program.getFunctionManager().functions
