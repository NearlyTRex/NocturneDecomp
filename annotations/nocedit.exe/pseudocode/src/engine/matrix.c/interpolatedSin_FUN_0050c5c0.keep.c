// Name: engine_matrix.c_interpolatedSin_FUN_0050c5c0
// Address: 0050c5c0
// MANUAL RECONSTRUCTION
// Address Range: [[0050c5c0, 0050c5f8]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_interpolatedSin_FUN_0050c5c0(int angle)

#include "nocturne.h"

int __cdecl engine_matrix_c_interpolatedSin_FUN_0050c5c0(int angle)

{
  uint uVar1;
  int iVar2;

  uVar1 = angle >> 8 & 0xff;
  iVar2 = (g_SinTable[uVar1 + 1] - g_SinTable[uVar1]) * (angle & 0xffU);
  return iVar2 / 0x100 + g_SinTable[uVar1];
}
