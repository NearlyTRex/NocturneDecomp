# Imports
import json
from types import SimpleNamespace

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import pcode as pc


def varnode(space, offset, size):
    address = SimpleNamespace(getAddressSpace = lambda: SimpleNamespace(getName = lambda: space),
                              getOffset = lambda: offset)
    return SimpleNamespace(getAddress = lambda: address, getSize = lambda: size)


def op(mnemonic, *inputs, output = None):
    return SimpleNamespace(getMnemonic = lambda: mnemonic, getOutput = lambda: output,
                           getNumInputs = lambda: len(inputs), getInput = lambda i: inputs[i])


class Instruction:
    """A listing instruction from 'ADDR MNEMONIC OP1, OP2'; each p-code op formats as its text."""

    def __init__(self, line, pcode = ()):
        self.addr, _, asm = line.partition(" ")
        self.mnemonic, _, operands = asm.partition(" ")
        self.operands = operands.split(", ") if operands else []
        self.pcode = [op(text) for text in pcode] if pcode is not None else None

    def getAddress(self):
        return self.addr

    def getMnemonicString(self):
        return self.mnemonic

    def getNumOperands(self):
        return len(self.operands)

    def getDefaultOperandRepresentation(self, i):
        return self.operands[i]

    def getPcode(self):
        return self.pcode


class Instructions:
    def __init__(self, instructions):
        self.pending = list(instructions)

    def hasNext(self):
        return bool(self.pending)

    def next(self):
        return self.pending.pop(0)


def program(*instructions):
    listing = SimpleNamespace(getInstructions = lambda body, forward: Instructions(instructions))
    return SimpleNamespace(getListing = lambda: listing)


FUNC = SimpleNamespace(getBody = lambda: "body")


def extract(*lines, track_esp = True):
    instructions = [line if isinstance(line, Instruction) else Instruction(line) for line in lines]
    return pc.extract_function_pcode(program(*instructions), FUNC, track_esp)


def track(*lines, **kwargs):
    """Both passes over a listing; {address: (esp_offset, esp_certainty)}."""
    data = pc.apply_cfg_esp_tracking(extract(*lines), **kwargs)
    return {e["address"]: (e["esp_offset"], e["esp_certainty"]) for e in data}


# --- loaders ----------------------------------------------------------------------------------


def test_switch_tables_are_keyed_by_the_switch_and_skip_missing_addresses(tmp_path):
    path = tmp_path / "switch_tables.json"
    path.write_text(json.dumps({"switch_tables": [
        {"switch_addr": "0x40EA67", "targets": [{"addr": "0x40EA6E"}, {"addr": "40ea88"}, {}]},
        # A missing address used to be zero-filled into '00000000'
        {"targets": [{"addr": "401000"}]},
        {"switch_addr": "401100", "targets": [{}]},
        {"switch_addr": "401200"},
    ]}))
    assert pc.load_switch_table_data(str(path)) == {"0040ea67": ["0040ea6e", "0040ea88"]}


@pytest.mark.parametrize("text", [None, "{not json"])
def test_a_missing_or_broken_switch_table_file_has_no_switches(tmp_path, text):
    path = tmp_path / "switch_tables.json"
    if text is not None:
        path.write_text(text)
    assert pc.load_switch_table_data(str(path)) == {}


def test_noreturn_functions_come_from_every_readable_bucket(tmp_path):
    (tmp_path / "functions_bucket_00.json").write_text(json.dumps([
        {"addr": "0x506F10", "noreturn": True}, {"addr": "401000"}, {"noreturn": True}]))
    (tmp_path / "functions_bucket_01.json").write_text(json.dumps([{"addr": "5f3920", "noreturn": True}]))
    (tmp_path / "functions_bucket_02.json").write_text("[broken")
    (tmp_path / "other.json").write_text(json.dumps([{"addr": "777777", "noreturn": True}]))
    assert pc.load_noreturn_functions(str(tmp_path)) == {"00506f10", "005f3920"}


# --- formatting -------------------------------------------------------------------------------


@pytest.mark.parametrize("node, text", [
    (None, "(null)"),
    (varnode("register", 0x14, 4), "(register,0x14,4) /* EBP */"),
    (varnode("register", 0x14, 2), "(register,0x14,2)"),
    (varnode("register", 0x20, 4), "(register,0x20,4)"),
    (varnode("const", -8, 4), "(const,0xfffffff8,4)"),
    (varnode("unique", 0x1000, 4), "(unique,0x1000,4)"),
])
def test_a_varnode_is_space_offset_and_size(node, text):
    assert pc.format_varnode(node) == text


