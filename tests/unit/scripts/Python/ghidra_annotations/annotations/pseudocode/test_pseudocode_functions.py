# Standard library imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import functions as fn


# --- a tiny program: addresses, instructions, references, functions ------------------

class Addr:
    def __init__(self, value):
        self.value = value

    def __str__(self):
        return f"{self.value:08x}"

    def __eq__(self, other):
        return isinstance(other, Addr) and other.value == self.value

    def __hash__(self):
        return hash(self.value)


class Body:
    def __init__(self, start, end):
        self.start, self.end = start, end

    def contains(self, addr):
        return self.start <= addr.value < self.end

    def getAddresses(self, forward):
        return [Addr(v) for v in range(self.start, self.end)]


class Instr:
    def __init__(self, listing, value, text):
        self.listing, self.value = listing, value
        mnemonic, _, operands = text.partition(" ")
        self.mnemonic = mnemonic
        self.operands = [o.strip() for o in operands.split(",")] if operands else []

    def getAddress(self):
        return Addr(self.value)

    def getMnemonicString(self):
        return self.mnemonic

    def getDefaultOperandRepresentation(self, i):
        return self.operands[i] if i < len(self.operands) else None

    def getNext(self):
        return self.listing.instrs.get(self.value + 1)

    def getPrevious(self):
        return self.listing.instrs.get(self.value - 1)


class RefType:
    def __init__(self, kind):
        self.kind = kind

    def isCall(self):
        return self.kind == "CALL"

    def isJump(self):
        return self.kind == "JUMP"

    def __str__(self):
        return self.kind


class Ref:
    def __init__(self, src, dst, kind = "CALL"):
        self.src, self.dst, self.kind = Addr(src), Addr(dst), RefType(kind)

    def getFromAddress(self):
        return self.src

    def getToAddress(self):
        return self.dst

    def getReferenceType(self):
        return self.kind


class Func:
    def __init__(self, name, start, end, params = (), conv = "__cdecl", varargs = False):
        self.name, self.body, self.params = name, Body(start, end), list(params)
        self.conv, self.varargs, self.start = conv, varargs, start

    def getName(self):
        return self.name

    def getEntryPoint(self):
        return Addr(self.start)

    def getBody(self):
        return self.body

    def getParameters(self):
        return self.params

    def getCallingConventionName(self):
        return self.conv

    def hasVarArgs(self):
        return self.varargs


class Param:
    def __init__(self, size, register = False):
        self.size, self.register = size, register

    def isRegisterVariable(self):
        return self.register

    def getDataType(self):
        return self

    def getLength(self):
        return self.size


class Symbol:
    def __init__(self, name, external = False):
        self.name, self.external = name, external

    def getName(self):
        return self.name

    def isExternal(self):
        return self.external


class Program:
    """Listing, references, functions and symbols, all in one."""

    def __init__(self):
        self.instrs, self.funcs, self.refs, self.data, self.symbols = {}, [], [], {}, {}
        self.program = self

    def asm(self, start, *lines):
        for i, text in enumerate(lines):
            self.instrs[start + i] = Instr(self, start + i, text)
        return start + len(lines)

    def func(self, name, start, end, **kw):
        f = Func(name, start, end, **kw)
        self.funcs.append(f)
        return f

    # program
    def getListing(self):
        return self

    def getReferenceManager(self):
        return self

    def getFunctionManager(self):
        return self

    def getSymbolTable(self):
        return self

    def getProgram(self):
        return self

    # listing
    def getInstructionAt(self, addr):
        return self.instrs.get(addr.value)

    def getInstructions(self, body, forward):
        return [self.instrs[v] for v in sorted(self.instrs) if body.contains(Addr(v))]

    def getDefinedDataAt(self, addr):
        return self.data.get(addr.value)

    # references
    def getReferencesTo(self, addr):
        return [r for r in self.refs if r.dst == addr]

    def getReferencesFrom(self, addr):
        return [r for r in self.refs if r.src == addr]

    # functions
    def getFunctionContaining(self, addr):
        return next((f for f in self.funcs if f.body.contains(addr)), None)

    def getFunctionAt(self, addr):
        return next((f for f in self.funcs if f.start == addr.value), None)

    # symbols
    def getPrimarySymbol(self, addr):
        return self.symbols.get(addr.value)


