# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidraPrograms
from ghidra_fake import (Address, ArrayDataType, BuiltInDataType, EnumDataType, FunctionDefinitionDataType,
                         PointerDataType, StructureDataType, TypedefDataType, UnionDataType)
from ghidra_program import Data, Program
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe
from repo_paths import SCRIPTS_DIR
from sibling_images import function, install_programs, write_json
import import_sibling_types as ist

INT = BuiltInDataType("int", 4)
FLOAT = BuiltInDataType("float", 4)


def vector():
    return StructureDataType("CVector3f", [(FLOAT, "x"), (FLOAT, "y"), (FLOAT, "z")], category = "/G")


def stub(name, size, description = "Stub: size from Watcom RTTI, fields not yet recovered"):
    s = StructureDataType(name, length = size, category = "/G")
    s.setDescription(description)
    return s


def program(*types):
    p = Program()
    p.getDataTypeManager().add(*types)
    return p


def source():
    """nocedit's side: the layouts, a funcdef, and types the target has its own copies of."""
    v = vector()
    location = StructureDataType("CLocation", [(v, "position"), (FLOAT, "angle")], category = "/G")
    actor = StructureDataType("CActor", [(location, "location"), (PointerDataType(v), "target"),
                                         (ArrayDataType(INT, 2), "flags"), (PointerDataType(), "raw")],
                              category = "/G")
    actor.setDescription("an actor")
    grown = StructureDataType("CGrown", [(StructureDataType("CMissing", length = 4), "lost")], category = "/G")
    return program(v, location, actor, grown, FunctionDefinitionDataType("SetupFunc"),
                   UnionDataType("UPick"), EnumDataType("EMode", 4), TypedefDataType("Handle", INT),
                   StructureDataType("CNew", length = 8, category = "/G"), INT, FLOAT)


def target():
    """A Blair Witch program: placeholders where nocedit has layouts."""
    return program(stub("CVector3f", 1, "Stub: no RTTI in this build"), stub("CLocation", 1, "Stub: no RTTI"),
                   stub("CActor", 36), stub("CGrown", 4), StructureDataType("CKept", [(INT, "kept")], category = "/G"),
                   INT, FLOAT)


def test_a_type_name_loses_its_pointer_and_array_decoration():
    assert ist.base_type_name("CVector3f[241]") == "CVector3f"
    assert ist.base_type_name("int[2][3] *") == "int"
    # An array of pointers: the star sits inside the array.
    assert ist.base_type_name("CPodFile *[4]") == "CPodFile"
    assert ist.base_type_name("") is None
    assert ist.base_type_name("*") is None


def test_each_type_falls_into_a_kind():
    kinds = [ist.kind_of(t) for t in (FunctionDefinitionDataType("F"), vector(), UnionDataType("U"),
                                      EnumDataType("E", 4), TypedefDataType("T", INT), INT)]
    assert kinds == ["funcdef", "struct", "union", "enum", "typedef", "other"]


def test_a_type_is_found_by_path_or_by_name_anywhere():
    dtm = target().getDataTypeManager()
    assert ist.find_type(dtm, "int") is INT
    assert ist.find_type(dtm, "CKept").getName() == "CKept"
    assert ist.find_type(dtm, "CNone") is None
    assert ist.is_stub(ist.find_type(dtm, "CActor")) and not ist.is_stub(ist.find_type(dtm, "CKept"))
    # A struct with no fields is a placeholder whatever its description says.
    assert ist.is_stub(StructureDataType("CBare", length = 64))
    assert not ist.is_stub(EnumDataType("EMode", 4))


def test_a_source_type_is_rebuilt_from_the_targets_own():
    dtm = target().getDataTypeManager()
    assert ist.in_target(PointerDataType(), dtm).getName() == "pointer"
    assert ist.in_target(PointerDataType(vector()), dtm).getDataType() is ist.find_type(dtm, "CVector3f")
    assert ist.in_target(PointerDataType(StructureDataType("CNone")), dtm) is None
    assert ist.in_target(ArrayDataType(INT, 3), dtm).getLength() == 12
    assert ist.in_target(ArrayDataType(StructureDataType("CNone"), 3), dtm) is None
    assert ist.in_target(INT, dtm) is INT


