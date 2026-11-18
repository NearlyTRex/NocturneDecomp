# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import chunk_transform as ct

NAME = "core_box.cpp_CBox_run_FUN_00401000"
SIG = "int __cdecl core_box_cpp_CBox_run_FUN_00401000(CBox *this_ptr,float dt)"


def stmts(n, indent = "    ", text = "x = x + 1;"):
    return [indent + text] * n


def function(body, sig = SIG, decls = ("  int x;",)):
    return "\n".join(["/* WARNING: test */", "", sig, "", "{", *decls, "  ", *body, "}", "", ""])


def chunked(body, **kwargs):
    return ct.generate_chunked_code(function(body, **kwargs), NAME, min_chunk_lines = 3)


# --- declarations ------------------------------------------------------------------------------

@pytest.mark.parametrize("line, field, unpack", [
    ("  int iVar1;", "    int iVar1;", "    int &iVar1 = ctx->iVar1;"),
    ("  CBox *pBox;", "    CBox *pBox;", "    CBox *&pBox = ctx->pBox;"),
    ("  struct CBox local_10;", "    CBox local_10;", "    CBox &local_10 = ctx->local_10;"),
    ("  char buf [16];", "    char buf[16];", "    auto &buf = ctx->buf;"),
    ("  char (*str1) [32];", "    char (*str1) [32];", "    auto &str1 = ctx->str1;"),
    ("  int grid [2] [4];", "    int grid [2] [4];", "    auto &grid = ctx->grid;"),
])
def test_each_local_declaration_becomes_a_field_and_a_reference(line, field, unpack):
    var = ct._parse_declaration(line)
    assert (var.as_struct_field(), var.as_ref_unpack()) == (field, unpack)


def test_a_statement_is_not_a_declaration():
    assert ct._parse_declaration("  x = 1;") is None


@pytest.mark.parametrize("part, field, unpack", [
    ("CBox *this_ptr", "    CBox **this_ptr;", "    CBox *&this_ptr = *ctx->this_ptr;"),
    ("float dt", "    float *dt;", "    float &dt = *ctx->dt;"),
    ("char name [8]", "    char (*name)[8];", "    auto &name = *ctx->name;"),
])
def test_a_parameter_is_shared_through_a_pointer(part, field, unpack):
    params = ct.parse_signature_params(f"void f({part})")
    assert [(p.as_param_field(), p.as_param_unpack()) for p in params] == [(field, unpack)]


@pytest.mark.parametrize("sig, names", [
    ("void f", []), ("void f()", []), ("void f(void)", []), ("int f(int a, ...)", ["a"]),
    ("int f(struct CBox *box,int n)", ["box", "n"]),
])
def test_the_signature_gives_its_named_parameters(sig, names):
    assert [p.name for p in ct.parse_signature_params(sig)] == names


@pytest.mark.parametrize("sig, ret", [
    ("int __cdecl f(void)", "int"), ("char * __stdcall f(void)", "char *"), ("f(void)", "void"),
    ("void __thiscall f(void)", "void"), ("no parens", "void"),
])
def test_the_return_type_leaves_out_the_calling_convention(sig, ret):
    assert ct._return_type(sig) == ret


# --- parsing the function ----------------------------------------------------------------------

def test_the_function_splits_into_warnings_signature_locals_and_body():
    code = "\n".join(["/* WARNING: a", " * more */", "int __cdecl f(int a,", "         int b)", "{",
                      "  int x;", "  ", "  char (*p) [4];", "  x = a;", "  return x;", "}", "", ""])
    warnings, sig, params, locals_, body, trailing = ct.parse_function_parts(code)
    assert warnings == ["/* WARNING: a", " * more */"] and sig == ["int __cdecl f(int a,", "         int b)"]
    assert [p.name for p in params] == ["a", "b"] and [v.name for v in locals_] == ["x", "p"]
    assert body == ["  x = a;", "  return x;"] and trailing == ["}", "", ""]


@pytest.mark.parametrize("code", ["/* only */", "int f(void)\n  x;", "int f(void)\n{\n  int x;\n\n"])
def test_a_function_without_a_signature_brace_or_body_is_not_parsed(code):
    assert ct.parse_function_parts(code) is None


def test_a_body_without_a_closing_brace_runs_to_the_end():
    assert ct.parse_function_parts("int f(void)\n{\n  x = 1;\n  y = 2;")[4] == ["  x = 1;", "  y = 2;"]


@pytest.mark.parametrize("line, depth", [
    ("if (x) {", 1), ("}", -1), ('s = "{";', 0), ("c = '}';", 0), (r's = "\"{";', 0), ("{ { }", 1),
])
def test_brace_depth_skips_strings_and_chars(line, depth):
    assert ct.find_brace_depth_changes(line) == depth


