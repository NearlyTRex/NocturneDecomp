# Imports
import importlib

# Third-party imports
import pytest

# Local imports
from boundary_program import (BASE, BoundaryProgram, Pseudo, anchored, at, decode, decode_run, function, gapped, lea,
                              padded, padding_then_code, put)
from ghidra_fake import AddressSet
from ghidra_program import Instruction
import fix_function_boundaries as ffb


# --- small helpers ------------------------------------------------------------------------------

def test_references_count_every_type_except_from_the_excluded_body():
    program = BoundaryProgram()
    refs = program.getReferenceManager()
    refs.add(BASE + 0x40, BASE, call = True)
    refs.add(BASE + 0x50, BASE, kind = "DATA")
    refs.add(BASE + 4, BASE, kind = "JUMP")
    assert ffb._external_ref_count_to(program, at(BASE)) == (3, {"UNCONDITIONAL_CALL": 1, "DATA": 1, "JUMP": 1})
    assert ffb._external_ref_count_to(program, at(BASE), AddressSet(at(BASE), at(BASE + 8))) == \
        (2, {"UNCONDITIONAL_CALL": 1, "DATA": 1})


def test_counting_references_stops_past_64():
    program = BoundaryProgram()
    for i in range(70):
        program.getReferenceManager().add(BASE + 0x100 + i, BASE)
    assert ffb._ref_count_to(program, at(BASE)) == 65


def test_the_byte_before_the_bottom_of_the_space_is_none():
    assert ffb._before(at(0)) is None
    assert ffb._before(at(5)) == at(4)


def test_fall_through_offset_is_none_for_an_instruction_that_does_not_fall_through():
    program = BoundaryProgram()
    assert ffb._ft_offset(put(program, 0, "RET", falls = False)) is None
    assert ffb._ft_offset(put(program, 1, "PUSH", "EAX")) == BASE + 2


# --- what falls into an address -----------------------------------------------------------------

def test_a_loop_closing_jump_falls_through_its_padding_into_the_address():
    program = BoundaryProgram()
    put(program, 0, "JL", "0x0", length = 2)
    put(program, 2, *lea("EAX"), length = 6)
    assert ffb._falls_into(program.getListing(), at(BASE + 8))


def test_a_ret_before_the_padding_falls_into_nothing():
    program = BoundaryProgram()
    put(program, 0, "RET", falls = False)
    put(program, 1, "MOV", "ECX", "ECX", length = 2)
    assert not ffb._falls_into(program.getListing(), at(BASE + 3))


def test_nothing_falls_in_from_undefined_bytes_or_the_bottom_of_the_space():
    program = BoundaryProgram()
    assert not ffb._falls_into(program.getListing(), at(BASE))
    assert not ffb._falls_into(program.getListing(), at(0))


def test_a_padding_run_longer_than_the_walk_falls_into_nothing():
    program = BoundaryProgram()
    for offset in range(ffb.MAX_CHAIN):
        put(program, offset, "NOP")
    assert not ffb._falls_into(program.getListing(), at(BASE + ffb.MAX_CHAIN))


# --- ENTRY_EARLY --------------------------------------------------------------------------------

def early(program, func):
    return ffb._detect_entry_early(program, func, program.getListing())


def test_an_entry_on_padding_moves_to_the_aligned_code_after_it():
    program, func = padded()
    program.getReferenceManager().add(BASE + 0x80, BASE + 0x10, call = True)
    assert early(program, func) == (at(BASE + 0x10), 1, False)


def test_an_entry_on_padding_after_a_loop_jump_joins_the_code_before_it():
    program, func = padded(before = ("JL", "0x0"))
    assert early(program, func) == (at(BASE + 0x10), 0, True)


def test_a_run_of_eight_one_byte_nops_is_walked_to_its_end():
    program = BoundaryProgram()
    for offset in range(8, 16):
        put(program, offset, "NOP")
    put(program, 16, "PUSH", "EBX")
    assert early(program, function(program, 8, size = 9)) == (at(BASE + 16), 0, False)


