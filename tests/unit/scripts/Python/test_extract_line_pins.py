# Imports
import json
import os
import runpy
import struct
import sys

# Third-party imports
import pytest
from capstone import CS_ARCH_X86, CS_MODE_32, Cs

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
import extract_line_pins as elp

CODE, DATA = section_va(0x400000, 0), section_va(0x400000, 1)
FILE_SLOT, LINE_SLOT, OTHER = 0x500000, 0x500004, 0x500100
SOURCES = b"..\\core\\box.cpp\0..\\crt\\file.c\0..\\shape\\cram.txt\0"
BOX, FILE_C = DATA, DATA + 16


def mov_reg(opcode, value):
    return bytes([opcode]) + struct.pack("<I", value)


def store_reg(modrm, slot):
    return b"\x89" + bytes([modrm]) + struct.pack("<I", slot)


def store_imm(slot, value):
    return b"\xc7\x05" + struct.pack("<II", slot, value)


ECX, ESI, EAX = 0xb9, 0xbe, 0xb8
STORE_ECX, STORE_ESI, STORE_EAX = 0x0d, 0x35, 0x05


# One assert site: the __FILE__ pointer and the line, stored to their slots
def site(source, line):
    return mov_reg(ECX, source) + mov_reg(ESI, line) + store_reg(STORE_ECX, FILE_SLOT) + store_reg(STORE_ESI, LINE_SLOT)


def image(code, data = SOURCES, extra = ()):
    return build_sectioned_pe([("AUTO", code, SECTION_EXECUTE, 0), ("DGROUP", data, 0), *extra])


def sweep(code):
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    _, sections = elp.parse_pe(image(code))
    return elp.sweep_text(image(code), sections[0], md)


def test_the_sections_come_from_the_pe32_headers():
    data = image(b"\x90", extra = [(".bss", b"", 0, 0x1000)])
    base, (auto, dgroup, bss) = elp.parse_pe(data)
    assert base == 0x400000 and repr(auto) == f"<AUTO va={CODE:#x} size=0x0>"
    assert auto.executable and not dgroup.executable
    assert auto.has_raw_data and not bss.has_raw_data
    assert auto.extent == 1 and dgroup.extent == len(SOURCES)
    _, (short,) = elp.parse_pe(build_sectioned_pe([("T", b"\x90" * 8, 0, 4)]))
    assert short.extent == 4                       # the virtual size, when shorter


@pytest.mark.parametrize("patch, error", [
    ((0, b"ZM"), "not an MZ image"),
    ((0x40, b"PX"), "bad PE signature"),
    ((0x58, b"\x0b\x02"), "expected PE32 (0x10b), got 0x20b"),
])
def test_anything_but_a_pe32_is_refused(patch, error):
    data = bytearray(image(b"\x90"))
    offset, blob = patch
    data[offset:offset + len(blob)] = blob
    with pytest.raises(ValueError, match = error.replace("(", r"\(").replace(")", r"\)")):
        elp.parse_pe(bytes(data))


def test_source_strings_are_found_by_address_in_sections_with_bytes():
    data = image(b"\x90", extra = [(".bss", b"", 0, 0x1000)])
    _, sections = elp.parse_pe(data)
    # the .txt path is not a source file
    assert elp.find_source_strings(data, sections) == {BOX: "../core/box.cpp", FILE_C: "../crt/file.c"}


def test_the_sweep_resumes_past_bytes_that_do_not_decode():
    insns = sweep(b"\x90\xfe\xff" + mov_reg(EAX, 7))
    assert [addr - CODE for addr, _, _ in insns] == [0, 3]
    assert insns[1][1] == ("load", "eax", 7)


def test_moves_are_recorded_as_loads_and_stores():
    code = (mov_reg(EAX, 1) + store_reg(STORE_EAX, OTHER) + store_imm(OTHER, 2)
            + b"\x66\xb8\x01\x00"                     # mov ax, 1: not a dword load
            + b"\x89\x4b\x04"                         # mov [ebx+4], ecx: not an absolute store
            + b"\xc6\x05" + struct.pack("<I", OTHER) + b"\x01"   # a byte store
            + b"\x8b\x0d" + struct.pack("<I", OTHER)  # mov ecx, [OTHER]: a load from memory
            + b"\xb0\x05")                            # mov al, 5 writes eax
    recs = [(rec, clobber) for _, rec, clobber in sweep(code)]
    assert recs[0] == (("load", "eax", 1), ("eax",))
    assert recs[1][0] == ("store_reg", OTHER, "eax") and recs[2][0] == ("store_imm", OTHER, 2)
    assert [rec for rec, _ in recs[3:]] == [None] * 5
    assert recs[6][1] == ("ecx",) and recs[7][1] == ("eax",)


def pins_of(code, sources = None):
    return elp.extract_pins(sweep(code), sources or {BOX: "../core/box.cpp", FILE_C: "../crt/file.c"})


def test_each_filename_store_pairs_with_its_line_store():
    pins, slots, meta = pins_of(b"".join(site(BOX if i % 2 else FILE_C, 100 + i) for i in range(5)))
    assert [(p["file"], p["line"], p["slot"]) for p in pins] == [
        ("../crt/file.c", 100, FILE_SLOT), ("../core/box.cpp", 101, FILE_SLOT), ("../crt/file.c", 102, FILE_SLOT),
        ("../core/box.cpp", 103, FILE_SLOT), ("../crt/file.c", 104, FILE_SLOT)]
    assert pins[0]["va"] == CODE + 10
    assert slots == {FILE_SLOT: 5}
    assert meta == {"unpaired": 0, "file_stores": 5, "rejected_slots": 0,
                    "pairing": {hex(FILE_SLOT): hex(LINE_SLOT)}}


