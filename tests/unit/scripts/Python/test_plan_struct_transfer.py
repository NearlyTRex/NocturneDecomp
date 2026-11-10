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
    struct("SHeader", 4, [("a", "int", 0)], "/Nocturne/Struct/System/winnt.h"),
    struct("SCrt", 8, [("a", "int", 0)], "/Nocturne/Struct/System/watcom.h"),
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
    # A system header the build has whole is not offered; a CRT placeholder is
    struct("SHeader", 4, [("b", "int", 0)], "/Nocturne/Struct/System/winnt.h"),
    struct("SCrt", 1, cat = "/Nocturne/Struct/System/watcom.h"),
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
        "SCrt": "no code observes it",
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
    # A struct the sibling defines but the target lacks is no built-in: its size here is unknown.
    assert pst.type_length("SHand[2]", dst, 136, {"SHand": struct("SHand", 68)}) is None
    assert pst.type_length("float", dst, 4, {"SHand": struct("SHand", 68)}) == 4


def test_a_size_spelled_by_allocations_counts_when_two_sightings_agree():
    measured = {"SEdge": {"80": 21}, "SOnce": {"288": 1}, "SMixed": {"8": 3, "12": 2}}
    assert pst.measured_size(measured, "SEdge") == 80
    assert pst.measured_size(measured, "SOnce") is None and pst.measured_size(measured, "SMixed") is None
    assert pst.measured_size(None, "SEdge") is None
    assert pst.target_size(struct("CRtti", 64), measured, "CRtti") == 64
    assert pst.target_size(struct("CLaid", 1, [("x", "int", 0)]), measured, "CLaid") == 1
    assert pst.target_size(struct("SEdge", 1), measured, "SEdge") == 80
    assert pst.target_size(None, measured, "SNone") is None


def test_an_unsized_struct_whose_allocations_disagree_is_not_copied():
    ref = by_name([struct("SEdge", 72, [("x", "int", 0)], "/Nocturne/Struct/Game")])
    dst = by_name([struct("SEdge", 1)])
    drift = {"SEdge": {"segments": [segment(0, 3)]}}
    assert pst.plan(ref, dst, drift, measured = {"SEdge": {"80": 4}})[1] == {
        "SEdge": "size 72 in the sibling, 80 here by its allocations"}
    assert pst.plan(ref, dst, drift, measured = {"SEdge": {"72": 4}})[0] == ["SEdge"]
    # and is placed by its shift at the measured size instead
    plan = pst.shift_plan(ref, dst, drift, measured = {"SEdge": {"80": 4}})
    assert plan == {"SEdge": {"size": 80, "place": {"0": 0}, "fields": 1}}


def test_one_contrary_sighting_is_enough_to_refuse_a_copy():
    ref = by_name([struct("SHand", 68, [("bone", "int", 0)], "/Nocturne/Struct/Game")])
    dst = by_name([struct("SHand", 1)])
    drift = {"SHand": {"segments": [segment(0, 3)]}}
    assert pst.plan(ref, dst, drift, measured = {"SHand": {"120": 1}})[1] == {
        "SHand": "size 68 in the sibling; its allocations spell 120 here"}
    assert pst.plan(ref, dst, drift, measured = {"SHand": {"68": 1}})[0] == ["SHand"]


def test_aligned_evidence_only_settles_an_unobserved_struct_as_unchanged():
    ref = by_name([struct("CA", 8, [("x", "int", 0)]), struct("CB", 8, [("x", "int", 0)]),
                   struct("CC", 8, [("x", "int", 0)])])
    dst = by_name([struct("CA", 8), struct("CB", 8), struct("CC", 8)])
    drift = {"CC": {"segments": [segment(4, 3)]}}
    aligned = {"CA": {"segments": [segment(0, 3)]}, "CB": {"segments": [segment(4, 3)]},
               "CC": {"segments": [segment(0, 3)]}}
    order, refused = pst.plan(ref, dst, drift, aligned = aligned)
    assert order == ["CA"]
    assert refused == {"CB": "no code observes it", "CC": "code shows it shifted"}


