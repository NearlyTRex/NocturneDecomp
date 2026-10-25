# Welcome to NocturneDecomp

This is the place to talk about the project: questions, ideas, findings about the engine, and
anything else that isn't a bug report.

## What this is

NocturneDecomp is a reverse engineering project for **Nocturne** (Terminal Reality, 1999). It
has two halves:

- **The decompilation.** The game's binaries are decompiled and annotated in
  [Ghidra](https://ghidra-sre.org/), and the result is rewritten into readable C/C++ that builds
  and runs on modern systems. It is not a byte-matching decompilation: the goal is the original's
  *behaviour*, not its machine code.
- **The recreation.** A clean, tested C++23 rewrite of the engine, ported function by function
  from the decompilation and keeping the original's structure and names.

The decompilation gets the game running as it shipped. The recreation is the main goal: a clean
engine is where the really fun stuff will go, such as more advanced graphics options and ports
to new platforms.

## Where it is now

- The decompiled game **builds and plays on Linux and Windows** as a 64-bit program, with macOS
  and Arm Linux build lanes too. It is **alpha-quality**: mostly playable, with rough edges still
  being found and fixed.
- DirectX and Win32 are replaced by SDL-backed shims, and rendering goes through `trigl`, a
  renderer written against GL 3.3 core. Sound, music and FMV all play.
- Beyond running it, there are quality-of-life additions and fixes for bugs that shipped in the
  original: windowed and borderless modes, controller support, HUD scaling above 640x480,
  netplay, and a set of rendering bugs traced to their cause. Every change from the shipped
  behaviour sits behind a `NOCTURNE_AUTHENTIC_*` flag that restores the original
  ([docs/authenticity-flags.md](https://github.com/NearlyTRex/NocturneDecomp/blob/main/docs/authenticity-flags.md)).
- The recreation is being ported step by step, held at 100% test coverage.
  [docs/recreation-itinerary.md](https://github.com/NearlyTRex/NocturneDecomp/blob/main/docs/recreation-itinerary.md) shows how far it has got.

**No game data is included.** You need your own copy of Nocturne to play it.

## Finding your way around

| If you want to... | Start with |
|---|---|
| Build and run it | [docs/building.md](https://github.com/NearlyTRex/NocturneDecomp/blob/main/docs/building.md) |
| Know what each directory is for | [docs/project-structure.md](https://github.com/NearlyTRex/NocturneDecomp/blob/main/docs/project-structure.md) |
| Read about the engine and the bug hunts | [research/README.md](https://github.com/NearlyTRex/NocturneDecomp/blob/main/research/README.md) |
| See how raw Ghidra output becomes clean source | [docs/decompilation-workflow.md](https://github.com/NearlyTRex/NocturneDecomp/blob/main/docs/decompilation-workflow.md) |
| Contribute | [CONTRIBUTING.md](https://github.com/NearlyTRex/NocturneDecomp/blob/main/CONTRIBUTING.md) |

## Using Discussions

- **Q&A:** building, running, or how some part of the code works.
- **Ideas:** features, enhancements, or things the recreation should do differently.
- **Show and tell:** screenshots, videos, findings about the engine or its file formats.
- **General:** anything else, including memories of the game itself.

Bugs belong in [Issues](https://github.com/NearlyTRex/NocturneDecomp/issues/new/choose), where
the forms ask for what's needed to track them down. Security problems should be
[reported privately](https://github.com/NearlyTRex/NocturneDecomp/security/advisories/new).

This is a personal project worked on in spare time, so replies may take a while. Please keep to
the [Code of Conduct](https://github.com/NearlyTRex/NocturneDecomp/blob/main/CODE_OF_CONDUCT.md).

Feel free to introduce yourself below: how you know the game, and what brought you here.
