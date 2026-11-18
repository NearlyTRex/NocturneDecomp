# Imports
import sys

# Local imports
from plugin_script import run_plugin
from repo_paths import SCRIPTS_DIR
from ghidra_annotations import util


class Selection:
    def getMinAddress(self):
        return "min"


def run_with(monkeypatch, selection):
    made = []
    monkeypatch.setattr(util, "setup_logging", lambda **kw: made.append(kw["name"]))
    monkeypatch.setattr(util, "create_or_replace_string", lambda p, a: made.append((p, a)))
    run_plugin("create_terminated_string.py", currentProgram = "prog", currentSelection = selection,
               currentAddress = "cursor")
    return made


def test_the_string_starts_at_the_cursor_or_the_start_of_the_selection(monkeypatch):
    assert run_with(monkeypatch, None) == ["ghidra_string", ("prog", "cursor")]
    assert run_with(monkeypatch, Selection()) == ["ghidra_string", ("prog", "min")]


def test_the_library_path_is_added_once(monkeypatch):
    monkeypatch.setattr(sys, "path", [p for p in sys.path if p != SCRIPTS_DIR])
    run_with(monkeypatch, None)
    run_with(monkeypatch, None)
    assert sys.path.count(SCRIPTS_DIR) == 1
