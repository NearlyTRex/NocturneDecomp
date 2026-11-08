# Imports
import importlib
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import Address, StructureDataType
from ghidra_program import Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, write_bucket
import sibling_match
import watcom_type_info as wti

# The faked Ghidra module's, so it is the constant the script compares against
SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType

BASE = 0x400000
CODE = section_va(BASE, 0)
DATA = section_va(BASE, 1)
STUB = CODE + 0x20
LEAD = b"JUNK"
# A name pointer to the bytes after the strings, which never end in a NUL
TAIL = "tail"


def record_addr(index):
    return DATA + len(LEAD) + wti.RECORD.size * index


# `records` is [(mangled name, or a raw name pointer, or TAIL), ctor, copy, dtor, size]
def type_info_pe(records, truncate = 0):
    strings_at = DATA + len(LEAD) + wti.RECORD.size * len(records)
    names = bytearray()
    for mangled, *_ in records:
        if isinstance(mangled, str) and mangled != TAIL:
            names += mangled.encode("ascii") + b"\0"
    data, offset = bytearray(LEAD), 0
    for mangled, ctor, copy, dtor, size in records:
        if isinstance(mangled, int):
            pointer = mangled
        elif mangled == TAIL:
            pointer = strings_at + len(names)
        else:
            pointer = strings_at + offset
            offset += len(mangled) + 1
        data += wti.RECORD.pack(0x00020100, ctor, copy, dtor, size, pointer)
    data += names + b"A" * 300
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x1000, SECTION_EXECUTE), ("DGROUP", bytes(data), 0),
                             (".bss", b"", 0)], BASE)
    return pe[:len(pe) - truncate]


GAME_RECORDS = [
    ("$CDemonActor$$", CODE + 0x10, STUB, CODE + 0x30, 344),
    ("$SFly$:CFlies$$", 0, STUB, CODE + 0x50, 52),
    ("$CDemonActor$$", CODE + 0x70, STUB, CODE + 0x80, 999),
    ("plain", CODE, CODE, CODE, 4),
    ("$CZero$$", CODE, CODE, CODE, 0),
    (0x10, CODE, CODE, CODE, 4),
    (TAIL, CODE, CODE, CODE, 4),
    ("$cIni$$", CODE + 0x90, STUB, CODE + 0xa0, 12),
    ("$ios$$", CODE + 0xb0, STUB, CODE + 0xc0, 44),
    ("$CNew$$", CODE + 0xd0, 0, CODE + 0xe0, 8),
    ("$NotesMap$$", CODE + 0xf0, STUB, CODE + 0x100, 16),
]
SIBLING_RECORDS = [
    ("$CDemonActor$$", CODE + 0x10, STUB, CODE + 0x30, 340),
    ("$SFly$:CFlies$$", 0, STUB, CODE + 0x50, 52),
    ("$ios$$", CODE + 0xb0, STUB, CODE + 0xc0, 44),
    ("$cIni$$", CODE + 0x90, STUB, CODE + 0xa0, 12),
    ("$CEditorOnly$$", CODE + 0x110, STUB, CODE + 0x120, 20),
]
SIBLING_TYPES = {"categories": [
    {"name": "CDemonActor", "cat": "/Nocturne/Class/Game", "type": "struct"},
    {"name": "SFly", "cat": "/Nocturne/Struct/Game", "type": "struct"},
    {"name": "ios", "cat": "/Nocturne/Class/System/iostream.h", "type": "struct"},
    {"name": "WORD", "cat": "/Nocturne/Typedef/System/windef.h", "type": "typedef"},
]}


def functions_at(*offsets):
    return [function(CODE + offset, f"FUN_{CODE + offset:08x}") for offset in offsets]


@pytest.fixture(name = "annotations")
def fixture_annotations(monkeypatch, tmp_path):
    annotations = install_programs(monkeypatch, tmp_path, {
        "game.exe": (type_info_pe(GAME_RECORDS), functions_at(0x10, 0x30, 0x50, 0x90, 0xa0, 0xb0)),
        "sib.exe": (type_info_pe(SIBLING_RECORDS), functions_at(0x10, 0x30, 0x50, 0x90, 0xa0, 0xb0, 0xc0))})
    folder = annotations / "sib.exe" / "data_types"
    folder.mkdir(parents = True)
    (folder / "data_types.json").write_text(json.dumps(SIBLING_TYPES))
    write_bucket(annotations, "sib.exe", "symbols_label", [
        {"addr": f"{record_addr(0):08x}", "name": "g_CDemonActorTypeInfo"},
        {"addr": f"{record_addr(2):08x}", "name": "g_IOSTypeInfo"},
        {"addr": f"{record_addr(1):08x}", "name": "s_SFly_00402040"},
        {"addr": "00000000", "name": "g_NothingTypeInfo"}])
    return annotations


