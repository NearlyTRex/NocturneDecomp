#pragma once

// =============================================================================
// SHIM CONFIG — build-time toggles for shim/keep behavior
// =============================================================================

// NOCTURNE_AUTHENTIC_WINDOWS
//   1: game behaves like the original Windows binary. Main loop pauses while
//      the window is unfocused, the window auto-minimizes on deactivation,
//      thread priority drops to idle, etc. These are quirks of the original
//      DirectDraw engine that depend on Win32 + DirectDraw exclusive mode and
//      don't translate cleanly to SDL/Linux.
//   0: dev-friendly mode. Game keeps running while unfocused and the window
//      stays put. Easier to debug; keeps audio + sim ticking under inspection.
//
// Override with -DNOCTURNE_AUTHENTIC_WINDOWS=1 from CMake when you want to
// exercise the authentic behavior.
#ifndef NOCTURNE_AUTHENTIC_WINDOWS
#define NOCTURNE_AUTHENTIC_WINDOWS 0
#endif

// NOCTURNE_AUTHENTIC_D3D_OPTIONS
//   1: the Graphics Options menu lets the user pick a 3D renderer DLL
//      (DirectX 5/6/7 / 3dfx) and `g_UseDirect3D` retains the choice.
//   0: hardware acceleration is permanently off — the menu line shows
//      "Acceleration disabled in editor" and 3D-API cycling has no effect.
//
//   Override with -DNOCTURNE_AUTHENTIC_D3D_OPTIONS=1.
#ifndef NOCTURNE_AUTHENTIC_D3D_OPTIONS
#define NOCTURNE_AUTHENTIC_D3D_OPTIONS 0
#endif

// NOCTURNE_AUTHENTIC_VOICE
//   1: cutscene dialogue plays through the streaming MP3 path alongside
//      the subtitles.
//   0: subtitles render but no voice audio plays.
//
//   Override with -DNOCTURNE_AUTHENTIC_VOICE=1.
#ifndef NOCTURNE_AUTHENTIC_VOICE
#define NOCTURNE_AUTHENTIC_VOICE 0
#endif

// NOCTURNE_AUTHENTIC_NETPLAY
//   1: Ctrl+H on the main menu hosts a network game; Ctrl+J joins one.
//      Routes through the existing CNetGame / trisock infrastructure.
//   0: netplay is unreachable from any menu.
//
//   Override with -DNOCTURNE_AUTHENTIC_NETPLAY=1.
#ifndef NOCTURNE_AUTHENTIC_NETPLAY
#define NOCTURNE_AUTHENTIC_NETPLAY 0
#endif

// NOCTURNE_AUTHENTIC_RELEASE
//   1: hide the "NON-RELEASE EDITOR BUILD" / "Press CTRL+D to access the
//      editor menu" banner on every menu screen, and disable the Ctrl+D
//      / Ctrl+L hotkeys that open the developer-tools menu.
//   0: editor banner + dev-tools menu access remain visible (current
//      behavior of this binary).
//
//   Override with -DNOCTURNE_AUTHENTIC_RELEASE=1.
#ifndef NOCTURNE_AUTHENTIC_RELEASE
#define NOCTURNE_AUTHENTIC_RELEASE 0
#endif

// NOCTURNE_AUTHENTIC_CONSOLE
//   1: the on-screen debug console is the binary's original 40 cols ×
//      32 rows (280 × 352 px).
//   0: dev-friendly mode — 80 cols × 40 rows (560 × 442 px), the
//      largest size that fits inside a 640 × 480 window. (The buffer
//      could hold up to 50 rows but the bounding-box draw at row 50
//      writes past the framebuffer end.)
//
//   Override with -DNOCTURNE_AUTHENTIC_CONSOLE=1.
#ifndef NOCTURNE_AUTHENTIC_CONSOLE
#define NOCTURNE_AUTHENTIC_CONSOLE 0
#endif

// NOCTURNE_FPU_TRAP
//   1: compile in nocturne_fpu_trap_on(mask) / nocturne_fpu_trap_off() helpers
//      that arm SIGFPE on configurable x87/SSE exception bits. The first FP
//      op that raises one of the requested exceptions becomes a fault gdb can
//      catch — useful for localizing the source of a NaN, Inf, or other
//      numerically unstable computation that cascades through later math.
//
//      Mask bits (stable, see fpu_trap.h):
//        0x01 INVALID    — sqrt(neg), 0/0, Inf-Inf, NaN-arith
//        0x02 DIVBYZERO  — x/0 with x != 0 -> Inf
//        0x04 OVERFLOW   — result magnitude > max representable
//        0x08 UNDERFLOW  — result magnitude < min normal
//
//      Usage from gdb, after stopping in the relevant code path:
//        (gdb) call (int)nocturne_fpu_trap_on(1)    — arm INVALID only
//        (gdb) call (int)nocturne_fpu_trap_on(3)    — arm INVALID|DIVBYZERO
//        (gdb) call (int)nocturne_fpu_trap_off()    — disarm + clear sticky
//
//      The helpers do NOT auto-arm at startup. Menu/intro code paths emit
//      benign 0*Inf NaNs every frame (e.g. CMoon::render's getEulerAngles)
//      that would fire the trap immediately and drown out useful catches.
//      Drive the program to where you want, *then* arm.
//
//   0: helpers are no-op stubs (return 0). Symbols stay so gdb `call` doesn't
//      fail; no fenv.h dependency in the binary.
//
//   Linux/glibc only. Override with -DNOCTURNE_FPU_TRAP=0 to omit at compile
//   time.
#ifndef NOCTURNE_FPU_TRAP
#define NOCTURNE_FPU_TRAP 1
#endif

// NOCTURNE_DUMP_TOOLS
//   1: compile in C-callable dump helpers that snapshot pieces of engine
//      state to disk. Intended for use from gdb when you want to capture a
//      wide picture of what the renderer / scene / camera are doing without
//      paying the round-trip cost of many separate `print` commands.
//
//      Available helpers (see shims/dump.h for full docs):
//        nocturne_dump_screenshot(path)    — frame buffer color, PPM + sidecar
//        nocturne_dump_zbuffer(path)       — depth buffer, normalized PPM + sidecar
//        nocturne_dump_display_list(path)  — sorted_render_actors as text table
//
//      Each PPM dumper produces a sidecar `<path>.txt` with engine state,
//      derived statistics (histogram, bounding box, min/max depth), and any
//      relevant cross-references — so a single `call` captures most of what
//      you'd otherwise gather with a dozen `print` commands.
//
//      Usage from gdb at any breakpoint (or after ctrl-C):
//        (gdb) call (int)nocturne_dump_screenshot("/tmp/frame.ppm")
//        (gdb) call (int)nocturne_dump_zbuffer("/tmp/zbuf.ppm")
//        (gdb) call (int)nocturne_dump_display_list("/tmp/actors.txt")
//
//      Each function returns 0 on success, -1 on failure (file open error
//      or unsupported state).
//
//   0: helpers are no-op stubs returning -1. Symbols stay so `call` from
//      gdb still works.
//
//   Override with -DNOCTURNE_DUMP_TOOLS=0 to omit at compile time.
#ifndef NOCTURNE_DUMP_TOOLS
#define NOCTURNE_DUMP_TOOLS 1
#endif
