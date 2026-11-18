# Imports
import importlib
import struct

# Local imports
from infer_globals_world import (BSS, CODE, DATA, Asm, build, by_start, function, hexa, plan, reg_param, stack_param,
                                 write_json)
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
import ghidra_fake
import infer_globals as ig
import sibling_match


# --- relocations ------------------------------------------------------------------

def test_relocations_come_from_the_section_or_the_directory(tmp_path, monkeypatch):
    asm = Asm().load_eax(BSS + 0x10).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))])
    image = sibling_match.Image("dst.exe")
    assert ig.parse_relocations(image.data, image.image_base, image.sections) == {CODE + 1}
    build(tmp_path / "second", monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))], name = "dir.exe",
          reloc_dir = True)
    image = sibling_match.Image("dir.exe")
    assert ig.parse_relocations(image.data, image.image_base, image.sections) == {CODE + 1}


def test_relocations_absent_or_truncated():
    image = build_sectioned_pe([(".text", b"\xc3" * 16, SECTION_EXECUTE)])
    image_base, sections = sibling_match.parse_pe(image)
    assert ig.parse_relocations(image, image_base, sections) == set()
    bad = build_sectioned_pe([(".text", b"\xc3" * 16, SECTION_EXECUTE), (".reloc", struct.pack("<II", 0, 4), 0)])
    image_base, sections = sibling_match.parse_pe(bad)
    assert ig.parse_relocations(bad, image_base, sections) == set()


# --- the scan -----------------------------------------------------------------------

def test_access_types_from_the_instruction():
    assert ig.access_type("fld", 8) == "double"
    assert ig.access_type("fistp", 2) == "short"
    assert ig.access_type("fnstcw", 2) == "ushort"
    assert ig.access_type("movsx", 2) == "short"
    assert ig.access_type("movzx", 1) == "uchar"
    assert ig.access_type("mov", 4) is None


def test_void_pointers_are_plain_pointers():
    assert ig.Evidence(0, "argument", type = "void*").type == "pointer"


def test_aligned_addresses_skip_instructions_whose_operands_differ():
    a = [("mov", (1,)), ("push", (2,)), ("ret", ())]
    b = [("mov", ()), ("push", (5,)), ("ret", ())]
    assert list(ig.aligned_addresses(a, b)) == [(2, 5)]


def test_label_previews_follow_create_data_label():
    assert ig.label_type_name("float", None) == "FLOAT"
    assert ig.label_type_name("char", 32) == "CHAR_ARRAY"
    assert ig.label_type_name("CGame*", None) == "CGame_PTR"
    assert ig.label_type_name("int**", 4) == "INT_PTR_PTR_ARRAY"
    assert ig.label_type_name("pointer", None) == "PTR"
    assert ig.label_type_name("code*", 3) == "ARRAY_PTR"
    # an array of arrays peels one ARRAY per level, as Create Data Label does
    assert ig.label_type_name("char[256]", 10) == "CHAR_ARRAY_ARRAY"
    assert ig.label_type_name("CGame*[4]", 2) == "CGame_PTR_ARRAY_ARRAY"
    assert ig.label_type_name("wchar_t", 260) == "WCHAR_T_ARRAY"
    assert ig.Candidate(0x5d4ab0, "string", None, 4, "high", {}).name("%s swarming!") == "s_s_swarming_005d4ab0"


def test_label_mirrors_match_the_shift_l_code():
    ghidra_fake.install()
    real = importlib.import_module("ghidra_annotations.util.string")
    texts = ("", "%d\n", "9lives", "a  b--c", "x" * 60, "Hello, World!")
    assert [ig.string_label_text(t) for t in texts] == [real.normalize_string_name(t, max_length = 24)
                                                         for t in texts]
    names = ("", "__", "_lead__x__", "9abc", "int", "a-b c", "ok_")
    assert [ig.c_identifier(n) for n in names] == [real.sanitize_c_identifier(n) for n in names]


def test_pointee():
    assert ig.pointee("CGame *") == "CGame"
    assert ig.pointee("void*") is None
    assert ig.pointee("undefined4*") is None
    assert ig.pointee("int") is None


def test_scalars_take_their_type_from_how_code_reads_them(tmp_path, monkeypatch):
    asm = (Asm().mov_byte_ah(BSS).fld32(BSS + 4).fld64(BSS + 8).fild32(BSS + 0x10).fnstcw(BSS + 0x14)
           .movsx8(BSS + 0x16).movzx16(BSS + 0x18).load_eax(BSS + 0x1c).load_eax(BSS + 0x1c)
           .load_eax(BSS + 0x20).call_ind(BSS + 0x24).ret())
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))])
    got = by_start(plan())
    assert {k: (v["type"], v["confidence"]) for k, v in got.items()} == {
        "00403000": ("byte", "low"), "00403004": ("float", "medium"), "00403008": ("double", "medium"),
        "00403010": ("int", "medium"), "00403014": ("ushort", "medium"), "00403016": ("char", "medium"),
        "00403018": ("ushort", "medium"), "0040301c": ("int", "medium"), "00403020": ("int", "low"),
        "00403024": ("code*", "medium")}
    assert got["00403004"]["name"] == "g_FLOAT_00403004"


def test_an_immediate_that_is_not_relocated_or_not_data_is_no_global(tmp_path, monkeypatch):
    asm = Asm().push(BSS, relocated = False).push(CODE + 0x50).push(0x900000).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))])
    doc = plan()
    assert doc["candidates"] == [] and doc["unmapped"] == {"00900000": 1}


