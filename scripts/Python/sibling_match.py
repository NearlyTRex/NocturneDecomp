#!/usr/bin/env python3
"""Shared primitives for matching functions across sibling Watcom builds.

nocedit.exe and nocturne.exe were built by the same compiler from (mostly) the
same source tree, so a function that was not edited between the two builds
compiles to *the same instruction sequence* -- only the absolute addresses
baked into it differ, because the linker laid the two images out differently.

That makes a relocation-normalized instruction shape the strongest available
correspondence signal: it is exact, needs no inference, and is cheap. This
module provides the shape hashing plus the annotation/call-graph loading that
every cross-exe tool in this project needs.

Nothing here touches Ghidra -- it runs entirely on the raw PE plus the exported
`annotations/<program>/` JSON tree.

Consumers:
    map_sibling_functions.py    -- nocedit -> nocturne function mapping
    wall_off_crt.py             -- CRT classification + boundary detection
"""

import bisect
import glob
import hashlib
import json
import os
import re
import sys
from collections import defaultdict

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    sys.exit("capstone is required: pip install capstone")

# parse_pe/Section already exist; do not duplicate the PE header walk.
from extract_line_pins import parse_pe

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))
ANNOTATIONS = os.path.join(REPO_ROOT, "annotations")

# Ghidra's placeholder names -- a function carrying one of these is unnamed.
UNNAMED_RE = re.compile(r"^(FUN_|thunk_FUN_|LAB_|SUB_|UndefinedFunction_)")
# Trailing _FUN_<addr> that the export pipeline appends to every real name.
ADDR_SUFFIX_RE = re.compile(r"_FUN_[0-9a-fA-F]{6,8}$")

# No Watcom function in either image comes close to this; it only bounds the
# backward scan in func_containing().
_MAX_FUNC_SPAN = 0x20000

# Ghidra reference types that constitute a call edge. UNCONDITIONAL_JUMP is
# included because Watcom emits tail calls (and the CRT is full of jump
# thunks); CONDITIONAL_JUMP is not, as those are intra-function branches.
CALL_XREF_TYPES = frozenset((
    "UNCONDITIONAL_CALL", "COMPUTED_CALL", "COMPUTED_CALL_TERMINATOR",
    "UNCONDITIONAL_JUMP",
))
# Reference types that constitute a data access (used for string seeding).
DATA_XREF_TYPES = frozenset(("DATA", "READ", "WRITE", "READ_WRITE"))


def is_unnamed(name):
    return bool(UNNAMED_RE.match(name or ""))


def strip_addr_suffix(name):
    """core_box.cpp_CBoundingBox3D_expand_FUN_00420240 -> ..._expand"""
    return ADDR_SUFFIX_RE.sub("", name or "")


# --------------------------------------------------------------------------
# Annotation loading
# --------------------------------------------------------------------------

def _load_buckets(program, kind):
    """Load annotations/<program>/<kind>/*.json, which are list-valued buckets.

    Each directory also carries a `<kind>_buckets.json` sharding index
    (bucket_bits/bucket_count) that is metadata, not records -- skip it, or its
    scalar values get counted as functions.
    """
    out = []
    pattern = os.path.join(ANNOTATIONS, program, kind, "*.json")
    for path in sorted(glob.glob(pattern)):
        if os.path.basename(path).endswith("_buckets.json"):
            continue
        with open(path) as fh:
            doc = json.load(fh)
        if isinstance(doc, list):
            out.extend(doc)
        elif isinstance(doc, dict):
            # single record, or an addr-keyed map
            out.extend([doc] if "addr" in doc else list(doc.values()))
    return [r for r in out if isinstance(r, dict)]


# --------------------------------------------------------------------------
# Image: one program's PE bytes + exported annotations
# --------------------------------------------------------------------------

