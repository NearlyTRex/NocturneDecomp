#!/usr/bin/env python3
"""Infer the globals a program has not defined yet: where each starts, its type, and
whether it is an array and how long.

Reads the PE bytes and the exported annotations; no Ghidra unless --apply.

Every absolute address in code carries a base relocation, so the .reloc table says
exactly which operands are addresses -- immediates that merely look like one (a
size, a colour) are never mistaken for globals, and an address loaded with
`MOV reg,imm32`, which Ghidra makes no reference for, is still seen. Each function
body is decoded with capstone and every relocated operand that lands in a data
block (initialised data, .bss, or the RUNTIME_HEAP block that holds the rest of
.bss) becomes evidence:

  access      `[G]` read or written with an operand size: FPU loads and stores say
              float/double, FILD/FIST say a sized integer, MOVSX/MOVZX the sign
  indexed     `[reg*scale + G]`: an array at G with elements of `scale` bytes
  based       `[reg + G]`: an aggregate at G reached through a computed offset
  pointer     a value loaded from G that is then dereferenced, called through, or
              stored there from a relocated address (a code target is a function
              pointer)
  argument    G (or a value loaded from G) handed to a function whose prototype
              types that parameter: `char *` makes the bytes at G a string, `CGame *`
              makes G a CGame. A pointer a call returned and that is stored to G
              types G the same way.
  end marker  `CMP reg, G+N`: a pointer walk over an array that ends at G+N
  table       consecutive relocated dwords inside initialised data: an array of
              string, function or data pointers
  sibling     --reference: functions the sibling mapping pairs with the reference
              program are aligned instruction by instruction, and each address the
              target uses is matched to the reference's defined global at the same
              operand. The reference's type and element count carry over.

Evidence is merged into candidate objects, strongest source first, and an object
only claims bytes no stronger object or existing definition holds. An array runs
from its base over every later address that reads like one of its elements, and
stops at the next address that does not -- or at an end marker, which is exact.

Output: annotations/<program>/reports/inferred_globals.{txt,json}. Each candidate
has its range, type, element count, confidence, the evidence behind it and an
automatic name `g_<type>_<address>` (strings keep Ghidra's own `s_` label).

    python3 scripts/Python/infer_globals.py --program bw1.exe --reference nocedit.exe
    python3 scripts/Python/infer_globals.py --program bw1.exe --reference nocedit.exe \\
        --project projects --project-name NocturneEdit --apply [--min-confidence high]

--apply defines the data and labels in the Ghidra program. It only replaces
undefined data, never a defined type; snapshot the project first.

#@author NearlyTRex
#@category Annotations
"""

import argparse
import bisect
import difflib
import json
import logging
import os
import re
import struct
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import sibling_match as sm  # noqa: E402

from capstone import CS_ARCH_X86, CS_MODE_32, Cs  # noqa: E402
from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_OP_REG  # noqa: E402

# Blocks that hold no program globals: the PE header, the import table, the
# relocations themselves and the resources.
NON_DATA_BLOCKS = frozenset(("Headers", ".idata", ".reloc", ".rsrc"))
DEFINED_KINDS = ("applied_basic_types", "applied_arrays", "applied_structs", "applied_unions",
                 "applied_enums", "applied_pointers", "applied_strings")
CONFIDENCE = ("high", "medium", "low")
STRING_TYPES = frozenset(("string", "TerminatedCString"))
# Parameter names that receive written bytes: what is passed there is a buffer
DEST_NAMES = frozenset(("dest", "dst", "destination", "buffer", "buf", "out", "output",
                        "out_buffer", "target"))
# ...when the parameter points at bytes: a `float *out` is a float, not a buffer
BYTE_POINTEES = frozenset((None, "char", "uchar", "byte", "undefined1"))

BUILTIN_SIZES = {
    "byte": 1, "char": 1, "uchar": 1, "bool": 1,
    "short": 2, "ushort": 2, "word": 2,
    "int": 4, "uint": 4, "long": 4, "ulong": 4, "dword": 4, "float": 4, "pointer": 4,
    "double": 8, "longlong": 8, "ulonglong": 8, "qword": 8,
    "float10": 10,
}
FLOAT_BY_SIZE = {4: "float", 8: "double", 10: "float10"}
FINT_BY_SIZE = {2: "short", 4: "int", 8: "longlong"}
PLAIN_BY_SIZE = {1: "byte", 2: "short", 4: "int", 8: "qword"}
# x87 ops that move or compute on a real in memory, and their integer forms
FPU_REAL = frozenset(("fld", "fst", "fstp", "fadd", "fsub", "fsubr", "fmul", "fdiv", "fdivr",
                      "fcom", "fcomp"))
FPU_INT = frozenset(("fild", "fist", "fistp", "fiadd", "fisub", "fisubr", "fimul", "fidiv",
                     "fidivr", "ficom", "ficomp"))
FPU_WORD = frozenset(("fldcw", "fnstcw", "fstcw", "fnstsw", "fstsw"))
# Registers a call may clobber under every convention in use
CALL_CLOBBERS = ("eax", "ecx", "edx")
WRITE = 2


# --------------------------------------------------------------------------
# PE relocations
# --------------------------------------------------------------------------

def parse_relocations(data, image_base, sections):
    """VAs of every 4-byte field the loader relocates (IMAGE_REL_BASED_HIGHLOW).

    Found through data directory 5, or the `.reloc` section when the directory
    is empty."""
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    opt = e_lfanew + 24
    rva, size = struct.unpack_from("<II", data, opt + 96 + 5 * 8)
    start = None
    for s in sections:
        if rva and s.raw_off and s.va <= image_base + rva < s.va + s.raw_size:
            start = s.raw_off + image_base + rva - s.va
        elif not rva and s.name == ".reloc" and s.raw_off:
            start, size = s.raw_off, s.raw_size
    out = set()
    if start is None:
        return out
    p, end = start, start + size
    while p + 8 <= end:
        page, block = struct.unpack_from("<II", data, p)
        if block < 8:
            break
        for k in range(p + 8, min(p + block, end), 2):
            entry, = struct.unpack_from("<H", data, k)
            if entry >> 12 == 3:
                out.add(image_base + page + (entry & 0xFFF))
        p += block
    return out


# --------------------------------------------------------------------------
# Program model
# --------------------------------------------------------------------------

def parse_range(text):
    lo, hi = text.split("-")
    return int(lo, 16), int(hi, 16)


def load_blocks(program):
    """[(start, end_exclusive, name, initialized)] of the program's data blocks."""
    path = os.path.join(sm.ANNOTATIONS, program, "memory_layout", "memory_layout.json")
    with open(path) as fh:
        overview = json.load(fh)["analysis"]["overview"]
    out = []
    for b in overview:
        if b.get("type") != "memory_block" or b["name"] in NON_DATA_BLOCKS:
            continue
        if "X" in b.get("permissions", ""):
            continue
        lo, hi = parse_range(b["range"])
        out.append((lo, hi + 1, b["name"], bool(b.get("initialized"))))
    return sorted(out)


def is_undefined_type(name):
    return name.startswith("undefined")


def load_defined(program):
    """[(start, length, type, count)] of data the program already defines.

    `undefinedN` is what auto-analysis leaves at a referenced address; it is
    not a definition and is left out, so a candidate may replace it."""
    out = []
    for kind in DEFINED_KINDS:
        for r in sm._load_buckets(program, kind):
            kind_type = r.get("type") or r.get("name") or "?"
            if "addr" not in r or is_undefined_type(kind_type):
                continue
            out.append((int(r["addr"], 16), max(int(r.get("len") or 1), 1), kind_type,
                        r.get("count")))
    return sorted(out)