class Data:
    def __init__(self, type_name, value = None, string = False, raises = False, typed = True):
        self.type_name, self.value, self.string, self.raises, self.typed = type_name, value, string, raises, typed

    def getDataType(self):
        return self if self.typed else None

    def getName(self):
        return self.type_name

    def hasStringValue(self):
        if self.raises:
            raise RuntimeError("no value")
        return self.string

    def getValue(self):
        return self.value


@pytest.fixture(name = "prog")
def fixture_prog(monkeypatch):
    monkeypatch.setattr(fn, "resolve_data_type_name", lambda program, dt: dt.getName())
    return Program()


# --- cross-references, globals and calls --------------------------------------------

def test_xrefs_name_each_calling_function_once(prog):
    target = prog.func("target", 0x100, 0x110)
    prog.func("zeta", 0x200, 0x210)
    prog.func("alpha", 0x300, 0x310)
    prog.refs += [Ref(0x201, 0x100), Ref(0x205, 0x100, "JUMP"), Ref(0x301, 0x100),
                  Ref(0x101, 0x100),        # recursion is not a caller
                  Ref(0x999, 0x100)]        # outside any function
    assert fn.get_function_xrefs(prog, target) == [
        {"name": "alpha", "addr": "00000300", "from_addr": "00000301", "type": "CALL"},
        {"name": "zeta", "addr": "00000200", "from_addr": "00000201", "type": "CALL"}]


def test_globals_are_the_data_and_labels_a_function_reads(prog):
    f = prog.func("f", 0x100, 0x110)
    prog.func("callee", 0x500, 0x510)
    prog.asm(0x100, "MOV EAX,1", "MOV EBX,2")
    prog.data.update({
        0x900: Data("int", value = 7), 0x904: Data("char[4]", string = True),
        0x908: Data("undefined4", value = 1), 0x90c: Data("float"), 0x910: Data("int", raises = True),
        0x914: Data("x", typed = False), 0x918: Data("short", value = 3)})
    prog.symbols.update({0x900: Symbol("g_Count"), 0x904: Symbol("s_name"), 0x908: Symbol("g_Raw"),
                         0x90c: Symbol("g_F"), 0x910: Symbol("g_Odd"), 0x914: Symbol("g_Untyped"),
                         0x980: Symbol("g_Label"), 0x984: Symbol("LAB_00000984"), 0x988: Symbol("FUN_x"),
                         0x98c: Symbol("LOOP_1"), 0x990: Symbol("SWITCH_1"), 0x994: Symbol("ext", external = True)})
    prog.refs += [Ref(0x100, t, "DATA") for t in (0x918, 0x900, 0x900, 0x904, 0x908, 0x90c, 0x910, 0x914)]
    prog.refs += [Ref(0x101, t, "DATA") for t in (0x105, 0x500, 0x980, 0x984, 0x988, 0x98c, 0x990, 0x994, 0x998)]
    assert fn.get_function_globals(prog, f) == [
        {"type": "int", "name": "g_Count", "addr": "00000900", "value": "7"},
        {"type": "char[4]", "name": "s_name", "addr": "00000904", "value": None},
        {"type": "undefined4", "name": "g_Raw", "addr": "00000908", "value": None},
        {"type": "float", "name": "g_F", "addr": "0000090c", "value": None},
        {"type": "int", "name": "g_Odd", "addr": "00000910", "value": None},
        # data without a symbol is named by its address
        {"type": "short", "name": "DAT_00000918", "addr": "00000918", "value": "3"},
        {"type": "undefined4", "name": "g_Label", "addr": "00000980", "value": None}]


