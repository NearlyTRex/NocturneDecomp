// Name: engine_2d.c_project3DPointToScreen_FUN_00401da0
// Address: 00401da0
// Address Range: [[00401da0, 00401de6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_project3DPointToScreen_FUN_00401da0(int param_1,int param_2,int param_3)

{
  engine_2d_c_plotPixel_FUN_00401530
            (_DAT_01c00c50 +
             (int)(((longlong)param_1 * (longlong)_DAT_01c00c48) / (longlong)param_3) >> 0x10,
             (int)(((longlong)param_2 * (longlong)_DAT_01c00c4c) / (longlong)param_3) +
             _DAT_01c00c54 >> 0x10);
  return;
}
