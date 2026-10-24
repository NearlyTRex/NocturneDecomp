# Imports
import os
import shutil
import subprocess

# Local imports
from repo_paths import REPO_ROOT

# Runs the scripts in scripts/Bash from where they live, so shell coverage maps
# what they ran back to the source. Programs a script must not really run (a
# Python tool that would write into the repository, a compiler, gdb) are
# replaced by stubs on PATH that record how they were called.


def bash_script(name):
    return os.path.join(REPO_ROOT, "scripts", "Bash", name)


# An executable on PATH named `name` that logs its arguments and then runs `body`
def stub(bin_dir, name, body = ""):
    bin_dir.mkdir(exist_ok = True)
    path = bin_dir / name
    path.write_text("#!/bin/bash\n"
                    f'printf "%s\\n" "{name} $*" >> "{bin_dir}/calls.log"\n'
                    f"{body}\n", encoding = "utf-8")
    path.chmod(0o755)
    return path


# Each stub call, as "name arg1 arg2 ..."
def stub_calls(bin_dir):
    log = bin_dir / "calls.log"
    return log.read_text(encoding = "utf-8").splitlines() if log.exists() else []


# The environment for a script whose PATH starts with `bin_dir`, traced for shell coverage
def stubbed_env(shell_traced_env, bin_dir):
    bin_dir.mkdir(exist_ok = True)
    return shell_traced_env({**os.environ, "PATH": f"{bin_dir}{os.pathsep}{os.environ['PATH']}"})


# Links the named real programs into `bin_dir`, for a PATH holding only those
# and the stubs, so a script can be shown a machine without some program
def link_programs(bin_dir, *names):
    bin_dir.mkdir(exist_ok = True)
    for name in names:
        os.symlink(shutil.which(name), bin_dir / name)


def run_script(name, *args, cwd = None, env = None):
    return subprocess.run(["bash", bash_script(name), *args], cwd = cwd, env = env,
                          capture_output = True, text = True, check = False)
