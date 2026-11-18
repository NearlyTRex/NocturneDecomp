# Imports
import os
import runpy

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import check_authentic_flags as caf


def doc_block(name, value, shape = ("1:", "0:", "Override with")):
    lines = [f"// {name}"]
    if "1:" in shape:
        lines.append("//   1: what the shipped binary did")
    if "0:" in shape:
        lines.append("//   0: the alternative")
    if "Override with" in shape:
        lines.append(f"//   Override with -D{name}=0")
    return "\n".join(lines + [f"#ifndef {name}", f"#define {name} {value}", "#endif", ""])


GOOD_HEADER = (
    "// | `NOCTURNE_AUTHENTIC_A` | 0 | the a |\n"
    "// | `NOCTURNE_AUTHENTIC_BB` | 1 | the b |\n"
    "// | `NOCTURNE_EDITOR_BUILD` | 0 | which binary |\n\n"
    + doc_block("NOCTURNE_AUTHENTIC_A", 0) + doc_block("NOCTURNE_AUTHENTIC_BB", 1)
    + doc_block("NOCTURNE_EDITOR_BUILD", 0))
GOOD_DOC = "| `A` | 0 |\n| `NOCTURNE_AUTHENTIC_BB` | 1 |\nThe `EDITOR_BUILD` axis, then `START` in prose.\n"


@pytest.fixture(name = "tree")
def fixture_tree(tmp_path, monkeypatch):
    """A repository root with the pseudocode tree, its config/, the doc and the skip list."""
    tree = tmp_path / "annotations" / "nocedit.exe" / "pseudocode"
    config = tree / "shims" / "config"
    config.mkdir(parents = True)
    (tmp_path / "docs").mkdir()
    paths = {"ROOT": tmp_path, "TREE": tree, "CONFIG_DIR": config, "HEADER": config / "shim_config_authentic.h",
             "DOC": tmp_path / "docs" / "authenticity-flags.md", "SKIP": tmp_path / "skip.txt"}
    for name, path in paths.items():
        monkeypatch.setattr(caf, name, str(path))
    paths["HEADER"].write_text(GOOD_HEADER)
    paths["DOC"].write_text(GOOD_DOC)
    (tree / "src").mkdir()
    (tree / "src" / "a.cpp").write_text(
        "#if NOCTURNE_AUTHENTIC_A\nx();\n#endif\nint y = NOCTURNE_AUTHENTIC_BB + NOCTURNE_EDITOR_BUILD;\n")
    return paths


def run(capsys):
    code = caf.main()
    return code, capsys.readouterr()


def test_comments_are_blanked_but_strings_and_lines_kept():
    text = 'a // NOCTURNE_X\nb /* NOCTURNE_Y\n*/ c "// in str \\" q" \'/\' \'\\\'\' d "\\'
    kept = ' c "// in str \\" q" \'/\' \'\\\'\' d "\\'
    assert caf.strip_comments(text) == "a" + " " * 14 + "\nb" + " " * 14 + "\n  " + kept


def test_every_spelling_of_a_flag_is_an_alias():
    assert caf.aliases("NOCTURNE_AUTHENTIC_A") == {"NOCTURNE_AUTHENTIC_A", "AUTHENTIC_A", "A"}
    assert caf.aliases("NOCTURNE_EDITOR_BUILD") == {"NOCTURNE_EDITOR_BUILD", "EDITOR_BUILD"}
    assert caf.aliases("OTHER") == {"OTHER"}


def test_a_clean_tree_passes(tree, capsys):
    code, out = run(capsys)
    assert code == 0
    assert "3 toggles in annotations/nocedit.exe/pseudocode/shims/config/shim_config_authentic.h (1 default to 1)" in out.out
    assert "ok   docs/authenticity-flags.md names all 3 toggles" in out.out
    assert "ok   index table matches all 3 #defines" in out.out
    assert "ok   all 3 doc blocks well formed" in out.out
    assert out.out.endswith("PASS: 0 problem(s)\n")


