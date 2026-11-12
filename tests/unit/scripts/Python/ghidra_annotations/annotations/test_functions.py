# Imports
import importlib
import json

# Third-party imports
import pytest

# Local imports
from ghidra_fake import (AddressSet, IntegerDataType, PointerDataType, StructureDataType, Variable,
    VariableStorage, Varnode)
from ghidra_program import Address, Program
from ghidra_annotations.annotations import functions as fn
from ghidra_annotations.util import load_json_files

UpdateType = importlib.import_module("ghidra.program.model.listing").Function.FunctionUpdateType
INT = IntegerDataType("int", 4)
GAME = StructureDataType("CGame", [INT, INT])


def program_with_types():
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x1000), execute = True)
    program.getMemory().add_block(".data", 0x500000, bytes(0x100))
    program.getDataTypeManager().add(INT, GAME)
    return program


def stack(offset, size):
    return VariableStorage(None, offset, size)


# --- the checks the export gates on ---------------------------------------------------------------

def test_a_name_suffix_must_be_the_entry_point_except_where_ghidra_owns_the_name():
    functions = [
        {"name": "core_game.cpp_update_FUN_00401000", "addr": "00401000"},
        {"name": "core_game.cpp_draw_FUN_00401000", "addr": "00401010"},
        {"name": "Ordinal_116_FUN_00212000", "addr": "00401020", "thunk": True, "thtarget": "EXTERNAL:00000001"},
        {"name": "thunk_FUN_00401000", "addr": "00401030", "thunk": True, "thtarget": "00401000"},
        {"name": "thunk_FUN_00401000", "addr": "00401040", "thunk": True, "thtarget": "00402000"},
        {"name": "core_game.cpp_plain_FUN_00401050", "addr": "00401050", "thunk": True, "thtarget": "00401000"},
        {"name": "no_suffix", "addr": "00401060"}, {"name": "core_x.cpp_f_FUN_00401070"}]
    assert fn.find_name_address_mismatches(functions) == [
        "core_game.cpp_draw_FUN_00401000 starts at 00401010 but its name claims 00401000",
        "thunk_FUN_00401000 starts at 00401040 but its name claims 00401000"]


def test_a_class_method_must_take_this_ptr_of_its_class():
    def method(name, *params):
        return {"name": f"core_game.cpp_{name}_FUN_00401000",
                "vars": {"params": [{"name": n, "type": t} for n, t in params]}}

    defects = fn.find_this_ptr_defects([
        method("CGame_ok", ("this_ptr", "CGame *")), method("CGame_none"),
        method("CGame_wrong", ("this_ptr", "CMenu *")), method("CGamme_typo", ("this_ptr", "CGame *")),
        method("CGame_named", ("self", "CGame *")), {"name": "free_function_FUN_00401000"},
        method("SMemHead_ok", ("this_ptr", "SMemHead *")), method("SMemHead_add", ("header", "SMemHead *"))],
        {"CGame", "CMenu", "SMemHead"})
    assert len(defects) == 5
    assert "typed SMemHead * but named `header`" in defects[4]
    assert "CGame_none_FUN_00401000 declares no parameters" in defects[0]
    assert "claims class CGame but parameter 0 is `CMenu * this_ptr`" in defects[1]
    assert defects[1].endswith("`") and "NAME is wrong" in defects[2]
    assert "typed CGame * but named `self`" in defects[3]


def test_an_external_function_or_a_thunk_to_one_is_external():
    program = Program()
    functions = program.getFunctionManager()
    imported = functions.add("ExitProcess", 0x212000)
    imported.external = True
    thunk = functions.add("thunk", 0x401000)
    thunk.thunk_target = imported
    local_thunk = functions.add("local_thunk", 0x401010)
    local_thunk.thunk_target = functions.add("local", 0x401020)
    assert [fn.is_function_external(program, f) for f in (imported, thunk, local_thunk, local_thunk.thunk_target)] \
        == [True, True, False, False]