def test_a_layout_rebuilt_in_the_target_keeps_the_sources_size_and_offsets():
    src, dtm = source().getDataTypeManager(), target().getDataTypeManager()
    rebuilt = ist.layout_in_target(ist.find_type(src, "CActor"), dtm)
    # CLocation is still a 1-byte stub in the target, so the struct is grown to the source's size.
    assert [(c.getOffset(), c.getFieldName()) for c in rebuilt.getComponents()] == [
        (0, "location"), (16, "target"), (20, "flags"), (28, "raw")]
    assert (rebuilt.getLength(), rebuilt.getDescription()) == (32, "an actor")
    assert ist.layout_in_target(ist.find_type(src, "CGrown"), dtm) is None
    # A resized class: only placed fields, at their new offsets, at the target's size.
    shifted = ist.layout_in_target(ist.find_type(src, "CActor"), dtm,
                                   {"size": 40, "place": {"0": 0, "16": 24}})
    assert [(c.getOffset(), c.getFieldName()) for c in shifted.getComponents()] == [(0, "location"), (24, "target")]
    assert shifted.getLength() == 40
    # Placing nothing gives a stub of the whole size, not one a byte short.
    empty = ist.layout_in_target(ist.find_type(src, "CActor"), dtm, {"size": 64, "place": {}})
    assert (empty.getLength(), empty.getComponents(), empty.getDescription()) == (64, [], ist.RTTI_STUB_DESCRIPTION)
    # Trailing padding past the last field is kept.
    padded = StructureDataType("CPadded", [(INT, "a")], length = 12)
    assert ist.layout_in_target(padded, dtm).getLength() == 12
    empty = ist.empty_stub(ist.find_type(src, "CNew"), dtm)
    assert (empty.getLength(), empty.getDescription()) == (0, ist.STUB_DESCRIPTION)


def test_global_data_names_its_types_once_each():
    p = program()
    for at, dt in ((0x500000, PointerDataType(vector())), (0x500010, vector()), (0x500020, None)):
        p.getListing().data[Address(at)] = Data(Address(at), dt)
    assert ist.globals_type_names(p) == ["CVector3f"]


def test_new_types_are_told_from_derived_forms_and_conflicts():
    dtm = target().getDataTypeManager()
    before = ist.all_type_paths(dtm)
    dtm.add(StructureDataType("CArrived", length = 4), PointerDataType(INT), StructureDataType("CActor.conflict"))
    fresh, derived = ist.new_types_since(dtm, before)
    assert sorted(t.getName() for t in fresh) == ["CActor.conflict", "CArrived"] and derived == 1
    assert ist.conflict_paths(dtm) == {"/CActor.conflict"}


def test_rtti_judges_a_size():
    assert ist.rtti_verdict({"CActor": 36}, "CActor", 36) == ("EXACT", 36)
    assert ist.rtti_verdict({"CActor": 36}, "CActor", 32) == ("DRIFTED", 36)
    assert ist.rtti_verdict({}, "CActor", 32) == ("NO_RTTI", "-")


@pytest.fixture(name = "builds")
def fixture_builds(monkeypatch, tmp_path):
    pe = build_sectioned_pe([(".text", b"\xcc" * 0x100, SECTION_EXECUTE)])
    param = {"name": "where", "type": "CLocation *"}
    annotations = install_programs(monkeypatch, tmp_path, {"nocedit.exe": (pe, [
        function(0x401000, "f", ret = "CActor *", vars = {"params": [param, {"name": "n", "type": "int"}]}),
        function(0x401010, "g", ret = "EMode")])})
    (annotations / "bw.exe" / "type_info").mkdir(parents = True)
    write_json(annotations / "bw.exe" / "type_info" / "type_info.json", {"type_info": [
        {"name": "CActor", "typeinfo_size": 36}, {"name": "CLocation"}]})
    pair = {"shape_agreement": "identical", "sig_verdict": "agree", "confidence": 1.0}
    mapping = write_json(tmp_path / "mapping.json", {"pairs": [
        {"a": "00401000", **pair}, {"a": "00401010", **pair}, {"a": "00401000", **pair},
        {"a": "00401010", "ambiguous": True},
        {"a": "00401020", **pair}, {"a": "00401000", "shape_agreement": "size_mismatch"}]})
    return {"mapping": mapping, "tmp": tmp_path}


