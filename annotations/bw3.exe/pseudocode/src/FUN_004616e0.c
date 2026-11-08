// Name: FUN_004616e0
// Address: 004616e0
// Address Range: [[004616e0, 00461857]]
// Convention: unknown
// Signature: void FUN_004616e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004616e0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    local_14 = (float *)(param_1 + 0x338);
    local_1c = 0;
    do {
      pfVar4 = (float *)(*(int *)(param_1 + 0x350) + local_1c);
      piVar2 = (int *)(*(int *)(param_1 + 0x10c) + local_18 * *(int *)(param_1 + 0x104) * 0xc);
      local_20 = (float)_DAT_005bb95c;
      local_28 = (float)*piVar2 * local_20;
      local_24 = (float)piVar2[1] * local_20;
      local_20 = (float)piVar2[2] * local_20;
      if (pfVar4 != &local_28) {
        *pfVar4 = local_28;
        pfVar4[1] = local_24;
        pfVar4[2] = local_20;
      }
      if (pfVar4 + 3 != &local_28) {
        pfVar4[3] = local_28;
        pfVar4[4] = local_24;
        pfVar4[5] = local_20;
      }
      iVar3 = 1;
      if (1 < *(int *)(param_1 + 0x104)) {
        do {
          local_28 = (float)piVar2[3] * (float)_DAT_005bb95c;
          local_24 = (float)piVar2[4] * (float)_DAT_005bb95c;
          local_20 = (float)piVar2[5] * (float)_DAT_005bb95c;
          piVar2 = piVar2 + 3;
          iVar3 = iVar3 + 1;
          FUN_0041d840(pfVar4,&local_28);
        } while (iVar3 < *(int *)(param_1 + 0x104));
      }
      pfVar1 = local_14;
      if (local_18 == 0) {
        if (pfVar4 != local_14) {
          *local_14 = *pfVar4;
          local_14[1] = pfVar4[1];
          local_14[2] = pfVar4[2];
        }
        if (local_14 + 3 != pfVar4) {
          local_14[3] = *pfVar4;
          local_14[4] = pfVar4[1];
          local_14[5] = pfVar4[2];
        }
      }
      FUN_0041d840(local_14,pfVar4);
      FUN_0041d840(pfVar1,pfVar4 + 3);
      local_1c = local_1c + 0x18;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x100));
  }
  return;
}
