# Building

The repository ships a CMake project that drives two pipelines from the exported
pseudocode. See [`cmake/README.md`](../cmake/README.md) for the full reference.

## Quick start

```sh
./build.sh          # configure + build the default preset
./run.sh            # launch it with --dev
```

`build.sh` defaults to **`exe-linux-asan-x86_64`** — native 64-bit with AddressSanitizer and
UBSan. Override with the first argument or `BUILD_PRESET`:

```sh
./build.sh exe-linux-x86_64
BUILD_PRESET=check-linux-x86_64 ./build.sh
```

The source recreation under `recreation/` is a separate CMake project with its own script. It
builds the `game` preset into `build/recreation/game` and runs the executable from the repo root:

```sh
./recreation.sh          # build, then run
./recreation.sh build    # build only
./recreation.sh run      # run the last build
```

## Presets

| Preset | Target | What it does |
|---|---|---|
| `check-linux-x86_64` | native 64-bit | per-file `-fsyntax-only`; no link, no shims, no SDL |
| `exe-linux-x86_64` | native 64-bit | full executable |
| `exe-linux-asan-x86_64` | native 64-bit | full executable + ASan/UBSan — **the default** |
| `check-windows-x86_64` | Windows 64-bit | syntax check against the Windows target, from Linux |
| `exe-windows-x86_64` | Windows 64-bit | `nocturne.exe`, cross-compiled from Linux — **needs a cross toolchain** |
| `check-windows-msys2` | Windows 64-bit | syntax check, run **on** Windows under MSYS2 |
| `exe-windows-msys2` | Windows 64-bit | `nocturne.exe`, built **on** Windows under MSYS2 |
| `exe-windows-msvc` | Windows 64-bit | `nocturne.exe` with clang-cl and the Microsoft runtime, on Windows or cross from Linux — **needs MSVC libraries** |
| `exe-linux-gles-x86_64` | native 64-bit | full executable on OpenGL ES 3.0, the path the ES-only ports take ([porting.md](porting.md#opengl-es)) |
| `exe-linux-aarch64` | Linux, 64-bit Arm | full executable; native on an Arm host, otherwise a cross build |
| `exe-macos-arm64` | macOS, Apple silicon | full executable, built **on** a Mac |
| `exe-macos-x86_64` | macOS, Intel 64-bit | full executable, built **on** a Mac |

Each `exe-*` lane that ships has a vanilla twin with `-vanilla` before the architecture
(`exe-macos-vanilla-arm64`); `./build.sh --vanilla <preset>` finds it.

Each preset is a build directory (`build/<preset>`), a toolchain file from `cmake/toolchains/`,
and a handful of options composed from hidden base presets in `CMakePresets.json`. What differs
per operating system beyond the toolchain — socket backend, link libraries, FFmpeg's target,
runtime library staging, launchers — lives in one file per platform under `cmake/platforms/`;
`cmake/platforms/README.md` lists what such a file sets, and [porting.md](porting.md) covers
adding one.

**Everything is 64-bit.** There was once a 32-bit lane, matching the shipped binary's pointer
width and struct offsets exactly, but it has been removed: it was the only thing that needed an
i386 multilib toolchain, and keeping it meant every contributor paid for a layout check that the
generated assertions already describe. Those assertions live in `pseudocode/checks/` and are
`#if __SIZEOF_POINTER__ == 4` guarded, so they are simply inert now rather than wrong — the
32-bit layout they encode is still the documented ground truth for what the original did.

Building 64-bit meant removing the pointer-width assumptions the original was written on —
pointers truncated through `int`, allocation sizes and file serialisation written against a
4-byte pointer. Those shapes are flagged by the suspect detectors (`pointer_truncation` and
friends) and fixed as they surface, so the 64-bit lane doubles as a correctness check on
assumptions a 32-bit build would never catch.

## Prerequisites

**Core toolchain (every preset):** `cmake ≥ 3.20`, `clang`/`clang++`, `python3`, `ninja`,
`pkg-config`.

```sh
sudo apt install cmake clang ninja-build pkg-config python3
```

**Display and audio headers (Linux `exe-*` presets):** SDL2 compiles its X11, Wayland,
PulseAudio and ALSA backends only when their headers are present at configure time. Without
them it builds with just the headless drivers, so configure stops with an error rather than
produce a binary that opens no window and plays no sound.

```sh
sudo apt install libx11-dev libxext-dev libxcursor-dev libxi-dev libxfixes-dev \
    libxrandr-dev libxss-dev libwayland-dev libxkbcommon-dev wayland-protocols \
    libegl-dev libdecor-0-dev libpulse-dev libasound2-dev
```

That is the whole list for the Linux presets — no multilib, no `:i386` packages, and SDL2,
SDL2_ttf and FFmpeg are built from source rather than taken from the system.

### Windows cross-compilation

The Windows lane is **opt-in and needs nothing from a normal clone.** No other preset looks for
a cross compiler, so if you are not building for Windows you can skip this section entirely.

```sh
sudo apt install g++-mingw-w64-x86-64
```

It is the `g++` package and not `mingw-w64-x86-64-dev` because the shims are C++17 — the header
-only package has no target `libstdc++` for `std::thread` and `std::filesystem` to come from.
These are architecture-independent packages with no `:i386` component, so unlike the multilib
warning below they do not disturb an amd64 desktop.

`clang` does the compiling; the mingw packages supply the sysroot, the target C++ runtime and
`binutils` for FFmpeg's cross build. clang is not a preference but the only option: the warning
set is clang's, and `-Werror=sometimes-uninitialized` — the one that catches Ghidra splitting a
reused register into two locals — makes gcc stop with *no option `-Wsometimes-uninitialized`*.
Driving `x86_64-w64-mingw32-g++` would mean reworking that set first.

**This lane cross-compiles from Linux.** It produces a Windows binary on a Linux host, using
Linux packages; it is not the lane a Windows user runs. For that see *Building on Windows* below.

```sh
cmake --preset exe-windows-x86_64
cmake --build --preset exe-windows-x86_64
```

Configuring without the toolchain installed stops immediately and names the package, rather
than failing thousands of files later on a missing `<windows.h>`.

The build stages `SDL2.dll`, `SDL2_ttf.dll` and the gcc runtime DLLs the compiler linked against
beside `nocturne.exe`, so the output directory is something that runs when copied to a Windows
machine, and then fails if the exe imports anything a staged DLL does not export
(`scripts/Python/check_pe_imports.py`). FFmpeg is linked statically.

The lane builds `nocturne.exe` and can run the syntax check. It does **not** give you the test
binaries in a runnable form: they would cross-compile to PEs that `ctest` cannot execute on the
Linux host. Run the test suite from a Linux preset.

### Building on Windows

If you cloned the repository on Windows, use `exe-windows-msys2` instead. It targets the same
platform as the cross lane and compiles the same code; only the toolchain differs.

Install [MSYS2](https://www.msys2.org/), then from the **UCRT64** shell (`ucrt64.exe`):

```sh
pacman -S --needed mingw-w64-ucrt-x86_64-clang mingw-w64-ucrt-x86_64-cmake \
                   mingw-w64-ucrt-x86_64-ninja mingw-w64-ucrt-x86_64-python \
                   git make diffutils pkgconf

cmake --preset exe-windows-msys2
cmake --build --preset exe-windows-msys2
```

`make`, `diffutils` and `pkgconf` are MSYS2-side packages that FFmpeg's autotools build needs;
the rest are the ucrt64 toolchain. Configure from the UCRT64 shell specifically — `cmd.exe` and
PowerShell have neither the toolchain nor the `sh` that FFmpeg's `configure` requires, and the
preset stops with that message if `MSYSTEM` is unset.

**UCRT64 rather than CLANG64 or MINGW64.** UCRT64's clang links libstdc++, the same C++ runtime
the cross lane produces, so the two Windows binaries agree on standard-library behaviour.
CLANG64 would substitute libc++ and quietly make them different builds. Configuring from another
environment warns rather than stops, since it may well work.

Unlike the cross lane, this one can run the test suite: `ctest --test-dir build/exe-windows-msys2`.

**64-bit only, deliberately.** `include/system/basetypes.h` defines `__stdcall` and `__fastcall`
to nothing outside MSVC and clang-cl, which is what lets the decompiled sources compile on a
SysV host at all. On 32-bit
Windows those keywords select a real and different ABI, so blanking them there would silently
mis-call anything declared with one; on x86_64 there is a single calling convention and the
keywords are already ignored.

### clang-cl and the Microsoft runtime

`exe-windows-msvc` builds the same `nocturne.exe` against the Microsoft C runtime, STL and
Windows SDK instead of gcc's runtime, which is what Visual Studio, UWP and Xbox builds expect.
It compiles with `clang-cl` rather than `cl.exe`, so the clang warning set still applies, and
links the C runtime statically (`/MT`): the exe needs no Visual C++ redistributable, and only
`SDL2.dll` and `SDL2_ttf.dll` are staged beside it. The toolchain is
`cmake/toolchains/windows-msvc.cmake`, and one preset serves both hosts.

**On Windows**, install Visual Studio (or the Build Tools) with *Desktop development with C++*
and *C++ Clang tools for Windows*, plus [MSYS2](https://www.msys2.org/) with `make` for
FFmpeg's `configure`. Configure from an *x64 Native Tools Command Prompt*, with MSYS2's
`usr/bin` on `PATH`:

```sh
cmake --preset exe-windows-msvc
cmake --build --preset exe-windows-msvc
```

**On Linux**, it cross-compiles with `clang-cl`, `lld-link`, `llvm-lib`, `llvm-rc` and `llvm-mt`
(all in the `clang`/`llvm` packages) against Microsoft's CRT and SDK, which
[xwin](https://github.com/Jake-Shadle/xwin) downloads from Microsoft's own packages.
Downloading them accepts Microsoft's license, so it is a step you run yourself. The prebuilt
release binary avoids needing a recent Rust toolchain:

```sh
xwin --accept-license splat --output ~/.xwin
cmake --preset exe-windows-msvc            # or -DNOCTURNE_MSVC_SYSROOT=<dir>
cmake --build --preset exe-windows-msvc
```

Configuring without the sysroot stops and prints the xwin command.

The distro `clang-cl` is usually one major version behind the clang the current Microsoft STL
expects; the platform file defines `_ALLOW_COMPILER_AND_STL_VERSION_MISMATCH`, Microsoft's
documented opt-out, when the compiler is older than 19. The xwin sysroot has no debug CRT, so
every configuration links the release runtime.

### macOS

`exe-macos-arm64` (Apple silicon) and `exe-macos-x86_64` (Intel) build on a Mac with Apple
clang, from Xcode's command line tools. Either builds from either kind of Mac:

```sh
xcode-select --install
brew install cmake ninja

cmake --preset exe-macos-arm64
cmake --build --preset exe-macos-arm64
```

Both use `cmake/toolchains/macos.cmake`; the preset sets `CMAKE_OSX_ARCHITECTURES`. One
architecture per build rather than a universal binary, since FFmpeg's configure targets one.
The SDL dylibs are found beside the binary through `@executable_path`, as the `.so` files are
through `$ORIGIN` on Linux.

These lanes are built in CI on `macos-latest`; they have not been run on a Mac.

### Arm Linux

`exe-linux-aarch64` builds natively on a 64-bit Arm host (a Raspberry Pi 4 or 5, an Arm
server) with the same packages as the x86_64 lane. CI builds it and runs the unit tests on
GitHub's `ubuntu-24.04-arm` runner. From an x86_64 host the same preset is a clang cross
build. It needs the aarch64 C and C++ libraries and SDL's backend `-dev` packages for aarch64,
either in the multiarch directories or in a sysroot given as `-DNOCTURNE_LINUX_SYSROOT=<dir>`.

### Architectures

Nothing in the build assumes x86. Where the decompiled code leans on the original CPU, the
generated headers and the build carry a portable spelling:

| Original | Portable spelling |
|---|---|
| MMX instructions (`paddusb`, `pmulhw`, ...) | `mmintrin.h` on x86; elsewhere `nocturne_mmx_*` in `system/intrinsics.h`, checked bit for bit against the instructions by `tests/include/system/test_intrinsics_mmx.cpp` |
| `cpuid` | real on x86; every leaf reads zero elsewhere. The game's CPU detection is a reconstruction that reports MMX present either way |
| x87 80-bit `float10` | `long double` where that is the x87 format (x86 outside the Microsoft ABI), `double` everywhere else |
| Watcom's signed `char` | `-fsigned-char`, since arm64 Linux's `char` is unsigned |
| Separate multiply and add roundings | `-ffp-contract=off`, since arm64 fuses them by default |

The last two are in `NOCTURNE_CODEGEN_FLAGS` in `CMakeLists.txt`. Netplay is lockstep, so
both players have to compute the same floats. The `float10` split means a build of one kind
(Linux, mingw Windows and macOS on x86_64) against a build of the other (MSVC, any Arm) can
drift where extended-precision maths feeds the simulation. So can two builds with different
C libraries, since `sin` and friends are not required to round alike. Same platform and
architecture against itself is the configuration that is known to stay in step.

### SDL2, SDL2_ttf and FFmpeg

The shims consume these to provide a cross-platform substrate for the game's Windows APIs.
**Every lane builds them from source** via `cmake/bundledlibs.cmake`, fetched and built at
configure/build time and cached afterwards. The first `exe-*` configure takes a few minutes,
FFmpeg dominating.

Source-built SDL2 `dlopen`s the host's X11 and audio libraries at run time, under their
unversioned sonames. Those symlinks ship in the `-dev` packages rather than the runtime ones, so
the build recreates any that are missing into a `sdl-compat/` directory and the generated
`run.sh`/`debug.sh` put it on `LD_LIBRARY_PATH`. A normal desktop already has them; without
them SDL falls back to the headless `offscreen` driver and no window appears.

### Readable sanitizer output

`llvm-symbolizer` turns raw addresses in ASan/UBSan reports into `function at file.cpp:line`.
Without it the generated `run.sh` still works, but reports fall back to bare addresses.

```sh
sudo apt install llvm
```

The `check-*` presets are dependency-free beyond the core toolchain — they never link the
shims, so they pull in neither SDL2 nor FFmpeg.

## Build commands

```sh
# Syntax-only verification across the whole decompiled tree
cmake --preset check-linux-x86_64
cmake --build --preset check-linux-x86_64

# Full executable
cmake --preset exe-linux-x86_64
cmake --build --preset exe-linux-x86_64

# With sanitizers, plus the generated launcher
cmake --preset exe-linux-asan-x86_64
cmake --build --preset exe-linux-asan-x86_64
./build/exe-linux-asan-x86_64/run.sh
```

Each `exe-*` build directory gets a generated `run.sh` (sanitizer env defaults, symbolizer path)
and `debug.sh` (gdb, optionally under tmux — see [debugging.md](debugging.md)).

## Source selection

Per function, the build picks the first that exists:

```
.keep.{cpp,c}  >  raw .cpp/.c
```

`.mmx.{cpp,c}`, `.byval.{cpp,c}` and `.chunked.cpp` are generated as **references only** and are
never compiled — promote one to `.keep.*` to put it in the build. Adding a new `.keep` requires
a reconfigure, because the source lists are generated at configure time by
`cmake/collect_sources.py`.

The decompiled `entry/` and `crt/` modules are excluded from the executable: `src/main/main.cpp`
provides the entry point, and linking uses the system C/C++ runtime bridged through `shims/`.

## Build-time generation

| Output | Produced by | Notes |
|---|---|---|
| `generated/sources_*.txt` | `cmake/collect_sources.py` | per-module source lists, priority-resolved |
| `generated/nocturne_icon.h` | `scripts/Python/extract_exe_icon.py` | only under `-DNOCTURNE_ICON_FROM_EXE=ON` |

## Useful options

| Option | Default | Effect |
|---|---|---|
| `NOCTURNE_BUILD_CHECK` | ON | build the syntax-check target |
| `NOCTURNE_BUILD_EXE` | OFF | build the linked executable |
| `NOCTURNE_ASAN` | OFF | AddressSanitizer + UBSan |
| `NOCTURNE_GL_PRESENT` | ON | present through OpenGL; OFF selects the legacy `SDL_Renderer` path |
| `NOCTURNE_USE_CCACHE` | ON | route the compiler through ccache when present |
| `NOCTURNE_ICON_FROM_EXE` | OFF | extract the window icon from a local game exe instead of the committed one |

Any `NOCTURNE_AUTHENTIC_*` flag can also be set on the configure line to restore a shipped
behaviour — see [authenticity-flags.md](authenticity-flags.md).

## ccache

Every decompiled file is compiled against a precompiled `nocturne.h`, and by default ccache
refuses to cache a compile that uses a precompiled header. Two things make those compiles
cacheable:

- **ccache sloppiness**, so it accepts the precompiled header:

  ```sh
  ccache --set-config sloppiness=pch_defines,time_macros,include_file_mtime,include_file_ctime
  ```

  CI sets the same through the Workflows library's `cpp-build`.
- **A reproducible precompiled header.** Clang stamps a `.pch` with the time it was built, so a
  rebuilt one never matches the last. With ccache on, `CMakeLists.txt` passes
  `-fno-pch-timestamp` to clang to leave the stamp out.

`time_macros` lets a cached object keep an old `__DATE__`/`__TIME__`. The only file using them,
`shims/core/version.cpp`, also includes the version header regenerated on every commit, so it is
never a hit across commits and its build date stays current.

`ccache --show-stats --verbose` breaks the calls down by reason, including any still rejected as
`could not use precompiled header`.
