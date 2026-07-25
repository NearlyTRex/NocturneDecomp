#!/usr/bin/env python3
"""
find_hidden_functions.py

Find functions that Ghidra's auto-analysis missed, using the PE base relocation
table as ground truth.

Complements find_missing_functions.py rather than replacing it. That tool's tiers
(CALL_TARGET / GAP_AFTER_PADDING / PROLOGUE_SCAN) all require *undefined bytes at a
recognizable prologue*, so they go quiet while real code is still hidden. This tool
asks a different question: where did the linker record an absolute address fixup?

A relocation site is a fact recorded by the linker, not a heuristic. Every 32-bit
absolute operand in the image has one, which cuts two ways:

  RELOC_CODE_PTR  - a reloc site in a DATA block whose value lands in executable
                    space with no function defined there. The dword is a code
                    pointer: a vtable slot, a callback table entry, a dispatch
                    table. The target is a function entry.

  RELOC_CODE_RGN  - a reloc site inside executable bytes that belong to NO defined
                    function. The loader patches an absolute operand there, so
                    those bytes are provably code (an instruction with an absolute
                    operand -- `push offset s_some_file_kfm`, `mov eax, g_Global`),
                    not data and not padding. The enclosing region is an
                    undiscovered function body.

The second tier is also how you find what references an orphaned string: if a
string's only referencing reloc sits in a region no function covers, that region is
the hidden function using it. See the STRING/DATA EVIDENCE section of the report.

Because a reloc proves "code" but not "function entry", every candidate is still
scored against boundary evidence (preceded by padding/RET), incoming CALL refs, and
PseudoDisassembler validation, which disassembles WITHOUT mutating the program.

Report-first by design: a run only writes a report. Pass --apply to disassemble +
create functions for candidates at or above --min-confidence.

QA gate: after any --apply, run validate_function_ranges.py and
fix_function_boundaries.py -- creating a function at a region start can produce a
fragmented body or an entry-too-late split that those tools detect and repair.

Usage:
    python3 -u find_hidden_functions.py <project_dir> <project_name> <program_name> \\
        [--out FILE] [--apply] [--min-confidence LEVEL] [--tier TIER]

Examples:
    # Report only (default): writes nocturne.exe_hidden_functions.txt
    python3 -u find_hidden_functions.py ./projects NocturneEdit nocturne.exe

    # Define the high-precision code-pointer targets only:
    python3 -u find_hidden_functions.py ./projects NocturneEdit nocturne.exe \\
        --apply --tier RELOC_CODE_PTR

    # Define every VERY_HIGH/HIGH candidate from both tiers:
    python3 -u find_hidden_functions.py ./projects NocturneEdit nocturne.exe --apply

@author NearlyTRex
@category Annotations
"""

import os
import sys
import argparse
import bisect
from collections import Counter, defaultdict

CONFIDENCE_ORDER = ["LOW", "MEDIUM", "HIGH", "VERY_HIGH"]
CONF_RANK = {c: i for i, c in enumerate(CONFIDENCE_ORDER)}

TIER_PTR = "RELOC_CODE_PTR"
TIER_RGN = "RELOC_CODE_RGN"
TIERS = [TIER_PTR, TIER_RGN]

# IMAGE_REL_BASED_HIGHLOW -- the only 32-bit-absolute fixup type that matters here.
# Type 0 (ABSOLUTE) is block padding and carries no address.
RELOC_HIGHLOW = 3

PADDING_BYTES = {0x90, 0xCC}          # NOP, INT3
RET_BYTES = {0xC3, 0xC2, 0xCB, 0xCA}  # ret / ret imm16 / retf

