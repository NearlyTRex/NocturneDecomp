# Imports
import os
import runpy
import struct
import sys
import types

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, AddressRange, AddressSet, MemoryAccessException
from ghidra_program import Instruction, Memory, Program
from repo_paths import SCRIPTS_DIR
import find_hidden_functions as fhf

BASE = 0x1000
DATA = 0x3000


at = Address


def dword(value):
    return list(struct.pack("<I", value))


# Memory whose bytes at the hole offsets cannot be read
class HoleyMemory(Memory):
    def __init__(self, holes):
        super().__init__()
        self.holes = set(holes)

    def read(self, address, size):
        if self.holes & set(range(address.getOffset(), address.getOffset() + size)):
            raise MemoryAccessException(f"hole at {address}")
        return super().read(address, size)


# An address with nothing before `floor`: stepping back past it raises
class FloorAddress(Address):
    def __init__(self, offset, floor):
        super().__init__(offset)
        self.floor = floor

    def subtract(self, displacement):
        if self.offset - displacement < self.floor:
            raise OverflowError("before the start of the address space")
        return FloorAddress(self.offset - displacement, self.floor)


# An address at the top of the space: stepping forward from the last one raises
class EdgeAddress(Address):
    def __init__(self, offset, last):
        super().__init__(offset)
        self.last = last

    def add(self, displacement):
        if self.offset + displacement > self.last:
            raise OverflowError("past the end of the address space")
        return EdgeAddress(self.offset + displacement, self.last)


# An executable set of one range ending at the top of the space, no function in it
class EdgeSet:
    def __init__(self, start, last):
        self.start, self.last = start, last

    def subtract(self, _body):
        return self

    def getAddressRanges(self):
        return [AddressRange(EdgeAddress(self.start, self.last), EdgeAddress(self.last, self.last))]


class Relocation:
    def __init__(self, offset, reloc_type = fhf.RELOC_HIGHLOW):
        self.offset, self.reloc_type = offset, reloc_type

    def getType(self):
        if self.reloc_type is None:
            raise RuntimeError("no type")
        return self.reloc_type

    def getAddress(self):
        return at(self.offset)


class JavaIterator:
    def __init__(self, items):
        self.items = list(items)

    def hasNext(self):
        return bool(self.items)

    def next(self):
        return self.items.pop(0)


class RelocationTable:
    def __init__(self, relocations):
        self.relocations = relocations

    def getRelocations(self):
        return JavaIterator(self.relocations)


# A program with what the fakes below read from it: the entries the pseudo disassembler
# accepts, the instruction lengths it decodes, the relocations Ghidra recorded (None: no
# relocation table at all), and the entries CreateFunctionCmd refuses or raises on
class HiddenProgram(Program):
    def __init__(self):
        super().__init__()
        self.valid, self.decode, self.relocations = set(), {}, []
        self.refuse, self.explode, self.disassembled = set(), set(), []

    def getRelocationTable(self):
        if self.relocations is None:
            raise AttributeError("no relocation table")
        return RelocationTable([Relocation(*r) if isinstance(r, tuple) else Relocation(r)
                                for r in self.relocations])


def program_with(code, start = BASE, holes = ()):
    program = HiddenProgram()
    if holes:
        program.memory = HoleyMemory(holes)
    program.getMemory().add_block(".text", start, bytes(code), execute = True)
    return program


def exec_set(program):
    return fhf.get_executable_set(program)


# isValidSubroutine for the program's valid entries; disassemble by its decode table,
# where a length of None raises and a missing entry decodes nothing
class Pseudo:
    def __init__(self, program):
        self.program = program

    def isValidSubroutine(self, addr, _follow):
        return addr.getOffset() in self.program.valid

    def disassemble(self, addr):
        offset = addr.getOffset()
        if offset not in self.program.decode:
            return None
        if self.program.decode[offset] is None:
            raise RuntimeError("cannot decode")
        return Instruction("op", length = self.program.decode[offset])


