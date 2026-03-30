#!/bin/bash
# Prepare a .keep file from an original .cpp/.c decompiled pseudocode file.
# Copies the original and adds the // MANUAL RECONSTRUCTION header line.
#
# Usage: prepare_keep.sh <file.cpp> [file2.cpp ...]

if [ $# -eq 0 ]; then
    echo "Usage: prepare_keep.sh <file.cpp> [file2.cpp ...]"
    exit 1
fi

for src in "$@"; do
    if [ ! -f "$src" ]; then
        echo "ERROR: $src not found"
        continue
    fi

    # Determine .keep extension
    case "$src" in
        *.keep.cpp|*.keep.c)
            echo "SKIP: $src is already a .keep file"
            continue
            ;;
        *.cpp) keep="${src%.cpp}.keep.cpp" ;;
        *.c)   keep="${src%.c}.keep.c" ;;
        *)
            echo "ERROR: $src is not a .cpp or .c file"
            continue
            ;;
    esac

    cp "$src" "$keep"

    # Insert // MANUAL RECONSTRUCTION after the // Address: line
    sed -i '/^\/\/ Address: [0-9a-fA-F]\+$/a // MANUAL RECONSTRUCTION' "$keep"

    echo "  OK  $keep"
done
