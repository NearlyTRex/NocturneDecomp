#pragma once

// =============================================================================
// SHIM CONFIG — DEBUG INSTRUMENTATION
// =============================================================================
//
// Diagnostic machinery that exists only to be driven from gdb, and that the
// shipped binary has no counterpart for. Both flags compile their helpers down
// to no-op stubs at 0 while keeping the symbols, so a `call` from gdb still
// resolves either way.
//
// The netplay diagnostics (SYNC_CHECK, SIM_TRACE, RNG_TRACE) are with the rest
// of netplay in shim_config_netplay.h, and AUTHENTIC_DEV_TOOLS — which governs
// the editor's own in-game developer surface rather than a debugging aid — is
// in shim_config_authentic.h.
//
// Included from shim_config.h, which is what nocturne.h reaches.

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
