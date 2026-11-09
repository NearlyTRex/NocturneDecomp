# Imports
import os
import runpy
import struct
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import extract_pod


def pod2(files, description = b"Test archive", audit = 3):
    """A POD2 archive holding `files` ({windows path: bytes}) in order."""
    names = b"".join(name.encode("latin-1") + b"\0" for name in files)
    data_start = 0x60 + 0x14 * len(files) + len(names)
    directory, name_offset, offset = b"", 0, data_start
    for name, data in files.items():
        directory += struct.pack("<IIIII", name_offset, len(data), offset, 0, 0)
        name_offset += len(name) + 1
        offset += len(data)
    header = b"POD2" + struct.pack("<I", 0) + description.ljust(80, b"\0") + struct.pack("<ii", len(files), audit)
    return header + directory + names + b"".join(files.values())


FILES = {"ART\\A.ACT": b"art", "MODELS\\A.ACT": b"model", "..\\C:\\..\\EVIL.TXT": b"x", "TOP.SKL": b"bones"}


@pytest.fixture(name = "archive")
def fixture_archive(tmp_path):
    path = tmp_path / "test.pod"
    path.write_bytes(pod2(FILES))
    return str(path)


def test_a_pod2_archive_lists_its_entries(archive):
    description, audit, entries, _ = extract_pod.read_pod(archive)
    assert (description, audit) == ("Test archive", 3)
    assert [(e["name"], e["size"]) for e in entries] == [(n, len(d)) for n, d in FILES.items()]


@pytest.mark.parametrize("blob, message", [
    (b"POD3" + bytes(0x60), "not a POD2 archive"),
    (b"POD2" + bytes(0x50), "truncated POD2 archive"),
    (pod2({"A": b"1"})[:-3], "truncated POD2 archive"),
])
def test_anything_but_a_whole_pod2_archive_is_refused(tmp_path, blob, message):
    path = tmp_path / "bad.pod"
    path.write_bytes(blob)
    with pytest.raises(SystemExit, match = message):
        extract_pod.read_pod(str(path))


@pytest.mark.parametrize("name, path", [
    ("ART\\A.ACT", os.path.join("ART", "A.ACT")), ("..\\C:\\..\\EVIL.TXT", "EVIL.TXT"),
    ("TOP.SKL", "TOP.SKL"), ("\\..\\", None)])
def test_an_archive_path_stays_inside_the_output_folder(name, path):
    assert extract_pod.extract_path(name) == path


def test_matching_entries_are_extracted_under_their_own_folders(archive, tmp_path, capsys):
    out = tmp_path / "out"
    extract_pod.main(["extract_pod.py", archive, ".act", str(out)])
    assert (out / "ART" / "A.ACT").read_bytes() == b"art"
    assert (out / "MODELS" / "A.ACT").read_bytes() == b"model"
    assert "(2 of 4 shown)" in capsys.readouterr().out


def test_without_a_pattern_everything_is_listed_and_nothing_written(archive, tmp_path, capsys):
    extract_pod.main(["extract_pod.py", archive])
    out = capsys.readouterr().out
    assert "test.pod: 'Test archive'  files=4 audit=3" in out
    assert "TOP.SKL" in out and "shown" not in out
    extract_pod.main(["extract_pod.py", archive, "", str(tmp_path / "all")])
    assert sorted(os.listdir(tmp_path / "all")) == ["ART", "EVIL.TXT", "MODELS", "TOP.SKL"]


def test_an_entry_whose_path_is_only_separators_is_not_written(tmp_path):
    path = tmp_path / "odd.pod"
    path.write_bytes(pod2({"\\..\\": b"x"}))
    extract_pod.main(["extract_pod.py", str(path), None, str(tmp_path / "out")])
    assert not (tmp_path / "out").exists()


def test_without_an_archive_it_prints_how_to_use_it():
    with pytest.raises(SystemExit, match = "List or extract files"):
        extract_pod.main(["extract_pod.py"])


def test_runs_as_a_script(archive, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["extract_pod.py", archive])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "extract_pod.py"), run_name = "__main__")
    assert "files=4" in capsys.readouterr().out
