# Imports
import json

# Local imports
from ghidra_program import Address, Program
from ghidra_annotations.annotations.bookmarks import delete_bookmarks, export_bookmarks, import_bookmarks
from ghidra_annotations.util import load_json_files


def program_with_bookmarks():
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x100))
    manager = program.getBookmarkManager()
    manager.setBookmark(Address(0x401000), "Analysis", "Found Code", "found")
    manager.setBookmark(Address(0x401000), "Note", "todo", "")
    manager.setBookmark(Address(0x401010), "Note", "todo", "check this")
    return program


def marks(program):
    return sorted((str(b.getAddress()), b.getTypeString(), b.getCategory(), b.getComment())
                  for b in program.getBookmarkManager().bookmarks)


def test_bookmarks_round_trip_keyed_by_address_type_and_category(tmp_path):
    source = program_with_bookmarks()
    export_bookmarks(source, str(tmp_path))
    records = load_json_files(str(tmp_path), "bookmarks")
    assert sorted(records, key = lambda r: (r["addr"], r["type"])) == [
        {"addr": "00401000", "cat": "Found Code", "type": "Analysis", "comment": "found", "importable": True},
        {"addr": "00401000", "cat": "todo", "type": "Note", "importable": True},
        {"addr": "00401010", "cat": "todo", "type": "Note", "comment": "check this", "importable": True}]

    target = Program()
    target.getMemory().add_block(".text", 0x401000, bytes(0x100))
    import_bookmarks(target, str(tmp_path))
    assert marks(target) == marks(source)


def test_records_without_a_full_key_or_a_mapped_address_are_not_imported(tmp_path):
    (tmp_path / "bookmarks").mkdir()
    (tmp_path / "bookmarks" / "bookmarks_bucket_00.json").write_text(json.dumps([
        {"addr": "00401000", "type": "Note", "importable": True},
        {"addr": "00900000", "type": "Note", "cat": "x", "importable": True},
        {"addr": "00401020", "type": "Note", "cat": "kept", "importable": False}]), encoding = "utf-8")
    target = Program()
    target.getMemory().add_block(".text", 0x401000, bytes(0x100))
    import_bookmarks(target, str(tmp_path))
    assert marks(target) == []


def test_delete_removes_only_the_importable_bookmarks(tmp_path):
    program = program_with_bookmarks()
    export_bookmarks(program, str(tmp_path))
    path = tmp_path / "bookmarks"
    for bucket in path.glob("bookmarks_bucket_*.json"):
        records = json.loads(bucket.read_text(encoding = "utf-8"))
        for record in records:
            record["importable"] = record["type"] != "Analysis"
        bucket.write_text(json.dumps(records), encoding = "utf-8")
    delete_bookmarks(program, str(tmp_path))
    assert marks(program) == [("00401000", "Analysis", "Found Code", "found")]
