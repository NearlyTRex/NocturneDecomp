# Imports
import importlib
import json
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
import ghidra_fake
from fake_pyghidra import FakePyghidra
from ghidra_program import Program as GhidraProgram
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from sibling_images import install_programs, write_bucket
import infer_globals as ig
import sibling_match


CODE, DATA, BSS, RELOC = 0x401000, 0x402000, 0x403000, 0x404000
BSS_SIZE = 0x1000

# x86 encodings the tests assemble: name -> opcode bytes before a relocated address
FORMS = {
    "mov_byte_ah": "8825", "fld32": "d905", "fld64": "dd05", "fild32": "db05", "fnstcw": "d93d",
    "movsx8": "0fbe05", "movzx16": "0fb705", "load_eax": "a1", "load_ecx": "8b0d", "load_al": "a0",
    "store_eax": "a3", "store_esi": "8935", "indexed4": "8b0485", "indexed8": "8b04c5",
    "indexed_fld8": "dd04c5", "indexed_store": "890485", "based": "8b82", "based_store": "8882",
    "cmp_eax": "3d", "lea_esi": "8d35", "mov_esi": "be", "call_ind": "ff15",
}
# Instructions with no address: name -> bytes
PLAIN = {"deref_ecx": "8b4110", "lea_ecx_plus": "8d4101", "push_eax": "50", "pop_ecx": "59",
         "push_ebx": "53", "ret": "c3", "call_eax": "ffd0"}


def hexa(value):
    return f"{value:08x}"


def write_json(path, doc):
    path.parent.mkdir(parents = True, exist_ok = True)
    path.write_text(json.dumps(doc))


# A tiny x86 assembler: each call appends one instruction and records a base
# relocation for every absolute address it carries, as the linker would.
class Asm:
    def __init__(self, at = CODE):
        self.at = at
        self.code = bytearray()
        self.relocs = []

    @property
    def here(self):
        return self.at + len(self.code)

    def raw(self, hexbytes):
        self.code += bytes.fromhex(hexbytes)
        return self

    # `prefix` bytes, then 4-byte fields: (value, relocated)
    def op(self, prefix, *fields):
        self.code += bytes.fromhex(prefix)
        for value, relocated in fields:
            if relocated:
                self.relocs.append(self.here)
            self.code += struct.pack("<I", value & 0xFFFFFFFF)
        return self

    # The FORMS and PLAIN instructions by name: asm.fld32(address), asm.ret()
    def __getattr__(self, name):
        if name in FORMS:
            return lambda address: self.op(FORMS[name], (address, True))
        if name in PLAIN:
            return lambda: self.raw(PLAIN[name])
        raise AttributeError(name)

    def push(self, address, relocated = True):
        return self.op("68", (address, relocated))

    def store_imm(self, address, value, relocated = True):
        return self.op("c705", (address, True), (value, relocated))

    def call(self, target):
        self.code += b"\xe8" + struct.pack("<i", target - (self.here + 5))
        return self


# A .reloc section: one block per 4 KB page, HIGHLOW entries, padded to 4
def reloc_section(addresses, image_base = 0x400000):
    out = b""
    pages = {}
    for address in sorted(addresses):
        pages.setdefault((address - image_base) & ~0xFFF, []).append(address)
    for page, items in sorted(pages.items()):
        entries = [0x3000 | ((a - image_base) & 0xFFF) for a in items]
        if len(entries) % 2:
            entries.append(0)
        out += struct.pack("<II", page, 8 + 2 * len(entries)) + struct.pack(f"<{len(entries)}H", *entries)
    return out


def function(address, name, size, **extra):
    return {"addr": hexa(address), "name": name,
            "body": [{"start": hexa(address), "end": hexa(address + size - 1)}], **extra}


def stack_param(offset, kind, name = "p"):
    return {"name": name, "type": kind, "storage": {"offset": offset, "stack": True}}


def reg_param(reg, kind, name = "p"):
    return {"name": name, "type": kind, "storage": {"reg": reg}}


def layout(*blocks):
    return {"analysis": {"overview": [
        {"type": "memory_block", "name": name, "range": f"{lo:08x}-{hi - 1:08x}", "permissions": perms,
         "initialized": init}
        for name, lo, hi, perms, init in blocks] + [{"type": "gap", "name": "Gap", "range": "0-1"}]}}


DEFAULT_BLOCKS = (("Headers", 0x400000, 0x400400, "R--", True), (".text", CODE, CODE + 0x1000, "R-X", True),
                  ("DGROUP", DATA, DATA + 0x1000, "RW-", True), (".bss", BSS, BSS + BSS_SIZE, "RW-", False))


