// Name: engine_matrix.c_interpolatedSin_FUN_0050c5c0
// Address: 0050c5c0
// Address Range: [[0050c5c0, 0050c5f8]]
// Convention: __cdecl
// Signature: int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedSin_FUN_0050c5c0(int angle)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = angle >> 8 & 0xff;
  iVar2 = (g_SinTable[uVar1 + 1] - g_SinTable[uVar1]) * (angle & 0xffU);
  iVar3 = iVar2 >> 0x1f;
  return ((int)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8) + g_SinTable[uVar1];
}
