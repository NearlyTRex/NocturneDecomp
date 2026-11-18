# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from fake_sibling_image import FakeImage, shape
import ghidra_fake
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
from sibling_images import write_bucket, write_json
import map_vtable_slots as mvs

ghidra_fake.install()

# Each source table and the target table it should pair with, minimum 2 anchors:
#
#   00600000 -> 00700000  one insertion block; its gap holds a slot both shapes
#                         match (ax), one only the relaxed shape matches (ay),
#                         one whose relaxed shape fits two (az), and slots with
#                         no shape at all (aw, bn)
#   00600100, 00600200    ad sits in both, and each window offers it a different
#                         target: the windows disagree
#   00600300 -> 00700300  gt's match is in another unit; hu has no unit
#   00600400, 00600500    kx and kz both find ly: a target claimed twice
#   00600600 -> 00700000  a shorter table onto 00700000 again: constant shift
#   00600b00 -> 00700b00  three blocks
#   00600700 (one slot), 00600800 (nothing mapped), 00600900 (one anchor),
#   00600a00 (anchors crossed): not paired
TABLES_A = {
    "00600000": ["a0", "a1", "ax", "ay", "az", "aw", "a2"],
    "00600100": ["c0", "c1", "ad", "c2"],
    "00600200": ["c3", "c4", "ad", "c5"],
    "00600300": ["g0", "g1", "gt", "gu", "g2"],
    "00600400": ["k0", "k1", "kx", "k2"],
    "00600500": ["k3", "k4", "kz", "k5"],
    "00600600": ["a0", "a1", "m0"],
    "00600700": ["n0"],
    "00600800": ["p0", "p1"],
    "00600900": ["c0", "q1"],
    "00600a00": ["r0", "r1"],
    "00600b00": ["t0", "tx", "t1", "t2", "ty", "t3"],
}
TABLES_B = {
    "00700000": ["b0", "b1", "bx", "by", "bq", "bp", "bn", "b2"],
    "00700100": ["d0", "d1", "e1", "d2"],
    "00700200": ["d3", "d4", "e2", "d5"],
    "00700300": ["h0", "h1", "ht", "hu", "h2"],
    "00700400": ["l0", "l1", "ly", "l2"],
    "00700500": ["l3", "l4", "ly", "l5"],
    "00700a00": ["s1", "s0"],
    "00700b00": ["u0", "u1", "ux", "uy", "u2", "u3"],
}
PAIRS = {"a0": "b0", "a1": "b1", "a2": "b2", "c0": "d0", "c1": "d1", "c2": "d2", "c3": "d3", "c4": "d4",
         "c5": "d5", "g0": "h0", "g1": "h1", "g2": "h2", "k0": "l0", "k1": "l1", "k2": "l2", "k3": "l3",
         "k4": "l4", "k5": "l5", "r0": "s0", "r1": "s1", "t0": "u0", "t1": "u1", "t2": "u2", "t3": "u3"}
SHAPES_A = {"ax": shape("S1", "R1"), "ay": shape("S2", "R2"), "az": shape("S3", "R7"), "ad": shape("S5"),
            "gt": shape("S6"), "gu": shape("S7"), "kx": shape("S11"), "kz": shape("S11")}
SHAPES_B = {"bx": shape("S1", "R1"), "by": shape("S8", "R2"), "bq": shape("S9", "R7"), "bp": shape("S10", "R7"),
            "e1": shape("S5"), "e2": shape("S5"), "ht": shape("S6"), "hu": shape("S7"), "ly": shape("S11")}


def names(tables, unnamed = (), units = None):
    """Every slot's function, named in core_a.cpp unless it is unnamed or given a unit."""
    units = units or {}
    out = {}
    for slots in tables.values():
        for f in slots:
            out[f] = f"FUN_{f}" if f in unnamed else f"{units.get(f, 'core_a.cpp')}_CBox_{f}_FUN_{f}"
    return out


def vtables(tables):
    return [{"addr": addr.upper(), "functions": [{"func_addr": f.upper()} for f in slots]}
            for addr, slots in tables.items()]


