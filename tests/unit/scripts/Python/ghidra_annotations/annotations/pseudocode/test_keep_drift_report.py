# Local imports
from ghidra_annotations.annotations.pseudocode import keep_drift_report as kdr


def test_the_report_is_written_beside_the_others_and_counts_the_redundant(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(kdr, "log_info", logged.append)
    unit = tmp_path / "src" / "core" / "a.cpp"
    unit.mkdir(parents = True)
    (unit / "f_FUN_00000001.cpp").write_text("int f(void)\n{\n  return 1;\n}\n")
    (unit / "f_FUN_00000001.keep.cpp").write_text("// MANUAL RECONSTRUCTION\nint f(void) { return 1; }\n")
    (unit / "g_FUN_00000002.cpp").write_text("int g(void)\n{\n  return 1;\n}\n")
    (unit / "g_FUN_00000002.keep.cpp").write_text("int g(void)\n{\n  return 1;\n}\n")
    reports = tmp_path / "reports"
    reports.mkdir()
    assert kdr.generate_keep_drift_report(str(tmp_path / "src"), str(reports)) == 1
    text = (reports / kdr.REPORT_NAME).read_text()
    assert text.startswith("# How far each .keep is from the export beside it.")
    assert "2 .keep files compared" in text and "core/a.cpp/g_FUN_00000002.keep.cpp" in text
    assert logged == ["1 of 2 .keep files are now identical to the export; see reports/keep_drift.txt"]


def test_a_missing_checker_skips_the_report(tmp_path, monkeypatch):
    warned = []
    monkeypatch.setattr(kdr, "log_warning", warned.append)
    assert kdr.generate_keep_drift_report(str(tmp_path), str(tmp_path), str(tmp_path / "none.py")) == 0
    assert warned == [f"Keep-drift report skipped: {tmp_path / 'none.py'} not found"]
    assert not (tmp_path / kdr.REPORT_NAME).exists()
