# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_bucket, write_json
import audit_transferred_signatures as ats

DOOR = "core_door.cpp_CDoor_"


def param(kind):
    return {"name": "p", "type": kind}


def func(addr, name, *params, ret = "void", **extra):
    return {"addr": addr, "name": name, "ret": ret, "conv": "__cdecl",
            "vars": {"params": [param(p) for p in params]}, **extra}


def struct(name, base = None, first_offset = 0):
    fields = [{"name": "base", "type": base, "offset": first_offset}] if base else []
    return {"name": name, "fields": fields}


TYPES = {
    "structs": [struct("CDemonActor"), struct("CDoor", "CDemonActor"), struct("CBox"),
                struct("CBoxActor", "CDemonActor *"), struct("CLoose", "CBox", first_offset = 4), {"fields": []}],
    "unions": [{"name": "UThing"}],
    "typedefs": [{"name": "TCount"}, {}],
    "enums": [{"name": "EKind"}],
}

GAME = [
    func("00401000", DOOR + "setup_FUN_00401000", "CDoor *"),
    func("00401010", DOOR + "open_FUN_00401010", "CDemonActor *"),
    func("00401020", "core_door.cpp_CDemonActor_hit_FUN_00401020", "CDoor *"),
    func("00401030", DOOR + "close_FUN_00401030", "CBox *"),
    func("00401040", DOOR + "lock_FUN_00401040", "int"),
    func("00401050", DOOR + "byValue_FUN_00401050", "CDoor"),
    func("00401060", DOOR + "stub_FUN_00401060", ret = "int"),
    func("00401070", DOOR + "thunked_FUN_00401070", ret = "int", thunk = True, thtarget = "00401000"),
    func("00401080", DOOR + "guessedBase_FUN_00401080", ret = "undefined4"),
    func("00401090", DOOR + "guessedNothing_FUN_00401090", ret = ""),
    func("004010a0", DOOR + "guessedRight_FUN_004010a0", ret = "undefined4"),
    func("004010b0", "crt_door.c_CDoor_crt_FUN_004010b0", "int"),
    func("004010c0", "core_misc.cpp_freeFunction_FUN_004010c0", "int"),
    func("004010d0", "FUN_004010d0"),
    func("004010e0", "core_door.cpp_thunk_CDoor_relay_FUN_004010e0", "CDoor *"),
    func("004010f0", "core_box.cpp_CBoxActor_place_FUN_004010f0", "CBoxActor *"),
    {"addr": "00401100"}, "not a record",
]

SIBLING = [
    func("00500000", DOOR + "setup_FUN_00500000", "CDemonActor *"),
    func("00500010", DOOR + "guessedBase_FUN_00500010", "CDoor *"),
    func("00500020", DOOR + "stub_FUN_00500020"),
    func("00500030", DOOR + "lock_FUN_00500030", "int"),
    func("00500040", DOOR + "open_FUN_00500040", "CDemonActor *"),
    func("00500050", DOOR + "open_FUN_00500050", "CDemonActor *"),
    func("00500060", "core_box.cpp_CBoxActor_place_FUN_00500060", "CBoxActor *"),
    func("00500070", DOOR + "guessedNothing_FUN_00500070", ret = "undefined4"),
]


def write_source(annotations, program, name, *lines):
    folder = annotations / program / "pseudocode" / "src" / "core" / "door.cpp"
    folder.mkdir(parents = True, exist_ok = True)
    (folder / name).write_text("\n".join(lines) + "\n", encoding = "utf-8")


@pytest.fixture(name = "annotations")
def fixture_annotations(tmp_path, monkeypatch):
    """game.exe with one function per verdict, and sibling.exe sharing some of its cores."""
    monkeypatch.setattr(ats, "REPO", str(tmp_path))
    annotations = tmp_path / "annotations"
    for program, records in (("game.exe", GAME), ("sibling.exe", SIBLING)):
        write_bucket(annotations, program, "functions", records)
        folder = annotations / program / "data_types"
        folder.mkdir(parents = True)
        (folder / "data_types.json").write_text(json.dumps(TYPES), encoding = "utf-8")
    write_bucket(annotations, "game.exe", "vtables",
                 [{"functions": [{"func_addr": "00401010"}, {}, None]}, "junk", {"name": "empty"}])
    write_source(annotations, "game.exe", "guessedBase_FUN_00401080.cpp",
                 "// Address: 00401080", "// Signature: void f(CDemonActor *param_1)")
    write_source(annotations, "game.exe", "guessedRight_FUN_004010a0.cpp",
                 "// Address: 004010A0", "// Signature: void f(CDoor *this_ptr,int x)")
    write_source(annotations, "game.exe", "guessedBase_FUN_00401080.keep.cpp",
                 "// Address: 00401080", "// Signature: void f(CDoor *this_ptr)")
    write_source(annotations, "game.exe", "notes.txt", "// Address: 00401080")
    write_source(annotations, "game.exe", "short.cpp", "// Address: 00401200")
    write_source(annotations, "game.exe", "long.cpp", *["// filler"] * 13, "// Address: 00401300")
    write_source(annotations, "game.exe", "odd.cpp", "// Address: 00401400", "// Signature: unparsable")
    return annotations