def test_a_missing_or_empty_header_is_fatal(tree, capsys):
    tree["HEADER"].write_text("#define NOT_A_TOGGLE 1\n")
    code, out = run(capsys)
    assert code == 2 and "FATAL: no toggles parsed" in out.err
    os.remove(tree["HEADER"])
    code, out = run(capsys)
    assert code == 2 and "not found" in out.err


def test_ungated_orphaned_and_exempt_flags_fail_or_pass(tree, capsys):
    src = tree["TREE"] / "src"
    # Only a comment and config/ name A, so it has no gate site; two files name a typo
    (src / "a.cpp").write_text("// NOCTURNE_AUTHENTIC_A\nint y = NOCTURNE_AUTHENTIC_BB;\n")
    (src / "b.cpp").write_text("#if NOCTURNE_AUTHENTIC_TYPO\n#endif\nNOCTURNE_AUTHENTIC_TYPO NOCTURNE_AUTHENTIC_TYPO\n")
    (src / "c.h").write_text("NOCTURNE_AUTHENTIC_TYPO_LONGER\n")
    (tree["CONFIG_DIR"] / "more.h").write_text("NOCTURNE_AUTHENTIC_A NOCTURNE_AUTHENTIC_CONFIG_ONLY\n")
    (src / "notes.txt").write_text("NOCTURNE_AUTHENTIC_A\n")
    (tree["TREE"] / "build").mkdir()
    (tree["TREE"] / "build" / "gen.cpp").write_text("NOCTURNE_AUTHENTIC_A\n")
    tree["SKIP"].write_text("# reviewed\n\nungated:NOCTURNE_EDITOR_BUILD\nbogus\nnested:\n")
    code, out = run(capsys)
    assert code == 1
    assert "[1] ungated toggles: 1 (1 exempt)" in out.out
    assert "FAIL NOCTURNE_AUTHENTIC_A -- defined and documented" in out.out
    assert "ok   NOCTURNE_EDITOR_BUILD -- exempt, see skip.txt" in out.out
    # TYPO is named in b.cpp only: TYPO_LONGER is a different name
    assert "FAIL NOCTURNE_AUTHENTIC_TYPO -- referenced in 1 file(s)" in out.out
    assert "         annotations/nocedit.exe/pseudocode/src/b.cpp\n" in out.out
    assert "FAIL NOCTURNE_AUTHENTIC_TYPO_LONGER -- referenced in 1 file(s)" in out.out
    assert "CONFIG_ONLY" not in out.out
    assert "skip.txt:4: unrecognised entry 'bogus'" in out.err
    assert "skip.txt:5: unrecognised entry 'nested:'" in out.err
    assert out.out.endswith("FAIL: 3 problem(s)\n")


def test_an_unreadable_file_is_reported_and_skipped(tree, capsys):
    os.symlink(tree["TREE"] / "nowhere.cpp", tree["TREE"] / "src" / "dangling.cpp")
    code, out = run(capsys)
    assert code == 0 and "cannot read annotations/nocedit.exe/pseudocode/src/dangling.cpp" in out.err


def test_nested_gates_are_listed_unless_reviewed(tree, capsys):
    (tree["TREE"] / "src" / "n.cpp").write_text(
        "#endif\n"                                     # a stray #endif with nothing open
        "#if NOCTURNE_AUTHENTIC_A\n"
        "#ifdef _WIN32\n"
        "#if NOCTURNE_AUTHENTIC_BB\n"                  # 4: inside A
        "#endif\n#endif\n"
        "#else\n"
        "#  if NOCTURNE_EDITOR_BUILD\n"                # 8: inside A's #else
        "#  endif\n"
        "#endif\n"
        "#if defined(_WIN32)\n"
        "#elif NOCTURNE_AUTHENTIC_A\n"                 # 12: nothing above it is ours
        "#elif NOCTURNE_AUTHENTIC_BB\n"                # 13: only reached when A is off
        "#endif\n"
        "#elif NOCTURNE_EDITOR_BUILD\n")               # 15: an #elif with no #if open
    tree["SKIP"].write_text("nested:annotations/nocedit.exe/pseudocode/src/n.cpp:NOCTURNE_EDITOR_BUILD\n")
    code, out = run(capsys)
    assert code == 0
    assert "[3] nested gates: 3 (2 unreviewed) -- review, not failure" in out.out
    assert "src/n.cpp:4  NOCTURNE_AUTHENTIC_BB  inside NOCTURNE_AUTHENTIC_A@2\n" in out.out
    assert "src/n.cpp:13  NOCTURNE_AUTHENTIC_BB  inside NOCTURNE_AUTHENTIC_A@11\n" in out.out
    assert "once reviewed, record as" in out.out


