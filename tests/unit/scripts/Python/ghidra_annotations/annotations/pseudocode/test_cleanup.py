# Imports
import os

# Local imports
from ghidra_annotations.annotations.pseudocode import cleanup


def files_under(root):
    return sorted(os.path.relpath(os.path.join(d, f), root).replace(os.sep, "/")
                  for d, _, fs in os.walk(root) for f in fs)


def make(root, *paths, text = "x"):
    for rel in paths:
        path = root / rel
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(text)


def test_exporter_output_goes_and_hand_work_stays(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(cleanup, "log_info", logged.append)
    pc = tmp_path / "pseudocode"
    make(pc, "src/core/a.cpp/f_FUN_1.cpp", "src/core/a.cpp/f_FUN_1.asm", "src/b.c", "include/x.h",
         "reports/r.json", "p.pcode", "src/core/a.cpp/f_FUN_1.keep.cpp", "notes.txt", "README",
         "shims/s.cpp", "shims/deep/t.h", "main/m.cpp", "checks/c.cpp", "tests/t.cpp", "src/tests/x.cpp")
    make(pc, "src/old_FUN_2", text = "// Name: old_FUN_2\nint x;\n")
    (pc / "src/bin").write_bytes(b"\xff\xfe\x00")
    (pc / "empty" / "nested").mkdir(parents = True)
    (pc / "shims" / "empty").mkdir()
    cleanup.delete_pseudocode(None, str(tmp_path))
    assert files_under(pc) == ["README", "checks/c.cpp", "main/m.cpp", "notes.txt", "shims/deep/t.h",
                               "shims/s.cpp", "src/bin", "src/core/a.cpp/f_FUN_1.keep.cpp", "tests/t.cpp"]
    assert not (pc / "empty").exists() and (pc / "shims" / "empty").is_dir()
    assert "Deleted file: src/old_FUN_2" in logged and "Removed empty directory: empty/nested" in logged
    assert "Deleted file: src/tests/x.cpp" in logged     # protected only at the top
    assert logged[-1] == "Deleted 8 files"


def test_nothing_to_delete_without_a_pseudocode_directory(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(cleanup, "log_info", logged.append)
    cleanup.delete_pseudocode(None, str(tmp_path))
    assert logged == ["No pseudocode directory found - nothing to delete"]


def test_a_file_or_directory_that_cannot_go_is_logged_and_skipped(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(cleanup, "log_info", logged.append)
    make(tmp_path / "pseudocode", "src/a.cpp")
    (tmp_path / "pseudocode" / "gone").mkdir()

    def refuse(path):
        raise OSError("busy")
    monkeypatch.setattr(os, "remove", refuse)
    monkeypatch.setattr(os, "rmdir", refuse)
    cleanup.delete_pseudocode(None, str(tmp_path))
    assert "Failed to delete file a.cpp: busy" in logged and logged[-1] == "Deleted 0 files"
    assert (tmp_path / "pseudocode" / "gone").is_dir()


def test_an_unreadable_extensionless_file_is_not_ours(tmp_path):
    assert cleanup._is_exporter_output(str(tmp_path)) is False
