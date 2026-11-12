# Imports
import os
import runpy
import sys
import types

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, AddressSet
from ghidra_program import Data, FlowType, Instruction, Program
from repo_paths import SCRIPTS_DIR
import validate_function_ranges as vfr

BASE = 0x1000
CALL = FlowType(call = True)
JUMP = FlowType(jump = True)


at = Address


# A program and what the fake commands below need from it: the code DisassembleCommand
# finds at a target, the bodies CreateFunctionCmd.fixupFunctionBody raises on, and what
# it returns
class FixProgram(Program):
    def __init__(self):
        super().__init__()
        self.disassembly, self.disassembled = {}, []
        self.fixups, self.failing, self.fixup_result = [], set(), True


def program_with(size, disassembly = None, fixup_result = True):
    program = FixProgram()
    program.getMemory().add_block(".text", BASE, bytes(size), execute = True)
    program.disassembly = disassembly or {}
    program.fixup_result = fixup_result
    return program


# Creates the code it was given at a target, unless a defined code unit sits in the
# target's first-instruction window; succeeds either way, as Ghidra's does
class DisassembleCommand:
    def __init__(self, addr, restricted, follow):
        self.addr, self.restricted, self.follow = addr, restricted, follow

    def applyTo(self, program, _monitor):
        program.disassembled.append(self.addr.getOffset())
        listing = program.getListing()
        window = [self.addr.add(i) for i in range(16)]
        if any(listing.getInstructionContaining(a) or listing.getDefinedDataContaining(a) for a in window):
            return True
        for offset, instruction in program.disassembly.get(self.addr.getOffset(), []):
            listing.add_instruction(offset, instruction)
        return True


# Recomputing a body absorbs every instruction no function owns
class CreateFunctionCmd:
    @staticmethod
    def fixupFunctionBody(program, function_or_entry, _monitor):
        program.fixups.append(function_or_entry)
        if function_or_entry in program.failing:
            raise RuntimeError("cannot fix")
        fm = program.getFunctionManager()
        function = function_or_entry
        if isinstance(function_or_entry, Address):
            function = fm.getFunctionAt(function_or_entry)
        for address in list(program.getListing().instructions):
            if fm.getFunctionContaining(address) is None:
                function.body.add(address)
        return program.fixup_result


class ConsoleTaskMonitor:
    pass


@pytest.fixture(autouse = True)
def ghidra(monkeypatch):
    for name, attr, value in [("ghidra.program.model.address", "AddressSet", AddressSet),
                              ("ghidra.program.model.listing", "Data", Data),
                              ("ghidra.app.cmd.disassemble", "DisassembleCommand", DisassembleCommand),
                              ("ghidra.app.cmd.function", "CreateFunctionCmd", CreateFunctionCmd),
                              ("ghidra.util.task", "ConsoleTaskMonitor", ConsoleTaskMonitor)]:
        fake = types.ModuleType(name)
        setattr(fake, attr, value)
        monkeypatch.setitem(sys.modules, name, fake)


def scan(program, func):
    fm = program.getFunctionManager()
    return vfr.scan_function(program, func, vfr.get_executable_set(program), fm)


def kinds(findings):
    return [(f["kind"], f["from"].getOffset() - BASE, f["target"].getOffset() - BASE) for f in findings]


# --- memory and the listing ---------------------------------------------------------------------

def test_only_initialized_executable_blocks_are_scanned():
    program = program_with(4)
    memory = program.getMemory()
    memory.add_block(".bss", 0x2000, bytes(4), execute = True).initialized = False
    memory.add_block(".data", 0x3000, bytes(4))
    assert vfr.get_executable_set(program).ranges == [(BASE, BASE + 3)]