def test_the_records_come_from_every_bucket_and_none_is_an_error(annotations):
    assert len(ats.load_functions("game.exe")) == len(GAME) - 2
    with pytest.raises(SystemExit, match = "no function annotations"):
        ats.load_functions("absent.exe")


def test_the_decompiler_receiver_is_read_from_the_pseudocode_header(annotations):
    assert ats.load_effective_signatures("game.exe") == {
        "00401080": "CDemonActor *", "004010a0": "CDoor *", "00401400": None}


def test_vtable_members_are_every_slot_address(annotations):
    assert ats.load_vtable_members("game.exe") == {"00401010"}


def test_inheritance_is_a_base_member_at_offset_zero(annotations):
    base_of, names = ats.load_types("game.exe")
    assert base_of == {"CDoor": "CDemonActor", "CBoxActor": "CDemonActor"}
    assert {"UThing", "TCount", "EKind", "CLoose"} <= names


@pytest.mark.parametrize("name, parts", [
    (None, (None, None)),
    ("core_door.cpp_CDoor_setup_FUN_00401000", ("core_door.cpp", "CDoor_setup")),
    ("core_door.cpp_thunk_CDoor_relay_FUN_00401000", ("core_door.cpp", "CDoor_relay")),
    ("core_door.cpp_FUN_00401000", ("core_door.cpp", None)),
    ("freeFunction", (None, "freeFunction")),
])
def test_a_name_splits_into_its_unit_and_core(name, parts):
    assert ats.split_qualified_name(name) == parts


def test_the_longest_known_class_prefix_names_the_receiver():
    names = {"CBox", "CBoxActor"}
    assert ats.split_class_method("CBoxActor_setup", names) == ("CBoxActor", "setup")
    assert ats.split_class_method("CBox_set_up", names) == ("CBox", "set_up")
    assert ats.split_class_method("helper", names) == (None, None)
    assert ats.split_class_method(None, names) == (None, None)


def test_the_base_chain_stops_at_a_cycle():
    assert ats.ancestors("A", {"A": "B", "B": "C", "C": "A"}) == ["B", "C"]


def test_a_function_has_a_signature_once_anything_was_applied():
    assert not ats.has_signature({"ret": "undefined4"})
    assert ats.has_signature({"ret": "int"}) and ats.has_signature(func("0", "f", "int", ret = ""))
    assert ats.first_param({"vars": {"params": ["junk"]}}) is None


def test_every_receiver_gets_its_verdict(annotations):
    base_of, names = ats.load_types("game.exe")
    effective = ats.load_effective_signatures("game.exe")
    verdicts = {f["addr"]: (ats.classify(f, base_of, names, effective) or ("none",))[0]
                for f in ats.load_functions("game.exe")}
    assert verdicts == {
        "00401000": "ok", "00401010": "wrong_base", "00401020": "wrong_derived",
        "00401030": "wrong_unrelated", "00401040": "wrong_nonclass", "00401050": "wrong_nonclass",
        "00401060": "no_params", "00401070": "thunk_unsigned", "00401080": "unsigned_wrong_base",
        "00401090": "unsigned", "004010a0": "unsigned_ok", "004010b0": "wrong_nonclass", "004010c0": "none",
        "004010d0": "none", "004010e0": "ok", "004010f0": "ok"}
    assert ats.classify(GAME[8], base_of, names)[0] == "unsigned"


@pytest.mark.parametrize("actual, verdict", [
    ("CDoor *", "u_ok"), ("CDoor", "u_wrong_nonclass"), ("CDemonActor *", "u_wrong_base"),
    ("CBox *", "u_wrong_unrelated"), ("int", "u_wrong_nonclass")])
def test_an_inferred_receiver_is_graded_the_same_way(actual, verdict):
    assert ats.receiver_verdict("CDoor", actual, {"CDoor": "CDemonActor"}, {"CBox"}, "u_") == verdict


