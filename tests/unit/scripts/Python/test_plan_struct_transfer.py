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
import plan_struct_transfer as pst
import sibling_match


def struct(name, size, fields = (), cat = "/Nocturne/Class/Game", desc = None):
    return {"name": name, "len": size, "cat": cat, "desc": desc,
            "fields": [{"name": n, "type": t, "offset": o, "len": 4} for n, t, o in fields]}


def segment(delta, support):
    return {"from_lo": 8, "from_hi": 8, "delta": delta, "support": support}


REF = [
    struct("CVector3f", 12, [("x", "float", 0)], "/Nocturne/Struct/Game"),
    struct("CLocation", 16, [("position", "CVector3f", 0)], "/Nocturne/Struct/Game"),
    struct("CDemonActor", 344, [("location", "CLocation", 0), ("vtable", "UActorVTable *", 340)]),
    struct("CBox", 360, [("base", "CDemonActor", 0)]),
    struct("CGrown", 400, [("base", "CDemonActor", 0)]),
    struct("CShifted", 100, []),
    struct("CQuiet", 50, []),
    struct("CPoint", 24, [("ends", "CVector3f[2]", 0)]),
    struct("CHolder", 80, [("odd", "CShifted", 0)]),
    struct("CLoop", 8, [("next", "CLoop", 0)]),
    struct("CDone", 8, []),
    struct("CGone", 8, [("missing", "CNotInRef", 0)]),
    struct("CDemonActor_vtable", 236, []),
    struct("SSystem", 4, [], "/Nocturne/Struct/System/winnt.h"),
]
DST = [
    struct("CVector3f", 1, desc = "Stub: no RTTI"),
    struct("CDemonActor", 344, desc = "Stub: size from Watcom RTTI"),
    struct("CBox", 360),
    struct("CGrown", 404),
    struct("CShifted", 100),
    struct("CQuiet", 50),
    struct("CPoint", 1),
    struct("CHolder", 80),
    struct("CLoop", 8),
    struct("CDone", 8, [("kept", "int", 0)]),
    struct("CGone", 8),
    struct("CDemonActor_vtable", 236),
]
DRIFT = {
    "CDemonActor": {"segments": [segment(0, 30), segment(4100, 1)]},
    "CBox": {"segments": [segment(0, 5)]},
    "CGrown": {"segments": [segment(0, 5)]},
    "CShifted": {"segments": [segment(0, 9), segment(8, 4)]},
    "CPoint": {"segments": [segment(0, 3)]},
    "CHolder": {"segments": [segment(0, 3)]},
    "CLoop": {"segments": [segment(0, 3)]},
    "CGone": {"segments": [segment(0, 3)]},
}


def by_name(rows):
    return {r["name"]: r for r in rows}


def test_a_verdict_counts_only_well_supported_segments():
    assert pst.drift_verdict(DRIFT, "CDemonActor") == "zero"
    assert pst.drift_verdict(DRIFT, "CShifted") == "shifted"
    assert pst.drift_verdict(DRIFT, "CQuiet") == "unobserved"
    assert pst.drift_verdict(DRIFT, "CDemonActor", min_support = 50) == "unobserved"


def test_an_embedded_struct_is_named_without_its_array_and_never_through_a_pointer():
    assert pst.base_name("CVector3f[3]") == "CVector3f"
    assert pst.base_name("UActorVTable *") is None
    assert pst.base_name("CPodFile *[4]") is None
    assert pst.embedded(by_name(REF)["CDemonActor"]) == ["CLocation"]


def test_layouts_come_in_dependency_order_and_refusals_say_why():
    order, refused = pst.plan(by_name(REF), by_name(DST), DRIFT)
    # An unsized embedded struct comes along before what embeds it; a member
    # type the sibling has no struct for (a built-in, say) is not one to copy.
    assert order == ["CVector3f", "CLocation", "CDemonActor", "CBox", "CGone", "CLoop", "CPoint"]
    assert refused == {
        "CGrown": "size 400 in the sibling, 404 here",
        "CShifted": "code shows it shifted",
        "CQuiet": "no code observes it",
        "CHolder": "embeds CShifted (code shows it shifted)",
    }


def test_a_struct_already_laid_out_is_left_alone():
    order, refused = pst.plan(by_name(REF), by_name(DST), DRIFT)
    assert "CDone" not in order and "CDone" not in refused
    assert pst.plan({}, {"CX": struct("CX", 4)}, {}) == ([], {})


def test_a_struct_already_laid_out_is_not_copied_when_named_directly():
    ref = by_name([struct("CA", 8, [("b", "CB", 0)]), struct("CB", 4)])
    dst = by_name([struct("CA", 8), struct("CB", 4, [("kept", "int", 0)])])
    order, refused = pst.plan(ref, dst, {"CA": {"segments": [segment(0, 3)]}})
    assert order == ["CA"] and refused == {}