def test_a_byte_is_undefined_unless_code_or_defined_data_holds_it():
    program = program_with(8)
    listing = program.getListing()
    listing.add_instruction(BASE, Instruction("mov", length = 2))
    listing.add_data(BASE + 4, None, length = 2)
    listing.add_data(BASE + 6, None, length = 2, defined = False)
    assert not vfr.is_undefined(program, at(BASE + 1))
    assert vfr.is_undefined(program, at(BASE + 2))
    assert not vfr.is_undefined(program, at(BASE + 5))
    assert vfr.is_undefined(program, at(BASE + 7))


def test_a_code_unit_that_is_not_data_counts_as_defined(monkeypatch):
    program = program_with(2)
    program.getListing().add_data(BASE, None, length = 2, defined = False)
    monkeypatch.setattr(sys.modules["ghidra.program.model.listing"], "Data", Instruction)
    assert not vfr.is_undefined(program, at(BASE))


@pytest.mark.parametrize("instruction, padding", [
    (Instruction("NOP"), True),
    (Instruction("nop"), True),
    (Instruction("MOV", "EAX", "EAX"), True),
    (Instruction("mov", "eax", "eax"), True),
    (Instruction("LEA", "EAX", "[EAX]"), True),
    (Instruction("LEA", "EAX", "[EAX + 0x0]"), True),
    (Instruction("MOV", "EAX", "EBX"), False),
    (Instruction("LEA", "EAX", "[EBX]"), False),
    (Instruction("LEA", "EAX", "[EAX + 0x4]"), False),
    (Instruction("XCHG", "EAX", "EAX"), False),
    (Instruction("MOV", "EAX"), False),
    (Instruction("LEA", "EAX", "[EAX]", "EAX"), False),
])
def test_alignment_padding_is_nop_or_a_register_moved_onto_itself(instruction, padding):
    assert vfr.is_alignment_nop(instruction) is padding


# --- scanning one function ----------------------------------------------------------------------

def test_an_entry_never_disassembled_is_flagged_but_not_one_holding_data_or_code():
    program = program_with(0x10)
    listing, fm = program.getListing(), program.getFunctionManager()
    found = scan(program, fm.add("FUN_00001000", BASE))
    assert kinds(found) == [("ENTRY_UNDEFINED", 0, 0)]
    assert (found[0]["severity"], found[0]["note"]) == ("HIGH", "entry never disassembled")
    listing.add_data(BASE + 4, None)
    assert scan(program, fm.add("FUN_00001004", BASE + 4)) == []
    listing.add_instruction(BASE + 8, Instruction("ret"))
    assert scan(program, fm.add("FUN_00001008", BASE + 8)) == []


# A head at BASE whose one instruction is `head`, and a function at BASE + 4 if `next_function`
def split_program(head, next_function = True):
    program = program_with(0x10)
    listing, fm = program.getListing(), program.getFunctionManager()
    func = fm.add("FUN_00001000", BASE, size = 4)
    listing.add_instruction(BASE, head)
    listing.add_instruction(BASE + 4, Instruction("ret"))
    if next_function:
        fm.add("FUN_00001004", BASE + 4)
    return program, func


def test_falling_through_into_another_functions_entry_is_a_split():
    program, func = split_program(Instruction("MOV", "EAX", "EBX", length = 4, fallthrough = at(BASE + 4)))
    found = scan(program, func)
    assert kinds(found) == [("FALLTHROUGH_INTO_FUNCTION", 0, 4)]
    assert found[0]["severity"] == "HIGH" and found[0]["note"] == "MOV falls into FUN_00001004"
    assert found[0]["into"] is program.getFunctionManager().getFunctionAt(at(BASE + 4))


@pytest.mark.parametrize("head", [
    Instruction("CALL", flow = CALL, length = 4, fallthrough = at(BASE + 4)),
    Instruction("NOP", length = 4, fallthrough = at(BASE + 4)),
    Instruction("LEA", "EAX", "[EAX + 0x0]", length = 4, fallthrough = at(BASE + 4)),
    Instruction("MOV", "EAX", "EBX", length = 4, fallthrough = at(BASE)),
])
def test_a_call_padding_or_a_fall_back_to_the_own_entry_is_no_split(head):
    program, func = split_program(head)
    assert scan(program, func) == []


