// Name: engine_matrix.c_interpolatedCos_FUN_004e4dd0
// Address: 004e4dd0
// Address Range: [[004e4dd0, 004e4e08]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_interpolatedCos_FUN_004e4dd0(int angle)

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedCos_FUN_004e4dd0(int angle)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = angle >> 8 & 0xff;
  iVar2 = (g_INT_ARRAY_01d72240[uVar1 + 1] - g_INT_ARRAY_01d72240[uVar1]) * (angle & 0xffU);
  iVar3 = iVar2 >> 0x1f;
  return ((int)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8) +
         g_INT_ARRAY_01d72240[uVar1];
}
