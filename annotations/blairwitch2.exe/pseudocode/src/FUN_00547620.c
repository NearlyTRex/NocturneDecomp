// Name: FUN_00547620
// Address: 00547620
// Address Range: [[00547620, 00547803]]
// Convention: unknown
// Signature: void FUN_00547620(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547620(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  int aiStackY_1040 [6];
  float afStackY_1028 [1006];
  int local_64;
  int local_60;
  int local_5c;
  int local_54 [5];
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar8 = 0;
  local_54[4] = 0x7fffffff;
  local_54[3] = 0x7fffffff;
  local_54[2] = 0x7fffffff;
  local_5c = -0x7fffffff;
  local_60 = -0x7fffffff;
  local_64 = -0x7fffffff;
  iVar3 = FUN_00547810(param_1);
  iVar3 = *(int *)(iVar3 + 0x2c);
  FUN_00544f50(param_1,0,0);
  FUN_005471f0(param_1,0);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      piVar6 = (int *)(*(int *)(param_1 + 0x2234) + iVar4);
      piVar7 = piVar6 + (uint)bVar8 * -2 + 1;
      iVar2 = *piVar6;
      local_54[(uint)bVar8 * -2] = *piVar7;
      local_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = piVar7[(uint)bVar8 * -2 + 1];
      if (iVar2 < local_54[2]) {
        local_54[2] = iVar2;
      }
      if (local_64 < iVar2) {
        local_64 = iVar2;
      }
      if (local_54[0] < local_54[3]) {
        local_54[3] = local_54[0];
      }
      if (local_60 < local_54[0]) {
        local_60 = local_54[0];
      }
      if (local_54[1] < local_54[4]) {
        local_54[4] = local_54[1];
      }
      if (local_5c < local_54[1]) {
        local_5c = local_54[1];
      }
      iVar4 = iVar4 + 0xc;
    } while (iVar4 < iVar3 * 0xc);
  }
  pfVar1 = (float *)(param_1 + 0x2238);
  *pfVar1 = (float)local_54[2] * _DAT_005fb9a0;
  *(float *)(param_1 + 0x223c) = (float)local_54[3] * _DAT_005fb9a0;
  *(float *)(param_1 + 0x2240) = (float)local_54[4] * _DAT_005fb9a0;
  pfVar5 = (float *)(param_1 + 0x2244);
  *pfVar5 = (float)local_64 * _DAT_005fb9a0;
  *(float *)(param_1 + 0x2248) = (float)local_60 * _DAT_005fb9a0;
  *(float *)(param_1 + 0x224c) = (float)local_5c * _DAT_005fb9a0;
  local_3c[2] = *pfVar5 - *pfVar1;
  local_3c[3] = *(float *)(param_1 + 0x2248) - *(float *)(param_1 + 0x223c);
  local_2c = *(float *)(param_1 + 0x224c) - *(float *)(param_1 + 0x2240);
  local_28 = *pfVar5 - *pfVar1;
  local_3c[(uint)bVar8 * -2 + 6] = local_3c[(uint)bVar8 * -2 + 3];
  local_3c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       local_3c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  local_1c = local_28 * _DAT_005e73f3;
  local_18 = local_24 * _DAT_005e73f3;
  local_14 = local_20 * _DAT_005e73f3;
  local_40 = local_28 * _DAT_005e73f3;
  local_3c[(uint)bVar8 * -2] = local_3c[(uint)bVar8 * -2 + 9];
  local_3c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       local_3c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  *pfVar1 = *pfVar1 - local_40;
  *(float *)(param_1 + 0x223c) = *(float *)(param_1 + 0x223c) - local_3c[0];
  *(float *)(param_1 + 0x2240) = *(float *)(param_1 + 0x2240) - local_3c[1];
  *pfVar5 = *pfVar5 + local_40;
  *(float *)(param_1 + 0x2248) = *(float *)(param_1 + 0x2248) + local_3c[0];
  *(float *)(param_1 + 0x224c) = *(float *)(param_1 + 0x224c) + local_3c[1];
  return;
}
