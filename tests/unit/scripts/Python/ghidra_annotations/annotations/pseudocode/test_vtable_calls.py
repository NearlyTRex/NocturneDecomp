# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import vtable_calls as vc


@pytest.mark.parametrize("name, cls", [
    ("g_CKeysPtr", "CKeys"), ("g_CDemonMissionPtr", "CDemonMission"), ("g_CGameInstance", "CGame"),
    ("g_CBox", "CBox"), ("g_DirectDrawObject", None), ("g_Cx", None),
])
def test_a_globals_name_gives_its_class(name, cls):
    assert vc.extract_class_from_global(name) == cls


@pytest.mark.parametrize("signature, cls", [
    ("void CPoly_method(CPoly * this_ptr)", "CPoly"), ("int f(CKeys *this_ptr, int key)", "CKeys"),
    ("int f(int key)", None),
])
def test_a_signature_gives_its_this_ptrs_class(signature, cls):
    assert vc.extract_class_from_this_ptr_type(signature) == cls


BOX_OPEN = """void __cdecl core_a_cpp_CBox_open_FUN_000000a1(CBox * this_ptr)
{
  (*this_ptr->vtable->shut)(this_ptr);
  (*this_ptr_00->vtable->tip)(this_ptr_00);
  (* g_CKeysPtr -> vtable -> getKeyState )(g_CKeysPtr,1);
  (*g_DirectDrawObject->vtable->Release)(g_DirectDrawObject);
  (*local_8->vtable->spin)(local_8);
}
"""


def test_only_the_functions_own_this_ptr_and_class_globals_are_calls(tmp_path):
    path = tmp_path / "f.cpp"
    path.write_text(BOX_OPEN)
    # this_ptr_00 is some other object, not the CBox
    assert vc.find_vtable_calls_in_file(str(path)) == [
        {"method_name": "shut", "caller_class": "CBox", "call_type": "this_ptr", "global_name": None},
        {"method_name": "getKeyState", "caller_class": "CKeys", "call_type": "global", "global_name": "g_CKeysPtr"},
    ]


def test_a_this_ptr_call_without_a_class_signature_is_not_counted(tmp_path):
    path = tmp_path / "f.c"
    path.write_text("void f(void)\n{\n  (*this_ptr->vtable->shut)(this_ptr);\n}\n")
    assert vc.find_vtable_calls_in_file(str(path)) == []


def test_the_compiled_files_are_the_keeps_and_unkept_exports():
    files = ["a.cpp", "a.keep.cpp", "b.c", "c.keep.c", "d.cpp", "d.chunked.cpp", "e.mmx.cpp", "f.byval.c",
             "a.asm", "a.json"]
    assert sorted(vc.compiled_function_files(files)) == [
        ("a", "a.keep.cpp"), ("b", "b.c"), ("c", "c.keep.c"), ("d", "d.cpp")]


def write_tree(root):
    """A CBox method calling its shut and a CKeys global's getKeyState, a C unit calling
    getKeyState too, a kept function whose export is ignored, and a reference-only variant."""
    tu = root / "core" / "a.cpp"
    tu.mkdir(parents = True)
    (tu / "CBox_open_FUN_000000a1.cpp").write_text(BOX_OPEN)
    (tu / "CBox_spin_FUN_000000a2.cpp").write_text("void f(CBox * this_ptr)\n{\n  (*this_ptr->vtable->lid)(this_ptr);\n}\n")
    (tu / "CBox_spin_FUN_000000a2.keep.cpp").write_text("void f(CBox * this_ptr)\n{\n  (*this_ptr->vtable->shut)(this_ptr);\n}\n")
    (tu / "CBox_spin_FUN_000000a2.chunked.cpp").write_text("void f(CBox * this_ptr)\n{\n  (*this_ptr->vtable->hinge)(this_ptr);\n}\n")
    main = root / "core" / "main.c"
    main.mkdir()
    (main / "waitWithSkip_FUN_000000b0.c").write_text(
        "void f(void)\n{\n  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr);\n  (*g_CKeysPtr->vtable->flush)(g_CKeysPtr);\n}\n")