def test_stack_locals_an_import_could_not_place_are_named():
    locals_data = [{"name": n, "storage": {"stack": True, "offset": o, "size": s}} for n, o, s in [
        ("a", -8, 4), ("b", -6, 4), ("far", 40000, 4), ("huge", 0, 2048), ("ok", 16, 4)]] + [
        {"name": "reg", "storage": {"reg": "EAX"}}, {"name": "plain"}]
    names, messages = fn.get_stack_conflicts(locals_data)
    assert names == {"a", "b", "far", "huge"}
    assert messages[0] == "Variables a and b overlap: [-8--5] vs [-6--3]"
    fixed, removed = fn.without_conflicting_storage(locals_data, names)
    assert removed == ["a", "b", "far", "huge"]
    assert [("storage" in d) for d in fixed] == [False, False, False, False, True, True, False]


# --- export ---------------------------------------------------------------------------------------

def program_with_functions():
    program = program_with_types()
    functions = program.getFunctionManager()
    update = functions.add("core_game.cpp_CGame_update_FUN_00401000", 0x401000, size = 0x20)
    update.parameters = [Variable("this_ptr", PointerDataType(GAME), VariableStorage(None, program.getRegister("ECX"))),
                         Variable("dt", INT, stack(4, 4), ordinal = 1, comment = "seconds")]
    update.local_variables = [Variable("a", INT, stack(-8, 4), first_use = 4, comment = "count"),
                              Variable("b", INT, stack(-6, 4)),
                              Variable("g", INT, VariableStorage(None, Address(0x500000), 4))]
    update.return_type = INT
    update.return_variable = Variable("<RETURN>", INT, VariableStorage(None, program.getRegister("EAX")))
    update.convention, update.inline, update.varargs, update.noreturn = "__thiscall", True, True, True
    update.custom_storage, update.comment, update.tags = True, "main loop", ["HOT"]
    thunk = functions.add("thunk_FUN_00401000", 0x401100)
    thunk.thunk_target = update
    thunk.convention = "unknown"
    return program


def test_functions_export_their_signature_variables_and_flags(tmp_path):
    program = program_with_functions()
    # An ordinal out of sequence is recorded; Ghidra's are in sequence once parameters are replaced
    program.getFunctionManager().getFunctionAt(Address(0x401000)).parameters[1].ordinal = 3
    fn.export_functions(program, str(tmp_path))
    records = {r["addr"]: r for r in load_json_files(str(tmp_path), "functions")}
    update = records["00401000"]
    assert {k: update[k] for k in update if k != "vars"} == {
        "name": "core_game.cpp_CGame_update_FUN_00401000", "addr": "00401000", "importable": True, "ret": "int",
        "body": [{"start": "00401000", "end": "0040101f", "size": 32}], "tags": ["HOT"], "conv": "__thiscall",
        "inline": True, "variadic": True, "noreturn": True, "custom_storage": True, "cmt": "main loop"}
    params = update["vars"]["params"]
    assert params[0] == {"name": "this_ptr", "type": "CGame*",
                         "storage": {"reg": "ECX", "size": 4, "varnodes": [{"addr": "register:00000004", "size": 4}]}}
    assert params[1] == {"name": "dt", "type": "int", "ord": 3, "cmt": "seconds",
                         "storage": {"stack": True, "offset": 4, "size": 4}}
    assert update["vars"]["locals"][2]["storage"] == {"mem": "00500000", "size": 4,
                                                      "varnodes": [{"addr": "00500000", "size": 4}]}
    assert update["vars"]["storage_conflicts_resolved"] == ["a", "b"]
    assert update["vars"]["locals"][0] == {"name": "a", "type": "int", "use": 4, "cmt": "count"}
    assert update["vars"]["ret_storage"]["reg"] == "EAX"
    assert records["00401100"]["thunk"] is True and records["00401100"]["thtarget"] == "00401000"
    assert "conv" not in records["00401100"]


