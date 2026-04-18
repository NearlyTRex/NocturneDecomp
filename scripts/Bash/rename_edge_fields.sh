#!/usr/bin/env bash
# Rename misleading SHardwareEdge / SSoftwareEdge field names in .keep files.
#
# Old → New mapping (see chat history for rationale):
#   z_current       → red_current
#   z_gradient      → red_gradient
#   w_current       → depth_current
#   w_gradient      → depth_gradient
#   fog_current     → alpha_current      (reused — old alpha_current goes away first)
#   fog_gradient    → alpha_gradient
#   color_current   → green_current
#   color_gradient  → green_gradient
#   alpha_current   → blue_current       (old alpha, freed before fog → alpha)
#   alpha_gradient  → blue_gradient
#
# The alpha/fog rename is a two-phase swap via temporary markers so the
# intermediate state never has two fields with the same name.
#
# Usage:
#   rename_edge_fields.sh            # dry-run (shows diff, no changes)
#   rename_edge_fields.sh --apply    # apply changes in-place
#
# Only modifies .keep.cpp and .keep.c files. Struct headers regenerate from
# Ghidra on re-export and are not touched here.

set -euo pipefail

APPLY=0
if [[ "${1:-}" == "--apply" ]]; then
    APPLY=1
fi

# Discover files with any old field name. Word-boundary so we don't catch
# substrings like `my_color_current_count`.
mapfile -t FILES < <(
    find annotations/nocedit.exe/pseudocode \
        \( -name '*.keep.cpp' -o -name '*.keep.c' \) -print0 \
    | xargs -0 grep -lE '\b(z_current|z_gradient|w_current|w_gradient|fog_current|fog_gradient|color_current|color_gradient|alpha_current|alpha_gradient)\b'
)

if (( ${#FILES[@]} == 0 )); then
    echo "No files match. Nothing to do."
    exit 0
fi

echo "Files to rewrite: ${#FILES[@]}"

# Build the sed program:
#   Phase 1: park old alpha_* into a __TMP__ marker (prevents collision with
#            fog_* → alpha_* below).
#   Phase 2: simple renames that don't collide.
#   Phase 3: fog_* → alpha_* (freed slot).
#   Phase 4: restore parked __TMP__ → blue_* (the old alpha was blue).
SED_SCRIPT='
    # Phase 1: park old alpha_*
    s/\balpha_current\b/__TMP_BLUE_CURRENT__/g
    s/\balpha_gradient\b/__TMP_BLUE_GRADIENT__/g

    # Phase 2: direct renames (no collision)
    s/\bz_current\b/red_current/g
    s/\bz_gradient\b/red_gradient/g
    s/\bw_current\b/depth_current/g
    s/\bw_gradient\b/depth_gradient/g
    s/\bcolor_current\b/green_current/g
    s/\bcolor_gradient\b/green_gradient/g

    # Phase 3: fog_* → alpha_* (using slot freed in phase 1)
    s/\bfog_current\b/alpha_current/g
    s/\bfog_gradient\b/alpha_gradient/g

    # Phase 4: restore parked markers
    s/__TMP_BLUE_CURRENT__/blue_current/g
    s/__TMP_BLUE_GRADIENT__/blue_gradient/g
'

if (( APPLY )); then
    for f in "${FILES[@]}"; do
        sed -i -E "$SED_SCRIPT" "$f"
        echo "  UPDATED  $f"
    done
    echo
    echo "Done. Struct headers NOT touched — retype fields in Ghidra and re-export."
    echo "Then run: scripts/Bash/test_compilation.sh <files>"
else
    echo
    echo "=== DRY RUN — showing per-file diff (no files modified) ==="
    for f in "${FILES[@]}"; do
        echo
        echo "--- $f ---"
        diff -u "$f" <(sed -E "$SED_SCRIPT" "$f") || true
    done
    echo
    echo "Re-run with --apply to write the changes."
fi