def test_prototype_discovery_and_rtti_come_from_the_exports(builds):
    assert ist.wanted_types(builds["mapping"], "nocedit.exe", 0.9) == ["CActor", "CLocation", "int", "EMode"]
    assert ist.load_rtti("bw.exe") == {"CActor": 36}
    assert ist.load_rtti("none.exe") == {}


def test_each_wanted_name_is_triaged():
    src, dst = source().getDataTypeManager(), target().getDataTypeManager()
    have, already, wrong, absent, replace = ist.triage(
        ["CActor", "CKept", "CNew", "EMode", "CNone", "CVector3f"], src, dst, {"struct"}, {"CActor"}, True)
    assert [n for n, _ in have] == ["CActor", "CNew"] and replace == {"CActor"}
    assert (already, wrong, absent) == (["CKept", "CVector3f"], ["EMode"], ["CNone"])


def test_importing_stubs_replaces_and_adds_in_one_transaction(capsys):
    src, dst = source(), target()
    sdtm = src.getDataTypeManager()
    names = ["CVector3f", "CLocation", "CActor", "CGrown", "CNew", "SetupFunc"]
    have = [(n, ist.find_type(sdtm, n)) for n in names]
    left = ist.import_into(dst, have, {"CVector3f", "CLocation", "CActor", "CGrown"}, True)
    out = capsys.readouterr().out
    # In dependency order, so each member is laid out before what embeds it.
    assert "  CLocation: stub replaced, 16 bytes" in out and "  CActor: stub replaced, 32 bytes" in out
    assert "CGrown: a field type is missing from the target; stub left as it is" in out
    assert "stubbed 1 struct(s) as empty placeholders" in out
    assert left == ["CGrown"]
    replaced = dict(dst.getDataTypeManager().replaced)
    assert {old.getName() for old in replaced} == {"CVector3f", "CLocation", "CActor"}
    assert ist.find_type(dst.getDataTypeManager(), "SetupFunc") is not None
    assert dst.transactions == [["Import sibling data types", True]]


def test_a_failed_import_rolls_back():
    dst = target()
    with pytest.raises(AttributeError):
        ist.import_into(dst, [("CBad", None)], set(), False)
    assert dst.transactions == [["Import sibling data types", False]]


def test_dependencies_are_named_and_checked(capsys):
    dtm = target().getDataTypeManager()
    before = ist.all_type_paths(dtm)
    dtm.add(StructureDataType("CDrifted", length = 8), StructureDataType("CRight", length = 4),
            EnumDataType("EDep", 4), PointerDataType(INT), StructureDataType("CAsked", length = 4))
    ist.report_dependencies(dtm, [("CAsked", None)], before, {"CDrifted": 12, "CRight": 4}, "nocedit.exe", "bw.exe")
    out = capsys.readouterr().out
    assert "3 dependency type(s) arrived unrequested" in out and "CAsked" not in out
    assert "WARNING: 1 unverified struct/union layout(s) imported from nocedit.exe: CDrifted" in out
    assert "1 derived pointer/array type(s) also created" in out
    ist.report_dependencies(dtm, [], ist.all_type_paths(dtm), {}, "nocedit.exe", "bw.exe")
    assert capsys.readouterr().out == ""
    # Every one RTTI confirms: listed, no warning.
    before = ist.all_type_paths(dtm)
    dtm.add(StructureDataType("CExact", length = 4))
    ist.report_dependencies(dtm, [], before, {"CExact": 4}, "nocedit.exe", "bw.exe")
    out = capsys.readouterr().out
    assert "CExact" in out and "WARNING" not in out


