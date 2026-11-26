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
    assert lines[-1] == "longer."


ALL_GATES = ["cmake --preset coverage", "cmake --build --preset coverage --target coverage",
             "cmake --preset ci", "cmake --build --preset ci --target tidy",
             "cmake --build --preset default --target format-check",
             "cmake --build --preset ci --target nocturne"]

# cmake as the gates see it: each call notes the jobs it was given
JOBS_CMAKE = 'echo "$CMAKE_BUILD_PARALLEL_LEVEL $NOCTURNE_RECREATION_JOBS" >> "$(dirname "$0")/jobs.log"'


def jobs_seen(tmp_path):
    return (tmp_path / "bin" / "jobs.log").read_text().splitlines()


# Half the cores, and clang-tidy at most six of them.
def test_the_gates_run_each_in_turn_on_half_the_cores(tmp_path, shell_traced_env):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "gates",
                               cmake = JOBS_CMAKE, RECREATION_JOBS = "")
    half = (len(os.sched_getaffinity(0)) + 1) // 2
    assert (result.returncode, calls) == (0, ALL_GATES)
    tidy = f"{half} {min(half, 6)}"
    assert jobs_seen(tmp_path) == [f"{half} {half}"] * 3 + [tidy] + [f"{half} {half}"] * 2
    assert result.stderr.splitlines()[-1] == f"== recreation.sh: passed: coverage tidy format game ({half} jobs)"


# Jobs given go to clang-tidy too.
def test_the_gates_named_run_with_the_jobs_given(tmp_path, shell_traced_env):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env,
                               "gates", "--jobs", "12", "game", "tidy", cmake = JOBS_CMAKE)
    assert (result.returncode, calls) == (0, [ALL_GATES[5], ALL_GATES[2], ALL_GATES[3]])
    assert jobs_seen(tmp_path) == ["12 12"] * 3


# Named, the release gate builds the shipping preset; the gates run unnamed leave it out (ALL_GATES).
def test_the_release_gate_builds_the_shipping_preset(tmp_path, shell_traced_env):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "gates", "release")
    assert (result.returncode, calls) == (0, ["cmake --preset game-release",
                                              "cmake --build --preset game-release --target nocturne"])


def test_the_jobs_can_come_from_the_environment(tmp_path, shell_traced_env):
    recreation(tmp_path, root_with(tmp_path), shell_traced_env, "gates", "format",
               cmake = JOBS_CMAKE, RECREATION_JOBS = "2")
    assert jobs_seen(tmp_path) == ["2 2"]


@pytest.mark.parametrize("jobs", [["--jobs", "0"], ["--jobs", "two"], ["--jobs"]])
def test_jobs_that_are_not_a_number_are_refused(tmp_path, shell_traced_env, jobs):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "gates", *jobs)
    assert (result.returncode, calls) == (2, [])
    assert "--jobs takes a number of jobs" in result.stderr


def test_an_unknown_gate_is_refused_before_any_runs(tmp_path, shell_traced_env):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "gates", "format", "lint")
    assert (result.returncode, calls) == (2, [])
    assert "unknown gate 'lint'" in result.stderr


def test_a_failing_gate_stops_the_rest(tmp_path, shell_traced_env):
    result, calls = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "gates",
                               "format", "game", cmake = "exit 4")
    assert (result.returncode, calls) == (4, [ALL_GATES[4]])


# The interrupt reaches the script while the gate's cmake runs; the gate finishes, nothing after it.
# cmake finds the script as the outermost of its ancestors running this test's link to it, which no
# process outside the test names.
def test_an_interrupt_stops_the_gates(tmp_path, shell_traced_env):
    root = root_with(tmp_path)
    interrupt = ('script=$PPID\n'
                 'while parent=$(ps -o ppid= -p "$script" | tr -d " ") && '
                 f'ps -o args= -p "$parent" | grep -qF "{root}/recreation.sh"; do script=$parent; done\n'
                 'kill -INT "$script"')
    result, calls = recreation(tmp_path, root, shell_traced_env, "gates",
                               "format", "game", cmake = interrupt)
    assert (result.returncode, calls) == (130, [ALL_GATES[4]])
    assert result.stderr.splitlines()[-1] == "recreation.sh: gates interrupted"


def test_an_unknown_command_is_refused(tmp_path, shell_traced_env):
    result, _ = recreation(tmp_path, root_with(tmp_path), shell_traced_env, "deploy")
    assert result.returncode == 2
    assert "unknown command 'deploy'" in result.stderr