@pytest.mark.parametrize("lines, extent", [
    (["if (a) {", "  x;", "}", "y;"], (1, 3)),
    (["if (a)", "", "{", "  x;", "}"], (3, 5)),
    (["if (a)", "  x;", "y;"], (1, 1)),
    (["if (a) { x; }", "y;"], (1, 1)),
    (["if (a)"], (1, 1)),
    (["if (a) {", "  x;"], (1, 2)),
])
def test_a_blocks_extent_runs_from_its_brace_to_the_matching_one(lines, extent):
    assert ct._block_extent(lines, 0) == extent


@pytest.mark.parametrize("line, kind", [
    ("if (a) {", "if"), ("if(a) {", "if"), ("else if (b) {", "else if"), ("else if(b) {", "else if"),
    ("else {", "else"), ("else", None), ("x = 1;", None),
])
def test_each_branch_opening_has_its_kind(line, kind):
    assert ct._branch_kind(line) == kind


@pytest.mark.parametrize("condition, index, label", [
    ("if (key == 0x35) {", 0, "branch_0x35"), ("else if (n == 7) {", 1, "branch_7"),
    ("if (bVar1) {", 2, "check_bVar1_2"), ("else {", 3, "else_3"), ("if (!x) {", 4, "chunk_4"),
])
def test_each_chunk_is_labelled_from_its_condition(condition, index, label):
    assert ct._generate_chunk_label(condition, index) == label


# --- finding blocks ----------------------------------------------------------------------------

def test_big_branches_become_blocks_and_small_ones_do_not():
    body = ["  if (a) {", *stmts(3), "  }", "  else if (b) {", *stmts(2), "  }", "  else {", *stmts(4), "  }"]
    blocks = ct.find_branch_blocks(body, min_lines = 3)
    assert [(b.label, b.start_line, b.end_line, b.body_start, b.is_else) for b in blocks] == [
        ("check_a_0", 0, 5, 1, False), ("else_1", 9, 15, 10, True)]


def sequential_ifs(sizes, wrap = "  if (big) {"):
    body = [wrap]
    for i, size in enumerate(sizes):
        body += [f"    if (k{i}) {{", *stmts(size, "      "), "    }"]
    return body + ["  }"]


def test_one_huge_block_of_sequential_ifs_is_split_into_groups():
    body = sequential_ifs([2, 2, 2, 2, 2, 2])
    blocks = ct.find_branch_blocks(body, min_lines = 3)
    assert [(b.label, b.start_line, b.end_line, b.is_group) for b in blocks] == [
        ("check_big_0_group_0", 1, 5, True), ("check_big_0_group_1", 5, 9, True),
        ("check_big_0_group_2", 9, 13, True), ("check_big_0_group_3", 13, 17, True),
        ("check_big_0_group_4", 17, 21, True), ("check_big_0_group_5", 21, 25, True)]
    assert blocks[0].body_lines == body[1:5]


@pytest.mark.parametrize("body", [
    ["  if (big) {", *stmts(14, "    "), "  }"],                                        # no inner ifs
    ["  if (big) {", "    if (a) {", *stmts(14, "      "), "    }", "  }"],              # fewer than three
    ["  if (big) {", *sequential_ifs([4, 4, 4], "    do {")[1:-1], "    do {", "    } while (x);", "  }"],
    ["  if (big) {", "    y = 0;", "    if (a) {", *stmts(12, "      "), "    }", "    if (b) { }", "    if (c) { }",
     "  }"],                                                                              # one group only
])
def test_a_huge_block_that_cannot_be_grouped_stays_whole(body):
    assert [b.label for b in ct.find_branch_blocks(body, min_lines = 3)] == ["check_big_0"]


def test_an_oversized_block_is_split_at_its_inner_branches():
    body = ["  if (outer) {", "    y = 0;", "    if (k == 1) {", *stmts(16, "      "), "    }",
            "    else {", *stmts(16, "      "), "    }", "  }", "  else {", *stmts(3), "  }"]
    blocks = ct.find_branch_blocks(body, min_lines = 3)
    assert [(b.label, b.start_line, b.end_line, b.body_start) for b in blocks] == [
        ("check_outer_0_branch_1", 2, 20, 3), ("check_outer_0_else_1", 20, 38, 21), ("else_1", 39, 44, 40)]


@pytest.mark.parametrize("inner", [
    [*stmts(32, "    ")],                                                                 # no branches
    ["    if (a) {", *stmts(32, "      "), "    }"],                                     # one branch per depth
    ["    if (a) {", *stmts(31, "      "), "    }", "    if (b) {", "    }"],            # one is big enough
])
def test_an_oversized_block_without_two_inner_branches_stays_whole(inner):
    body = ["  if (outer) {", *inner, "  }", "  if (z) {", *stmts(3), "  }"]
    assert [b.label for b in ct.find_branch_blocks(body, min_lines = 3)] == ["check_outer_0", "check_z_1"]


