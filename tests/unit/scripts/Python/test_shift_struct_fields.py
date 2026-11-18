# Imports
import argparse
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from boundary_program import JavaIterator
from fake_pyghidra import FakePyghidra
from ghidra_fake import DataType, Structure
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
import shift_struct_fields as ssf

FILLER = "undefined"


class Component:
    def __init__(self, name, data_type, offset, length):
        self.name = name
        self.data_type = data_type
        self.offset = offset
        self.length = length

    def getFieldName(self):
        return self.name

    def getDataType(self):
        return self.data_type

    def getOffset(self):
        return self.offset

    def getLength(self):
        return self.length


# A non-packed Ghidra structure: its fields at their offsets, and each byte between
# or after them an undefined filler component of its own, as getComponents lists them
class FillerStruct(Structure):
    def __init__(self, name, fields, length, packed = False):
        super().__init__(name)
        self.name = name
        self.packed = packed
        self.length = length
        self.components = []
        taken = set()
        for offset, field_name, type_name, size in fields:
            data_type = DataType(type_name, size) if type_name else None
            self.components.append(Component(field_name, data_type, offset, size))
            taken.update(range(offset, offset + size))
        for offset in set(range(length)) - taken:
            self.components.append(Component(None, DataType("undefined1", 1), offset, 1))
        self.components.sort(key = lambda c: c.offset)

    def getName(self):
        return self.name

    def getLength(self):
        return self.length

    def isPackingEnabled(self):
        return self.packed

    def getComponents(self):
        return list(self.components)

    def getComponentAt(self, offset):
        return next((c for c in self.components if c.offset <= offset < c.offset + c.length), None)

    # Removes the component and pulls the rest down, as Ghidra's does
    def deleteAtOffset(self, offset):
        gone = self.getComponentAt(offset)
        self.components.remove(gone)
        for c in self.components:
            if c.offset > offset:
                c.offset -= gone.length
        self.length -= gone.length


def sub(name, hole, length, base = "CDemonActor", tail = (("hp", "int", 4),)):
    """A subclass: `base` of 8 bytes, `hole` undefined bytes, then its own fields."""
    fields, offset = [(0, "base", base, 8)], 8 + hole
    for field_name, type_name, size in tail:
        fields.append((offset, field_name, type_name, size))
        offset += size
    return FillerStruct(name, fields, length)


def test_filler_is_an_undefined_type_or_none():
    s = FillerStruct("S", [(0, "a", None, 1), (1, "b", "-BAD-", 1), (2, "c", "int", 4)], 6)
    assert [ssf.is_undefined(c) for c in s.getComponents()] == [True, True, False]
    nameless = Component("d", DataType(None), 0, 1)
    assert ssf.is_undefined(nameless) is False


def test_the_first_closable_hole_is_found_after_base_or_after_any_field():
    assert ssf.find_hole(FillerStruct("Empty", [], 4), True) is None
    assert ssf.find_hole(sub("CBat", 8, 20), True) == (8, 8, False)
    assert ssf.find_hole(sub("CBat", 0, 20), True) is None                 # base, then a field: closed already
    assert ssf.find_hole(sub("CBat", 0, 20), False) == (12, 8, True)       # trailing filler after hp
    assert ssf.find_hole(FillerStruct("NoBase", [(0, "x", "int", 4), (8, "y", "int", 4)], 12), True) is None
    assert ssf.find_hole(FillerStruct("NoBase", [(0, "x", "int", 4), (8, "y", "int", 4)], 12), False) == (
        4, 4, False)
    assert ssf.find_hole(FillerStruct("Tight", [(0, "x", "int", 4)], 4), False) is None


def test_a_hole_starts_at_base_end_only_where_base_ends():
    assert ssf.starts_at_base_end(sub("CHero", 8, 20), 8)
    assert not ssf.starts_at_base_end(sub("CHero", 8, 20), 12)
    assert not ssf.starts_at_base_end(FillerStruct("NoBase", [(0, "x", "int", 4)], 8), 4)


