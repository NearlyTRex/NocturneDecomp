# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_program import Program
from ghidra_annotations.annotations import memory_layout as ml
from ghidra_annotations.util import load_json_file


def program_with_blocks():
    program = Program()
    memory = program.getMemory()
    memory.add_block("Headers", 0x400000, bytes(0x1000))
    memory.add_block("AUTO", 0x401000, bytes(0x1000), execute = True)
    memory.add_block(".bss", 0x403000, bytes(0x100)).initialized = False
    cave = memory.add_block(".cave", 0x500000, bytes(0x10))
    cave.comment = "patches"
    overlay = memory.add_block("ov", 0x401000, bytes(0x10))
    overlay.overlay = True
    overlay.start.space_name = "ov::ram"
    return program


def layout(path):
    return load_json_file(str(path), "memory_layout")


def test_exports_the_blocks_gaps_overview_and_spaces(tmp_path):
    ml.export_memory_layout(program_with_blocks(), str(tmp_path))
    result = layout(tmp_path)
    blocks = {b["name"]: b for b in result["memory_blocks"]}
    assert blocks["AUTO"] == {"name": "AUTO", "start": "00401000", "end": "00401fff", "size": 0x1000,
        "permissions": {"read": True, "write": False, "execute": True}, "initialized": True,
        "type": "DEFAULT", "importable": True}
    assert blocks[".cave"]["comment"] == "patches"
    assert (blocks["ov"]["overlay"], blocks["ov"]["overlay_space"]) == (True, "ov::ram")
    assert [(g["start"], g["end"], g["preceding_block"]) for g in result["gaps"]] == [
        ("0x402000", "0x402fff", "AUTO"), ("0x403100", "0x4fffff", ".bss")]
    overview = result["analysis"]["overview"]
    assert [o["name"] for o in overview] == ["Headers", "AUTO", "Gap", ".bss", "Gap", ".cave"]
    assert overview[1]["permissions"] == "R-X"
    assert overview[3]["likely_purpose"] == "Uninitialized data (zero-filled)"
    assert result["analysis"]["summary"]["block_count"] == 5
    assert result["address_spaces"] == [{"name": "ram", "type": "1", "size": 32}]


@pytest.mark.parametrize("size, text", [(512, "512B"), (4096, "4KB"), (3 * 1024 * 1024, "3.0MB")])
def test_sizes_read_in_the_unit_that_fits(size, text):
    assert ml.format_size(size) == text


RO, RW, RX, NONE = ((True, False, False), (True, True, False), (False, False, True), (False, False, False))


@pytest.mark.parametrize("name, perms, initialized, purpose", [
    (".text", NONE, True, "Executable code"), ("x", RX, True, "Executable code"),
    (".rdata", RO, True, "Read-only data, strings, imports"), ("myconst", RO, True, "Constants"),
    (".rsrc", RO, True, "Resources"), ("ro", RO, True, "Read-only data"),
    ("x", RW, False, "Uninitialized data (zero-filled)"), (".bss", RW, True, "Uninitialized data (zero-filled)"),
    (".data", RW, True, "Initialized read-write data"), ("rw", RW, True, "Read-write data"),
    (".idata", NONE, True, "Import/Export tables"), (".debug$S", NONE, True, "Debug information"),
    (".reloc", NONE, True, "Relocation data"), ("stack", NONE, True, "Stack space"),
    ("RUNTIME_HEAP", NONE, False, "Heap space"), ("odd", NONE, True, "Custom section")])
def test_a_sections_purpose_is_guessed_from_its_name_and_permissions(name, perms, initialized, purpose):
    read, write, execute = perms
    assert ml.guess_section_purpose(name, {"read": read, "write": write, "execute": execute}, initialized) == purpose


def write(path, blocks):
    (path / "memory_layout").mkdir()
    (path / "memory_layout" / "memory_layout.json").write_text(json.dumps({"memory_blocks": blocks}),
                                                               encoding = "utf-8")


def test_the_users_flags_are_kept(tmp_path):
    write(tmp_path, [{"name": "AUTO", "importable": False}, {"importable": True}])
    ml.export_memory_layout(program_with_blocks(), str(tmp_path))
    assert {b["name"]: b["importable"] for b in layout(tmp_path)["memory_blocks"]}["AUTO"] is False


def test_delete_never_removes_a_block_that_holds_bytes(tmp_path):
    program = program_with_blocks()
    write(tmp_path, [{"name": n, "importable": True} for n in ("AUTO", ".bss", ".cave")])
    ml.delete_memory_layout(program, str(tmp_path))
    assert [b.getName() for b in program.getMemory().getBlocks()] == ["Headers", "AUTO", ".cave", "ov"]
    assert program.transactions == [["Delete Memory Blocks", True]]


def test_delete_with_nothing_to_remove_does_nothing(tmp_path):
    program = program_with_blocks()
    ml.delete_memory_layout(program, str(tmp_path))
    assert program.transactions == []


def test_import_creates_only_the_missing_blocks(tmp_path, capsys):
    write(tmp_path, [
        {"name": "RUNTIME_HEAP", "start": "00943000", "size": 0x100, "importable": True,
         "permissions": {"read": True, "write": True}, "comment": "heap"},
        {"name": ".cave2", "start": "03fc0000", "size": 0x10, "initialized": True, "importable": True},
        {"name": "ovl", "start": "00600000", "size": 0x10, "overlay": True, "importable": True},
        {"name": "AUTO", "start": "00401000", "size": 0x1000, "importable": True},
        {"name": "clash", "start": "00401800", "size": 0x10, "importable": True},
        {"name": "empty", "start": "00700000", "size": 0, "importable": True},
        {"name": "kept_out", "start": "00800000", "size": 0x10, "importable": False},
        {"start": "00800000", "size": 0x10, "importable": True}])
    program = program_with_blocks()
    ml.import_memory_layout(program, str(tmp_path))
    memory = program.getMemory()
    heap, cave, overlay = (memory.getBlock(n) for n in ("RUNTIME_HEAP", ".cave2", "ovl"))
    assert (heap.isInitialized(), heap.isWrite(), heap.isExecute(), heap.getComment()) == (False, True, False, "heap")
    assert (cave.isInitialized(), cave.isOverlay(), overlay.isOverlay()) == (True, False, True)
    log = capsys.readouterr().out
    assert "Created 3 memory blocks, skipped 5" in log
    assert "Creating .cave2 zero-filled" in log


def test_import_with_no_export_creates_nothing(tmp_path):
    program = program_with_blocks()
    ml.import_memory_layout(program, str(tmp_path))
    assert len(program.getMemory().getBlocks()) == 5