def test_calls_name_each_callee_once_including_imports(prog):
    f = prog.func("f", 0x100, 0x110)
    prog.func("Beta", 0x500, 0x510, varargs = True)
    prog.asm(0x100, "CALL 0x500", "CALL 0x700", "CALL 0x500")
    prog.symbols.update({0x700: Symbol("alpha", external = True), 0x800: Symbol("local")})
    prog.refs += [Ref(0x100, 0x500), Ref(0x101, 0x700), Ref(0x102, 0x500), Ref(0x102, 0x700),
                  Ref(0x101, 0x900, "DATA"), Ref(0x100, 0x100),      # data ref, recursion
                  Ref(0x101, 0x800), Ref(0x101, 0x804)]              # non-external label, nothing
    assert fn.get_function_calls(prog, f) == [
        {"name": "alpha", "addr": "00000700", "is_variadic": False},
        {"name": "Beta", "addr": "00000500", "is_variadic": True}]


# --- names ---------------------------------------------------------------------------

@pytest.mark.parametrize("name, header", [
    ("engine_2d.c_plotPixel_FUN_00401140", "engine/2d.h"),
    ("core_fire.cpp_CSpark_render_FUN_004c0420", "core/fire.h"),
    ("engine_drender_cpp_CDemonRenderer_x_FUN_0048c450", "engine/drender.h"),
    ("engine_3d_c_setRenderAlpha_FUN_00406d80", "engine/3d.h"),
    ("engine_special.cpp_FUN_005b5710", "engine/special.h"),
    ("engine_2d.c_FUN_00401000", "engine/2d.h"),
    ("a.b_FUN_00401000", None),
    ("plain_FUN_00401000", None),
    ("FUN_00401000", None),
    ("entry", None),
])
def test_a_function_name_names_its_unit_header(name, header):
    assert fn.extract_virtual_filename(name) == header


@pytest.mark.parametrize("name, cpp", [
    ("core_fire.cpp_CSpark_render_FUN_004c0420", "CSpark::render"),
    ("core_fire.cpp_CSpark_render_alpha_FUN_004c0420", "CSpark::render_alpha"),
    ("crt_iostream.cpp_ostream_flush_FUN_005b0000", "ostream::flush"),
    ("engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640", "CDemonRenderer::matrixPop"),
    ("core_actor.cpp_isOfClass_FUN_0040c6d0", "isOfClass"),
    # C has no classes
    ("crt_memory.c_operator_new_FUN_005b8be2", "operator_new"),
    ("crt_stdlib.c__qsort_FUN_005b78b8", "_qsort"),
    ("engine_3d_c_set_alpha_FUN_00406d80", "set_alpha"),
    ("crt_x.cpp__y_FUN_00401000", "_y"),
    ("core_x.cpp__FUN_00401000", "FUN_00401000"),
    ("engine_special.cpp_FUN_005b5710", "FUN_005b5710"),
    ("plain_FUN_00401000", "plain_FUN_00401000"),
    ("FUN_00401000", "FUN_00401000"),
    ("entry", "entry"),
])
def test_a_function_name_becomes_its_cpp_name(name, cpp):
    assert fn.extract_cpp_function_name(name) == cpp


@pytest.mark.parametrize("params, name, attribute", [
    ("char *format,...", "display", " __attribute__((format(printf, 1, 2)))"),
    ("int level,const char *fmt,...", "x", " __attribute__((format(printf, 2, 3)))"),
    ("FILE *f,char *spec,...", "_fscanf", " __attribute__((format(scanf, 2, 3)))"),
    ("char *s,...", "logLine", " __attribute__((format(printf, 1, 2)))"),
    ("char*s,...", "showMessage", " __attribute__((format(printf, 1, 2)))"),
    ("char *s,...", "doThing", ""),             # neither the name nor the param says format
    ("char **fmt,...", "printList", ""),        # a char ** is no format string
    ("int n,...", "print", ""),
    ("...", "printf", ""),
    ("void (*cb)(char *fmt,...)", "print", ""),  # the ... is the callback's
    ("char *fmt", "print", ""),
])
def test_a_printf_like_variadic_gets_a_format_attribute(params, name, attribute):
    assert fn._detect_format_attribute(params, name) == attribute