@pytest.fixture(name = "world")
def fixture_world(monkeypatch, tmp_path):
    images = {
        "src.exe": FakeImage("src.exe", names(TABLES_A), shapes = SHAPES_A, vtables = vtables(TABLES_A),
                             records = {"ax": {"conv": "__thiscall", "ret": "int"}}),
        "dst.exe": FakeImage("dst.exe", names(TABLES_B, unnamed = ("hu",), units = {"ht": "core_b.cpp"}),
                             shapes = SHAPES_B, vtables = vtables(TABLES_B)),
    }
    monkeypatch.setattr(mvs.sm, "Image", images.__getitem__)
    monkeypatch.setattr(mvs.sm, "shapes_for", lambda image: image.shapes)
    monkeypatch.setattr(mvs, "REPO_ROOT", str(tmp_path))
    annotations = tmp_path / "annotations"
    write_bucket(annotations, "src.exe", "symbols_label", [
        {"addr": "00600000", "name": "g_CBoxVTable"}, {"addr": "00600100", "name": "PTR_FUN_00600100"},
        {"addr": "00600200", "name": "g_CLidVTable"}, {"addr": "00600600", "name": "g_CBoxSubVTable"}])
    write_bucket(annotations, "dst.exe", "symbols_label", [
        {"addr": "00700200", "name": "g_CLidVTable"}, {"addr": "00700000", "name": "PTR_FUN_00700000"}])
    write_bucket(annotations, "src.exe", "applied_structs", [
        {"addr": "00600000", "name": "CBox_vtable", "len": 28}, {"addr": "00600200", "name": "CLid_vtable"},
        {"addr": "00600600", "name": "CBoxSub_vtable"}])
    write_bucket(annotations, "dst.exe", "applied_structs", [{"addr": "00700200", "name": "CLid_vtable"}])
    mapping = write_json(tmp_path / "mapping.json", {"pairs": [{"a": a.upper(), "b": b} for a, b in PAIRS.items()]})
    return {"mapping": mapping, "tmp": tmp_path}


def analysed(world):
    return mvs.analyse(world["mapping"], 2, "src.exe", "dst.exe")


# --- the exported records ------------------------------------------------------------------------

def test_labels_take_the_primary_name_and_skip_the_sharding_index(monkeypatch, tmp_path):
    monkeypatch.setattr(mvs, "REPO_ROOT", str(tmp_path))
    annotations = tmp_path / "annotations"
    write_bucket(annotations, "p.exe", "symbols_label", [
        {"addr": "00401000", "name": "PTR_g_Fd_00401000", "non_primary": True},
        {"addr": "00401000", "name": "g_Fd"},
        {"addr": "00402000", "name": "caseD_4"}, {"addr": "00402000", "name": "default", "non_primary": True},
        {"addr": "00403000", "name": "caseD_1", "non_primary": True},
        {"addr": "00403000", "name": "caseD_2", "non_primary": True},
        {"name": "no address"}, "junk"])
    write_json(annotations / "p.exe" / "symbols_label" / "symbols_label_buckets.json", {"bucket_bits": 4})
    assert mvs.load_labels("p.exe") == {"00401000": "g_Fd", "00402000": "caseD_4", "00403000": "caseD_1"}


def test_applied_structs_by_address(monkeypatch, tmp_path):
    monkeypatch.setattr(mvs, "REPO_ROOT", str(tmp_path))
    write_bucket(tmp_path / "annotations", "p.exe", "applied_structs", [
        {"addr": "0040A000", "name": "CBox_vtable", "len": 8}, {"addr": "0040b000"}])
    assert mvs.load_applied_structs("p.exe") == {"0040a000": ("CBox_vtable", 8)}


def test_auto_names_are_no_names():
    assert mvs.is_auto(None) and mvs.is_auto("PTR_FUN_00401000") and not mvs.is_auto("g_CBoxVTable")


# --- the analysis --------------------------------------------------------------------------------

def test_tables_pair_by_anchors_and_their_alignment_is_classified(world):
    r = analysed(world)
    assert [(t["a"], t["b"], t["anchors"]) for t in r["tables"]] == [
        ("00600000", "00700000", 3), ("00600100", "00700100", 3), ("00600200", "00700200", 3),
        ("00600300", "00700300", 3), ("00600400", "00700400", 3), ("00600500", "00700500", 3),
        ("00600600", "00700000", 2), ("00600b00", "00700b00", 4)]
    assert r["shapes"] == {"identity": 5, "one insertion block": 1, "constant shift": 1, "3 blocks": 1}
    assert r["rejected"]["table: no target partner"] == 1
    assert r["rejected"]["table: fewer than 2 anchors"] == 1 and r["rejected"]["table: LCS under 2 anchors"] == 1
    assert r["unmatched_b"] == len(names(TABLES_B)) - len(PAIRS)


