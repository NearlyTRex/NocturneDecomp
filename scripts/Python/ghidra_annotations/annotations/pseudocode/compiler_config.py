# Compiler configuration for pseudocode compilation verification
# This module is the SINGLE SOURCE OF TRUTH for compiler settings
#
# All compilation functions (function_compile.py, header_compile.py,
# verify_headers.py, verify_globals.py, exporter.py) import from here.

# Default compiler for syntax checking decompiled code
DEFAULT_COMPILER = 'clang++'

# Default compile flags for 32-bit decompiled code verification
# - -m32: 32-bit target to match original binary (eliminates pointer precision errors)
# - -fsyntax-only: only check syntax, don't generate output
# - -std=gnu++11: GNU C++11 for void* arithmetic extension
# - -Wno-everything: suppress all warnings (decompiler output, not hand-written)
#
# Selectively re-enabled warnings that catch wrong Ghidra type annotations:
# - -Warray-bounds: OOB struct/array access (wrong array size or struct layout)
# - -Wformat: format string type mismatches (wrong type on printf args)
# - -Wincompatible-pointer-types: pointer type mismatches (wrong struct/class type)
# - -Wint-conversion: implicit int/pointer conversion without cast (wrong int vs pointer)
# - -Wreturn-type: missing return in non-void function (wrong return type annotation)
DEFAULT_COMPILE_FLAGS = [
    '-m32',
    '-fsyntax-only',
    '-std=gnu++11',
    '-Wno-everything',
    '-Warray-bounds',
    '-Wformat',
    '-Wincompatible-pointer-types',
    '-Wint-conversion',
    '-Wreturn-type',
]
