# Imports
import json

# Local imports
from ghidra_program import Address, Program
from ghidra_annotations.annotations.external_imports import (
    delete_external_imports, export_external_imports, import_external_imports)
from ghidra_annotations.util import load_json_file

WSOCK = "WSOCK32.DLL"


def program_with_imports():
    program = Program()
    manager = program.getExternalManager()
    manager.add(WSOCK, "accept", Address(0x80000001))
    manager.add(WSOCK, "Ordinal_1", Address(0x80000001))
    manager.add(WSOCK, "Ordinal_3", Address(0x80000003))
    manager.add("KERNEL32.DLL", "ExitProcess", Address(0x212000))
    manager.getExternalLocation(WSOCK, "accept").symbol.external = True
    program.getSymbolTable().createLabel(Address(0x401000), "not_external", "USER_DEFINED")
    return program


def imports(program):
    return sorted((loc.library, loc.symbol.getName()) for loc in program.getExternalManager().locations)


def write(path, records):
    (path / "external_imports").mkdir(parents = True)
    (path / "external_imports" / "external_imports.json").write_text(json.dumps(records), encoding = "utf-8")


def test_exports_what_ghidra_holds_without_ordinals_a_named_import_shadows(tmp_path):
    write(tmp_path, [{"name": "accept", "lib": WSOCK, "addr": "stale", "type": "stale", "importable": False}])
    export_external_imports(program_with_imports(), str(tmp_path))
    assert load_json_file(str(tmp_path), "external_imports") == [
        {"name": "ExitProcess", "lib": "KERNEL32.DLL", "addr": "00212000", "type": "FUNCTION", "importable": True},
        {"name": "accept", "lib": WSOCK, "addr": "80000001", "type": "FUNCTION", "importable": False},
        {"name": "Ordinal_3", "lib": WSOCK, "addr": "80000003", "type": "FUNCTION", "importable": True}]


def test_a_location_with_no_symbol_record_is_not_exported(tmp_path):
    program = program_with_imports()
    program.getSymbolTable().symbols.append(program.getExternalManager().locations.pop().symbol)
    export_external_imports(program, str(tmp_path / "first"))
    assert [r["name"] for r in load_json_file(str(tmp_path / "first"), "external_imports")] == ["accept", "Ordinal_3"]


def test_import_adds_only_what_is_missing_and_leaves_existing_imports_alone(tmp_path):
    write(tmp_path, [
        {"name": "accept", "lib": WSOCK, "addr": "80000001", "importable": True},
        {"name": "Ordinal_1", "lib": WSOCK, "addr": "80000001", "importable": True},
        {"name": "send", "lib": WSOCK, "importable": True},
        {"name": "recv", "lib": WSOCK, "importable": False},
        {"name": "no_library", "importable": True}])
    program = Program()
    existing = program.getExternalManager().add(WSOCK, "accept", Address(0x80000001))
    import_external_imports(program, str(tmp_path))
    assert imports(program) == [(WSOCK, "accept"), (WSOCK, "send")]
    assert program.getExternalManager().getExternalLocation(WSOCK, "accept") is existing


def test_without_a_previous_export_import_and_delete_do_nothing(tmp_path):
    program = program_with_imports()
    before = imports(program)
    import_external_imports(program, str(tmp_path))
    delete_external_imports(program, str(tmp_path))
    assert imports(program) == before
    assert program.transactions == [["Import External Imports", True]]


def test_delete_removes_the_importable_imports_ghidra_still_has(tmp_path):
    write(tmp_path, [
        {"name": "Ordinal_3", "lib": WSOCK, "importable": True},
        {"name": "gone", "lib": WSOCK, "importable": True},
        {"name": "accept", "lib": WSOCK, "importable": False}])
    program = program_with_imports()
    delete_external_imports(program, str(tmp_path))
    assert imports(program) == [("KERNEL32.DLL", "ExitProcess"), (WSOCK, "Ordinal_1"), (WSOCK, "accept")]
