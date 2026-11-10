# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidraPrograms
from ghidra_fake import BuiltInDataType, EnumDataType, StructureDataType, TypedefDataType
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
import import_datatypes as idt


class RecordingDtm:
    """Wraps a fake DTM to record the conflict handler each add used."""

    def __init__(self, dtm):
        self.dtm = dtm
        self.handlers = []

    def __getattr__(self, name):
        return getattr(self.dtm, name)

    def addDataType(self, data_type, handler):
        self.handlers.append(str(handler))
        if data_type.getName() == "SBroken":
            raise ValueError("refused")
        self.dtm.add(data_type)
        if data_type.getName() == "SClash":
            self.dtm.add(StructureDataType("CDemonActor.conflict", length = 4))
        return data_type


def program_with(*types):
    program = Program()
    program.getDataTypeManager().add(*types)
    program.data_type_manager = RecordingDtm(program.getDataTypeManager())
    return program


INFO = StructureDataType("SInteractionInfo", length = 16)


def source():
    return program_with(INFO, TypedefDataType("STwo", BuiltInDataType("int", 4)),
                        StructureDataType("STwo", length = 8), EnumDataType("EOnly", 4),
                        BuiltInDataType("plain", 4), StructureDataType("CDemonActor", length = 340),
                        StructureDataType("SClash", length = 4), StructureDataType("SBroken", length = 4))


def test_a_composite_is_preferred_over_a_same_named_typedef_or_enum():
    index = idt.build_index(source().getDataTypeManager())
    assert isinstance(idt.pick_type(index["STwo"]), StructureDataType)
    assert isinstance(idt.pick_type(index["EOnly"]), EnumDataType)
    assert idt.pick_type(index["plain"]).getName() == "plain"
    assert idt.pick_type(None) is None


def test_each_name_is_imported_skipped_or_reported_missing():
    rows = idt.plan(idt.build_index(source().getDataTypeManager()), ["SInteractionInfo", "CDemonActor", "SNone"],
                    {"CDemonActor"})
    assert [(n, a) for n, a, _ in rows] == [("SInteractionInfo", "IMPORT"), ("CDemonActor", "ALREADY-IN-DST"),
                                            ("SNone", "NOT-IN-SRC")]


def test_an_import_keeps_the_destinations_own_types():
    dst = program_with(StructureDataType("CDemonActor", length = 344))
    assert idt.import_types(dst, [INFO]) == ["SInteractionInfo"]
    assert dst.getDataTypeManager().handlers == ["KEEP_HANDLER"]
    assert dst.transactions == [["Import data types", True]]


def test_a_failed_import_rolls_back():
    dst = program_with()
    with pytest.raises(ValueError):
        idt.import_types(dst, [StructureDataType("SBroken", length = 4)])
    assert dst.transactions == [["Import data types", False]]


def run(monkeypatch, tmp_path, *argv):
    dst = program_with(StructureDataType("CDemonActor", length = 344))
    module = FakePyghidraPrograms({"src.exe": source(), "dst.exe": dst})
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    assert idt.main([str(tmp_path), "P", "src.exe", "dst.exe", *argv]) == 0
    return module, dst


def test_main_reports_then_imports_and_saves(monkeypatch, tmp_path, capsys):
    module, dst = run(monkeypatch, tmp_path, "SInteractionInfo,CDemonActor,SNone")
    out = capsys.readouterr().out
    assert "  IMPORT         1" in out and "  NOT-IN-SRC     1" in out
    assert "  IMPORT         SInteractionInfo  (/SInteractionInfo, 16 bytes)" in out
    assert "  NOT-IN-SRC     SNone\n" in out
    assert "[dry-run]" in out and dst.getDomainFile().saves == 0
    assert module.opened == [(str(tmp_path), "P"), "/src.exe", "/dst.exe"] and module.closed == 1

    _module, dst = run(monkeypatch, tmp_path, "SInteractionInfo", "--apply")
    out = capsys.readouterr().out
    assert "Imported 1 top-level type(s); the destination gained 1:\n  + SInteractionInfo" in out
    assert "WARNING" not in out and dst.getDomainFile().saves == 1


def test_main_warns_of_conflict_copies_and_reads_a_names_file(monkeypatch, tmp_path, capsys):
    names = tmp_path / "types.txt"
    names.write_text("SClash  # brings a duplicate along\n\n# nothing\n")
    run(monkeypatch, tmp_path, "--types-file", str(names), "--apply")
    assert "WARNING: 1 conflict type(s) created: CDemonActor.conflict" in capsys.readouterr().out


def test_main_with_nothing_new_saves_nothing(monkeypatch, tmp_path, capsys):
    _module, dst = run(monkeypatch, tmp_path, "CDemonActor", "--apply")
    assert dst.getDomainFile().saves == 0
    assert "Imported" not in capsys.readouterr().out


def test_a_bulk_plan_lists_only_what_is_missing(capsys):
    rows = [(f"S{i}", "IMPORT", INFO) for i in range(40)] + [("SGone", "NOT-IN-SRC", None)]
    idt.report(rows, "src.exe")
    out = capsys.readouterr().out
    assert "  not found in src.exe: SGone\n" in out and "S12" not in out
    idt.report([(f"S{i}", "IMPORT", INFO) for i in range(41)], "src.exe")
    assert "not found" not in capsys.readouterr().out
    idt.report([(f"S{i}", "NOT-IN-SRC", None) for i in range(41)], "src.exe")
    assert capsys.readouterr().out.rstrip().endswith(" ...")


def test_no_names_is_an_error(monkeypatch, tmp_path):
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidraPrograms({}))
    with pytest.raises(SystemExit) as exit_info:
        idt.main([str(tmp_path), "P", "src.exe", "dst.exe"])
    assert exit_info.value.code == 2


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["import_datatypes.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "import_datatypes.py"), run_name = "__main__")
    assert exit_info.value.code == 0
