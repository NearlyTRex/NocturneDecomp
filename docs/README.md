# Documentation

Working documentation for the NocturneDecomp project. For the *investigations* — the
bug hunts, the format reverse engineering, the measured findings — see
**[research/README.md](../research/README.md)** instead. This directory is about how the
project is built and worked on.

| Document | What it covers |
|---|---|
| [building.md](building.md) | Presets, prerequisites, the multilib hazard, build commands |
| [project-structure.md](project-structure.md) | What every top-level directory is for |
| [decompilation-workflow.md](decompilation-workflow.md) | How a function goes from raw Ghidra output to compiling, clean source |
| [shims.md](shims.md) | The compatibility layer that replaces Windows, DirectX and the Watcom runtime |
| [authenticity-flags.md](authenticity-flags.md) | `NOCTURNE_AUTHENTIC_*` — how deviations from the shipped binary are gated |
| [debugging.md](debugging.md) | `dbg.sh`, gdb probe patterns, the in-process dump tools |
| [testing.md](testing.md) | The shim unit tests and the renderer golden traces |
| [future_static_analysis_reports.md](future_static_analysis_reports.md) | Proposed additional static-analysis reports |
