# Imports
import sys
import threading
import types

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import decompiler
from ghidra_annotations.annotations.pseudocode import parallel as par


class Instr:
    """A listing instruction: mnemonic, operands, and the instruction after it."""

    def __init__(self, mnemonic, *operands, after = None):
        self.mnemonic = mnemonic
        self.operands = operands
        self.after = after

    def getMnemonicString(self):
        return self.mnemonic

    def getNumOperands(self):
        return len(self.operands)

    def getDefaultOperandRepresentation(self, i):
        return self.operands[i]

    def getNext(self):
        return self.after


def chain(*instrs):
    """Link the instructions in order and return the first."""
    for a, b in zip(instrs, instrs[1:]):
        a.after = b
    return instrs[0] if instrs else None


class Listing:
    def __init__(self, first):
        self.first = first

    def getInstructionAt(self, _addr):
        return self.first


class Func:
    def getEntryPoint(self):
        return "00401000"

    def getName(self):
        return "f_FUN_00401000"

    def getPrototypeString(self, _a, _b):
        return "void f(void)"

    def getBody(self):
        return "body"

    def getCallingConventionName(self):
        return "__cdecl"


def frame(*instrs):
    return par.detect_ebp_frame(Listing(chain(*instrs)), Func())


@pytest.mark.parametrize("instrs, expected", [
    ((Instr("PUSH", "EBP"), Instr("MOV", "EBP", "ESP")), True),
    # Other registers saved first
    ((Instr("PUSH", "EBX"), Instr("PUSH", "ESI"), Instr("PUSH", "EBP"), Instr("MOV", "EBP", "ESP")), True),
    ((), False),                                                          # no instruction at the entry
    ((Instr("PUSH", "EBP"),), False),                                     # nothing after the push
    ((Instr("PUSH", "EBP"), Instr("MOV", "EBP")), False),                 # one operand
    ((Instr("PUSH", "EBP"), Instr("MOV", "ESI", "ESP")), False),
    ((Instr("PUSH", "EBP"), Instr("MOV", "EBP", "EAX")), False),
    ((Instr("PUSH", "EBP"), Instr("SUB", "ESP", "0x8")), False),
    ((Instr("PUSH"), Instr("RET")), False),                               # a push with no operand
    ((Instr("NOP"),), False),
    (tuple(Instr("NOP") for _ in range(10)) + (Instr("PUSH", "EBP"), Instr("MOV", "EBP", "ESP")), False),
])
def test_an_ebp_frame_is_a_push_ebp_then_mov_ebp_esp_in_the_first_ten(instrs, expected):
    assert frame(*instrs) is expected


def test_a_listing_that_raises_is_not_an_ebp_frame():
    class Broken:
        def getInstructionAt(self, _addr):
            raise RuntimeError("no listing")
    assert par.detect_ebp_frame(Broken(), Func()) is False


class Interface:
    opened = []

    def __init__(self, fail_dispose = False):
        self.fail_dispose = fail_dispose
        self.disposed = False

    def setOptions(self, options):
        self.options = options

    def openProgram(self, program):
        Interface.opened.append(program)

    def dispose(self):
        if self.fail_dispose:
            raise RuntimeError("already gone")
        self.disposed = True


@pytest.fixture(name = "interfaces")
def fixture_interfaces(monkeypatch):
    monkeypatch.setattr(par, "DecompInterface", Interface)
    monkeypatch.setattr(par, "DecompileOptions", object)
    monkeypatch.setattr(par, "_open_interfaces", [])
    monkeypatch.setattr(Interface, "opened", [])
    return par._open_interfaces


def test_each_thread_gets_one_decompiler_and_all_are_disposed(interfaces):
    tls = par.DecompilerThreadLocal("program")
    first = tls.get()
    assert tls.get() is first
    other = []
    worker = threading.Thread(target = lambda: other.append(tls.get()))
    worker.start()
    worker.join(timeout = 10)
    assert other[0] is not first and Interface.opened == ["program", "program"]
    assert interfaces == [first, other[0]]
    other[0].fail_dispose = True
    assert par.dispose_decompilers() == 2
    assert first.disposed and interfaces == []


def test_a_decompiler_made_while_waiting_for_the_lock_is_reused(interfaces):
    tls = par.DecompilerThreadLocal("program")
    made = Interface()

    class Lock:
        def __enter__(self):
            tls._local.interface = made

        def __exit__(self, *exc):
            return False

    tls._init_lock = Lock()
    assert tls.get() is made and interfaces == []