class Image:
    """A binary plus everything the matcher needs to reason about it."""

    def __init__(self, program, exe_path=None, verbose=False):
        self.program = program
        self.exe_path = exe_path or os.path.join(REPO_ROOT, program)
        with open(self.exe_path, "rb") as fh:
            self.data = fh.read()
        self.image_base, self.sections = parse_pe(self.data)

        # Full mapped address span, used to decide whether an immediate is a
        # relocated address (mask it) or a genuine constant (keep it -- those
        # are highly discriminative: float bit patterns, struct sizes, magics).
        spans = [(s.va, s.va + max(s.vsize, s.raw_size))
                 for s in self.sections if s.raw_size or s.vsize]
        self.va_lo = min(a for a, _ in spans)
        self.va_hi = max(b for _, b in spans)

        self.functions = _load_buckets(program, "functions")
        self.by_addr = {f["addr"].lower(): f for f in self.functions if "addr" in f}

        self._strings = None
        self._xrefs = None
        self._vtables = None
        self._callgraph = None
        self._callsites = None
        self._body_index = None
        self._shapes = {}

        if verbose:
            print(f"[{program}] {len(self.functions)} functions, "
                  f"VA span {self.va_lo:#x}-{self.va_hi:#x}", file=sys.stderr)

    # -- raw bytes ---------------------------------------------------------

    def va2off(self, va):
        """Virtual address -> file offset, or None if not backed by raw data."""
        for s in self.sections:
            if not (s.raw_off and s.raw_size):
                continue
            if s.va <= va < s.va + max(s.vsize, s.raw_size):
                off = s.raw_off + (va - s.va)
                if s.raw_off <= off < s.raw_off + s.raw_size:
                    return off
        return None

    def is_mapped_va(self, value):
        return self.va_lo <= value < self.va_hi

    # -- lazily-derived annotation views -----------------------------------

    @property
    def strings(self):
        """VA -> string value."""
        if self._strings is None:
            self._strings = {r["addr"].lower(): r.get("value", "")
                             for r in _load_buckets(self.program, "applied_strings")
                             if "addr" in r}
        return self._strings

    @property
    def xrefs(self):
        if self._xrefs is None:
            self._xrefs = _load_buckets(self.program, "cross_references")
        return self._xrefs

    @property
    def vtables(self):
        if self._vtables is None:
            self._vtables = _load_buckets(self.program, "vtables")
        return self._vtables

    # -- address -> containing function ------------------------------------

    @property
    def body_index(self):
        """Sorted [(start, end, func_addr)] over every body range."""
        if self._body_index is None:
            spans = []
            for f in self.functions:
                addr = f.get("addr", "").lower()
                for b in f.get("body", []) or []:
                    try:
                        spans.append((int(b["start"], 16), int(b["end"], 16), addr))
                    except (KeyError, ValueError):
                        continue
            spans.sort()
            self._body_index = spans
        return self._body_index

    def func_containing(self, va):
        """Address of the function whose body covers `va`, or None.

        Body ranges are per-fragment and may nest or abut, so the rightmost
        span starting at or before `va` is not necessarily the covering one --
        walk back until no earlier span could still reach `va`.
        """
        spans = self.body_index
        i = bisect.bisect_right(spans, (va, self.va_hi, "\xff")) - 1
        while i >= 0:
            start, end, addr = spans[i]
            if start <= va <= end:
                return addr
            if start < va - _MAX_FUNC_SPAN:
                break
            i -= 1
        return None

    # -- call graph --------------------------------------------------------

    @property
    def callgraph(self):
        """func_addr -> set(callee func_addr), from call/tail-call xrefs."""
        if self._callgraph is None:
            cg = defaultdict(set)
            for x in self.xrefs:
                if x.get("type") not in CALL_XREF_TYPES:
                    continue
                try:
                    src = int(x["from"], 16)
                    dst = int(x["to"], 16)
                except (KeyError, ValueError):
                    continue
                caller = self.func_containing(src)
                callee = self.by_addr.get(f"{dst:08x}")
                if caller and callee and caller != callee["addr"].lower():
                    cg[caller].add(callee["addr"].lower())
            self._callgraph = dict(cg)
        return self._callgraph

    @property
    def callsites(self):
        """func_addr -> [callee_addr] in call-site (address) order.

        Order is what makes call-graph propagation strong: between sibling
        builds the *sequence* of calls a function makes is preserved even when
        the callees themselves are still unidentified, so an anchored pair
        lets every callee at the same index be paired positionally.
        """
        if self._callsites is None:
            sites = defaultdict(list)
            for x in self.xrefs:
                if x.get("type") not in CALL_XREF_TYPES:
                    continue
                try:
                    src = int(x["from"], 16)
                    dst = int(x["to"], 16)
                except (KeyError, ValueError):
                    continue
                caller = self.func_containing(src)
                callee = self.by_addr.get(f"{dst:08x}")
                if caller and callee and caller != callee["addr"].lower():
                    sites[caller].append((src, callee["addr"].lower()))
            self._callsites = {k: [c for _, c in sorted(v)] for k, v in sites.items()}
        return self._callsites

    def callers_of(self):
        """func_addr -> set(caller func_addr) (inverse call graph)."""
        inv = defaultdict(set)
        for caller, callees in self.callgraph.items():
            for c in callees:
                inv[c].add(caller)
        return dict(inv)

    def string_refs(self):
        """func_addr -> set(string value), from DATA xrefs into string data."""
        strings = self.strings
        out = defaultdict(set)
        for x in self.xrefs:
            if x.get("type") not in DATA_XREF_TYPES:
                continue
            val = strings.get(x.get("to", "").lower())
            if not val:
                continue
            try:
                caller = self.func_containing(int(x["from"], 16))
            except (KeyError, ValueError):
                continue
            if caller:
                out[caller].add(val)
        return dict(out)


