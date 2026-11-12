# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import sibling_identity as si

FRAME = bytes.fromhex("558bec5dc3")          # push ebp; mov ebp,esp; pop ebp; ret
FRAME_OTHER = bytes.fromhex("558bec5b5dc3")  # an extra pop ebx
SAVES = bytes.fromhex("5356575f5e5bc3")      # push/pop ebx, esi, edi; ret
SHORT = bytes.fromhex("31c0c3")              # xor eax,eax; ret
WIDE = bytes.fromhex("5157595f5ac3")         # push ecx, edi; pop ecx, edi, edx; ret


class Image:
    """A PE stand-in: the bytes each address range holds."""

    def __init__(self, code):
        self.code = code

    def range_bytes(self, start, end):
        data = self.code.get(start)
        return data[:end - start] if data is not None else None


def fn(name, addr, code):
    return {"name": name, "addr": f"{addr:08x}", "body": [{"start": f"{addr:08x}", "end": f"{addr + len(code) - 1:08x}"}]}


PROGRAMS = {
    "a.exe": [("u.cpp_CX_f_FUN_00001000", 0x1000, FRAME), ("u.cpp_FUN_00001010", 0x1010, SAVES),
              ("u.cpp_FUN_00001020", 0x1020, SHORT), ("u.cpp_CX_g_FUN_00001030", 0x1030, FRAME),
              ("u.cpp_FUN_00001040", 0x1040, WIDE)],
    "b.exe": [("u.cpp_CX_f_FUN_00002000", 0x2000, FRAME_OTHER), ("u.cpp_FUN_00002010", 0x2010, SAVES),
              ("u.cpp_FUN_00002020", 0x2020, SHORT), ("u.cpp_CX_g_FUN_00002030", 0x2030, None),
              ("u.cpp_FUN_00002040", 0x2040, WIDE), ("u.cpp_FUN_00002050", 0x2050, WIDE)],
}


def load(program):
    return [fn(name, addr, code or b"\x90") for name, addr, code in PROGRAMS[program]] + [{"name": "no address"}]


def image_of(program):
    return Image({addr: code for _name, addr, code in PROGRAMS[program] if code is not None})


@pytest.fixture(name = "found")
def fixture_found():
    return si.compute(("a.exe", "b.exe"), load, image_of)


def test_a_shared_name_pairs_two_functions_and_says_how_alike_they_are(found):
    f = found["a.exe"]["00001000"]["b.exe"]
    assert (f["addr"], f["by"], f["class"]) == ("00002000", "name", "logic-change")
    assert 0 < f["ratio"] < 1
    assert found["b.exe"]["00002000"]["a.exe"]["addr"] == "00001000"


def test_a_twin_with_no_body_is_paired_without_a_class(found):
    assert found["a.exe"]["00001030"]["b.exe"] == {"addr": "00002030", "by": "name"}
    assert found["b.exe"]["00002030"]["a.exe"] == {"addr": "00001030", "by": "name"}


def test_an_unnamed_body_unique_on_both_sides_is_paired_by_body(found):
    assert found["a.exe"]["00001010"]["b.exe"] == {"addr": "00002010", "by": "body", "class": "identical", "ratio": 1.0}
    assert found["b.exe"]["00002010"]["a.exe"]["addr"] == "00001010"


def test_a_short_or_repeated_body_pairs_nothing(found):
    assert "00001020" not in found["a.exe"] and "00002020" not in found["b.exe"]
    assert "00001040" not in found["a.exe"] and "00002040" not in found["b.exe"]


def test_compute_reads_the_exports_and_the_pes_by_default(monkeypatch):
    monkeypatch.setattr(si.sm, "_load_buckets", lambda program, kind: load(program))
    monkeypatch.setattr(si.sm, "find_program_exe", lambda program: program)
    monkeypatch.setattr(si.df, "Image", image_of)
    assert si.compute(("a.exe", "b.exe"))["a.exe"]["00001010"]["b.exe"]["by"] == "body"


def tree(root):
    unit = root / "core" / "a.cpp"
    unit.mkdir(parents = True)
    for name in ("CX_f_FUN_00001000", "FUN_00001020"):
        (unit / f"{name}.json").write_text(json.dumps({"function": name, "siblings": {"old.exe": {}}}, indent = 2))
    (unit / "notes.json").write_text("{}")
    return root


def test_each_function_json_is_found_by_its_address(tmp_path):
    paths = si.function_jsons(str(tree(tmp_path)))
    assert {a: os.path.basename(p) for a, p in paths.items()} == {
        "00001000": "CX_f_FUN_00001000.json", "00001020": "FUN_00001020.json"}


def test_writing_sets_or_clears_the_key_and_reports_a_change_only_once(tmp_path):
    path = tmp_path / "f.json"
    path.write_text(json.dumps({"x": 1}, indent = 2, sort_keys = True) + "\n")
    assert not si.write_one(str(path), None)
    twins = {"z.exe": {"addr": "1"}, "b.exe": {"addr": "2"}}
    assert si.write_one(str(path), twins)
    assert list(json.loads(path.read_text())["siblings"]) == ["b.exe", "z.exe"]
    assert not path.read_text().endswith("\n")
    assert not si.write_one(str(path), twins)
    assert si.write_one(str(path), {})
    assert json.loads(path.read_text()) == {"x": 1}


def test_annotate_writes_a_programs_tree(tmp_path):
    root = tree(tmp_path)
    twins = {"00001000": {"b.exe": {"addr": "00002000", "by": "name"}}}
    assert si.annotate("a.exe", twins, str(root)) == (2, 2, 1)
    unit = root / "core" / "a.cpp"
    assert json.loads((unit / "CX_f_FUN_00001000.json").read_text())["siblings"] == twins["00001000"]
    assert "siblings" not in json.loads((unit / "FUN_00001020.json").read_text())


def test_main_compares_every_program_and_writes_the_ones_named(tmp_path, monkeypatch, capsys):
    tree(tmp_path / "a.exe" / "pseudocode" / "src")
    monkeypatch.setattr(si.sm, "ANNOTATIONS", str(tmp_path))
    monkeypatch.setattr(si, "compute", lambda: {"a.exe": {"00001000": {"b.exe": {"addr": "1", "by": "name"}}}})
    assert si.main(["a.exe", "tridx7.dll"]) == 0
    out = capsys.readouterr().out.splitlines()
    assert out[0] == "a.exe: 2 function JSON(s), 1 with siblings, 2 rewritten"
    assert out[1].startswith("tridx7.dll: not one of the compared programs (") and out[1].endswith("); skipped")


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["sibling_identity.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "sibling_identity.py"), run_name = "__main__")
    assert exit_info.value.code == 0
