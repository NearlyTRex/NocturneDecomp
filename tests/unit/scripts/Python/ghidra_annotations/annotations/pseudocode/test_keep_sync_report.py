# Local imports
from ghidra_annotations.annotations.pseudocode import keep_sync_report as ksr

KEEP = "// Name: f\n// Address: 1\n// MANUAL RECONSTRUCTION\nint f(void) { return 1; }\n"


def test_the_report_lists_the_keeps_out_of_step(tmp_path, monkeypatch):
    warned = []
    monkeypatch.setattr(ksr, "log_warning", warned.append)
    unit = tmp_path / "src" / "core" / "a.cpp"
    unit.mkdir(parents = True)
    (unit / "f_FUN_00000001.keep.cpp").write_text(KEEP)
    reports = tmp_path / "reports"
    reports.mkdir()
    assert ksr.generate_keep_sync_report(str(tmp_path / "src"), str(reports)) == 1
    text = (reports / ksr.REPORT_NAME).read_text()
    assert text.startswith("# .keep files out of step with the export beside them.\n")
    assert "core/a.cpp/f_FUN_00000001.keep.cpp\n    orphan" in text
    assert warned == ["1 .keep file(s) out of sync with the export; see reports/keep_sync.txt"]


def test_a_clean_tree_says_so(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(ksr, "log_info", logged.append)
    (tmp_path / "f_FUN_00000001.cpp").write_text("// Name: f\n// Address: 1\n")
    (tmp_path / "f_FUN_00000001.keep.cpp").write_text(KEEP)
    assert ksr.generate_keep_sync_report(str(tmp_path), str(tmp_path)) == 0
    assert logged == ["All 1 .keep files match the export"]


def test_a_missing_checker_skips_the_report(tmp_path, monkeypatch):
    warned = []
    monkeypatch.setattr(ksr, "log_warning", warned.append)
    monkeypatch.setattr(ksr, "_CHECKER_PATH", str(tmp_path / "none.py"))
    assert ksr.generate_keep_sync_report(str(tmp_path), str(tmp_path)) == 0
    assert warned == [f"Keep-sync report skipped: {tmp_path / 'none.py'} not found"]
    assert not (tmp_path / ksr.REPORT_NAME).exists()
