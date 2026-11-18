# Imports
import struct

# Third-party imports
import pytest

# Local imports
from infer_globals_world import (BSS, CODE, DATA, DEFAULT_BLOCKS, Asm, build, by_start, function, functions_of,
                                 hexa, plan, stack_param)
import infer_globals as ig


# --- strings and buffers -------------------------------------------------------------

def test_strings_literals_and_buffers(tmp_path, monkeypatch):
    strcpy = CODE + 0x100
    data = bytearray(0x100)
    data[0x00:0x04] = b"abc\0"          # taken: a literal
    data[0x10:0x13] = b"ab\0"           # taken but too short to trust
    data[0x20:0x26] = b"name1\0"        # written to: an initialised buffer
    data[0x40:0x45] = b"dst1\0"         # handed to strcpy as the destination
    data[0x60:0x64] = b"bad\x01"        # not printable
    data[0x70:0x74] = b"xyz\0"          # read as a dword: not a string
    asm = (Asm().push(DATA).push(DATA + 0x10).mov_byte_ah(DATA + 0x22).push(DATA + 0x20)
           .push(DATA + 0x40).call(strcpy).push(BSS + 0x100).call(strcpy)
           .push(DATA + 0x60).load_eax(DATA + 0x70).push(DATA + 0x70).ret())
    asm.code = asm.code.ljust(0x100, b"\x90") + b"\xc3"
    functions = [function(CODE, "f", 0x100),
                 function(strcpy, "strcpy", 1, vars = {"params": [stack_param(4, "char*", "dest")]})]
    build(tmp_path, monkeypatch, asm, data, functions)
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402000"]["size"]) == ("string", 4)
    assert "00402010" not in got
    assert (got["00402020"]["type"], got["00402020"]["count"]) == ("char", 0x20)
    assert (got["00402040"]["type"], got["00402040"]["count"]) == ("char", 0x20)   # up to the next global
    assert (got["00403100"]["type"], got["00403100"]["confidence"]) == ("char", "medium")
    assert "00402060" not in got
    assert got["00402070"]["type"] == "int"


def test_a_string_tail_belongs_to_the_string_it_ends(tmp_path, monkeypatch):
    data = bytearray(0x40)
    data[0x01:0x0a] = b"prefixEnd"      # code points at "End" and at the start
    data[0x10] = 0x40                    # the top byte of a constant before "name"
    data[0x11:0x16] = b"name\0"
    data[0x20:0x26] = b"plain\0"
    asm = Asm().push(DATA + 0x07).push(DATA + 0x01).push(DATA + 0x11).push(DATA + 0x22).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))])
    got = by_start(plan())
    assert got["00402001"]["note"] == "'prefixEnd'" and "00402007" not in got
    assert got["00402011"]["type"] == "string"
    assert got["00402022"]["note"] == "'ain'"          # "plain" itself is never referenced


def test_a_buffer_stops_at_a_definition(tmp_path, monkeypatch):
    data = bytearray(0x40)
    data[0:4] = b"abc\0"
    asm = Asm().based_store(DATA + 1).push(DATA).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          defined = {"applied_basic_types": [{"addr": hexa(DATA + 0x10), "len": 4, "type": "int"}]})
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402000"]["count"]) == ("char", 0x10)


# --- pointer tables ---------------------------------------------------------------------

def test_relocated_runs_in_data(tmp_path, monkeypatch):
    data = bytearray(0x100)
    data[0x80:0x84] = b"one\0"
    data[0x84:0x88] = b"two\0"
    entries = {0x00: CODE + 0x10, 0x04: CODE + 0x20,           # a function table
               0x10: DATA + 0x80, 0x14: DATA + 0x84,           # a string table
               0x20: DATA + 0x80, 0x24: CODE + 0x10,           # mixed: a struct's fields
               0x30: CODE + 0x30,                              # a lone code pointer nobody uses
               0x40: DATA + 0x84,                              # a lone string pointer code reads
               0x50: 0x900000}                                 # points nowhere
    for offset, value in entries.items():
        struct.pack_into("<I", data, offset, value)
    asm = Asm().load_eax(DATA + 0x40).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          data_relocs = [DATA + offset for offset in entries] + [BSS + 4])
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402000"]["count"]) == ("code*", 2)
    assert (got["00402010"]["type"], got["00402010"]["count"]) == ("char*", 2)
    assert got["00402080"]["type"] == got["00402084"]["type"] == "string"
    assert not {"00402020", "00402024", "00402030"} & set(got)
    assert (got["00402040"]["type"], got["00402040"]["count"], got["00402040"]["confidence"]) == \
        ("char*", None, "medium")


# --- arrays -------------------------------------------------------------------------------

