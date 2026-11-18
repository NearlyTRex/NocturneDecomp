# Imports
import json
import runpy
import sys
import types

# Third-party imports
import pytest

# Local imports
import scaffold_recreation as sr


def builtin(name, **extra):
    return {"kind": "builtin", "name": name, **extra}


def ref(kind, name, **extra):
    return {"kind": kind, "name": name, **extra}


def param(name, type_ref):
    return {"name": name, "type": type_ref}


def fn(addr, tu, method, cls = None, ret = None, params = (), **extra):
    owner = f"{cls}_" if cls else ""
    return {"addr": addr, "tu": tu, "method": method, "cls": cls, "name": f"{owner}{method}_FUN_{addr}",
            "ret": ret or builtin("void"), "params": list(params), **extra}


def vtable(addr, owner, *slots):
    return {"addr": addr, "owner": owner, "slots": [{"addr": a, "offset": o, **extra} for o, a, extra in slots]}


def slot(offset, addr, **extra):
    return (offset, addr, extra)


@pytest.fixture(name = "world")
def fixture_world(tmp_path, monkeypatch):
    """Writes nocedit's recreation buckets, nocturne's TUs and the verified mapping, then builds the Model."""
    annotations = tmp_path / "annotations"
    output = tmp_path / "recreation"
    output.mkdir()
    monkeypatch.setattr(sr, "ANNOTATIONS", str(annotations))
    monkeypatch.setattr(sr, "OUTPUT", str(output))

    def build(types_ = (), functions = (), vtables = (), descriptors = (), game_tus = None, unpaired = ()):
        for part, items in (("types", types_), ("functions", functions), ("vtables", vtables),
                            ("descriptors", descriptors)):
            folder = annotations / "nocedit.exe" / "recreation" / part
            folder.mkdir(parents = True, exist_ok = True)
            (folder / f"{part}_bucket_0.json").write_text(json.dumps(list(items)))
        folder = annotations / "nocturne.exe" / "recreation" / "functions"
        folder.mkdir(parents = True, exist_ok = True)
        tus = sorted({f["tu"] for f in functions}) if game_tus is None else game_tus
        (folder / "functions_bucket_0.json").write_text(json.dumps([{"tu": tu} for tu in tus]))
        reports = annotations / "nocturne.exe" / "reports"
        reports.mkdir(parents = True, exist_ok = True)
        pairs = [{"a": f["addr"]} for f in functions if f["addr"] not in unpaired]
        (reports / "sibling_verified_mapping.json").write_text(json.dumps({"pairs": pairs}))
        return sr.Model()
    return build


def render(model, root):
    scaffold = sr.Scaffold(model)
    files = {}
    scaffold.render(files.__setitem__, str(root))
    return scaffold, files


# --- the model ----------------------------------------------------------------------------------

def test_scope_takes_paired_game_functions_and_sets_the_platform_ones_aside(world):
    functions = [
        fn("a1", "crt/heap.cpp", "malloc"),                              # skipped module
        fn("a2", "core/edit.cpp", "pick"),                               # TU retail lacks
        fn("a3", "core/actor.cpp", "lone"),                              # unpaired
        fn("a4", "core/actor.cpp", "arrctor", cls = "CActor"),           # array artifact
        fn("a5", "core/actor.cpp", "copy", cls = "SPoint3"),             # member-wise special
        fn("a6", "sound/mp3.cpp", "decode"),                             # replaced by TU
        fn("a7", "core/actor.cpp", "draw", cls = "CExternalRenderer"),   # replaced by class
        fn("a8", "wincore/winrun.cpp", "sleep"),                         # replaced by tu:function
        fn("a9", "core/actor.cpp", "think", cls = "CActor"),
        fn("aa", "engine/special.cpp", "loadExternalRenderer",
           params = [param("window_handle", builtin("int")), param("name", builtin("char", ptr = 1))]),
        fn("ab", "core/actor.cpp", "arrdtor"),                           # free: no artifact
    ]
    model = world([{"name": "SPoint3", "kind": "struct"}, {"name": "CActor", "kind": "class"}], functions,
                  game_tus = ["core/actor.cpp", "crt/heap.cpp", "sound/mp3.cpp", "wincore/winrun.cpp",
                              "engine/special.cpp"], unpaired = {"a3"})
    assert sorted(model.in_scope) == ["a9", "aa", "ab"]
    assert sorted(model.replaced) == ["a6", "a7", "a8"] and model.replaced_classes == {"CExternalRenderer"}
    assert [p["name"] for p in model.in_scope["aa"]["params"]] == ["name"]
    assert model.report["not recreated as game code (not an error)"] == [
        "decode_FUN_a6 -> miniaudio's decoder, which reads MP3",
        "CExternalRenderer_draw_FUN_a7 -> platform::IRenderer adapter; there is no renderer DLL to validate",
        "sleep_FUN_a8 -> platform::IClock::sleep"]
    unmatched = model.report["platform boundary entry matches nothing in scope"]
    assert "sound/mp3.cpp" not in unmatched and "sound/snddx.cpp" in unmatched