def test_containers_that_agree_size_their_member():
    ref = by_name([struct("CParticle", 8, [("x", "int", 0)]),
                   struct("CRock", 12, [("base", "CParticle", 0), ("spin", "int", 8)]),
                   struct("CPop", 8, [("base", "CParticle", 0)]),
                   struct("CDrop", 8, [("base", "CParticle", 0)]),
                   struct("SPair", 16, [("two", "CParticle[2]", 0)]),
                   struct("COdd", 16, [("three", "SThree[3]", 0)]), struct("SThree", 4, [])])
    for name in ("CRock", "CPop", "CDrop"):
        ref[name]["fields"][0]["len"] = 8
    ref["SPair"]["fields"][0]["len"] = 16
    ref["COdd"]["fields"][0]["len"] = 12
    dst = by_name([struct("CParticle", 1), struct("CRock", 16), struct("CPop", 12), struct("CDrop", 12),
                   struct("SPair", 24), struct("COdd", 17)])
    drift = {"CRock": {"segments": [span(8, 8, 4)]}}
    votes = pst.container_sizes(ref, dst, drift)
    # CRock's own field moved 4; CPop and CDrop end in their base, so their whole growth is the base's;
    # SPair's two elements share its 8 bytes; COdd's 5 do not divide among 3.
    assert votes == {"CParticle": {"CRock": 12, "CPop": 12, "CDrop": 12, "SPair": 12}}
    assert pst.agreed_sizes(votes) == {"CParticle": 12}
    assert pst.agreed_sizes({"CParticle": {"CRock": 12}}) == {}
    assert pst.agreed_sizes({"CParticle": {"CRock": 12, "CPop": 16}}) == {}


KNOWN = [
    {"program": "bw.exe", "struct": "CActor", "basis": "read from the code",
     "shifts": [{"from": "0x0", "to": "0x4", "delta": 0}, {"from": "0xc", "to": "0xc", "delta": 4}],
     "added": [{"offset": "0x8", "name": "count", "type": "int", "len": 4}]},
    {"program": "bw.exe", "struct": "SHand", "size": 12, "basis": "a container's shift",
     "shifts": [{"from": "0x0", "to": "0x4", "delta": 0}]},
    {"program": "other.exe", "struct": "CActor", "basis": "-", "shifts": []},
]


def test_known_changes_are_read_for_one_build(tmp_path):
    known = pst.load_known(write_json(tmp_path / "known.json", KNOWN), "bw.exe")
    assert known["CActor"]["segments"][1] == {"from_lo": 12, "from_hi": 12, "delta": 4,
                                              "support": pst.KNOWN_SUPPORT}
    assert known["CActor"]["added"] == [{"offset": 8, "name": "count", "type": "int", "len": 4}]
    assert known["SHand"]["size"] == 12 and known["CActor"]["size"] is None


def test_a_known_change_places_a_laid_out_class_with_its_added_field(tmp_path):
    ref = by_name([struct("CActor", 16, [("a", "int", 0), ("b", "int", 4), ("c", "int", 8), ("d", "int", 12)]),
                   struct("SHand", 8, [("bone", "int", 0), ("other", "int", 4)], "/Nocturne/Struct/Game")])
    dst = by_name([struct("CActor", 16, [("a", "int", 0)]), struct("SHand", 1)])
    known = pst.load_known(write_json(tmp_path / "known.json", KNOWN), "bw.exe")
    plan = pst.shift_plan(ref, dst, {}, known = known)
    # c's slot went to the added field; d moved 4 and runs past 16, so it stays out
    assert plan["CActor"] == {"size": 16, "place": {"0": 0, "4": 4}, "fields": 4, "added": known["CActor"]["added"]}
    assert plan["SHand"] == {"size": 12, "place": {"0": 0, "4": 4}, "fields": 2}
    known["CActor"]["added"][0]["offset"] = 4
    with pytest.raises(ValueError, match = "count at 0x4 overlaps a placed field"):
        pst.shift_plan(ref, dst, {}, known = known)


def test_a_known_change_can_reorder_fields_offset_0_included(tmp_path):
    # bw3's CGunFlame: lifetime 0 -> 0xc, position 4 -> 0, the rest stay
    ref = by_name([struct("CFlame", 24, [("lifetime", "float", 0), ("position", "CVector3f", 4),
                                         ("frame", "float", 16), ("kind", "int", 20)])])
    ref["CFlame"]["fields"][1]["len"] = 12
    dst = by_name([struct("CFlame", 28), struct("CVector3f", 12, [("x", "float", 0)])])
    known = pst.load_known(write_json(tmp_path / "known.json", [
        {"program": "bw.exe", "struct": "CFlame", "basis": "-",
         "shifts": [{"from": "0x0", "to": "0x0", "delta": 12}, {"from": "0x4", "to": "0x4", "delta": -4},
                    {"from": "0x10", "to": "0x14", "delta": 4}]}]), "bw.exe")
    plan = pst.shift_plan(ref, dst, {}, known = known)
    assert plan["CFlame"]["place"] == {"0": 12, "4": 0, "16": 20, "20": 24}
    # A stated move onto a field already placed, or before the struct, is left out
    known["CFlame"]["segments"][1]["delta"] = 8
    known["CFlame"]["segments"][2]["delta"] = -24
    assert pst.shift_plan(ref, dst, {}, known = known)["CFlame"]["place"] == {"0": 12}


