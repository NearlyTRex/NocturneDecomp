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
from sibling_images import function, install_programs
import identical_type_users as itu
import sibling_match

BASE = 0x400000
CODE = section_va(BASE, 0)
RET = b"\xc3"
LOAD_8, LOAD_C, LOAD_4, LOAD_10 = b"\x8b\x41\x08", b"\x8b\x41\x0c", b"\x8b\x41\x04", b"\x8b\x41\x10"
LOAD_EDX_C, PUSH_1 = b"\x8b\x51\x0c", b"\x6a\x01"
OUTSIDE = 0x900000
ABS_LOAD = b"\xa1" + (CODE + 0x200).to_bytes(4, "little")


def declares(kind):
    return {"vars": {"params": [{"name": "p", "type": kind}], "locals": [{"name": "l", "type": "int"}]},
            "ret": "void"}


# (offset, source bytes, target bytes or None when unpaired, extra record fields)
FUNCTIONS = [
    (0x00, LOAD_8 + LOAD_EDX_C + RET, LOAD_8 + LOAD_EDX_C + RET, {}),   # SKeep agrees twice
    (0x10, LOAD_8 + RET, LOAD_C + RET, {}),                              # SMoved contradicts
    (0x20, LOAD_4 + RET, PUSH_1 + RET, {}),                              # SKeep rewritten
    (0x30, LOAD_8 + RET, None, {}),                                      # SKeep unpaired
    (0x40, ABS_LOAD + RET, ABS_LOAD + RET, {}),                          # SAbs: a global, skipped
    (0x50, LOAD_8 + RET, LOAD_8 + RET, declares("SDecl *")),            # identical declaring body
    (0x60, LOAD_8 + RET, LOAD_10 + RET, declares("const SDecl *[2]")),  # differing declaring body
    (0x70, LOAD_8 + RET, LOAD_8 + RET, declares("SDecl")),              # identical again
    (0x80, LOAD_8 + RET, None, declares("SDecl *")),                    # declaring, unpaired
    (0x90, ABS_LOAD + LOAD_8 + RET, ABS_LOAD + LOAD_8 + RET, {}),        # SKeep agrees past a global
]


def code(which):
    data = bytearray(b"\xcc" * 0x400)
    for offset, src, tgt, _ in FUNCTIONS:
        body = src if which == "src" else tgt
        if body is not None:
            data[offset:offset + len(body)] = body
    data[0xa0:0xa3] = LOAD_8
    return bytes(data)


def records(which):
    out = [function(CODE + offset, f"core_x.cpp_f{offset:x}_FUN_{CODE + offset:08x}",
                    size = len(src if which == "src" else tgt), **extra)
           for offset, src, tgt, extra in FUNCTIONS if which == "src" or tgt is not None]
    # Functions whose body the image does not hold, paired to each other and to nothing
    out.append(function(OUTSIDE, "core_x.cpp_gone_FUN_00900000", **declares("SDecl *")))
    out.append(function(OUTSIDE + 0x10, "core_x.cpp_gone2_FUN_00900010", **declares("SDecl *")))
    # One whose body runs on from the image into bytes it does not hold
    split = function(CODE + 0xa0, f"core_x.cpp_split_FUN_{CODE + 0xa0:08x}", size = 4)
    split["body"].append({"start": f"{OUTSIDE + 0x20:08x}", "end": f"{OUTSIDE + 0x2f:08x}"})
    out.append(split)
    return out


