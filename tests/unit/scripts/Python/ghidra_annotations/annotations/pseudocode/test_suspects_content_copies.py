# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content
from suspects_content_helpers import lines_of


# --- unrolled strcpy -----------------------------------------------------------------

STRCPY = """  do {{
    cVar1 = *pcVar3;
{store}
{exit}
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  }} while (cVar2 != '\\0');"""


@pytest.mark.parametrize("store, exit_line", [
    ("    *pcVar4 = cVar1;", "    if (cVar1 == '\\0') break;"),
    ("    (*(char (*) [128])pcVar4)[0] = cVar1;", "    if (cVar1 == '\\0') break;"),
    ("    (pCVar2->base).actor_name[0] = cVar1;", "    if (cVar1 == '\\0') return 1;"),
    ("    this_ptr->filename[0] = cVar1;", "    if (cVar1 == '\\0') {\n      break;"),
    # A loop-invariant capture hoisted between the store and the null check
    ("    *pcVar4 = cVar1;\n    pacVar6 = pacVar3;", "    if (cVar1 == '\\0') break;"),
])
def test_a_two_byte_copy_loop_with_a_mid_body_null_check_is_strcpy(store, exit_line):
    suspects = content.identify_unrolled_strcpy_loops(STRCPY.format(store = store, exit = exit_line))
    assert lines_of(suspects) == [1] and suspects[0]["type"] == "unrolled_strcpy"


@pytest.mark.parametrize("code", [
    "",
    # The null check tests another byte, the block has no exit, or the loop has no do/while
    STRCPY.format(store = "    *pcVar4 = cVar1;", exit = "    if (cVar2 == '\\0') break;"),
    STRCPY.format(store = "    *pcVar4 = cVar1;", exit = "    if (cVar1 == '\\0') {\n      x = 1;"),
    "    *pcVar4 = cVar1;\n    if (cVar1 == '\\0') break;\n  } while (cVar2 != '\\0');",
    "  do {\n    *pcVar4 = cVar1;\n    if (cVar1 == '\\0') break;\n  } while (true);",
    # Cut off right after the store, the capture, or the block opener
    "    *pcVar4 = cVar1;\n    pacVar6 = pacVar3;",
    "    *pcVar4 = cVar1;\n    if (cVar1 == '\\0') {",
    # Not a byte store at all
    "    x = f(a);\n    if (cVar1 == '\\0') break;",
])
def test_other_null_checks_are_not_strcpy(code):
    assert content.identify_unrolled_strcpy_loops(code) == []


def test_the_loop_opener_is_found_within_seven_lines():
    body = "\n".join(f"    x{k} = y{k};" for k in range(7))
    code = STRCPY.format(store = body + "\n    *pcVar4 = cVar1;", exit = "    if (cVar1 == '\\0') break;")
    assert content.identify_unrolled_strcpy_loops(code) == []


# --- dword + byte split memcpy -------------------------------------------------------

SPLIT = """  for (uVar3 = len >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {{
    *(uint *)pcVar5 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }}
{gap}  for (uVar3 = {tail} & 3; uVar3 != 0; uVar3 = uVar3 + -1) {{
    *pcVar5 = *pcVar4;
{extra}    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }}"""


def test_a_dword_loop_and_its_byte_tail_over_the_same_count_is_memcpy():
    code = SPLIT.format(gap = "\n", tail = "len", extra = "")
    suspects = content.identify_unrolled_memcpy_dword_byte_split(code)
    assert lines_of(suspects) == [1] and "memcpy(dst, src, N)" in suspects[0]["description"]


@pytest.mark.parametrize("code", [
    "",
    SPLIT.format(gap = "", tail = "count", extra = ""),
    SPLIT.format(gap = "", tail = "len", extra = "    pcVar5 = pcVar5 + ((uint)bVar1 * -2 + 1);\n"),
    # The byte loop never closes, there is none, or the dword loop never closes
    SPLIT.format(gap = "", tail = "len", extra = "").rsplit("  }", 1)[0],
    SPLIT.format(gap = "", tail = "len", extra = "").split("  for (uVar3 = len & 3", maxsplit = 1)[0],
    SPLIT.format(gap = "", tail = "len", extra = "").split("  }", maxsplit = 1)[0] + "\n  x = 1;",
    "  for (uVar3 = len >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {\n" + "    x = 1;\n" * 8,
    SPLIT.format(gap = "", tail = "len", extra = "").split("  }", maxsplit = 1)[0] + "  }\n  x = 1;",
])
def test_unpaired_or_directional_loops_are_left_to_the_other_detector(code):
    assert content.identify_unrolled_memcpy_dword_byte_split(code) == []


