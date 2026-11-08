// Name: FUN_00431660
// Address: 00431660
// Address Range: [[00431660, 0043196b]]
// Convention: unknown
// Signature: undefined4 FUN_00431660(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00431660(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_1054 [1012];
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
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x2704) == 0) && (*(int *)(param_1 + 0x2740) == 0)) {
    uVar1 = 0;
  }
  else {
    if ((*(float *)(param_1 + 10000) < 0.0) ||
       (param_2 = *(float *)(param_1 + 10000) - param_2, *(float *)(param_1 + 10000) = param_2,
       0.0 < param_2)) {
      if (*(int *)(param_1 + 0x2740) != 0) {
        FUN_004650a0(*(int *)(param_1 + 0x2740),param_1 + 0x2744,param_1 + 0x20);
        uVar7 = 0;
        uVar1 = 0;
        local_30 = local_48;
        *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2740) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0x2740),&DAT_02cfd900,uVar1,uVar7);
        iVar2 = FUN_0042b9e0(param_1,&stack0xffffffd0,uVar1);
        if (iVar2 < 0) {
          *(uint *)(param_1 + 0x273c) = 3;
        }
        else {
          if (iVar2 < 1) {
            *(uint *)(param_1 + 0x273c) = 1;
            return 1;
          }
          FUN_00408bf0(param_1,*(int *)(param_1 + 0x2740) + 0x9bc);
          uStack_6c = uStack_54;
          *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          FUN_00576250(&stack0xffffff94);
          uStack_60 = uStack_3c;
          *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
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
          fVar3 = (float)FUN_0040cfa0(uStack_18);
          fVar4 = -fStack_1c;
          if ((fVar4 <= fVar3) && (fVar4 = fVar3, fStack_1c < fVar3)) {
            fVar4 = fStack_1c;
          }
          *(float *)(param_1 + 0x2508) = fVar4;
        }
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0x2704);
      if ((((0.0 <= *(float *)(param_1 + 0x2708)) && (*(int *)(param_1 + 0x27a8) == 0)) &&
          (iVar5 = FUN_0040c840(iVar2,_DAT_02d0bcd8), iVar5 != 0)) &&
         (iVar2 = FUN_004349d0(param_1,iVar5), iVar2 == 0)) {
        FUN_00441ff0(PTR_DAT_005f1690,"pB%s can't figure out next waypoint trying to reach %s\n" + 2,param_1,
                     *(uint *)(param_1 + 0x2704));
        return 1;
      }
      FUN_004310e0(param_1,iVar2,*(uint *)(param_1 + 0x2708),*(uint *)(param_1 + 0x270c)
                   ,param_1 + 0x273c);
      return 1;
    }
    *(uint *)(param_1 + 0x273c) = 0;
    *(uint *)(param_1 + 10000) = 0;
    if (*(int *)(param_1 + 0xcdc8) == 0) {
      iVar2 = *(int *)(param_1 + 0x2704);
      *(uint *)(param_1 + 0x20) = *(uint *)(iVar2 + 0x20);
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar2 + 0x24);
      *(uint *)(param_1 + 0x28) = *(uint *)(iVar2 + 0x28);
      *(uint *)(param_1 + 0x2c) = *(uint *)(iVar2 + 0x2c);
      iVar2 = *(int *)(param_1 + 0x2704);
      if ((uint *)(param_1 + 0x30) != (uint *)(iVar2 + 0x30)) {
        *(uint *)(param_1 + 0x30) = *(uint *)(iVar2 + 0x30);
        *(uint *)(param_1 + 0x34) = *(uint *)(iVar2 + 0x34);
        *(uint *)(param_1 + 0x38) = *(uint *)(iVar2 + 0x38);
      }
    }
    *(uint *)(param_1 + 0x2704) = 0;
    if (*(int *)(param_1 + 0x2740) != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x120))(param_1);
    }
    uVar1 = 1;
    *(uint *)(param_1 + 0xcdc8) = 0;
  }
  return uVar1;
}
