// Name: FUN_005a0480
// Address: 005a0480
// Address Range: [[005a0480, 005a06bb]]
// Convention: unknown
// Signature: undefined4 FUN_005a0480(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a0480(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  float afStackY_1068 [1015];
  uint uVar3;
  uint local_80;
  float local_74;
  float local_70;
  float local_6c;
  uint local_68;
  float local_64;
  uint local_5c;
  float local_58;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_2c;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar2 = 0;
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    return 0;
  }
  iVar1 = FUN_004fc070(param_1 + 0x158);
  local_1c = *(int *)(iVar1 + 0x24);
  local_18 = FUN_0040cea0(0,100);
  local_20 = local_18;
  local_14 = (float)param_2;
  if ((float)param_2 <= _DAT_005e84dc + (float)_DAT_005da54e) {
    iVar1 = *(int *)(param_1 + 0xcde4);
    local_74 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    local_70 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    local_6c = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    local_2c = local_74;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffff94 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    FUN_00576250(&stack0xffffffd4);
    local_68 = local_38;
    *(uint *)((int)&stack0xffffff9c + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffa0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_14 = (float)FUN_0040cfa0(local_64 - *(float *)(param_1 + 0x34));
    if ((float)_DAT_005da556 <= ABS(local_14)) {
      return 0;
    }
    if (((local_1c == 8) || (local_1c == 9)) || (local_1c == 7)) {
      uVar3 = 10;
    }
    else {
      uVar3 = 3;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar3,1);
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0xcde4);
  local_44 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
  local_40 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
  local_3c = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
  local_50 = local_44;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_00576250(&stack0xffffffb0);
  local_5c = local_80;
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffac + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_14 = (float)FUN_0040cfa0(local_58 - *(float *)(param_1 + 0x34));
  if (((float)_DAT_005da556 <= ABS(local_14)) || (4 < local_18)) goto LAB_005a05d1;
  FUN_00441ff0(PTR_DAT_005f1690,"?Casting %d\n" + 1,*(uint *)(param_1 + 0xdc90));
  switch(*(uint *)(param_1 + 0xdc90)) {
  case 0:
    uVar3 = 0xc;
    break;
  case 1:
    uVar3 = 0x15;
    break;
  case 2:
    uVar3 = 0x13;
    break;
  case 3:
    uVar3 = 0x18;
    break;
  default:
    goto switchD_005a05a1_default;
  }
  FUN_004fc0d0(param_1 + 0x158,uVar3,1);
switchD_005a05a1_default:
  iVar1 = *(int *)(param_1 + 0xdc90) + 1;
  *(int *)(param_1 + 0xdc90) = iVar1;
  if (3 < iVar1) {
    *(uint *)(param_1 + 0xdc90) = 0;
  }
LAB_005a05d1:
  if (4 < local_20) {
    return 0;
  }
  return 1;
}
