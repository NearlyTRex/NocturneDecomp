// Name: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
// Address: 004906b0
// Address Range: [[004906b0, 004906e8]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_saveMMXRegisters_FUN_004906b0(void)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_saveMMXRegisters_FUN_004906b0(void)
{
__asm {
        movq qword ptr [g_SavedMMX0],MM0
        movq qword ptr [g_SavedMMX1],MM1
        movq qword ptr [g_SavedMMX2],MM2
        movq qword ptr [g_SavedMMX3],MM3
        movq qword ptr [g_SavedMMX4],MM4
        movq qword ptr [g_SavedMMX5],MM5
        movq qword ptr [g_SavedMMX6],MM6
        movq qword ptr [g_SavedMMX7],MM7
}
}