def test_a_pair_differs_by_count_type_return_and_convention():
    a = func("0", "f", "int", "CDoor *")
    assert ats.compare_pair(a, a) == []
    assert ats.compare_pair(a, func("0", "f", "int")) == ["param count 2 -> 1"]
    other = dict(func("0", "f", "int", "CDemonActor *", ret = "int"), conv = "__fastcall")
    assert ats.compare_pair(a, other) == ["param1 CDoor * -> CDemonActor *", "ret void -> int",
                                          "conv __cdecl -> __fastcall"]
    assert ats.normalize_type(None) == "?" and ats.is_crt("crt_x.c") and not ats.is_crt(None)


def test_the_audit_reports_every_verdict_and_writes_findings(annotations, tmp_path, capsys):
    out = tmp_path / "audit.json"
    assert ats.main(["--program", "game.exe", "--out", str(out), "--show", "40"]) == 0
    text = capsys.readouterr().out
    assert "name claims a receiver : 14" in text and "CRT units skipped      : 1" in text
    assert "--> wrong signatures   : 6" in text and "thunk_unsigned" in text
    assert "--> bad output now     : 1" in text and "TOTAL needing attention: 7" in text
    assert "VTABLE [wrong_base     ]" in text and "core_door.cpp" in text
    doc = json.loads(out.read_text(encoding = "utf-8"))
    assert doc["counts"]["in_vtable"] == 1 and doc["name_core_drift"] is None
    assert {f["verdict"] for f in doc["receiver_findings"]} >= {"wrong_base", "unsigned", "thunk_unsigned"}


@pytest.mark.parametrize("verdict, listed", [
    ("applied", 7), ("unsigned", 1), ("thunk_unsigned", 1), ("wrong_derived", 1)])
def test_one_verdict_can_be_listed_on_its_own(annotations, capsys, verdict, listed):
    ats.main(["--program", "game.exe", "--verdict", verdict, "--include-crt"])
    assert f"of {listed};" in capsys.readouterr().out


def install(annotations, program, records):
    write_bucket(annotations, program, "functions", records)
    folder = annotations / program / "data_types"
    folder.mkdir(parents = True)
    (folder / "data_types.json").write_text(json.dumps(TYPES), encoding = "utf-8")


def test_a_clean_program_lists_nothing(annotations, capsys):
    install(annotations, "clean.exe", [GAME[0], GAME[13]])
    ats.main(["--program", "clean.exe"])
    text = capsys.readouterr().out
    assert "TOTAL needing attention: 0" in text and "worst translation units" not in text
    assert "examples" not in text


def test_every_unit_is_listed_when_each_has_findings(annotations, capsys):
    install(annotations, "messy.exe", [GAME[1]])
    ats.main(["--program", "messy.exe"])
    assert "    core_door.cpp               1  (wrong_base=1)" in capsys.readouterr().out


def test_signatures_compare_with_a_sibling_by_name_core(annotations, capsys):
    ats.main(["--program", "game.exe", "--compare", "sibling.exe", "--show", "5"])
    text = capsys.readouterr().out
    assert "ambiguous, dropped      : 0 in game.exe, 1 in sibling.exe" in text
    assert "signed there, not here  : 1" in text and "signed both, DIFFERENT  : 2" in text
    assert "param0 CDemonActor * -> CDoor *" in text and "param count 0 -> 0" not in text
    assert ats.run_name_core_compare("game.exe", "game.exe", 5) == []
    assert "by kind" not in capsys.readouterr().out


def test_signatures_compare_through_a_mapping(annotations, tmp_path, capsys):
    mapping = write_json(tmp_path / "map.json", {"from": "sibling.exe", "to": "game.exe", "pairs": [
        {"a": "00500000", "b": "00401000", "confidence": 0.9},
        {"a": "00500030", "b": "00401040"}, {"a": "00999999", "b": "00401000"}]})
    ats.main(["--program", "game.exe", "--mapping", mapping])
    text = capsys.readouterr().out
    assert "pairs compared : 2" in text and "pairs differing: 1" in text
    assert "pairs skipped  : 1" in text and "by kind        : {'param0': 1}" in text
    clean = write_json(tmp_path / "clean.json", {"from": "sibling.exe", "to": "game.exe", "pairs": [
        {"a": "00500030", "b": "00401040"}]})
    assert ats.run_mapping_check(clean, 5) == []
    bad = write_json(tmp_path / "bad.json", {"pairs": []})
    with pytest.raises(SystemExit, match = "no 'from'/'to'"):
        ats.run_mapping_check(bad, 5)


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["audit_transferred_signatures.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "audit_transferred_signatures.py"), run_name = "__main__")
    assert exit_info.value.code == 0
