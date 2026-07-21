// Name: FUN_0054fa80
// Address: 0054fa80
// Address Range: [[0054fa80, 0054fbba]]
// Convention: unknown
// Signature: void FUN_0054fa80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054fa80(int param_1)

{
  int iVar1;
  byte auStack_28 [24];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x65c);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_28);
  iVar1 = *(int *)(param_1 + 0x3a0);
  *(uint *)(param_1 + 0x2cc) = 0;
  if (iVar1 != 0) {
    fStack_10 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_c = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_8 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    if (SQRT(fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c) <
        (float)_DAT_0059746b) {
      iVar1 = *(int *)(param_1 + 0x3a0);
      *(float *)(param_1 + 0x20) = *(float *)(iVar1 + 0x20);
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
      *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
      *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
      iVar1 = *(int *)(param_1 + 0x3a0);
      if ((uint *)(param_1 + 0x30) != (uint *)(iVar1 + 0x30)) {
        *(uint *)(param_1 + 0x30) = *(uint *)(iVar1 + 0x30);
        *(uint *)(param_1 + 0x34) = *(uint *)(iVar1 + 0x34);
        *(uint *)(param_1 + 0x38) = *(uint *)(iVar1 + 0x38);
      }
    }
  }
  *(uint *)(param_1 + 0x3b8) = 1;
  *(uint *)(param_1 + 0x55c) = 0;
  *(uint *)(param_1 + 0x568) = 1;
  *(uint *)(param_1 + 0x560) = 0;
  *(uint *)(param_1 + 0x50c) = 0x3f000000;
  *(uint *)(param_1 + 0x510) = 0x3f800000;
  *(uint *)(param_1 + 0x514) = 0x3f000000;
  core_flame_cpp_CFlame_setup_FUN_0048d050(param_1 + 0x3bc);
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
