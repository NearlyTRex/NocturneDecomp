// Name: FUN_004287f0
// Address: 004287f0
// Address Range: [[004287f0, 00428aa4]]
// Convention: unknown
// Signature: undefined4 FUN_004287f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004287f0(int param_1,float param_2)

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
  if ((*(int *)(param_1 + 0x2774) == 0) && (*(int *)(param_1 + 0x27b0) == 0)) {
    uVar1 = 0;
  }
  else {
    if ((*(float *)(param_1 + 0x2780) < 0.0) ||
       (param_2 = *(float *)(param_1 + 0x2780) - param_2, *(float *)(param_1 + 0x2780) = param_2,
       0.0 < param_2)) {
      if (*(int *)(param_1 + 0x27b0) == 0) {
        iVar2 = *(int *)(param_1 + 0x2774);
        if ((((0.0 <= *(float *)(param_1 + 0x2778)) && (*(int *)(param_1 + 0x2814) == 0)) &&
            (iVar5 = FUN_0040c8f0(iVar2,_DAT_02661adc), iVar5 != 0)) &&
           (iVar2 = FUN_0042b420(param_1,iVar5), iVar2 == 0)) {
          FUN_00436710(PTR_DAT_00609ed0,"@%s can't figure out next waypoint trying to reach %s\n" + 1,param_1,
                       *(uint *)(param_1 + 0x2774));
          return 1;
        }
        FUN_00428260(param_1,iVar2,*(uint *)(param_1 + 0x2778),
                     *(uint *)(param_1 + 0x277c),param_1 + 0x27ac);
        return 1;
      }
      FUN_00460350(*(int *)(param_1 + 0x27b0),param_1 + 0x27b4,param_1 + 0x20);
      uVar7 = 0;
      uVar1 = 0;
      local_30 = local_48;
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x27b0) + 0x2b0) + 0xcc))
                        (*(int *)(param_1 + 0x27b0),&DAT_0265370c,uVar1,uVar7);
      iVar2 = FUN_00423000(param_1,&stack0xffffffd0,uVar1);
      if (iVar2 < 0) {
        *(uint *)(param_1 + 0x27ac) = 3;
        return 1;
      }
      if (iVar2 < 1) {
        *(uint *)(param_1 + 0x27ac) = 1;
        return 1;
      }
      FUN_00408de0(param_1,*(int *)(param_1 + 0x27b0) + 0xb18);
      uStack_6c = uStack_3c;
      *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      FUN_005838f0(&stack0xffffff94);
      uStack_60 = uStack_54;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(int *)(param_1 + 0x2578) = iStack_5c;
      if (iStack_5c < 0x3f20d97c) {
        *(uint *)(param_1 + 0x27ac) = 0;
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x128))(param_1);
      }
      else {
        *(uint *)(param_1 + 0x27ac) = 1;
      }
      uStack_18 = *(uint *)(param_1 + 0x2578);
      fStack_1c = *(float *)(param_1 + 0x2598);
      fVar3 = (float)FUN_0040d0c0(uStack_18);
      fVar4 = -fStack_1c;
      if ((fVar4 <= fVar3) && (fVar4 = fVar3, fStack_1c < fVar3)) {
        fVar4 = fStack_1c;
      }
      *(float *)(param_1 + 0x2578) = fVar4;
      return 1;
    }
    *(uint *)(param_1 + 0x27ac) = 0;
    *(uint *)(param_1 + 0x2774) = 0;
    *(uint *)(param_1 + 0x2780) = 0;
    if (*(int *)(param_1 + 0x27b0) != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x128))(param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}
