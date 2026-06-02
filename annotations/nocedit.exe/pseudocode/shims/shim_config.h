#pragma once

// =============================================================================
// SHIM CONFIG — build-time toggles for shim/keep behavior
// =============================================================================

// Numeric magnitude constants used by keep/shim code (kept separate from the
// behavior toggles below).
#include "shim_constants.h"

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
//   1: matches nocedit.exe as-shipped — hardware acceleration is permanently
//      off, the Graphics Options menu line shows "Acceleration disabled in
//      editor", and 3D-API cycling has no effect. Two redundant hardcoded
//      kills (in configureGraphicsOptions and on Ctrl+D entry) clobber
//      `g_UseDirect3D = 0` every frame.
//   0: dev-friendly mode. The Graphics Options menu lets the user pick a
//      3D renderer DLL (DirectX 5/6/7 / 3dfx) and `g_UseDirect3D` retains
//      the choice — i.e. the working behavior the retail build had.
//
//   Override with -DNOCTURNE_AUTHENTIC_D3D_OPTIONS=1 to revert to the
//   editor build's permanently-disabled state.
#ifndef NOCTURNE_AUTHENTIC_D3D_OPTIONS
#define NOCTURNE_AUTHENTIC_D3D_OPTIONS 0
#endif

// NOCTURNE_AUTHENTIC_VOICE
//   1: matches nocedit.exe as-shipped — subtitles render but no voice audio
//      plays. The streaming MP3 entry point (`loadStreamingSoundFile`) is
//      orphan in this build; the call site that would invoke it during
//      cutscenes is missing.
//   0: dev-friendly mode. Cutscene dialogue plays through the streaming MP3
//      path alongside the subtitles — i.e. the working behavior the retail
//      build (presumably) had.
//
//   Override with -DNOCTURNE_AUTHENTIC_VOICE=1 to revert to silent
//   cutscenes.
#ifndef NOCTURNE_AUTHENTIC_VOICE
#define NOCTURNE_AUTHENTIC_VOICE 0
#endif

// NOCTURNE_AUTHENTIC_NETPLAY
//   1: matches the shipped binary — netplay is unreachable from any menu.
//      Neither retail Nocturne nor this editor build ever exposed multiplayer
//      UI, so this is the "original behavior" mode.
//   0: dev-friendly mode. Ctrl+H on the main menu hosts a network game;
//      Ctrl+J joins one. Routes through the orphan CNetGame / trisock
//      infrastructure. Useful for exercising the unfinished netplay code.
//
//   Override with -DNOCTURNE_AUTHENTIC_NETPLAY=1 to revert to authentic
//   shipped behavior.
#ifndef NOCTURNE_AUTHENTIC_NETPLAY
#define NOCTURNE_AUTHENTIC_NETPLAY 0
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

// NOCTURNE_AUTHENTIC_DEV_TOOLS
//   Controls the editor's developer-tools surface: the "NON-RELEASE EDITOR
//   BUILD" / "Press CTRL+D to access the editor menu" banner shown on menu
//   screens, plus the Ctrl+D / Ctrl+L hotkeys that open the developer-tools
//   menu (showDeveloperToolsMenu).
//   1: show the banner and enable the Ctrl+D / Ctrl+L hotkeys — authentic
//      nocedit.exe editor behavior.
//   0: hide them; the build looks like a retail player (default).
//
//   Override with -DNOCTURNE_AUTHENTIC_DEV_TOOLS=1.
#ifndef NOCTURNE_AUTHENTIC_DEV_TOOLS
#define NOCTURNE_AUTHENTIC_DEV_TOOLS 0
#endif

// NOCTURNE_AUTHENTIC_BATTERY
//   Controls the flashlight/goggles battery in CInventory::updateInventory.
//   1: authentic — the battery discharges while the flashlight or goggles are
//      on (and recharges while both are off), exactly like nocedit.exe.
//   0: dev-friendly default — the battery never drains (the discharge is still
//      computed but discarded, so it can't empty). Recharge-while-off is
//      unaffected.
//
//   Override with -DNOCTURNE_AUTHENTIC_BATTERY=1.
#ifndef NOCTURNE_AUTHENTIC_BATTERY
#define NOCTURNE_AUTHENTIC_BATTERY 0
#endif

// NOCTURNE_AUTHENTIC_SAVE
//   Controls the on-disk save-game format written by CGame::saveGame.
//   1: authentic — matches the original retail nocturne.exe. The plain-text
//      save is written to a temp file (save\$$SAVE$$.TMP) and then
//      LZW-compressed into the real .noc with an "EFD" magic header, via the
//      CLZWCompress codec.
//   0: dev-friendly default — write the save uncompressed as plain text
//      directly to the .noc. Human-readable saves, easy to diff/inspect while
//      debugging.
//
//   loadGame reads either format transparently: it sniffs the leading 4 bytes
//   for the "EFD"/"LZW" magic and decompresses, otherwise parses plain text.
//   So a save written in one mode still loads in the other.
//
//   Override with -DNOCTURNE_AUTHENTIC_SAVE=1.
#ifndef NOCTURNE_AUTHENTIC_SAVE
#define NOCTURNE_AUTHENTIC_SAVE 1
#endif

// NOCTURNE_WINDOW_SCALE
//   Integer scale factor applied to the SDL window only. The game still
//   renders internally at its native resolution (640x480) and SDL stretches
//   the framebuffer texture to fill the larger window. Integer-scale mode is
//   enabled so the result is crisp pixel-doubling (no blurry filtering).
//
//   1 = native (640x480), 2 = 1280x960, 3 = 1920x1440, etc.
//   Override with -DNOCTURNE_WINDOW_SCALE=N from CMake.
#ifndef NOCTURNE_WINDOW_SCALE
#define NOCTURNE_WINDOW_SCALE 2
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
