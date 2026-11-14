# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import report_bad_instructions as rbi


def bookmark(addr, comment, cat = rbi.CATEGORY):
    return {"addr": addr, "cat": cat, "comment": comment, "type": "Error"}


def fn(name, start, end):
    return {"addr": start, "name": name, "body": [{"start": start, "end": end}]}


FUNCTIONS = [fn("u.cpp_CA_f_FUN_00001000", "00001000", "000010ff"),
             fn("u.cpp_CB_g_FUN_00001100", "00001100", "000011ff"),
             fn("crt_string.c_strstr_FUN_00002000", "00002000", "000020ff")]
ASM_A = """; ****
; void f(void)
    PUSH EBX                            ; 00001000
        ;   Label: LAB_00001004
    MOV EAX,EBX                         ; 00001004 | DAT_x
"""
ASM_STRSTR = "    TEST AX,0xcf89                      ; 00002010\n"
BOOKMARKS = [
    bookmark("00001004", "Failed to disassemble at 00001004 due to conflicting instruction at 00001006"),
    bookmark("00001010", "Failed to disassemble at 00001010 due to conflicting data at 00001014"),
    bookmark("000010fc", "Failed to disassemble at 000010fc due to conflicting instruction at 00001100"),
    bookmark("00002012", "Failed to disassemble at 00002012 due to conflicting instruction (flow from 00002012)"),
    bookmark("00001150", "Failed to disassemble somewhere"),
    bookmark("00009000", "Failed to disassemble at 00009000 due to conflicting instruction at 00009002"),
    bookmark("00000010", "Found code", cat = "Found Code"),
]
XREFS = [{"from": "00002008", "to": "00002012", "type": "CONDITIONAL_JUMP"},
         {"from": "00009100", "to": "00002012", "type": "CONDITIONAL_JUMP"},
         {"from": "00002020", "to": "00002012", "type": "READ"},
         {"from": "00002030", "to": "00002013", "type": "CONDITIONAL_JUMP"}]
ASM_PATHS = {0x1000: "a.asm", 0x2000: "strstr.asm"}
TEXTS = {"a.asm": ASM_A, "strstr.asm": ASM_STRSTR}


def test_the_comment_gives_the_conflict_or_the_flow_start():
    assert rbi.parse_conflict(BOOKMARKS[0]["comment"]) == ("instruction", 0x1006)
    assert rbi.parse_conflict(BOOKMARKS[1]["comment"]) == ("data", 0x1014)
    assert rbi.parse_conflict(BOOKMARKS[3]["comment"]) == ("instruction", 0x2012)
    assert rbi.parse_conflict("Found code") is None
    assert rbi.parse_conflict(None) is None


def test_only_instruction_lines_count_as_starts():
    assert rbi.instruction_starts(ASM_A) == {0x1000, 0x1004}
    assert rbi.instruction_starts("    RET\n\n") == set()


def test_a_function_owns_the_addresses_of_its_body():
    ranges = rbi.Ranges(FUNCTIONS + [{"addr": "00003000", "name": "empty"}])
    assert ranges.owner(0x10ff) == 0x1000
    assert ranges.owner(0x1100) == 0x1100
    assert ranges.owner(0x2100) is None
    assert ranges.owner(0x500000) is None
    assert ranges.owner(0x10) is None
    assert ranges.name(0x1100) == "u.cpp_CB_g_FUN_00001100"
    assert ranges.name(None) is None


def test_every_bookmark_gets_the_most_telling_verdict():
    rows = rbi.analyse(BOOKMARKS, FUNCTIONS, XREFS, ASM_PATHS, TEXTS.get)
    got = {r["addr"]: r["verdict"] for r in rows}
    assert got == {0x1004: "STALE", 0x1010: "BAD DECODE", 0x10fc: "ENTRY AT CONFLICT",
                   0x2012: "MID-INSTRUCTION", 0x1150: "NO LISTING", 0x9000: "OUTSIDE FUNCTIONS"}
    assert [r["verdict"] for r in rows] == list(rbi.VERDICTS)
    strstr = next(r for r in rows if r["addr"] == 0x2012)
    assert strstr["sources"] == [(0x2008, "CONDITIONAL_JUMP", "crt_string.c_strstr_FUN_00002000"),
                                 (0x9100, "CONDITIONAL_JUMP", None)]
    unparsed = next(r for r in rows if r["addr"] == 0x1150)
    assert (unparsed["what"], unparsed["conflict"]) == ("?", 0x1150)


def test_the_report_counts_each_verdict_and_names_the_other_function():
    lines = rbi.render("game.exe", rbi.analyse(BOOKMARKS, FUNCTIONS, XREFS, ASM_PATHS, TEXTS.get))
    assert lines[0] == ("game.exe: 6 failed-to-disassemble bookmark(s), 1 BAD DECODE, 1 ENTRY AT CONFLICT, "
                        "1 OUTSIDE FUNCTIONS, 1 NO LISTING, 1 MID-INSTRUCTION, 1 STALE")
    at = lines.index("000010fc  ENTRY AT CONFLICT  conflicting instruction at 00001100")
    assert lines[at + 1:at + 3] == ["  in        u.cpp_CA_f_FUN_00001000", "  conflict  u.cpp_CB_g_FUN_00001100"]
    assert "  from      00009100 CONDITIONAL_JUMP  -" in lines
    assert rbi.render("empty.exe", []) == ["empty.exe: 0 failed-to-disassemble bookmark(s)"]


@pytest.fixture(name = "annotations")
def fixture_annotations(tmp_path, monkeypatch):
    monkeypatch.setattr(rbi.sm, "ANNOTATIONS", str(tmp_path))
    root = tmp_path / "game.exe"
    for kind, records in (("bookmarks", BOOKMARKS), ("functions", FUNCTIONS), ("cross_references", XREFS)):
        (root / kind).mkdir(parents = True)
        (root / kind / f"{kind}_bucket_00.json").write_text(json.dumps(records))
    unit = root / "pseudocode" / "src" / "u.cpp"
    unit.mkdir(parents = True)
    (unit / "CA_f_FUN_00001000.asm").write_text(ASM_A)
    (unit / "notes.asm").write_text("")
    crt = root / "pseudocode" / "src" / "crt" / "string.c"
    crt.mkdir(parents = True)
    (crt / "strstr_FUN_00002000.asm").write_text(ASM_STRSTR)
    return tmp_path


def test_listings_are_found_by_their_address_suffix(annotations):
    found = rbi.listings(str(annotations / "game.exe" / "pseudocode" / "src"))
    assert {a: os.path.basename(p) for a, p in found.items()} == {
        0x1000: "CA_f_FUN_00001000.asm", 0x2000: "strstr_FUN_00002000.asm"}


def test_main_writes_each_programs_report(annotations, capsys):
    rbi.main(["game.exe"])
    out = capsys.readouterr().out
    assert out.startswith("game.exe: 6 failed-to-disassemble bookmark(s)")
    text = (annotations / "game.exe" / "reports" / rbi.REPORT).read_text()
    assert "00001004  STALE" in text and "00002012  MID-INSTRUCTION" in text


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["report_bad_instructions.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "report_bad_instructions.py"), run_name = "__main__")
    assert exit_info.value.code == 0