def test_falling_into_code_no_function_owns_is_orphan_flow_not_a_split():
    program, func = split_program(Instruction("MOV", "EAX", "EBX", length = 4, fallthrough = at(BASE + 4)),
                                  next_function = False)
    assert kinds(scan(program, func)) == [("FLOW_ORPHAN", 0, 4)]


def test_jumps_into_undefined_bytes_or_orphan_code_are_flagged_once_each():
    program = program_with(0x40)
    listing, fm = program.getListing(), program.getFunctionManager()
    func = fm.add("FUN_00001000", BASE, size = 0x10)
    for offset, instruction in [
            (0, Instruction("jmp", flow = JUMP, flows = [None, at(0x9000), at(BASE + 0x20)])),
            (1, Instruction("jz", flow = JUMP, flows = [at(BASE + 0x20)])),      # seen already
            (2, Instruction("jz", flow = JUMP, flows = [at(BASE + 0x24)])),      # defined data
            (3, Instruction("jz", flow = JUMP, flows = [at(BASE + 0x28)])),      # orphan code
            (4, Instruction("jz", flow = JUMP, flows = [at(BASE + 0x30)])),      # another function
            (5, Instruction("jz", flow = JUMP, flows = [at(BASE + 0x28)])),      # seen already
            (6, Instruction("jz", flow = JUMP, flows = [at(BASE + 7)])),         # this function
            (7, Instruction("call", flow = CALL, flows = [at(BASE + 0x38)]))]:   # calls are not flow
        listing.add_instruction(BASE + offset, instruction)
    listing.add_data(BASE + 0x24, None)
    listing.add_instruction(BASE + 0x28, Instruction("ret"))
    listing.add_instruction(BASE + 0x30, Instruction("ret"))
    fm.add("FUN_00001030", BASE + 0x30)
    found = scan(program, func)
    assert kinds(found) == [("FLOW_UNDEFINED", 0, 0x20), ("FLOW_ORPHAN", 3, 0x28)]
    assert [(f["severity"], f["note"]) for f in found] == [("HIGH", "jmp -> undefined"),
                                                           ("MEDIUM", "jz -> orphan code")]


def test_only_an_undefined_unclaimed_gap_inside_the_body_is_a_hole():
    program = program_with(0x10)
    listing, fm = program.getListing(), program.getFunctionManager()
    func = fm.add("FUN_00001000", BASE)
    func.body = AddressSet()
    for lo in (0, 4, 8, 12):
        func.body.add(at(BASE + lo), at(BASE + lo + 1))
    listing.add_instruction(BASE, Instruction("ret"))
    listing.add_data(BASE + 6, None)
    fm.add("FUN_0000100a", BASE + 10)
    found = scan(program, func)
    assert kinds(found) == [("BODY_HOLE", 0, 2)]
    assert (found[0]["severity"], found[0]["note"]) == ("MEDIUM", "interior gap 00001002-00001003")


# A body Ghidra reports no maximum for
class EmptyBody:
    ranges = []

    def getMaxAddress(self):
        return None

    def contains(self, _address):
        return False


def test_a_body_without_a_maximum_has_no_holes():
    program = program_with(4)
    func = program.getFunctionManager().add("FUN_00001000", BASE)
    func.body = EmptyBody()
    program.getListing().add_instruction(BASE, Instruction("ret"))
    assert scan(program, func) == []


def test_scanning_all_skips_thunks_and_externals_and_logs_progress():
    program = program_with(4)
    fm = program.getFunctionManager()
    for i in range(1001):
        fm.add(f"FUN_{i}", 0x10000 + i)
    program.getListing().add_instruction(0x10000, Instruction("ret"))
    fm.add("thunk", BASE).thunk_target = fm.getFunctionAt(at(0x10000))
    fm.add("external", BASE + 1).external = True
    logged = []
    results = vfr.scan_all(program, vfr.get_executable_set(program), fm, logged.append)
    assert logged == ["Scanning 1001 functions for fragmentation...", "  ...1000/1001"]
    assert [func.getEntryPoint().getOffset() for func, _ in results] == list(range(0x10001, 0x10000 + 1001))


