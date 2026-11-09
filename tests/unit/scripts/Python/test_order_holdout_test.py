# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
import map_sibling_functions
import order_holdout_test as oht
import sibling_match

# Twenty exact pairs, then one found another way.
PAIRS = [{"a": f"a{i:02d}", "b": f"b{i:02d}", "confidence": 0.99, "evidence": ["shape_strict:h"]} for i in range(20)]
PAIRS.append({"a": "c00", "b": "d00", "confidence": 0.8, "evidence": ["caller:x"]})


def order_pass(proposals):
    """A stand-in for prop_order that re-proposes what the mapping is missing, through `proposals`."""
    def fake(ev, a_img, b_img, mapping):
        for a, b in proposals(mapping):
            ev.add(a, b, "order")
        return 0
    return fake


def test_held_out_pairs_are_scored_against_the_exact_ones(monkeypatch):
    def proposals(mapping):
        missing = sorted(p["a"] for p in PAIRS if not mapping.has_a(p["a"]))
        # the first rightly, the second wrongly, and one function that was never held out
        return [(missing[0], "b" + missing[0][1:]), (missing[1], "zz"), ("a99", "b99")]
    monkeypatch.setattr(map_sibling_functions, "prop_order", order_pass(proposals))
    assert oht.holdout({"pairs": PAIRS}, None, None, 0.10) == (2, 1, 1, 1)


def test_main_reports_recall_and_precision_per_fraction(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(sibling_match, "Image", lambda program: program)
    seen = []

    def proposals(mapping):
        seen.append(len(mapping))
        missing = sorted(p["a"] for p in PAIRS if not mapping.has_a(p["a"]))
        return [(missing[0], "b" + missing[0][1:])] if len(seen) == 1 else []
    monkeypatch.setattr(map_sibling_functions, "prop_order", order_pass(proposals))
    oht.main([write_json(tmp_path / "m.json", {"pairs": PAIRS}), "--to", "bw1.exe"])
    out = capsys.readouterr().out
    assert "ground truth: 20" in out
    assert "held out 10% (2 pairs)\n  re-proposed by order matching : 1 (50% recall)" in out
    assert "precision                     : 100.00%" in out
    assert "held out 40% (8 pairs)\n  re-proposed by order matching : 0 (0% recall)" in out
    assert out.count("precision") == 1


def test_a_mapping_without_exact_pairs_reports_no_recall(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(sibling_match, "Image", lambda program: program)
    monkeypatch.setattr(map_sibling_functions, "prop_order", order_pass(lambda mapping: []))
    oht.main([write_json(tmp_path / "m.json", {"pairs": PAIRS[-1:]})])
    assert "held out 10% (0 pairs)\n  re-proposed by order matching : 0 (0% recall)" in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["order_holdout_test.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "order_holdout_test.py"), run_name = "__main__")
    assert exit_info.value.code == 0