class TLS:
    def get(self):
        return "interface"


def worker(**kwargs):
    args = {"func": Func(), "currentProgram": "program", "decompiler_tls": TLS(), "symbol_table": "symbols",
            "reference_manager": "refs", "string_map": {}, "global_symbols": {},
            "program_listing": Listing(chain(Instr("PUSH", "EBP"), Instr("MOV", "EBP", "ESP")))}
    args.update(kwargs)
    return par.DecompileWorker(**args)


@pytest.fixture(name = "java")
def fixture_java(monkeypatch):
    """The Java-heavy calls the worker makes, each answering with its own name."""
    calls = {}

    def fake(name, value):
        def call(*args, **kwargs):
            calls[name] = (args, kwargs)
            return value
        monkeypatch.setattr(par, name, call)

    fake("decompile_function_raw", "void g(int a)\n{\n}")
    fake("generate_assembly_code_rich", "asm")
    fake("get_function_globals", ["g"])
    fake("extract_function_pcode", ["pcode"])
    fake("apply_cfg_esp_tracking", None)
    fake("get_function_xrefs", ["xref"])
    fake("get_function_calls", ["call"])
    fake("export_stack_frame", "frame")
    fake("detect_stack_patterns_from_listing", ["pattern"])
    fake("estimate_call_site_params", {"vtable_info": "vt", "params": 2})
    monkeypatch.setattr(decompiler, "extract_signature_from_decompiled_code", lambda code: "void g(int a)")
    return calls


def exporter_module(monkeypatch, process):
    name = "ghidra_annotations.annotations.pseudocode.exporter"
    module = types.ModuleType(name)
    module.process_python_only = process
    monkeypatch.setitem(sys.modules, name, module)


def test_a_worker_collects_every_java_result_then_post_processes(java, monkeypatch):
    seen = []
    exporter_module(monkeypatch, lambda result, *args: seen.append(args) or "processed")
    result = worker(switch_targets = "sw", pseudocode_src_dir = "src", constants_map = {}, vtable_data = "vtables")()
    assert result.success and result.error is None
    assert (result.func_name, result.func_addr, result.func_convention) == ("f_FUN_00401000", "00401000", "__cdecl")
    assert result.func_signature == "void g(int a)"
    assert java["decompile_function_raw"][1] == {"timeout": 60}
    assert java["apply_cfg_esp_tracking"][0] == (["pcode"], "sw", None, None, ["g"])
    assert java["estimate_call_site_params"][0][2] == "vtables"
    assert result.vtable_info == "vt" and result.param_estimates == {"params": 2}
    assert result.is_ebp_frame and result.stack_patterns_raw == ["pattern"]
    assert result.processed == "processed" and seen == [("src", {}, None, None)]


def test_a_signature_the_decompiled_code_lacks_keeps_the_prototype(java, monkeypatch):
    monkeypatch.setattr(decompiler, "extract_signature_from_decompiled_code", lambda code: None)
    monkeypatch.setattr(par, "estimate_call_site_params", lambda *args: {"params": 0})
    result = worker()()
    assert result.func_signature == "void f(void)" and result.vtable_info is None
    assert result.param_estimates == {"params": 0} and result.processed is None


@pytest.mark.parametrize("estimate", [lambda *args: None, lambda *args: 1 / 0])
def test_no_parameter_estimate_does_not_fail_the_function(java, estimate, monkeypatch):
    monkeypatch.setattr(par, "estimate_call_site_params", estimate)
    result = worker(pseudocode_src_dir = "src")()     # no constants map, so no post-processing
    assert result.success and result.param_estimates is None and result.processed is None


def test_a_java_failure_is_the_result_error(java, monkeypatch):
    def fail(*args, **kwargs):
        raise RuntimeError("decompiler died")
    monkeypatch.setattr(par, "decompile_function_raw", fail)
    result = worker(pseudocode_src_dir = "src", constants_map = {})()
    assert not result.success and result.error == "decompiler died" and result.processed is None


def test_a_post_processing_failure_is_kept_apart_from_success(java, monkeypatch):
    def fail(*args):
        raise ValueError("bad transform")
    exporter_module(monkeypatch, fail)
    result = worker(pseudocode_src_dir = "src", constants_map = {})()
    assert result.success and result.process_error == "bad transform" and result.processed is None
