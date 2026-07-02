# NocturneDecomp

A work-in-progress reverse engineering and decompilation project for the game **Nocturne**, aimed at understanding its game engine architecture and implementation.

## About

This project uses [Ghidra](https://ghidra-sre.org/) to decompile and analyze the Nocturne game binary. The goal is to document and understand the inner workings of the Nocturne game engine through systematic reverse engineering efforts.

**This is not a byte-for-byte matching decompilation.** The aim is to reproduce the original game's *functionality* as faithfully as possible — playable on modern systems via cross-platform shims — not to regenerate an executable whose machine code matches the shipped binary. Decompiler artifacts are rewritten into readable, portable C/C++ that preserves observable behavior; exact instruction selection, register allocation, and stack layout are not preserved.

**Portable C/C++ only — no inline assembly.** Architecture-specific code in the original (MMX SIMD loops, x87 FPU idioms, hand-rolled ASM) is ported to equivalent scalar or standard-library C/C++ so the result builds on any target the toolchain supports, not just 32-bit x86. The `.mmx.*` variants in the tree are reference captures of the original assembly intent, never compiled.

**Status:** Active Research — the decompiled binary now launches and runs on Linux. The main menu is interactive with working graphics, sound, and input through the SDL2-backed DirectDraw / DirectSound / DirectInput shims in `annotations/nocedit.exe/pseudocode/shims/`. In-game rendering and audio mixing (both hardware-path and software mixer) are functional; ongoing work targets remaining ASan/UBSan findings flagged by the `exe-linux-asan` preset.

## Progress

![Overall Progress](annotations/nocedit.exe/reports/overall_progress.svg)

*"Complete" = function has clean decompilation (no suspect patterns) AND compiles successfully with clang++.*

### Decompilation Details

| Status | Breakdown |
|:------:|:---------:|
| [![Completion](annotations/nocedit.exe/reports/completion_pie.svg)](annotations/nocedit.exe/reports/all_files_decompilation.svg) | [![Suspects](annotations/nocedit.exe/reports/suspect_breakdown.svg)](annotations/nocedit.exe/reports/all_files_decompilation.svg) |

*Click charts to see per-file breakdown. "Clean" = no decompiler artifacts (extraout_, unaff_, BADSPACEBASE, etc.).*

### Compilation Details

[![Compilation Status](annotations/nocedit.exe/reports/compilation_progress.svg)](annotations/nocedit.exe/reports/all_files_compilation.svg)

*Click chart to see per-file breakdown. Compiled with clang++ -m32 -fsyntax-only.*

## Project Structure

### `/annotations`
Exported Ghidra annotations for `nocedit.exe` (Nocturne's level editor) in JSON format. Includes data types, symbol namespaces, external imports, and applied structure definitions from the current analysis.

### `/headers`
Watcom C/C++ 11.0 compiler standard library headers. These headers are used to properly identify and type standard library functions and structures that the game was compiled against.

### `/historical_annotations`
Archived snapshots of previous annotation exports. Preserves earlier analysis states for comparison and tracking the evolution of reverse engineering progress.

### `/prompts`
AI/LLM prompt templates for assisted reverse engineering. Includes prompts for disassembly analysis, code generation, and maintaining coding standards during the decompilation process.

### `/research`
Technical research documentation. See **[research/README.md](research/README.md)** for full index.

| Folder | Description |
|--------|-------------|
| `01-file_structure/` | Class hierarchy and source file mapping |
| `02-mrgl_initial_investigation/` | MRGL 3D rendering system analysis |
| `03-rendering_primitives/` | Primitive formats and rendering pipeline |
| `04-mp3_audio_system/` | MP3 decoder and DirectSound integration |
| `05-badspacebase_investigation/` | Ghidra decompiler fixes for Watcom code |
| `06-per_function_decompiler_helpers/` | Per-function decompiler control system |
| `07-mmx_functions/` | MMX/SIMD function inventory and portable rewrites |
| `08-developer_mode_and_cheats/` | Dev/debug flags, cheat codes, ini schema, retail-vs-editor & cut-content mysteries |
| `09-flashlight_lighting_investigation/` | Flashlight/set spot-light geometry-lighting bug (open) — pipeline map, fixes, next steps |

### `/scripts`
Python automation scripts for Ghidra (PyGhidra headless):
- Annotation import/export and synchronization
- Pseudocode export with suspect pattern detection
- Analysis report generation (text reports, CSVs, SVG graphs)
- Hidden function discovery
- String creation utilities
- Custom helper libraries for annotation management

### `/spec`
Custom Ghidra processor specifications for the x86 Watcom compiler. Includes language definitions (.ldefs), calling convention specifications (.cspec), and pattern matching for Watcom C++ compiled code.

## Building

The repository ships a CMake project that drives two pipelines from the exported
pseudocode — see [`cmake/README.md`](cmake/README.md) for the full reference.

### Prerequisites

**Core toolchain (all presets):** `cmake ≥ 3.20`, `clang`/`clang++` with 32-bit support, `python3`, `ninja`, `pkg-config`.

```sh
sudo apt install cmake clang ninja-build pkg-config python3 \
                 libc6-dev-i386 libstdc++-dev:i386
```

**Additional for `exe-linux` / `exe-linux-asan` / `exe-linux-x86_64` (full link):**
the shims consume SDL2, SDL2_ttf, and FFmpeg to provide a cross-platform
substrate for the decompiled game's Windows APIs. Both the 32-bit and native
64-bit builds compile these **from source** (`cmake/bundledlibs.cmake`,
fetched/built at configure+build time) — do **not** install the `*-dev:i386`
apt packages.

> ⚠️ Do not `apt install libsdl2-dev:i386` (or the other `*-dev:i386` libs). On a
> multiarch amd64 desktop, apt resolves the i386 `-dev` dependency chain by
> **removing the amd64 desktop** (cinnamon/xorg/network-manager/clang-tidy). The
> source-build path exists specifically to avoid this. See `cmake/bundledlibs.cmake`.

Only the co-installable i386 **runtime** libs are needed — source-built SDL2
`dlopen`s them at run time:

```sh
sudo apt install libx11-6:i386 libxext6:i386 libxrandr2:i386 libxcursor1:i386 \
                 libxi6:i386 libxfixes3:i386 libxss1:i386 libxkbcommon0:i386 \
                 libgl1:i386 libegl1:i386 libdrm2:i386 \
                 libwayland-client0:i386 libwayland-egl1:i386 libwayland-cursor0:i386 \
                 libpulse0:i386 libasound2:i386
```

First `exe-linux*` configure clones and builds SDL2/SDL2_ttf/FFmpeg (a few
minutes, FFmpeg dominates); they're cached for subsequent builds.

**Additional for `exe-linux-asan` (readable sanitizer reports):** `llvm` provides
`llvm-symbolizer`, which turns raw addresses in ASan/UBSan output into
`function at file.cpp:line`. Without it the generated `build/<preset>/run.sh`
still works, but reports fall back to unresolved addresses.

```sh
sudo apt install llvm
```

The `check-linux` preset is dependency-free beyond the core toolchain — it runs
per-file `-fsyntax-only` and never links the shims. Only the exe presets pull
in SDL2/FFmpeg.

### Build commands

```sh
# Syntax-only verification (reproduces the 100% clang++ milestone)
cmake --preset check-linux
cmake --build --preset check-linux

# Full executable build (32-bit Linux ELF)
cmake --preset exe-linux
cmake --build --preset exe-linux

# Exe with AddressSanitizer + UBSan
cmake --preset exe-linux-asan
cmake --build --preset exe-linux-asan
./build/exe-linux-asan/run.sh   # generated launcher with sanitizer env defaults
```

Per-function source selection priority: `.keep.{cpp,c}` > raw `.cpp`/`.c`.
`.mmx.{cpp,c}` and `.byval.{cpp,c}` variants are generated as references but
are never compiled — promote them to `.keep.*` to fix a function.
The decompiled `entry/` and `crt/` directories are excluded from the exe build —
`src/main/main.cpp` provides the entry point and linking uses the system
C/C++ runtime bridged through `shims/`.

## Contributing

This is a research project. If you're interested in contributing or have insights about the Nocturne engine, contributions and documentation improvements are welcome.

## Legal Notice

This project is for educational and research purposes only. All reverse engineering is conducted in accordance with applicable laws. This repository contains only reverse-engineered documentation, annotations, and analysis derived from the decompilation process. No original game binaries, assets, or copyrighted materials from the game are included in this repository.

## Tools Used

- **Ghidra** - Primary decompilation and reverse engineering tool
- Additional analysis tools as needed for specific research tasks
