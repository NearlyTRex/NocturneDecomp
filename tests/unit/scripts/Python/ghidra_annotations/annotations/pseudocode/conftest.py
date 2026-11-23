# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import analysis as an


@pytest.fixture(name = "logs")
def fixture_analysis_logs(monkeypatch):
    """The messages analysis.py logs. A test file's own `logs` fixture overrides this one."""
    messages = []
    monkeypatch.setattr(an, "log_info", messages.append)
    return messages
