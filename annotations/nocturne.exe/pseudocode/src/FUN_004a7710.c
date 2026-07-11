// Name: FUN_004a7710
// Address: 004a7710
// Address Range: [[004a7710, 004a7857]]
// Convention: unknown
// Signature: undefined4 FUN_004a7710(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a7710(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_1c;
  byte local_18 [16];
  
  iVar1 = *(int *)(param_1 + 0xbca4);
  *(uint *)(param_1 + 0xbd78) = 0;
  if (iVar1 != 0) {
    local_24 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
    local_20 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
    local_1c = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
    if (SQRT(local_1c * local_1c + local_24 * local_24 + local_20 * local_20) <=
        *(float *)(param_1 + 0xbc9c)) {
      pfVar4 = (float *)FUN_0054e4a0(local_18,&local_24);
      if (&local_24 != pfVar4) {
        local_24 = *pfVar4;
        local_20 = pfVar4[1];
        local_1c = pfVar4[2];
      }
      fVar5 = (float)FUN_0040df00(*(float *)(*(int *)(param_1 + 0xbca4) + 0x34) - local_20);
      if ((fVar5 < (float)_DAT_00584980) || ((float)_DAT_00584988 < fVar5)) {
        return 1;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xbd60);
      if (iVar1 != 0) {
        fVar5 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
        fVar2 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
        fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
        if (1.0 <= SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2)) {
          *(uint *)(param_1 + 0xbd78) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}
