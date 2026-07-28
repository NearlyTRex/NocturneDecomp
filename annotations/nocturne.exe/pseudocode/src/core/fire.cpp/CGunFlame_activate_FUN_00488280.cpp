// Name: core_fire.cpp_CGunFlame_activate_FUN_00488280
// Address: 00488280
// Address Range: [[00488280, 00488421]]
// Convention: unknown
// Signature: void core_fire_cpp_CGunFlame_activate_FUN_00488280(float *param_1,float *param_2,float *param_3,float param_4)

#include "nocturne.h"

void core_fire_cpp_CGunFlame_activate_FUN_00488280(float *param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  CMatrix3x3f local_6c;
  uint local_38;
  uint local_34;
  uint local_30;
  byte local_2c [12];
  CVector3f local_20;
  uint local_10;
  float local_c;
  
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  local_c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f800000);
  *param_1 = 2.0f * local_c;
  local_c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x41980000);
  param_1[7] = local_c;
  local_20.x = *param_3;
  local_20.y = param_3[1];
  local_20.z = param_3[2];
  local_c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbd567750,0x3d567750);
  local_20.y = local_c + local_20.y;
  local_c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbd567750,0x3d567750);
  local_20.x = local_c + local_20.x;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_6c,&local_20);
  local_30 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a33333,0x40cccccd);
  local_38 = 0;
  local_34 = 0;
  local_10 = local_30;
  local_c = (float)local_30;
  pfVar1 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                              (&local_6c,local_2c,&local_38);
  if (param_1 + 4 != pfVar1) {
    param_1[4] = *pfVar1;
    param_1[5] = pfVar1[1];
    param_1[6] = pfVar1[2];
  }
  fVar2 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3dcccccd);
  param_1[1] = param_1[1] + param_1[4] * fVar2;
  param_1[2] = param_1[2] + param_1[5] * fVar2;
  param_1[3] = param_1[3] + param_1[6] * fVar2;
  param_1[8] = param_4;
  return;
}
