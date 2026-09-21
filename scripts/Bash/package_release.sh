#!/usr/bin/env bash
#
# package_release.sh — build a preset and wrap its output in a named archive.
#
#   ./scripts/Bash/package_release.sh                      # the default lane
#   ./scripts/Bash/package_release.sh exe-windows-x86_64
#   ./scripts/Bash/package_release.sh exe-linux-x86_64 exe-windows-x86_64
#
# Options:
#   --out-dir DIR   where the archives land (default: dist/)
#   --no-build      package what is already in build/<preset>/
#
# Archives are named from the project version and the preset, so two lanes of
# the same version never collide:
#
#   dist/nocturne-0.1.0-exe-linux-x86_64.tar.gz
#   dist/nocturne-0.1.0-exe-windows-x86_64.zip
#
# NO GAME DATA. The PODs, BACKDROP/, MODELS/ and the original executables are
# not in the repository and are not redistributable; an archive holds the engine
# and the files the repository actually owns. Anyone using it supplies their own
# copy of the game, which is the same arrangement the build has always had.

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/../.." && pwd)"

OUT_DIR="${ROOT_DIR}/dist"
DO_BUILD=1
PRESETS=()

while [ $# -gt 0 ]; do
    case "$1" in
        --out-dir) OUT_DIR="$2"; shift 2 ;;
        --no-build) DO_BUILD=0; shift ;;
        -h|--help) sed -n '2,25p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'; exit 0 ;;
        -*) echo "package_release.sh: unknown option '$1'" >&2; exit 2 ;;
        *) PRESETS+=("$1"); shift ;;
    esac
done

if [ ${#PRESETS[@]} -eq 0 ]; then
    # Not the ASan preset, which is the default everywhere else in the
    # repository: a release must not ship a binary that carries sanitizer
    # instrumentation and aborts the process on the first UBSan finding.
    PRESETS=("exe-linux-x86_64")
fi

# The version is CMakeLists.txt's, read here rather than duplicated. Parsing the
# project() line keeps one source of truth; a second copy in this script is a
# copy that goes stale.
VERSION="$(sed -n 's/^project(NocturneDecomp VERSION \([0-9.]*\).*/\1/p' "${ROOT_DIR}/CMakeLists.txt")"
if [ -z "${VERSION}" ]; then
    echo "package_release.sh: could not read the version out of CMakeLists.txt" >&2
    exit 1
fi

mkdir -p "${OUT_DIR}"

# Files the repository owns that belong beside the binary. Every one of these is
# tracked in git — that is the test for whether it is ours to redistribute.
#
# gamecontrollerdb.txt is runtime data the pad layer reads and is zlib-licensed,
# so it ships with its licence beside it.
COMMON_FILES=(
    "LICENSE"
    "gamecontrollerdb.txt"
    "gamecontrollerdb.license.txt"
    "README.md"
)

for preset in "${PRESETS[@]}"; do
    build_dir="${ROOT_DIR}/build/${preset}"

    if [ "${DO_BUILD}" -eq 1 ]; then
        echo "package_release.sh: building ${preset}"
        "${ROOT_DIR}/build.sh" "${preset}"
    fi

    if [ ! -d "${build_dir}" ]; then
        echo "package_release.sh: no build directory for '${preset}'" >&2
        exit 1
    fi

    stage="${OUT_DIR}/nocturne-${VERSION}-${preset}"
    rm -rf "${stage}"
    mkdir -p "${stage}"

    # The executable, whichever name this target produced.
    binary=""
    for candidate in "${build_dir}/nocturne" "${build_dir}/nocturne.exe"; do
        if [ -f "${candidate}" ]; then binary="${candidate}"; break; fi
    done
    if [ -z "${binary}" ]; then
        echo "package_release.sh: ${preset} produced no nocturne binary" >&2
        exit 1
    fi
    cp "${binary}" "${stage}/"

    # Runtime libraries. A Windows cross build leaves its SDL2 and mingw runtime
    # DLLs beside the executable; a Linux build leaves its SDL2 sub-builds under
    # _deps/, and the executable is linked with $ORIGIN so it finds them once
    # they are copied in here. Copy the real files rather than the version
    # symlinks, under the SONAME the loader asks for.
    shopt -s nullglob
    for lib in "${build_dir}"/*.dll; do
        cp "${lib}" "${stage}/"
    done
    for lib in "${build_dir}"/_deps/*/lib*.so.[0-9]*; do
        # libSDL2-2.0d.so.0.3000.0 and libSDL2-2.0d.so.0 are the same file; the
        # second is what the binary records, so that is the name it ships under.
        base="$(basename "${lib}")"
        case "${base}" in
            *.so.[0-9]*.[0-9]*.[0-9]*) continue ;;
        esac
        cp -L "${lib}" "${stage}/${base}"
    done
    shopt -u nullglob

    for f in "${COMMON_FILES[@]}"; do
        if [ -f "${ROOT_DIR}/${f}" ]; then cp "${ROOT_DIR}/${f}" "${stage}/"; fi
    done

    # What this archive actually is, recorded next to it rather than only in the
    # filename, so an unpacked directory can still say where it came from.
    "${binary}" --version > "${stage}/VERSION.txt" 2>/dev/null || \
        echo "NocturneDecomp ${VERSION}, ${preset}" > "${stage}/VERSION.txt"

    case "${preset}" in
        *windows*)
            archive="${OUT_DIR}/nocturne-${VERSION}-${preset}.zip"
            rm -f "${archive}"
            ( cd "${OUT_DIR}" && zip -qr "$(basename "${archive}")" "$(basename "${stage}")" )
            ;;
        *)
            archive="${OUT_DIR}/nocturne-${VERSION}-${preset}.tar.gz"
            rm -f "${archive}"
            tar -C "${OUT_DIR}" -czf "${archive}" "$(basename "${stage}")"
            ;;
    esac

    rm -rf "${stage}"
    echo "package_release.sh: ${archive}"
done
