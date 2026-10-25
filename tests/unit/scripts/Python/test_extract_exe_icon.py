# Imports
import os
import runpy
import struct
import sys

# Third-party imports
import pytest
from PIL import Image

# Local imports
from repo_paths import SCRIPTS_DIR
from pe_helpers import OPTIONAL_OFFSET, SECTION_RAW, DataEntry, RawEntry, build_pe
import extract_exe_icon as icon

RT_ICON = icon.RT_ICON
RT_GROUP_ICON = icon.RT_GROUP_ICON
GREY = [(0, 0, 0), (255, 255, 255), (10, 20, 30), (40, 50, 60)]


def pack_row(values, bpp):
    if bpp == 1:
        data = bytes(sum(values[j] << (7 - j % 8) for j in range(i, min(i + 8, len(values))))
                     for i in range(0, len(values), 8))
    elif bpp == 4:
        padded = list(values) + [0] * (len(values) % 2)
        data = bytes((padded[i] << 4) | padded[i + 1] for i in range(0, len(padded), 2))
    elif bpp == 8:
        data = bytes(values)
    elif bpp == 16:
        data = b"".join(struct.pack("<H", value) for value in values)
    elif bpp == 24:
        data = b"".join(bytes((b, g, r)) for r, g, b in values)
    else:
        data = b"".join(bytes((b, g, r, a)) for r, g, b, a in values)
    return data + b"\0" * (-len(data) % 4)


# A BITMAPINFOHEADER image; `rows` and `mask` are top-down, as the eye reads them
def dib(rows, bpp, palette = (), mask = None, clr_used = 0, compression = 0, planes = 1, hdr_size = 40):
    width, height = len(rows[0]), len(rows)
    stored_height = height * 2 if mask is not None else height
    header = struct.pack("<IiiHHIIiiII", hdr_size, width, stored_height, planes, bpp,
                         compression, 0, 0, 0, clr_used, 0) + b"\0" * (hdr_size - 40)
    entries = (clr_used or 1 << bpp) if bpp <= 8 else 0
    colours = b"".join(bytes((b, g, r, 0)) for r, g, b in palette)
    colours += b"\0" * (4 * entries - len(colours))
    pixels = b"".join(pack_row(row, bpp) for row in reversed(rows))
    bits = b"".join(pack_row(row, 1) for row in reversed(mask)) if mask is not None else b""
    return header + colours + pixels + bits


def rgba(*pixels):
    return b"".join(bytes(pixel) for pixel in pixels)


# A 2x2 4bpp icon with the top-left corner masked out
def small_icon():
    return dib([[1, 2], [3, 1]], 4, palette = GREY, mask = [[1, 0], [0, 0]])


SMALL_ICON_RGBA = rgba((0, 0, 0, 0), (10, 20, 30, 255), (40, 50, 60, 255), (255, 255, 255, 255))


def group(*entries):
    data = struct.pack("<HHH", 0, 1, len(entries))
    for width, height, bit_count, icon_id in entries:
        data += struct.pack("<BBBBHHIH", width, height, 0, 0, 1, bit_count, 0, icon_id)
    return data


def ico(*images):
    header = struct.pack("<HHH", 0, 1, len(images))
    offset = 6 + 16 * len(images)
    entries, blobs = b"", b""
    for width, height, bit_count, blob in images:
        entries += struct.pack("<BBBBHHII", width, height, 0, 0, 1, bit_count, len(blob), offset + len(blobs))
        blobs += blob
    return header + entries + blobs


def write(path, data):
    path.write_bytes(data)
    return str(path)


# --- PE parsing -------------------------------------------------------------

def test_pe_sections_finds_the_resource_directory():
    data = build_pe(resources = {RT_ICON: {1: {0: b"x"}}})
    sections, res_rva = icon._pe_sections(data)
    assert res_rva == 0x1000
    assert sections[0][0] == 0x1000


