# Local imports
from ghidra_annotations.annotations.pseudocode.compiler_config import DEFAULT_COMPILE_FLAGS, DEFAULT_COMPILER


def test_decompiled_code_is_syntax_checked_as_32_bit_cpp():
    assert DEFAULT_COMPILER == "clang++"
    assert {"-m32", "-fsyntax-only", "-std=gnu++11"} <= set(DEFAULT_COMPILE_FLAGS)


def test_warnings_are_off_but_the_ones_that_catch_wrong_annotations():
    flags = DEFAULT_COMPILE_FLAGS
    assert flags.index("-Wno-everything") < flags.index("-Warray-bounds")
    assert "-Werror=sometimes-uninitialized" in flags
    assert "-Wuninitialized" not in flags
