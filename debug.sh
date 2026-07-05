#!/usr/bin/env bash
# debug.sh — repo-root convenience wrapper that debugs the 64-bit ASan exe.
#
# Companion to build.sh: build.sh builds the default lane (exe-linux-asan-x86_64),
# this debugs it. It forwards to the cmake-generated
# build/exe-linux-asan-x86_64/debug.sh and passes --dev by default (full engine
# dev hotkeys: TAB console, Ctrl+Z camera, etc.) since we're actively finding
# and fixing things in this lane.
#
#   ./debug.sh                     # run under gdb, break on crash, --dev on
#   ./debug.sh --tmux              # launch gdb in a detached tmux session
#   ./debug.sh --some-game-arg     # extra args pass through (--dev still on)
#
# All flags the generated debug.sh understands (--tmux, NOCTURNE_BREAKS=...,
# etc.) work here too. To debug WITHOUT dev mode, call the generated script
# directly:
#   ./build/exe-linux-asan-x86_64/debug.sh

set -u

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd -P)"
GEN="${SCRIPT_DIR}/build/exe-linux-asan-x86_64/debug.sh"

if [[ ! -x "${GEN}" ]]; then
    echo "debug.sh: ${GEN} not found" >&2
    echo "          build it first: ./build.sh" >&2
    exit 127
fi

exec "${GEN}" --dev "$@"
