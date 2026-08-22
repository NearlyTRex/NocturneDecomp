#!/bin/bash
# Test compilation of decompiled pseudocode files.
# Usage: test_compilation.sh <file.cpp> [file2.cpp ...]
# If no files given, tests all .keep.cpp/.keep.c files.

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DEFAULT_PROGRAM="nocedit.exe"

CFLAGS=(
    -m32 -mmmx -fasm-blocks -fsyntax-only -std=gnu++11
    -Wno-everything
    -Warray-bounds
    -Wformat -Wformat-overflow -Werror=format -Werror=format-overflow
    -Wno-format-security -Wno-format-extra-args
    -Wincompatible-pointer-types -Wint-conversion
    -Wreturn-type -Wtautological-compare
    -Werror=sometimes-uninitialized
    -Wunused-variable
)

# Each program has its own generated include/ and shims/ tree, and the types in
# them genuinely differ (tridx7.dll has DDSURFACEDESC2/DDBLTFX and its own
# CExternalRenderer; nocedit.exe does not). Compiling a tridx7 file against
# nocedit's headers reports bogus "unknown type name" errors, so derive the
# include paths from the file's own annotations/<program>/pseudocode/ path.
# Falls back to nocedit.exe for paths outside that layout.
program_includes() {
    local f="$1" prog base
    prog=$(printf '%s\n' "$f" | sed -nE 's|^.*annotations/([^/]+)/pseudocode/.*$|\1|p')
    [ -n "$prog" ] || prog="$DEFAULT_PROGRAM"
    base="$REPO_ROOT/annotations/$prog/pseudocode"
    [ -d "$base/include" ] || base="$REPO_ROOT/annotations/$DEFAULT_PROGRAM/pseudocode"
    printf '%s\n%s\n' "$base/include" "$base/shims"
}

pass=0
fail=0
errors=()

test_file() {
    local f="$1"
    local out inc shims
    { read -r inc; read -r shims; } < <(program_includes "$f")
    out=$(clang++ "${CFLAGS[@]}" -I "$inc" -I "$shims" "$f" 2>&1)
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
