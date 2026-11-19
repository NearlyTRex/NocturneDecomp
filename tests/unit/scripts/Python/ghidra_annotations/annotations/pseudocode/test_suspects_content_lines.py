# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.suspects import content


def types(suspects):
    return [s["type"] for s in suspects]


# --- identify_suspect_lines ----------------------------------------------------------

def test_each_artifact_on_a_line_is_a_suspect():
    code = "\n  iVar1 = in_EAX + DAT_0062a0f0;\n"
    suspects = content.identify_suspect_lines(code)
    assert [(s["line"], s["type"], s["match"]) for s in suspects] == [
        (2, "register_param", "in_EAX"), (2, "undefined_data", "DAT_0062a0f0")]
    assert suspects[0]["text"] == "iVar1 = in_EAX + DAT_0062a0f0;"


def test_a_comment_only_carries_its_warning():
    code = ("// in_EAX is not code\n"
            "/* WARNING: Removing unreachable block (ram,0x00401000) DAT_00401000 */\n")
    assert types(content.identify_suspect_lines(code)) == ["warning_unreachable"]


def test_a_noreturn_warning_names_the_call_after_it():
    code = ("  /* WARNING: Subroutine does not return */\n"
            "\n"
            "  core_main_c_displayErrorAndQuit_FUN_00506f10(\"bad\");\n")
    suspects = content.identify_suspect_lines(code)
    assert len(suspects) == 1
    assert suspects[0]["callee"] == "core_main_c_displayErrorAndQuit_FUN_00506f10"


def test_jump_warnings_say_whether_the_body_is_a_tail_call():
    code = ("void f(int a)\n{\n"
            "  /* WARNING: Could not recover jumptable at 0x005b5710. Too many branches */\n"
            "  /* WARNING: Treating indirect jump as call */\n"
            "  (*g_ScanlineRenderFunc)(a);\n  return;\n}\n")
    suspects = content.identify_suspect_lines(code)
    assert [(s["type"], s["tail_call"]) for s in suspects] == [
        ("warning_jumptable", True), ("warning_indirect_jump", True)]
    lost = content.identify_suspect_lines(code.replace("(*g_ScanlineRenderFunc)(a)", "(*(code *)g_F)()"))
    assert [s["tail_call"] for s in lost if s["type"].startswith("warning_")] == [False, False]


# --- wrong_global / suspicious_cast ---------------------------------------------------

INTERVALS = [(0x600000, 0x600004, "g_Count", "int"), (0x600004, 0x600104, "g_Table", "int[64]")]


@pytest.mark.parametrize("detector, line, kind", [
    (content.identify_wrong_global_suspects, "  x = (&g_Count)[i] + (&g_Count)[j];", "wrong_global"),
    (content.identify_suspicious_cast_suspects, "  x = *(int *)(&g_Count + i * 4) + *(int *)(&g_Count - 4);", "suspicious_cast"),
])
def test_a_scalar_indexed_like_an_array_names_the_global_after_it(detector, line, kind):
    code = "// (&g_Count)[i] *(int *)(&g_Count + 4)\n# x\n/* y */\n" + line
    if kind == "wrong_global":
        suspects = detector(code, None, INTERVALS)
    else:
        suspects = detector(code, INTERVALS)
    # One per global per line, comments skipped
    assert len(suspects) == 1
    assert suspects[0]["type"] == kind and suspects[0]["line"] == 4 and suspects[0]["match"] == "g_Count"
    assert suspects[0]["description"].endswith("Likely true target: g_Table (at 0x00600004, +4 bytes).")


@pytest.mark.parametrize("intervals", [
    None,
    # The scalar is the last global, or the next interval carries its own name
    [(0x600000, 0x600004, "g_Count", "int")],
    [(0x600000, 0x600004, "g_Count", "int"), (0x600004, 0x600008, "g_Count", "int")],
    [(0x600000, 0x600004, "g_Other", "int")],
])
@pytest.mark.parametrize("detector, line", [
    (lambda code, iv: content.identify_wrong_global_suspects(code, global_interval_map = iv), "  x = (&g_Count)[i];"),
    (content.identify_suspicious_cast_suspects, "  x = *(int *)(&g_Count + i);"),
])
def test_without_a_distinct_neighbour_no_target_is_named(detector, line, intervals):
    suspects = detector(line, intervals)
    assert len(suspects) == 1 and "Likely true target" not in suspects[0]["description"]


@pytest.mark.parametrize("detector", [content.identify_wrong_global_suspects, content.identify_suspicious_cast_suspects])
def test_no_code_is_no_suspects(detector):
    assert detector("") == []
