# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import (ArrayDataType, BuiltInDataType, FunctionDefinitionDataType, ParameterImpl,
                         PointerDataType, StructureDataType, TypedefDataType, Variable)
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
import define_structs as ds

INT = BuiltInDataType("int", 4)
CHAR = BuiltInDataType("char", 1)


def field(offset, name, kind, length):
    return {"offset": offset, "name": name, "type": kind, "len": length, "basis": f"{name} read here"}


BASE = {"name": "SPageResource", "size": 24, "base": None, "basis": "ctor zeroes it",
        "fields": [field("0x0", "x", "int", 4), field("0x14", "vtable", "int", 4)]}
TEXT = {"name": "SPageResourceText", "size": 288, "base": "SPageResource", "basis": "new(0x120)",
        "fields": [field("0x0", "base", "SPageResource", 24), field("0x1c", "text", "char[256]", 256),
                   field("0x11c", "font", "CBitFont *", 4)]}
PAGE = {"name": "STextPage", "size": 324, "base": None, "basis": "stride 0x144",
        "fields": [field("0x0", "count", "int", 4), field("0x4", "resources", "SPageResource *[80]", 320)]}


def target():
    """A build with the fonts and an RTTI placeholder for the Text resource, and one laid out already."""
    program = Program()
    text = StructureDataType("SPageResourceText", length = 288, category = "/Nocturne/Struct/Game")
    kept = StructureDataType("CKept", [(INT, "kept")], category = "/Nocturne/Class/Game")
    program.getDataTypeManager().add(INT, CHAR, StructureDataType("CBitFont", length = 16), text, kept)
    return program


def test_a_spec_struct_must_fit_and_not_overlap():
    assert ds.problems(TEXT) == []
    bad = {"name": "SBad", "size": 8, "fields": [field("0x0", "a", "int", 4), field("0x2", "b", "int", 4),
                                                 field("0x6", "c", "int", 4)]}
    assert ds.problems(bad) == ["SBad.b at 0x2 overlaps the field before it",
                                "SBad.c runs past the struct's 8 bytes"]


def test_a_type_resolves_through_arrays_of_any_element():
    dtm = target().getDataTypeManager()
    assert ds.resolve(dtm, "char[256]", {}).getLength() == 256
    assert ds.resolve(dtm, "CBitFont *[80]", {}).getLength() == 320
    assert ds.resolve(dtm, "SNone[2]", {}) is None
    # The first dimension is the count: 16 names of 256
    names = ds.resolve(dtm, "char[16][256]", {})
    assert (names.getNumElements(), names.getDataType().getNumElements()) == (16, 256)
    assert (ds.category("SPageResource"), ds.category("CFieldNotes")) == ("/Nocturne/Struct/Game",
                                                                          "/Nocturne/Class/Game")


def test_structs_are_made_in_order_and_placeholders_replaced():
    program = target()
    report = dict(ds.apply(program, [BASE, TEXT, PAGE]))
    assert report == {"SPageResource": "added, 24 bytes", "SPageResourceText": "replaced, 288 bytes",
                      "STextPage": "added, 324 bytes"}
    dtm = program.getDataTypeManager()
    text = ds.find_type(dtm, "SPageResourceText")
    assert [(c.getOffset(), c.getFieldName()) for c in text.getComponents()] == [(0, "base"), (0x1c, "text"),
                                                                                (0x11c, "font")]
    assert text.getDescription() == "new(0x120)" and text.getComponents()[1].getComment() == "text read here"
    assert ds.find_type(dtm, "SPageResource").getCategoryPath().getPath() == "/Nocturne/Struct/Game"


def test_a_laid_out_struct_is_kept_unless_replacing():
    program = target()
    # Undefined bytes after the last field are kept
    kept = {"name": "CKept", "size": 12, "basis": "-", "fields": [field("0x4", "more", "int", 4)]}
    assert ds.apply(program, [kept]) == [("CKept", "laid out already; left (--replace to replace)")]
    assert ds.apply(program, [kept], replace = True) == [("CKept", "replaced, 12 bytes")]


def test_a_struct_with_a_missing_or_misfit_type_is_refused():
    program = target()
    missing = {"name": "SOne", "size": 8, "basis": "-", "fields": [field("0x0", "a", "SNone", 4)]}
    misfit = {"name": "STwo", "size": 8, "basis": "-", "fields": [field("0x0", "a", "int", 2)]}
    assert ds.apply(program, [missing, misfit]) == [("SOne", "SOne.a: no type SNone"),
                                                    ("STwo", "STwo.a: int is 4 bytes, not 2")]


