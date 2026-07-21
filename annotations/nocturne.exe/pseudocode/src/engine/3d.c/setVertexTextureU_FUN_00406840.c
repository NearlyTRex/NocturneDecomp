// Name: engine_3d.c_setVertexTextureU_FUN_00406840
// Address: 00406840
// Address Range: [[00406840, 0040687d]]
// Convention: unknown
// Signature: int engine_3d_c_setVertexTextureU_FUN_00406840(int param_1)

#include "nocturne.h"

int engine_3d_c_setVertexTextureU_FUN_00406840(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xc);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (&DAT_005c502c)[(*(int *)(param_1 + 4) + iVar1) * 0xc] = *piVar2 << 0x10;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 4;
}