def test_arrays_and_their_extent(tmp_path, monkeypatch):
    # one function per array, so an end marker is only seen by the array it ends
    asm, functions = functions_of([
        lambda a: a.indexed4(BSS).load_eax(BSS + 8).load_eax(BSS + 4).fld32(BSS + 0x10),   # int[4]
        lambda a: (a.indexed4(BSS + 0x40).indexed_store(BSS + 0x40).cmp_eax(BSS + 0x40 + 0x18)
                   .indexed4(BSS + 0x3c)),                                                  # int[6], arr[i-1]
        lambda a: a.indexed4(BSS + 0x80).indexed4(BSS + 0x84).lea_esi(BSS + 0x84),          # LEA anchors
        lambda a: a.indexed8(BSS + 0x100),                                                  # 8-byte stride
        lambda a: a.indexed_fld8(BSS + 0x140).load_eax(BSS + 0x146),                        # misaligned read
        lambda a: a.indexed4(BSS + 0xff0),                                                  # to the block end
    ])
    build(tmp_path, monkeypatch, asm, b"", functions)
    doc = plan()
    got = by_start(doc)
    assert (got["00403000"]["type"], got["00403000"]["count"], got["00403000"]["bounded"]) == \
        ("int", 4, "next global")
    assert (got["00403040"]["count"], got["00403040"]["bounded"], got["00403040"]["confidence"]) == \
        (6, "end marker", "high")
    assert "0040303c" not in got
    assert got["00403084"]["count"] and "00403080" not in got      # the LEA anchors the start
    assert any(c["type"] == "struct8" for c in doc["conflicts"])
    assert "00403140" not in got and got["00403146"]["type"] == "int"   # not one whole element
    assert (got["00403ff0"]["count"], got["00403ff0"]["bounded"]) == (4, "block or definition")


def test_an_end_marker_off_the_element_grid_is_ignored(tmp_path, monkeypatch):
    asm = Asm().indexed4(BSS).cmp_eax(BSS + 6).cmp_eax(BSS + 0x10).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))])
    got = by_start(plan())
    assert (got["00403000"]["count"], got["00403000"]["bounded"]) == (4, "end marker")


def test_an_array_with_nothing_after_it_is_a_lower_bound(tmp_path, monkeypatch):
    asm = Asm().indexed4(BSS).load_eax(BSS + 8).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))],
          blocks = DEFAULT_BLOCKS[:3] + ((".bss", BSS, BSS + 0x100000, "RW-", False),))
    program = ig.Program("dst.exe")
    inferrer = ig.Inferrer(program, ig.Scanner(program).scan_all(), max_array = 0x20)
    inferrer.run()
    assert [(c.count, c.bounded) for c in inferrer.candidates] == [(3, "last access (lower bound)")]


def test_an_empty_array_is_dropped(tmp_path, monkeypatch):
    asm = Asm().ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", 1)])
    inferrer = ig.Inferrer(ig.Program("dst.exe"), [ig.Evidence(BSS, "indexed", scale = 4, size = 4)])
    inferrer.sorted_keys = [BSS]
    inferrer.array_end = lambda base, t, elem: None
    inferrer.place_arrays()
    inferrer.array_end = lambda base, t, elem: (base + 2, "next global")
    inferrer.place_arrays()
    assert not inferrer.candidates


# --- definitions, labels and conflicts ---------------------------------------------------

def test_existing_definitions_and_labels(tmp_path, monkeypatch):
    asm = (Asm().load_eax(BSS).load_eax(BSS + 0x10).fld64(BSS + 0x1c).load_eax(BSS + 0x40)
           .fld32(BSS + 0xffe).ret())
    defined = {"applied_basic_types": [{"addr": hexa(BSS), "len": 4, "type": "int"},
                                       {"addr": hexa(BSS + 0x40), "len": 4, "type": "undefined4"},
                                       {"addr": hexa(BSS + 0x20), "len": 4, "type": "float"}],
               "applied_strings": [{"len": 1}]}
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))], defined = defined,
          labels = [(BSS + 0x10, "g_Named"), (BSS + 0x40, "DAT_00403040")])
    doc = plan()
    got = by_start(doc)
    assert doc["already_defined"] == 1
    assert (got["00403010"]["name"], got["00403010"]["keeps_name"]) == ("g_Named", True)
    assert got["00403040"]["name"] == "g_INT_00403040"
    assert sorted(c["note"] for c in doc["conflicts"]) == [
        "blocked by crosses a block boundary", "blocked by existing float at 00403020"]


def test_overlapping_candidates_are_refused(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)])
    inferrer = ig.Inferrer(ig.Program("dst.exe"), [])
    assert inferrer.place(ig.Candidate(BSS + 4, "int", None, 4, "high", {}))
    assert not inferrer.place(ig.Candidate(BSS, "double", None, 8, "high", {}, note = "n"))
    assert not inferrer.place(ig.Candidate(BSS + 6, "short", None, 2, "high", {}))
    assert not inferrer.place(ig.Candidate(BSS + 0x10, "int", None, 0, "high", {}))
    assert [c.note for c in inferrer.conflicts] == ["n; blocked by candidate at 00403004", "blocked by empty"]


