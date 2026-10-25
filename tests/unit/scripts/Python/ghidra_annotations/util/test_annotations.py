# Imports
import json
import os
import subprocess
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from ghidra_program import Address
from ghidra_annotations.util import annotations


def test_clean_data_drops_empty_values_and_stringifies_java_objects():
    data = {"a": 1, "b": None, "c": "", "d": [], "e": {}, "f": [Address(0x10), None, {"g": ""}], "h": {"i": 2}}
    assert annotations.clean_data(data) == {"a": 1, "f": ["00000010", {}], "h": {"i": 2}}


def test_make_dirs_tolerates_an_existing_directory_only(tmp_path):
    target = tmp_path / "a" / "b"
    annotations.make_dirs(str(target))
    annotations.make_dirs(str(target))
    assert target.is_dir()
    blocker = tmp_path / "file"
    blocker.write_text("", encoding = "utf-8")
    with pytest.raises(OSError):
        annotations.make_dirs(str(blocker))


def test_write_if_changed_only_writes_new_content(tmp_path):
    path = tmp_path / "out.h"
    assert annotations.write_if_changed(str(path), "one") is True
    mtime = os.stat(path).st_mtime_ns
    assert annotations.write_if_changed(str(path), "one") is False
    assert os.stat(path).st_mtime_ns == mtime
    assert annotations.write_if_changed(str(path), "two") is True
    assert path.read_text(encoding = "utf-8") == "two"


def test_write_if_changed_in_binary_mode(tmp_path):
    path = tmp_path / "out.bin"
    assert annotations.write_if_changed(str(path), b"\x00\xff", mode = "wb") is True
    assert annotations.write_if_changed(str(path), b"\x00\xff", mode = "wb") is False


def test_write_if_changed_rewrites_a_file_it_cannot_read(tmp_path):
    path = tmp_path / "out.txt"
    path.write_bytes(b"\xff\xfe\xfa")
    assert annotations.write_if_changed(str(path), "text") is True
    assert path.read_text(encoding = "utf-8") == "text"


def test_with_generated_notice_is_added_once():
    header = annotations.with_generated_notice("#pragma once\n")
    assert header == annotations.GENERATED_HEADER_NOTICE + "#pragma once\n"
    assert annotations.with_generated_notice(header) == header


def test_json_round_trips_sorted_and_indented(tmp_path):
    path = tmp_path / "deep" / "data.json"
    annotations.save_json(str(path), {"b": 1, "a": [1, 2]})
    assert path.read_text(encoding = "utf-8") == '{\n  "a":[\n    1,\n    2\n  ],\n  "b":1\n}\n'
    assert annotations.load_json(str(path)) == {"a": [1, 2], "b": 1}
    annotations.save_json_file(str(tmp_path), "types", [3])
    assert annotations.load_json_file(str(tmp_path), "types") == [3]


def bucket_files(path, base):
    return sorted(os.listdir(path / base))


def test_save_json_files_buckets_by_the_low_address_bits(tmp_path, capsys):
    items = [{"addr": "0x00401000"}, {"addr": "00401001"}, {"addr": "00401011"}]
    created = annotations.save_json_files(str(tmp_path), "comments", items, lambda item: item["addr"], bucket_bits = 2)
    assert created == ["comments_bucket_00.json", "comments_bucket_01.json"]
    metadata = json.loads((tmp_path / "comments" / "comments_buckets.json").read_text(encoding = "utf-8"))
    assert (metadata["total_items"], metadata["bucket_count"], metadata["files"]) == (3, 4, created)
    assert metadata["bucket_stats"]["comments_bucket_00.json"]["min_addr"] == 0x401000
    assert metadata["bucket_stats"]["comments_bucket_01.json"]["count"] == 2
    assert annotations.load_json_files(str(tmp_path), "comments") == items
    assert "Saved 2 items to comments_bucket_01.json (0x401001-0x401011)" in capsys.readouterr().out