def test_each_class_is_found_once_with_its_scope_and_alias(annotations):
    records = wti.scan_type_info(sibling_match.Image("game.exe"))
    assert [(r["class"], r["scope"], r["type"], r["size"]) for r in records] == [
        ("CDemonActor", [], "CDemonActor", 344), ("SFly", ["CFlies"], "SFly", 52),
        ("cIni", [], "CIni", 12), ("ios", [], "ios", 44), ("CNew", [], "CNew", 8),
        ("NotesMap", [], "NotesMap", 16)]
    first = records[0]
    assert (first["addr"], first["ctor"], first["copy"], first["dtor"], first["mangled"]) == (
        f"{record_addr(0):08x}", f"{CODE + 0x10:08x}", f"{STUB:08x}", f"{CODE + 0x30:08x}",
        "$CDemonActor$$")


def test_a_section_claiming_more_than_the_file_holds_is_read_to_the_end(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {"cut.exe": (type_info_pe(GAME_RECORDS[:2], truncate = 310), [])})
    assert [r["class"] for r in wti.scan_type_info(sibling_match.Image("cut.exe"))] == ["CDemonActor"]


def test_a_slot_pairs_only_when_its_function_is_unique_and_known(annotations):
    game, sib = sibling_match.Image("game.exe"), sibling_match.Image("sib.exe")
    pairs = wti.slot_pairs(wti.scan_type_info(sib), wti.scan_type_info(game), sib.by_addr, game.by_addr)
    hexed = [(int(a, 16) - CODE, int(b, 16) - CODE, why) for a, b, why in pairs]
    assert hexed == [(0x10, 0x10, "CDemonActor ctor"), (0x30, 0x30, "CDemonActor dtor"),
                     (0x50, 0x50, "SFly dtor"), (0xb0, 0xb0, "ios ctor"),
                     (0x90, 0x90, "cIni ctor"), (0xa0, 0xa0, "cIni dtor")]


@pytest.mark.parametrize("name, category", [
    ("CFieldNotes", "/Nocturne/Class/Game"), ("NotesMap", "/Nocturne/Struct/Game"),
    ("Cartoon", "/Nocturne/Struct/Game")])
def test_an_unknown_class_is_filed_as_nocedit_would(name, category):
    assert wti.default_category(name) == category


def test_categories_come_from_the_siblings_structures(annotations):
    assert wti.sibling_categories("sib.exe") == {
        "CDemonActor": "/Nocturne/Class/Game", "SFly": "/Nocturne/Struct/Game",
        "ios": "/Nocturne/Class/System/iostream.h"}
    assert wti.sibling_categories("missing.exe") == {}


@pytest.fixture(name = "report")
def fixture_report(annotations):
    return wti.analyse("game.exe", "sib.exe")


def test_analysis_labels_sizes_and_files_each_class(report):
    rows = {r["class"]: r for r in report["records"]}
    assert (rows["CDemonActor"]["label"], rows["CDemonActor"]["sibling_size"]) == ("g_CDemonActorTypeInfo", 340)
    assert (rows["ios"]["label"], rows["ios"]["category"]) == ("g_IOSTypeInfo", "/Nocturne/Class/System/iostream.h")
    assert (rows["SFly"]["label"], rows["SFly"]["category"]) == ("g_SFlyTypeInfo", "/Nocturne/Struct/Game")
    assert (rows["CNew"]["sibling_size"], rows["CNew"]["category"]) == (None, "/Nocturne/Class/Game")
    assert rows["CNew"]["in_program"] == {"ctor": False, "copy": False, "dtor": False}


def test_the_report_counts_drift_and_new_classes(report, capsys):
    wti.print_report(report, 5)
    out = capsys.readouterr().out
    assert "game.exe: 6 classes with type info" in out
    assert "vs sib.exe: 3 same size, 1 drifted, 2 not in the sibling" in out
    assert "CDemonActor                 344  (sib.exe: 340, +4)" in out
    assert "new: CNew, NotesMap" in out
    assert "library classes, for import_sibling_types.py: ios" in out


def test_the_report_leaves_out_an_empty_list_of_new_classes(capsys):
    record = {"class": "CDemonActor", "size": 344, "sibling_size": 344, "category": "/Nocturne/Class/Game",
              "type": "CDemonActor"}
    wti.print_report({"program": "game.exe", "sibling": "sib.exe", "records": [record]}, 5)
    out = capsys.readouterr().out
    assert "1 same size, 0 drifted, 0 not in the sibling" in out
    assert "new:" not in out


def test_without_a_sibling_nothing_is_compared(annotations, capsys):
    report = wti.analyse("game.exe", "")
    assert {r["sibling_size"] for r in report["records"]} == {None}
    wti.print_report(report, 5)
    assert "vs " not in capsys.readouterr().out


