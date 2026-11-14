# Imports
import os
import runpy
import sys
import types

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, AddressSet, MemoryAccessException
from ghidra_program import Data, FlowType, Instruction, Memory, Program
from repo_paths import SCRIPTS_DIR
import find_missing_functions as fmf

BASE = 0x1000
CALL = FlowType(call = True)


def module(monkeypatch, name, **attrs):
    fake = types.ModuleType(name)
    for attr, value in attrs.items():
        setattr(fake, attr, value)
    monkeypatch.setitem(sys.modules, name, fake)
    return fake


# Memory whose bytes at the hole offsets cannot be read
class HoleyMemory(Memory):
    def __init__(self, holes):
        super().__init__()
        self.holes = set(holes)

    def read(self, address, size):
        if self.holes & set(range(address.getOffset(), address.getOffset() + size)):
            raise MemoryAccessException(f"hole at {address}")
        return super().read(address, size)


# An address at the top of the space: stepping forward from the last one raises
class EdgeAddress(Address):
    def __init__(self, offset, last):
        super().__init__(offset)
        self.last = last

    def add(self, displacement):
        if displacement > 0 and self.offset >= self.last:
            raise OverflowError("past the end of the address space")
        return EdgeAddress(self.offset + displacement, self.last)


# A function body that ends at the top of the space
class EdgeBody:
    def __init__(self, start, last):
        self.start, self.last = start, last

    def contains(self, address):
        return self.start <= address.getOffset() <= self.last

    def getMaxAddress(self):
        return EdgeAddress(self.last, self.last)


# A program and what the fake commands below need from it: the entries the pseudo
# disassembler accepts, those CreateFunctionCmd refuses or raises on, and the code
# DisassembleCommand finds at an entry
class ScanProgram(Program):
    def __init__(self):
        super().__init__()
        self.valid, self.refuse, self.explode = set(), set(), set()
        self.disassembly, self.disassembled = {}, []


def program_with(code, start = BASE, holes = ()):
    program = ScanProgram()
    if holes:
        program.memory = HoleyMemory(holes)
    program.getMemory().add_block(".text", start, bytes(code), execute = True)
    return program


def at(offset):
    return Address(offset)


def gaps(program):
    found = fmf.find_gap_and_prologue(program, fmf.get_executable_set(program), program.getFunctionManager())
    return {off: (method, desc) for off, (_, method, desc) in found.items()}


# Answers isValidSubroutine for the entries it was given
class Pseudo:
    def __init__(self, program):
        self.program = program
        self.valid = program.valid

    def isValidSubroutine(self, addr, _follow):
        return addr.getOffset() in self.valid


class DisassembleCommand:
    def __init__(self, addr, restricted, follow):
        self.addr, self.restricted, self.follow = addr, restricted, follow

    def applyTo(self, program, _monitor):
        program.disassembled.append((self.addr.getOffset(), self.restricted, self.follow))
        for offset, instruction in program.disassembly.get(self.addr.getOffset(), []):
            program.getListing().add_instruction(offset, instruction)
        return True


# Defines a one-byte function
class CreateFunctionCmd:
    def __init__(self, addr):
        self.addr = addr

    def applyTo(self, program, _monitor):
        offset = self.addr.getOffset()
        if offset in program.explode:
            raise RuntimeError("boom")
        if offset in program.refuse:
            return False
        program.getFunctionManager().add(f"FUN_{offset:08x}", offset)
        return True


class ConsoleTaskMonitor:
    pass


@pytest.fixture(autouse = True)
def ghidra(monkeypatch):
    module(monkeypatch, "ghidra.program.model.address", AddressSet = AddressSet)
    module(monkeypatch, "ghidra.program.model.listing", Data = Data)
    module(monkeypatch, "ghidra.app.util", PseudoDisassembler = Pseudo)
    module(monkeypatch, "ghidra.app.cmd.disassemble", DisassembleCommand = DisassembleCommand)
    module(monkeypatch, "ghidra.app.cmd.function", CreateFunctionCmd = CreateFunctionCmd)
    module(monkeypatch, "ghidra.util.task", ConsoleTaskMonitor = ConsoleTaskMonitor)


def applying(program, valid = (), refuse = (), explode = (), disassembly = None):
    program.valid, program.refuse, program.explode = set(valid), set(refuse), set(explode)
    program.disassembly, program.disassembled = disassembly or {}, []
    return program


