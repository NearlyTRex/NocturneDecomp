# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import globals as gl


def const(name, initializer, type_name = "void*", comment = None, initialized = True):
    return {"name": name, "type": type_name, "initializer": initializer, "is_initialized": initialized,
            "comment": comment}


def var(name, type_name, initializer = None, comment = None, address = "00630000"):
    return {"name": name, "type": type_name, "initializer": initializer, "is_initialized": initializer is not None,
            "comment": comment, "address": address}


class FakeFunction:
    def __init__(self, name):
        self.name = name

    def getName(self):
        return self.name


# --- write cross-references ---------------------------------------------------------

def test_an_address_written_to_is_a_write_address(tmp_path):
    (tmp_path / "cross_references").mkdir()
    (tmp_path / "cross_references" / "cross_references_00.json").write_text(json.dumps([
        {"type": "WRITE", "to": "0063A000"}, {"type": "READ_WRITE", "to": "0063B000"}, {"type": "READ", "to": "0063C000"},
        {"type": "WRITE", "to": "Stack[-0x8]"}, {"type": "WRITE", "to": ""}]))
    assert gl.build_write_xref_addresses(str(tmp_path)) == {"0063a000", "0063b000"}
    # No cross-references at all, or ones that can't be read, are no write addresses
    assert gl.build_write_xref_addresses(str(tmp_path / "none")) == set()


def test_cross_references_that_cannot_be_loaded_are_no_write_addresses(monkeypatch):
    def unreadable(path, name):
        raise OSError("permission denied")
    monkeypatch.setattr(gl, "load_json_files", unreadable)
    assert gl.build_write_xref_addresses("/nowhere") == set()


# --- constants files -------------------------------------------------------------------

def test_an_empty_constants_file_says_so():
    assert gl.generate_constants_file([]).endswith("// No constants found\n")


def test_a_constants_file_includes_what_its_types_and_initializers_need():
    text = gl.generate_constants_file(
        [const("FLOAT_x", "INFINITY", "float"), const("DAT_y", "0x1", "DWORD"), const("DAT_z", "1", "SFoo[2]"),
         const("DAT_w", "(void*)g_Thing")],
        type_to_path_map = {"SFoo": "types/structs/SFoo.h"}, needed_prototype_ranges = {"0x5B0000", "0x400000"})
    assert text.split("// Dependencies\n")[1].split("\n\n")[0].splitlines() == [
        "#include <math.h>", '#include "system/basetypes.h"', '#include "globals.h"',
        '#include "prototypes/prototypes_400000.h"', '#include "prototypes/prototypes_5B0000.h"',
        '#include "types/structs/SFoo.h"']


def test_a_constant_is_defined_static_grouped_by_its_type():
    text = gl.generate_constants_file([
        const("s_b", '"b"', "char[2]"), const("s_a", '"a"', "char[2]", comment = "label"),
        const("DAT_j", "(void*)&case_3"), const("DAT_p", "(void*)(char*)(&g_x)+4"),
        const("DAT_n", "None", "int"), const("DAT_u", None, "int", initialized = False)])
    body = text.split("// CONSTANTS\n")[1]
    assert body.split("\n\n")[1:] == [
        "// char[2] constants\nstatic char s_b[2] = \"b\";\nstatic char s_a[2] = \"a\"; // label",
        "// int constants\n// extern int DAT_n; // No initializer found\n// extern int DAT_u; // No initializer found",
        "// void* constants\n// void* DAT_j = (void*)&case_3; // jump table entry (not exportable)\n"
        "static void* DAT_p = (void *)((char*)(&g_x)+4);\n"]


# --- globals headers and definitions --------------------------------------------------

