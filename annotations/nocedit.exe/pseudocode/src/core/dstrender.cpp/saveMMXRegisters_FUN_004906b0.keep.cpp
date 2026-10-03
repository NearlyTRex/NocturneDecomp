// Name: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
// Address: 004906b0
// MANUAL RECONSTRUCTION
// Address Range: [[004906b0, 004906e8]]
// Convention: __mmx_save
// Signature: void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_004906b0(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)
// Debug utility that saves MMX register state to globals. No-op in C rewrite
// since MMX registers don't exist outside inline assembly context.

#include "nocturne.h"

void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_004906b0(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)
{
    // Original function saved MM0-MM7 to g_SavedMMX0-g_SavedMMX7.
    // These globals are never read by any other function.
    // No-op in portable C.
    (void)mm0;
    (void)mm1;
    (void)mm2;
    (void)mm3;
    (void)mm4;
    (void)mm5;
    (void)mm6;
    (void)mm7;
}
