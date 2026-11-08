// Name: FUN_0051f490
// Address: 0051f490
// Address Range: [[0051f490, 0051f9bb]]
// Convention: unknown
// Signature: void FUN_0051f490(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f490(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_109c [1013];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  byte auStack_48 [4];
  float fStack_44;
  float fStack_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar3 = 0;
  local_24 = 0.25;
  local_1c = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_28 = 0.7853982;
  if (*(int *)(param_1 + 0x25638) == 0) {
    return;
  }
  FUN_005b77c0(param_1 + 0x10a68,0,0x34);
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_9c = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
  local_98 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
  local_94 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
  local_54 = local_9c;
  (&stack0xffffffb0)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff68 + (uint)bVar3 * -8);
  *(uint *)(auStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4) =
       *(uint *)((int)&stack0xffffff6c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  local_2c = 0;
  if ((((*(int *)(param_1 + 0x25638) == 2) || (*(int *)(param_1 + 0x25638) == 3)) &&
      (iVar2 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4), iVar2 != 0)) &&
     (0 < *(int *)(iVar2 + 0x6c4))) {
    local_18 = 0x461c3f9a;
    iVar2 = FUN_004d00c0(param_1,&local_18);
    if ((iVar2 != 0) && (local_18 < 0x41f00000)) {
      local_1c = iVar2;
      local_2c = 1;
    }
  }
  if (local_2c != *(int *)(param_1 + 0x25640)) {
    *(uint *)(param_1 + 0x10a80) = 1;
  }
  local_60 = *(float *)(local_1c + 0x20) - *(float *)(param_1 + 0x20);
  local_5c = *(float *)(local_1c + 0x24) - *(float *)(param_1 + 0x24);
  local_58 = *(float *)(local_1c + 0x28) - *(float *)(param_1 + 0x28);
  local_84 = local_60;
  (&stack0xffffff80)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffffac != &stack0xffffff7c) {
    local_54 = local_84;
    local_50 = local_80;
    local_4c = local_7c;
  }
  local_b8 = SQRT(local_4c * local_4c + local_54 * local_54 + local_50 * local_50);
  if (*(int *)(param_1 + 0x25638) == 3) {
    local_b8 = 0.0;
  }
  if (*(int *)(param_1 + 0x25654) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x25654) + 0x43c) == 9) {
      if (local_b8 < (float)_DAT_005e2b63) {
        iVar2 = FUN_005035c0(param_1 + 0x2b4);
        if ((*(int *)(iVar2 + 0x24) == 7) && (*(int *)(param_1 + 0x25640) != 0)) {
          *(uint *)(param_1 + 0x10a74) = 1;
        }
        goto LAB_0051f79a;
      }
    }
    else if (local_b8 < (float)_DAT_005e2b53) {
      if ((*(int *)(param_1 + 0x25640) != 0) && (local_2c != 0)) {
        if (((float)_DAT_005e2b5b < *(float *)(param_1 + 0x2d08)) &&
           (*(int *)(param_1 + 0x25668) != 0)) {
          *(uint *)(param_1 + 0x10a74) = 1;
        }
        FUN_00423850(param_1,local_1c + 0x20);
      }
      *(uint *)(param_1 + 0x10a70) = 0;
      *(uint *)(param_1 + 0x10a68) = 0;
      goto LAB_0051f79a;
    }
    iVar2 = (**(code **)(*(int *)(local_1c + 0x2b0) + 0xcc))(local_1c);
    if (iVar2 == 0) {
      iVar2 = FUN_00513ea0(local_1c + 0x20);
    }
    iVar2 = FUN_00513650(iVar2,param_1 + 0x20,auStack_48,*(uint *)(param_1 + 0x6c));
    if (iVar2 != 0) {
      local_14 = (float)FUN_0040d0c0(fStack_44 - *(float *)(param_1 + 0x34));
      fVar1 = local_14 * _DAT_005e2b6b * (float)_DAT_005e2b73;
      fStack_30 = -local_24;
      *(float *)(param_1 + 0x10a90) = fVar1;
      if (fVar1 < fStack_30) {
        *(float *)(param_1 + 0x10a90) = fStack_30;
      }
      if (local_24 < *(float *)(param_1 + 0x10a90)) {
        *(float *)(param_1 + 0x10a90) = local_24;
      }
      if ((float)_DAT_005e2b7b <= local_b8) {
        *(uint *)(param_1 + 0x10a70) = 1;
      }
      *(uint *)(param_1 + 0x10a68) = 1;
    }
  }
LAB_0051f79a:
  local_b4 = *(float *)(local_1c + 0x20) - *(float *)(param_1 + 0x20);
  local_b0 = *(float *)(local_1c + 0x24) - *(float *)(param_1 + 0x24);
  local_ac = *(float *)(local_1c + 0x28) - *(float *)(param_1 + 0x28);
  local_90 = local_b4;
  (&stack0xffffff74)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff50 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff78 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff54 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffffac != &stack0xffffff70) {
    local_54 = local_90;
    local_50 = local_8c;
    local_4c = local_88;
  }
  FUN_005838f0(&stack0xffffffac);
  local_78 = local_6c;
  (&stack0xffffff8c)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)(auStack_48 + (uint)bVar3 * -8 + -0x20);
  *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffffac != &stack0xffffff88) {
    local_54 = local_78;
    local_50 = local_74;
    local_4c = local_70;
  }
  local_a4 = (float)FUN_0040d0c0(local_50 - *(float *)(param_1 + 0x34));
  if (local_28 < local_a4) {
    local_a4 = local_28;
  }
  if (local_a4 < -local_28) {
    local_a4 = -local_28;
  }
  local_20 = local_a4 - *(float *)(param_1 + 0x25648);
  if (param_2 * _DAT_005e2b83 < local_20) {
    local_20 = param_2 * _DAT_005e2b83;
  }
  if (local_20 < param_2 * _DAT_005e2b87) {
    local_20 = param_2 * _DAT_005e2b87;
  }
  *(float *)(param_1 + 0x25648) = *(float *)(param_1 + 0x25648) + local_20;
  return;
}
