# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import crt_catalog
import extract_crt_catalog

CATALOG = """| 10001000 | `crt_string.c_strlen_FUN_10001000` | `int __cdecl(const char* s)` | H | |
| 10002000 | `crt_x.c_f_FUN_10002001` | `int __cdecl(void)` | L | |
"""


@pytest.fixture(name = "paths")
def fixture_paths(tmp_path):
    md = tmp_path / "crt.md"
    md.write_text(CATALOG)
    return str(md), str(tmp_path / "crt.tsv")


def test_the_markdown_is_flattened_into_the_tsv(paths, capsys):
    md, tsv = paths
    extract_crt_catalog.main(["--md", md, "--tsv", tsv])
    out = capsys.readouterr().out
    assert "WARN: line 2: addr 10002000 != name suffix _FUN_10002001 -- skipped" in out
    assert "Parsed 1 entries" in out and "H=1  M=0  L=0" in out
    assert f"Wrote 1 rows -> {tsv}" in out
    assert crt_catalog.load_tsv(tsv)[0]["name"] == "crt_string.c_strlen_FUN_10001000"


@pytest.mark.parametrize("existing, code, message", [
    (None, 1, "STALE"), ("old\n", 1, "STALE"), ("render", 0, "TSV is up to date")])
def test_check_compares_without_writing(paths, capsys, existing, code, message):
    md, tsv = paths
    if existing == "render":
        existing = crt_catalog.render_tsv(crt_catalog.parse_catalog_md(md)[0])
    if existing is not None:
        with open(tsv, "w", encoding = "utf-8") as fh:
            fh.write(existing)
    with pytest.raises(SystemExit) as exit_info:
        extract_crt_catalog.main(["--md", md, "--tsv", tsv, "--check"])
    assert exit_info.value.code == code
    assert message in capsys.readouterr().out
    assert os.path.exists(tsv) == (existing is not None)


def test_runs_as_a_script(paths, monkeypatch, capsys):
    md, tsv = paths
    monkeypatch.setattr(sys, "argv", ["extract_crt_catalog.py", "--md", md, "--tsv", tsv])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "extract_crt_catalog.py"), run_name = "__main__")
    assert "Wrote 1 rows" in capsys.readouterr().out
