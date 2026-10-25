# Imports
import logging

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.util import log


def test_get_logger_before_setup_is_an_error(monkeypatch):
    monkeypatch.setattr(log, "logger_instance", None)
    with pytest.raises(RuntimeError, match = "Call setup_logging"):
        log.get_logger()


def test_setup_logging_builds_one_stdout_logger_and_reuses_it(package_logger):
    assert package_logger.level == logging.DEBUG
    assert package_logger.propagate is False
    assert [type(handler) for handler in package_logger.handlers].count(logging.StreamHandler) == 1
    assert log.setup_logging(name = "another") is package_logger
    assert log.get_logger() is package_logger


def test_messages_go_to_stdout_with_their_level(capsys):
    log.log_info("hello")
    log.log_warning("careful")
    lines = capsys.readouterr().out.splitlines()
    assert lines[0].endswith("[INFO] hello")
    assert lines[1].endswith("[WARNING] careful")


def test_log_error_reports_then_exits(capsys):
    with pytest.raises(SystemExit) as exit_info:
        log.log_error("broken")
    assert exit_info.value.code == 1
    assert capsys.readouterr().out.rstrip().endswith("[ERROR] broken")
