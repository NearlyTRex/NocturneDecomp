# Imports
import os
import runpy
import struct
import sys
import zlib

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import make_icns


# A header in the shape extract_exe_icon.py writes
def icon_header(width, height, rgba):
    rows = ",\n".join("    " + ",".join(f"0x{b:02x}" for b in rgba[i:i + 16])
                      for i in range(0, len(rgba), 16))
    return (f"#pragma once\n\n#define NOCTURNE_ICON_WIDTH  {width}\n"
            f"#define NOCTURNE_ICON_HEIGHT {height}\n\n"
            f"// RGBA8888, top-down, {len(rgba)} bytes.\n"
            f"static const unsigned char NOCTURNE_ICON_RGBA[{len(rgba)}] = {{\n{rows}\n}};\n")


def gradient(width, height):
    return bytes((x * 16 + y) & 0xff for y in range(height) for x in range(width) for _ in range(4))


# Splits a PNG into its chunks, checking each CRC on the way
def png_chunks(data):
    assert data[:8] == b"\x89PNG\r\n\x1a\n"
    chunks, offset = [], 8
    while offset < len(data):
        length, = struct.unpack_from(">I", data, offset)
        kind = data[offset + 4:offset + 8]
        body = data[offset + 8:offset + 8 + length]
        crc, = struct.unpack_from(">I", data, offset + 8 + length)
        assert crc == zlib.crc32(kind + body) & 0xffffffff
        chunks.append((kind, body))
        offset += 12 + length
    return chunks


def write_header(tmp_path, width, height, rgba):
    path = tmp_path / "icon.h"
    path.write_text(icon_header(width, height, rgba), encoding = "utf-8")
    return path


def test_read_header_returns_the_size_and_pixels(tmp_path):
    rgba = gradient(16, 16)
    path = write_header(tmp_path, 16, 16, rgba)
    assert make_icns.read_header(str(path)) == (16, 16, rgba)


def test_read_header_rejects_a_pixel_count_that_does_not_match_the_size(tmp_path):
    path = write_header(tmp_path, 16, 16, gradient(16, 15))
    with pytest.raises(ValueError, match = "for a 16x16 icon"):
        make_icns.read_header(str(path))


def test_png_round_trips_the_pixels():
    rgba = gradient(4, 3)
    chunks = png_chunks(make_icns.png(4, 3, rgba))
    assert [kind for kind, _ in chunks] == [b"IHDR", b"IDAT", b"IEND"]
    assert struct.unpack(">IIBBBBB", chunks[0][1]) == (4, 3, 8, 6, 0, 0, 0)
    raw = zlib.decompress(chunks[1][1])
    rows = [raw[i * 17:(i + 1) * 17] for i in range(3)]
    assert all(row[0] == 0 for row in rows)
    assert b"".join(row[1:] for row in rows) == rgba


def run_main(monkeypatch, *args):
    monkeypatch.setattr(sys, "argv", ["make_icns.py", *args])
    make_icns.main()


def test_main_writes_one_png_element_of_the_icon_size(tmp_path, monkeypatch):
    rgba = gradient(32, 32)
    header = write_header(tmp_path, 32, 32, rgba)
    out = tmp_path / "out.icns"
    run_main(monkeypatch, "--header", str(header), "--out", str(out))
    data = out.read_bytes()
    assert data[:4] == b"icns"
    assert struct.unpack(">I", data[4:8])[0] == len(data)
    assert data[8:12] == b"icp5"
    assert struct.unpack(">I", data[12:16])[0] == len(data) - 8
    assert data[16:] == make_icns.png(32, 32, rgba)


@pytest.mark.parametrize("width, height", [(16, 8), (24, 24)])
def test_main_refuses_a_size_no_icns_element_holds(tmp_path, monkeypatch, width, height):
    header = write_header(tmp_path, width, height, gradient(width, height))
    out = tmp_path / "out.icns"
    with pytest.raises(SystemExit, match = f"no icns element holds a {width}x{height} image"):
        run_main(monkeypatch, "--header", str(header), "--out", str(out))
    assert not out.exists()


def test_runs_as_a_script(tmp_path, monkeypatch):
    header = write_header(tmp_path, 16, 16, gradient(16, 16))
    out = tmp_path / "out.icns"
    monkeypatch.setattr(sys, "argv", ["make_icns.py", "--header", str(header), "--out", str(out)])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "make_icns.py"), run_name = "__main__")
    assert out.read_bytes()[8:12] == b"icp4"
