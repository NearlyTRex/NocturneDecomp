// Name: core_actor.cpp_FUN_0040c750
// Address: 0040c750
// Address Range: [[0040c750, 0040c868]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_0040c750(CDemonActor *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040c750(CDemonActor *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  float afStackY_103c [1014];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_10;
  
  bVar2 = 0;
  core_actor_cpp_FUN_00408b40(param_1,param_2);
  fStack_30 = fStack_48;
  (&stack0xffffffd4)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffbc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fStack_3c = (float)g_CDemonCameraInstance._4_4_;
  *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8) =
       *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar2 * -8 + 8);
  *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((uint)bVar2 * -8 + 0x1fe37f8 + (uint)bVar2 * -8);
  fStack_54 = fStack_3c;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (_DAT_005d2e3d <
      (fStack_28 - fStack_4c) * (fStack_28 - fStack_4c) +
      (fStack_2c - fStack_50) * (fStack_2c - fStack_50) +
      (fStack_30 - fStack_54) * (fStack_30 - fStack_54)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,param_1);
  fStack_24 = (float)core_setcolid_cpp_FUN_005562c0(g_CDemonSetPtr,&stack0xffffffd0,0);
  uVar1 = *(uint *)&g_CDemonSetPtr->field_0x14d134;
  fStack_10 = fStack_24;
  fStack_20 = (float)core_setcolid_cpp_FUN_005562c0(g_CDemonSetPtr,&param_1->field_0x20,0);
  fStack_10 = fStack_20;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  if (fStack_24 < fStack_20 + (float)_DAT_005d2e41) {
    uVar1 = *(uint *)&g_CDemonSetPtr->field_0x14d134;
  }
  uVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x28))
                    (param_1,&stack0xffffffd0,uVar1,param_3);
  return uVar1;
}
