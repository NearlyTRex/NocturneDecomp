# ADJ pointer type report
# Analyzes ctor/dtor assembly to find sub-object offsets and generate
# a report of needed adjusted pointer types (e.g., CMyClass_ptr_344).

import os
import re
import glob
from collections import defaultdict
from ghidra_annotations.util.log import log_info


# Markers that identify sub-object construction/destruction calls
# (an array dtor is named for its extent, and maybe its owner: CFlame_arrdtor50,
# SButtonStruct_arrdtor50Chem)
SUBOBJ_RE = re.compile(r'_ctor_|_dtor_|__arrinit|_arrdtor[0-9A-Za-z]*_')
_SHORT_NAME_PART_RE = re.compile(r'ctor|dtor|arrdtor[0-9A-Za-z]*')

# All general-purpose registers we track
ALL_REGS = {'EAX', 'EBX', 'ECX', 'EDX', 'ESI', 'EDI', 'EBP'}

# A write to a 16- or 8-bit part leaves the whole register unknown
SUB_REGISTERS = {
    'AX': 'EAX', 'AL': 'EAX', 'AH': 'EAX', 'BX': 'EBX', 'BL': 'EBX', 'BH': 'EBX',
    'CX': 'ECX', 'CL': 'ECX', 'CH': 'ECX', 'DX': 'EDX', 'DL': 'EDX', 'DH': 'EDX',
    'SI': 'ESI', 'DI': 'EDI', 'BP': 'EBP',
}

# Mnemonics whose first operand is read, not written
READ_ONLY = {'CMP', 'TEST', 'PUSH', 'CALL', 'RET', 'NOP'}

# Registers an instruction writes without naming them
IMPLICIT_WRITES = {
    'CDQ': ('EDX',), 'MUL': ('EAX', 'EDX'), 'DIV': ('EAX', 'EDX'), 'IDIV': ('EAX', 'EDX'),
    'STOSD': ('EDI', 'ECX'), 'MOVSD': ('ESI', 'EDI', 'ECX'), 'MOVSB': ('ESI', 'EDI', 'ECX'),
}

_HEX = r'(-?0x[0-9a-fA-F]+)'
_INSTRUCTION_RE = re.compile(r'    (\w[\w.]*)\s+(.*?)\s*;\s*([0-9a-fA-F]+)')
_STACK_LOAD_RE = re.compile(r'(\w+),dword ptr \[(ESP|EBP) \+ (0x[0-9a-fA-F]+)\]$')
_REG_COPY_RE = re.compile(r'(\w+),(\w+)$')
_REG_IMM_RE = re.compile(r'(\w+),' + _HEX + r'$')
_LEA_RE = re.compile(r'(\w+),\[(\w+)(?:\s*\+\s*' + _HEX + r')?\]$')


def signed32(val):
    """Interpret a 32-bit unsigned value as signed."""
    return val - 0x100000000 if val >= 0x80000000 else val


def parse_hex(s):
    """Parse a hex string (with or without 0x prefix, may be negative)."""
    return int(s, 16)


def is_subobj_call(name):
    """Check if a CALL target is a sub-object ctor/dtor/array init."""
    return SUBOBJ_RE.search(name) is not None


def extract_info(filepath):
    """Extract class name and function type from asm filename."""
    basename = os.path.basename(filepath)
    m = re.match(r'(.+?)_(ctor|dtor)_FUN_[0-9a-fA-F]+\.asm', basename)
    if m:
        return m.group(1), m.group(2)
    return None, None


def parse_instructions(filepath):
    """Parse an asm file into a list of (mnemonic, operands, address) tuples.

    Lines read "    MOV EAX,dword ptr [ESP + 0x4]  ; 004d1720", or "    RET  ; 004d1789"
    with no operands.
    """
    instructions = []
    with open(filepath) as f:
        for line in f:
            m = _INSTRUCTION_RE.match(line)
            if m:
                mnemonic = m.group(1).upper().split('.')[0]  # Strip suffixes like .REP
                instructions.append((mnemonic, m.group(2).strip(), m.group(3)))
    return instructions


def compute_this_ptr_offsets(instructions):
    """Where an EBP frame finds this_ptr, and whether ESP-relative loads can be trusted.

    Returns:
        dict: has_frame, ebp_offset (this_ptr's [EBP + n], or None without a
        frame), has_and_esp (ESP is realigned, so its offsets are unknown)
    """
    has_frame = False
    ebp_offset = None
    for i, (mn, ops, _) in enumerate(instructions):
        if mn == 'MOV' and ops == 'EBP,ESP':
            has_frame = True
            pushes = sum(1 for mn2, ops2, _ in instructions[:i] if mn2 == 'PUSH' and ops2.upper() in ALL_REGS)
            ebp_offset = pushes * 4 + 4
            break

    has_and_esp = any(mn == 'AND' and ops.startswith('ESP,') for mn, ops, _ in instructions)
    return {'ebp_offset': ebp_offset, 'has_frame': has_frame, 'has_and_esp': has_and_esp}