def test_the_scan_maps_each_class_method_to_its_callers(tmp_path):
    write_tree(tmp_path)
    assert dict(vc.scan_pseudocode_directory(str(tmp_path))) == {
        ("CBox", "shut"): {"CBox_open_FUN_000000a1", "CBox_spin_FUN_000000a2"},
        ("CKeys", "getKeyState"): {"CBox_open_FUN_000000a1", "waitWithSkip_FUN_000000b0"},
        ("CKeys", "flush"): {"waitWithSkip_FUN_000000b0"},
    }


def entry(name, addr, offset):
    return {"func_name": name, "func_addr": addr, "offset": offset}


def write_vtables(directory):
    directory.mkdir()
    # CLid's table starts with CBox's inherited slot; its own override still maps
    tables = [
        {"addr": "00600000", "functions": []},
        {"addr": "00600010", "functions": [entry("core_a.cpp_CBox_shut_FUN_000000c0", "000000c0", 0),
                                           entry("core_a.cpp_CBox_FUN_000000c4", "000000c4", 4),
                                           entry("crt_cpp.c_pureVirtualStub_FUN_000000c8", "000000c8", 8)]},
        {"addr": "00600020", "functions": [entry("core_a.cpp_CBox_shut_FUN_000000c0", "000000c0", 0),
                                           entry("core_lid.cpp_CLid_tip_FUN_000000d0", "000000d0", 4)]},
        {"addr": "00600030", "functions": [entry("engine_keys.cpp_CKeys_getKeyState_FUN_000000e0", "000000e0", 8)]},
    ]
    (directory / "vtables_bucket_00.json").write_text(json.dumps(tables))
    return str(directory)


def test_the_method_map_keys_each_slot_by_its_functions_class(tmp_path):
    assert vc.load_vtable_method_map(write_vtables(tmp_path / "vtables")) == {
        ("CBox", "shut"): {"func_addr": "000000c0", "offset": 0},
        ("CLid", "tip"): {"func_addr": "000000d0", "offset": 4},
        ("CKeys", "getKeyState"): {"func_addr": "000000e0", "offset": 8},
    }


def test_the_indirect_caller_map_joins_calls_to_slots(tmp_path):
    write_tree(tmp_path / "src")
    assert vc.build_indirect_caller_map(str(tmp_path / "src"), write_vtables(tmp_path / "vtables")) == {
        "000000c0": {"class_name": "CBox", "method_name": "shut", "vtable_offset": 0,
                     "possible_callers": ["CBox_open_FUN_000000a1", "CBox_spin_FUN_000000a2"]},
        "000000e0": {"class_name": "CKeys", "method_name": "getKeyState", "vtable_offset": 8,
                     "possible_callers": ["CBox_open_FUN_000000a1", "waitWithSkip_FUN_000000b0"]},
    }


def test_the_asm_index_keeps_the_first_file_of_each_name(tmp_path):
    for sub in ("a", "b"):
        (tmp_path / sub).mkdir()
        (tmp_path / sub / "f.asm").write_text("")
    (tmp_path / "a" / "f.json").write_text("{}")
    index = vc.index_asm_files(str(tmp_path))
    assert list(index) == ["f"] and index["f"].endswith("f.asm")


ASM = """; header
    PUSH EBX                            ; 00401000
    MOV EAX,dword ptr [EBX]             ; 00401001
    CALL dword ptr [EAX + 0x4]          ; 00401003
    ADD ESP,0x4                         ; 00401006
    PUSH EAX                            ; 00401009
    PUSH EBX                            ; 0040100a
    CALL dword ptr [EDX + 8]            ; 0040100b
    add esp,12                          ; 0040100e
    CALL dword ptr [ECX + 0x8]          ; 00401011
    MOV ECX,EAX                         ; 00401014
    PUSH 0x1                            ; 00401016
    PUSH EBX                            ; 00401018
    PUSH EBX                            ; 00401019
    CALL dword ptr [EDX]                ; 0040101a
    CALL 0x00402000                     ; 0040101c
    JMP 0x00401000                      ; 00401021
    PUSH EBX                            ; 00401026
    CALL dword ptr [EDX]
    RET                                 ; 00401028
    PUSH ESI                            ; 00401029
    CALL dword ptr [EAX + 0x10]         ; 0040102a
    POP ESI                             ; 0040102d
    RET                                 ; 0040102e
    PUSH ESI                            ; 0040102f
    CALL dword ptr [EAX + 0x10]         ; 00401030
"""


