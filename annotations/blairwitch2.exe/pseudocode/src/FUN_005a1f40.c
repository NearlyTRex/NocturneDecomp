// Name: FUN_005a1f40
// Address: 005a1f40
// Address Range: [[005a1f40, 005a2123]]
// Convention: unknown
// Signature: void FUN_005a1f40(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a1f40(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1040 [1015];
  uint uStack_58;
  uint uStack_4c;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  float fStack_24;
  uint uStack_20;
  
  bVar4 = 0;
  iVar3 = FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar3 + 0x24) == 2) {
    if (*(float *)(param_1 + 700) < _DAT_005efe5f) {
      FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
    }
    if (_DAT_005efe63 < *(float *)(param_1 + 700)) {
      *(uint *)(param_1 + 0x2510) = 0;
      *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
      *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
      fVar1 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
      fVar2 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
      iVar3 = param_1 + 0x10af8;
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= _DAT_005fef90) {
        *(uint *)(param_1 + 0x11394) = _DAT_005fef94;
        FUN_0059d7f0(iVar3,"ChaseComplete","MeleeAttack");
        FUN_0059d8e0(iVar3,"MeleeAttack");
        return;
      }
      *(float *)(param_1 + 0x11394) = _DAT_005fef90;
      FUN_0059d7f0(iVar3,"ChaseComplete","RangeAttack");
      FUN_0059dcb0(iVar3,0x3dcccccd);
      FUN_0059d8e0(iVar3,"Chasing");
    }
    return;
  }
  FUN_00408de0(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
  uStack_4c = uStack_58;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffac + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_005838f0(&stack0xffffffb4);
  uStack_28 = uStack_34;
  (&stack0xffffffdc)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&stack0xffffffc0 != &stack0xffffffd8) {
    uStack_40 = uStack_28;
    fStack_3c = fStack_24;
    uStack_38 = uStack_20;
  }
  if ((float)_DAT_005efe57 < fStack_3c) {
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
    return;
  }
  FUN_00503620(param_1 + 0x2b4,2,1);
  return;
}