# Watcom aligns functions with multi-byte no-ops, not just 0x90/0xCC. Missing these
# leaves a region starting several bytes before the real entry (`lea eax,[eax]` is
# padding, not the first instruction). Longest first so the scan takes the full run.
MULTIBYTE_NOPS = [
    [0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00],
    [0x66, 0x0F, 0x1F, 0x44, 0x00, 0x00],
    [0x8D, 0xA4, 0x24, 0x00, 0x00, 0x00, 0x00],  # lea esp,[esp+0]
    [0x8D, 0x80, 0x00, 0x00, 0x00, 0x00],        # lea eax,[eax+0]
    [0x8D, 0x89, 0x00, 0x00, 0x00, 0x00],        # lea ecx,[ecx+0]
    [0x8D, 0x92, 0x00, 0x00, 0x00, 0x00],        # lea edx,[edx+0]
    [0x8D, 0x9B, 0x00, 0x00, 0x00, 0x00],        # lea ebx,[ebx+0]
    [0x8D, 0xB6, 0x00, 0x00, 0x00, 0x00],        # lea esi,[esi+0]
    [0x8D, 0xBF, 0x00, 0x00, 0x00, 0x00],        # lea edi,[edi+0]
    [0x0F, 0x1F, 0x44, 0x00, 0x00],
    [0x0F, 0x1F, 0x40, 0x00],
    [0x8D, 0x64, 0x24, 0x00],                    # lea esp,[esp+0]
    [0x0F, 0x1F, 0x00],
    [0x8D, 0x40, 0x00],                          # lea eax,[eax+0]
    [0x8D, 0x49, 0x00],                          # lea ecx,[ecx+0]
    [0x8D, 0x52, 0x00],                          # lea edx,[edx+0]
    [0x8D, 0x5B, 0x00],                          # lea ebx,[ebx+0]
    [0x8D, 0x76, 0x00],                          # lea esi,[esi+0]
    [0x8D, 0x7F, 0x00],                          # lea edi,[edi+0]
    [0x66, 0x90],
]

# How many pieces of evidence to print per candidate row.
MAX_EVIDENCE = 4


# ---------------------------------------------------------------------------
# Program helpers (read-only)
# ---------------------------------------------------------------------------

def get_executable_set(program):
    from ghidra.program.model.address import AddressSet
    exec_set = AddressSet()
    for block in program.getMemory().getBlocks():
        if block.isExecute() and block.isInitialized():
            exec_set.add(block.getStart(), block.getEnd())
    return exec_set


def read_byte(program, addr):
    try:
        return program.getMemory().getByte(addr) & 0xFF
    except Exception:
        return None


def read_dword(program, addr):
    try:
        return program.getMemory().getInt(addr) & 0xFFFFFFFF
    except Exception:
        return None


def make_pseudo(program):
    try:
        from ghidra.app.util import PseudoDisassembler
        return PseudoDisassembler(program)
    except Exception:
        return None


def valid_subroutine(pseudo, addr):
    """PseudoDisassembler's opinion. Permissive on x86 -- corroborating evidence
    only, never the sole basis for a confidence above MEDIUM."""
    if pseudo is None:
        return None
    try:
        return bool(pseudo.isValidSubroutine(addr, True))
    except Exception:
        try:
            return bool(pseudo.isValidSubroutine(addr))
        except Exception:
            return None


def padding_length(program, addr):
    """Length of the padding item at addr, or 0. Covers single-byte NOP/INT3 and
    the multi-byte no-ops Watcom uses for function alignment."""
    b = read_byte(program, addr)
    if b is None:
        return 0
    if b in PADDING_BYTES:
        return 1
    for pattern in MULTIBYTE_NOPS:
        for i, want in enumerate(pattern):
            got = read_byte(program, addr.add(i))
            if got is None or got != want:
                break
        else:
            return len(pattern)
    return 0


def boundary_kind(program, addr, exec_set):
    """Classify what precedes addr: 'PADDING' (alignment padding or a return, i.e.
    a real function boundary), 'START' (block edge), or 'OTHER'.

    A single 0xCC/0xC3 byte is weak evidence -- it is just as likely to be an
    operand byte of the preceding instruction. Require either a multi-byte padding
    item ending exactly at addr, a run of two padding bytes, or a padding byte at an
    aligned entry.
    """
    try:
        prev = addr.subtract(1)
    except Exception:
        return "START"
    if not exec_set.contains(prev):
        return "START"
    pb = read_byte(program, prev)
    if pb is None:
        return "START"

    # A multi-byte no-op whose last byte is at addr-1.
    for pattern in MULTIBYTE_NOPS:
        try:
            cand = addr.subtract(len(pattern))
        except Exception:
            continue
        if not exec_set.contains(cand):
            continue
        if padding_length(program, cand) == len(pattern):
            return "PADDING"

    if pb in PADDING_BYTES or pb in RET_BYTES:
        try:
            pb2 = read_byte(program, addr.subtract(2))
        except Exception:
            pb2 = None
        # One 0x90/0xCC byte is not evidence on its own -- it is just as often the
        # last byte of a preceding instruction's immediate (`mov ecx, 0x..CC`).
        # Require a second padding byte, or an entry on a 16-byte alignment
        # boundary, which is where Watcom actually starts functions.
        if pb2 in PADDING_BYTES or (addr.getOffset() % 16) == 0:
            return "PADDING"
    return "OTHER"