# --- memory and the listing ---------------------------------------------------------------------

def test_only_initialized_executable_blocks_are_scanned():
    program = program_with([0x90] * 4)
    memory = program.getMemory()
    memory.add_block(".bss", 0x2000, bytes(4), execute = True).initialized = False
    memory.add_block(".data", 0x3000, bytes(4))
    assert fmf.get_executable_set(program).ranges == [(BASE, BASE + 3)]


def test_bytes_read_unsigned_and_unreadable_ones_are_none():
    program = program_with([0xC3, 0x55], holes = [BASE + 1])
    assert fmf.read_byte(program, at(BASE)) == 0xC3
    assert fmf.read_byte(program, at(BASE + 1)) is None
    assert fmf.read_byte(program, at(0x9000)) is None


def test_a_pattern_matches_only_every_byte_readable_and_equal():
    program = program_with([0x55, 0x8B, 0xEC])
    assert fmf.matches(program, at(BASE), [0x55, 0x8B, 0xEC])
    assert not fmf.matches(program, at(BASE), [0x55, 0x8B, 0xED])
    assert not fmf.matches(program, at(BASE + 1), [0x8B, 0xEC, 0x00])


def test_a_byte_is_undefined_unless_code_or_defined_data_holds_it():
    program = program_with(bytes(8))
    listing = program.getListing()
    listing.add_instruction(BASE, Instruction("mov", length = 2))
    listing.add_data(BASE + 4, None, length = 2)
    listing.add_data(BASE + 6, None, length = 2, defined = False)
    assert not fmf.is_undefined(program, at(BASE + 1))
    assert fmf.is_undefined(program, at(BASE + 2))
    assert not fmf.is_undefined(program, at(BASE + 5))
    assert fmf.is_undefined(program, at(BASE + 7))


def test_a_code_unit_that_is_not_data_or_unknown_counts_as_defined(monkeypatch):
    program = program_with(bytes(2))
    program.getListing().add_data(BASE, None, length = 2, defined = False)
    module(monkeypatch, "ghidra.program.model.listing", Data = Instruction)
    assert not fmf.is_undefined(program, at(BASE))
    monkeypatch.setitem(sys.modules, "ghidra.program.model.listing", None)
    assert not fmf.is_undefined(program, at(BASE))


# Stands in for an address whose predecessor Ghidra cannot form
class NoPredecessor:
    def getOffset(self):
        return 1

    def subtract(self, _n):
        raise OverflowError("no address before this one")


def test_the_boundary_is_the_one_byte_before():
    program = program_with([0xC3, 0x00, 0xCC, 0x00, 0x8B, 0x00], holes = [BASE + 6])
    assert fmf.boundary_kind(program, at(BASE + 1)) == "PADDING"
    assert fmf.boundary_kind(program, at(BASE + 3)) == "PADDING"
    assert fmf.boundary_kind(program, at(BASE + 5)) == "OTHER"
    assert fmf.boundary_kind(program, at(BASE + 7)) == "START"
    assert fmf.boundary_kind(program, at(BASE)) == "START"
    assert fmf.boundary_kind(program, at(0)) == "START"
    assert fmf.boundary_kind(program, NoPredecessor()) == "START"


# --- Watcom's shapes ----------------------------------------------------------------------------

@pytest.mark.parametrize("code, length", [
    ([0x8D, 0x80, 0x00, 0x00, 0x00, 0x00, 0x53], 6),
    ([0x2E, 0x8B, 0xC0, 0x53], 3),
    ([0x8D, 0x40, 0x00, 0x53], 3),
    ([0x8B, 0xC0, 0x53], 2),
    ([0x8D, 0x40, 0x01, 0x53], 0),
    ([0x53, 0x56], 0),
])
def test_an_alignment_nop_is_measured_longest_first(code, length):
    assert fmf.alignment_nop_length(program_with(code), at(BASE)) == length


@pytest.mark.parametrize("code, run", [
    ([0x53, 0x56, 0x57, 0x55, 0x8B], "SVWU"),
    ([0x51, 0x52, 0x53, 0x56, 0x57, 0x55], "QRSVWU"),
    ([0x56, 0x57, 0x55, 0x55], "VWU"),
    ([0x56, 0x53], "V"),
    ([0x53, 0x53], "S"),
    ([0x8B, 0x53], ""),
])
def test_a_save_run_follows_the_save_order_and_stops_out_of_order(code, run):
    assert fmf.save_run(program_with(code), at(BASE)) == run