def test_the_doc_must_name_every_flag_and_nothing_else(tree, capsys):
    tree["DOC"].write_text("| `A` | 0 |\n| `VOICE` | 0 |\nThe `MULTI_WORD_GONE` flag, and `START` in prose.\n")
    code, out = run(capsys)
    assert code == 1
    assert "FAIL docs/authenticity-flags.md does not name NOCTURNE_AUTHENTIC_BB" in out.out
    assert "FAIL docs/authenticity-flags.md names `MULTI_WORD_GONE`, which is not a toggle" in out.out
    assert "names `VOICE`" in out.out and "`START`" not in out.out
    os.remove(tree["DOC"])
    code, out = run(capsys)
    assert code == 1 and "FAIL docs/authenticity-flags.md not found" in out.out


def test_the_index_table_must_match_the_defines(tree, capsys):
    tree["HEADER"].write_text(
        "// | `NOCTURNE_AUTHENTIC_A` | 1 | wrong default |\n"
        "// | `NOCTURNE_AUTHENTIC_GONE` | 0 | not a toggle |\n\n"
        + doc_block("NOCTURNE_AUTHENTIC_A", 0) + doc_block("NOCTURNE_AUTHENTIC_BB", 1)
        + doc_block("NOCTURNE_EDITOR_BUILD", 0))
    code, out = run(capsys)
    assert code == 1
    assert "FAIL index table says NOCTURNE_AUTHENTIC_A defaults to 1, #define says 0" in out.out
    assert "FAIL index table omits NOCTURNE_AUTHENTIC_BB" in out.out
    assert "FAIL index table lists NOCTURNE_AUTHENTIC_GONE, which is not a toggle" in out.out
    tree["HEADER"].write_text(GOOD_HEADER.split("\n\n", 1)[1])
    code, out = run(capsys)
    assert code == 0 and "note the header has no index table yet" in out.out


def test_every_doc_block_needs_its_three_lines(tree, capsys):
    tree["HEADER"].write_text(
        GOOD_HEADER.split("\n\n", 1)[0] + "\n\n"
        + doc_block("NOCTURNE_AUTHENTIC_A", 0, shape = ())
        + doc_block("NOCTURNE_AUTHENTIC_BB", 1, shape = ("1:", "0:"))
        + "#ifndef NOCTURNE_EDITOR_BUILD\n#define NOCTURNE_EDITOR_BUILD 0\n#endif\n"
        + "// NOCTURNE_TRAILING\n//   a block the file ends in\n")
    code, out = run(capsys)
    assert code == 1
    assert 'FAIL NOCTURNE_AUTHENTIC_A lacks "1:" line, "0:" line, override line' in out.out
    assert "FAIL NOCTURNE_AUTHENTIC_BB lacks override line" in out.out
    assert "FAIL NOCTURNE_EDITOR_BUILD has no doc block" in out.out
    assert caf.doc_blocks("// NOCTURNE_ONE\n// NOCTURNE_TRAILING\n//   body\n") == {
        "NOCTURNE_ONE": "", "NOCTURNE_TRAILING": "//   body\n"}


def test_the_script_runs_as_main(monkeypatch, capsys):
    # The real header and doc, with no source files: every toggle is ungated
    monkeypatch.setattr(os, "walk", lambda _top: iter(()))
    with pytest.raises(SystemExit) as exc:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_authentic_flags.py"), run_name = "__main__")
    assert exc.value.code == 1
    assert "toggles in annotations/nocedit.exe/pseudocode" in capsys.readouterr().out
