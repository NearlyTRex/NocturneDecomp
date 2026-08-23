#!/bin/bash
# Emit one trigger name per line for a decompiled function.
#
# This is the routing bridge between the project's existing analysis and
# promptc. There are two independent trigger sources, and a function can
# produce names from both:
#
#   suspects  test_suspects.sh already tags findings [severity/detector_id];
#             the id is the trigger name.
#   compiler  test_compilation.sh emits clang diagnostics; recognised ones
#             map to a compiler_* trigger naming the recipe that fixes them.
#
# Selection stays a lookup either way -- no model judgement in the path.
#
# Usage: detect_triggers.sh <stem>
#   <stem> is corpus-relative and without extension, e.g.
#   core/cloth.cpp/CCloth_step_FUN_0043abb0
#
# Exit 0 with names on stdout when anything fired.
# Exit 1 with no output otherwise, which promptc reads as "no triggers"
# rather than as a failure.

set -u

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
CORPUS_ROOT="${PROMPTC_CORPUS_ROOT:-$REPO_ROOT/annotations/nocedit.exe/pseudocode/src}"

stem="${1:-}"
[ -n "$stem" ] || exit 1

src="$CORPUS_ROOT/$stem.cpp"
[ -f "$src" ] || exit 1

{
    # --- suspect detectors -------------------------------------------
    "$REPO_ROOT/scripts/Bash/test_suspects.sh" "$src" 2>/dev/null \
        | grep -oE '\[[a-z]+/[a-z0-9_]+\]' \
        | sed 's|^\[||; s|\]$||' \
        | cut -d/ -f2

    # --- compiler diagnostics ----------------------------------------
    # Matched on the stable part of each message, ignoring the concrete
    # types clang substitutes in.
    diag=$("$REPO_ROOT/scripts/Bash/test_compilation.sh" "$src" 2>&1)
    grep -q "is not assignable"                                  <<<"$diag" && echo compiler_array_not_assignable
    grep -q "is not a function"                                  <<<"$diag" && echo compiler_called_object_not_function
    grep -qE "assigning to .* from .*const"                      <<<"$diag" && echo compiler_const_discards
    grep -q "format specifies type"                              <<<"$diag" && echo compiler_format_mismatch
    grep -q "pointers to integer types with different sign"      <<<"$diag" && echo compiler_sign_mismatch
    grep -q "use of undeclared identifier"                       <<<"$diag" && echo compiler_undeclared_identifier
    grep -q "cast from pointer to smaller type"                  <<<"$diag" && echo compiler_pointer_truncation
    grep -qE "cannot cast from .*float.* to pointer"             <<<"$diag" && echo compiler_float_to_pointer_cast

    # --- source-text markers -----------------------------------------
    grep -q "in_stack_"                                          "$src" && echo text_in_stack_phantom
    grep -qE "\badj\("                                           "$src" && echo text_adj_pointer
} | sort -u | sed '/^$/d' | { grep . || exit 1; }