def pe_image(asm, data, extra_relocs = ()):
    reloc = reloc_section(list(asm.relocs) + list(extra_relocs))
    image = bytes(build_sectioned_pe([(".text", bytes(asm.code).ljust(0x200, b"\xcc"), SECTION_EXECUTE),
                                      ("DGROUP", bytes(data).ljust(0x200, b"\0"), 0),
                                      (".bss", b"", 0, BSS_SIZE), (".reloc", reloc, 0)]))
    return image, len(reloc)


# Writes one program: its PE (code + data + bss + relocs) and its annotations
def build(tmp_path, monkeypatch, asm, data, functions, **options):
    name = options.get("name", "dst.exe")
    image, reloc_size = pe_image(asm, data, options.get("data_relocs", ()))
    if options.get("reloc_dir"):
        # point data directory 5 at the .reloc section instead of finding it by name
        image = bytearray(image)
        opt = struct.unpack_from("<I", image, 0x3c)[0] + 24
        struct.pack_into("<II", image, opt + 96 + 5 * 8, RELOC - 0x400000, reloc_size)
        image = bytes(image)
    programs = {name: (image, functions), **options.get("extra", {})}
    annotations = install_programs(monkeypatch, tmp_path, programs)
    write_json(annotations / name / "memory_layout" / "memory_layout.json",
               layout(*options.get("blocks", DEFAULT_BLOCKS)))
    for kind, records in options.get("defined", {}).items():
        write_bucket(annotations, name, kind, records)
    write_bucket(annotations, name, "symbols_label",
                 [{"addr": hexa(a), "name": n} for a, n in options.get("labels", ())])
    write_json(annotations / name / "data_types" / "data_types.json",
               options.get("types", {"structs": [], "typedefs": []}))
    return annotations


def plan(**kwargs):
    return ig.plan("dst.exe", **kwargs)


def by_start(doc):
    return {c["start"]: c for c in doc["candidates"]}


# One function per entry of `groups`, each a callable that assembles its body
def functions_of(groups):
    asm, functions = Asm(), []
    for index, group in enumerate(groups):
        start = asm.here
        group(asm).ret()
        functions.append(function(start, f"f{index}", asm.here - start))
    return asm, functions


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


# --- strings and buffers -------------------------------------------------------------

def test_strings_literals_and_buffers(tmp_path, monkeypatch):
    strcpy = CODE + 0x100
    data = bytearray(0x100)
    data[0x00:0x04] = b"abc\0"          # taken: a literal
    data[0x10:0x13] = b"ab\0"           # taken but too short to trust
    data[0x20:0x26] = b"name1\0"        # written to: an initialised buffer
    data[0x40:0x45] = b"dst1\0"         # handed to strcpy as the destination
    data[0x60:0x64] = b"bad\x01"        # not printable
    data[0x70:0x74] = b"xyz\0"          # read as a dword: not a string
    asm = (Asm().push(DATA).push(DATA + 0x10).mov_byte_ah(DATA + 0x22).push(DATA + 0x20)
           .push(DATA + 0x40).call(strcpy).push(BSS + 0x100).call(strcpy)
           .push(DATA + 0x60).load_eax(DATA + 0x70).push(DATA + 0x70).ret())
    asm.code = asm.code.ljust(0x100, b"\x90") + b"\xc3"
    functions = [function(CODE, "f", 0x100),
                 function(strcpy, "strcpy", 1, vars = {"params": [stack_param(4, "char*", "dest")]})]
    build(tmp_path, monkeypatch, asm, data, functions)
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402000"]["size"]) == ("string", 4)
    assert "00402010" not in got
    assert (got["00402020"]["type"], got["00402020"]["count"]) == ("char", 0x20)
    assert (got["00402040"]["type"], got["00402040"]["count"]) == ("char", 0x20)   # up to the next global
    assert (got["00403100"]["type"], got["00403100"]["confidence"]) == ("char", "medium")
    assert "00402060" not in got
    assert got["00402070"]["type"] == "int"


def test_a_string_tail_belongs_to_the_string_it_ends(tmp_path, monkeypatch):
    data = bytearray(0x40)
    data[0x01:0x0a] = b"prefixEnd"      # code points at "End" and at the start
    data[0x10] = 0x40                    # the top byte of a constant before "name"
    data[0x11:0x16] = b"name\0"
    data[0x20:0x26] = b"plain\0"
    asm = Asm().push(DATA + 0x07).push(DATA + 0x01).push(DATA + 0x11).push(DATA + 0x22).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))])
    got = by_start(plan())
    assert got["00402001"]["note"] == "'prefixEnd'" and "00402007" not in got
    assert got["00402011"]["type"] == "string"
    assert got["00402022"]["note"] == "'ain'"          # "plain" itself is never referenced


