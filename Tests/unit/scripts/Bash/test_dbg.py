# Imports
import os

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from shell_helpers import run_script, stub, stub_calls

pytestmark = pytest.mark.requires_binary("bash", "awk", "sed", "grep", "tail", "wc")

# tmux, as far as dbg.sh can tell: a session is a file, the pane is a file, and
# what is typed at gdb lands in the probe log the way gdb's logging puts it there
TMUX = r"""
state="$(dirname "$0")"
case "$1" in
    has-session) [ -f "$state/session" ] ;;
    kill-session) rm -f "$state/session" ;;
    capture-pane) cat "$state/pane" 2>/dev/null ;;
    send-keys)
        keys="$4"
        case "$keys" in
            C-c|c) ;;
            printf*) keys="${keys#printf \"}"; echo "${keys%\\n\"}" >> "$NOCTURNE_DBG_LOG" ;;
            *) echo "gdb: $keys" >> "$NOCTURNE_DBG_LOG" ;;
        esac ;;
esac
"""


class Debugger:
    def __init__(self, tmp_path, shell_traced_env):
        self.bin = tmp_path / "bin"
        self.log = tmp_path / "probe.log"
        self.build = tmp_path / "build"
        self.build.mkdir()
        stub(self.bin, "tmux", TMUX)
        for name in ("sleep", "touch", "cmake", "ctest"):
            stub(self.bin, name)
        self.debug_sh = stub(self.build, "debug.sh",
                             f'touch "{self.bin}/session"; echo "$NOCTURNE_BREAKS|$NOCTURNE_TMUX_SESSION" > "{self.build}/env"')
        self.env = shell_traced_env({**os.environ, "PATH": f"{self.bin}{os.pathsep}{os.environ['PATH']}",
                                     "NOCTURNE_DBG_SESSION": "test", "NOCTURNE_DBG_LOG": str(self.log),
                                     "NOCTURNE_DBG_DEBUG_SH": str(self.debug_sh)})

    def run(self, *args, **env):
        return run_script("dbg.sh", *args, env = {**self.env, **env})

    def session(self, pane = "(gdb) "):
        (self.bin / "session").write_text("", encoding = "utf-8")
        (self.bin / "pane").write_text(pane, encoding = "utf-8")

    def tmux(self):
        return [call for call in stub_calls(self.bin) if call.startswith("tmux") and "capture-pane" not in call
                and "has-session" not in call]


@pytest.fixture
def dbg(tmp_path, shell_traced_env):
    return Debugger(tmp_path, shell_traced_env)


def test_without_arguments_prints_usage_and_fails(dbg):
    result = dbg.run()
    assert result.returncode == 1
    assert result.stdout == ""
    assert "#   dbg.sh build" not in result.stderr
    assert "  dbg.sh start                  # launch in tmux; game starts PAUSED at gdb" in result.stderr


@pytest.mark.parametrize("flag", ["-h", "--help", "help"])
def test_help_prints_the_header_comment(dbg, flag):
    result = dbg.run(flag)
    assert result.returncode == 0
    lines = result.stdout.splitlines()
    assert lines[0] == ""
    assert "Hides the tmux send-keys / capture-pane / set-logging plumbing so Claude (or" in lines
    assert lines[-1] == "  - Probe printfs land in ${NOCTURNE_DBG_LOG}; read with `dbg.sh log [N]`."


def test_an_unknown_subcommand_fails_with_usage(dbg):
    result = dbg.run("frobnicate")
    assert result.returncode == 1
    assert result.stderr.startswith("dbg.sh: unknown subcommand 'frobnicate'")


# --- build -------------------------------------------------------------------

def test_build_compiles_then_builds_and_runs_the_tests(dbg):
    (dbg.build / "CMakeCache.txt").write_text("", encoding = "utf-8")
    result = dbg.run("build", "-j4")
    assert result.returncode == 0
    assert result.stdout == f"dbg.sh: building {dbg.build}\n"
    assert stub_calls(dbg.bin) == [f"touch {REPO_ROOT}/cmake/skip_list.txt", f"cmake --build {dbg.build} -j4",
                                   f"cmake --build {dbg.build} --target nocturne_tests", "ctest --output-on-failure"]


