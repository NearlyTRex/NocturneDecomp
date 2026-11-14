# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import make_sibling_anchors as msa


def bucket(folder, names):
    folder.mkdir(parents = True)
    records = [{"addr": addr, "name": name} for addr, name in names.items()]
    (folder / "functions_bucket_00.json").write_text(json.dumps(records + ["not a record"]))
    (folder / "functions_buckets.json").write_text(json.dumps({"bucket_count": 1}))
    return folder


@pytest.fixture(name = "folders")
def fixture_folders(tmp_path):
    a = bucket(tmp_path / "a", {
        "00401000": "core_x.cpp_CFoo_draw_FUN_00401000",
        "00401010": "core_x.cpp_twice_FUN_00401010", "00401020": "core_x.cpp_twice_FUN_00401020",
        "00401030": "core_x.cpp_FUN_00401030", "00401040": "unkafter_x.cpp_FUN_00401040",
        "00401050": "FUN_00401050", "00401060": "thunk_FUN_00401060", "00401070": "",
        "00401080": "core_y.cpp_onlyhere_FUN_00401080"})
    b = bucket(tmp_path / "b", {
        "00502000": "core_x.cpp_CFoo_draw_FUN_00502000", "00502010": "core_x.cpp_twice_FUN_00502010",
        "00502030": "core_x.cpp_FUN_00502030", "00502040": "unkafter_x.cpp_FUN_00502040"})
    (b / "broken.json").write_text("{")
    return a, b


def test_named_functions_group_by_base_and_unnamed_ones_are_left_out(folders, capsys):
    named = msa.load_named(str(folders[1]))
    assert named == {"core_x.cpp_CFoo_draw": ["00502000"], "core_x.cpp_twice": ["00502010"]}
    assert "skip broken.json" in capsys.readouterr().err


def test_a_unit_only_name_is_no_anchor_even_when_unique_on_both_sides(folders):
    assert "core_x.cpp" not in msa.load_named(str(folders[0]))
    assert "unkafter_x.cpp" not in msa.load_named(str(folders[0]))


def test_only_bases_unique_on_both_sides_pair(folders, tmp_path, capsys):
    out = tmp_path / "anchors.json"
    msa.main(["--funcs-a", str(folders[0]), "--funcs-b", str(folders[1]), "--key-a", "src", "--key-b", "tgt",
              "--out", str(out)])
    assert json.loads(out.read_text()) == [{"src": "0x00401000", "tgt": "0x00502000"}]
    printed = capsys.readouterr().out
    assert "src: 3 named bases" in printed and "tgt: 2 named bases" in printed
    assert "unique 1-to-1 pairs: 1  (dropped 1 ambiguous)" in printed


def test_runs_as_a_script(folders, tmp_path, monkeypatch, capsys):
    out = tmp_path / "anchors.json"
    monkeypatch.setattr(sys, "argv", ["make_sibling_anchors.py", "--funcs-a", str(folders[0]),
                                      "--funcs-b", str(folders[1]), "--out", str(out)])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "make_sibling_anchors.py"), run_name = "__main__")
    assert json.loads(out.read_text()) == [{"nocedit": "0x00401000", "nocturne": "0x00502000"}]