def load_labels(program):
    """addr -> name of every label a person or the pipeline chose (not DAT_/s_/PTR_)."""
    out = {}
    for r in sm._load_buckets(program, "symbols_label"):
        name = r.get("name", "")
        if "addr" in r and not re.match(r"^(DAT|PTR|s|u|LAB|switchD|caseD|FLOAT|DOUBLE)_", name):
            out.setdefault(int(r["addr"], 16), name)
    return out


def load_type_sizes(program):
    """Type name -> byte length from the data_types export."""
    path = os.path.join(sm.ANNOTATIONS, program, "data_types", "data_types.json")
    sizes = {}
    try:
        with open(path) as fh:
            doc = json.load(fh)
    except OSError:
        return sizes
    for kind in ("structs", "unions", "typedefs", "enums"):
        for r in doc.get(kind) or []:
            if r.get("name") and r.get("len"):
                sizes[r["name"]] = r["len"]
    return sizes


class Program:
    """One program: its image, relocations, data blocks, definitions and prototypes."""

    def __init__(self, name, image=None):
        self.name = name
        self.image = image or sm.Image(name)
        self.relocs = parse_relocations(self.image.data, self.image.image_base, self.image.sections)
        self.blocks = load_blocks(name)
        self._block_starts = [b[0] for b in self.blocks]
        self.defined = load_defined(name)
        self._defined_starts = [d[0] for d in self.defined]
        self.labels = load_labels(name)
        self.type_sizes = load_type_sizes(name)
        self.functions = {int(f["addr"], 16): f for f in self.image.functions if "addr" in f}
        self.code = [(s.va, s.va + max(s.vsize, s.raw_size)) for s in self.image.sections if s.executable]

    def block_of(self, va):
        i = bisect.bisect_right(self._block_starts, va) - 1
        if i >= 0 and va < self.blocks[i][1]:
            return self.blocks[i]
        return None

    def is_code(self, va):
        return any(lo <= va < hi for lo, hi in self.code)

    def in_section(self, va):
        """Inside any PE section (code, imports, ...) -- mapped, just not a global."""
        return any(s.va <= va < s.va + max(s.vsize, s.raw_size) for s in self.image.sections)

    def defined_at(self, va):
        """The existing definition covering `va`, or None."""
        i = bisect.bisect_right(self._defined_starts, va) - 1
        if i >= 0 and va < self.defined[i][0] + self.defined[i][1]:
            return self.defined[i]
        return None

    def drop_defined(self, starts):
        """Forget existing definitions starting at `starts` (they will be replaced)."""
        self.defined = [d for d in self.defined if d[0] not in starts]
        self._defined_starts = [d[0] for d in self.defined]

    def next_defined(self, va):
        i = bisect.bisect_right(self._defined_starts, va)
        return self.defined[i][0] if i < len(self.defined) else None

    def read_bytes(self, va, n):
        off = self.image.va2off(va)
        if off is None:
            return None
        return self.image.data[off:off + n]

    def read_string(self, va, limit=1024):
        """The NUL-terminated printable string at `va`, or None."""
        raw = self.read_bytes(va, limit)
        if raw is None or b"\0" not in raw:
            return None
        text = raw.split(b"\0", 1)[0]
        if not text or any(c < 0x20 and c not in (9, 10, 13) or c > 0x7e for c in text):
            return None
        return text.decode("ascii")

    def size_of(self, type_name):
        """Byte length of a type name ('T*' is a pointer), or None if unknown."""
        if type_name.endswith("*"):
            return 4
        return BUILTIN_SIZES.get(type_name) or self.type_sizes.get(type_name)


# --------------------------------------------------------------------------
# Evidence
# --------------------------------------------------------------------------

class Evidence:
    """One observation about the global at `addr`."""

    __slots__ = ("addr", "source", "type", "size", "scale", "count", "end", "func", "at", "note", "ref")

    def __init__(self, addr, source, type=None, size=None, scale=None, count=None, end=None,
                 func=None, at=None, note=None, ref=None):
        self.ref = ref            # sibling: (reference object's start, offset the operand hit)
        if type in ("void*", "undefined*"):
            type = "pointer"
        self.addr, self.source, self.type, self.size = addr, source, type, size
        self.scale, self.count, self.end = scale, count, end
        self.func, self.at, self.note = func, at, note


def pointee(type_name):
    """'CGame*' -> 'CGame'; None for non-pointers and void*."""
    t = type_name.replace(" ", "")
    if not t.endswith("*"):
        return None
    inner = t[:-1]
    if inner in ("void", "undefined", "") or is_undefined_type(inner):
        return None
    return inner


def access_type(mnemonic, size):
    """The value type an instruction's memory operand implies, or None."""
    if mnemonic in FPU_REAL:
        return FLOAT_BY_SIZE.get(size)
    if mnemonic in FPU_INT:
        return FINT_BY_SIZE.get(size)
    if mnemonic in FPU_WORD:
        return "ushort"
    if mnemonic.startswith("movsx"):
        return {1: "char", 2: "short"}.get(size)
    if mnemonic.startswith("movzx"):
        return {1: "uchar", 2: "ushort"}.get(size)
    return None


def stack_params(func):
    """offset -> param and reg -> param of a prototype."""
    by_offset, by_reg = {}, {}
    for p in (func.get("vars") or {}).get("params") or []:
        st = p.get("storage") or {}
        if st.get("stack"):
            by_offset[st.get("offset")] = p
        elif st.get("reg"):
            by_reg[st["reg"].lower()] = p
    return by_offset, by_reg


