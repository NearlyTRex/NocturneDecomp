# Imports
import importlib
import os
import runpy
import sys
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from boundary_program import BASE, BoundaryProgram, CreateFunctionCmd, DisassembleCommand, at, function, label, put
from fake_pyghidra import FakePyghidra
from ghidra_program import FlowType, Instruction, ReferenceManager
from repo_paths import SCRIPTS_DIR
import fix_misaligned_functions as fmf

XOR = ("XOR", "byte ptr [ECX + 0x30]", "BH")
PADDING = ("ADD", "byte ptr [EAX]", "AL")


@pytest.fixture(autouse = True)
def ghidra(monkeypatch):
    for name, attr, value in [("ghidra.app.cmd.disassemble", "DisassembleCommand", DisassembleCommand),
                              ("ghidra.app.cmd.function", "CreateFunctionCmd", CreateFunctionCmd)]:
        monkeypatch.setattr(importlib.import_module(name), attr, value)


def world():
    prog = BoundaryProgram()
    prog.reference_manager = ReferenceManager()
    return prog


def jump_table(prog, offset, *targets, computed = True):
    made = Instruction("JMP", "dword ptr [EAX*0x4 + 0x2000]", flow = FlowType(computed = computed, jump = True),
                       flows = [at(BASE + t) for t in targets], length = 7)
    return prog.getListing().add_instruction(BASE + offset, made)


def jump(prog, offset, target):
    made = Instruction("JMP", f"0x{BASE + target:x}", flow = FlowType(jump = True), flows = [at(BASE + target)])
    return prog.getListing().add_instruction(BASE + offset, made)


def options(**changes):
    return SimpleNamespace(**{"include_named": False, "tu": None, "show": 20, "program": "game.exe",
                              "max_passes": 5, "apply": False, "repair_jumptables": False, **changes})


def anchors_of(*funcs):
    return sorted((f.getEntryPoint().getOffset(), f) for f in funcs)


# --- recognising an impossible entry ----------------------------------------------------------------

@pytest.mark.parametrize("text, why", [
    ("XOR byte ptr [ECX + 0x30],BH", "decodes mid-instruction"),
    ("sbb byte ptr [EAX],CL", "decodes mid-instruction"),
    ("ADD byte ptr [EAX],AL", "decodes 00 00 (padding or data)"),
    ("FSTP dword ptr [ESP]", "stores from an FPU stack it never filled"),
    ("ADD ESP,0x8", "unwinds a stack frame it never created"),
    ("INT3", None),
    ("INT 0x3", "a trap is not a function entry"),
    ("POP EBX", "pops a register it never pushed"),
    ("POP EBX,ECX", None),
    ("PUSH EBP", None),
])
def test_some_first_instructions_cannot_begin_a_function(text, why):
    assert fmf.impossible_reason(text) == why


def test_an_instruction_reads_as_its_normalized_text_and_a_name_as_its_unit():
    assert fmf.instr_text(Instruction("MOV", "EAX ,  EBX")) == "MOV EAX , EBX"
    prog = world()
    assert fmf.tu_of(function(prog, 0, name = "engine_clipper.c_FUN_00001000")) == "engine/clipper.c"
    assert fmf.tu_of(function(prog, 4)) == "?"


def test_incoming_references_say_whether_one_calls_and_which_functions_refer():
    prog = world()
    caller = function(prog, 0x40, size = 0x10)
    refs = prog.getReferenceManager()
    refs.add(BASE + 0x44, BASE, kind = "UNCONDITIONAL_JUMP")
    refs.add(0x9000, BASE)
    assert fmf.incoming(prog, at(BASE)) == (False, {caller})
    refs.add(BASE + 0x48, BASE, call = True)
    assert fmf.incoming(prog, at(BASE))[0]


def test_the_terminal_target_is_where_the_last_jmp_goes():
    prog = world()
    empty = function(prog, 0x40, size = 4)
    assert fmf.terminal_target(prog, empty) is None
    func = function(prog, 0, size = 0x10)
    put(prog, 0, "PUSH", "EBX")
    assert fmf.terminal_target(prog, func) is None
    prog.getListing().add_instruction(BASE + 4, Instruction("JMP", "EAX", flow = FlowType(jump = True)))
    assert fmf.terminal_target(prog, func) is None                 # a jump with nowhere known to go
    jump(prog, 8, 0x30)
    assert fmf.terminal_target(prog, func) == at(BASE + 0x30)