@pytest.fixture(name = "annotations")
def fixture_annotations(monkeypatch, tmp_path):
    programs = {name: (build_sectioned_pe([(".text", code(which), SECTION_EXECUTE)], BASE), records(which))
                for name, which in (("nocedit.exe", "src"), ("bw.exe", "tgt"))}
    annotations = install_programs(monkeypatch, tmp_path, programs)
    folder = annotations / "bw.exe" / "data_types"
    folder.mkdir(parents = True)
    stubs = [{"name": n, "len": 1, "fields": []} for n in ("SKeep", "SMoved", "SAbs", "SDecl")]
    (folder / "data_types.json").write_text(json.dumps({"structs": stubs + [
        {"name": "SNone", "len": 0}, {"name": "SFull", "len": 4, "fields": [{"offset": 0}]}]}))
    reports = annotations / "bw.exe" / "reports"
    reports.mkdir()
    pairs = [{"a": f"{CODE + o:08X}", "b": f"{CODE + o:08x}"} for o, _, tgt, _ in FUNCTIONS if tgt is not None]
    pairs += [{"a": f"{OUTSIDE:08x}", "b": f"{OUTSIDE:08x}"}, {"a": f"{OUTSIDE + 0x10:08x}", "b": "00000001"},
              {"a": f"{CODE + 0xa0:08x}", "b": f"{CODE + 0xa0:08x}"}]
    (reports / "sibling_mapping_from_nocedit.json").write_text(json.dumps({"pairs": pairs}))
    return annotations


TYPED = {f"{CODE:08x}": [["SKeep", 8]], f"{CODE + 3:08x}": [["SKeep", 12], ["SMoved", 12], ["SFull", 0]],
         f"{CODE + 0x95:08x}": [["SKeep", 8]], f"{CODE + 0xa0:08x}": [["SKeep", 8]],
         f"{OUTSIDE + 0x20:08x}": [["SKeep", 8]],
         f"{CODE + 0x10:08x}": [["SMoved", 8]], f"{CODE + 0x20:08x}": [["SKeep", 4]],
         f"{CODE + 0x30:08x}": [["SKeep", 8]], f"{CODE + 0x40:08x}": [["SAbs", 0]],
         f"{CODE + 0x300:08x}": [["SKeep", 0]], f"{CODE + 0x50:08x}": [["SFull", 0]]}


def test_typed_accesses_and_declaring_bodies_are_judged(annotations):
    src, tgt = sibling_match.Image("nocedit.exe"), sibling_match.Image("bw.exe")
    names = itu.placeholders("bw.exe")
    assert names == {"SKeep", "SMoved", "SAbs", "SDecl", "SNone"}
    verdicts = itu.judge(src, tgt, TYPED, names, itu.pairing("bw.exe", "nocedit.exe"))
    keep, moved, decl = verdicts["SKeep"], verdicts["SMoved"], verdicts["SDecl"]
    assert (keep["agree"], keep["contradict"], keep["rewritten"], keep["unpaired"]) == (3, 0, 2, 1)
    assert (moved["agree"], moved["contradict"], moved["moved"]) == (1, 1, [f"{CODE + 0x10:08x}: 0x8 -> 0xc"])
    assert (decl["identical"], decl["differing"], decl["agree"]) == (2, 1, 0)
    assert "SAbs" not in verdicts
    assert itu.unchanged(verdicts, min_sightings = 2) == ["SDecl", "SKeep"]
    assert itu.unchanged(verdicts, min_sightings = 4, min_identical = 3) == []


def test_a_type_name_is_read_through_qualifiers_pointers_and_arrays():
    assert [itu.base_name(t) for t in ("const SPart *[4]", "SPart", None)] == ["SPart", "SPart", ""]


def test_main_writes_the_names_and_the_counts(annotations, tmp_path, capsys):
    typed = tmp_path / "typed.json"
    typed.write_text(json.dumps({"accesses": TYPED}))
    out, report = tmp_path / "same.txt", tmp_path / "report.json"
    assert itu.main(["--typed", str(typed), "--program", "bw.exe", "--min-sightings", "2",
                     "--out", str(out), "--report", str(report)]) == 0
    assert out.read_text() == "SDecl\nSKeep\n"
    assert json.loads(report.read_text())["SKeep"]["agree"] == 3
    printed = capsys.readouterr().out
    assert "bw.exe: 5 placeholders, 3 reached by its code, 2 unchanged" in printed
    assert itu.main(["--typed", str(typed), "--program", "bw.exe"]) == 0


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["identical_type_users.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "identical_type_users.py"), run_name = "__main__")
    assert exit_info.value.code == 0
