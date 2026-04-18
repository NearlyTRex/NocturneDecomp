#!/bin/bash
# Prepare a .keep file from an original .cpp/.c decompiled pseudocode file.
# Copies the original and adds the // MANUAL RECONSTRUCTION header line.
#
# By default refuses to overwrite an existing .keep (which may contain
# manual fixes). Pass --force to regenerate anyway (useful when the
# upstream .cpp has improved enough that the existing keep is obsolete).
#
# Usage: prepare_keep.sh [--force] <file.cpp> [file2.cpp ...]

force=0
files=()
for arg in "$@"; do
    case "$arg" in
        --force|-f) force=1 ;;
        -h|--help)
            echo "Usage: prepare_keep.sh [--force] <file.cpp> [file2.cpp ...]"
            echo ""
            echo "  --force, -f    Overwrite existing .keep files."
            echo "                 Default is to skip with a warning."
            exit 0
            ;;
        *) files+=("$arg") ;;
    esac
done

if [ ${#files[@]} -eq 0 ]; then
    echo "Usage: prepare_keep.sh [--force] <file.cpp> [file2.cpp ...]"
    exit 1
fi

for src in "${files[@]}"; do
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

    if [ -f "$keep" ] && [ "$force" -ne 1 ]; then
        echo "  WARN  $keep already exists (may contain manual fixes)"
        echo "        Skipping. Edit the existing keep directly, or re-run"
        echo "        with --force to regenerate it from the current .cpp."
        continue
    fi

    cp "$src" "$keep"

    # Insert // MANUAL RECONSTRUCTION after the // Address: line
    sed -i '/^\/\/ Address: [0-9a-fA-F]\+$/a // MANUAL RECONSTRUCTION' "$keep"

    if [ "$force" -eq 1 ] && [ -f "$keep.pre-force" ]; then
        :  # shouldn't happen, just defensive
    fi

    echo "  OK  $keep"
done
