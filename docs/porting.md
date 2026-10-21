# Porting

What it takes to build and run the game on a platform the repository does not already target:
a console homebrew SDK, another desktop OS, a sandboxed app model. This is about the
decompilation under `annotations/`, which is the codebase that runs today. The source
recreation in `recreation/` has its own platform interfaces (`recreation/platform/`) and is
the long-term porting base, but it is not playable yet.

## What a port is made of

A platform is three files, and none of them has to live in this repository.

1. **A CMake toolchain file**: compiler, target triple, sysroot, the flags every compile
   gets. The ones in `cmake/toolchains/` are examples of each kind of setup: a native host
   (`linux-x86_64`, `macos`), another architecture (`linux-aarch64`), a cross compiler with a
   sysroot (`windows-x86_64`), a second runtime on the same OS (`windows-msvc`).
2. **A platform file**: everything the build does differently on that OS. Socket backend,
   extra sources and libraries, how FFmpeg is configured, what is staged beside the binary,
   post-build checks and packaging. `cmake/platforms/README.md` lists every variable and hook;
   `linux.cmake`, `windows.cmake` and `macos.cmake` are the in-tree ones. An out-of-tree port
   passes its own with `-DNOCTURNE_PLATFORM_FILE=<path>`.
3. **Optionally, a dependencies file**: SDL2, SDL2_ttf and FFmpeg the port's own way, when the
   bundled source build (`cmake/bundledlibs.cmake`) cannot target the platform. It sets the
   same variables the bundled one does; the platform file points `NOCTURNE_DEPENDENCIES_FILE`
   at it. This is where a console's SDL backend or SDK-built libraries come in.

A preset that names the toolchain is a convenience on top. In-tree presets compose hidden
bases (`exe`, `vanilla`, `toolchain-*`) in `CMakePresets.json`.

## Constraints every port inherits

- **64-bit, any architecture.** x86_64 and aarch64 are built in CI. `include/system/basetypes.h`
  blanks `__stdcall` and the other calling convention keywords outside MSVC and clang-cl, which
  is safe wherever there is one convention: every 64-bit target, but not 32-bit x86. The
  original's MMX, `cpuid`, x87 `float10` and signed `char` have portable spellings, listed
  under *Architectures* in [building.md](building.md#architectures) with what each means for
  netplay between unlike builds.
- **Little-endian.** The PODs, saves and network packets are read as the original wrote them,
  byte for byte.
- **A clang compiler.** The warning set in `CMakeLists.txt` is clang's, and
  `-Werror=sometimes-uninitialized` is what catches a class of decompiler defect
  ([decompiler-artifacts.md](decompiler-artifacts.md) §13). clang and clang-cl both work; gcc
  does not.
- **Generated headers are not edited.** Everything under `pseudocode/include/` is written by
  the Ghidra export. A header that needs a platform spelling is fixed in the generator,
  `scripts/Python/ghidra_annotations/annotations/pseudocode/headers.py`, as the `_MSC_VER`
  branch in `watcom.h` is.

## Where the shims meet the OS

The game speaks Win32, DirectX and the Watcom runtime; the shims in `pseudocode/shims/`
implement those over SDL2 and the C++ standard library. Most of them need nothing per
platform. The places that do:

| Seam | Where | Per platform |
|---|---|---|
| Sockets | `win32/winsock.cpp` → `winsock_posix.c` / `winsock_win32.c` | One backend file, chosen by the platform file's `NOCTURNE_PLATFORM_SHIM_EXCLUDE`; both define the same eighteen `nocturne_socket_*` functions |
| Files, time, threads, process | `win32/kernel32.cpp` | `#if` arms for Windows, Linux and Apple/BSD: descriptor I/O, the program path, the memory query, time zone |
| Text-mode files | `watcom/crt.cpp` | CR stripping through `fopencookie` (glibc) or `funopen` (Apple, BSD); Windows' CRT does it itself |
| CRT name clashes | `include/system/watcom.h` (generated) | Renames under `_MSC_VER` where the Microsoft runtime defines the same names |
| Rendering | `gl/gl_present.cpp`, `renderer/` | OpenGL 3.3 core through SDL, or ES 3.0 (below); macOS asks for a forward-compatible context |
| Files | `watcom/path.cpp` | One resolver for every path the game opens, with the data and user directories below |
| Input, audio, window | `game/gamepad.cpp`, `directx/`, `win32/user32.cpp` | SDL2 only; a port with its own SDL backend needs nothing here |

A port adds its own OS adapters as sources through `NOCTURNE_PLATFORM_SOURCES` rather than
editing the shared shims, and guards anything it must change in a shared file with a macro of
its own. Behaviour that is new rather than a host spelling, such as a different input scheme,
goes behind an option in `shims/config/` so every platform can choose it.

## Data and save locations

Every file the game opens goes through one resolver, `shims/watcom/path.h`, which takes two
roots:

- **The data directory**, where the PODs and the rest of the install are read from.
- **The user directory**, which takes every write: the INI, saves, screenshots, logs. It is
  looked in first on every read, so a file written once is read back from there. A file that so
  far exists only in the data directory is copied across before it is changed, and the
  shipped copy is never touched.

Neither set is the working directory for both, which is how the game has always run and what
every in-tree platform still does. They come from `--data-dir` / `--user-dir`, then
`NOCTURNE_DATA_DIR` / `NOCTURNE_USER_DIR`, then what the platform file compiles in through
`NOCTURNE_PLATFORM_DEFINITIONS`. For a port whose writable place is only known at run time,
`NOCTURNE_USER_DIR_FROM_SDL` takes `SDL_GetPrefPath`'s answer. `shims/core/path_roots.h` has
the order, and `tests/shims/watcom/test_path_roots.cpp` the behaviour.

A delete or rename in the user directory cannot hide a shipped file; the game never needs it
to, since everything it deletes is something it wrote.

## OpenGL ES

`-DNOCTURNE_GLES=ON`, or `NOCTURNE_GLES=1` in a platform file's definitions, asks for an
OpenGL ES 3.0 context instead of desktop 3.3 core. That is what ANGLE gives UWP and Xbox, and
what most consoles and Arm boards have. The shaders compile as `#version 300 es`, and the
desktop-only entry points (`glClearDepth`, `glDepthRange`, `glDrawBuffer`) are filled in from
their ES forms in `gl/gl_api.cpp`, so no call site changes. Reading a frame back goes through
RGBA bytes, the one format ES promises. The types and enums still come from SDL's copy of the
desktop headers, so no ES headers are needed. Uploads of BGRA textures need
`EXT_texture_format_BGRA8888`, which ANGLE and Mesa both have.

`exe-linux-gles-x86_64` builds the ES path for a desktop Mesa driver, so it can be run and
compared against the desktop lane on the same machine.
