#!/usr/bin/env bash
# recreation.sh — build and run the source recreation's executable.
#
# The recreation is its own CMake project under recreation/, with presets in
# recreation/CMakePresets.json and build trees in build/recreation/<preset>.
# The default preset is `game`: a debug build with the SDL adapters and the
# nocturne executable, without the coverage instrumentation of `ci`, whose
# runs would leave profile files behind.
#
#   ./recreation.sh                  # build, then run
#   ./recreation.sh build            # build only
#   ./recreation.sh run              # run the last build
#   ./recreation.sh run --some-arg   # arguments after the command go to the game
#   RECREATION_PRESET=ci ./recreation.sh build
#
# The game runs from the repo root, where its data files are, as the decomp's
# run script does.

set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
preset="${RECREATION_PRESET:-game}"
build_dir="$root/build/recreation/$preset"
exe="$build_dir/nocturne"

build() {
    if [ ! -f "$build_dir/CMakeCache.txt" ]; then
        (cd "$root/recreation" && cmake --preset "$preset")
    fi
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
        sed -n '2,17p' "$0" | sed 's/^# \{0,1\}//'
        ;;
    *)
        echo "recreation.sh: unknown command '$command' (build, run, or nothing for both)" >&2
        exit 2
        ;;
esac
