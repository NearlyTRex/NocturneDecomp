# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from pe_helpers import SECTION_EXECUTE, build_sectioned_pe, section_va
from repo_paths import SCRIPTS_DIR
from sibling_images import code_at as at, function, install_programs
import sibling_match
import validate_sibling_mapping as vsm

BASE = 0x400000
CODE = section_va(BASE, 0)
PUSH5, PUSH6, INC, DEC, RET = b"\x6a\x05", b"\x6a\x06", b"\x40", b"\x48", b"\xc3"

# One pair per pin verdict and per shape verdict: (offset, source body, target body)
BODIES = {
    "line": (0x00, PUSH5 * 3 + b"\x90" + RET, PUSH5 * 3 + b"\x90" + RET),      # identical
    "file": (0x20, PUSH5 * 3 + b"\x90" + RET, PUSH6 * 3 + b"\x90" + RET),      # same mnemonics
    "conflict": (0x40, INC * 7 + RET, DEC * 7 + RET),                         # similar size
    "unpinned": (0x60, INC * 7 + RET, DEC * 39 + RET),                        # size mismatch
    "tiny": (0xa0, RET, RET),                                                 # too small to shape
}
CONFIDENCE = {"line": 0.96, "file": 0.91, "conflict": 0.85, "unpinned": 0.65, "tiny": 0.5}


def program(index):
    code = bytearray(b"\xcc" * 0x200)
    records = []
    for name, (offset, *bodies) in BODIES.items():
        code[offset:offset + len(bodies[index])] = bodies[index]
        records.append(function(at(offset), f"core_a.cpp_{name}_FUN_{at(offset):08x}", size = len(bodies[index])))
    return build_sectioned_pe([(".text", bytes(code), SECTION_EXECUTE)], BASE), records


def pins(entries):
    return {"pins": [{"file": f, "line": line, "va": va} for f, line, va in entries]}


@pytest.fixture(name = "inputs")
def fixture_inputs(monkeypatch, tmp_path):
    install_programs(monkeypatch, tmp_path, {"a.exe": program(0), "b.exe": program(1)})
    # ../f1 shifts by +2 (two pin pairs support it); the "file" pair's target line moved on its own.
    pins_a = pins([("../f1", 10, at(0x01)), ("../f1", 20, at(0x21)), ("../f1", 30, at(0xa0)),
                   ("../f2", 5, at(0x41)), ("../f9", 1, at(0x1f0))])
    pins_b = pins([("../f1", 12, at(0x01)), ("../f1", 99, at(0x21)), ("../f1", 32, at(0xa0)),
                   ("../f3", 5, at(0x41))])
    mapping = {"from": "a.exe", "to": "b.exe", "pairs": [
        {"a": f"{at(o):08x}", "b": f"{at(o):08x}", "name": f"core_a.cpp_{n}_FUN_{at(o):08x}",
         "confidence": CONFIDENCE[n], "evidence": ["string:x", "callsite:1"] if n == "line" else ["order:2"]}
        for n, (o, *_) in BODIES.items()]}
    paths = {}
    for key, doc in (("mapping", mapping), ("pins_a", pins_a), ("pins_b", pins_b)):
        paths[key] = tmp_path / f"{key}.json"
        paths[key].write_text(json.dumps(doc))
    return paths


def test_pins_are_indexed_by_the_function_they_land_in(inputs):
    index = vsm.pin_index(sibling_match.Image("a.exe"), sibling_match.load_pins(str(inputs["pins_a"])))
    assert index[f"{at(0x00):08x}"] == {"../f1": {10}}
    assert len(index) == 4


def test_a_files_deltas_are_those_two_pin_pairs_support_plus_none():
    a = [{"file": "f", "line": 10}, {"file": "f", "line": 30}, {"file": "g", "line": 1}]
    b = [{"file": "f", "line": 12}, {"file": "f", "line": 32}, {"file": "h", "line": 1}]
    assert vsm.tu_shifts(a, b) == {"f": {0, 2}}


def test_each_file_gets_its_divergence_class():
    a = [{"file": "f", "line": 10}, {"file": "g", "line": 1}]
    b = [{"file": "f", "line": 10}]
    assert vsm.tu_classes(a, b) == {"f": "identical", "g": "only-in-A"}


def run(inputs, *extra):
    return vsm.main([str(inputs["mapping"]), str(inputs["pins_a"]), str(inputs["pins_b"]), *extra])


def test_every_pair_is_scored_by_pins_and_by_shape(inputs, tmp_path, capsys):
    out = tmp_path / "verdicts.json"
    assert run(inputs, "--list-conflicts", "--out", str(out)) == 0
    printed = capsys.readouterr().out
    assert "pins: 5 in a.exe (4 functions), 4 in b.exe (4 functions)" in printed
    assert "5 pairs: 4 scoreable (1 unpinned)" in printed
    assert "agree (line)      2  (50.0%)" in printed
    assert "agree (file)      1  (25.0%)" in printed
    assert "CONFLICT          1  (25.0%)" in printed
    for shape in ("identical       :     1", "same_mnemonics  :     1", "similar_size    :     1",
                  "size_mismatch   :     1", "unshaped        :     1"):
        assert shape in printed
    assert "  string               1      0         0    0.0%         0" in printed
    assert "  0.65+" not in printed and "  0.60+                0      0         0       -         1" in printed
    assert "only-in-A      : 1" in printed
    assert f"0.85 {at(0x40):08x} -> {at(0x40):08x}  core_a.cpp_conflict" in printed
    assert "A=../f2  B=../f3" in printed
    verdicts = {v["name"].split("_")[2]: v["verdict"] for v in json.loads(out.read_text())["verdicts"]}
    assert verdicts == {"line": "agree_line", "file": "agree_file", "conflict": "conflict", "tiny": "agree_line"}


def test_without_pinned_pairs_or_conflicts_only_the_shape_check_reports(inputs, tmp_path, capsys):
    doc = json.loads(inputs["mapping"].read_text())
    doc["pairs"] = [p for p in doc["pairs"] if "unpinned" in p["name"]]
    inputs["mapping"].write_text(json.dumps(doc))
    run(inputs, "--list-conflicts")
    printed = capsys.readouterr().out
    assert "1 pairs: 0 scoreable (1 unpinned)" in printed
    assert "agree (line)" not in printed and "conflicts by TU class" not in printed


def test_runs_as_a_script(inputs, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["validate_sibling_mapping.py", str(inputs["mapping"]),
                                      str(inputs["pins_a"]), str(inputs["pins_b"])])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "validate_sibling_mapping.py"), run_name = "__main__")
    assert exit_info.value.code == 0
    assert "5 pairs" in capsys.readouterr().out