@pytest.mark.parametrize("data", [
    b"MZ" + bytes(0x10),
    b"ZZ" + bytes(0x100),
    b"MZ" + bytes(0x3a) + struct.pack("<I", 0x1000) + bytes(0x40),
    b"MZ" + bytes(0x3a) + struct.pack("<I", 0x40) + b"NE\0\0" + bytes(0x40),
])
def test_pe_sections_rejects_what_is_not_a_pe(data):
    assert icon._pe_sections(data) is None


def patched(data, offset, fmt, value):
    data = bytearray(data)
    struct.pack_into(fmt, data, offset, value)
    return bytes(data)


def test_pe_sections_reads_pe32_and_rejects_an_unknown_optional_header():
    pe32 = build_pe(resources = {RT_ICON: {1: {0: b"x"}}}, pe32_plus = False)
    assert icon._pe_sections(pe32)[1] == 0x1000
    assert icon._pe_sections(patched(pe32, OPTIONAL_OFFSET, "<H", 0x107)) is None


def test_pe_sections_needs_a_resource_directory():
    assert icon._pe_sections(build_pe(resources = {RT_ICON: {1: {0: b"x"}}}, rva_count = 2)) is None
    assert icon._pe_sections(build_pe(exports = ["f"])) is None


def test_pe_sections_stops_at_a_section_table_that_runs_past_the_file():
    data = patched(build_pe(resources = {RT_ICON: {1: {0: b"x"}}}), 0x40 + 6, "<H", 1000)
    sections, _ = icon._pe_sections(data)
    assert 1 < len(sections) < 1000


def test_rva_to_off_uses_the_raw_size_when_watcom_leaves_virtual_size_zero():
    sections = [(0x1000, 0, 0x200, 0x100)]
    assert icon._rva_to_off(sections, 0x1080) == 0x280
    assert icon._rva_to_off(sections, 0x1100) is None


# --- PE icons -----------------------------------------------------------------

def test_pe_icon_follows_the_group_to_the_largest_deepest_image(tmp_path):
    resources = {
        RT_ICON: {1: {0: b"small"}, 2: {0: b"big4"}, 3: {0: b"big8"}, 4: {0: b"huge"}},
        RT_GROUP_ICON: {1: {0: group((16, 16, 4, 1), (32, 32, 4, 2), (32, 32, 8, 3), (0, 0, 32, 9), (0, 0, 32, 4),
                                     (32, 32, 4, 2))},
                        2: {0: b"tiny"}},
    }
    blob, description = icon.pe_icon(write(tmp_path / "game.exe", build_pe(resources = resources)))
    assert (blob, description) == (b"huge", "game.exe RT_ICON #4")


def test_pe_icon_stops_at_a_group_shorter_than_its_count(tmp_path):
    truncated = group((16, 16, 4, 1), (32, 32, 4, 2))[:-5]
    resources = {RT_ICON: {1: {0: b"one"}, 2: {0: b"two"}}, RT_GROUP_ICON: {1: {0: truncated}}}
    assert icon.pe_icon(write(tmp_path / "a.exe", build_pe(resources = resources)))[0] == b"one"


def test_pe_icon_without_a_group_takes_the_lowest_id(tmp_path):
    resources = {RT_ICON: {5: {0: b"five"}, 3: {0: b"three"}}}
    assert icon.pe_icon(write(tmp_path / "a.exe", build_pe(resources = resources))) == (
        b"three", "a.exe RT_ICON #3")


def test_pe_icon_skips_what_has_no_icon(tmp_path, capsys):
    assert icon.pe_icon(write(tmp_path / "text.exe", b"not a pe")) is None
    assert icon.pe_icon(write(tmp_path / "bare.exe", build_pe(resources = {24: {1: {0: b"manifest"}}}))) is None
    log = capsys.readouterr().err
    assert "text.exe is not a readable PE, skipping" in log
    assert "bare.exe has no RT_ICON resource" in log


def test_pe_icon_skips_a_resource_directory_outside_every_section(tmp_path):
    data = build_pe(resources = {RT_ICON: {1: {0: b"x"}}})
    data = patched(data, OPTIONAL_OFFSET + 112 + 16, "<I", 0x9000)
    assert icon.pe_icon(write(tmp_path / "a.exe", data)) is None


