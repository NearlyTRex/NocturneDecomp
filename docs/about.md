# About the project

NocturneDecomp decompiles the 1999 game **Nocturne** with [Ghidra](https://ghidra-sre.org/),
pairs the result with a compatibility layer so it runs on modern systems, and ports it into a
clean C++ recreation of the engine.

## Not a matching decompilation

The goal is the original game's *behaviour*, not its machine code. Decompiler artifacts are
rewritten as readable, portable C/C++. Instruction selection, register allocation and stack
layout are not preserved.

## Two source trees

- **The decompilation** (`annotations/*/pseudocode/src/`) is the reference. It aims to run as
  the original did, with as few edits as that takes.
- **The recreation** (`recreation/`) is the engine rewritten as tested C++23. It keeps the
  original's structure and names and is ported function by function from the decompilation, in
  the order of the [recreation itinerary](recreation-itinerary.md). The enhanced version of the
  game will come from it.

## Faithful, with the deviations gated

Where the decompilation departs from the shipped binary, for example to fix an original bug,
add a window mode or scale the HUD past 640x480, the change sits behind a
`NOCTURNE_AUTHENTIC_*` flag that restores the original. Both paths stay in the source. See
[authenticity-flags.md](authenticity-flags.md). These changes are transitional: they move to the
recreation as it takes over.

## Portable C/C++, no inline assembly

The original's MMX loops, x87 idioms and hand-written assembly are ported to scalar or
standard-library C/C++, so the code builds for any target the toolchain supports. The `.mmx.*`
files in the tree record the original's intent and are never compiled.

## 64-bit

The original assumed 4-byte pointers throughout: pointers stored in `int`, and allocation sizes
and save formats written for that width. Those spots are flagged as suspects and fixed as they
are found. The old 32-bit lane was retired because it alone needed an i386 multilib toolchain.
The generated 32-bit layout assertions remain, and run only where pointers are 4 bytes.

## No game data

The repository holds documentation, annotations and source. Binaries, assets and data files are
gitignored and are never needed to build. Running the game needs your own copy.

## Licensing

The original work here, meaning the shims, build system, tooling, docs and research, is 0BSD.
The reconstructed source under `annotations/*/pseudocode/src/` describes someone else's
copyrighted program: no rights in it are held here and none are granted. See
[LICENSE](../LICENSE).

## Tools

- **[Ghidra](https://ghidra-sre.org/)**, built from source with patches for Watcom code (see
  [research/05](../research/05-badspacebase_investigation/) and
  [research/06](../research/06-per_function_decompiler_helpers/)).
- **PyGhidra** for headless annotation export, pseudocode generation and reports.
- **clang / LLVM** for compiling, sanitizers and static analysis.
- **SDL2, SDL2_ttf, FFmpeg** under the decompilation's shims, and **SDL3** under the
  recreation, all built from source by CMake.