def test_an_array_its_container_does_not_grow_across_settles_its_element():
    ref = by_name([struct("SLod", 8, [("x", "int", 0)], "/Nocturne/Struct/Game"),
                   struct("SOne", 8, [("x", "int", 0)], "/Nocturne/Struct/Game"),
                   struct("SGrew", 8, [("x", "int", 0)], "/Nocturne/Struct/Game"),
                   struct("CModel", 64, [("head", "int", 0), ("lods", "SLod[5]", 4), ("one", "SOne", 44),
                                         ("grew", "SGrew[2]", 52)])])
    ref["CModel"]["fields"][1]["len"], ref["CModel"]["fields"][2]["len"] = 40, 8
    ref["CModel"]["fields"][3]["len"] = 16
    dst = by_name([struct("SLod", 1), struct("SOne", 1), struct("SGrew", 1), struct("CModel", 72)])
    drift = {"CModel": {"segments": [span(4, 48, 0), span(52, 52, 0), span(68, 68, 8)]}}
    # lods: 0 before, 0 after; one: a single member proves nothing; grew: 0 before, 8 after
    assert pst.unchanged_in_arrays(ref, dst, drift) == {"SLod"}
    order, refused = pst.plan(ref, dst, {}, unchanged = pst.unchanged_in_arrays(ref, dst, drift))
    assert order == ["SLod"] and refused["SOne"] == "no code observes it"


def test_a_known_size_alone_keeps_the_measured_shifts(tmp_path):
    ref = by_name([struct("CInventory", 16, [("a", "int", 0), ("b", "int", 8)])])
    dst = by_name([struct("CInventory", 1)])
    known = pst.load_known(write_json(tmp_path / "known.json", [
        {"program": "bw.exe", "struct": "CInventory", "size": 20, "basis": "ctor and container bounds"}]), "bw.exe")
    drift = {"CInventory": {"segments": [span(0, 0, 0), span(8, 8, 4)]}}
    plan = pst.shift_plan(ref, dst, drift, known = known)
    assert plan["CInventory"] == {"size": 20, "place": {"0": 0, "8": 12}, "fields": 2}


def test_an_unobserved_class_places_only_its_base():
    ref = by_name([struct("CPop", 12, [("base", "CParticle", 0), ("spin", "int", 8)]),
                   struct("SFirst", 8, [("x", "int", 0)]), struct("CParticle", 8)])
    ref["CPop"]["fields"][0]["len"] = 8
    dst = by_name([struct("CPop", 16), struct("SFirst", 12), struct("CParticle", 8, [("x", "int", 0)])])
    plan = pst.shift_plan(ref, dst, {})
    assert plan["CPop"]["place"] == {"0": 0} and plan["SFirst"]["place"] == {}


def test_an_unsized_struct_a_container_grows_across_is_not_copied():
    ref = by_name([struct("SHand", 8, [("bone", "int", 0)], "/Nocturne/Struct/Game"),
                   struct("CChar", 32, [("base", "int", 0), ("hands", "SHand", 8), ("after", "int", 16)]),
                   struct("CFlat", 32, [("hands", "SHand", 8)])])
    dst = by_name([struct("SHand", 1), struct("CChar", 40), struct("CFlat", 32)])
    drift = {"SHand": {"segments": [segment(0, 3)]},
             "CChar": {"segments": [span(4, 8, 0), span(12, 20, 8)]},
             "CFlat": {"segments": [span(4, 20, 0)]}}
    assert pst.grown_in(ref, dst, drift, "SHand") == "CChar.hands"
    assert pst.plan(ref, dst, drift)[1]["SHand"] == "CChar.hands grows across it"
    del drift["CChar"]
    assert pst.grown_in(ref, dst, drift, "SHand") is None


