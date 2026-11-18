# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import adjacency_sentinel_transform as ast

GLOBALS = [
    {"name": "g_Bats", "type": "SBat[30]"}, {"name": "g_Fires", "type": "SFire [4]"},
    {"name": "g_Lone", "type": "int[2]"}, {"name": "g_Scalar", "type": "int"},
    {"name": None, "type": "int[1]"}, {"type": "int[3]"},
]
SYMBOLS = {
    "00500000": {"name": "g_Bats"}, "00500000 ": {"name": "g_BatsAlias"},
    "00500010": {"name": "g_Bats[1].hp"}, "00500020": {"name": "s_text_00500020"},
    "00500030": {"name": "g_Moon"},
    "00600000": {"name": "g_Fires"}, "00600008": {"name": "g_Fires.flame"},
    "00600010": {"name": "g_Moon"},           # a second address for a name: the first is kept
    "00600020": {"name": "g_AfterFires"},
    "00700000": {"name": "g_Lone"},
    "zz": {"name": "bad"}, "00800000": {"name": ""},
}


@pytest.fixture(name = "context")
def fixture_context(monkeypatch):
    logged = []
    monkeypatch.setattr(ast, "log_info", logged.append)
    monkeypatch.setattr(ast, "_context", {"pools": {}, "pool_adjacency": {}, "rewrites": []})
    ast.init_context(GLOBALS, SYMBOLS)
    return logged


def test_each_pool_is_paired_with_the_next_real_global_after_it(context):
    assert ast._context["pools"] == {"g_Bats": 30, "g_Fires": 4, "g_Lone": 2}
    assert ast._context["pool_adjacency"] == {"g_Bats": "g_Moon", "g_Fires": "g_AfterFires"}
    assert context == ["Adjacency-sentinel transform: 3 pools indexed, 2 adjacency pairs"]


@pytest.mark.parametrize("loop", [
    "while (pBat != &g_Moon)", "while (pBat < g_Moon)", "while (pBat != (SBat *)&g_Moon)",
    "while ((SBat *)pBat != &g_Moon)",
])
def test_a_confirmed_sentinel_becomes_the_pool_bound(context, loop):
    code = "  p = g_Bats;\n  pBat = p;\n  do {\n    pBat = pBat + 1;\n  } " + loop + ";\n"
    out = ast.transform_adjacency_sentinels(code, "f")
    assert "while (pBat != g_Bats + sizeof(g_Bats) / sizeof(g_Bats[0]));" in out
    assert ast._context["rewrites"][-1]["function"] == "f"


@pytest.mark.parametrize("code", [
    "pBat = g_Bats;\nwhile (pBat <= &g_Moon) {}",        # one past the end: not matched
    "pBat = g_Fires;\nwhile (pBat != &g_Moon) {}",       # not this pool's neighbour
    "pBat = g_Scalar;\nwhile (pBat != &g_Moon) {}",      # not a pool
    "while (pBat != &g_Moon) {}",                        # no origin
    "pBat = pBat;\nwhile (pBat != &g_Moon) {}",          # only itself
    "pBat = 5;\nwhile (pBat != &g_Moon) {}",
    "b = a;\na = b;\npBat = a;\nwhile (pBat != &g_Moon) {}",   # each looks only further back
    # A chain longer than the bound
    "a6 = g_Bats; a5 = a6; a4 = a5; a3 = a4; a2 = a3; a1 = a2;\npBat = a1;\nwhile (pBat != &g_Moon) {}",
])
def test_anything_unconfirmed_is_left_alone(context, code):
    assert ast.transform_adjacency_sentinels(code) == code


def test_nothing_happens_before_the_context_is_built(monkeypatch):
    monkeypatch.setattr(ast, "_context", {"pools": {}, "pool_adjacency": {}, "rewrites": []})
    assert ast.transform_adjacency_sentinels("pBat = g_Bats;\nwhile (pBat != &g_Moon) {}") == (
        "pBat = g_Bats;\nwhile (pBat != &g_Moon) {}")


def test_the_report_lists_each_rewrite_by_function(context, tmp_path):
    report = tmp_path / "adjacency_sentinel_rewrites.md"
    report.write_text("stale")
    assert ast.write_rewrite_report(str(tmp_path)) is None and not report.exists()
    assert ast.write_rewrite_report(str(tmp_path)) is None
    ast.transform_adjacency_sentinels("pBat = g_Bats;\nwhile (pBat != &g_Moon) {}\n"
                                      "q = g_Fires;\nwhile (q != &g_AfterFires) {}", "b_func")
    ast.transform_adjacency_sentinels("pBat = g_Bats;\nwhile (pBat != &g_Moon) {}")
    assert ast.write_rewrite_report(str(tmp_path)) == str(report)
    text = report.read_text()
    assert "- Rewrites applied: **3**\n- Functions touched: **2**" in text
    assert text.index("### `<unknown>`") < text.index("### `b_func`")
    assert "- Pool `g_Fires` sentinel `g_AfterFires` (count 4)" in text
    assert context[-1] == f"Adjacency-sentinel: wrote 3 rewrites to {report}"
