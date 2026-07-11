// Name: FUN_004dffc0
// Address: 004dffc0
// Address Range: [[004dffc0, 004e004c]]
// Convention: unknown
// Signature: int FUN_004dffc0(int param_1,float *param_2)

#include "nocturne.h"

int FUN_004dffc0(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_18;
  
  iVar7 = 0;
  local_18 = 1e+30;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x58);
      fVar2 = *param_2 - *(float *)(iVar5 + 4 + iVar1);
      fVar3 = param_2[1] - *(float *)(iVar5 + 8 + iVar1);
      fVar4 = param_2[2] - *(float *)(iVar5 + 0xc + iVar1);
      fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < local_18) {
        iVar7 = iVar6;
        local_18 = fVar2;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x54));
  }
  return iVar7;
}