# --- fixing one function ------------------------------------------------------------------------

def finding(kind, target):
    return {"kind": kind, "target": at(target)}


def fix(program, func, findings, fix_holes = False):
    return vfr.fixup_function(program, func, findings, ConsoleTaskMonitor(), fix_holes)


def test_undefined_flow_and_entry_are_disassembled_and_holes_only_when_asked():
    program = program_with(0x40, disassembly = {
        offset: [(offset, Instruction("ret"))] for offset in (BASE, BASE + 0x10, BASE + 0x30)})
    func = program.getFunctionManager().add("FUN_00001000", BASE)
    findings = [finding("FLOW_UNDEFINED", BASE + 0x10), finding("ENTRY_UNDEFINED", BASE),
                finding("BODY_HOLE", BASE + 0x30)]
    assert fix(program, func, findings) == (True, [])
    assert program.disassembled == [BASE + 0x10, BASE]
    assert fix(program, func, findings, fix_holes = True) == (True, [])
    assert program.disassembled == [BASE + 0x10, BASE, BASE + 0x30]


def test_orphan_flow_is_absorbed_by_recomputing_the_body():
    program = program_with(0x10)
    func = program.getFunctionManager().add("FUN_00001000", BASE)
    program.getListing().add_instruction(BASE, Instruction("jmp", flow = JUMP, flows = [at(BASE + 4)]))
    program.getListing().add_instruction(BASE + 4, Instruction("ret"))
    assert fix(program, func, [finding("FLOW_ORPHAN", BASE + 4)]) == (True, [])
    assert program.disassembled == []
    assert program.fixups == [func]
    assert func.getBody().contains(at(BASE + 4))


def test_a_tail_blocked_by_another_function_is_reported_not_touched():
    program = program_with(0x40, disassembly = {BASE + 0x20: [(BASE + 0x20, Instruction("ret"))]},
                           fixup_result = False)
    fm = program.getFunctionManager()
    func = fm.add("FUN_00001000", BASE)
    fm.add("FUN_bogus", BASE + 0x22)
    program.getListing().add_instruction(BASE + 0x22, Instruction("ret"))
    assert fix(program, func, [finding("FLOW_UNDEFINED", BASE + 0x20)]) == (False, [{
        "victim": at(BASE), "victim_name": "FUN_00001000", "target": at(BASE + 0x20),
        "blocker_entry": at(BASE + 0x22), "blocker_name": "FUN_bogus"}])
    assert program.getListing().cleared == []


def test_a_target_that_will_not_disassemble_with_nothing_in_the_way_is_left():
    program = program_with(0x40, fixup_result = False)
    func = program.getFunctionManager().add("FUN_00001000", BASE)
    assert fix(program, func, [finding("FLOW_UNDEFINED", BASE + 0x20)]) == (False, [])
    assert program.disassembled == [BASE + 0x20]


def test_stale_orphan_data_in_the_way_is_cleared_and_the_target_redisassembled(capsys):
    program = program_with(0x40, disassembly = {BASE + 0x20: [(BASE + 0x20, Instruction("ret"))]},
                           fixup_result = False)
    func = program.getFunctionManager().add("FUN_00001000", BASE)
    listing = program.getListing()
    listing.add_data(BASE + 0x21, None, defined = False)
    listing.add_data(BASE + 0x22, None)
    assert fix(program, func, [finding("FLOW_UNDEFINED", BASE + 0x20)]) == (True, [])
    assert listing.cleared == [(at(BASE + 0x20), at(BASE + 0x22), False)]
    assert program.disassembled == [BASE + 0x20, BASE + 0x20]
    assert ("    cleared 1 stale orphan unit(s) [00001020-00001022] blocking 00001020, re-disassembled"
            in capsys.readouterr().out)