def test_table_entries_and_copy_constructors_come_from_the_tables(world):
    model = world(vtables = [vtable("00001000", "CActor", slot(0, "a1"), slot(4, "a2"))],
                  descriptors = [{"addr": "00002000", "slots": {"copy": "c1"}}, {"addr": "00003000", "slots": {}}])
    assert model.slot_addrs == {"00001000", "00001004", "00002000", "00002004", "00002008",
                                "00003000", "00003004", "00003008"}
    assert model.copy_ctors == {"c1"}


def test_ancestors_run_from_the_root_and_stop_at_a_cycle(world):
    model = world([{"name": "CA", "kind": "class", "parent": "CB"}, {"name": "CB", "kind": "class", "parent": "CC"},
                   {"name": "CC", "kind": "class"},
                   {"name": "CX", "kind": "class", "parent": "CY"}, {"name": "CY", "kind": "class", "parent": "CX"}])
    assert model.ancestors("CA") == ["CC", "CB"]
    assert model.ancestors("CX") == ["CY"] and model.ancestors("CNone") == []


def test_a_function_is_public_when_called_or_referenced_from_outside(world):
    functions = [
        fn("b1", "core/a.cpp", "run", cls = "CA", callers = ["b2"]),           # own class
        fn("b2", "core/a.cpp", "go", cls = "CA", callers = ["b3"]),            # another class
        fn("b3", "core/b.cpp", "use", cls = "CB"),
        fn("b4", "core/a.cpp", "help", callers = ["b5", "zz"]),                # same TU, unknown caller
        fn("b5", "core/a.cpp", "loop", callers = ["b6"]),                      # other TU
        fn("b6", "core/b.cpp", "tick"),
        fn("b7", "core/a.cpp", "hidden", callers = ["b8"]),                    # out-of-scope caller
        fn("b8", "core/edit.cpp", "edit"),
        fn("b9", "core/a.cpp", "crtcall", callers = ["c1"]),                   # the CRT calls it
        fn("c1", "crt/start.cpp", "start"),
        fn("c2", "core/a.cpp", "staticInit", data_refs = ["00009000"]),
        fn("c3", "core/a.cpp", "slotted", data_refs = ["00001000"]),
        fn("c4", "core/a.cpp", "taken", data_refs = ["00001000", "00009000"]),
    ]
    model = world(functions = functions, vtables = [vtable("00001000", "CA", slot(0, "c3"))],
                  game_tus = ["core/a.cpp", "core/b.cpp", "crt/start.cpp"])
    public = {f["method"] for f in model.in_scope.values() if model.is_public(f)}
    assert public == {"go", "loop", "crtcall", "taken"}


# --- spelling types -----------------------------------------------------------------------------

def declarations(module = "core"):
    model = types.SimpleNamespace(types = {"HANDLE_T": {"kind": "typedef", "target": builtin("int", ptr = 1)},
                                           "BROKEN_T": {"kind": "typedef"}})
    scaffold = types.SimpleNamespace(model = model, type_home = {"CActor": "core/actor.cpp", "SVec": "engine/vec.cpp"},
                                     funcdef_alias = {"Callback_t": ("CActor::Callback", "core/actor/actor.h")})
    return sr.Declarations(scaffold, module)


@pytest.mark.parametrize("type_ref, spelled", [
    (builtin("int"), "int"),
    (builtin("dword", ptr = 1), "std::uint32_t *"),
    (builtin("char", ptr = 1, array = [4]), "char **"),
    (ref("system", "uint"), "std::uint32_t"),
    (ref("system", "_FILE", ptr = 1), "std::FILE *"),
    (ref("system", "LPVOID", ptr = 1), "void **"),
    (ref("typedef", "HANDLE_T", ptr = 1), "int **"),
    (ref("class", "CActor"), "CActor"),
    (ref("struct", "SVec", ptr = 1), "engine::SVec *"),
    (ref("funcdef", "Callback_t", ptr = 1), "CActor::Callback *"),
])
def test_each_kind_of_type_is_spelled_portably(type_ref, spelled):
    decls = declarations()
    assert decls.type_ref(type_ref) == spelled


