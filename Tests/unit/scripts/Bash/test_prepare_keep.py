# Third-party imports
import pytest

# Local imports
from shell_helpers import run_script

pytestmark = pytest.mark.requires_binary("bash", "sed")

RAW = """\
// Function: CDemonActor::spawn
// Address: 0053e220

/* WARNING: Removing unreachable block (ram,0x0053e2a0) */

int spawn(void)
{
  /* WARNING: Could not recover jumptable at 0x0053e240 */
  return 0;
}
"""

KEEP = """\
// Function: CDemonActor::spawn
// Address: 0053e220
// MANUAL RECONSTRUCTION

int spawn(void)
{
  return 0;
}
"""


def raw_source(tmp_path, name = "spawn_FUN_0053e220.cpp"):
    path = tmp_path / name
    path.write_text(RAW, encoding = "utf-8")
    return path


@pytest.mark.parametrize("name, keep_name", [("f.cpp", "f.keep.cpp"), ("f.c", "f.keep.c")])
def test_makes_a_keep_with_the_marker_and_without_decompiler_warnings(tmp_path, name, keep_name):
    result = run_script("prepare_keep.sh", str(raw_source(tmp_path, name)))
    keep = tmp_path / keep_name
    assert result.returncode == 0
    assert result.stdout == f"  OK  {keep}\n"
    assert keep.read_text(encoding = "utf-8") == KEEP


def test_leaves_an_existing_keep_alone_without_force(tmp_path):
    source = raw_source(tmp_path)
    keep = tmp_path / "spawn_FUN_0053e220.keep.cpp"
    keep.write_text("hand fixed\n", encoding = "utf-8")
    result = run_script("prepare_keep.sh", str(source))
    assert "WARN" in result.stdout and "already exists" in result.stdout
    assert keep.read_text(encoding = "utf-8") == "hand fixed\n"


@pytest.mark.parametrize("flag", ["--force", "-f"])
def test_force_regenerates_an_existing_keep(tmp_path, flag):
    source = raw_source(tmp_path)
    keep = tmp_path / "spawn_FUN_0053e220.keep.cpp"
    keep.write_text("hand fixed\n", encoding = "utf-8")
    result = run_script("prepare_keep.sh", flag, str(source))
    assert result.stdout == f"  OK  {keep}\n"
    assert keep.read_text(encoding = "utf-8") == KEEP


def test_reports_each_file_it_cannot_use_and_carries_on(tmp_path):
    keep = tmp_path / "a.keep.c"
    keep.write_text("", encoding = "utf-8")
    header = tmp_path / "a.h"
    header.write_text("", encoding = "utf-8")
    good = raw_source(tmp_path)
    result = run_script("prepare_keep.sh", str(tmp_path / "missing.cpp"), str(keep), str(header), str(good))
    assert result.returncode == 0
    assert result.stdout.splitlines() == [
        f"ERROR: {tmp_path}/missing.cpp not found",
        f"SKIP: {keep} is already a .keep file",
        f"ERROR: {header} is not a .cpp or .c file",
        f"  OK  {tmp_path}/spawn_FUN_0053e220.keep.cpp",
    ]


def test_without_files_prints_usage_and_fails():
    result = run_script("prepare_keep.sh", "--force")
    assert result.returncode == 1
    assert result.stdout.startswith("Usage: prepare_keep.sh")


@pytest.mark.parametrize("flag", ["--help", "-h"])
def test_help(flag):
    result = run_script("prepare_keep.sh", flag, "ignored.cpp")
    assert result.returncode == 0
    assert "--force, -f    Overwrite existing .keep files." in result.stdout