def test_a_block_owns_a_switch_when_it_has_a_computed_jump():
    prog = world()
    func = function(prog, 0, size = 0x10)
    jump_table(prog, 0, 0x20, computed = False)
    assert not fmf.owns_a_switch(prog, func)
    jump_table(prog, 8, 0x20)
    assert fmf.owns_a_switch(prog, func)
    assert list(fmf.computed_jumps(prog, func)) == [at(BASE + 0x20)]


def test_the_preceding_anchor_is_the_last_function_entered_before_the_address():
    prog = world()
    first, second = function(prog, 0), function(prog, 0x20)
    anchors = anchors_of(first, second)
    assert fmf.preceding_anchor(anchors, at(BASE)) is None
    assert fmf.preceding_anchor(anchors, at(BASE + 0x20)) is first
    assert fmf.preceding_anchor(anchors, at(BASE + 0x21)) is second


# --- deriving the real entry --------------------------------------------------------------------------

def shifted(gap = 6, size = 0x10):
    """A real function ending at BASE + 0x1f, and a switch-owning suspect `gap` bytes past its end."""
    prog = world()
    prev = function(prog, 0, size = 0x20)
    suspect = function(prog, 0x20 + gap, size = size)
    return prog, prev, suspect


def test_a_true_entry_is_where_the_previous_function_ends():
    prog, prev, suspect = shifted()
    entry, why = fmf.derive_true_entry(prog, suspect, anchors_of(prev))
    assert entry == at(BASE + 0x20)
    assert why == "FUN_00001000 ends at 0000101f; true entry 00001020 (+6 byte phase shift)"


def test_a_true_entry_cannot_be_derived_without_a_close_predecessor():
    prog, prev, suspect = shifted()
    assert fmf.derive_true_entry(prog, suspect, []) == (None, "no real function precedes it")
    prog, prev, suspect = shifted(gap = 0x11)
    assert "ends 17 bytes earlier -- too far to be a phase shift" in fmf.derive_true_entry(
        prog, suspect, anchors_of(prev))[1]
    prog = world()
    prev = function(prog, 0, size = 0x30)
    suspect = function(prog, 0x20, size = 4)
    assert fmf.derive_true_entry(prog, suspect, anchors_of(prev))[1] == "FUN_00001000 ends at or after this entry"


def test_a_true_entry_on_a_case_body_is_no_function():
    prog, prev, suspect = shifted()
    label(prog, 0x20, "LAB_00001020")
    label(prog, 0x20, "caseD_3")
    assert "00001020 is labelled caseD_3 -- this is a case body" in fmf.derive_true_entry(
        prog, suspect, anchors_of(prev))[1]
    prog, prev, suspect = shifted()
    jump_table(prog, 0x10, 0x10, 0x28)
    assert "FUN_00001000 dispatches a switch to 00001028 inside this block" in fmf.derive_true_entry(
        prog, suspect, anchors_of(prev))[1]


def padded(zeros, before = ("RET",), size = 0x20):
    """A suspect at BASE + 0x10 on `zeros` zero bytes, after `before` at BASE + 0x0f."""
    prog = world()
    data = bytes(0x10) + bytes(zeros) + b"\x55" * 0x40
    prog.getMemory().add_block("text", BASE, data)
    if before:
        put(prog, 0x0f, *before)
    put(prog, 0x10, *PADDING)
    return prog, function(prog, 0x10, size = size)


def test_a_padding_entry_moves_past_the_zeros_after_a_ret():
    prog, suspect = padded(3)
    assert fmf.derive_padding_entry(prog, suspect) == (
        at(BASE + 0x13), "3 byte(s) of 0x00 padding after the RET at 0000100f; true entry 00001013")


