# Building

The repository ships a CMake project that drives two pipelines from the exported
pseudocode. See [`cmake/README.md`](../cmake/README.md) for the full reference.

## Quick start

```sh
./build.sh          # configure + build the default preset
./run.sh            # launch it with --dev
```

`build.sh` defaults to **`exe-linux-asan-x86_64`** — native 64-bit with AddressSanitizer and
UBSan, no multilib required. Override with the first argument or `BUILD_PRESET`:

```sh
./build.sh exe-linux
BUILD_PRESET=check-linux ./build.sh
```

## Presets

| Preset | Arch | What it does |
|---|---|---|
| `check-linux` | 32-bit | per-file `-fsyntax-only`; no link, no shims, no SDL |
| `exe-linux` | 32-bit | full executable |
| `exe-linux-asan` | 32-bit | full executable + ASan/UBSan |
| `check-linux-x86_64` | native 64-bit | syntax check |
| `exe-linux-x86_64` | native 64-bit | full executable |
| `exe-linux-asan-x86_64` | native 64-bit | full executable + ASan/UBSan — **the default** |

Both lanes build and run. The **32-bit** lane is the layout-faithful one: pointer width and
struct offsets match the shipped binary, and the generated assertions in `pseudocode/checks/`
are `#if __SIZEOF_POINTER__ == 4` guarded so they only verify that layout where it applies. The
**64-bit** lane needs no multilib toolchain, which makes the sanitizers far easier to run, and
is where most day-to-day work happens.

Building 64-bit meant removing the pointer-width assumptions the original was written on —
pointers truncated through `int`, allocation sizes and file serialisation written against a
4-byte pointer. Those shapes are flagged by the suspect detectors (`pointer_truncation` and
friends) and fixed as they surface, so the 64-bit lane doubles as a correctness check on
assumptions the 32-bit build would never catch.

## Prerequisites

**Core toolchain (every preset):** `cmake ≥ 3.20`, `clang`/`clang++`, `python3`, `ninja`,
`pkg-config`.

```sh
sudo apt install cmake clang ninja-build pkg-config python3
```

For the 32-bit lanes, add the multilib runtime:

```sh
sudo apt install libc6-dev-i386 libstdc++-dev:i386
```

### SDL2, SDL2_ttf and FFmpeg

The shims consume these to provide a cross-platform substrate for the game's Windows APIs.
**Both lanes build them from source** via `cmake/bundledlibs.cmake`, fetched and built at
configure/build time and cached afterwards. The first `exe-*` configure takes a few minutes,
FFmpeg dominating.

> **Do not `apt install libsdl2-dev:i386`** (or the other `*-dev:i386` libraries). On a
> multiarch amd64 desktop, apt resolves the i386 `-dev` dependency chain by **removing the amd64
> desktop** — cinnamon, xorg, network-manager, clang-tidy. The source-build path exists
> specifically to avoid this.

Only the co-installable i386 **runtime** libraries are needed for the 32-bit lane; source-built
SDL2 `dlopen`s them at run time:

```sh
sudo apt install libx11-6:i386 libxext6:i386 libxrandr2:i386 libxcursor1:i386 \
                 libxi6:i386 libxfixes3:i386 libxss1:i386 libxkbcommon0:i386 \
                 libgl1:i386 libegl1:i386 libdrm2:i386 \
                 libwayland-client0:i386 libwayland-egl1:i386 libwayland-cursor0:i386 \
                 libpulse0:i386 libasound2:i386
```

### Readable sanitizer output

`llvm-symbolizer` turns raw addresses in ASan/UBSan reports into `function at file.cpp:line`.
Without it the generated `run.sh` still works, but reports fall back to bare addresses.

```sh
sudo apt install llvm
```

The `check-linux` presets are dependency-free beyond the core toolchain — they never link the
shims, so they pull in neither SDL2 nor FFmpeg.

## Build commands

```sh
# Syntax-only verification across the whole decompiled tree
cmake --preset check-linux
cmake --build --preset check-linux

# Full executable
cmake --preset exe-linux
cmake --build --preset exe-linux

# With sanitizers, plus the generated launcher
cmake --preset exe-linux-asan
cmake --build --preset exe-linux-asan
./build/exe-linux-asan/run.sh
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