@pytest.mark.parametrize("entry_offset, padding, size, referenced", [
    (0x10, (("MOV", "ECX", "ECX", 2),), 4, False),      # already aligned
    (0x0e, (), 4, False),                               # real code at the entry
    (0x0e, (("MOV", "ECX", "ECX", 1),), 4, False),      # the run ends unaligned
    (0x0e, (("MOV", "ECX", "ECX", 2),), 2, False),      # the run is the whole body
    (0x0e, (("MOV", "ECX", "ECX", 2),), 4, True),       # the entry is referenced
])
def test_entries_that_are_not_padding_before_aligned_code_stay(entry_offset, padding, size, referenced):
    program, func = padded(padding = padding, size = size)
    if entry_offset != 0x0e:
        program.getFunctionManager().functions.pop(func.entry)
        func = function(program, entry_offset, size)
    if referenced:
        program.getReferenceManager().add(BASE + 0x80, BASE + entry_offset, call = True)
    assert early(program, func) is None


def test_an_entry_holding_no_instruction_stays():
    program = BoundaryProgram()
    assert early(program, function(program, 0x0e, size = 4)) is None


# --- ENTRY_MISALIGNED ---------------------------------------------------------------------------

def misaligned(program, func, pseudo = True):
    fm = program.getFunctionManager()
    return ffb._detect_entry_misaligned(program, func, program.getListing(), fm,
                                        Pseudo(program) if pseudo else None)


def test_an_entry_inside_padding_moves_forward_past_it():
    program = anchored()
    padding_then_code(program)
    program.getReferenceManager().add(BASE + 0x80, BASE + 0x20, call = True)
    assert misaligned(program, function(program, 0x1d)) == (at(BASE + 0x20), 1, "forward", False)


def test_a_forward_move_after_a_falling_instruction_joins_it():
    program = anchored(last = ("JNZ", "0x0"), falls = True)
    padding_then_code(program)
    assert misaligned(program, function(program, 0x1d))[3] is True


def test_an_entry_inside_the_first_instruction_moves_back_to_it():
    program = anchored()
    padding_then_code(program)
    decode(program, 0x20, "MOV", "EAX", "[ESP + 0x4]", length = 4)
    assert misaligned(program, function(program, 0x22)) == (at(BASE + 0x20), 0, "back", False)


def test_a_back_move_after_a_falling_swept_instruction_joins_it():
    program = anchored()
    decode_run(program, 0x10, 0x20, "PUSH", "EAX")
    decode(program, 0x20, "MOV", "EAX", "[ESP + 0x4]", length = 4)
    decode_run(program, 0x24, 0x60)
    assert misaligned(program, function(program, 0x22)) == (at(BASE + 0x20), 0, "back", True)


def test_a_back_move_with_no_aligned_start_in_reach_stays():
    program = BoundaryProgram()
    function(program, 0, size = 0x11)
    decode(program, 0x11, "MOV", "EAX", "EBX", length = 4)
    decode(program, 0x15, "MOV", "EAX", "[ESP + 0x4]", length = 4)
    decode_run(program, 0x19, 0x60)
    assert misaligned(program, function(program, 0x16)) is None


def test_padding_that_runs_past_the_sweep_stays():
    program = anchored()
    for offset in range(0x10, 0x60, 2):
        decode(program, offset, "MOV", "ECX", "ECX", length = 2)
    assert misaligned(program, function(program, 0x1f)) is None


def test_a_forward_move_onto_unaligned_code_stays():
    program = anchored()
    decode(program, 0x10, *lea("EAX"), length = 0x0e)
    decode_run(program, 0x1e, 0x60)
    assert misaligned(program, function(program, 0x11)) is None


def test_a_referenced_misaligned_entry_stays():
    program = anchored()
    padding_then_code(program)
    program.getReferenceManager().add(BASE + 0x80, BASE + 0x1d, call = True)
    assert misaligned(program, function(program, 0x1d)) is None


def test_an_entry_that_is_an_instruction_start_stays_even_past_the_step_limit():
    program = BoundaryProgram()
    function(program, 0, size = 0x18)
    decode_run(program, 0x18, 0xa0)
    assert misaligned(program, function(program, 0x41)) is None


def test_the_sweep_gives_up_on_bytes_it_cannot_decode():
    program = anchored()
    program.pseudo[BASE + 0x10] = "raise"
    assert misaligned(program, function(program, 0x1d)) is None
    program.pseudo.clear()
    assert misaligned(program, function(program, 0x1d)) is None


@pytest.mark.parametrize("entry_offset, pseudo", [(0x20, True), (0x1d, False)])
def test_aligned_entries_and_a_missing_disassembler_stay(entry_offset, pseudo):
    program = anchored()
    padding_then_code(program)
    assert misaligned(program, function(program, entry_offset), pseudo) is None