@pytest.mark.parametrize("zeros, before, size, why", [
    (3, None, 0x20, "not immediately preceded by a RET -- may not be padding"),
    (3, ("PUSH", "EBX"), 0x20, "not immediately preceded by a RET -- may not be padding"),
    (0x20, ("RET",), 0x20, "no non-padding byte within the window"),
    (4, ("RET",), 2, "no non-padding byte within the window"),
    (0, ("RET",), 0x20, "entry byte is not 0x00 padding"),
])
def test_a_padding_entry_needs_a_ret_before_and_code_soon_after(zeros, before, size, why):
    prog, suspect = padded(zeros, before, size)
    assert fmf.derive_padding_entry(prog, suspect) == (None, why)


# --- finding the owner -------------------------------------------------------------------------------

def test_a_jump_table_dispatching_into_the_block_owns_it():
    prog, prev, suspect = shifted()
    jump_table(prog, 0x10, 0x20, 0x24)
    cache = {}
    owner, why = fmf.find_owner(prog, suspect, set(), anchors_of(prev), cache)
    assert owner is prev
    assert why == ("FUN_00001000 jump-table dispatches into this block (2 case target(s), "
                   "first at 00001020, entry is +6 bytes off)")
    assert cache == {BASE: {BASE + 0x20, BASE + 0x24}}
    assert fmf.computed_jump_targets(prog, prev, cache) is cache[BASE]


def owner_world():
    """A suspect at BASE + 0x40 ending in a JMP; a real function at BASE before it."""
    prog = world()
    real = function(prog, 0, size = 0x10)
    other = function(prog, 0x80, size = 0x10)
    suspect = function(prog, 0x40, size = 0x10)
    put(prog, 0x40, *XOR)
    return prog, real, other, suspect


def test_a_terminal_jump_into_a_real_function_names_the_owner():
    prog, real, other, suspect = owner_world()
    jump(prog, 0x4c, 0x84)
    assert fmf.find_owner(prog, suspect, set(), anchors_of(real, other), {}) == (
        other, "terminal JMP lands inside FUN_00001080")


def test_a_terminal_jump_to_itself_or_a_suspect_names_no_owner():
    prog, real, other, suspect = owner_world()
    jump(prog, 0x4c, 0x42)
    assert fmf.find_owner(prog, suspect, set(), anchors_of(real, other), {}) == (None, None)
    prog, real, other, suspect = owner_world()
    jump(prog, 0x4c, 0x84)
    assert fmf.find_owner(prog, suspect, {other.getEntryPoint()}, anchors_of(real), {}) == (None, None)


def test_the_only_function_referring_to_the_block_owns_it():
    prog, real, other, suspect = owner_world()
    refs = prog.getReferenceManager()
    refs.add(BASE + 4, BASE + 0x40)
    refs.add(BASE + 0x44, BASE + 0x40)                         # from itself: not an owner
    assert fmf.find_owner(prog, suspect, set(), anchors_of(real, other), {}) == (
        real, "only referenced from FUN_00001000")
    refs.add(BASE + 0x84, BASE + 0x40)
    assert fmf.find_owner(prog, suspect, set(), anchors_of(real, other), {}) == (None, None)


def test_an_unclaimed_terminal_target_goes_to_the_nearest_function_above_it():
    prog, real, other, suspect = owner_world()
    jump(prog, 0x4c, 0x60)
    owner, why = fmf.find_owner(prog, suspect, set(), anchors_of(real, other), {})
    assert owner is real and why == ("terminal JMP -> 00001060 is unclaimed; nearest real function "
                                     "above it is FUN_00001000 (+0x40)")
    assert fmf.find_owner(prog, suspect, set(), [], {}) == (None, None)       # nothing above it
    far = world()
    near = function(far, 0, size = 0x10)
    remote = function(far, fmf.MAX_ADOPT_DISTANCE + 0x10, size = 0x10)
    put(far, fmf.MAX_ADOPT_DISTANCE + 0x10, *XOR)
    jump(far, fmf.MAX_ADOPT_DISTANCE + 0x1c, fmf.MAX_ADOPT_DISTANCE + 0x40)
    assert fmf.find_owner(far, remote, set(), anchors_of(near), {}) == (None, None)