@pytest.mark.parametrize("operation, text", [
    (op("INT_ADD", varnode("register", 0x14, 4), varnode("const", 8, 4), output = varnode("unique", 0x10, 4)),
     "INT_ADD (unique,0x10,4) = (register,0x14,4) /* EBP */, (const,0x8,4)"),
    (op("STORE", varnode("const", 1, 4)), "STORE (const,0x1,4)"),
    (op("CALLOTHER", output = varnode("register", 0, 4)), "CALLOTHER (register,0x0,4) /* EAX */"),
])
def test_a_pcode_op_is_its_output_then_its_inputs(operation, text):
    assert pc.format_pcode_op(operation) == text


# --- linear ESP -------------------------------------------------------------------------------


@pytest.mark.parametrize("mnemonic, operands, result", [
    ("push", "EBX", (-4, "known")), ("RETN", "0x4", (4, "known")),
    ("SUB", "ESP, 0x20", (-0x20, "computed")), ("ADD", "esp, 12", (12, "computed")),
    ("ADD", "ESP, EAX", (0, "unknown")), ("ADD", "EAX, 0x4", (0, "unknown")), ("SUB", "", (0, "unknown")),
    ("ENTER", "0x10, 0x0", (-0x14, "computed")), ("ENTER", "EAX", (0, "unknown")), ("ENTER", "", (0, "unknown")),
    ("LEAVE", "", ("leave", "frame_restore")), ("MOV", "ESP, EBP", ("frame_reset", "frame_restore")),
    ("MOV", "EBP, ESP", (0, "unknown")), ("NOP", "", (0, "unknown")),
])
def test_each_instruction_moves_esp_by_its_known_amount(mnemonic, operands, result):
    assert pc.calculate_esp_delta(mnemonic, operands, []) == result


@pytest.mark.parametrize("mnemonic, operands, is_setup", [
    ("MOV", "EBP, ESP", True), ("mov", "ebp , esp", True), ("MOV", "ESP, EBP", False),
    ("MOV", "", False), ("LEA", "EBP, ESP", False), ("MOV", "EBP, ESP, 1", False),
])
def test_only_mov_ebp_esp_sets_up_the_frame(mnemonic, operands, is_setup):
    assert pc.is_frame_pointer_setup(mnemonic, operands) is is_setup


def test_instructions_carry_their_assembly_and_pcode():
    data = extract(Instruction("00401000 MOV EAX, 0x1", ["COPY (register,0x0,4) = (const,0x1,4)"]),
                   Instruction("00401005 NOP", None), track_esp = False)
    assert data == [
        {"address": "00401000", "assembly": "MOV EAX, 0x1",
         "pcode": ["COPY (register,0x0,4) = (const,0x1,4)"], "pcode_count": 1},
        {"address": "00401005", "assembly": "NOP", "pcode": [], "pcode_count": 0}]


def test_the_linear_pass_follows_the_frame_and_stops_at_the_first_return():
    data = extract("00401000 PUSH EBP", "00401001 MOV EBP, ESP", "00401003 SUB ESP, 0x8",
                   "00401006 CALL 0x00402000", "0040100b MOV ESP, EBP", "0040100d PUSH EAX",
                   "0040100e LEAVE", "0040100f RET", "00401010 PUSH EBX")
    assert [(e["esp_delta"], e["esp_offset"], e["esp_certainty"]) for e in data] == [
        (-4, -4, "known"), (0, -4, "unknown"), (-8, -12, "computed"),
        (-4, -12, "known"),                       # the callee's RET pops the return address
        (8, -4, "known"), (-4, -8, "known"),
        (8, 0, "known"),                          # LEAVE: back to the frame, then POP EBP
        (4, 4, "known"), (0, None, "lost")]
    assert data[4]["esp_frame_restore"] and data[6]["esp_frame_restore"]
    assert data[8]["esp_lost_at"] == "0040100f"


def test_without_a_frame_a_frame_restore_is_a_guess():
    data = extract("00401000 PUSH EBX", "00401001 MOV ESP, EBP", "00401003 LEAVE")
    assert [(e["esp_delta"], e["esp_offset"], e["esp_certainty"]) for e in data] == [
        (-4, -4, "known"), (0, -4, "computed"), (4, 0, "computed")]
    assert "esp_frame_restore" not in data[1] and "esp_frame_restore" not in data[2]


# --- .pcode file ------------------------------------------------------------------------------


