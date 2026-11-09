# Third-party imports
import pytest

# Local imports
from ghidra_fake import StringDataType, StructureDataType
from ghidra_program import Address, DataField, Program, Scalar
from ghidra_annotations.annotations import type_info as ti
from ghidra_annotations.util import load_json_file

WATCOM = StructureDataType("WatcomTypeInfo", length = 24)


def add_string(program, address, text):
    program.getListing().add_data(address, StringDataType(), text)


def add_typeinfo(program, address, size, class_name):
    data = program.getListing().add_data(address, WATCOM)
    data.fields = [DataField("vtable", None), DataField("instance_size", size), DataField("class_name", class_name)]
    return data


def program_with_rtti():
    program = Program()
    program.getMemory().add_block(".data", 0x500000, bytes(0x1000))
    program.getDataTypeManager().add(StructureDataType("CGame", length = 8), StructureDataType("CMenu", length = 16),
                                     StructureDataType("CMenu", length = 12, category = "/Other"),
                                     StructureDataType("CVector3f", length = 12),
                                     StructureDataType("CBigOne", length = 16), StructureDataType("SZero", length = 0))
    for address, text in [(0x500100, "$CGame$$"), (0x500120, "$CVector$$"), (0x500140, "$CMenu$$"),
                          (0x500160, "$CNone$$"), (0x500180, "$ios$$"), (0x5001a0, "$CEmpty$$"),
                          (0x5001c0, "$CGame$$ again"), (0x5001e0, "$MOT$$"), (0x500200, ""),
                          (0x500220, "$CLonely$$"), (0x500240, "$SBat$$")]:
        add_string(program, address, text)
    add_typeinfo(program, 0x500800, Scalar(8), Address(0x500100))
    add_typeinfo(program, 0x500820, Scalar(12), Address(0x500120))
    add_typeinfo(program, 0x500840, Scalar(12), Address(0x500140))
    add_typeinfo(program, 0x500860, Scalar(4), Address(0x500160))
    add_typeinfo(program, 0x500880, Scalar(4), Address(0x500180))
    add_typeinfo(program, 0x5008a0, None, Address(0x5001a0))
    add_typeinfo(program, 0x5008c0, Scalar(4), None)
    no_size = program.getListing().add_data(0x5008e0, WATCOM)
    no_size.fields = [DataField("class_name", Address(0x500100))]
    return program


def records(path):
    return {t["name"]: t for t in load_json_file(str(path), "type_info")["type_info"]}


def test_rtti_sizes_are_checked_against_the_ghidra_types(tmp_path, capsys):
    ti.export_type_info(program_with_rtti(), str(tmp_path))
    found = records(tmp_path)
    assert found["CGame"] == {"name": "CGame", "addr": "00500100", "typeinfo_size": 8, "typeinfo_addr": "00500800",
                              "file": "..\\core\\game.cpp"}
    assert found["CVector"]["typeinfo_size"] == 12
    assert "typeinfo_size" not in found["CDemonActor"]
    assert (found["CLonely"]["addr"], found["SBat"]["addr"]) == ("00500220", "00500240")
    assert "typeinfo_size" not in found["CLonely"]
    assert found["CWeapon"]["parents"] == ["CDemonActor"]
    assert "MOT" not in found
    log = capsys.readouterr().out
    assert "3 checked and matching" in log
    assert "CNone: no Ghidra type, WatcomTypeInfo=4" in log
    assert "2 non-game type(s) skipped (CRT/Watcom stdlib): CEmpty, ios" in log
    assert "has no class name or size (skipped)" in log


def test_a_size_mismatch_fails_the_export_after_writing_it_unless_allowed(tmp_path, capsys):
    program = program_with_rtti()
    add_string(program, 0x500200, "$CBigOne$$")
    add_typeinfo(program, 0x500900, Scalar(20), Address(0x500200))
    with pytest.raises(ti.StructSizeMismatchError, match = "1 type"):
        ti.export_type_info(program, str(tmp_path))
    assert records(tmp_path)["CBigOne"]["typeinfo_size"] == 20
    assert "Size mismatch for CBigOne: Ghidra CBigOne=16 (0x10), WatcomTypeInfo=20 (0x14)" in capsys.readouterr().out
    ti.export_type_info(program, str(tmp_path / "allowed"), allow_size_mismatch = True)
    assert records(tmp_path / "allowed")["CBigOne"]["typeinfo_size"] == 20