def test_spelling_records_the_includes_and_modules_it_needs():
    decls = declarations()
    for type_ref in (builtin("dword"), ref("system", "_FILE"), ref("struct", "SVec"), ref("funcdef", "Callback_t")):
        decls.type_ref(type_ref)
    assert decls.system_includes == {"<cstdint>", "<cstdio>"}
    assert decls.fwd_modules == {"engine"} and decls.headers == {"core/actor/actor.h"}


@pytest.mark.parametrize("type_ref, message", [
    (builtin("float10"), "builtin float10"),
    (ref("system", "HWND", header = "windef"), "platform type HWND (windef.h)"),
    (ref("system", "HDC"), "platform type HDC (?.h)"),
    (ref("typedef", "BROKEN_T"), "typedef BROKEN_T"),
    (ref("class", "CNowhere"), "CNowhere has no home"),
    (ref("funcdef", "Other_t"), "funcdef Other_t"),
    (ref("pointer", "x"), "pointer type x"),
])
def test_a_type_with_no_portable_spelling_is_unmappable(type_ref, message):
    with pytest.raises(sr.Unmappable, match = message.replace("(", r"\(").replace(")", r"\)").replace("?", r"\?")):
        declarations().type_ref(type_ref)


def test_parameters_get_legal_unique_names():
    decls = declarations()
    params = [param("new", builtin("int")), param("x", builtin("char", ptr = 1)), param("x", builtin("int"))]
    assert decls.parameters(params, variadic = True) == ["int new_", "char *x", "int x_", "..."]
    assert decls.parameters([], variadic = False) == []
    assert decls.types_only(params) == ["int", "char *", "int"]


# --- a hierarchy ----------------------------------------------------------------------------------

INT, VOIDP = builtin("int"), builtin("void", ptr = 1)


def zoo_types():
    return [
        {"name": "CThing", "kind": "class"},
        {"name": "CShape", "kind": "class", "parent": "CThing"},
        {"name": "CBox", "kind": "class", "parent": "CShape", "rtti_file": "core/box.cpp"},
        {"name": "CBall", "kind": "class", "parent": "CShape"},
        {"name": "CCrate", "kind": "class", "parent": "CBox"},
        {"name": "SPoint", "kind": "struct"},
        {"name": "UValue", "kind": "union"},
        {"name": "EMode", "kind": "enum", "size": 1},
        {"name": "EWide", "kind": "enum"},
        {"name": "CVector3", "kind": "class"},
        {"name": "CMatrix4", "kind": "class"},
        # CShape's struct starts after CThing's one slot, so its offset 0 is the table's 4
        {"name": "CShape_vtable", "kind": "struct", "vtable_slots": [{"name": "size", "offset": 0}]},
        {"name": "CThing_vtable", "kind": "struct", "vtable_slots": [{"name": "draw", "offset": 0}]},
        {"name": "Shape_fn", "kind": "funcdef", "ret": INT, "params": [param("a", INT)]},
        {"name": "CBox_Visitor", "kind": "funcdef", "ret": builtin("void"), "params": [param("b", VOIDP)],
         "variadic": True},
        {"name": "Bad_fn", "kind": "funcdef", "ret": ref("system", "HWND"), "params": []},
        {"name": "CBox_BadVisitor", "kind": "funcdef", "ret": ref("system", "HWND"), "params": []},
        {"name": "CLonely", "kind": "class"},
        {"name": "CBase0", "kind": "class"},
        {"name": "SPoint3", "kind": "struct", "parent": "CBase0"},
        {"name": "CSnd", "kind": "class"},
        {"name": "CTimer", "kind": "class"},
        {"name": "SNetworkAddr", "kind": "struct"},
        {"name": "SRenderVertex", "kind": "struct"},
    ]