def test_rarer_instruction_forms(tmp_path, monkeypatch):
    other = CODE + 0x80
    asm = (Asm().pop_ecx()                                       # nothing pushed yet
           .op("c780", (BSS, True), (CODE + 0x10, True))         # mov [eax+G], code: not a direct store
           .op("c780", (BSS + 0x10, True), (DATA, True))         # mov [eax+G], data
           .lea_esi(CODE + 0x40)                                 # LEA of a code address
           .load_al(BSS + 0x50)                                  # a byte load
           .based(BSS + 0x60)
           .load_eax(BSS + 0x44).push_eax().call(other)          # a loaded value into an untyped param
           .ret())
    asm.code = asm.code.ljust(0x80, b"\x90") + b"\xc3"
    functions = [function(CODE, "f", 0x80),
                 function(other, "raw", 1, vars = {"params": [stack_param(4, "undefined4")]})]
    build(tmp_path, monkeypatch, asm, b"", functions)
    got = by_start(plan())
    # reached only as [reg + G]: an aggregate whose layout nothing here gives
    assert "00403000" not in got and "00403010" not in got and "00403060" not in got
    assert got["00403050"]["type"] == "byte" and got["00403044"]["type"] == "int"


def test_pointers_from_dereference_store_and_call(tmp_path, monkeypatch):
    callee = CODE + 0x100
    asm = (Asm().load_ecx(BSS).deref_ecx()                     # BSS holds a pointer
           .load_ecx(BSS + 4).lea_ecx_plus()                    # LEA is arithmetic, not a read
           .store_imm(BSS + 8, CODE + 0x10)                     # a function pointer
           .store_imm(BSS + 0xc, DATA)                          # points at a string
           .store_imm(BSS + 0x10, DATA + 0x20, relocated = False)   # an int that only looks like one
           .mov_esi(DATA + 0x40).store_esi(BSS + 0x14)          # an address via a register
           .call(callee).store_eax(BSS + 0x18)                  # a pointer the callee returns
           .ret())
    asm.code = asm.code.ljust(0x100, b"\x90") + b"\xc3"
    functions = [function(CODE, "f", 0x100), function(callee, "make", 1, ret = "CGame *")]
    build(tmp_path, monkeypatch, asm, b"text\0".ljust(0x40, b"\0") + b"\x01\x02", functions,
          types = {"structs": [{"name": "CGame", "len": 12}]})
    got = by_start(plan())
    assert [got[hexa(BSS + k)]["type"] for k in range(0, 0x1c, 4)] == [
        "pointer", "int", "code*", "char*", "int", "pointer", "CGame*"]


def test_arguments_type_what_is_passed(tmp_path, monkeypatch):
    callee, reg_callee, other = CODE + 0x100, CODE + 0x110, CODE + 0x120
    asm = (Asm().push_ebx()                                     # a saved register, not an argument
           .push(DATA).push(BSS).call(callee)                   # callee(BSS as CGame*, "fmt")
           .load_eax(BSS + 0x40).push_eax().push(BSS + 0x80).pop_ecx().push_eax().call(callee)
           .mov_esi(BSS + 0x20).call(reg_callee)                # register argument
           .push(BSS + 0x30).call(other)                        # untyped callee
           .push(BSS + 0x34).call(CODE + 0x1f0)                 # no function there
           .push(BSS + 0x38).call_eax()
           .ret())
    asm.code = (asm.code.ljust(0x100, b"\x90") + b"\xc3".ljust(0x10, b"\x90") + b"\xc3".ljust(0x10, b"\x90")
                + b"\xc3")
    functions = [function(CODE, "f", 0x100),
                 function(callee, "use", 1, vars = {"params": [stack_param(4, "CGame*", "game"),
                                                              stack_param(8, "char*", "format")]}),
                 function(reg_callee, "fill", 1, vars = {"params": [reg_param("ESI", "float*", "out")]}),
                 function(other, "raw", 1, vars = {"params": [stack_param(4, "undefined4"), {"name": "x"}]})]
    build(tmp_path, monkeypatch, asm, b"%d\0", functions,
          types = {"structs": [{"name": "CGame", "len": 12}, {"name": "Empty"}], "enums": None})
    got = by_start(plan())
    assert (got["00403000"]["type"], got["00403000"]["confidence"]) == ("CGame", "high")
    assert (got["00402000"]["type"], got["00402000"]["confidence"]) == ("string", "high")
    assert got["00403040"]["type"] == "CGame*"
    assert got["00403020"]["type"] == "float"            # a float* named `out` is no char buffer


def test_an_argument_of_an_unknown_type_is_a_conflict(tmp_path, monkeypatch):
    callee = CODE + 0x40
    asm = Asm().push(BSS).call(callee).push(BSS + 0x10).call(callee).push(BSS + 0x10).call(CODE + 0x41).ret()
    asm.code = asm.code.ljust(0x40, b"\x90") + b"\xc3\xc3"
    functions = [function(CODE, "f", 0x40),
                 function(callee, "use", 1, vars = {"params": [stack_param(4, "CMissing*")]}),
                 function(CODE + 0x41, "use2", 1, vars = {"params": [stack_param(4, "int*")]})]
    build(tmp_path, monkeypatch, asm, b"", functions)
    doc = plan()
    assert [c["note"] for c in doc["conflicts"]] == ["type CMissing not in the program"]
    assert by_start(doc)["00403010"]["confidence"] == "medium"


def test_caves_and_empty_bodies_are_skipped(tmp_path, monkeypatch):
    asm = Asm().load_eax(BSS).ret()
    functions = [function(CODE, "f", len(asm.code)), {"addr": hexa(CODE + 0x10), "name": "g"},
                 function(BSS + 0x800, "h", 4)]
    annotations = build(tmp_path, monkeypatch, asm, b"", functions)
    write_json(annotations / "dst.exe" / "code_caves.json", {"caves": [{"start": hexa(CODE), "total_size": 8}]})
    assert plan()["candidates"] == []