def test_a_slot_matched_by_both_shapes_is_one_target_agreed_twice(world):
    r = analysed(world)
    pairs = {p["a"]: p for p in r["pairs"]}
    assert sorted(pairs) == ["ax", "ay"]
    assert (pairs["ax"]["b"], pairs["ax"]["shape_agreement"], pairs["ax"]["conv"], pairs["ax"]["ret"]) == (
        "bx", "identical", "__thiscall", "int")
    assert pairs["ax"]["evidence"] == ["vtable_slot:strict"] and pairs["ax"]["name"] == "core_a.cpp_CBox_ax_FUN_ax"
    assert (pairs["ay"]["b"], pairs["ay"]["shape_agreement"]) == ("by", "same_mnemonics")
    assert pairs["ay"]["sig_detail"] == "vtable slot + relaxed shape + unit agreement"


def test_each_slot_the_checks_refuse(world):
    rejected = analysed(world)["rejected"]
    assert rejected["slot: shape ambiguous in window"] == 1                  # az's relaxed shape fits bq and bp
    assert rejected["slot: windows disagree"] == 1                           # ad: e1 in one table, e2 in the other
    assert rejected["slot: translation units disagree"] == 1                 # gt is core_a.cpp, ht core_b.cpp
    assert rejected["slot: no translation unit to check"] == 1               # hu is unnamed
    assert rejected["slot: target claimed by two sources"] == 1              # kx and kz both find ly


def test_a_target_found_once_is_paired(world):
    source = mvs.sm.Image("src.exe")
    source.vtables = [t for t in source.vtables if t["addr"] != "00600500"]
    r = analysed(world)
    assert [p["a"] for p in r["pairs"]] == ["ax", "ay", "kx"]
    assert "slot: target claimed by two sources" not in r["rejected"]


def test_names_and_types_go_to_each_target_once_from_its_best_pair(world):
    r = analysed(world)
    assert [(t["a_label"], t["b"]) for t in r["labels"]] == [("g_CBoxVTable", "00700000")]
    assert [(t["a_type"], t["b"]) for t in r["types"]] == [("CBox_vtable", "00700000")]
    rejected = r["rejected"]
    assert rejected["label: target already named"] == 1 and rejected["label: target claimed twice"] == 1
    assert rejected["type: target already typed"] == 1 and rejected["type: target claimed twice"] == 1


# --- applying ------------------------------------------------------------------------------------

def table(b, a_type, b_slots, b_label = None, a_label = "g_CBoxVTable"):
    return {"b": b, "a_type": a_type, "b_slots": b_slots, "b_label": b_label, "a_label": a_label}


def program(*types):
    prog = Program()
    prog.getDataTypeManager().add(*types)
    return prog


def test_a_table_takes_its_own_class_struct_before_the_siblings():
    dtm = program(ghidra_fake.StructureDataType("CStrList_vtable", length = 24),
                  ghidra_fake.StructureDataType("CPickList_vtable", length = 28)).getDataTypeManager()
    assert mvs.table_type(dtm, table("1", "CStrList_vtable", 7, "g_CPickListVTable"))[0].getName() == "CPickList_vtable"
    assert mvs.table_type(dtm, table("1", "CStrList_vtable", 6, "PTR_x"))[0].getName() == "CStrList_vtable"
    assert mvs.table_type(dtm, table("1", "CStrList_vtable", 9)) == (None, "len 24 != 9 slots x4")
    assert mvs.table_type(dtm, table("1", "CGone_vtable", 6)) == (None, "no such type")


def test_apply_labels_and_types_the_tables(capsys):
    prog = program(ghidra_fake.StructureDataType("CBox_vtable", length = 8))
    r = {"labels": [table("00401000", None, 2)], "types": [table("00401000", "CBox_vtable", 2),
                                                           table("00402000", "CBox_vtable", 3)]}
    assert mvs.apply(prog, r, True, True) == (True, 2)
    symbol = prog.getSymbolTable().getPrimarySymbol(ghidra_fake.Address(0x401000))
    assert symbol.getName() == "g_CBoxVTable" and str(symbol.getSource()) == "USER_DEFINED"
    data = prog.getListing().getDefinedDataAt(ghidra_fake.Address(0x401000))
    assert data.getDataType().getName() == "CBox_vtable"
    assert prog.getListing().cleared[0][1] == ghidra_fake.Address(0x401007)
    out = capsys.readouterr().out
    assert "labelled 1, failed 0 ; typed 1, skipped 1" in out
    assert "   type   00402000 CBox_vtable                len 8 != 3 slots x4" in out
    assert mvs.apply(prog, r, False, False) == (True, 0)


def test_a_label_or_type_ghidra_refuses_is_listed_and_the_rest_goes_on(monkeypatch, capsys):
    prog = program(ghidra_fake.StructureDataType("CBox_vtable", length = 8))

    def refuse(*_args):
        raise ghidra_fake.InvalidInputException("bad name\nmore")
    monkeypatch.setattr(prog.getSymbolTable(), "createLabel", refuse)
    monkeypatch.setattr(prog.getListing(), "createData", refuse)
    r = {"labels": [table("00401000", None, 2)], "types": [table("00401000", "CBox_vtable", 2)]}
    assert mvs.apply(prog, r, True, True) == (True, 0)
    out = capsys.readouterr().out
    assert "   label  00401000 g_CBoxVTable               bad name\n" in out
    assert "   type   00401000 CBox_vtable                bad name\n" in out


