// =============================================================================
// FPU EXCEPTION TRAP — implementation
// =============================================================================
//
// See fpu_trap.h for the public API and shim_config_debug.h for the build-time
// toggle. Linux/glibc only — feenableexcept isn't standard C.

#include "fpu_trap.h"
#include "shim_config.h"

#if NOCTURNE_FPU_TRAP && defined(__linux__)

#define _GNU_SOURCE 1
#include <fenv.h>

static int nocturne_to_fe(int mask)
{
    int fe = 0;
    if (mask & NOCTURNE_FPU_TRAP_INVALID)    fe |= FE_INVALID;
    if (mask & NOCTURNE_FPU_TRAP_DIVBYZERO)  fe |= FE_DIVBYZERO;
    if (mask & NOCTURNE_FPU_TRAP_OVERFLOW)   fe |= FE_OVERFLOW;
    if (mask & NOCTURNE_FPU_TRAP_UNDERFLOW)  fe |= FE_UNDERFLOW;
    return fe;
}

extern "C" int nocturne_fpu_trap_on(int mask)
{
    int prev = fedisableexcept(FE_ALL_EXCEPT);
    feclearexcept(FE_ALL_EXCEPT);
    int fe = nocturne_to_fe(mask);
    if (fe != 0) {
        feenableexcept(fe);
    }
    return prev;
}

extern "C" int nocturne_fpu_trap_off(void)
{
    int prev = fedisableexcept(FE_ALL_EXCEPT);
    feclearexcept(FE_ALL_EXCEPT);
    return prev;
}

#else

extern "C" int nocturne_fpu_trap_on(int mask)  { (void)mask; return 0; }
extern "C" int nocturne_fpu_trap_off(void)     { return 0; }

#endif