def test_pruning_removes_what_is_there():
    dst = program(StructureDataType("CActor.conflict"))
    assert ist.prune(dst, ["/CActor.conflict", "/CGone.conflict"], None) == 1
    assert dst.transactions == [["Prune import conflicts", True]]


def run(monkeypatch, tmp_path, *argv, dst = None):
    dst = dst or target()
    module = FakePyghidraPrograms({"nocedit.exe": source(), "bw.exe": dst})
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    assert ist.main([str(tmp_path), "P", "bw.exe", *argv]) == 0
    return dst, module


def test_main_reports_a_dry_run(builds, monkeypatch, capsys):
    tmp = builds["tmp"]
    p = source()
    p.getListing().data[Address(0x500000)] = Data(Address(0x500000), FunctionDefinitionDataType("SetupFunc"))
    module = FakePyghidraPrograms({"nocedit.exe": p, "bw.exe": target()})
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    assert ist.main([str(tmp), "P", "bw.exe", "--mapping", builds["mapping"], "--type", "CNew",
                     "--kind", "struct", "--kind", "funcdef"]) == 0
    out = capsys.readouterr().out
    assert "5 distinct type name(s) asked for" in out
    assert "1 more from global data in nocedit.exe (6 total)" in out
    assert "excluded by --kind funcdef/struct : 1" in out
    assert "CNew                           struct    NO_RTTI           8        -" in out
    assert "[dry-run]" in out and module.closed == 1


def test_main_replaces_stubs_from_a_names_file_and_prunes(builds, monkeypatch, capsys):
    names = builds["tmp"] / "types.txt"
    names.write_text("CVector3f\nCLocation  # embedded\nCActor\n\n")
    dst = target()
    dtm = dst.getDataTypeManager()
    original = dtm.replaceDataType

    def replace_and_conflict(old, new, update):
        original(old, new, update)
        dtm.add(StructureDataType(f"{old.getName()}.conflict"))
    dtm.replaceDataType = replace_and_conflict
    shifts = write_json(builds["tmp"] / "shifts.json", {"CActor": {"size": 36, "place": {"0": 0}}})
    run(monkeypatch, builds["tmp"], "--no-globals", "--replace-stubs", "--types-file", str(names),
        "--shifts", shifts, "--apply", "--prune-conflicts", dst = dst)
    out = capsys.readouterr().out
    assert "imported or replaced 3 of 3 type(s)" in out
    # CActor's size changed, so it came across by its placement, at its RTTI size.
    assert "  CActor: stub replaced, 36 bytes" in out
    assert "3 new .conflict type(s) from dependency resolution:" in out and "pruned 3 of 3" in out
    assert dst.getDomainFile().saves == 1


def test_main_leaves_conflicts_unless_asked_and_says_when_there_is_nothing(builds, monkeypatch, capsys):
    dst = target()
    dtm = dst.getDataTypeManager()
    original = dtm.addDataType

    def add_and_conflict(data_type, handler):
        dtm.add(StructureDataType("CNew.conflict"))
        return original(data_type, handler)
    dtm.addDataType = add_and_conflict
    run(monkeypatch, builds["tmp"], "--no-globals", "--type", "CNew", "--apply", dst = dst)
    assert "re-run with --prune-conflicts to remove them" in capsys.readouterr().out

    run(monkeypatch, builds["tmp"], "--no-globals", "--type", "CKept", "--type", "CNone")
    out = capsys.readouterr().out
    assert "not in either program (built-ins or gone): CNone" in out and "nothing to import." in out

    run(monkeypatch, builds["tmp"], "--no-globals", "--type", "CNew", "--apply")
    out = capsys.readouterr().out
    assert "imported or replaced 1 of 1" in out and ".conflict" not in out


def test_main_needs_something_to_do(builds, monkeypatch):
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidraPrograms({}))
    with pytest.raises(SystemExit) as exit_info:
        ist.main([str(builds["tmp"]), "P", "bw.exe", "--no-globals"])
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["import_sibling_types.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "import_sibling_types.py"), run_name = "__main__")
    assert exit_info.value.code == 0