def test_a_buffer_stops_at_a_definition(tmp_path, monkeypatch):
    data = bytearray(0x40)
    data[0:4] = b"abc\0"
    asm = Asm().based_store(DATA + 1).push(DATA).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          defined = {"applied_basic_types": [{"addr": hexa(DATA + 0x10), "len": 4, "type": "int"}]})
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402000"]["count"]) == ("char", 0x10)


# --- pointer tables ---------------------------------------------------------------------

def test_relocated_runs_in_data(tmp_path, monkeypatch):
    data = bytearray(0x100)
    data[0x80:0x84] = b"one\0"
    data[0x84:0x88] = b"two\0"
    entries = {0x00: CODE + 0x10, 0x04: CODE + 0x20,           # a function table
               0x10: DATA + 0x80, 0x14: DATA + 0x84,           # a string table
               0x20: DATA + 0x80, 0x24: CODE + 0x10,           # mixed: a struct's fields
               0x30: CODE + 0x30,                              # a lone code pointer nobody uses
               0x40: DATA + 0x84,                              # a lone string pointer code reads
               0x50: 0x900000}                                 # points nowhere
    for offset, value in entries.items():
        struct.pack_into("<I", data, offset, value)
    asm = Asm().load_eax(DATA + 0x40).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          data_relocs = [DATA + offset for offset in entries] + [BSS + 4])
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402000"]["count"]) == ("code*", 2)
    assert (got["00402010"]["type"], got["00402010"]["count"]) == ("char*", 2)
    assert got["00402080"]["type"] == got["00402084"]["type"] == "string"
    assert not {"00402020", "00402024", "00402030"} & set(got)
    assert (got["00402040"]["type"], got["00402040"]["count"], got["00402040"]["confidence"]) == \
        ("char*", None, "medium")


# --- arrays -------------------------------------------------------------------------------

def test_arrays_and_their_extent(tmp_path, monkeypatch):
    # one function per array, so an end marker is only seen by the array it ends
    asm, functions = functions_of([
        lambda a: a.indexed4(BSS).load_eax(BSS + 8).load_eax(BSS + 4).fld32(BSS + 0x10),   # int[4]
        lambda a: (a.indexed4(BSS + 0x40).indexed_store(BSS + 0x40).cmp_eax(BSS + 0x40 + 0x18)
                   .indexed4(BSS + 0x3c)),                                                  # int[6], arr[i-1]
        lambda a: a.indexed4(BSS + 0x80).indexed4(BSS + 0x84).lea_esi(BSS + 0x84),          # LEA anchors
        lambda a: a.indexed8(BSS + 0x100),                                                  # 8-byte stride
        lambda a: a.indexed_fld8(BSS + 0x140).load_eax(BSS + 0x146),                        # misaligned read
        lambda a: a.indexed4(BSS + 0xff0),                                                  # to the block end
    ])
    build(tmp_path, monkeypatch, asm, b"", functions)
    doc = plan()
    got = by_start(doc)
    assert (got["00403000"]["type"], got["00403000"]["count"], got["00403000"]["bounded"]) == \
        ("int", 4, "next global")
    assert (got["00403040"]["count"], got["00403040"]["bounded"], got["00403040"]["confidence"]) == \
        (6, "end marker", "high")
    assert "0040303c" not in got
    assert got["00403084"]["count"] and "00403080" not in got      # the LEA anchors the start
    assert any(c["type"] == "struct8" for c in doc["conflicts"])
    assert "00403140" not in got and got["00403146"]["type"] == "int"   # not one whole element
    assert (got["00403ff0"]["count"], got["00403ff0"]["bounded"]) == (4, "block or definition")


def test_an_end_marker_off_the_element_grid_is_ignored(tmp_path, monkeypatch):
    asm = Asm().indexed4(BSS).cmp_eax(BSS + 6).cmp_eax(BSS + 0x10).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))])
    got = by_start(plan())
    assert (got["00403000"]["count"], got["00403000"]["bounded"]) == (4, "end marker")


def test_an_array_with_nothing_after_it_is_a_lower_bound(tmp_path, monkeypatch):
    asm = Asm().indexed4(BSS).load_eax(BSS + 8).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))],
          blocks = DEFAULT_BLOCKS[:3] + ((".bss", BSS, BSS + 0x100000, "RW-", False),))
    program = ig.Program("dst.exe")
    inferrer = ig.Inferrer(program, ig.Scanner(program).scan_all(), max_array = 0x20)
    inferrer.run()
    assert [(c.count, c.bounded) for c in inferrer.candidates] == [(3, "last access (lower bound)")]