@pytest.fixture(name = "asm")
def fixture_asm(tmp_path):
    path = tmp_path / "caller.asm"
    path.write_text(ASM)
    return str(path)


def sites(asm, offset):
    return [(s["call_addr"], s["estimated_params"], s["method"]) for s in vc.analyze_indirect_call_in_asm(asm, offset)]


def test_a_call_sites_arguments_come_from_the_add_esp_after_it(asm):
    # ADD ESP,0x4 is one argument: the hex reads as hex, not as the 0 before its x
    assert sites(asm, 4) == [("00401003", 1, "add_esp")]
    # A PUSH ends the forward scan; counting back stops at the CALL before
    assert sites(asm, 8) == [("0040100b", 3, "add_esp"), ("00401011", 0, "push_count")]


def test_without_an_add_esp_the_pushes_before_the_call_are_counted(asm):
    # The second slot-0 call has no address comment, and its push count stops at the JMP
    assert sites(asm, 0) == [("0040101a", 3, "push_count"), ("unknown", 1, "push_count")]
    # A RET ends the forward scan, and the file's end ends the last one
    assert sites(asm, 16) == [("0040102a", 1, "push_count"), ("00401030", 1, "push_count")]


def test_the_push_count_reaches_the_first_line(tmp_path):
    path = tmp_path / "f.asm"
    path.write_text("PUSH EBX ; 1\nCALL dword ptr [EAX] ; 2\n")
    assert sites(str(path), 0) == [("2", 1, "push_count")]


def test_the_callers_estimate_is_the_most_common_count(asm):
    analysis = vc.analyze_callers_for_params({"caller": asm}, ["caller", "no_asm"], 8)
    assert analysis == {"estimated_params": 3, "param_estimates": [0, 3], "call_site_count": 2,
                        "caller_details": [{"caller": "caller", "estimated_params": 3},
                                           {"caller": "caller", "estimated_params": 0}]}
    assert vc.analyze_callers_for_params({"caller": asm}, ["caller"], 0x20) is None


def test_the_function_jsons_are_updated_with_their_indirect_callers(tmp_path, monkeypatch):
    warnings = []
    monkeypatch.setattr(vc, "log_warning", warnings.append)
    src = tmp_path / "src"
    write_tree(src)
    tu = src / "core" / "a.cpp"
    (tu / "CBox_open_FUN_000000a1.asm").write_text("    CALL dword ptr [EAX]           ; 000000a5\n    ADD ESP,0x4\n")
    shut = tu / "CBox_shut_FUN_000000c0.json"
    shut.write_text(json.dumps({"function": {"address": "000000c0"}}))
    keys = tu / "CKeys_getKeyState_FUN_000000e0.json"
    keys.write_text(json.dumps({"function": {"address": "000000e0"}}))
    other = tu / "CBox_open_FUN_000000a1.json"
    other.write_text(json.dumps({"function": {"address": "000000a1"}}))
    (tu / "broken.json").write_text("{")
    assert vc.update_function_json_files(str(src), write_vtables(tmp_path / "vtables")) == 2
    assert json.loads(shut.read_text())["possible_indirect_callers"] == {
        "method_name": "shut", "vtable_offset": 0,
        "possible_callers": ["CBox_open_FUN_000000a1", "CBox_spin_FUN_000000a2"],
        "param_analysis": {"estimated_params": 1, "param_estimates": [1], "call_site_count": 1,
                           "caller_details": [{"caller": "CBox_open_FUN_000000a1", "estimated_params": 1}]}}
    # No caller's asm holds a call at offset 8
    assert "param_analysis" not in json.loads(keys.read_text())["possible_indirect_callers"]
    assert "possible_indirect_callers" not in json.loads(other.read_text())
    assert len(warnings) == 1 and "broken.json" in warnings[0]
