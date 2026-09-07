#!/usr/bin/env python3
"""Turn an icon source into a C header of RGBA pixels for SDL_SetWindowIcon.

Two jobs, one decoder.

The one the build ships is offline: a public-domain lunar photograph is keyed,
downscaled and committed as shims/core/window_icon_moon.h, so an ordinary build
runs no Python at all and a clean clone still gets an icon.

The other is the shipped game's own. Both nocturne.exe and nocedit.exe carry
exactly one icon in their PE resource directory -- a 32x32, 4bpp, 16-grey
cratered moon with an AND mask that cuts the corners transparent -- and that is
the icon the game showed on Windows in 1999. Nothing about it is reconstructed;
these are the original resource bytes, decoded and rescaled. But the game
binaries are not in the repository (.gitignore keeps every *.exe out), so it
cannot be committed and has to be extracted at build time against whatever the
developer has locally. Configure with -DNOCTURNE_ICON_FROM_EXE=ON to opt in.

When a source yields nothing the header comes out with a zero width and the
shim simply never calls SDL_SetWindowIcon. A missing icon must never fail a
build.

Decoding is stdlib-only for every format the game itself uses: PE resources,
standalone .ico, and .bmp all share one BITMAPINFOHEADER path. Pillow is
consulted only for formats it doesn't cover (.jpg, .png, ...), and its absence
degrades to "no fallback icon" rather than an error.

Usage:
    extract_exe_icon.py --out build/generated/nocturne_icon.h \\
        --exe nocturne.exe --exe nocedit.exe
    extract_exe_icon.py --out shims/core/window_icon_moon.h \\
        --fallback moon.jpg --key-background 24 --credit "..."
"""

import argparse
import os
import shlex
import struct
import sys

RT_ICON = 3
RT_GROUP_ICON = 14

# Resource-directory and icon-directory record sizes, named so the offset
# arithmetic below reads as structure walking rather than magic numbers.
_RES_DIR_SIZE = 16
_RES_ENTRY_SIZE = 8
_GRP_ENTRY_SIZE = 14
_BITMAPINFOHEADER_SIZE = 40


def log(msg):
    print("extract_exe_icon: " + msg, file=sys.stderr)


# --------------------------------------------------------------------------
# Minimal PE parsing (only the section table and the resource directory)
# --------------------------------------------------------------------------

def _pe_sections(data):
    """Return [(virtual_address, virtual_size, raw_offset, raw_size)] and the
    resource directory's RVA, or None if this isn't a PE we can read."""
    if len(data) < 0x40 or data[:2] != b"MZ":
        return None
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    if e_lfanew + 24 > len(data) or data[e_lfanew:e_lfanew + 4] != b"PE\0\0":
        return None

    coff = e_lfanew + 4
    num_sections = struct.unpack_from("<H", data, coff + 2)[0]
    opt_size = struct.unpack_from("<H", data, coff + 16)[0]
    opt = coff + 20
    magic = struct.unpack_from("<H", data, opt)[0]
    if magic == 0x10B:      # PE32
        data_dirs = opt + 96
    elif magic == 0x20B:    # PE32+
        data_dirs = opt + 112
    else:
        return None

    num_dirs = struct.unpack_from("<I", data, data_dirs - 4)[0]
    if num_dirs <= 2:
        return None
    res_rva = struct.unpack_from("<I", data, data_dirs + 8 * 2)[0]
    if not res_rva:
        return None

    sections = []
    table = opt + opt_size
    for i in range(num_sections):
        base = table + 40 * i
        if base + 40 > len(data):
            break
        vsize, va, raw_size, raw_off = struct.unpack_from("<IIII", data, base + 8)
        sections.append((va, vsize, raw_off, raw_size))
    return sections, res_rva


def _rva_to_off(sections, rva):
    for va, vsize, raw_off, raw_size in sections:
        # Watcom writes VirtualSize as 0 in every section header it emits, so
        # the raw size is the only extent available for those binaries.
        extent = max(vsize, raw_size)
        if va <= rva < va + extent:
            return raw_off + (rva - va)
    return None


