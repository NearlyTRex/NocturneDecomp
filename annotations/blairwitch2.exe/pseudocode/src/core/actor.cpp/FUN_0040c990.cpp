// Name: core_actor.cpp_FUN_0040c990
// Address: 0040c990
// Address Range: [[0040c990, 0040ca3d]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_0040c990(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040c990(CDemonActor *param_1,uint param_2)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  puVar1 = &param_1->field_0x20;
  fVar3 = *(float *)&param_1->field_0x24 - (float)g_CDemonCameraInstance._8_4_;
  fVar2 = *(float *)&param_1->field_0x28 - (float)g_CDemonCameraInstance._12_4_;
  if (_DAT_005caed6 <
      fVar2 * fVar2 +
      fVar3 * fVar3 +
      (*(float *)puVar1 - (float)g_CDemonCameraInstance._4_4_) *
      (*(float *)puVar1 - (float)g_CDemonCameraInstance._4_4_)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
  core_setcolid_cpp_FUN_00534ea0(g_CDemonSetPtr,puVar1,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x30))
                    (param_1,puVar1,*(uint *)&g_CDemonSetPtr->field_0x14d134,param_2);
  return uVar4;
}