def test_a_save_run_stops_at_unreadable_memory():
    assert fmf.save_run(program_with([0x53, 0x56], holes = [BASE + 1]), at(BASE)) == "S"


@pytest.mark.parametrize("code, match", [
    ([0x53, 0x56, 0x57, 0x55], ([], "push run SVWU")),
    ([0x53, 0x56, 0x57, 0x8B], ([], "push run SVW")),
    ([0x56, 0x53], ([0x56], "push esi")),
    ([0x55, 0x8B, 0xEC], ([0x55, 0x8B, 0xEC], "push ebp; mov ebp,esp")),
    ([0x53, 0x8B], ([0x53], "push ebx")),
    ([0x81, 0xEC, 0x00], ([0x81, 0xEC], "sub esp,imm32")),
    ([0x8B, 0xC8], None),
])
def test_a_save_run_outranks_the_fixed_prologues(code, match):
    assert fmf.match_prologue(program_with(code), at(BASE)) == match


# --- tier 1: call targets -----------------------------------------------------------------------

def test_a_call_into_code_with_no_function_is_a_candidate():
    program = program_with(bytes(0x40))
    listing, fm = program.getListing(), program.getFunctionManager()
    listing.add_instruction(BASE, Instruction("call", flow = CALL, flows = [at(BASE + 0x20)]))
    listing.add_instruction(BASE + 5, Instruction("call", flow = CALL, flows = [at(0x9000), at(BASE + 0x30)]))
    listing.add_instruction(BASE + 10, Instruction("jmp", flows = [at(BASE + 0x38)]))
    fm.add("FUN_00001030", BASE + 0x30)
    found = fmf.find_call_targets(program, fmf.get_executable_set(program), fm)
    assert found == {BASE + 0x20: (at(BASE + 0x20), "CALL_TARGET", "called from 00001000")}


# --- tiers 2 and 3: gaps and prologues ----------------------------------------------------------

def test_a_gap_after_padding_or_at_the_start_is_a_gap_candidate_and_one_after_code_a_prologue_scan():
    code = [0x53, 0x56, 0x8B, 0xC3,        # 1000 push run SV at the block start
            0xCC, 0x55, 0x8B, 0xEC,         # 1004 int3, then push ebp; mov ebp,esp
            0x8B, 0x00, 0x00, 0x00,         # 1008 a function
            0x56, 0x57, 0x00, 0x00,         # 100c push run VW straight after it
            0x90, 0x8B, 0xC8, 0xC3]         # 1010 nop, then no prologue
    program = program_with(code)
    program.getFunctionManager().add("FUN_00001008", BASE + 8, size = 4)
    assert gaps(program) == {BASE: ("GAP_AFTER_PADDING", "push run SV"),
                             BASE + 5: ("GAP_AFTER_PADDING", "push ebp; mov ebp,esp"),
                             BASE + 12: ("PROLOGUE_SCAN", "push run VW")}


def test_only_a_chunks_first_byte_is_a_candidate_site():
    # 56 53 is "V" only: no run, so push esi; the 53 inside the chunk is never a site
    program = program_with([0xCC, 0x56, 0x53, 0x56, 0x57, 0xCC, 0x8B, 0xC8, 0x00])
    assert gaps(program) == {BASE + 1: ("GAP_AFTER_PADDING", "push esi")}


def test_a_chunk_ends_at_padding_a_function_defined_bytes_or_the_block_end():
    code = [0x00, 0xCC,                     # 1000 chunk ends at int3
            0x53, 0x56, 0x00,               # 1002 site; chunk ends at the function at 1005
            0x00, 0x00,                     # 1005 the function
            0x53, 0x56,                     # 1007 site; chunk ends at the code at 1009
            0x00, 0x00,                     # 1009 the code
            0x53, 0x56]                     # 100b site; chunk ends with the block
    program = program_with(code)
    program.getFunctionManager().add("FUN_00001005", BASE + 5, size = 2)
    program.getListing().add_instruction(BASE + 9, Instruction("push", length = 2))
    assert gaps(program) == {BASE + 2: ("GAP_AFTER_PADDING", "push run SV"),
                             BASE + 7: ("PROLOGUE_SCAN", "push run SV"),
                             BASE + 11: ("PROLOGUE_SCAN", "push run SV")}


