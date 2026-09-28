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
# --vanilla (or VANILLA=1) runs the vanilla lane instead: the one
# `./build.sh --vanilla` builds (build/exe-linux-asan-x86_64-vanilla), or
# build/exe-linux-vanilla-x86_64 if that is the only one built.
#
#   ./run.sh --vanilla             # launch the vanilla exe with --dev
#
# Anything the generated run.sh understands works here too. To run WITHOUT dev
# mode, call the generated script directly:
#   ./build/exe-linux-asan-x86_64/run.sh

set -u

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd -P)"

VANILLA="${VANILLA:-0}"
if [[ "${1:-}" == "--vanilla" ]]; then
    VANILLA=1
    shift
fi

if [[ "${VANILLA}" == "1" ]]; then
    GEN="${SCRIPT_DIR}/build/exe-linux-asan-x86_64-vanilla/run.sh"
    if [[ ! -x "${GEN}" && -x "${SCRIPT_DIR}/build/exe-linux-vanilla-x86_64/run.sh" ]]; then
        GEN="${SCRIPT_DIR}/build/exe-linux-vanilla-x86_64/run.sh"
    fi
    BUILD_HINT="./build.sh --vanilla"
else
    GEN="${SCRIPT_DIR}/build/exe-linux-asan-x86_64/run.sh"
    BUILD_HINT="./build.sh"
fi

if [[ ! -x "${GEN}" ]]; then
    echo "run.sh: ${GEN} not found" >&2
    echo "        build it first: ${BUILD_HINT}" >&2
    exit 127
fi

exec "${GEN}" --dev "$@"