def test_walk_resources_skips_malformed_leaves(tmp_path):
    resources = {
        RT_ICON: {
            1: {0: b"good"},
            2: {0: DataEntry(0x9000, 4)},
            3: {0: DataEntry(0x1000, 0x100000)},
            4: {0: RawEntry(0x7fff0000)},
            5: RawEntry(0x80000000 | 0x7fff0000),
        },
        RT_GROUP_ICON: b"a leaf directly under its type",
    }
    data = build_pe(resources = resources)
    leaves = []
    icon._walk_resources(data, [(0x1000, 0, SECTION_RAW, len(data))], SECTION_RAW, SECTION_RAW, [], leaves)
    assert leaves == [(RT_ICON, 1, b"good")]


def test_walk_resources_stops_at_a_directory_cut_off_by_the_end_of_the_file():
    tail = b"\0" * 12 + struct.pack("<HH", 0, 1)
    resources = {RT_ICON: {1: {0: tail}, 2: RawEntry(0x80000000)}}
    length = len(build_pe(resources = resources))
    resources[RT_ICON][2] = RawEntry(0x80000000 | (length - SECTION_RAW - 16))
    data = build_pe(resources = resources)
    leaves = []
    icon._walk_resources(data, [(0x1000, 0, SECTION_RAW, len(data))], SECTION_RAW, SECTION_RAW, [], leaves)
    assert leaves == [(RT_ICON, 1, tail)]


# --- DIB decoding ---------------------------------------------------------------

def test_decodes_a_masked_4bpp_icon():
    assert icon.decode_dib(small_icon(), has_mask = True) == (2, 2, SMALL_ICON_RGBA, 4)


@pytest.mark.parametrize("bpp, rows, palette, expected", [
    (1, [[0, 1, 1, 0, 1, 0, 0, 1, 1]], GREY[:2],
     [(0, 0, 0), (255, 255, 255), (255, 255, 255), (0, 0, 0), (255, 255, 255),
      (0, 0, 0), (0, 0, 0), (255, 255, 255), (255, 255, 255)]),
    (4, [[2, 3, 1]], GREY, [(10, 20, 30), (40, 50, 60), (255, 255, 255)]),
    (8, [[3, 0]], GREY, [(40, 50, 60), (0, 0, 0)]),
    (16, [[(31 << 10) | (16 << 5) | 1]], (), [(255, 131, 8)]),
    (24, [[(1, 2, 3), (4, 5, 6)]], (), [(1, 2, 3), (4, 5, 6)]),
])
def test_decodes_each_depth_without_a_mask(bpp, rows, palette, expected):
    width, height, pixels, depth = icon.decode_dib(dib(rows, bpp, palette = palette), has_mask = False)
    assert (width, height, depth) == (len(rows[0]), 1, bpp)
    assert pixels == rgba(*(colour + (255,) for colour in expected))


def test_a_32bpp_icon_with_real_alpha_ignores_its_mask():
    rows = [[(1, 2, 3, 128), (4, 5, 6, 0)]]
    _, _, pixels, _ = icon.decode_dib(dib(rows, 32, mask = [[1, 1]]), has_mask = True)
    assert pixels == rgba((1, 2, 3, 128), (4, 5, 6, 0))


def test_a_32bpp_icon_without_alpha_takes_its_shape_from_the_mask():
    rows = [[(1, 2, 3, 0), (4, 5, 6, 0)]]
    _, _, pixels, _ = icon.decode_dib(dib(rows, 32, mask = [[0, 1]]), has_mask = True)
    assert pixels == rgba((1, 2, 3, 255), (0, 0, 0, 0))


def test_a_mask_cut_short_is_ignored():
    blob = dib([[1, 2]], 8, palette = GREY, mask = [[1, 1]])[:-2]
    _, _, pixels, _ = icon.decode_dib(blob, has_mask = True)
    assert pixels == rgba((255, 255, 255, 255), (10, 20, 30, 255))


