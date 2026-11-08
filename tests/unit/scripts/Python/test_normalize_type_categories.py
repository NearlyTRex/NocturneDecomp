# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import (BuiltInDataType, EnumDataType, FunctionDefinitionDataType, PointerDataType,
                         StructureDataType, TypedefDataType, UnionDataType)
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
import sibling_match
import normalize_type_categories as ntc

UCHAR = BuiltInDataType("uchar", 1)
SIBLING_TYPES = {"types": [
    {"name": "HWND", "cat": "/Nocturne/Typedef/System/winuser.h", "type": "typedef"},
    {"name": "BYTE", "cat": "/Nocturne/Typedef/System/windef.h", "type": "typedef"},
    {"name": "FARPROC", "cat": "/Nocturne/Typedef/System/windef.h", "type": "typedef"},
    {"name": "FARPROC_FUNC", "cat": "/Nocturne/FunctionDefinition/System/windef.h", "type": "function_definition"},
    {"name": "IMAGE_DOS_HEADER", "cat": "/DOS", "type": "struct"},
    {"name": "IMAGE_NT_HEADERS32", "cat": "/PE", "type": "struct"},
]}


@pytest.fixture(name = "sibling")
def fixture_sibling(monkeypatch, tmp_path):
    folder = tmp_path / "annotations" / "nocedit.exe" / "data_types"
    folder.mkdir(parents = True)
    (folder / "data_types.json").write_text(json.dumps(SIBLING_TYPES))
    monkeypatch.setattr(sibling_match, "ANNOTATIONS", str(tmp_path / "annotations"))
    return ntc.sibling_categories("nocedit.exe")


def test_the_siblings_categories_are_read_by_name(sibling):
    assert sibling["HWND"] == "/Nocturne/Typedef/System/winuser.h"
    assert len(sibling) == len(SIBLING_TYPES["types"])


@pytest.mark.parametrize("kind, category, want", [
    ("typedef", "/WinDef.h", "/Nocturne/Typedef/System/windef.h"),
    ("funcdef", "/winbase.h/functions", "/Nocturne/FunctionDefinition/System/winbase.h"),
    ("struct", "/PE", None),
    (None, "/WinDef.h", None),
])
def test_an_importer_folder_maps_to_its_header(kind, category, want):
    assert ntc.default_category(kind, category) == want


def stray(name, cat, kind = "typedef", alias = False):
    return {"name": name, "cat": cat, "kind": kind, "typedef_alias": alias}


def test_each_stray_type_is_planned(sibling):
    types = [stray("HWND", "/WinDef.h"), stray("BYTE", "/WinDef.h"),
             stray("FARPROC", "/WinDef.h/functions", "funcdef", alias = True),
             stray("IMAGE_DOS_HEADER", "/DOS", "struct"), stray("IMAGE_BASE_RELOCATION", "/PE", "struct"),
             stray("MCIERROR", "/mmsystem.h"), stray("Mystery", "/Odd", "struct"),
             stray("CDemonActor", "/Nocturne/Class/Game", "struct"), stray("HWND", "/winuser.h")]
    taken = {("/Nocturne/Typedef/System/windef.h", "BYTE")}
    rows = {(r["name"], r["cat"]): r for r in ntc.plan(types, sibling, taken)}
    assert ("CDemonActor", "/Nocturne/Class/Game") not in rows
    summary = {key: (r["action"], r["want_cat"], r["want_name"], r["detail"]) for key, r in rows.items()}
    assert summary == {
        ("HWND", "/WinDef.h"): ("move", "/Nocturne/Typedef/System/winuser.h", "HWND", ""),
        ("BYTE", "/WinDef.h"): ("merge", "/Nocturne/Typedef/System/windef.h", "BYTE", ""),
        ("FARPROC", "/WinDef.h/functions"): (
            "move", "/Nocturne/FunctionDefinition/System/windef.h", "FARPROC_FUNC", "as FARPROC_FUNC"),
        ("IMAGE_DOS_HEADER", "/DOS"): ("keep", None, "IMAGE_DOS_HEADER", ""),
        ("IMAGE_BASE_RELOCATION", "/PE"): ("keep", None, "IMAGE_BASE_RELOCATION", "loader category"),
        ("MCIERROR", "/mmsystem.h"): ("move", "/Nocturne/Typedef/System/mmsystem.h", "MCIERROR", ""),
        ("Mystery", "/Odd"): ("leave", None, "Mystery", "no category rule"),
        ("HWND", "/winuser.h"): ("leave", None, "HWND",
                                 "/Nocturne/Typedef/System/winuser.h/HWND is taken by /WinDef.h"),
    }


def test_each_kind_of_defined_type_is_told_apart():
    assert [ntc.kind_of(dt) for dt in (StructureDataType("S"), UnionDataType("U"), EnumDataType("E"),
                                       TypedefDataType("T", UCHAR), FunctionDefinitionDataType("F"),
                                       PointerDataType(UCHAR))] == [
        "struct", "union", "enum", "typedef", "funcdef", None]