def zoo_functions():
    box, ball, thing, crate = "core/box.cpp", "core/ball.cpp", "engine/thing.cpp", "core/crate.cpp"
    return [
        fn("t0", thing, "draw", cls = "CThing", params = [param("p", INT)], receiver = True),
        fn("t1", thing, "dtor", cls = "CThing", receiver = True),
        fn("x0", box, "dtor", cls = "CBox", receiver = True, calls = ["t1"], instructions = 9),
        fn("x1", box, "draw", cls = "CBox", params = [param("p", INT)], receiver = True),
        fn("x2", box, "measure", cls = "CBox", receiver = True, ret = INT),
        fn("x3", box, "spin", cls = "CBox", receiver = True),
        fn("x5", box, "ctor", cls = "CBox", receiver = True, params = [param("w", INT)], calls = ["t0"]),
        fn("x6", box, "ctor2", cls = "CBox", receiver = True, params = [param("w", INT)], calls = ["t0"]),
        fn("x7", box, "ctor3", cls = "CBox", receiver = True, instructions = 2),
        fn("x8", box, "copy", cls = "CBox", receiver = True, calls = ["t0"]),
        fn("x9", box, "assign", cls = "CBox", receiver = True, params = [param("o", ref("class", "CBox"))]),
        fn("xa", box, "open", cls = "CBox", receiver = True, callers = ["y0"], params = [param("m", ref("enum", "EMode"))]),
        fn("xb", box, "open", cls = "CBox", receiver = True, callers = ["y0"], params = [param("m", ref("enum", "EMode"))]),
        fn("xc", box, "shut", cls = "CBox", receiver = True, callers = ["y0"], ret = ref("system", "HWND")),
        fn("xd", box, "count", cls = "CBox", callers = ["y0"], ret = INT),
        fn("xe", box, "draw", cls = "CBox", receiver = True, callers = ["y0"], params = [param("q", INT)]),
        fn("xf", box, "spin", cls = "CBox", receiver = True, callers = ["y0"], params = [param("r", INT)]),
        fn("xg", box, "hidden", cls = "CBox", receiver = True),
        fn("xh", box, "copier", cls = "CBox", receiver = True),
        fn("xi", box, "dtor2", cls = "CBox", receiver = True, instructions = 1),
        fn("y0", ball, "dtor", cls = "CBall", receiver = True, calls = ["t1"]),
        fn("y1", ball, "draw", cls = "CBall", params = [param("p", VOIDP)], receiver = True),
        fn("y2", ball, "roll", cls = "CBall", receiver = True, ret = INT),
        fn("y3", ball, "turn", cls = "CBall", receiver = True),
        fn("y4", ball, "shared", cls = "CBall", receiver = True),
        fn("y5", ball, "spin", cls = "CBall", receiver = True, callers = ["x0"], calls = ["x3"]),
        fn("y6", ball, "bounce", cls = "CBall", receiver = True),
        fn("e0", "core/editor.cpp", "pick", cls = "CBox", receiver = True),
        fn("c0", crate, "dtor", cls = "CCrate", receiver = True),
        fn("c1", crate, "draw", cls = "CCrate", params = [param("p", INT)], receiver = True),
        fn("c2", crate, "pack", cls = "CCrate", receiver = True, ret = ref("system", "HWND")),
        fn("f0", box, "helper", callers = ["y0"], ret = ref("class", "SPoint"), params = [param("v", ref("union", "UValue"))]),
        fn("f1", box, "helper", callers = ["y0"], ret = ref("class", "SPoint"), params = [param("v", ref("union", "UValue"))]),
        fn("f2", box, "delete", callers = ["y0"]),
        fn("f3", box, "bad", callers = ["y0"], ret = ref("system", "HWND")),
        fn("f4", box, "local"),
        fn("f5", "engine/thing.cpp", "visit", callers = ["x1"], params = [param("f", ref("funcdef", "Shape_fn"))]),
        fn("f6", "engine/vec.cpp", "dot", callers = ["x1"], ret = ref("class", "CVector3"), params = [param("w", ref("enum", "EWide"))]),
        fn("f7", box, "walk", callers = ["y0"], params = [param("v", ref("funcdef", "CBox_Visitor")),
                                                          param("w", ref("funcdef", "CBox_BadVisitor"))]),
        fn("f8", "engine/thing.cpp", "badwalk", params = [param("v", ref("funcdef", "Bad_fn"))]),
        fn("f9", ball, "secret"),
        fn("y7", ball, "glow", cls = "CBall", receiver = True, ret = ref("system", "HWND")),
        fn("c3", "core/editor.cpp", "turn", cls = "CCrate", receiver = True),
        fn("c4", crate, "size", cls = "CCrate", receiver = True, callers = ["y0"], params = [param("n", INT)]),
        fn("c5", crate, "turn", cls = "CCrate", receiver = True, callers = ["y0"], params = [param("n", INT)],
           calls = ["y3"]),
        fn("p0", ball, "ctor", cls = "SPoint3", receiver = True, params = [param("v", INT)]),   # struct special
        fn("p1", ball, "len", cls = "SPoint3", receiver = True, callers = ["y0"], ret = INT),
        fn("m0", "support/snd.cpp", "ctor", cls = "CTimer", receiver = True, params = [param("n", INT)],
           variadic = True, calls = ["s0"]),
        fn("m1", "support/snd.cpp", "dtor", cls = "CTimer", receiver = True, calls = ["s0"]),
        fn("v0", "core/vecops.cpp", "length", cls = "CVector3", receiver = True, callers = ["y0"],
           ret = builtin("float"), params = [param("scale", builtin("uint"))]),
        fn("s0", "support/snd.cpp", "play", cls = "CSnd", receiver = True, callers = ["y0"]),
    ]


