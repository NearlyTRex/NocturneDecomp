#!/usr/bin/env bash
# regen_struct_layout_checks.sh
#
# Regenerates the compile-time struct layout verification files under
# annotations/nocedit.exe/pseudocode/checks/struct_layout/ from the current
# annotations/nocedit.exe/data_types/data_types.json. This path matches
# NOCTURNE_CHECKS_DIR in CMakeLists.txt, so regenerated files are picked up
# by `cmake --build --preset check-linux` and the exe builds automatically.
#
# The output is committed reference material (not a build artifact) — re-run
# this whenever data_types.json changes in a way that affects struct sizes or
# field offsets, then `git diff` the result.
#
# Usage:
#   ./regen_struct_layout_checks.sh
#
# No arguments; paths are fixed relative to the repo root.

set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"

python3 "$REPO_ROOT/scripts/Python/gen_struct_layout_checks.py" \
    --data-types "$REPO_ROOT/annotations/nocedit.exe/data_types/data_types.json" \
    --out-dir    "$REPO_ROOT/annotations/nocedit.exe/pseudocode/checks/struct_layout" \
    --skip-list  "$REPO_ROOT/scripts/Python/gen_struct_layout_checks_skip.txt" \
    --clean
