# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import ArrayDataType, BuiltInDataType, DataTypeComponent, StructureDataType, UnionDataType
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
import refit_embedded_members as rem

INT = BuiltInDataType("int", 4)


def holder(name, length, *fields):
    """A struct of `length` bytes with (offset, type, field name, stale length) fields."""
    s = StructureDataType(name, length = length)
    s.components = [DataTypeComponent(t, n, at, "kept", stale) for at, t, n, stale in fields]
    return s


def build():
    """A base grown from 8 to 12 bytes, embedded with room, without room, and in an array."""
    base = StructureDataType("CBase", length = 12)
    small = StructureDataType("CSmall", length = 4)
    roomy = holder("CRoomy", 20, (0, base, "base", 8), (12, INT, "own", None))
    tight = holder("CTight", 16, (0, base, "base", 8), (8, INT, "own", None))
    past = holder("CPast", 10, (0, base, "base", 8))
    shrank = holder("CShrank", 8, (0, small, "base", 8))
    pair = ArrayDataType(base, 2, 12)
    listed = holder("CListed", 24, (0, pair, "pair", 16), (24, ArrayDataType(base, 0, 12), "more", 0))
    union = UnionDataType("UEither")
    program = Program()
    program.getDataTypeManager().add(INT, base, small, roomy, tight, past, shrank, listed, union)
    return program


def test_each_stale_field_is_refitted_only_with_room():
    program = build()
    rows = {(dt.getName(), c.getFieldName()): (c.getLength(), want, why) for dt, c, want, why in rem.plan(program)}
    assert rows == {("CRoomy", "base"): (8, 12, None), ("CTight", "base"): (8, 12, "own at 0x8 is in the way"),
                    ("CPast", "base"): (8, 12, "12 bytes run past the struct's 10"),
                    ("CShrank", "base"): (8, 4, "its type shrank to 4 bytes"), ("CListed", "pair"): (16, 24, None)}
    assert rem.refit(program, rem.plan(program)) == 2
    roomy = rem.plan(program)
    assert [(dt.getName(), c.getFieldName()) for dt, c, _, _ in roomy] == [
        ("CTight", "base"), ("CPast", "base"), ("CShrank", "base")]
    fitted = program.getDataTypeManager().getDataType("/CRoomy").getComponentAt(0)
    assert (fitted.getLength(), fitted.getFieldName(), fitted.getComment()) == (12, "base", "kept")


@pytest.mark.parametrize("apply, printed", [(False, "[dry-run]"), (True, "refitted 2")])
def test_main_reports_then_applies(apply, printed, tmp_path, monkeypatch, capsys):
    module = FakePyghidra(build())
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    argv = ["--program", "bw.exe", "--project", str(tmp_path)] + (["--apply"] if apply else [])
    assert rem.main(argv) == 0
    out = capsys.readouterr().out
    assert "bw.exe: 5 stale embedded fields, 2 with room" in out and printed in out
    assert "CTight.base (CBase) 8 -> 12: left, own at 0x8 is in the way" in out
    assert module.closed == 1


def lost_bases(tmp_path, monkeypatch):
    """A reference whose CKid, CFull, CStub and CGhost derive from bases; the build lost two."""
    monkeypatch.setattr(rem.sm, "ANNOTATIONS", str(tmp_path))
    folder = tmp_path / "ref.exe" / "data_types"
    folder.mkdir(parents = True)
    derived = [{"name": n, "fields": [{"offset": 0, "name": "base", "type": b}]}
               for n, b in (("CKid", "CBase"), ("CFull", "CBase"), ("CStub", "CPlaceholder"),
                            ("CGhost", "CBase"), ("CEmpty", "CBase"), ("CSmallKid", "CBase"), ("CSame", "CBase"))]
    (folder / "data_types.json").write_text(json.dumps({"structs": derived + [
        {"name": "CBase", "fields": [{"offset": 0, "name": "x", "type": "int"}]}]}))
    program = Program()
    base = StructureDataType("CBase", [(INT, "x"), (INT, "y")])
    kid = holder("CKid", 12, (8, INT, "own", None))
    full = holder("CFull", 12, (0, base, "base", None), (8, INT, "own", None))
    stub = holder("CStub", 12, (8, INT, "own", None))
    small_kid = holder("CSmallKid", 4, (0, INT, "own", None))
    program.getDataTypeManager().add(INT, base, kid, full, stub, small_kid,
                                     StructureDataType("CPlaceholder", length = 1),
                                     StructureDataType("CEmpty", length = 12),
                                     StructureDataType("CSame", length = 8))
    return program


def test_a_lost_base_is_put_back(tmp_path, monkeypatch, capsys):
    program = lost_bases(tmp_path, monkeypatch)
    bases = rem.reference_bases("ref.exe")
    assert bases["CKid"] == "CBase" and "CBase" not in bases
    rows = rem.missing_bases(program, bases)
    assert [(dt.getName(), b.getName()) for dt, b in rows] == [("CKid", "CBase"), ("CSame", "CBase")]
    module = FakePyghidra(program)
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    assert rem.main(["--program", "bw.exe", "--project", str(tmp_path), "--bases-from", "ref.exe", "--apply"]) == 0
    assert "CKid: base CBase (8 bytes) is missing" in capsys.readouterr().out
    kid = program.getDataTypeManager().getDataType("/CKid").getComponentAt(0)
    assert (kid.getFieldName(), kid.getDataType().getName()) == ("base", "CBase")


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["refit_embedded_members.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "refit_embedded_members.py"), run_name = "__main__")
    assert exit_info.value.code == 0
