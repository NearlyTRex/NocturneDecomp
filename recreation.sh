#!/usr/bin/env bash
# recreation.sh — build and run the source recreation's executable.
#
# The recreation is its own CMake project under recreation/, with presets in
# recreation/CMakePresets.json and build trees in build/recreation/<preset>.
# The default preset is `game`: the SDL adapters and the nocturne executable,
# optimized with debug info, the playable build. `--debug` (or DEBUG=1) takes
# `game-debug` instead: -O0 for stepping through, but for the hot rendering
# paths, which build at -O2 as the decomp's own debug lane keeps them.
# Neither carries the coverage instrumentation of `ci`, whose runs would leave
# profile files behind.
#
#   ./recreation.sh                  # build, then run
#   ./recreation.sh build            # build only
#   ./recreation.sh run              # run the last build
#   ./recreation.sh run --some-arg   # arguments after the command go to the game
#   ./recreation.sh --debug          # the same, on the game-debug preset
#   RECREATION_PRESET=ci ./recreation.sh build
#
# The game runs from the repo root, where its data files are, as the decomp's
# run script does.

set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
debug="${DEBUG:-0}"
if [ "${1:-}" = "--debug" ]; then
    debug=1
    shift
fi
default_preset=game
if [ "$debug" = "1" ]; then
    default_preset=game-debug
fi
preset="${RECREATION_PRESET:-$default_preset}"
build_dir="$root/build/recreation/$preset"
exe="$build_dir/nocturne"

build() {
    # Configured every run: a build's own reconfigure reuses the cache, so a preset change, such
    # as a new compiler, would never reach it.
    (cd "$root/recreation" && cmake --preset "$preset")
    (cd "$root/recreation" && cmake --build --preset "$preset" --target nocturne)
}

run() {
    if [ ! -x "$exe" ]; then
        echo "recreation.sh: no executable at $exe; build first" >&2
        exit 1
    fi
    cd "$root"
    exec "$exe" "$@"
}

command="${1:-all}"
case "$command" in
    build)
        build
        ;;
    run)
        shift
        run "$@"
        ;;
    all)
        build
        run
        ;;
    -h|--help)
        sed -n '2,21p' "$0" | sed 's/^# \{0,1\}//'
        ;;
    *)
        echo "recreation.sh: unknown command '$command' (build, run, or nothing for both)" >&2
        exit 2
        ;;
esac