def test_a_funcdef_shadowed_by_its_typedef_is_marked_by_path():
    farproc = FunctionDefinitionDataType("FARPROC", category = "/WinDef.h/functions")
    handler = FunctionDefinitionDataType("HANDLER", category = "/wincon.h/functions")
    program = Program()
    program.getDataTypeManager().add(
        farproc, TypedefDataType("FARPROC", PointerDataType(farproc), category = "/WinDef.h"),
        handler, TypedefDataType("HANDLER", handler, category = "/wincon.h"),
        TypedefDataType("BYTE", UCHAR, category = "/WinDef.h"), PointerDataType(UCHAR))
    types, live = ntc.describe(program.getDataTypeManager())
    assert [(t["name"], t["cat"], t["typedef_alias"]) for t in types] == [
        ("BYTE", "/WinDef.h", False), ("FARPROC", "/WinDef.h", False),
        ("FARPROC", "/WinDef.h/functions", True), ("HANDLER", "/wincon.h", False),
        ("HANDLER", "/wincon.h/functions", True)]
    assert live[("/WinDef.h/functions", "FARPROC")] == (farproc, "funcdef")


def program_holding(*data_types):
    program = Program()
    program.getDataTypeManager().add(*data_types)
    return program


def test_applying_merges_moves_and_renames(sibling):
    stray_byte = TypedefDataType("BYTE", UCHAR, category = "/WinDef.h")
    good_byte = TypedefDataType("BYTE", UCHAR, category = "/Nocturne/Typedef/System/windef.h")
    word = TypedefDataType("WORD", BuiltInDataType("ushort", 2), category = "/WinDef.h")
    bad_word = TypedefDataType("WORD", UCHAR, category = "/Nocturne/Typedef/System/windef.h")
    farproc = FunctionDefinitionDataType("FARPROC", category = "/WinDef.h/functions")
    hwnd = TypedefDataType("HWND", UCHAR, category = "/WinDef.h")
    dos = StructureDataType("IMAGE_DOS_HEADER", category = "/DOS")
    program = program_holding(stray_byte, good_byte, word, bad_word, farproc,
                           TypedefDataType("FARPROC", PointerDataType(farproc), category = "/WinDef.h"), hwnd, dos)
    dtm = program.getDataTypeManager()
    types, live = ntc.describe(dtm)
    rows = ntc.plan(types, sibling, set(live))
    done = ntc.apply_to_program(program, rows, live)
    assert (done["move"], done["merge"]) == (3, 1)
    assert [(r["name"], r["cat"]) for r in done["conflict"]] == [("WORD", "/WinDef.h")]
    assert dtm.replaced == [(stray_byte, good_byte)]
    assert (farproc.getName(), farproc.getCategoryPath().getPath()) == (
        "FARPROC_FUNC", "/Nocturne/FunctionDefinition/System/windef.h")
    assert hwnd.getCategoryPath().getPath() == "/Nocturne/Typedef/System/winuser.h"
    assert dos.getCategoryPath().getPath() == "/DOS"
    assert "/Nocturne/Typedef/System/winuser.h" in dtm.categories
    assert program.transactions == [["Normalize type categories", True]]


def test_a_failed_apply_rolls_back():
    program = Program()
    with pytest.raises(KeyError):
        ntc.apply_to_program(program, [{"name": "X", "cat": "/a.h", "action": "move"}], {})
    assert program.transactions == [["Normalize type categories", False]]


def test_the_plan_lists_each_action(capsys):
    rows = [{"action": "move", "name": "HWND", "cat": "/WinDef.h", "want_cat": "/N/winuser.h", "detail": ""},
            {"action": "leave", "name": "Mystery", "cat": "/Odd", "want_cat": None, "detail": "no category rule"},
            {"action": "keep", "name": "IMAGE_DOS_HEADER", "cat": "/DOS", "want_cat": None, "detail": ""}]
    ntc.print_plan(rows, 5)
    out = capsys.readouterr().out
    assert "keep=1  leave=1  move=1" in out
    assert "move  HWND" in out and "/WinDef.h -> /N/winuser.h" in out
    assert "/Odd -> - no category rule" in out
    assert "IMAGE_DOS_HEADER" not in out


def stray_program():
    return program_holding(TypedefDataType("BYTE", UCHAR, category = "/WinDef.h"),
                        TypedefDataType("BYTE", BuiltInDataType("ushort", 2),
                                        category = "/Nocturne/Typedef/System/windef.h"),
                        TypedefDataType("HWND", UCHAR, category = "/WinDef.h"))


def run_main(monkeypatch, program, *argv):
    module = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    monkeypatch.setattr(sys, "argv", ["normalize_type_categories.py", "/projects", "P", "bw1.exe", *argv])
    ntc.main()
    return module


def test_main_only_reports_without_apply(monkeypatch, sibling, capsys):
    module = run_main(monkeypatch, stray_program())
    assert (module.program.getDomainFile().saves, module.closed) == (0, 1)
    assert module.opened == [("/projects", "P"), "/bw1.exe"]
    assert "bw1.exe: 2 types outside /Nocturne/" in capsys.readouterr().out


def test_main_applies_and_names_each_conflict(monkeypatch, sibling, capsys):
    module = run_main(monkeypatch, stray_program(), "--apply")
    assert module.program.getDomainFile().saves == 1
    out = capsys.readouterr().out
    assert "moved 1, merged 0, 1 conflict(s)" in out
    assert "conflict BYTE: /WinDef.h differs from /Nocturne/Typedef/System/windef.h/BYTE" in out


def test_runs_as_a_script(monkeypatch, sibling, capsys):
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(Program()))
    monkeypatch.setattr(sys, "argv", ["normalize_type_categories.py", "/projects", "P", "bw1.exe"])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "normalize_type_categories.py"), run_name = "__main__")
    assert "bw1.exe: 0 types outside /Nocturne/" in capsys.readouterr().out
