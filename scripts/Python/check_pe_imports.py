#!/usr/bin/env python3
"""Check that a Windows executable's staged DLLs export everything it imports.

Windows refuses to start a program whose import names a symbol its DLL does not
export ("The procedure entry point ... could not be located"). A cross build
never runs the loader, so a DLL staged from the wrong runtime links cleanly and
fails only on the player's machine.

For the executable and every DLL beside it that it reaches, each by-name import
from a DLL in that directory must appear in that DLL's export table. DLLs not in
the directory are the system's and are not checked. Exits non-zero on a miss.

    python3 scripts/Python/check_pe_imports.py build/exe-windows-x86_64/nocturne.exe
"""

import argparse
import os
import struct
import sys


class PeImage:
    def __init__(self, path):
        with open(path, 'rb') as f:
            self.data = f.read()
        pe = struct.unpack_from('<I', self.data, 0x3c)[0]
        if self.data[pe:pe + 4] != b'PE\0\0':
            raise ValueError(f'{path}: not a PE image')
        coff = pe + 4
        section_count, = struct.unpack_from('<H', self.data, coff + 2)
        optional_size, = struct.unpack_from('<H', self.data, coff + 16)
        optional = coff + 20
        magic, = struct.unpack_from('<H', self.data, optional)
        self.pe32_plus = magic == 0x20b
        directories = optional + (112 if self.pe32_plus else 96)
        self.export_rva, = struct.unpack_from('<I', self.data, directories)
        self.import_rva, = struct.unpack_from('<I', self.data, directories + 8)
        table = optional + optional_size
        self.sections = []
        for i in range(section_count):
            virtual_size, rva, raw_size, raw_offset = struct.unpack_from(
                '<IIII', self.data, table + i * 40 + 8)
            self.sections.append((rva, max(virtual_size, raw_size), raw_offset))

    def offset(self, rva):
        for start, size, raw in self.sections:
            if start <= rva < start + size:
                return raw + rva - start
        raise ValueError(f'RVA {rva:#x} is in no section')

    def string(self, rva):
        start = self.offset(rva)
        return self.data[start:self.data.index(b'\0', start)].decode('ascii')

    def imports(self):
        """{dll name: [imported symbol names]}, ordinal imports omitted."""
        result = {}
        if not self.import_rva:
            return result
        thunk_size, ordinal_bit = (8, 1 << 63) if self.pe32_plus else (4, 1 << 31)
        thunk_format = '<Q' if self.pe32_plus else '<I'
        descriptor = self.offset(self.import_rva)
        while True:
            lookup, _, _, name_rva, address = struct.unpack_from('<IIIII', self.data, descriptor)
            if not name_rva:
                return result
            names = result.setdefault(self.string(name_rva), [])
            thunk = self.offset(lookup or address)
            while True:
                entry, = struct.unpack_from(thunk_format, self.data, thunk)
                if not entry:
                    break
                if not entry & ordinal_bit:
                    names.append(self.string(entry + 2))
                thunk += thunk_size
            descriptor += 20

    def exports(self):
        if not self.export_rva:
            return set()
        directory = self.offset(self.export_rva)
        name_count, = struct.unpack_from('<I', self.data, directory + 24)
        names_rva, = struct.unpack_from('<I', self.data, directory + 32)
        names = self.offset(names_rva)
        return {self.string(struct.unpack_from('<I', self.data, names + i * 4)[0])
                for i in range(name_count)}


def main():
    parser = argparse.ArgumentParser(description=__doc__.split('\n\n')[0])
    parser.add_argument('executable')
    args = parser.parse_args()

    directory = os.path.dirname(os.path.abspath(args.executable))
    staged = {name.lower(): os.path.join(directory, name)
              for name in os.listdir(directory) if name.lower().endswith('.dll')}

    missing = []
    pending = [os.path.abspath(args.executable)]
    checked = set()
    while pending:
        path = pending.pop()
        if path in checked:
            continue
        checked.add(path)
        for dll, names in PeImage(path).imports().items():
            dll_path = staged.get(dll.lower())
            if not dll_path:
                continue
            pending.append(dll_path)
            exported = PeImage(dll_path).exports()
            missing += [(os.path.basename(path), dll, name)
                        for name in names if name not in exported]

    for importer, dll, name in missing:
        print(f'{importer}: imports {name} from {dll}, which does not export it',
              file=sys.stderr)
    return 1 if missing else 0


if __name__ == '__main__':
    sys.exit(main())