def test_an_empty_array_is_dropped(tmp_path, monkeypatch):
    asm = Asm().ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", 1)])
    inferrer = ig.Inferrer(ig.Program("dst.exe"), [ig.Evidence(BSS, "indexed", scale = 4, size = 4)])
    inferrer.sorted_keys = [BSS]
    inferrer.array_end = lambda base, t, elem: None
    inferrer.place_arrays()
    inferrer.array_end = lambda base, t, elem: (base + 2, "next global")
    inferrer.place_arrays()
    assert not inferrer.candidates


# --- definitions, labels and conflicts ---------------------------------------------------

def test_existing_definitions_and_labels(tmp_path, monkeypatch):
    asm = (Asm().load_eax(BSS).load_eax(BSS + 0x10).fld64(BSS + 0x1c).load_eax(BSS + 0x40)
           .fld32(BSS + 0xffe).ret())
    defined = {"applied_basic_types": [{"addr": hexa(BSS), "len": 4, "type": "int"},
                                       {"addr": hexa(BSS + 0x40), "len": 4, "type": "undefined4"},
                                       {"addr": hexa(BSS + 0x20), "len": 4, "type": "float"}],
               "applied_strings": [{"len": 1}]}
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))], defined = defined,
          labels = [(BSS + 0x10, "g_Named"), (BSS + 0x40, "DAT_00403040")])
    doc = plan()
    got = by_start(doc)
    assert doc["already_defined"] == 1
    assert (got["00403010"]["name"], got["00403010"]["keeps_name"]) == ("g_Named", True)
    assert got["00403040"]["name"] == "g_INT_00403040"
    assert sorted(c["note"] for c in doc["conflicts"]) == [
        "blocked by crosses a block boundary", "blocked by existing float at 00403020"]


def test_overlapping_candidates_are_refused(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)])
    inferrer = ig.Inferrer(ig.Program("dst.exe"), [])
    assert inferrer.place(ig.Candidate(BSS + 4, "int", None, 4, "high", {}))
    assert not inferrer.place(ig.Candidate(BSS, "double", None, 8, "high", {}, note = "n"))
    assert not inferrer.place(ig.Candidate(BSS + 6, "short", None, 2, "high", {}))
    assert not inferrer.place(ig.Candidate(BSS + 0x10, "int", None, 0, "high", {}))
    assert [c.note for c in inferrer.conflicts] == ["n; blocked by candidate at 00403004", "blocked by empty"]


def test_check_no_overlaps(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)],
          defined = {"applied_basic_types": [{"addr": hexa(BSS + 0x20), "len": 4, "type": "int"}]})
    program = ig.Program("dst.exe")
    fine = [ig.Candidate(BSS, "int", None, 4, "high", {}), ig.Candidate(BSS + 4, "int", None, 4, "high", {})]
    ig.check_no_overlaps(program, fine)
    with pytest.raises(ValueError, match = "candidates overlap"):
        ig.check_no_overlaps(program, fine + [ig.Candidate(BSS + 6, "int", None, 4, "high", {})])
    with pytest.raises(ValueError, match = "existing definition"):
        ig.check_no_overlaps(program, [ig.Candidate(BSS + 0x1e, "int", None, 4, "high", {})])
    with pytest.raises(ValueError, match = "existing definition"):
        ig.check_no_overlaps(program, [ig.Candidate(BSS + 0x20, "int", None, 4, "high", {})])


def test_auto_strings_that_start_early(tmp_path, monkeypatch):
    data = bytearray(0x80)
    struct.pack_into("<d", data, 0x00, 6.0)        # ...0x18 0x40: '@' starts the string below
    data[0x08:0x0d] = b"name\0"
    data[0x10:0x18] = b"??speed\0"                  # starts 2 early; code points at "speed"
    data[0x20:0x26] = b"keep\0\0"                   # named by a person: left alone
    data[0x30:0x35] = b"good\0"
    asm = Asm().fld64(DATA).push(DATA + 0x08).push(DATA + 0x12).push(DATA + 0x30).fld64(DATA + 0x18).ret()
    strings = [{"addr": hexa(DATA + 0x07), "len": 6, "type": "TerminatedCString"},
               {"addr": hexa(DATA + 0x10), "len": 8, "type": "TerminatedCString"},
               {"addr": hexa(DATA + 0x1f), "len": 6, "type": "TerminatedCString"},
               {"addr": hexa(DATA + 0x30), "len": 5, "type": "TerminatedCString"}]
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          defined = {"applied_strings": strings}, labels = [(DATA + 0x1f, "s_keep")])
    doc = plan()
    assert [r["start"] for r in doc["replaced_definitions"]] == ["00402007", "00402010"]
    got = by_start(doc)
    assert got["00402000"]["type"] == "double"
    assert got["00402008"]["type"] == got["00402012"]["type"] == "string"
    assert any("existing TerminatedCString at 0040201f" in c["note"] for c in doc["conflicts"])