def _destination(ops):
    """The general register an instruction's first operand names, or None."""
    first = ops.split(',')[0].strip().upper()
    if first in ALL_REGS:
        return first
    return SUB_REGISTERS.get(first)


class _Tracker:
    """Each register's offset from this_ptr (None when unknown), and the pushed values."""

    def __init__(self, stack_info):
        self.stack_info = stack_info
        self.regs = {r: None for r in ALL_REGS}
        self.push_stack = []
        self.esp_adjust = 0             # bytes pushed or reserved since entry

    def stack_load(self, base, off):
        """this_ptr's offset (0) when [base + off] holds the this_ptr argument, else None."""
        if base == 'ESP':
            hit = not self.stack_info['has_and_esp'] and off == 0x4 + self.esp_adjust
        else:
            hit = off == self.stack_info['ebp_offset']
        return 0 if hit else None

    def drop(self, nbytes):
        """Release nbytes of stack, popping the pushed values they held."""
        n = nbytes // 4
        del self.push_stack[max(0, len(self.push_stack) - n):]
        self.esp_adjust -= nbytes

    def mov(self, ops):
        m = _STACK_LOAD_RE.match(ops)
        if m:
            return self.stack_load(m.group(2), parse_hex(m.group(3)))
        m = _REG_COPY_RE.match(ops)
        if m and m.group(2).upper() in ALL_REGS:
            return self.regs[m.group(2).upper()]
        return None

    def lea(self, ops):
        m = _LEA_RE.match(ops)
        if not m or m.group(2).upper() not in ALL_REGS or self.regs[m.group(2).upper()] is None:
            return None
        return self.regs[m.group(2).upper()] + (signed32(parse_hex(m.group(3)) & 0xFFFFFFFF) if m.group(3) else 0)

    def add_sub(self, mn, dest, ops):
        """ADD/SUB of an immediate moves a known offset; on ESP it pops or reserves."""
        m = _REG_IMM_RE.match(ops)
        if not m:
            return None
        val = signed32(parse_hex(m.group(2)) & 0xFFFFFFFF)
        if mn == 'SUB':
            val = -val
        if m.group(1).upper() == 'ESP':
            if val > 0:
                self.drop(val)
            else:
                self.esp_adjust -= val
            return None
        return None if self.regs[dest] is None else self.regs[dest] + val

    def step(self, mn, ops):
        """Apply one instruction; returns (call target, this offset) for a sub-object call."""
        dest = _destination(ops)
        if mn == 'PUSH':
            self.push_stack.append(self.regs.get(ops.upper()))
            self.esp_adjust += 4
        elif mn == 'POP':
            popped = self.push_stack.pop() if self.push_stack else None
            self.esp_adjust -= 4
            if dest:
                self.regs[dest] = popped
        elif mn == 'CALL':
            return self.call(ops.split(';')[0].strip())
        elif mn in ('ADD', 'SUB') and (dest or ops.upper().startswith('ESP,')):
            value = self.add_sub(mn, dest, ops)
            if dest:
                self.regs[dest] = value
        elif mn == 'XCHG' and dest and _destination(ops.split(',', 1)[1]):
            other = _destination(ops.split(',', 1)[1])
            self.regs[dest], self.regs[other] = self.regs[other], self.regs[dest]
        elif dest and mn not in READ_ONLY and not mn.startswith('J'):
            exact = ops.split(',')[0].strip().upper() in ALL_REGS
            if mn == 'MOV' and exact:
                self.regs[dest] = self.mov(ops)
            elif mn == 'LEA':
                self.regs[dest] = self.lea(ops)
            else:
                self.regs[dest] = None
        for reg in IMPLICIT_WRITES.get(mn, ()):
            self.regs[reg] = None
        return None

    def call(self, target):
        if '__STK' in target:
            if self.push_stack:
                self.drop(4)
            return None
        result = None
        if is_subobj_call(target):
            arg = self.push_stack[-1] if self.push_stack else None
            result = (target, arg)
        # cdecl: a call leaves EAX/ECX/EDX undefined, except that a ctor/dtor
        # returns the this it was given
        self.regs['EAX'] = result[1] if result else None
        self.regs['ECX'] = None
        self.regs['EDX'] = None
        return result


def analyze_asm(filepath):
    """Analyze an asm file to find sub-object ctor/dtor calls and their offsets.

    Returns list of (call_name, offset_from_this) tuples.
    offset_from_this is an int, or None if the offset couldn't be determined.
    """
    instructions = parse_instructions(filepath)
    tracker = _Tracker(compute_this_ptr_offsets(instructions))
    results = []
    for mn, ops, _ in instructions:
        found = tracker.step(mn, ops)
        if found:
            results.append(found)
    return results


