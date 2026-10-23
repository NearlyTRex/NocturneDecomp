# Imports
import importlib.util
import os
import sys

# Third-party imports
import pytest

# The scripts are run as `python3 scripts/Python/<name>.py`, which puts their own
# directory first on sys.path; the tests import them the same way. Tests/ goes on
# the path too, for the helpers the tests import by name.
TESTS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(TESTS_DIR)
SCRIPTS_DIR = os.path.join(REPO_ROOT, "scripts", "Python")
for path in (TESTS_DIR, SCRIPTS_DIR):
    if path not in sys.path:
        sys.path.insert(0, path)


# The shell plugins resolve script paths from the rootdir, which -c would
# otherwise make Tests/
def pytest_configure(config):
    if str(config.rootpath) != REPO_ROOT:
        pytest.exit(f"pytest's rootdir is {config.rootpath}, not the repository; "
                    f"pass --rootdir={REPO_ROOT}", returncode = 2)


# What a requires_ghidra test lacks: pyghidra to drive it, and an install to drive.
# The marker takes no arguments.
def missing_ghidra(_names):
    missing = []
    if importlib.util.find_spec("pyghidra") is None:
        missing.append("pyghidra (pip install pyghidra)")
    install = os.environ.get("GHIDRA_INSTALL_DIR", "")
    if not os.path.isfile(os.path.join(install, "support", "launch.sh")):
        missing.append("GHIDRA_INSTALL_DIR (the directory holding support/launch.sh)")
    return missing


# Tells pytest-testrex how to check the requires_ghidra marker
def pytest_testrex_requirement_checkers(config):
    return {"requires_ghidra": missing_ghidra}