def test_the_importable_flag_is_kept_and_storage_kinds_are_recorded(tmp_path):
    (tmp_path / "functions").mkdir()
    (tmp_path / "functions" / "functions_bucket_00.json").write_text(json.dumps([
        {"addr": "00401000", "importable": False}, {"name": "no address"}]), encoding = "utf-8")
    program = program_with_functions()
    update = program.getFunctionManager().getFunctionAt(Address(0x401000))
    odd = [VariableStorage(), VariableStorage(), VariableStorage(), stack(-32, 4)]
    odd[0].kind, odd[1].kind, odd[2].kind = "compound", "unique", "unassigned"
    odd[3].valid = False
    odd[3].varnodes = [Varnode(Address(0x10), 4, offset = 2)]
    update.local_variables = [Variable(f"v{i}", INT, s) for i, s in enumerate(odd)]
    update.return_variable = Variable("<RETURN>", INT, VariableStorage())
    fn.export_functions(program, str(tmp_path), allow_this_ptr_mismatch = True)
    record = {r["addr"]: r for r in load_json_files(str(tmp_path), "functions")}["00401000"]
    assert record["importable"] is False
    assert [local.get("storage") for local in record["vars"]["locals"]] == [
        {"compound": True}, {"unassigned": True}, None,
        {"stack": True, "offset": -32, "size": 4, "invalid": True, "varnodes": [
            {"addr": "00000010", "size": 4, "offset": 2}]}]
    assert "ret_storage" not in record["vars"]


def test_a_misnamed_function_or_receiver_fails_the_export_after_writing_it(tmp_path):
    program = program_with_functions()
    program.getFunctionManager().add("core_game.cpp_draw_FUN_00409999", 0x401200)
    program.getFunctionManager().add("core_game.cpp_CGame_draw_FUN_00401300", 0x401300)
    with pytest.raises(fn.FunctionNameAddressMismatchError, match = "1 function"):
        fn.export_functions(program, str(tmp_path))
    assert len(load_json_files(str(tmp_path), "functions")) == 4
    with pytest.raises(fn.ThisPtrMismatchError, match = "1 function"):
        fn.export_functions(program, str(tmp_path), allow_name_address_mismatch = True)
    fn.export_functions(program, str(tmp_path), allow_name_address_mismatch = True, allow_this_ptr_mismatch = True)


def test_a_placeholder_unit_fails_the_export_after_writing_it(tmp_path):
    program = program_with_functions()
    program.getFunctionManager().add("unkafter_game.cpp_FUN_00401200", 0x401200)
    out = tmp_path / "bw1.exe"
    with pytest.raises(fn.TUNameError, match = "unkafter_game.cpp: folder unkafter is a placeholder"):
        fn.export_functions(program, str(out), allow_this_ptr_mismatch = True)
    assert "00401200" in {r["addr"] for r in load_json_files(str(out), "functions")}
    fn.export_functions(program, str(out), allow_this_ptr_mismatch = True, allow_tu_name_violations = True)


# --- import ---------------------------------------------------------------------------------------

@pytest.mark.parametrize("storage, data_type, made", [
    ({}, INT, None), (None, INT, None),
    ({"stack": True, "offset": -8, "size": 4}, INT, ("stack", -8)),
    ({"stack": True, "offset": -8, "size": 2}, INT, None),
    ({"stack": True, "offset": 40000, "size": 4}, INT, None),
    ({"stack": True, "offset": 0, "size": 2048}, StructureDataType("SBig", length = 2048), None),
    ({"reg": "ECX"}, INT, ("register", "ECX")), ({"reg": "XMM9"}, INT, None),
    ({"mem": "00500000"}, INT, ("memory", "00500000")), ({"mem": "00900000"}, INT, None),
    ({"varnodes": [{"addr": "HASH:1f", "size": 4}]}, INT, ("hash", "0000001f")),
    ({"varnodes": [{"addr": "HASH:1f"}]}, INT, ("hash", "0000001f")),
    ({"varnodes": [{"addr": "register:0"}]}, INT, None), ({"compound": True}, INT, None)])
def test_recorded_storage_becomes_the_storage_it_names(storage, data_type, made):
    result = fn.import_variable_storage(program_with_types(), storage, data_type)
    assert (None if result is None else (result.kind, str(result.where))) == (
        None if made is None else (made[0], str(made[1])))