@pytest.fixture(name = "spec")
def fixture_spec(tmp_path):
    return write_json(tmp_path / "spec.json", {"bw.exe": {"structs": [BASE, TEXT]}})


def test_main_checks_then_applies(spec, tmp_path, monkeypatch, capsys):
    assert ds.main([spec, "--program", "bw.exe"]) == 0
    assert "bw.exe: 2 structs and 0 deletions in the spec, 0 problems" in capsys.readouterr().out
    assert ds.main([spec, "--program", "bw.exe", "--apply"]) == 2
    module = FakePyghidra(target())
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    assert ds.main([spec, "--program", "bw.exe", "--apply", "--project", str(tmp_path)]) == 0
    printed = capsys.readouterr().out
    assert "SPageResourceText                replaced, 288 bytes" in printed and "Saved." in printed
    assert module.closed == 1
    # A struct the build cannot make fails the run
    bad = write_json(tmp_path / "bad.json", {"bw.exe": {"structs": [
        {"name": "SOne", "size": 4, "basis": "-", "fields": [field("0x0", "a", "SNone", 4)]}]}})
    assert ds.main([bad, "--program", "bw.exe", "--apply", "--project", str(tmp_path)]) == 1


def test_main_refuses_a_spec_with_problems(tmp_path, capsys):
    bad = write_json(tmp_path / "bad.json", {"bw.exe": {"structs": [
        {"name": "SBad", "size": 2, "fields": [field("0x0", "a", "int", 4)]}]}})
    assert ds.main([bad, "--program", "bw.exe"]) == 1
    assert "SBad.a runs past" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["define_structs.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "define_structs.py"), run_name = "__main__")
    assert exit_info.value.code == 0


def absent_build():
    """Placeholders each reached one way, two reached by nothing, one laid out."""
    program = target()
    dtm = program.getDataTypeManager()
    stubs = {n: StructureDataType(n, length = 1, category = "/Nocturne/Class/Game")
             for n in ("CField", "CTyped", "CDef", "CRet", "CParam", "CLocal", "CData", "CGone", "COther")}
    dtm.add(*stubs.values(),
            StructureDataType("CHolder", [(ArrayDataType(PointerDataType(stubs["CField"]), 2, 4), "slots")]),
            TypedefDataType("CTypedName", stubs["CTyped"]), PointerDataType(stubs["CGone"]),
            FunctionDefinitionDataType("callback", INT, [(PointerDataType(stubs["CDef"]), "who")]))
    functions = program.getFunctionManager()
    functions.add("f_ret", 0x401000).return_type = PointerDataType(stubs["CRet"])
    functions.add("f_param", 0x401010).parameters = [ParameterImpl("p", PointerDataType(stubs["CParam"]), program)]
    with_local = functions.add("f_local", 0x401020)
    with_local.return_type = INT
    with_local.local_variables = [Variable("l", stubs["CLocal"])]
    program.getListing().add_data(0x500000, stubs["CData"])
    return program, stubs


def test_only_an_unused_placeholder_is_deleted():
    program, stubs = absent_build()
    names = list(stubs) + ["CKept", "CNone"]
    report = dict(ds.delete(program, [{"name": n, "basis": "-"} for n in names]))
    assert report == {
        "CField": "in use; left: CHolder.slots", "CTyped": "in use; left: typedef CTypedName",
        "CDef": "in use; left: callback takes it", "CRet": "in use; left: f_ret returns it",
        "CParam": "in use; left: f_param.p", "CLocal": "in use; left: f_local.l",
        "CData": "in use; left: data at 00500000", "CGone": "deleted", "COther": "deleted",
        "CKept": "laid out; left", "CNone": "absent already"}
    assert ds.find_type(program.getDataTypeManager(), "CGone") is None


def test_main_deletes_what_the_spec_lists(tmp_path, monkeypatch, capsys):
    program, _ = absent_build()
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program))
    spec = write_json(tmp_path / "gone.json", {"bw.exe": {"delete": [{"name": "CGone", "basis": "-"}]}})
    assert ds.main([spec, "--program", "bw.exe", "--apply", "--project", str(tmp_path)]) == 0
    assert "0 structs and 1 deletions" in capsys.readouterr().out
    used = write_json(tmp_path / "used.json", {"bw.exe": {"delete": [{"name": "CData", "basis": "-"}]}})
    assert ds.main([used, "--program", "bw.exe", "--apply", "--project", str(tmp_path)]) == 1


def test_pointer_fields_resolve_through_the_build():
    dtm = target().getDataTypeManager()
    pointer = ds.resolve(dtm, "CBitFont *", {})
    assert isinstance(pointer, PointerDataType) and pointer.getLength() == 4
