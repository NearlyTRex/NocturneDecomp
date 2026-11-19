# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import transforms as tf


def test_undefined_casts_and_types_get_sized_names():
    code = "undefined4 x; p = (undefined1 *)q; r = (undefined8*)s; undefined v; undefined_ptr w;"
    out = tf.transform_undefined_types(tf.transform_undefined_pointer_casts(code))
    assert out == "uint x; p = (byte *)q; r = (ulonglong*)s; byte v; undefined_ptr w;"


@pytest.mark.parametrize("call, name", [
    ("crt_stdio_c_fread_FUN_005fd990(b)", "fread(b)"),
    ("crt_wsock32_c_send(s)", "send(s)"),                    # an import, no address
    ("crt_x_c_foo_0060fa90()", "foo()"),                     # a thunk's bare address
    ("crt_unknown_c_FUN_005bab17()", "FUN_005bab17()"),      # an unnamed one keeps its address
])
def test_crt_wrappers_take_their_plain_names(call, name):
    assert tf.transform_crt_functions(call) == name


VARIADIC = """int __cdecl f(char *buf,char *format,...)
{
  va_list_t local_8;
  va_list_t other;
  local_8.value[0] = (char * [1])&stack0x0000000c;
  _vsprintf(buf,format,(va_list_t)&local_8);
  _vsprintf(buf,format,(va_list_t)&other);
  local_8.value[0] = (char * [1])(char *)0x0;
  other.value[0] = (char * [1])(char *)0x0;
}"""


def test_a_va_list_is_started_from_the_last_named_parameter():
    out = tf.transform_variadic_functions(VARIADIC)
    assert "  VA_START_T(local_8, format);\n  _vsprintf(buf,format,local_8);\n" in out
    assert "  VA_END_T(local_8);\n" in out
    # A va_list_t that was never started is not one of the function's own
    assert "(va_list_t)&other" in out and "other.value[0] = (char * [1])(char *)0x0;" in out


@pytest.mark.parametrize("code", [
    "void f(int a) { x.value[0] = 0; }",                                   # not variadic
    "void f(char *fmt,...) { g(fmt); }",                                   # nothing to fix
    "void f(...) { x.value[0] = (char * [1])&stack0x4; }",                 # no named parameter
    "void f(char *fmt,...)\n{\n  _vsprintf(b,fmt,(va_list_t)&x);\n}",      # nothing started
])
def test_code_without_a_started_va_list_is_left_alone(code):
    assert tf.transform_variadic_functions(code) == code


@pytest.mark.parametrize("code, name", [
    ("int f(char*format,...)", "format"),
    ("int f(char * fmt , ...)", "fmt"),
    ("/* see ... (", None),           # no ')' on the line, and no signature after it
    ("int f(int a, int b)", None),    # no '...' parameter
    ("int f(..., int a)", None),
    ("int f(, ...)", None),
])
def test_the_last_named_parameter(code, name):
    assert tf._find_last_named_param(code) == name


ALLOC = """void f(void)
{
  CAmmo *pCVar1;
  void *pvVar2;
  CActor **ppCVar3;
  int iVar4;

  pCVar1 = shape_memdbg_cpp_debugMalloc_FUN_00401000(0x10);
  pvVar2 = malloc(4);
  ppCVar3 = calloc(1,4);
  pCVar1 = (CAmmo *)malloc(8);
  iVar4 = malloc(4);
  if (pCVar1 == malloc(4)) {
  pCVar1 = core_actor_cpp_castToClassHash_FUN_00402000(p,&g_CAmmoClassInfo);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_00402000(p,q);
  pCVar1 = g(1);
}"""


def test_void_results_are_cast_to_the_pointer_they_are_assigned_to():
    lines = tf.transform_void_pointer_casts(ALLOC).split("\n")
    assert lines[7:16] == [
        "  pCVar1 = (CAmmo *)shape_memdbg_cpp_debugMalloc_FUN_00401000(0x10);",
        "  pvVar2 = malloc(4);",
        "  ppCVar3 = (CActor **)calloc(1,4);",
        "  pCVar1 = (CAmmo *)malloc(8);",
        "  iVar4 = malloc(4);",
        "  if (pCVar1 == malloc(4)) {",
        "  pCVar1 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_00402000(p,&g_CAmmoClassInfo);",
        # No class info to name the type: the declared type does not apply to a cast
        "  pCVar1 = core_actor_cpp_castToClassHash_FUN_00402000(p,q);",
        "  pCVar1 = g(1);",
    ]


def test_a_statement_is_not_read_as_a_declaration():
    code = ("void f(void)\n{\n  int x;\n  \n"
            "  return *p;\n}\nvoid g(void)\n{\n  p = malloc(4);\n}")
    assert tf._parse_variable_types(code) == {}
    assert tf.transform_void_pointer_casts(code) == code
    # A type never runs on from the line above
    assert tf._parse_variable_types("  foo\n  CBar *b;") == {"b": "CBar *"}


def test_stdio_calls_go_to_the_file_shims():
    code = "fread(b,1,n,fp); _fclose(fp); xfopen(n); list->remove(i); obj.rename(a); vsprintf(b,f,v);"
    assert tf.transform_file_pointer_casts(code) == (
        "_fread(b,1,n,fp); _fclose(fp); xfopen(n); list->remove(i); obj.rename(a); _vsprintf(b,f,v);")


