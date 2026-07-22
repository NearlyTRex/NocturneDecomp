// Name: core_fire.cpp_CStake_spawn_FUN_00483320
// Address: 00483320
// Address Range: [[00483320, 004835c6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_spawn_FUN_00483320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_spawn_FUN_00483320(uint *param_1,uint param_2,uint param_3,float *param_4)

{
  int iVar1;
  byte local_b4 [40];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_b4,param_3);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x41200000;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(local_b4,&local_44,&local_38);
  local_14 = (param_4[2] * local_3c + *param_4 * local_44 + param_4[1] * local_40) * 2.0f;
  local_68 = *param_4 * local_14;
  local_64 = param_4[1] * local_14;
  local_60 = param_4[2] * local_14;
  local_20 = local_68 - local_44;
  local_1c = local_64 - local_40;
  local_18 = local_60 - local_3c;
  if (&local_44 != &local_20) {
    local_44 = local_20;
    local_40 = local_1c;
    local_3c = local_18;
  }
  local_50 = -local_44;
  local_4c = -local_40;
  local_48 = -local_3c;
  if (&local_44 != &local_50) {
    local_44 = local_50;
    local_40 = local_4c;
    local_3c = local_48;
  }
  *param_1 = 0;
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(0x1c08d48);
  local_8c = *(float *)(iVar1 + 0x338);
  local_88 = *(float *)(iVar1 + 0x33c);
  local_84 = *(float *)(iVar1 + 0x340);
  local_80 = *(float *)(iVar1 + 0x344);
  local_7c = *(float *)(iVar1 + 0x348);
  local_2c = local_80 - local_8c;
  local_28 = local_7c - local_88;
  local_78 = *(float *)(iVar1 + 0x34c);
  local_24 = local_78 - local_84;
  if (&local_74 != &local_2c) {
    local_74 = local_2c;
    local_70 = local_28;
    local_6c = local_24;
  }
  core_box_cpp_CBox_setupCorners_FUN_0041a6e0(param_1 + 1,param_2,param_3,&local_74,0x40000000);
  local_5c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc116cbe4,0x4116cbe4);
  local_54 = 0;
  local_10 = local_5c;
  local_58 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc116cbe4,0x4116cbe4);
  local_10 = local_58;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40(param_1 + 1,&local_44,&local_5c);
  return;
}