# --------------------------------------------------------------------------
# Instruction-shape hashing
# --------------------------------------------------------------------------

_MD = Cs(CS_ARCH_X86, CS_MODE_32)
_MD.detail = False

_HEX_RE = re.compile(r"0x[0-9a-f]+")

# Shape tiers, strongest first. A match at a stronger tier outranks a weaker one.
TIERS = ("strict", "relaxed")


class Shape:
    """The normalized form of one function body."""
    __slots__ = ("strict", "relaxed", "consts", "nbytes", "ninsn")

    def __init__(self, strict, relaxed, consts, nbytes, ninsn):
        self.strict = strict        # mnemonics + operands, addresses masked
        self.relaxed = relaxed      # mnemonic sequence only
        self.consts = consts        # non-address immediates (build-invariant)
        self.nbytes = nbytes
        self.ninsn = ninsn


def compute_shape(image, func):
    """Relocation-normalized shape of `func` in `image`, or None if unreadable.

    Absolute addresses (globals, string literals, call/jump targets) are
    replaced by a placeholder because the two images are laid out differently.
    Everything else -- mnemonics, registers, structure offsets, and genuine
    constants -- is preserved, and is identical between builds for any function
    whose source did not change.
    """
    mnemonics, full, consts = [], [], []
    nbytes = 0

    ranges = []
    for b in func.get("body", []) or []:
        try:
            ranges.append((int(b["start"], 16), int(b["end"], 16)))
        except (KeyError, ValueError):
            return None
    if not ranges:
        return None

    for start, end in sorted(ranges):
        off = image.va2off(start)
        if off is None:
            return None
        n = end - start + 1
        if n <= 0:
            return None
        nbytes += n
        for ins in _MD.disasm(image.data[off:off + n], start):
            mnemonics.append(ins.mnemonic)

            def _mask(m):
                v = int(m.group(0), 16)
                if image.is_mapped_va(v):
                    return "@"
                consts.append(v)
                return m.group(0)

            full.append(ins.mnemonic + " " + _HEX_RE.sub(_mask, ins.op_str))

    if not full:
        return None

    return Shape(
        strict=hashlib.sha1("\n".join(full).encode()).hexdigest(),
        relaxed=hashlib.sha1("\n".join(mnemonics).encode()).hexdigest(),
        consts=tuple(sorted(consts)),
        nbytes=nbytes,
        ninsn=len(full),
    )


