# The shim layer

`annotations/nocedit.exe/pseudocode/shims/` is the hand-written half of the project. Everything
under `src/` is decompiled from the binary; everything here is ours, and it exists so the
decompiled code can keep calling 1999 Windows APIs while actually running on Linux through SDL2.

The decompiled tree reaches the shims through `nocturne.h`, which includes `shim_config.h`
before the generated types — so anything declared there must be forward-declaration only.

## Layout

Grouped by responsibility, and deliberately so: the `win32/`, `directx/` and `watcom/` groups
are legacy-platform emulation to be deleted wholesale once the engine no longer speaks those
APIs. The rest is permanent.

| Directory | Role |
|---|---|
| `win32/` | `kernel32`, `user32`, `wingdi`, `mmsystem`, `winsock`, MCI video, and the `shim_init` that wires them |
| `directx/` | DirectDraw and DirectSound, SDL2-backed |
| `watcom/` | Watcom C++ runtime and CRT bridge |
| `renderer/` | `trigl` — our own renderer, and the built-in DLL registry |
| `gl/` | GL context, present/blit, window mode, GL version query |
| `core/` | Logging, file search, FPU trap, window icon, audio backend name |
| `game/` | Additions that live at the game layer — UI scale, resolution list, gamepad, cheats, chapter select, hero interactions |
| `net/` | Netplay: lockstep simulation, RNG funnel, sync, respawn, menus |
| `debug/` | In-process dump tools |
| `config/` | The flag headers — see [authenticity-flags.md](authenticity-flags.md) |
| `tests/` | Unit tests — see [testing.md](testing.md) |

## Rendering

The renderer is the largest piece. Rather than emulating DirectX 7, the project implements the
game's own renderer interface directly against modern GL.

- The engine loads its 3D renderer as a Win32 DLL — `LoadLibraryA` on `g_RendererDllPath`, then
  `GetProcAddress` for each `APIDLL*` entry point. The shimmed loader consults a **built-in
  module registry** (`renderer/builtin_dll.cpp`) before falling back to `dlopen`, so a renderer
  compiled into the executable resolves without shipping a `.so`. No call site names a DLL; the
  registry is a table.
- `trigl` implements those entry points against GL 3.3 core. The decompiled DX7 renderer is out
  of the build; the `tridx7` tree stays on disk as the specification.
- GL owns the window's pixels. `gl_present` puts the 2D back buffer on screen as a textured
  quad, which is what lets the renderer composite into the same framebuffer.

See [research/17-shader_renderer_migration/](../research/17-shader_renderer_migration/) for how
that migration was verified, and
[research/19-resolution_and_aspect_ratio/](../research/19-resolution_and_aspect_ratio/) for the
two coordinate spaces the renderer works in.

## Conventions

**Additions are documented as additions.** Each shim header opens by saying what it is and
whether it reconstructs something or adds it. A header that begins *"An addition, not a
reconstruction"* is telling you there is nothing in the original to be faithful to.

**Deviations are gated.** Anything that changes observable behaviour versus the shipped binary
sits behind a `NOCTURNE_AUTHENTIC_*` flag, with both paths visible at the call site rather than
hidden inside a helper. See [authenticity-flags.md](authenticity-flags.md).

**Logging is per subsystem.** `DLOG("render", ...)` writes `nocturne_render.log`; the existing
subsystems are `render`, `netplay`, `sound`, `frontend`, `fileio` and `input`. `DWARN`/`DERROR`
go to `nocturne_debug.log` and mirror to stderr. Prefer an existing subsystem over minting a new
one — the value of a per-subsystem file is that everything about a subsystem is in one place.
