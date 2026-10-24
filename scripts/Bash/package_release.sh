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
# A macOS build is an app bundle; its archive holds Nocturne.app (or Nocturne
# Vanilla.app) instead of a bare binary and libraries.
#
# NO GAME DATA. The PODs, BACKDROP/, MODELS/ and the original executables are
# not in the repository and are not redistributable; an archive holds the engine
# and the files the repository actually owns. Anyone using it supplies their own
# copy of the game, which is the same arrangement the build has always had.

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# Another checkout to package from; the tests point this at a fixture tree.
ROOT_DIR="${NOCTURNE_SOURCE_DIR:-$(cd "${SCRIPT_DIR}/../.." && pwd)}"

OUT_DIR="${ROOT_DIR}/dist"
DO_BUILD=1
PRESETS=()

while [ $# -gt 0 ]; do
    case "$1" in
        --out-dir) OUT_DIR="$2"; shift 2 ;;
        --no-build) DO_BUILD=0; shift ;;
        -h|--help) sed -n '3,25p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'; exit 0 ;;
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
        SKIP_REGEN=1 "${ROOT_DIR}/build.sh" "${preset}"
    fi

    if [ ! -d "${build_dir}" ]; then
        echo "package_release.sh: no build directory for '${preset}'" >&2
        exit 1
    fi

    # The build writes what its archive holds: the binary, the archive format,
    # and the runtime libraries its platform file says belong beside it, under
    # the name the loader asks for. cmake/platforms/README.md has the format.
    manifest="${build_dir}/package.txt"
    if [ ! -f "${manifest}" ]; then
        echo "package_release.sh: ${preset} has no ${manifest}; configure it with NOCTURNE_BUILD_EXE=ON" >&2
        exit 1
    fi
    binary=""
    format=""
    bundle=""
    runtime=()
    while IFS='=' read -r key value; do
        case "${key}" in
            binary)  binary="${value}" ;;
            format)  format="${value}" ;;
            bundle)  bundle="${value}" ;;
            runtime) runtime+=("${value}") ;;
        esac
    done < "${manifest}"
    if [ ! -f "${binary}" ]; then
        echo "package_release.sh: ${preset} produced no binary at ${binary}" >&2
        exit 1
    fi

    stage="${OUT_DIR}/nocturne-${VERSION}-${preset}"
    rm -rf "${stage}"
    mkdir -p "${stage}"
    if [ -n "${bundle}" ]; then
        # An app bundle already holds its binary, libraries and signature;
        # -R keeps its internal symlinks as symlinks, which the seal covers.
        cp -R "${bundle}" "${stage}/"
    else
        cp "${binary}" "${stage}/"
    fi
    # -L: a soname is usually a symlink to the versioned file; ship the file
    # under the soname.
    for lib in ${runtime[@]+"${runtime[@]}"}; do
        cp -L "${lib}" "${stage}/"
    done

    for f in "${COMMON_FILES[@]}"; do
        # A bundle carries the controller mappings in its own Resources.
        case "${f}" in gamecontrollerdb*) [ -n "${bundle}" ] && continue ;; esac
        if [ -f "${ROOT_DIR}/${f}" ]; then cp "${ROOT_DIR}/${f}" "${stage}/"; fi
    done

    # What this archive actually is, recorded next to it rather than only in the
    # filename, so an unpacked directory can still say where it came from.
    "${binary}" --version > "${stage}/VERSION.txt" 2>/dev/null || \
        echo "NocturneDecomp ${VERSION}, ${preset}" > "${stage}/VERSION.txt"

    archive="${OUT_DIR}/nocturne-${VERSION}-${preset}.${format}"
    rm -f "${archive}"
    case "${format}" in
        zip)    if command -v zip >/dev/null; then
                    ( cd "${OUT_DIR}" && zip -qr "$(basename "${archive}")" "$(basename "${stage}")" )
                else
                    ( cd "${OUT_DIR}" && 7z a -tzip -bso0 "$(basename "${archive}")" "$(basename "${stage}")" )
                fi ;;
        tar.gz) tar -C "${OUT_DIR}" -czf "${archive}" "$(basename "${stage}")" ;;
        *)      echo "package_release.sh: unknown archive format '${format}' in ${manifest}" >&2
                exit 1 ;;
    esac

    rm -rf "${stage}"
    echo "package_release.sh: ${archive}"
done
