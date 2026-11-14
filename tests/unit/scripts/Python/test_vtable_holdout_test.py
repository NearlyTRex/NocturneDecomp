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
import sibling_match
import vtable_holdout_test as vht


class Image:
    """The vtables a holdout reads, and a shape for each slot."""

    def __init__(self, slots):
        self.vtables = [{"functions": [{"func_addr": s} for s in slots] + [{}]}]
        self.shapes = {s: sibling_match.Shape("strict-" + s, "relaxed", (), 8, 4) for s in slots}


# Ten exact pairs in vtable slots, one exact pair outside them, one pair found another way.
PAIRS = [{"a": f"a{i}", "b": f"b{i}", "confidence": 0.99, "evidence": ["shape_strict:h"]} for i in range(10)]
PAIRS += [{"a": "a_free", "b": "b_free", "confidence": 0.99, "evidence": ["shape_strict:h"]},
          {"a": "c0", "b": "d0", "confidence": 0.8, "evidence": ["caller:x"]}]
A, B = Image([f"a{i}" for i in range(10)] + ["c0"]), Image([f"b{i}" for i in range(10)] + ["d0"])


@pytest.fixture(autouse = True)
def shapes(monkeypatch):
    monkeypatch.setattr(sibling_match, "shapes_for", lambda image, min_bytes = 8: image.shapes)


def test_only_exact_pairs_in_slots_on_both_sides_are_truth():
    assert vht.slot_truth({"pairs": PAIRS}, A, B) == {f"a{i}": f"b{i}" for i in range(10)}


def test_the_strict_tier_is_hidden_on_the_source_side_only():
    shapes_for = vht.without_strict(A)
    assert shapes_for(A)["a1"].strict == "holdout-a1" and shapes_for(A)["a1"].relaxed == "relaxed"
    assert shapes_for(B)["b1"].strict == "strict-b1"


def test_every_proposed_pair_is_scored_under_each_of_its_signals(monkeypatch, capsys):
    seen = {}

    def prop_vtables(ev, a_img, b_img, mapping):
        seen["strict"] = sibling_match.shapes_for(a_img)["a1"].strict
        held = sorted(a for a in vht.slot_truth({"pairs": PAIRS}, A, B) if not mapping.has_a(a))
        ev.add(held[0], "b" + held[0][1:], "vtable_order")
        ev.add(held[0], "b" + held[0][1:], "vtable_order", "again")
        ev.add(held[0], "zz", "vtable")
        ev.add("c9", "d9", "vtable")
    monkeypatch.setattr(map_sibling_functions, "prop_vtables", prop_vtables)
    truth = vht.slot_truth({"pairs": PAIRS}, A, B)
    held, proposals = vht.holdout({"pairs": PAIRS}, A, B, truth, 0.2)
    assert len(held) == 2 and seen["strict"] == "holdout-a1"
    assert sibling_match.shapes_for(A)["a1"].strict == "strict-a1"
    vht.report(0.2, held, proposals, truth)
    out = capsys.readouterr().out
    assert "re-proposed by vtable matching : 2 (100% recall)" in out
    assert "precision                      : 50.00%" in out
    assert "proposals outside the holdout   : 1" in out
    assert "vtable         correct    0  wrong    1" in out
    assert "vtable_order   correct    1  wrong    0" in out
    assert "WRONG" in out and "['vtable']" in out


def test_a_pass_that_proposes_nothing_reports_no_precision(capsys):
    vht.report(0.1, {"a1"}, [], {"a1": "b1"})
    out = capsys.readouterr().out
    assert "re-proposed by vtable matching : 0 (0% recall)" in out and "precision" not in out


def test_main_holds_out_each_fraction(monkeypatch, tmp_path, capsys):
    monkeypatch.setattr(sibling_match, "Image", {"a.exe": A, "b.exe": B}.__getitem__)
    monkeypatch.setattr(map_sibling_functions, "prop_vtables", lambda *args: 0)
    vht.main([write_json(tmp_path / "m.json", {"pairs": PAIRS}), "--from", "a.exe", "--to", "b.exe"])
    out = capsys.readouterr().out
    assert "ground truth: 11" in out and "of which sit in a vtable slot on both sides: 10" in out
    assert out.count("held out") == 3


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["vtable_holdout_test.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "vtable_holdout_test.py"), run_name = "__main__")
    assert exit_info.value.code == 0
