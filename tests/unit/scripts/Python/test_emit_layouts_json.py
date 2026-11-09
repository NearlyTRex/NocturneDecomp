# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import emit_layouts_json


@pytest.fixture(name = "annotations")
def fixture_annotations(monkeypatch, tmp_path):
    folder = tmp_path / "game.exe" / "data_types"
    folder.mkdir(parents = True)
    (folder / "data_types.json").write_text(json.dumps({
        "structs": [{"name": "CFoo", "len": 8, "fields": [
            {"name": "a", "offset": 0, "type": "int", "len": 4}, {"name": "b", "type": "char"}]},
            {"name": "SEmpty"}],
        "unions": [{"name": "UBar", "len": 4, "fields": [{"name": "f", "type": "float", "len": 4}]}]}))
    (tmp_path / "plain.exe" / "data_types").mkdir(parents = True)
    (tmp_path / "plain.exe" / "data_types" / "data_types.json").write_text(json.dumps({"structs": []}))
    monkeypatch.setattr(emit_layouts_json, "ANNOTATIONS", str(tmp_path))
    return tmp_path


def test_structs_and_unions_become_flat_layouts(annotations):
    assert emit_layouts_json.build_layouts("game.exe") == {
        "CFoo": {"size": 8, "components": [{"name": "a", "off": 0, "type": "int", "len": 4},
                                           {"name": "b", "off": 0, "type": "char", "len": 0}]},
        "SEmpty": {"size": 0, "components": []},
        "UBar": {"size": 4, "components": [{"name": "f", "off": 0, "type": "float", "len": 4}]}}
    assert emit_layouts_json.build_layouts("plain.exe") == {}


def test_main_writes_the_layouts_and_counts_them(annotations, tmp_path, capsys):
    out = tmp_path / "layouts.json"
    assert emit_layouts_json.main(["--program", "game.exe", "-o", str(out)]) == 0
    assert set(json.loads(out.read_text())) == {"CFoo", "SEmpty", "UBar"}
    assert f"wrote {out} (3 types, 3 fields)" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["emit_layouts_json.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "emit_layouts_json.py"), run_name = "__main__")
    assert exit_info.value.code == 0