def test_contradicted_strings(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)],
          defined = {"applied_strings": [{"addr": hexa(DATA), "len": 4, "type": "TerminatedCString"}],
                     "applied_basic_types": [{"addr": hexa(DATA + 4), "len": 4, "type": "int"}]})
    program = ig.Program("dst.exe")
    weak = ig.Candidate(DATA, "double", None, 8, "medium", {})
    mixed = ig.Candidate(DATA, "double", None, 8, "high", {})
    clear = ig.Candidate(DATA + 0x10, "int", None, 4, "high", {})
    assert not ig.contradicted_strings(program, [weak, mixed, clear])
    swallowed = ig.Candidate(DATA - 4, "double", None, 8, "high", {})
    assert ig.contradicted_strings(program, [swallowed]) == {DATA: ("TerminatedCString", 4)}


# --- the reference build -------------------------------------------------------------------

def reference_body(base):
    return (Asm().fld32(base).fld64(base + 8).push(base + 0x10).load_eax(base + 0x14).push(base + 0x40)
            .load_eax(base + 0x84).fld32(base + 0xc4).push(base + 0x100).load_eax(base + 0x180)
            .fld32(base + 0x1c0).ret())


# dst and ref share one function; ref's globals are defined and named
def reference_world(tmp_path, monkeypatch, ref_types = None, dst_types = None, dst_extra = None):
    ref_asm, dst_asm = reference_body(DATA), reference_body(BSS)
    if dst_extra:
        dst_extra(dst_asm)
    ref_data = bytearray(0x200)
    ref_data[0x100:0x105] = b"text\0"
    ref_image, _ = pe_image(ref_asm, ref_data)
    annotations = build(tmp_path, monkeypatch, dst_asm, b"", [function(CODE, "f", len(dst_asm.code))],
                        types = dst_types or {"structs": [{"name": "CVec", "len": 12},
                                                          {"name": "CDrift", "len": 8}]},
                        extra = {"ref.exe": (ref_image, [function(CODE, "f", len(ref_asm.code))])})
    write_json(annotations / "ref.exe" / "memory_layout" / "memory_layout.json", layout(*DEFAULT_BLOCKS))
    write_bucket(annotations, "ref.exe", "applied_basic_types", [
        {"addr": hexa(DATA), "len": 4, "type": "float"}, {"addr": hexa(DATA + 8), "len": 8, "type": "double"},
        {"addr": hexa(DATA + 0xc0), "len": 4, "type": "int"}, {"addr": hexa(DATA + 0x180), "len": 4, "type": "int"}])
    write_bucket(annotations, "ref.exe", "applied_structs", [
        {"addr": hexa(DATA + 0x10), "len": 12, "name": "CVec"}, {"addr": hexa(DATA + 0x1bc), "len": 8, "name": "CDrift"}])
    write_bucket(annotations, "ref.exe", "applied_arrays",
                 [{"addr": hexa(DATA + 0x40), "len": 64, "type": "int", "count": 16}])
    write_bucket(annotations, "ref.exe", "applied_strings",
                 [{"addr": hexa(DATA + 0x100), "len": 5, "type": "TerminatedCString"}])
    write_bucket(annotations, "ref.exe", "symbols_label", [{"addr": hexa(DATA + 0x10), "name": "g_Vec"}])
    write_json(annotations / "ref.exe" / "data_types" / "data_types.json",
               ref_types or {"structs": [{"name": "CVec", "len": 12}, {"name": "CDrift", "len": 12}]})
    write_json(annotations / "dst.exe" / "reports" / "sibling_mapping_from_ref.json", {"pairs": [
        {"a": hexa(CODE), "b": hexa(CODE), "confidence": 1.0},
        {"a": hexa(CODE), "b": hexa(CODE), "confidence": 0.5},
        {"a": hexa(CODE), "b": hexa(CODE), "confidence": 1.0, "ambiguous": True},
        {"a": "00409000", "b": hexa(CODE), "confidence": 1.0}]})
    return annotations


def test_the_reference_types_aligned_operands(tmp_path, monkeypatch):
    reference_world(tmp_path, monkeypatch)
    got = by_start(plan(reference_name = "ref.exe"))
    assert (got["00403000"]["type"], got["00403000"]["note"]) == ("float", "reference: float@00402000")
    assert got["00403008"]["type"] == "double"
    assert (got["00403010"]["type"], got["00403010"]["note"]) == ("CVec", "reference: g_Vec")
    assert (got["00403040"]["type"], got["00403040"]["count"]) == ("int", 16)
    assert "00403100" not in got                        # a string, but .bss has no bytes to read
    assert got["004031c0"]["type"] == "float"         # the drifted struct's interior is not trusted
    assert got["00403180"]["type"] == "int"


