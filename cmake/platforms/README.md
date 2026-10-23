# Platform files

Everything the build does differently per target operating system lives in one file here,
included early by the top-level `CMakeLists.txt`. The rest of the build is the same on every
platform.

`NOCTURNE_PLATFORM` names the file: `linux`, `windows` or `macos`, derived from
`CMAKE_SYSTEM_NAME` when unset. A port that lives outside this repository points
`NOCTURNE_PLATFORM_FILE` at its own file instead, so adding a platform needs no edit here:

```sh
cmake -B build/ps4 --toolchain ps4/toolchain.cmake \
      -DNOCTURNE_BUILD_EXE=ON -DNOCTURNE_PLATFORM_FILE=$PWD/ps4/platform.cmake
```

## What a platform file sets

All variables are optional; the defaults are the empty list or `OFF`.

| Variable | Meaning |
|---|---|
| `NOCTURNE_PLATFORM_SHIM_EXCLUDE` | Regexes matched against shim source paths; matches are not built. Picks one socket backend. |
| `NOCTURNE_PLATFORM_SOURCES` | Extra sources compiled into the shim library: a port's own OS adapters. |
| `NOCTURNE_PLATFORM_INCLUDE_DIRS` | Extra include directories for the shim library. |
| `NOCTURNE_PLATFORM_DEFINITIONS` | Extra compile definitions for the shim library. The data and user directories are set here: `NOCTURNE_DEFAULT_DATA_DIR="<dir>"` and `NOCTURNE_DEFAULT_USER_DIR="<dir>"`, or `NOCTURNE_USER_DIR_FROM_SDL` for `SDL_GetPrefPath`'s answer, or `NOCTURNE_DATA_DIR_FROM_SDL` to make that folder the data directory too (`shims/core/path_roots.h`). |
| `NOCTURNE_PLATFORM_LIBRARIES` | Extra libraries linked into the executable. |
| `NOCTURNE_PLATFORM_LAUNCHERS` | `ON` to generate the bash `run.sh` / `debug.sh` beside the binary. |
| `NOCTURNE_LAUNCHER_EXE` | The binary those launchers run, relative to the build directory. Defaults to `nocturne`; an app bundle names the binary inside it. |
| `NOCTURNE_DEPENDENCIES_FILE` | The file that provides SDL2, SDL2_ttf and FFmpeg. Defaults to `cmake/bundledlibs.cmake`. |
| `NOCTURNE_FFMPEG_TARGET_OS` | FFmpeg's `--target-os`, for the bundled build. |
| `NOCTURNE_FFMPEG_EXTRA_ARGS` | Further FFmpeg `configure` arguments: compiler, cross prefix, flags. |
| `NOCTURNE_FFMPEG_CONFIGURE_WRAPPER` | A command that runs `configure` for the bundled build, given the source and install directories first. |
| `NOCTURNE_FFMPEG_SYSTEM_LIBRARIES` | What the static FFmpeg libraries need from the system at link time. |
| `NOCTURNE_PACKAGE_FORMAT` | The release archive's format: `tar.gz` (the default) or `zip`. |

## Functions a platform file may define

| Function | Called |
|---|---|
| `nocturne_platform_check_sdl(<SDL_config.h> <SDL binary dir>)` | After the bundled SDL configures; fail here if it lacks a backend the platform needs. |
| `nocturne_platform_after_dependencies()` | Once the dependencies are available. |
| `nocturne_platform_finalize(<target>)` | On the executable target: rpath, staging runtime libraries beside it, post-build checks. |

`nocturne_package_runtime(<file>...)`, which the build defines, names files a release archive
ships beside the binary; generator expressions such as `$<TARGET_SONAME_FILE:SDL2::SDL2>` are
fine. Call it from `nocturne_platform_finalize`.

`nocturne_package_bundle(<dir>)` names an application bundle that the archive ships whole,
in place of the bare binary (`$<TARGET_BUNDLE_DIR:nocturne>` on macOS). Libraries already inside
the bundle are not listed with `nocturne_package_runtime`.

## The release manifest

Every executable build writes `package.txt` into its build directory, which
`scripts/Bash/package_release.sh` reads instead of knowing about platforms itself:

```
binary=/abs/path/to/nocturne
format=tar.gz
runtime=/abs/path/to/libSDL2-2.0.so.0
runtime=/abs/path/to/libSDL2_ttf-2.0.so.0
```

A runtime entry is copied following symlinks, under its own file name. A `bundle=` line, when
present, is copied whole instead of `binary`.

## Providing the dependencies another way

A dependencies file other than `bundledlibs.cmake` sets the same variables the bundled one does:
`SDL2_INCLUDE_DIRS`, `SDL2_CFLAGS_OTHER`, `SDL2_LIBRARIES`, the matching `SDL2TTF_*` and
`FFMPEG_*` triples, and `NOCTURNE_FFMPEG_DEP` (a target to build before the shims, or empty).
That is how a port uses an SDL backend of its own or libraries built by its SDK.