class Scanner:
    """Decodes every function body of a Program and collects Evidence."""

    def __init__(self, program):
        self.p = program
        self.md = Cs(CS_ARCH_X86, CS_MODE_32)
        self.md.detail = True
        self.evidence = []
        self.unmapped = Counter()

    def data_addr(self, ins, offset, value, count=False):
        """`value` if the operand at byte `offset` is a relocated data address.

        `count` records an address outside every block; only the operand scan
        passes it, so each operand is counted once."""
        if not offset or ins.address + offset not in self.p.relocs:
            return None
        if self.p.block_of(value) is None:
            if count and not self.p.in_section(value):
                self.unmapped[value] += 1
            return None
        return value

    def add(self, *args, **kw):
        self.evidence.append(Evidence(*args, **kw))

    def scan_all(self):
        for addr in sorted(self.p.functions):
            self.scan_function(self.p.functions[addr])
        return self.evidence

    def instructions(self, func):
        for b in sorted(func.get("body") or [], key=lambda b: b["start"]):
            start, end = int(b["start"], 16), int(b["end"], 16)
            if self.p.image.in_cave(start):
                continue
            raw = self.p.read_bytes(start, end - start + 1)
            if raw:
                yield from self.md.disasm(raw, start)

    def scan_function(self, func):
        name = func.get("name")
        regs = {}       # reg -> ("load", G) | ("imm", A) | ("ret", type)
        pushes = []
        for ins in self.instructions(func):
            m = ins.mnemonic
            mem = [o for o in ins.operands if o.type == X86_OP_MEM]
            imms = [o for o in ins.operands if o.type == X86_OP_IMM]
            # memory operands
            for o in mem:
                base = ins.reg_name(o.mem.base) if o.mem.base else None
                if m != "lea" and base in regs and regs[base][0] == "load":
                    self.add(regs[base][1], "pointer", type="pointer", func=name, at=ins.address,
                             note="dereferenced")
                g = self.data_addr(ins, ins.disp_offset, o.mem.disp & 0xFFFFFFFF, count=True)
                if g is None or m == "lea":
                    continue
                rw = "write" if o.access & WRITE else "read"
                if o.mem.index and not o.mem.base:
                    self.add(g, "indexed", type=access_type(m, o.size), size=o.size, scale=o.mem.scale,
                             func=name, at=ins.address, note=rw)
                elif o.mem.base or o.mem.index:
                    self.add(g, "based", type=access_type(m, o.size), size=o.size, func=name,
                             at=ins.address, note=rw)
                else:
                    t = access_type(m, o.size)
                    if m in ("call", "jmp"):
                        t = "code*"
                    self.add(g, "access", type=t, size=o.size, func=name, at=ins.address,
                             note="write" if o.access & WRITE else "read")
                    self.store_source(ins, o, g, regs, name)
            # relocated immediates: address-taken data, end markers, pointer stores
            for o in imms:
                a = self.data_addr(ins, ins.imm_offset, o.imm & 0xFFFFFFFF, count=True)
                if a is None:
                    if (m == "mov" and mem and ins.imm_offset and ins.address + ins.imm_offset in self.p.relocs
                            and self.p.is_code(o.imm & 0xFFFFFFFF)):
                        g = self.direct_mem(ins, mem[0])
                        if g is not None:
                            self.add(g, "pointer", type="code*", func=name, at=ins.address,
                                     note="stores a code address")
                    continue
                if m == "cmp":
                    self.add(a, "end", func=name, at=ins.address)
                elif m == "mov" and mem:
                    g = self.direct_mem(ins, mem[0])
                    if g is not None:
                        self.add(g, "pointer", type=self.pointer_to(a), func=name, at=ins.address,
                                 note="stores %08x" % a)
                self.add(a, "taken", func=name, at=ins.address, note=m)
            if m == "lea" and mem and not mem[0].mem.base and not mem[0].mem.index:
                a = self.data_addr(ins, ins.disp_offset, mem[0].mem.disp & 0xFFFFFFFF)
                if a is not None:
                    self.add(a, "taken", func=name, at=ins.address, note="lea")
            self.track(ins, mem, imms, regs, pushes, name)

    def direct_mem(self, ins, o):
        if o.mem.base or o.mem.index:
            return None
        return self.data_addr(ins, ins.disp_offset, o.mem.disp & 0xFFFFFFFF)

    def pointer_to(self, a):
        return "char*" if self.p.read_string(a) is not None else "pointer"

    def store_source(self, ins, o, g, regs, name):
        """`mov [G], reg` where reg holds a typed value: G has that type."""
        if not (ins.mnemonic == "mov" and o.access & WRITE and len(ins.operands) == 2):
            return
        src = ins.operands[1]
        if src.type != X86_OP_REG:
            return
        held = regs.get(ins.reg_name(src.reg))
        if held and held[0] == "ret":
            self.add(g, "argument", type=held[1], func=name, at=ins.address, note="stores a returned value")
        elif held and held[0] == "imm":
            self.add(g, "pointer", type=self.pointer_to(held[1]), func=name, at=ins.address,
                     note="stores %08x" % held[1])

    def operand_source(self, ins, o, regs):
        """What an operand holds, in the `regs` vocabulary, or None."""
        if o.type == X86_OP_REG:
            return regs.get(ins.reg_name(o.reg))
        if o.type == X86_OP_IMM:
            a = self.data_addr(ins, ins.imm_offset, o.imm & 0xFFFFFFFF)
            return ("imm", a) if a is not None else None
        if o.type == X86_OP_MEM and o.size == 4:
            g = self.direct_mem(ins, o)
            return ("load", g) if g is not None else None
        return None

    def track(self, ins, mem, imms, regs, pushes, name):
        """Advance the register/push model past `ins`."""
        m = ins.mnemonic
        written = [ins.reg_name(r) for r in ins.regs_access()[1]]
        if m == "push":
            pushes.append(self.operand_source(ins, ins.operands[0], regs))
            return
        if m == "pop":
            if pushes:
                pushes.pop()
        elif m == "call":
            self.call(ins, regs, pushes, name)
            return
        new = None
        if m == "mov" and len(ins.operands) == 2 and ins.operands[0].type == X86_OP_REG:
            new = self.operand_source(ins, ins.operands[1], regs)
        elif m == "lea" and mem and not mem[0].mem.base and not mem[0].mem.index:
            a = self.data_addr(ins, ins.disp_offset, mem[0].mem.disp & 0xFFFFFFFF)
            new = ("imm", a) if a is not None else None
        for r in written:
            regs.pop(r, None)
        if new is not None:
            regs[ins.reg_name(ins.operands[0].reg)] = new
        if m in ("ret", "jmp"):
            regs.clear()
            pushes.clear()

    def call(self, ins, regs, pushes, name):
        target = None
        o = ins.operands[0] if ins.operands else None
        if o is not None and o.type == X86_OP_IMM:
            target = self.p.functions.get(o.imm & 0xFFFFFFFF)
        if target is not None:
            by_offset, by_reg = stack_params(target)
            sources = [(by_offset.get(4 + 4 * i), src) for i, src in enumerate(reversed(pushes))]
            sources += [(p, regs.get(r)) for r, p in by_reg.items()]
            for param, src in sources:
                if param is None or src is None or src[0] == "ret":
                    continue
                ptype = param.get("type") or ""
                if src[0] == "imm":
                    inner = pointee(ptype)
                    if inner:
                        self.add(src[1], "argument", type=inner, func=name, at=ins.address,
                                 note="%s %s" % (target.get("name"), param.get("name")))
                    if (param.get("name") or "").lower() in DEST_NAMES and inner in BYTE_POINTEES:
                        self.add(src[1], "dest", func=name, at=ins.address,
                                 note="%s %s" % (target.get("name"), param.get("name")))
                elif not is_undefined_type(ptype):
                    self.add(src[1], "argument", type=ptype, func=name, at=ins.address,
                             note="value of %s %s" % (target.get("name"), param.get("name")))
        pushes.clear()
        for r in CALL_CLOBBERS:
            regs.pop(r, None)
        if target is not None and pointee(target.get("ret") or ""):
            regs["eax"] = ("ret", target["ret"].replace(" ", ""))


def pointer_tables(program):
    """Runs of relocated dwords in initialised data: arrays of pointers.

    A run is a table only when every entry points at the same kind of thing
    (all strings, all code, all data). A run that mixes kinds, or a lone
    relocated dword, is a pointer field of some struct; it is reported as a
    single pointer, which the inferrer keeps only if code also uses it."""
    out = []
    by_block = defaultdict(list)
    for r in program.relocs:
        b = program.block_of(r)
        if b and b[3]:
            by_block[b[0]].append(r)
    for addrs in by_block.values():
        addrs.sort()
        run = []
        for a in addrs + [None]:
            if run and (a is None or a != run[-1][0] + 4):
                kinds = {k for _, k in run}
                if len(run) > 1 and len(kinds) == 1 and None not in kinds:
                    out.append(Evidence(run[0][0], "table", type=run[0][1], count=len(run), size=4))
                else:
                    out += [Evidence(x, "table", type=k, count=1, size=4) for x, k in run if k]
                run = []
            if a is not None:
                raw = program.read_bytes(a, 4)
                run.append((a, target_kind(program, struct.unpack("<I", raw)[0])))
    return out


def target_kind(program, value):
    if program.is_code(value):
        return "code*"
    if program.block_of(value) is not None:
        return "char*" if program.read_string(value) is not None else "pointer"
    return None


# --------------------------------------------------------------------------
# Sibling alignment
# --------------------------------------------------------------------------