def test_build_can_skip_the_tests(dbg):
    (dbg.build / "CMakeCache.txt").write_text("", encoding = "utf-8")
    assert dbg.run("build", NOCTURNE_DBG_TESTS = "0").returncode == 0
    assert "ctest --output-on-failure" not in stub_calls(dbg.bin)


def test_build_needs_a_configured_directory(dbg):
    result = dbg.run("build")
    assert result.returncode == 1
    assert f"{dbg.build} is not a configured build dir" in result.stderr


@pytest.mark.parametrize("failing, message", [("cmake", ""), ("ctest", "tests failed")])
def test_build_stops_at_the_first_failure(dbg, failing, message):
    (dbg.build / "CMakeCache.txt").write_text("", encoding = "utf-8")
    stub(dbg.bin, failing, "exit 3")
    result = dbg.run("build")
    assert result.returncode == (3 if failing == "cmake" else 1)
    assert message in result.stderr


def test_build_stops_when_the_tests_do_not_build(dbg):
    (dbg.build / "CMakeCache.txt").write_text("", encoding = "utf-8")
    stub(dbg.bin, "cmake", '[ "$3" = "--target" ] && exit 4; exit 0')
    assert dbg.run("build").returncode == 4


# --- the session ------------------------------------------------------------------

def test_start_launches_paused_with_logging_on(dbg):
    dbg.log.write_text("old", encoding = "utf-8")
    (dbg.bin / "pane").write_text("Starting program: nocturne\n(gdb) ", encoding = "utf-8")
    result = dbg.run("start", "--breaks", "spawn")
    assert result.returncode == 0
    assert result.stdout.startswith("started (session=test")
    assert (dbg.build / "env").read_text(encoding = "utf-8") == "spawn|test\n"
    assert dbg.tmux() == ["tmux send-keys -t test C-c", f"tmux send-keys -t test set logging file {dbg.log} Enter",
                          "tmux send-keys -t test set logging overwrite off Enter",
                          "tmux send-keys -t test set logging redirect off Enter",
                          "tmux send-keys -t test set logging enabled on Enter"]
    assert dbg.log.read_text(encoding = "utf-8").startswith("gdb: set logging file")


def test_start_fails_when_gdb_never_prompts(dbg):
    (dbg.bin / "pane").write_text("loading...", encoding = "utf-8")
    result = dbg.run("start")
    assert result.returncode == 1
    assert "gdb prompt never appeared" in result.stderr


@pytest.mark.parametrize("prepare, args, message", [
    ("session", [], "session 'test' already exists"),
    ("no_debug_sh", [], "not found or not executable"),
    ("none", ["--frames"], "unknown arg '--frames'"),
])
def test_start_refuses(dbg, prepare, args, message):
    if prepare == "session":
        dbg.session()
    elif prepare == "no_debug_sh":
        dbg.debug_sh.unlink()
    result = dbg.run("start", *args)
    assert result.returncode == 1
    assert message in result.stderr


def test_restart_kills_the_session_and_starts_again(dbg):
    dbg.session("Starting program\n(gdb)")
    result = dbg.run("restart")
    assert result.returncode == 0
    assert "tmux kill-session -t test" in stub_calls(dbg.bin)
    assert result.stdout.startswith("started")


def test_restart_without_a_session_just_starts(dbg):
    (dbg.bin / "pane").write_text("(gdb)", encoding = "utf-8")
    assert dbg.run("restart").stdout.startswith("started")


def test_stop(dbg):
    assert dbg.run("stop").stdout == "(no session)\n"
    dbg.session()
    assert dbg.run("stop").stdout == "stopped\n"
    assert not (dbg.bin / "session").exists()