# --- control flow ------------------------------------------------------------------------------

@pytest.mark.parametrize("lines, escapes", [
    (["    break;"], True), (["    continue;"], True),
    (["    do {", "      break;", "    } while (x);"], False),
    (["    for (;;) {", "      continue;", "    }"], False),
    (["    switch (x) {", "    case 1:", "      break;", "    }"], False),
    (["    switch (x) {", "    case 1:", "      continue;", "    }"], True),
    (["    while (x) {", "    }", "    break;"], True),
    (['    puts("break;");', "    }"], False),
])
def test_a_break_or_continue_escapes_unless_its_loop_is_inside(lines, escapes):
    assert ct._escapes_loop(lines) is escapes


@pytest.mark.parametrize("line, value, want", [
    ("    return x + 1;", True, "    { ctx->_retval = x + 1; return CHUNK_RETURN; }"),
    ("    if (a) return;", True, "    if (a) return CHUNK_RETURN;"),
    ("    return 0;", False, "    return CHUNK_RETURN;"),
    ('    puts("return 1;");', True, '    puts("return 1;");'),
    ("    returned = 1;", True, "    returned = 1;"),
])
def test_a_return_in_a_chunk_hands_its_value_back_through_ctx(line, value, want):
    assert ct._rewrite_returns(line, value) == want


def test_goto_targets_and_labels_are_found_by_line():
    lines = ["  goto LAB_1;", "LAB_1:", "  goto switchD_2_caseD_6;", "switchD_2_caseD_6:", "  default:",
             "  std::x();"]
    assert ct._find_goto_labels(lines) == ({0: "LAB_1", 2: "switchD_2_caseD_6"},
                                           {"LAB_1": 1, "switchD_2_caseD_6": 3})


# --- generating the chunked function -----------------------------------------------------------

def test_a_big_branch_becomes_a_helper_called_with_the_shared_context():
    body = ["  x = 0;", "  if (this_ptr->hp == 3) {", *stmts(2), "    this_ptr->hp = dt;", "  }", "  x = 2;"]
    assert chunked(body, decls = ("  int x;", "  int unused;")) == "\n".join([
        "/* WARNING: test */", "",
        "typedef struct CBox_run_Ctx {",
        "    CBox **this_ptr;", "    float *dt;", "    int x;", "    int unused;",
        "} CBox_run_Ctx;", "",
        "// Chunk: branch_3 (lines 1-6 of original)",
        "static int CBox_run_branch_3(CBox_run_Ctx *ctx) {",
        "    CBox *&this_ptr = *ctx->this_ptr;", "    float &dt = *ctx->dt;", "    int &x = ctx->x;", "",
        "    x = x + 1;", "    x = x + 1;", "    this_ptr->hp = dt;",
        "    return 0;", "}", "",
        SIG, "", "{",
        "  CBox_run_Ctx _ctx_storage = {};", "  CBox_run_Ctx *ctx = &_ctx_storage;",
        "  ctx->this_ptr = &this_ptr;", "  ctx->dt = &dt;", "",
        "    int &x = ctx->x;", "    int &unused = ctx->unused;", "",
        "  x = 0;", "  if (this_ptr->hp == 3) {", "    CBox_run_branch_3(ctx);", "  }", "  x = 2;",
        "}"])


def test_a_return_inside_a_chunk_returns_from_the_function():
    text = chunked(["  if (a) {", *stmts(2), "    return 7;", "  }", "  return 0;"])
    assert "    int _retval;" in text and "#define CHUNK_RETURN -1" in text
    assert "    { ctx->_retval = 7; return CHUNK_RETURN; }" in text
    assert "    int _rc = CBox_run_check_a_0(ctx);\n    if (_rc == CHUNK_RETURN) return ctx->_retval;" in text


def test_a_void_function_returns_without_a_value():
    text = chunked(["  if (a) {", *stmts(2), "    return;", "  }"], sig = "void __cdecl f(void)")
    assert "_retval" not in text.replace("return ctx->_retval", "")
    assert "    return CHUNK_RETURN;" in text and "if (_rc == CHUNK_RETURN) return;" in text