def test_storage_ghidra_refuses_or_a_missing_hash_space_is_left_to_ghidra():
    program = program_with_types()
    program.getAddressFactory().has_hash_space = False
    assert fn.import_variable_storage(program, {"varnodes": [{"addr": "HASH:1f"}]}, INT) is None


@pytest.mark.parametrize("ret, variables, imported", [
    (None, None, False), ("int", None, True), ("undefined1", None, False), ("undefined1", {}, False),
    ("undefined1", {"ret_storage": {"invalid": True}}, False), ("undefined1", {"ret_storage": {"reg": "AL"}}, True)])
def test_a_return_type_is_imported_unless_it_says_nothing(ret, variables, imported):
    assert fn.should_import_return_type(ret, variables) is imported


def test_a_body_comes_from_its_ranges_or_the_entry_alone():
    program = program_with_types()
    entry = Address(0x401000)
    assert fn.import_function_body(program, entry, []).ranges == [(0x401000, 0x401000)]
    assert fn.import_function_body(program, entry, [{"start": "00401000", "end": "0040100f"},
                                                    {"start": "zz", "end": "zz"}]).ranges == [(0x401000, 0x40100f)]
    assert fn.import_function_body(program, entry, [{"start": "zz", "end": "zz"}]).ranges == [(0x401000, 0x401000)]


def write(path, records):
    (path / "functions").mkdir(exist_ok = True)
    (path / "functions" / "functions_bucket_00.json").write_text(json.dumps(records), encoding = "utf-8")


@pytest.fixture(name = "disassembled")
def fixture_disassembled(monkeypatch):
    calls = []
    monkeypatch.setattr(fn, "is_addr_disassembled", lambda program, address: address.getOffset() == 0x401000)
    monkeypatch.setattr(fn, "disassemble_at_addr", lambda program, start, end: calls.append((str(start), str(end))))
    return calls


def test_functions_round_trip_through_export_and_import(tmp_path, disassembled):
    fn.export_functions(program_with_functions(), str(tmp_path), allow_this_ptr_mismatch = True)
    target = program_with_types()
    fn.import_functions(target, str(tmp_path))
    fn.export_functions(target, str(tmp_path / "again"), allow_this_ptr_mismatch = True)
    first = {r["addr"]: r for r in load_json_files(str(tmp_path), "functions")}
    second = {r["addr"]: r for r in load_json_files(str(tmp_path / "again"), "functions")}
    # The import made the conflicting locals without storage, so there is no conflict left to note
    assert first["00401000"]["vars"].pop("storage_conflicts_resolved") == ["a", "b"]
    assert second == first
    assert disassembled == [("00401100", "00401100")]


def test_dynamic_storage_functions_leave_their_storage_to_the_convention(tmp_path, disassembled):
    write(tmp_path, [{"name": "f", "addr": "00401000", "importable": True, "ret": "int", "vars": {
        "params": [{"name": "x", "type": "int", "storage": {"stack": True, "offset": 4, "size": 4}}],
        "ret_storage": {"reg": "EAX"}}}])
    program = program_with_types()
    fn.import_functions(program, str(tmp_path))
    function = program.getFunctionManager().getFunctionAt(Address(0x401000))
    (update, params), = function.replaced
    assert update is UpdateType.DYNAMIC_STORAGE_ALL_PARAMS
    assert params[0].getVariableStorage() is VariableStorage.UNASSIGNED_STORAGE
    assert (function.getReturn(), function.hasCustomVariableStorage()) == (None, False)
    assert disassembled == []


