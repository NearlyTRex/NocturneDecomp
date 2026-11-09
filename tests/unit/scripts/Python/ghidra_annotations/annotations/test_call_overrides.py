# Imports
import json

# Local imports
from ghidra_fake import FunctionDefinitionDataType, IntegerDataType, StructureDataType
from ghidra_program import Address, Instruction, LocalVariable, Program
from ghidra_annotations.annotations import call_overrides as co
from ghidra_annotations.util import load_json_files

INT = IntegerDataType("int", 4)
POINT = StructureDataType("SPoint", [INT, INT])


def override(convention = "__stdcall", varargs = False):
    definition = FunctionDefinitionDataType("ov", INT, [(INT, "count"), (POINT, "where")])
    definition.convention = convention
    definition.varargs = varargs
    return definition


def program_with_overrides():
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x100))
    program.getDataTypeManager().add(INT, POINT)
    function = program.getFunctionManager().add("caller", 0x401000, size = 0x40)
    program.getListing().add_instruction(0x401010, Instruction("CALL", "EAX"))
    function.local_variables = [LocalVariable("ov_call", override(), 0x10),
                                LocalVariable("not_at_code", override(), 0x30),
                                LocalVariable("plain", INT, 0x10)]
    external = program.getFunctionManager().add("imported", 0x402000)
    external.external = True
    external.local_variables = [LocalVariable("ignored", override(), 0)]
    return program, function


def test_overrides_at_calls_are_exported_with_a_readable_signature(tmp_path, capsys):
    program, _ = program_with_overrides()
    co.export_call_overrides(program, str(tmp_path))
    assert load_json_files(str(tmp_path), "call_overrides") == [{
        "func_addr": "00401000", "call_addr": "00401010", "var_name": "ov_call", "return_type": "int",
        "calling_convention": "__stdcall", "params": [{"name": "count", "type": "int"},
                                                      {"name": "where", "type": "SPoint"}],
        "signature": "int __stdcall override(int count, SPoint where)", "importable": True}]
    assert "override at 00401030 is not at an instruction" in capsys.readouterr().out


def test_a_signature_shows_varargs_and_void(tmp_path):
    assert co.build_signature_string({"varargs": True, "params": [{"type": "char*", "name": "fmt"}]}) == \
        "void override(char* fmt, ...)"
    assert co.build_signature_string({"varargs": True}) == "void override(...)"
    assert co.build_signature_string({}) == "void override(void)"
    assert co.serialize_function_definition(Program(), override("unknown", True)) == {
        "return_type": "int", "params": [{"name": "count", "type": "int"}, {"name": "where", "type": "SPoint"}],
        "varargs": True}


def write(path, entries):
    (path / "call_overrides").mkdir()
    (path / "call_overrides" / "call_overrides_bucket_00.json").write_text(json.dumps(entries), encoding = "utf-8")


def test_import_writes_complete_overrides_and_leaves_out_ones_it_cannot_build(tmp_path, capsys):
    good = {"func_addr": "00401000", "call_addr": "00401010", "return_type": "int", "calling_convention": "__stdcall",
            "params": [{"name": "count", "type": "int"}, {"type": "SPoint"}], "varargs": True, "importable": True}
    write(tmp_path, [good,
        dict(good, call_addr = "00401014", params = [{"name": "x", "type": "SMissing"}]),
        dict(good, call_addr = "00401018", calling_convention = "__bogus"),
        dict(good, call_addr = "0040101c", calling_convention = None),
        dict(good, func_addr = "00401080"),
        dict(good, call_addr = None),
        dict(good, call_addr = "00401020", importable = False)])
    program, function = program_with_overrides()
    co.import_call_overrides(program, str(tmp_path))
    assert sorted(str(a) for a in function.overrides) == ["00401010", "0040101c"]
    written = function.overrides[Address(0x401010)]
    assert (written.getReturnType(), written.getCallingConventionName(), written.hasVarArgs()) == (
        INT, "__stdcall", True)
    assert [(p.getName(), p.getDataType()) for p in written.getArguments()] == [("count", INT), ("param_1", POINT)]
    assert function.overrides[Address(0x40101c)].getCallingConventionName() == "unknown"
    log = capsys.readouterr().out
    assert "00401014 names a type the program lacks" in log
    assert "00401018 names a calling convention the program lacks: __bogus" in log


def test_delete_removes_the_importable_override_variables(tmp_path):
    program, function = program_with_overrides()
    co.export_call_overrides(program, str(tmp_path))
    co.delete_call_overrides(program, str(tmp_path))
    assert [v.getName() for v in function.local_variables] == ["not_at_code", "plain"]