@pytest.mark.parametrize("sig, prototype", [
    ("void __cdecl f(char *format,...)", "void __cdecl Log::f(char *format,...) __attribute__((format(printf, 1, 2)));"),
    ("int g(int a)", "int Log::f(int a);"),
    ("", "// Unable to generate prototype for orig"),
    ("void f", "// Invalid signature for orig"),
    ("f(int a)", "// Invalid signature format for orig"),
    ("void f(int a", "// Invalid signature format for orig"),
])
def test_a_signature_becomes_a_prototype(sig, prototype):
    assert fn.generate_function_prototype(sig, "orig", "Log::f") == prototype


# --- call-site parameter estimates ---------------------------------------------------

def caller(prog, *lines, start = 0x100, conv = "__cdecl"):
    """A caller holding `lines`; returns it and the address of its CALL 0x500."""
    end = prog.asm(start, *lines)
    f = prog.func("caller", start, end, conv = conv)
    call = lines.index("CALL 0x500") + start
    return f, Addr(call)


@pytest.mark.parametrize("lines, cleaned", [
    (["PUSH 1", "PUSH 2", "CALL 0x500", "ADD ESP,0x8", "MOV EAX,1"], 8),
    (["PUSH 1", "CALL 0x500", "MOV EBX,EAX", "ADD ESP,4", "NOP"], 4),
    (["PUSH 1", "CALL 0x500", "ADD ESP,0x8"], 8),                 # nothing after it
    (["PUSH 1", "CALL 0x500", "ADD ESP,0x8", "RET"], None),        # the caller's own frame
    (["PUSH 1", "CALL 0x500", "ADD ESP,0x8", "POP EBX"], None),
    (["PUSH 1", "CALL 0x500", "ADD ESP,0x200", "NOP"], None),      # past any argument list
    (["PUSH 1", "CALL 0x500", "ADD ESP,EAX", "NOP"], None),
    (["PUSH 1", "CALL 0x500", "ADD EAX,8", "ADD ESP,8", "NOP"], 8),
    (["CALL 0x500", "PUSH 1", "ADD ESP,4"], None),
    (["CALL 0x500", "JZ 0x900", "ADD ESP,4"], None),
    (["CALL 0x500"] + ["NOP"] * 15 + ["ADD ESP,4"], None),
])
def test_the_forward_scan_reads_the_callers_stack_cleanup(prog, lines, cleaned):
    f, call = caller(prog, *lines)
    assert fn._scan_forward_for_add_esp(prog, call, f) == cleaned


def test_the_forward_scan_stays_in_the_caller(prog):
    f, call = caller(prog, "PUSH 1", "CALL 0x500")
    prog.asm(0x102, "ADD ESP,4")
    assert fn._scan_forward_for_add_esp(prog, call, f) is None
    assert fn._scan_forward_for_add_esp(prog, Addr(0x50), f) is None


def test_the_callers_saved_registers_come_from_entry_pushes_and_any_pop(prog):
    f, _ = caller(prog, "PUSH EBX", "PUSH ESI", "PUSH EAX", "CALL 0x500", "POP EDI", "POP ECX", "POP", "RET")
    prog.instrs.pop(0x107)                               # an address with no instruction
    assert fn._get_caller_prologue_save_regs(f, prog) == {"EBX", "ESI", "EDI"}


@pytest.mark.parametrize("lines", [["PUSH", "CALL 0x500"], ["MOV EAX,1", "CALL 0x500"]])
def test_an_entry_without_a_register_push_saves_nothing(prog, lines):
    f, _ = caller(prog, *lines)
    assert fn._get_caller_prologue_save_regs(f, prog) == set()