INFO_TYPE = StructureDataType("WatcomTypeInfo", length = 24)


def program_for(report, *data_types):
    program = Program()
    program.getDataTypeManager().add(INFO_TYPE, *data_types)
    rows = {r["class"]: r for r in report["records"]}
    program.getListing().add_data(int(rows["SFly"]["name_addr"], 16), INFO_TYPE)
    program.getSymbolTable().createLabel(Address(int(rows["ios"]["addr"], 16)), "g_MyIos",
                                         SourceType.USER_DEFINED)
    return program


def test_applying_types_records_labels_them_and_stubs_missing_classes(report):
    program = program_for(report, StructureDataType("CDemonActor", length = 344),
                          StructureDataType("SFly", length = 50))
    done = wti.apply_to_program(program, report)
    assert done == {"typed": 6, "labelled": 5, "stubbed": 3,
                    "mismatched": [("SFly", 50, 52)], "deferred": ["ios"]}
    stubs = {t.getName(): t for t in program.getDataTypeManager().getAllDataTypes()}
    assert [(stubs[n].getCategoryPath().getPath(), stubs[n].getLength(), stubs[n].getDescription())
            for n in ("CIni", "CNew", "NotesMap")] == [
        ("/Nocturne/Class/Game", 12, wti.STUB_DESCRIPTION), ("/Nocturne/Class/Game", 8, wti.STUB_DESCRIPTION),
        ("/Nocturne/Struct/Game", 16, wti.STUB_DESCRIPTION)]
    rows = {r["class"]: r for r in report["records"]}
    symbols = program.getSymbolTable()
    assert symbols.getPrimarySymbol(Address(int(rows["ios"]["addr"], 16))).getName() == "g_MyIos"
    assert symbols.getPrimarySymbol(Address(record_addr(0))).getName() == "g_CDemonActorTypeInfo"
    assert program.getListing().getDefinedDataAt(Address(record_addr(0))).getDataType() is INFO_TYPE
    assert program.transactions == [["Watcom type info", True]]


def test_applying_needs_the_record_type():
    with pytest.raises(SystemExit, match = "has no WatcomTypeInfo"):
        wti.apply_to_program(Program(), {"program": "game.exe", "records": []})


def test_a_failed_apply_rolls_back(report):
    program = program_for(report)
    report["records"][0]["addr"] = "not an address"
    with pytest.raises(ValueError):
        wti.apply_to_program(program, report)
    assert program.transactions == [["Watcom type info", False]]


def run_main(monkeypatch, *argv):
    monkeypatch.setattr(sys, "argv", ["watcom_type_info.py", *argv])
    wti.main()


def test_main_reports_and_writes_json(monkeypatch, annotations, tmp_path, capsys):
    out = tmp_path / "report.json"
    run_main(monkeypatch, "game.exe", "--sibling", "sib.exe", "--out", str(out))
    assert "6 classes with type info" in capsys.readouterr().out
    assert len(json.loads(out.read_text())["records"]) == 6


def test_main_applies_to_a_project(monkeypatch, report, tmp_path, capsys):
    module = FakePyghidra(program_for(report, StructureDataType("SFly", length = 50)))
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    run_main(monkeypatch, "game.exe", "--sibling", "sib.exe", "--apply", "--project", str(tmp_path), "P")
    assert module.opened == [(str(tmp_path), "P"), "/game.exe"]
    assert (module.program.getDomainFile().saves, module.closed) == (1, 1)
    out = capsys.readouterr().out
    assert "typed 6 records, labelled 5, created 4 class stubs" in out
    assert "existing SFly is 50 bytes, RTTI says 52" in out
    assert "library classes left for import_sibling_types.py: --type ios" in out


def test_main_with_nothing_to_report_prints_no_lists(monkeypatch, report, tmp_path, capsys):
    report_classes = {"CDemonActor": 344, "SFly": 52, "CIni": 12, "ios": 44, "CNew": 8, "NotesMap": 16}
    module = FakePyghidra(program_for(report, *[StructureDataType(name, length = size)
                                                for name, size in report_classes.items()]))
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    run_main(monkeypatch, "game.exe", "--sibling", "sib.exe", "--apply", "--project", str(tmp_path), "P")
    out = capsys.readouterr().out
    assert "created 0 class stubs" in out
    assert "existing" not in out and "left for" not in out


def test_apply_needs_a_project(monkeypatch, annotations):
    with pytest.raises(SystemExit) as exit_info:
        run_main(monkeypatch, "game.exe", "--sibling", "sib.exe", "--apply")
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch, annotations, capsys):
    monkeypatch.setattr(sys, "argv", ["watcom_type_info.py", "game.exe", "--sibling", "sib.exe"])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "watcom_type_info.py"), run_name = "__main__")
    assert "game.exe: 6 classes with type info" in capsys.readouterr().out
