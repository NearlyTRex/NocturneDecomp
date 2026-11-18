# Local imports
from ghidra_annotations.annotations.pseudocode import stack_patterns as sp
from ghidra_program import Instruction, Program

INSTRUCTIONS = [
    ("AND", "ESP", "0xfffffff8"), ("AND", "ESP", "-0x10"), ("AND", "ESP", "0xff"), ("AND", "ESP", "EAX"),
    ("AND", "ESP", "0xzz"), ("AND", "EAX", "0xfffffff8"),
    ("SUB", "ESP", "eax"), ("SUB", "ESP", "0x10"),
    ("MOV", "EDI", "ESP"), ("MOV", "EBP", "ESP"),
    ("ADD", "ESP", "ECX"), ("ADD", "ESP", "0x8"),
    ("XCHG", "EAX", "ESP"), ("XCHG", "ESP", "EBX"), ("XCHG", "EAX", "EBX"),
    ("PUSHFD",), ("POP", "ESP"), ("POP", "EBP"), ("RET",),
]


def program_with(instructions):
    program = Program()
    func = program.getFunctionManager().add("f", 0x1000, size = len(instructions))
    for offset, (mnemonic, *ops) in enumerate(instructions):
        program.getListing().add_instruction(0x1000 + offset, Instruction(mnemonic, *ops))
    return program, func


def test_each_stack_pattern_is_found_with_its_description():
    program, func = program_with(INSTRUCTIONS)
    found = sp.detect_stack_patterns_from_listing(program.getListing(), func)
    assert [(p["address"], p["pattern_id"], p["description"]) for p in found] == [
        ("00001000", "stack_alignment", "Stack alignment (AND ESP, 0xfffffff8)"),
        ("00001001", "stack_alignment", "Stack alignment (AND ESP, -0x10)"),
        ("00001006", "dynamic_alloca", "Dynamic stack allocation (SUB ESP, EAX)"),
        ("00001008", "alt_frame_pointer", "Alternative frame pointer (EDI = ESP)"),
        ("0000100a", "dynamic_esp_restore", "Dynamic ESP restoration (ADD ESP, ECX)"),
        ("0000100c", "stack_pivot", "Stack pivot (XCHG ESP, EAX)"),
        ("0000100d", "stack_pivot", "Stack pivot (XCHG ESP, EBX)"),
        ("0000100f", "pushf", "PUSHF instruction"),
        ("00001010", "pop_esp", "POP into ESP"),
    ]
    assert found[0]["instruction"] == "AND ESP,0xfffffff8" and found[0]["impact"] == sp.IMPACT["stack_alignment"]


def test_the_summary_takes_the_worst_severity():
    assert sp.summarize_stack_patterns([]) is None
    low = [{"pattern_id": "pushf", "address": "2"}, {"pattern_id": "pushf", "address": "1"}]
    summary = sp.summarize_stack_patterns(low)
    assert summary["severity"] == "low" and [p["address"] for p in summary["patterns"]] == ["1", "2"]
    assert sp.summarize_stack_patterns(low + [{"pattern_id": "stack_alignment"}])["severity"] == "medium"
    high = sp.summarize_stack_patterns([{"pattern_id": "pop_esp"}, {"pattern_id": "stack_alignment"}])
    assert high["severity"] == "high" and high["pattern_types"] == ["pop_esp", "stack_alignment"]
    assert high["pattern_count"] == 2
