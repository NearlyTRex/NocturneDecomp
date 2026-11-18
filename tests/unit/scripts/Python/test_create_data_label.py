# Imports
import sys

# Local imports
from plugin_script import run_plugin
from repo_paths import SCRIPTS_DIR
from ghidra_annotations import util


def stub_util(monkeypatch):
    calls = []
    monkeypatch.setattr(util, "setup_logging", lambda **kw: calls.append(("log", kw["name"])))
    monkeypatch.setattr(util, "create_labels_in_range", lambda p, s: calls.append(("range", p, s)) or 3)
    monkeypatch.setattr(util, "create_label_at_address", lambda p, a: calls.append(("at", p, a)) or 1)
    return calls


def test_a_selection_labels_every_unlabelled_data_item_in_it(monkeypatch, capsys):
    calls = stub_util(monkeypatch)
    run_plugin("create_data_label.py", currentProgram = "prog", currentSelection = "sel", currentAddress = "a")
    assert calls == [("log", "ghidra_label"), ("range", "prog", "sel")]
    assert capsys.readouterr().out == "Created 3 data label(s)\n"


def test_without_a_selection_the_cursor_is_labelled_and_the_path_is_added_once(monkeypatch, capsys):
    calls = stub_util(monkeypatch)
    monkeypatch.setattr(sys, "path", [p for p in sys.path if p != SCRIPTS_DIR])
    for _ in range(2):
        run_plugin("create_data_label.py", currentProgram = "prog", currentSelection = None, currentAddress = "a")
    assert calls[1] == ("at", "prog", "a")
    assert sys.path.count(SCRIPTS_DIR) == 1
    assert capsys.readouterr().out == "Created 1 data label(s)\n" * 2
