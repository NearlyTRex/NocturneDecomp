# Builders for infer_globals tests: a tiny assembler, PE images with their
# relocations, and the annotations a program's plan reads.

# Imports
import json
import struct

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from sibling_images import install_programs, write_bucket
import infer_globals as ig


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


# --- the reference build -----------------------------------------------------------------

def reference_body(base):
    return (Asm().fld32(base).fld64(base + 8).push(base + 0x10).load_eax(base + 0x14).push(base + 0x40)
            .load_eax(base + 0x84).fld32(base + 0xc4).push(base + 0x100).load_eax(base + 0x180)
            .fld32(base + 0x1c0).ret())


# dst and ref share one function; ref's globals are defined and named
def reference_world(tmp_path, monkeypatch, ref_types = None, dst_types = None, dst_extra = None, **options):
    ref_asm, dst_asm = reference_body(DATA), reference_body(BSS)
    if dst_extra:
        dst_extra(dst_asm)
    ref_data = bytearray(0x200)
    ref_data[0x100:0x105] = b"text\0"
    ref_image, _ = pe_image(ref_asm, ref_data)
    annotations = build(tmp_path, monkeypatch, dst_asm, b"", [function(CODE, "f", len(dst_asm.code))],
                        types = dst_types or {"structs": [{"name": "CVec", "len": 12},
                                                          {"name": "CDrift", "len": 8}]},
                        extra = {"ref.exe": (ref_image, [function(CODE, "f", len(ref_asm.code))])}, **options)
    write_json(annotations / "ref.exe" / "memory_layout" / "memory_layout.json", layout(*DEFAULT_BLOCKS))
    write_bucket(annotations, "ref.exe", "applied_basic_types", [
        {"addr": hexa(DATA), "len": 4, "type": "float"}, {"addr": hexa(DATA + 8), "len": 8, "type": "double"},
        {"addr": hexa(DATA + 0xc0), "len": 4, "type": "int"}, {"addr": hexa(DATA + 0x180), "len": 4, "type": "int"}])
    write_bucket(annotations, "ref.exe", "applied_structs", [
        {"addr": hexa(DATA + 0x10), "len": 12, "name": "CVec"}, {"addr": hexa(DATA + 0x1bc), "len": 8, "name": "CDrift"}])
    write_bucket(annotations, "ref.exe", "applied_arrays", options.get("ref_arrays") or
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
            "LongLongDataType", "UnsignedLongLongDataType", "QWordDataType", "WideCharDataType")


def candidate(start, kind, **fields):
    return {"start": hexa(start), "type": kind, "count": fields.get("count"), "size": fields.get("size", 4),
            "confidence": fields.get("confidence", "high"), "name": fields.get("name", "auto"),
            "keeps_name": fields.get("keeps", False)}
