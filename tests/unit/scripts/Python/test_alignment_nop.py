# Third-party imports
import pytest

# Local imports
from alignment_nop import is_alignment_nop
from ghidra_program import Instruction


@pytest.mark.parametrize("instruction, padding", [
    (Instruction("NOP"), True),
    (Instruction("nop"), True),
    (Instruction("MOV", "EAX", "EAX"), True),
    (Instruction("mov", "eax", "eax"), True),
    (Instruction("XCHG", "AX", "AX"), True),
    (Instruction("LEA", "EAX", "[EAX]"), True),
    (Instruction("LEA", "EDX", "[EDX + 0x0]"), True),
    (Instruction("MOV", "EAX", "EBX"), False),
    (Instruction("XCHG", "EAX", "EBX"), False),
    (Instruction("LEA", "EAX", "[EBX]"), False),
    (Instruction("LEA", "EAX", "[EAX + 0x4]"), False),
    (Instruction("PUSH", "EDX"), False),
    (Instruction("MOV", "EAX"), False),
    (Instruction("LEA", "EAX", "[EAX]", "EAX"), False),
])
def test_padding_is_nop_or_a_register_moved_onto_itself(instruction, padding):
    assert is_alignment_nop(instruction) is padding