def test_an_error_rolls_the_whole_apply_back(monkeypatch, capsys):
    prog = program()

    def refuse(*_args):
        raise RuntimeError("locked")
    monkeypatch.setattr(prog.getDataTypeManager(), "findDataTypes", refuse)
    assert mvs.apply(prog, {"labels": [], "types": [table("00401000", "CBox_vtable", 2)]}, False, True) == (False, 0)
    assert prog.transactions[0][1] is False and "ERROR: locked" in capsys.readouterr().out


# --- main ----------------------------------------------------------------------------------------

def run_main(monkeypatch, world, prog, *argv):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(mvs.os, "_exit", sys.exit)
    with pytest.raises(SystemExit) as exited:
        mvs.main(["--mapping", world["mapping"], "--from-program", "src.exe", "--program", "dst.exe",
                  "--min-anchors", "2", *argv])
    return exited.value.code, fake


def test_main_reports_and_writes_the_pairs_and_labels(world, capsys):
    pairs, labels = world["tmp"] / "pairs.json", world["tmp"] / "labels.json"
    assert mvs.main(["--mapping", world["mapping"], "--from-program", "src.exe", "--program", "dst.exe",
                     "--min-anchors", "2", "--out-pairs", str(pairs), "--out-labels", str(labels)]) == 0
    doc = json.loads(pairs.read_text())
    assert doc["from"] == "src.exe" and [p["a"] for p in doc["pairs"]] == ["ax", "ay"]
    assert [t["a_label"] for t in json.loads(labels.read_text())] == ["g_CBoxVTable"]
    out = capsys.readouterr().out
    assert "  one insertion block      1" in out and "  proposed                 2" in out
    assert "    g_CBoxVTable                 -> 00700000  (3 anchors)" in out
    assert "    CBox_vtable                    1 table(s)" in out
    assert "  slot: windows disagree                     1" in out and "[dry-run] pass --apply-labels" in out


def test_main_will_not_apply_without_a_project(world, capsys):
    assert mvs.main(["--mapping", world["mapping"], "--from-program", "src.exe", "--program", "dst.exe",
                     "--apply-labels"]) == 2
    assert "ERROR: applying needs --project" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, world, capsys):
    monkeypatch.setattr(mvs.subprocess, "call", lambda cmd: 1)
    monkeypatch.setitem(sys.modules, "pyghidra", None)
    assert mvs.main(["--mapping", world["mapping"], "--from-program", "src.exe", "--program", "dst.exe",
                     "--project", str(world["tmp"]), "--apply-types"]) == 1
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_main_snapshots_then_labels_and_saves(monkeypatch, world, capsys):
    calls = []
    monkeypatch.setattr(mvs.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    prog = Program()
    code, fake = run_main(monkeypatch, world, prog, "--project", str(world["tmp"]), "--apply-labels")
    assert code == 0 and calls[0][-2:] == ["--tag", "pre-vtable-slots"] and fake.closed == 1
    assert fake.opened == [(str(world["tmp"]), "NocturneEdit"), "/dst.exe"]
    assert prog.getDomainFile().saves == 1 and "Saved." in capsys.readouterr().out


def test_main_saves_nothing_when_nothing_took(monkeypatch, world):
    prog = Program()
    code, _ = run_main(monkeypatch, world, prog, "--project", str(world["tmp"]), "--apply-types", "--no-snapshot")
    assert code == 0 and prog.getDomainFile().saves == 0                     # no CBox_vtable to apply


def test_main_exits_1_when_the_apply_failed(monkeypatch, world):
    prog = Program()
    monkeypatch.setattr(prog.getDataTypeManager(), "findDataTypes", None)
    code, _ = run_main(monkeypatch, world, prog, "--project", str(world["tmp"]), "--apply-types", "--no-snapshot")
    assert code == 1 and prog.getDomainFile().saves == 0


def test_an_error_exits_1_and_still_closes_the_project(monkeypatch, world, capsys):
    code, fake = run_main(monkeypatch, world, None, "--project", str(world["tmp"]), "--apply-labels", "--no-snapshot")
    assert code == 1 and fake.closed == 1 and "ERROR: " in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["map_vtable_slots.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "map_vtable_slots.py"), run_name = "__main__")
    assert exit_info.value.code == 0
