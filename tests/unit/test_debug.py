# Imports
import os

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from shell_helpers import generated_launcher, run_linked

pytestmark = pytest.mark.requires_binary("bash")

DEBUG_SH = os.path.join(REPO_ROOT, "debug.sh")


def test_debugs_the_default_lane_in_dev_mode(tmp_path, shell_traced_env):
    root = tmp_path / "root"
    launcher = generated_launcher(root / "build" / "exe-linux-x86_64" / "debug.sh")
    result = run_linked(DEBUG_SH, root, "--tmux", env = shell_traced_env(dict(os.environ)))
    assert (result.returncode, result.stdout) == (0, f"{launcher} --dev --tmux\n")


def test_the_lane_can_come_from_the_environment(tmp_path, shell_traced_env):
    root = tmp_path / "root"
    launcher = generated_launcher(root / "build" / "exe-linux-asan-x86_64" / "debug.sh")
    env = shell_traced_env({**os.environ, "BUILD_PRESET": "exe-linux-asan-x86_64"})
    result = run_linked(DEBUG_SH, root, env = env)
    assert result.stdout == f"{launcher} --dev\n"


def test_a_lane_not_built_says_how_to_build_it(tmp_path, shell_traced_env):
    root = tmp_path / "root"
    root.mkdir()
    result = run_linked(DEBUG_SH, root, env = shell_traced_env(dict(os.environ)))
    assert result.returncode == 127
    assert result.stderr.endswith("build it first: ./build.sh\n")