def test_each_verdict_against_the_recorded_size():
    rtti = {"CExact": 12, "CPartial": 8, "CTrail": 8, "CRefuse": 16}
    assert ssf.plan_struct(sub("CNone", 0, 12), rtti, True) is None
    verdicts = {name: ssf.plan_struct(s, rtti, base_only, shrink)
                for name, s, base_only, shrink in [
                    ("CExact", sub("CExact", 8, 20), True, False),
                    ("CPartial", sub("CPartial", 8, 20), True, False),
                    ("CTrail", sub("CTrail", 0, 20), False, False),
                    ("CRefuse", sub("CRefuse", 8, 20), True, False),
                    ("CHero", sub("CHero", 8, 20), True, True),
                    ("CHeroOff", sub("CHeroOff", 0, 20), False, True),
                    ("CUnknown", sub("CUnknown", 8, 20), True, False)]}
    assert {n: v["verdict"] for n, v in verdicts.items()} == {
        "CExact": "EXACT", "CPartial": "PARTIAL", "CTrail": "TRAILING?", "CRefuse": "REFUSE",
        "CHero": "BASE_SHRINK", "CHeroOff": "NO_RTTI", "CUnknown": "NO_RTTI"}
    assert verdicts["CPartial"]["residual"] == 4 and verdicts["CUnknown"]["residual"] is None
    assert verdicts["CExact"] == {"name": "CExact", "offset": 8, "size": 8, "trailing": False, "current": 20,
                                  "new_len": 12, "rtti": 12, "verdict": "EXACT", "residual": 0}


def test_a_hole_is_closed_a_byte_at_a_time_and_checked():
    s = sub("CBat", 8, 20)
    ssf.close_hole(s, 8, 8)
    assert s.getLength() == 12 and s.getComponentAt(8).getFieldName() == "hp"
    with pytest.raises(RuntimeError, match = "CBat: offset 8 is not undefined filler"):
        ssf.close_hole(s, 8, 1)
    with pytest.raises(RuntimeError, match = "CBat: offset 40 is not undefined filler"):
        ssf.close_hole(s, 40, 1)
    stuck = sub("CStuck", 8, 20)
    stuck.deleteAtOffset = lambda offset: None
    with pytest.raises(RuntimeError, match = "CStuck: deleting at 8 changed length 20 -> 20"):
        ssf.close_hole(stuck, 8, 1)


def test_the_recorded_sizes_come_from_the_exported_type_info(tmp_path, monkeypatch):
    monkeypatch.setattr(ssf, "REPO_ROOT", str(tmp_path))
    assert ssf.load_rtti_sizes("game.exe") == {}
    path = tmp_path / "annotations" / "game.exe" / "type_info"
    path.mkdir(parents = True)
    (path / "type_info.json").write_text(json.dumps({"type_info": [
        {"name": "CBat", "typeinfo_size": 12}, {"name": "CNoSize"}, {"typeinfo_size": 4}]}))
    assert ssf.load_rtti_sizes("game.exe") == {"CBat": 12}


def program(*structs):
    prog = Program()
    prog.getDataTypeManager().getAllStructures = lambda: JavaIterator(structs)
    return prog


def test_candidates_are_non_packed_structures_built_on_the_base():
    keep = sub("CBat", 8, 20)
    other_base = sub("COther", 8, 20, base = "CThing")
    first_not_base = FillerStruct("CFirst", [(0, "hp", "int", 4)], 8)
    packed = FillerStruct("CPacked", [(0, "base", "CDemonActor", 8)], 8, packed = True)
    empty = FillerStruct("CEmpty", [], 4)
    dtm = program(keep, other_base, first_not_base, packed, empty, DataType("int", 4)).getDataTypeManager()
    assert ssf.candidates(dtm, False, "CDemonActor") == [keep]
    assert ssf.candidates(dtm, True, "CDemonActor") == [keep, other_base, first_not_base, empty]


def args_for(**overrides):
    values = {"apply": False, "any_hole": False, "allow_base_shrink": False, "base": "CDemonActor",
              "max_rounds": 8, "program_name": "game.exe"}
    values.update(overrides)
    return argparse.Namespace(**values)


def test_holes_cascade_over_rounds_and_each_structure_is_counted_once(tmp_path, capsys):
    # CBat closes in round 1, after which its own fields leave a second gap that --any-hole
    # closes in round 2; CRefuse is planned in both rounds but is one refusal
    bat = FillerStruct("CBat", [(0, "base", "CDemonActor", 8), (12, "hp", "int", 4), (20, "mp", "int", 4)], 24)
    refuse = sub("CRefuse", 8, 20)
    prog = program(bat, refuse)
    rtti = {"CBat": 16, "CRefuse": 16}
    out = tmp_path / "out.txt"
    counts = ssf.run(prog, args_for(apply = True, any_hole = True), rtti, str(out))
    assert bat.getLength() == 16 and counts == {"EXACT": 1, "REFUSE": 1}
    assert prog.transactions == [["Shift subclass fields", True]] and prog.getDomainFile().saves == 1
    text = out.read_text()
    assert "== round 1: 2 structure(s) with a gap ==" in text and "== round 2: 2 structure(s) with a gap ==" in text
    assert "  PARTIAL   CBat                           24 -> 20     rtti=16     hole 4@8  residual +4" in text
    printed = capsys.readouterr().out
    assert "  EXACT    1\n  REFUSE   1\n  REFUSE means" in printed and "Applied 2 hole(s). Saving..." in printed


