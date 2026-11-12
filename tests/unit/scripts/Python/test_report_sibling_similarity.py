# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
import report_sibling_similarity as rss

BASE = 0x400000
CODE = section_va(BASE, 0)
RET = b"\xc3"
LOAD_8, LOAD_C = b"\x8b\x41\x08" + RET, b"\x8b\x41\x0c" + RET
NOP = b"\x90" + RET


def function(name, offset, code, extra = ()):
    """An exported function at `offset` in the code section; `extra` are further body ranges."""
    ranges = [(CODE + offset, CODE + offset + len(code) - 1), *extra]
    return {"addr": f"{CODE + offset:08x}", "name": name,
            "body": [{"start": f"{s:08x}", "end": f"{e:08x}", "size": e - s + 1} for s, e in ranges]}


# program -> [(name, offset, code)]
PROGRAMS = {
    "nocedit.exe": [("core_a.cpp_CA_same_FUN_00000001", 0x00, LOAD_8),
                    ("core_a.cpp_CA_edited_FUN_00000001", 0x10, LOAD_8),
                    ("core_a.cpp_staticInit_FUN_00000001", 0x20, NOP),
                    ("core_b.cpp_staticInit_FUN_00000001", 0x30, NOP),
                    ("core_a.cpp_FUN_00000001", 0x40, NOP)],
    "nocturne.exe": [("core_a.cpp_CA_same_FUN_00000002", 0x00, LOAD_8),
                     ("core_a.cpp_CA_edited_FUN_00000002", 0x10, NOP),
                     ("core_a.cpp_staticInit_FUN_00000002", 0x20, NOP),
                     ("core_a.cpp_CA_bwonly_FUN_00000002", 0x30, LOAD_8)],
    "bw1.exe": [("core_a.cpp_CA_same_FUN_00000003", 0x00, LOAD_8),
                ("core_a.cpp_CA_edited_FUN_00000003", 0x10, NOP),
                ("core_a.cpp_staticInit_FUN_00000003", 0x20, NOP),
                ("core_a.cpp_CA_bwonly_FUN_00000003", 0x30, LOAD_C),
                # two in one program under one key: neither is matched
                ("core_a.cpp_CA_twice_FUN_00000003", 0x40, NOP),
                ("core_a.cpp_CA_twice_FUN_00000004", 0x50, NOP)],
}


def pe(entries):
    code = bytearray(b"\xcc" * 0x100)
    for _name, offset, data in entries:
        code[offset:offset + len(data)] = data
    return build_sectioned_pe([(".text", bytes(code), SECTION_EXECUTE), (".bss", b"", 0, 0x100)], BASE)


@pytest.fixture(name = "annotations")
def fixture_annotations(tmp_path, monkeypatch):
    monkeypatch.setattr(rss.sm, "ANNOTATIONS", str(tmp_path))
    paths = {}
    for program, entries in PROGRAMS.items():
        functions = [function(*e) for e in entries]
        if program == "bw1.exe":
            # a body outside the file, and one with no body at all
            functions.append({"addr": f"{CODE + 0x90:08x}", "name": "core_a.cpp_CA_nobody_FUN_00000005",
                              "body": [{"start": "00300000", "end": "00300000", "size": 1}]})
            functions.append({"addr": f"{CODE + 0xa0:08x}", "name": "core_a.cpp_CA_bare_FUN_00000006"})
        folder = tmp_path / program / "functions"
        folder.mkdir(parents = True)
        (folder / "functions_bucket_00.json").write_text(json.dumps(functions))
        paths[program] = tmp_path / f"{program}.bin"
        paths[program].write_bytes(pe(entries))
    monkeypatch.setattr(rss.sm, "find_program_exe", lambda program: str(paths[program]))
    return tmp_path


def test_names_shared_by_two_functions_take_their_file():
    assert rss.unit_file("core_fire.cpp") == "fire.cpp"
    assert rss.unit_file("plain.cpp") == "plain.cpp" and rss.unit_file(None) is None
    assert rss.short("bw3.exe") == "bw3" and rss.short("other.exe") == "other.exe"