# The bucket for a key with no hex address has to be the same in every process,
# or each export would move it to another file
def test_an_item_without_a_hex_address_lands_in_the_same_bucket_every_run(tmp_path):
    script = ("import sys; sys.path[:0] = ['tests', 'scripts/Python']; import ghidra_fake; ghidra_fake.install(); "
              "from ghidra_annotations.util import annotations; "
              "print(annotations.save_json_files(sys.argv[1], 'x', ['label'], lambda item: item, bucket_bits = 4))")
    runs = {subprocess.run([sys.executable, "-c", script, str(tmp_path / str(seed))], cwd = REPO_ROOT,
                           env = {**os.environ, "PYTHONHASHSEED": str(seed)}, capture_output = True,
                           text = True, check = True).stdout
            for seed in (1, 2, 3)}
    assert len(runs) == 1
    assert "x_bucket_" in runs.pop()


def test_save_json_files_removes_buckets_no_longer_written(tmp_path, capsys):
    annotations.save_json_files(str(tmp_path), "xrefs", ["00000001", "00000002"], str, bucket_bits = 1)
    (tmp_path / "xrefs" / "notes.txt").write_text("keep", encoding = "utf-8")
    annotations.save_json_files(str(tmp_path), "xrefs", ["00000002"], str, bucket_bits = 1)
    assert bucket_files(tmp_path, "xrefs") == ["notes.txt", "xrefs_bucket_00.json", "xrefs_buckets.json"]
    assert "Cleaned up 1 stale xrefs files" in capsys.readouterr().out


def test_save_json_files_without_items_writes_empty_metadata_and_clears_buckets(tmp_path):
    annotations.save_json_files(str(tmp_path), "eq", ["00000001"], lambda item: item)
    assert annotations.save_json_files(str(tmp_path), "eq", [], lambda item: item) == []
    assert bucket_files(tmp_path, "eq") == ["eq_buckets.json"]
    assert annotations.load_json_files(str(tmp_path), "eq") == []


def test_cleanup_reports_a_bucket_it_cannot_remove(tmp_path, monkeypatch, capsys):
    (tmp_path / "eq").mkdir()
    (tmp_path / "eq" / "eq_bucket_07.json").write_text("[]", encoding = "utf-8")

    def refuse(path):
        raise PermissionError("read-only")

    monkeypatch.setattr(annotations.os, "remove", refuse)
    annotations.cleanup_stale_files(str(tmp_path / "eq"), "eq", set())
    assert "Could not remove stale file eq_bucket_07.json: read-only" in capsys.readouterr().out
    annotations.cleanup_stale_files(str(tmp_path / "absent"), "eq", set())


def test_load_json_files_skips_listed_buckets_that_are_missing_or_null(tmp_path):
    base = tmp_path / "fx"
    base.mkdir()
    (base / "fx_buckets.json").write_text(json.dumps({"files": ["fx_bucket_00.json", "gone.json", "null.json"]}),
                                          encoding = "utf-8")
    (base / "fx_bucket_00.json").write_text('[{"a": 1}]', encoding = "utf-8")
    (base / "null.json").write_text("null", encoding = "utf-8")
    assert annotations.load_json_files(str(tmp_path), "fx") == [{"a": 1}]


def test_load_json_files_without_metadata_reads_every_bucket_it_can(tmp_path, capsys):
    base = tmp_path / "fx"
    base.mkdir()
    (base / "fx_buckets.json").write_text("null", encoding = "utf-8")
    assert annotations.load_json_files(str(tmp_path), "fx") == []
    (base / "fx_buckets.json").unlink()
    (base / "fx_a.json").write_text("[1, 2]", encoding = "utf-8")
    (base / "fx_b.json").write_text("null", encoding = "utf-8")
    (base / "fx_c.json").write_text("{broken", encoding = "utf-8")
    assert annotations.load_json_files(str(tmp_path), "fx") == [1, 2]
    out = capsys.readouterr().out
    assert "Loaded 2 items from fx_a.json" in out
    assert "Loaded 0 items from fx_b.json" in out
    assert f"Could not load {base / 'fx_c.json'}" in out
