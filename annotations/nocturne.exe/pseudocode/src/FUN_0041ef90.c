// Name: FUN_0041ef90
// Address: 0041ef90
// Address Range: [[0041ef90, 0041f0a5]]
// Convention: unknown
// Signature: void FUN_0041ef90(int param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ef90(int param_1,uint param_2,float *param_3)

{
  byte local_60 [24];
  float local_48;
  float local_44;
  float local_40;
  byte auStack_3c [12];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_48,param_2);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(param_1,&local_24,param_3);
  if (local_1c * local_40 + local_24 * local_48 + local_20 * local_44 < 0.0) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_60);
    fStack_14 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                                 (local_60,&local_48,&local_24,auStack_3c);
    if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
      fStack_18 = (float)_DAT_0057995d - fStack_14;
      fStack_30 = *param_3 * fStack_18;
      fStack_2c = param_3[1] * fStack_18;
      fStack_28 = param_3[2] * fStack_18;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_30;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_2c;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_28;
      core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(param_1);
      FUN_0041f190(param_1);
      return;
    }
  }
  return;
}
