# NocturneDecomp

[![CI](https://github.com/NearlyTRex/NocturneDecomp/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/NearlyTRex/NocturneDecomp/actions/workflows/ci.yml)
[![Security](https://github.com/NearlyTRex/NocturneDecomp/actions/workflows/security.yml/badge.svg?branch=main)](https://github.com/NearlyTRex/NocturneDecomp/actions/workflows/security.yml)
[![Latest release](https://img.shields.io/github/v/release/NearlyTRex/NocturneDecomp)](https://github.com/NearlyTRex/NocturneDecomp/releases/latest)
[![License: 0BSD (original work)](https://img.shields.io/badge/license-0BSD%20(original%20work)-blue)](LICENSE)

A reverse engineering and decompilation of the 1999 game **Nocturne**, playable on modern
systems, and a clean C++ recreation of its engine built from that decompilation.

It reproduces the game's behaviour, not its machine code. It is 64-bit and portable, with no
inline assembly, and every deviation from the original is behind a flag. No game data is
included; you need your own copy. More in **[docs/about.md](docs/about.md)**.

## Status

- **The decompilation is playable on Linux and Windows.** It is alpha quality: mostly
  playable, with rough edges still being fixed. macOS and Arm Linux build but haven't been
  played yet, so [testers are wanted](docs/ports.md).
- **The recreation is being ported** in startup order, under a 100% coverage gate, and is not
  playable yet. [Itinerary](docs/recreation-itinerary.md).
- **The Ghidra annotation is ongoing** for `nocedit.exe`, `nocturne.exe`, `tridx7.dll` and the
  three Blair Witch games. [Progress](docs/progress.md).

## Quick start

```sh
./build.sh          # configure and build the default preset
./run.sh            # run it
./recreation.sh     # build and run the recreation
```

Presets, prerequisites and the Windows, macOS and Arm lanes are in
[docs/building.md](docs/building.md).

## Roadmap

| | Status |
|---|---|
| Linux and Windows | Playable |
| Netplay | Works; the text-only lobby will be replaced |
| Window modes, controllers, HUD scaling above 640x480 | Done in the decompilation, moving to the recreation |
| macOS, Arm Linux | Built, untested: [ports](docs/ports.md) |
| The recreation | Ongoing: [itinerary](docs/recreation-itinerary.md) |
| Mod packages | Package loading, archives and game-content manifests done in the recreation: [mod support](docs/mod-support.md) |
| Blair Witch Volumes 1–3 as packages | Binaries mapped against Nocturne's: [mod support](docs/mod-support.md#the-blair-witch-games) |
| Advanced graphics options, alternative controls | Planned for the recreation |
| Console ports | Planned, from the recreation: [ports](docs/ports.md#consoles) |

## Documentation

| | |
|---|---|
| [About](docs/about.md) | Goals, the two source trees, licensing, tools |
| [Progress](docs/progress.md) | Decompilation and compilation charts for every binary |
| [Ports](docs/ports.md) | Each platform's status, and how to report a test |
| [Mod support](docs/mod-support.md) | Packages, manifests and the Blair Witch games |
| [Checksums](docs/checksums.md) | Hashes of the executables, DLLs and PODs, to check your copy |
| [Building](docs/building.md) | Presets, prerequisites, build commands |
| [All docs](docs/README.md) | Workflow, ABI, shims, testing, debugging and the rest |
| [Research](research/README.md) | The investigations: engine, formats, bug hunts and their findings |

## Contributing

Contributions, test reports and insights about the engine are welcome. See
[CONTRIBUTING.md](CONTRIBUTING.md), and
[Discussions](https://github.com/NearlyTRex/NocturneDecomp/discussions) for questions and ideas.

## Legal notice

This project is for educational and research purposes. It contains only reverse-engineered
documentation, annotations and analysis. No original game binaries, assets or other copyrighted
game material are included. See [LICENSE](LICENSE) for how the original work and the
reconstructed source are licensed.