def test_declared_stack_bytes_are_dword_aligned_and_skip_registers():
    assert fn._compute_declared_stack_bytes([Param(1), Param(4), Param(8), Param(6), Param(4, register = True)]) == 24


@pytest.mark.parametrize("conv, method", [("__fpureg", "fpu_register"), ("__stk_probe", "no_params")])
def test_register_only_conventions_have_no_stack_arguments(prog, conv, method):
    result = fn.analyze_call_site(prog, Addr(0), None, calling_convention = conv)
    assert result["estimated_params"] == 0 and result["method"] == method


def test_a_cdecl_call_counts_its_cleanup_and_its_register_loads(prog):
    f, call = caller(prog, "MOV EDI,1", "MOV EAX,2", "PUSH 3", "CALL 0x500", "ADD ESP,4", "NOP")
    result = fn.analyze_call_site(prog, call, f, True, "__cdecl")
    # EDI is not EDX
    assert (result["method"], result["reg_params"], result["estimated_params"]) == ("add_esp", ["EAX"], 2)
    assert fn.analyze_call_site(prog, call, f, False, "__cdecl")["estimated_params"] == 1


@pytest.mark.parametrize("lines, conv, regs, stack", [
    # callee-cleaned: PUSHes before the CALL are its arguments
    (["SUB ESP,8", "PUSH 1", "LEA EDX,[ESP]", "PUSH EDX", "CALL 0x500"], "__stdcall", [], 2),
    # the run of saved-register pushes the scan ends on is the caller's prologue; the
    # entry push ends the scan, the one after it is subtracted, those by the CALL count
    (["PUSH EBX", "PUSH ESI", "MOV EBX,1", "PUSH EBX", "PUSH ESI", "CALL 0x500", "POP ESI", "POP EBX", "RET"],
     "__stdcall", [], 2),
    (["PUSH EBX", "PUSH ESI", "PUSH 7", "CALL 0x500", "POP ESI", "POP EBX", "RET"], "__stdcall", [], 1),
    (["PUSH EBX", "MOV EAX,1", "PUSH 2", "PUSH EBX", "PUSH EBX", "CALL 0x500", "POP EBX", "RET"], "__stdcall", [], 3),
    (["AND ESP,0xfffffff8", "PUSH 1", "CALL 0x500"], "__stdcall", [], 1),
    (["MOV EBP,ESP", "PUSH 1", "CALL 0x500"], "__stdcall", [], 1),
    (["MOV EBP,EAX", "PUSH 1", "CALL 0x500"], "__stdcall", [], 1),
    (["SUB EAX,4", "AND EAX,1", "PUSH 1", "CALL 0x500"], "__stdcall", [], 1),
    (["CALL 0x400", "PUSH 1", "CALL 0x500"], "__stdcall", [], 1),
    (["PUSH 9"] + ["NOP"] * 30 + ["PUSH 1", "CALL 0x500"], "__stdcall", [], 1),   # 30 back at most
    (["NOP", "PUSH 2", "JZ 0x900", "PUSH 1", "CALL 0x500"], "__stdcall", [], 2),
    # Watcom: the registers loaded before the CALL, exactly (EBP is not EBX, ESP not ESI)
    (["MOV EBP,1", "MOV EBX,2", "XOR EAX,EAX", "MOVZX EDX,AL", "MOV ECX,[EAX]", "CALL 0x500"],
     "__watcallRegister", ["EAX", "EBX", "ECX", "EDX"], 0),
    (["MOV ESP,EBP", "MOV EDX,1", "MOV ESI,2", "PUSH 3", "CALL 0x500", "ADD ESP,4", "RET"],
     "__esi", ["ESI"], 1),
])
def test_without_a_cleanup_the_pushes_before_the_call_are_counted(prog, lines, conv, regs, stack):
    f, call = caller(prog, *lines, conv = conv)
    uses_regs = conv not in ("__stdcall",)
    result = fn.analyze_call_site(prog, call, f, uses_regs, conv)
    assert (result["method"], result["reg_params"], result["stack_params"]) == ("push_count", regs, stack)
    assert result["estimated_params"] == len(regs) + stack and result["stack_bytes"] == stack * 4