def _walk_resources(data, sections, res_base, node_off, ids, out):
    """Depth-first walk of the three-level type/name/language resource tree,
    appending (type_id, name_id, blob) for every leaf."""
    if node_off + _RES_DIR_SIZE > len(data):
        return
    named, by_id = struct.unpack_from("<HH", data, node_off + 12)
    for i in range(named + by_id):
        entry = node_off + _RES_DIR_SIZE + _RES_ENTRY_SIZE * i
        if entry + _RES_ENTRY_SIZE > len(data):
            return
        name, offset = struct.unpack_from("<II", data, entry)
        if offset & 0x80000000:
            _walk_resources(data, sections, res_base,
                            res_base + (offset & 0x7FFFFFFF), ids + [name], out)
        elif len(ids) >= 2:
            leaf = res_base + offset
            if leaf + 8 > len(data):
                continue
            data_rva, size = struct.unpack_from("<II", data, leaf)
            off = _rva_to_off(sections, data_rva)
            if off is not None and off + size <= len(data):
                out.append((ids[0], ids[1], data[off:off + size]))


def pe_icon(path):
    """Best icon in a PE's resources, as (dib_blob, description)."""
    with open(path, "rb") as f:
        data = f.read()
    parsed = _pe_sections(data)
    if not parsed:
        log("%s is not a readable PE, skipping" % path)
        return None
    sections, res_rva = parsed
    res_base = _rva_to_off(sections, res_rva)
    if res_base is None:
        return None

    leaves = []
    _walk_resources(data, sections, res_base, res_base, [], leaves)
    icons = {name: blob for typ, name, blob in leaves if typ == RT_ICON}
    if not icons:
        log("%s has no RT_ICON resource" % path)
        return None

    # The group directory is what Windows itself consults to pick a size, so
    # honour it when present; a lone RT_ICON without a group is still usable.
    best_id = None
    for typ, _name, blob in leaves:
        if typ != RT_GROUP_ICON or len(blob) < 6:
            continue
        count = struct.unpack_from("<H", blob, 4)[0]
        for i in range(count):
            off = 6 + _GRP_ENTRY_SIZE * i
            if off + _GRP_ENTRY_SIZE > len(blob):
                break
            width, height = blob[off], blob[off + 1]
            bit_count = struct.unpack_from("<H", blob, off + 6)[0]
            icon_id = struct.unpack_from("<H", blob, off + 12)[0]
            # 0 means 256 in the byte-wide group directory.
            width = width or 256
            height = height or 256
            if icon_id not in icons:
                continue
            key = (width * height, bit_count)
            if best_id is None or key > best_id[0]:
                best_id = (key, icon_id)

    icon_id = best_id[1] if best_id else sorted(icons)[0]
    return icons[icon_id], "%s RT_ICON #%d" % (os.path.basename(path), icon_id)


# --------------------------------------------------------------------------
# DIB decoding -- shared by PE icon resources, .ico entries and .bmp files
# --------------------------------------------------------------------------

