# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT, SCRIPTS_DIR
from shell_helpers import run_script, stub, stub_calls, stubbed_env

pytestmark = pytest.mark.requires_binary("bash", "sed")

FLAGS = "--no-header-compile --no-function-compile --no-static-analysis"


def export_call(program, categories):
    return (f"python3 {SCRIPTS_DIR}/export_annotations.py {REPO_ROOT}/projects NocturneEdit {program}"
            f" {REPO_ROOT}/annotations/{program} {categories} {FLAGS}")


def test_exports_the_functions_of_every_bw_build_by_default(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3")
    result = run_script("export_bw.sh", env = stubbed_env(shell_traced_env, bin_dir))
    assert result.returncode == 0
    assert stub_calls(bin_dir) == [export_call(p, "functions") for p in ("bw1.exe", "blairwitch2.exe", "bw3.exe")]


def test_exports_the_named_categories_of_the_named_programs(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3")
    result = run_script("export_bw.sh", "data_types,functions", "bw3.exe",
                        env = stubbed_env(shell_traced_env, bin_dir))
    assert result.returncode == 0
    assert stub_calls(bin_dir) == [export_call("bw3.exe", "data_types,functions")]


@pytest.mark.parametrize("args", [("all",), ("functions,all",), ("functions", "nocedit.exe")])
def test_refuses_a_full_export_or_a_non_bw_program(tmp_path, shell_traced_env, args):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3")
    result = run_script("export_bw.sh", *args, env = stubbed_env(shell_traced_env, bin_dir))
    assert result.returncode == 2
    assert stub_calls(bin_dir) == []


def test_stops_at_the_first_failed_export(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3", "exit 1")
    result = run_script("export_bw.sh", env = stubbed_env(shell_traced_env, bin_dir))
    assert result.returncode == 1
    assert stub_calls(bin_dir) == [export_call("bw1.exe", "functions")]


def test_help_prints_the_usage(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3")
    result = run_script("export_bw.sh", "--help", env = stubbed_env(shell_traced_env, bin_dir))
    assert result.returncode == 0
    assert "Usage:" in result.stdout
    assert stub_calls(bin_dir) == []
