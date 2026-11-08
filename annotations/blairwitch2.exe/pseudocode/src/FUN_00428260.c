// Name: FUN_00428260
// Address: 00428260
// Address Range: [[00428260, 004285ec]]
// Convention: unknown
// Signature: void FUN_00428260(int param_1,int param_2,float param_3,float param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428260(int param_1,int param_2,float param_3,float param_4,int *param_5)

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
    FUN_00436710(PTR_DAT_00609ed0,"%s tried to follow NULL actor!\n",param_1);
    *param_5 = 3;
    return;
  }
  local_6c = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
  local_44 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24);
  local_64 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  local_48 = local_6c;
  local_40 = local_64;
  if (0.0 <= param_3) {
    if ((*(int *)(param_1 + 0x2814) == 0) &&
       ((((float)_DAT_005cce8e < ABS(local_44) || ((float)_DAT_005cce96 < ABS(local_6c))) ||
        ((float)_DAT_005cce96 < ABS(local_64))))) {
      local_68 = local_44;
      FUN_00436710(PTR_DAT_00609ed0,"%s confused while following %s\n",param_1,param_2);
      *param_5 = 3;
      return;
    }
    local_68 = 0.0;
    local_30 = SQRT(local_64 * local_64 + local_6c * local_6c);
    if (param_4 < 0.0) {
      param_4 = 1e+30;
    }
    local_20 = param_3 * (float)_DAT_005cce9e;
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
    if (param_3 < (float)_DAT_005ccea6) {
      param_3 = 0.01;
    }
    if (param_3 <= local_30) {
      uVar3 = (**(code **)(*(int *)(param_2 + 0x2b0) + 0xcc))(param_2,&DAT_0265370c,0,0);
      iVar4 = FUN_00423000(param_1,param_2 + 0x20,uVar3);
      if (iVar4 < 0) {
        FUN_00436710(PTR_DAT_00609ed0,"%s confused after pathmap call while following %s\n",param_1,param_2);
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
  FUN_00408d30(param_1,&stack0xffffff94);
  local_3c = local_78;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  FUN_005838f0(&stack0xffffffc4);
  local_54 = local_60;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * 0xfffffffe * 4);
  *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x2578) = local_50;
  if (*param_5 == 0) {
    if ((float)_DAT_005cceb6 < ABS(*(float *)(param_1 + 0x2578))) goto LAB_00428424;
    if (*param_5 != 1) goto LAB_004284cb;
  }
  else {
    if (ABS(*(float *)(param_1 + 0x2578)) < (float)_DAT_005cceae) {
      *param_5 = 0;
LAB_004284cb:
      *(uint *)(param_1 + 0x2578) = 0;
      goto LAB_00428482;
    }
LAB_00428424:
    *param_5 = 1;
  }
  local_1c = *(uint *)(param_1 + 0x2578);
  local_28 = *(float *)(param_1 + 0x2598);
  fVar1 = (float)FUN_0040d0c0(local_1c);
  fVar2 = -local_28;
  if ((fVar2 <= fVar1) && (fVar2 = fVar1, local_28 < fVar1)) {
    fVar2 = local_28;
  }
  *(float *)(param_1 + 0x2578) = fVar2;
LAB_00428482:
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  return;
}
