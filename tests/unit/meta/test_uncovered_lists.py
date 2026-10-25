# Imports
import os
import tomllib

# Third-party imports
import pytest

# Local imports
from repo_paths import REPO_ROOT

# A file not yet covered is on two lists: coverage leaves it out of the floor and
# ruff leaves it out of the lint. Both shrink together as tests land.


@pytest.fixture(scope = "module")
def pyproject():
    with open(os.path.join(REPO_ROOT, "pyproject.toml"), "rb") as f:
        return tomllib.load(f)


def omitted(pyproject):
    return set(pyproject["tool"]["coverage"]["run"]["omit"])


def lint_ignored(pyproject):
    return set(pyproject["tool"]["ruff"]["lint"]["per-file-ignores"])


def test_the_two_lists_name_the_same_files(pyproject):
    assert omitted(pyproject) == lint_ignored(pyproject)


def test_every_listed_file_exists(pyproject):
    missing = sorted(path for path in omitted(pyproject)
                     if not os.path.isfile(os.path.join(REPO_ROOT, path)))
    assert not missing, f"deleted or renamed, still listed: {missing}"


def test_lint_ignores_cover_only_the_default_rules(pyproject):
    rules = {tuple(codes) for codes in pyproject["tool"]["ruff"]["lint"]["per-file-ignores"].values()}
    assert rules == {("E", "F")}
