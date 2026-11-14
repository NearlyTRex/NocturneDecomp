#!/usr/bin/env bash
# export_bw.sh
#
# Exports chosen annotation categories of the Blair Witch builds, one program
# at a time, into annotations/<program>/. The pseudocode compile and analysis
# passes are off, as in the BW presets: only nocedit.exe's pseudocode is built.
#
# The program is always named in its own argument slot. A full export goes
# through decompiler_tool's export_<program> targets instead, so "all" is
# refused here.
#
# Ghidra must be closed: it holds the project lock.
#
# Usage:
#   ./export_bw.sh [categories] [program ...]
#
#   categories  comma-separated export_annotations.py categories
#               (default: functions)
#   program     bw1.exe, blairwitch2.exe or bw3.exe (default: all three)
#
# GHIDRA_INSTALL_DIR defaults to $HOME/Tools/Ghidra/lib.

set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
BW_PROGRAMS=(bw1.exe blairwitch2.exe bw3.exe)

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
    sed -n '2,21p' "$0" | sed 's/^# \{0,1\}//'
    exit 0
fi

categories="${1:-functions}"
shift || true
programs=("$@")
if [[ ${#programs[@]} -eq 0 ]]; then
    programs=("${BW_PROGRAMS[@]}")
fi

if [[ ",$categories," == *",all,"* ]]; then
    echo "export_bw.sh: refusing 'all'; run decompiler_tool's export_<program> target for a full export" >&2
    exit 2
fi
for program in "${programs[@]}"; do
    if [[ ! " ${BW_PROGRAMS[*]} " == *" $program "* ]]; then
        echo "export_bw.sh: unknown program '$program' (expected one of: ${BW_PROGRAMS[*]})" >&2
        exit 2
    fi
done

export GHIDRA_INSTALL_DIR="${GHIDRA_INSTALL_DIR:-$HOME/Tools/Ghidra/lib}"

for program in "${programs[@]}"; do
    echo "=== $program: $categories"
    python3 "$REPO_ROOT/scripts/Python/export_annotations.py" \
        "$REPO_ROOT/projects" NocturneEdit "$program" "$REPO_ROOT/annotations/$program" "$categories" \
        --no-header-compile --no-function-compile --no-static-analysis
done