# --- the scan -----------------------------------------------------------------------------------------

def scan_world():
    prog = world()
    refs = prog.getReferenceManager()
    # a real switch owner, and a case body squatting 6 bytes past its first case
    owner = function(prog, 0, size = 0x20)
    jump_table(prog, 0x10, 0x24)
    function(prog, 0x2a, size = 0x16, name = "engine_clipper.c_FUN_0000102a")
    put(prog, 0x2a, *XOR)
    # called: a function whatever it starts with
    function(prog, 0x40, size = 8)
    put(prog, 0x40, "POP", "EBX")
    refs.add(0x9000, BASE + 0x40, call = True)
    # parked on padding after a RET, and on padding with no RET before it
    prog.getMemory().add_block("text", BASE + 0x50, bytes(2) + b"\x55" * 0x30 + bytes(0x20))
    put(prog, 0x4f, "RET")
    function(prog, 0x50, size = 0x10)
    put(prog, 0x50, *PADDING)
    function(prog, 0x70, size = 0x8)
    put(prog, 0x70, "PUSH", "EBX")
    function(prog, 0x82, size = 0x8)
    put(prog, 0x82, *PADDING)
    # a switch owner of its own, 4 bytes past a real function, and one with no neighbour
    function(prog, 0x100, size = 0x10)
    function(prog, 0x114, size = 0xc)
    put(prog, 0x114, "FSTP", "dword ptr [ESP]")
    jump_table(prog, 0x118, 0x200)
    function(prog, 0x180, size = 0x8)
    function(prog, 0x1a0, size = 0x10)
    put(prog, 0x1a0, "ADD", "ESP,0x8")
    jump_table(prog, 0x1a4, 0x210)
    # no owner anywhere
    function(prog, 0x300, size = 4)
    put(prog, 0x300, "INT", "0x3")
    # not suspects: named, a thunk, external, no instruction
    function(prog, 0x400, size = 4, name = "CBat_hit")
    put(prog, 0x400, *XOR)
    function(prog, 0x410, size = 4).thunk_target = owner
    function(prog, 0x420, size = 4).external = True
    function(prog, 0x430, size = 4)
    return prog, owner


def test_each_suspect_gets_its_action():
    prog, owner = scan_world()
    rows = {r["entry"].getOffset() - BASE: r for r in fmf.scan(prog, options())}
    assert {k: r["action"] for k, r in rows.items()} == {
        0x2a: "REMOVE", 0x40: "KEEP-CALLED", 0x50: "REBASE", 0x82: "ORPHAN", 0x114: "REBASE", 0x1a0: "ORPHAN",
        0x300: "ORPHAN"}
    assert rows[0x2a]["owner"] is owner and rows[0x2a]["tu"] == "engine/clipper.c"
    assert rows[0x50]["true_entry"] == at(BASE + 0x52) and rows[0x114]["true_entry"] == at(BASE + 0x110)
    assert rows[0x82]["detail"].startswith("looks like padding but is not safely resolvable: not immediately")
    assert rows[0x1a0]["detail"].startswith("owns a switch but its true entry is undecidable: nearest function")
    assert rows[0x300]["detail"] == "no owning function found -- entry is wrong but code would be stranded"
    assert rows[0x40]["detail"] == "has an incoming CALL"


def test_named_functions_are_scanned_only_on_request_and_a_unit_narrows_the_scan():
    prog, _ = scan_world()
    assert at(BASE + 0x400) in {r["entry"] for r in fmf.scan(prog, options(include_named = True))}
    assert [r["entry"] for r in fmf.scan(prog, options(tu = "engine/clipper.c"))] == [at(BASE + 0x2a)]


