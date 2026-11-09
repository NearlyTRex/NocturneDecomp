# Local imports
from ghidra_annotations.annotations.pseudocode.config_defines import config_define_flags, pseudocode_dir_for


def test_each_toggle_defined_once_becomes_a_define_flag(tmp_path):
    config = tmp_path / "shims" / "config"
    config.mkdir(parents = True)
    (config / "a.h").write_text("#define NOCTURNE_FOO 1\n  #  define NOCTURNE_NEG -2\n#define OTHER 3\n"
                                "#define NOCTURNE_TWICE 0\n#define NOCTURNE_TEXT abc\n")
    (config / "b.h").write_text("#define NOCTURNE_TWICE 1\n")
    (config / "notes.txt").write_text("#define NOCTURNE_IGNORED 1\n")
    assert config_define_flags(str(tmp_path)) == ["-DNOCTURNE_FOO=1", "-DNOCTURNE_NEG=-2"]


def test_a_program_without_shim_config_has_no_flags(tmp_path):
    assert config_define_flags(str(tmp_path)) == []


def test_the_enclosing_pseudocode_folder_is_found_or_none(tmp_path):
    source = tmp_path / "game.exe" / "pseudocode" / "src" / "core" / "a.cpp"
    assert pseudocode_dir_for(str(source)) == str(tmp_path / "game.exe" / "pseudocode")
    assert pseudocode_dir_for("/no/such/tree/a.cpp") is None