def shapes_for(image, min_bytes=8):
    """addr -> Shape for every function big enough to be discriminative.

    Tiny functions (a jump thunk, `xor eax,eax; ret`) collide by the hundreds
    and carry no evidence, so they are excluded rather than allowed to generate
    ambiguous groups.
    """
    if image._shapes.get(min_bytes) is None:
        out = {}
        for f in image.functions:
            addr = f.get("addr", "").lower()
            if not addr:
                continue
            sh = compute_shape(image, f)
            if sh is not None and sh.nbytes >= min_bytes:
                out[addr] = sh
        image._shapes[min_bytes] = out
    return image._shapes[min_bytes]


def index_by(shapes, tier):
    """hash -> [addr], for one shape tier."""
    idx = defaultdict(list)
    for addr, sh in shapes.items():
        idx[getattr(sh, tier)].append(addr)
    return idx


# --------------------------------------------------------------------------
# Line pins
# --------------------------------------------------------------------------

CSPEC_PATH = os.path.join(REPO_ROOT, "spec", "Ghidra", "Processors", "x86",
                          "data", "languages", "x86watcom.cspec")

_PROTOTYPE_RE = re.compile(r'<prototype name="([^"]+)"([^>]*)>(.*?)</prototype>',
                           re.S)
_PENTRY_RE = re.compile(r"<pentry[^>]*>(.*?)</pentry>", re.S)
_REGISTER_RE = re.compile(r'<register name="([^"]+)"')


def load_conventions(path=CSPEC_PATH):
    """name -> {extrapop, arg_regs, has_stack} from the project's Watcom cspec.

    Parsed rather than hardcoded so it tracks the cspec: this project keeps ~40
    custom Watcom conventions there (`__watcallRegister` passing the first four
    arguments in EAX/EDX/EBX/ECX, the `__stackN_esi` family, the FPU-register
    ones), and duplicating that table in a script would rot the moment a
    convention is added.

    `extrapop` is how far ESP moves past the return address, so
    `extrapop - 4` is the argument bytes the *callee* pops; None means Ghidra
    infers it (caller-clean in practice).
    """
    out = {}
    try:
        with open(path) as fh:
            text = fh.read()
    except OSError:
        return out

    for m in _PROTOTYPE_RE.finditer(text):
        name, attrs, body = m.group(1), m.group(2), m.group(3)
        ep = re.search(r'extrapop="([^"]+)"', attrs)
        extrapop = None
        if ep and ep.group(1) != "unknown":
            try:
                extrapop = int(ep.group(1))
            except ValueError:
                extrapop = None

        regs, has_stack = [], False
        inp = re.search(r"<input>(.*?)</input>", body, re.S)
        if inp:
            for p in _PENTRY_RE.finditer(inp.group(1)):
                r = _REGISTER_RE.search(p.group(1))
                if r:
                    regs.append(r.group(1))
                elif 'space="stack"' in p.group(1):
                    has_stack = True
        out[name] = {"extrapop": extrapop, "arg_regs": regs,
                     "has_stack": has_stack}
    return out


def load_pins(path):
    """Load extract_line_pins.py output -> list of {file, line, va}."""
    with open(path) as fh:
        doc = json.load(fh)
    return doc.get("pins", [])


def pins_by_function(image, pins):
    """func_addr -> set((file, line)) for every pin landing inside a function."""
    out = defaultdict(set)
    for p in pins:
        addr = image.func_containing(p["va"])
        if addr:
            out[addr].add((p["file"], p["line"]))
    return dict(out)