def zoo_vtables():
    return [
        vtable("00010000", "CThing", slot(0, "t0"), slot(8, "t1")),
        vtable("00011000", "CBox", slot(0, "x1"), slot(4, "x2"), slot(8, "x0"), slot(12, "x3"), slot(16, "e0"),
               slot(20, "y6", foreign = True), slot(24, "zz")),
        vtable("00012000", "CBall", slot(0, "y1"), slot(4, "y2"), slot(8, "y0"), slot(12, "y3"), slot(28, "y4"),
               slot(32, "y4"), slot(36, "y7")),
        vtable("00013000", "CBall", slot(0, "y1")),
        vtable("00014000", "CCrate", slot(0, "c1"), slot(4, "x2"), slot(8, "c0"), slot(12, "c3")),
        vtable("00015000", "CLonely", slot(0, "zz")),
    ]


@pytest.fixture(name = "zoo")
def fixture_zoo(world, tmp_path):
    model = world(zoo_types(), zoo_functions(), zoo_vtables(),
                  [{"addr": "00020000", "slots": {"copy": "x8"}}, {"addr": "00021000", "slots": {"copy": "xh"}}],
                  game_tus = ["core/box.cpp", "core/ball.cpp", "engine/thing.cpp", "core/crate.cpp", "engine/vec.cpp",
                              "core/vecops.cpp", "support/snd.cpp"])
    root = tmp_path / "recreation"
    (root / "platform").mkdir(parents = True)
    (root / "platform" / "fwd.h").write_text("namespace nocturne::platform {\nstruct SNetworkAddr;\n}\n")
    return render(model, root)


def body(text):
    """A header's declarations: the lines inside its namespace, blank lines dropped."""
    lines = [ln for ln in text.splitlines() if ln.strip()]
    return lines[lines.index(next(ln for ln in lines if ln.startswith("namespace"))) + 1:-1]


def test_the_scaffold_plans_one_header_and_test_per_class_and_tu(zoo):
    _, files = zoo
    headers = ["common/math/vector3.h", "core/ball/ball.h", "core/ball/base0.h", "core/ball/point3.h", "core/box/box.h",
               "core/box/box_functions.h", "core/box/shape.h", "core/crate/crate.h", "engine/thing/thing.h",
               "engine/thing/thing_functions.h", "engine/vec/vec.h", "support/snd/snd.h", "support/snd/timer.h"]
    fwd = ["common/fwd.h", "core/fwd.h", "engine/fwd.h", "support/fwd.h"]
    assert sorted(files) == sorted(headers + fwd + ["tests/" + h[:-2] + "_test.cpp" for h in headers])


def test_a_class_declares_its_virtuals_specials_and_public_methods(zoo):
    _, files = zoo
    assert files["core/box/box.h"].startswith('#pragma once\n\n#include "core/box/shape.h"\n#include "core/fwd.h"\n')
    assert body(files["core/box/box.h"]) == [
        "class CBox : public CShape {", "public:",
        "    using Visitor = void(void *, ...);",
        "    explicit CBox(int w);",
        "    CBox(const CBox &other);",
        "    CBox &operator=(const CBox &other);",
        "    ~CBox() override;",
        "    void draw(int p) override;",
        "    int size() override;",
        "    void turn() override;",
        "    virtual void bounce();",
        "    void open(EMode m);",
        "    static int count();",
        "    void spin(int r);",
        "};"]


def test_an_abstract_base_gets_the_slots_its_derived_tables_share(zoo):
    _, files = zoo
    assert body(files["core/box/shape.h"]) == [
        "class CShape : public engine::CThing {", "public:",
        "    ~CShape() override;", "    virtual int size() = 0;", "    virtual void turn() = 0;", "};"]
    assert body(files["engine/thing/thing.h"]) == [
        "class CThing {", "public:", "    virtual ~CThing();", "    virtual void draw(int p);", "};"]
    assert body(files["core/ball/ball.h"]) == [
        "class CBall : public CShape {", "public:",
        "    ~CBall() override;", "    void draw(int p) override;", "    int size() override;", "    void turn() override;",
        "    virtual void shared();", "    void spin();", "};"]


def test_free_functions_and_their_aliases_go_in_the_tu_header(zoo):
    _, files = zoo
    assert body(files["core/box/box_functions.h"]) == ["SPoint helper(UValue v);"]
    assert files["core/box/box_functions.h"].count("#include") == 1
    assert body(files["engine/thing/thing_functions.h"]) == ["using Shape_fn = int(int);", "void visit(Shape_fn f);"]
    assert body(files["engine/vec/vec.h"]) == ["common::CVector3 dot(EWide w);"]
    assert '#include "common/fwd.h"' in files["engine/vec/vec.h"]