def test_method_references_name_their_functions_and_source_files(tmp_path):
    program = program_with_rtti()
    add_string(program, 0x500300, "CGame::update failed in fileManager::load")
    add_string(program, 0x500320, "CGame::update again, and CGame::draw")
    add_string(program, 0x500340, "..\\core\\game.cpp")
    add_string(program, 0x500360, "..\\core\\game.cpp")
    add_string(program, 0x500380, "not a path")
    program.getFunctionManager().add("updater", 0x401000, size = 0x20)
    program.getFunctionManager().add("nowhere", 0x402000)
    program.getMemory().add_block(".text", 0x401000, bytes(0x2000))
    refs = program.getReferenceManager()
    for source, target in [(0x401004, 0x500300), (0x401006, 0x500300), (0x401008, 0x500340), (0x40100a, 0x500360),
                           (0x40100c, 0x500380), (0x401010, 0x401000), (0x401012, 0x500320), (0x403000, 0x500300)]:
        refs.add(source, target)
    ti.export_type_info(program, str(tmp_path))
    found = records(tmp_path)
    assert found["CGame"]["methods"]["update"] == {
        "refs": {"string": ["00500300", "00500320"], "function": ["00401000"], "file": ["..\\core\\game.cpp"]},
        "source": "CGame::update"}
    assert found["CGame"]["methods"]["draw"]["refs"]["string"] == ["00500320"]
    assert found["CDemonFileManager"]["methods"]["load"]["source"] == "fileManager::load"
    assert "addr" not in found["CDemonFileManager"]


def test_a_method_string_no_function_refers_to_has_no_files(tmp_path):
    program = program_with_rtti()
    add_string(program, 0x500300, "CNew::make")
    ti.export_type_info(program, str(tmp_path))
    assert records(tmp_path)["CNew"]["methods"]["make"]["refs"] == {"string": ["00500300"]}


@pytest.mark.parametrize("text, name", [
    ("$CGame$$", "CGame"), ("$$CGame$$", "CGame"), ("x$CGame$y", "CGame"), ("$GAME.SAV$", None),
    ("$UNDO$", None), ("$123$", None), ("no markers", None), ("", None)])
def test_rtti_names_are_read_from_their_dollar_markers(text, name):
    assert ti.extract_type_name_from_string(text) == name


@pytest.mark.parametrize("text, files", [
    ("..\\core\\game.cpp", ["..\\core\\game.cpp"]), ("see ../a/b.cpp and ..\\c.c", ["../a/b.cpp", "..\\c.c"]),
    ("data.txt", []), ("", []), ("x" * 120 + ".cpp", []), ("main.cpp", ["main.cpp"])])
def test_source_paths_are_found_in_strings(text, files):
    assert ti.find_source_files_in_string(text) == files


@pytest.mark.parametrize("path, likely", [
    ("", False), ("http://x/y.cpp", False), ("https://x/y.cpp", False), ("a b/c.cpp", False), ("..\\a.c", True)])
def test_a_path_is_a_source_file_by_extension_and_characters(path, likely):
    assert ti.is_likely_source_file(path) is likely


def test_method_references_are_found_with_their_class_spellings_fixed():
    assert ti.find_class_method_references("CDR::draw and SCScipt::run") == [
        {"class": "CDemonRenderer", "method": "draw", "full_ref": "CDR::draw"},
        {"class": "CScript", "method": "run", "full_ref": "SCScipt::run"}]
    assert ti.find_class_method_references("") == []


@pytest.mark.parametrize("name, ghidra", [("CGame", "CGame"), ("CVector", "CVector3f"), ("CAmmo_Mana", "CAmmoMana"),
                                          ("CMissing", None), ("GSPlayer", None)])
def test_rtti_names_resolve_to_their_ghidra_types(name, ghidra):
    sizes = {"CGame": {8}, "CVector3f": {12}, "CAmmoMana": {4}}
    assert ti.resolve_ghidra_type_name(name, sizes, ti.get_rtti_type_aliases()) == ghidra


def test_the_tables_name_files_for_classes_and_structures():
    assert ti.get_structure_files()["SBat"] == "..\\core\\moon.cpp"
    assert ti.get_class_files()["CGame"] == "..\\core\\game.cpp"
    assert ti.normalize_class_name("CGame") == "CGame"
