# NocturneDecomp

A work-in-progress reverse engineering and decompilation project for the 1999 game **Nocturne**,
aimed at understanding its engine and getting it running on modern systems.

## About

This project uses [Ghidra](https://ghidra-sre.org/) to decompile and analyse the Nocturne
binaries, and pairs the result with a hand-written compatibility layer so the decompiled code
can actually run.

**This is not a byte-for-byte matching decompilation.** The aim is to reproduce the original
game's *functionality* as faithfully as possible — playable on modern systems — not to
regenerate an executable whose machine code matches the shipped binary. Decompiler artifacts are
rewritten into readable, portable C/C++ that preserves observable behaviour; exact instruction
selection, register allocation and stack layout are not preserved.

**Faithful, and honest about where it isn't.** Where the project deliberately departs from what
the shipped binary does — fixing an original bug, adding a window mode, scaling the HUD past
640x480 — the deviation sits behind a `NOCTURNE_AUTHENTIC_*` flag that restores the original
behaviour, with both paths visible in the source. See
[docs/authenticity-flags.md](docs/authenticity-flags.md).

**Portable C/C++ only — no inline assembly.** Architecture-specific code in the original (MMX
SIMD loops, x87 FPU idioms, hand-rolled asm) is ported to equivalent scalar or standard-library
C/C++, so the result builds on any target the toolchain supports rather than 32-bit x86 alone.
The `.mmx.*` variants in the tree are reference captures of the original intent, never compiled.

**Builds and runs as 64-bit, as well as 32-bit.** The native 64-bit lane is the default one and
needs no multilib toolchain, which also makes the sanitizers easy to run. Getting there meant
removing the pointer-width assumptions the original was full of — pointers truncated through
`int`, allocation sizes and serialisation written against a 4-byte pointer — so those are now
flagged as suspects and fixed as they are found. The 32-bit lane remains the *layout-faithful*
one: struct offsets there match the shipped binary exactly, and the generated layout assertions
are guarded to only run when pointers are 4 bytes wide.

**No game data is included.** The repository contains reverse-engineered documentation,
annotations and source. Binaries, assets and data files are gitignored and are never required to
build.

## Status

**Active research — the decompiled game builds and plays on Linux.**

The engine runs through SDL2-backed shims for DirectDraw, DirectSound, DirectInput and the Win32
APIs it expects. Rendering no longer goes through an emulated DirectX 7: `trigl`, written
directly against GL 3.3 core, implements the game's own renderer interface and is the only
renderer in the build. Sound, music and FMV play; both the hardware path and the software
rasteriser work.

Beyond getting it running, work has moved on to quality-of-life and to fixing defects that
shipped in the original — windowed and borderless modes, modern controller support, HUD and
menu scaling above 640x480, a resolution list the menu can actually reach, netplay, and a
catalogue of rendering bugs traced to their cause. The [research index](research/README.md)
is the record of those investigations, several of which ended in a measured fix.

Ongoing: remaining ASan/UBSan findings, the `nocturne.exe` retail sibling (signatures imported,
bodies unfinished), and the open items listed in the research documents.

## Progress

![Overall Progress](annotations/nocedit.exe/reports/overall_progress.svg)

*"Complete" = function has clean decompilation (no suspect patterns) AND compiles successfully
with clang++.*

### Decompilation Details

| Status | Breakdown |
|:------:|:---------:|
| [![Completion](annotations/nocedit.exe/reports/completion_pie.svg)](annotations/nocedit.exe/reports/all_files_decompilation.svg) | [![Suspects](annotations/nocedit.exe/reports/suspect_breakdown.svg)](annotations/nocedit.exe/reports/all_files_decompilation.svg) |

*Click charts to see per-file breakdown. "Clean" = no decompiler artifacts (extraout_, unaff_,
BADSPACEBASE, etc.).*

### Compilation Details

[![Compilation Status](annotations/nocedit.exe/reports/compilation_progress.svg)](annotations/nocedit.exe/reports/all_files_compilation.svg)

*Click chart to see per-file breakdown. Compiled with clang++ -m32 -fsyntax-only.*

## Building

```sh
./build.sh          # configure + build the default preset
./run.sh            # launch it
```

The default is a native 64-bit build with AddressSanitizer and UBSan, which needs no multilib
toolchain. A 32-bit lane matching the original's pointer width and struct layout is also
available, along with syntax-only presets that never link.

Full prerequisites, the preset table, and an important warning about `*-dev:i386` packages on a
multiarch desktop are in **[docs/building.md](docs/building.md)**.

## Documentation

**[docs/](docs/)** — how the project is built and worked on:

| Document | What it covers |
|---|---|
| [building.md](docs/building.md) | Presets, prerequisites, build commands |
| [project-structure.md](docs/project-structure.md) | What every directory is for |
| [decompilation-workflow.md](docs/decompilation-workflow.md) | Raw Ghidra output to clean, compiling source |
| [decompiler-artifacts.md](docs/decompiler-artifacts.md) | What Ghidra gets wrong on this binary, and the rewrite for each |
| [keep-files.md](docs/keep-files.md) | Writing a `.keep` reconstruction |
| [annotation_format.md](docs/annotation_format.md) | Naming and typing conventions |
| [watcom-abi.md](docs/watcom-abi.md) | Calling conventions, stack frames, struct layout |
| [sibling-binaries.md](docs/sibling-binaries.md) | What transfers between the editor and game builds |
| [shims.md](docs/shims.md) | The compatibility layer and the renderer |
| [authenticity-flags.md](docs/authenticity-flags.md) | How deviations from the shipped binary are gated |
| [debugging.md](docs/debugging.md) | gdb tooling, probe patterns, dump helpers |
| [testing.md](docs/testing.md) | Shim unit tests and renderer golden traces |

**[research/](research/README.md)** — the investigations: engine architecture, file formats, the
Ghidra decompiler fixes this project needed, and the bug hunts with their measurements and
findings. The index there is the map.

**[docs/decompiler-artifacts.md](docs/decompiler-artifacts.md)** — the artifact catalogue: every
suspect type, the recognition pattern, and the rewrite, indexed by the detector id that reports it.

## Contributing

This is a research project. Contributions and documentation improvements are welcome, as are
insights about the Nocturne engine.

## Legal Notice

This project is for educational and research purposes only. All reverse engineering is conducted
in accordance with applicable laws. This repository contains only reverse-engineered
documentation, annotations, and analysis derived from the decompilation process. No original
game binaries, assets, or copyrighted materials from the game are included.

## Tools Used

- **[Ghidra](https://ghidra-sre.org/)** — decompilation and analysis, built from source with
  project-specific patches for Watcom code (see
  [research/05-badspacebase_investigation/](research/05-badspacebase_investigation/) and
  [research/06-per_function_decompiler_helpers/](research/06-per_function_decompiler_helpers/))
- **clang / LLVM** — compilation, sanitizers, static analysis
- **SDL2, SDL2_ttf, FFmpeg** — the runtime substrate the shims are built on, all built from
  source by the CMake project
- **PyGhidra** — headless automation for annotation export, pseudocode generation and reporting