class DisassembleCommand:
    def __init__(self, addr, restricted, follow):
        self.addr, self.restricted, self.follow = addr, restricted, follow

    def applyTo(self, program, _monitor):
        program.disassembled.append((self.addr.getOffset(), self.restricted, self.follow))
        return True


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
    for name, attr, value in [("ghidra.program.model.address", "AddressSet", AddressSet),
                              ("ghidra.app.util", "PseudoDisassembler", Pseudo),
                              ("ghidra.app.cmd.disassemble", "DisassembleCommand", DisassembleCommand),
                              ("ghidra.app.cmd.function", "CreateFunctionCmd", CreateFunctionCmd),
                              ("ghidra.util.task", "ConsoleTaskMonitor", ConsoleTaskMonitor)]:
        fake = types.ModuleType(name)
        setattr(fake, attr, value)
        monkeypatch.setitem(sys.modules, name, fake)


# --- padding --------------------------------------------------------------------------------------

def test_the_padding_table_is_unique_and_longest_first():
    lengths = [len(p) for p in fhf.MULTIBYTE_NOPS]
    assert lengths == sorted(lengths, reverse = True)
    assert len({tuple(p) for p in fhf.MULTIBYTE_NOPS}) == len(fhf.MULTIBYTE_NOPS)


@pytest.mark.parametrize("code, length", [
    ([0x8B, 0xC9, 0x55], 2),                    # mov ecx,ecx
    ([0x89, 0xFF, 0x55], 2),                    # mov edi,edi
    ([0x8D, 0x54, 0x22, 0x00, 0x55], 4),        # lea edx,[edx+0], SIB form
    ([0x2E, 0x8B, 0xC0, 0x55], 3),              # cs: mov eax,eax
    ([0x8D, 0x9C, 0x23, 0, 0, 0, 0, 0x55], 7),  # lea ebx,[ebx+0], SIB form, disp32
    ([0x8D, 0x76, 0x00, 0x55], 3),              # lea esi,[esi+0]
    ([0x8D, 0xA4, 0x24, 0, 0, 0, 0, 0x55], 7),  # lea esp,[esp+0]
    ([0x90, 0x55], 1),
    ([0xCC, 0x55], 1),
    ([0x8B, 0xEC, 0x55], 0),                    # mov ebp,esp is not padding
    ([0x8D, 0x54, 0x22, 0x01, 0x55], 0),        # a displacement is not padding
    ([0x55, 0x8B], 0),
])
def test_every_self_move_is_padding_of_its_own_length(code, length):
    assert fhf.padding_length(program_with(code), at(BASE)) == length


def test_padding_stops_at_unreadable_memory():
    assert fhf.padding_length(program_with([0x8D, 0x40]), at(BASE)) == 0
    assert fhf.padding_length(program_with([0x55]), at(0x9000)) == 0


@pytest.mark.parametrize("code", [
    [0x8B, 0xC9],
    [0x8D, 0x54, 0x22, 0x00],
    [0x2E, 0x8B, 0xC0],
])
def test_a_self_move_ending_at_an_address_is_a_function_boundary(code):
    program = program_with([0x55, *code, 0x55])
    assert fhf.boundary_kind(program, at(BASE + 1 + len(code)), exec_set(program)) == "PADDING"


def test_a_region_starts_after_a_self_move_not_on_it():
    # ret | mov ecx,ecx | push ebp; mov ebp,esp; ret
    program = program_with([0xC3, 0x8B, 0xC9, 0x55, 0x8B, 0xEC, 0xC3])
    program.getFunctionManager().add("FUN_00001000", BASE)
    assert fhf.build_nonfunction_regions(program, exec_set(program)) == [(at(BASE + 3), at(BASE + 6))]


# --- memory -----------------------------------------------------------------------------------------

def test_only_initialized_executable_blocks_are_scanned():
    program = program_with([0x90] * 4)
    memory = program.getMemory()
    memory.add_block(".bss", 0x2000, bytes(4), execute = True).initialized = False
    memory.add_block(".data", DATA, bytes(4))
    assert exec_set(program).ranges == [(BASE, BASE + 3)]


def test_bytes_and_dwords_read_unsigned_and_unreadable_ones_are_none():
    program = program_with([0xFF, 0xFF, 0xFF, 0xFF, 0x00], holes = [BASE + 4])
    assert fhf.read_byte(program, at(BASE)) == 0xFF
    assert fhf.read_byte(program, at(BASE + 4)) is None
    assert fhf.read_dword(program, at(BASE)) == 0xFFFFFFFF
    assert fhf.read_dword(program, at(BASE + 1)) is None


# --- boundaries -------------------------------------------------------------------------------------

