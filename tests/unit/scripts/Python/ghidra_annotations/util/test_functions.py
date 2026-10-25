# Third-party imports
import pytest

# Local imports
from ghidra_program import Address, Instruction, Program, Symbol
from ghidra_annotations.util.functions import get_function_name, is_function_address, is_likely_function_prologue

ENTRY = 0x401000


def program_with_code(execute = True):
    program = Program()
    program.getMemory().add_block(".text", ENTRY, bytes(0x100), execute = execute)
    return program


def test_nothing_outside_memory_is_a_function():
    assert is_function_address(program_with_code(), None) is False
    assert is_function_address(program_with_code(), Address(0x10)) is False


def test_a_defined_function_is_one():
    program = program_with_code()
    program.getFunctionManager().add("f", ENTRY)
    assert is_function_address(program, Address(ENTRY)) is True


def test_a_call_target_is_one():
    program = program_with_code()
    program.getReferenceManager().add(0x401080, ENTRY, call = False)
    program.getReferenceManager().add(0x401090, ENTRY, call = True)
    assert is_function_address(program, Address(ENTRY)) is True


def test_a_prologue_in_executable_memory_is_one():
    program = program_with_code()
    program.getReferenceManager().add(0x401080, ENTRY, call = False)
    program.getListing().instructions[Address(ENTRY)] = Instruction("PUSH", "EBP")
    assert is_function_address(program, Address(ENTRY)) is True


@pytest.mark.parametrize("execute, instruction", [
    (True, None),
    (False, Instruction("PUSH", "EBP")),
    (True, Instruction("NOP")),
])
def test_anything_else_is_not(execute, instruction):
    program = program_with_code(execute)
    if instruction:
        program.getListing().instructions[Address(ENTRY)] = instruction
    assert is_function_address(program, Address(ENTRY)) is False


@pytest.mark.parametrize("instruction, prologue", [
    (None, False),
    (Instruction("PUSH", "EBP"), True),
    (Instruction("push", "RBP"), True),
    (Instruction("PUSH", "ESI"), False),
    (Instruction("PUSH"), False),
    (Instruction("MOV", "EBP", "ESP"), True),
    (Instruction("MOV", "EBP", "EAX"), False),
    (Instruction("MOV", "EAX", "ESP"), False),
    (Instruction("MOV", "EBP"), False),
    (Instruction("SUB", "ESP", "0x20"), True),
    (Instruction("SUB", "EAX", "0x20"), False),
    (Instruction("SUB", "ESP"), False),
    (Instruction("ENTER", "0x10", "0x0"), True),
    (Instruction("RET"), False),
])
def test_is_likely_function_prologue(instruction, prologue):
    assert is_likely_function_prologue(Program(), instruction) is prologue


def test_get_function_name_prefers_the_function_then_a_symbol_then_the_address():
    program = Program()
    program.getFunctionManager().add("spawn", ENTRY)
    program.getSymbolTable().symbols.append(Symbol("s_label", Address(0x402000)))
    assert get_function_name(program, Address(ENTRY)) == "spawn"
    assert get_function_name(program, Address(0x402000)) == "s_label"
    assert get_function_name(program, Address(0x403000)) == "func_00403000"
