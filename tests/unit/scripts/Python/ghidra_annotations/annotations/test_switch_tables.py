# Local imports
from ghidra_program import FlowType, Instruction, Program
from ghidra_annotations.annotations.switch_tables import export_switch_tables
from ghidra_annotations.util import load_json_file


def test_computed_jumps_with_flow_targets_are_switch_tables(tmp_path, capsys):
    program = Program()
    program.getFunctionManager().add("dispatch", 0x401000, size = 0x40)
    program.getFunctionManager().add("other", 0x402000, size = 0x10)
    listing, refs = program.getListing(), program.getReferenceManager()
    listing.add_instruction(0x401010, Instruction("JMP", "dword ptr [EAX*0x4 + 0x401100]",
        flow = FlowType(computed = True, jump = True)))
    for target in (0x401030, 0x401020):
        refs.add(0x401010, target, kind = "COMPUTED_JUMP")
    refs.add(0x401010, 0x401100)
    # A computed call, a plain jump, and a computed jump with no flow targets are not switches
    listing.add_instruction(0x401018, Instruction("CALL", "EAX", flow = FlowType(computed = True)))
    listing.add_instruction(0x401020, Instruction("JMP", "0x401030", flow = FlowType(jump = True)))
    listing.add_instruction(0x402000, Instruction("JMP", "EAX", flow = FlowType(computed = True, jump = True)))
    refs.add(0x401018, 0x403000, call = True)
    export_switch_tables(program, str(tmp_path))
    assert load_json_file(str(tmp_path), "switch_tables") == {"count": 1, "total_targets": 2, "switch_tables": [{
        "switch_addr": "00401010", "function_addr": "00401000", "function_name": "dispatch",
        "assembly": "JMP dword ptr [EAX*0x4 + 0x401100]", "target_count": 2, "targets": [
            {"addr": "00401020", "ref_type": "COMPUTED_JUMP"}, {"addr": "00401030", "ref_type": "COMPUTED_JUMP"}]}]}
    assert "00401010: 2 targets in dispatch" in capsys.readouterr().out


def test_no_switches_still_writes_the_counts(tmp_path, capsys):
    export_switch_tables(Program(), str(tmp_path))
    assert load_json_file(str(tmp_path), "switch_tables") == {"count": 0, "total_targets": 0}
    assert "SUMMARY" not in capsys.readouterr().out
