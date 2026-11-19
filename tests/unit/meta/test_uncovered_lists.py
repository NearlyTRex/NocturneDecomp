# Imports
import os
import tomllib

# Local imports
from repo_paths import REPO_ROOT

# Every Python file is covered and linted. The three lists that once held the
# files not yet covered -- coverage's omit, ruff's per-file ignores and
# pytest-testrex's coverage_omit_allowed -- shrank to nothing and stay empty.


def test_no_file_is_left_out_of_coverage_or_lint():
    with open(os.path.join(REPO_ROOT, "pyproject.toml"), "rb") as f:
        tool = tomllib.load(f)["tool"]
    assert tool["coverage"]["run"]["omit"] == []
    assert tool["ruff"]["lint"].get("per-file-ignores", {}) == {}
    assert tool["testrex"]["coverage_omit_allowed"] == []
