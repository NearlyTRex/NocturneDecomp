# Local imports
from infer_globals_world import BSS, CODE, DATA, Asm, build, by_start, function, hexa, plan, reference_world
import infer_globals as ig


def test_the_reference_types_aligned_operands(tmp_path, monkeypatch):
    reference_world(tmp_path, monkeypatch)
    got = by_start(plan(reference_name = "ref.exe"))
    assert (got["00403000"]["type"], got["00403000"]["note"]) == ("float", "reference: float@00402000")
    assert got["00403008"]["type"] == "double"
    assert (got["00403010"]["type"], got["00403010"]["note"]) == ("CVec", "reference: g_Vec")
    assert (got["00403040"]["type"], got["00403040"]["count"]) == ("int", 16)
    assert "00403100" not in got                        # a string, but .bss has no bytes to read
    assert got["004031c0"]["type"] == "float"         # the drifted struct's interior is not trusted
    assert got["00403180"]["type"] == "int"


def test_this_build_overrides_a_reference_type_it_changed(tmp_path, monkeypatch):
    reference_world(tmp_path, monkeypatch, dst_extra = lambda a: a.fld64(BSS + 0x180).ret())
    assert by_start(plan(reference_name = "ref.exe"))["00403180"]["type"] == "double"


def test_reference_types_the_target_lacks(tmp_path, monkeypatch):
    annotations = reference_world(tmp_path, monkeypatch, dst_types = {"structs": [{"name": "CDrift", "len": 8}]},
                                  ref_types = {"structs": [{"name": "CDrift", "len": 8}]})
    mapping = annotations / "dst.exe" / "reports" / "sibling_mapping_from_ref.json"
    doc = plan(reference_name = "ref.exe", mapping_path = str(mapping))
    got = by_start(doc)
    assert "00403010" not in got and got["00403014"]["type"] == "int"   # CVec unknown here: the access
    # CDrift is matched only through +4, a single operand inside it: not trusted
    assert any(c["start"] == "004031bc" and c["note"] == "one reference operand, inside the object"
               for c in doc["conflicts"])


def test_a_type_only_the_reference_has_is_sized_from_it(tmp_path, monkeypatch):
    reference_world(tmp_path, monkeypatch, dst_types = {"structs": [{"name": "CDrift", "len": 8}]})
    got = by_start(plan(reference_name = "ref.exe"))
    assert (got["00403010"]["type"], got["00403010"]["size"]) == ("CVec", 12)
    assert got["00403010"]["note"] == "reference: g_Vec (type CVec only in the reference)"


def test_an_array_of_arrays_keeps_its_element(tmp_path, monkeypatch):
    # the export names the element (int[4]) and the outer count (4): 64 bytes, not 16
    reference_world(tmp_path, monkeypatch,
                    ref_arrays = [{"addr": hexa(DATA + 0x40), "len": 64, "type": "int[4]", "count": 4}])
    got = by_start(plan(reference_name = "ref.exe"))
    assert (got["00403040"]["type"], got["00403040"]["count"], got["00403040"]["size"]) == ("int[4]", 4, 64)
    assert got["00403040"]["name"] == "g_INT_ARRAY_ARRAY_00403040"


def test_an_earlier_runs_auto_labelled_globals_are_replaced(tmp_path, monkeypatch):
    # an earlier run defined the 64-byte array as 16 bytes, and a folded piece of CVec;
    # both still carry Create Data Label's automatic name
    defined = {"applied_arrays": [{"addr": hexa(BSS + 0x40), "len": 16, "type": "int", "count": 4}],
               "applied_basic_types": [{"addr": hexa(BSS + 0x14), "len": 4, "type": "int"},
                                       {"addr": hexa(BSS), "len": 8, "type": "double"}]}
    labels = [(BSS + 0x40, "g_INT_ARRAY_00403040"), (BSS + 0x14, "g_INT_00403014"), (BSS, "g_DOUBLE_00403000")]
    reference_world(tmp_path, monkeypatch, defined = defined, labels = labels)
    doc = plan(reference_name = "ref.exe")
    assert [(r["start"], r["label"]) for r in doc["replaced_definitions"]] == [
        ("00403014", "g_INT_00403014"), ("00403040", "g_INT_ARRAY_00403040")]
    got = by_start(doc)
    assert (got["00403040"]["count"], got["00403040"]["keeps_name"]) == (16, False)
    assert got["00403010"]["type"] == "CVec"
    assert "00403000" not in got          # an auto-named float the run would size wrongly is not replaced
    assert "auto-labelled globals a reference object replaces: 2" in ig.render(doc)


