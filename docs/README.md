# Documentation

Working documentation for the NocturneDecomp project. For the *investigations* — the
bug hunts, the format reverse engineering, the measured findings — see
**[research/README.md](../research/README.md)** instead. This directory is about how the
project is built and worked on.

| Document | What it covers |
|---|---|
| [about.md](about.md) | Goals, the two source trees, licensing, tools |
| [progress.md](progress.md) | Decompilation and compilation charts for every binary |
| [ports.md](ports.md) | Each platform's status, and how to report a test |
| [mod-support.md](mod-support.md) | Packages, manifests and the Blair Witch games |
| [checksums.md](checksums.md) | Sizes and hashes of every executable, DLL and POD the project was made from |
| [recreation-itinerary.md](recreation-itinerary.md) | The order the recreation is ported in, and how far it has got |
| [building.md](building.md) | Presets, prerequisites, the multilib hazard, build commands |
| [porting.md](porting.md) | Adding a platform: toolchain, platform and dependencies files, and where the shims meet the OS |
| [releasing.md](releasing.md) | Where the version lives, cutting a release through Prepare Release, what an archive holds |
| [project-structure.md](project-structure.md) | What every top-level directory is for |
| [decompilation-workflow.md](decompilation-workflow.md) | How a function goes from raw Ghidra output to compiling, clean source |
| [decompiler-artifacts.md](decompiler-artifacts.md) | Catalogue of what Ghidra gets wrong on this binary, and the rewrite for each |
| [keep-files.md](keep-files.md) | Writing a `.keep` — header, fidelity rules, de-punning, suspect cleanup |
| [annotation_format.md](annotation_format.md) | Naming and typing conventions for the Ghidra databases |
| [watcom-abi.md](watcom-abi.md) | Reading the disassembly — conventions, stack frames, struct layout |
| [sibling-binaries.md](sibling-binaries.md) | `nocedit.exe` ↔ `nocturne.exe` — what transfers, what must be re-derived |
| [shims.md](shims.md) | The compatibility layer that replaces Windows, DirectX and the Watcom runtime |
| [authenticity-flags.md](authenticity-flags.md) | `NOCTURNE_AUTHENTIC_*` — how deviations from the shipped binary are gated |
| [debugging.md](debugging.md) | `dbg.sh`, gdb probe patterns, the in-process dump tools |
| [testing.md](testing.md) | The shim unit tests and the renderer golden traces |
| [future_static_analysis_reports.md](future_static_analysis_reports.md) | Proposed additional static-analysis reports |
