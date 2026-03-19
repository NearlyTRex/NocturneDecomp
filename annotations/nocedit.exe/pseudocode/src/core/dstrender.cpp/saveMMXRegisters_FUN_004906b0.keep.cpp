// Name: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
// Address: 004906b0
// MANUAL RECONSTRUCTION
// Debug utility that saves MMX register state to globals. No-op in C rewrite
// since MMX registers don't exist outside inline assembly context.

#include "nocturne.h"

void __cdecl core_dstrender_cpp_saveMMXRegisters_FUN_004906b0(void)
{
    // Original function saved MM0-MM7 to g_SavedMMX0-g_SavedMMX7.
    // These globals are never read by any other function.
    // No-op in portable C.
}