def test_the_report_counts_and_lists_each_action(capsys):
    prog, _ = scan_world()
    fmf.report(fmf.scan(prog, options()), options(show = 1))
    out = capsys.readouterr().out
    assert "MISALIGNED FUNCTION ENTRIES  (game.exe)" in out and "  suspect entries: 7" in out
    assert "    REBASE       2\n    REMOVE       1\n    ORPHAN       3\n    KEEP-CALLED  1" in out
    assert "       1  engine/clipper.c" in out
    assert "  ===== REMOVE (1) =====\n    0000102a  engine_clipper.c_FUN_0000102a" in out
    assert "        first : XOR byte ptr [ECX + 0x30],BH   <- decodes mid-instruction" in out
    assert "        owner : FUN_00001000 @ 00001000" in out and "        move  : 00001050 -> 00001052" in out
    assert "    ... and 2 more (raise --show)" in out and "... and 1 more" in out


def test_a_report_leaves_out_actions_nothing_took(capsys):
    fmf.report([], options())
    out = capsys.readouterr().out
    assert "  suspect entries: 0" in out and "  ===== " not in out


# --- applying -----------------------------------------------------------------------------------------

def test_a_rebase_moves_the_function_and_a_removal_folds_the_block_into_its_owner():
    prog, _ = scan_world()
    label(prog, 0x2a, "engine_clipper.c_FUN_0000102a")
    prog.disassembly[BASE + 0x24] = [(BASE + 0x24, Instruction("PUSH", "EBX"))]
    rows = fmf.scan(prog, options())
    rebased, removed, cleared, owners, failed = fmf.apply_rows(prog, rows)
    assert (rebased, removed, cleared, owners, failed) == (2, 1, 1, 1, [])
    fm = prog.getFunctionManager()
    assert fm.getFunctionAt(at(BASE + 0x2a)) is None and fm.getFunctionAt(at(BASE + 0x52)) is not None
    assert fm.getFunctionAt(at(BASE + 0x50)) is None and fm.getFunctionAt(at(BASE + 0x110)) is not None
    assert prog.getSymbolTable().getSymbols(at(BASE + 0x2a)) == []
    cleared = [(lo.getOffset() - BASE, hi.getOffset() - BASE) for lo, hi, _ in prog.getListing().cleared]
    # forward rebase clears from the old entry, backward from the true one; then the
    # removed body; then the owner's undecoded case
    assert cleared == [(0x50, 0x5f), (0x110, 0x11f), (0x2a, 0x3f), (0x24, 0x24)]
    assert BASE + 0x24 in prog.disassembled and prog.fixups == [BASE]


def test_case_targets_already_decoded_by_an_earlier_one_are_left():
    prog = world()
    prog.disassembly[BASE + 0x20] = [(BASE + 0x20, Instruction("NOP")), (BASE + 0x24, Instruction("NOP"))]
    fmf.redisassemble(prog, [at(BASE + 0x20), at(BASE + 0x24)])
    assert prog.disassembled == [BASE + 0x20]


def test_case_targets_outside_memory_are_not_code_to_decode():
    prog = world()
    func = function(prog, 0, size = 0x10)
    table = jump_table(prog, 0, 0x20, 0x24)
    table.flows[1].memory = False
    put(prog, 0x24, "NOP")
    assert fmf.undefined_case_targets(prog, func) == [at(BASE + 0x20)]


def test_each_failure_in_applying_is_listed_with_its_function():
    prog, _ = scan_world()
    prog.uncreatable = {BASE + 0x52}
    rows = fmf.scan(prog, options())
    fm = prog.getFunctionManager()
    keep = {at(BASE + 0x114), at(BASE + 0x2a)}
    real_remove = fm.removeFunction
    fm.removeFunction = lambda entry: entry not in keep and real_remove(entry)
    rebased, removed, _, owners, failed = fmf.apply_rows(prog, rows)
    assert (rebased, removed, owners) == (0, 0, 0)
    assert failed == [("FUN_00001050", "rebase: no function could be created at 00001052"),
                      ("FUN_00001114", "removeFunction returned False"),
                      ("engine_clipper.c_FUN_0000102a", "removeFunction returned False")]


def test_an_error_in_applying_is_caught_per_function(monkeypatch):
    prog, _ = scan_world()
    rows = fmf.scan(prog, options())

    def explode(*_args):
        raise RuntimeError("locked")
    monkeypatch.setattr(fmf.df, "clear_vacated_symbol", explode)
    _, _, _, _, failed = fmf.apply_rows(prog, rows)
    assert failed == [("FUN_00001050", "rebase: locked"), ("FUN_00001114", "rebase: locked"),
                      ("engine_clipper.c_FUN_0000102a", "locked")]