def entry(address, certainty, offset = -4, delta = 0, pcode = ("COPY",)):
    return {"address": address, "assembly": "NOP", "pcode": list(pcode), "pcode_count": len(pcode),
            "esp_offset": offset, "esp_delta": delta, "esp_certainty": certainty}


def test_the_pcode_file_marks_each_certainty():
    data = [entry("1", "known", delta = -4), entry("2", "computed"), entry("3", "cfg_resolved"),
            entry("4", "conflict", offset = None), entry("5", "ebp_frame_conflict", offset = None),
            entry("6", "frame_recovered"), entry("7", "unreachable", offset = None),
            entry("8", "unknown", pcode = ()), entry("9", "lost", offset = None, delta = 2)]
    text = pc.generate_pcode_file_content("f", "00401000", "void f(void)", data, has_badspacebase = True)
    assert [line for line in text.split("\n") if line.startswith("@")] == [
        "@1 [ESP:-4](-4)  # NOP", "@2 [ESP:-4]?  # NOP", "@3 [ESP:-4]~  # NOP", "@4 [ESP:???]!?  # NOP",
        "@5 [ESP:???]~!  # NOP", "@6 [ESP:-4]~>  # NOP", "@7 [ESP:???]??  # NOP", "@8 [ESP:-4]  # NOP",
        "@9 [ESP:???](+2)!!  # NOP"]
    assert "# WARNING:     Contains BADSPACEBASE errors!" in text
    assert "# (no p-code)" in text
    assert "# Format: @<address> [ESP:offset] # <assembly>" in text
    assert text.endswith("# Summary: 9 instructions, 8 P-code ops\n"
                         "# ESP Warning: Tracking lost after instruction (marked with !!)\n# " + "=" * 76)


@pytest.mark.parametrize("data, tracking", [
    ([entry("1", "conflict")], False),
    ([{"address": "1", "assembly": "NOP", "pcode": [], "pcode_count": 0}], True),
    ([], True),
])
def test_without_esp_data_the_pcode_file_has_no_esp_column(data, tracking):
    text = pc.generate_pcode_file_content("f", "1", "sig", data, include_esp_tracking = tracking)
    assert "[ESP" not in text and "ESP Warning" not in text and "WARNING" not in text
    assert "# Format: @<address>  # <assembly>" in text


def test_the_summary_counts_ops_by_opcode():
    data = [entry("1", "known", pcode = ("COPY a", "INT_ADD b", "")), entry("2", "known", pcode = ("COPY c",))]
    assert pc.create_pcode_summary(data) == {
        "instruction_count": 2, "pcode_op_count": 4, "avg_pcode_per_instr": 2.0,
        "opcode_distribution": {"COPY": 2, "INT_ADD": 1, "UNKNOWN": 1}}
    assert pc.create_pcode_summary([])["avg_pcode_per_instr"] == 0


# --- CFG helpers ------------------------------------------------------------------------------


@pytest.mark.parametrize("assembly, target", [
    ("JZ 0x005447B9", "005447b9"), ("JMP 431a18", "00431a18"), ("CALL 0x00402000", "00402000"),
    ("JMP EAX", None), ("CALL dword ptr [EDX + 0x8]", None), ("MOV EAX, 0x1", None),
])
def test_a_jump_or_call_target_is_its_hex_operand(assembly, target):
    assert pc._parse_jump_target(assembly) == target


@pytest.mark.parametrize("mnemonic, kinds", [
    ("JZ", (True, False, False, False)), ("JMP", (False, True, False, False)),
    ("RETN", (False, False, True, False)), ("CALL", (False, False, False, True)),
    ("MOV", (False, False, False, False)),
])
def test_control_flow_mnemonics(mnemonic, kinds):
    assert (pc._is_conditional_branch(mnemonic), pc._is_unconditional_jump(mnemonic),
            pc._is_return(mnemonic), pc._is_call(mnemonic)) == kinds


CONVENTIONS = {"joyGetPosEx": {"convention": "__stdcall", "param_bytes": 8},
               "cdeclFunc": {"convention": "__cdecl", "param_bytes": 8},
               "noConvention": {"param_bytes": 8}}
GLOBALS = [{"addr": "03f994f0"}, {"addr": "0x03F994F4", "type": "joyGetPosEx *"},
           {"addr": "00611408", "type": "cdeclFunc*"}, {"addr": "00611410", "type": "unknownFunc*"},
           {"addr": "00611414", "type": "noConvention*"}, {"addr": "00611418", "type": ""}]