def short_call_name(call_target):
    """Shorten a call target for display: Class_ctor out of a full ctor/dtor name."""
    if '_FUN_' not in call_target:
        return call_target
    parts = call_target.split('_FUN_')[0].split('_')
    for j, p in enumerate(parts):
        if _SHORT_NAME_PART_RE.fullmatch(p):
            return '_'.join(parts[max(0, j-1):j+1])
    return '_'.join(parts[-2:])


def _source_unit(path):
    """The dir/unit.cpp a function file sits under, or "unknown"."""
    parts = path.split(os.sep)
    for j, p in enumerate(parts[:-1]):
        if p.endswith('.cpp'):
            return os.path.join(*parts[max(0, j-1):j+1])
    return "unknown"


def generate_adj_pointer_report(pseudocode_src_dir, reports_dir):
    """Generate the adj_pointer_types.txt report.

    Args:
        pseudocode_src_dir: Path to pseudocode/src directory
        reports_dir: Path to reports output directory
    """
    log_info("Generating ADJ pointer types report...")

    # Find all ctor/dtor asm files (skip CRT functions)
    asm_files = set()
    for pattern in ['**/*_ctor_*.asm', '**/*_dtor_*.asm']:
        for f in glob.glob(os.path.join(pseudocode_src_dir, pattern), recursive=True):
            if os.sep + 'crt' + os.sep not in f:
                asm_files.add(f)
    asm_files = sorted(asm_files)

    needed_types = defaultdict(set)
    unknown_offsets = []
    unfinished = []
    finished = []
    for path in asm_files:
        class_name, _ = extract_info(path)
        if not class_name:
            continue
        calls = analyze_asm(path)
        nonzero = [(n, o) for n, o in calls if o]
        unknown = [(n, o) for n, o in calls if o is None]
        for _, offset in nonzero:
            needed_types[class_name].add(offset)
        unknown_offsets += [(path, n) for n, _ in unknown]
        if not (nonzero or unknown):
            continue
        # Has the .cpp been finished with ADJ() yet?
        with open(path[:-len('.asm')] + '.cpp') as f:
            has_adj = 'ADJ(' in f.read()
        (finished if has_adj else unfinished).append((path, class_name, nonzero, unknown))

    # Build report
    lines = []
    lines.append("Scanning %d ctor/dtor asm files in %s..." % (len(asm_files), pseudocode_src_dir))

    # ---- Unfinished section ----
    lines.append("")
    lines.append("=" * 70)
    lines.append("UNFINISHED CTORS/DTORS (%d files still need ADJ)" % len(unfinished))
    lines.append("=" * 70)

    by_unit = defaultdict(list)
    for entry in unfinished:
        by_unit[_source_unit(entry[0])].append(entry)

    for unit in sorted(by_unit):
        lines.append("")
        lines.append("  [%s]" % unit)
        for path, class_name, nonzero, unknown in by_unit[unit]:
            lines.append("    %s:" % os.path.basename(path)[:-len('.asm')])
            for call_name, offset in nonzero:
                lines.append("      %s @ this+0x%x (%d) -> %s_ptr_%d" % (
                    short_call_name(call_name), offset, offset, class_name, offset))
            for call_name, _ in unknown:
                lines.append("      %s @ ??? (UNKNOWN)" % short_call_name(call_name))

    # ---- Already-finished section ----
    if finished:
        lines.append("")
        lines.append("=" * 70)
        lines.append("ALREADY FINISHED (%d files have ADJ)" % len(finished))
        lines.append("=" * 70)
        for path, _, _, _ in finished:
            lines.append("  %s" % os.path.basename(path)[:-len('.asm')])

    # ---- Full type summary ----
    lines.append("=" * 70)
    lines.append("NEEDED ADJ POINTER TYPES")
    lines.append("=" * 70)
    total = 0
    for cls in sorted(needed_types):
        for off in sorted(needed_types[cls]):
            lines.append("  %s_ptr_%d  (0x%x)" % (cls, off, off))
            total += 1

    lines.append("")
    lines.append("Total: %d types across %d classes" % (total, len(needed_types)))

    # ---- Unknowns ----
    if unknown_offsets:
        lines.append("")
        lines.append("=" * 70)
        lines.append("MANUAL REVIEW NEEDED (%d calls with unknown offset)" % len(unknown_offsets))
        lines.append("=" * 70)
        for path, call_name in unknown_offsets:
            lines.append("  %s: %s" % (os.path.basename(path), short_call_name(call_name)))

    # Write report
    report_path = os.path.join(reports_dir, "adj_pointer_types.txt")
    with open(report_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    log_info("Wrote ADJ pointer types report: %s (%d needed types)" % (report_path, total))

    return total