def body_operands(scanner, func):
    """[(mnemonic, (data addrs...))] for each instruction of `func`."""
    out = []
    for ins in scanner.instructions(func):
        addrs = []
        for o in ins.operands:
            if o.type == X86_OP_MEM:
                v = scanner.data_addr(ins, ins.disp_offset, o.mem.disp & 0xFFFFFFFF)
            elif o.type == X86_OP_IMM:
                v = scanner.data_addr(ins, ins.imm_offset, o.imm & 0xFFFFFFFF)
            else:
                v = None
            if v is not None:
                addrs.append(v)
        out.append((ins.mnemonic, tuple(addrs)))
    return out


def aligned_addresses(seq_a, seq_b):
    """(addr_a, addr_b) for every operand the two instruction lists share."""
    sm_ = difflib.SequenceMatcher(None, [m for m, _ in seq_a], [m for m, _ in seq_b], autojunk=False)
    for i, j, n in sm_.get_matching_blocks():
        for k in range(n):
            a, b = seq_a[i + k][1], seq_b[j + k][1]
            if len(a) == len(b):
                yield from zip(a, b)


class ReferenceObjects:
    """The reference program's defined, named globals, looked up by address."""

    def __init__(self, program):
        self.items = [(start, length, t, count, program.labels.get(start))
                      for start, length, t, count in program.defined]
        self.starts = [i[0] for i in self.items]

    def containing(self, va):
        i = bisect.bisect_right(self.starts, va) - 1
        if i >= 0 and va < self.items[i][0] + self.items[i][1]:
            return self.items[i]
        return None


def reference_shapes(scanner, objects):
    """reference object start -> {(offset, width, type)} of its typed direct accesses.

    Only typed ones (FPU, MOVSX/MOVZX): Watcom copies a double with two dword
    MOVs, so plain widths say nothing about the layout."""
    shapes = defaultdict(set)
    for e in scanner.scan_all():
        if e.source == "access" and e.size and e.type:
            obj = objects.containing(e.addr)
            if obj is not None:
                shapes[obj[0]].add((e.addr - obj[0], e.size, e.type))
    return shapes


def sibling_evidence(target, reference, mapping_path, min_confidence=0.9):
    """(evidence on the target's globals from aligned bodies of mapped functions,
    the reference objects' access shapes)."""
    with open(mapping_path) as fh:
        pairs = json.load(fh).get("pairs") or []
    ts, rs = Scanner(target), Scanner(reference)
    objects = ReferenceObjects(reference)
    shapes = reference_shapes(Scanner(reference), objects)
    out = []
    for pair in pairs:
        if pair.get("ambiguous") or (pair.get("confidence") or 0) < min_confidence:
            continue
        fa = reference.functions.get(int(pair["a"], 16))
        fb = target.functions.get(int(pair["b"], 16))
        if fa is None or fb is None:
            continue
        for ra, tb in aligned_addresses(body_operands(rs, fa), body_operands(ts, fb)):
            obj = objects.containing(ra)
            if obj is None:
                continue
            start, length, t, count, ref_name = obj
            off = ra - start
            if off and target.size_of(element_type(t)) != reference.size_of(element_type(t)):
                continue
            out.append(Evidence(tb - off, "sibling", type=element_type(t), size=length,
                                count=count, func=fb.get("name"), at=tb,
                                note=ref_name or "%s@%08x" % (t, start), ref=(start, off)))
    return out, shapes


def element_type(t):
    """'float[16]'-style or plain array element names -> element type."""
    return re.sub(r"\[\d*\]$", "", t)


# --------------------------------------------------------------------------
# Inference
# --------------------------------------------------------------------------

class Candidate:
    def __init__(self, start, type, count, size, confidence, sources, note=None):
        self.start, self.type, self.count, self.size = start, type, count, size
        self.confidence, self.sources, self.note = confidence, sources, note
        self.bounded = None
        self.text = None          # a string's text, for its label

    @property
    def end(self):
        return self.start + self.size

    def name(self, text=None):
        """The label --apply will create: Create or Replace String's (Shift+L)
        `s_<text>_<address>` for a string, Create Data Label's (Shift+K)
        `g_<TYPE>_<address>` for the rest. --apply creates it with those tools'
        own code; this is the preview."""
        if self.type == "string":
            return c_identifier("s_%s_%08x" % (string_label_text(text or ""), self.start))
        return c_identifier("g_%s_%08x" % (label_type_name(self.type, self.count), self.start))

    def as_json(self, existing_name=None):
        return {"start": "%08x" % self.start, "end": "%08x" % (self.end - 1), "size": self.size,
                "type": self.type, "count": self.count, "bounded": self.bounded,
                "confidence": self.confidence, "sources": self.sources,
                "name": existing_name or self.name(self.text), "keeps_name": bool(existing_name),
                "note": self.note}


# Mirrors of ghidra_annotations.util.string's normalize_string_name and
# sanitize_c_identifier, which cannot be imported without Ghidra; the tests hold
# them equal to the originals.
CPP_KEYWORDS = frozenset((
    "this", "class", "struct", "union", "enum", "virtual", "public", "private", "protected", "friend",
    "operator", "new", "delete", "template", "typename", "namespace", "using", "try", "catch", "throw",
    "const", "volatile", "mutable", "static", "extern", "register", "auto", "inline", "explicit",
    "export", "true", "false", "nullptr", "bool", "char", "short", "int", "long", "float", "double",
    "void", "signed", "unsigned", "wchar_t", "char16_t", "char32_t", "if", "else", "switch", "case",
    "default", "for", "while", "do", "break", "continue", "return", "goto", "sizeof", "alignof",
    "decltype", "typeid", "static_cast", "dynamic_cast", "const_cast", "reinterpret_cast", "and",
    "and_eq", "bitand", "bitor", "compl", "not", "not_eq", "or", "or_eq", "xor", "xor_eq", "asm",
    "constexpr", "noexcept", "static_assert", "thread_local"))


def string_label_text(text, max_length=24):
    """normalize_string_name: the `<text>` part of a string's `s_<text>_<address>`."""
    text = re.sub(r"_+", "_", re.sub(r"[^0-9a-zA-Z]", "_", text)).strip("_") or "anon"
    if text[0].isdigit():
        text = "s_" + text
    return text[:max_length]


def c_identifier(name):
    """sanitize_c_identifier: a legal C/C++ identifier."""
    s = re.sub(r"[^a-zA-Z0-9_]", "_", name)
    lead = len(s) - len(s.lstrip("_"))
    s = (s[:lead] + re.sub(r"_+", "_", s[lead:])).rstrip("_")
    if not s:
        return "unnamed"
    if s[0].isdigit():
        s = "_" + s
    return "_" + s if s in CPP_KEYWORDS else s


def label_type_name(type_name, count):
    """ghidra_annotations.util.label.get_data_label_type_name for a candidate type.

    Built-ins are uppercased, every pointer level adds `_PTR` (a pointer with no
    target is just `PTR`) and an array adds `_ARRAY`."""
    suffixes = ["ARRAY"] if count else []
    t = type_name
    if t in ("pointer", "code*"):
        # nothing left to peel: label.py joins the suffixes as collected, outermost first
        return "_".join(suffixes + ["PTR"])
    while t.endswith("*"):
        suffixes.insert(0, "PTR")
        t = t[:-1]
    base = re.sub(r"_+", "_", re.sub(r"[^0-9a-zA-Z]", "_", t)).strip("_")
    if t in BUILTIN_SIZES:
        base = base.upper()
    return "_".join([base] + suffixes)[:40]


def vote_type(evs):
    """The most common non-None type among evidence, or None."""
    c = Counter(e.type for e in evs if e.type)
    return c.most_common(1)[0][0] if c else None


def scalar_type(evs):
    """Type of a directly accessed scalar from its accesses."""
    typed = vote_type(evs)
    if typed:
        return typed
    sizes = Counter(e.size for e in evs if e.size)
    size = sizes.most_common(1)[0][0] if sizes else 4
    return PLAIN_BY_SIZE.get(size, "int")


