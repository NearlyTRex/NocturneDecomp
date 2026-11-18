# Imports
import importlib
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import proto
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager
from ghidra_fake import BuiltInDataType, FunctionDefinitionDataType, IntegerDataType
from ghidra_program import DataTypeManager, Program

DATA = importlib.import_module("ghidra.program.model.data")


@pytest.fixture(name = "warnings", autouse = True)
def fixture_warnings(monkeypatch):
    # Each test starts with nothing pending or cached, and collects the module's warnings
    monkeypatch.setattr(proto, "_pending_proto_overrides", [])
    monkeypatch.setattr(proto, "proto_cache", JsonCacheManager(
        "proto_overrides", json_key = "proto_overrides", default_factory = list, type_check = list))
    seen = []
    monkeypatch.setattr(proto, "log_warning", seen.append)
    return seen


class CParser:
    """Ghidra's C parser: a declaration naming 'bad' fails, one naming 'var' is not a function."""

    parsed = []

    def __init__(self, dtm):
        self.dtm = dtm

    def parse(self, text):
        CParser.parsed.append(text)
        if "bad" in text:
            raise RuntimeError("ParseException")
        if "var" in text:
            return IntegerDataType.dataType
        return FunctionDefinitionDataType(text)


class HighFunction:
    """Ghidra's registry of call-site prototypes; a call at 0xdead refuses."""

    registered = []
    clears = 0

    @staticmethod
    def clearProtoOverrides():
        HighFunction.clears += 1

    @staticmethod
    def registerProtoOverride(address, signature):
        if address.getOffset() == 0xdead:
            raise RuntimeError("refused")
        HighFunction.registered.append((address.getOffset(), signature.getName()))


@pytest.fixture(name = "ghidra")
def fixture_ghidra(monkeypatch):
    monkeypatch.setattr(importlib.import_module("ghidra.app.util.cparser.C"), "CParser", CParser)
    monkeypatch.setattr(importlib.import_module("ghidra.program.model.pcode"), "HighFunction", HighFunction)
    monkeypatch.setattr(CParser, "parsed", [])
    monkeypatch.setattr(HighFunction, "registered", [])
    monkeypatch.setattr(HighFunction, "clears", 0)
    return HighFunction


def test_the_global_file_is_written_from_the_preloaded_overrides(tmp_path):
    overrides = [{"address": "0x40acc3", "signature": "void f(char *fmt)"}]
    (tmp_path / "proto_overrides.json").write_text(json.dumps(overrides))
    proto.proto_cache.preload_global(str(tmp_path), proto.PROTO_OVERRIDES_FILENAME)
    out = tmp_path / "out"
    out.mkdir()
    assert proto.generate_proto_overrides_file(str(out)) == str(out / "proto_overrides.json")
    assert json.loads((out / "proto_overrides.json").read_text()) == overrides


def test_a_failed_write_of_the_global_file_raises(tmp_path):
    with pytest.raises(OSError):
        proto.generate_proto_overrides_file(str(tmp_path / "missing"))


@pytest.mark.parametrize("text, loaded, warning", [
    ('[{"address": "0x1"}]', [{"address": "0x1"}], None), ("{", [], "Could not read"),
    ('{"address": "0x1"}', [], "is not a list"),
])
def test_the_overrides_file_loads_as_a_list(tmp_path, warnings, text, loaded, warning):
    path = tmp_path / "proto_overrides.json"
    path.write_text(text)
    assert proto.load_proto_overrides_json(str(path)) == loaded
    assert (warning in warnings[0]) if warning else warnings == []


def test_a_signature_parses_as_a_declaration(ghidra):
    assert proto.parse_signature_with_cparser(" void f(int x) ", None).getName() == "void f(int x);"
    assert proto.parse_signature_with_cparser("void g(void);", None).getName() == "void g(void);"
    # Not a function, or not parsable
    assert proto.parse_signature_with_cparser("int var", None) is None
    assert proto.parse_signature_with_cparser("bad(", None) is None
    assert CParser.parsed == ["void f(int x);", "void g(void);", "int var;", "bad(;"]