def test_a_globals_header_declares_each_global_with_what_its_type_needs():
    text = gl.generate_globals_header_file(
        [var("g_b", "CFoo*"), var("g_a", "int"), var("g_ScreenBufferArray", "void*[1200]")],
        "0x630000", {"CFoo": "types/classes/CFoo.h"})
    assert text.splitlines()[:6] == ["#pragma once", "", "// Type dependencies", '#include "system/basetypes.h"',
                                     '#include "defines.h"', '#include "types/classes/CFoo.h"']
    assert "// GLOBAL VARIABLES - Range 0x630000" in text
    assert text.split("// =============================================================================\n\n")[1] == (
        "// CFoo*\nextern CFoo* g_b;\n\n// int\nextern int g_a;\n\n"
        "// void*[GAME_SCREEN_MAX_HEIGHT]\nextern void* g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT];\n")


def test_an_empty_globals_header_says_so():
    text = gl.generate_globals_header_file([])
    assert "// GLOBAL VARIABLES\n" in text and text.endswith("// No global variables in this range\n")


def test_a_globals_header_without_a_type_map_includes_only_basetypes():
    text = gl.generate_globals_header_file([var("g_a", "int"), var("g_b", "int"), var("g_c", "SBase")],
                                           type_to_path_map = {"SBase": "system/basetypes.h"})
    assert text.count("#include") == 1 and "// int\nextern int g_a;\nextern int g_b;\n" in text
    assert gl.generate_globals_header_file([var("g_a", "int")]).count("#include") == 1


def test_a_globals_file_defines_each_global_with_its_initializer():
    text = gl.generate_globals_cpp_file([
        var("g_Sleep", "SLEEP_FUNC*", "(SLEEP_FUNC*)0x00212228", comment = "Sleep"),
        var("g_Open", "OPEN_FUNC*", "(OPEN_FUNC*)0X00212230"),
        var("g_x", "int", "0x5", comment = "five"), var("g_y", "int", "0x6"), var("g_z", "SFoo"),
        var("g_ReciprocalLookupTable", "uint[1600]")], "0x630000")
    assert "// GLOBAL VARIABLE DEFINITIONS - Range 0x630000" in text
    assert text.split("// =============================================================================\n\n")[1] == (
        "// OPEN_FUNC*\nOPEN_FUNC* g_Open = nullptr;\n\n// SFoo\nSFoo g_z = {};\n\n"
        "// SLEEP_FUNC*\nSLEEP_FUNC* g_Sleep = nullptr; // Sleep\n\n"
        "// int\nint g_x = 0x5; // five\nint g_y = 0x6;\n\n"
        "// uint[GAME_RECIPROCAL_TABLE_SIZE]\nuint g_ReciprocalLookupTable[GAME_RECIPROCAL_TABLE_SIZE] = {};\n")


def test_an_empty_globals_file_says_so():
    text = gl.generate_globals_cpp_file([])
    assert "// GLOBAL VARIABLE DEFINITIONS\n" in text and text.endswith("// No global variables in this range\n")


@pytest.mark.parametrize("base_type, initializer, is_import", [
    ("SLEEP_FUNC*", "(SLEEP_FUNC*)0x00212228", True), ("SLEEP_FUNC*", "(SLEEP_FUNC*)shim_Sleep", False),
    ("int", "(int)0x5", False), ("", "(x)0x1", False), ("SLEEP_FUNC*", None, False),
])
def test_an_import_pointer_is_a_func_typedef_set_to_a_raw_address(base_type, initializer, is_import):
    assert gl._is_import_function_pointer(base_type, initializer) is is_import


@pytest.mark.parametrize("type_str, base", [
    ("CDemonActor*", "CDemonActor"), ("struct CDemonActor*", "CDemonActor"), ("char[80]", "char"),
    ("FileSearchHandler*[5]", "FileSearchHandler"), ("int", "int"),
])
def test_a_base_type_name_drops_pointers_arrays_and_tags(type_str, base):
    assert gl.extract_base_type_name(type_str) == base


def test_data_is_split_into_64k_ranges():
    data = [var("a", "int", address = "0063fffc"), var("b", "int", address = "0x00640000"), var("c", "int", address = "0X0064ABCD")]
    assert {key: [d["name"] for d in entries] for key, entries in gl.split_data_by_address_range(data).items()} == \
        {"0x630000": ["a"], "0x640000": ["b", "c"]}


