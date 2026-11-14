# Ports

Where the game runs today, and where it builds but hasn't been played yet. This covers the
decompilation, which is what's playable. The recreation builds and runs on its own but can't
play the game yet. For how to *add* a platform, see [porting.md](porting.md). For the presets and
prerequisites, see [building.md](building.md).

**Testers wanted.** If you have a Mac or a 64-bit Arm Linux machine, build one of the untested
presets below and play for a while. Then open an
[issue](https://github.com/NearlyTRex/NocturneDecomp/issues) or a
[discussion](https://github.com/NearlyTRex/NocturneDecomp/discussions) with what you found:
your hardware and OS version, the preset, and whether it started, rendered, played sound and
movies, took controller input, and saved and loaded. A report that it works is as useful as a
bug report.

## Status

| Platform | Presets | Built in CI | Played | Status |
|---|---|:---:|:---:|---|
| Linux x86_64 | `exe-linux-x86_64` (default), `exe-linux-asan-x86_64`, `exe-linux-gles-x86_64` | Yes | Yes | Playable; the main development platform |
| Windows x86_64 | `exe-windows-x86_64` (cross from Linux), `exe-windows-msys2`, `exe-windows-msvc` | Yes, tests under wine and on Windows | Yes | Playable |
| macOS Apple silicon | `exe-macos-arm64` | Yes | No | Builds; needs testing |
| macOS Intel | `exe-macos-x86_64` | Yes | No | Builds; needs testing |
| Linux aarch64 | `exe-linux-aarch64` | Yes, with the unit tests | No | Builds; needs testing |
| Consoles | none yet | No | No | Planned, built from the recreation |

Each platform also has a `vanilla` preset with no sanitizers, which is the one to play on.

## Linux x86_64

The platform the project is developed on. Software and hardware rendering, sound, music, FMV,
controllers and netplay all work. The OpenGL ES lane (`exe-linux-gles-x86_64`) builds the ES 3.0
path against desktop Mesa so it can be compared with the desktop renderer.

## Windows x86_64

Builds three ways: cross-compiled from Linux with clang and lld, natively under MSYS2, and with
clang-cl against the Microsoft runtime. The test suite runs under wine for the cross build and on
a Windows runner for MSVC. Played and working.

## macOS

Apple silicon and Intel both build in CI, and macOS asks for a forward-compatible OpenGL 3.3
context. Neither has been played. Reports wanted.

## Linux aarch64

Builds and passes the unit tests on GitHub's Arm runners. Not played on real hardware yet,
for example a Raspberry Pi 5 or an Arm laptop. Reports wanted, including which GL driver you
used. The GLES path may suit some boards better.

## Consoles

*Placeholder.* Console ports (Xbox, Nintendo Switch, PlayStation) are planned, built from the
recreation once it is playable. The decompilation already has the pieces a console needs:
OpenGL ES, a fixed display, no quit, system keyboards, and a platform file for out-of-tree
SDKs. See "Consoles and packaged apps" in [porting.md](porting.md).

| Console | Status |
|---|---|
| Xbox (UWP) | Not started |
| Nintendo Switch | Not started |
| PlayStation | Not started |