def test_a_conditional_jump_that_is_itself_a_branch_target_ends_the_scan(prog):
    f, call = caller(prog, "NOP", "PUSH 2", "JZ 0x900", "PUSH 1", "CALL 0x500")
    prog.refs.append(Ref(0x181, 0x102, "DATA"))
    prog.refs.append(Ref(0x180, 0x102, "JUMP"))
    assert fn.analyze_call_site(prog, call, f, False, "__stdcall")["stack_params"] == 1


def test_the_backward_scan_stays_in_the_caller(prog):
    prog.asm(0x0ff, "PUSH 9")
    f, call = caller(prog, "PUSH 1", "CALL 0x500", start = 0x100, conv = "__stdcall")
    prog.funcs[-1].start = 0x200                       # entry elsewhere, so only the body stops it
    assert fn.analyze_call_site(prog, call, f, False, "__stdcall")["stack_params"] == 1
    assert fn.analyze_call_site(prog, Addr(0x50), f, False, "__stdcall") is None


def test_the_register_scan_stops_at_a_call_and_outside_the_caller(prog):
    prog.asm(0x0ff, "MOV ECX,1")
    f, call = caller(prog, "MOV EDX,1", "CALL 0x400", "MOV EBX,2", "MOV EAX,3", "CALL 0x500", start = 0x100)
    assert fn._scan_backward_for_reg_params(prog, call, f, {"EAX", "EBX", "EDX"}) == {"EAX", "EBX"}
    # the ECX load just before the caller is not its
    assert fn._scan_backward_for_reg_params(prog, Addr(0x101), f, {"ECX", "EDX"}) == {"EDX"}
    assert fn._scan_backward_for_reg_params(prog, Addr(0x50), f, {"EAX"}) == set()


@pytest.mark.parametrize("text, regs, loaded", [
    ("MOV EAX,1", {"eax"}, "EAX"), ("LEA ESI,[EBX]", {"ESI"}, "ESI"), ("MOV ESP,EBP", {"ESI"}, None),
    ("MOV EDI,1", {"EDX"}, None), ("PUSH EAX", {"EAX"}, None), ("XOR", {"EAX"}, None)])
def test_a_load_names_its_register_only_when_it_is_that_register(prog, text, regs, loaded):
    prog.asm(0, text)
    instr = prog.instrs[0]
    assert fn._loaded_param_register(instr, instr.mnemonic, regs) == loaded


# --- vtables --------------------------------------------------------------------------

def test_vtable_buckets_are_read_in_order_and_bad_ones_skipped(tmp_path):
    (tmp_path / "vtables_bucket_01.json").write_text(json.dumps([{"addr": "b"}]))
    (tmp_path / "vtables_bucket_00.json").write_text(json.dumps([{"addr": "a"}]))
    (tmp_path / "vtables_bucket_02.json").write_text("{not json")
    (tmp_path / "vtables_bucket_03.json").write_text(json.dumps({"addr": "c"}))
    assert fn.load_vtable_bucket_files(str(tmp_path)) == [{"addr": "a"}, {"addr": "b"}]


