# Imports
import struct

# Third-party imports
import pytest

# Local imports
from ghidra_program import Address, AddressSpace, Instruction, Program
from ghidra_annotations.util import memory


def program_with_data(data, pointer_size = 4):
    program = Program(pointer_size = pointer_size)
    program.getMemory().add_block(".data", 0x500000, data)
    return program


@pytest.mark.parametrize("pointer_size, data, expected", [
    (4, struct.pack("<I", 0x80401000), Address(0x80401000)),
    (8, struct.pack("<Q", 0x140001000), Address(0x140001000)),
    (4, bytes(4), None),
    (2, b"\x10\x00", None),
])
def test_read_pointer_at_address(pointer_size, data, expected):
    program = program_with_data(data, pointer_size)
    assert memory.get_pointer_size(program) == pointer_size
    assert memory.read_pointer_at_address(program, Address(0x500000)) == expected


# Answers each address text with a scripted result: an Address, None, or an exception to raise
class ScriptedFactory:
    def __init__(self, answers, space_answers = None):
        self.answers = answers
        self.space = ScriptedSpace(space_answers or {})
        self.asked = []

    def getDefaultAddressSpace(self):
        return self.space

    def getAddress(self, text):
        self.asked.append(text)
        answer = self.answers.get(text)
        if isinstance(answer, Exception):
            raise answer
        return answer


class ScriptedSpace(AddressSpace):
    def __init__(self, answers):
        super().__init__("ram")
        self.answers = answers

    def getAddress(self, offset):
        answer = self.answers.get(offset)
        if isinstance(answer, Exception):
            raise answer
        return answer


def parse(factory, text):
    program = Program()
    program.address_factory = factory
    return memory.parse_address(program, text)


def test_parse_address_takes_the_text_as_it_is_first():
    factory = ScriptedFactory({"401000": Address(0x401000)})
    assert parse(factory, "401000") == Address(0x401000)
    assert factory.asked == ["401000"]


def test_parse_address_falls_back_through_each_form_in_order():
    target = Address(0x401000)
    factory = ScriptedFactory({"401000": ValueError("bad"), "0x401000": None, "ram:401000": target})
    assert parse(factory, "401000") == target
    assert factory.asked == ["401000", "0x401000", "ram:401000"]


def test_parse_address_does_not_add_a_second_prefix():
    factory = ScriptedFactory({}, {0x401000: Address(0x401000)})
    assert parse(factory, "0X401000") == Address(0x401000)
    assert factory.asked == ["0X401000"]


def test_parse_address_gives_up_when_nothing_parses():
    factory = ScriptedFactory({"zz": RuntimeError("no")})
    assert parse(factory, "zz") is None
    assert factory.asked == ["zz", "0xzz", "ram:zz"]
    assert parse(factory, "") is None


def test_get_addr_obj_checks_the_address_is_in_memory():
    program = program_with_data(bytes(16))
    assert memory.get_addr_obj(program, "500004") == Address(0x500004)
    assert memory.get_addr_obj(program, "600000") is None
    assert memory.get_addr_obj(program, "600000", validate_memory = False) == Address(0x600000)
    assert memory.get_addr_obj(program, "ghost:1") is None
    assert memory.get_addr_obj(program, None) is None


def test_is_addr_disassembled():
    program = Program()
    program.getListing().instructions[Address(0x401000)] = Instruction("RET")
    assert memory.is_addr_disassembled(program, Address(0x401000)) is True
    assert memory.is_addr_disassembled(program, Address(0x401001)) is False


def test_is_addr_disassembled_exits_when_the_listing_fails(capsys):
    program = Program()
    program.listing = None
    with pytest.raises(SystemExit):
        memory.is_addr_disassembled(program, Address(0x401000))
    assert "Unable to determine if address at 00401000 is disassembled" in capsys.readouterr().out


class Result:
    def __init__(self, empty):
        self.empty = empty

    def isEmpty(self):
        return self.empty


class StubDisassembler:
    calls = []
    result = None

    @classmethod
    def getDisassembler(cls, program, monitor, listener):
        cls.calls.append(("get", program, str(monitor), listener))
        return cls

    @classmethod
    def disassemble(cls, address_set, context, follow_flow):
        cls.calls.append(("disassemble", address_set.args, context, follow_flow))
        return cls.result


@pytest.fixture
def disassembler(monkeypatch):
    StubDisassembler.calls = []
    monkeypatch.setattr(memory, "Disassembler", StubDisassembler)
    return StubDisassembler


@pytest.mark.parametrize("result, done", [(Result(False), True), (Result(True), False), (None, None)])
def test_disassemble_at_addr(disassembler, result, done):
    program = Program()
    start, end = Address(0x401000), Address(0x40100f)
    disassembler.result = result
    assert memory.disassemble_at_addr(program, start, end, follow_flow = False) == done
    assert disassembler.calls == [("get", program, "DUMMY", None), ("disassemble", (start, end), None, False)]
    assert program.getListing().cleared == []


def test_disassemble_at_addr_clears_defined_data_first(disassembler):
    program = Program()
    start, end = Address(0x401000), Address(0x40100f)
    program.getListing().data[start] = DefinedData()
    disassembler.result = Result(False)
    memory.disassemble_at_addr(program, start, end)
    assert program.getListing().cleared == [(start, end, False)]


class DefinedData:
    def isDefined(self):
        return True
