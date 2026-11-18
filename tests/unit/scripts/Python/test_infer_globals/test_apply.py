# Imports
import importlib
import json
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_program import Program as GhidraProgram
from infer_globals_world import (BSS, CODE, DATA, Asm, Placeholder, build, by_start, candidate, function, hexa,
                                 plan)
import ghidra_fake
import infer_globals as ig


# --- report, outputs, main ---------------------------------------------------------------

def test_render_and_write(tmp_path, monkeypatch):
    data = bytearray(0x40)
    struct.pack_into("<d", data, 0, 6.0)
    data[0x08:0x0d] = b"name\0"
    asm = Asm().fld64(DATA).push(DATA + 8).indexed4(BSS).load_eax(0x900000).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))],
          defined = {"applied_strings": [{"addr": hexa(DATA + 7), "len": 6, "type": "TerminatedCString"}],
                     "applied_basic_types": [{"addr": hexa(BSS + 0xc), "len": 4, "type": "int"}]})
    doc = plan()
    doc["conflicts"].append(ig.Candidate(BSS, "int", 3, 12, "low", {}, note = "x").as_json())
    text = ig.render(doc)
    assert "DEFINITIONS TO REPLACE" in text and "CONFLICTS (NOT PLACED)" in text
    assert "REFERENCES OUTSIDE EVERY BLOCK" in text and "int[3]" in text
    json_path, _ = ig.write_outputs(doc, "dst.exe", str(tmp_path / "out"))
    with open(json_path, encoding = "utf-8") as handle:
        assert json.load(handle)["program"] == "dst.exe"
    ig.write_outputs({**doc, "replaced_definitions": [], "conflicts": [], "unmapped": {}}, "dst.exe")


def test_type_sizes_and_strings_edge_cases(tmp_path, monkeypatch):
    annotations = build(tmp_path, monkeypatch, Asm().ret(), b"\x01" * 0x200, [function(CODE, "f", 1)])
    (annotations / "dst.exe" / "data_types" / "data_types.json").unlink()
    program = ig.Program("dst.exe")
    assert program.type_sizes == {} and program.size_of("CThing") is None and program.size_of("X *") == 4
    assert program.read_string(DATA) is None and program.read_string(BSS) is None
    assert program.block_of(0x300000) is None and not program.is_code(DATA)
    assert program.next_defined(BSS) is None
    inferrer = ig.Inferrer(program, [])
    assert not inferrer.looks_like_float(BSS)
    inferrer.place_string(DATA + 0x300, "high", {})       # past the data: nothing to place
    assert not inferrer.candidates
    assert ig.scalar_type([]) == "int"


def test_looks_like_float(tmp_path, monkeypatch):
    data = bytearray(0x20)
    struct.pack_into("<f", data, 0, 1.0)
    struct.pack_into("<I", data, 4, 7)
    asm = Asm().load_eax(DATA).load_eax(DATA + 4).ret()
    build(tmp_path, monkeypatch, asm, data, [function(CODE, "f", len(asm.code))])
    got = by_start(plan())
    assert (got["00402000"]["type"], got["00402004"]["type"]) == ("float", "int")


# --- apply -----------------------------------------------------------------------------------

def test_an_array_type_nests_in_c_order():
    types = {"builtins": {"int": Placeholder("int")},
             "array": lambda element, count, size: Placeholder(f"({element.getName()})x{count}", count * size)}
    nested = ig.resolve_type("int[3][15]", None, {}, types)       # 3 of int[15], as Ghidra names it
    assert (nested.getName(), nested.getLength()) == ("((int)x15)x3", 180)
    assert ig.resolve_type("CGone[2]", None, {}, types) is None