def test_status(dbg):
    assert dbg.run("status").stdout == "no session\n"
    dbg.session("frame 1\n(gdb)")
    assert dbg.run("status").stdout.splitlines()[1] == f"log:     {dbg.log} (0 lines)"
    dbg.log.write_text("a\nb\n", encoding = "utf-8")
    assert dbg.run("status").stdout.splitlines() == [
        "session: test (running)", f"log:     {dbg.log} (2 lines)", "--- last 15 pane lines ---", "frame 1", "(gdb)"]


@pytest.mark.parametrize("subcommand", ["pause", "cont", "probe", "cmd", "attach"])
def test_session_commands_need_a_session(dbg, subcommand):
    result = dbg.run(subcommand, "x")
    assert result.returncode == 1
    assert "no tmux session 'test'" in result.stderr


def test_pause(dbg):
    dbg.session()
    assert dbg.run("pause").stdout == "paused\n"
    (dbg.bin / "pane").write_text("running", encoding = "utf-8")
    result = dbg.run("pause")
    assert result.returncode == 1
    assert "no (gdb) prompt after 3s" in result.stderr


@pytest.mark.parametrize("alias", ["cont", "resume", "c"])
def test_cont(dbg, alias):
    dbg.session()
    assert dbg.run(alias).stdout == "resumed\n"
    assert dbg.tmux() == ["tmux send-keys -t test c Enter"]


def test_probe_sources_the_file_by_absolute_path(dbg, tmp_path, monkeypatch):
    dbg.session()
    (tmp_path / "probes").mkdir()
    (tmp_path / "probes" / "spawn.gdb").write_text("", encoding = "utf-8")
    monkeypatch.chdir(tmp_path)
    result = dbg.run("probe", "probes/spawn.gdb")
    assert result.stdout == f"sourced {tmp_path}/probes/spawn.gdb; resumed\n"
    assert dbg.tmux()[1] == f"tmux send-keys -t test source {tmp_path}/probes/spawn.gdb Enter"


@pytest.mark.parametrize("args, pane, message", [
    ([], "(gdb)", "usage: dbg.sh probe <file.gdb>"),
    (["absent.gdb"], "(gdb)", "absent.gdb not found"),
    (["PROBE"], "running", "couldn't pause to source"),
])
def test_probe_refuses(dbg, tmp_path, args, pane, message):
    dbg.session(pane)
    probe = tmp_path / "p.gdb"
    probe.write_text("", encoding = "utf-8")
    result = dbg.run("probe", *[str(probe) if arg == "PROBE" else arg for arg in args])
    assert result.returncode == 1
    assert message in result.stderr


def test_cmd_prints_only_its_own_output(dbg):
    dbg.session()
    dbg.log.write_text("earlier probe output\n", encoding = "utf-8")
    result = dbg.run("cmd", "p g_HeroActors")
    assert result.returncode == 0
    assert result.stdout == "gdb: p g_HeroActors\n"


@pytest.mark.parametrize("args, pane, message", [
    ([], "(gdb)", "usage: dbg.sh cmd 'GDB COMMAND'"),
    (["p 1"], "running", "couldn't pause"),
])
def test_cmd_refuses(dbg, args, pane, message):
    dbg.session(pane)
    result = dbg.run("cmd", *args)
    assert result.returncode == 1
    assert message in result.stderr


def test_log_and_clear(dbg):
    assert dbg.run("log").stdout == "(no log)\n"
    assert dbg.run("log-full").stdout == "(no log)\n"
    dbg.log.write_text("".join(f"{i}\n" for i in range(60)), encoding = "utf-8")
    assert dbg.run("log").stdout.splitlines() == [str(i) for i in range(10, 60)]
    assert dbg.run("log", "2").stdout == "58\n59\n"
    assert len(dbg.run("log-full").stdout.splitlines()) == 60
    assert dbg.run("clear").stdout == f"cleared {dbg.log}\n"
    assert dbg.log.read_text(encoding = "utf-8") == ""


def test_attach_hands_over_to_tmux(dbg):
    dbg.session()
    assert dbg.run("attach").returncode == 0
    assert dbg.tmux() == ["tmux attach -t test"]