def test_a_nop_before_an_undefined_push_run_moves_the_candidate_past_the_nop():
    # The byte before the nop is a function's, so the site itself is no gap; the nop makes it one
    program = program_with([0x8B, 0x8D, 0x40, 0x00, 0x53, 0x56, 0x57, 0x55, 0xC3])
    program.getFunctionManager().add("FUN_00001000", BASE)
    assert gaps(program) == {BASE + 4: ("GAP_AFTER_PADDING", "push run SVWU")}


def test_a_nop_before_a_function_or_defined_code_is_skipped():
    code = [0xCC, 0x8B, 0xC0, 0x53,         # 1001 nop, then the function at 1003
            0x56, 0xCC, 0x8B, 0xC0,         # 1006 nop, then code at 1008
            0x53, 0x56, 0x57, 0x55]
    program = program_with(code)
    program.getFunctionManager().add("FUN_00001003", BASE + 3, size = 2)
    program.getListing().add_instruction(BASE + 8, Instruction("push", length = 4))
    assert gaps(program) == {}


def test_the_scan_stops_at_unreadable_memory():
    # in a chunk, and then where the next one would start
    assert gaps(program_with([0x53, 0x56, 0x00, 0x00, 0x53, 0x56], holes = [BASE + 2])) == {
        BASE: ("GAP_AFTER_PADDING", "push run SV")}


def test_the_scan_stops_at_the_end_of_the_address_space():
    def edge(code, last):
        program = program_with(code)
        program.getMemory().blocks[0].start = EdgeAddress(BASE, last)
        return program

    # inside a chunk, on padding, and at the end of a function's body
    assert gaps(edge([0xCC, 0x53, 0x56, 0x00, 0x53, 0x56], BASE + 2)) == {
        BASE + 1: ("GAP_AFTER_PADDING", "push run SV")}
    assert gaps(edge([0xC3, 0x90, 0x53, 0x56], BASE + 1)) == {}
    program = edge([0xC3, 0x00, 0x53, 0x56], BASE + 1)
    program.getFunctionManager().add("FUN_00001000", BASE).body = EdgeBody(BASE, BASE + 1)
    assert gaps(program) == {}


def test_blocks_that_are_not_initialized_code_are_not_walked():
    program = program_with([0x53, 0x56])
    program.getMemory().add_block(".data", 0x2000, bytes([0x53, 0x56]))
    assert gaps(program) == {BASE: ("GAP_AFTER_PADDING", "push run SV")}


# --- validation and scoring ---------------------------------------------------------------------

def test_the_pseudo_disassembler_is_optional(monkeypatch):
    program = program_with([0x00])
    assert isinstance(fmf.make_pseudo(program), Pseudo)
    monkeypatch.setitem(sys.modules, "ghidra.app.util", None)
    assert fmf.make_pseudo(program) is None


class OneArgPseudo:
    def isValidSubroutine(self, addr):
        return addr.getOffset() == BASE


class BrokenPseudo:
    def isValidSubroutine(self, *_args):
        raise RuntimeError("cannot decode")


def test_a_subroutine_is_valid_invalid_or_unknown():
    program = applying(program_with([0x00]), valid = [BASE])
    assert fmf.valid_subroutine(None, at(BASE)) is None
    assert fmf.valid_subroutine(Pseudo(program), at(BASE)) is True
    assert fmf.valid_subroutine(Pseudo(program), at(BASE + 1)) is False
    assert fmf.valid_subroutine(OneArgPseudo(), at(BASE)) is True
    assert fmf.valid_subroutine(OneArgPseudo(), at(BASE + 1)) is False
    assert fmf.valid_subroutine(BrokenPseudo(), at(BASE)) is None


@pytest.mark.parametrize("method, valid, confidence", [
    ("CALL_TARGET", True, "VERY_HIGH"), ("CALL_TARGET", None, "HIGH"),
    ("GAP_AFTER_PADDING", True, "HIGH"), ("GAP_AFTER_PADDING", False, "LOW"),
    ("PROLOGUE_SCAN", True, "MEDIUM"), ("PROLOGUE_SCAN", False, "LOW"),
    ("OTHER", True, "LOW"),
])
def test_confidence_follows_method_and_validity(method, valid, confidence):
    assert fmf.score(method, valid) == confidence


# --- the scan -----------------------------------------------------------------------------------

