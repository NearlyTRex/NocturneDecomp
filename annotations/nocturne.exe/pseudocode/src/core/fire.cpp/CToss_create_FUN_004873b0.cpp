// Name: core_fire.cpp_CToss_create_FUN_004873b0
// Address: 004873b0
// Address Range: [[004873b0, 004874cf]]
// Convention: unknown
// Signature: void core_fire_cpp_CToss_create_FUN_004873b0(int *param_1,int param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,int param_6)

#include "nocturne.h"

void core_fire_cpp_CToss_create_FUN_004873b0(int *param_1,int param_2,CVector3f *param_3,CVector3f *param_4,CVector3f *param_5,int param_6)

{
  CKeyFramedModel *pCVar1;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  *param_1 = param_2;
  param_1[0xf7] = param_6;
  param_1[0xf8] = 0;
  if (*param_1 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)(param_1 + 1),"dynamitestick.kfm");
    local_14 = 1.0;
  }
  else {
    PTR_01cc4800 = "..\\core\\fire.cpp";
    INT_01cc4804 = 0xb96;
    core_main_c_FUN_004c8440("CToss::create - invalid toss type.");
  }
  if ((float)param_1[0xf7] <= 0.0) {
    param_1[0xf7] = 0x40a00000;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  local_2c.x = *(float *)(pCVar1->texture_list[7].textures[1].texture_name + 8) -
               (float)pCVar1->texture_list[7].textures[1].base.count;
  local_2c.y = *(float *)(pCVar1->texture_list[7].textures[1].texture_name + 0xc) -
               *(float *)pCVar1->texture_list[7].textures[1].texture_name;
  local_2c.z = (float)pCVar1->texture_list[7].textures[2].base.type -
               *(float *)(pCVar1->texture_list[7].textures[1].texture_name + 4);
  core_box_cpp_CBox_setupCorners_FUN_0041a6e0
            ((CBox *)(param_1 + 0x60),param_3,param_4,&local_2c,local_14);
  local_20.z = 0.0;
  local_20.y = 0.0;
  local_20.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40((CBox *)(param_1 + 0x60),param_5,&local_20);
  return;
}