def test_an_owner_that_cannot_be_redecoded_or_fixed_up_is_a_failure(monkeypatch):
    prog, _ = scan_world()
    rows = [r for r in fmf.scan(prog, options()) if r["action"] == "REMOVE"]

    def explode(*_args):
        raise RuntimeError("busy")
    monkeypatch.setattr(fmf, "redisassemble", explode)
    monkeypatch.setattr(CreateFunctionCmd, "fixupFunctionBody", staticmethod(explode))
    assert fmf.apply_rows(prog, rows)[4] == [("FUN_00001000", "redisassemble: busy"),
                                             ("FUN_00001000", "fixupFunctionBody: busy")]


# --- the passes ---------------------------------------------------------------------------------------

def test_passes_run_until_nothing_is_left_and_then_save(capsys):
    prog, _ = scan_world()
    rows = fmf.scan(prog, options())
    assert fmf.apply_passes(prog, rows, options(show = 0)) == 0
    out = capsys.readouterr().out
    assert "  pass 1: rebased 2, removed 1, cleared 1, owners re-fixed 1" in out
    assert "=== pass 2: converged, nothing left ===" in out and "TOTAL rebased 2, removed 1, failed 0" in out
    assert prog.transactions == [["misaligned entries pass 1", True]] and prog.getDomainFile().saves == 1


def test_a_pass_that_newly_resolves_a_chain_runs_again(capsys, monkeypatch):
    prog, _ = scan_world()
    rows = fmf.scan(prog, options())
    rescans = iter([rows, rows, []])
    monkeypatch.setattr(fmf, "scan", lambda program, args: next(rescans))
    monkeypatch.setattr(fmf, "apply_rows", lambda program, rows: (1, 0, 0, 0, []))
    assert fmf.apply_passes(prog, rows, options(max_passes = 2, show = 1)) == 0
    out = capsys.readouterr().out
    assert "=== pass 2: 3 newly actionable ===\n    REMOVE  0000102a  engine_clipper.c_FUN_0000102a\n" in out
    assert "pass 3" not in out and len(prog.transactions) == 2


def test_a_failed_pass_is_rolled_back_and_only_earlier_passes_are_saved(capsys, monkeypatch):
    prog, _ = scan_world()
    rows = fmf.scan(prog, options())
    results = iter([(1, 0, 0, 0, []), (0, 0, 0, 0, [("FUN_x", "locked")])])
    monkeypatch.setattr(fmf, "scan", lambda program, args: rows)
    monkeypatch.setattr(fmf, "apply_rows", lambda program, rows: next(results))
    assert fmf.apply_passes(prog, rows, options()) == 1
    out = capsys.readouterr().out
    assert "  pass 2: failed 1; rolled back, not iterating further" in out and "  FAILED FUN_x: locked" in out
    assert [commit for _, commit in prog.transactions] == [True, False] and prog.getDomainFile().saves == 1


def test_a_first_pass_that_fails_saves_nothing(monkeypatch, capsys):
    prog, _ = scan_world()
    monkeypatch.setattr(fmf, "apply_rows", lambda program, rows: (0, 0, 0, 0, [("FUN_x", "locked")]))
    assert fmf.apply_passes(prog, [], options()) == 1
    assert prog.getDomainFile().saves == 0 and "Saved." not in capsys.readouterr().out


def test_an_error_inside_a_pass_rolls_it_back(monkeypatch):
    prog, _ = scan_world()

    def explode(program, rows):
        raise RuntimeError("boom")
    monkeypatch.setattr(fmf, "apply_rows", explode)
    with pytest.raises(RuntimeError):
        fmf.apply_passes(prog, [], options())
    assert prog.transactions == [["misaligned entries pass 1", False]]


# --- repairing jump tables ----------------------------------------------------------------------------

