#!/usr/bin/env python3
"""Write a macOS .icns from the window icon header the build already has.

The app bundle's Finder and Dock icon is the same picture as the window icon
(shims/core/window_icon_moon.h, or the header extract_exe_icon.py generates):
RGBA8888 pixels in a C array. An .icns can hold PNGs directly, so this needs no
Mac tools and no image library, and runs on any build host.

    python3 scripts/Python/make_icns.py --header shims/core/window_icon_moon.h --out Nocturne.icns
"""

import argparse
import re
import struct
import sys
import zlib

# The PNG-carrying icns element for each square size.
ICNS_TYPES = {16: b'icp4', 32: b'icp5', 64: b'icp6', 128: b'ic07',
              256: b'ic08', 512: b'ic09', 1024: b'ic10'}


def read_header(path):
    with open(path, encoding='utf-8') as f:
        text = f.read()
    width = int(re.search(r'#define NOCTURNE_ICON_WIDTH\s+(\d+)', text).group(1))
    height = int(re.search(r'#define NOCTURNE_ICON_HEIGHT\s+(\d+)', text).group(1))
    body = text[text.index('{', text.index('NOCTURNE_ICON_RGBA')):]
    rgba = bytes(int(h, 16) for h in re.findall(r'0x([0-9a-fA-F]{2})', body))
    if len(rgba) != width * height * 4:
        raise ValueError(f'{path}: {len(rgba)} bytes for a {width}x{height} icon')
    return width, height, rgba


def png(width, height, rgba):
    def chunk(kind, data):
        return (struct.pack('>I', len(data)) + kind + data +
                struct.pack('>I', zlib.crc32(kind + data) & 0xffffffff))
    stride = width * 4
    raw = b''.join(b'\0' + rgba[y * stride:(y + 1) * stride] for y in range(height))
    return (b'\x89PNG\r\n\x1a\n' +
            chunk(b'IHDR', struct.pack('>IIBBBBB', width, height, 8, 6, 0, 0, 0)) +
            chunk(b'IDAT', zlib.compress(raw, 9)) +
            chunk(b'IEND', b''))


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--header', required=True, help='icon header to read')
    ap.add_argument('--out', required=True, help='.icns file to write')
    args = ap.parse_args()

    width, height, rgba = read_header(args.header)
    kind = ICNS_TYPES.get(width) if width == height else None
    if kind is None:
        sys.exit(f'make_icns.py: no icns element holds a {width}x{height} image')
    image = png(width, height, rgba)
    element = kind + struct.pack('>I', 8 + len(image)) + image
    with open(args.out, 'wb') as f:
        f.write(b'icns' + struct.pack('>I', 8 + len(element)) + element)


if __name__ == '__main__':
    main()