def test_clearing_that_leaves_orphan_code_in_the_way_does_not_progress(capsys):
    program = program_with(0x40, disassembly = {BASE + 0x20: [(BASE + 0x20, Instruction("ret"))]},
                           fixup_result = False)
    func = program.getFunctionManager().add("FUN_00001000", BASE)
    listing = program.getListing()
    listing.add_data(BASE + 0x22, None)
    listing.add_instruction(BASE + 0x24, Instruction("ret"))
    assert fix(program, func, [finding("FLOW_UNDEFINED", BASE + 0x20)]) == (False, [])
    assert listing.cleared == [(at(BASE + 0x20), at(BASE + 0x24), False)]
    assert program.disassembled == [BASE + 0x20, BASE + 0x20]
    assert capsys.readouterr().out == ""


def test_the_functions_own_code_in_the_way_is_never_cleared():
    program = program_with(0x40, fixup_result = False)
    func = program.getFunctionManager().add("FUN_00001000", BASE, size = 0x30)
    program.getListing().add_instruction(BASE + 0x22, Instruction("ret"))
    assert fix(program, func, [finding("FLOW_UNDEFINED", BASE + 0x20)]) == (False, [])
    assert program.getListing().cleared == []
    assert program.disassembled == [BASE + 0x20]


def test_a_body_recompute_that_fails_retries_from_the_entry(capsys):
    program = program_with(4)
    func = program.getFunctionManager().add("FUN_00001000", BASE)
    program.failing = {func}
    assert fix(program, func, []) == (True, [])
    assert program.fixups == [func, at(BASE)]
    program.fixups, program.failing = [], {func, at(BASE)}
    assert fix(program, func, []) == (False, [])
    assert program.fixups == [func, at(BASE)]
    assert "    fixup failed for 00001000: cannot fix" in capsys.readouterr().out


# --- the report ---------------------------------------------------------------------------------

def report_finding(kind, severity, offset):
    return {"kind": kind, "severity": severity, "from": at(offset), "target": at(offset + 1), "note": "n"}


def test_the_report_lists_high_first_and_at_most_eight_findings_each(tmp_path, capsys):
    fm = program_with(4).getFunctionManager()
    medium, high = fm.add("FUN_00001000", BASE), fm.add("FUN_00001010", BASE + 0x10)
    results = [(medium, [report_finding("FLOW_ORPHAN", "MEDIUM", BASE)]),
               (high, [report_finding("FLOW_UNDEFINED", "HIGH", BASE + 0x10 + i) for i in range(9)])]
    out = tmp_path / "r.txt"
    vfr.write_report(str(out), "bw.exe", results, False)
    lines = out.read_text().splitlines()
    assert lines[:7] == ["Fragmented Function Report", "=" * 60, "Program: bw.exe", "Fragmented functions: 2",
                         "  with HIGH (undefined flow or entry, or split entry): 1",
                         "  MEDIUM only (orphan code / interior gap): 1", "Mode: report only"]
    assert lines[8] == "00001010    HIGH    FUN_00001010  (9 issues)"
    assert lines[9] == "      FLOW_UNDEFINED from 00001010   -> 00001011    n"
    assert lines[17] == "      ... +1 more"
    assert lines[18] == "00001000    MEDIUM  FUN_00001000  (1 issue)"
    printed = capsys.readouterr().out
    assert f"Report written to: {out}" in printed and "truncated" not in printed


def test_a_long_report_is_truncated_on_the_console(tmp_path, capsys):
    fm = program_with(4).getFunctionManager()
    results = [(fm.add(f"FUN_{i}", BASE + i), [report_finding("FLOW_ORPHAN", "MEDIUM", BASE + i)])
               for i in range(80)]
    vfr.write_report(str(tmp_path / "r.txt"), "bw.exe", results, True)
    assert "Mode: FIXED" in (tmp_path / "r.txt").read_text()
    assert "... (report truncated in console; full report on disk)" in capsys.readouterr().out


# --- run ----------------------------------------------------------------------------------------