def test_vtable_data_maps_each_function_to_its_slots(tmp_path):
    tables = [
        {"addr": "0065AAAA", "functions": [
            {"func_addr": "00408F10", "offset": 0, "func_name": "core_actor.cpp_CDemonActor_setup_FUN_00408f10"},
            {"func_addr": "", "offset": 4},
            {"func_addr": "00409000", "offset": 8, "func_name": "x"}]},
        {"addr": "0065BBBB", "functions": [{"func_addr": "00408f10", "offset": 4, "func_name": "nounderscore"}]},
        {"addr": "0065CCCC", "functions": [{"func_addr": "1", "func_name": "core_actor.cpp_lower_C"}]},
        {"addr": "0065DDDD"},
        {"functions": []}]
    (tmp_path / "vtables_bucket_00.json").write_text(json.dumps(tables))
    data = fn.load_vtable_data(str(tmp_path))
    assert data["vtable_addrs"] == {"0065aaaa", "0065bbbb", "0065cccc", "0065dddd"}
    assert data["func_to_vtables"]["00408f10"] == [
        {"vtable_addr": "0065aaaa", "offset": 0, "class_name": "CDemonActor",
         "func_name": "core_actor.cpp_CDemonActor_setup_FUN_00408f10"},
        {"vtable_addr": "0065bbbb", "offset": 4, "class_name": "Unknown", "func_name": "nounderscore"}]
    assert data["func_to_vtables"]["1"][0]["class_name"] == "Unknown"
    assert data["vtable_info"]["0065aaaa"] == {0: {"func_addr": "00408f10", "func_name": "core_actor.cpp_CDemonActor_setup_FUN_00408f10"},
                                               8: {"func_addr": "00409000", "func_name": "x"}}
    assert data["vtable_info"]["0065dddd"] == {}


VTABLES = {"func_to_vtables": {"00000500": [{"class_name": "CA", "vtable_addr": "v1", "offset": 8}]}}


def callee_with_sites(prog, conv, params, sites, extra = None):
    """A callee at 0x500 and one caller per entry of `sites` (its instruction lines)."""
    callee = prog.func("callee", 0x500, 0x510, params = params, conv = conv)
    for i, lines in enumerate(sites):
        start = 0x1000 * (i + 1)
        end = prog.asm(start, *lines)
        prog.func(f"caller{i}", start, end, conv = "__cdecl")
        call = next(v for v in range(start, end) if prog.instrs[v].mnemonic == "CALL")
        prog.refs.append(Ref(call, 0x500))
    prog.refs += extra or []
    return callee


@pytest.mark.parametrize("conv", ["__fpureg", "__mathinternal"])
@pytest.mark.parametrize("vtables, info", [(None, None), ({"func_to_vtables": {}}, None), (VTABLES, True)])
def test_a_register_only_callee_is_skipped(prog, conv, vtables, info):
    callee = callee_with_sites(prog, conv, [Param(4)], [])
    result = fn.estimate_call_site_params(prog, callee, vtables)
    assert (result["confidence"], result["estimated_params"]) == ("skipped", 1)
    assert result.get("vtable_info", {}).get("in_vtable") == info


TWO_PUSH = ["PUSH 1", "PUSH 2", "CALL 0x500", "ADD ESP,8", "NOP"]
ONE_PUSH = ["PUSH 1", "CALL 0x500", "ADD ESP,4", "NOP"]


@pytest.mark.parametrize("conv, params, sites, estimated, confidence, matches", [
    ("__cdecl", [Param(4), Param(4)], [TWO_PUSH] * 3, 2, "high", True),
    ("__cdecl", [Param(4), Param(4)], [TWO_PUSH, TWO_PUSH, ONE_PUSH], 2, "medium", True),
    ("__cdecl", [Param(4), Param(4)], [TWO_PUSH, TWO_PUSH], 2, "high", True),
    ("__cdecl", [Param(8)], [TWO_PUSH], 2, "medium", True),       # a double is two slots
    ("__cdecl", [], [TWO_PUSH] * 3, 2, "high", False),
    ("__cdecl", [], [TWO_PUSH] * 2, 2, "medium", False),
    ("__cdecl", [], [TWO_PUSH, ONE_PUSH], 2, "low", False),
    ("__cdecl", [Param(4)], [], 1, "unknown", True),
    ("__watcallRegister", [Param(4, True), Param(4)], [["NOP", "MOV EAX,1"] + ONE_PUSH], 2, "medium", True),
    ("__weird", [Param(4, True), Param(4)], [["NOP", "MOV EAX,1"] + ONE_PUSH], 2, "medium", True),
])
def test_call_sites_estimate_the_callees_parameter_count(prog, conv, params, sites, estimated, confidence, matches):
    callee = callee_with_sites(prog, conv, params, sites)
    result = fn.estimate_call_site_params(prog, callee)
    assert (result["estimated_params"], result["confidence"], result["matches_declared"]) == (estimated, confidence, matches)
    assert result["call_site_count"] == len(sites) and "vtable_info" not in result