def has_call_reference(program, addr):
    """True if some instruction CALLs this address."""
    rm = program.getReferenceManager()
    try:
        for ref in rm.getReferencesTo(addr):
            if ref.getReferenceType().isCall():
                return True
    except Exception:
        pass
    return False


def describe_target(program, addr):
    """Best available name for a reloc's target -- a symbol, or the containing
    data's symbol plus offset. This is what surfaces the referenced strings."""
    symbol_table = program.getSymbolTable()
    sym = symbol_table.getPrimarySymbol(addr)
    if sym is not None:
        return str(sym.getName())
    data = program.getListing().getDataContaining(addr)
    if data is not None and data.isDefined():
        base = data.getMinAddress()
        bsym = symbol_table.getPrimarySymbol(base)
        delta = addr.getOffset() - base.getOffset()
        if bsym is not None:
            return "%s+%d" % (str(bsym.getName()), delta) if delta else str(bsym.getName())
    return str(addr)


# ---------------------------------------------------------------------------
# Relocation table
# ---------------------------------------------------------------------------

def collect_reloc_sites_api(program):
    """Sites via Ghidra's own RelocationTable. Returns [] if unavailable/empty."""
    sites = []
    try:
        table = program.getRelocationTable()
        it = table.getRelocations()
        while it.hasNext():
            reloc = it.next()
            try:
                if int(reloc.getType()) != RELOC_HIGHLOW:
                    continue
            except Exception:
                pass
            sites.append(reloc.getAddress())
    except Exception:
        return []
    return sites


