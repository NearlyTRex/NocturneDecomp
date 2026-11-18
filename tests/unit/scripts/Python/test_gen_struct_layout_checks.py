# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import gen_struct_layout_checks as gen


@pytest.mark.parametrize("cat, leaf", [
    ("/Nocturne/Struct/System/winnt.h", "winnt"), ("/Nocturne/Game/", "game"), ("", "uncategorized"),
    ("/x/my-lib.h", "my_lib"), ("/x/.h", "uncategorized"),
])
def test_a_category_becomes_its_leaf(cat, leaf):
    assert gen.slugify_leaf(cat) == leaf


def test_the_skip_list_ignores_comments_and_blanks(tmp_path):
    path = tmp_path / "skip.txt"
    path.write_text("# why\n\n  CFoo  \nCBar\n")
    assert gen.load_skip_list(str(path)) == {"CFoo", "CBar"}
    assert gen.load_skip_list(str(tmp_path / "none.txt")) == set()
    assert gen.load_skip_list(None) == set()


def test_identifiers():
    assert gen.is_valid_c_ident("_a1") and not gen.is_valid_c_ident("1a")
    assert not gen.is_valid_c_ident("") and not gen.is_valid_c_ident("a b")


STRUCTS = [
    {"name": "CZed", "len": 8, "cat": "/Nocturne/Game/game.h",
     "fields": [{"name": "a", "offset": 0}, {"name": "field_0x4", "offset": 4},
                {"name": "", "offset": 6}, {"name": "nooff"}]},
    {"name": "CAlpha", "len": 4, "cat": "/Nocturne/Game/game.h"},
    {"name": "POINT", "len": 8, "cat": "/Nocturne/Struct/System/windef.h", "fields": []},
    {"name": "bad name", "len": 1},
] + [{"name": f"S{i:02d}", "len": 1} for i in range(21)]


def test_main_writes_one_file_per_leaf_and_lists_the_skipped(tmp_path, capsys):
    data = tmp_path / "data_types.json"
    data.write_text(json.dumps({"structs": STRUCTS}))
    skip = tmp_path / "skip.txt"
    skip.write_text("\n".join(f"S{i:02d}" for i in range(21)) + "\n")
    out = tmp_path / "out"
    out.mkdir()
    (out / "stale.cpp").write_text("")
    (out / "keep.txt").write_text("")
    assert gen.main(["--data-types", str(data), "--out-dir", str(out), "--skip-list", str(skip),
                     "--clean"]) == 0
    assert sorted(os.listdir(out)) == ["game.cpp", "keep.txt", "windef.cpp"]
    game = (out / "game.cpp").read_text()
    assert game.index("---- CAlpha (4 bytes)") < game.index("---- CZed (8 bytes)")
    assert "namespace nocturne_layout_game {" in game and "// Structs : 2" in game
    assert "static_assert(__builtin_offsetof(CZed, field_0x4) == 4," in game
    assert "nooff" not in game and "CZed, )" not in game
    printed = capsys.readouterr().out
    assert "Skipped 22 structs:\n  bad name (non-ident name)\n  S00 (skip-list)" in printed
    assert "  ... and 2 more" in printed


def test_main_without_skips_or_clean(tmp_path, capsys):
    data = tmp_path / "data_types.json"
    data.write_text(json.dumps({"structs": STRUCTS[:1]}))
    (tmp_path / "old.cpp").write_text("")
    assert gen.main(["--data-types", str(data), "--out-dir", str(tmp_path)]) == 0
    assert (tmp_path / "old.cpp").exists() and "Skipped" not in capsys.readouterr().out
    data.write_text(json.dumps({"structs": STRUCTS[3:4]}))
    assert gen.main(["--data-types", str(data), "--out-dir", str(tmp_path)]) == 0
    assert capsys.readouterr().out == "Skipped 1 structs:\n  bad name (non-ident name)\n"


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["gen_struct_layout_checks.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "gen_struct_layout_checks.py"), run_name = "__main__")
    assert exit_info.value.code == 0
