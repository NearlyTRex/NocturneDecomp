# Imports
import os

# Third-party imports
import pytest

# Local imports
from shell_helpers import run_script, stub

pytestmark = pytest.mark.requires_binary("bash", "find", "cp", "ln")

# What a game folder holds: data to share, state to copy, and what the game writes
GAME_FILES = ["ACT1.POD", "video/OPENING.AVI", "system/nocturne.ini", "save/SLOT01.NOC",
              "build/nocturne", ".git/HEAD", ".hidden", "nocturne_render.log", "stderr.txt",
              "gtfo.txt", "console.txt", "sounderr.txt", "$$UNDO$$.TMP"]


@pytest.fixture
def game(tmp_path):
    root = tmp_path / "game"
    for rel in GAME_FILES:
        path = root / rel
        path.parent.mkdir(parents = True, exist_ok = True)
        path.write_text(rel, encoding = "utf-8")
    return root


@pytest.fixture
def exe(tmp_path):
    return stub(tmp_path / "bin", "nocturne",
                'echo "cwd=$PWD bind=$NOCTURNE_NET_BIND name=$NOCTURNE_NET_NAME args=$*"')


def run(shell_traced_env, game, exe, *args, stage_only = False):
    env = {key: value for key, value in os.environ.items() if key != "NOCTURNE_STAGE_ONLY"}
    env.update(NOCTURNE_GAME_DIR = str(game), NOCTURNE_EXE = str(exe))
    if stage_only:
        env["NOCTURNE_STAGE_ONLY"] = "1"
    return run_script("netplay_test.sh", *args, env = shell_traced_env(env))


def test_stages_an_instance_that_shares_data_and_copies_state(game, exe, shell_traced_env):
    result = run(shell_traced_env, game, exe, "host", stage_only = True)
    run_dir = game / "build" / "netplay" / "Host"
    assert result.returncode == 0
    assert sorted(os.listdir(run_dir)) == [".hidden", "ACT1.POD", "save", "system", "video"]
    assert os.readlink(run_dir / "ACT1.POD") == str(game / "ACT1.POD")
    assert not (run_dir / "system").is_symlink()
    assert (run_dir / "system" / "nocturne.ini").read_text(encoding = "utf-8") == "system/nocturne.ini"
    assert not (run_dir / "save").is_symlink()
    assert result.stdout.splitlines() == [
        "instance : Host", "bind     : 127.0.0.1:7647", f"workdir  : {run_dir}", f"exe      : {exe}",
        "host     : CTRL+H, pick a mission, then wait for the client",
        "(staged only; NOCTURNE_STAGE_ONLY is set)"]


def test_restaging_drops_stale_links_and_keeps_edited_state(game, exe, shell_traced_env):
    run(shell_traced_env, game, exe, "client", stage_only = True)
    run_dir = game / "build" / "netplay" / "Client"
    os.symlink(game / "gtfo.txt", run_dir / "gtfo.txt")
    (run_dir / "system" / "nocturne.ini").write_text("edited", encoding = "utf-8")
    result = run(shell_traced_env, game, exe, "client", stage_only = True)
    assert "join     : CTRL+J, then enter 127.0.0.1" in result.stdout
    assert not (run_dir / "gtfo.txt").exists()
    assert (run_dir / "system" / "nocturne.ini").read_text(encoding = "utf-8") == "edited"


def test_copies_an_upper_case_system_directory_too(tmp_path, exe, shell_traced_env):
    game = tmp_path / "game"
    (game / "SYSTEM").mkdir(parents = True)
    (game / "SYSTEM" / "NOCTURNE.INI").write_text("x", encoding = "utf-8")
    run(shell_traced_env, game, exe, "host", stage_only = True)
    run_dir = game / "build" / "netplay" / "Host"
    assert os.listdir(run_dir) == ["SYSTEM"]
    assert not (run_dir / "SYSTEM").is_symlink()


def test_launches_the_game_in_its_own_directory_on_its_own_address(game, exe, shell_traced_env):
    result = run(shell_traced_env, game, exe, "Third", "127.0.0.3")
    assert result.returncode == 0
    assert result.stdout.splitlines()[-1] == (
        f"cwd={game}/build/netplay/Third bind=127.0.0.3 name=Third args=Third 127.0.0.3")


def test_without_arguments_prints_usage(game, exe, shell_traced_env):
    result = run(shell_traced_env, game, exe)
    assert result.returncode == 2
    assert result.stderr == "usage: netplay_test.sh host|client|<name> [ip]\n"


def test_a_custom_name_needs_an_address(game, exe, shell_traced_env):
    result = run(shell_traced_env, game, exe, "Third")
    assert result.returncode == 2
    assert "no bind address for 'Third'" in result.stderr


def test_refuses_to_run_without_an_executable(game, tmp_path, shell_traced_env):
    result = run(shell_traced_env, game, tmp_path / "absent", "host")
    assert result.returncode == 1
    assert f"no executable at {tmp_path}/absent" in result.stderr
    assert not (game / "build" / "netplay").exists()
