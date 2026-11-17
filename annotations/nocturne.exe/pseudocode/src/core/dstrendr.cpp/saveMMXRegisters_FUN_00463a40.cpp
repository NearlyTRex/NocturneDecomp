// Name: core_dstrendr.cpp_saveMMXRegisters_FUN_00463a40
// Address: 00463a40
// Address Range: [[00463a40, 00463a78]]
// Convention: __mmx_save
// Signature: void __mmx_save core_dstrendr_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)

#include "nocturne.h"

void __mmx_save core_dstrendr_cpp_saveMMXRegisters_FUN_00463a40(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7)

{
  g_SavedMMX0.mm = mm0;
  g_SavedMMX1.mm = mm1;
  g_SavedMMX2.mm = mm2;
  g_SavedMMX3.mm = mm3;
  g_SavedMMX4.mm = mm4;
  g_SavedMMX5.mm = mm5;
  g_SavedMMX6.mm = mm6;
  g_SavedMMX7.mm = mm7;
  return;
}