def test_a_boundary_is_padding_a_block_start_or_other():
    code = bytearray(0x20)
    code[0:2] = [0xCC, 0xCC]            # 1000 two padding bytes before 1002
    code[3] = 0xC3                      # 1003 one ret before 1004: not enough alone
    code[0x0F] = 0xC3                   # 100f one ret before the aligned 1010
    program = program_with(code)
    executable = exec_set(program)
    assert fhf.boundary_kind(program, at(BASE + 2), executable) == "PADDING"
    assert fhf.boundary_kind(program, at(BASE + 4), executable) == "OTHER"
    assert fhf.boundary_kind(program, at(BASE + 0x10), executable) == "PADDING"
    assert fhf.boundary_kind(program, at(BASE + 0x12), executable) == "OTHER"
    assert fhf.boundary_kind(program, at(BASE), executable) == "START"


def test_a_boundary_with_no_byte_before_it_is_a_start():
    program = program_with([0x55, 0x55], holes = [BASE])
    assert fhf.boundary_kind(program, at(BASE + 1), exec_set(program)) == "START"
    assert fhf.boundary_kind(program, FloorAddress(BASE, BASE), exec_set(program)) == "START"


def test_a_boundary_at_the_bottom_of_the_space_reads_only_what_is_there():
    # Only one byte back can be formed: no multi-byte no-op, no second padding byte
    program = program_with(bytearray(0x20))
    program.getMemory().blocks[0].data[0x0F] = 0x90
    program.getMemory().blocks[0].data[0x10] = 0x90
    executable = exec_set(program)
    assert fhf.boundary_kind(program, FloorAddress(BASE + 0x10, BASE + 0x0F), executable) == "PADDING"
    assert fhf.boundary_kind(program, FloorAddress(BASE + 0x11, BASE + 0x10), executable) == "OTHER"


def test_a_multibyte_nop_reaching_outside_the_code_is_not_a_boundary():
    program = program_with([0xC9, 0x55])
    program.getMemory().add_block(".data", BASE - 1, [0x8B])
    assert fhf.boundary_kind(program, at(BASE + 1), exec_set(program)) == "OTHER"


# --- the pseudo disassembler and references ---------------------------------------------------------

def test_the_pseudo_disassembler_is_optional(monkeypatch):
    program = program_with([0x00])
    assert isinstance(fhf.make_pseudo(program), Pseudo)
    monkeypatch.setitem(sys.modules, "ghidra.app.util", None)
    assert fhf.make_pseudo(program) is None


class OneArgPseudo:
    def isValidSubroutine(self, addr):
        return addr.getOffset() == BASE


class BrokenPseudo:
    def isValidSubroutine(self, *_args):
        raise RuntimeError("cannot decode")


def test_a_subroutine_is_valid_invalid_or_unknown():
    program = program_with([0x00])
    program.valid = {BASE}
    assert fhf.valid_subroutine(None, at(BASE)) is None
    assert fhf.valid_subroutine(Pseudo(program), at(BASE)) is True
    assert fhf.valid_subroutine(Pseudo(program), at(BASE + 1)) is False
    assert fhf.valid_subroutine(OneArgPseudo(), at(BASE)) is True
    assert fhf.valid_subroutine(BrokenPseudo(), at(BASE)) is None


class BrokenReferences:
    def getReferencesTo(self, _addr):
        raise RuntimeError("no references")


def test_only_a_call_reference_counts():
    program = program_with([0x00] * 8)
    program.getReferenceManager().add(BASE + 4, BASE, call = True)
    program.getReferenceManager().add(BASE + 4, BASE + 1)
    assert fhf.has_call_reference(program, at(BASE))
    assert not fhf.has_call_reference(program, at(BASE + 1))
    program.reference_manager = BrokenReferences()
    assert not fhf.has_call_reference(program, at(BASE))


def test_a_target_is_named_by_its_symbol_or_its_datas_symbol_and_offset():
    program = program_with([0x00])
    program.getMemory().add_block(".data", DATA, bytes(0x40))
    listing, symbols = program.getListing(), program.getSymbolTable()
    symbols.createLabel(at(DATA), "s_hello", "USER_DEFINED")
    listing.add_data(DATA, None, length = 8)
    listing.add_data(DATA + 0x10, None, length = 8)
    listing.add_data(DATA + 0x20, None, length = 8, defined = False)
    assert fhf.describe_target(program, at(DATA)) == "s_hello"
    assert fhf.describe_target(program, at(DATA + 3)) == "s_hello+3"
    assert fhf.describe_target(program, at(DATA + 0x12)) == "00003012"
    assert fhf.describe_target(program, at(DATA + 0x22)) == "00003022"
    assert fhf.describe_target(program, at(DATA + 0x30)) == "00003030"


