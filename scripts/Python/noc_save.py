#!/usr/bin/env python3
"""Decompress a .NOC save to the text the game parses, or compress text back.

A save is "EFD" and a NUL, then the game's plain-text save run through its own
LZW (support/codec.cpp, CLZWCompress / CLZWDecompress at 0x8000 entries from 8
bits). CGame::saveGame writes the text, compresses it into the .NOC, and
CGame::loadGame reverses that into save\\$$SAVE$$.TMP before parsing; this does
the same steps outside the game, byte for byte, so a save can be read, edited
and put back.

    python3 scripts/Python/noc_save.py decompress save/SLOT01.NOC -o slot01.txt
    python3 scripts/Python/noc_save.py compress slot01.txt -o save/SLOT01.NOC

The codec, as the engine has it:

- The dictionary starts as the 256 single bytes and grows by one string per code
  read or written, a code behind the encoder; a dictionary that reaches 0x8000
  entries starts over.
- Each code is written in truncated binary against the current entry count: from
  the top bit down, a bit the largest code has clear is skipped while the code
  agrees with it, and every bit after the first place it falls short is written.
- Bits go out one at a time, least significant first within each byte, and the
  last byte is padded with zeros.
"""

import argparse
import sys

MAGIC = b'EFD\0'
DICTIONARY_SIZE = 0x8000
CHAR_BITS = 8


class Dictionary:
    """CLZWDictionary: every string is a parent's string plus one byte."""

    def __init__(self):
        self.reset()

    def reset(self):
        self.parent = [-1] * (1 << CHAR_BITS)
        self.char = list(range(1 << CHAR_BITS))
        self.children = {}
        self.bits = CHAR_BITS

    def __len__(self):
        return len(self.char)

    # addNode: the new string is `parent`'s plus `char`. A full dictionary starts
    # over instead, and says so.
    def add(self, char, parent):
        count = len(self.char)
        if count >= DICTIONARY_SIZE:
            self.reset()
            return True
        if count & (count - 1) == 0:
            self.bits += 1
        self.children[(parent, char)] = count
        self.parent.append(parent)
        self.char.append(char)
        return False

    # findCode: `char` after the string at `start`, or the byte itself with none.
    def find(self, char, start):
        if start < 0:
            return char
        return self.children.get((start, char), -1)

    # writeCodeSequence: the string a code stands for.
    def string(self, code):
        out = bytearray()
        while code >= 0:
            out.append(self.char[code])
            code = self.parent[code]
        out.reverse()
        return bytes(out)


class BitWriter:
    def __init__(self):
        self.out = bytearray()
        self.value = 0
        self.count = 0

    def bit(self, b):
        self.value |= b << self.count
        self.count += 1
        if self.count == 8:
            self.out.append(self.value)
            self.value = self.count = 0

    def flush(self):
        if self.count:
            self.out.append(self.value)
            self.value = self.count = 0
        return bytes(self.out)


class BitReader:
    def __init__(self, data):
        self.data = data
        self.pos = 0
        self.value = 0
        self.count = 0

    # The next bit, or None past the end.
    def bit(self):
        if self.count == 0:
            if self.pos >= len(self.data):
                return None
            self.value = self.data[self.pos]
            self.pos += 1
            self.count = 8
        b = self.value & 1
        self.value >>= 1
        self.count -= 1
        return b


# writeCodeBits
def write_code(writer, code, entries, bits):
    limit = entries - 1
    mask = 1 << (bits - 1)
    while mask:
        if limit & mask:
            if not code & mask:
                break
            writer.bit(1)
        mask >>= 1
    while mask:
        writer.bit(1 if code & mask else 0)
        mask >>= 1


# readCodeFromStream: the code, or -1 when the data runs out first.
def read_code(reader, entries, bits):
    limit = entries - 1
    mask = 1 << (bits - 1)
    value = 0
    while mask:
        if limit & mask:
            b = reader.bit()
            if b is None:
                return -1
            if b == 0:
                mask >>= 1
                while mask:
                    b = reader.bit()
                    if b is None:
                        return -1
                    if b:
                        value |= mask
                    mask >>= 1
                return value
            value |= mask
        mask >>= 1
    return value


def compress(text):
    """CLZWCompress, behind the magic: the .NOC for `text`."""
    d = Dictionary()
    writer = BitWriter()
    current = prev = -1
    prev_char = 0
    for char in text:
        found = d.find(char, current)
        if found >= 0:
            current = found
            continue
        write_code(writer, current, len(d), d.bits)
        if prev >= 0 and d.add(prev_char, prev):
            prev = -1
        else:
            prev = current
        current = prev_char = char
    if current >= 0:
        write_code(writer, current, len(d), d.bits)
    return MAGIC + writer.flush()


def decompress(data):
    """CLZWDecompress: the text a .NOC holds."""
    if data[:len(MAGIC)] != MAGIC:
        raise ValueError('not a compressed save: it does not start with EFD')
    d = Dictionary()
    reader = BitReader(data[len(MAGIC):])
    out = bytearray()
    previous = -1
    while True:
        code = read_code(reader, len(d), d.bits)
        if code < 0:
            return bytes(out)
        string = d.string(code)
        out += string
        if previous >= 0 and d.add(string[0], previous):
            code = -1
        previous = code


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('mode', choices=('decompress', 'compress'))
    ap.add_argument('input', help='file to read')
    ap.add_argument('-o', '--out', help='file to write; decompressing, stdout by default')
    args = ap.parse_args(argv)

    with open(args.input, 'rb') as f:
        data = f.read()
    if args.mode == 'compress':
        if args.out is None:
            ap.error('compress needs --out')
        result = compress(data)
    else:
        try:
            result = decompress(data)
        except ValueError as e:
            sys.exit(f'noc_save.py: {args.input}: {e}')
    if args.out is None:
        sys.stdout.buffer.write(result)
    else:
        with open(args.out, 'wb') as f:
            f.write(result)
    return 0


if __name__ == '__main__':
    sys.exit(main())
