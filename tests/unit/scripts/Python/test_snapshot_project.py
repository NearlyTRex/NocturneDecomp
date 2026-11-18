# Imports
import os
import runpy
import sys
import zipfile

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import snapshot_project as sp

COMMENT = "Ghidra archive file for Proj project."


@pytest.fixture(name = "project")
def fixture_project(tmp_path):
    """A project dir holding Proj.gpr and a Proj.rep with the parts Ghidra archives and skips."""
    (tmp_path / "Proj.gpr").write_text("gpr", encoding = "utf-8")
    rep = tmp_path / "Proj.rep"
    (rep / "idata" / "00").mkdir(parents = True)
    (rep / "idata" / "00" / "b.prp").write_text("b", encoding = "utf-8")
    (rep / "idata" / "00" / "a.db").write_text("a", encoding = "utf-8")
    (rep / "idata" / "00" / "x.ulock").write_text("lock", encoding = "utf-8")
    (rep / "user").mkdir()
    (rep / "user" / "u.prp").write_text("u", encoding = "utf-8")
    (rep / "project.prp").write_text("top", encoding = "utf-8")
    return tmp_path


def test_entries_follow_ghidras_archive_layout(project):
    entries = sp.collect_entries(str(project / "Proj.gpr"), str(project / "Proj.rep"), "Proj")
    assert [arc for arc, _ in entries] == ["Proj.gpr", "JAR_FORMAT", "idata/00/a.db", "idata/00/b.prp",
                                           "user/u.prp"]
    assert entries[1][1] is None and entries[0][1] == str(project / "Proj.gpr")


def test_a_written_archive_verifies_and_holds_the_marker(project, tmp_path):
    entries = sp.collect_entries(str(project / "Proj.gpr"), str(project / "Proj.rep"), "Proj")
    out = str(tmp_path / "snap.gar")
    sp.write_archive(out, entries, COMMENT)
    assert not sp.verify_archive(out, entries, COMMENT)
    with zipfile.ZipFile(out) as zf:
        assert zf.read("JAR_FORMAT") == b"" and zf.read("user/u.prp") == b"u"


def test_verification_names_every_problem(tmp_path):
    out = str(tmp_path / "bad.gar")
    with zipfile.ZipFile(out, "w", zipfile.ZIP_STORED) as zf:
        zf.writestr("data.bin", b"hello world")
        zf.comment = b"other"
    path = tmp_path / "bad.gar"
    path.write_bytes(path.read_bytes().replace(b"hello world", b"jello world"))
    want = [("Proj.gpr", "x"), ("JAR_FORMAT", None), ("data.bin", "y"), ("gone.db", "z")]
    assert sp.verify_archive(out, want, COMMENT) == [
        "CRC failure on entry: data.bin", "missing JAR_FORMAT marker", "missing Proj.gpr marker file",
        "3 ent(y/ies) missing from archive", "archive comment mismatch"]
    assert sp.verify_archive(out, [("data.bin", "y")], "other") == ["CRC failure on entry: data.bin",
                                                                   "missing JAR_FORMAT marker"]


def test_the_default_name_takes_a_tag_and_never_overwrites(tmp_path):
    first = sp.choose_out_path(str(tmp_path), "Proj", "2026_01_02", "pre-x")
    assert first == str(tmp_path / "Proj_2026_01_02_pre-x.gar")
    (tmp_path / "Proj_2026_01_02.gar").write_text("", encoding = "utf-8")
    (tmp_path / "Proj_2026_01_02-2.gar").write_text("", encoding = "utf-8")
    assert sp.choose_out_path(str(tmp_path), "Proj", "2026_01_02", None) == str(tmp_path / "Proj_2026_01_02-3.gar")


def test_inside_matches_the_folder_and_below_only(tmp_path):
    assert sp.inside(str(tmp_path / "a" / "b"), str(tmp_path / "a"))
    assert sp.inside(str(tmp_path / "a"), str(tmp_path / "a"))
    assert not sp.inside(str(tmp_path / "ab"), str(tmp_path / "a"))


def test_main_snapshots_to_the_dated_default(project, capsys):
    (project / "Proj.lock").write_text("", encoding = "utf-8")
    sp.main([str(project), "Proj", "--date", "2026_01_02", "--tag", "pre"])
    out = capsys.readouterr().out
    assert "NOTE: Proj.lock present" in out and "Snapshot OK" in out
    assert "  3 file entrie(s) + JAR_FORMAT marker + Proj.gpr" in out
    assert zipfile.is_zipfile(project / "Proj_2026_01_02_pre.gar")


def test_main_uses_today_without_a_date(project):
    sp.main([str(project), "Proj"])
    assert len(list(project.glob("Proj_*.gar"))) == 1


@pytest.mark.parametrize("missing", ["Proj.gpr", "Proj.rep"])
def test_main_stops_when_the_project_is_incomplete(project, missing, capsys):
    target = project / missing
    if target.is_dir():
        target.rename(project / "moved.rep")
    else:
        target.unlink()
    with pytest.raises(SystemExit) as exit_info:
        sp.main([str(project), "Proj"])
    assert exit_info.value.code == 1 and "not found" in capsys.readouterr().out


def test_main_refuses_an_existing_out_unless_forced(project, capsys):
    out = project / "mine.gar"
    out.write_text("old", encoding = "utf-8")
    with pytest.raises(SystemExit) as exit_info:
        sp.main([str(project), "Proj", "--out", str(out)])
    assert exit_info.value.code == 1 and "already exists" in capsys.readouterr().out
    sp.main([str(project), "Proj", "--out", str(out), "--force"])
    assert zipfile.is_zipfile(out)


def test_main_refuses_an_out_inside_the_database(project, capsys):
    with pytest.raises(SystemExit) as exit_info:
        sp.main([str(project), "Proj", "--out", str(project / "Proj.rep" / "user" / "snap.gar")])
    assert exit_info.value.code == 1 and "is inside" in capsys.readouterr().out
    assert not (project / "Proj.rep" / "user" / "snap.gar").exists()


def test_main_exits_2_when_verification_fails(project, monkeypatch, capsys):
    monkeypatch.setattr(sp, "verify_archive", lambda *_: ["archive comment mismatch"])
    with pytest.raises(SystemExit) as exit_info:
        sp.main([str(project), "Proj", "--out", str(project / "x.gar")])
    out = capsys.readouterr().out
    assert exit_info.value.code == 2 and "   - archive comment mismatch" in out


def test_runs_as_a_script(project, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["snapshot_project.py", str(project), "Proj", "--out", str(project / "s.gar")])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "snapshot_project.py"), run_name = "__main__")
    assert zipfile.is_zipfile(project / "s.gar")