# --- the relocation table ---------------------------------------------------------------------------

def test_relocation_sites_come_from_ghidras_table_keeping_only_highlow():
    program = program_with([0x00])
    program.relocations = [BASE, (BASE + 4, 0), (BASE + 8, None)]
    assert fhf.collect_reloc_sites(program) == ([at(BASE), at(BASE + 8)], "RelocationTable API")


def reloc_program(reloc, holes = ()):
    program = program_with([0x00], holes = holes)
    program.relocations = None
    program.image_base = at(0x400000)
    program.getMemory().add_block(".reloc", 0x500000, bytes(reloc))
    return program


def test_without_ghidras_table_the_reloc_block_is_parsed():
    entries = [0x3000 | 0x010, 0x0000, 0x3000 | 0xFFF]
    reloc = dword(0x1000) + dword(8 + 2 * len(entries)) + [b for e in entries for b in struct.pack("<H", e)]
    reloc += dword(0x2000) + dword(10) + list(struct.pack("<H", 0x3004))
    sites, source = fhf.collect_reloc_sites(reloc_program(reloc))
    assert [s.getOffset() for s in sites] == [0x401010, 0x401FFF, 0x402004]
    assert source == ".reloc block parse"


def test_an_unreadable_reloc_entry_is_skipped():
    reloc = dword(0x1000) + dword(12) + list(struct.pack("<HH", 0x3001, 0x3002))
    sites = fhf.collect_reloc_sites_manual(reloc_program(reloc, holes = [0x500008]))
    assert [s.getOffset() for s in sites] == [0x401002]


@pytest.mark.parametrize("reloc, holes", [
    (dword(0x1000) + dword(4) + dword(0), ()),                      # smaller than its header
    (dword(0x1000) + dword(0x10008) + dword(0), ()),                # larger than any block
    (dword(0x1000) + dword(16) + dword(0), ()),                     # runs past the end
    (dword(0x1000) + dword(12) + dword(0x3001), [0x500004]),        # unreadable header
])
def test_a_malformed_reloc_block_ends_the_walk(reloc, holes):
    assert fhf.collect_reloc_sites_manual(reloc_program(reloc, holes)) == []


def test_no_reloc_block_means_no_sites():
    program = program_with([0x00])
    program.relocations = None
    assert fhf.collect_reloc_sites(program) == ([], ".reloc block parse")


# --- regions ----------------------------------------------------------------------------------------

def test_regions_are_the_unpadded_bytes_no_function_covers():
    code = [0x55, 0x55, 0xCC, 0x55,     # 1000 function, then padding, then a region
            0x55, 0x90, 0x90, 0x55]     # 1004 padding splits it; a region to the end
    program = program_with(code)
    program.getFunctionManager().add("FUN_00001000", BASE, size = 2)
    regions = fhf.build_nonfunction_regions(program, exec_set(program))
    assert regions == [(at(BASE + 3), at(BASE + 4)), (at(BASE + 7), at(BASE + 7))]


def test_a_region_ends_at_unreadable_memory():
    program = program_with([0x55, 0x55, 0x55], holes = [BASE + 1])
    assert fhf.build_nonfunction_regions(program, exec_set(program)) == [(at(BASE), at(BASE + 2))]


def test_regions_stop_at_the_end_of_the_address_space():
    # On a byte of code, and on padding
    program = program_with([0x55, 0x55])
    assert fhf.build_nonfunction_regions(program, EdgeSet(BASE, BASE + 1)) == [(at(BASE), at(BASE + 1))]
    program = program_with([0x55, 0x8B, 0xC0])
    assert fhf.build_nonfunction_regions(program, EdgeSet(BASE, BASE + 2)) == [(at(BASE), at(BASE))]