# --- countdown memcpy loops ----------------------------------------------------------

DIRECTION = """  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)puVar4 = *(uint *)puVar3;
    puVar3 = puVar3 + ((uint)bVar5 * -2 + 1) * 4;
    puVar4 = puVar4 + (uint)bVar5 * -8 + 4;
  }"""
TYPED = """  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }"""


@pytest.mark.parametrize("code, flagged", [
    (DIRECTION, True),
    (TYPED, True),
    # A float-mistyped counter still decrements
    (TYPED.replace("iVar2 != 0;", "fVar2 != 0.0;").replace("iVar2 = iVar2 + -1", "fVar2 = (float)((int)fVar2 + -1)"), True),
    # A plain "do N times" loop, or one that never closes within the window
    ("  for (i = 4; i != 0; i = i + -1) {\n    f(i);\n  }", False),
    (DIRECTION.replace("  }", "    x = 1;\n" * 4 + "  }"), False),
    (DIRECTION.split("\n", 1)[0] + "\n    x = (uint)bVar5 * -2 + 1;", False),
    ("", False),
])
def test_a_countdown_with_the_direction_idiom_or_typed_pair_is_memcpy(code, flagged):
    assert bool(content.identify_unrolled_memcpy_loops(code)) == flagged


CAST = """  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)puVar3 = *(uint *)puVar2;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
  }"""


@pytest.mark.parametrize("code, flagged", [
    (CAST, True),
    (DIRECTION, False),
    # The split form's halves belong to the split detector
    (CAST.replace("iVar1 = 0xc0", "iVar1 = len >> 2"), False),
    (CAST.replace("iVar1 = 0xc0", "iVar1 = len & 3"), False),
    # Only one pointer advances by a dword, or the body never closes
    (CAST.replace("puVar3 = puVar3 + 4", "puVar3 = puVar3 + 1"), False),
    (CAST.replace("  }", "    x = 1;\n" * 4 + "  }"), False),
    (CAST.rsplit("\n", 1)[0], False),
    ("", False),
])
def test_a_constant_count_cast_dword_loop_is_memcpy(code, flagged):
    assert bool(content.identify_unrolled_memcpy_dword_cast_loop(code)) == flagged


# --- straight-line indexed copies ----------------------------------------------------

def test_a_run_of_constant_stride_indexed_copies_is_memcpy():
    code = ("  puVar1 = (uint *)((int)&(this_ptr->vertex_data->position).x + iVar3);\n"
            "  *puVar1 = puVar1[6];\n  puVar1[1] = puVar1[7];\n  puVar1[2] = puVar1[8];\n"
            "  puVar1[3] = puVar1[9];\n  puVar1[4] = puVar1[10];\n  puVar1[5] = puVar1[0xb];\n"
            "  puVar1[6] = puVar1[6];\n"
            "  puVar2[6] = *puVar2;\n  puVar2[7] = puVar2[1];\n  puVar2[8] = puVar2[2];\n  puVar2[9] = puVar2[3];\n")
    suspects = content.identify_unrolled_memcpy_index_form(code)
    assert lines_of(suspects) == [2, 9]
    assert suspects[0]["match"] == "run of 6 × `puVar1[N] = puVar1[N+6];`"
    assert suspects[1]["match"] == "run of 4 × `puVar2[N] = puVar2[N-6];`"


@pytest.mark.parametrize("code", [
    "",
    # Too short, a different pointer, a different stride, a gap in the indices, or two pointers
    "  p[0] = p[4];\n  p[1] = p[5];\n  p[2] = p[6];\n",
    "  p[0] = p[4];\n  p[1] = p[5];\n  q[2] = q[6];\n  p[3] = p[7];\n",
    "  p[0] = p[4];\n  p[1] = p[5];\n  p[2] = p[7];\n  p[3] = p[8];\n",
    "  p[0] = p[4];\n  p[1] = p[5];\n  p[3] = p[7];\n  p[4] = p[8];\n",
    "  p[0] = q[4];\n  p[1] = q[5];\n  p[2] = q[6];\n  p[3] = q[7];\n",
])
def test_scattered_index_stores_are_not_a_copy(code):
    assert content.identify_unrolled_memcpy_index_form(code) == []


# --- memcpy reading past its source array --------------------------------------------

OVERSIZED = """  undefined4 local_30 [{size}];
  local_30[0] = 1;
  puVar2 = {source};
  for (iVar1 = {count}; iVar1 != 0; iVar1 = iVar1 + -1) {{
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }}"""