def collect_reloc_sites_manual(program):
    """Fallback: parse the .reloc block directly.

    Base relocation blocks are [page RVA:u32][block size:u32] followed by
    (size-8)/2 u16 entries of (type << 12 | offset-within-page).
    """
    memory = program.getMemory()
    space = program.getAddressFactory().getDefaultAddressSpace()
    block = None
    for candidate in memory.getBlocks():
        if candidate.getName() == ".reloc":
            block = candidate
            break
    if block is None:
        return []

    image_base = program.getImageBase().getOffset()
    sites = []
    pos = block.getStart().getOffset()
    end = pos + block.getSize()
    while pos + 8 <= end:
        header = space.getAddress(pos)
        page_rva = read_dword(program, header)
        block_size = read_dword(program, header.add(4))
        if page_rva is None or block_size is None:
            break
        # A malformed/terminating block ends the walk rather than desyncing it.
        if block_size < 8 or block_size > 0x10000 or pos + block_size > end:
            break
        for i in range((block_size - 8) // 2):
            try:
                entry = memory.getShort(space.getAddress(pos + 8 + i * 2)) & 0xFFFF
            except Exception:
                continue
            if (entry >> 12) == RELOC_HIGHLOW:
                sites.append(space.getAddress(image_base + page_rva + (entry & 0xFFF)))
        pos += block_size
    return sites


def collect_reloc_sites(program):
    sites = collect_reloc_sites_api(program)
    if sites:
        return sites, "RelocationTable API"
    return collect_reloc_sites_manual(program), ".reloc block parse"


# ---------------------------------------------------------------------------
# Non-function code regions
# ---------------------------------------------------------------------------

def build_nonfunction_regions(program, exec_set):
    """Maximal runs of executable bytes that no function covers and that are not
    alignment padding. Returns a list of (start_addr, end_addr_inclusive) sorted by
    address -- the units a RELOC_CODE_RGN candidate is attributed to."""
    from ghidra.program.model.address import AddressSet

    body = AddressSet()
    for func in program.getFunctionManager().getFunctions(True):
        body.add(func.getBody())
    outside = exec_set.subtract(body)

    regions = []
    for rng in outside.getAddressRanges():
        addr = rng.getMinAddress()
        last = rng.getMaxAddress()
        start = None
        while addr.compareTo(last) <= 0:
            pad = padding_length(program, addr)
            if pad:
                if start is not None:
                    regions.append((start, addr.subtract(1)))
                    start = None
                try:
                    addr = addr.add(pad)
                except Exception:
                    break
                continue
            if read_byte(program, addr) is None:
                break
            if start is None:
                start = addr
            try:
                addr = addr.add(1)
            except Exception:
                break
        if start is not None:
            regions.append((start, last))
    regions.sort(key=lambda r: r[0].getOffset())
    return regions


def find_region(regions, starts, offset):
    """Region containing offset, or None."""
    i = bisect.bisect_right(starts, offset) - 1
    if i < 0:
        return None
    start, end = regions[i]
    if start.getOffset() <= offset <= end.getOffset():
        return regions[i]
    return None


# ---------------------------------------------------------------------------
# Discovery
# ---------------------------------------------------------------------------

def classify_sites(program, sites, exec_set, regions, starts):
    """Split reloc sites into the two tiers.

    Returns (ptr_hits, rgn_hits, stats) where ptr_hits maps a code-pointer target
    offset to the data sites holding it, and rgn_hits maps a region start offset to
    the (site, target) pairs found inside it.
    """
    memory = program.getMemory()
    fm = program.getFunctionManager()
    space = program.getAddressFactory().getDefaultAddressSpace()

    stats = Counter()
    ptr_hits = defaultdict(list)
    rgn_hits = defaultdict(list)

    for site in sites:
        block = memory.getBlock(site)
        if block is None:
            stats["site/no-block"] += 1
            continue
        value = read_dword(program, site)
        if value is None:
            stats["site/unreadable"] += 1
            continue
        target = space.getAddress(value) if value else None

        if block.isExecute():
            if fm.getFunctionContaining(site) is not None:
                stats["site/exec-in-function"] += 1
                continue
            region = find_region(regions, starts, site.getOffset())
            if region is None:
                stats["site/exec-other"] += 1
                continue
            # Where the fixup POINTS decides what the fixup IS. A value landing
            # back in executable space is a jump-table entry -- data embedded in
            # code, whose "region" starts at the table, not at a function. A value
            # landing in data is an instruction operand (`push offset s_...`,
            # `mov eax, g_Global`), which proves the bytes are real code.
            to_code = target is not None and exec_set.contains(target)
            if to_code:
                stats["site/exec-orphan-jumptable"] += 1
            else:
                stats["site/exec-orphan-operand"] += 1
            rgn_hits[region[0].getOffset()].append((site, target, to_code))
        else:
            if target is None or not exec_set.contains(target):
                stats["site/data-to-data"] += 1
                continue
            if fm.getFunctionAt(target) is not None:
                stats["site/data-to-known-function"] += 1
                continue
            stats["site/data-to-code"] += 1
            ptr_hits[target.getOffset()].append(site)

    return ptr_hits, rgn_hits, stats


def score_pointer(program, pseudo, exec_set, target):
    """Confidence for a code-pointer target. Returns (confidence, reason, inside)."""
    fm = program.getFunctionManager()
    inside = fm.getFunctionContaining(target)
    if inside is not None:
        # A code pointer into the middle of a known function is a label or
        # jump-table entry, not a new entry point. Report it, never define it.
        return "LOW", "inside %s" % inside.getName(), inside

    valid = valid_subroutine(pseudo, target)
    boundary = boundary_kind(program, target, exec_set)
    aligned = (target.getOffset() % 16) == 0

    reasons = []
    if boundary in ("PADDING", "START"):
        reasons.append("after padding")
    if aligned:
        reasons.append("16-byte aligned")
    if valid:
        reasons.append("pseudo-valid")
    if has_call_reference(program, target):
        reasons.append("has CALL ref")

    if valid and (boundary in ("PADDING", "START") or aligned):
        conf = "VERY_HIGH"
    elif valid:
        conf = "HIGH"
    elif boundary in ("PADDING", "START") or aligned:
        conf = "MEDIUM"
    else:
        conf = "LOW"
    return conf, ", ".join(reasons) or "code pointer only", None


def relocs_align_with_decode(program, pseudo, start, end_offset, reloc_offsets):
    """Decode forward from `start` and check the linker's fixups agree.

    A 4-byte absolute operand can never begin at an instruction's first byte (that
    byte is the opcode), and it must lie wholly inside the instruction. So if every
    reloc site in the region lands strictly inside a decoded instruction, `start`
    is a correct instruction boundary; if any lands on an instruction start or
    straddles one, the decode is out of phase and `start` is not the entry.

    Returns (aligned, decoded_instruction_count).
    """
    if pseudo is None:
        return None, 0
    pending = set(reloc_offsets)
    addr = start
    decoded = 0
    while pending and decoded < 8192:
        if addr.getOffset() > end_offset:
            break
        try:
            instr = pseudo.disassemble(addr)
        except Exception:
            return False, decoded
        if instr is None:
            return False, decoded
        length = instr.getLength()
        if length <= 0:
            return False, decoded
        base = addr.getOffset()
        for off in list(pending):
            if base <= off < base + length:
                # On the opcode byte, or running past the instruction end: the
                # decode is out of phase with the linker's own record.
                if off == base or off + 4 > base + length:
                    return False, decoded
                pending.discard(off)
        decoded += 1
        try:
            addr = addr.add(length)
        except Exception:
            break
    return (len(pending) == 0), decoded


def score_region(program, pseudo, exec_set, start, n_operand, n_jumptable,
                 aligned=None):
    """Confidence that a non-function code region's start is a function entry.

    n_operand   - relocs in the region whose value points at data (instruction
                  operands -> the bytes are provably code)
    n_jumptable - relocs whose value points back into code (jump-table entries ->
                  the bytes are probably an embedded table, not instructions)
    """
    if n_operand == 0:
        # Nothing but code->code fixups: this is a jump table, and its start is a
        # table entry rather than a function entry. Report it, never define it.
        return "LOW", "jump table (%d code-target reloc(s), no operand reloc)" % n_jumptable

    valid = valid_subroutine(pseudo, start)
    boundary = boundary_kind(program, start, exec_set)
    called = has_call_reference(program, start)

    reasons = ["%d operand reloc(s)" % n_operand]
    if n_jumptable:
        reasons.append("%d jump-table reloc(s)" % n_jumptable)
    if aligned is False:
        # The linker says there is an absolute operand at a byte our decode does
        # not treat as one. Whatever this region is, `start` is not its entry.
        reasons.append("RELOC MISALIGNED - start is not an instruction boundary")
        return "LOW", ", ".join(reasons)
    if aligned:
        reasons.append("reloc-aligned decode")
    if called:
        reasons.append("has CALL ref")
    if boundary in ("PADDING", "START"):
        reasons.append("after padding")
    if valid:
        reasons.append("pseudo-valid")
    if boundary == "OTHER":
        reasons.append("mid-flow start")

    if called and aligned and valid:
        conf = "VERY_HIGH"
    elif aligned and boundary in ("PADDING", "START") and valid:
        conf = "HIGH"
    elif aligned and valid:
        conf = "MEDIUM"
    else:
        conf = "LOW"
    return conf, ", ".join(reasons)


def discover(program):
    """Returns (rows, stats, source_desc)."""
    exec_set = get_executable_set(program)
    pseudo = make_pseudo(program)
    space = program.getAddressFactory().getDefaultAddressSpace()

    sites, source = collect_reloc_sites(program)
    print("  relocation sites: %d (via %s)" % (len(sites), source))
    if not sites:
        return [], Counter(), source

    print("  building non-function code regions...")
    regions = build_nonfunction_regions(program, exec_set)
    starts = [r[0].getOffset() for r in regions]
    print("  non-function code regions: %d" % len(regions))

    print("  classifying reloc sites...")
    ptr_hits, rgn_hits, stats = classify_sites(program, sites, exec_set, regions, starts)

    rows = []

    print("  scoring %d code-pointer target(s)..." % len(ptr_hits))
    for target_off, sources in ptr_hits.items():
        target = space.getAddress(target_off)
        conf, reason, inside = score_pointer(program, pseudo, exec_set, target)
        rows.append({
            "addr": target,
            "tier": TIER_PTR,
            "confidence": conf,
            "reason": reason,
            "inside": inside.getName() if inside is not None else None,
            "evidence": ["<- %s" % describe_target(program, s) for s in sources],
            "n_evidence": len(sources),
            "size": None,
        })

    print("  scoring %d code region(s)..." % len(rgn_hits))
    region_by_start = {r[0].getOffset(): r for r in regions}
    for start_off, hits in rgn_hits.items():
        start, end = region_by_start[start_off]
        n_jumptable = sum(1 for _s, _t, to_code in hits if to_code)
        n_operand = len(hits) - n_jumptable
        aligned = None
        if n_operand:
            aligned, _decoded = relocs_align_with_decode(
                program, pseudo, start, end.getOffset(),
                [s.getOffset() for s, _t, to_code in hits if not to_code])
        conf, reason = score_region(program, pseudo, exec_set, start,
                                    n_operand, n_jumptable, aligned)
        # Only data-space targets are listed as evidence: those name what the
        # hidden code actually uses (strings, globals). Code-space targets are
        # jump-table destinations and say nothing about the region's purpose.
        evidence = []
        seen = set()
        for _site, target, to_code in hits:
            if target is None or to_code:
                continue
            name = describe_target(program, target)
            if name in seen:
                continue
            seen.add(name)
            evidence.append("-> %s" % name)
        rows.append({
            "addr": start,
            "tier": TIER_RGN,
            "confidence": conf,
            "reason": reason,
            "inside": None,
            "evidence": evidence,
            "n_evidence": len(hits),
            "size": end.getOffset() - start.getOffset() + 1,
        })

    return rows, stats, source


# ---------------------------------------------------------------------------
# Apply (mutates -- only under --apply)
# ---------------------------------------------------------------------------

def define_function(program, addr, monitor):
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.app.cmd.function import CreateFunctionCmd

    if program.getListing().getInstructionAt(addr) is None:
        # restrictedSet MUST be None so followFlow disassembles the whole function
        # rather than capping the body at the entry instruction.
        DisassembleCommand(addr, None, True).applyTo(program, monitor)
    return bool(CreateFunctionCmd(addr).applyTo(program, monitor))


def apply_rows(program, rows, min_conf, tiers):
    from ghidra.util.task import ConsoleTaskMonitor
    monitor = ConsoleTaskMonitor()
    fm = program.getFunctionManager()
    threshold = CONF_RANK[min_conf]

    todo = [r for r in rows
            if r["tier"] in tiers
            and CONF_RANK[r["confidence"]] >= threshold
            and r["inside"] is None]
    todo.sort(key=lambda r: r["addr"].getOffset())

    created = 0
    failed = 0
    tx = program.startTransaction("Define reloc-discovered functions")
    ok = True
    try:
        for i, row in enumerate(todo, 1):
            addr = row["addr"]
            if fm.getFunctionAt(addr) is not None:
                row["result"] = "already"
            elif fm.getFunctionContaining(addr) is not None:
                # An earlier row's followFlow disassembly may have swallowed this
                # address into a body it created; do not split it here.
                row["result"] = "absorbed"
            elif define_function(program, addr, monitor):
                row["result"] = "created"
                created += 1
            else:
                row["result"] = "FAILED"
                failed += 1
            if i % 100 == 0:
                print("  ... %d/%d (created %d, failed %d)" % (i, len(todo), created, failed))
                sys.stdout.flush()
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        import traceback
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)

    return (created, failed, len(todo)) if ok else (0, 0, len(todo))