def test_each_module_forward_declares_its_types(zoo):
    _, files = zoo
    assert body(files["core/fwd.h"]) == ["class CBall;", "class CBase0;", "class CBox;", "class CCrate;", "class CShape;",
                                         "enum class EMode : std::int8_t;", "struct SPoint;", "struct SPoint3;",
                                         "union UValue;"]
    assert body(files["engine/fwd.h"]) == ["class CThing;", "enum class EWide : std::int32_t;"]
    common = body(files["common/fwd.h"])
    assert "class CVector3;" in common and "class CMatrix4;" not in common
    assert "enum class EBlendFactor : std::uint8_t;" in common and "#include <cstdint>" in files["common/fwd.h"]


def test_the_interface_tests_check_what_the_header_declares(zoo):
    _, files = zoo
    box = files["tests/core/box/box_test.cpp"]
    assert box.startswith('#include "core/box/box.h"\n\n#include <gtest/gtest.h>\n')
    assert "TEST(CBox, DerivesFromCShape) {\n    static_assert(std::is_base_of_v<CShape, CBox>);\n}" in box
    assert "static_assert(std::is_constructible_v<CBox, int>);" in box
    assert "static_assert(std::is_same_v<decltype(&CBox::count), int (*)()>);" in box
    assert "static_assert(std::is_same_v<decltype(&CBox::open), void (CBox::*)(EMode)>);" in box
    assert "TEST(CShape, IsAbstract) {\n    static_assert(std::is_abstract_v<CShape>);" in files["tests/core/box/shape_test.cpp"]
    assert "TEST(CoreBoxFunctions, PublicInterface)" in files["tests/core/box/box_functions_test.cpp"]
    assert "static_assert(std::is_same_v<decltype(&helper), SPoint (*)(UValue)>);" in files[
        "tests/core/box/box_functions_test.cpp"]


def test_what_the_scaffold_could_not_express_is_reported(zoo):
    scaffold, _ = zoo
    report = {k: sorted(v) for k, v in scaffold.report.items() if not k.startswith("platform")}
    assert report == {
        "homed in platform/ but not declared in platform/fwd.h": ["SRenderVertex"],
        "method shares a base virtual's name (check in Ghidra)": ["CCrate::size"],
        "left out: unmappable type": ["CBall_glow_FUN_y7 (platform type HWND (?.h))",
                                      "CBox_shut_FUN_xc (platform type HWND (?.h))",
                                      "bad_FUN_f3 (platform type HWND (?.h))",
                                      "funcdef Bad_fn (platform type HWND (?.h))",
                                      "funcdef CBox_BadVisitor (platform type HWND (?.h))",
                                      "walk_FUN_f7 (funcdef CBox_BadVisitor)"],
        "name is a C++ keyword (rename in Ghidra)": ["delete_FUN_f2"],
        "non-virtual with a base virtual's signature, left out (rename in Ghidra)": ["CBox_draw_FUN_xe"],
        "override typed differently from its base (Ghidra signature)": ["CBall_draw_FUN_y1 vs CThing_draw_FUN_t0"],
        "secondary vtable ignored": ["CBall: 00013000 (1 slots) besides 00012000"],
        "slot implementation named differently from its vtable field (rename in Ghidra)": [
            "CShape+4 field size: CBall_roll_FUN_y2", "CShape+4 field size: CBox_measure_FUN_x2"],
        "virtual slot named inconsistently, no vtable struct (rename in Ghidra)": [
            "CBall+32:  -> None", "CShape+12: turn x2, spin x1 -> turn"],
        "virtual slot with no usable signature": ["CBall+32"],
    }
    missing = scaffold.report["platform type missing from the export (renamed in Ghidra?)"]
    assert len(missing) == len(sr.PLATFORM_TYPES) - 2 and "SNetworkAddr" not in missing


def test_a_base_struct_and_plain_classes_get_minimal_declarations(zoo):
    _, files = zoo
    assert body(files["core/ball/base0.h"]) == ["class CBase0 {", "};"]
    assert body(files["core/ball/point3.h"]) == ["struct SPoint3 : public CBase0 {", "    int len();", "};"]
    assert body(files["support/snd/timer.h"]) == ["class CTimer {", "public:", "    CTimer(int n, ...);", "    ~CTimer();", "};"]
    assert body(files["common/math/vector3.h"]) == [
        "class CVector3 {", "public:", "    float length(std::uint32_t scale);", "};"]
    assert "#include <cstdint>" in files["common/math/vector3.h"]
    assert body(files["support/fwd.h"]) == ["class CSnd;", "class CTimer;"]
    assert "#include <cstdint>" not in files["support/fwd.h"]
    timer = files["tests/support/snd/timer_test.cpp"]
    assert "HasVirtualDestructor" not in timer and "Constructors" not in timer and "PublicInterface" not in timer


