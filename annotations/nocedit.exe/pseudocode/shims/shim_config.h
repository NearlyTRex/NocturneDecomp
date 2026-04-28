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

// NOCTURNE_SCREENSHOT_DUMP
//   1: compile in nocturne_screenshot_dump(path) helper that writes the
//      current g_BackBuffer contents to a PPM file plus a sidecar metadata
//      text file at "<path>.txt". Useful from gdb when you want to inspect
//      what the rasterizer actually produced at a specific point — far
//      cheaper than alt-tabbing for a screen capture and lets you snapshot
//      mid-frame state that's already overwritten by the time present happens.
//
//      Usage from gdb at any breakpoint (or after ctrl-C):
//        (gdb) call (int)nocturne_screenshot_dump("/tmp/frame.ppm")
//        # produces /tmp/frame.ppm + /tmp/frame.ppm.txt
//
//      The sidecar text file captures camera transform, render flags, vertex
//      lighting state, rasterizer cursors, and a per-pixel-brightness
//      histogram (zero/dim/mid/bright counts + nonzero bounding box). Lets
//      you correlate visual output to engine state without separate gdb
//      print commands.
//
//      Returns 0 on success, -1 on failure (file open error or unsupported
//      BPP). Output is PPM (P6) — open with any image viewer.
//
//      Snapshots g_BackBuffer at its current state regardless of presentation
//      timing, so you can dump after each render sub-pass to see what each
//      stage contributes.
//
//   0: helper is a no-op stub that returns -1.
//
//   Override with -DNOCTURNE_SCREENSHOT_DUMP=0 to omit at compile time.
#ifndef NOCTURNE_SCREENSHOT_DUMP
#define NOCTURNE_SCREENSHOT_DUMP 1
#endif
