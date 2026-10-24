# Third-party imports
import pytest

# Local imports
from shell_helpers import run_script

pytestmark = pytest.mark.requires_binary("bash", "sed", "find", "sort")

RAW = """\
// Address: 00401000

/* WARNING: Unknown calling convention */

void f(void) {}
"""


def tree(root, *relative):
    for rel in relative:
        path = root / rel
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(RAW, encoding = "utf-8")


def summary(result):
    return [line.split(":", 1)[1].strip() for line in result.stdout.splitlines()[1:]]


def test_prepares_a_keep_for_every_plain_source_through_prepare_keep(tmp_path):
    tree(tmp_path, "core/x.cpp/a.cpp", "core/x.cpp/b.c", "core/x.cpp/c.mmx.cpp", "core/x.cpp/d.mmx.c",
         "core/x.cpp/e.byval.cpp", "core/x.cpp/f.byval.c", "core/x.cpp/g.cpp", "core/x.cpp/g.keep.cpp",
         "core/x.cpp/h.c", "core/x.cpp/h.keep.c", "core/x.cpp/notes.txt")
    result = run_script("generate_keep_files.sh", str(tmp_path))
    assert result.returncode == 0
    assert summary(result) == ["2", "2", "2", "2", "10"]
    assert (tmp_path / "core/x.cpp/a.keep.cpp").read_text(encoding = "utf-8") == (
        "// Address: 00401000\n// MANUAL RECONSTRUCTION\n\nvoid f(void) {}\n")
    assert (tmp_path / "core/x.cpp/b.keep.c").exists()
    assert (tmp_path / "core/x.cpp/g.keep.cpp").read_text(encoding = "utf-8") == RAW


def test_defaults_to_nocedits_tree_under_the_working_directory(tmp_path):
    tree(tmp_path, "annotations/nocedit.exe/pseudocode/src/main/main.cpp")
    result = run_script("generate_keep_files.sh", cwd = tmp_path)
    assert summary(result)[0] == "1"
    assert (tmp_path / "annotations/nocedit.exe/pseudocode/src/main/main.keep.cpp").exists()


def test_fails_without_the_source_directory(tmp_path):
    result = run_script("generate_keep_files.sh", str(tmp_path / "absent"))
    assert result.returncode == 1
    assert "Source directory not found" in result.stderr
