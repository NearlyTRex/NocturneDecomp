// Name: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
// Address: 004906b0
// Address Range: [[004906b0, 004906e8]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_saveMMXRegisters_FUN_004906b0(void)
// Globals:
//   ulonglong g_SavedMMX0
//   ulonglong g_SavedMMX1
//   ulonglong g_SavedMMX2
//   ulonglong g_SavedMMX3
//   ulonglong g_SavedMMX4
//   ulonglong g_SavedMMX5
//   ulonglong g_SavedMMX6
//   ulonglong g_SavedMMX7

#include "nocturne.h"

void __cdecl core_dstrender_cpp_saveMMXRegisters_FUN_004906b0(void)

{
  ulonglong in_MM0;
  ulonglong in_MM1;
  ulonglong in_MM2;
  ulonglong in_MM3;
  ulonglong in_MM4;
  ulonglong in_MM5;
  ulonglong in_MM6;
  ulonglong in_MM7;
  
  g_SavedMMX0 = in_MM0;
  g_SavedMMX1 = in_MM1;
  g_SavedMMX2 = in_MM2;
  g_SavedMMX3 = in_MM3;
  g_SavedMMX4 = in_MM4;
  g_SavedMMX5 = in_MM5;
  g_SavedMMX6 = in_MM6;
  g_SavedMMX7 = in_MM7;
  return;
}


// Assembly code:
// 004906b0: MOVQ qword ptr [0x02d05258],MM0
//   Label: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
//   XREF to: 02d05258 (WRITE)
// 004906b7: MOVQ qword ptr [0x02d05260],MM1
//   XREF to: 02d05260 (WRITE)
// 004906be: MOVQ qword ptr [0x02d05268],MM2
//   XREF to: 02d05268 (WRITE)
// 004906c5: MOVQ qword ptr [0x02d05270],MM3
//   XREF to: 02d05270 (WRITE)
// 004906cc: MOVQ qword ptr [0x02d05278],MM4
//   XREF to: 02d05278 (WRITE)
// 004906d3: MOVQ qword ptr [0x02d05280],MM5
//   XREF to: 02d05280 (WRITE)
// 004906da: MOVQ qword ptr [0x02d05288],MM6
//   XREF to: 02d05288 (WRITE)
// 004906e1: MOVQ qword ptr [0x02d05290],MM7
//   XREF to: 02d05290 (WRITE)
// 004906e8: RET
