#!/usr/bin/env bash
# run.sh — repo-root convenience wrapper that launches the 64-bit ASan exe.
#
# Companion to build.sh: build.sh builds the default lane (exe-linux-asan-x86_64),
# this runs it. It forwards to the cmake-generated
# build/exe-linux-asan-x86_64/run.sh and passes --dev by default (full engine
# dev hotkeys: TAB console, Ctrl+Z camera, etc.) since we're actively finding
# and fixing things in this lane.
#
#   ./run.sh                       # launch 64-bit ASan exe with --dev
#   ./run.sh --some-game-arg       # extra args pass through (--dev still on)
#
# Anything the generated run.sh understands works here too. To run WITHOUT dev
# mode, call the generated script directly:
#   ./build/exe-linux-asan-x86_64/run.sh

set -u

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd -P)"
GEN="${SCRIPT_DIR}/build/exe-linux-asan-x86_64/run.sh"

if [[ ! -x "${GEN}" ]]; then
    echo "run.sh: ${GEN} not found" >&2
    echo "        build it first: ./build.sh" >&2
    exit 127
fi

exec "${GEN}" --dev "$@"
