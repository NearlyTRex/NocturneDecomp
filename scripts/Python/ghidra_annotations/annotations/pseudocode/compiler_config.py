# Compiler configuration for pseudocode compilation verification
# This module is the SINGLE SOURCE OF TRUTH for compiler settings
#
# All compilation functions (function_compile.py, header_compile.py,
# verify_headers.py, verify_globals.py, exporter.py) import from here.

# Default compiler for syntax checking decompiled code
DEFAULT_COMPILER = 'clang++'

# Default compile flags for 32-bit decompiled code verification
# - -m32: 32-bit target to match original binary (eliminates pointer precision errors)
# - -mmmx: enable MMX intrinsics (__MMX__) since the binary uses MMX SIMD instructions
# - -fasm-blocks: enable MSVC-style __asm { } blocks for inline assembly (MMX functions)
# - -fsyntax-only: only check syntax, don't generate output
# - -std=gnu++11: GNU C++11 for void* arithmetic extension
# - -Wno-everything: suppress all warnings (decompiler output, not hand-written)
#
# Selectively re-enabled warnings that catch wrong Ghidra type annotations:
# (some format sub-warnings are re-suppressed because they fire on benign
#  original code patterns, not faulty annotations)
# - -Warray-bounds: OOB struct/array access (wrong array size or struct layout)
# - -Wformat: format string type mismatches (wrong type on printf args)
# - -Wformat-overflow: buffer overflow from format string expansion (wrong buffer size)
# - -Werror=format*: promote all format warnings to errors
# - -Wincompatible-pointer-types: pointer type mismatches (wrong struct/class type)
# - -Wint-conversion: implicit int/pointer conversion without cast (wrong int vs pointer)
# - -Wreturn-type: missing return in non-void function (wrong return type annotation)
# - -Wtautological-compare: always-true/false comparisons (wrong signedness annotation)
# - -Werror=sometimes-uninitialized: a local read on some path with no assignment on
#   that path. Almost always Ghidra splitting one reused register into two locals and
#   failing to initialize one of them (see fix_compilation.md §13) — the asm reaches the
#   read with the register provably holding a known value. Compiles clean, then feeds
#   garbage downstream (e.g. CScat::updateWeaponState passed stack junk as a bone index).
#   Promoted to an error because the resulting bug surfaces far from its cause.
#   NOT the broader -Wuninitialized: that also fires on in_ST0/in_ST1 x87 phantoms, which
#   are missing CUSTOM_STORAGE signatures to fix in Ghidra, not a code defect.
DEFAULT_COMPILE_FLAGS = [
    '-m32',
    '-mmmx',
    '-fasm-blocks',
    '-fsyntax-only',
    '-std=gnu++11',
    '-Wno-everything',
    '-Warray-bounds',
    '-Wformat',
    '-Wformat-overflow',
    '-Werror=format',
    '-Werror=format-overflow',
    '-Wno-format-security',
    '-Wno-format-extra-args',
    '-Wincompatible-pointer-types',
    '-Wint-conversion',
    '-Wreturn-type',
    '-Wtautological-compare',
    '-Werror=sometimes-uninitialized',
]