def test_clr_used_sets_the_palette_length():
    blob = dib([[1, 0]], 8, palette = GREY[:2], clr_used = 2)
    assert icon.decode_dib(blob, has_mask = False)[2] == rgba((255, 255, 255, 255), (0, 0, 0, 255))


@pytest.mark.parametrize("blob, message", [
    (b"\0" * 39, None),
    (dib([[0]], 8, palette = GREY, compression = 1), "unsupported DIB (header=40 compression=1 planes=1)"),
    (dib([[0]], 8, palette = GREY, planes = 2), "unsupported DIB (header=40 compression=0 planes=2)"),
    (dib([[0]], 8, palette = GREY)[:-4], None),
    (patched(dib([[0]], 8, palette = GREY), 14, "<H", 2), "unsupported icon depth: 2 bpp"),
    (dib([[0, 1]], 1, palette = GREY[:2], clr_used = 2)[:40 + 7], None),
])
def test_rejects_dibs_it_cannot_decode(blob, message, capsys):
    assert icon.decode_dib(blob, has_mask = False) is None
    assert (message or "") in capsys.readouterr().err


def test_a_masked_icon_one_row_high_has_no_colour_rows():
    blob = struct.pack("<IiiHHIIiiII", 40, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0) + bytes(8)
    assert icon.decode_dib(blob, has_mask = True) is None


def test_header_size_shorter_than_bitmapinfoheader_is_unsupported(capsys):
    blob = struct.pack("<IiiHHIIiiII", 12, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0) + bytes(8)
    assert icon.decode_dib(blob, has_mask = False) is None
    assert "unsupported DIB (header=12" in capsys.readouterr().err


# --- .ico, .bmp and Pillow ----------------------------------------------------------

def test_ico_icon_picks_the_largest_deepest_image(tmp_path):
    path = write(tmp_path / "a.ico", ico((16, 16, 8, b"a"), (0, 0, 4, b"b"), (0, 0, 32, b"c"), (32, 32, 32, b"d")))
    assert icon.ico_icon(path) == (b"c", "a.ico image #2")


def test_ico_icon_skips_entries_past_the_end_of_the_file(tmp_path):
    data = ico((16, 16, 8, b"good"), (32, 32, 8, b"cut"))
    data = patched(data, 6 + 16 + 12, "<I", 0x10000)
    assert icon.ico_icon(write(tmp_path / "a.ico", data))[0] == b"good"
    truncated = patched(ico((16, 16, 8, b"x")), 4, "<H", 9)
    assert icon.ico_icon(write(tmp_path / "b.ico", truncated))[0] == b"x"


def test_ico_icon_rejects_other_files_and_empty_directories(tmp_path, capsys):
    assert icon.ico_icon(write(tmp_path / "a.ico", b"\0\0\2\0\0\0")) is None
    assert "a.ico is not an .ico file" in capsys.readouterr().err
    assert icon.ico_icon(write(tmp_path / "b.ico", ico())) is None


def test_bmp_image(tmp_path):
    bmp = b"BM" + bytes(12) + dib([[(9, 8, 7)]], 24)
    assert icon.bmp_image(write(tmp_path / "a.bmp", bmp)) == (1, 1, rgba((9, 8, 7, 255)), 24)
    assert icon.bmp_image(write(tmp_path / "b.bmp", b"PNG")) is None


def test_pillow_image_decodes_what_pillow_reads(tmp_path):
    path = tmp_path / "a.png"
    Image.new("RGB", (2, 1), (1, 2, 3)).save(path)
    assert icon.pillow_image(str(path)) == (2, 1, rgba((1, 2, 3, 255), (1, 2, 3, 255)), 32)


def test_pillow_image_without_pillow_finds_nothing(tmp_path, monkeypatch, capsys):
    monkeypatch.setitem(sys.modules, "PIL", None)
    assert icon.pillow_image(str(tmp_path / "a.jpg")) is None
    assert "Pillow not installed -- cannot decode" in capsys.readouterr().err


