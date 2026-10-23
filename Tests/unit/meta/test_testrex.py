# Local imports
from pytest_testrex import suite


class TestRex(suite.TestRex):
    """The suite's own rules, from pytest-testrex; configured in pyproject.toml's [tool.testrex]."""