def test_this_build_overrides_a_reference_type_it_changed(tmp_path, monkeypatch):
    reference_world(tmp_path, monkeypatch, dst_extra = lambda a: a.fld64(BSS + 0x180).ret())
    assert by_start(plan(reference_name = "ref.exe"))["00403180"]["type"] == "double"


def test_reference_types_the_target_lacks(tmp_path, monkeypatch):
    annotations = reference_world(tmp_path, monkeypatch, dst_types = {"structs": [{"name": "CDrift", "len": 8}]},
                                  ref_types = {"structs": [{"name": "CDrift", "len": 8}]})
    mapping = annotations / "dst.exe" / "reports" / "sibling_mapping_from_ref.json"
    doc = plan(reference_name = "ref.exe", mapping_path = str(mapping))
    got = by_start(doc)
    assert "00403010" not in got and got["00403014"]["type"] == "int"   # CVec unknown here: the access
    # CDrift is matched only through +4, a single operand inside it: not trusted
    assert any(c["start"] == "004031bc" and c["note"] == "one reference operand, inside the object"
               for c in doc["conflicts"])


def test_a_build_whose_typed_accesses_break_the_reference_layout(tmp_path, monkeypatch):
    # dst multiplies by a float at +4 of what the reference reads as one double
    reference_world(tmp_path, monkeypatch, dst_extra = lambda a: a.fld32(BSS + 0xc).ret())
    doc = plan(reference_name = "ref.exe")
    assert any(c["start"] == "00403008" and c["note"] == "this build's accesses do not fit the reference layout"
               for c in doc["conflicts"])
    assert by_start(doc)["00403008"]["note"] is None        # from this build's own access, not the reference


def test_reference_votes_split_and_size_mismatch(tmp_path, monkeypatch):
    reference_world(tmp_path, monkeypatch)
    evidence = [ig.Evidence(BSS + 0x200, "sibling", type = "float", size = 4, note = "a"),
                ig.Evidence(BSS + 0x200, "sibling", type = "float", size = 4, note = "a"),
                ig.Evidence(BSS + 0x200, "sibling", type = "int", size = 4, note = "b"),
                ig.Evidence(BSS + 0x300, "sibling", type = "float", size = 8, note = "c")]
    inferrer = ig.Inferrer(ig.Program("dst.exe"), evidence)
    inferrer.run()
    assert [(c.type, c.confidence) for c in inferrer.candidates] == [("float", "medium")]
    assert ig.ReferenceObjects(ig.Program("ref.exe")).containing(0x500000) is None
    assert ig.element_type("int[16]") == "int"


# --- report, outputs, main ---------------------------------------------------------------

def test_render_and_write(tmp_path, monkeypatch):
    data = bytearray(0x40)
    struct.pack_into("<d", data, 0, 6.0)
    data[0x08:0x0d] = b"name\0"
    asm = Asm().fld64(DATA).push(DATA + 8).indexed4(BSS).load_eax(0x900000).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          defined = {"applied_strings": [{"addr": hexa(DATA + 7), "len": 6, "type": "TerminatedCString"}],
                     "applied_basic_types": [{"addr": hexa(BSS + 0xc), "len": 4, "type": "int"}]})
    doc = plan()
    doc["conflicts"].append(ig.Candidate(BSS, "int", 3, 12, "low", {}, note = "x").as_json())
    text = ig.render(doc)
    assert "AUTO-CREATED STRINGS TO REPLACE" in text and "CONFLICTS (NOT PLACED)" in text
    assert "REFERENCES OUTSIDE EVERY BLOCK" in text and "int[3]" in text
    json_path, _ = ig.write_outputs(doc, "dst.exe", str(tmp_path / "out"))
    with open(json_path, encoding = "utf-8") as handle:
        assert json.load(handle)["program"] == "dst.exe"
    ig.write_outputs({**doc, "replaced_definitions": [], "conflicts": [], "unmapped": {}}, "dst.exe")


def test_type_sizes_and_strings_edge_cases(tmp_path, monkeypatch):
    annotations = build(tmp_path, monkeypatch, Asm().ret(), b"\x01" * 0x200, [function(CODE, "f", 1)])
    (annotations / "dst.exe" / "data_types" / "data_types.json").unlink()
    program = ig.Program("dst.exe")
    assert program.type_sizes == {} and program.size_of("CThing") is None and program.size_of("X *") == 4
    assert program.read_string(DATA) is None and program.read_string(BSS) is None
    assert program.block_of(0x300000) is None and not program.is_code(DATA)
    assert program.next_defined(BSS) is None
    inferrer = ig.Inferrer(program, [])
    assert not inferrer.looks_like_float(BSS)
    inferrer.place_string(DATA + 0x300, "high", {})       # past the data: nothing to place
    assert not inferrer.candidates
    assert ig.scalar_type([]) == "int"