def test_a_dry_run_plans_one_round_and_notes_trailing_filler(tmp_path, capsys):
    trail = sub("CTrail", 0, 20)
    prog = program(trail, sub("CNone", 0, 12))
    counts = ssf.run(prog, args_for(any_hole = True), {"CTrail": 8}, str(tmp_path / "out.txt"))
    assert counts == {"TRAILING?": 1} and trail.getLength() == 20 and prog.transactions == []
    out = capsys.readouterr().out
    assert "trailing filler, +4 off -- not closed" in out and "TRAILING? is filler" in out and "[dry-run]" in out


def test_the_rounds_stop_at_the_limit(tmp_path):
    bat = FillerStruct("CBat", [(0, "base", "CDemonActor", 8), (12, "hp", "int", 4), (20, "mp", "int", 4)], 24)
    ssf.run(program(bat), args_for(apply = True, any_hole = True, max_rounds = 1), {"CBat": 16},
            str(tmp_path / "out.txt"))
    assert bat.getLength() == 20


def test_an_apply_that_closes_nothing_saves_nothing(tmp_path, capsys):
    prog = program(sub("CRefuse", 8, 20), sub("CHero", 8, 20))
    counts = ssf.run(prog, args_for(apply = True), {"CRefuse": 16}, str(tmp_path / "out.txt"))
    assert counts == {"REFUSE": 1, "NO_RTTI": 1} and prog.getDomainFile().saves == 0
    assert "[dry-run]" not in capsys.readouterr().out


def test_a_failed_close_rolls_the_whole_pass_back(tmp_path):
    stuck = sub("CBat", 8, 20)
    stuck.deleteAtOffset = lambda offset: None
    prog = program(stuck)
    with pytest.raises(RuntimeError, match = "changed length"):
        ssf.run(prog, args_for(apply = True), {"CBat": 12}, str(tmp_path / "out.txt"))
    assert prog.transactions == [["Shift subclass fields", False]]


def run_main(monkeypatch, tmp_path, prog, *argv, rtti = None):
    fake = FakePyghidra(prog)
    monkeypatch.setitem(sys.modules, "pyghidra", fake)
    monkeypatch.setattr(ssf.os, "_exit", sys.exit)
    monkeypatch.setattr(ssf, "load_rtti_sizes", lambda name: {"CBat": 12} if rtti is None else rtti)
    with pytest.raises(SystemExit) as exited:
        ssf.main([str(tmp_path), "P", "game.exe", "--out", str(tmp_path / "out.txt"), *argv])
    return exited.value.code, fake


def test_main_reports_without_writing(monkeypatch, tmp_path, capsys):
    bat = sub("CBat", 8, 20)
    code, fake = run_main(monkeypatch, tmp_path, program(bat))
    assert code == 0 and fake.closed == 1 and bat.getLength() == 20
    assert "RTTI sizes available for 1 classes" in capsys.readouterr().out


def test_main_snapshots_then_closes_and_saves(monkeypatch, tmp_path):
    calls = []
    monkeypatch.setattr(ssf.subprocess, "call", lambda cmd: calls.append(cmd) or 0)
    bat = sub("CBat", 8, 20)
    prog = program(bat)
    assert run_main(monkeypatch, tmp_path, prog, "--apply")[0] == 0
    assert calls[0][-2:] == ["--tag", "pre-struct-shift"] and bat.getLength() == 12
    assert prog.getDomainFile().saves == 1


def test_a_failed_apply_exits_nonzero_and_still_closes_the_project(monkeypatch, tmp_path, capsys):
    stuck = sub("CBat", 8, 20)
    stuck.deleteAtOffset = lambda offset: None
    code, fake = run_main(monkeypatch, tmp_path, program(stuck), "--apply", "--no-snapshot")
    assert code == 1 and fake.closed == 1
    assert "ERROR: CBat: deleting at 8 changed length 20 -> 20" in capsys.readouterr().out


def test_main_refuses_to_apply_without_a_snapshot(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(ssf.subprocess, "call", lambda cmd: 1)
    code, fake = run_main(monkeypatch, tmp_path, None, "--apply")
    assert code == 1 and fake.opened == []
    assert "Snapshot failed - refusing to mutate." in capsys.readouterr().out


def test_main_refuses_without_recorded_sizes(monkeypatch, tmp_path):
    code, fake = run_main(monkeypatch, tmp_path, None, rtti = {})
    assert code == "no RTTI sizes for game.exe; nothing could be verified, refusing" and fake.opened == []


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["shift_struct_fields.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "shift_struct_fields.py"), run_name = "__main__")
    assert exit_info.value.code == 0
