#!/bin/bash
# Test compilation of decompiled pseudocode files.
# Usage: test_compilation.sh <file.cpp> [file2.cpp ...]
# If no files given, tests all .keep.cpp/.keep.c files.

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
INCLUDE_DIR="$REPO_ROOT/annotations/nocedit.exe/pseudocode/include"

CFLAGS=(
    -m32 -mmmx -fasm-blocks -fsyntax-only -std=gnu++11
    -Wno-everything
    -Warray-bounds
    -Wformat -Wformat-overflow -Werror=format -Werror=format-overflow
    -Wno-format-security -Wno-format-extra-args
    -Wincompatible-pointer-types -Wint-conversion
    -Wreturn-type -Wtautological-compare
    -I "$INCLUDE_DIR"
)

pass=0
fail=0
errors=()

test_file() {
    local f="$1"
    if clang++ "${CFLAGS[@]}" "$f" 2>/dev/null; then
        echo "  PASS  $f"
        ((pass++))
    else
        echo "  FAIL  $f"
        ((fail++))
        errors+=("$f")
        clang++ "${CFLAGS[@]}" "$f" 2>&1 | head -20
        echo ""
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