def test_a_function_with_nothing_or_an_external_before_it_stays():
    program = BoundaryProgram()
    padding_then_code(program)
    func = function(program, 0x1d)
    assert misaligned(program, func) is None
    function(program, 0, size = 0x10).external = True
    assert misaligned(program, func) is None


def test_overlapping_far_away_or_unreadable_neighbours_stay(monkeypatch):
    program = BoundaryProgram()
    padding_then_code(program)
    func = function(program, 0x1d)
    neighbour = function(program, 0, size = 0x20)
    assert misaligned(program, func) is None
    neighbour.body = AddressSet(at(BASE), at(BASE + 0x0f))
    monkeypatch.setattr(neighbour, "getBody", lambda: None)
    assert misaligned(program, func) is None

    far = anchored()
    decode_run(far, 0x10, 0xa0)
    assert misaligned(far, function(far, 0x10 + ffb.MAX_SWEEP + 1)) is None


def test_a_function_list_that_cannot_be_walked_stays(monkeypatch):
    program = anchored()
    padding_then_code(program)
    func = function(program, 0x1d)

    def refuse(*_args):
        raise RuntimeError("no iterator")

    monkeypatch.setattr(program.getFunctionManager(), "getFunctions", refuse)
    assert misaligned(program, func) is None


# --- OVERLAP ------------------------------------------------------------------------------------

def overlap(program, func, vtable_targets = frozenset()):
    return ffb._detect_overlap(program, func, program.getListing(), program.getFunctionManager(),
                               vtable_targets)


def test_an_entry_after_a_gap_the_function_before_flows_into_is_an_overlap():
    program, victim, func = gapped()
    assert overlap(program, func) == {"victim": victim, "gap_start": at(BASE + 8)}


@pytest.mark.parametrize("change", ["ret", "vtable", "referenced"])
def test_a_gap_after_a_return_or_a_called_entry_is_no_overlap(change):
    program, _, func = gapped(falls = change != "ret")
    if change == "referenced":
        program.getReferenceManager().add(BASE + 0x80, BASE + 0x0c, call = True)
    assert overlap(program, func, {BASE + 0x0c} if change == "vtable" else frozenset()) is None


def test_data_before_or_inside_the_gap_is_no_overlap():
    program, _, func = gapped()
    program.getListing().add_data(BASE + 0x0b, None)
    assert overlap(program, func) is None
    program.getListing().data.clear()
    program.getListing().add_data(BASE + 0x09, None)
    assert overlap(program, func) is None


def test_a_gap_down_to_the_bottom_of_the_space_is_no_overlap():
    program = BoundaryProgram()
    func = program.getFunctionManager().add("FUN_3", 3)
    assert overlap(program, func) is None


def test_a_gap_longer_than_the_walk_or_after_unowned_code_is_no_overlap():
    program = BoundaryProgram()
    assert overlap(program, function(program, 0x100)) is None
    put(program, 0, "MOV", "EAX", "EBX", length = 4)
    assert overlap(program, function(program, 0x0c)) is None


def test_a_function_flowing_into_its_own_entry_is_no_overlap():
    program = BoundaryProgram()
    func = function(program, 0x0c)
    func.body.add(at(BASE + 4), at(BASE + 7))
    put(program, 4, "MOV", "EAX", "EBX", length = 4)
    assert overlap(program, func) is None


# --- detect -------------------------------------------------------------------------------------

def found(program, vtable_targets = frozenset()):
    return [(f["kind"], f["entry"].getOffset() - BASE, f["correct"].getOffset() - BASE)
            for f in ffb.detect(program, vtable_targets)]


def test_detect_reports_a_misaligned_entry_with_its_note():
    program = anchored()
    padding_then_code(program)
    function(program, 0x1d)
    assert [(f["kind"], f["note"]) for f in ffb.detect(program)] == [
        ("ENTRY_MISALIGNED", "entry is mid-instruction; true start lies forward (0 ref(s) to corrected entry)")]


def test_detect_notes_an_entry_that_joins_the_code_before_it():
    program, _ = padded(before = ("JL", "0x0"))
    early_finding = ffb.detect(program)[0]
    assert early_finding["kind"] == "ENTRY_EARLY" and early_finding["joins"]
    assert early_finding["note"] == "0 ref(s) to corrected entry" + ffb.JOIN_NOTE

    program = anchored(last = ("JNZ", "0x0"), falls = True)
    padding_then_code(program)
    function(program, 0x1d)
    assert ffb.detect(program)[-1]["note"].endswith(ffb.JOIN_NOTE)