@pytest.mark.usefixtures("ghidra")
def test_apply_dry_run_checks_every_row_live(monkeypatch):
    program = GhidraProgram()
    program.getDataTypeManager().add(Placeholder("CGame", 12))
    listing = program.getListing()
    listing.add_data(BSS + 0x40, Placeholder("float"))                     # blocks a candidate
    listing.add_data(BSS + 0x50, Placeholder("undefined1"), length = 1)    # replaceable
    listing.add_data(BSS + 0x60, Placeholder("undefined *"))               # replaceable
    listing.add_data(DATA, Placeholder("string"), length = 6)              # the plan clears it
    listing.add_data(DATA + 0x10, Placeholder("string"), length = 3)       # changed since the export
    listing.add_data(DATA + 0x20, Placeholder("int"), length = 6)          # no longer a string
    fake = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    doc = {"replaced_definitions": [{"start": hexa(DATA + k), "size": 6, "type": "TerminatedCString"}
                                    for k in (0, 0x10, 0x20, 0x30)],
           "candidates": [candidate(BSS, "int"), candidate(BSS + 4, "float", confidence = "low"),
                          candidate(BSS + 8, "CMissing"), candidate(BSS + 0x40, "int"),
                          candidate(BSS + 0x50, "int"), candidate(BSS + 0x60, "int"),
                          candidate(BSS + 0x70, "CGame"), candidate(BSS + 0x80, "CGame*"),
                          candidate(BSS + 0x90, "code*"), candidate(BSS + 0xa0, "pointer"),
                          candidate(BSS + 0xb0, "CMissing*"), candidate(BSS + 0xc0, "int", count = 4, size = 16),
                          candidate(BSS + 0xd0, "int[3]", count = 2, size = 24),
                          candidate(BSS + 0xf0, "CMissing[2]", count = 2, size = 8),
                          candidate(BSS + 0x100, "wchar_t", count = 4, size = 8),
                          candidate(DATA + 1, "string", size = 5, name = None)]}
    rows = ig.apply_plan("projects", "P", "dst.exe", doc, replace_strings = True)
    outcome = {r[0]: r[2] for r in rows}
    assert outcome["00402000"] == "would clear"
    assert {outcome[hexa(DATA + k)] for k in (0x10, 0x20, 0x30)} == {"changed since export, left alone"}
    assert outcome["00403000"] == "would define"
    assert outcome["00403004"] == "below --min-confidence"
    assert outcome["00403008"] == outcome["004030b0"] == outcome["004030f0"] == "type not in the program"
    assert outcome["00403040"].startswith("blocked by float at")
    assert {outcome[hexa(BSS + k)] for k in (0x50, 0x60, 0x70, 0x80, 0x90, 0xa0, 0xc0, 0xd0, 0x100)} == {
        "would define"}
    assert outcome["00402001"] == "would define"
    assert fake.closed == 1 and not listing.cleared


@pytest.mark.usefixtures("ghidra")
def test_apply_defines_and_labels(monkeypatch):
    program = GhidraProgram()
    listing = program.getListing()
    listing.add_data(DATA, Placeholder("string"), length = 6)
    symbols = program.getSymbolTable()
    symbols.createLabel(ghidra_fake.Address(DATA), "s_old_00402000", "USER_DEFINED")      # the misplaced string's
    symbols.createLabel(ghidra_fake.Address(DATA), "g_Other", "USER_DEFINED")             # not a string label
    symbols.createLabel(ghidra_fake.Address(BSS + 4), "g_Kept", "USER_DEFINED")           # a chosen name
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program))
    doc = {"replaced_definitions": [{"start": hexa(DATA), "size": 6, "type": "TerminatedCString"}],
           "candidates": [candidate(BSS, "int"), candidate(BSS + 4, "int", keeps = True),
                          candidate(DATA + 1, "string", size = 5)]}
    rows = ig.apply_plan("projects", "P", "dst.exe", doc, apply = True, replace_strings = True)
    assert [r[2] for r in rows] == ["cleared", "defined, labelled", "defined", "defined, labelled"]
    # labels come from create_label_for_data (named after the fake's placeholder types here)
    names = [s.getName() for s in symbols.getAllSymbols(True)]
    assert any(n.startswith("g_") and n.endswith("_00403000") for n in names)
    assert "s_old_00402000" not in names and "g_Other" in names
    assert names.count("g_Kept") == 1 and not any(n.endswith("_00403004") for n in names)
    assert listing.cleared


