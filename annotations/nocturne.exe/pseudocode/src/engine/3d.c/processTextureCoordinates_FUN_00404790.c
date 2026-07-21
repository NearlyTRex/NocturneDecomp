// Name: engine_3d.c_processTextureCoordinates_FUN_00404790
// Address: 00404790
// Address Range: [[00404790, 004047db]]
// Convention: unknown
// Signature: int engine_3d_c_processTextureCoordinates_FUN_00404790(int param_1)

#include "nocturne.h"

int engine_3d_c_processTextureCoordinates_FUN_00404790(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0xc);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (&DAT_005c502c)[(*(int *)(param_1 + 4) + iVar1) * 0xc] = *puVar2;
      *(uint *)(&DAT_005c5030 + (*(int *)(param_1 + 4) + iVar1) * 0x30) = puVar2[1];
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return *(int *)(param_1 + 8) * 8 + param_1 + 0xc;
}
