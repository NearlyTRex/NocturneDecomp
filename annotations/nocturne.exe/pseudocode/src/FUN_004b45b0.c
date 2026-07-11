// Name: FUN_004b45b0
// Address: 004b45b0
// Address Range: [[004b45b0, 004b4623]]
// Convention: unknown
// Signature: undefined4 FUN_004b45b0(float *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b45b0(float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (0 < _DAT_01cae0d4) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 0x1cae0d8);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *param_1;
        fVar4 = *(float *)(iVar1 + 0x24) - param_1[1];
        fVar3 = *(float *)(iVar1 + 0x28) - param_1[2];
        if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 < param_2 * param_2) {
          return 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01cae0d4 * 4);
  }
  return 0;
}