def decode_dib(blob, has_mask):
    """Decode a BITMAPINFOHEADER image to (width, height, RGBA bytes).

    `has_mask` distinguishes an icon image -- whose biHeight covers the colour
    rows *and* a 1bpp AND mask stacked underneath -- from a plain bottom-up
    bitmap. Rows are stored bottom-up in both cases.
    """
    if len(blob) < _BITMAPINFOHEADER_SIZE:
        return None
    (hdr_size, width, height, planes, bpp,
     compression, _img_size, _xppm, _yppm, clr_used, _clr_imp) = \
        struct.unpack_from("<IiiHHIIiiII", blob, 0)
    if hdr_size < _BITMAPINFOHEADER_SIZE or compression != 0 or planes != 1:
        log("unsupported DIB (header=%d compression=%d planes=%d)"
            % (hdr_size, compression, planes))
        return None
    if has_mask:
        height //= 2
    if width <= 0 or height <= 0:
        return None

    palette = []
    off = hdr_size
    if bpp <= 8:
        entries = clr_used or (1 << bpp)
        for i in range(entries):
            if off + 4 * i + 3 > len(blob):
                return None
            b, g, r, _ = blob[off + 4 * i:off + 4 * i + 4]
            palette.append((r, g, b))
        off += 4 * entries

    stride = ((width * bpp + 31) // 32) * 4
    xor = blob[off:off + stride * height]
    if len(xor) < stride * height:
        return None
    off += stride * height

    mask_stride = ((width + 31) // 32) * 4
    mask = blob[off:off + mask_stride * height] if has_mask else b""
    if has_mask and len(mask) < mask_stride * height:
        mask = b""   # 32bpp icons sometimes omit it; alpha carries the shape

    def pixel(x, row):
        base = row * stride
        if bpp == 1:
            idx = (xor[base + x // 8] >> (7 - (x % 8))) & 1
            return palette[idx] + (255,)
        if bpp == 4:
            byte = xor[base + x // 2]
            idx = (byte >> 4) if x % 2 == 0 else (byte & 0x0F)
            return palette[idx] + (255,)
        if bpp == 8:
            return palette[xor[base + x]] + (255,)
        if bpp == 16:
            v = struct.unpack_from("<H", xor, base + 2 * x)[0]
            r = ((v >> 10) & 0x1F) * 255 // 31
            g = ((v >> 5) & 0x1F) * 255 // 31
            b = (v & 0x1F) * 255 // 31
            return (r, g, b, 255)
        if bpp == 24:
            b, g, r = xor[base + 3 * x:base + 3 * x + 3]
            return (r, g, b, 255)
        if bpp == 32:
            b, g, r, a = xor[base + 4 * x:base + 4 * x + 4]
            return (r, g, b, a)
        return None

    if bpp not in (1, 4, 8, 16, 24, 32):
        log("unsupported icon depth: %d bpp" % bpp)
        return None

    # A 32bpp icon whose alpha channel is entirely zero predates per-pixel
    # alpha; its shape lives in the AND mask like every other depth.
    alpha_is_real = bpp == 32 and any(xor[i] for i in range(3, len(xor), 4))

    out = bytearray(width * height * 4)
    for y in range(height):
        row = height - 1 - y            # bottom-up
        for x in range(width):
            r, g, b, a = pixel(x, row)
            if not alpha_is_real:
                a = 255
                if mask:
                    bit = (mask[row * mask_stride + x // 8] >> (7 - (x % 8))) & 1
                    if bit:
                        r = g = b = a = 0
            o = (y * width + x) * 4
            out[o:o + 4] = bytes((r, g, b, a))
    return width, height, bytes(out), bpp


def ico_icon(path):
    """Best image in a standalone .ico, as (dib_blob, description)."""
    with open(path, "rb") as f:
        data = f.read()
    if len(data) < 6 or struct.unpack_from("<HH", data, 0) != (0, 1):
        log("%s is not an .ico file" % path)
        return None
    count = struct.unpack_from("<H", data, 4)[0]
    best = None
    for i in range(count):
        off = 6 + 16 * i
        if off + 16 > len(data):
            break
        width, height, _colors, _res = data[off:off + 4]
        bit_count = struct.unpack_from("<H", data, off + 6)[0]
        size, image_off = struct.unpack_from("<II", data, off + 8)
        if image_off + size > len(data):
            continue
        width = width or 256
        height = height or 256
        key = (width * height, bit_count)
        if best is None or key > best[0]:
            best = (key, data[image_off:image_off + size], i)
    if best is None:
        return None
    return best[1], "%s image #%d" % (os.path.basename(path), best[2])


def bmp_image(path):
    """Decode a .bmp file to (width, height, RGBA, bpp)."""
    with open(path, "rb") as f:
        data = f.read()
    if len(data) < 14 or data[:2] != b"BM":
        return None
    return decode_dib(data[14:], has_mask=False)


def pillow_image(path):
    """Last resort for formats the DIB path doesn't cover (.jpg, .png, ...)."""
    try:
        from PIL import Image
    except ImportError:
        log("Pillow not installed -- cannot decode %s "
            "(install it, or supply the fallback as .ico/.bmp)" % path)
        return None
    with Image.open(path) as im:
        im = im.convert("RGBA")
        return im.width, im.height, im.tobytes(), 32


def load_image(path):
    """(width, height, RGBA, description) for any supported source file."""
    ext = os.path.splitext(path)[1].lower()
    if ext == ".exe" or ext == ".dll":
        found = pe_icon(path)
        if not found:
            return None
        decoded = decode_dib(found[0], has_mask=True)
        return (decoded[:3] + (found[1] + " (%dx%d %dbpp)"
                               % (decoded[0], decoded[1], decoded[3]),)) \
            if decoded else None
    if ext == ".ico":
        found = ico_icon(path)
        if not found:
            return None
        decoded = decode_dib(found[0], has_mask=True)
        return (decoded[:3] + (found[1] + " (%dx%d %dbpp)"
                               % (decoded[0], decoded[1], decoded[3]),)) \
            if decoded else None
    if ext == ".bmp":
        decoded = bmp_image(path)
        return (decoded[:3] + (os.path.basename(path),)) if decoded else None
    decoded = pillow_image(path)
    return (decoded[:3] + (os.path.basename(path),)) if decoded else None


# --------------------------------------------------------------------------
# Background keying
# --------------------------------------------------------------------------

def key_background(rgba, width, height, threshold):
    """Clear the alpha of the dark field surrounding the subject.

    A photograph arrives fully opaque, so a moon on a black sky keys out to a
    black square rather than a disc. Thresholding on darkness alone would also
    punch holes through the maria, which are darker than the threshold and are
    very much part of the moon -- so this floods inward from the border and
    only clears pixels the background can actually reach. An interior crater is
    enclosed by the lit limb and never gets visited.

    Done at full resolution, before any resampling: the premultiplied box
    filter downstream then averages the hard mask edge into a clean
    antialiased limb.
    """
    from collections import deque

    out = bytearray(rgba)
    dark = bytearray(width * height)
    for i in range(width * height):
        r, g, b = rgba[4 * i], rgba[4 * i + 1], rgba[4 * i + 2]
        luma = (r * 299 + g * 587 + b * 114) // 1000
        dark[i] = 1 if luma <= threshold else 0

    seen = bytearray(width * height)
    queue = deque()
    for x in range(width):
        for i in (x, (height - 1) * width + x):
            if dark[i] and not seen[i]:
                seen[i] = 1
                queue.append(i)
    for y in range(height):
        for i in (y * width, y * width + width - 1):
            if dark[i] and not seen[i]:
                seen[i] = 1
                queue.append(i)

    cleared = 0
    while queue:
        i = queue.popleft()
        out[4 * i + 3] = 0
        cleared += 1
        x, y = i % width, i // width
        if x > 0 and dark[i - 1] and not seen[i - 1]:
            seen[i - 1] = 1
            queue.append(i - 1)
        if x + 1 < width and dark[i + 1] and not seen[i + 1]:
            seen[i + 1] = 1
            queue.append(i + 1)
        if y > 0 and dark[i - width] and not seen[i - width]:
            seen[i - width] = 1
            queue.append(i - width)
        if y + 1 < height and dark[i + width] and not seen[i + width]:
            seen[i + width] = 1
            queue.append(i + width)
    return bytes(out), cleared


# --------------------------------------------------------------------------
# Resampling
# --------------------------------------------------------------------------

def _nearest(src, sw, sh, dw, dh):
    out = bytearray(dw * dh * 4)
    for y in range(dh):
        sy = y * sh // dh
        for x in range(dw):
            sx = x * sw // dw
            s = (sy * sw + sx) * 4
            o = (y * dw + x) * 4
            out[o:o + 4] = src[s:s + 4]
    return bytes(out)


def _box(src, sw, sh, dw, dh):
    """Area-average downscale, premultiplying by alpha so transparent black
    doesn't bleed a dark halo into the edges of a masked icon."""
    out = bytearray(dw * dh * 4)
    for y in range(dh):
        y0, y1 = y * sh // dh, max(y * sh // dh + 1, (y + 1) * sh // dh)
        for x in range(dw):
            x0, x1 = x * sw // dw, max(x * sw // dw + 1, (x + 1) * sw // dw)
            ar = ag = ab = aa = 0
            for sy in range(y0, y1):
                row = sy * sw
                for sx in range(x0, x1):
                    s = (row + sx) * 4
                    a = src[s + 3]
                    ar += src[s] * a
                    ag += src[s + 1] * a
                    ab += src[s + 2] * a
                    aa += a
            n = (y1 - y0) * (x1 - x0)
            o = (y * dw + x) * 4
            if aa:
                out[o:o + 4] = bytes((ar // aa, ag // aa, ab // aa, aa // n))
            else:
                out[o:o + 4] = b"\0\0\0\0"
    return bytes(out)


def resample(src, sw, sh, size):
    """Fit the image into a `size` x `size` RGBA canvas.

    Upscales are nearest-neighbour on purpose: the source is a 32x32 pixel-art
    icon, and a x4 nearest blow-up keeps it crisp at the sizes a modern window
    manager asks for, where a smooth filter would just look soft. Downscales
    (a large fallback photo) get an area average, which is what that content
    wants instead.
    """
    if sw == sh == size:
        return src, "%dx%d" % (sw, sh)
    scale = min(size / sw, size / sh)
    dw = max(1, int(round(sw * scale)))
    dh = max(1, int(round(sh * scale)))
    if dw >= sw and dh >= sh:
        scaled = _nearest(src, sw, sh, dw, dh)
        how = "nearest"
    else:
        scaled = _box(src, sw, sh, dw, dh)
        how = "area"
    detail = "%dx%d -> %dx%d %s" % (sw, sh, dw, dh, how)
    if dw == size and dh == size:
        return scaled, detail
    # Non-square source: centre it on a transparent canvas so the icon keeps
    # its aspect ratio instead of being stretched.
    canvas = bytearray(size * size * 4)
    ox, oy = (size - dw) // 2, (size - dh) // 2
    for y in range(dh):
        d = ((y + oy) * size + ox) * 4
        s = y * dw * 4
        canvas[d:d + dw * 4] = scaled[s:s + dw * 4]
    return bytes(canvas), detail + ", centred"


# --------------------------------------------------------------------------
# Header emission
# --------------------------------------------------------------------------

def emit_header(out_path, size, rgba, source, credit=None):
    command = "scripts/Python/extract_exe_icon.py " + \
        " ".join(shlex.quote(a) for a in sys.argv[1:])
    lines = [
        "// Generated by scripts/Python/extract_exe_icon.py -- do not edit.",
        "//",
        "// Source: %s" % source,
    ]
    if credit:
        lines.append("// Credit: %s" % credit)
    lines += [
        "// Regenerate: %s" % command,
        "#pragma once",
        "",
    ]
    if rgba is None:
        lines += [
            "// No icon source was available at build time. The shim checks",
            "// this and leaves the window with the platform default icon.",
            "#define NOCTURNE_ICON_WIDTH  0",
            "#define NOCTURNE_ICON_HEIGHT 0",
            "",
        ]
    else:
        lines += [
            "#define NOCTURNE_ICON_WIDTH  %d" % size,
            "#define NOCTURNE_ICON_HEIGHT %d" % size,
            "",
            "// RGBA8888, top-down, %d bytes." % len(rgba),
            "static const unsigned char NOCTURNE_ICON_RGBA[%d] = {" % len(rgba),
        ]
        for i in range(0, len(rgba), 16):
            chunk = rgba[i:i + 16]
            lines.append("    " + "".join("0x%02x," % b for b in chunk))
        lines += ["};", ""]

    text = "\n".join(lines)
    # Only rewrite on a real change, so a no-op reconfigure doesn't force every
    # dependent TU to recompile.
    if os.path.exists(out_path):
        with open(out_path, "r") as f:
            if f.read() == text:
                return False
    os.makedirs(os.path.dirname(out_path) or ".", exist_ok=True)
    with open(out_path, "w") as f:
        f.write(text)
    return True


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--out", required=True, help="C header to generate")
    ap.add_argument("--exe", action="append", default=[], metavar="PATH",
                    help="game binary to extract from, highest priority first")
    ap.add_argument("--fallback", action="append", default=[], metavar="PATH",
                    help="image used when no --exe exists, highest priority first")
    ap.add_argument("--size", type=int, default=128,
                    help="edge length of the emitted square icon (default 128)")
    ap.add_argument("--credit", metavar="TEXT",
                    help="provenance/licence line to record in the header, for "
                         "a generated file that gets committed")
    ap.add_argument("--key-background", type=int, default=-1, metavar="LUMA",
                    help="clear the alpha of the dark field around the subject, "
                         "flooding inward from the border over pixels at or "
                         "below this luma (0-255). Off by default; icon "
                         "resources already carry a mask")
    args = ap.parse_args()

    loaded = None
    for path in args.exe + args.fallback:
        if not os.path.isfile(path):
            continue
        loaded = load_image(path)
        if loaded:
            break
        log("no usable icon in %s, trying the next source" % path)

    if not loaded:
        log("no icon source found -- the window keeps the platform default")
        emit_header(args.out, args.size, None, "none available at build time",
                    args.credit)
        return 0

    width, height, rgba, description = loaded
    if args.key_background >= 0:
        rgba, cleared = key_background(rgba, width, height, args.key_background)
        description += ", background keyed at luma %d (%d px cleared)" % (
            args.key_background, cleared)
    scaled, detail = resample(rgba, width, height, args.size)
    source = "%s, %s" % (description, detail)
    if emit_header(args.out, args.size, scaled, source, args.credit):
        log("%s -> %s" % (source, args.out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