def test_detect_without_a_disassembler_warns_and_skips_thunks_externals_and_the_bottom(monkeypatch, capsys):
    def refuse(_program):
        raise RuntimeError("no pseudo")

    monkeypatch.setattr(importlib.import_module("ghidra.app.util"), "PseudoDisassembler", refuse)
    program = BoundaryProgram()
    program.getFunctionManager().add("FUN_0", 0)
    function(program, 0x20).external = True
    function(program, 0x30).thunk_target = function(program, 0x40)
    assert ffb.detect(program) == []
    assert "WARN: PseudoDisassembler unavailable - ENTRY_MISALIGNED disabled" in capsys.readouterr().out


def test_detect_finds_overlaps_and_passes_clean_gaps():
    program, _, _ = gapped()
    assert found(program) == [("OVERLAP", 0x0c, 0)]
    program, _, _ = gapped(falls = False)
    assert found(program) == []


def test_a_function_falling_into_another_with_no_outside_references_is_a_split():
    program = BoundaryProgram()
    function(program, 0, size = 0x10)
    put(program, 0x0c, "PUSH", "EAX", length = 4)
    function(program, 0x10)
    program.getReferenceManager().add(BASE + 4, BASE + 0x10, kind = "JUMP")
    assert [(f["kind"], f["spans"], f["note"]) for f in ffb.detect(program)] == \
        [("SPLIT", False, "no external refs; A fallthrough only")]


def test_a_split_around_which_the_other_function_continues_is_fragmented():
    program = BoundaryProgram()
    a = function(program, 0, size = 0x10)
    a.body.add(at(BASE + 0x20), at(BASE + 0x2f))
    put(program, 0x0c, "PUSH", "EAX", length = 4)
    function(program, 0x10)
    assert ffb.detect(program)[0]["note"] == "no external refs; A fragmented around B"


@pytest.mark.parametrize("veto", ["vtable", "called", "returns", "own body"])
def test_vtable_slots_called_entries_returns_and_own_bodies_are_no_split(veto):
    program = BoundaryProgram()
    function(program, 0, size = 0x10)
    put(program, 0x0c, "PUSH", "EAX", length = 4, falls = veto != "returns")
    func = function(program, 0x10)
    if veto == "called":
        program.getReferenceManager().add(BASE + 0x80, BASE + 0x10, call = True)
    if veto == "own body":
        program.getFunctionManager().functions.pop(at(BASE))
        func.body.add(at(BASE), at(BASE + 0x0f))
    assert found(program, {BASE + 0x10} if veto == "vtable" else frozenset()) == []


def test_an_orphan_prologue_moves_the_entry_back_to_where_its_chain_starts():
    program = BoundaryProgram()
    put(program, 0, "RET", falls = False)
    put(program, 1, "MOV", "ECX", "ECX", length = 2)
    put(program, 3, "PUSH", "EBX")
    put(program, 4, "SUB", "ESP", "0x8", length = 3)
    function(program, 7)
    assert found(program) == [("ENTRY_LATE", 7, 3)]


@pytest.mark.parametrize("stop", ["undefined", "owned", "returns"])
def test_the_prologue_walk_stops_at_any_boundary(stop):
    program = BoundaryProgram()
    if stop == "owned":
        function(program, 0, size = 3)
    if stop in ("owned", "returns"):
        put(program, 0, "MOV", "EAX", "EBX", length = 3, falls = stop == "owned")
    put(program, 3, "PUSH", "EBX")
    function(program, 4)
    assert found(program) == [("ENTRY_LATE", 4, 3)]


def test_the_prologue_walk_stops_at_the_bottom_of_the_space():
    program = BoundaryProgram()
    program.getListing().add_instruction(0, Instruction("PUSH", "EBX", fallthrough = at(1)))
    program.getFunctionManager().add("FUN_1", 1)
    assert found(program) == [("ENTRY_LATE", 1 - BASE, -BASE)]


def test_the_prologue_walk_stops_after_its_step_limit():
    program = BoundaryProgram()
    for offset in range(ffb.MAX_CHAIN + 4):
        put(program, offset, "PUSH", "EBX")
    function(program, ffb.MAX_CHAIN + 4)
    assert found(program) == [("ENTRY_LATE", ffb.MAX_CHAIN + 4, 4)]


def test_orphan_padding_before_an_entry_is_a_boundary():
    program = BoundaryProgram()
    put(program, 0x0e, "MOV", "ECX", "ECX", length = 2)
    function(program, 0x10)
    assert found(program) == []