def span(lo, hi, delta, support = 5):
    return {"from_lo": lo, "from_hi": hi, "delta": delta, "support": support}


def test_a_field_moves_only_where_the_shift_is_known():
    segments = [span(8, 16, 0), span(32, 40, 0), span(64, 80, 16)]
    assert pst.field_delta(segments, 0, 16) == 0           # nothing goes ahead of the first member
    assert pst.field_delta(segments, 12, 16) == 0          # inside a segment
    assert pst.field_delta(segments, 24, 16) == 0          # between two that moved alike
    assert pst.field_delta(segments, 48, 16) is None       # the insertion could be either side
    assert pst.field_delta(segments, 96, 16) == 16         # after the last, when the size change agrees
    assert pst.field_delta(segments, 96, 24) is None       # and not when 8 bytes are unexplained
    assert pst.field_delta([span(8, 16, 4)], 4, 4) is None  # before a first segment that moved
    assert pst.field_delta([span(8, 16, 0)], 4, 0) == 0
    assert pst.field_delta([], 4, 0) is None


def test_a_field_type_needs_a_known_size_in_the_target():
    dst = by_name([struct("CSized", 40), struct("CStub", 1), struct("CLaid", 1, [("x", "int", 0)])])
    assert pst.type_length("CSized *", dst, 4) == 4
    assert pst.type_length("CSized *[3]", dst, 12) == 12
    assert pst.type_length("CSized[2][3]", dst, 0) == 240
    assert pst.type_length("CStub", dst, 8) is None
    assert pst.type_length("CLaid", dst, 8) == 1
    assert pst.type_length("float", dst, 4) == 4


def test_a_resized_class_keeps_the_fields_its_shift_places():
    ref = by_name([struct("CGrown", 40, [("base", "CBase", 0), ("a", "int", 16), ("b", "int", 24),
                                         ("c", "int", 32), ("d", "CStub", 36)]),
                   struct("CBase", 16), struct("CStub", 4), struct("CSame", 8), struct("CX_vtable", 8),
                   struct("SSys", 8, cat = "/Nocturne/Struct/System")])
    dst = by_name([struct("CGrown", 48), struct("CBase", 16), struct("CStub", 1), struct("CSame", 8),
                   struct("CX_vtable", 12), struct("SSys", 12)])
    drift = {"CGrown": {"segments": [span(16, 16, 0), span(24, 24, 8), span(1, 1, 99, support = 1)]},
             "CSame": {"segments": []}, "CX_vtable": {"segments": []}, "SSys": {"segments": []}}
    plan = pst.shift_plan(ref, dst, drift)
    # a stays, b moved 8 with the inserted bytes, c follows b (the size change agrees),
    # d's type has no size here; the weak segment is ignored.
    assert plan == {"CGrown": {"size": 48, "place": {"0": 0, "16": 16, "24": 32, "32": 40}, "fields": 5}}


def test_a_field_that_would_overlap_or_overrun_is_left_out():
    ref = by_name([struct("CTight", 16, [("a", "int", 0), ("b", "int", 4), ("c", "int", 12)])])
    dst = by_name([struct("CTight", 14)])
    drift = {"CTight": {"segments": [span(0, 0, 0), span(4, 4, -4), span(12, 12, -1)]}}
    # b would land on a; c would end past the struct's 14 bytes.
    assert pst.shift_plan(ref, dst, drift)["CTight"]["place"] == {"0": 0}


@pytest.fixture(name = "annotations")
def fixture_annotations(monkeypatch, tmp_path):
    for program, types in (("nocedit.exe", REF), ("bw.exe", DST)):
        folder = tmp_path / program / "data_types"
        folder.mkdir(parents = True)
        write_json(folder / "data_types.json", {"structs": types + [{"len": 4}]})
    monkeypatch.setattr(sibling_match, "ANNOTATIONS", str(tmp_path))
    return tmp_path


def test_main_reports_and_writes_the_list(annotations, capsys):
    drift = write_json(annotations / "drift.json", {"drift": DRIFT})
    out = annotations / "types.txt"
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--out", str(out)]) == 0
    text = capsys.readouterr().out
    assert "bw.exe: 7 layouts to copy from nocedit.exe, 4 refused" in text
    assert "     1  embeds CShifted: CHolder" in text
    assert out.read_text().splitlines()[:2] == ["CVector3f", "CLocation"]
    assert pst.main(["--program", "bw.exe", "--drift", drift]) == 0

    shifts = annotations / "shifts.json"
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--out-shifts", str(shifts)]) == 0
    assert "1 resized classes: 1 of 1 fields placed by their measured shift" in capsys.readouterr().out
    assert json.loads(shifts.read_text()) == {"CGrown": {"fields": 1, "place": {"0": 0}, "size": 404}}
    assert (annotations / "shifts.json.txt").read_text() == "CGrown\n"


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["plan_struct_transfer.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "plan_struct_transfer.py"), run_name = "__main__")
    assert exit_info.value.code == 0
