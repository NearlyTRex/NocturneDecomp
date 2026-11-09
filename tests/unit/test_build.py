# Imports
import json
import os

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from shell_helpers import run_linked, stub, stub_calls, stubbed_env

pytestmark = pytest.mark.requires_binary("bash")

BUILD_SH = os.path.join(REPO_ROOT, "build.sh")


# A tree for build.sh to take as its own: presets naming `presets`, and a
# regen script per (name, exit status)
def tree(tmp_path, presets = ("exe-linux-x86_64", "exe-linux-vanilla-x86_64"), regens = ()):
    root = tmp_path / "root"
    (root / "scripts" / "Bash").mkdir(parents = True)
    (root / "CMakePresets.json").write_text(json.dumps(
        {"configurePresets": [{"name": name} for name in presets]}, indent = 2))
    for name, status in regens:
        script = root / "scripts" / "Bash" / name
        script.write_text(f'#!/bin/bash\necho "{name} ran" >> "{tmp_path}/regen.log"\nexit {status}\n')
        script.chmod(0o755)
    return root


# cmake, recording the directory it is run from as well as its arguments
def build(tmp_path, root, shell_traced_env, *args, cmake = "", **env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "cmake", f'echo "$PWD" >> "{bin_dir}/cwd.log"\n{cmake}')
    result = run_linked(BUILD_SH, root, *args, env = {**stubbed_env(shell_traced_env, bin_dir), **env})
    return result, stub_calls(bin_dir)


def test_configures_and_builds_the_default_preset_from_its_own_directory(tmp_path, shell_traced_env):
    root = tree(tmp_path, regens = [("regen_a.sh", 0), ("regen_b.sh", 0)])
    result, calls = build(tmp_path, root, shell_traced_env, "-j", "4", SKIP_REGEN = "0")
    assert result.returncode == 0
    assert calls == ["cmake --preset exe-linux-asan-x86_64",
                     f"cmake --build {root}/build/exe-linux-asan-x86_64 -j 4"]
    assert (tmp_path / "regen.log").read_text().splitlines() == ["regen_a.sh ran", "regen_b.sh ran"]
    assert (tmp_path / "bin" / "cwd.log").read_text().splitlines() == [str(root)] * 2
    assert "regenerating via regen_a.sh" in result.stdout


def test_a_named_preset_passes_the_rest_to_the_build(tmp_path, shell_traced_env):
    root = tree(tmp_path)
    _, calls = build(tmp_path, root, shell_traced_env, "check-linux-x86_64", "--target", "x")
    assert calls == ["cmake --preset check-linux-x86_64",
                     f"cmake --build {root}/build/check-linux-x86_64 --target x"]


def test_the_preset_can_come_from_the_environment(tmp_path, shell_traced_env):
    _, calls = build(tmp_path, tree(tmp_path), shell_traced_env, BUILD_PRESET = "exe-linux-x86_64")
    assert calls[0] == "cmake --preset exe-linux-x86_64"


def test_a_failing_regen_stops_the_build_with_its_status(tmp_path, shell_traced_env):
    root = tree(tmp_path, regens = [("regen_a.sh", 3), ("regen_b.sh", 0)])
    result, calls = build(tmp_path, root, shell_traced_env)
    assert (result.returncode, calls) == (3, [])
    assert (tmp_path / "regen.log").read_text().splitlines() == ["regen_a.sh ran"]


def test_skip_regen_and_a_tree_without_regens_both_go_straight_to_cmake(tmp_path, shell_traced_env):
    skipped = tree(tmp_path, regens = [("regen_a.sh", 1)])
    result, _ = build(tmp_path, skipped, shell_traced_env, SKIP_REGEN = "1")
    assert result.returncode == 0 and not (tmp_path / "regen.log").exists()
    bare = tmp_path / "bare"
    (bare / "scripts" / "Bash").mkdir(parents = True)
    result = run_linked(BUILD_SH, bare, env = stubbed_env(shell_traced_env, tmp_path / "bin"))
    assert result.returncode == 0 and "regenerating" not in result.stdout


def test_a_failing_configure_stops_before_the_build(tmp_path, shell_traced_env):
    result, calls = build(tmp_path, tree(tmp_path), shell_traced_env, cmake = "exit 5")
    assert (result.returncode, calls) == (5, ["cmake --preset exe-linux-asan-x86_64"])


def test_vanilla_takes_the_presets_twin_when_there_is_one(tmp_path, shell_traced_env):
    root = tree(tmp_path)
    result, calls = build(tmp_path, root, shell_traced_env, "--vanilla", "exe-linux-x86_64")
    assert calls == ["cmake --preset exe-linux-vanilla-x86_64",
                     f"cmake --build {root}/build/exe-linux-vanilla-x86_64"]
    assert "vanilla lane -> build/exe-linux-vanilla-x86_64" in result.stdout


def test_vanilla_without_a_twin_configures_its_own_tree(tmp_path, shell_traced_env):
    root = tree(tmp_path)
    _, calls = build(tmp_path, root, shell_traced_env, VANILLA = "1")
    vanilla = f"{root}/build/exe-linux-asan-x86_64-vanilla"
    assert calls == [f"cmake --preset exe-linux-asan-x86_64 -B {vanilla} -DNOCTURNE_VANILLA=ON"
                     " -DNOCTURNE_BUILD_TAG=exe-linux-asan-x86_64-vanilla",
                     f"cmake --build {vanilla}"]


def test_a_vanilla_preset_is_built_as_it_is(tmp_path, shell_traced_env):
    root = tree(tmp_path)
    result, calls = build(tmp_path, root, shell_traced_env, "--vanilla", "exe-linux-vanilla-x86_64")
    assert calls[0] == "cmake --preset exe-linux-vanilla-x86_64"
    assert "vanilla lane" not in result.stdout
