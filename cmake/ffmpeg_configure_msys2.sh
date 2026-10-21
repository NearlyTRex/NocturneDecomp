#!/bin/sh
# Run FFmpeg's configure from the native MSYS2 lane.
#
# CMake hands ExternalProject's <SOURCE_DIR> and <INSTALL_DIR> over as native
# Windows paths. configure is a POSIX shell script: it reads C:/foo as a
# relative path with a stray drive colon, and the build lands somewhere
# unintended or fails outright. cygpath is what turns those into the /c/foo
# form the shell understands.
#
# NOCTURNE_TOOL_DIR, when set, is put first on PATH, so the compiler can be
# named without a directory that has spaces in it (see platforms/windows.cmake).
#
# Used only when building on Windows under MSYS2. The Linux-hosted lanes run
# configure directly off its shebang and never come through here.
set -e

if [ "$#" -lt 2 ]; then
    echo "usage: $0 <source-dir> <install-dir> [configure args...]" >&2
    exit 2
fi

src="$1"
prefix="$2"
shift 2

if command -v cygpath >/dev/null 2>&1; then
    src=$(cygpath -u "$src")
    prefix=$(cygpath -u "$prefix")
    if [ -n "$NOCTURNE_TOOL_DIR" ]; then
        PATH="$(cygpath -u "$NOCTURNE_TOOL_DIR"):$PATH"
        export PATH
    fi
fi

exec "$src/configure" --prefix="$prefix" "$@"