def broken_tables():
    prog = world()
    owner = function(prog, 0, size = 0x10)
    jump_table(prog, 0, 0x20, 0x24)
    put(prog, 0x24, "NOP")
    function(prog, 0x40, size = 0x10).thunk_target = owner
    jump_table(prog, 0x40, 0x60)
    function(prog, 0x80, size = 0x10)
    return prog, owner


def test_undecoded_case_bodies_are_redecoded_and_saved(capsys):
    prog, _ = broken_tables()
    assert fmf.repair_jumptables(prog, options(show = 0)) == 0
    out = capsys.readouterr().out
    assert "  functions affected: 1" in out and "repaired 1 function(s); failed 0" in out and "Saved." in out
    assert prog.disassembled == [BASE + 0x20] and prog.fixups == [BASE]
    assert prog.transactions == [["repair jump-table case bodies", True]] and prog.getDomainFile().saves == 1


def test_a_repair_that_fails_anywhere_keeps_nothing(capsys, monkeypatch):
    prog, _ = broken_tables()

    def explode(*_args):
        raise RuntimeError("busy")
    monkeypatch.setattr(CreateFunctionCmd, "fixupFunctionBody", staticmethod(explode))
    assert fmf.repair_jumptables(prog, options()) == 1
    out = capsys.readouterr().out
    assert "    00001000  FUN_00001000  1 undefined target(s): 00001020" in out
    assert "  FAILED FUN_00001000: busy" in out and "Rolled back; nothing saved." in out
    assert prog.transactions[0][1] is False and prog.getDomainFile().saves == 0


def test_nothing_broken_needs_no_repair(capsys):
    prog = world()
    assert fmf.repair_jumptables(prog, options()) == 0
    assert "Nothing to repair." in capsys.readouterr().out and prog.transactions == []


# --- run and main -------------------------------------------------------------------------------------

def test_run_reports_and_applies_only_when_asked(capsys):
    prog, _ = scan_world()
    assert fmf.run(prog, options()) == 0
    assert "[dry-run] re-run with --apply to fix 3 entr(ies)" in capsys.readouterr().out
    assert fmf.run(prog, options(apply = True)) == 0
    assert prog.getDomainFile().saves == 1
    assert fmf.run(world(), options(apply = True)) == 0
    assert "Nothing to apply." in capsys.readouterr().out
    assert fmf.run(world(), options(repair_jumptables = True)) == 0


def launch(monkeypatch, tmp_path, prog, *argv, snapshot_ok = True):
    calls = []
    monkeypatch.setattr(fmf.subprocess, "call", lambda cmd: calls.append(cmd) or (0 if snapshot_ok else 1))
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(fmf.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as stop:
        fmf.main([str(tmp_path), "P", "game.exe", *argv])
    return stop.value.code, fake, calls


def test_main_snapshots_before_applying_and_closes_the_project(monkeypatch, tmp_path):
    prog, _ = scan_world()
    code, fake, calls = launch(monkeypatch, tmp_path, prog, "--apply")
    assert code == 0 and fake.closed == 1 and fake.opened == [(str(tmp_path), "P"), "/game.exe"]
    assert calls[0][-3:] == ["P", "--tag", "pre-misaligned-fix"] and calls[0][-4] == str(tmp_path)


def test_main_takes_no_snapshot_for_a_report_or_when_told_not_to(monkeypatch, tmp_path):
    prog, _ = scan_world()
    assert launch(monkeypatch, tmp_path, prog)[2] == []
    assert launch(monkeypatch, tmp_path, prog, "--repair-jumptables", "--no-snapshot")[2] == []


def test_main_refuses_to_mutate_without_a_snapshot(monkeypatch, tmp_path, capsys):
    code, fake, _ = launch(monkeypatch, tmp_path, world(), "--repair-jumptables", snapshot_ok = False)
    assert code == 1 and fake.opened == [] and "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    code, fake, _ = launch(monkeypatch, tmp_path, None)
    assert code == 1 and fake.closed == 1 and "ERROR: " in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["fix_misaligned_functions.py", "--help"])
    with pytest.raises(SystemExit):
        runpy.run_path(os.path.join(SCRIPTS_DIR, "fix_misaligned_functions.py"), run_name = "__main__")
