#!/usr/bin/env bash
# generate_keep_files.sh
#
# Prepares a .keep.cpp/.keep.c for every .cpp/.c source file through
# prepare_keep.sh, so a bulk keep is made exactly as a single one is.  Skips:
#   - .mmx.cpp/.mmx.c   (inline assembly replacements)
#   - .byval.cpp/.byval.c (pass-by-value struct fixing)
#   - files that already have a .keep variant
#
# Usage:
#   ./generate_keep_files.sh [source_dir]
#
# source_dir defaults to annotations/nocedit.exe/pseudocode/src

set -euo pipefail

SRC_DIR="${1:-annotations/nocedit.exe/pseudocode/src}"
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

if [ ! -d "$SRC_DIR" ]; then
    echo "ERROR: Source directory not found: $SRC_DIR" >&2
    exit 1
fi

created=0
skipped_mmx=0
skipped_byval=0
skipped_exists=0
total=0

while IFS= read -r -d '' src_file; do
    total=$((total + 1))

    # Skip .mmx.cpp / .mmx.c
    if [[ "$src_file" == *.mmx.cpp ]] || [[ "$src_file" == *.mmx.c ]]; then
        skipped_mmx=$((skipped_mmx + 1))
        continue
    fi

    # Skip .byval.cpp / .byval.c
    if [[ "$src_file" == *.byval.cpp ]] || [[ "$src_file" == *.byval.c ]]; then
        skipped_byval=$((skipped_byval + 1))
        continue
    fi

    # Skip .keep.cpp / .keep.c (don't process keep files themselves)
    if [[ "$src_file" == *.keep.cpp ]] || [[ "$src_file" == *.keep.c ]]; then
        continue
    fi

    # Skip if .keep already exists (find only yields .cpp and .c)
    if [[ "$src_file" == *.cpp ]]; then
        keep_file="${src_file%.cpp}.keep.cpp"
    else
        keep_file="${src_file%.c}.keep.c"
    fi
    if [ -f "$keep_file" ]; then
        skipped_exists=$((skipped_exists + 1))
        continue
    fi

    "$SCRIPT_DIR/prepare_keep.sh" "$src_file" > /dev/null
    created=$((created + 1))
done < <(find "$SRC_DIR" -type f \( -name '*.cpp' -o -name '*.c' \) -print0 | sort -z)

echo "Done."
echo "  Created:        $created"
echo "  Skipped (mmx):  $skipped_mmx"
echo "  Skipped (byval):$skipped_byval"
echo "  Skipped (exist):$skipped_exists"
echo "  Total scanned:  $total"