def test_check_no_overlaps(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)],
          defined = {"applied_basic_types": [{"addr": hexa(BSS + 0x20), "len": 4, "type": "int"}]})
    program = ig.Program("dst.exe")
    fine = [ig.Candidate(BSS, "int", None, 4, "high", {}), ig.Candidate(BSS + 4, "int", None, 4, "high", {})]
    ig.check_no_overlaps(program, fine)
    with pytest.raises(ValueError, match = "candidates overlap"):
        ig.check_no_overlaps(program, fine + [ig.Candidate(BSS + 6, "int", None, 4, "high", {})])
    with pytest.raises(ValueError, match = "existing definition"):
        ig.check_no_overlaps(program, [ig.Candidate(BSS + 0x1e, "int", None, 4, "high", {})])
    with pytest.raises(ValueError, match = "existing definition"):
        ig.check_no_overlaps(program, [ig.Candidate(BSS + 0x20, "int", None, 4, "high", {})])


def test_auto_strings_that_start_early(tmp_path, monkeypatch):
    data = bytearray(0x80)
    struct.pack_into("<d", data, 0x00, 6.0)        # ...0x18 0x40: '@' starts the string below
    data[0x08:0x0d] = b"name\0"
    data[0x10:0x18] = b"??speed\0"                  # starts 2 early; code points at "speed"
    data[0x20:0x26] = b"keep\0\0"                   # named by a person: left alone
    data[0x30:0x35] = b"good\0"
    asm = Asm().fld64(DATA).push(DATA + 0x08).push(DATA + 0x12).push(DATA + 0x30).fld64(DATA + 0x18).ret()
    strings = [{"addr": hexa(DATA + 0x07), "len": 6, "type": "TerminatedCString"},
               {"addr": hexa(DATA + 0x10), "len": 8, "type": "TerminatedCString"},
               {"addr": hexa(DATA + 0x1f), "len": 6, "type": "TerminatedCString"},
               {"addr": hexa(DATA + 0x30), "len": 5, "type": "TerminatedCString"}]
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          defined = {"applied_strings": strings}, labels = [(DATA + 0x1f, "s_keep")])
    doc = plan()
    assert [r["start"] for r in doc["replaced_definitions"]] == ["00402007", "00402010"]
    got = by_start(doc)
    assert got["00402000"]["type"] == "double"
    assert got["00402008"]["type"] == got["00402012"]["type"] == "string"
    assert any("existing TerminatedCString at 0040201f" in c["note"] for c in doc["conflicts"])


def test_contradicted_definitions(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)],
          defined = {"applied_strings": [{"addr": hexa(DATA), "len": 4, "type": "TerminatedCString"},
                                         {"addr": hexa(DATA + 0x23), "len": 5, "type": "TerminatedCString"}],
                     "applied_basic_types": [{"addr": hexa(DATA + 4), "len": 4, "type": "int"},
                                             {"addr": hexa(DATA + 0x44), "len": 4, "type": "int"},
                                             {"addr": hexa(DATA + 0x54), "len": 4, "type": "int"}]},
          labels = [(DATA + 0x44, "g_INT_00402044"), (DATA + 0x54, "g_Chosen")])
    program = ig.Program("dst.exe")
    weak = ig.Candidate(DATA, "double", None, 8, "medium", {})
    mixed = ig.Candidate(DATA, "double", None, 8, "high", {})
    clear = ig.Candidate(DATA + 0x10, "int", None, 4, "high", {})
    assert not ig.contradicted_definitions(program, [weak, mixed, clear])
    swallowed = ig.Candidate(DATA - 4, "double", None, 8, "high", {})
    assert ig.contradicted_definitions(program, [swallowed]) == {DATA: ("TerminatedCString", 4)}
    # a string the auto-analysis started 3 bytes late, inside a medium string candidate
    late = ig.Candidate(DATA + 0x20, "string", None, 8, "medium", {})
    assert ig.contradicted_definitions(program, [late]) == {DATA + 0x23: ("TerminatedCString", 5)}
    # a folded piece an earlier run labelled automatically, inside a reference object
    piece = ig.Candidate(DATA + 0x40, "CVec", None, 12, "high", {}, note = "reference: g_Vec")
    chosen = ig.Candidate(DATA + 0x50, "CVec", None, 12, "high", {}, note = "reference: g_Vec")
    unreferenced = ig.Candidate(DATA + 0x40, "CVec", None, 12, "high", {})
    assert ig.contradicted_definitions(program, [piece]) == {DATA + 0x44: ("int", 4)}
    # ...and one that starts inside but an earlier run let run past the object's end
    overrun = ig.Candidate(DATA + 0x3c, "CVec", None, 12, "high", {}, note = "reference: g_Vec")
    assert ig.contradicted_definitions(program, [overrun]) == {DATA + 0x44: ("int", 4)}
    assert not ig.contradicted_definitions(program, [chosen, unreferenced])
    assert program.is_auto_label(DATA + 0x44) and not program.is_auto_label(DATA + 0x54)
    assert not program.is_auto_label(DATA)
