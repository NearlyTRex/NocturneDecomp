#!/usr/bin/env python3
# Decrypt all g_CheatStr_* arrays from the project's constants header.
#
# Algorithm (recovered from support/newmsg.cpp:decryptMessage_FUN_00544270):
#   key = buf[0]
#   for i in 2..len-1:
#       plain[i] = encrypted[i] ^ key
#       if plain[i] == 0: break
#       key = (key * 0xBD + 1) & 0xFF        # -0x43 == 0xBD as unsigned byte
#
# The returned cleartext is buf[0x17:null_index] — the first 21 decrypted bytes
# (offsets 2..22) are filler/header that the consumer skips. Header validation:
#   buf[2] ^ buf[0] == 0x3E   (== '>')
# i.e. the first encrypted byte after the key, when XOR'd with the key, must
# decrypt to '>'.
#
# Usage:
#   python3 decrypt_cheats.py
#       Decrypts every g_CheatStr_* in the default constants header path and
#       prints a name → cleartext table.
#
#   python3 decrypt_cheats.py path/to/constants_620000.h
#       Same, against a custom path.

from __future__ import annotations

import os
import re
import sys

REPO_ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
DEFAULT_HEADER = os.path.join(
    REPO_ROOT, 'annotations', 'nocedit.exe', 'pseudocode',
    'include', 'constants', 'constants_620000.h',
)

# Match a static char g_CheatStr_<Name>[N] = { ... }; declaration. The body
# is captured raw and parsed for hex byte literals separately.
_DECL_RE = re.compile(
    r'static\s+char\s+(g_CheatStr_\w+)\s*\[\s*\d+\s*\]\s*=\s*\{([^}]*)\}\s*;',
    re.DOTALL,
)
_BYTE_RE = re.compile(r'\(char\)\s*0x([0-9A-Fa-f]+)')


def parse_cheats(text):
    """Yield (name, [int, int, ...]) for each g_CheatStr_* declaration."""
    for m in _DECL_RE.finditer(text):
        name = m.group(1)
        body = m.group(2)
        bytes_ = [int(h, 16) for h in _BYTE_RE.findall(body)]
        yield name, bytes_


def decrypt(buf):
    """Run the in-place XOR-with-multiplicative-key decrypt.

    Returns (cleartext, header_bytes, full_decoded_bytes).
    Raises ValueError on header mismatch or premature null.
    """
    if len(buf) < 0x17 + 1:
        raise ValueError("buffer too short (need >= 0x18 bytes)")
    decoded = bytearray(buf)  # mutable copy
    key = decoded[0]
    if (decoded[2] ^ key) != 0x3E:
        raise ValueError(
            "header check failed: buf[2] ^ buf[0] = 0x%02X (expected 0x3E)"
            % (decoded[2] ^ key))
    null_idx = -1
    i = 2
    while i < len(decoded):
        plain = decoded[i] ^ key
        decoded[i] = plain
        if plain == 0:
            null_idx = i
            break
        # `bVar2 * -0x43 + 1` in the asm is an int8 mul wrapped to uint8.
        # -0x43 (signed int8) == 0xBD (unsigned int8), and the multiplication
        # is masked to 8 bits.
        key = (key * 0xBD + 1) & 0xFF
        i += 1
    if null_idx < 0:
        raise ValueError("no null terminator found")
    if null_idx < 0x17:
        raise ValueError(
            "premature null at offset 0x%X (must be >= 0x17)" % null_idx)
    cleartext = bytes(decoded[0x17:null_idx]).decode('latin-1')
    header = bytes(decoded[2:0x17]).decode('latin-1')
    return cleartext, header, bytes(decoded[:null_idx + 1])


def main(argv=None):
    argv = argv if argv is not None else sys.argv[1:]
    path = argv[0] if argv else DEFAULT_HEADER
    if not os.path.isfile(path):
        print("ERROR: %s not found" % path, file=sys.stderr)
        return 1

    with open(path, 'r') as f:
        text = f.read()

    rows = []
    headers_seen = set()
    for name, buf in parse_cheats(text):
        try:
            cleartext, header, _ = decrypt(buf)
            rows.append((name, cleartext, header, None))
            headers_seen.add(header)
        except ValueError as e:
            rows.append((name, None, None, str(e)))

    if not rows:
        print("No g_CheatStr_* declarations found in %s" % path)
        return 1

    # Print results.
    name_w = max(len(r[0]) for r in rows)
    print("Decrypted %d cheat strings from %s\n" % (len(rows), path))
    print("%-*s  %s" % (name_w, "Symbol", "Cleartext (type this in-game)"))
    print("%-*s  %s" % (name_w, "-" * name_w, "-" * 40))
    for name, cleartext, header, err in rows:
        if err is None:
            display = repr(cleartext)
        else:
            display = "ERROR: %s" % err
        print("%-*s  %s" % (name_w, name, display))

    if len(headers_seen) == 1:
        print("\nAll cheats share filler header (offsets 2..0x16): %r"
              % headers_seen.pop())
    elif headers_seen:
        print("\nFiller headers (offsets 2..0x16) varied across cheats:")
        for h in sorted(headers_seen):
            print("  %r" % h)

    return 0 if all(r[3] is None for r in rows) else 2


if __name__ == '__main__':
    sys.exit(main())
