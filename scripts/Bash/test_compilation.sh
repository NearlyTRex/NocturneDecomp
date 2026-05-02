#!/bin/bash
# Test compilation of decompiled pseudocode files.
# Usage: test_compilation.sh <file.cpp> [file2.cpp ...]
# If no files given, tests all .keep.cpp/.keep.c files.

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
INCLUDE_DIR="$REPO_ROOT/annotations/nocedit.exe/pseudocode/include"
SHIMS_DIR="$REPO_ROOT/annotations/nocedit.exe/pseudocode/shims"

CFLAGS=(
    -m32 -mmmx -fasm-blocks -fsyntax-only -std=gnu++11
    -Wno-everything
    -Warray-bounds
    -Wformat -Wformat-overflow -Werror=format -Werror=format-overflow
    -Wno-format-security -Wno-format-extra-args
    -Wincompatible-pointer-types -Wint-conversion
    -Wreturn-type -Wtautological-compare
    -Wunused-variable
    -I "$INCLUDE_DIR"
    -I "$SHIMS_DIR"
)

pass=0
fail=0
errors=()

test_file() {
    local f="$1"
    local out
    out=$(clang++ "${CFLAGS[@]}" "$f" 2>&1)
    local rc=$?
    # Pull out only the "unused variable" / "unused but set variable" warnings;
    # other diagnostics are reported via fail/errors below.
    local unused
    unused=$(echo "$out" | grep -E "warning: unused( but set)? variable")
    if [ $rc -eq 0 ]; then
        echo "  PASS  $f"
        ((pass++))
    else
        echo "  FAIL  $f"
        ((fail++))
        errors+=("$f")
        # Strip the unused-variable lines from the failure dump so the real
        # error stays the focus, then cap to a sane number of lines.
        echo "$out" | grep -vE "warning: unused( but set)? variable" | head -20
        echo ""
    fi
    if [ -n "$unused" ]; then
        # Report each unused local on its own indented line. Format:
        #   file.cpp:L:C: warning: unused variable 'name' [-Wunused-variable]
        # → "    UNUSED L: name"
        echo "$unused" | sed -E "s|^[^:]+:([0-9]+):[0-9]+:.*'([^']+)'.*|    UNUSED L\1: \2|"
    fi
}

if [ $# -gt 0 ]; then
    files=("$@")
else
    mapfile -t files < <(find "$REPO_ROOT/annotations" -name '*.keep.cpp' -o -name '*.keep.c' | sort)
fi

if [ ${#files[@]} -eq 0 ]; then
    echo "No files to test."
    exit 0
fi

echo "Testing ${#files[@]} file(s)..."
echo ""

for f in "${files[@]}"; do
    test_file "$f"
done

echo ""
echo "Results: $pass passed, $fail failed out of ${#files[@]}"

if [ $fail -gt 0 ]; then
    echo ""
    echo "Failed files:"
    for f in "${errors[@]}"; do
        echo "  $f"
    done
    exit 1
fi