def test_a_slot_written_a_filename_too_rarely_is_no_assert_slot():
    pins, slots, meta = pins_of(b"".join(site(BOX, 10) for _ in range(4)))
    assert (pins, slots, meta) == ([], {}, {"unpaired": 0, "file_stores": 0, "pairing": {}, "rejected_slots": 1})


def test_the_partner_is_the_slot_most_often_nearest():
    # one site has an unrelated store right before its filename store; the vote
    # still picks LINE_SLOT, and that site takes its line from LINE_SLOT too
    odd = mov_reg(ECX, BOX) + mov_reg(ESI, 9) + store_imm(OTHER, 7) + store_reg(STORE_ECX, FILE_SLOT) + b"\x90" \
        + store_reg(STORE_ESI, LINE_SLOT)
    pins, _, meta = pins_of(b"".join(site(BOX, 10 + i) for i in range(5)) + odd)
    assert pins[-1]["line"] == 9 and meta["pairing"] == {hex(FILE_SLOT): hex(LINE_SLOT)}


def test_stores_that_cannot_be_a_line_are_passed_over():
    junk = (store_imm(OTHER, 0)                                     # not a line number
            + store_imm(OTHER + 4, elp.MAX_LINE)                    # nor is this
            + b"\xb0\x05" + store_reg(STORE_EAX, OTHER + 8))        # eax unknown after mov al
    lonely = mov_reg(ECX, BOX) + store_reg(STORE_ECX, FILE_SLOT)
    code = b"".join(site(BOX, 10 + i) for i in range(5)) + store_imm(OTHER + 12, 5) + junk * 4 + lonely + junk * 4
    pins, _, meta = pins_of(code)
    # the lonely filename store sees no line store within the window
    assert len(pins) == 5 and meta["unpaired"] == 1 and meta["file_stores"] == 6


def test_an_unpartnered_slot_leaves_its_sites_unpaired():
    # a second filename slot whose stores never have a line store within the window
    alone = mov_reg(ECX, BOX) + store_reg(STORE_ECX, OTHER)
    filler = store_imm(OTHER + 4, 0) * (elp.PAIR_WINDOW + 1)
    code = b"".join(site(BOX, 10 + i) for i in range(5)) + filler + filler.join([alone] * 5)
    pins, slots, meta = pins_of(code)
    assert slots == {FILE_SLOT: 5, OTHER: 5} and meta["unpaired"] == 5 and len(pins) == 5
    assert hex(OTHER) not in meta["pairing"]


def test_a_tie_in_distance_goes_to_the_later_store():
    # the filename store sits between two line-shaped stores at equal distance
    def tied(line):
        return (mov_reg(ECX, BOX) + store_imm(OTHER, 1) + store_reg(STORE_ECX, FILE_SLOT)
                + store_imm(LINE_SLOT, line))
    pins, _, meta = pins_of(b"".join(tied(20 + i) for i in range(5)))
    assert [p["line"] for p in pins] == [20, 21, 22, 23, 24]
    assert meta["pairing"] == {hex(FILE_SLOT): hex(LINE_SLOT)}


def write_exe(tmp_path, code):
    path = tmp_path / "game.exe"
    path.write_bytes(image(code, extra = [(".bss", b"", 0, 0x1000)]))
    return path


def test_main_writes_the_pins_sorted_and_reports(tmp_path, capsys):
    exe = write_exe(tmp_path, b"".join(site(BOX if i < 2 else FILE_C, 50 - i) for i in range(5)))
    out = tmp_path / "pins.json"
    elp.main([str(exe), "-o", str(out), "-v", "--self-check", "5"])
    doc = json.loads(out.read_text())
    assert doc["exe"] == str(exe) and doc["image_base"] == 0x400000
    assert [(p["file"], p["line"]) for p in doc["pins"]] == [
        ("../core/box.cpp", 49), ("../core/box.cpp", 50), ("../crt/file.c", 46), ("../crt/file.c", 47),
        ("../crt/file.c", 48)]
    assert doc["stats"]["AUTO"]["pins"] == 5
    err = capsys.readouterr().err
    assert "image base 0x400000, 3 sections" in err and f"  <AUTO va={CODE:#x} size=0x0>" in err
    assert "2 __FILE__ strings, 2 distinct source files" in err
    assert f"      slot {FILE_SLOT:#x} -> line {LINE_SLOT:#x} (delta +4), 5 stores" in err
    assert f"wrote {out}" in err


def test_main_fails_a_self_check_it_falls_short_of(tmp_path, capsys):
    exe = write_exe(tmp_path, b"\x90")
    with pytest.raises(SystemExit, match = "SELF-CHECK FAILED: recovered 0 pins, expected >= 1"):
        elp.main([str(exe), "--self-check", "1"])
    assert "image base" not in capsys.readouterr().err


def test_runs_as_a_script(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(sys, "argv", ["extract_line_pins.py", str(write_exe(tmp_path, b"\x90"))])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "extract_line_pins.py"), run_name = "__main__")
    assert "game.exe: 0 pins across 0 files" in capsys.readouterr().err