def test_a_region_is_found_only_when_an_offset_lies_inside_one():
    regions = [(at(BASE + 4), at(BASE + 7)), (at(BASE + 0x10), at(BASE + 0x1F))]
    starts = [r[0].getOffset() for r in regions]
    assert fhf.find_region(regions, starts, BASE) is None
    assert fhf.find_region(regions, starts, BASE + 6) == regions[0]
    assert fhf.find_region(regions, starts, BASE + 8) is None
    assert fhf.find_region(regions, starts, BASE + 0x1F) == regions[1]


# --- scoring ----------------------------------------------------------------------------------------

def scoring_program():
    code = bytearray(0x40)
    code[0x0E:0x10] = [0xCC, 0xCC]      # padding before 1010 and its neighbours
    code[0x20:0x22] = [0xCC, 0xCC]
    program = program_with(code)
    program.getFunctionManager().add("FUN_00001030", BASE + 0x30, size = 0x10)
    return program


@pytest.mark.parametrize("offset, valid, called, expected", [
    (0x10, True, True, ("VERY_HIGH", "after padding, 16-byte aligned, pseudo-valid, has CALL ref")),
    (0x22, True, False, ("VERY_HIGH", "after padding, pseudo-valid")),
    (0x05, True, False, ("HIGH", "pseudo-valid")),
    (0x22, False, False, ("MEDIUM", "after padding")),
    (0x05, False, False, ("LOW", "code pointer only")),
])
def test_a_code_pointer_scores_by_validity_and_boundary(offset, valid, called, expected):
    program = scoring_program()
    if valid:
        program.valid = {BASE + offset}
    if called:
        program.getReferenceManager().add(BASE, BASE + offset, call = True)
    conf, reason, inside = fhf.score_pointer(program, Pseudo(program), exec_set(program), at(BASE + offset))
    assert ((conf, reason), inside) == (expected, None)


def test_a_code_pointer_into_a_function_is_low_and_never_its_own():
    program = scoring_program()
    conf, reason, inside = fhf.score_pointer(program, None, exec_set(program), at(BASE + 0x34))
    assert (conf, reason, inside.getName()) == ("LOW", "inside FUN_00001030", "FUN_00001030")


def test_a_region_of_only_jump_table_relocs_is_low():
    program = scoring_program()
    assert fhf.score_region(program, None, exec_set(program), at(BASE), 0, 3) == (
        "LOW", "jump table (3 code-target reloc(s), no operand reloc)")


def test_a_misaligned_region_is_low_whatever_else_it_has():
    program = scoring_program()
    program.valid = {BASE + 0x10}
    assert fhf.score_region(program, Pseudo(program), exec_set(program), at(BASE + 0x10), 2, 1, False) == (
        "LOW", "2 operand reloc(s), 1 jump-table reloc(s), RELOC MISALIGNED - start is not an instruction boundary")


@pytest.mark.parametrize("offset, valid, called, aligned, expected", [
    (0x10, True, True, True,
     ("VERY_HIGH", "1 operand reloc(s), reloc-aligned decode, has CALL ref, after padding, pseudo-valid")),
    (0x10, True, False, True, ("HIGH", "1 operand reloc(s), reloc-aligned decode, after padding, pseudo-valid")),
    (0x05, True, False, True, ("MEDIUM", "1 operand reloc(s), reloc-aligned decode, pseudo-valid, mid-flow start")),
    (0x05, True, True, None, ("LOW", "1 operand reloc(s), has CALL ref, pseudo-valid, mid-flow start")),
    (0x10, False, False, True, ("LOW", "1 operand reloc(s), reloc-aligned decode, after padding")),
])
def test_a_region_scores_by_call_alignment_validity_and_boundary(offset, valid, called, aligned, expected):
    program = scoring_program()
    if valid:
        program.valid = {BASE + offset}
    if called:
        program.getReferenceManager().add(BASE, BASE + offset, call = True)
    assert fhf.score_region(program, Pseudo(program), exec_set(program), at(BASE + offset), 1, 0,
                            aligned) == expected


# --- decoding against the relocations ---------------------------------------------------------------

def decoding(decode):
    program = program_with(bytes(0x20))
    program.decode = {BASE + off: length for off, length in decode.items()}
    return Pseudo(program)


