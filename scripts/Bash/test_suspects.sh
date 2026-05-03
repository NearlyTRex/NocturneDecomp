#!/bin/bash
# Run source-text suspect detectors against decompiled pseudocode files.
# Reuses the regex detectors in
# scripts/Python/ghidra_annotations/annotations/pseudocode/suspects.py.
#
# Usage: test_suspects.sh [--show-omitted] <file.cpp> [file2.cpp ...]

set -e
REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
exec python3 "$REPO_ROOT/scripts/Python/test_suspects.py" "$@"
