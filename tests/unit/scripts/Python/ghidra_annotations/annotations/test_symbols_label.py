# Imports
import importlib
import json

# Local imports
from ghidra_fake import StringDataType
from ghidra_program import Address, Program
from ghidra_annotations.annotations.symbols_label import (
    delete_symbols_label, export_symbols_label, import_symbols_label)
from ghidra_annotations.util import load_json_files

SourceType = importlib.import_module("ghidra.program.model.symbol").SourceType


def program_with_labels():
    program = Program()
    program.getMemory().add_block(".data", 0x500000, bytes(0x100))
    table = program.getSymbolTable()
    # 500000: Ghidra's primary is a made-up name; the user's alternate is the better one
    table.createLabel(Address(0x500000), "DAT_00500000", SourceType.DEFAULT)
    table.createLabel(Address(0x500000), "g_Game", SourceType.USER_DEFINED)
    table.createLabel(Address(0x500000), "g_GameAlias", SourceType.ANALYSIS)
    # 500010: a string with two names, the second kept as an alternate
    program.getListing().add_data(0x500010, StringDataType())
    table.createLabel(Address(0x500010), "s_hello", SourceType.ANALYSIS)
    table.createLabel(Address(0x500010), "s_hi", SourceType.IMPORTED)
    table.createLabel(Address(0x500020), "LAB_00500020", SourceType.USER_DEFINED)
    table.createLabel(Address(0x500020), "PTR_00500020", SourceType.USER_DEFINED)
    external = table.createLabel(Address(0x500030), "extern", SourceType.IMPORTED)
    external.external = True
    namespace = table.createNameSpace(program.getGlobalNamespace(), "core", SourceType.USER_DEFINED)
    table.createLabel(Address(0x500040), "scoped", namespace, SourceType.USER_DEFINED)
    table.createLabel(Address(0x500050), "DAT_00500050", SourceType.DEFAULT).dynamic = True
    return program


def by_addr(path):
    return sorted(load_json_files(str(path), "symbols_label"), key = lambda r: (r["addr"], r["name"]))


def test_the_best_label_is_primary_and_alternates_appear_only_when_importable(tmp_path):
    export_symbols_label(program_with_labels(), str(tmp_path))
    assert by_addr(tmp_path) == [
        {"name": "g_Game", "addr": "00500000", "ns": "Global", "global": True, "importable": True},
        {"name": "s_hello", "addr": "00500010", "ns": "Global", "global": True, "importable": True,
         "non_primary": True},
        {"name": "s_hi", "addr": "00500010", "ns": "Global", "global": True, "importable": True},
        {"name": "LAB_00500020", "addr": "00500020", "ns": "Global", "global": True, "importable": True},
        {"name": "scoped", "addr": "00500040", "ns": "core", "global": False, "importable": True},
        {"name": "DAT_00500050", "addr": "00500050", "ns": "Global", "global": True, "importable": False}]


def test_the_users_flags_are_kept_strings_included(tmp_path):
    (tmp_path / "symbols_label").mkdir()
    (tmp_path / "symbols_label" / "symbols_label_bucket_00.json").write_text(json.dumps([
        {"name": "s_hello", "addr": "00500010", "importable": False},
        {"name": "g_GameAlias", "addr": "00500000", "importable": True},
        {"name": "g_Game", "addr": "00500000", "importable": False}]), encoding = "utf-8")
    export_symbols_label(program_with_labels(), str(tmp_path))
    flags = {(r["addr"], r["name"]): (r["importable"], r.get("non_primary", False)) for r in by_addr(tmp_path)}
    assert ("00500010", "s_hello") not in flags
    assert flags[("00500000", "g_GameAlias")] == (True, True)
    assert flags[("00500000", "g_Game")] == (False, False)


def labels(program):
    table = program.getSymbolTable()
    return sorted((str(s.getAddress()), s.getName(), s.isPrimary(), s.getParentNamespace().getName())
                  for s in table.symbols if s.symbol_type == "LABEL")


def test_labels_round_trip_with_their_primaries(tmp_path):
    export_symbols_label(program_with_labels(), str(tmp_path))
    target = Program()
    target.getMemory().add_block(".data", 0x500000, bytes(0x100))
    import_symbols_label(target, str(tmp_path))
    assert labels(target) == [
        ("00500000", "g_Game", True, "Global"), ("00500010", "s_hello", False, "Global"),
        ("00500010", "s_hi", True, "Global"), ("00500020", "LAB_00500020", True, "Global"),
        ("00500040", "scoped", True, "core")]


def test_unusable_and_unimportable_records_are_not_imported(tmp_path):
    (tmp_path / "symbols_label").mkdir()
    (tmp_path / "symbols_label" / "symbols_label_bucket_00.json").write_text(json.dumps([
        {"name": "off_map", "addr": "00900000", "importable": True},
        {"addr": "00500000", "importable": True},
        {"name": "kept_out", "addr": "00500000", "importable": False},
        {"name": "alt", "addr": "00900000", "importable": True, "non_primary": True},
        {"name": "there", "addr": "00500000", "importable": True, "non_primary": True}]), encoding = "utf-8")
    target = Program()
    target.getMemory().add_block(".data", 0x500000, bytes(0x100))
    target.getSymbolTable().createLabel(Address(0x500000), "there", SourceType.ANALYSIS)
    import_symbols_label(target, str(tmp_path))
    assert labels(target) == [("00500000", "there", True, "Global")]


def test_delete_removes_the_importable_labels(tmp_path):
    program = program_with_labels()
    export_symbols_label(program, str(tmp_path))
    delete_symbols_label(program, str(tmp_path))
    assert [name for _, name, _, _ in labels(program)] == [
        "DAT_00500000", "g_GameAlias", "PTR_00500020", "extern", "DAT_00500050"]


def test_delete_with_no_export_does_nothing(tmp_path):
    program = program_with_labels()
    delete_symbols_label(program, str(tmp_path))
    assert program.transactions == []