@pytest.mark.parametrize("size, source, count, overrun", [
    (6, "local_30", "7", 1),
    (6, "(undefined4 *)local_30 + 0", "0xc", 6),
])
def test_a_copy_loop_reading_past_its_source_array_is_flagged(size, source, count, overrun):
    code = OVERSIZED.format(size = size, source = source, count = count)
    suspects = content.identify_memcpy_oversized_source(code)
    assert lines_of(suspects) == [4] and f"overruns by {overrun}" in suspects[0]["description"]


def test_the_direction_idiom_is_a_copy_signal_too():
    code = ("  undefined4 local_30 [2];\n  puVar2 = local_30;\n"
            "  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {\n"
            "    *(uint *)puVar3 = *(uint *)puVar2;\n"
            "    puVar2 = puVar2 + ((uint)bVar5 * -2 + 1) * 4;\n  }")
    assert lines_of(content.identify_memcpy_oversized_source(code)) == [3]


@pytest.mark.parametrize("code", [
    "",
    OVERSIZED.format(size = 6, source = "local_30", count = "6"),
    OVERSIZED.format(size = 6, source = "local_30", count = "1"),
    # The source is not a local array, or was never assigned
    OVERSIZED.format(size = 6, source = "param_1", count = "7"),
    OVERSIZED.format(size = 6, source = "local_30", count = "7").replace("puVar2 = local_30;\n", ""),
    # No copy signal, or no closing brace in the window
    OVERSIZED.format(size = 6, source = "local_30", count = "7").replace("puVar2 = puVar2 + 1;", "f();"),
    OVERSIZED.format(size = 6, source = "local_30", count = "7").replace("  }", "    x = 1;\n" * 4 + "  }"),
    OVERSIZED.format(size = 6, source = "local_30", count = "7").rsplit("\n", 1)[0],
])
def test_copies_within_their_source_are_fine(code):
    assert content.identify_memcpy_oversized_source(code) == []


# --- dropped loop counter ------------------------------------------------------------

def test_an_endless_loop_beside_a_removed_block_is_a_dropped_counter():
    code = ("  /* WARNING: Removing unreachable block (ram,0x0040a0f0) */\n"
            "  do {\n    f(0);\n  } while (true);\n  do {\n  } while (true);\n")
    suspects = content.identify_dropped_loop_counter(code)
    assert lines_of(suspects) == [4]


def test_a_strcpy_loop_whose_closer_is_too_far_down_is_not_flagged():
    code = STRCPY.format(store = "    *pcVar4 = cVar1;", exit = "    if (cVar1 == '\\0') break;\n" + "    x = 1;\n" * 12)
    assert content.identify_unrolled_strcpy_loops(code) == []


def test_a_byte_tail_that_never_closes_is_not_a_split_memcpy():
    code = SPLIT.format(gap = "", tail = "len", extra = "    x = 1;\n" * 7)
    assert content.identify_unrolled_memcpy_dword_byte_split(code) == []


def test_a_countdown_cut_off_by_the_end_of_the_function_is_not_a_memcpy():
    assert content.identify_unrolled_memcpy_loops("\n".join(TYPED.split("\n")[:3])) == []


def test_an_index_run_reaching_the_end_of_the_code_is_counted():
    code = "  p[0] = p[4];\n  p[1] = p[5];\n  p[2] = p[6];\n  p[3] = p[7];"
    assert lines_of(content.identify_unrolled_memcpy_index_form(code)) == [1]


@pytest.mark.parametrize("assignment_far", [True, False])
def test_the_source_and_its_declaration_are_looked_for_nearby(assignment_far):
    code = OVERSIZED.format(size = 6, source = "local_30", count = "7")
    head, loop = code.split("  for", 1)
    if assignment_far:
        # The pointer assignment is more than 29 lines above the loop
        code = head + "  x = 1;\n" * 30 + "  for" + loop
    else:
        # The declaration is more than 199 lines above the loop
        decl, rest = head.split("\n", 1)
        code = decl + "\n" + "  x = 1;\n" * 200 + rest + "  for" + loop
    assert content.identify_memcpy_oversized_source(code) == []


@pytest.mark.parametrize("code", ["", "  do {\n  } while (true);\n",
                                  "  /* WARNING: Removing unreachable block */\n  while (true) {\n  }\n"])
def test_an_endless_loop_alone_is_not_a_dropped_counter(code):
    assert content.identify_dropped_loop_counter(code) == []
