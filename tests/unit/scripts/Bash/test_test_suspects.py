# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from shell_helpers import run_script, stub, stub_calls, stubbed_env

pytestmark = pytest.mark.requires_binary("bash")


def test_hands_every_argument_to_the_python_detectors(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3")
    result = run_script("test_suspects.sh", "--show-omitted", "a b.cpp", env = stubbed_env(shell_traced_env, bin_dir))
    assert result.returncode == 0
    assert stub_calls(bin_dir) == [f"python3 {SCRIPTS_DIR}/test_suspects.py --show-omitted a b.cpp"]


def test_returns_the_detectors_exit_status(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "python3", "exit 3")
    assert run_script("test_suspects.sh", "x.cpp", env = stubbed_env(shell_traced_env, bin_dir)).returncode == 3
