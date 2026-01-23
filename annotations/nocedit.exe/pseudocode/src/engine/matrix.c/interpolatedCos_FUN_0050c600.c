// Name: engine_matrix.c_interpolatedCos_FUN_0050c600
// Address: 0050c600
// Address Range: [[0050c600, 0050c638]]
// Convention: __cdecl
// Signature: int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedCos_FUN_0050c600(int angle)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = angle >> 8 & 0xff;
  iVar2 = (g_CosTable[uVar1 + 1] - g_CosTable[uVar1]) * (angle & 0xffU);
  iVar3 = iVar2 >> 0x1f;
  return ((int)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8) + g_CosTable[uVar1];
}