def scan_program(**applied):
    code = bytearray(0x40)
    code[0x1F:0x22] = [0xCC, 0x53, 0x56]
    code[0x2F:0x32] = [0xCC, 0x55, 0x8B]
    program = applying(program_with(code), valid = [BASE + 0x10, BASE + 0x30], **applied)
    program.getListing().add_instruction(BASE, Instruction("call", flow = CALL, flows = [at(BASE + 0x10)],
                                                           length = 5))
    program.getListing().add_instruction(BASE + 5, Instruction("call", flow = CALL, flows = [at(BASE + 0x20)],
                                                               length = 5))
    return program


def test_the_scan_merges_tiers_preferring_call_targets_and_marks_invalid_ones(capsys):
    program = scan_program()
    fm = program.getFunctionManager()
    rows = fmf.scan_candidates(program, fmf.get_executable_set(program), fm, Pseudo(program))
    assert [(r["addr"].getOffset() - BASE, r["method"], r["confidence"], r["note"]) for r in rows] == [
        (0x10, "CALL_TARGET", "VERY_HIGH", "called from 00001000"),
        (0x20, "CALL_TARGET", "HIGH", "called from 00001005 [pseudo: invalid]"),
        (0x30, "GAP_AFTER_PADDING", "HIGH", "push ebp")]
    assert "Validating 3 unique candidates" in capsys.readouterr().out
    assert fmf.scan_candidates(program, fmf.get_executable_set(program), fm, None, verbose = False)
    assert capsys.readouterr().out == ""


# Reports a function at every entry, though none contains a byte
class EveryEntryIsAFunction:
    def __init__(self, fm):
        self.fm = fm

    def getFunctionAt(self, addr):
        return addr if addr.getOffset() >= BASE + 0x30 else None

    def getFunctionContaining(self, addr):
        return self.fm.getFunctionContaining(addr)


def test_the_scan_never_redefines_an_existing_entry():
    program = scan_program()
    fm = EveryEntryIsAFunction(program.getFunctionManager())
    rows = fmf.scan_candidates(program, fmf.get_executable_set(program), fm, None, verbose = False)
    assert [r["addr"].getOffset() - BASE for r in rows] == [0x10, 0x20]


# --- applying -----------------------------------------------------------------------------------

def test_a_function_is_disassembled_first_only_when_its_entry_is_not_code():
    program = applying(program_with(bytes(4)))
    assert fmf.define_function(program, at(BASE), ConsoleTaskMonitor())
    assert program.disassembled == [(BASE, None, True)]
    program.getListing().add_instruction(BASE + 2, Instruction("nop"))
    program.refuse.add(BASE + 2)
    assert not fmf.define_function(program, at(BASE + 2), ConsoleTaskMonitor())
    assert program.disassembled == [(BASE, None, True)]


def report(path):
    return path.read_text()


def test_a_report_only_run_changes_nothing(tmp_path, capsys):
    program = scan_program()
    out = tmp_path / "report.txt"
    assert not fmf.run(program, str(out), False, "HIGH")
    text = report(out)
    assert "Total candidates: 3" in text and "Mode: report only" in text
    assert "  VERY_HIGH: 1\n  HIGH:      2\n  MEDIUM:    0\n  LOW:       0\n" in text
    rows = [line.split()[0] for line in text.splitlines()[-3:]]
    assert rows == ["00001010", "00001020", "00001030"]
    assert program.getFunctionManager().functions == {}
    assert f"Report written to: {out}" in capsys.readouterr().out


def test_applying_cascades_through_call_targets_it_reveals(tmp_path, capsys):
    program = applying(program_with(bytes(0x40)), disassembly = {
        BASE + 0x10: [(BASE + 0x10, Instruction("call", flow = CALL, flows = [at(BASE + 0x20)]))]})
    program.getListing().add_instruction(BASE, Instruction("call", flow = CALL, flows = [at(BASE + 0x10)]))
    out = tmp_path / "report.txt"
    assert fmf.run(program, str(out), True, "HIGH")
    assert sorted(f.getOffset() for f in program.getFunctionManager().functions) == [BASE + 0x10, BASE + 0x20]
    printed = capsys.readouterr().out
    assert "pass 1 created 1 (running total 1)" in printed and "pass 2 created 1 (running total 2)" in printed
    assert "Created 2 new functions across 3 pass(es)." in printed
    assert "Mode: APPLIED (>= HIGH)" in report(out)
    assert [committed for _, committed in program.transactions] == [True, True]


