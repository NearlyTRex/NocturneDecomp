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
from pe_helpers import OPTIONAL_OFFSET, SECTION_EXECUTE, SECTION_RVA, build_sectioned_pe, call_rel32, push_imm32
from pe_helpers import section_va
from repo_paths import SCRIPTS_DIR
import diff_functions as df

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)
RELOC_DIRECTORY = OPTIONAL_OFFSET + 96 + 5 * 8
RET = b"\xc3"


def md():
    disassembler = Cs(CS_ARCH_X86, CS_MODE_32)
    disassembler.detail = True
    return disassembler


def reloc_block(page_rva, offsets):
    entries = [(3 << 12) | off for off in offsets] + [0]   # a type-0 entry pads the block
    block = struct.pack("<II", page_rva, 8 + 2 * len(entries)) + b"".join(struct.pack("<H", e) for e in entries)
    return block + b"\0" * 12                                # then a block too short to read ends the table


def image(functions, relocs = (), reloc_rva = None):
    """A PE whose code section holds `functions` ({offset: bytes}); relocs are code offsets."""
    code = bytearray(b"\xcc" * 0x100)
    for offset, data in functions.items():
        code[offset:offset + len(data)] = data
    sections = [(".text", bytes(code), SECTION_EXECUTE), (".data", b"\0" * 0x40, 0), (".bss", b"", 0, 0x100)]
    if relocs:
        sections.append((".reloc", reloc_block(SECTION_RVA, relocs), 0))
    pe = bytearray(build_sectioned_pe(sections, BASE))
    if relocs or reloc_rva:
        size = len(reloc_block(SECTION_RVA, relocs)) if relocs else 16
        struct.pack_into("<II", pe, RELOC_DIRECTORY, reloc_rva or SECTION_RVA * 4, size)
    return bytes(pe)


MOV_ECX_8, MOV_ECX_C = b"\x8b\x41\x08", b"\x8b\x41\x0c"
SOURCE = {
    0x00: MOV_ECX_8 + RET,                       # layout-drift
    0x10: b"\x6a\x05" + RET,                     # const-change
    0x20: b"\x89\xc8" + RET,                     # regalloc
    0x30: MOV_ECX_8 + b"\x6a\x05" + RET,         # operand-change
    0x40: b"\x90" + RET,                         # logic-change
    0x50: call_rel32(CODE + 0x50, CODE) + push_imm32(DATA) + b"\x74\x00\xe2\xfe\xeb\x00" + RET,  # identical
    0x70: b"\xff\xff",                           # undecodable
    0x80: RET,                                   # in a cave
    0x90: b"\x40" + RET,                         # last function
}
TARGET = {**SOURCE,
          0x00: MOV_ECX_C + RET, 0x10: b"\x6a\x06" + RET, 0x20: b"\x89\xd0" + RET,
          0x30: MOV_ECX_C + b"\x6a\x06" + RET, 0x40: b"\x40\x40" + RET,
          0x50: call_rel32(CODE + 0x50, CODE + 0x10) + push_imm32(DATA + 0x10) + b"\x74\x00\xe2\xfe\xeb\x00" + RET}
NAMES = {0x00: "drift", 0x10: "const", 0x20: "reg", 0x30: "operand", 0x40: "logic", 0x50: "same",
         0x70: "bad", 0x80: "cave", 0x90: "last"}


def test_relocated_dwords_read_as_zero_and_trailing_padding_is_trimmed(tmp_path):
    path = tmp_path / "a.exe"
    path.write_bytes(image(SOURCE, relocs = (0x56, 0x4e)))
    pe = df.Image(str(path))
    assert pe.reloc == {CODE + 0x56, CODE + 0x4e}
    assert pe.func_bytes(CODE + 0x50, CODE + 0x70)[5:11] == b"\x68\0\0\0\0\x74"
    assert pe.func_bytes(CODE + 0x40, CODE + 0x50) == b"\x90\xc3"
    assert pe.func_bytes(CODE + 0x40, CODE + 0x40) is None
    assert pe.func_bytes(0x00300000, CODE) is None
    assert pe.off(DATA + 0x80) is None


def test_a_known_range_reads_whole_with_relocs_zeroed(tmp_path):
    path = tmp_path / "a.exe"
    path.write_bytes(image({0x10: b"\xff\x25\x01\x02\x03\x04"}, relocs = (0x12,)))
    pe = df.Image(str(path))
    # jmp [import]: the masked address is the range's last four bytes, and they stay
    assert pe.range_bytes(CODE + 0x10, CODE + 0x16) == b"\xff\x25\0\0\0\0"
    assert pe.range_bytes(CODE + 0x10, CODE + 0x10) is None
    assert pe.range_bytes(0x00300000, CODE) is None
    assert pe.range_bytes(CODE + 0xf0, CODE + 0x200) is None


def test_a_reloc_table_that_ends_on_a_block_boundary_reads_every_block(tmp_path):
    path = tmp_path / "a.exe"
    path.write_bytes(image(SOURCE, relocs = (0x56,)))
    assert df.Image(str(path))._parse_reloc(SECTION_RVA * 4, 12) == {CODE + 0x56}


