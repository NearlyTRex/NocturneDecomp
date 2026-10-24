# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT, SCRIPTS_DIR
from shell_helpers import run_script, stub, stub_calls, stubbed_env

pytestmark = pytest.mark.requires_binary("bash")


def test_regenerates_the_checks_from_the_exported_types(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3")
    result = run_script("regen_struct_layout_checks.sh", env = stubbed_env(shell_traced_env, bin_dir))
    assert result.returncode == 0
    nocedit = f"{REPO_ROOT}/annotations/nocedit.exe"
    assert stub_calls(bin_dir) == [
        f"python3 {SCRIPTS_DIR}/gen_struct_layout_checks.py"
        f" --data-types {nocedit}/data_types/data_types.json"
        f" --out-dir {nocedit}/pseudocode/checks/struct_layout"
        f" --skip-list {SCRIPTS_DIR}/gen_struct_layout_checks_skip.txt --clean"]


def test_fails_when_the_generator_does(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3", "exit 1")
    assert run_script("regen_struct_layout_checks.sh", env = stubbed_env(shell_traced_env, bin_dir)).returncode == 1
