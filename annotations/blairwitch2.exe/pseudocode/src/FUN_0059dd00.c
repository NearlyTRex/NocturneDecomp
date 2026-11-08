// Name: FUN_0059dd00
// Address: 0059dd00
// Address Range: [[0059dd00, 0059decc]]
// Convention: unknown
// Signature: void FUN_0059dd00(int *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059dd00(int *param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  byte bVar5;
  float10 fVar6;
  int aiStackY_1058 [1017];
  uint local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  int local_24 [3];
  float local_18;
  
  bVar5 = 0;
  iVar2 = *param_2;
  if (iVar2 != 0) {
    iVar3 = *param_1;
    local_4c = *(float *)(iVar2 + 0x20) - *(float *)(iVar3 + 0x20);
    local_48 = *(float *)(iVar2 + 0x24) - *(float *)(iVar3 + 0x24);
    local_44 = *(float *)(iVar2 + 0x28) - *(float *)(iVar3 + 0x28);
    if (&local_58 != &local_4c) {
      local_58 = local_4c;
      local_50 = local_44;
    }
    local_18 = SQRT(local_50 * local_50 + local_58 * local_58);
    local_54 = 0.0;
    if (local_18 <= 0.0) {
      local_58 = 0.0;
      local_50 = 0.0;
    }
    else {
      fVar4 = 1.0 / local_18;
      local_58 = local_58 * fVar4;
      local_54 = fVar4 * 0.0;
      local_50 = local_50 * fVar4;
    }
    pfVar1 = (float *)(param_2 + 1);
    local_58 = local_58 * *pfVar1;
    local_54 = local_54 * *pfVar1;
    local_50 = local_50 * *pfVar1;
    if ((float *)(param_2 + 2) != &local_58) {
      param_2[2] = (int)local_58;
      param_2[3] = (int)local_54;
      param_2[4] = (int)local_50;
    }
    iVar2 = *param_1;
    local_64 = *(float *)(iVar2 + 0x20) + (float)param_2[2];
    local_60 = *(float *)(iVar2 + 0x24) + (float)param_2[3];
    local_5c = *(float *)(iVar2 + 0x28) + (float)param_2[4];
    if ((float *)(param_2 + 5) != &local_34) {
      param_2[5] = (int)local_64;
      param_2[6] = (int)local_60;
      param_2[7] = (int)local_5c;
    }
    local_40 = local_4c;
    local_3c = local_48;
    local_38 = local_44;
    local_34 = local_64;
    local_30 = local_60;
    local_2c = local_5c;
    FUN_005838f0(&local_58);
    local_28 = local_70;
    local_24[(uint)bVar5 * -2] = *(int *)(&stack0xffffff94 + (uint)bVar5 * -8);
    local_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(int *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    param_2[8] = local_24[0];
    param_2[10] = *(int *)(*param_2 + 0x3434);
    fVar6 = (float10)(float)param_2[10] /
            SQRT((float10)(float)param_2[4] * (float10)(float)param_2[4] +
                 (float10)(float)param_2[2] * (float10)(float)param_2[2] +
                 (float10)(float)param_2[3] * (float10)(float)param_2[3]);
    FUN_005b98f6();
    param_2[9] = (int)(float)(fVar6 * (float10)_DAT_005ef84f);
  }
  return;
}
