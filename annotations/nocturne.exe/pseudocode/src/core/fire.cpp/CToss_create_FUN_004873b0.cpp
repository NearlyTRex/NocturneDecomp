// Name: core_fire.cpp_CToss_create_FUN_004873b0
// Address: 004873b0
// Address Range: [[004873b0, 004874cf]]
// Convention: unknown
// Signature: void core_fire_cpp_CToss_create_FUN_004873b0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void core_fire_cpp_CToss_create_FUN_004873b0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  *param_1 = param_2;
  param_1[0xf7] = param_6;
  param_1[0xf8] = 0;
  if (*param_1 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              (param_1 + 1,"dynamitestick.kfm");
    local_14 = 0x3f800000;
  }
  else {
    PTR_01cc4800 = "..\\core\\fire.cpp";
    INT_01cc4804 = 0xb96;
    core_main_c_FUN_004c8440("CToss::create - invalid toss type.");
  }
  if ((float)param_1[0xf7] <= 0.0) {
    param_1[0xf7] = 0x40a00000;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 1);
  local_2c = *(float *)(iVar1 + 0x344) - *(float *)(iVar1 + 0x338);
  local_28 = *(float *)(iVar1 + 0x348) - *(float *)(iVar1 + 0x33c);
  local_24 = *(float *)(iVar1 + 0x34c) - *(float *)(iVar1 + 0x340);
  core_box_cpp_CBox_setupCorners_FUN_0041a6e0(param_1 + 0x60,param_3,param_4,&local_2c,local_14);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0x4116cbe4;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40(param_1 + 0x60,param_5,&local_20);
  return;
}