# ---------------------------------------------------------------------------
# Report
# ---------------------------------------------------------------------------

def write_report(path, program_name, rows, stats, source, applied, min_conf, tiers):
    lines = []
    lines.append("Hidden Function Candidates (reloc-guided)")
    lines.append("=" * 72)
    lines.append("Program: %s" % program_name)
    lines.append("Relocation source: %s" % source)
    lines.append("Mode: %s" % ("APPLIED (>= %s, tiers %s)" % (min_conf, ",".join(tiers))
                               if applied else "report only"))
    lines.append("Total candidates: %d" % len(rows))
    for tier in TIERS:
        sub = [r for r in rows if r["tier"] == tier]
        if not sub:
            continue
        counts = Counter(r["confidence"] for r in sub)
        lines.append("  %-16s %4d   %s" % (
            tier, len(sub),
            "  ".join("%s=%d" % (c, counts[c]) for c in reversed(CONFIDENCE_ORDER)
                      if counts[c])))
    lines.append("")
    lines.append("Reloc site classification:")
    for key, val in stats.most_common():
        lines.append("  %-28s %d" % (key, val))
    lines.append("")

    for tier in TIERS:
        sub = [r for r in rows if r["tier"] == tier]
        if not sub:
            continue
        sub.sort(key=lambda r: (-CONF_RANK[r["confidence"]], r["addr"].getOffset()))
        lines.append("=" * 72)
        lines.append("== %s (%d) ==" % (tier, len(sub)))
        lines.append("")
        for row in sub:
            size = ("%5d b" % row["size"]) if row["size"] else "       "
            lines.append("%s  %-10s %s  n=%-3d %-9s %s" % (
                row["addr"], row["confidence"], size, row["n_evidence"],
                row.get("result") or "", row["reason"]))
            for ev in row["evidence"][:MAX_EVIDENCE]:
                lines.append("        %s" % ev)
            extra = len(row["evidence"]) - MAX_EVIDENCE
            if extra > 0:
                lines.append("        ... %d more" % extra)
        lines.append("")

    # Reverse index: which data/string symbols are referenced from code that no
    # function covers. Each entry names a hidden function's job.
    lines.append("=" * 72)
    lines.append("== STRING/DATA EVIDENCE ==")
    lines.append("Symbols referenced from reloc sites inside non-function code.")
    lines.append("A symbol here is used by code Ghidra never turned into a function.")
    lines.append("")
    refs = defaultdict(list)
    for row in rows:
        if row["tier"] != TIER_RGN:
            continue
        for ev in row["evidence"]:
            refs[ev[3:]].append(row["addr"])
    for name in sorted(refs, key=lambda n: (-len(refs[n]), n)):
        addrs = refs[name]
        shown = ", ".join(str(a) for a in addrs[:6])
        more = "" if len(addrs) <= 6 else " ... +%d" % (len(addrs) - 6)
        lines.append("  %-48s %2d region(s): %s%s" % (name, len(addrs), shown, more))
    lines.append("")

    with open(path, "w") as fh:
        fh.write("\n".join(lines) + "\n")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Find hidden functions via the PE base relocation table.")
    parser.add_argument("project_path")
    parser.add_argument("project_name")
    parser.add_argument("program_name", nargs="?", default="nocturne.exe")
    parser.add_argument("--out", default=None)
    parser.add_argument("--apply", action="store_true",
                        help="Disassemble + create functions (default: report only)")
    parser.add_argument("--min-confidence", default="HIGH", choices=CONFIDENCE_ORDER,
                        help="Lowest confidence to define under --apply (default HIGH)")
    parser.add_argument("--tier", action="append", choices=TIERS, default=None,
                        help="Restrict --apply to a tier (repeatable; default both)")
    args = parser.parse_args()

    tiers = args.tier or list(TIERS)
    out_path = args.out or ("%s_hidden_functions.txt" % args.program_name)
    project_path = os.path.abspath(args.project_path)

    import pyghidra
    print("Starting PyGhidra...")
    pyghidra.start()
    print("Opening %s/%s :: %s" % (project_path, args.project_name, args.program_name))

    code = 0
    project = None
    try:
        project = pyghidra.open_project(project_path, args.project_name)
        with pyghidra.program_context(project, "/" + args.program_name) as program:
            print("Discovering...")
            rows, stats, source = discover(program)

            print("\n=== plan (%d candidates) ===" % len(rows))
            for tier in TIERS:
                sub = [r for r in rows if r["tier"] == tier]
                if not sub:
                    continue
                counts = Counter(r["confidence"] for r in sub)
                print("  %-16s %4d   %s" % (
                    tier, len(sub),
                    "  ".join("%s=%d" % (c, counts[c])
                              for c in reversed(CONFIDENCE_ORDER) if counts[c])))

            if args.apply:
                print("\n[apply] tiers=%s min-confidence=%s" % (",".join(tiers),
                                                               args.min_confidence))
                created, failed, n = apply_rows(program, rows, args.min_confidence, tiers)
                print("Defined %d/%d function(s), %d failed." % (created, n, failed))
                if created:
                    from ghidra.util.task import ConsoleTaskMonitor
                    print("Saving program database...")
                    program.getDomainFile().save(ConsoleTaskMonitor())
                    print("Saved.")
                    print("NEXT: run validate_function_ranges.py and "
                          "fix_function_boundaries.py as a QA gate.")

            write_report(out_path, args.program_name, rows, stats, source,
                         args.apply, args.min_confidence, tiers)
            print("Report written to: %s" % out_path)
            if not args.apply:
                print("[dry-run] re-run with --apply to define them.")
    except Exception as e:
        print("ERROR: %s" % str(e))
        import traceback
        traceback.print_exc()
        code = 1
    finally:
        if project is not None:
            try:
                project.close()
            except Exception:
                pass

    # os._exit() skips stdio buffer flushing; without this, redirected/piped
    # output is lost. Flush explicitly before the hard exit (the JVM can hang
    # on a clean sys.exit, hence os._exit).
    sys.stdout.flush()
    sys.stderr.flush()
    os._exit(code)


if __name__ == "__main__":
    main()