# --- load_image -------------------------------------------------------------------

def test_load_image_from_a_pe(tmp_path):
    path = write(tmp_path / "game.dll", build_pe(resources = {RT_ICON: {1: {0: small_icon()}}}))
    assert icon.load_image(path) == (2, 2, SMALL_ICON_RGBA, "game.dll RT_ICON #1 (2x2 4bpp)")


def test_load_image_from_an_ico(tmp_path):
    path = write(tmp_path / "a.ICO", ico((2, 2, 4, small_icon())))
    assert icon.load_image(path) == (2, 2, SMALL_ICON_RGBA, "a.ICO image #0 (2x2 4bpp)")


def test_load_image_from_a_bmp_or_through_pillow(tmp_path):
    bmp = write(tmp_path / "a.bmp", b"BM" + bytes(12) + dib([[(9, 8, 7)]], 24))
    assert icon.load_image(bmp) == (1, 1, rgba((9, 8, 7, 255)), "a.bmp")
    png = tmp_path / "b.png"
    Image.new("RGBA", (1, 1), (1, 2, 3, 4)).save(png)
    assert icon.load_image(str(png)) == (1, 1, rgba((1, 2, 3, 4)), "b.png")


@pytest.mark.parametrize("name, data", [
    ("plain.exe", b"not a pe"),
    ("broken.exe", build_pe(resources = {RT_ICON: {1: {0: b"not a dib"}}})),
    ("plain.ico", b"not an ico"),
    ("broken.ico", ico((1, 1, 8, b"not a dib"))),
    ("plain.bmp", b"not a bmp"),
    ("plain.jpg", b"not a jpeg"),
])
def test_load_image_finds_nothing_in_a_broken_source(tmp_path, monkeypatch, name, data):
    monkeypatch.setitem(sys.modules, "PIL", None)
    assert icon.load_image(write(tmp_path / name, data)) is None


# --- keying and resampling -----------------------------------------------------------

def test_key_background_floods_inward_from_the_border_only():
    size = 7
    pixels = []
    for y in range(size):
        for x in range(size):
            border = min(x, y, size - 1 - x, size - 1 - y)
            pixels.append((200, 200, 200, 255) if border == 2 else (5, 5, 5, 255))
    keyed, cleared = icon.key_background(rgba(*pixels), size, size, 24)
    alpha = [keyed[4 * i + 3] for i in range(size * size)]
    assert cleared == 40
    assert alpha[3 * size + 3] == 255
    assert alpha[0] == 0 and alpha[size + 1] == 0
    assert alpha[2 * size + 2] == 255


def test_resample_keeps_an_image_already_the_right_size():
    src = rgba((1, 2, 3, 4))
    assert icon.resample(src, 1, 1, 1) == (src, "1x1")


def test_resample_upscales_by_nearest_neighbour():
    src = rgba((1, 1, 1, 255), (2, 2, 2, 255), (3, 3, 3, 255), (4, 4, 4, 255))
    scaled, detail = icon.resample(src, 2, 2, 4)
    assert detail == "2x2 -> 4x4 nearest"
    assert scaled[0:16] == rgba((1, 1, 1, 255), (1, 1, 1, 255), (2, 2, 2, 255), (2, 2, 2, 255))


def test_resample_downscales_by_premultiplied_area_average():
    clear, red = (0, 0, 0, 0), (200, 0, 0, 255)
    src = rgba(red, clear, clear, clear,
               clear, clear, clear, clear,
               clear, clear, red, red,
               clear, clear, red, red)
    scaled, detail = icon.resample(src, 4, 4, 2)
    assert detail == "4x4 -> 2x2 area"
    assert scaled == rgba((200, 0, 0, 63), (0, 0, 0, 0), (0, 0, 0, 0), (200, 0, 0, 255))