def test_type_sizes_through_typedefs_arrays_and_the_reference(tmp_path, monkeypatch):
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)],
          types = {"structs": [{"name": "CVec", "len": 12}],
                   "typedefs": [{"name": "HANDLE", "base": "void*"}, {"name": "HGLOBAL", "base": "HANDLE"},
                                {"name": "LOOP", "base": "LOOP"}, {"name": "LOST", "base": "CGone"},
                                {"name": "BARE"}]})
    program = ig.Program("dst.exe")
    assert (program.size_of("HGLOBAL"), program.size_of("CVec[3]"), program.size_of("wchar_t")) == (4, 36, 2)
    assert program.size_of("LOOP") is None and program.size_of("LOST") is None
    assert program.size_of("CGone[2]") is None
    program.borrowed = ig.Program("dst.exe")
    program.borrowed.type_sizes = {"CGone": 6}
    assert (program.size_of("LOST"), program.size_of("CGone[2]")) == (6, 12)
    assert program.size_of("CGone", borrow = False) is None


def test_a_build_whose_typed_accesses_break_the_reference_layout(tmp_path, monkeypatch):
    # dst multiplies by a float at +4 of what the reference reads as one double
    reference_world(tmp_path, monkeypatch, dst_extra = lambda a: a.fld32(BSS + 0xc).ret())
    doc = plan(reference_name = "ref.exe")
    assert any(c["start"] == "00403008" and c["note"] == "this build's accesses do not fit the reference layout"
               for c in doc["conflicts"])
    assert by_start(doc)["00403008"]["note"] is None        # from this build's own access, not the reference


def test_another_reference_object_inside_means_the_layout_changed(tmp_path, monkeypatch):
    # nocedit's 64-byte array would cover where this build put nocedit's next object
    build(tmp_path, monkeypatch, Asm().ret(), b"", [function(CODE, "f", 1)])
    evidence = [ig.Evidence(BSS, "sibling", type = "int", count = 16, size = 64, note = "a", ref = (DATA, 0)),
                ig.Evidence(BSS + 0x10, "sibling", type = "int", size = 4, note = "a2", ref = (DATA, 0)),
                ig.Evidence(BSS + 0x20, "sibling", type = "float", size = 4, note = "b", ref = (DATA + 0x40, 0))]
    inferrer = ig.Inferrer(ig.Program("dst.exe"), evidence)
    inferrer.run()
    assert [(c.start, c.note) for c in inferrer.conflicts] == [(BSS, "another reference object maps inside it")]
    assert [(c.start, c.type) for c in inferrer.candidates] == [(BSS + 0x10, "int"), (BSS + 0x20, "float")]


def test_reference_votes_split_and_size_mismatch(tmp_path, monkeypatch):
    reference_world(tmp_path, monkeypatch)
    evidence = [ig.Evidence(BSS + 0x200, "sibling", type = "float", size = 4, note = "a"),
                ig.Evidence(BSS + 0x200, "sibling", type = "float", size = 4, note = "a"),
                ig.Evidence(BSS + 0x200, "sibling", type = "int", size = 4, note = "b"),
                ig.Evidence(BSS + 0x300, "sibling", type = "float", size = 8, note = "c")]
    inferrer = ig.Inferrer(ig.Program("dst.exe"), evidence)
    inferrer.run()
    assert [(c.type, c.confidence) for c in inferrer.candidates] == [("float", "medium")]
    assert ig.ReferenceObjects(ig.Program("ref.exe")).containing(0x500000) is None
    assert ig.element_type("int[16]") == "int"