@pytest.mark.usefixtures("ghidra")
def test_apply_replaces_auto_labelled_globals(monkeypatch):
    program = GhidraProgram()
    listing = program.getListing()
    listing.add_data(BSS + 0x40, Placeholder("int[4]", 16), length = 16)
    listing.add_data(BSS + 0x80, Placeholder("int"), length = 4)
    listing.add_data(DATA, Placeholder("string"), length = 6)
    symbols = program.getSymbolTable()
    symbols.createLabel(ghidra_fake.Address(BSS + 0x40), "g_INT_ARRAY_00403040", "USER_DEFINED")
    symbols.createLabel(ghidra_fake.Address(BSS + 0x40), "g_Note", "USER_DEFINED")
    symbols.createLabel(ghidra_fake.Address(BSS + 0x80), "g_Renamed", "USER_DEFINED")     # renamed since
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program))
    doc = {"replaced_definitions": [
        {"start": hexa(BSS + 0x40), "size": 16, "type": "int", "label": "g_INT_ARRAY_00403040"},
        {"start": hexa(BSS + 0x80), "size": 4, "type": "int", "label": "g_INT_00403080"},
        {"start": hexa(DATA), "size": 6, "type": "TerminatedCString"}],
        "candidates": [candidate(BSS + 0x40, "int", count = 16, size = 64)]}
    rows = ig.apply_plan("projects", "P", "dst.exe", doc, apply = True, replace_auto = True)
    # the chosen name at the address stays, so the new array is not labelled again
    assert [r[2] for r in rows] == ["cleared", "changed since export, left alone", "defined"]
    names = [s.getName() for s in symbols.getAllSymbols(True)]
    assert "g_INT_ARRAY_00403040" not in names and "g_Note" in names and "g_Renamed" in names
    # without the flag an auto-labelled global is not touched
    rows = ig.apply_plan("projects", "P", "dst.exe", {**doc, "candidates": []})
    assert not rows


@pytest.mark.usefixtures("ghidra")
def test_apply_clears_placeholders_and_reports_refusals(monkeypatch):
    program = GhidraProgram()
    listing = program.getListing()
    listing.add_data(BSS - 8, Placeholder("float"))                       # before the range: kept
    listing.add_data(BSS + 4, Placeholder("undefined1 *"))                # an auto pointer: cleared
    listing.add_data(BSS + 0x20, Placeholder("float"))                    # after the range: kept
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program))
    utilities = importlib.import_module("ghidra.program.model.data").DataUtilities
    real_create = utilities.createData

    def create(prog, address, data_type, length, stack, mode):
        if address.getOffset() == BSS + 0x10:
            raise RuntimeError("ghidra.program.model.util.CodeUnitInsertionException: Could not create Data")
        return real_create(prog, address, data_type, length, stack, mode)
    monkeypatch.setattr(utilities, "createData", staticmethod(create))
    doc = {"replaced_definitions": [],
           "candidates": [candidate(BSS, "int", count = 2, size = 8), candidate(BSS + 0x10, "int")]}
    rows = ig.apply_plan("projects", "P", "dst.exe", doc, apply = True)
    assert [r[2] for r in rows] == ["defined, labelled", "refused: Could not create Data"]
    assert [c[0].getOffset() for c in listing.cleared] == [BSS + 4]


def test_main_plans_and_dry_runs(tmp_path, monkeypatch, capsys):
    asm = Asm().load_eax(BSS).ret()
    build(tmp_path, monkeypatch, asm, b"", [function(CODE, "f", len(asm.code))])
    out_dir = str(tmp_path / "out")
    assert ig.main(["--program", "dst.exe", "--out-dir", out_dir]) == 0
    assert "1 candidates" in capsys.readouterr().out
    monkeypatch.setattr(ig, "apply_plan", lambda *a: [("00403000", "int", "would define"),
                                                      ("00403004", "int", "blocked by float at 00403004")])
    assert ig.main(["--program", "dst.exe", "--out-dir", out_dir, "--project", "p"]) == 0
    out = capsys.readouterr().out
    assert "[dry-run]" in out and "blocked by float" in out
    monkeypatch.setattr(ig, "apply_plan", lambda *a: [])
    assert ig.main(["--program", "dst.exe", "--out-dir", out_dir, "--project", "p", "--apply"]) == 0
    assert "[dry-run]" not in capsys.readouterr().out


def test_runs_as_a_script(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)])
    monkeypatch.setattr(sys, "argv", ["infer_globals.py", "--program", "dst.exe", "--out-dir", str(tmp_path)])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(ig.__file__, run_name = "__main__")
    assert stop.value.code == 0