def test_resample_centres_a_non_square_image():
    src = rgba(*[(9, 9, 9, 255)] * 2)
    scaled, detail = icon.resample(src, 2, 1, 4)
    assert detail == "2x1 -> 4x2 nearest, centred"
    rows = [scaled[16 * y:16 * (y + 1)] for y in range(4)]
    assert rows[0] == rows[3] == bytes(16)
    assert rows[1] == rows[2] == rgba(*[(9, 9, 9, 255)] * 4)


# --- header emission and main ------------------------------------------------------------

def test_emit_header_writes_the_pixels_and_skips_an_unchanged_rewrite(tmp_path, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["extract_exe_icon.py", "--out", "a b.h"])
    out = str(tmp_path / "gen" / "icon.h")
    assert icon.emit_header(out, 1, rgba((1, 2, 3, 4)), "test", credit = "NASA") is True
    text = (tmp_path / "gen" / "icon.h").read_text(encoding = "utf-8")
    assert "// Credit: NASA" in text
    assert "// Regenerate: scripts/Python/extract_exe_icon.py --out 'a b.h'" in text
    assert "static const unsigned char NOCTURNE_ICON_RGBA[4] = {\n    0x01,0x02,0x03,0x04,\n};" in text
    assert icon.emit_header(out, 1, rgba((1, 2, 3, 4)), "test", credit = "NASA") is False
    assert icon.emit_header(out, 1, rgba((1, 2, 3, 5)), "test") is True


def test_emit_header_without_pixels_declares_an_empty_icon(tmp_path, monkeypatch):
    monkeypatch.chdir(tmp_path)
    assert icon.emit_header("icon.h", 128, None, "none") is True
    text = (tmp_path / "icon.h").read_text(encoding = "utf-8")
    assert "#define NOCTURNE_ICON_WIDTH  0" in text
    assert "Credit" not in text


def run_main(monkeypatch, *args):
    monkeypatch.setattr(sys, "argv", ["extract_exe_icon.py", *args])
    return icon.main()


def test_main_takes_the_first_source_that_yields_an_icon(tmp_path, monkeypatch, capsys):
    broken = write(tmp_path / "broken.exe", b"not a pe")
    good = write(tmp_path / "good.ico", ico((2, 2, 4, small_icon())))
    out = tmp_path / "icon.h"
    args = ("--out", str(out), "--exe", str(tmp_path / "absent.exe"), "--exe", broken,
            "--fallback", good, "--size", "4")
    assert run_main(monkeypatch, *args) == 0
    log = capsys.readouterr().err
    assert "no usable icon in" in log and "broken.exe" in log
    assert "good.ico image #0 (2x2 4bpp), 2x2 -> 4x4 nearest -> " in log
    assert "#define NOCTURNE_ICON_WIDTH  4" in out.read_text(encoding = "utf-8")
    assert run_main(monkeypatch, *args) == 0
    assert " -> " not in capsys.readouterr().err


def test_main_keys_the_background_when_asked(tmp_path, monkeypatch):
    bmp = write(tmp_path / "moon.bmp", b"BM" + bytes(12) + dib([[(0, 0, 0), (250, 250, 250)]], 24))
    out = tmp_path / "icon.h"
    run_main(monkeypatch, "--out", str(out), "--fallback", bmp, "--size", "2", "--key-background", "24")
    assert "background keyed at luma 24 (1 px cleared)" in out.read_text(encoding = "utf-8")


def test_main_without_any_source_writes_an_empty_icon(tmp_path, monkeypatch, capsys):
    out = tmp_path / "icon.h"
    assert run_main(monkeypatch, "--out", str(out), "--exe", str(tmp_path / "absent.exe")) == 0
    assert "#define NOCTURNE_ICON_WIDTH  0" in out.read_text(encoding = "utf-8")
    assert "the window keeps the platform default" in capsys.readouterr().err


def test_runs_as_a_script(tmp_path, monkeypatch):
    out = tmp_path / "icon.h"
    monkeypatch.setattr(sys, "argv", ["extract_exe_icon.py", "--out", str(out)])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "extract_exe_icon.py"), run_name = "__main__")
    assert exit_info.value.code == 0
    assert out.exists()
