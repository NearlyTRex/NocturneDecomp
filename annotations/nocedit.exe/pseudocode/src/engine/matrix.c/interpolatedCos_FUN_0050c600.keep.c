// Name: engine_matrix.c_interpolatedCos_FUN_0050c600
// Address: 0050c600
// MANUAL RECONSTRUCTION
// Address Range: [[0050c600, 0050c638]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_interpolatedCos_FUN_0050c600(int angle)

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedCos_FUN_0050c600(int angle)

{
  uint uVar1;
  int iVar2;

  uVar1 = angle >> 8 & 0xff;
  iVar2 = (g_CosTable[uVar1 + 1] - g_CosTable[uVar1]) * (angle & 0xffU);
  return iVar2 / 0x100 + g_CosTable[uVar1];
}