def test_an_end_past_the_section_stops_at_its_last_byte(tmp_path):
    path = tmp_path / "a.exe"
    path.write_bytes(image(SOURCE))
    assert df.Image(str(path)).func_bytes(CODE + 0x90, CODE + 0x490) == b"\x40\xc3"


def test_an_image_without_a_readable_reloc_table_relocates_nothing(tmp_path):
    plain, stray = tmp_path / "plain.exe", tmp_path / "stray.exe"
    plain.write_bytes(image(SOURCE))
    stray.write_bytes(image(SOURCE, reloc_rva = 0x9000))
    assert df.Image(str(plain)).reloc == set()
    assert df.Image(str(stray)).reloc == set()


def test_tokens_mask_branch_targets_and_resync_past_undecodable_bytes():
    # ff ff does not decode; one byte on, ff 6a 07 is jmp [edx+7], and the call after it is still found.
    ops, disps, imms, regs = df.tokens(md(), b"\x90\xff\xff" + b"\x6a\x07" + call_rel32(0x105, 0x200), 0x100)
    assert ops == ["nop:", "jmp:m", "call:i"]
    assert (disps, imms, regs) == ([7], [], [])


@pytest.mark.parametrize("offset, cls", [
    (0x00, "layout-drift"), (0x10, "const-change"), (0x20, "regalloc"), (0x30, "operand-change"),
    (0x40, "logic-change"), (0x80, "identical"), (0x70, "undecodable")])
def test_each_kind_of_difference_has_its_class(offset, cls):
    assert df.classify(SOURCE[offset], TARGET[offset], md(), CODE + offset, CODE + offset)[0] == cls


def test_classify_says_how_many_operands_moved():
    assert df.classify(MOV_ECX_8 + RET, MOV_ECX_C + RET, md(), 0, 0)[2] == "1/1 displacements differ"
    assert df.classify(b"\x6a\x05" + RET, b"\x6a\x06" + RET, md(), 0, 0)[2] == "1/1 immediates differ"
    assert df.classify(b"\x89\xc8" + RET, b"\x89\xd0" + RET, md(), 0, 0)[2] == "2 reg operands, some renamed"
    assert df.classify(MOV_ECX_8 + b"\x6a\x05" + RET, MOV_ECX_C + b"\x6a\x06" + RET, md(), 0, 0)[2] == "disp+imm"


def test_cave_ranges_come_from_the_caves_file_or_are_none(tmp_path):
    caves = tmp_path / "caves.json"
    caves.write_text(json.dumps({"caves": [{"start": "00401080", "total_size": 4}]}))
    assert df.cave_ranges(str(caves)) == [(0x401080, 0x401084)]
    assert df.cave_ranges(str(tmp_path / "missing.json")) == []


@pytest.fixture(name = "run")
def fixture_run(tmp_path):
    (tmp_path / "a.exe").write_bytes(image(SOURCE, relocs = (0x56,)))
    (tmp_path / "b.exe").write_bytes(image(TARGET, relocs = (0x56,)))
    for side in ("a", "b"):
        folder = tmp_path / f"funcs_{side}"
        folder.mkdir()
        (folder / "functions_bucket_00.json").write_text(json.dumps(
            [{"addr": f"{CODE + o:08x}", "name": n} for o, n in NAMES.items()]))
    anchors = [{"nocedit": hex(CODE + o), "nocturne": hex(CODE + o)} for o in NAMES]
    anchors.append({"nocedit": "0x300000", "nocturne": "0x300000"})
    (tmp_path / "anchors.json").write_text(json.dumps(anchors))
    (tmp_path / "caves.json").write_text(json.dumps({"caves": [{"start": f"{CODE + 0x80:08x}", "total_size": 4}]}))
    return tmp_path


def run_args(run, *extra):
    return [str(run / "a.exe"), str(run / "b.exe"), str(run / "anchors.json"),
            "--funcs-a", str(run / "funcs_a"), "--funcs-b", str(run / "funcs_b"),
            "--caves", str(run / "caves.json"), *extra]


def test_main_classifies_every_anchored_pair_and_writes_them(run, capsys):
    df.main(run_args(run, "--json", str(run / "out.json"), "--show", "logic-change,layout-drift"))
    captured = capsys.readouterr()
    assert "compared 8 anchored pairs (skipped 2: {'overlaps-cave': 1, 'unmapped': 1})" in captured.out
    assert "-- logic-change,layout-drift --" in captured.out
    assert "logic" in captured.out and "1/1 displacements differ" in captured.out
    assert f"wrote {run / 'out.json'}" in captured.err
    results = json.loads((run / "out.json").read_text())
    assert {r["name"]: r["class"] for r in results.values()} == {
        "drift": "layout-drift", "const": "const-change", "reg": "regalloc", "operand": "operand-change",
        "logic": "logic-change", "same": "identical", "bad": "undecodable", "last": "identical"}


def test_main_shows_nothing_when_no_pair_has_the_class_asked_for(run, capsys):
    df.main(run_args(run, "--show", "no-such-class"))
    assert "-- no-such-class --" not in capsys.readouterr().out


def test_runs_as_a_script(run, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["diff_functions.py", *run_args(run)])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "diff_functions.py"), run_name = "__main__")
    assert "compared 8 anchored pairs" in capsys.readouterr().out
