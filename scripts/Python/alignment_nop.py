#!/usr/bin/env python3
"""Recognise the single-instruction no-ops Watcom pads with.

Watcom aligns function entries, and branch targets inside functions, to 16
bytes by filling the gap with no-ops that do nothing to any register:

    NOP                 90
    XCHG AX,AX          66 90
    MOV r,r             8b c9 (MOV ECX,ECX), 89 c0 ...
    LEA r,[r]           8d 40 00 (LEA EAX,[EAX + 0x0]), 8d 54 22 00 ...

Ghidra prints a zero displacement either as `[EDX]` or as `[EDX + 0x0]`
depending on the encoding, so both forms count.
"""


def is_alignment_nop(instr):
    """True if the decoded instruction `instr` is Watcom alignment padding."""
    mnemonic = instr.getMnemonicString().upper()
    if mnemonic == "NOP":
        return True
    if mnemonic not in ("MOV", "LEA", "XCHG") or instr.getNumOperands() != 2:
        return False
    dst = instr.getDefaultOperandRepresentation(0).upper()
    src = instr.getDefaultOperandRepresentation(1).upper().replace(" ", "")
    if mnemonic == "LEA":
        return src in ("[%s]" % dst, "[%s+0X0]" % dst)
    return src == dst
