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

The build stages `SDL2.dll`, `SDL2_ttf.dll` and the target `libstdc++`/`libwinpthread` beside
`nocturne.exe`, so the output directory is something that runs when copied to a Windows machine.
FFmpeg is linked statically.

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
to nothing, which is what lets the decompiled sources compile on a SysV host at all. On 32-bit
Windows those keywords select a real and different ABI, so blanking them there would silently
mis-call anything declared with one; on x86_64 there is a single calling convention and the
keywords are already ignored.

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