@pytest.mark.parametrize("assembly, cleanup", [
    ("CALL dword ptr [0x03f994f4]", 8), ("CALL dword ptr CS:[0x3F994F4]", 8),
    ("CALL dword ptr [0x611408]", 0), ("CALL dword ptr [0x611410]", 0), ("CALL dword ptr [0x611414]", 0),
    ("CALL dword ptr [0x611418]", 0), ("CALL dword ptr [0x611500]", 0), ("CALL EAX", 0),
])
def test_an_indirect_call_through_a_stdcall_pointer_cleans_up_its_parameters(assembly, cleanup):
    assert pc._get_callind_cleanup(assembly, CONVENTIONS, GLOBALS) == cleanup


@pytest.mark.parametrize("conventions, globals_list", [(None, GLOBALS), (CONVENTIONS, None), ({}, [])])
def test_without_conventions_or_globals_no_cleanup_is_known(conventions, globals_list):
    assert pc._get_callind_cleanup("CALL dword ptr [0x03f994f4]", conventions, globals_list) == 0


# --- CFG pass ---------------------------------------------------------------------------------


def test_no_instructions_is_nothing_to_track():
    assert pc.apply_cfg_esp_tracking([]) == []


def test_a_block_after_the_first_return_counts_its_own_pushes():
    # The linear pass stops at the RET; the push in the 0x401010 block used to
    # count 0, so the JMP carried -8 into the merge at 0x401020 instead of -12.
    esp = track("00401000 PUSH EBX", "00401001 PUSH ESI", "00401002 JNZ 0x00401010",
                "00401004 POP ESI", "00401005 POP EBX", "00401006 RET",
                "00401010 PUSH EDI", "00401011 JMP 0x00401020",
                "00401016 RET",
                "00401020 MOV EAX, 0x1", "00401025 POP EDI", "00401026 POP ESI", "00401027 POP EBX",
                "00401028 RET")
    assert esp["00401010"] == (-12, "cfg_resolved")
    assert esp["00401020"] == (-12, "cfg_resolved")
    assert esp["00401028"] == (4, "cfg_resolved")
    assert esp["00401016"] == (None, "unreachable")


def test_a_block_carries_its_pushes_after_a_frame_reset():
    # The block's exit used to be the reset's value alone, dropping the PUSH
    # after it: -4 against the other path's -8 made the POP a conflict
    esp = track("00401000 PUSH EBP", "00401001 MOV EBP, ESP", "00401003 SUB ESP, 0x10",
                "00401006 JZ 0x00401010",
                "00401008 MOV ESP, EBP", "0040100a PUSH EAX", "0040100b JMP 0x00401020",
                "00401010 ADD ESP, 0xc", "00401013 JMP 0x00401020",
                "00401020 POP EAX", "00401021 RET")
    assert esp["00401020"] == (-4, "cfg_resolved")
    assert esp["0040100a"] == (-8, "known")


def test_a_conflict_recovers_at_a_leave_anywhere_in_the_function():
    # Two paths reach 0x401020 with different ESP. The LEAVE in that block is
    # after the first RET, where the linear pass had no frame restore to recover
    # at; recovering, a LEAVE leaves ESP 4 above the frame, not at it.
    esp = track("00401000 PUSH EBP", "00401001 MOV EBP, ESP", "00401003 JZ 0x00401010",
                "00401005 PUSH EAX", "00401006 JMP 0x00401020",
                "0040100b LEAVE", "0040100c RET",
                "00401010 JMP 0x00401020",
                "00401020 PUSH EBX", "00401021 CALL 0x00402000", "00401026 LEAVE", "00401027 PUSH ECX",
                "00401028 RET")
    assert esp["00401020"] == (None, "ebp_frame_conflict")
    assert esp["00401021"] == (None, "ebp_frame_conflict")
    assert esp["00401026"] == (0, "frame_recovered")
    assert esp["00401027"] == (-4, "frame_recovered")
    assert esp["0040100b"] == (None, "unreachable")


def test_a_conflict_without_a_frame_stays_unknown_and_spreads_to_unreached_blocks():
    esp = track("00401000 PUSH EBX", "00401001 JZ 0x00401010",
                "00401003 PUSH EAX", "00401004 JMP 0x00401010",
                "00401009 RET",
                "00401010 MOV ESP, EBP", "00401012 JMP 0x00401020",
                "00401017 RET",
                "00401020 LEAVE", "00401021 RET")
    assert esp["00401010"] == (None, "conflict")
    assert esp["00401012"] == (None, "conflict")
    assert esp["00401020"] == (None, "conflict")
    assert esp["00401021"] == (None, "conflict")