def test_looks_like_float(tmp_path, monkeypatch):
    data = bytearray(0x20)
    struct.pack_into("<f", data, 0, 1.0)
    struct.pack_into("<I", data, 4, 7)
    asm = Asm().load_eax(DATA).load_eax(DATA + 4).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))])
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402004"]["type"]) == ("float", "int")


# --- apply -----------------------------------------------------------------------------------

class Placeholder:
    """A built-in data type the fake does not model: a name and a length."""

    def __init__(self, name, length = 4):
        self.name, self.length = name, length

    def getName(self):  # pylint: disable=invalid-name
        return self.name

    def getLength(self):  # pylint: disable=invalid-name
        return self.length

    def getDisplayName(self):  # pylint: disable=invalid-name
        return self.name


BUILTINS = ("ByteDataType", "CharDataType", "UnsignedCharDataType", "ShortDataType", "UnsignedShortDataType",
            "IntegerDataType", "UnsignedIntegerDataType", "FloatDataType", "DoubleDataType", "Float10DataType",
            "LongLongDataType", "UnsignedLongLongDataType", "QWordDataType")


@pytest.fixture(name = "ghidra")
def fixture_ghidra(monkeypatch):
    ghidra_fake.install()
    data_module = importlib.import_module("ghidra.program.model.data")
    for name in BUILTINS:
        monkeypatch.setattr(data_module, name, type(name, (), {"dataType": Placeholder(name)}), raising = False)
    monkeypatch.setattr(data_module.TerminatedStringDataType, "dataType", data_module.TerminatedStringDataType(),
                        raising = False)
    monkeypatch.setattr(data_module, "PointerDataType", lambda target, dtm: Placeholder("pointer"))
    monkeypatch.setattr(data_module, "ArrayDataType", lambda dt, count, size: Placeholder("array", count * size))
    monkeypatch.setattr(data_module.Undefined, "isUndefined",
                        staticmethod(lambda t: t.getName() == "undefined1"), raising = False)
    return data_module


def candidate(start, kind, **fields):
    return {"start": hexa(start), "type": kind, "count": fields.get("count"), "size": fields.get("size", 4),
            "confidence": fields.get("confidence", "high"), "name": fields.get("name", "auto"),
            "keeps_name": fields.get("keeps", False)}


@pytest.mark.usefixtures("ghidra")
def test_apply_dry_run_checks_every_row_live(monkeypatch):
    program = GhidraProgram()
    program.getDataTypeManager().add(Placeholder("CGame", 12))
    listing = program.getListing()
    listing.add_data(BSS + 0x40, Placeholder("float"))                     # blocks a candidate
    listing.add_data(BSS + 0x50, Placeholder("undefined1"), length = 1)    # replaceable
    listing.add_data(BSS + 0x60, Placeholder("undefined *"))               # replaceable
    listing.add_data(DATA, Placeholder("string"), length = 6)              # the plan clears it
    listing.add_data(DATA + 0x10, Placeholder("string"), length = 3)       # changed since the export
    listing.add_data(DATA + 0x20, Placeholder("int"), length = 6)          # no longer a string
    fake = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    doc = {"replaced_definitions": [{"start": hexa(DATA + k), "size": 6} for k in (0, 0x10, 0x20, 0x30)],
           "candidates": [candidate(BSS, "int"), candidate(BSS + 4, "float", confidence = "low"),
                          candidate(BSS + 8, "CMissing"), candidate(BSS + 0x40, "int"),
                          candidate(BSS + 0x50, "int"), candidate(BSS + 0x60, "int"),
                          candidate(BSS + 0x70, "CGame"), candidate(BSS + 0x80, "CGame*"),
                          candidate(BSS + 0x90, "code*"), candidate(BSS + 0xa0, "pointer"),
                          candidate(BSS + 0xb0, "CMissing*"), candidate(BSS + 0xc0, "int", count = 4, size = 16),
                          candidate(DATA + 1, "string", size = 5, name = None)]}
    rows = ig.apply_plan("projects", "P", "dst.exe", doc, replace_strings = True)
    outcome = {r[0]: r[2] for r in rows}
    assert outcome["00402000"] == "would clear"
    assert {outcome[hexa(DATA + k)] for k in (0x10, 0x20, 0x30)} == {"changed since export, left alone"}
    assert outcome["00403000"] == "would define"
    assert outcome["00403004"] == "below --min-confidence"
    assert outcome["00403008"] == outcome["004030b0"] == "type not in the program"
    assert outcome["00403040"].startswith("blocked by float at")
    assert {outcome[hexa(BSS + k)] for k in (0x50, 0x60, 0x70, 0x80, 0x90, 0xa0, 0xc0)} == {"would define"}
    assert outcome["00402001"] == "would define"
    assert fake.closed == 1 and not listing.cleared