# --- prototypes ---------------------------------------------------------------------

@pytest.mark.parametrize("signature, convention, result", [
    ("void f(int x)", "__cdecl", "void __cdecl f(int x)"),
    ("CFoo * make(void)", "__stdcall", "CFoo * __stdcall make(void)"),
    ("void __cdecl f(void)", "__cdecl", "void __cdecl f(void)"),
    ("f(void)", "__cdecl", "__cdecl f(void)"),
    ("void f", "__cdecl", "void f"), ("void f(void)", None, "void f(void)"), ("", "__cdecl", ""),
])
def test_a_convention_goes_between_the_return_type_and_the_name(signature, convention, result):
    assert gl.insert_calling_convention(signature, convention) == result


def test_a_signature_names_its_custom_types():
    assert gl.extract_types_from_signature(
        "CFoo * __cdecl core_x_cpp_f_FUN_00401000(unsigned int count, SBar *param_2, char *local, bool ok, NULL)") == \
        {"CFoo", "count", "SBar", "ok"}


@pytest.mark.parametrize("signature, indices", [
    ("void f(CFoo_Func *fn, int x, QSORT_COMPARATOR cmp)", [0, 2]), ("void f(void)", []), ("void f()", []),
    ("void f", []), ("void f(CFoo_Func)", []),
])
def test_a_parameter_of_a_function_type_is_found_by_its_type_words(signature, indices):
    assert gl._find_funcdef_params(signature, {"CFoo_Func"}, {"QSORT_COMPARATOR"}) == indices


def test_a_funcdef_parameter_becomes_a_template_that_forwards_with_a_cast():
    assert gl._generate_template_prototype("CDemonActor * __cdecl reg(CFoo_Func *fn, int n)", [0]) == (
        "template<typename T_func0>\ninline CDemonActor * reg(T_func0 fn,int n) {\n"
        "    return reg((CFoo_Func *)fn, n);\n}")
    assert gl._generate_template_prototype("__stdcall run(CFoo_Func *fn)", [0]) == (
        "template<typename T_func0>\ninline void run(T_func0 fn) {\n    run((CFoo_Func *)fn);\n}")


def test_a_prototypes_header_declares_each_function_by_address():
    functions = [
        {"name": "b", "c_name": "b", "address": "00402000", "signature": "void __cdecl b(CFoo_Func *fn);"},
        {"name": "a", "c_name": "a", "address": "00401000",
         "signature": "void __cdecl core_main_c_displayErrorAndQuit_FUN_00401000(char *format,...)"},
        {"name": "c", "c_name": "c", "address": "00403000", "signature": "int c(DWORD x, SFoo *s)"},
        {"name": "d", "c_name": "d", "address": "00404000", "signature": "odd"},
        {"name": "e", "c_name": "e", "address": "00405000", "signature": "(int x"},
    ]
    paths = {"CFoo_Func": "types/funcdefs/CFoo_Func.h", "SFoo": "types/structs/SFoo.h"}
    text = gl.generate_prototypes_header_file(functions, "0x400000", paths)
    assert text.splitlines()[:5] == ["#pragma once", "", "// Dependencies", '#include "system/basetypes.h"',
                                     '#include "types/funcdefs/CFoo_Func.h"']
    body = text.split("// =============================================================================\n\n")[1]
    assert body.splitlines() == [
        "void __cdecl core_main_c_displayErrorAndQuit_FUN_00401000(char *format,...) __attribute__((format(printf, 1, 2)));",
        "void __cdecl b(CFoo_Func *fn);", "template<typename T_func0>", "inline void b(T_func0 fn) {",
        "    b((CFoo_Func *)fn);", "}", "int c(DWORD x, SFoo *s);", "odd;", "(int x;"]
    # Without a type map nothing is included and nothing is a template
    assert "#include" not in gl.generate_prototypes_header_file(functions[:1])
    # A mapped type that is not a base type includes only its own header
    only_sfoo = [{"name": "q", "c_name": "q", "address": "00406000", "signature": "void q(SFoo *s)"}]
    assert gl.generate_prototypes_header_file(only_sfoo, type_to_path_map = {"SFoo": "types/structs/SFoo.h"}) \
        .splitlines()[2:4] == ["// Dependencies", '#include "types/structs/SFoo.h"']
    assert gl.generate_prototypes_header_file([], "0x400000").endswith("// No functions in this range\n")