def test_a_conflict_does_not_overwrite_a_block_a_known_path_reached():
    # 0x401030 is reached at -4 from the entry and from the conflict block 0x401020
    esp = track("00401000 PUSH EBX", "00401001 JZ 0x00401030", "00401003 JNZ 0x00401010",
                "00401005 PUSH EAX", "00401006 JMP 0x00401020",
                "00401010 JMP 0x00401020",
                "00401020 JMP 0x00401030",
                "00401030 POP EBX", "00401031 RET")
    assert esp["00401020"] == (None, "conflict")
    assert esp["00401030"] == (0, "cfg_resolved")


def test_switch_cases_are_blocks_reached_from_the_indirect_jump():
    # The case at 0x401009 sits mid-way through straight-line code. It used to
    # stay inside the 0x401006 block, so only the fall-through's -8 reached it,
    # not the jump table's -4: the two disagree, which is a conflict.
    lines = [Instruction("00401000 PUSH EBX"), Instruction("00401001 JMP EAX", ["BRANCHIND (register,0x0,4)"]),
             Instruction("00401006 PUSH ESI"), Instruction("00401007 NOP"),
             Instruction("00401009 POP EBX"), Instruction("0040100a RET")]
    esp = track(*lines, switch_targets = {"00401001": ["00401009", "00401006", "00402000"]})
    assert esp["00401006"] == (-8, "cfg_resolved")
    assert esp["00401009"] == (None, "conflict")
    assert track(*lines)["00401006"] == (None, "unreachable")
    # Only an indirect jump uses a jump table
    assert track(*lines[:1], Instruction("00401001 RET"), *lines[2:],
                 switch_targets = {"00401001": ["00401006"]})["00401006"] == (None, "unreachable")


def test_a_call_that_never_returns_does_not_fall_through():
    lines = ["00401000 PUSH EBX", "00401001 JZ 0x00401010", "00401003 PUSH EAX", "00401004 CALL 0x00506f10",
             "00401010 POP EBX", "00401011 RET"]
    assert track(*lines, noreturn_addrs = {"00506f10"})["00401010"] == (0, "known")
    assert track(*lines)["00401010"] == (None, "conflict")


def test_a_loop_back_to_its_own_block_is_not_a_conflict():
    esp = track("00401000 PUSH EBX", "00401001 JZ 0x00401010", "00401003 RET",
                "00401010 PUSH EAX", "00401011 JNZ 0x00401010", "00401013 POP EBX", "00401014 RET")
    assert esp["00401010"] == (-8, "cfg_resolved")
    assert esp["00401013"] == (-4, "cfg_resolved")


def test_a_stdcall_pointer_call_cleans_up_in_the_cfg_pass():
    esp = track("00401000 JMP 0x00401010", "00401005 RET",
                "00401010 PUSH EAX", "00401011 PUSH EAX", "00401012 CALL dword ptr [0x03f994f4]",
                "00401018 RET",
                func_conventions = CONVENTIONS, func_globals = GLOBALS)
    assert esp["00401012"] == (0, "cfg_resolved")


def test_a_frame_reset_in_a_lost_block_without_a_frame_keeps_esp():
    data = pc.apply_cfg_esp_tracking(extract("00401000 JMP 0x00401010", "00401005 RET",
                                             "00401010 PUSH EAX", "00401011 MOV ESP, EBP", "00401013 LEAVE",
                                             "00401014 RET"))
    assert [(e["esp_delta"], e["esp_offset"]) for e in data[2:]] == [(-4, -4), (0, -4), (4, 0), (4, 4)]


def test_a_frame_reset_in_a_lost_block_shows_the_change_it_made():
    data = pc.apply_cfg_esp_tracking(extract("00401000 PUSH EBP", "00401001 MOV EBP, ESP",
                                             "00401003 JMP 0x00401010", "00401008 RET",
                                             "00401010 PUSH EAX", "00401011 PUSH EAX", "00401012 MOV ESP, EBP",
                                             "00401014 POP EBP", "00401015 RET"))
    assert [(e["esp_delta"], e["esp_offset"]) for e in data[4:]] == [(-4, -8), (-4, -12), (8, -4), (4, 0), (4, 4)]


def test_an_ebp_frame_set_up_late_is_not_an_ebp_frame_function():
    nops = [f"004010{i:02x} NOP" for i in range(0x10, 0x24)]
    esp = track("00401000 PUSH EBX", "00401001 JZ 0x00401040", "00401003 PUSH EAX", "00401004 JMP 0x00401040",
                *nops, "00401030 MOV EBP, ESP", "00401032 RET",
                "00401040 POP EBX", "00401041 RET")
    assert esp["00401040"] == (None, "conflict")
