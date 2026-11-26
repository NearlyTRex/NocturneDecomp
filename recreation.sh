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
#   ./recreation.sh gates            # every gate, one after another
#   ./recreation.sh gates tidy game  # some: coverage, tidy, format and game
#   ./recreation.sh gates release    # the shipping build, asked for by name
#   ./recreation.sh gates --jobs 4   # at most 4 at once (or RECREATION_JOBS=4)
#
# The game runs from the repo root, where its data files are, as the decomp's
# run script does. The gates are the checks a change must pass: the tests at
# full coverage, clang-tidy over the whole tree, clang-format, and the game
# built on the ci preset. The release gate builds the game as it ships, on the
# game-release preset at -O3 with link-time optimisation; it is the slowest, so
# it runs only when named. They run in turn and stop at the first that fails or
# at Ctrl+C. Compiles and tests run at most half the cores at once, and
# clang-tidy, the hungriest, at most 6, unless told otherwise; all at low
# priority, so the machine keeps its memory and stays usable. Fewer jobs take
# longer.

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

# cmake at low priority from the recreation's own directory.
gate_cmake() {
    (cd "$root/recreation" && nice -n 10 cmake "$@")
}

gate() {
    echo "== recreation.sh: $1 gate" >&2
    case "$1" in
        coverage)
            gate_cmake --preset coverage >/dev/null
            gate_cmake --build --preset coverage --target coverage
            ;;
        tidy)
            gate_cmake --preset ci >/dev/null
            NOCTURNE_RECREATION_JOBS="$tidy_jobs" gate_cmake --build --preset ci --target tidy
            ;;
        format)
            gate_cmake --build --preset default --target format-check
            ;;
        game)
            gate_cmake --build --preset ci --target nocturne
            ;;
        release)
            gate_cmake --preset game-release >/dev/null
            gate_cmake --build --preset game-release --target nocturne
            ;;
    esac
}

# The jobs go to the builds through CMAKE_BUILD_PARALLEL_LEVEL and to the tests and clang-tidy
# through NOCTURNE_RECREATION_JOBS. Each clang-tidy takes a gigabyte or two, so unless the jobs
# are given, tidy runs at most 6 at once. Every name is checked before any gate runs.
gates() {
    local jobs="${RECREATION_JOBS:-}"
    if [ "${1:-}" = "--jobs" ]; then
        jobs="${2:--}"
        shift 2 || shift
    fi
    if [ -n "$jobs" ] && ! [[ "$jobs" =~ ^[1-9][0-9]*$ ]]; then
        echo "recreation.sh: --jobs takes a number of jobs, not '$jobs'" >&2
        exit 2
    fi
    tidy_jobs="$jobs"
    if [ -z "$jobs" ]; then
        jobs=$((($(nproc) + 1) / 2))
        tidy_jobs=$((jobs < 6 ? jobs : 6))
    fi
    if [ "$#" -eq 0 ]; then
        set -- coverage tidy format game
    fi
    local name
    for name in "$@"; do
        case "$name" in
            coverage | tidy | format | game | release) ;;
            *)
                echo "recreation.sh: unknown gate '$name' (coverage, tidy, format, game or release)" >&2
                exit 2
                ;;
        esac
    done
    export CMAKE_BUILD_PARALLEL_LEVEL="$jobs" NOCTURNE_RECREATION_JOBS="$jobs"
    # A Ctrl+C reaches the gate's own processes too; once they stop, nothing more runs.
    trap 'echo "recreation.sh: gates interrupted" >&2; exit 130' INT TERM
    for name in "$@"; do
        gate "$name"
    done
    echo "== recreation.sh: passed: $* ($jobs jobs)" >&2
}

command="${1:-all}"
case "$command" in
    gates)
        shift
        gates "$@"
        ;;
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
        sed -n '2,/^[^#]/{/^#/p}' "$0" | sed 's/^# \{0,1\}//'
        ;;
    *)
        echo "recreation.sh: unknown command '$command' (build, run, gates, or nothing for build and run)" >&2
        exit 2
        ;;
esac
