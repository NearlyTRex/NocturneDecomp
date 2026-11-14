# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
import emit_struct_drift_spec as esd


def seg(lo, delta, support, boundary = None):
    return {"from_lo": lo, "delta": delta, "support": support, "boundary_before": boundary}


def test_the_dominant_shift_is_the_best_supported_one():
    assert esd.dominant([seg(0, -8, 3), seg(8, -4, 2), seg(16, -8, 1)]) == (-8, 4)
    assert esd.dominant([]) == (0, 0)


def test_the_backbone_keeps_one_monotonic_shift_and_drops_the_rest():
    segs = [seg(0x10, -8, 40), seg(0x40, -4, 5), seg(0x30, -0x1c, 30), seg(0x80, -0x1c, 1), seg(0x1000, -100, 50)]
    kept, dropped = esd.backbone(segs, 3, size = 0x200)
    assert [s["from_lo"] for s in kept] == [0x10, 0x30]
    assert sorted(s["from_lo"] for s in dropped) == [0x40, 0x80, 0x1000]


def test_a_class_that_grew_shifts_upward_and_one_with_no_support_keeps_nothing():
    kept, _ = esd.backbone([seg(0, 4, 10), seg(8, 2, 10), seg(16, 12, 10)], 3)
    assert [s["delta"] for s in kept] == [4, 12]
    assert esd.backbone([seg(0, 4, 1)], 3) == ([], [seg(0, 4, 1)])


LAYOUTS = {
    "CInner": {"size": 16, "components": [{"name": "x", "off": 0, "type": "int", "len": 4},
                                          {"name": "y", "off": 8, "type": "int", "len": 4}]},
    "COuter": {"size": 64, "components": [{"name": "base", "off": 0, "type": "CInner", "len": 16},
                                          {"name": "z", "off": 16, "type": "int", "len": 0},
                                          {"name": None, "off": 32, "type": "char", "len": 4}]},
}


@pytest.mark.parametrize("offset, path", [(8, "base.y"), (0xc, "base.y"), (16, "z"), (40, None), (-1, None)])
def test_a_boundary_is_named_by_the_field_path_that_holds_it(offset, path):
    found = esd.field_at(LAYOUTS["COuter"]["components"], offset, LAYOUTS)
    assert (found and found["name"]) == path or (found is None and path is None)


def test_an_offset_before_a_nested_structs_first_field_names_the_outer_field():
    layouts = {"CPad": {"components": [{"name": "late", "off": 4, "type": "int", "len": 4}]}}
    outer = [{"name": "pad", "off": 0, "type": "CPad", "len": 8}]
    assert esd.field_at(outer, 0, layouts)["name"] == "pad"


def test_nested_descent_stops_at_a_depth_limit():
    deep = {"T": {"components": [{"name": "t", "off": 0, "type": "T", "len": 4}]}}
    assert esd.field_at(deep["T"]["components"], 0, deep)["name"] == "t.t.t.t.t"


def test_fields_print_with_their_type_and_offset():
    assert esd.fmt_field(None) == "?"
    assert esd.fmt_field({"name": None, "type": "int", "off": 8}) == "(unnamed) : int @ 0x8"


DRIFT = {"from": "nocedit.exe", "to": "bw1.exe", "drifting": ["COuter", "CInner", "CLost"], "drift": {
    "COuter": {"segments": [seg(0, 0, 10), seg(0x20, -4, 20, [0x10, 0x20])], "observations": 30, "compared": 3,
               "purity": 0.9},
    "CInner": {"segments": [seg(0, 0, 10), seg(0x8, -4, 20)], "observations": 30, "compared": 2, "purity": 1.0},
    "CLost": {"segments": [seg(0, -4, 1)], "observations": 1, "compared": 1, "purity": 1.0}}}


def test_a_class_gets_one_edit_per_change_in_shift():
    spec = esd.describe("COuter", LAYOUTS["COuter"], DRIFT["drift"]["COuter"], 3, LAYOUTS)
    assert spec["total_shift"] == -4 and spec["nocedit_size"] == 64
    assert spec["edits"] == [{"bytes": -4, "after_offset": 0x10, "before_offset": 0x20,
                              "after_field": LAYOUTS["COuter"]["components"][1],
                              "before_field": LAYOUTS["COuter"]["components"][2], "support": 20}]
    assert esd.describe("CLost", None, DRIFT["drift"]["CLost"], 3)["edits"] == []


def test_the_spec_groups_classes_by_shift_and_names_both_builds(tmp_path, capsys):
    out = tmp_path / "spec.md"
    assert esd.main([write_json(tmp_path / "d.json", DRIFT), write_json(tmp_path / "l.json", LAYOUTS),
                     "-o", str(out)]) == 0
    spec = out.read_text()
    assert spec.startswith("# bw1.exe struct layout corrections")
    assert "Offsets below are **nocedit.exe's**; the edit makes bw1.exe's copy." in spec
    assert "| `-0x4` (-4 bytes) | 2 | `CInner` (smallest in group) |" in spec
    assert "Representative: **CInner** (nocedit.exe 16 bytes -> bw1.exe 12 bytes)" in spec
    # CInner's segment has no bracket of its own, so it is pinned at its first offset
    assert "| remove 4 bytes | `y : int @ 0x8` | `y : int @ 0x8` | 20 |" in spec
    assert "- `COuter` (nocedit.exe 64 bytes, 30 obs)" in spec
    assert "_No confidently-bracketed boundary" in spec
    printed = capsys.readouterr().out
    assert f"wrote {out}" in printed and "3 classes, 2 distinct shifts:" in printed


def test_without_an_output_path_only_the_summary_prints(tmp_path, capsys):
    esd.main([write_json(tmp_path / "d.json", DRIFT), write_json(tmp_path / "l.json", LAYOUTS)])
    assert "wrote" not in capsys.readouterr().out


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["emit_struct_drift_spec.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "emit_struct_drift_spec.py"), run_name = "__main__")
    assert exit_info.value.code == 0