def test_a_method_hiding_a_base_virtual_is_overloaded_with_it(zoo):
    _, files = zoo
    assert body(files["core/crate/crate.h"]) == [
        "class CCrate : public CBox {", "public:", "    using CBox::size;", "    using CBox::turn;",
        "    ~CCrate() override;", "    void draw(int p) override;", "    void size(int n);", "    void turn(int n);", "};"]
    assert ("static_assert(std::is_same_v<std::integral_constant<void (CCrate::*)(int), &CCrate::size>::value_type, "
            "void (CCrate::*)(int)>);") in files["tests/core/crate/crate_test.cpp"]


# --- odd shapes -----------------------------------------------------------------------------------

def test_an_abstract_base_needs_two_tables_that_share_a_slot(world, tmp_path):
    functions = [fn("a0", "core/a.cpp", "dtor", cls = "CA", receiver = True, calls = ["b0"]),
                 fn("a1", "core/a.cpp", "go", cls = "CA", receiver = True),
                 fn("b0", "core/b.cpp", "dtor", cls = "CB", receiver = True, calls = ["a0"]),
                 fn("c1", "core/c.cpp", "run", cls = "CC", receiver = True)]
    model = world([{"name": "CA", "kind": "class", "parent": "CBase"}, {"name": "CB", "kind": "class", "parent": "CBase"},
                   {"name": "CBase", "kind": "class"}, {"name": "CC", "kind": "class", "parent": "COnly"},
                   {"name": "COnly", "kind": "class"}],
                  functions, [vtable("1", "CA", slot(0, "a0"), slot(4, "a1")), vtable("2", "CB", slot(0, "b0")),
                              vtable("3", "CC", slot(0, "c1"))])
    scaffold = sr.Scaffold(model)
    assert "CBase" not in scaffold.vtable_of and "COnly" not in scaffold.vtable_of


def test_a_parent_the_scaffold_does_not_declare_is_reported(world, tmp_path):
    model = world([{"name": "CA", "kind": "class", "parent": "CGhost"}],
                  [fn("a1", "core/a.cpp", "go", cls = "CA", receiver = True, callers = ["b1"]),
                   fn("b1", "core/b.cpp", "use")])
    scaffold, files = render(model, tmp_path / "out")
    assert scaffold.report["parent outside the scaffold"] == ["CA : CGhost"]
    assert body(files["core/a/a.h"]) == ["class CA {", "public:", "    void go();", "};"]


def test_a_class_with_no_home_is_reported_and_not_declared(world, tmp_path):
    # COwner's table makes it a class; its only descendant with methods is a union, which is not one
    model = world([{"name": "COwner", "kind": "class"}, {"name": "UKid", "kind": "union", "parent": "COwner"}],
                  [fn("u1", "core/a.cpp", "go", cls = "UKid", receiver = True)],
                  [vtable("1", "COwner", slot(0, "u1"))])
    scaffold, files = render(model, tmp_path / "out")
    assert scaffold.report["class without a home TU"] == ["COwner"]
    assert not any("owner" in path for path in files)


def test_a_methodless_base_lives_in_its_rtti_file_and_a_class_with_nothing_public_is_not_declared(world, tmp_path):
    model = world([{"name": "CR", "kind": "class", "rtti_file": "core/a.cpp"},
                   {"name": "CA", "kind": "class", "parent": "CR"}, {"name": "SNetworkAddr", "kind": "struct"}],
                  [fn("a1", "core/a.cpp", "hidden", cls = "CA", receiver = True)])
    scaffold, files = render(model, tmp_path / "out")            # no platform/fwd.h there
    assert scaffold.type_home["CR"] == "core/a.cpp"
    assert body(files["core/a/r.h"]) == ["class CR {", "};"] and "core/a/a.h" not in files
    assert scaffold.report["homed in platform/ but not declared in platform/fwd.h"] == ["SNetworkAddr"]


# --- stale files ----------------------------------------------------------------------------------

def put(root, relpath, text = ""):
    path = root / relpath
    path.parent.mkdir(parents = True, exist_ok = True)
    path.write_text(text, encoding = "utf-8")