class Inferrer:
    """Merges evidence into non-overlapping candidates."""

    def __init__(self, program, evidence, max_array=0x100000, ref_shapes=None):
        self.p = program
        self.ref_shapes = ref_shapes or {}
        self.by_addr = defaultdict(list)
        for e in evidence:
            self.by_addr[e.addr].append(e)
        self.max_array = max_array
        self.placed = []          # sorted [(start, end)]
        self.candidates = []
        self.conflicts = []
        self.already_defined = 0
        self.folded = 0

    # occupancy ----------------------------------------------------------
    def blocker(self, start, end):
        """Why [start, end) cannot be defined, or None if it can."""
        if self.p.block_of(start) is None or self.p.block_of(end - 1) != self.p.block_of(start):
            return "crosses a block boundary"
        nd = self.p.next_defined(start)
        if nd is not None and nd < end:
            d = self.p.defined_at(nd)
            return "existing %s at %08x" % (d[2], d[0])
        i = bisect.bisect_right(self.placed, (start, float("inf")))
        if i < len(self.placed) and self.placed[i][0] < end:
            return "candidate at %08x" % self.placed[i][0]
        return None

    def place(self, cand):
        if self.p.defined_at(cand.start) is not None:
            self.already_defined += 1
            return False
        i = bisect.bisect_right(self.placed, (cand.start, float("inf")))
        if i and self.placed[i - 1][1] > cand.start:
            return False          # inside an object a stronger source placed
        why = "empty" if cand.size <= 0 else self.blocker(cand.start, cand.end)
        if why:
            cand.note = "%s; blocked by %s" % (cand.note, why) if cand.note else "blocked by " + why
            self.conflicts.append(cand)
            return False
        bisect.insort(self.placed, (cand.start, cand.end))
        self.candidates.append(cand)
        return True

    def next_start(self, after):
        """The next address with evidence of its own beginning, after `after`."""
        keys = self.sorted_keys
        i = bisect.bisect_right(keys, after)
        return keys[i] if i < len(keys) else None

    # passes -------------------------------------------------------------
    def run(self):
        self.sorted_keys = sorted(self.by_addr)
        self.place_siblings()
        self.place_strings()
        self.place_tables()
        self.place_arguments()
        self.place_arrays()
        self.place_scalars()
        self.candidates.sort(key=lambda c: c.start)
        return self.candidates

    def sources(self, evs):
        return dict(Counter(e.source for e in evs))

    def place_siblings(self):
        for addr in self.sorted_keys:
            evs = [e for e in self.by_addr[addr] if e.source == "sibling"]
            if not evs:
                continue
            votes = Counter((e.type, e.count, e.size) for e in evs)
            (t, count, ref_size), n = votes.most_common(1)[0]
            if t in STRING_TYPES:
                self.place_string(addr, "high", self.sources(self.by_addr[addr]))
                continue
            own = {e.type for e in self.by_addr[addr] if e.source == "access" and e.type}
            if own and t not in own:
                continue          # this build changed the type; its own code decides
            size = self.p.size_of(t)
            if size is None:
                continue
            total = size * count if count else size
            if not count and ref_size and ref_size != size:
                continue
            if self.layout_changed(addr, total, evs):
                self.conflicts.append(Candidate(addr, t, count, total, "low", self.sources(self.by_addr[addr]),
                                                note="this build's accesses do not fit the reference layout"))
                continue
            if len(evs) == 1 and evs[0].ref and evs[0].ref[1]:
                # one operand that landed inside the reference object: if this build
                # resized the type, start - offset is not where the object starts
                self.conflicts.append(Candidate(addr, t, count, total, "low", self.sources(self.by_addr[addr]),
                                                note="one reference operand, inside the object"))
                continue
            conf = "high" if n == sum(votes.values()) else "medium"
            note = Counter(e.note for e in evs).most_common(1)[0][0]
            self.place(Candidate(addr, t, count, total, conf, self.sources(self.by_addr[addr]),
                                 note="reference: %s" % note))

    def written(self, start, end):
        """Does code write anywhere in [start, end), or hand `start` to a destination?"""
        if any(e.source == "dest" for e in self.by_addr.get(start, ())):
            return True
        i = bisect.bisect_left(self.sorted_keys, start)
        while i < len(self.sorted_keys) and self.sorted_keys[i] < end:
            if any(e.note == "write" for e in self.by_addr[self.sorted_keys[i]]):
                return True
            i += 1
        return False

    def buffer_end(self, start, min_end):
        """Where a char buffer at `start` stops: the next address with evidence of
        its own, a definition, or the block end -- never before `min_end`."""
        block = self.p.block_of(start)
        limits = [block[1]]
        nd = self.p.next_defined(start)
        if nd is not None:
            limits.append(nd)
        i = bisect.bisect_left(self.sorted_keys, min_end)
        if i < len(self.sorted_keys):
            limits.append(self.sorted_keys[i])
        return max(min(limits), min_end)

    def place_char_array(self, addr, min_size, sources, note):
        end = self.buffer_end(addr, addr + min_size)
        cand = Candidate(addr, "char", end - addr, end - addr, "high" if min_size > 1 else "medium",
                         sources, note=note)
        cand.bounded = "next global"
        self.place(cand)

    def layout_changed(self, addr, size, evs):
        """Does this build touch the object's bytes in a way the reference never does?

        nocedit's `double g_Cached3DDistanceFactor` is not one in bw1, whose code
        multiplies by a float at +4. A typed access the reference simply never
        makes is fine; one that overlaps a reference typed access with another
        offset, width or type means the layout changed."""
        allowed = set()
        for e in evs:
            allowed |= self.ref_shapes.get(e.ref[0] if e.ref else None, set())
        if not allowed:
            return False
        i = bisect.bisect_left(self.sorted_keys, addr)
        while i < len(self.sorted_keys) and self.sorted_keys[i] < addr + size:
            k = self.sorted_keys[i]
            for e in self.by_addr[k]:
                if e.source != "access" or not e.size or not e.type:
                    continue
                own = (k - addr, e.size, e.type)
                if own not in allowed and any(o < own[0] + own[1] and own[0] < o + w for o, w, _ in allowed):
                    return True
            i += 1
        return False

    def place_strings(self):
        for addr in self.sorted_keys:
            evs = self.by_addr[addr]
            text = self.p.read_string(addr)
            dest = any(e.source == "dest" for e in evs)
            if text is None:
                # an uninitialised buffer handed to a function that writes into it
                block = self.p.block_of(addr)
                if dest and block and not block[3]:
                    self.place_char_array(addr, 1, self.sources(evs), "written buffer")
                continue
            if self.written(addr, addr + len(text) + 1):
                # an initialised buffer, not a literal: code writes into it
                self.place_char_array(addr, len(text) + 1, self.sources(evs),
                                      "initialised buffer %r" % text[:30])
                continue
            arg = any(e.source == "argument" and e.type == "char" for e in evs)
            taken = any(e.source == "taken" for e in evs)
            accessed = any(e.source in ("access", "indexed", "based") and e.size and e.size > 1
                           for e in evs)
            if accessed or not (arg or taken):
                continue
            if not arg and len(text) < 3:
                continue
            self.place_string(addr, "high" if arg else "medium", self.sources(evs))

    def place_string(self, addr, confidence, sources):
        """A string at `addr`, or at the start of the string `addr` is the tail of.

        Watcom merges a literal into the end of a longer one that ends the same
        way, so code can point into the middle of a string; that string starts
        after the previous NUL."""
        start = addr
        while True:
            prev = self.p.read_bytes(start - 1, 1)
            if not prev or not (0x20 <= prev[0] <= 0x7e or prev[0] in (9, 10, 13)):
                break
            start -= 1
        # Printable bytes before `addr` are only a longer string if something
        # points at its start; otherwise they are another constant's bytes.
        if start != addr and not any(e.source in ("taken", "table", "argument")
                                     for e in self.by_addr.get(start, ())):
            start = addr
        text = self.p.read_string(start)
        if text is None:
            return
        note = repr(text[:40]) + ("" if start == addr else " (tail at %08x)" % addr)
        cand = Candidate(start, "string", None, len(text) + 1, confidence, sources, note=note)
        cand.text = text
        self.place(cand)

    def place_tables(self):
        for addr in self.sorted_keys:
            evs = [e for e in self.by_addr[addr] if e.source == "table"]
            if not evs:
                continue
            e = evs[0]
            used = any(x.source != "table" for x in self.by_addr[addr])
            if e.count == 1 and not used:
                continue          # a pointer field of a struct nothing names yet
            count = e.count if e.count > 1 else None
            self.place(Candidate(addr, e.type, count, 4 * e.count, "high" if count else "medium",
                                 self.sources(self.by_addr[addr]), note="relocated pointers"))
            if e.type == "char*":
                for k in range(e.count):
                    raw = self.p.read_bytes(addr + 4 * k, 4)
                    self.place_string(struct.unpack("<I", raw)[0], "high", {"table": 1})

    def place_arguments(self):
        for addr in self.sorted_keys:
            evs = [e for e in self.by_addr[addr] if e.source == "argument" and e.type != "char"]
            if not evs:
                continue
            known = [e for e in evs if self.p.size_of(e.type) is not None]
            if not known:
                self.conflicts.append(Candidate(addr, evs[0].type, None, 0, "low", self.sources(evs),
                                                note="type %s not in the program" % evs[0].type))
                continue
            t = vote_type(known)
            size = self.p.size_of(t)
            unanimous = all(e.type == t for e in evs)
            self.place(Candidate(addr, t, None, size, "high" if unanimous else "medium",
                                 self.sources(self.by_addr[addr]), note=evs[0].note))

    def element_of(self, base):
        """(element type, element size) for an indexed base, from its accesses."""
        evs = [e for e in self.by_addr[base] if e.source in ("indexed", "access", "based")]
        scales = Counter(e.scale for e in evs if e.source == "indexed" and e.scale in (2, 4, 8))
        sizes = Counter(e.size for e in evs if e.size)
        size = scales.most_common(1)[0][0] if scales else (sizes.most_common(1)[0][0] if sizes else 1)
        t = vote_type([e for e in evs if e.size == size])
        if t is None and sizes and size not in sizes:
            # stride wider than every access: an array of small structs
            return None, size
        return t or PLAIN_BY_SIZE.get(size, "byte"), size

    def array_bases(self):
        """One base per array, with the folded-offset displacements dropped.

        `arr[i-1]` and `arr[i+1]` compile to `[reg*s + arr-s]` and `[reg*s + arr+s]`,
        so one array shows up as displacements a few elements apart. Within such a
        cluster the array starts at the one that is also used without an index
        (address taken, read directly, typed by a reference) -- else at the one
        indexed most often."""
        indexed = [(a, Counter(e.scale for e in self.by_addr[a] if e.source == "indexed"))
                   for a in self.sorted_keys if any(e.source == "indexed" for e in self.by_addr[a])]
        bases, group = [], []
        for a, scales in indexed + [(None, None)]:
            scale = scales.most_common(1)[0][0] if scales else None
            if group and (a is None or scale != group[-1][2] or a - group[-1][0] > 2 * scale):
                anchored = [g for g in group if any(e.source not in ("indexed", "end")
                                                    for e in self.by_addr[g[0]])]
                pick = min(anchored)[0] if anchored else max(group, key=lambda g: sum(g[1].values()))[0]
                bases.append(pick)
                self.folded += len(group) - 1
                group = []
            if a is not None:
                group.append((a, scales, scale))
        return bases

    def place_arrays(self):
        for base in self.array_bases():
            evs = self.by_addr[base]
            t, elem = self.element_of(base)
            if t is None:
                self.conflicts.append(Candidate(base, "struct%d" % elem, None, elem, "low",
                                                self.sources(evs),
                                                note="array of %d-byte structs; element type unknown" % elem))
                continue
            end = self.array_end(base, t, elem)
            if end is None:
                continue
            stop, how = end
            count = (stop - base) // elem
            if count < 1:
                continue
            cand = Candidate(base, t, count, count * elem, "high" if how == "end marker" else "medium",
                             self.sources(evs), note="extent from %s" % how)
            cand.bounded = how
            self.place(cand)

    def array_end(self, base, t, elem):
        """(end, how) of the array at `base`: an end marker, or the first address
        after it that does not read like one of its elements."""
        # an end marker counts only in a function that indexes this array
        users = {e.func for e in self.by_addr[base] if e.source == "indexed"}
        markers = [k for k in self.sorted_keys[bisect.bisect_right(self.sorted_keys, base):][:4096]
                   if any(e.source == "end" and e.func in users for e in self.by_addr[k])]
        for m in markers:
            if (m - base) % elem == 0 and m - base <= self.max_array:
                return m, "end marker"
        block = self.p.block_of(base)
        limit = min(x for x in (block[1], self.p.next_defined(base), base + self.max_array) if x)
        last = base
        nxt = self.next_start(base)
        while nxt is not None and nxt < limit:
            evs = self.by_addr[nxt]
            fits = ((nxt - base) % elem == 0
                    and all(e.source in ("access", "indexed") and (e.size in (None, elem))
                            and (e.type in (None, t)) for e in evs))
            if not fits:
                return nxt, "next global"
            last = nxt
            nxt = self.next_start(nxt)
        if limit != base + self.max_array:
            return limit, "block or definition"
        return last + elem, "last access (lower bound)"

    def looks_like_float(self, addr):
        """An initialised dword whose bits read as a round float and an absurd int.

        Constants copied with integer MOVs carry no type in the instruction;
        their stored value still does (0x3f800000 is 1.0, not 1065353216)."""
        raw = self.p.read_bytes(addr, 4)
        if raw is None or len(raw) < 4:
            return False
        bits = struct.unpack("<I", raw)[0]
        value = struct.unpack("<f", raw)[0]
        return (bits & 0x7fffffff) >= 0x30000000 and bits & 0xfff == 0 and 1e-6 <= abs(value) <= 1e7

    def place_scalars(self):
        for addr in self.sorted_keys:
            evs = [e for e in self.by_addr[addr] if e.source in ("access", "pointer", "argument")]
            if not evs:
                continue
            t = scalar_type(evs)
            if t == "int" and not any(e.type for e in evs) and self.looks_like_float(addr):
                t = "float"
            size = self.p.size_of(t) or 4
            typed = any(e.type for e in evs)
            conf = "medium" if typed or len(evs) > 1 else "low"
            self.place(Candidate(addr, t, None, size, conf, self.sources(self.by_addr[addr])))


