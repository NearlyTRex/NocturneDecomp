# Imports
import pytest

# Local imports
import crt_catalog


@pytest.mark.parametrize("sig, parts", [
    ("`int __cdecl(char* lc, const char* locale)`", ("int", "__cdecl", "char* lc, const char* locale")),
    ("void * __watcall ( void )", ("void *", "__watcall", "void")),
    ("int foo(int a)", ("int foo", "", "int a")),
    ("int foo(int a", ("int foo", "", "int a")),
    ("unknown", ("unknown", "", "")),
])
def test_a_signature_splits_into_return_convention_and_parameters(sig, parts):
    assert crt_catalog.parse_signature(sig) == parts


CATALOG = """# CRT catalog

| addr | name | signature | conf | note |
|---|---|---|---|---|
| 10002000 | `crt_stdio.c_printf_FUN_10002000` | `int __cdecl(const char* fmt, ...)` | H | prints |
| 10001000 | `crt_string.c_strlen_FUN_10001000` | `size_t __cdecl(const char* s)` | m |
| 10001000 | `crt_string.c_strlen_FUN_10001000` | `size_t __cdecl(const char* s)` | M |
| 10001000 | `crt_string.c_other_FUN_10001000` | `int __cdecl(void)` | M |
| 10003000 | `crt_x.c_wrong_FUN_10003001` | `int __cdecl(void)` | L |
| 10004000 | `not_crt_FUN_10004000` | `int __cdecl(void)` | L |
| 10005000 | `crt_x.c_f_FUN_10005000` | `int __cdecl(void)` | X |
| zz | `crt_x.c_f_FUN_10006000` | `int __cdecl(void)` | L |
| a | b |
not a table line
"""


def test_the_markdown_tables_become_entries_first_address_wins(tmp_path):
    md = tmp_path / "crt.md"
    md.write_text(CATALOG)
    entries, warnings = crt_catalog.parse_catalog_md(str(md))
    assert [(e["addr"], e["name"], e["conf"]) for e in entries] == [
        ("10002000", "crt_stdio.c_printf_FUN_10002000", "H"), ("10001000", "crt_string.c_strlen_FUN_10001000", "M")]
    assert entries[0]["params"] == "const char* fmt, ..." and entries[0]["note"] == "prints"
    assert entries[1]["note"] == ""
    # Confidence is read case-blind, so line 6's `m` is the entry and line 7 a silent repeat.
    assert entries[1]["line"] == 6
    assert warnings == [
        "line 8: addr 10001000 already mapped to crt_string.c_strlen_FUN_10001000; ignoring "
        "crt_string.c_other_FUN_10001000",
        "line 9: addr 10003000 != name suffix _FUN_10003001 -- skipped"]


def test_the_tsv_is_written_by_address(tmp_path):
    entries = [{"addr": "10002000", "conf": "H", "name": "b", "note": "two\twords"},
               {"addr": "10001000", "conf": "L", "name": "a"}]
    path = tmp_path / "crt.tsv"
    assert crt_catalog.write_tsv(entries, str(path)) == 2
    text = path.read_text()
    assert text == crt_catalog.render_tsv(entries)
    lines = text.splitlines()
    assert lines[0] == "\t".join(crt_catalog.TSV_COLUMNS)
    assert [ln.split("\t")[0] for ln in lines[1:]] == ["10001000", "10002000"]
    assert lines[2].endswith("\ttwo words")