def test_only_direct_calls_from_other_functions_count_and_vtables_are_noted(prog):
    callee = callee_with_sites(prog, "__cdecl", [Param(4)], [ONE_PUSH],
                               extra = [Ref(0x501, 0x500), Ref(0x9000, 0x500), Ref(0x1000, 0x500, "DATA")])
    # a call site with no instruction is dropped
    prog.funcs.append(Func("ghost", 0x7000, 0x7010))
    prog.refs.append(Ref(0x7000, 0x500))
    result = fn.estimate_call_site_params(prog, callee, VTABLES)
    assert result["call_site_count"] == 1 and result["call_sites"][0]["caller"] == "caller0"
    assert result["vtable_info"]["entries"] == [{"class_name": "CA", "vtable_addr": "v1", "offset": 8}]
    assert "vtable_info" not in fn.estimate_call_site_params(prog, callee, {"func_to_vtables": {}})


def test_at_most_fifty_call_sites_are_read(prog):
    callee = callee_with_sites(prog, "__cdecl", [Param(4)], [ONE_PUSH] * 52)
    result = fn.estimate_call_site_params(prog, callee)
    assert result["call_site_count"] == 50 and len(result["call_sites"]) == 10


# --- source file names ---------------------------------------------------------------

@pytest.mark.parametrize("name, code, path", [
    ("entry", "", "entry/entry.c"),
    ("crt_wsock32.c_inet_addr", "", "crt/wsock32.c/inet_addr.c"),
    ("core_box.cpp_DAT_00423310", "", "core/box.cpp/DAT_00423310.cpp"),
    ("core_box.cpp", "", "core/box.cpp"),
    ("engine_2d.c_plotPixel_FUN_00401140", "", "engine/2d.c/plotPixel_FUN_00401140.c"),
    ("core_fire.cpp_CSpark_render_FUN_004c0420", "", "core/fire.cpp/CSpark_render_FUN_004c0420.cpp"),
    ("engine_2d.c_FUN_00401000", "", "engine/2d.c/FUN_00401000.c"),
    ("core_x.cpp_f_thunk_FUN_00401000", "", "core/x.cpp/f_thunk_FUN_00401000.cpp"),
    ("core_foo_FUN_00401000", "", "core/foo_FUN_00401000.c"),
    ("foo_FUN_00401000", "", "foo_FUN_00401000.c"),
    ("FUN_00401000", "", "FUN_00401000.c"),
    # no unit in the name: the __FILE__ literal in the body places it
    ("helper", 'x("..\\\\..\\\\shape\\\\edittool.cpp", 12);', "shape/edittool.cpp/helper.cpp"),
    ("helper", 'x("../engine/2d.c");', "engine/2d.c/helper.c"),
    ("helper", 'x("..\\\\shape\\\\cramlog.txt"); y("..\\\\core\\\\a.c");', "core/a.c/helper.c"),
    ("helper", 'x("..\\\\shape\\\\cramlog.txt");', "helper.c"),
    # a single backslash is an escape, not a path
    ("helper", 'x("..\\t\\t(DIR)");', "helper.c"),
    ("helper", "", "helper.c"),
])
def test_a_function_is_filed_under_its_source_unit(name, code, path):
    assert fn.generate_source_filename(name, code) == path