def check_no_overlaps(program, candidates):
    """Raise if two candidates share a byte or one overlaps a kept definition.

    Ghidra refuses data over defined data, so an overlapping plan could not be
    applied as written; this is the guarantee, not a hope."""
    last_end, last = None, None
    for c in sorted(candidates, key=lambda c: c.start):
        if last_end is not None and c.start < last_end:
            raise ValueError("candidates overlap: %08x and %08x" % (last.start, c.start))
        d = program.defined_at(c.start)
        nd = program.next_defined(c.start)
        if d is not None or (nd is not None and nd < c.end):
            raise ValueError("candidate %08x overlaps an existing definition" % c.start)
        last_end, last = c.end, c


def contradicted_strings(program, conflicts):
    """start -> (type, size) of auto-created strings a high-confidence candidate overlaps.

    Auto-analysis defines a string wherever it finds printable bytes, so it
    swallows the last byte of a constant (`@` is 0x40, the top byte of many
    doubles) or takes the name field of an initialised struct for a literal.
    Only strings nobody named are offered for replacement."""
    out = {}
    for c in conflicts:
        if c.confidence != "high":
            continue
        a = program.next_defined(c.start)
        hits = []
        while a is not None and a < c.end:
            d = program.defined_at(a)
            hits.append(d)
            a = program.next_defined(a)
        d = program.defined_at(c.start)
        if d is not None:
            hits.append(d)
        if hits and all(h[2] in STRING_TYPES and h[0] not in program.labels for h in hits):
            for h in hits:
                out[h[0]] = (h[2], h[1])
    return out