@pytest.mark.parametrize("decode, relocs, expected", [
    ({0: 5, 5: 6, 11: 1}, [1, 7], (True, 2)),           # every operand inside an instruction
    ({0: 5, 5: 6}, [5], (False, 1)),                    # on an opcode byte
    ({0: 5, 5: 6}, [3], (False, 0)),                    # running past the instruction end
    ({0: 5}, [8], (False, 1)),                          # nothing decodes at 1005
    ({0: 5, 5: None}, [8], (False, 1)),                 # decoding 1005 raises
    ({0: 5, 5: 0}, [8], (False, 1)),                    # a zero-length instruction
    ({0: 5, 5: 5}, [0x1F], (False, 2)),                 # past the region end before reaching it
])
def test_a_decode_agrees_with_the_relocs_only_when_each_lies_inside_an_instruction(decode, relocs, expected):
    pseudo = decoding(decode)
    assert fhf.relocs_align_with_decode(pseudo.program, pseudo, at(BASE), BASE + 9,
                                        [BASE + r for r in relocs]) == expected


def test_decoding_needs_the_pseudo_disassembler():
    assert fhf.relocs_align_with_decode(None, None, at(BASE), BASE + 9, [BASE + 1]) == (None, 0)


def test_decoding_stops_at_the_end_of_the_address_space():
    pseudo = decoding({0: 5})
    assert fhf.relocs_align_with_decode(pseudo.program, pseudo, EdgeAddress(BASE, BASE + 4), BASE + 9,
                                        [BASE + 8]) == (False, 1)


# --- discovery --------------------------------------------------------------------------------------

def discovery_program():
    code = bytearray(0x80)
    # 1000 a function: push offset 1040 (a factory passed by address), mov eax,[s_hello]
    code[0x00:0x0A] = [0x68, *dword(BASE + 0x40), 0xA1, *dword(DATA)]
    code[0x10:0x20] = [0xCC] * 0x10
    # 1020 hidden code: push offset s_hello twice, mov eax,[1050] (a code target), ret
    code[0x20:0x30] = [0x68, *dword(DATA), 0x68, *dword(DATA), 0xA1, *dword(BASE + 0x50), 0xC3]
    code[0x30:0x40] = [0xCC] * 0x10
    code[0x5F] = 0xCC
    # 1060 a jump table: a code target only
    code[0x60:0x64] = dword(BASE + 0x40)
    program = program_with(code)
    program.getFunctionManager().add("FUN_00001000", BASE, size = 0x10)

    data = bytearray(0x20)
    data[0x10:0x1E] = [*dword(BASE + 0x50), *dword(BASE), *dword(DATA), 0, 0]
    program.getMemory().add_block(".data", DATA, data)
    program.getSymbolTable().createLabel(at(DATA), "s_hello", "USER_DEFINED")
    program.getSymbolTable().createLabel(at(DATA + 0x10), "g_vtable", "USER_DEFINED")
    program.getReferenceManager().add(BASE, BASE + 0x20, call = True)

    program.valid = {BASE + 0x20, BASE + 0x40, BASE + 0x50}
    program.decode = {BASE + 0x20: 5, BASE + 0x25: 5, BASE + 0x2A: 5, BASE + 0x2F: 1}
    program.relocations = [BASE + 1, BASE + 6, BASE + 0x10, BASE + 0x21, BASE + 0x26, BASE + 0x2B, BASE + 0x60,
                           DATA + 0x10, DATA + 0x14, DATA + 0x18, DATA + 0x1E, 0x9000]
    return program


def test_discovery_finds_each_tier_and_classifies_every_site(capsys):
    rows, stats, source = fhf.discover(discovery_program())
    assert source == "RelocationTable API"
    assert [(r["addr"].getOffset() - BASE, r["tier"], r["confidence"], r["evidence"], r["n_evidence"], r["size"])
            for r in rows] == [
        (0x50, fhf.TIER_PTR, "VERY_HIGH", ["<- g_vtable"], 1, None),
        (0x40, fhf.TIER_IMM, "VERY_HIGH", ["<- 00001001"], 1, None),
        (0x20, fhf.TIER_RGN, "VERY_HIGH", ["-> s_hello"], 3, 0x10),
        (0x60, fhf.TIER_RGN, "LOW", [], 1, 0x20)]
    assert rows[2]["reason"] == ("2 operand reloc(s), 1 jump-table reloc(s), reloc-aligned decode, "
                                 "has CALL ref, after padding, pseudo-valid")
    assert dict(stats) == {
        "site/exec-in-function-to-code": 1, "site/exec-in-function": 1, "site/exec-other": 1,
        "site/exec-orphan-operand": 2, "site/exec-orphan-jumptable": 2, "site/data-to-code": 1,
        "site/data-to-known-function": 1, "site/data-to-data": 1, "site/unreadable": 1, "site/no-block": 1}
    printed = capsys.readouterr().out
    assert "relocation sites: 12 (via RelocationTable API)" in printed
    assert "non-function code regions: 3" in printed


