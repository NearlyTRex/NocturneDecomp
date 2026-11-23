# Imports
import json
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_bucket, write_json
import map_destructor_pairs as mdp

BASE = 0x1000


class Image:
    """A flat image mapped at BASE; anything outside it has no file bytes."""

    def __init__(self, data):
        self.data = data

    def va2off(self, va):
        off = va - BASE
        return off if 0 <= off < len(self.data) else None


def dcall(dtor, obj):
    return struct.pack("<III", 0, dtor, obj)


def write_program(root, program, records, structs = (), arrays = (), functions = ()):
    """A registry of (dtor, obj) records laid out at BASE, plus the typed globals."""
    data = b"".join(dcall(d, o) for d, o in records)
    calls = [{"addr": f"{BASE + 12 * i:08x}", "name": mdp.DCALL_STRUCT} for i in range(len(records))]
    annotations = root / "annotations"
    write_bucket(annotations, program, "applied_structs", calls + list(structs))
    write_bucket(annotations, program, "applied_arrays", list(arrays))
    write_bucket(annotations, program, "functions", list(functions))
    return Image(data)


@pytest.fixture(name = "world")
def fixture_world(tmp_path, monkeypatch):
    monkeypatch.setattr(mdp, "REPO", str(tmp_path))
    images = {}
    monkeypatch.setattr(mdp.sm, "Image", lambda program: images[program])

    def add(program, *args, **kwargs):
        images[program] = write_program(tmp_path, program, *args, **kwargs)
    return add


def test_typed_globals_read_structs_and_class_arrays(world):
    world("a.exe", [], structs = [{"addr": "0000AA00", "name": "CBox"}, {"addr": "0000ab00"}],
          arrays = [{"addr": "0000aa00", "type": "CLid", "count": 4},       # a struct there wins
                    {"addr": "0000ac00", "type": "CLid", "count": 8},
                    {"addr": "0000ad00", "type": "CLid"},
                    {"addr": "0000ae00", "type": "char", "count": 52}, {"type": "CLid"}])
    assert mdp.typed_globals("a.exe") == {"0000aa00": ("CBox", 1), "0000ac00": ("CLid", 8),
                                          "0000ad00": ("CLid", 1)}


def test_source_names_are_the_exported_function_names(world):
    world("a.exe", [], functions = [{"addr": "0000F000", "name": "CBox_dtor"}, {"addr": "0000f100"}])
    assert mdp.source_names("a.exe") == {"0000f000": "CBox_dtor"}


def test_each_record_names_the_class_its_object_has(world, tmp_path, capsys):
    world("a.exe", [(0xd1, 0xaa00), (0xd2, 0xac00), (0xd3, 0xbeef)],
          structs = [{"addr": "0000aa00", "name": "CBox"}, {"addr": "00000000", "name": mdp.DCALL_STRUCT},
                     {"name": mdp.DCALL_STRUCT}, {"addr": "00009000", "name": mdp.DCALL_STRUCT}],
          arrays = [{"addr": "0000ac00", "type": "CLid", "count": 4}])
    # the record at 00000000 is outside the image, the one at 00009000 too, and 0xbeef is untyped
    assert mdp.destructors("a.exe", verbose = True) == {("CBox", 1): {"000000d1"}, ("CLid", 4): {"000000d2"}}
    assert capsys.readouterr().out == (f"  a.exe: 5 {mdp.DCALL_STRUCT} record(s), "
                                       "3 with an untyped object, 2 class key(s)\n")


def pair_world(world):
    """One class key per outcome, the same in both builds."""
    keys = ["CAgree", "CAmbig", "CConfA", "CConfB", "CNew"]
    structs = [{"addr": f"{0xa000 + 0x100 * i:08x}", "name": k} for i, k in enumerate(keys)]
    obj = {k: 0xa000 + 0x100 * i for i, k in enumerate(keys)}
    world("a.exe", [(0xa1, obj["CAgree"]), (0xa2, obj["CAmbig"]), (0xa3, obj["CConfA"]),
                    (0xa4, obj["CConfB"]), (0xa5, obj["CNew"]), (0xa6, obj["CAmbig"])],
          structs = structs + [{"addr": "0000b000", "name": "COnlyA"}],
          functions = [{"addr": "000000a5", "name": "CNew_dtor"}])
    world("b.exe", [(0xb1, obj["CAgree"]), (0xb2, obj["CAmbig"]), (0xb3, obj["CConfA"]),
                    (0xb4, obj["CConfB"]), (0xb5, obj["CNew"])], structs = structs)


