# Imports
import importlib
import sys

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.util import log
from patch_program import DisassembleCommand


# Writes to whatever sys.stdout is now. pytest swaps the captured stream
# between a fixture's setup and the test, so a handler holding the stream it
# was built with would write into one nobody reads.
class CurrentStdout:
    def write(self, text):
        sys.stdout.write(text)

    def flush(self):
        sys.stdout.flush()


# The package logs through one process-wide logger that setup_logging builds
# once. Each test gets its own, writing to stdout as the test sees it, and drops
# it afterwards so nothing leaks into the next test. The logger is new, so the
# only handler on it yet is the one setup_logging added.
@pytest.fixture(autouse = True)
def package_logger(monkeypatch, request):
    monkeypatch.setattr(log, "logger_instance", None)
    logger = log.setup_logging(name = f"ghidra_annotations.{request.node.nodeid}")
    for handler in logger.handlers:
        handler.setStream(CurrentStdout())
    yield logger
    for handler in list(logger.handlers):
        logger.removeHandler(handler)


# Ghidra's DisassembleCommand as the patch_program fake, which decodes into
# the fake's own listing, for the tests that write bytes and redecode them
@pytest.fixture(name = "commands")
def fixture_commands(monkeypatch):
    monkeypatch.setattr(importlib.import_module("ghidra.app.cmd.disassemble"), "DisassembleCommand",
                        DisassembleCommand)