def test_an_existing_function_is_updated_and_overlapping_ones_removed(tmp_path, disassembled):
    write(tmp_path, [
        {"name": "renamed", "addr": "00401000", "importable": True, "ret": "SMissing",
         "body": [{"start": "00401000", "end": "0040103f"}], "thunk": True, "thtarget": "00409000",
         "vars": {"locals": [{"name": "x", "type": "int"}]}},
        {"name": "skipped", "addr": "00401200"}, {"addr": "00401300", "importable": True}])
    program = program_with_types()
    functions = program.getFunctionManager()
    existing = functions.add("old", 0x401000, size = 0x10)
    existing.inline = existing.noreturn = True
    existing.return_type = INT
    functions.add("overlapped", 0x401020)
    functions.add("elsewhere", 0x402000)
    fn.import_functions(program, str(tmp_path))
    assert sorted(f.getName() for f in functions.functions.values()) == ["elsewhere", "renamed"]
    assert existing.body.ranges == [(0x401000, 0x40103f)]
    assert (existing.isInline(), existing.hasNoReturn(), existing.getReturnType()) == (False, False, INT)
    assert not existing.isThunk()
    assert (existing.replaced, [v.getName() for v in existing.local_variables]) == ([], ["x"])
    assert disassembled == []


def test_parameters_of_a_type_the_program_lacks_are_left_as_they_are(tmp_path, disassembled):
    write(tmp_path, [{"name": "f", "addr": "00401000", "importable": True, "custom_storage": True, "vars": {
        "params": [{"name": "x", "type": "SMissing"}]}}])
    program = program_with_types()
    function = program.getFunctionManager().add("f", 0x401000)
    function.parameters = ["kept"]
    fn.import_functions(program, str(tmp_path))
    assert (function.parameters, function.replaced) == (["kept"], [])
    assert disassembled == []


def test_locals_are_made_the_recorded_ones(tmp_path, disassembled, capsys):
    write(tmp_path, [{"name": "f", "addr": "00401000", "importable": True, "custom_storage": True, "vars": {
        "params": [{"name": "this_ptr", "type": "int", "storage": {"reg": "ECX"}, "cmt": "self"}],
        "locals": [
            {"name": "same", "type": "int", "storage": {"stack": True, "offset": -4, "size": 4}},
            {"name": "retyped", "type": "CGame", "storage": {"stack": True, "offset": -16, "size": 8}, "cmt": "c"},
            {"name": "new", "type": "int", "use": 6},
            {"name": "unknown", "type": "SMissing"},
            {"name": "clash", "type": "int"}],
        "ret_storage": {"reg": "EAX"}}}])
    program = program_with_types()
    function = program.getFunctionManager().add("f", 0x401000)
    function.return_type = INT
    same = Variable("same", INT, stack(-4, 4))
    function.local_variables = [same, Variable("retyped", INT, stack(-16, 4)), Variable("gone", INT)]

    def add_local(variable, _source, real = function.addLocalVariable):
        if variable.getName() == "clash":
            raise fn.InvalidInputException("storage conflict")
        return real(variable, _source)

    function.addLocalVariable = add_local
    fn.import_functions(program, str(tmp_path))
    by_name = {v.getName(): v for v in function.local_variables}
    assert sorted(by_name) == ["new", "retyped", "same"]
    assert by_name["same"] is same
    assert (by_name["retyped"].getDataType(), by_name["retyped"].getComment()) == (GAME, "c")
    assert (by_name["new"].getFirstUseOffset(), by_name["new"].getVariableStorage()) == (
        6, VariableStorage.UNASSIGNED_STORAGE)
    assert function.replaced[0][0] is UpdateType.CUSTOM_STORAGE
    assert function.parameters[0].getComment() == "self"
    assert function.getReturn().getVariableStorage().kind == "register"
    log = capsys.readouterr().out
    assert "local unknown has a type the program lacks" in log
    assert "local clash not added: storage conflict" in log
    assert disassembled == []


def test_delete_never_removes_a_function(tmp_path, capsys):
    program = program_with_functions()
    fn.delete_functions(program, str(tmp_path))
    assert len(program.getFunctionManager().functions) == 2
    assert "never deleted" in capsys.readouterr().out


def test_the_overlap_check_uses_the_whole_body():
    program = program_with_types()
    program.getFunctionManager().add("a", 0x401000, size = 0x10)
    assert [f.getName() for f in program.getFunctionManager().getFunctionsOverlapping(
        AddressSet(Address(0x40100f), Address(0x401020)))] == ["a"]
