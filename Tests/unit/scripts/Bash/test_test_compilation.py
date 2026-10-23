# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT
from shell_helpers import run_script, stub, stub_calls, stubbed_env

pytestmark = pytest.mark.requires_binary("bash", "sed", "grep")

# A compiler that fails files named *fail*, and warns about unused locals in *fail* and *unused*
CLANG = """\
f="${@: -1}"
case "$f" in
    *fail*) echo "$f:3:1: error: boom"
            echo "$f:5:9: warning: unused variable 'tmp' [-Wunused-variable]"
            exit 1 ;;
    *unused*) echo "$f:7:3: warning: unused but set variable 'x' [-Wunused-but-set-variable]" ;;
esac
"""


@pytest.fixture
def compiler(tmp_path, shell_traced_env):
    bin_dir = tmp_path / "bin"
    stub(bin_dir, "clang++", CLANG)
    return bin_dir, stubbed_env(shell_traced_env, bin_dir)


def includes(call):
    words = call.split()
    return [words[i + 1] for i, word in enumerate(words) if word == "-I"]


def test_reports_passes_failures_and_unused_locals(compiler):
    bin_dir, env = compiler
    result = run_script("test_compilation.sh", "ok.cpp", "unused.cpp", "fail.cpp", env = env)
    assert result.returncode == 1
    lines = result.stdout.splitlines()
    assert lines[0] == "Testing 3 file(s)..."
    assert "  PASS  ok.cpp" in lines
    assert lines[lines.index("  PASS  unused.cpp") + 1] == "    UNUSED L7: x"
    failed = lines.index("  FAIL  fail.cpp")
    assert lines[failed + 1] == "fail.cpp:3:1: error: boom"
    assert lines[failed + 3] == "    UNUSED L5: tmp"
    assert "Results: 2 passed, 1 failed out of 3" in lines
    assert lines[-2:] == ["Failed files:", "  fail.cpp"]
    assert len(stub_calls(bin_dir)) == 3


def test_succeeds_when_everything_compiles(compiler):
    _, env = compiler
    result = run_script("test_compilation.sh", "a.cpp", env = env)
    assert result.returncode == 0
    assert result.stdout.splitlines()[-1] == "Results: 1 passed, 0 failed out of 1"


@pytest.mark.parametrize("path, program", [
    ("annotations/tridx7.dll/pseudocode/src/x.cpp/f.keep.cpp", "tridx7.dll"),
    ("annotations/nocturne.exe/pseudocode/src/x.cpp/f.keep.cpp", "nocturne.exe"),
    ("annotations/no_such.exe/pseudocode/src/f.keep.cpp", "nocedit.exe"),
    ("elsewhere/f.cpp", "nocedit.exe"),
])
def test_compiles_against_the_files_own_program_headers(compiler, path, program):
    bin_dir, env = compiler
    run_script("test_compilation.sh", path, env = env)
    base = f"{REPO_ROOT}/annotations/{program}/pseudocode"
    assert includes(stub_calls(bin_dir)[0]) == [f"{base}/include", f"{base}/shims"]


def test_without_arguments_tests_every_keep_the_tree_has(compiler):
    bin_dir, env = compiler
    stub(bin_dir, "find", 'printf "%s\\n" /r/b.keep.c /r/a.keep.cpp')
    result = run_script("test_compilation.sh", env = env)
    assert result.returncode == 0
    assert "  PASS  /r/a.keep.cpp" in result.stdout.splitlines()[2]
    assert stub_calls(bin_dir)[0] == f"find {REPO_ROOT}/annotations -name *.keep.cpp -o -name *.keep.c"


def test_without_arguments_or_keeps_there_is_nothing_to_do(compiler):
    bin_dir, env = compiler
    stub(bin_dir, "find")
    result = run_script("test_compilation.sh", env = env)
    assert result.returncode == 0
    assert result.stdout == "No files to test.\n"