def test_applying_stops_after_the_last_allowed_pass(tmp_path, capsys):
    program = applying(program_with(bytes(0x40)), disassembly = {
        BASE + 0x10: [(BASE + 0x10, Instruction("call", flow = CALL, flows = [at(BASE + 0x20)]))]})
    program.getListing().add_instruction(BASE, Instruction("call", flow = CALL, flows = [at(BASE + 0x10)]))
    assert fmf.run(program, str(tmp_path / "r.txt"), True, "HIGH", max_iter = 1)
    assert "Created 1 new functions across 1 pass(es)." in capsys.readouterr().out
    assert "00001020    HIGH" in report(tmp_path / "r.txt")


def test_a_failed_definition_ends_applying_and_is_reported(tmp_path, capsys):
    program = scan_program(refuse = [BASE + 0x10, BASE + 0x20, BASE + 0x30])
    assert not fmf.run(program, str(tmp_path / "r.txt"), True, "MEDIUM")
    assert "Created 0 new functions across 1 pass(es)." in capsys.readouterr().out
    assert report(tmp_path / "r.txt").count(" FAIL ") == 3


def test_an_error_while_applying_rolls_the_pass_back(tmp_path, capsys):
    program = scan_program(explode = [BASE + 0x20])
    assert fmf.run(program, str(tmp_path / "r.txt"), True, "HIGH")
    assert "ERROR during apply: boom" in capsys.readouterr().out
    assert program.transactions[0][1] is False


def test_applying_with_nothing_confident_enough_defines_nothing(tmp_path, capsys):
    program = applying(program_with([0x8B, 0x53, 0x56]))
    assert not fmf.run(program, str(tmp_path / "r.txt"), True, "HIGH")
    assert "Created 0 new functions across 1 pass(es)." in capsys.readouterr().out
    assert program.transactions == []


# --- main ---------------------------------------------------------------------------------------

# Records the project saves main makes
class SavingPyghidra(FakePyghidra):
    def __init__(self, program):
        super().__init__(program)
        self.saved = 0

    def save(self):
        self.saved += 1


class BrokenPyghidra(SavingPyghidra):
    def open_project(self, directory, name):
        raise RuntimeError("no such project")


@pytest.fixture
def launch(monkeypatch):
    monkeypatch.setattr(fmf.os, "_exit", sys.exit)

    def go(pyghidra, *args):
        monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
        monkeypatch.setattr(sys, "argv", ["find_missing_functions.py", *args])
        with pytest.raises(SystemExit) as stop:
            fmf.main()
        return stop.value.code
    return go


def test_main_writes_the_report_to_the_default_path(tmp_path, monkeypatch, launch):
    monkeypatch.chdir(tmp_path)
    pyghidra = SavingPyghidra(scan_program())
    assert launch(pyghidra, "projects", "Nocturne") == 0
    assert pyghidra.opened == [(os.path.abspath("projects"), "Nocturne"), "/nocturne.exe"]
    assert (pyghidra.saved, pyghidra.closed) == (1, 1)
    assert pyghidra.program.domain_file.saves == 0
    assert (tmp_path / "nocturne.exe_missing_functions.txt").exists()


def test_main_saves_the_program_only_when_applying_changed_it(tmp_path, launch, capsys):
    out = str(tmp_path / "r.txt")
    program = applying(scan_program(), valid = [BASE + 0x10])
    assert launch(SavingPyghidra(program), "p", "N", "bw.exe", "--out", out, "--apply") == 0
    assert program.domain_file.saves == 1
    assert "Saving program database..." in capsys.readouterr().out
    unchanged = applying(program_with([0x8B]))
    assert launch(SavingPyghidra(unchanged), "p", "N", "--out", out, "--apply") == 0
    assert unchanged.domain_file.saves == 0


def test_main_reports_an_error_and_exits_nonzero(tmp_path, launch, capsys):
    assert launch(BrokenPyghidra(None), "p", "N", "--out", str(tmp_path / "r.txt")) == 1
    assert "ERROR: no such project" in capsys.readouterr().out


def test_main_needs_pyghidra(launch, capsys):
    assert launch(None, "p", "N") == 1
    assert "pyghidra is not installed" in capsys.readouterr().out


def test_the_script_runs_as_main(monkeypatch, capsys):
    monkeypatch.setitem(sys.modules, "pyghidra", None)
    monkeypatch.setattr(sys, "argv", ["find_missing_functions.py", "p", "N"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "find_missing_functions.py"), run_name = "__main__")
    assert stop.value.code == 1
