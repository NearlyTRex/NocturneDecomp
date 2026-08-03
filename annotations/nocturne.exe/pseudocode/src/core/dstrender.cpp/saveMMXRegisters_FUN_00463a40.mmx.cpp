// Name: core_dstrender.cpp_saveMMXRegisters_FUN_00463a40
// Address: 00463a40
// Address Range: [[00463a40, 00463a78]]
// Convention: __mmx_save
// Signature: void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __mmx_save core_dstrender_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)
{
__asm {
        movq qword ptr [DAT_01c03958],MM0
        movq qword ptr [DAT_01c03960],MM1
        movq qword ptr [DAT_01c03968],MM2
        movq qword ptr [DAT_01c03970],MM3
        movq qword ptr [DAT_01c03978],MM4
        movq qword ptr [DAT_01c03980],MM5
        movq qword ptr [DAT_01c03988],MM6
        movq qword ptr [DAT_01c03990],MM7
}
}