@pytest.mark.usefixtures("ghidra")
def test_apply_defines_and_labels(monkeypatch):
    program = GhidraProgram()
    listing = program.getListing()
    listing.add_data(DATA, Placeholder("string"), length = 6)
    symbols = program.getSymbolTable()
    symbols.createLabel(ghidra_fake.Address(DATA), "s_old_00402000", "USER_DEFINED")      # the misplaced string's
    symbols.createLabel(ghidra_fake.Address(DATA), "g_Other", "USER_DEFINED")             # not a string label
    symbols.createLabel(ghidra_fake.Address(BSS + 4), "g_Kept", "USER_DEFINED")           # a chosen name
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program))
    doc = {"replaced_definitions": [{"start": hexa(DATA), "size": 6}],
           "candidates": [candidate(BSS, "int"), candidate(BSS + 4, "int", keeps = True),
                          candidate(DATA + 1, "string", size = 5)]}
    rows = ig.apply_plan("projects", "P", "dst.exe", doc, apply = True, replace_strings = True)
    assert [r[2] for r in rows] == ["cleared", "defined, labelled", "defined", "defined, labelled"]
    # labels come from create_label_for_data (named after the fake's placeholder types here)
    names = [s.getName() for s in symbols.getAllSymbols(True)]
    assert any(n.startswith("g_") and n.endswith("_00403000") for n in names)
    assert "s_old_00402000" not in names and "g_Other" in names
    assert names.count("g_Kept") == 1 and not any(n.endswith("_00403004") for n in names)
    assert listing.cleared


@pytest.mark.usefixtures("ghidra")
def test_apply_clears_placeholders_and_reports_refusals(monkeypatch):
    program = GhidraProgram()
    listing = program.getListing()
    listing.add_data(BSS - 8, Placeholder("float"))                       # before the range: kept
    listing.add_data(BSS + 4, Placeholder("undefined1 *"))                # an auto pointer: cleared
    listing.add_data(BSS + 0x20, Placeholder("float"))                    # after the range: kept
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program))
    utilities = importlib.import_module("ghidra.program.model.data").DataUtilities
    real_create = utilities.createData

    def create(prog, address, data_type, length, stack, mode):
        if address.getOffset() == BSS + 0x10:
            raise RuntimeError("ghidra.program.model.util.CodeUnitInsertionException: Could not create Data")
        return real_create(prog, address, data_type, length, stack, mode)
    monkeypatch.setattr(utilities, "createData", staticmethod(create))
    doc = {"replaced_definitions": [],
           "candidates": [candidate(BSS, "int", count = 2, size = 8), candidate(BSS + 0x10, "int")]}
    rows = ig.apply_plan("projects", "P", "dst.exe", doc, apply = True)
    assert [r[2] for r in rows] == ["defined, labelled", "refused: Could not create Data"]
    assert [c[0].getOffset() for c in listing.cleared] == [BSS + 4]


def test_main_plans_and_dry_runs(tmp_path, monkeypatch, capsys):
    asm = Asm().load_eax(BSS).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))])
    out_dir = str(tmp_path / "out")
    assert ig.main(["--program", "dst.exe", "--out-dir", out_dir]) == 0
    assert "1 candidates" in capsys.readouterr().out
    monkeypatch.setattr(ig, "apply_plan", lambda *a: [("00403000", "int", "would define"),
                                                      ("00403004", "int", "blocked by float at 00403004")])
    assert ig.main(["--program", "dst.exe", "--out-dir", out_dir, "--project", "p"]) == 0
    out = capsys.readouterr().out
    assert "[dry-run]" in out and "blocked by float" in out
    monkeypatch.setattr(ig, "apply_plan", lambda *a: [])
    assert ig.main(["--program", "dst.exe", "--out-dir", out_dir, "--project", "p", "--apply"]) == 0
    assert "[dry-run]" not in capsys.readouterr().out


def test_runs_as_a_script(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)])
    monkeypatch.setattr(sys, "argv", ["infer_globals.py", "--program", "dst.exe", "--out-dir", str(tmp_path)])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(ig.__file__, run_name = "__main__")
    assert stop.value.code == 0