def test_a_constant_names_the_functions_its_initializer_points_at():
    constants = [const("a", "(void*)core_x_cpp_CFoo_f_FUN_00401000"), const("b", "{engine_y_c_FUN_0040AB00, 0x1}"),
                 const("c", None), const("d", "(void*)FUN_00402000")]
    assert gl.extract_function_references_from_constants(constants) == \
        {"core_x_cpp_CFoo_f_FUN_00401000", "engine_y_c_FUN_0040AB00"}


def test_the_ranges_holding_referenced_functions_are_their_64k_blocks():
    functions = [{"c_name": "f", "address": "00401000"}, {"c_name": "g", "address": "0x005B1234"},
                 {"c_name": "h", "address": "EXTERNAL:x"}]
    assert gl.get_function_address_ranges(functions, {"f", "g", "h", "missing"}) == {"0x400000", "0x5B0000"}


def test_the_crt_header_includes_the_c_headers_every_program_uses():
    text = gl.generate_crt_header([FakeFunction("crt_stdio_c_fread_FUN_005fd990"), FakeFunction("crt_io"),
                                   FakeFunction("crt_odd_c_x_FUN_1"), FakeFunction("main")])
    includes = [line for line in text.splitlines() if line.startswith("#include <")]
    assert includes == ["#include <cctype>", "#include <cerrno>", "#include <cmath>", "#include <cstdarg>",
                        "#include <cstdio>", "#include <cstdlib>", "#include <cstring>", "#include <ctime>"]
    assert "inline void _qsort(void* base, size_t num, size_t size, CompFunc compar) {" in text


def test_a_range_depends_on_the_other_ranges_its_initializers_name():
    ranges = {
        "0x630000": [const("s_anon_00639d28", '"\\\\"', "TerminatedCString"),
                     const("s_hi_00639d30", '"s_anon_00639d28 and PTR_x"', "TerminatedCString")],
        "0x670000": [const("DAT_0067d6f8", "(void*)s_anon_00639d28"), const("DAT_0067d6fc", "(void*)DAT_0067d6f8"),
                     const("DAT_0067d700", None)],
        "0x680000": [const("PTR_x", "(void*)0x1")],
    }
    # A name inside a string literal is text, not a reference
    assert gl.constant_range_dependencies(ranges) == {"0x630000": set(), "0x670000": {"0x630000"}, "0x680000": set()}


def test_a_range_header_includes_the_ranges_it_needs_and_never_the_master_header():
    text = gl.generate_constants_file([const("DAT_0067d6f8", "(void*)s_anon_00639d28")],
                                      needed_constant_ranges = {"0x640000", "0x630000"})
    assert '#include "constants.h"' not in text
    assert text.index('"constants/constants_630000.h"') < text.index('"constants/constants_640000.h"')


def test_a_strings_text_pulls_in_no_header():
    text = gl.generate_constants_file([const("s_x_00630000", '"is_on & g_off"', "TerminatedCString")])
    assert "#include" not in text.replace('#include "system/basetypes.h"', "")


@pytest.mark.parametrize("init", ["(void*)&INT_00685038", "&INT_00685038", "(void*)g_Thing"])
def test_a_globals_address_anywhere_in_the_initializer_includes_globals(init):
    assert '#include "globals.h"' in gl.generate_constants_file([const("DAT_00665fa4", init)])
