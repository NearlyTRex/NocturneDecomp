# Imports
import json

# Local imports
from ghidra_program import Program
from ghidra_annotations.annotations.comments import delete_comments, export_comments, import_comments
from ghidra_annotations.util import load_json_files


def program_with_code_units(*addresses):
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x100))
    for address in addresses:
        program.getListing().add_data(address, None)
    return program


def comments_at(program, address):
    return program.getListing().getCodeUnitAt(program.space.getAddress(address)).comments


def test_every_kind_of_comment_round_trips_repeatable_included(tmp_path):
    source = program_with_code_units(0x401000, 0x401010, 0x401020)
    comments_at(source, 0x401010).update(PLATE_COMMENT = "plate", EOL_COMMENT = "eol", REPEATABLE_COMMENT = "again")
    comments_at(source, 0x401000).update(PRE_COMMENT = "pre", POST_COMMENT = "post")
    comments_at(source, 0x401020).update(EOL_COMMENT = "   ")
    export_comments(source, str(tmp_path))
    assert load_json_files(str(tmp_path), "comments") == [
        {"addr": "00401000", "pre": "pre", "post": "post", "importable": True},
        {"addr": "00401010", "plate": "plate", "eol": "eol", "repeatable": "again", "importable": True}]

    target = program_with_code_units(0x401000, 0x401010)
    import_comments(target, str(tmp_path))
    assert comments_at(target, 0x401010) == {"PLATE_COMMENT": "plate", "EOL_COMMENT": "eol",
                                              "REPEATABLE_COMMENT": "again"}
    assert comments_at(target, 0x401000) == {"PRE_COMMENT": "pre", "POST_COMMENT": "post"}


def test_a_comment_with_no_code_unit_or_address_is_skipped(tmp_path):
    (tmp_path / "comments").mkdir()
    (tmp_path / "comments" / "comments_bucket_00.json").write_text(json.dumps([
        {"addr": "00401040", "eol": "nothing here", "importable": True},
        {"eol": "no address", "importable": True}]), encoding = "utf-8")
    target = program_with_code_units(0x401000)
    import_comments(target, str(tmp_path))
    assert comments_at(target, 0x401000) == {}


def test_delete_clears_the_importable_comments(tmp_path):
    program = program_with_code_units(0x401000, 0x401010)
    comments_at(program, 0x401000)["EOL_COMMENT"] = "gone"
    comments_at(program, 0x401010)["PRE_COMMENT"] = "kept"
    (tmp_path / "comments").mkdir()
    (tmp_path / "comments" / "comments_bucket_00.json").write_text(json.dumps([
        {"addr": "00401000", "importable": True}, {"addr": "00401010", "importable": False}]),
        encoding = "utf-8")
    delete_comments(program, str(tmp_path))
    assert (comments_at(program, 0x401000), comments_at(program, 0x401010)) == ({}, {"PRE_COMMENT": "kept"})
