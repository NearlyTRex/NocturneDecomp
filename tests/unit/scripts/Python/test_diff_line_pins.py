# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
import diff_line_pins as dlp


def test_the_best_shift_is_the_delta_most_lines_agree_on():
    assert dlp.best_shift(set(), {1}) == (0, 0)
    assert dlp.best_shift({10, 20, 30, 99}, {12, 22, 32, 5000}) == (3, 2)
    assert dlp.best_shift({1}, {1}) == (0, 0)


@pytest.mark.parametrize("a, b, verdict", [
    ({1, 2}, {1, 2}, "identical"), ({1, 2}, set(), "only-in-A"), (set(), {1}, "only-in-B"),
    ({1, 2, 3}, {1, 2}, "subset(B<A)"), ({1}, {1, 2}, "subset(A<B)"),
    ({1, 10, 20}, {1, 12, 22}, "SHIFTED"), ({1, 10, 20}, {1, 15, 40}, "diverged")])
def test_each_file_gets_a_divergence_verdict(a, b, verdict):
    assert dlp.classify(a, b)[0] == verdict


def pins(exe, entries):
    return {"exe": exe, "pins": [{"file": f, "line": line} for f, line in entries]}


def run(tmp_path, a, b, *extra):
    dlp.main([write_json(tmp_path / "a.json", a), write_json(tmp_path / "b.json", b), *extra])


def test_builds_one_flag_apart_have_no_drift(tmp_path, capsys):
    run(tmp_path, pins("a.exe", [("f", 1), ("f", 2), ("g", 5)]), pins("b.exe", [("f", 1), ("g", 5), ("h", 1)]))
    out = capsys.readouterr().out
    assert "A = a.exe   (3 pins, 2 files)" in out
    assert "identical         1 files" in out and "subset(B<A)       1 files" in out
    assert "VERDICT: 0/2 shared TUs show real source drift (0%)." in out
    assert "#ifdef reconstruction is viable." in out


def test_a_few_edited_files_among_many_are_reported_as_such(tmp_path, capsys):
    same = [(f"u{i}", 1) for i in range(9)]
    a = pins("a.exe", same + [("e", 10), ("e", 20), ("e", 30)])
    b = pins("b.exe", same + [("e", 12), ("e", 22), ("e", 32)])
    run(tmp_path, a, b, "--json", str(tmp_path / "out.json"))
    captured = capsys.readouterr()
    assert "  [SHIFTED    ] e" in captured.out
    assert "mostly one build flag apart" in captured.out
    assert json.loads((tmp_path / "out.json").read_text())["files"]["e"]["verdict"] == "SHIFTED"
    assert "wrote" in captured.err


def test_mostly_edited_builds_are_siblings_and_no_shared_file_gives_no_verdict(tmp_path, capsys):
    run(tmp_path, {"pins": [{"file": "e", "line": 1}, {"file": "e", "line": 9}]},
        pins("b.exe", [("e", 3), ("e", 40)]), "--show", "")
    out = capsys.readouterr().out
    assert "a.json" in out and "substantial source edits" in out
    run(tmp_path, pins("a.exe", [("f", 1)]), pins("b.exe", [("g", 1)]))
    assert "VERDICT" not in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["diff_line_pins.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "diff_line_pins.py"), run_name = "__main__")
    assert exit_info.value.code == 0
