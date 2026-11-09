# Imports
import os

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from shell_helpers import generated_launcher, run_linked, stub, stub_calls, stubbed_env

pytestmark = pytest.mark.requires_binary("bash")

RECREATION_SH = os.path.join(REPO_ROOT, "recreation.sh")


def root_with(tmp_path, *presets):
    root = tmp_path / "root"
    (root / "recreation").mkdir(parents = True)
    for preset in presets:
        generated_launcher(root / "build" / "recreation" / preset / "nocturne")
    return root


def recreation(tmp_path, root, shell_traced_env, *args, cmake = "", **env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "cmake", f'echo "$PWD" >> "{bin_dir}/cwd.log"\n{cmake}')
    result = run_linked(RECREATION_SH, root, *args, env = {**stubbed_env(shell_traced_env, bin_dir), **env})
    return result, stub_calls(bin_dir)


def test_with_no_command_it_builds_the_game_preset_then_runs_it(tmp_path, shell_traced_env):
    root = root_with(tmp_path, "game")
    result, calls = recreation(tmp_path, root, shell_traced_env)
    assert result.returncode == 0
    assert calls == ["cmake --preset game", "cmake --build --preset game --target nocturne"]
    assert (tmp_path / "bin" / "cwd.log").read_text().splitlines() == [f"{root}/recreation"] * 2
    assert result.stdout == f"{root}/build/recreation/game/nocturne \n"


def test_build_only_builds(tmp_path, shell_traced_env):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "build")
    assert (result.returncode, len(calls), result.stdout) == (0, 2, "")


def test_a_failing_configure_stops_the_build(tmp_path, shell_traced_env):
    result, calls = recreation(tmp_path, root_with(tmp_path, "game"), shell_traced_env, cmake = "exit 4")
    assert (result.returncode, calls) == (4, ["cmake --preset game"])


def test_run_passes_its_arguments_to_the_game_from_the_repo_root(tmp_path, shell_traced_env):
    root = root_with(tmp_path, "game-debug")
    (root / "build" / "recreation" / "game-debug" / "nocturne").write_text('#!/bin/bash\necho "$PWD $*"\n')
    result, calls = recreation(tmp_path, root, shell_traced_env, "--debug", "run", "--windowed")
    assert (calls, result.stdout) == ([], f"{root} --windowed\n")


def test_the_preset_can_come_from_the_environment(tmp_path, shell_traced_env):
    _, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "build",
                          RECREATION_PRESET = "ci", DEBUG = "1")
    assert calls[0] == "cmake --preset ci"


def test_running_before_building_says_so(tmp_path, shell_traced_env):
    root = root_with(tmp_path)
    result, _ = recreation(tmp_path, root, shell_traced_env, "run")
    assert result.returncode == 1
    assert result.stderr == f"recreation.sh: no executable at {root}/build/recreation/game/nocturne; build first\n"


@pytest.mark.parametrize("flag", ["-h", "--help"])
def test_help_prints_the_header_comment(tmp_path, shell_traced_env, flag):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, flag)
    lines = result.stdout.splitlines()
    assert (result.returncode, calls) == (0, [])
    assert lines[0].startswith("recreation.sh — build and run")
    assert lines[-1] == "run script does."


def test_an_unknown_command_is_refused(tmp_path, shell_traced_env):
    result, _ = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "deploy")
    assert result.returncode == 2
    assert "unknown command 'deploy'" in result.stderr