def test_functions_match_by_name_and_compare_by_body(annotations):
    keys, tokens = rss.load(list(PROGRAMS))
    assert sorted(keys["bw1.exe"]) == ["CA_bare", "CA_bwonly", "CA_edited", "CA_nobody", "CA_same",
                                       "a.cpp:staticInit"]
    assert sorted(keys["nocedit.exe"]) == ["CA_edited", "CA_same", "a.cpp:staticInit", "b.cpp:staticInit"]
    assert tokens["bw1.exe"]["CA_nobody"] is None and tokens["bw1.exe"]["CA_bare"] is None
    pairs = rss.compare(tokens, keys)
    assert pairs["CA_same"][("nocedit.exe", "nocturne.exe")] == ("identical", 1.0)
    assert pairs["CA_edited"][("nocedit.exe", "bw1.exe")][0] == "logic-change"
    assert pairs["CA_bwonly"][("nocturne.exe", "bw1.exe")][0] == "layout-drift"
    assert "CA_nobody" not in pairs
    assert rss.compare({}, {}) == {}


def test_a_games_report_lists_what_changed_from_nocedit_and_between_games(annotations):
    rss.main(list(PROGRAMS))
    text = (annotations / "bw1.exe" / "reports" / "sibling_similarity.txt").read_text().splitlines()
    assert text[0] == "bw1.exe: 6 named functions matched by name across nocedit, nocturne, bw1"
    assert text[1].startswith("  vs nocedit       3 shared, mean ratio ")
    assert "identical 2, logic-change 1" in text[1]
    changed = text.index("-- CHANGED FROM nocedit --  1 (identical ones need no update)")
    assert text[changed + 1].split()[0] == "core_a.cpp_CA_edited_FUN_00000003"
    assert "nocturne 1.000 identical" in text[changed + 1]
    assert "-- NOT IN nocedit --  3" in text
    differ = text.index("-- GAMES DIFFER --  1 differ between the games that have them, 3 the same in every one")
    assert text[differ + 1].split()[0] == "core_a.cpp_CA_bwonly_FUN_00000003"
    assert "nocedit -" in text[differ + 1]
    nobody = [line for line in text if line.startswith("-- NO BODY --")]
    assert nobody[0].startswith("-- NO BODY --  2 ")
    assert "  core_a.cpp_CA_bare_FUN_00000006" in "\n".join(text)
    pairs = json.loads((annotations / "bw1.exe" / "reports" / "sibling_similarity.json").read_text())
    assert pairs["core_a.cpp_CA_same_FUN_00000003"]["nocedit.exe"] == {
        "addr": f"{CODE:08x}", "class": "identical", "ratio": 1.0}
    assert pairs["core_a.cpp_CA_nobody_FUN_00000005"] == {}


def test_nocedits_report_has_no_section_against_itself(annotations):
    rss.main(["nocedit.exe", "nocturne.exe"])
    text = (annotations / "nocedit.exe" / "reports" / "sibling_similarity.txt").read_text()
    assert "CHANGED FROM" not in text and "-- GAMES DIFFER --  0 differ" in text


def test_without_nocedit_only_the_games_are_compared(annotations):
    keys, tokens = rss.load(["nocturne.exe", "bw1.exe"])
    lines = rss.render("bw1.exe", ["nocturne.exe", "bw1.exe"], keys, rss.compare(tokens, keys))
    assert not any(line.startswith("-- CHANGED") for line in lines)
    assert "-- GAMES DIFFER --  1 differ between the games that have them, 3 the same in every one" in lines
    keys, _tokens = rss.load(["bw1.exe", "nocedit.exe"])
    lines = rss.render("bw1.exe", ["bw1.exe", "nocedit.exe"], keys, {k: {} for k in keys["bw1.exe"]})
    assert lines[1] == "  vs nocedit       0 shared, mean ratio 0.000   "


def test_runs_as_a_script(annotations, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["report_sibling_similarity.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "report_sibling_similarity.py"), run_name = "__main__")
    assert exit_info.value.code == 0 and annotations.exists()
