// Name: FUN_00524f40
// Address: 00524f40
// Address Range: [[00524f40, 00525012]]
// Convention: unknown
// Signature: void FUN_00524f40(int *param_1,int param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524f40(int *param_1,int param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_1c;
  
  iVar5 = *param_1 + 0x1c28 + param_2 * 0x120;
  fVar1 = *param_4 * *(float *)(iVar5 + 0x20) + param_3;
  iVar4 = 0;
  iVar3 = iVar5;
  local_1c = fVar1;
  if (0 < *(int *)(iVar5 + 0x78)) {
    do {
      fVar2 = (float)*(int *)(iVar3 + 0x7c);
      if ((param_3 <= fVar2) && (fVar2 <= local_1c + (float)_DAT_005eaf83)) {
        local_1c = fVar2 + (float)_DAT_005eaf83;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(iVar5 + 0x78));
  }
  if ((float)*(int *)(iVar5 + 100) < local_1c) {
    local_1c = (float)*(int *)(iVar5 + 100);
  }
  if (local_1c < fVar1) {
    *param_4 = (local_1c - param_3) / *(float *)(iVar5 + 0x20);
    return;
  }
  return;
}
