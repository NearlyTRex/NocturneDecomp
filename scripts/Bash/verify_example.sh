#!/bin/bash
# Compile one example block from the prompt library.
#
# Blocks in the recipes are not translation units -- they are excerpts that
# assume the project's types (`uint`, `byte`, `CVector3i`) and globals. This
# wraps a block in the same include prelude the real build uses, so an
# example can be checked without being a whole file.
#
# A block that is a complete function compiles as-is. A block that is a run
# of statements is wrapped in a function body first. Anything that still
# fails is a genuinely stale example.
#
# Usage: verify_example.sh <file>
# Exit 0 = the example compiles, non-zero = it does not.

set -u

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
PROGRAM="${PROMPTC_PROGRAM:-nocedit.exe}"
INC="$REPO_ROOT/annotations/$PROGRAM/pseudocode/include"
SHIMS="$REPO_ROOT/annotations/$PROGRAM/pseudocode/shims"

src="${1:-}"
[ -f "$src" ] || exit 2

work=$(mktemp -d)
trap 'rm -rf "$work"' EXIT
out="$work/example.cpp"

# A block containing a brace-balanced definition at column 0 is already a
# translation unit; anything else is a statement run needing a body.
if grep -qE '^[A-Za-z_].*\)[[:space:]]*\{[[:space:]]*$' "$src"; then
    { echo '#include "nocturne.h"'; cat "$src"; } > "$out"
else
    {
        echo '#include "nocturne.h"'
        echo 'void _promptc_example(void) {'
        cat "$src"
        echo '}'
    } > "$out"
fi

# Same compiler and flags as the real build, so an example is judged by
# exactly what judges a .keep file.
clang++ -m32 -mmmx -fasm-blocks -fsyntax-only -std=gnu++11 \
        -Wno-everything -Warray-bounds \
        -Wformat -Wformat-overflow -Werror=format -Werror=format-overflow \
        -Wno-format-security -Wno-format-extra-args \
        -I "$INC" -I "$SHIMS" "$out" 2>&1