def test_discovery_with_no_relocations_finds_nothing(capsys):
    program = program_with([0x00])
    program.relocations = None
    rows, stats, source = fhf.discover(program)
    assert (rows, stats, source) == ([], {}, ".reloc block parse")
    assert "relocation sites: 0" in capsys.readouterr().out


def test_a_zero_or_function_valued_fixup_in_a_function_is_no_candidate():
    program = discovery_program()
    program.getFunctionManager().add("FUN_00001040", BASE + 0x40)
    program.getMemory().blocks[0].data[0x06:0x0A] = bytes(4)
    program.relocations = [BASE + 1, BASE + 6]
    rows, stats, _source = fhf.discover(program)
    assert rows == []
    assert dict(stats) == {"site/exec-in-function": 2}


# --- applying ---------------------------------------------------------------------------------------

def test_a_function_is_disassembled_first_only_when_its_entry_is_not_code():
    program = program_with(bytes(4))
    assert fhf.define_function(program, at(BASE), ConsoleTaskMonitor())
    assert program.disassembled == [(BASE, None, True)]
    program.getListing().add_instruction(BASE + 2, Instruction("nop"))
    program.refuse.add(BASE + 2)
    assert not fhf.define_function(program, at(BASE + 2), ConsoleTaskMonitor())
    assert program.disassembled == [(BASE, None, True)]


def row(offset, tier = fhf.TIER_PTR, confidence = "HIGH", inside = None):
    return {"addr": at(BASE + offset), "tier": tier, "confidence": confidence, "inside": inside,
            "reason": "r", "evidence": [], "n_evidence": 0, "size": None}


def test_applying_defines_confident_rows_of_the_chosen_tiers_in_address_order():
    program = program_with(bytes(0x40))
    fm = program.getFunctionManager()
    fm.add("FUN_00001000", BASE)
    fm.add("FUN_00001010", BASE + 0x10, size = 8)
    program.refuse.add(BASE + 0x30)
    rows = [row(0x30), row(0x20), row(0x14), row(0x00), row(0x24, confidence = "MEDIUM"),
            row(0x28, tier = fhf.TIER_RGN), row(0x2C, inside = "FUN_x")]
    assert fhf.apply_rows(program, rows, "HIGH", [fhf.TIER_PTR]) == (1, 1, 4)
    assert [r.get("result") for r in rows] == ["FAILED", "created", "absorbed", "already", None, None, None]
    assert program.transactions == [["Define reloc-discovered functions", True]]


def test_applying_reports_progress_every_hundred_rows(capsys):
    program = program_with(bytes(0x80))
    assert fhf.apply_rows(program, [row(i) for i in range(100)], "LOW", fhf.TIERS) == (100, 0, 100)
    assert "... 100/100 (created 100, failed 0)" in capsys.readouterr().out


def test_an_error_while_applying_rolls_back_and_counts_nothing(capsys):
    program = program_with(bytes(0x10))
    program.explode.add(BASE + 4)
    assert fhf.apply_rows(program, [row(0), row(4)], "HIGH", fhf.TIERS) == (0, 0, 2)
    assert "ERROR during apply: boom" in capsys.readouterr().out
    assert program.transactions[0][1] is False


# --- the report -------------------------------------------------------------------------------------

