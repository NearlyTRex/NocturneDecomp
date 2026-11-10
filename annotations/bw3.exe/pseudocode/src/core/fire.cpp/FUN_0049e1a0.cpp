// Name: core_fire.cpp_FUN_0049e1a0
// Address: 0049e1a0
// Address Range: [[0049e1a0, 0049e385]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049e1a0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049e1a0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  byte bVar1;
  float afStackY_1024 [1006];
  float fVar2;
  float max_value;
  CMatrix3x3f local_64;
  CVector3f local_3c;
  float local_30;
  float local_2c [4];
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_5 == 8.40779e-45) {
    param_1[3] = 0x40400000;
  }
  else {
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.0);
    param_1[3] = fVar2 * _DAT_005df900;
  }
  if ((((param_5 == 2.8026e-45) || (param_5 == 5.60519e-45)) || (param_5 == 4.2039e-45)) ||
     ((param_5 == 8.40779e-45 || (param_5 == 9.80909e-45)))) {
    param_1[10] = 1.4013e-45;
  }
  else if (param_5 == 7.00649e-45) {
    param_1[10] = 8.40779e-45;
  }
  else {
    param_1[10] = 2.8026e-44;
  }
  local_14 = (float)((int)param_1[10] + -1);
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,(float)(int)local_14);
  param_1[7] = local_14;
  max_value = 0.05235988;
  fVar2 = -0.05235988;
  local_3c.x = *param_3;
  *(float *)((int)&local_3c + (uint)bVar1 * -8 + 4) = param_3[(uint)bVar1 * -2 + 1];
  *(float *)((int)&local_3c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       (param_3 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar2,max_value);
  local_3c.y = local_14 + local_3c.y;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.05235988,0.05235988);
  local_3c.x = local_14 + local_3c.x;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_64,&local_3c);
  if ((CVector3f *)(param_1 + 4) != &local_3c) {
    ((CVector3f *)(param_1 + 4))->x = local_3c.x;
    param_1[5] = local_3c.y;
    param_1[6] = local_3c.z;
  }
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,0.1);
  local_18 = local_14;
  local_2c[2] = param_1[4] * local_14;
  local_2c[3] = param_1[5] * local_14;
  local_1c = param_1[6] * local_14;
  local_30 = param_1[4] * local_14;
  local_2c[(uint)bVar1 * -2] = local_2c[(uint)bVar1 * -2 + 3];
  local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  param_1[8] = param_4;
  param_1[9] = param_5;
  *param_1 = *param_1 + local_30;
  param_1[1] = param_1[1] + local_2c[0];
  param_1[2] = param_1[2] + local_2c[1];
  return;
}