def test_adjusted_pointers_use_arrow_access():
    code = "  CHero_ptr_12 pCVar1;\n  ADJ(pCVar1).base = 0;\n  ADJ(other).base = 0;"
    assert tf.transform_adjusted_pointer_types(code) == (
        "  CHero_ptr_12 pCVar1;\n  ADJ(pCVar1)->base = 0;\n  ADJ(other).base = 0;")
    assert tf.transform_adjusted_pointer_types("ADJ(x).y") == "ADJ(x).y"


def test_a_scanline_function_is_cast_to_its_typedef():
    code = "g_ScanlineRenderFunc = renderDepthOnly_FUN_0049072f;\ng_Other = f_FUN_00401000;"
    assert tf.transform_funcptr_assignments(code) == (
        "g_ScanlineRenderFunc = (MainScanlineFunc *)renderDepthOnly_FUN_0049072f;\n"
        "g_Other = f_FUN_00401000;")


def test_a_concat_cast_to_floating_point_is_a_bitcast():
    code = ("d = (double)CONCAT44(f(a),b); x = (float) CONCAT22 (c,(double)CONCAT44(1,2)); "
            "y = (int)CONCAT22(c,d); z = (double)CONCAT44(open")
    assert tf.transform_float_concat_bitcast(code) == (
        "d = __BITCAST_DOUBLE(CONCAT44(f(a),b)); x = __BITCAST_FLOAT(CONCAT22(c,(double)CONCAT44(1,2))); "
        "y = (int)CONCAT22(c,d); z = (double)CONCAT44(open")


SUB = """void f(double weld_tolerance,float scale)
{
  double dStack_5c;
  float fStack_10;
  float10 fVar1;

  a = SUB84(dVar6,0);
  b = SUB84(dStack_5c,0);
  c = SUB84(weld_tolerance,0);
  d = SUB42(fStack_10,0) + SUB42(scale,0);
  e = SUB82((double)fVar2,0) + SUB84((float)x,0);
  g = SUB84(uVar1,0) + SUB84(fVar1,0) + SUB1(x) + SUB84(open;
}"""


def test_a_floating_point_sub_argument_is_bitcast_first():
    lines = tf.transform_sub_float_bitcast(SUB).split("\n")
    assert lines[6:12] == [
        "  a = SUB84(__BITCAST_UINT64(dVar6),0);",
        "  b = SUB84(__BITCAST_UINT64(dStack_5c),0);",
        "  c = SUB84(__BITCAST_UINT64(weld_tolerance),0);",
        "  d = SUB42(__BITCAST_UINT32(fStack_10),0) + SUB42(__BITCAST_UINT32(scale),0);",
        "  e = SUB82(__BITCAST_UINT64((double)fVar2),0) + SUB84(__BITCAST_UINT32((float)x),0);",
        "  g = SUB84(uVar1,0) + SUB84(fVar1,0) + SUB1(x) + SUB84(open;",
    ]


def test_a_sub_inside_an_integer_sub_is_still_seen():
    code = ("x = SUB42(SUB84(dVar1,0),0) + MYSUB84(dVar2,0) + "
            "SUB84((double)SUB84(dVar3,0),SUB84(dVar4,0));")
    assert tf.transform_sub_float_bitcast(code) == (
        "x = SUB42(SUB84(__BITCAST_UINT64(dVar1),0),0) + MYSUB84(dVar2,0) + "
        "SUB84(__BITCAST_UINT64((double)SUB84(__BITCAST_UINT64(dVar3),0)),SUB84(__BITCAST_UINT64(dVar4),0));")


def test_line_numbers_are_decimal():
    code = 'g_CurrentLineNumber = 0xd72; debugMalloc(8, "..\\\\core\\\\ammo.cpp", 0x1e); g(0x1e);'
    assert tf.transform_decimalize_line_numbers(code) == (
        'g_CurrentLineNumber = 3442; debugMalloc(8, "..\\\\core\\\\ammo.cpp", 30); g(0x1e);')


def test_all_transforms_run_in_order_or_only_those_named(monkeypatch):
    seen = []
    monkeypatch.setattr(tf, "transform_adjacency_sentinels",
                        lambda code, func_name = None: seen.append(func_name) or code)
    code = "  undefined4 *p;\n  p = crt_stdio_c_fopen_FUN_00401000(n);\n  g_CurrentLineNumber = 0x10;"
    assert tf.apply_all_transforms(code, func_name = "f") == (
        "  uint *p;\n  p = _fopen(n);\n  g_CurrentLineNumber = 16;")
    assert seen == ["f"]
    assert tf.apply_all_transforms(code, transforms = ["undefined_type"]) == (
        "  uint *p;\n  p = crt_stdio_c_fopen_FUN_00401000(n);\n  g_CurrentLineNumber = 0x10;")
    assert seen == ["f"]


def test_custom_replacements_apply_in_order():
    repls = [{"find": "a", "replace": "b"}, {"find": ""}, {"find": r"b(\d)", "replace": r"c\1", "regex": True}]
    assert tf.apply_custom_replacements("a1 a", repls) == "c1 b"
    assert tf.apply_custom_replacements("a", None) == "a"


def test_the_per_function_caches_read_their_own_keys():
    assert (tf.replacements_cache.json_key, tf.pcode_overrides_cache.json_key) == ("replacements", "pcode_overrides")