def test_a_clean_program_reports_nothing_and_fixes_nothing(tmp_path, capsys):
    program = program_with(4)
    program.getFunctionManager().add("FUN_00001000", BASE)
    program.getListing().add_instruction(BASE, Instruction("ret"))
    out = tmp_path / "r.txt"
    assert not vfr.run(program, str(out), True, 4, False)
    assert program.transactions == []
    assert "Fragmented functions: 0" in out.read_text()
    printed = capsys.readouterr().out
    assert "Found 0 fragmented functions." in printed and "!!" not in printed


def test_fixing_stops_after_the_pass_that_leaves_nothing(tmp_path, capsys):
    program = program_with(0x10, disassembly = {BASE + 2: [(BASE + 2, Instruction("ret"))]})
    func = program.getFunctionManager().add("FUN_00001000", BASE, size = 2)
    program.getListing().add_instruction(BASE, Instruction("jmp", flow = JUMP, flows = [at(BASE + 2)], length = 2))
    out = tmp_path / "r.txt"
    assert vfr.run(program, str(out), True, 4, False)
    printed = capsys.readouterr().out
    assert "Fix pass 1: repairing 1 functions..." in printed and "  after pass 1: 0 fragmented remain" in printed
    assert "Fix pass 2" not in printed
    assert program.transactions == [["Fix fragmented functions (pass 1)", True]]
    assert func.getBody().contains(at(BASE + 2))
    assert "Mode: FIXED" in out.read_text()


def test_splits_are_listed_by_address_once_each_with_one_delete_command(tmp_path, capsys):
    program = program_with(0x30, fixup_result = False)
    listing, fm = program.getListing(), program.getFunctionManager()
    fm.add("FUN_00001000", BASE, size = 4)
    listing.add_instruction(BASE, Instruction("MOV", "EAX", "EBX", length = 2, fallthrough = at(BASE + 0x20)))
    listing.add_instruction(BASE + 2, Instruction("XOR", "EAX", "EAX", length = 2, fallthrough = at(BASE + 0x20)))
    fm.add("FUN_00001010", BASE + 0x10, size = 4)
    listing.add_instruction(BASE + 0x10, Instruction("MOV", "EAX", "EBX", length = 4, fallthrough = at(BASE + 8)))
    for offset in (8, 0x20):
        fm.add(f"FUN_{BASE + offset:08x}", BASE + offset)
        listing.add_instruction(BASE + offset, Instruction("ret"))
    assert not vfr.run(program, str(tmp_path / "r.txt"), True, 2, False)
    printed = capsys.readouterr().out
    assert "  after pass 2: 2 fragmented remain" in printed
    assert [committed for _, committed in program.transactions] == [True, True]
    assert "\n".join([
        "!! 2 function(s) are the continuation of the function before them (an",
        "   entry split in two). Delete the continuation, keep the better name on",
        "   the first entry (its _FUN_ suffix must be that entry), then --fix:",
        f"   00001008 {'FUN_00001008':<40} continues 00001010 FUN_00001010",
        f"   00001020 {'FUN_00001020':<40} continues 00001000 FUN_00001000",
        "      delete_function.py <ABS>/projects <project> program.exe --addr 00001008 --addr 00001020"
        " --apply --force"]) in printed
    assert "FALLTHROUGH_INTO_FUNCTION" in (tmp_path / "r.txt").read_text()


def test_an_error_while_fixing_rolls_the_pass_back(tmp_path, capsys, monkeypatch):
    def explode(*_args):
        raise RuntimeError("boom")

    monkeypatch.setattr(vfr, "fixup_function", explode)
    program = program_with(4)
    program.getFunctionManager().add("FUN_00001000", BASE)
    assert not vfr.run(program, str(tmp_path / "r.txt"), True, 1, False)
    assert "ERROR during fix: boom" in capsys.readouterr().out
    assert program.transactions == [["Fix fragmented functions (pass 1)", False]]


