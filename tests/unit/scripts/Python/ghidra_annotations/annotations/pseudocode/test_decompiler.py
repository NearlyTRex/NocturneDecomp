# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import decompiler as dc
from ghidra_fake import BuiltInDataType, PointerDataType


@pytest.mark.parametrize("code, signature", [
    (None, None), ("", None), ("int x;", None),
    ("/* WARNING: x */\n\nint __cdecl f(int a,\n    char *b)\n{\n  return a;\n}\n", "int __cdecl f(int a, char *b)"),
    ("void g(void){ }", "void g(void)"),
    ("int unused;\n\n// note\n/* one\n   two */\nint h(void)\n{\n}", "int h(void)"),
    ("/* only a comment */\n{\n}", None),
    ("int k(void)\n\n/* one line */\n{\n}", "int k(void)"),
    ("/* one\n   middle\n   three */\nint m(void)\n{\n}", "int m(void)"),
    ("int n(void)\n/* a\n   b\n   c */\n{\n}", "int n(void)"),
])
def test_the_signature_is_the_code_before_the_body(code, signature):
    assert dc.extract_signature_from_decompiled_code(code) == signature


class Result:
    def __init__(self, code = None, error = None):
        self.code, self.error = code, error

    def decompileCompleted(self):
        return self.code is not None

    def getErrorMessage(self):
        return self.error

    def getDecompiledFunction(self):
        return self

    def getC(self):
        return self.code


class Interface:
    def __init__(self, result):
        self.result, self.calls = result, []

    def decompileFunction(self, func, timeout, monitor):
        self.calls.append((func, timeout, monitor is not None))
        return self.result


def test_string_labels_become_their_literals():
    code = 'puts(s_Hello_00401000); puts(PTR_s_Hello_00500000); puts(s_gone_00409999);'
    interface = Interface(Result(code))
    out = dc.decompile_function_raw(interface, "f", None, {"00401000": "Hello\\n"}, timeout = 5)
    assert out == 'puts("Hello\\n"); puts(PTR_s_Hello_00500000); puts(s_gone_00409999);'
    assert interface.calls == [("f", 5, True)]


@pytest.mark.parametrize("error, reason", [("bad\nthing ", "bad thing"), (None, "(none given)"), ("", "(none given)")])
def test_a_failed_decompile_keeps_its_reason(error, reason):
    assert dc.decompile_function_raw(Interface(Result(None, error)), "f", None, {}) == (
        f"// Decompilation failed or timed out\n// Reason: {reason}\n")


def test_the_constants_map_holds_scalar_constants_only():
    constants = [
        {"name": "PI", "type": "float", "initializer": "3.14"},
        {"name": "MAX", "type": "uint", "initializer": "0x10"},
        {"name": "NEG", "type": "int", "initializer": "-5"},
        {"name": "W", "type": "word", "initializer": "-0x1"},
        {"name": "NAN_INT", "type": "int", "initializer": "abc"},
        {"name": "STRUCT", "type": "SFoo", "initializer": "5"},
        {"name": "ARR", "type": "int", "initializer": "{1, 2}"},
        {"name": "MULTI", "type": "int", "initializer": "1\n2"},
        {"name": "BLOB", "type": "undefined", "initializer": "Base64:AAAA"},
        {"name": "NONE", "type": "int"},
    ]
    assert dc.build_constants_map(constants) == {"PI": "3.14", "MAX": "0x10", "NEG": "-5", "W": "-0x1"}


def test_constants_are_replaced_except_where_their_address_is_taken():
    constants = {"MAX": "0x10", "MAX_LEN": "0x20"}
    code = "a = MAX_LEN + MAX; p = &MAX; MAXIMUM = 1;"
    assert dc.replace_constants_in_code(code, constants) == "a = 0x20 + 0x10; p = &MAX; MAXIMUM = 1;"
    assert dc.replace_constants_in_code("nothing here", constants) == "nothing here"
    assert dc.replace_constants_in_code(code, {}) == code
    # A different map gets its own pattern
    assert dc.replace_constants_in_code("x = MIN;", {"MIN": "1"}) == "x = 1;"


class Var:
    def __init__(self, name, offset, data_type):
        self.name, self.offset, self.data_type = name, offset, data_type

    def getName(self):
        return self.name

    def getStackOffset(self):
        return self.offset

    def getLength(self):
        return self.data_type.getLength()

    def getDataType(self):
        return self.data_type


class Frame:
    def __init__(self, variables):
        self.variables = variables

    def getFrameSize(self):
        return 0x20

    def getLocalSize(self):
        return 0x18

    def getParameterOffset(self):
        return 4

    def getParameterSize(self):
        return 8

    def getReturnAddressOffset(self):
        return 0

    def getStackVariables(self):
        return self.variables


class Func:
    def __init__(self, frame):
        self.frame = frame

    def getStackFrame(self):
        return self.frame


def test_the_stack_frame_lists_variables_by_offset():
    int_t = BuiltInDataType("int", 4)
    frame = Frame([Var("param_1", 4, PointerDataType(int_t)), Var("local_8", -8, int_t)])
    info = dc.export_stack_frame(Func(frame))
    assert info["frame_size"] == 0x20 and info["param_size"] == 8
    assert [(v["name"], v["type"], v["is_param"]) for v in info["variables"]] == [
        ("local_8", "int", False), ("param_1", "int *", True)]
    assert dc.export_stack_frame(Func(None)) is None
