// Name: FUN_00432240
// Address: 00432240
// Address Range: [[00432240, 00432546]]
// Convention: unknown
// Signature: undefined4 FUN_00432240(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00432240(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  int aiStackY_1054 [1012];
  uint uVar6;
  uint uVar7;
  uint uStack_6c;
  uint uStack_60;
  int iStack_5c;
  uint uStack_54;
  uint local_48;
  uint uStack_3c;
  uint local_30;
  float fStack_1c;
  uint uStack_18;
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x2704) == 0) && (*(int *)(param_1 + 0x2740) == 0)) {
    return 0;
  }
  if ((0.0 <= *(float *)(param_1 + 10000)) &&
     (param_2 = *(float *)(param_1 + 10000) - param_2, *(float *)(param_1 + 10000) = param_2,
     param_2 <= 0.0)) {
    *(uint *)(param_1 + 10000) = 0;
    iVar1 = *(int *)(param_1 + 0x2704);
    *(uint *)(param_1 + 0x273c) = 0;
    *(uint *)(param_1 + 0x20) = *(uint *)(iVar1 + 0x20);
    *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
    *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
    *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x2704);
    if ((uint *)(param_1 + 0x30) != (uint *)(iVar1 + 0x30)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(iVar1 + 0x30);
      *(uint *)(param_1 + 0x34) = *(uint *)(iVar1 + 0x34);
      *(uint *)(param_1 + 0x38) = *(uint *)(iVar1 + 0x38);
    }
    *(uint *)(param_1 + 0x2704) = 0;
    if (*(int *)(param_1 + 0x2740) != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x120))(param_1);
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x2740) == 0) {
    iVar1 = *(int *)(param_1 + 0x2704);
    if ((((0.0 <= *(float *)(param_1 + 0x2708)) && (*(int *)(param_1 + 0x27a8) == 0)) &&
        (iVar4 = FUN_0040c600(iVar1,_DAT_02c992fc), iVar4 != 0)) &&
       (iVar1 = FUN_004354a0(param_1,iVar4), iVar1 == 0)) {
      FUN_00445430(PTR_DAT_00611100,"pB%s can't figure out next waypoint trying to reach %s\n" + 2,param_1,
                   *(uint *)(param_1 + 0x2704));
      return 1;
    }
    FUN_00431cc0(param_1,iVar1,*(uint *)(param_1 + 0x2708),*(uint *)(param_1 + 0x270c),
                 param_1 + 0x273c);
    return 1;
  }
  FUN_00478860(*(int *)(param_1 + 0x2740),param_1 + 0x2744,param_1 + 0x20);
  uVar7 = 0;
  uVar6 = 0;
  local_30 = local_48;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2740) + 0x154) + 0xc4))
                    (*(int *)(param_1 + 0x2740),&DAT_02c8af28,uVar6,uVar7);
  iVar1 = FUN_0042ccf0(param_1,&stack0xffffffd0,uVar6);
  if (iVar1 < 0) {
    *(uint *)(param_1 + 0x273c) = 3;
    return 1;
  }
  if (iVar1 < 1) {
    *(uint *)(param_1 + 0x273c) = 1;
    return 1;
  }
  FUN_00408bb0(param_1,*(int *)(param_1 + 0x2740) + 0x9bc);
  uStack_6c = uStack_54;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  FUN_005a7520(&stack0xffffff94);
  uStack_60 = uStack_3c;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(int *)(param_1 + 0x2508) = iStack_5c;
  if (iStack_5c < 0x3f20d97c) {
    *(uint *)(param_1 + 0x273c) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x120))(param_1);
  }
  else {
    *(uint *)(param_1 + 0x273c) = 1;
  }
  uStack_18 = *(uint *)(param_1 + 0x2508);
  fStack_1c = *(float *)(param_1 + 0x2528);
  fVar2 = (float)FUN_0040cd60(uStack_18);
  fVar3 = -fStack_1c;
  if ((fVar3 <= fVar2) && (fVar3 = fVar2, fStack_1c < fVar2)) {
    fVar3 = fStack_1c;
  }
  *(float *)(param_1 + 0x2508) = fVar3;
  return 1;
}