MAPPING = {"pairs": [{"a": "000000A1", "b": "000000B1"}, {"a": "000000a3", "b": "000000ff"},
                     {"a": "000000ee", "b": "000000b4"}]}


def test_the_registry_agrees_conflicts_or_adds_to_a_mapping(world, tmp_path, capsys):
    pair_world(world)
    res = mdp.analyse("a.exe", "b.exe", write_json(tmp_path / "mapping.json", MAPPING))
    assert res["agree"] == [("CAgree", 1, "000000a1", "000000b1")]
    assert res["conflicts"] == [("CConfA", 1, "000000a3", "000000b3", "mapping pairs 000000a3 with 000000ff"),
                                ("CConfB", 1, "000000a4", "000000b4", "mapping pairs 000000b4 with 000000ee")]
    assert res["new"] == [("CNew", 1, "000000a5", "000000b5")]
    assert res["ambiguous"] == [("CAmbig", 1, ["000000a2", "000000a6"], ["000000b2"])]
    assert (res["a_keys"], res["b_keys"]) == (5, 5)
    assert capsys.readouterr().out.startswith("Reading Watcom destructor registries...\n  a.exe: 6")


def test_without_a_mapping_every_single_destructor_is_new(world, capsys):
    pair_world(world)
    res = mdp.analyse("a.exe", "b.exe", None, verbose = False)
    assert [r[0] for r in res["new"]] == ["CAgree", "CConfA", "CConfB", "CNew"]
    assert capsys.readouterr().out == ""


def test_the_report_lists_new_pairs_conflicts_and_ambiguities(world, tmp_path, capsys):
    pair_world(world)
    mdp.report(mdp.analyse("a.exe", "b.exe", None, verbose = False), show = 2)
    out = capsys.readouterr().out
    assert "  NEW               4\n" in out and "    ... and 2 more\n" in out
    assert "CConfB" not in out and "*** CONFLICTS" not in out          # shown: CAgree, CConfA
    assert "ambiguous (1) -- more than one destructor" in out
    assert f"    {'CAmbig':26} x1 a=['000000a2', '000000a6'] b=['000000b2']" in out


def test_an_empty_report_lists_only_the_counts(capsys):
    mdp.report({"agree": [], "new": [], "conflicts": [], "ambiguous": [], "a_keys": 0, "b_keys": 0}, 5)
    out = capsys.readouterr().out
    assert "NEW pairs" not in out and "CONFLICTS" not in out and "more than one" not in out


def test_main_writes_the_new_pairs_named_after_the_source(world, tmp_path, capsys):
    pair_world(world)
    out_pairs = tmp_path / "pairs.json"
    assert mdp.main(["--from-program", "a.exe", "--program", "b.exe", "-q", "--out-pairs", str(out_pairs)]) == 0
    written = json.loads(out_pairs.read_text(encoding = "utf-8"))
    assert (written["from"], written["to"]) == ("a.exe", "b.exe")
    by_a = {p["a"]: p for p in written["pairs"]}
    assert by_a["000000a5"]["name"] == "CNew_dtor" and by_a["000000a1"]["name"] == "FUN_000000a1"
    assert by_a["000000a5"]["evidence"] == ["dtor_rtti:CNew[1]"] and by_a["000000a5"]["confidence"] == 1.0
    assert f"wrote {out_pairs} (4 pairs)" in capsys.readouterr().out


def test_main_fails_on_a_conflict_only_when_asked(world, tmp_path, capsys):
    pair_world(world)
    args = ["--from-program", "a.exe", "--program", "b.exe", "-q",
            "--mapping", write_json(tmp_path / "mapping.json", MAPPING)]
    assert mdp.main(args) == 0
    out = capsys.readouterr().out
    assert f"    {'CConfA':26} x1     dtor 000000a3 <-> 000000b3\n        mapping pairs 000000a3 with 000000ff" in out
    assert mdp.main([*args, "--fail-on-conflict"]) == 2
    assert "FAILING: registry/mapping conflict" in capsys.readouterr().out


def test_the_script_runs_as_main(monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["map_destructor_pairs.py", "--help"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "map_destructor_pairs.py"), run_name = "__main__")
    assert stop.value.code == 0
    assert "Pair destructors across sibling builds" in capsys.readouterr().out
