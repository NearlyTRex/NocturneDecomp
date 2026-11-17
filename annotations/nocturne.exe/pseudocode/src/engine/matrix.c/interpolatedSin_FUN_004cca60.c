// Name: engine_matrix.c_interpolatedSin_FUN_004cca60
// Address: 004cca60
// Address Range: [[004cca60, 004cca98]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_interpolatedSin_FUN_004cca60(int angle)

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedSin_FUN_004cca60(int angle)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = angle >> 8 & 0xff;
  iVar2 = (g_INT_ARRAY_01cc4910[uVar1 + 1] - g_INT_ARRAY_01cc4910[uVar1]) * (angle & 0xffU);
  iVar3 = iVar2 >> 0x1f;
  return ((int)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8) +
         g_INT_ARRAY_01cc4910[uVar1];
}
