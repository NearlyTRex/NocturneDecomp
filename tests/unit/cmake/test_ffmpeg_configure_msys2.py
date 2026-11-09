# Imports
import os
import subprocess

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from shell_helpers import stub, stub_calls, stubbed_env

pytestmark = pytest.mark.requires_binary("bash")

SCRIPT = os.path.join(REPO_ROOT, "cmake", "ffmpeg_configure_msys2.sh")


# A source tree whose configure prints its arguments and the first PATH entry
def source_tree(tmp_path):
    src = tmp_path / "ffmpeg"
    src.mkdir()
    configure = src / "configure"
    configure.write_text('#!/bin/sh\necho "$* PATH=${PATH%%:*}"\n')
    configure.chmod(0o755)
    return src


def configure(env, *args):
    return subprocess.run(["bash", SCRIPT, *args], env = env, capture_output = True, text = True,
                          check = False)


def test_without_cygpath_the_paths_go_to_configure_as_they_are(tmp_path, shell_traced_env):
    src = source_tree(tmp_path)
    env = stubbed_env(shell_traced_env, tmp_path / "bin")
    result = configure(env, str(src), "/opt/ffmpeg", "--disable-doc")
    assert result.returncode == 0
    assert result.stdout == f"--prefix=/opt/ffmpeg --disable-doc PATH={tmp_path / 'bin'}\n"


# cygpath turns the Windows-style paths CMake passes into ones the shell can use
def windows_env(tmp_path, shell_traced_env, src, **extra):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "cygpath", f'case "$2" in C:/ffmpeg) echo "{src}";; C:/out) echo /c/out;; *) echo /c/tools;; esac')
    return bin_dir, {**stubbed_env(shell_traced_env, bin_dir), **extra}


def test_under_msys2_the_paths_are_converted(tmp_path, shell_traced_env):
    src = source_tree(tmp_path)
    bin_dir, env = windows_env(tmp_path, shell_traced_env, src)
    env.pop("NOCTURNE_TOOL_DIR", None)
    result = configure(env, "C:/ffmpeg", "C:/out")
    assert result.stdout == f"--prefix=/c/out PATH={bin_dir}\n"
    assert stub_calls(bin_dir) == ["cygpath -u C:/ffmpeg", "cygpath -u C:/out"]


def test_the_tool_directory_goes_first_on_path(tmp_path, shell_traced_env):
    src = source_tree(tmp_path)
    bin_dir, env = windows_env(tmp_path, shell_traced_env, src, NOCTURNE_TOOL_DIR = "C:/Program Files/LLVM/bin")
    result = configure(env, "C:/ffmpeg", "C:/out", "--cc=clang")
    assert result.stdout == "--prefix=/c/out --cc=clang PATH=/c/tools\n"
    assert stub_calls(bin_dir)[-1] == "cygpath -u C:/Program Files/LLVM/bin"


def test_too_few_arguments_print_the_usage(tmp_path, shell_traced_env):
    result = configure(stubbed_env(shell_traced_env, tmp_path / "bin"), "only-one")
    assert result.returncode == 2
    assert result.stderr.startswith("usage: ")