def early_strings(program, by_addr, reach=4):
    """start -> (type, size) of auto-created strings that begin too early.

    When the bytes before a literal end in something printable (the top byte of
    a float or double is often `@`, `?` or `A`), auto-analysis starts the string
    there. Code then points 1-3 bytes into it and never at its start."""
    out = {}
    pointed = ("taken", "argument", "sibling", "table", "dest")
    for start, length, t, _ in program.defined:
        if t not in STRING_TYPES or start in program.labels:
            continue
        if any(e.source in pointed for e in by_addr.get(start, ())):
            continue
        if any(any(e.source in pointed for e in by_addr.get(start + k, ()))
               for k in range(1, min(reach, length))):
            out[start] = (t, length)
    return out


# --------------------------------------------------------------------------
# Report
# --------------------------------------------------------------------------

def plan(program_name, reference_name=None, mapping_path=None, image=None, reference_image=None):
    target = Program(program_name, image)
    scanner = Scanner(target)
    evidence = scanner.scan_all() + pointer_tables(target)
    shapes = {}
    if reference_name:
        mapping_path = mapping_path or os.path.join(
            sm.ANNOTATIONS, program_name, "reports", "sibling_mapping_from_%s.json" % reference_name.split(".")[0])
        sibling, shapes = sibling_evidence(target, Program(reference_name, reference_image), mapping_path)
        evidence += sibling
    inferrer = Inferrer(target, evidence, ref_shapes=shapes)
    candidates = inferrer.run()
    replaced = contradicted_strings(target, inferrer.conflicts)
    replaced.update(early_strings(target, inferrer.by_addr))
    if replaced:
        target.drop_defined(set(replaced))
        inferrer = Inferrer(target, evidence, ref_shapes=shapes)
        candidates = inferrer.run()
    check_no_overlaps(target, candidates)
    return {
        "replaced_definitions": [{"start": "%08x" % a, "type": t, "size": n}
                                 for a, (t, n) in sorted(replaced.items())],
        "program": program_name,
        "reference": reference_name,
        "candidates": [c.as_json(target.labels.get(c.start)) for c in candidates],
        "conflicts": [c.as_json() for c in inferrer.conflicts],
        "already_defined": inferrer.already_defined,
        "unmapped": {"%08x" % a: n for a, n in sorted(scanner.unmapped.items())},
        "evidence": dict(Counter(e.source for e in evidence)),
    }


def render(doc):
    cands = doc["candidates"]
    lines = ["INFERRED GLOBALS: %s%s" % (doc["program"],
                                         " (reference %s)" % doc["reference"] if doc["reference"] else ""),
             "=" * 80, "",
             "evidence: " + ", ".join("%s %d" % kv for kv in sorted(doc["evidence"].items())),
             "candidates: %d (%s)" % (len(cands), ", ".join(
                 "%s %d" % (c, sum(1 for x in cands if x["confidence"] == c)) for c in CONFIDENCE)),
             "  arrays: %d, strings: %d, pointers: %d" % (
                 sum(1 for x in cands if x["count"]), sum(1 for x in cands if x["type"] == "string"),
                 sum(1 for x in cands if x["type"].endswith("*") or x["type"] == "pointer")),
             "already defined (skipped): %d" % doc["already_defined"],
             "auto-created strings a candidate replaces: %d (applied only with --replace-strings)"
             % len(doc["replaced_definitions"]),
             "conflicts (not placed): %d" % len(doc["conflicts"]),
             "references outside every block: %d addresses" % len(doc["unmapped"]), ""]
    by_type = Counter(x["type"] for x in cands)
    lines += ["BY TYPE", "-" * 80] + ["  %-40s %6d" % kv for kv in by_type.most_common(40)] + [""]
    lines += ["CANDIDATES", "-" * 80]
    for x in cands:
        shape = "%s[%d]" % (x["type"], x["count"]) if x["count"] else x["type"]
        lines.append("%s-%s %-28s %-6s %-44s %s%s" % (
            x["start"], x["end"], shape[:28], x["confidence"], x["name"],
            ",".join("%s:%d" % kv for kv in sorted(x["sources"].items())),
            "  " + x["note"] if x["note"] else ""))
    if doc["replaced_definitions"]:
        lines += ["", "AUTO-CREATED STRINGS TO REPLACE", "-" * 80]
        lines += ["  %s  %s, %d bytes" % (r["start"], r["type"], r["size"])
                  for r in doc["replaced_definitions"]]
    if doc["conflicts"]:
        lines += ["", "CONFLICTS (NOT PLACED)", "-" * 80]
        for x in doc["conflicts"]:
            shape = "%s[%d]" % (x["type"], x["count"]) if x["count"] else x["type"]
            lines.append("  %s %-28s %-6s %s" % (x["start"], shape[:28], x["confidence"], x["note"]))
    if doc["unmapped"]:
        lines += ["", "REFERENCES OUTSIDE EVERY BLOCK", "-" * 80]
        lines += ["  %s  x%d" % kv for kv in list(doc["unmapped"].items())[:200]]
    return "\n".join(lines) + "\n"


def write_outputs(doc, program_name, out_dir=None):
    out_dir = out_dir or os.path.join(sm.ANNOTATIONS, program_name, "reports")
    os.makedirs(out_dir, exist_ok=True)
    jpath = os.path.join(out_dir, "inferred_globals.json")
    tpath = os.path.join(out_dir, "inferred_globals.txt")
    with open(jpath, "w") as fh:
        json.dump(doc, fh, indent=1)
    with open(tpath, "w") as fh:
        fh.write(render(doc))
    return jpath, tpath


# --------------------------------------------------------------------------
# Apply
# --------------------------------------------------------------------------

def resolve_type(name, dtm, by_name, types):
    """A Ghidra DataType for a candidate type name, or None."""
    if name == "string":
        return types["string"]
    if name.endswith("*"):
        inner = name[:-1]
        if inner == "code":
            return types["pointer"](None, dtm)
        target = resolve_type(inner, dtm, by_name, types)
        return types["pointer"](target, dtm) if target is not None else None
    if name == "pointer":
        return types["pointer"](None, dtm)
    if name in types["builtins"]:
        return types["builtins"][name]
    return by_name.get(name)


def live_blocker(listing, addr, end, clearing, undefined, address_set):
    """The defined datum in [addr, end] that would stop createData, or None.

    Undefined data (what auto-analysis leaves at a reference) and the strings
    this run clears do not count."""
    d = listing.getDefinedDataContaining(addr)
    found = [d] if d is not None else []
    found += list(listing.getDefinedData(address_set(addr, end), True))
    lo, hi = addr.getOffset(), end.getOffset()
    for d in found:
        start = d.getMinAddress().getOffset()
        if start > hi or start + d.getLength() <= lo:
            continue
        if undefined(d.getDataType()) or start in clearing:
            continue
        return d
    return None


