# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json as write
import tu_anchor

# Source side: named stems. Target side: bare FUN_<addr> stems, as unnamed functions export.
SOURCE = {
    "core/x.cpp": [(0x1000, "f0"), (0x1010, "a1"), (0x1020, "a2"), (0x1030, "a3"), (0x1040, "a4"),
                   (0x1050, "f5")],
    "core/w.cpp": [(0x1100, "w1"), (0x1110, "w2")],
    "core/y.cpp": [(0x1200, "y0"), (0x1210, "y1"), (0x1220, "y2")],
    "crt/s.c": [(0x1300, "s0")],
    "core/z.cpp": [(0x1400, "z0")],
}
TARGET = {
    "core/x.cpp": [0x2000, 0x2010, 0x2020, 0x2030, 0x2040, 0x2050],
    "core/w.cpp": [0x2100, 0x2110],
    "core/y.cpp": [0x2200, 0x2210],
    "crt/s.c": [0x2300],
}
SIZES_A = {0x1200: 10, 0x1210: 20, 0x1220: 20}
SIZES_B = {0x2200: 20, 0x2210: 10}


def tree(root, units, stem):
    for unit, rows in units.items():
        folder = root / "src" / unit
        folder.mkdir(parents = True)
        for row in rows:
            (folder / f"{stem(row)}.json").write_text("{}")
    return root


def funcs(folder, sizes):
    folder.mkdir(parents = True)
    records = [{"addr": f"{a:08X}", "body": [{"size": s}]} for a, s in sizes.items()]
    (folder / "functions_bucket_00.json").write_text(json.dumps(records + ["junk", {"name": "no addr"}]))
    (folder / "functions_buckets.json").write_text(json.dumps({"bucket_count": 1}))
    (folder / "broken.json").write_text("{")
    return folder


@pytest.fixture(name = "roots")
def fixture_roots(tmp_path):
    src = tree(tmp_path / "annotations" / "src.exe" / "pseudocode", SOURCE,
               lambda row: f"{row[1]}_FUN_{row[0]:08x}")
    tgt = tree(tmp_path / "annotations" / "tgt.exe" / "pseudocode", TARGET, lambda a: f"FUN_{a:08x}")
    (src / "src" / "core" / "readme.txt").write_text("not a unit")
    (src / "src" / "core" / "empty.cpp").mkdir()
    (src / "src" / "core" / "empty.cpp" / "notes.json").write_text("{}")
    anchors = tmp_path / "anchors.json"
    anchors.write_text(json.dumps([{"nocedit": "0x00001000", "nocturne": "0x00002000"},
                                   {"nocedit": "0x00001050", "nocturne": "0x00002050"}]))
    return {"src": src, "tgt": tgt, "anchors": anchors, "out": tmp_path / "out",
            "src_funcs": funcs(tmp_path / "src_funcs", SIZES_A), "tgt_funcs": funcs(tmp_path / "tgt_funcs", SIZES_B)}


def args(roots, *extra):
    return ["--anchors", str(roots["anchors"]), "--from-root", str(roots["src"]), "--to-root", str(roots["tgt"]),
            "--from-funcs", str(roots["src_funcs"]), "--to-funcs", str(roots["tgt_funcs"]),
            "--out-dir", str(roots["out"]), *extra]


def test_a_unit_lists_every_function_stem_named_or_bare_in_address_order(roots):
    units = tu_anchor.tu_map(str(roots["tgt"]))
    assert units["core/w.cpp"] == [(0x2100, "FUN_00002100"), (0x2110, "FUN_00002110")]
    assert "core/empty.cpp" not in tu_anchor.tu_map(str(roots["src"]))


def test_sizes_sum_each_functions_body_and_skip_what_is_not_a_record_list(roots):
    assert tu_anchor.sizes(str(roots["tgt_funcs"])) == {"00002200": 20, "00002210": 10}


def test_the_program_is_named_by_its_annotations_folder(roots):
    assert tu_anchor.program_of(str(roots["src"])) == "src.exe"


def test_a_run_pairs_by_position_when_the_lengths_agree_else_by_unique_sizes():
    a = [(0x10, "a"), (0x20, "b"), (0x30, "c")]
    b = [(0x40, "x"), (0x50, "y")]
    sizes_a = {"00000010": 5, "00000020": 7, "00000030": 7}
    sizes_b = {"00000040": 7, "00000050": 5}
    assert list(tu_anchor.resolve_run(a, b, -1, 3, -1, 2, sizes_a, sizes_b)) == [(0, 1, "size")]
    assert list(tu_anchor.resolve_run(a, b, -1, 2, -1, 2, sizes_a, sizes_b)) == [(0, 0, "positional"),
                                                                                (1, 1, "positional")]
    assert list(tu_anchor.resolve_run(a, b, 0, 1, -1, 2, sizes_a, sizes_b)) == []
    assert list(tu_anchor.resolve_run(a, b, -1, 3, -1, 2, {}, sizes_b)) == []


