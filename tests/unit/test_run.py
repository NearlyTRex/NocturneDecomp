# Imports
import os

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from shell_helpers import generated_launcher, run_linked

pytestmark = pytest.mark.requires_binary("bash")

RUN_SH = os.path.join(REPO_ROOT, "run.sh")


def root_with(tmp_path, *lanes):
    root = tmp_path / "root"
    root.mkdir()
    for lane in lanes:
        generated_launcher(root / "build" / lane / "run.sh")
    return root


def test_runs_the_default_lane_in_dev_mode(tmp_path, shell_traced_env):
    root = root_with(tmp_path, "exe-linux-x86_64", "exe-linux-asan-x86_64")
    result = run_linked(RUN_SH, root, "--level", "1", env = shell_traced_env(dict(os.environ)))
    assert (result.returncode, result.stdout) == (0, f"{root}/build/exe-linux-x86_64/run.sh --dev --level 1\n")


def test_the_lane_can_come_from_the_environment(tmp_path, shell_traced_env):
    root = root_with(tmp_path, "exe-linux-x86_64", "exe-linux-asan-x86_64")
    env = shell_traced_env({**os.environ, "BUILD_PRESET": "exe-linux-asan-x86_64"})
    result = run_linked(RUN_SH, root, env = env)
    assert result.stdout == f"{root}/build/exe-linux-asan-x86_64/run.sh --dev\n"


@pytest.mark.parametrize("preset, lanes, ran", [
    ("", ("exe-linux-vanilla-x86_64", "exe-linux-x86_64-vanilla"), "exe-linux-vanilla-x86_64"),
    ("", ("exe-linux-x86_64-vanilla",), "exe-linux-x86_64-vanilla"),
    ("exe-linux-asan-x86_64", ("exe-linux-asan-x86_64-vanilla",), "exe-linux-asan-x86_64-vanilla"),
    ("exe-linux-vanilla-x86_64", ("exe-linux-vanilla-x86_64",), "exe-linux-vanilla-x86_64"),
])
def test_vanilla_prefers_the_presets_twin(tmp_path, shell_traced_env, preset, lanes, ran):
    root = root_with(tmp_path, *lanes)
    env = {**os.environ, "BUILD_PRESET": preset} if preset else dict(os.environ)
    result = run_linked(RUN_SH, root, "--vanilla", env = shell_traced_env(env))
    assert result.stdout == f"{root}/build/{ran}/run.sh --dev\n"


@pytest.mark.parametrize("args, env, hint", [
    ((), {}, "build it first: ./build.sh\n"),
    ((), {"VANILLA": "1"}, "build it first: ./build.sh --vanilla\n"),
])
def test_a_lane_not_built_says_how_to_build_it(tmp_path, shell_traced_env, args, env, hint):
    root = root_with(tmp_path)
    result = run_linked(RUN_SH, root, *args, env = shell_traced_env({**os.environ, **env}))
    assert result.returncode == 127
    assert result.stderr.endswith(hint)
