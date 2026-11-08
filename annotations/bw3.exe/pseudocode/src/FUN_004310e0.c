// Name: FUN_004310e0
// Address: 004310e0
// Address Range: [[004310e0, 0043146c]]
// Convention: unknown
// Signature: void FUN_004310e0(int param_1,int param_2,float param_3,float param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004310e0(int param_1,int param_2,float param_3,float param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1060 [1012];
  uint local_78;
  float local_6c;
  float local_68;
  float local_64;
  uint local_60;
  uint local_54;
  uint local_50;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  float local_30;
  float local_28;
  float local_20;
  uint local_1c;
  
  bVar5 = 0;
  if (param_2 == 0) {
    FUN_00441ff0(PTR_DAT_005f1690,"%s tried to follow NULL actor!\n",param_1);
    *param_5 = 3;
    return;
  }
  local_6c = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
  local_44 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24);
  local_64 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  local_48 = local_6c;
  local_40 = local_64;
  if (0.0 <= param_3) {
    if ((*(int *)(param_1 + 0x27a8) == 0) &&
       ((((float)_DAT_005b8466 < ABS(local_44) || ((float)_DAT_005b846e < ABS(local_6c))) ||
        ((float)_DAT_005b846e < ABS(local_64))))) {
      local_68 = local_44;
      FUN_00441ff0(PTR_DAT_005f1690,"%s confused while following %s\n",param_1,param_2);
      *param_5 = 3;
      return;
    }
    local_68 = 0.0;
    local_30 = SQRT(local_64 * local_64 + local_6c * local_6c);
    if (param_4 < 0.0) {
      param_4 = 1e+30;
    }
    local_20 = param_3 * (float)_DAT_005b8476;
    iVar4 = *param_5;
    if (iVar4 == 0) {
      param_3 = param_3 + local_20;
    }
    else if (iVar4 == 1) {
      param_4 = param_4 + local_20;
      param_3 = param_3 - local_20;
    }
    else if (iVar4 == 2) {
      param_4 = param_4 - local_20;
    }
    if (param_3 < (float)_DAT_005b847e) {
      param_3 = 0.01;
    }
    if (param_3 <= local_30) {
      uVar3 = (**(code **)(*(int *)(param_2 + 0x154) + 0xc4))(param_2,&DAT_02cfd900,0,0);
      iVar4 = FUN_0042b9e0(param_1,param_2 + 0x20,uVar3);
      if (iVar4 < 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"%s confused after pathmap call while following %s\n",param_1,param_2);
        *param_5 = 3;
        return;
      }
      if (local_30 <= param_4) {
        *param_5 = 1;
        return;
      }
      *param_5 = 2;
      return;
    }
    *param_5 = 0;
    return;
  }
  local_68 = 0.0;
  FUN_00408b40(param_1,&stack0xffffff94);
  local_3c = local_78;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  FUN_00576250(&stack0xffffffc4);
  local_54 = local_60;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * 0xfffffffe * 4);
  *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x2508) = local_50;
  if (*param_5 == 0) {
    if ((float)_DAT_005b848e < ABS(*(float *)(param_1 + 0x2508))) goto LAB_004312a4;
    if (*param_5 != 1) goto LAB_0043134b;
  }
  else {
    if (ABS(*(float *)(param_1 + 0x2508)) < (float)_DAT_005b8486) {
      *param_5 = 0;
LAB_0043134b:
      *(uint *)(param_1 + 0x2508) = 0;
      goto LAB_00431302;
    }
LAB_004312a4:
    *param_5 = 1;
  }
  local_1c = *(uint *)(param_1 + 0x2508);
  local_28 = *(float *)(param_1 + 0x2528);
  fVar1 = (float)FUN_0040cfa0(local_1c);
  fVar2 = -local_28;
  if ((fVar2 <= fVar1) && (fVar2 = fVar1, local_28 < fVar1)) {
    fVar2 = local_28;
  }
  *(float *)(param_1 + 0x2508) = fVar2;
LAB_00431302:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  return;
}