def test_the_report_lists_each_tier_and_the_data_its_hidden_code_uses(tmp_path):
    rows = [row(0x10, confidence = "LOW"), row(0x00, confidence = "VERY_HIGH")]
    rows[1]["result"] = "created"
    for i in range(7):
        region = row(0x20 + i, tier = fhf.TIER_RGN, confidence = "MEDIUM")
        region["size"] = 4
        region["evidence"] = ["-> s_hello"] + ([f"-> g_{n}" for n in range(5)] if i == 0 else [])
        rows.append(region)
    stats = fhf.Counter({"site/data-to-code": 2})
    out = tmp_path / "r.txt"
    fhf.write_report(str(out), "bw1.exe", rows, stats, "API", True, "HIGH", [fhf.TIER_PTR])
    text = out.read_text()
    assert "Mode: APPLIED (>= HIGH, tiers RELOC_CODE_PTR)" in text
    assert "  RELOC_CODE_PTR      2   VERY_HIGH=1  LOW=1" in text
    assert "  RELOC_CODE_RGN      7   MEDIUM=7" in text and "RELOC_CODE_IMM" not in text
    assert "  site/data-to-code            2" in text
    assert "00001000  VERY_HIGH           n=0   created   r" in text
    assert "00001010  LOW                 n=0             r" in text
    assert "00001020  MEDIUM         4 b  n=0" in text
    assert "        ... 2 more" in text
    assert "  s_hello                                           7 region(s): " in text
    assert text.count(" ... +1") == 1
    assert "  g_0                                               1 region(s): 00001020\n" in text


def test_a_report_only_run_says_so(tmp_path):
    out = tmp_path / "r.txt"
    fhf.write_report(str(out), "bw1.exe", [], fhf.Counter(), "API", False, "HIGH", fhf.TIERS)
    assert "Mode: report only" in out.read_text()


# --- main -------------------------------------------------------------------------------------------

class BrokenPyghidra(FakePyghidra):
    def open_project(self, directory, name):
        raise RuntimeError("no such project")


class UnclosablePyghidra(FakePyghidra):
    def close(self):
        raise RuntimeError("already closed")


@pytest.fixture
def launch(monkeypatch):
    monkeypatch.setattr(fhf.os, "_exit", sys.exit)

    def go(pyghidra, *args):
        monkeypatch.setitem(sys.modules, "pyghidra", pyghidra)
        monkeypatch.setattr(sys, "argv", ["find_hidden_functions.py", *args])
        with pytest.raises(SystemExit) as stop:
            fhf.main()
        return stop.value.code
    return go


def test_main_writes_the_report_to_the_default_path(tmp_path, monkeypatch, launch, capsys):
    monkeypatch.chdir(tmp_path)
    pyghidra = FakePyghidra(discovery_program())
    assert launch(pyghidra, "projects", "Nocturne") == 0
    assert pyghidra.opened == [(os.path.abspath("projects"), "Nocturne"), "/nocturne.exe"]
    assert pyghidra.closed == 1
    assert pyghidra.program.domain_file.saves == 0
    assert (tmp_path / "nocturne.exe_hidden_functions.txt").exists()
    printed = capsys.readouterr().out
    assert "=== plan (4 candidates) ===" in printed and "[dry-run]" in printed


def test_main_saves_the_program_only_when_applying_created_functions(tmp_path, launch, capsys):
    out = str(tmp_path / "r.txt")
    program = discovery_program()
    assert launch(FakePyghidra(program), "p", "N", "bw1.exe", "--out", out, "--apply",
                  "--tier", fhf.TIER_PTR) == 0
    assert program.domain_file.saves == 1
    assert sorted(f.getOffset() for f in program.getFunctionManager().functions) == [BASE, BASE + 0x50]
    printed = capsys.readouterr().out
    assert "Defined 1/1 function(s), 0 failed." in printed and "NEXT: run validate_function_ranges.py" in printed
    unchanged = program_with([0x00])
    assert launch(FakePyghidra(unchanged), "p", "N", "--out", out, "--apply") == 0
    assert unchanged.domain_file.saves == 0


def test_main_reports_an_error_and_exits_nonzero(tmp_path, launch, capsys):
    assert launch(BrokenPyghidra(None), "p", "N", "--out", str(tmp_path / "r.txt")) == 1
    assert "ERROR: no such project" in capsys.readouterr().out


def test_main_ignores_a_project_that_will_not_close(tmp_path, launch):
    assert launch(UnclosablePyghidra(program_with([0x00])), "p", "N", "--out", str(tmp_path / "r.txt")) == 0


def test_the_script_runs_as_main(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(os, "_exit", sys.exit)
    monkeypatch.setitem(sys.modules, "pyghidra", BrokenPyghidra(None))
    monkeypatch.setattr(sys, "argv", ["find_hidden_functions.py", "p", "N", "--out", str(tmp_path / "r.txt")])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "find_hidden_functions.py"), run_name = "__main__")
    assert stop.value.code == 1
    assert "ERROR: no such project" in capsys.readouterr().out
