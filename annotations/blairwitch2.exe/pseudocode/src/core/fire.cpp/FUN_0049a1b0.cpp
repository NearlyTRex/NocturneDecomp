// Name: core_fire.cpp_FUN_0049a1b0
// Address: 0049a1b0
// Address Range: [[0049a1b0, 0049a397]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a1b0(float *param_1,float *param_2,float *param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049a1b0(float *param_1,float *param_2,float *param_3,float param_4)

{
  byte bVar1;
  float afStackY_1048 [1006];
  float min_value;
  float max_value;
  CMatrix3x3f local_88;
  float local_60;
  float local_5c [5];
  CVector3f local_48;
  float local_3c;
  float afStack_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar1 = 0;
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.9,1.0);
  *param_1 = _DAT_005f6500 * local_10;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,19.0);
  max_value = 0.05235988;
  param_1[7] = local_10;
  min_value = -0.05235988;
  local_48.x = *param_3;
  *(float *)((int)&local_48 + (uint)bVar1 * -8 + 4) = param_3[(uint)bVar1 * -2 + 1];
  *(float *)((int)&local_48 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       (param_3 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(min_value,max_value);
  local_48.y = local_10 + local_48.y;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.05235988,0.05235988);
  local_48.x = local_10 + local_48.x;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_88,&local_48);
  local_5c[4] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.1,6.4);
  local_5c[2] = 0.0;
  local_5c[3] = 0.0;
  local_18 = local_5c[4];
  local_10 = local_5c[4];
  core_dirmat_cpp_FUN_00449530(&local_88,local_5c + 2);
  local_60 = local_3c;
  local_5c[(uint)bVar1 * -2] = afStack_38[(uint)bVar1 * -2];
  local_5c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (param_1 + 4 != &local_60) {
    param_1[4] = local_60;
    param_1[5] = local_5c[0];
    param_1[6] = local_5c[1];
  }
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.1);
  local_14 = local_10;
  local_24 = param_1[4] * local_10;
  local_20 = param_1[5] * local_10;
  local_1c = param_1[6] * local_10;
  afStack_38[2] = param_1[4] * local_10;
  afStack_38[(uint)bVar1 * -2 + 3] = afStack_38[(uint)bVar1 * -2 + 6];
  afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  param_1[1] = param_1[1] + afStack_38[2];
  param_1[2] = param_1[2] + afStack_38[3];
  param_1[3] = param_1[3] + local_28;
  param_1[8] = param_4;
  return;
}