def test_a_laid_out_class_the_code_contradicts_is_placed_anew_when_named():
    ref = by_name([struct("CSlot", 32, [("a", "int", 0), ("b", "int", 16)])])
    dst = by_name([struct("CSlot", 32, [("a", "int", 0), ("b", "int", 16)])])
    drift = {"CSlot": {"segments": [span(0, 4, 0), span(16, 20, -8)]}}
    assert pst.shift_plan(ref, dst, drift) == {}
    assert pst.shift_plan(ref, dst, drift, relayout = {"CSlot"}) == {
        "CSlot": {"size": 32, "place": {"0": 0, "16": 8}, "fields": 2}}


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
    assert "bw.exe: 7 layouts to copy from nocedit.exe, 5 refused" in text
    assert "     1  embeds CShifted: CHolder" in text
    assert out.read_text().splitlines()[:2] == ["CVector3f", "CLocation"]
    assert pst.main(["--program", "bw.exe", "--drift", drift]) == 0

    shifts = annotations / "shifts.json"
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--out-shifts", str(shifts)]) == 0
    assert "1 resized classes: 1 of 1 fields placed by their measured shift" in capsys.readouterr().out
    assert json.loads(shifts.read_text()) == {"CGrown": {"fields": 1, "place": {"0": 0}, "size": 404}}
    assert (annotations / "shifts.json.txt").read_text() == "CGrown\n"
    # A same-size class named for re-layout joins the plan
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--out-shifts", str(shifts),
                     "--relayout", "CShifted"]) == 0
    assert sorted(json.loads(shifts.read_text())) == ["CGrown", "CShifted"]

    # Aligned evidence settles the unobserved CQuiet; a known change plans CDone
    aligned = write_json(annotations / "aligned.json", {"drift": {"CQuiet": {"segments": [segment(0, 3)]}}})
    known = write_json(annotations / "known.json", [{"program": "bw.exe", "struct": "CDone", "basis": "-",
                                                    "shifts": [{"from": "0x0", "to": "0x0", "delta": 0}]}])
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--drift-aligned", aligned, "--out", str(out),
                     "--known", known, "--out-shifts", str(shifts)]) == 0
    assert "CQuiet" in out.read_text().splitlines()
    assert "CDone" in json.loads(shifts.read_text())

    # Identical code settles the CRT placeholder no drift observes
    same = annotations / "unchanged.txt"
    same.write_text("SCrt\n\n")
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--unchanged-users", str(same),
                     "--out", str(out)]) == 0
    assert "SCrt" in out.read_text().splitlines()


def test_main_sizes_a_member_its_containers_agree_on(monkeypatch, tmp_path, capsys):
    ref = [struct("CParticle", 8, [("x", "int", 0)]), struct("CPop", 8, [("base", "CParticle", 0)]),
           struct("CDrop", 8, [("base", "CParticle", 0)])]
    for s in ref[1:]:
        s["fields"][0]["len"] = 8
    dst = [struct("CParticle", 1), struct("CPop", 12), struct("CDrop", 12)]
    for program, types in (("nocedit.exe", ref), ("bw.exe", dst)):
        folder = tmp_path / program / "data_types"
        folder.mkdir(parents = True)
        write_json(folder / "data_types.json", {"structs": types})
    monkeypatch.setattr(sibling_match, "ANNOTATIONS", str(tmp_path))
    drift = write_json(tmp_path / "drift.json", {"drift": {"CParticle": {"segments": [segment(0, 3)]}}})
    shifts = tmp_path / "shifts.json"
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--out-shifts", str(shifts)]) == 0
    assert "size 8 in the sibling, 12 here by its allocations: CParticle" in capsys.readouterr().out
    assert json.loads(shifts.read_text())["CParticle"]["size"] == 12

    # One `new` settles a size by itself, and adds to what the code already spells
    sizes = write_json(tmp_path / "alloc.json", {"sizes": {"CPop": {"16": 1}, "CParticle": {"12": 1}}})
    assert pst.main(["--program", "bw.exe", "--drift", drift, "--alloc-sizes", sizes,
                     "--out-shifts", str(shifts), "--relayout", "CPop"]) == 0
    assert json.loads(shifts.read_text())["CPop"]["size"] == 12  # its RTTI-sized placeholder wins


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["plan_struct_transfer.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "plan_struct_transfer.py"), run_name = "__main__")
    assert exit_info.value.code == 0
