#!/usr/bin/env bash
# run.sh — repo-root convenience wrapper that launches the built 64-bit exe.
#
# Companion to build.sh: build.sh builds the default lane (exe-linux-x86_64),
# this runs it. It forwards to the cmake-generated build/<preset>/run.sh and
# passes --dev by default (full engine dev hotkeys: TAB console, Ctrl+Z
# camera, etc.) since we're actively finding and fixing things in this lane.
# BUILD_PRESET picks another lane, as it does for build.sh:
#
#   ./run.sh                       # launch exe-linux-x86_64 with --dev
#   ./run.sh --some-game-arg       # extra args pass through (--dev still on)
#   BUILD_PRESET=exe-linux-asan-x86_64 ./run.sh   # the ASan exe
#
# --vanilla (or VANILLA=1) runs the vanilla lane of that preset instead: its
# vanilla twin preset (exe-linux-vanilla-x86_64), or build/<preset>-vanilla
# if that is the only one built.
#
#   ./run.sh --vanilla             # launch the vanilla exe with --dev
#
# Anything the generated run.sh understands works here too. To run WITHOUT dev
# mode, call the generated script directly:
#   ./build/exe-linux-x86_64/run.sh

set -u

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd -P)"

VANILLA="${VANILLA:-0}"
if [[ "${1:-}" == "--vanilla" ]]; then
    VANILLA=1
    shift
fi

PRESET="${BUILD_PRESET:-exe-linux-x86_64}"
if [[ "${VANILLA}" == "1" && "${PRESET}" != *vanilla* ]]; then
    # As build.sh names them: the twin puts -vanilla before the architecture.
    GEN="${SCRIPT_DIR}/build/${PRESET%-*}-vanilla-${PRESET##*-}/run.sh"
    if [[ ! -x "${GEN}" && -x "${SCRIPT_DIR}/build/${PRESET}-vanilla/run.sh" ]]; then
        GEN="${SCRIPT_DIR}/build/${PRESET}-vanilla/run.sh"
    fi
    BUILD_HINT="./build.sh --vanilla"
else
    GEN="${SCRIPT_DIR}/build/${PRESET}/run.sh"
    BUILD_HINT="./build.sh"
fi

if [[ ! -x "${GEN}" ]]; then
    echo "run.sh: ${GEN} not found" >&2
    echo "        build it first: ${BUILD_HINT}" >&2
    exit 127
fi

exec "${GEN}" --dev "$@"