def test_a_type_resolves_from_the_builtins_then_the_program(warnings):
    dtm = DataTypeManager([BuiltInDataType("CBox", 8)])
    assert proto.resolve_type(" Int ", dtm) is IntegerDataType.dataType
    assert proto.resolve_type("unsigned", dtm) is DATA.UnsignedIntegerDataType.dataType
    assert proto.resolve_type("CBox", dtm).getName() == "CBox"
    pointer = proto.resolve_type("CBox **", dtm)
    assert pointer.getDataType().getDataType().getName() == "CBox"
    # An unknown type falls back to int, and says so
    assert proto.resolve_type("CMoon", dtm) is IntegerDataType.dataType and "'CMoon'" in warnings[0]


def test_a_signature_override_is_parsed(ghidra):
    assert proto.build_function_signature({"signature": "void f(int x)"}, None).getName() == "void f(int x);"


def test_an_explicit_override_builds_its_definition(warnings):
    dtm = DataTypeManager()
    sig = proto.build_function_signature({
        "return_type": "int", "params": [{"name": "buffer", "type": "int *"}, {}],
        "calling_convention": "__stdcall", "varargs": True}, dtm)
    assert sig.getReturnType() is IntegerDataType.dataType and sig.hasVarArgs()
    assert [(p.getName(), p.getDataType().getName()) for p in sig.getArguments()] == [
        ("buffer", "int *"), ("param_1", "int")]
    assert sig.getCallingConventionName() == "__stdcall" and warnings == []
    # The defaults: void(), __cdecl; an unknown convention keeps the default and says so
    plain = proto.build_function_signature({"params": []}, dtm)
    assert plain.getReturnType() is DATA.VoidDataType.dataType and plain.getCallingConventionName() == "__cdecl"
    odd = proto.build_function_signature({"params": [], "calling_convention": "__pascal"}, dtm)
    assert odd.getCallingConventionName() == "unknown" and "'__pascal'" in warnings[0]


def test_registering_needs_a_file_with_overrides(tmp_path):
    assert proto.register_proto_overrides(None) == 0
    assert proto.register_proto_overrides(str(tmp_path)) == 0
    (tmp_path / "proto_overrides.json").write_text("[]")
    assert proto.register_proto_overrides(str(tmp_path)) == 0


def test_registering_keeps_the_signature_and_explicit_overrides(tmp_path, warnings):
    path = tmp_path / "overrides.json"
    keep = [{"address": "0x401000", "signature": "void f(int x)"},
            {"address": "0x401010", "return_type": "int"}, {"address": "0x401020", "params": []}]
    path.write_text(json.dumps([*keep, "0x401030", {"signature": "void g(void)"},
                                {"address": "0x401040"}, {"address": "0x401050", "signature": ""}]))
    assert proto.register_proto_overrides(str(path)) == 3
    assert proto._pending_proto_overrides == keep
    assert len(warnings) == 4
    assert "'0x401030'" in warnings[0] and "without an 'address'" in warnings[1]
    assert "0x401040 has neither" in warnings[2] and "0x401050 has neither" in warnings[3]


def test_applying_registers_each_pending_override_at_its_call(ghidra, warnings, monkeypatch):
    monkeypatch.setattr(proto, "_pending_proto_overrides", [
        {"address": "0x401000", "signature": "void f(int x)"}, {"address": "401010", "params": []},
        {"address": "0xZZ", "signature": "void g(void)"}, {"address": 401020, "signature": "void g(void)"},
        {"address": "0x401030", "signature": "bad("}, {"address": "0xdead", "signature": "void h(void)"}])
    assert proto.apply_proto_overrides(Program()) == 2
    assert ghidra.clears == 1
    assert ghidra.registered == [(0x401000, "void f(int x);"), (0x401010, "override_sig")]
    assert "'0xZZ'" in warnings[0] and "401020" in warnings[1]


def test_applying_nothing_still_clears_the_registry(ghidra):
    assert proto.apply_proto_overrides(Program()) == 0 and ghidra.clears == 1
