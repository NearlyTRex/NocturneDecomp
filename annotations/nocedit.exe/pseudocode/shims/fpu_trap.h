#pragma once

// =============================================================================
// FPU EXCEPTION TRAP — debug helper
// =============================================================================
//
// Runtime control of the x87/SSE exception traps. Intended for use from gdb
// when localizing the source of a NaN, Inf, or numerically unstable op.
//
// Compile-time gated by NOCTURNE_FPU_TRAP in shim_config.h. When 0 these are
// no-op stubs that return 0 (the symbols stay so `call` from gdb still works).
//
// The mask values below are stable across platforms — the implementation maps
// them to platform fenv bits (FE_INVALID, FE_DIVBYZERO, etc.) internally.
//
// Usage from gdb after stepping into the relevant code path:
//   (gdb) call (int)nocturne_fpu_trap_on(1)    — arm INVALID only
//   (gdb) call (int)nocturne_fpu_trap_on(3)    — arm INVALID | DIVBYZERO
//   (gdb) call (int)nocturne_fpu_trap_on(15)   — arm everything
//   (gdb) call (int)nocturne_fpu_trap_off()    — disarm all + clear sticky
//
// _on() replaces the active mask (calling with mask=0 is equivalent to _off
// minus the explicit clear). Both functions return the previous platform mask.

// Stable trap-bit values. Bitwise-OR to combine.
#define NOCTURNE_FPU_TRAP_INVALID    0x01  // sqrt(neg), 0/0, Inf-Inf, NaN-arith
#define NOCTURNE_FPU_TRAP_DIVBYZERO  0x02  // x/0 with x != 0 -> Inf
#define NOCTURNE_FPU_TRAP_OVERFLOW   0x04  // result magnitude > max representable
#define NOCTURNE_FPU_TRAP_UNDERFLOW  0x08  // result magnitude < min normal

// Convenience composites.
#define NOCTURNE_FPU_TRAP_DEFAULT      NOCTURNE_FPU_TRAP_INVALID
#define NOCTURNE_FPU_TRAP_NAN_AND_INF  (NOCTURNE_FPU_TRAP_INVALID | NOCTURNE_FPU_TRAP_DIVBYZERO)
#define NOCTURNE_FPU_TRAP_ALL          (NOCTURNE_FPU_TRAP_INVALID | NOCTURNE_FPU_TRAP_DIVBYZERO | \
                                        NOCTURNE_FPU_TRAP_OVERFLOW | NOCTURNE_FPU_TRAP_UNDERFLOW)

#ifdef __cplusplus
extern "C" {
#endif

int nocturne_fpu_trap_on(int mask);
int nocturne_fpu_trap_off(void);

#ifdef __cplusplus
}
#endif