def test_a_goto_out_of_a_chunk_comes_back_as_a_code_the_caller_follows():
    body = ["  if (a) {", *stmts(2), "    if ((x == 1) &&", "       (y)) goto LAB_9;", "    goto LAB_8;",
            "    goto LAB_elsewhere;", "    goto LAB_in;", "LAB_in:", "  }",
            "  if (b) {", *stmts(3), "    goto LAB_9;", "  }", "LAB_8:", "LAB_9:", "  x = 1;"]
    text = chunked(body)
    assert "#define GOTO_LAB_9 1\n#define GOTO_LAB_8 2" in text
    assert "       (y)) return GOTO_LAB_9;" in text and "    return GOTO_LAB_8;" in text
    # A label the body never defines, and one inside the chunk, stay plain gotos
    assert "    goto LAB_elsewhere;\n    goto LAB_in;\nLAB_in:" in text
    assert ("    int _rc = CBox_run_check_a_0(ctx);\n    if (_rc == GOTO_LAB_9) goto LAB_9;\n"
            "    if (_rc == GOTO_LAB_8) goto LAB_8;") in text


def test_a_condition_over_two_lines_is_kept_whole_at_the_call():
    text = chunked(["  if ((a) &&", "     (b)) {", *stmts(3), "  }"])
    assert "  if ((a) &&\n     (b)) {\n    CBox_run_chunk_0(ctx);\n  }" in text


def test_two_branches_on_one_value_get_distinct_helpers():
    text = chunked(["  if (k == 1) {", *stmts(3), "  }", "  if (j == 1) {", *stmts(3), "  }"])
    assert "static int CBox_run_branch_1(" in text and "static int CBox_run_branch_1_1(" in text


def test_groups_are_called_where_their_ifs_stood():
    body = [*sequential_ifs([2, 2, 2, 2, 2, 2])[:-5], "    if (k5) {", *stmts(1, "      "), "      return 1;",
            "    }", "  }"]
    text = chunked(body)
    assert "  if (big) {\n    CBox_run_check_big_0_group_0(ctx);\n    CBox_run_check_big_0_group_1(ctx);" in text
    assert ("    {\n      int _rc = CBox_run_check_big_0_group_5(ctx);\n"
            "      if (_rc == CHUNK_RETURN) return ctx->_retval;\n    }\n  }") in text


@pytest.mark.parametrize("body", [
    ["  x = 1;"],                                                                   # no big branch
    ["  while (x) {", "    if (a) {", *stmts(3, "      "), "      break;", "    }", "  }"],    # break escapes
    ["  if (a) {", *stmts(2), "LAB_1:", "    x = 2;", "  }", "  goto LAB_1;"],       # goto into it
])
def test_a_function_with_nothing_extractable_is_not_chunked(body):
    assert chunked(body) is None


def test_unparseable_code_is_not_chunked():
    assert ct.generate_chunked_code("not a function", NAME) is None


def test_a_helper_that_uses_no_variables_unpacks_none():
    code = "\n".join(["void f(void)", "{", "  if (a) {", *stmts(3, "    ", "puts();"), "  }", "}"])
    text = ct.generate_chunked_code(code, NAME, min_chunk_lines = 3)
    assert text.startswith("typedef struct CBox_run_Ctx {\n} CBox_run_Ctx;\n")
    assert "static int CBox_run_check_a_0(CBox_run_Ctx *ctx) {\n    puts();" in text


@pytest.mark.parametrize("name, short", [
    ("core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0", "CKeyFramedModel_showEditorMenu"),
    ("core_dmodel.cpp_CKeyFramedModel_show_FUN_0047cbc0", "CKeyFramedModel_show"),
    ("engine_2d.c_plot_FUN_00401140", "plot"), ("engine_2d_c_plot_FUN_00401140", "plot"), ("plain", "plain"),
])
def test_the_short_name_drops_the_unit_and_address(name, short):
    assert ct._short_func_name(name) == short


# --- the chunked flag --------------------------------------------------------------------------

def test_the_chunked_flags_are_preloaded_from_the_function_json(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(ct, "log_info", logged.append)
    unit = tmp_path / "core" / "box.cpp"
    unit.mkdir(parents = True)
    for name, data in (("a", {"chunked": True}), ("b", {"chunked": False}), ("c", [1])):
        (unit / f"{name}.json").write_text(json.dumps(data))
    (unit / "d.json").write_text("{not json")
    (unit / "e.cpp").write_text("")
    ct.preload_chunked_flags(str(tmp_path))
    assert ct.is_chunked(str(unit / "a.json")) and not ct.is_chunked(str(unit / "b.json"))
    assert logged == ["Preloaded 1 chunked flags"]
    (unit / "a.json").write_text(json.dumps({"chunked": False}))
    ct.preload_chunked_flags(str(tmp_path))
    assert not ct.is_chunked(str(unit / "a.json")) and logged == ["Preloaded 1 chunked flags"]


@pytest.mark.parametrize("src_dir", [None, ""])
def test_no_source_directory_preloads_nothing(src_dir):
    ct.preload_chunked_flags(src_dir)
    assert ct._chunked_cache == {}