def test_tails_blocked_by_a_function_end_with_one_delete_command_per_blocker(tmp_path, capsys):
    program = program_with(0x50, fixup_result = False)
    listing, fm = program.getListing(), program.getFunctionManager()
    fm.add("FUN_00001000", BASE)
    listing.add_instruction(BASE, Instruction("jmp", flow = JUMP, flows = [at(BASE + 0x20)]))
    fm.add("FUN_00001040", BASE + 0x40)
    listing.add_instruction(BASE + 0x40, Instruction("jmp", flow = JUMP, flows = [at(BASE + 0x21)]))
    fm.add("FUN_bogus", BASE + 0x22)
    listing.add_instruction(BASE + 0x22, Instruction("ret"))
    assert not vfr.run(program, str(tmp_path / "r.txt"), True, 1, False)
    printed = capsys.readouterr().out
    assert "!! 2 fragmented tail(s) BLOCKED by an overlapping function - likely a" in printed
    assert f"   00001000 {'FUN_00001000':<40} tail@00001020 blocked by FUN_bogus @ 00001022" in printed
    assert f"   00001040 {'FUN_00001040':<40} tail@00001021 blocked by FUN_bogus @ 00001022" in printed
    assert ("      delete_function.py <ABS>/projects <project> program.exe --addr 00001022 --apply --undefine"
            in printed)


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
    monkeypatch.setattr(vfr.os, "_exit", sys.exit)

    def go(pyghidra, *args):
        monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
        monkeypatch.setattr(sys, "argv", ["validate_function_ranges.py", *args])
        with pytest.raises(SystemExit) as stop:
            vfr.main()
        return stop.value.code
    return go


def fixable_program():
    program = program_with(0x10, disassembly = {BASE + 2: [(BASE + 2, Instruction("ret"))]})
    program.getFunctionManager().add("FUN_00001000", BASE, size = 2)
    program.getListing().add_instruction(BASE, Instruction("jmp", flow = JUMP, flows = [at(BASE + 2)], length = 2))
    return program


def test_main_writes_the_report_to_the_default_path(tmp_path, monkeypatch, launch):
    monkeypatch.chdir(tmp_path)
    pyghidra = SavingPyghidra(fixable_program())
    assert launch(pyghidra, "projects", "Nocturne") == 0
    assert pyghidra.opened == [(os.path.abspath("projects"), "Nocturne"), "/nocturne.exe"]
    assert (pyghidra.saved, pyghidra.closed) == (1, 1)
    assert pyghidra.program.domain_file.saves == 0
    assert (tmp_path / "nocturne.exe_fragmented_functions.txt").exists()


def test_main_saves_the_program_only_when_fixing_changed_it(tmp_path, launch, capsys):
    out = str(tmp_path / "r.txt")
    program = fixable_program()
    assert launch(SavingPyghidra(program), "p", "N", "bw.exe", "--out", out, "--fix", "--max-passes", "1") == 0
    assert program.domain_file.saves == 1
    assert "Saving program database..." in capsys.readouterr().out
    unchanged = program_with(4)
    assert launch(SavingPyghidra(unchanged), "p", "N", "--out", out, "--fix", "--fix-holes") == 0
    assert unchanged.domain_file.saves == 0


def test_main_reports_an_error_and_exits_nonzero(tmp_path, launch, capsys):
    assert launch(BrokenPyghidra(None), "p", "N", "--out", str(tmp_path / "r.txt")) == 1
    assert "ERROR: no such project" in capsys.readouterr().out


def test_main_needs_pyghidra(launch, capsys):
    assert launch(None, "p", "N") == 1
    assert "pyghidra is not installed" in capsys.readouterr().out


def test_the_script_runs_as_main(monkeypatch, capsys):
    monkeypatch.setitem(sys.modules, "pyghidra", None)
    monkeypatch.setattr(sys, "argv", ["validate_function_ranges.py", "p", "N"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "validate_function_ranges.py"), run_name = "__main__")
    assert stop.value.code == 1
    assert "pyghidra is not installed" in capsys.readouterr().out