def test_without_a_diff_it_writes_the_candidates_and_says_how_to_corroborate(roots, capsys):
    tu_anchor.main(args(roots, "--reviewed", "", "--merge", ""))
    out = capsys.readouterr().out
    assert "candidates: 8 (positional 7, size 1); 2 unresolved" in out
    assert "re-run this with --diff" in out
    candidates = json.loads((roots["out"] / "candidates.json").read_text())
    assert {(c["a"], c["b"], c["method"]) for c in candidates if c["tu"] == "core/y.cpp"} == {
        ("00001200", "00002210", "size")}
    assert {"nocedit": "0x00001010", "nocturne": "0x00002010"} in json.loads(
        (roots["out"] / "candidates_anchors.json").read_text())


def test_restricting_to_units_skips_one_either_side_lacks(roots, capsys):
    tu_anchor.main(args(roots, "--tu", "core/z.cpp", "core/w.cpp", "--reviewed", "", "--merge", ""))
    assert "candidates: 2 (positional 2); 0 unresolved" in capsys.readouterr().out


def diff_entry(cls, size_a, size_b, distance = 0.5):
    return {"class": cls, "distance": distance, "size_a": size_a, "size_b": size_b}


def test_each_candidate_is_judged_and_the_accepted_merge_into_the_existing_pairs(roots, tmp_path, capsys):
    diff = write(tmp_path / "diff.json", {
        "0x1010": diff_entry("identical", 10, 10, 0.0), "0x1020": diff_entry("logic-change", 100, 120),
        "0x1040": diff_entry("logic-change", 10, 10), "0x1100": diff_entry("logic-change", 10, 50),
        "0x1110": diff_entry("const-change", 10, 10), "0x1200": diff_entry("logic-change", 10, 30),
        "0x1300": diff_entry("logic-change", 10, 11)})
    reviewed = write(tmp_path / "reviewed.json", {"entries": [
        {"a": "00001040", "b": "00002040", "status": "reject", "note": "different body"},
        {"a": "00001100", "b": "00002100", "status": "accept"},
        {"a": "00001110", "b": "00009999", "status": "accept"}]})
    merge = write(tmp_path / "pairs.json", {"pairs": [
        {"a": "00001010", "b": "00009999", "note": "kept"}, {"a": "00001020", "b": "00002020", "note": "same"},
        {"a": "00005000", "b": "00002110", "note": "holds w2's target"}]})
    tu_anchor.main(args(roots, "--diff", diff, "--reviewed", reviewed, "--merge", merge))
    out = capsys.readouterr().out
    assert "reviewed overrides: 3" in out
    assert "collisions with the existing file (existing entry kept): 2" in out
    assert "00001010 -> existing 00009999, proposed 00002010" in out
    assert "00001110 -> existing <b already used>, proposed 00002110" in out
    assert "accepted 4 (corroborated 2, drift 1, reviewed 1), 1 new" in out
    doc = json.loads((roots["out"] / "sibling_manual_pairs.json").read_text())
    assert (doc["from"], doc["to"]) == ("src.exe", "tgt.exe")
    assert [p["a"] for p in doc["pairs"]] == ["00001010", "00001020", "00001100", "00005000"]
    assert "accepted on review of both bodies" in doc["pairs"][2]["note"]
    review = {c["a"]: (c["verdict"], c.get("why", "")) for c in
              json.loads((roots["out"] / "needs_review.json").read_text())}
    assert review == {
        "00001030": ("NO-DIFF", "not compared"), "00001040": ("REJECTED", "different body"),
        "00001200": ("REVIEW", "logic-change d=0.500 10/30 (3.0x) -- too far apart to tell a rewrite "
                               "from a mispairing"),
        "00001300": ("REVIEW", "CRT interior: walled off by policy")}


def test_accepted_pairs_carry_how_they_were_proven(roots, tmp_path, capsys):
    diff = write(tmp_path / "diff.json", {"0x1010": diff_entry("identical", 10, 10, 0.0),
                                          "0x1020": diff_entry("logic-change", 100, 120)})
    tu_anchor.main(args(roots, "--diff", diff, "--reviewed", str(tmp_path / "none.json"), "--merge", ""))
    capsys.readouterr()
    notes = {p["a"]: p["note"] for p in json.loads((roots["out"] / "sibling_manual_pairs.json").read_text())["pairs"]}
    assert notes["00001010"] == ("a1_FUN_00001010. TU-positional anchor in core/x.cpp between verified neighbours; "
                                 "corroborated by reloc-masked bytes: identical d=0.000 (10/10 B).")
    assert "bodies drifted but sizes agree (1.20x), so the slot is sound" in notes["00001020"]


def test_runs_as_a_script(roots, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["tu_anchor.py", *args(roots, "--reviewed", "", "--merge", "")])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "tu_anchor.py"), run_name = "__main__")
    assert "candidates: 8" in capsys.readouterr().out