def test_only_unplanned_generated_files_nothing_else_uses_are_stale(tmp_path):
    for relpath in ("core/old.h", "core/fwd.h", "core/kept.h", "core/planned.h", "core/notes.txt",
                    "tests/core/x_test.cpp", "tests/core/helper.h", "common/math/hand.h", "platform/p.h",
                    "tests/common/math/hand_test.cpp", "tests/platform/p_test.cpp"):
        put(tmp_path, relpath)
    put(tmp_path, "core/x.cpp", '#include "core/kept.h"\n#include <vector>\n')
    interface = '#include "{}"\n\n#include <gtest/gtest.h>\n'
    put(tmp_path, "tests/core/old_test.cpp", interface.format("core/old.h"))          # goes with its header
    put(tmp_path, "tests/core/gone_test.cpp", interface.format("core/gone.h"))        # its header is gone
    put(tmp_path, "tests/core/kept_test.cpp", interface.format("core/kept.h"))        # its header is ported code
    put(tmp_path, "tests/core/planned_test.cpp", interface.format("core/planned.h"))
    put(tmp_path, "tests/core/old_load_test.cpp",                                    # a behaviour test
        '#include "core/old.h"\n#include "tests/mocks/clock.h"\n')
    put(tmp_path, "tests/core/x_load_test.cpp", interface.format("core/x_load.h"))
    put(tmp_path, "core/x_load.cpp")                                                  # its implementation exists
    assert sr.stale_files(str(tmp_path), {"core/planned.h"}) == [
        "core/old.h", "tests/core/gone_test.cpp", "tests/core/old_test.cpp"]


@pytest.mark.parametrize("relpath, source", [
    ("tests/core/a/b_test.cpp", "core/a/b.cpp"), ("core/a/b.h", "core/a/b.h"), ("tests/core/a/b.h", "tests/core/a/b.h")])
def test_a_test_mirrors_the_implementation_file_it_tests(relpath, source):
    assert sr.tested_source(relpath) == source


# --- main -----------------------------------------------------------------------------------------

@pytest.fixture(name = "run")
def fixture_run(world, tmp_path, monkeypatch, capsys):
    world([{"name": "CA", "kind": "class"}],
          [fn("a1", "core/a.cpp", "go", cls = "CA", receiver = True, callers = ["b1"]), fn("b1", "core/b.cpp", "use")])
    output = tmp_path / "recreation"
    (output / "CMakePresets.json").write_text(json.dumps({"configurePresets": [
        {"name": "ci"}, {"name": "default", "environment": {"NOCTURNE_LLVM_VERSION": "23"}}]}))
    formatted = []
    monkeypatch.setattr(sr.shutil, "which", lambda name: f"/usr/bin/{name}")
    monkeypatch.setattr(sr.subprocess, "run", lambda cmd, check: formatted.append((cmd[:3], len(cmd) - 3, check)))

    def go(*argv):
        assert sr.main(["--output", str(output), *argv]) == 0
        return capsys.readouterr().out
    return go, output, formatted


def test_report_only_writes_nothing(run):
    go, output, formatted = run
    put(output, "core/old.h")
    out = go("--report-only")
    assert out.startswith("in scope: 2 functions, 1 classes\nfiles: 2 headers, 1 tests\n")
    assert "written" not in out and "## stale generated files (remove with --prune) (1)\n  core/old.h" in out
    assert not (output / "core" / "a").exists() and formatted == []


def test_files_are_written_formatted_and_left_alone_unless_forced(run):
    go, output, formatted = run
    out = go()
    assert "written: 3, skipped (exists): 0, pruned: 0" in out
    assert formatted == [(["/usr/bin/clang-format-23", "-i", "--style=file"], 3, True)]
    assert (output / "core" / "a" / "a.h").read_text().startswith("#pragma once")
    (output / "core" / "a" / "a.h").write_text("mine")
    assert "written: 0, skipped (exists): 3" in go()
    assert (output / "core" / "a" / "a.h").read_text() == "mine"
    assert "written: 3, skipped (exists): 0" in go("--force")


def test_prune_deletes_the_stale_files(run):
    go, output, _ = run
    put(output, "core/old.h")
    assert "pruned: 1" in go("--prune")
    assert not (output / "core" / "old.h").exists()


def test_without_the_recreations_clang_format_the_files_stay_unformatted(run, monkeypatch):
    go, _, formatted = run
    monkeypatch.setattr(sr.shutil, "which", lambda name: None)
    assert "WARNING: the recreation's clang-format not found; written files are unformatted" in go()
    assert formatted == []


def test_the_script_runs_as_main(run, monkeypatch):
    _, output, _ = run
    monkeypatch.setattr(sys, "argv", ["scaffold_recreation.py", "--report-only", "--output", str(output)])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(sr.__file__, run_name = "__main__")
    assert stop.value.code == 0