def apply_plan(project_dir, project_name, program_name, doc, min_confidence="medium", apply=False,
               replace_strings=False):
    """Check every candidate against the live program; with `apply`, define it.

    Returns [(start, shape, outcome)]. Without `apply` nothing is written: each
    row says what would happen -- "would define", "would clear", or the live
    datum that blocks it (the export may be older than the program)."""
    import pyghidra
    pyghidra.start()
    from ghidra.program.model.data import (ArrayDataType, ByteDataType, CharDataType, DoubleDataType,
                                           Float10DataType, FloatDataType, IntegerDataType,
                                           LongLongDataType, PointerDataType, QWordDataType, ShortDataType,
                                           TerminatedStringDataType, UnsignedCharDataType,
                                           UnsignedIntegerDataType, UnsignedLongLongDataType,
                                           UnsignedShortDataType)
    from ghidra.program.model.address import AddressSet
    from ghidra.program.model.data import DataUtilities, Undefined
    from ghidra.util.task import ConsoleTaskMonitor
    from ghidra_annotations.util.label import create_label_for_data
    from ghidra_annotations.util.log import setup_logging
    # the label tools log through this; warnings only, not one line per label
    setup_logging(name="infer_globals", level=logging.WARNING)

    builtins = {"byte": ByteDataType.dataType, "char": CharDataType.dataType,
                "uchar": UnsignedCharDataType.dataType, "short": ShortDataType.dataType,
                "ushort": UnsignedShortDataType.dataType, "int": IntegerDataType.dataType,
                "uint": UnsignedIntegerDataType.dataType, "float": FloatDataType.dataType,
                "double": DoubleDataType.dataType, "float10": Float10DataType.dataType,
                "longlong": LongLongDataType.dataType, "ulonglong": UnsignedLongLongDataType.dataType,
                "qword": QWordDataType.dataType}
    types = {"builtins": builtins, "string": TerminatedStringDataType.dataType,
             "pointer": PointerDataType}
    rank = CONFIDENCE.index(min_confidence)
    rows = []
    project = pyghidra.open_project(os.path.abspath(project_dir), project_name)
    try:
        with pyghidra.program_context(project, "/" + program_name) as p:
            dtm = p.getDataTypeManager()
            by_name = {}
            for dt in dtm.getAllDataTypes():
                by_name.setdefault(dt.getName(), dt)
            space = p.getAddressFactory().getDefaultAddressSpace()
            listing = p.getListing()
            symbols = p.getSymbolTable()
            global_ns = p.getGlobalNamespace()
            tx = p.startTransaction("infer_globals")
            ok = False
            try:
                clearing = set()
                for r in doc["replaced_definitions"] if replace_strings else ():
                    addr = space.getAddress(int(r["start"], 16))
                    d = listing.getDefinedDataAt(addr)
                    if d is None or d.getLength() != r["size"] or "string" not in d.getDataType().getName().lower():
                        rows.append((r["start"], "string", "changed since export, left alone"))
                        continue
                    clearing.add(addr.getOffset())
                    if apply:
                        listing.clearCodeUnits(addr, addr.add(r["size"] - 1), False)
                        # as Create or Replace String does: the old string's label goes with it
                        for sym in list(symbols.getSymbols(addr)):
                            if not sym.isDynamic() and sym.getName().startswith("s_"):
                                symbols.removeSymbolSpecial(sym)
                    rows.append((r["start"], "string", "cleared" if apply else "would clear"))
                for c in doc["candidates"]:
                    shape = "%s[%d]" % (c["type"], c["count"]) if c["count"] else c["type"]
                    if CONFIDENCE.index(c["confidence"]) > rank:
                        rows.append((c["start"], shape, "below --min-confidence"))
                        continue
                    dt = resolve_type(c["type"], dtm, by_name, types)
                    if dt is None:
                        rows.append((c["start"], shape, "type not in the program"))
                        continue
                    if c["count"]:
                        dt = ArrayDataType(dt, c["count"], dt.getLength())
                    addr = space.getAddress(int(c["start"], 16))
                    size = dt.getLength() if c["type"] != "string" else c["size"]
                    d = live_blocker(listing, addr, addr.add(size - 1), clearing,
                                     lambda t: Undefined.isUndefined(t) or is_undefined_type(t.getName()),
                                     AddressSet)
                    if d is not None:
                        rows.append((c["start"], shape, "blocked by %s at %s" % (
                            d.getDataType().getName(), d.getMinAddress())))
                        continue
                    if not apply:
                        rows.append((c["start"], shape, "would define"))
                        continue
                    end = addr.add(size - 1)
                    # Auto-analysis placeholders (undefinedN, and `undefined1 *` pointers it
                    # makes at relocations) are all that live_blocker let through; createData
                    # clears only the former, so clear each placeholder in the range here.
                    held = [d for d in listing.getDefinedData(AddressSet(addr, end), True)
                            if d.getMinAddress().getOffset() <= end.getOffset()
                            and d.getMinAddress().getOffset() + d.getLength() > addr.getOffset()]
                    for d in held:
                        listing.clearCodeUnits(d.getMinAddress(), d.getMaxAddress(), False)
                    try:
                        data = DataUtilities.createData(p, addr, dt, size, False,
                                                        DataUtilities.ClearDataMode.CLEAR_ALL_UNDEFINED_CONFLICT_DATA)
                    except Exception as exc:  # anything Ghidra still refuses is reported, not fatal
                        rows.append((c["start"], shape, "refused: %s" % str(exc).split(":")[-1].strip()))
                        continue
                    # Shift+L / Shift+K naming; an existing user label is kept
                    labelled = create_label_for_data(p, data, global_ns)
                    rows.append((c["start"], shape, "defined, labelled" if labelled else "defined"))
                ok = True
            finally:
                p.endTransaction(tx, ok and apply)   # a dry run always rolls back
            if apply:
                p.getDomainFile().save(ConsoleTaskMonitor())
    finally:
        project.close()
    return rows


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("--program", required=True)
    ap.add_argument("--reference", help="program whose defined globals carry over through the "
                                        "sibling mapping (e.g. nocedit.exe)")
    ap.add_argument("--mapping", help="sibling mapping JSON (default: the program's "
                                      "reports/sibling_mapping_from_<reference>.json)")
    ap.add_argument("--out-dir")
    ap.add_argument("--project")
    ap.add_argument("--project-name", default="NocturneEdit")
    ap.add_argument("--min-confidence", choices=CONFIDENCE, default="medium")
    ap.add_argument("--replace-strings", action="store_true",
                    help="clear the auto-created strings the plan lists as wrong before defining")
    ap.add_argument("--apply", action="store_true",
                    help="write to the program (default: a dry run that checks every row live)")
    args = ap.parse_args(argv)

    doc = plan(args.program, args.reference, args.mapping)
    jpath, tpath = write_outputs(doc, args.program, args.out_dir)
    print("%s: %d candidates, %d conflicts -> %s" % (args.program, len(doc["candidates"]),
                                                    len(doc["conflicts"]), tpath))
    if args.project:
        rows = apply_plan(args.project, args.project_name, args.program, doc, args.min_confidence,
                          args.apply, args.replace_strings)
        path = os.path.join(os.path.dirname(tpath), "inferred_globals_apply.txt")
        with open(path, "w") as fh:
            fh.writelines("%s %-32s %s\n" % row for row in rows)
        outcomes = Counter(re.sub(r" at \S+$", "", r[2]) for r in rows)
        for k, v in sorted(outcomes.items()):
            print("  %-50s %d" % (k, v))
        print("rows -> %s%s" % (path, "" if args.apply else "\n[dry-run] nothing written; re-run with --apply"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
